// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 28

// ~TArrayCollectionArray<unsigned_char> @ 1463a4980

void __thiscall
Chaos::TArrayCollectionArray<unsigned_char>::~TArrayCollectionArray<unsigned_char>
          (TArrayCollectionArray<unsigned_char> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_E_Chaos__6B_;
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

// ~TArrayCollectionArray<Chaos::FImplicitObject_const_*> @ 1463a49a0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FImplicitObject_const_*>::
~TArrayCollectionArray<Chaos::FImplicitObject_const_*>
          (TArrayCollectionArray<Chaos::FImplicitObject_const_*> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_PEBVFImplicitObject_Chaos___Chaos__6B_;
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

// ~TArrayCollectionArray<Chaos::PMatrix<double,3,3>_> @ 1463a49c0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::PMatrix<double,3,3>_>::
~TArrayCollectionArray<Chaos::PMatrix<double,3,3>_>
          (TArrayCollectionArray<Chaos::PMatrix<double,3,3>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_V__PMatrix_N_02_02_Chaos___Chaos__6B_;
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

// ~TArrayCollectionArray<Chaos::TUniformGrid<double,3>_> @ 1463a49e0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TUniformGrid<double,3>_>::
~TArrayCollectionArray<Chaos::TUniformGrid<double,3>_>
          (TArrayCollectionArray<Chaos::TUniformGrid<double,3>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this = &___7__TArrayCollectionArray_V__TUniformGrid_N_02_Chaos___Chaos__6B_;
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

// ApplyShrinkPolicy @ 1463aa4f0

void __thiscall
Chaos::TArrayCollectionArray<unsigned_char>::ApplyShrinkPolicy
          (TArrayCollectionArray<unsigned_char> *this,float param_1,int param_2)

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

// ApplyShrinkPolicy @ 1463aa570

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FImplicitObject_const_*>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::FImplicitObject_const_*> *this,float param_1,int param_2)

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

// ApplyShrinkPolicy @ 1463aa5f0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::PMatrix<double,3,3>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::PMatrix<double,3,3>_> *this,float param_1,int param_2)

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
                (0x80,0x10,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,
                 (int *)&this->field_0x14);
    }
  }
  return;
}

// ApplyShrinkPolicy @ 1463aa670

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TUniformGrid<double,3>_>::ApplyShrinkPolicy
          (TArrayCollectionArray<Chaos::TUniformGrid<double,3>_> *this,float param_1,int param_2)

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
                (0x58,8,iVar1,(ForAnyElementType *)&this->field_0x8,iVar1,(int *)&this->field_0x14);
    }
  }
  return;
}

// MoveToOtherArray @ 1463bcd30

void __thiscall
Chaos::TArrayCollectionArray<unsigned_char>::MoveToOtherArray
          (TArrayCollectionArray<unsigned_char> *this,int param_1,TArrayCollectionArrayBase *param_2
          )

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

// MoveToOtherArray @ 1463bce80

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FImplicitObject_const_*>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::FImplicitObject_const_*> *this,int param_1,
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

// MoveToOtherArray @ 1463bcfd0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::PMatrix<double,3,3>_>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::PMatrix<double,3,3>_> *this,int param_1,
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
  lVar10 = (longlong)param_1 * 0x80;
  if (iVar8 == *(int *)&param_2[2].field_0x4) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1080,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar8 + 1;
  uVar5 = ((undefined8 *)(lVar2 + lVar10))[1];
  FVar3.Data = *(FScriptContainerElement **)(param_2 + 1);
  lVar9 = (longlong)iVar8 * 0x80;
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
  puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar10);
  uVar5 = puVar1[1];
  *(undefined8 *)(FVar3.Data + lVar9 + 0x40) = *puVar1;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x40 + 8) = uVar5;
  puVar1 = (undefined8 *)(lVar2 + 0x50 + lVar10);
  uVar5 = puVar1[1];
  *(undefined8 *)(FVar3.Data + lVar9 + 0x50) = *puVar1;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x50 + 8) = uVar5;
  puVar1 = (undefined8 *)(lVar2 + 0x60 + lVar10);
  uVar5 = puVar1[1];
  *(undefined8 *)(FVar3.Data + lVar9 + 0x60) = *puVar1;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x60 + 8) = uVar5;
  puVar1 = (undefined8 *)(lVar2 + 0x70 + lVar10);
  uVar5 = puVar1[1];
  *(undefined8 *)(FVar3.Data + lVar9 + 0x70) = *puVar1;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x70 + 8) = uVar5;
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
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar8) * 0x80 +
                    *(longlong *)&this->field_0x8),(longlong)iVar8 << 7);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// MoveToOtherArray @ 1463bd180

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TUniformGrid<double,3>_>::MoveToOtherArray
          (TArrayCollectionArray<Chaos::TUniformGrid<double,3>_> *this,int param_1,
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
  lVar10 = (longlong)param_1 * 0x58;
  if (iVar8 == *(int *)&param_2[2].field_0x4) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,(ForAnyElementType *)(param_2 + 1),(int *)&param_2[2].field_0x4);
  }
  *(int *)(param_2 + 2) = iVar8 + 1;
  uVar5 = ((undefined8 *)(lVar2 + lVar10))[1];
  lVar9 = (longlong)iVar8 * 0x58;
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
  puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar10);
  uVar5 = puVar1[1];
  *(undefined8 *)(FVar3.Data + lVar9 + 0x30) = *puVar1;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x30 + 8) = uVar5;
  puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar10);
  uVar5 = puVar1[1];
  *(undefined8 *)(FVar3.Data + lVar9 + 0x40) = *puVar1;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x40 + 8) = uVar5;
  *(undefined8 *)(FVar3.Data + lVar9 + 0x50) = *(undefined8 *)(lVar2 + 0x50 + lVar10);
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
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar8) * 0x58 +
                    *(longlong *)&this->field_0x8),(longlong)iVar8 * 0x58);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAt @ 1463c23c0

void __thiscall
Chaos::TArrayCollectionArray<unsigned_char>::RemoveAt
          (TArrayCollectionArray<unsigned_char> *this,int param_1,int param_2)

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

// RemoveAt @ 1463c2470

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FImplicitObject_const_*>::RemoveAt
          (TArrayCollectionArray<Chaos::FImplicitObject_const_*> *this,int param_1,int param_2)

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

// RemoveAt @ 1463c2520

void __thiscall
Chaos::TArrayCollectionArray<Chaos::PMatrix<double,3,3>_>::RemoveAt
          (TArrayCollectionArray<Chaos::PMatrix<double,3,3>_> *this,int param_1,int param_2)

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
    _Dst = (void *)((longlong)param_1 * 0x80 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x80 + (longlong)_Dst),(longlong)iVar4 << 7);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAt @ 1463c25e0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TUniformGrid<double,3>_>::RemoveAt
          (TArrayCollectionArray<Chaos::TUniformGrid<double,3>_> *this,int param_1,int param_2)

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
    _Dst = (void *)((longlong)param_1 * 0x58 + *(longlong *)&this->field_0x8);
    iVar4 = (*(int *)&this->field_0x10 - param_1) - param_2;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)param_2 * 0x58 + (longlong)_Dst),(longlong)iVar4 * 0x58);
    }
    *(int *)&this->field_0x10 = *(int *)&this->field_0x10 - param_2;
  }
  return;
}

// RemoveAtSwap @ 1463c2810

void __thiscall
Chaos::TArrayCollectionArray<unsigned_char>::RemoveAtSwap
          (TArrayCollectionArray<unsigned_char> *this,int param_1)

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

// RemoveAtSwap @ 1463c28d0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FImplicitObject_const_*>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::FImplicitObject_const_*> *this,int param_1)

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

// RemoveAtSwap @ 1463c2990

void __thiscall
Chaos::TArrayCollectionArray<Chaos::PMatrix<double,3,3>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::PMatrix<double,3,3>_> *this,int param_1)

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
    memmove((void *)((longlong)param_1 * 0x80 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar3) * 0x80 +
                    *(longlong *)&this->field_0x8),(longlong)iVar3 << 7);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// RemoveAtSwap @ 1463c2a60

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TUniformGrid<double,3>_>::RemoveAtSwap
          (TArrayCollectionArray<Chaos::TUniformGrid<double,3>_> *this,int param_1)

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
    memmove((void *)((longlong)param_1 * 0x58 + *(longlong *)&this->field_0x8),
            (void *)((longlong)(*(int *)&this->field_0x10 - iVar4) * 0x58 +
                    *(longlong *)&this->field_0x8),(longlong)iVar4 * 0x58);
  }
  *(int *)&this->field_0x10 = *(int *)&this->field_0x10 + -1;
  return;
}

// Resize @ 1463c42b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<unsigned_char>::Resize
          (TArrayCollectionArray<unsigned_char> *this,int param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1,No);
  return;
}

// Resize @ 1463c42d0

void __thiscall
Chaos::TArrayCollectionArray<Chaos::FImplicitObject_const_*>::Resize
          (TArrayCollectionArray<Chaos::FImplicitObject_const_*> *this,int param_1)

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

// Resize @ 1463c43f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TArrayCollectionArray<Chaos::PMatrix<double,3,3>_>::Resize
          (TArrayCollectionArray<Chaos::PMatrix<double,3,3>_> *this,int param_1)

{
  TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_> *)&this->field_0x8,
             param_1,No);
  return;
}

// Resize @ 1463c4410

void __thiscall
Chaos::TArrayCollectionArray<Chaos::TUniformGrid<double,3>_>::Resize
          (TArrayCollectionArray<Chaos::TUniformGrid<double,3>_> *this,int param_1)

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
              (0x58,8,param_1 - iVar4,(ForAnyElementType *)&this->field_0x8,(int *)puVar1,
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
      _Dst = (void *)(*(longlong *)&this->field_0x8 + (longlong)param_1 * 0x58);
      iVar4 = (*(int *)puVar1 - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar5 * 0x58),(longlong)iVar4 * 0x58);
      }
      *(uint *)puVar1 = *(int *)puVar1 - uVar5;
    }
  }
  return;
}

// SizeOfElem @ 1463c9b70

ulong64 __thiscall
Chaos::TArrayCollectionArray<unsigned_char>::SizeOfElem(TArrayCollectionArray<unsigned_char> *this)

{
  return 1;
}

// SizeOfElem @ 1463c9b80

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::FImplicitObject_const_*>::SizeOfElem
          (TArrayCollectionArray<Chaos::FImplicitObject_const_*> *this)

{
  return 8;
}

// SizeOfElem @ 1463c9b90

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::PMatrix<double,3,3>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::PMatrix<double,3,3>_> *this)

{
  return 0x80;
}

// SizeOfElem @ 1463c9ba0

ulong64 __thiscall
Chaos::TArrayCollectionArray<Chaos::TUniformGrid<double,3>_>::SizeOfElem
          (TArrayCollectionArray<Chaos::TUniformGrid<double,3>_> *this)

{
  return 0x58;
}

