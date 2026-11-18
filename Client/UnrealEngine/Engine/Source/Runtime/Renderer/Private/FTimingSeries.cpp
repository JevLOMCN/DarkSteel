// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FTimingSeries @ 1448eda70

FTimingSeries * __thiscall FTimingSeries::FTimingSeries(FTimingSeries *this)

{
  (this->TimingValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimingValues).ArrayNum = 0;
  (this->TimingValues).ArrayMax = 0;
  return this;
}

// ~FTimingSeries @ 1448eec60

void __thiscall FTimingSeries::~FTimingSeries(FTimingSeries *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->TimingValues).AllocatorInstance.Data;
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

// ComputeValue @ 144905760

float __thiscall FTimingSeries::ComputeValue(FTimingSeries *this,float *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  FIdentityFunctor local_res8 [8];
  ForAnyElementType local_d8;
  int local_d0;
  int aiStack_cc [41];
  
  uVar13 = (this->TimingValues).ArrayNum;
  local_d8.Data = (FScriptContainerElement *)0x0;
  uVar11 = (int)uVar13 / 3;
  local_d0 = 0;
  aiStack_cc[0] = 0;
  if (uVar11 < uVar13) {
    do {
      uVar15 = 0;
      if ((int)uVar11 < (int)uVar13) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        fVar16 = (float)(*pcVar2)();
        return fVar16;
      }
      pFVar1 = (this->TimingValues).AllocatorInstance.Data + (longlong)(int)uVar11 * 4;
      if (((local_d8.Data <= pFVar1) && (pFVar1 < local_d8.Data + (longlong)aiStack_cc[0] * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        fVar16 = (float)(*pcVar2)();
        return fVar16;
      }
      if (local_d0 == aiStack_cc[0]) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_d8,aiStack_cc);
      }
      lVar10 = (longlong)local_d0;
      uVar11 = uVar11 + 1;
      local_d0 = local_d0 + 1;
      *(undefined4 *)(local_d8.Data + lVar10 * 4) = *(undefined4 *)pFVar1;
      uVar13 = (this->TimingValues).ArrayNum;
    } while (uVar11 < uVar13);
  }
  AlgoImpl::IntroSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_>
            ((float *)local_d8.Data,local_d0,local_res8[0],(TLess<void> *)local_res8);
  fVar6 = __real_7f7fffff;
  fVar5 = __real_ff7fffff;
  fVar4 = __real_3dcccccd;
  fVar3 = __real_42c80000;
  fVar16 = __real_3f000000;
  *param_1 = 0.0;
  fVar22 = 0.0;
  iVar14 = local_d0;
  uVar13 = 0;
  do {
    uVar15 = uVar13 + 1;
    fVar20 = 0.0;
    fVar19 = (float)(iVar14 / 2);
    uVar11 = (uint)(fVar19 - fVar19 * (float)uVar15 * fVar4);
    lVar10 = (longlong)(int)uVar11;
    iVar8 = (int)((float)(iVar14 - iVar14 / 2) * (float)uVar15 * fVar4 + fVar19);
    if (lVar10 < iVar8) {
      uVar12 = iVar8 - uVar11;
      fVar21 = fVar5;
      fVar19 = fVar6;
      do {
        uVar9 = 0;
        if ((int)uVar11 < iVar14) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar14 = local_d0, bVar7)) {
          pcVar2 = (code *)swi(3);
          fVar16 = (float)(*pcVar2)();
          return fVar16;
        }
        uVar11 = uVar11 + 1;
        fVar17 = *(float *)(local_d8.Data + lVar10 * 4);
        lVar10 = lVar10 + 1;
        fVar20 = fVar20 + fVar17;
        fVar18 = fVar17;
        if (fVar19 <= fVar17) {
          fVar18 = fVar19;
        }
        fVar19 = fVar18;
        if (fVar17 <= fVar21) {
          fVar17 = fVar21;
        }
        fVar21 = fVar17;
      } while (lVar10 < iVar8);
      if (uVar12 == 0) goto LAB_144905a7e;
      fVar18 = (float)uVar12;
      fVar21 = (fVar17 - fVar19) * fVar16;
      fVar20 = fVar20 / fVar18;
      fVar19 = (fVar18 * fVar3) / (float)iVar14;
    }
    else {
LAB_144905a7e:
      fVar21 = 0.0;
      fVar19 = 0.0;
      fVar20 = 0.0;
    }
    if (((uVar13 != 0) && (fVar20 * fVar16 < fVar21)) ||
       (*param_1 = fVar19, fVar22 = fVar20, uVar13 = uVar15, 9 < uVar15)) {
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      return fVar22;
    }
  } while( true );
}

