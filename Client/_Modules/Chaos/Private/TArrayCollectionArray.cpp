// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 484

// ~TArrayCollectionArray<Chaos::TVector<float,3>_> @ 14373d750

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<float,3>_>::
~TArrayCollectionArray<Chaos::TVector<float,3>_>
          (TArrayCollectionArray<Chaos::TVector<float,3>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::TVector<double,3>_> @ 14373d770

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>::
~TArrayCollectionArray<Chaos::TVector<double,3>_>
          (TArrayCollectionArray<Chaos::TVector<double,3>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ApplyShrinkPolicy @ 143755080

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<float,3>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::TVector<float,3>_> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143755100

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::TVector<double,3>_> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// MoveToOtherArray @ 14379a860

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<float,3>_>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::TVector<float,3>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  ForAnyElementType FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar7 = (longlong)param_1;
  uVar8 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar5 = uVar8;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = *(longlong *)&this->field_0x8;
  iVar6 = *(int *)(param_2 + 2);
  if (iVar6 == *(int *)&param_2[2].field_0x4) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar6 + 1;
  FVar2.Data = *(FScriptContainerElement **)(param_2 + 1);
  *(undefined8 *)(FVar2.Data + (longlong)iVar6 * 0xc) = *(undefined8 *)(lVar1 + lVar7 * 0xc);
  *(undefined4 *)(FVar2.Data + (longlong)iVar6 * 0xc + 8) = *(undefined4 *)(lVar1 + 8 + lVar7 * 0xc)
  ;
  uVar5 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar5 = uVar8;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar6) {
    iVar6 = 1;
  }
  if (iVar6 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + lVar7 * 0xc),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar6) * 0xc),(longlong)iVar6 * 0xc);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 14379a9e0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::TVector<double,3>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  
  lVar10 = (longlong)param_1;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)&this->field_0x8;
  iVar9 = *(int *)(param_2 + 2);
  if (iVar9 == *(int *)&param_2[2].field_0x4) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar9 + 1;
  puVar1 = (undefined8 *)(lVar3 + lVar10 * 0x18);
  uVar6 = puVar1[1];
  FVar4.Data = *(FScriptContainerElement **)(param_2 + 1);
  pFVar2 = FVar4.Data + (longlong)iVar9 * 0x18;
  *(undefined8 *)pFVar2 = *puVar1;
  *(undefined8 *)(pFVar2 + 8) = uVar6;
  *(undefined8 *)(FVar4.Data + (longlong)iVar9 * 0x18 + 0x10) =
       *(undefined8 *)(lVar3 + 0x10 + lVar10 * 0x18);
  uVar8 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar9) {
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + lVar10 * 0x18),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar9) * 0x18),(longlong)iVar9 * 0x18);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAt @ 1437a2750

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<float,3>_>::RemoveAt
          (TArrayCollectionArray<Chaos::TVector<float,3>_> *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0xc);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 0xc),(longlong)iVar4 * 0xc);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 1437a2810

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>::RemoveAt
          (TArrayCollectionArray<Chaos::TVector<double,3>_> *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x18);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 0x18),(longlong)iVar4 * 0x18);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAtSwap @ 1437a2b50

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<float,3>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::TVector<float,3>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0xc),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar4) * 0xc),(longlong)iVar4 * 0xc);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 1437a2c20

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::TVector<double,3>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x18),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar4) * 0x18),(longlong)iVar4 * 0x18);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// Resize @ 1437a6dd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<float,3>_>::Resize
          (TArrayCollectionArray<Chaos::TVector<float,3>_> *this,int param_1)

{
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1
             ,No);
  return;
}

// Resize @ 1437a6df0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>::Resize
          (TArrayCollectionArray<Chaos::TVector<double,3>_> *this,int param_1)

{
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)&this->field_0x8,
             param_1,No);
  return;
}

// SizeOfElem @ 1437b1580

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<float,3>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::TVector<float,3>_> *this)

{
  return 0xc;
}

// SizeOfElem @ 1437b1590

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::TVector<double,3>_> *this)

{
  return 0x18;
}

// ~TArrayCollectionArray<float> @ 143a38ef0

void __thiscall
Chaos::TArrayCollectionArray<float>::~TArrayCollectionArray<float>
          (TArrayCollectionArray<float> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*> @ 143a38f10

void __thiscall
Chaos::
TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
::
~TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
          (TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
           *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_PEAUFGaussSeidelConstraintHandle___FGaussSeidelWeakConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos___Chaos__6B_
  ;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<UObject_const_*> @ 143a38f30

void __thiscall
Chaos::TArrayCollectionArray<UObject_const_*>::~TArrayCollectionArray<UObject_const_*>
          (TArrayCollectionArray<UObject_const_*> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_PEBVUObject___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::Softs::FPAndInvM> @ 143a38f50

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPAndInvM>::
~TArrayCollectionArray<Chaos::Softs::FPAndInvM>
          (TArrayCollectionArray<Chaos::Softs::FPAndInvM> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_> @ 143a38f70

void __thiscall
Chaos::TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_>::
~TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &___7__TArrayCollectionArray_V__TArray_HV__TSizedDefaultAllocator__0CA______Chaos__6B_;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)&this->field_0x8,*(int *)&this->field_0x10
            );
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_> @ 143a38fb0

void __thiscall
Chaos::TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_>::
~TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  *(undefined ***)this =
       &___7__TArrayCollectionArray_V__TArray_MV__TSizedDefaultAllocator__0CA______Chaos__6B_;
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<float,TSizedDefaultAllocator<32>_> **)&this->field_0x8,
             *(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_> @ 143a38ff0

void __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_>::
~TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_>
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_> *this)

{
  *(undefined ***)this =
       &___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            (*(TRefCountPtr<Chaos::FImplicitObject> **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<Chaos::TRotation<float,3>_> @ 143a39030

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<float,3>_>::
~TArrayCollectionArray<Chaos::TRotation<float,3>_>
          (TArrayCollectionArray<Chaos::TRotation<float,3>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::TRotation<double,3>_> @ 143a39050

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<double,3>_>::
~TArrayCollectionArray<Chaos::TRotation<double,3>_>
          (TArrayCollectionArray<Chaos::TRotation<double,3>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_> @ 143a39070

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_>::
~TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_>
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &___7__TArrayCollectionArray_V__TSerializablePtr_VFImplicitObject_Chaos___Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_> @ 143a39090

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>::
~TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>
          (TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_VFImplicitObject_Chaos__U__TDefaultDelete_VFImplicitObject_Chaos_______Chaos__6B_
  ;
  DestructItems<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,int>
            (*(TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> **)
              &this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<bool> @ 143a390d0

void __thiscall
Chaos::TArrayCollectionArray<bool>::~TArrayCollectionArray<bool>(TArrayCollectionArray<bool> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ApplyShrinkPolicy @ 143a50c30

void __thiscall
Chaos::TArrayCollectionArray<float>::ApplyShrinkPolicy
          (TArrayCollectionArray<float> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143a50cb0

void __thiscall
Chaos::
TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
::ApplyShrinkPolicy(TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
                    *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143a50d30

void __thiscall
Chaos::TArrayCollectionArray<UObject_const_*>::ApplyShrinkPolicy
          (TArrayCollectionArray<UObject_const_*> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143a50db0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPAndInvM>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::Softs::FPAndInvM> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143a50e30

void __thiscall
Chaos::TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_> *this,float param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143a50eb0

void __thiscall
Chaos::TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_> *this,float param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143a50f30

void __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_> *this,float param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143a50fb0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<float,3>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::TRotation<float,3>_> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,
                 (int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143a51030

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<double,3>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::TRotation<double,3>_> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,
                 (int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143a510b0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_> *this,
          float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143a51130

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>::
ApplyShrinkPolicy(TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>
                  *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143a511b0

void __thiscall
Chaos::TArrayCollectionArray<bool>::ApplyShrinkPolicy
          (TArrayCollectionArray<bool> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// MoveToOtherArray @ 143a86490

void __thiscall
Chaos::TArrayCollectionArray<float>::MoveToOtherArray
          (TArrayCollectionArray<float> *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined4 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 4) =
       *(undefined4 *)(lVar1 + (longlong)param_1 * 4);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 4),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 4),(longlong)iVar5 << 2);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143a865e0

void __thiscall
Chaos::
TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
::MoveToOtherArray(TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
                   *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) =
       *(undefined8 *)(lVar1 + (longlong)param_1 * 8);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 8),(longlong)iVar5 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143a86730

void __thiscall
Chaos::TArrayCollectionArray<UObject_const_*>::MoveToOtherArray
          (TArrayCollectionArray<UObject_const_*> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) =
       *(undefined8 *)(lVar1 + (longlong)param_1 * 8);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 8),(longlong)iVar5 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143a86880

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPAndInvM>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::Softs::FPAndInvM> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)&this->field_0x8;
  iVar8 = *(int *)(param_2 + 2);
  if (iVar8 == *(int *)&param_2[2].field_0x4) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar8 + 1;
  puVar1 = (undefined8 *)(lVar3 + (longlong)param_1 * 0x10);
  uVar5 = puVar1[1];
  pFVar2 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar2 = *puVar1;
  *(undefined8 *)(pFVar2 + 8) = uVar5;
  uVar7 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x10),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar8) * 0x10 +
                    *(longlong *)&this->field_0x8),(longlong)iVar8 << 4);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143a869e0

void __thiscall
Chaos::TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_>::MoveToOtherArray
          (TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  uVar3 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = *puVar6;
  *puVar6 = 0;
  *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(puVar6 + 1);
  *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
  puVar6[1] = 0;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143a86b30

void __thiscall
Chaos::TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_>::MoveToOtherArray
          (TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  uVar3 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = *puVar6;
  *puVar6 = 0;
  *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(puVar6 + 1);
  *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
  puVar6[1] = 0;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143a86c80

void __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_>::MoveToOtherArray
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  ForAnyElementType FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
  iVar6 = *(int *)(param_2 + 2);
  if (iVar6 == *(int *)&param_2[2].field_0x4) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar6 + 1;
  FVar2.Data = *(FScriptContainerElement **)(param_2 + 1);
  *(undefined8 *)(FVar2.Data + (longlong)iVar6 * 8) = 0;
  *(undefined8 *)(FVar2.Data + (longlong)iVar6 * 8) = *puVar1;
  *puVar1 = 0;
  uVar5 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143a86dc0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<float,3>_>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::TRotation<float,3>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)&this->field_0x8;
  iVar8 = *(int *)(param_2 + 2);
  if (iVar8 == *(int *)&param_2[2].field_0x4) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1010,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar8 + 1;
  puVar1 = (undefined8 *)(lVar3 + (longlong)param_1 * 0x10);
  uVar5 = puVar1[1];
  pFVar2 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar2 = *puVar1;
  *(undefined8 *)(pFVar2 + 8) = uVar5;
  uVar7 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x10),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar8) * 0x10 +
                    *(longlong *)&this->field_0x8),(longlong)iVar8 << 4);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143a86f20

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<double,3>_>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::TRotation<double,3>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)&this->field_0x8;
  iVar9 = *(int *)(param_2 + 2);
  lVar10 = (longlong)param_1 * 0x20;
  if (iVar9 == *(int *)&param_2[2].field_0x4) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1020,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar9 + 1;
  puVar1 = (undefined8 *)(lVar3 + lVar10);
  uVar6 = puVar1[1];
  FVar4.Data = *(FScriptContainerElement **)(param_2 + 1);
  pFVar2 = FVar4.Data + (longlong)iVar9 * 0x20;
  *(undefined8 *)pFVar2 = *puVar1;
  *(undefined8 *)(pFVar2 + 8) = uVar6;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar10);
  uVar6 = puVar1[1];
  pFVar2 = FVar4.Data + (longlong)iVar9 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = *puVar1;
  *(undefined8 *)(pFVar2 + 8) = uVar6;
  uVar8 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar9) {
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    memmove((void *)(lVar10 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar9) * 0x20 +
                    *(longlong *)&this->field_0x8),(longlong)iVar9 << 5);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143a87090

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_> *this,int param_1
          ,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) =
       *(undefined8 *)(lVar1 + (longlong)param_1 * 8);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 8),(longlong)iVar5 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143a871e0

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>::
MoveToOtherArray(TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>
                 *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
  iVar5 = *(int *)(param_2 + 2);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) = *puVar1;
  *puVar1 = 0;
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143a87310

void __thiscall
Chaos::TArrayCollectionArray<bool>::MoveToOtherArray
          (TArrayCollectionArray<bool> *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  (*(FScriptContainerElement **)(param_2 + 1))[iVar5] =
       *(FScriptContainerElement *)(param_1 + lVar1);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar5) + *(longlong *)&this->field_0x8),
            (longlong)iVar5);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAt @ 143a8b790

void __thiscall
Chaos::TArrayCollectionArray<float>::RemoveAt
          (TArrayCollectionArray<float> *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 4);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 4),(longlong)iVar4 << 2);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143a8b840

void __thiscall
Chaos::
TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
::RemoveAt(TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
           *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 8),(longlong)iVar4 << 3);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143a8b8f0

void __thiscall
Chaos::TArrayCollectionArray<UObject_const_*>::RemoveAt
          (TArrayCollectionArray<UObject_const_*> *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 8),(longlong)iVar4 << 3);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143a8b9a0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPAndInvM>::RemoveAt
          (TArrayCollectionArray<Chaos::Softs::FPAndInvM> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x10 + (longlong)_Dst),(longlong)iVar4 << 4);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143a8ba60

void __thiscall
Chaos::TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_>::RemoveAt
          (TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
               &this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143a8bb00

void __thiscall
Chaos::TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_>::RemoveAt
          (TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
               &this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143a8bba0

void __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_>::RemoveAt
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_> *this,int param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *)
               &this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143a8bc40

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<float,3>_>::RemoveAt
          (TArrayCollectionArray<Chaos::TRotation<float,3>_> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x10 + (longlong)_Dst),(longlong)iVar4 << 4);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143a8bd00

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<double,3>_>::RemoveAt
          (TArrayCollectionArray<Chaos::TRotation<double,3>_> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x20 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x20 + (longlong)_Dst),(longlong)iVar4 << 5);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143a8bdc0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_>::RemoveAt
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_> *this,int param_1
          ,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 8),(longlong)iVar4 << 3);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143a8be70

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>::
RemoveAt(TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>
         *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143a8bf10

void __thiscall
Chaos::TArrayCollectionArray<bool>::RemoveAt
          (TArrayCollectionArray<bool> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2),(longlong)iVar4);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAtSwap @ 143a8c200

void __thiscall
Chaos::TArrayCollectionArray<float>::RemoveAtSwap(TArrayCollectionArray<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 4),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 4),(longlong)iVar3 << 2);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143a8c2c0

void __thiscall
Chaos::
TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
::RemoveAtSwap(TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
               *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 8),(longlong)iVar3 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143a8c380

void __thiscall
Chaos::TArrayCollectionArray<UObject_const_*>::RemoveAtSwap
          (TArrayCollectionArray<UObject_const_*> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 8),(longlong)iVar3 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143a8c440

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPAndInvM>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::Softs::FPAndInvM> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) * 0x10 +
                    *(longlong *)&this->field_0x8),(longlong)iVar3 << 4);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143a8c510

void __thiscall
Chaos::TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_>::RemoveAtSwap
          (TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143a8c5a0

void __thiscall
Chaos::TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_>::RemoveAtSwap
          (TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143a8c630

void __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_>::RemoveAtSwap
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143a8c6c0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<float,3>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::TRotation<float,3>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) * 0x10 +
                    *(longlong *)&this->field_0x8),(longlong)iVar3 << 4);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143a8c790

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<double,3>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::TRotation<double,3>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)((longlong)param_1 * 0x20 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) * 0x20 +
                    *(longlong *)&this->field_0x8),(longlong)iVar3 << 5);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143a8c860

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_> *this,int param_1
          )

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 8),(longlong)iVar3 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143a8c920

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>::
RemoveAtSwap(TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143a8c9b0

void __thiscall
Chaos::TArrayCollectionArray<bool>::RemoveAtSwap(TArrayCollectionArray<bool> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) + *(longlong *)&this->field_0x8),
            (longlong)iVar3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// Resize @ 143a904c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<float>::Resize(TArrayCollectionArray<float> *this,int param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1,No);
  return;
}

// Resize @ 143a904e0

void __thiscall
Chaos::
TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
::Resize(TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
         *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    memset((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 8);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar6 << 3);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143a90600

void __thiscall
Chaos::TArrayCollectionArray<UObject_const_*>::Resize
          (TArrayCollectionArray<UObject_const_*> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    memset((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 8);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar6 << 3);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143a90720

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPAndInvM>::Resize
          (TArrayCollectionArray<Chaos::Softs::FPAndInvM> *this,int param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  
  iVar4 = *(int *)&this->field_0x10;
  puVar1 = &this->field_0x10;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,param_1 - iVar4,(ForAnyElementType *)&this->field_0x8,(int *)puVar1,
               (int *)&this->field_0x14);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar4) {
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x10);
      iVar4 = (*(int *)puVar1 - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar5 * 0x10),(longlong)iVar4 << 4);
      }
      *(uint *)puVar1 = *(int *)puVar1 - uVar5;
    }
  }
  return;
}

// Resize @ 143a90830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_>::Resize
          (TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,No);
  return;
}

// Resize @ 143a90850

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_>::Resize
          (TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,No);
  return;
}

// Resize @ 143a90870

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_>::Resize
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_> *this,int param_1)

{
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,No);
  return;
}

// Resize @ 143a90890

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<float,3>_>::Resize
          (TArrayCollectionArray<Chaos::TRotation<float,3>_> *this,int param_1)

{
  TArray<Chaos::TRotation<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::TRotation<float,3>,TSizedDefaultAllocator<32>_> *)&this->field_0x8,
             param_1,No);
  return;
}

// Resize @ 143a908b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<double,3>_>::Resize
          (TArrayCollectionArray<Chaos::TRotation<double,3>_> *this,int param_1)

{
  TArray<Chaos::TRotation<double,3>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::TRotation<double,3>,TSizedDefaultAllocator<32>_> *)&this->field_0x8,
             param_1,No);
  return;
}

// Resize @ 143a908d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_>::Resize
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_> *this,int param_1
          )

{
  TArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,No);
  return;
}

// Resize @ 143a908f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>::
Resize(TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>
       *this,int param_1)

{
  TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
  ::SetNum((TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
            *)&this->field_0x8,param_1,No);
  return;
}

// Resize @ 143a90910

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<bool>::Resize(TArrayCollectionArray<bool> *this,int param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1,No);
  return;
}

// SizeOfElem @ 143a93e20

ulong64 __thiscall
Chaos::TArrayCollectionArray<float>::SizeOfElem(TArrayCollectionArray<float> *this)

{
  return 4;
}

// SizeOfElem @ 143a93e30

ulong64 __thiscall
Chaos::
TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
::SizeOfElem(TArrayCollectionArray<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*>
             *this)

{
  return 8;
}

// SizeOfElem @ 143a93e40

ulong64 __thiscall
Chaos::TArrayCollectionArray<UObject_const_*>::SizeOfElem
          (TArrayCollectionArray<UObject_const_*> *this)

{
  return 8;
}

// SizeOfElem @ 143a93e50

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPAndInvM>::SizeOfElem
          (TArrayCollectionArray<Chaos::Softs::FPAndInvM> *this)

{
  return 0x10;
}

// SizeOfElem @ 143a93e60

ulong64 __thiscall
Chaos::TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_>::SizeOfElem
          (TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// SizeOfElem @ 143a93e70

ulong64 __thiscall
Chaos::TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_>::SizeOfElem
          (TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  return 0x10;
}

// SizeOfElem @ 143a93e80

ulong64 __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_>::SizeOfElem
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObject>_> *this)

{
  return 8;
}

// SizeOfElem @ 143a93e90

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<float,3>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::TRotation<float,3>_> *this)

{
  return 0x10;
}

// SizeOfElem @ 143a93ea0

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::TRotation<double,3>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::TRotation<double,3>_> *this)

{
  return 0x20;
}

// SizeOfElem @ 143a93eb0

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FImplicitObject>_> *this)

{
  return 8;
}

// SizeOfElem @ 143a93ec0

ulong64 __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>::
SizeOfElem(TArrayCollectionArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>_>
           *this)

{
  return 8;
}

// SizeOfElem @ 143a93ed0

ulong64 __thiscall Chaos::TArrayCollectionArray<bool>::SizeOfElem(TArrayCollectionArray<bool> *this)

{
  return 1;
}

// ~TArrayCollectionArray<signed_char> @ 143afac60

void __thiscall
Chaos::TArrayCollectionArray<signed_char>::~TArrayCollectionArray<signed_char>
          (TArrayCollectionArray<signed_char> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_C_Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<int> @ 143afac80

void __thiscall
Chaos::TArrayCollectionArray<int>::~TArrayCollectionArray<int>(TArrayCollectionArray<int> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_H_Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<double> @ 143afaca0

void __thiscall
Chaos::TArrayCollectionArray<double>::~TArrayCollectionArray<double>
          (TArrayCollectionArray<double> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_N_Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*> @ 143afacc0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*>::
~TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*>
          (TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &___7__TArrayCollectionArray_PEAV__TGeometryParticle_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*> @ 143aface0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*>::
~TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*>
          (TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &___7__TArrayCollectionArray_PEAVFPBDIslandParticle_Private_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<IPhysicsProxyBase_*> @ 143afad00

void __thiscall
Chaos::TArrayCollectionArray<IPhysicsProxyBase_*>::~TArrayCollectionArray<IPhysicsProxyBase_*>
          (TArrayCollectionArray<IPhysicsProxyBase_*> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_PEAVIPhysicsProxyBase___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_> @ 143afad20

void __thiscall
Chaos::TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_>::
~TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_>
          (TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_> *this)

{
  *(undefined ***)this =
       &___7__TArrayCollectionArray_U__TPimplPtr_VFConvexOptimizer_Private_Chaos___0A____Chaos__6B_;
  DestructItems<TPimplPtr<Chaos::Private::FConvexOptimizer,0>,int>
            (*(TPimplPtr<Chaos::Private::FConvexOptimizer,0> **)&this->field_0x8,
             *(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<Chaos::ClusterId> @ 143afad60

void __thiscall
Chaos::TArrayCollectionArray<Chaos::ClusterId>::~TArrayCollectionArray<Chaos::ClusterId>
          (TArrayCollectionArray<Chaos::ClusterId> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_UClusterId_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::FParticleID> @ 143afad80

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleID>::~TArrayCollectionArray<Chaos::FParticleID>
          (TArrayCollectionArray<Chaos::FParticleID> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_UFParticleID_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::FRigidParticleCoreData> @ 143afada0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidParticleCoreData>::
~TArrayCollectionArray<Chaos::FRigidParticleCoreData>
          (TArrayCollectionArray<Chaos::FRigidParticleCoreData> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_UFRigidParticleCoreData_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::FSpatialAccelerationIdx> @ 143afadc0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FSpatialAccelerationIdx>::
~TArrayCollectionArray<Chaos::FSpatialAccelerationIdx>
          (TArrayCollectionArray<Chaos::FSpatialAccelerationIdx> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_UFSpatialAccelerationIdx_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::FSyncState> @ 143afade0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FSyncState>::~TArrayCollectionArray<Chaos::FSyncState>
          (TArrayCollectionArray<Chaos::FSyncState> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_UFSyncState_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::FUniqueIdx> @ 143afae00

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FUniqueIdx>::~TArrayCollectionArray<Chaos::FUniqueIdx>
          (TArrayCollectionArray<Chaos::FUniqueIdx> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_UFUniqueIdx_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::TAABB<float,3>_> @ 143afae20

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<float,3>_>::~TArrayCollectionArray<Chaos::TAABB<float,3>_>
          (TArrayCollectionArray<Chaos::TAABB<float,3>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_V__TAABB_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::TAABB<double,3>_> @ 143afae40

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<double,3>_>::
~TArrayCollectionArray<Chaos::TAABB<double,3>_>
          (TArrayCollectionArray<Chaos::TAABB<double,3>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_V__TAABB_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_> @ 143afae60

void __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>::
~TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>
          (TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TArray_PEAVFConstraintHandle_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> **)&this->field_0x8,
             *(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_> @ 143afaea0

void __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
::~TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
          (TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TArray_U__TConnectivityEdge_N_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> **)
              &this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_> @ 143afaee0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
::
~TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TUniquePtr_VFShapeInstance_Chaos__U__TDefaultDelete_VFShapeInstance_Chaos______V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA________Chaos__6B_
  ;
  DestructItems<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,int>
            (*(TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_> @ 143afaf20

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_>::
~TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_>
          (TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &___7__TArrayCollectionArray_V__TIterationSettings_C_Private_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_> @ 143afaf40

void __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_>::
~TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_>
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_> *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObjectUnionClustered_Chaos_____Chaos__6B_
  ;
  DestructItems<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>,int>
            (*(TRefCountPtr<Chaos::FImplicitObjectUnionClustered> **)&this->field_0x8,
             *(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<Chaos::TRigidTransform<double,3>_> @ 143afaf80

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<double,3>_>::
~TArrayCollectionArray<Chaos::TRigidTransform<double,3>_>
          (TArrayCollectionArray<Chaos::TRigidTransform<double,3>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_V__TRigidTransform_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_> @ 143afafa0

void __thiscall
Chaos::
TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>::
~TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
           *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos___Chaos___Chaos__6B_
  ;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_> @ 143afafc0

void __thiscall
Chaos::
TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
::
~TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
          (TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TSet_PEAVIPhysicsProxyBase__U__DefaultKeyFuncs_PEAVIPhysicsProxyBase___0A___VFDefaultSetAllocator_____Chaos__6B_
  ;
  DestructItems<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>,int>
            (*(TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
               **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<TSharedPtr<FString,1>_> @ 143afb000

void __thiscall
Chaos::TArrayCollectionArray<TSharedPtr<FString,1>_>::~TArrayCollectionArray<TSharedPtr<FString,1>_>
          (TArrayCollectionArray<TSharedPtr<FString,1>_> *this)

{
  *(undefined ***)this = &___7__TArrayCollectionArray_V__TSharedPtr_VFString___00___Chaos__6B_;
  DestructItems<TSharedPtr<FString,1>,int>
            (*(TSharedPtr<FString,1> **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_> @ 143afb040

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>::
~TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
          (TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_VFBVHParticles_Chaos__U__TDefaultDelete_VFBVHParticles_Chaos_______Chaos__6B_
  ;
  DestructItems<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,int>
            (*(TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> **)
              &this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<Chaos::FKinematicTarget> @ 143afb080

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FKinematicTarget>::
~TArrayCollectionArray<Chaos::FKinematicTarget>
          (TArrayCollectionArray<Chaos::FKinematicTarget> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_VFKinematicTarget_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::FParticleCollisions> @ 143afb0a0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleCollisions>::
~TArrayCollectionArray<Chaos::FParticleCollisions>
          (TArrayCollectionArray<Chaos::FParticleCollisions> *this)

{
  *(undefined ***)this = &___7__TArrayCollectionArray_VFParticleCollisions_Chaos___Chaos__6B_;
  DestructItems<Chaos::FParticleCollisions,int>
            (*(FParticleCollisions **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<Chaos::FRigidClusteredFlags> @ 143afb0e0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidClusteredFlags>::
~TArrayCollectionArray<Chaos::FRigidClusteredFlags>
          (TArrayCollectionArray<Chaos::FRigidClusteredFlags> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_VFRigidClusteredFlags_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::FWeakParticleHandle> @ 143afb100

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FWeakParticleHandle>::
~TArrayCollectionArray<Chaos::FWeakParticleHandle>
          (TArrayCollectionArray<Chaos::FWeakParticleHandle> *this)

{
  *(undefined ***)this = &___7__TArrayCollectionArray_VFWeakParticleHandle_Chaos___Chaos__6B_;
  DestructItems<Chaos::FWeakParticleHandle,int>
            (*(FWeakParticleHandle **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<enum_Chaos::EGeometryParticleListMask> @ 143afb140

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EGeometryParticleListMask>::
~TArrayCollectionArray<enum_Chaos::EGeometryParticleListMask>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_W4EGeometryParticleListMask_Chaos___Chaos__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<enum_Chaos::EObjectStateType> @ 143afb160

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EObjectStateType>::
~TArrayCollectionArray<enum_Chaos::EObjectStateType>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_W4EObjectStateType_Chaos___Chaos__6B_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<enum_Chaos::EResimType> @ 143afb180

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EResimType>::~TArrayCollectionArray<enum_Chaos::EResimType>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_W4EResimType_Chaos___Chaos__6B_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<enum_Chaos::ESleepType> @ 143afb1a0

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::ESleepType>::~TArrayCollectionArray<enum_Chaos::ESleepType>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_W4ESleepType_Chaos___Chaos__6B_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ApplyShrinkPolicy @ 143b15b90

void __thiscall
Chaos::TArrayCollectionArray<signed_char>::ApplyShrinkPolicy
          (TArrayCollectionArray<signed_char> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b15c10

void __thiscall
Chaos::TArrayCollectionArray<int>::ApplyShrinkPolicy
          (TArrayCollectionArray<int> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b15c90

void __thiscall
Chaos::TArrayCollectionArray<double>::ApplyShrinkPolicy
          (TArrayCollectionArray<double> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b15d10

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*> *this,float param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b15d90

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*> *this,float param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b15e10

void __thiscall
Chaos::TArrayCollectionArray<IPhysicsProxyBase_*>::ApplyShrinkPolicy
          (TArrayCollectionArray<IPhysicsProxyBase_*> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b15e90

void __thiscall
Chaos::TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_> *this,float param_1
          ,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b15f10

void __thiscall
Chaos::TArrayCollectionArray<Chaos::ClusterId>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::ClusterId> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b15f90

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleID>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::FParticleID> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16010

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidParticleCoreData>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::FRigidParticleCoreData> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16090

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FSpatialAccelerationIdx>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::FSpatialAccelerationIdx> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16110

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FSyncState>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::FSyncState> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16190

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FUniqueIdx>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::FUniqueIdx> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16210

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<float,3>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::TAABB<float,3>_> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16290

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<double,3>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::TAABB<double,3>_> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16310

void __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>::
ApplyShrinkPolicy(TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>
                  *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16390

void __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
::ApplyShrinkPolicy(TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
                    *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16410

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
::ApplyShrinkPolicy(TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                    *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16490

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_> *this,
          float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (3,1,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16510

void __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_> *this,
          float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16590

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<double,3>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::TRigidTransform<double,3>_> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,
                 (int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16610

void __thiscall
Chaos::
TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>::
ApplyShrinkPolicy(TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
                  *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16690

void __thiscall
Chaos::
TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
::ApplyShrinkPolicy(TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
                    *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16710

void __thiscall
Chaos::TArrayCollectionArray<TSharedPtr<FString,1>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<TSharedPtr<FString,1>_> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16790

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>::
ApplyShrinkPolicy(TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
                  *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16810

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FKinematicTarget>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::FKinematicTarget> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,
                 (int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16890

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleCollisions>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::FParticleCollisions> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16910

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidClusteredFlags>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::FRigidClusteredFlags> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16990

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FWeakParticleHandle>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::FWeakParticleHandle> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16a10

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EGeometryParticleListMask>::ApplyShrinkPolicy
          (void *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)this + 0x10);
  iVar3 = *(int *)((longlong)this + 0x14) - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)((longlong)this + 0x14) != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,(ForAnyElementType *)((longlong)this + 8),iVar1,
                 (int *)((longlong)this + 0x14));
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16a90

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EObjectStateType>::ApplyShrinkPolicy
          (void *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)this + 0x10);
  iVar3 = *(int *)((longlong)this + 0x14) - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)((longlong)this + 0x14) != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,(ForAnyElementType *)((longlong)this + 8),iVar1,
                 (int *)((longlong)this + 0x14));
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16b10

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EResimType>::ApplyShrinkPolicy
          (void *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)this + 0x10);
  iVar3 = *(int *)((longlong)this + 0x14) - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)((longlong)this + 0x14) != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,(ForAnyElementType *)((longlong)this + 8),iVar1,
                 (int *)((longlong)this + 0x14));
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143b16b90

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::ESleepType>::ApplyShrinkPolicy
          (void *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)this + 0x10);
  iVar3 = *(int *)((longlong)this + 0x14) - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)((longlong)this + 0x14) != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,(ForAnyElementType *)((longlong)this + 8),iVar1,
                 (int *)((longlong)this + 0x14));
    }
  }
  return;
}

// MoveToOtherArray @ 143b27140

void __thiscall
Chaos::TArrayCollectionArray<signed_char>::MoveToOtherArray
          (TArrayCollectionArray<signed_char> *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  (*(FScriptContainerElement **)(param_2 + 1))[iVar5] =
       *(FScriptContainerElement *)(param_1 + lVar1);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar5) + *(longlong *)&this->field_0x8),
            (longlong)iVar5);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b27290

void __thiscall
Chaos::TArrayCollectionArray<int>::MoveToOtherArray
          (TArrayCollectionArray<int> *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined4 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 4) =
       *(undefined4 *)(lVar1 + (longlong)param_1 * 4);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 4),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 4),(longlong)iVar5 << 2);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b273e0

void __thiscall
Chaos::TArrayCollectionArray<double>::MoveToOtherArray
          (TArrayCollectionArray<double> *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) =
       *(undefined8 *)(lVar1 + (longlong)param_1 * 8);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 8),(longlong)iVar5 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b27530

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) =
       *(undefined8 *)(lVar1 + (longlong)param_1 * 8);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 8),(longlong)iVar5 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b27680

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) =
       *(undefined8 *)(lVar1 + (longlong)param_1 * 8);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 8),(longlong)iVar5 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b277d0

void __thiscall
Chaos::TArrayCollectionArray<IPhysicsProxyBase_*>::MoveToOtherArray
          (TArrayCollectionArray<IPhysicsProxyBase_*> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) =
       *(undefined8 *)(lVar1 + (longlong)param_1 * 8);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 8),(longlong)iVar5 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b27920

void __thiscall
Chaos::TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_>::MoveToOtherArray
          (TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
  iVar5 = *(int *)(param_2 + 2);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) = *puVar1;
  *puVar1 = 0;
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>,TSizedDefaultAllocator<32>_>::
  RemoveAtSwapImpl((TArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143b27a50

void __thiscall
Chaos::TArrayCollectionArray<Chaos::ClusterId>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::ClusterId> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)&this->field_0x8;
  iVar8 = *(int *)(param_2 + 2);
  if (iVar8 == *(int *)&param_2[2].field_0x4) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar8 + 1;
  puVar1 = (undefined8 *)(lVar3 + (longlong)param_1 * 0x10);
  uVar5 = puVar1[1];
  pFVar2 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar2 = *puVar1;
  *(undefined8 *)(pFVar2 + 8) = uVar5;
  uVar7 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x10),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar8) * 0x10 +
                    *(longlong *)&this->field_0x8),(longlong)iVar8 << 4);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b27bb0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleID>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::FParticleID> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) =
       *(undefined8 *)(lVar1 + (longlong)param_1 * 8);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 8),(longlong)iVar5 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b27d00

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidParticleCoreData>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::FRigidParticleCoreData> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)&this->field_0x8;
  iVar8 = *(int *)(param_2 + 2);
  if (iVar8 == *(int *)&param_2[2].field_0x4) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar8 + 1;
  puVar1 = (undefined8 *)(lVar3 + (longlong)param_1 * 0x10);
  uVar5 = puVar1[1];
  pFVar2 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar2 = *puVar1;
  *(undefined8 *)(pFVar2 + 8) = uVar5;
  uVar7 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x10),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar8) * 0x10 +
                    *(longlong *)&this->field_0x8),(longlong)iVar8 << 4);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b27e60

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FSpatialAccelerationIdx>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::FSpatialAccelerationIdx> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined2 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 2) =
       *(undefined2 *)(lVar1 + (longlong)param_1 * 2);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 2),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 2),(longlong)iVar5 * 2);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b27fb0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FSyncState>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::FSyncState> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  (*(FScriptContainerElement **)(param_2 + 1))[iVar5] =
       *(FScriptContainerElement *)(param_1 + lVar1);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar5) + *(longlong *)&this->field_0x8),
            (longlong)iVar5);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b28100

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FUniqueIdx>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::FUniqueIdx> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined4 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 4) =
       *(undefined4 *)(lVar1 + (longlong)param_1 * 4);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 4),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 4),(longlong)iVar5 << 2);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b28250

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<float,3>_>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::TAABB<float,3>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  ForAnyElementType FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  uVar8 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar8;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  puVar7 = (undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x18);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  lVar6 = (longlong)iVar5;
  *(int *)(param_2 + 2) = iVar5 + 1;
  FVar1.Data = *(FScriptContainerElement **)(param_2 + 1);
  *(undefined8 *)(FVar1.Data + lVar6 * 0x18) = *puVar7;
  *(undefined4 *)(FVar1.Data + lVar6 * 0x18 + 8) = *(undefined4 *)(puVar7 + 1);
  *(undefined8 *)(FVar1.Data + lVar6 * 0x18 + 0xc) = *(undefined8 *)((longlong)puVar7 + 0xc);
  *(undefined4 *)(FVar1.Data + lVar6 * 0x18 + 0x14) = *(undefined4 *)((longlong)puVar7 + 0x14);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar8;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)((longlong)param_1 * 0x18 + *(longlong *)&this->field_0x8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 0x18),(longlong)iVar5 * 0x18);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b283e0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<double,3>_>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::TAABB<double,3>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  ForAnyElementType FVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  uVar5 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = *(int *)(param_2 + 2);
  puVar8 = (undefined8 *)((longlong)param_1 * 0x30 + *(longlong *)&this->field_0x8);
  if (iVar6 == *(int *)&param_2[2].field_0x4) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  lVar7 = (longlong)iVar6;
  *(int *)(param_2 + 2) = iVar6 + 1;
  uVar3 = puVar8[1];
  FVar1.Data = *(FScriptContainerElement **)(param_2 + 1);
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30) = *puVar8;
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 8) = uVar3;
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 0x10) = puVar8[2];
  uVar3 = puVar8[4];
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 0x18) = puVar8[3];
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 0x18 + 8) = uVar3;
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 0x28) = puVar8[5];
  uVar5 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1,
             1);
  return;
}

// MoveToOtherArray @ 143b28540

void __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>::
MoveToOtherArray(TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>
                 *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  uVar3 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = *puVar6;
  *puVar6 = 0;
  *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(puVar6 + 1);
  *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
  puVar6[1] = 0;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143b28690

void __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
::MoveToOtherArray(TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  uVar3 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = *puVar6;
  *puVar6 = 0;
  *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(puVar6 + 1);
  *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
  puVar6[1] = 0;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143b287e0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
::MoveToOtherArray(TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                   *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x18);
  iVar7 = *(int *)(param_2 + 2);
  if (iVar7 == *(int *)&param_2[2].field_0x4) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar7 + 1;
  FVar3.Data = *(FScriptContainerElement **)(param_2 + 1);
  *(undefined8 *)(FVar3.Data + (longlong)iVar7 * 0x18 + 8) = 0;
  pFVar2 = FVar3.Data + (longlong)iVar7 * 0x18;
  if (puVar1[1] == 0) {
    *(undefined8 *)pFVar2 = *puVar1;
  }
  *(undefined8 *)(pFVar2 + 8) = puVar1[1];
  puVar1[1] = 0;
  *(undefined4 *)(pFVar2 + 0x10) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)(pFVar2 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 1;
  uVar6 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143b28940

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_> *this,int param_1
          ,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  
  uVar8 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar5 = uVar8;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)&this->field_0x8;
  iVar6 = *(int *)(param_2 + 2);
  lVar3 = (longlong)param_1 * 3;
  if (iVar6 == *(int *)&param_2[2].field_0x4) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x103,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar6 + 1;
  pFVar7 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar6 * 3;
  *(undefined2 *)pFVar7 = *(undefined2 *)(lVar1 + lVar3);
  pFVar7[2] = *(FScriptContainerElement *)(lVar1 + 2 + lVar3);
  uVar5 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar5 = uVar8;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar6) {
    iVar6 = 1;
  }
  if (iVar6 != 0) {
    memmove((void *)(lVar3 + *(longlong *)&this->field_0x8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar6) * 3),(longlong)iVar6 * 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b28ab0

void __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_>::MoveToOtherArray
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_> *this,
          int param_1,TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  ForAnyElementType FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
  iVar6 = *(int *)(param_2 + 2);
  if (iVar6 == *(int *)&param_2[2].field_0x4) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar6 + 1;
  FVar2.Data = *(FScriptContainerElement **)(param_2 + 1);
  *(undefined8 *)(FVar2.Data + (longlong)iVar6 * 8) = 0;
  *(undefined8 *)(FVar2.Data + (longlong)iVar6 * 8) = *puVar1;
  *puVar1 = 0;
  uVar5 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>,TSizedDefaultAllocator<32>_>::
  RemoveAtSwapImpl((TArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143b28bf0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<double,3>_>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::TRigidTransform<double,3>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  ForAnyElementType FVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  uVar5 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = *(int *)(param_2 + 2);
  puVar8 = (undefined8 *)((longlong)param_1 * 0x60 + *(longlong *)&this->field_0x8);
  if (iVar6 == *(int *)&param_2[2].field_0x4) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar6 + 1;
  uVar3 = puVar8[1];
  FVar1.Data = *(FScriptContainerElement **)(param_2 + 1);
  lVar7 = (longlong)iVar6 * 0x60;
  *(undefined8 *)(FVar1.Data + lVar7) = *puVar8;
  *(undefined8 *)(FVar1.Data + lVar7 + 8) = uVar3;
  uVar3 = puVar8[3];
  *(undefined8 *)(FVar1.Data + lVar7 + 0x10) = puVar8[2];
  *(undefined8 *)(FVar1.Data + lVar7 + 0x10 + 8) = uVar3;
  uVar3 = puVar8[5];
  *(undefined8 *)(FVar1.Data + lVar7 + 0x20) = puVar8[4];
  *(undefined8 *)(FVar1.Data + lVar7 + 0x20 + 8) = uVar3;
  uVar3 = puVar8[7];
  *(undefined8 *)(FVar1.Data + lVar7 + 0x30) = puVar8[6];
  *(undefined8 *)(FVar1.Data + lVar7 + 0x30 + 8) = uVar3;
  uVar3 = puVar8[9];
  *(undefined8 *)(FVar1.Data + lVar7 + 0x40) = puVar8[8];
  *(undefined8 *)(FVar1.Data + lVar7 + 0x40 + 8) = uVar3;
  uVar3 = puVar8[0xb];
  *(undefined8 *)(FVar1.Data + lVar7 + 0x50) = puVar8[10];
  *(undefined8 *)(FVar1.Data + lVar7 + 0x50 + 8) = uVar3;
  uVar5 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<Chaos::TRigidTransform<double,3>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::TRigidTransform<double,3>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143b28d50

void __thiscall
Chaos::
TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>::
MoveToOtherArray(TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
                 *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) =
       *(undefined8 *)(lVar1 + (longlong)param_1 * 8);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 8),(longlong)iVar5 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b28ea0

void __thiscall
Chaos::
TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
::MoveToOtherArray(TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
                   *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>::
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
            ((TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
              *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 0x50),
             (TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
              *)((longlong)param_1 * 0x50 + lVar1));
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143b28fe0

void __thiscall
Chaos::TArrayCollectionArray<TSharedPtr<FString,1>_>::MoveToOtherArray
          (TArrayCollectionArray<TSharedPtr<FString,1>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  uVar3 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = *puVar6;
  *(undefined8 *)(pFVar5 + 8) = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1,1
            );
  return;
}

// MoveToOtherArray @ 143b29120

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>::
MoveToOtherArray(TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
                 *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
  iVar5 = *(int *)(param_2 + 2);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) = *puVar1;
  *puVar1 = 0;
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143b29250

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FKinematicTarget>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::FKinematicTarget> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  ForAnyElementType FVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  uVar5 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = *(int *)(param_2 + 2);
  puVar8 = (undefined8 *)((longlong)param_1 * 0x30 + *(longlong *)&this->field_0x8);
  if (iVar6 == *(int *)&param_2[2].field_0x4) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  lVar7 = (longlong)iVar6;
  *(int *)(param_2 + 2) = iVar6 + 1;
  uVar3 = puVar8[1];
  FVar1.Data = *(FScriptContainerElement **)(param_2 + 1);
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30) = *puVar8;
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 8) = uVar3;
  uVar3 = puVar8[3];
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 0x10) = puVar8[2];
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 0x10 + 8) = uVar3;
  uVar3 = puVar8[5];
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 0x20) = puVar8[4];
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 0x20 + 8) = uVar3;
  uVar5 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1
             ,1);
  return;
}

// MoveToOtherArray @ 143b293a0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleCollisions>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::FParticleCollisions> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  FParticleCollisions::FParticleCollisions
            ((FParticleCollisions *)
             (*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 0x10),
             (FParticleCollisions *)((longlong)param_1 * 0x10 + lVar1));
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<Chaos::FParticleCollisions,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::FParticleCollisions,TSizedDefaultAllocator<32>_> *)&this->field_0x8,
             param_1,1);
  return;
}

// MoveToOtherArray @ 143b294e0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidClusteredFlags>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::FRigidClusteredFlags> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  (*(FScriptContainerElement **)(param_2 + 1))[iVar5] =
       *(FScriptContainerElement *)(param_1 + lVar1);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar5) + *(longlong *)&this->field_0x8),
            (longlong)iVar5);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143b29630

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FWeakParticleHandle>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::FWeakParticleHandle> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  uVar3 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = *puVar6;
  *(undefined8 *)(pFVar5 + 8) = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::FWeakParticleHandle,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::FWeakParticleHandle,TSizedDefaultAllocator<32>_> *)&this->field_0x8,
             param_1,1);
  return;
}

// MoveToOtherArray @ 143b29770

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EGeometryParticleListMask>::MoveToOtherArray
          (void *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)((longlong)this + 0x10)) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)((longlong)this + 8);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined4 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 4) =
       *(undefined4 *)(lVar1 + (longlong)param_1 * 4);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1 * 4),
            (void *)(*(longlong *)((longlong)this + 8) +
                    (longlong)(*(int *)((longlong)this + 0x10) - iVar5) * 4),(longlong)iVar5 << 2);
  }
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
  return;
}

// MoveToOtherArray @ 143b298c0

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EObjectStateType>::MoveToOtherArray
          (void *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)((longlong)this + 0x10)) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)((longlong)this + 8);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  (*(FScriptContainerElement **)(param_2 + 1))[iVar5] =
       *(FScriptContainerElement *)(param_1 + lVar1);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1),
            (void *)((longlong)(*(int *)((longlong)this + 0x10) - iVar5) +
                    *(longlong *)((longlong)this + 8)),(longlong)iVar5);
  }
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
  return;
}

// MoveToOtherArray @ 143b29a10

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EResimType>::MoveToOtherArray
          (void *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)((longlong)this + 0x10)) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)((longlong)this + 8);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  (*(FScriptContainerElement **)(param_2 + 1))[iVar5] =
       *(FScriptContainerElement *)(param_1 + lVar1);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1),
            (void *)((longlong)(*(int *)((longlong)this + 0x10) - iVar5) +
                    *(longlong *)((longlong)this + 8)),(longlong)iVar5);
  }
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
  return;
}

// MoveToOtherArray @ 143b29b60

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::ESleepType>::MoveToOtherArray
          (void *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)((longlong)this + 0x10)) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)((longlong)this + 8);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  (*(FScriptContainerElement **)(param_2 + 1))[iVar5] =
       *(FScriptContainerElement *)(param_1 + lVar1);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1),
            (void *)((longlong)(*(int *)((longlong)this + 0x10) - iVar5) +
                    *(longlong *)((longlong)this + 8)),(longlong)iVar5);
  }
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
  return;
}

// RemoveAt @ 143b32010

void __thiscall
Chaos::TArrayCollectionArray<signed_char>::RemoveAt
          (TArrayCollectionArray<signed_char> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2),(longlong)iVar4);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b320c0

void __thiscall
Chaos::TArrayCollectionArray<int>::RemoveAt
          (TArrayCollectionArray<int> *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 4);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 4),(longlong)iVar4 << 2);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32170

void __thiscall
Chaos::TArrayCollectionArray<double>::RemoveAt
          (TArrayCollectionArray<double> *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 8),(longlong)iVar4 << 3);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32220

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*>::RemoveAt
          (TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*> *this,int param_1,int param_2
          )

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 8),(longlong)iVar4 << 3);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b322d0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*>::RemoveAt
          (TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*> *this,int param_1,int param_2
          )

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 8),(longlong)iVar4 << 3);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32380

void __thiscall
Chaos::TArrayCollectionArray<IPhysicsProxyBase_*>::RemoveAt
          (TArrayCollectionArray<IPhysicsProxyBase_*> *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 8),(longlong)iVar4 << 3);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32430

void __thiscall
Chaos::TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_>::RemoveAt
          (TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_> *this,int param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>,TSizedDefaultAllocator<32>_> *)
               &this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143b324d0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::ClusterId>::RemoveAt
          (TArrayCollectionArray<Chaos::ClusterId> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x10 + (longlong)_Dst),(longlong)iVar4 << 4);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32590

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleID>::RemoveAt
          (TArrayCollectionArray<Chaos::FParticleID> *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 8),(longlong)iVar4 << 3);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32640

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidParticleCoreData>::RemoveAt
          (TArrayCollectionArray<Chaos::FRigidParticleCoreData> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x10 + (longlong)_Dst),(longlong)iVar4 << 4);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32700

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FSpatialAccelerationIdx>::RemoveAt
          (TArrayCollectionArray<Chaos::FSpatialAccelerationIdx> *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 2);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 2),(longlong)iVar4 * 2);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b327b0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FSyncState>::RemoveAt
          (TArrayCollectionArray<Chaos::FSyncState> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2),(longlong)iVar4);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32860

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FUniqueIdx>::RemoveAt
          (TArrayCollectionArray<Chaos::FUniqueIdx> *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 4);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 4),(longlong)iVar4 << 2);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32910

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<float,3>_>::RemoveAt
          (TArrayCollectionArray<Chaos::TAABB<float,3>_> *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x18);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 0x18),(longlong)iVar4 * 0x18);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b329d0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<double,3>_>::RemoveAt
          (TArrayCollectionArray<Chaos::TAABB<double,3>_> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x30 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x30 + (longlong)_Dst),(longlong)iVar4 * 0x30);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32a90

void __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>::
RemoveAt(TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>
         *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143b32b30

void __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
::RemoveAt(TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143b32bd0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
::RemoveAt(TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143b32c70

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_>::RemoveAt
          (TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_> *this,int param_1
          ,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 3 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 3),(longlong)iVar4 * 3);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32d20

void __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_>::RemoveAt
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_> *this,
          int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>,TSizedDefaultAllocator<32>_>::
    RemoveAtImpl((TArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>,TSizedDefaultAllocator<32>_>
                  *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143b32dc0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<double,3>_>::RemoveAt
          (TArrayCollectionArray<Chaos::TRigidTransform<double,3>_> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x60 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x60 + (longlong)_Dst),(longlong)iVar4 * 0x60);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32e80

void __thiscall
Chaos::
TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>::
RemoveAt(TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
         *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 8),(longlong)iVar4 << 3);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b32f30

void __thiscall
Chaos::
TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
::RemoveAt(TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
           *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143b32fd0

void __thiscall
Chaos::TArrayCollectionArray<TSharedPtr<FString,1>_>::RemoveAt
          (TArrayCollectionArray<TSharedPtr<FString,1>_> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1
               ,param_2);
  }
  return;
}

// RemoveAt @ 143b33070

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>::
RemoveAt(TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
         *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143b33110

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FKinematicTarget>::RemoveAt
          (TArrayCollectionArray<Chaos::FKinematicTarget> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x30 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x30 + (longlong)_Dst),(longlong)iVar4 * 0x30);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b331d0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleCollisions>::RemoveAt
          (TArrayCollectionArray<Chaos::FParticleCollisions> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<Chaos::FParticleCollisions,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<Chaos::FParticleCollisions,TSizedDefaultAllocator<32>_> *)&this->field_0x8,
               param_1,param_2);
  }
  return;
}

// RemoveAt @ 143b33270

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidClusteredFlags>::RemoveAt
          (TArrayCollectionArray<Chaos::FRigidClusteredFlags> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2),(longlong)iVar4);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143b33320

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FWeakParticleHandle>::RemoveAt
          (TArrayCollectionArray<Chaos::FWeakParticleHandle> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<Chaos::FWeakParticleHandle,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<Chaos::FWeakParticleHandle,TSizedDefaultAllocator<32>_> *)&this->field_0x8,
               param_1,param_2);
  }
  return;
}

// RemoveAt @ 143b333c0

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EGeometryParticleListMask>::RemoveAt
          (void *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1 * 4);
    iVar4 = (*(int *)((longlong)this + 0x10) - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 4),(longlong)iVar4 << 2);
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) - param_2;
  }
  return;
}

// RemoveAt @ 143b33470

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EObjectStateType>::RemoveAt
          (void *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 + *(longlong *)((longlong)this + 8));
    iVar4 = (*(int *)((longlong)this + 0x10) - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2),(longlong)iVar4);
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) - param_2;
  }
  return;
}

// RemoveAt @ 143b33520

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EResimType>::RemoveAt(void *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 + *(longlong *)((longlong)this + 8));
    iVar4 = (*(int *)((longlong)this + 0x10) - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2),(longlong)iVar4);
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) - param_2;
  }
  return;
}

// RemoveAt @ 143b335d0

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::ESleepType>::RemoveAt(void *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 + *(longlong *)((longlong)this + 8));
    iVar4 = (*(int *)((longlong)this + 0x10) - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2),(longlong)iVar4);
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) - param_2;
  }
  return;
}

// RemoveAtSwap @ 143b33d30

void __thiscall
Chaos::TArrayCollectionArray<signed_char>::RemoveAtSwap
          (TArrayCollectionArray<signed_char> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) + *(longlong *)&this->field_0x8),
            (longlong)iVar3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b33df0

void __thiscall
Chaos::TArrayCollectionArray<int>::RemoveAtSwap(TArrayCollectionArray<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 4),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 4),(longlong)iVar3 << 2);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b33eb0

void __thiscall
Chaos::TArrayCollectionArray<double>::RemoveAtSwap(TArrayCollectionArray<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 8),(longlong)iVar3 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b33f70

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 8),(longlong)iVar3 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b34030

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 8),(longlong)iVar3 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b340f0

void __thiscall
Chaos::TArrayCollectionArray<IPhysicsProxyBase_*>::RemoveAtSwap
          (TArrayCollectionArray<IPhysicsProxyBase_*> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 8),(longlong)iVar3 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b341b0

void __thiscall
Chaos::TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_>::RemoveAtSwap
          (TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>,TSizedDefaultAllocator<32>_>::
  RemoveAtSwapImpl((TArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143b34240

void __thiscall
Chaos::TArrayCollectionArray<Chaos::ClusterId>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::ClusterId> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) * 0x10 +
                    *(longlong *)&this->field_0x8),(longlong)iVar3 << 4);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b34310

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleID>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::FParticleID> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 8),(longlong)iVar3 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b343d0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidParticleCoreData>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::FRigidParticleCoreData> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) * 0x10 +
                    *(longlong *)&this->field_0x8),(longlong)iVar3 << 4);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b344a0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FSpatialAccelerationIdx>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::FSpatialAccelerationIdx> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 2),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 2),(longlong)iVar3 * 2);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b34560

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FSyncState>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::FSyncState> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) + *(longlong *)&this->field_0x8),
            (longlong)iVar3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b34620

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FUniqueIdx>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::FUniqueIdx> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 4),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 4),(longlong)iVar3 << 2);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b346e0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<float,3>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::TAABB<float,3>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x18),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar4) * 0x18),(longlong)iVar4 * 0x18);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b347b0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<double,3>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::TAABB<double,3>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1,
             1);
  return;
}

// RemoveAtSwap @ 143b34840

void __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>::
RemoveAtSwap(TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143b348d0

void __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
::RemoveAtSwap(TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
               *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143b34960

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtSwap(TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
               *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143b349f0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_> *this,int param_1
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 3),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar4) * 3),(longlong)iVar4 * 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b34ac0

void __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_>::RemoveAtSwap
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>,TSizedDefaultAllocator<32>_>::
  RemoveAtSwapImpl((TArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143b34b50

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<double,3>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::TRigidTransform<double,3>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::TRigidTransform<double,3>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::TRigidTransform<double,3>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143b34be0

void __thiscall
Chaos::
TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>::
RemoveAtSwap(TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 8),(longlong)iVar3 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b34ca0

void __thiscall
Chaos::
TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
::RemoveAtSwap(TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
               *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143b34d30

void __thiscall
Chaos::TArrayCollectionArray<TSharedPtr<FString,1>_>::RemoveAtSwap
          (TArrayCollectionArray<TSharedPtr<FString,1>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1,1
            );
  return;
}

// RemoveAtSwap @ 143b34dc0

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>::
RemoveAtSwap(TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143b34e50

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FKinematicTarget>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::FKinematicTarget> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1
             ,1);
  return;
}

// RemoveAtSwap @ 143b34ee0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleCollisions>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::FParticleCollisions> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::FParticleCollisions,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::FParticleCollisions,TSizedDefaultAllocator<32>_> *)&this->field_0x8,
             param_1,1);
  return;
}

// RemoveAtSwap @ 143b34f70

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidClusteredFlags>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::FRigidClusteredFlags> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) + *(longlong *)&this->field_0x8),
            (longlong)iVar3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143b35030

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FWeakParticleHandle>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::FWeakParticleHandle> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::FWeakParticleHandle,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::FWeakParticleHandle,TSizedDefaultAllocator<32>_> *)&this->field_0x8,
             param_1,1);
  return;
}

// RemoveAtSwap @ 143b350c0

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EGeometryParticleListMask>::RemoveAtSwap
          (void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1 * 4),
            (void *)(*(longlong *)((longlong)this + 8) +
                    (longlong)(*(int *)((longlong)this + 0x10) - iVar3) * 4),(longlong)iVar3 << 2);
  }
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
  return;
}

// RemoveAtSwap @ 143b35180

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EObjectStateType>::RemoveAtSwap(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1),
            (void *)((longlong)(*(int *)((longlong)this + 0x10) - iVar3) +
                    *(longlong *)((longlong)this + 8)),(longlong)iVar3);
  }
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
  return;
}

// RemoveAtSwap @ 143b35240

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EResimType>::RemoveAtSwap(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1),
            (void *)((longlong)(*(int *)((longlong)this + 0x10) - iVar3) +
                    *(longlong *)((longlong)this + 8)),(longlong)iVar3);
  }
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
  return;
}

// RemoveAtSwap @ 143b35300

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::ESleepType>::RemoveAtSwap(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1),
            (void *)((longlong)(*(int *)((longlong)this + 0x10) - iVar3) +
                    *(longlong *)((longlong)this + 8)),(longlong)iVar3);
  }
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
  return;
}

// Resize @ 143b374b0

void __thiscall
Chaos::TArrayCollectionArray<signed_char>::Resize
          (TArrayCollectionArray<signed_char> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    memset((void *)(*(longlong *)puVar1 + (longlong)iVar5),0,(longlong)(param_1 - iVar6));
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove((void *)(*(longlong *)puVar1 + (longlong)param_1),
                (void *)(*(longlong *)puVar1 + (longlong)param_1 + (longlong)(int)uVar7),
                (longlong)iVar6);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b375c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<int>::Resize(TArrayCollectionArray<int> *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1,No);
  return;
}

// Resize @ 143b375e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<double>::Resize(TArrayCollectionArray<double> *this,int param_1)

{
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<double,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1,No);
  return;
}

// Resize @ 143b37600

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*>::Resize
          (TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    memset((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 8);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar6 << 3);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b37720

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*>::Resize
          (TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    memset((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 8);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar6 << 3);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b37840

void __thiscall
Chaos::TArrayCollectionArray<IPhysicsProxyBase_*>::Resize
          (TArrayCollectionArray<IPhysicsProxyBase_*> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    memset((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 8);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar6 << 3);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b37960

void __thiscall
Chaos::TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_>::Resize
          (TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_> *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    DefaultConstructItems<TPimplPtr<Chaos::Private::FConvexOptimizer,0>,int>
              ((void *)(*(longlong *)this_00 + (longlong)iVar4 * 8),param_1 - iVar1);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>,TSizedDefaultAllocator<32>_>::
      RemoveAtImpl((TArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>,TSizedDefaultAllocator<32>_>
                    *)this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143b37a40

void __thiscall
Chaos::TArrayCollectionArray<Chaos::ClusterId>::Resize
          (TArrayCollectionArray<Chaos::ClusterId> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::ClusterId,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x10),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 0x10);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x10),(longlong)iVar6 << 4);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b37b60

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleID>::Resize
          (TArrayCollectionArray<Chaos::FParticleID> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::FParticleID,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 8),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 8);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar6 << 3);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b37c70

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidParticleCoreData>::Resize
          (TArrayCollectionArray<Chaos::FRigidParticleCoreData> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::FRigidParticleCoreData,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x10),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 0x10);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x10),(longlong)iVar6 << 4);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b37d90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FSpatialAccelerationIdx>::Resize
          (TArrayCollectionArray<Chaos::FSpatialAccelerationIdx> *this,int param_1)

{
  TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> *)&this->field_0x8,
             param_1,No);
  return;
}

// Resize @ 143b37db0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FSyncState>::Resize
          (TArrayCollectionArray<Chaos::FSyncState> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::FSyncState,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove((void *)(*(longlong *)puVar1 + (longlong)param_1),
                (void *)(*(longlong *)puVar1 + (longlong)param_1 + (longlong)(int)uVar7),
                (longlong)iVar6);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b37ec0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FUniqueIdx>::Resize
          (TArrayCollectionArray<Chaos::FUniqueIdx> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::FUniqueIdx,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 4),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 4);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 4),(longlong)iVar6 << 2);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b37fd0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<float,3>_>::Resize
          (TArrayCollectionArray<Chaos::TAABB<float,3>_> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::TAABB<float,3>,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x18),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 0x18);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x18),(longlong)iVar6 * 0x18);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b38100

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<double,3>_>::Resize
          (TArrayCollectionArray<Chaos::TAABB<double,3>_> *this,int param_1)

{
  TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1,
             No);
  return;
}

// Resize @ 143b38120

void __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>::
Resize(TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_> *this,
      int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    memset((void *)((longlong)iVar4 * 0x10 + *(longlong *)this_00),0,
           (longlong)(param_1 - iVar1) << 4);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl((TArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143b38210

void __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
::Resize(TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
         *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    memset((void *)((longlong)iVar4 * 0x10 + *(longlong *)this_00),0,
           (longlong)(param_1 - iVar1) << 4);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl((TArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143b38300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
::Resize(TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
         *this,int param_1)

{
  TArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum((TArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
            *)&this->field_0x8,param_1,No);
  return;
}

// Resize @ 143b38320

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_>::Resize
          (TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_> *this,int param_1
          )

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (3,1,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::Private::TIterationSettings<signed_char>,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 3),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 3);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 3),(longlong)iVar6 * 3);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b38430

void __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_>::Resize
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_> *this,
          int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    DefaultConstructItems<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>,int>
              ((void *)(*(longlong *)this_00 + (longlong)iVar4 * 8),param_1 - iVar1);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>,TSizedDefaultAllocator<32>_>::
      RemoveAtImpl((TArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>,TSizedDefaultAllocator<32>_>
                    *)this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143b38510

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<double,3>_>::Resize
          (TArrayCollectionArray<Chaos::TRigidTransform<double,3>_> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::TRigidTransform<double,3>,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x60),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 0x60);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x60),(longlong)iVar6 * 0x60);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b38640

void __thiscall
Chaos::
TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>::
Resize(TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
       *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 8),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 8);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar6 << 3);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b38750

void __thiscall
Chaos::
TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
::Resize(TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
         *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    DefaultConstructItems<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>,int>
              ((void *)((longlong)iVar4 * 0x50 + *(longlong *)this_00),param_1 - iVar1);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl((TArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                      *)this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143b38840

void __thiscall
Chaos::TArrayCollectionArray<TSharedPtr<FString,1>_>::Resize
          (TArrayCollectionArray<TSharedPtr<FString,1>_> *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    memset((void *)((longlong)iVar4 * 0x10 + *(longlong *)this_00),0,
           (longlong)(param_1 - iVar1) << 4);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                ((TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)this_00,param_1,uVar5)
      ;
    }
  }
  return;
}

// Resize @ 143b38930

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>::
Resize(TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
       *this,int param_1)

{
  TArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,TSizedDefaultAllocator<32>_>
  ::SetNum((TArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,TSizedDefaultAllocator<32>_>
            *)&this->field_0x8,param_1,No);
  return;
}

// Resize @ 143b38950

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FKinematicTarget>::Resize
          (TArrayCollectionArray<Chaos::FKinematicTarget> *this,int param_1)

{
  TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1
             ,No);
  return;
}

// Resize @ 143b38970

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleCollisions>::Resize
          (TArrayCollectionArray<Chaos::FParticleCollisions> *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::FParticleCollisions,int>
              ((void *)((longlong)iVar4 * 0x10 + *(longlong *)this_00),param_1 - iVar1);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<Chaos::FParticleCollisions,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                ((TArray<Chaos::FParticleCollisions,TSizedDefaultAllocator<32>_> *)this_00,param_1,
                 uVar5);
    }
  }
  return;
}

// Resize @ 143b38a60

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidClusteredFlags>::Resize
          (TArrayCollectionArray<Chaos::FRigidClusteredFlags> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::FRigidClusteredFlags,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove((void *)(*(longlong *)puVar1 + (longlong)param_1),
                (void *)(*(longlong *)puVar1 + (longlong)param_1 + (longlong)(int)uVar7),
                (longlong)iVar6);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b38b70

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FWeakParticleHandle>::Resize
          (TArrayCollectionArray<Chaos::FWeakParticleHandle> *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::FWeakParticleHandle,int>
              ((void *)((longlong)iVar4 * 0x10 + *(longlong *)this_00),param_1 - iVar1);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<Chaos::FWeakParticleHandle,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                ((TArray<Chaos::FWeakParticleHandle,TSizedDefaultAllocator<32>_> *)this_00,param_1,
                 uVar5);
    }
  }
  return;
}

// Resize @ 143b38c60

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EGeometryParticleListMask>::Resize(void *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 8);
  iVar6 = *(int *)((longlong)this + 0x10);
  piVar2 = (int *)((longlong)this + 0x10);
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1 - iVar6,pFVar1,piVar2,(int *)((longlong)this + 0x14));
    memset(pFVar1->Data + (longlong)iVar5 * 4,0,(longlong)(param_1 - iVar6) << 2);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      iVar6 = (*piVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(pFVar1->Data + (longlong)param_1 * 4,
                pFVar1->Data + (longlong)param_1 * 4 + (longlong)(int)uVar7 * 4,(longlong)iVar6 << 2
               );
      }
      *piVar2 = *piVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b38d80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EObjectStateType>::Resize(void *this,int param_1)

{
  TArray<enum_Chaos::EObjectStateType,TSizedDefaultAllocator<32>_>::SetNum
            ((void *)((longlong)this + 8),param_1,No);
  return;
}

// Resize @ 143b38da0

void __thiscall Chaos::TArrayCollectionArray<enum_Chaos::EResimType>::Resize(void *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 8);
  iVar6 = *(int *)((longlong)this + 0x10);
  piVar2 = (int *)((longlong)this + 0x10);
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar6,pFVar1,piVar2,(int *)((longlong)this + 0x14));
    memset(pFVar1->Data + iVar5,0,(longlong)(param_1 - iVar6));
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      iVar6 = (*piVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(pFVar1->Data + param_1,pFVar1->Data + param_1 + (int)uVar7,(longlong)iVar6);
      }
      *piVar2 = *piVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143b38eb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::TArrayCollectionArray<enum_Chaos::ESleepType>::Resize(void *this,int param_1)

{
  TArray<enum_Chaos::ESleepType,TSizedDefaultAllocator<32>_>::SetNum
            ((void *)((longlong)this + 8),param_1,No);
  return;
}

// SizeOfElem @ 143b41ee0

ulong64 __thiscall
Chaos::TArrayCollectionArray<signed_char>::SizeOfElem(TArrayCollectionArray<signed_char> *this)

{
  return 1;
}

// SizeOfElem @ 143b41ef0

ulong64 __thiscall Chaos::TArrayCollectionArray<int>::SizeOfElem(TArrayCollectionArray<int> *this)

{
  return 4;
}

// SizeOfElem @ 143b41f00

ulong64 __thiscall
Chaos::TArrayCollectionArray<double>::SizeOfElem(TArrayCollectionArray<double> *this)

{
  return 8;
}

// SizeOfElem @ 143b41f10

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*>::SizeOfElem
          (TArrayCollectionArray<Chaos::TGeometryParticle<double,3>_*> *this)

{
  return 8;
}

// SizeOfElem @ 143b41f20

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*>::SizeOfElem
          (TArrayCollectionArray<Chaos::Private::FPBDIslandParticle_*> *this)

{
  return 8;
}

// SizeOfElem @ 143b41f30

ulong64 __thiscall
Chaos::TArrayCollectionArray<IPhysicsProxyBase_*>::SizeOfElem
          (TArrayCollectionArray<IPhysicsProxyBase_*> *this)

{
  return 8;
}

// SizeOfElem @ 143b41f40

ulong64 __thiscall
Chaos::TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_>::SizeOfElem
          (TArrayCollectionArray<TPimplPtr<Chaos::Private::FConvexOptimizer,0>_> *this)

{
  return 8;
}

// SizeOfElem @ 143b41f50

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::ClusterId>::SizeOfElem
          (TArrayCollectionArray<Chaos::ClusterId> *this)

{
  return 0x10;
}

// SizeOfElem @ 143b41f60

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleID>::SizeOfElem
          (TArrayCollectionArray<Chaos::FParticleID> *this)

{
  return 8;
}

// SizeOfElem @ 143b41f70

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidParticleCoreData>::SizeOfElem
          (TArrayCollectionArray<Chaos::FRigidParticleCoreData> *this)

{
  return 0x10;
}

// SizeOfElem @ 143b41f80

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::FSpatialAccelerationIdx>::SizeOfElem
          (TArrayCollectionArray<Chaos::FSpatialAccelerationIdx> *this)

{
  return 2;
}

// SizeOfElem @ 143b41f90

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::FSyncState>::SizeOfElem
          (TArrayCollectionArray<Chaos::FSyncState> *this)

{
  return 1;
}

// SizeOfElem @ 143b41fa0

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::FUniqueIdx>::SizeOfElem
          (TArrayCollectionArray<Chaos::FUniqueIdx> *this)

{
  return 4;
}

// SizeOfElem @ 143b41fb0

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<float,3>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::TAABB<float,3>_> *this)

{
  return 0x18;
}

// SizeOfElem @ 143b41fc0

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::TAABB<double,3>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::TAABB<double,3>_> *this)

{
  return 0x30;
}

// SizeOfElem @ 143b41fd0

ulong64 __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>::
SizeOfElem(TArrayCollectionArray<TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_>_>
           *this)

{
  return 0x10;
}

// SizeOfElem @ 143b41fe0

ulong64 __thiscall
Chaos::TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
::SizeOfElem(TArrayCollectionArray<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>_>
             *this)

{
  return 0x10;
}

// SizeOfElem @ 143b41ff0

ulong64 __thiscall
Chaos::
TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
::SizeOfElem(TArrayCollectionArray<TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
             *this)

{
  return 0x18;
}

// SizeOfElem @ 143b42000

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::Private::TIterationSettings<signed_char>_> *this)

{
  return 3;
}

// SizeOfElem @ 143b42010

ulong64 __thiscall
Chaos::TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_>::SizeOfElem
          (TArrayCollectionArray<TRefCountPtr<Chaos::FImplicitObjectUnionClustered>_> *this)

{
  return 8;
}

// SizeOfElem @ 143b42020

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<double,3>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::TRigidTransform<double,3>_> *this)

{
  return 0x60;
}

// SizeOfElem @ 143b42030

ulong64 __thiscall
Chaos::
TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>::
SizeOfElem(TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
           *this)

{
  return 8;
}

// SizeOfElem @ 143b42040

ulong64 __thiscall
Chaos::
TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
::SizeOfElem(TArrayCollectionArray<TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>_>
             *this)

{
  return 0x50;
}

// SizeOfElem @ 143b42050

ulong64 __thiscall
Chaos::TArrayCollectionArray<TSharedPtr<FString,1>_>::SizeOfElem
          (TArrayCollectionArray<TSharedPtr<FString,1>_> *this)

{
  return 0x10;
}

// SizeOfElem @ 143b42060

ulong64 __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>::
SizeOfElem(TArrayCollectionArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>
           *this)

{
  return 8;
}

// SizeOfElem @ 143b42070

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::FKinematicTarget>::SizeOfElem
          (TArrayCollectionArray<Chaos::FKinematicTarget> *this)

{
  return 0x30;
}

// SizeOfElem @ 143b42080

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::FParticleCollisions>::SizeOfElem
          (TArrayCollectionArray<Chaos::FParticleCollisions> *this)

{
  return 0x10;
}

// SizeOfElem @ 143b42090

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::FRigidClusteredFlags>::SizeOfElem
          (TArrayCollectionArray<Chaos::FRigidClusteredFlags> *this)

{
  return 1;
}

// SizeOfElem @ 143b420a0

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::FWeakParticleHandle>::SizeOfElem
          (TArrayCollectionArray<Chaos::FWeakParticleHandle> *this)

{
  return 0x10;
}

// SizeOfElem @ 143b420b0

ulong64 __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EGeometryParticleListMask>::SizeOfElem(void *this)

{
  return 4;
}

// SizeOfElem @ 143b420c0

ulong64 __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::EObjectStateType>::SizeOfElem(void *this)

{
  return 1;
}

// SizeOfElem @ 143b420d0

ulong64 __thiscall Chaos::TArrayCollectionArray<enum_Chaos::EResimType>::SizeOfElem(void *this)

{
  return 1;
}

// SizeOfElem @ 143b420e0

ulong64 __thiscall Chaos::TArrayCollectionArray<enum_Chaos::ESleepType>::SizeOfElem(void *this)

{
  return 1;
}

// ~TArrayCollectionArray<unsigned_int> @ 143be26b0

void __thiscall
Chaos::TArrayCollectionArray<unsigned_int>::~TArrayCollectionArray<unsigned_int>
          (TArrayCollectionArray<unsigned_int> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_I_Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_> @ 143be26d0

void __thiscall
Chaos::TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>::
~TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>
          (TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TFunction___A6AXAEAVFSolverParticles_Softs_Chaos__MH_Z___Chaos__6B_
  ;
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>,int>
            (*(TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)> **)
              &this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<Chaos::TRigidTransform<float,3>_> @ 143be2710

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<float,3>_>::
~TArrayCollectionArray<Chaos::TRigidTransform<float,3>_>
          (TArrayCollectionArray<Chaos::TRigidTransform<float,3>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField> @ 143be2730

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField>::
~TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField>
          (TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField> *this)

{
  *(undefined ***)this =
       &___7__TArrayCollectionArray_VFVelocityAndPressureField_Softs_Chaos___Chaos__6B_;
  DestructItems<Chaos::Softs::FVelocityAndPressureField,int>
            (*(FVelocityAndPressureField **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ApplyShrinkPolicy @ 143bef1b0

void __thiscall
Chaos::TArrayCollectionArray<unsigned_int>::ApplyShrinkPolicy
          (TArrayCollectionArray<unsigned_int> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143bef230

void __thiscall
Chaos::TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>::
ApplyShrinkPolicy(TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>
                  *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,
                 (int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143bef2b0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<float,3>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::TRigidTransform<float,3>_> *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,
                 (int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143bef330

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField> *this,float param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x198,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14)
      ;
    }
  }
  return;
}

// MoveToOtherArray @ 143c0c700

void __thiscall
Chaos::TArrayCollectionArray<unsigned_int>::MoveToOtherArray
          (TArrayCollectionArray<unsigned_int> *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined4 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 4) =
       *(undefined4 *)(lVar1 + (longlong)param_1 * 4);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 4),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 4),(longlong)iVar5 << 2);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143c0c850

void __thiscall
Chaos::TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>::
MoveToOtherArray(TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>
                 *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  puVar7 = (undefined8 *)((longlong)param_1 * 0x30 + *(longlong *)&this->field_0x8);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  pFVar6 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 0x30;
  *(undefined8 *)pFVar6 = *puVar7;
  *(undefined8 *)(pFVar6 + 0x28) = puVar7[5];
  puVar7[5] = 0;
  uVar2 = puVar7[3];
  *(undefined8 *)(pFVar6 + 0x10) = puVar7[2];
  *(undefined8 *)(pFVar6 + 0x18) = uVar2;
  *(undefined8 *)(pFVar6 + 0x20) = puVar7[4];
  if (*(longlong *)pFVar6 != 0) {
    *puVar7 = 0;
  }
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143c0c9b0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<float,3>_>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::TRigidTransform<float,3>_> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  ForAnyElementType FVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  uVar5 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = *(int *)(param_2 + 2);
  puVar8 = (undefined8 *)((longlong)param_1 * 0x30 + *(longlong *)&this->field_0x8);
  if (iVar6 == *(int *)&param_2[2].field_0x4) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  lVar7 = (longlong)iVar6;
  *(int *)(param_2 + 2) = iVar6 + 1;
  uVar3 = puVar8[1];
  FVar1.Data = *(FScriptContainerElement **)(param_2 + 1);
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30) = *puVar8;
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 8) = uVar3;
  uVar3 = puVar8[3];
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 0x10) = puVar8[2];
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 0x10 + 8) = uVar3;
  uVar3 = puVar8[5];
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 0x20) = puVar8[4];
  *(undefined8 *)(FVar1.Data + lVar7 * 0x30 + 0x20 + 8) = uVar3;
  uVar5 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)&this->field_0x8
             ,param_1,1);
  return;
}

// MoveToOtherArray @ 143c0cb00

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x198,8,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  Softs::FVelocityAndPressureField::FVelocityAndPressureField
            ((FVelocityAndPressureField *)
             (*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 0x198),
             (FVelocityAndPressureField *)((longlong)param_1 * 0x198 + lVar1));
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<Chaos::Softs::FVelocityAndPressureField,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::Softs::FVelocityAndPressureField,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,1);
  return;
}

// RemoveAt @ 143c11080

void __thiscall
Chaos::TArrayCollectionArray<unsigned_int>::RemoveAt
          (TArrayCollectionArray<unsigned_int> *this,int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 4);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 4),(longlong)iVar4 << 2);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143c11130

void __thiscall
Chaos::TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>::
RemoveAt(TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>
         *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143c111d0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<float,3>_>::RemoveAt
          (TArrayCollectionArray<Chaos::TRigidTransform<float,3>_> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x30 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x30 + (longlong)_Dst),(longlong)iVar4 * 0x30);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143c11290

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField>::RemoveAt
          (TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField> *this,int param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<Chaos::Softs::FVelocityAndPressureField,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<Chaos::Softs::FVelocityAndPressureField,TSizedDefaultAllocator<32>_> *)
               &this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAtSwap @ 143c114b0

void __thiscall
Chaos::TArrayCollectionArray<unsigned_int>::RemoveAtSwap
          (TArrayCollectionArray<unsigned_int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 4),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 4),(longlong)iVar3 << 2);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143c11570

void __thiscall
Chaos::TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>::
RemoveAtSwap(TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143c11600

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<float,3>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::TRigidTransform<float,3>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)&this->field_0x8
             ,param_1,1);
  return;
}

// RemoveAtSwap @ 143c11690

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::Softs::FVelocityAndPressureField,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::Softs::FVelocityAndPressureField,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,1);
  return;
}

// Resize @ 143c129e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<unsigned_int>::Resize
          (TArrayCollectionArray<unsigned_int> *this,int param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1,No);
  return;
}

// Resize @ 143c12a00

void __thiscall
Chaos::TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>::
Resize(TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>
       *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,param_1 - iVar1,(ForAnyElementType *)this_00,
                       (int *)&this->field_0x10,(int *)&this->field_0x14);
    DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>,int>
              ((void *)((longlong)iVar4 * 0x30 + *(longlong *)this_00),param_1 - iVar1);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl((TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>,TSizedDefaultAllocator<32>_>
                      *)this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143c12af0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<float,3>_>::Resize
          (TArrayCollectionArray<Chaos::TRigidTransform<float,3>_> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::TRigidTransform<float,3>,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x30),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 0x30);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x30),(longlong)iVar6 * 0x30);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143c12c20

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField>::Resize
          (TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField> *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x198,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10
                       ,(int *)&this->field_0x14);
    DefaultConstructItems<Chaos::Softs::FVelocityAndPressureField,int>
              ((void *)((longlong)iVar4 * 0x198 + *(longlong *)this_00),param_1 - iVar1);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<Chaos::Softs::FVelocityAndPressureField,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                ((TArray<Chaos::Softs::FVelocityAndPressureField,TSizedDefaultAllocator<32>_> *)
                 this_00,param_1,uVar5);
    }
  }
  return;
}

// SizeOfElem @ 143c1a6e0

ulong64 __thiscall
Chaos::TArrayCollectionArray<unsigned_int>::SizeOfElem(TArrayCollectionArray<unsigned_int> *this)

{
  return 4;
}

// SizeOfElem @ 143c1a6f0

ulong64 __thiscall
Chaos::TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>::
SizeOfElem(TArrayCollectionArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>_>
           *this)

{
  return 0x30;
}

// SizeOfElem @ 143c1a700

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::TRigidTransform<float,3>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::TRigidTransform<float,3>_> *this)

{
  return 0x30;
}

// SizeOfElem @ 143c1a710

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField>::SizeOfElem
          (TArrayCollectionArray<Chaos::Softs::FVelocityAndPressureField> *this)

{
  return 0x198;
}

// Fill @ 143c9a670

void __thiscall
Chaos::TArrayCollectionArray<float>::Fill(TArrayCollectionArray<float> *this,float *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < *(int *)&this->field_0x10) {
    lVar6 = 0;
    do {
      fVar1 = *param_1;
      uVar4 = 0;
      if ((int)uVar5 < *(int *)&this->field_0x10) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(float *)(lVar6 + *(longlong *)&this->field_0x8) = fVar1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < *(int *)&this->field_0x10);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> @ 143d02b10

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_>::
~TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_>
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_VFChaosPhysicsMaterial_Chaos___Chaos___Chaos__6B_
  ;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_> @ 143d02b30

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
::
~TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
          (TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_VFChaosPhysicsMaterial_Chaos__U__TDefaultDelete_VFChaosPhysicsMaterial_Chaos_______Chaos__6B_
  ;
  DestructItems<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>,int>
            (*(TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>
               **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<Chaos::FAccelerationStructureHandle> @ 143d02b70

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FAccelerationStructureHandle>::
~TArrayCollectionArray<Chaos::FAccelerationStructureHandle>
          (TArrayCollectionArray<Chaos::FAccelerationStructureHandle> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &___7__TArrayCollectionArray_VFAccelerationStructureHandle_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ApplyShrinkPolicy @ 143d43b20

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_>::
ApplyShrinkPolicy(TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_>
                  *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143d43ba0

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
::ApplyShrinkPolicy(TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
                    *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143d43c20

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FAccelerationStructureHandle>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::FAccelerationStructureHandle> *this,float param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// MoveToOtherArray @ 143d59d50

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_>::
MoveToOtherArray(TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *this
                ,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) =
       *(undefined8 *)(lVar1 + (longlong)param_1 * 8);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar5) * 8),(longlong)iVar5 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143d59ea0

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
::MoveToOtherArray(TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
                   *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
  iVar5 = *(int *)(param_2 + 2);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) = *puVar1;
  *puVar1 = 0;
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143d59fd0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FAccelerationStructureHandle>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::FAccelerationStructureHandle> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ForAnyElementType FVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)&this->field_0x8;
  iVar8 = *(int *)(param_2 + 2);
  lVar10 = (longlong)param_1 * 0x38;
  if (iVar8 == *(int *)&param_2[2].field_0x4) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar8 + 1;
  uVar5 = ((undefined8 *)(lVar2 + lVar10))[1];
  lVar9 = (longlong)iVar8 * 0x38;
  FVar3.Data = *(FScriptContainerElement **)(param_2 + 1);
  *(undefined8 *)(FVar3.Data + lVar9) = *(undefined8 *)(lVar2 + lVar10);
  *(undefined8 *)(FVar3.Data + lVar9 + 8) = uVar5;
  puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar10);
  uVar5 = puVar1[1];
  *(undefined8 *)(FVar3.Data + lVar9 + 0x10) = *puVar1;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x10 + 8) = uVar5;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar10);
  uVar5 = puVar1[1];
  *(undefined8 *)(FVar3.Data + lVar9 + 0x20) = *puVar1;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x20 + 8) = uVar5;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x30) = *(undefined8 *)(lVar2 + 0x30 + lVar10);
  uVar7 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove((void *)(lVar10 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar8) * 0x38 +
                    *(longlong *)&this->field_0x8),(longlong)iVar8 * 0x38);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAt @ 143d622f0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_>::RemoveAt
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *this,
          int param_1,int param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 8),(longlong)iVar4 << 3);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143d623a0

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
::RemoveAt(TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
           *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143d62440

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FAccelerationStructureHandle>::RemoveAt
          (TArrayCollectionArray<Chaos::FAccelerationStructureHandle> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x38 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x38 + (longlong)_Dst),(longlong)iVar4 * 0x38);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAtSwap @ 143d62740

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar3) * 8),(longlong)iVar3 << 3);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143d62800

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
::RemoveAtSwap(TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
               *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143d62890

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FAccelerationStructureHandle>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::FAccelerationStructureHandle> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove((void *)((longlong)param_1 * 0x38 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar4) * 0x38 +
                    *(longlong *)&this->field_0x8),(longlong)iVar4 * 0x38);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// Resize @ 143d69150

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_>::Resize
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *this,
          int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 8),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 8);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar6 << 3);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143d69260

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
::Resize(TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
         *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    memset((void *)(*(longlong *)this_00 + (longlong)iVar4 * 8),0,(longlong)(param_1 - iVar1) << 3);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl((TArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>,TSizedDefaultAllocator<32>_>
                      *)this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143d69350

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FAccelerationStructureHandle>::Resize
          (TArrayCollectionArray<Chaos::FAccelerationStructureHandle> *this,int param_1)

{
  TArray<Chaos::FAccelerationStructureHandle,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::FAccelerationStructureHandle,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,No);
  return;
}

// SizeOfElem @ 143d70f60

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *this)

{
  return 8;
}

// SizeOfElem @ 143d70f70

ulong64 __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
::SizeOfElem(TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
             *this)

{
  return 8;
}

// SizeOfElem @ 143d70f80

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::FAccelerationStructureHandle>::SizeOfElem
          (TArrayCollectionArray<Chaos::FAccelerationStructureHandle> *this)

{
  return 0x38;
}

// ~TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext> @ 143dfd5e0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext>::
~TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext>
          (TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &___7__TArrayCollectionArray_UFEvolutionGroupContext_Softs_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_> @ 143dfd600

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
::
~TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
          (TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__M_Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>
               **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_> @ 143dfd640

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
::
~TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
          (TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__MAEBV__TArray_VFSolverCollisionParticlesRange_Softs_Chaos__V__TSizedDefaultAllocator__0CA______Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>
               **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_> @ 143dfd680

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::
~TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEAVFSolverParticlesRange_Softs_Chaos__MW4ESolverMode_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>
               **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_> @ 143dfd6c0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::
~TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
          (TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEBVFSolverParticlesRange_Softs_Chaos__MAEAVFEvolutionLinearSystem_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
               **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_> @ 143dfd700

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::
~TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
          (TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEBVFSolverParticlesRange_Softs_Chaos__MAEBV__TArray_VFSolverCollisionParticlesRange_Softs_Chaos__V__TSizedDefaultAllocator__0CA_____AEAVFEvolutionLinearSystem_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>
               **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_> @ 143dfd740

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::
~TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TArray_V__TFunction___A6AXAEBVFSolverParticlesRange_Softs_Chaos__MW4ESolverMode_23__Z__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>
               **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 143dfd780

void __thiscall
Chaos::TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::
~TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator_____Chaos__6B_
  ;
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&this->field_0x8,
             *(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem> @ 143dfd7c0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem>::
~TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem>
          (TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem> *this)

{
  *(undefined ***)this =
       &___7__TArrayCollectionArray_VFEvolutionLinearSystem_Softs_Chaos___Chaos__6B_;
  DestructItems<Chaos::Softs::FEvolutionLinearSystem,int>
            (*(FEvolutionLinearSystem **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ~TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity> @ 143dfd800

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity>::
~TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity>
          (TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &___7__TArrayCollectionArray_VFPerParticleDampVelocity_Softs_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange> @ 143dfd820

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange>::
~TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange>
          (TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &___7__TArrayCollectionArray_VFSolverCollisionParticlesRange_Softs_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange> @ 143dfd840

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange>::
~TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange>
          (TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &___7__TArrayCollectionArray_VFSolverParticlesRange_Softs_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&this->field_0x8;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FCollisionBodyRanges::EStatus> @ 143dfd860

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FCollisionBodyRanges::EStatus>::
~TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FCollisionBodyRanges::EStatus>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_W4EStatus_FCollisionBodyRanges_FEvolution_Softs_Chaos___Chaos__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FSoftBodies::EStatus> @ 143dfd880

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FSoftBodies::EStatus>::
~TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FSoftBodies::EStatus>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &___7__TArrayCollectionArray_W4EStatus_FSoftBodies_FEvolution_Softs_Chaos___Chaos__6B_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ApplyShrinkPolicy @ 143e13780

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext> *this,float param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13800

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
::ApplyShrinkPolicy(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
                    *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13880

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
::ApplyShrinkPolicy(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
                    *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13900

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::ApplyShrinkPolicy(void *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)this + 0x10);
  iVar3 = *(int *)((longlong)this + 0x14) - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)((longlong)this + 0x14) != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)((longlong)this + 8),iVar1,
                 (int *)((longlong)this + 0x14));
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13980

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::ApplyShrinkPolicy(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
                    *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13a00

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::ApplyShrinkPolicy(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
                    *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13a80

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::ApplyShrinkPolicy(void *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)this + 0x10);
  iVar3 = *(int *)((longlong)this + 0x14) - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)((longlong)this + 0x14) != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,(ForAnyElementType *)((longlong)this + 8),iVar1,
                 (int *)((longlong)this + 0x14));
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13b00

void __thiscall
Chaos::TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::
ApplyShrinkPolicy(TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                  *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13b80

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem> *this,float param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13c00

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity> *this,float param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,4,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13c80

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange> *this,float param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13d00

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange> *this,float param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13d80

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FCollisionBodyRanges::EStatus>::
ApplyShrinkPolicy(void *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)this + 0x10);
  iVar3 = *(int *)((longlong)this + 0x14) - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)((longlong)this + 0x14) != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,(ForAnyElementType *)((longlong)this + 8),iVar1,
                 (int *)((longlong)this + 0x14));
    }
  }
  return;
}

// ApplyShrinkPolicy @ 143e13e00

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FSoftBodies::EStatus>::ApplyShrinkPolicy
          (void *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)this + 0x10);
  iVar3 = *(int *)((longlong)this + 0x14) - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)((longlong)this + 0x14) != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,(ForAnyElementType *)((longlong)this + 8),iVar1,
                 (int *)((longlong)this + 0x14));
    }
  }
  return;
}

// MoveToOtherArray @ 143e35640

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  
  lVar10 = (longlong)param_1;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)&this->field_0x8;
  iVar9 = *(int *)(param_2 + 2);
  if (iVar9 == *(int *)&param_2[2].field_0x4) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar9 + 1;
  puVar1 = (undefined8 *)(lVar3 + lVar10 * 0x18);
  uVar6 = puVar1[1];
  FVar4.Data = *(FScriptContainerElement **)(param_2 + 1);
  pFVar2 = FVar4.Data + (longlong)iVar9 * 0x18;
  *(undefined8 *)pFVar2 = *puVar1;
  *(undefined8 *)(pFVar2 + 8) = uVar6;
  *(undefined8 *)(FVar4.Data + (longlong)iVar9 * 0x18 + 0x10) =
       *(undefined8 *)(lVar3 + 0x10 + lVar10 * 0x18);
  uVar8 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar9) {
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + lVar10 * 0x18),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar9) * 0x18),(longlong)iVar9 * 0x18);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143e357b0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
::MoveToOtherArray(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  uVar3 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = *puVar6;
  *puVar6 = 0;
  *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(puVar6 + 1);
  *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
  puVar6[1] = 0;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143e35900

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
::MoveToOtherArray(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  uVar3 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = *puVar6;
  *puVar6 = 0;
  *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(puVar6 + 1);
  *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
  puVar6[1] = 0;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143e35a50

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::MoveToOtherArray(void *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)((longlong)this + 8));
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = *puVar6;
  *puVar6 = 0;
  *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(puVar6 + 1);
  *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
  puVar6[1] = 0;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((longlong *)((longlong)this + 8),param_1,1);
  return;
}

// MoveToOtherArray @ 143e35ba0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::MoveToOtherArray(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  uVar3 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = *puVar6;
  *puVar6 = 0;
  *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(puVar6 + 1);
  *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
  puVar6[1] = 0;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143e35cf0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::MoveToOtherArray(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  uVar3 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)&this->field_0x8);
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = *puVar6;
  *puVar6 = 0;
  *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(puVar6 + 1);
  *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
  puVar6[1] = 0;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143e35e40

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::MoveToOtherArray(void *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)((longlong)this + 8));
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = *puVar6;
  *puVar6 = 0;
  *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(puVar6 + 1);
  *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
  puVar6[1] = 0;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((longlong *)((longlong)this + 8),param_1,1);
  return;
}

// MoveToOtherArray @ 143e35f90

void __thiscall
Chaos::TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::
MoveToOtherArray(TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this
                ,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)&this->field_0x8;
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  pTVar6 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
           (*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 0x50);
  *(undefined8 *)&pTVar6->Elements = 0;
  *(undefined8 *)&(pTVar6->Elements).field_0x8 = 0;
  *(undefined8 *)&(pTVar6->Elements).field_0x20 = 0;
  *(undefined4 *)&(pTVar6->Elements).field_0x28 = 0;
  *(undefined4 *)&(pTVar6->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(pTVar6->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pTVar6->Elements).field_0x34 = 0;
  (pTVar6->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  pTVar6->HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
  Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            (pTVar6,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    ((longlong)param_1 * 0x50 + lVar1));
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>::
  RemoveAtSwapImpl((TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143e360f0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)&this->field_0x8;
  iVar5 = *(int *)(param_2 + 2);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  Softs::FEvolutionLinearSystem::FEvolutionLinearSystem
            ((FEvolutionLinearSystem *)
             (*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 0x48),
             (FEvolutionLinearSystem *)(lVar1 + (longlong)param_1 * 0x48));
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<Chaos::Softs::FEvolutionLinearSystem,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::Softs::FEvolutionLinearSystem,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,1);
  return;
}

// MoveToOtherArray @ 143e36230

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ForAnyElementType FVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)&this->field_0x8;
  iVar8 = *(int *)(param_2 + 2);
  lVar10 = (longlong)param_1 * 0x40;
  if (iVar8 == *(int *)&param_2[2].field_0x4) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x440,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar8 + 1;
  uVar5 = ((undefined8 *)(lVar2 + lVar10))[1];
  FVar3.Data = *(FScriptContainerElement **)(param_2 + 1);
  lVar9 = (longlong)iVar8 * 0x40;
  *(undefined8 *)(FVar3.Data + lVar9) = *(undefined8 *)(lVar2 + lVar10);
  *(undefined8 *)(FVar3.Data + lVar9 + 8) = uVar5;
  puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar10);
  uVar5 = puVar1[1];
  *(undefined8 *)(FVar3.Data + lVar9 + 0x10) = *puVar1;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x10 + 8) = uVar5;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar10);
  uVar5 = puVar1[1];
  *(undefined8 *)(FVar3.Data + lVar9 + 0x20) = *puVar1;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x20 + 8) = uVar5;
  puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar10);
  uVar5 = puVar1[1];
  *(undefined8 *)(FVar3.Data + lVar9 + 0x30) = *puVar1;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x30 + 8) = uVar5;
  uVar7 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove((void *)(lVar10 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar8) * 0x40 +
                    *(longlong *)&this->field_0x8),(longlong)iVar8 << 6);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143e363b0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar3 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar3 = uVar7;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  lVar6 = *(longlong *)&this->field_0x8 + (longlong)param_1 * 0x20;
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x20;
  *(undefined ***)pFVar5 =
       &___7__TParticlesRange_VFSolverCollisionParticles_Softs_Chaos__X_Softs_Chaos__6B_;
  *(undefined8 *)(pFVar5 + 8) = *(undefined8 *)(lVar6 + 8);
  *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)(lVar6 + 0x10);
  *(undefined4 *)(pFVar5 + 0x14) = *(undefined4 *)(lVar6 + 0x14);
  *(undefined4 *)(pFVar5 + 0x18) = *(undefined4 *)(lVar6 + 0x18);
  *(undefined ***)pFVar5 = &___7FSolverCollisionParticlesRange_Softs_Chaos__6B_;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = uVar7;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove((void *)((longlong)param_1 * 0x20 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar4) * 0x20 +
                    *(longlong *)&this->field_0x8),(longlong)iVar4 << 5);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143e36540

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange> *this,int param_1,
          TArrayCollectionArrayBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar3 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar3 = uVar7;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(param_2 + 2);
  lVar6 = *(longlong *)&this->field_0x8 + (longlong)param_1 * 0x20;
  if (iVar4 == *(int *)&param_2[2].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar4 + 1;
  pFVar5 = *(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar4 * 0x20;
  *(undefined ***)pFVar5 = &___7__TParticlesRange_VFSolverParticles_Softs_Chaos__X_Softs_Chaos__6B_;
  *(undefined8 *)(pFVar5 + 8) = *(undefined8 *)(lVar6 + 8);
  *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)(lVar6 + 0x10);
  *(undefined4 *)(pFVar5 + 0x14) = *(undefined4 *)(lVar6 + 0x14);
  *(undefined4 *)(pFVar5 + 0x18) = *(undefined4 *)(lVar6 + 0x18);
  *(undefined ***)pFVar5 = &___7FSolverParticlesRange_Softs_Chaos__6B_;
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = uVar7;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove((void *)((longlong)param_1 * 0x20 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar4) * 0x20 +
                    *(longlong *)&this->field_0x8),(longlong)iVar4 << 5);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 143e366d0

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FCollisionBodyRanges::EStatus>::
MoveToOtherArray(void *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)((longlong)this + 0x10)) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)((longlong)this + 8);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  (*(FScriptContainerElement **)(param_2 + 1))[iVar5] =
       *(FScriptContainerElement *)(param_1 + lVar1);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1),
            (void *)((longlong)(*(int *)((longlong)this + 0x10) - iVar5) +
                    *(longlong *)((longlong)this + 8)),(longlong)iVar5);
  }
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
  return;
}

// MoveToOtherArray @ 143e36820

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FSoftBodies::EStatus>::MoveToOtherArray
          (void *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < *(int *)((longlong)this + 0x10)) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 2);
  lVar1 = *(longlong *)((longlong)this + 8);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  (*(FScriptContainerElement **)(param_2 + 1))[iVar5] =
       *(FScriptContainerElement *)(param_1 + lVar1);
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove((void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1),
            (void *)((longlong)(*(int *)((longlong)this + 0x10) - iVar5) +
                    *(longlong *)((longlong)this + 8)),(longlong)iVar5);
  }
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
  return;
}

// RemoveAt @ 143e3d490

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext>::RemoveAt
          (TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext> *this,int param_1,int param_2
          )

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x18);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 0x18),(longlong)iVar4 * 0x18);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143e3d550

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
::RemoveAt(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143e3d5f0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
::RemoveAt(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143e3d690

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::RemoveAt(void *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((void *)((longlong)this + 8),param_1,param_2);
  }
  return;
}

// RemoveAt @ 143e3d730

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::RemoveAt(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143e3d7d0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::RemoveAt(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143e3d870

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::RemoveAt(void *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((void *)((longlong)this + 8),param_1,param_2);
  }
  return;
}

// RemoveAt @ 143e3d910

void __thiscall
Chaos::TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::RemoveAt
          (TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this,
          int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>::
    RemoveAtImpl((TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                  *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143e3d9b0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem>::RemoveAt
          (TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem> *this,int param_1,int param_2
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<Chaos::Softs::FEvolutionLinearSystem,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              ((TArray<Chaos::Softs::FEvolutionLinearSystem,TSizedDefaultAllocator<32>_> *)
               &this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAt @ 143e3da50

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity>::RemoveAt
          (TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity> *this,int param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x40 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x40 + (longlong)_Dst),(longlong)iVar4 << 6);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143e3db10

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange>::RemoveAt
          (TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange> *this,int param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x20 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x20 + (longlong)_Dst),(longlong)iVar4 << 5);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143e3dbd0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange>::RemoveAt
          (TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x20 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x20 + (longlong)_Dst),(longlong)iVar4 << 5);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 143e3dc90

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FCollisionBodyRanges::EStatus>::RemoveAt
          (void *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 + *(longlong *)((longlong)this + 8));
    iVar4 = (*(int *)((longlong)this + 0x10) - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2),(longlong)iVar4);
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) - param_2;
  }
  return;
}

// RemoveAt @ 143e3dd40

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FSoftBodies::EStatus>::RemoveAt
          (void *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (void *)((longlong)param_1 + *(longlong *)((longlong)this + 8));
    iVar4 = (*(int *)((longlong)this + 0x10) - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2),(longlong)iVar4);
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) - param_2;
  }
  return;
}

// RemoveAtSwap @ 143e3e370

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove((void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x18),
            (void *)(*(longlong *)&this->field_0x8 +
                    (longlong)(*(int *)&this->field_0x10 - iVar4) * 0x18),(longlong)iVar4 * 0x18);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143e3e440

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
::RemoveAtSwap(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
               *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143e3e4d0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
::RemoveAtSwap(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
               *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143e3e560

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::RemoveAtSwap(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((void *)((longlong)this + 8),param_1,1);
  return;
}

// RemoveAtSwap @ 143e3e5f0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::RemoveAtSwap(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
               *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143e3e680

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::RemoveAtSwap(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
               *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143e3e710

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::RemoveAtSwap(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((void *)((longlong)this + 8),param_1,1);
  return;
}

// RemoveAtSwap @ 143e3e7a0

void __thiscall
Chaos::TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::RemoveAtSwap
          (TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>::
  RemoveAtSwapImpl((TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143e3e830

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Chaos::Softs::FEvolutionLinearSystem,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            ((TArray<Chaos::Softs::FEvolutionLinearSystem,TSizedDefaultAllocator<32>_> *)
             &this->field_0x8,param_1,1);
  return;
}

// RemoveAtSwap @ 143e3e8c0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)((longlong)param_1 * 0x40 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) * 0x40 +
                    *(longlong *)&this->field_0x8),(longlong)iVar3 << 6);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143e3e990

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)((longlong)param_1 * 0x20 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) * 0x20 +
                    *(longlong *)&this->field_0x8),(longlong)iVar3 << 5);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143e3ea60

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&this->field_0x10 + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)((longlong)param_1 * 0x20 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) * 0x20 +
                    *(longlong *)&this->field_0x8),(longlong)iVar3 << 5);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 143e3eb30

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FCollisionBodyRanges::EStatus>::
RemoveAtSwap(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1),
            (void *)((longlong)(*(int *)((longlong)this + 0x10) - iVar3) +
                    *(longlong *)((longlong)this + 8)),(longlong)iVar3);
  }
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
  return;
}

// RemoveAtSwap @ 143e3ebf0

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FSoftBodies::EStatus>::RemoveAtSwap
          (void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)((longlong)this + 0x10)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)((longlong)this + 0x10) + ~param_1;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove((void *)(*(longlong *)((longlong)this + 8) + (longlong)param_1),
            (void *)((longlong)(*(int *)((longlong)this + 0x10) - iVar3) +
                    *(longlong *)((longlong)this + 8)),(longlong)iVar3);
  }
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
  return;
}

// Resize @ 143e467c0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext>::Resize
          (TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::Softs::FEvolutionGroupContext,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x18),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 0x18);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x18),(longlong)iVar6 * 0x18);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143e468f0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
::Resize(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
         *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    memset((void *)((longlong)iVar4 * 0x10 + *(longlong *)this_00),0,
           (longlong)(param_1 - iVar1) << 4);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143e469e0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
::Resize(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
         *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    memset((void *)((longlong)iVar4 * 0x10 + *(longlong *)this_00),0,
           (longlong)(param_1 - iVar1) << 4);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143e46ad0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::Resize(void *this,int param_1)

{
  ForAnyElementType *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = (ForAnyElementType *)((longlong)this + 8);
  iVar1 = *(int *)((longlong)this + 0x10);
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar1,this_00,(int *)((longlong)this + 0x10),
                       (int *)((longlong)this + 0x14));
    memset(this_00->Data + (longlong)iVar4 * 0x10,0,(longlong)(param_1 - iVar1) << 4);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143e46bc0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::Resize(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
         *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    memset((void *)((longlong)iVar4 * 0x10 + *(longlong *)this_00),0,
           (longlong)(param_1 - iVar1) << 4);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143e46cb0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::Resize(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
         *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    memset((void *)((longlong)iVar4 * 0x10 + *(longlong *)this_00),0,
           (longlong)(param_1 - iVar1) << 4);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl((TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143e46da0

void __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::Resize(void *this,int param_1)

{
  ForAnyElementType *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = (ForAnyElementType *)((longlong)this + 8);
  iVar1 = *(int *)((longlong)this + 0x10);
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar1,this_00,(int *)((longlong)this + 0x10),
                       (int *)((longlong)this + 0x14));
    memset(this_00->Data + (longlong)iVar4 * 0x10,0,(longlong)(param_1 - iVar1) << 4);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(this_00,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143e46e90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::Resize
          (TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this,
          int param_1)

{
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,param_1,No);
  return;
}

// Resize @ 143e46eb0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem>::Resize
          (TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem> *this,int param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = &this->field_0x8;
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,param_1 - iVar1,(ForAnyElementType *)this_00,(int *)&this->field_0x10,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::Softs::FEvolutionLinearSystem,int>
              ((void *)(*(longlong *)this_00 + (longlong)iVar4 * 0x48),param_1 - iVar1);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar1) {
    uVar5 = iVar1 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      TArray<Chaos::Softs::FEvolutionLinearSystem,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                ((TArray<Chaos::Softs::FEvolutionLinearSystem,TSizedDefaultAllocator<32>_> *)this_00
                 ,param_1,uVar5);
    }
  }
  return;
}

// Resize @ 143e46fa0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity>::Resize
          (TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,4,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::Softs::FPerParticleDampVelocity,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x40),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 0x40);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x40),(longlong)iVar6 << 6);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143e470c0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange>::Resize
          (TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::Softs::FSolverCollisionParticlesRange,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x20),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 0x20);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x20),(longlong)iVar6 << 5);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143e471e0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange>::Resize
          (TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange> *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)&this->field_0x10;
  puVar2 = &this->field_0x10;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,param_1 - iVar6,(ForAnyElementType *)puVar1,(int *)puVar2,
                       (int *)&this->field_0x14);
    DefaultConstructItems<Chaos::Softs::FSolverParticlesRange,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x20),param_1 - iVar6);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (void *)(*(longlong *)puVar1 + (longlong)param_1 * 0x20);
      iVar6 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x20),(longlong)iVar6 << 5);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143e47300

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FCollisionBodyRanges::EStatus>::Resize
          (void *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 8);
  iVar6 = *(int *)((longlong)this + 0x10);
  piVar2 = (int *)((longlong)this + 0x10);
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar6,pFVar1,piVar2,(int *)((longlong)this + 0x14));
    memset(pFVar1->Data + iVar5,0,(longlong)(param_1 - iVar6));
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      iVar6 = (*piVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(pFVar1->Data + param_1,pFVar1->Data + param_1 + (int)uVar7,(longlong)iVar6);
      }
      *piVar2 = *piVar2 - uVar7;
    }
  }
  return;
}

// Resize @ 143e47410

void __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FSoftBodies::EStatus>::Resize
          (void *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 8);
  iVar6 = *(int *)((longlong)this + 0x10);
  piVar2 = (int *)((longlong)this + 0x10);
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar6,pFVar1,piVar2,(int *)((longlong)this + 0x14));
    memset(pFVar1->Data + iVar5,0,(longlong)(param_1 - iVar6));
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar6) {
    uVar7 = iVar6 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      iVar6 = (*piVar2 - uVar7) - param_1;
      if (iVar6 != 0) {
        memmove(pFVar1->Data + param_1,pFVar1->Data + param_1 + (int)uVar7,(longlong)iVar6);
      }
      *piVar2 = *piVar2 - uVar7;
    }
  }
  return;
}

// SizeOfElem @ 143e4ef40

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext>::SizeOfElem
          (TArrayCollectionArray<Chaos::Softs::FEvolutionGroupContext> *this)

{
  return 0x18;
}

// SizeOfElem @ 143e4ef50

ulong64 __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
::SizeOfElem(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,TSizedDefaultAllocator<32>_>_>
             *this)

{
  return 0x10;
}

// SizeOfElem @ 143e4ef60

ulong64 __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
::SizeOfElem(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&)>,TSizedDefaultAllocator<32>_>_>
             *this)

{
  return 0x10;
}

// SizeOfElem @ 143e4ef70

ulong64 __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::SizeOfElem(void *this)

{
  return 0x10;
}

// SizeOfElem @ 143e4ef80

ulong64 __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::SizeOfElem(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
             *this)

{
  return 0x10;
}

// SizeOfElem @ 143e4ef90

ulong64 __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
::SizeOfElem(TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&)>,TSizedDefaultAllocator<32>_>_>
             *this)

{
  return 0x10;
}

// SizeOfElem @ 143e4efa0

ulong64 __thiscall
Chaos::
TArrayCollectionArray<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode)>,TSizedDefaultAllocator<32>_>_>
::SizeOfElem(void *this)

{
  return 0x10;
}

// SizeOfElem @ 143e4efb0

ulong64 __thiscall
Chaos::TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::SizeOfElem
          (TArrayCollectionArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this)

{
  return 0x50;
}

// SizeOfElem @ 143e4efc0

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem>::SizeOfElem
          (TArrayCollectionArray<Chaos::Softs::FEvolutionLinearSystem> *this)

{
  return 0x48;
}

// SizeOfElem @ 143e4efd0

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity>::SizeOfElem
          (TArrayCollectionArray<Chaos::Softs::FPerParticleDampVelocity> *this)

{
  return 0x40;
}

// SizeOfElem @ 143e4efe0

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange>::SizeOfElem
          (TArrayCollectionArray<Chaos::Softs::FSolverCollisionParticlesRange> *this)

{
  return 0x20;
}

// SizeOfElem @ 143e4eff0

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange>::SizeOfElem
          (TArrayCollectionArray<Chaos::Softs::FSolverParticlesRange> *this)

{
  return 0x20;
}

// SizeOfElem @ 143e4f000

ulong64 __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FCollisionBodyRanges::EStatus>::
SizeOfElem(void *this)

{
  return 1;
}

// SizeOfElem @ 143e4f010

ulong64 __thiscall
Chaos::TArrayCollectionArray<enum_Chaos::Softs::FEvolution::FSoftBodies::EStatus>::SizeOfElem
          (void *this)

{
  return 1;
}

// ~TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_> @ 1440699b0

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
::
~TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
          (TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos__U__TDefaultDelete_V__TGeometryParticleHandleImp_N_02_00_Chaos_______Chaos__6B_
  ;
  DestructItems<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,int>
            (*(TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
               **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// ApplyShrinkPolicy @ 14407b1a0

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
::ApplyShrinkPolicy(TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
                    *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14 - iVar1;
  if (param_2 < iVar3) {
    iVar2 = (int)ROUND((param_1 + param_1) * (float)iVar1 - __real_3f000000) >> 1;
    if (iVar2 < param_2) {
      iVar2 = param_2;
    }
    if ((iVar2 < iVar3) && (*(int *)&this->field_0x14 != iVar1)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// MoveToOtherArray @ 144096f70

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
::MoveToOtherArray(TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
                   *this,int param_1,TArrayCollectionArrayBase *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 8);
  iVar5 = *(int *)(param_2 + 2);
  if (iVar5 == *(int *)&param_2[2].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar5 + 1;
  *(undefined8 *)(*(FScriptContainerElement **)(param_2 + 1) + (longlong)iVar5 * 8) = *puVar1;
  *puVar1 = 0;
  uVar4 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// RemoveAt @ 1440a0a50

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
::RemoveAt(TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
           *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl((TArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x8,param_1,param_2);
  }
  return;
}

// RemoveAtSwap @ 1440a1340

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
::RemoveAtSwap(TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
               *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + 1 <= *(int *)&this->field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAtSwapImpl((TArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,TSizedDefaultAllocator<32>_>
                      *)&this->field_0x8,param_1,1);
  return;
}

// Resize @ 1440af250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
::Resize(TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
         *this,int param_1)

{
  TArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum((TArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,TSizedDefaultAllocator<32>_>
            *)&this->field_0x8,param_1,No);
  return;
}

// SizeOfElem @ 1440b5f40

ulong64 __thiscall
Chaos::
TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
::SizeOfElem(TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
             *this)

{
  return 8;
}

