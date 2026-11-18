// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 3

// FImgMediaLoaderBandwidth @ 14ea387f0

FImgMediaLoaderBandwidth * __thiscall
FImgMediaLoaderBandwidth::FImgMediaLoaderBandwidth(FImgMediaLoaderBandwidth *this)

{
  this->Current = 0.0;
  this->Effective = 0.0;
  this->Required = 0.0;
  (this->ReadTimeCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadTimeCache).ArrayNum = 0;
  (this->ReadTimeCache).ArrayMax = 0;
  this->ReadTimeCacheIndex = 0;
  return this;
}

// EmptyCache @ 14ea48080

void __thiscall FImgMediaLoaderBandwidth::EmptyCache(FImgMediaLoaderBandwidth *this)

{
  uint uVar1;
  
  uVar1 = (this->ReadTimeCache).ArrayMax;
  if (-1 < (int)uVar1) {
    (this->ReadTimeCache).ArrayNum = 0;
    this->ReadTimeCacheIndex = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// Update @ 14ea5fb60

void __thiscall
FImgMediaLoaderBandwidth::Update
          (FImgMediaLoaderBandwidth *this,TSharedPtr<FImgMediaFrame,1> *param_1,double param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FImgMediaFrame *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined4 uVar14;
  double dVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  double dVar19;
  undefined4 uVar20;
  undefined1 local_res10 [16];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_d8 [2];
  FString local_c8;
  TIntPoint<int>_u_0 local_b8;
  FString local_b0;
  FFrameRate local_a0;
  undefined1 local_98;
  ulonglong local_90;
  ulong64 local_88;
  char local_80;
  TIntPoint<int>_u_0_s_0 local_7c;
  TIntPoint<int>_u_0 local_74;
  int local_6c;
  int local_68;
  
  if ((param_1->Object == (FImgMediaFrame *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_1->Object;
  lpCriticalSection = &pFVar2->InfoCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ::FString::FString(&local_c8,&(pFVar2->Info).CompressionName);
  local_b8 = (pFVar2->Info).Dim.field0_0x0;
  ::FString::FString(&local_b0,&(pFVar2->Info).FormatName);
  local_a0 = (pFVar2->Info).FrameRate;
  local_98 = (pFVar2->Info).Srgb;
  local_90 = (pFVar2->Info).UncompressedSize;
  local_88 = (pFVar2->Info).NumChannels;
  local_80 = (pFVar2->Info).bHasTiles;
  local_7c = (pFVar2->Info).NumTiles.field0_0x0._s_0;
  local_74 = (pFVar2->Info).TileDimensions.field0_0x0;
  local_6c = (pFVar2->Info).TileBorder;
  local_68 = (pFVar2->Info).NumMipLevels;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar8 = 0;
  this->Current = (float)((double)local_90 / param_2);
  if (local_80 != '\0') {
    iVar9 = 0;
    if (0 < local_68) {
      iVar9 = iVar8;
      do {
        fVar17 = __real_3f800000 / (float)(1 << ((byte)iVar8 & 0x1f));
        iVar11 = -((int)ROUND(__real_bf000000 - (fVar17 + fVar17) * (float)local_7c.X) >> 1);
        iVar6 = -((int)ROUND(__real_bf000000 - (fVar17 + fVar17) * (float)local_7c.Y) >> 1);
        if (iVar6 < 1) {
          iVar6 = 1;
        }
        if (iVar11 < 1) {
          iVar11 = 1;
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + iVar6 * iVar11;
      } while (iVar8 < local_68);
    }
    if ((param_1->Object == (FImgMediaFrame *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iVar9 < 1) {
      iVar9 = 1;
    }
    this->Current = ((float)(int)param_1->Object->NumTilesRead / (float)iVar9) * this->Current;
  }
  if ((this->ReadTimeCache).ArrayNum == 0x40) {
    QueryPerformanceCounter(&local_res20);
    uVar7 = this->ReadTimeCacheIndex;
    uVar12 = 0;
    if ((int)uVar7 < (this->ReadTimeCache).ArrayNum) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    dVar4 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar10 = (this->ReadTimeCache).AllocatorInstance.Data;
    *(double *)(pFVar10 + (longlong)(int)uVar7 * 0x10) = dVar4;
    *(double *)(pFVar10 + (longlong)(int)uVar7 * 0x10 + 8) = param_2;
    uVar7 = this->ReadTimeCacheIndex + 1U & 0x8000003f;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
    }
    this->ReadTimeCacheIndex = uVar7;
  }
  else {
    QueryPerformanceCounter(local_d8);
    iVar8 = (this->ReadTimeCache).ArrayNum;
    piVar1 = &(this->ReadTimeCache).ArrayMax;
    dVar4 = (double)local_d8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->ReadTimeCache).AllocatorInstance,piVar1);
    }
    (this->ReadTimeCache).ArrayNum = iVar8 + 1;
    pFVar10 = (this->ReadTimeCache).AllocatorInstance.Data;
    *(double *)(pFVar10 + (longlong)iVar8 * 0x10) = dVar4;
    *(double *)(pFVar10 + (longlong)iVar8 * 0x10 + 8) = param_2;
  }
  iVar8 = (this->ReadTimeCache).ArrayNum;
  dVar4 = 0.0;
  pFVar10 = (this->ReadTimeCache).AllocatorInstance.Data;
  uVar14 = (undefined4)__real_7fefffffffffffff;
  uVar16 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar18 = (undefined4)__real_ffefffffffffffff;
  uVar20 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  pFVar13 = pFVar10 + (longlong)iVar8 * 0x10;
  while( true ) {
    if ((this->ReadTimeCache).ArrayNum != iVar8) {
      `TCheckedPointerIterator<TTuple<double,double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar10 == pFVar13) break;
    dVar15 = *(double *)pFVar10;
    dVar4 = dVar4 + *(double *)(pFVar10 + 8);
    dVar19 = dVar15;
    if (dVar15 <= (double)CONCAT44(uVar20,uVar18)) {
      dVar19 = (double)CONCAT44(uVar20,uVar18);
    }
    dVar15 = dVar15 - *(double *)(pFVar10 + 8);
    pFVar10 = pFVar10 + 0x10;
    uVar18 = SUB84(dVar19,0);
    uVar20 = (undefined4)((ulonglong)dVar19 >> 0x20);
    if ((double)CONCAT44(uVar16,uVar14) <= dVar15) {
      dVar15 = (double)CONCAT44(uVar16,uVar14);
    }
    uVar14 = SUB84(dVar15,0);
    uVar16 = (undefined4)((ulonglong)dVar15 >> 0x20);
  }
  this->Effective =
       (float)((dVar4 / ((double)CONCAT44(uVar20,uVar18) - (double)CONCAT44(uVar16,uVar14))) *
              (double)this->Current);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

