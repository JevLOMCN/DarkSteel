// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FBacktracer @ 1419862d0

FBacktracer * __thiscall FBacktracer::FBacktracer(FBacktracer *this,FMalloc *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMalloc *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FBacktracer *pFVar5;
  atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
  aVar6;
  FModule *pFVar7;
  int iVar8;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  this->Malloc = param_1;
  (this->CallstackTracer).KnownSet.Malloc = param_1;
  (this->CallstackTracer).KnownSet.HashTable =
       (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
        )0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->CallstackTracer).KnownSet.WriteCriticalSection,4000);
  lpCriticalSection = &(this->FunctionLookups).WriteCriticalSection;
  (this->CallstackTracer).CallstackIdCounter = (atomic<unsigned_int>)0x1;
  (this->FunctionLookups).Malloc = param_1;
  (this->FunctionLookups).HashTable =
       (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
        )0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
  this->bReentranceCheck = false;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->FunctionLookups).HashTable !=
       (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
        )0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HashTable.load(std::memory_order_relaxed) == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Containers\\GrowOnlyLockFreeHash.h"
                         ,0x51,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FBacktracer *)(*pcVar3)();
    return pFVar5;
  }
  for (lVar2 = 0x3f; 0xfffffUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  iVar8 = 1 << ((byte)lVar2 & 0x1f);
  pFVar1 = (this->FunctionLookups).Malloc;
  aVar6 = (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
           )(**(code **)((longlong)*pFVar1 + 0x28))(pFVar1,(longlong)iVar8 * 8 + 0x10,0);
  *(undefined8 *)aVar6 = 0;
  *(int *)((longlong)aVar6 + 8) = iVar8;
  *(undefined4 *)((longlong)aVar6 + 0xc) = 0;
  memset((undefined8 *)((longlong)aVar6 + 0x10),0,(longlong)iVar8 * 8);
  (this->FunctionLookups).HashTable = aVar6;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this->ModulesCapacity = 8;
  this->ModulesNum = 0;
  pFVar7 = (FModule *)(**(code **)((longlong)*this->Malloc + 0x28))(this->Malloc,0xc0,0);
  this->Modules = pFVar7;
  Instance = this;
  return this;
}

// ~FBacktracer @ 141987cd0

void __thiscall FBacktracer::~FBacktracer(FBacktracer *this)

{
  FModule *pFVar1;
  int iVar2;
  atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
  aVar3;
  atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
  aVar4;
  code *pcVar5;
  bool bVar6;
  FModule *pFVar7;
  
  iVar2 = this->ModulesNum;
  pFVar7 = this->Modules;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar1 = pFVar7 + iVar2;
  for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 1) {
    (**(code **)((longlong)*this->Malloc + 0x48))(this->Malloc,pFVar7->Functions);
  }
  aVar3 = (this->FunctionLookups).HashTable;
  while (aVar3 != (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
                   )0x0) {
    aVar3 = *(atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
              *)aVar3;
    (**(code **)((longlong)*(this->FunctionLookups).Malloc + 0x48))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->FunctionLookups).WriteCriticalSection);
  aVar4 = (this->CallstackTracer).KnownSet.HashTable;
  while (aVar4 != (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
                   )0x0) {
    aVar4 = *(atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
              *)aVar4;
    (**(code **)((longlong)*(this->CallstackTracer).KnownSet.Malloc + 0x48))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->CallstackTracer).KnownSet.WriteCriticalSection);
                    /* WARNING: Could not recover jumptable at 0x000141987db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// AddModule @ 14198abd0

void __thiscall FBacktracer::AddModule(FBacktracer *this,ulong64 param_1,wchar_t *param_2)

{
  int *piVar1;
  wchar_t *pwVar2;
  byte *pbVar3;
  uint uVar4;
  FModule *pFVar5;
  code *pcVar6;
  FFunction FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  FFunction *pFVar12;
  byte *pbVar13;
  FModule *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  byte bVar19;
  byte *pbVar20;
  uint *puVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  FFunction *pFVar25;
  longlong lVar26;
  FIdentityFunctor local_res10;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  lVar26 = (longlong)*(int *)(param_1 + 0x3c) + param_1;
  if (!GFullBacktraces) {
    iVar10 = 0;
    if (param_2 != (wchar_t *)0x0) {
      sVar11 = wcslen(param_2);
      iVar10 = (int)sVar11;
    }
    iVar9 = iVar10;
    if (4 < iVar10) {
      iVar9 = 4;
    }
    iVar22 = 0;
    if (0 < iVar9) {
      iVar22 = iVar9;
    }
    if ((iVar22 != 4) ||
       (iVar9 = FGenericPlatformStricmp::Strnicmp
                          (L".exe",param_2 + ((longlong)iVar10 - (longlong)iVar22),4), iVar9 != 0))
    {
      local_68._12_4_ = uStack_8c;
      local_68.Size = 8;
      iVar9 = 0;
      if (0 < iVar10) {
        iVar9 = iVar10;
      }
      local_68.DataPtr = L"Binaries";
      local_78.Size = iVar9;
      pwVar2 = param_2 + ((longlong)iVar10 - (longlong)iVar9);
      local_58.Size = iVar9;
      local_58._12_4_ = local_78._12_4_;
      local_78.DataPtr = pwVar2;
      local_58.DataPtr = pwVar2;
      iVar10 = UE::String::FindFirst(&local_58,&local_68,CaseSensitive);
      if (iVar10 == -1) {
        local_78.Size = 10;
        local_48._12_4_ = uStack_8c;
        local_48.Size = iVar9;
        local_78.DataPtr = L"ThirdParty";
        local_48.DataPtr = pwVar2;
        iVar10 = UE::String::FindFirst(&local_48,&local_78,CaseSensitive);
        if (iVar10 != -1) {
          return;
        }
      }
    }
  }
  lVar24 = (ulonglong)*(ushort *)(lVar26 + 0x14) + lVar26;
  if (lVar26 + 0xa8U <= lVar24 + 0x18U) {
    uVar17 = *(uint *)(lVar26 + 0xa0);
    if ((uVar17 != 0) && (uVar4 = *(uint *)(lVar26 + 0xa4), uVar4 != 0)) {
      uVar18 = 0;
      if (*(ushort *)(lVar26 + 6) != 0) {
        uVar23 = (ulonglong)uVar17;
        do {
          uVar15 = (ulonglong)*(uint *)(lVar24 + 0x24 + uVar18 * 0x28);
          if ((uVar15 <= uVar23) &&
             (uVar15 = *(uint *)(lVar24 + 0x20 + uVar18 * 0x28) + uVar15, uVar23 < uVar15)) {
            if (uVar15 < (ulonglong)uVar17 + (ulonglong)uVar4) {
              return;
            }
            puVar21 = (uint *)(uVar23 + param_1);
            uVar18 = (ulonglong)uVar4 / 0xc;
            if (puVar21 == (uint *)0x0) {
              return;
            }
            if ((int)uVar18 == 0) {
              return;
            }
            pFVar12 = (FFunction *)
                      (**(code **)((longlong)*this->Malloc + 0x28))(this->Malloc,uVar18 * 8,0);
            pFVar25 = pFVar12;
            if ((int)uVar18 != 0) {
              do {
                pbVar20 = (byte *)(puVar21[2] + param_1);
                if ((*pbVar20 & 7) == 1) {
                  pbVar13 = pbVar20 + 4;
                  uVar17 = 0;
                  iVar10 = 0;
                  bVar8 = false;
                  pbVar3 = pbVar13 + (ulonglong)pbVar20[2] * 2;
                  while ((pbVar13 < pbVar3 && (!bVar8))) {
                    bVar19 = pbVar13[1];
                    bVar8 = false;
                    switch(bVar19 & 0xf) {
                    case 0:
                      iVar10 = iVar10 + 8;
                      pbVar13 = pbVar13 + 2;
                      break;
                    case 1:
                      if ((bVar19 & 0xf0) == 0) {
                        iVar10 = iVar10 + (uint)*(ushort *)(pbVar13 + 2) * 8;
                        goto switchD_14198ae6b_caseD_4;
                      }
                      iVar10 = iVar10 + *(int *)(pbVar13 + 2);
                    case 5:
                    case 7:
                    case 9:
                      pbVar13 = pbVar13 + 6;
                      break;
                    case 2:
                      iVar10 = iVar10 + (uint)(bVar19 >> 4) * 8 + 8;
                      pbVar13 = pbVar13 + 2;
                      break;
                    case 3:
                      uVar17 = uVar17 | (pbVar20[3] & 0x1ff0) << 0x13 | (uint)pbVar20[3] << 0x1b |
                                        0x80000000;
                      pbVar13 = pbVar13 + 2;
                      break;
                    case 4:
                    case 6:
                    case 8:
switchD_14198ae6b_caseD_4:
                      pbVar13 = pbVar13 + 4;
                      break;
                    case 10:
                      iVar10 = 0x28;
                      if ((bVar19 & 0xf0) != 0) {
                        iVar10 = 0x30;
                      }
                      pbVar13 = pbVar13 + 2;
                      break;
                    default:
                      bVar8 = true;
                    }
                  }
                  bVar19 = *pbVar20 >> 5 & 1;
                  uVar17 = (bVar19 ^ 1) + (int)((ulonglong)(longlong)iVar10 >> 3) | uVar17;
                  if (bVar19 == 0) {
                    FVar7.RspBias = uVar17;
                    FVar7.Id = *puVar21;
                    *pFVar25 = FVar7;
                    pFVar25 = pFVar25 + 1;
                  }
                  else {
                    pFVar25[-1].RspBias = pFVar25[-1].RspBias + uVar17;
                  }
                }
                puVar21 = puVar21 + 3;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            uVar17 = *(uint *)(lVar26 + 0x50);
            EnterCriticalSection((LPCRITICAL_SECTION)this);
            if ((this->ModulesNum < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            piVar1 = &this->ModulesNum;
            if (this->ModulesCapacity < *piVar1 + 1) {
              iVar10 = this->ModulesCapacity + 8;
              this->ModulesCapacity = iVar10;
              pFVar14 = (FModule *)
                        (**(code **)((longlong)*this->Malloc + 0x38))
                                  (this->Malloc,this->Modules,(longlong)iVar10 * 0x18,0);
              this->Modules = pFVar14;
            }
            iVar10 = this->ModulesNum;
            pFVar5 = this->Modules;
            pFVar14 = pFVar5 + iVar10;
            pFVar14->Id = (int)(param_1 >> 0x10);
            pFVar14->IdSize = (int)((ulonglong)uVar17 + 0xffff >> 0x10);
            *(ulonglong *)&pFVar14->NumFunctions =
                 CONCAT44(uStack_8c,(int)((longlong)pFVar25 - (longlong)pFVar12 >> 3));
            pFVar5[iVar10].Functions = pFVar12;
            *piVar1 = *piVar1 + 1;
            iVar10 = *piVar1;
            pFVar14 = this->Modules;
            if ((*piVar1 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_res10 = SUB81(param_1,0);
            AlgoImpl::
            IntroSortInternal<FBacktracer::FModule,int,FIdentityFunctor,_FBacktracer::AddModule_::__l45::<lambda_1>_>
                      (pFVar14,iVar10,local_res10,(<lambda_1>)local_res10);
            LeaveCriticalSection((LPCRITICAL_SECTION)this);
            return;
          }
          uVar16 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar16;
        } while (uVar16 < *(ushort *)(lVar26 + 6));
      }
    }
  }
  return;
}

// Get @ 141994760

FBacktracer * __cdecl FBacktracer::Get(void)

{
  return Instance;
}

// GetBacktraceId @ 141994940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FBacktracer::GetBacktraceId(FBacktracer *this,void *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar2;
  atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
  aVar3;
  longlong lVar4;
  FMalloc *pFVar5;
  uint uVar6;
  FFunction *pFVar7;
  atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
  aVar8;
  longlong lVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  ulonglong *puVar15;
  uint uVar16;
  FFunction FVar17;
  ulong64 uVar18;
  undefined1 auStack_8a8 [32];
  char local_888;
  bool local_887;
  int local_884;
  uint local_880;
  void *local_878;
  FBacktraceEntry local_870;
  FFunction *local_858;
  ulong64 local_850;
  FFunction local_848 [256];
  ulonglong local_48;
  ulonglong uVar14;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_8a8;
  FVar17 = *(FFunction *)param_1;
  uVar18 = 0;
  uVar10 = 0;
  local_870.Frames = (ulong64 *)0x0;
  cVar11 = '\0';
  local_888 = '\0';
  local_870.Hash = 0;
  local_870.FrameCount = 0;
  local_870._12_4_ = 0;
  while( true ) {
    aVar3 = (this->FunctionLookups).HashTable;
    uVar18 = (uVar18 + (longlong)FVar17) * 0x30be8efa499c249d;
    uVar12 = (int)uVar10 + 1;
    uVar14 = (ulonglong)uVar12;
    local_848[uVar10] = FVar17;
    local_880 = uVar12;
    local_878 = param_1;
    local_850 = uVar18;
    if (aVar3 != (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
                  )0x0) {
      uVar16 = *(int *)((longlong)aVar3 + 8) - 1;
      uVar10 = (longlong)FVar17 * 0x200000 + ~(ulonglong)FVar17;
      uVar10 = (uVar10 >> 0x18 ^ uVar10) * 0x109;
      uVar10 = (uVar10 >> 0xe ^ uVar10) * 0x15;
      uVar6 = ((uint)(uVar10 >> 0x1c) ^ (uint)uVar10) * -0x7fffffff & uVar16;
      lVar9 = (ulonglong)uVar6 + 2;
      lVar4 = *(longlong *)((longlong)aVar3 + lVar9 * 8);
      while (lVar4 != 0) {
        if ((FFunction)(*(ulonglong *)((longlong)aVar3 + lVar9 * 8) & 0xffffffffffff) == FVar17) {
          iVar13 = (int)(short)((ulonglong)
                                *(undefined8 *)((longlong)aVar3 + 0x10 + (ulonglong)uVar6 * 8) >>
                               0x30);
          uVar10 = uVar14;
          goto joined_r0x000141994b98;
        }
        uVar6 = uVar6 + 1 & uVar16;
        lVar9 = (ulonglong)uVar6 + 2;
        lVar4 = *(longlong *)((longlong)aVar3 + lVar9 * 8);
      }
    }
    if (cVar11 == '\0') {
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      local_888 = '\x01';
      if (this->bReentranceCheck != false) {
        local_870.FrameCount = uVar12;
        local_870.Hash = uVar18;
        goto LAB_141994d1b;
      }
    }
    pFVar7 = LookupFunction(this,(ulong64)FVar17,(FLookupState *)&local_870);
    local_858 = pFVar7;
    if (pFVar7 == (FFunction *)0x0) break;
    local_884 = pFVar7->RspBias;
    lpCriticalSection = &(this->FunctionLookups).WriteCriticalSection;
    if (local_884 < 0) {
      local_884 = -1;
    }
    local_887 = this->bReentranceCheck;
    this->bReentranceCheck = true;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    aVar3 = (this->FunctionLookups).HashTable;
    if (aVar3 != (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
                  )0x0) {
      uVar6 = *(int *)((longlong)aVar3 + 8) - 1;
      uVar10 = (longlong)FVar17 * 0x200000 + ~(ulonglong)FVar17;
      uVar10 = (uVar10 >> 0x18 ^ uVar10) * 0x109;
      uVar10 = (uVar10 >> 0xe ^ uVar10) * 0x15;
      uVar12 = ((uint)(uVar10 >> 0x1c) ^ (uint)uVar10) * -0x7fffffff & uVar6;
      lVar9 = (ulonglong)uVar12 + 2;
      lVar4 = *(longlong *)((longlong)aVar3 + lVar9 * 8);
      while (lVar4 != 0) {
        if ((FFunction)(*(ulonglong *)((longlong)aVar3 + lVar9 * 8) & 0xffffffffffff) == FVar17) {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          goto LAB_141994c80;
        }
        uVar12 = uVar12 + 1 & uVar6;
        lVar9 = (ulonglong)uVar12 + 2;
        lVar4 = *(longlong *)((longlong)aVar3 + lVar9 * 8);
      }
    }
    aVar3 = (this->FunctionLookups).HashTable;
    piVar1 = (int *)((longlong)aVar3 + 8);
    if (aVar3 == (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
                  )0x0) {
      iVar13 = 0x400;
LAB_141994bbd:
      pFVar5 = (this->FunctionLookups).Malloc;
      aVar8 = (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
               )(**(code **)((longlong)*pFVar5 + 0x28))(pFVar5,(longlong)iVar13 * 8 + 0x10,0);
      *(atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
        *)aVar8 = aVar3;
      *(int *)((longlong)aVar8 + 8) = iVar13;
      *(int *)((longlong)aVar8 + 0xc) = 0;
      memset((FFunctionLookupSetEntry *)((longlong)aVar8 + 0x10),0,(longlong)iVar13 * 8);
      if ((aVar3 != (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
                     )0x0) && (iVar13 = 0, 0 < *piVar1)) {
        puVar15 = (ulonglong *)((longlong)aVar3 + 0x10);
        do {
          if (*puVar15 != 0) {
            TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::
            HashInsertInternal((FHashHeader *)aVar8,*puVar15 & 0xffffffffffff,
                               (int)(short)(*puVar15 >> 0x30));
          }
          iVar13 = iVar13 + 1;
          puVar15 = puVar15 + 1;
        } while (iVar13 < *piVar1);
      }
      (this->FunctionLookups).HashTable = aVar8;
      param_1 = local_878;
      pFVar7 = local_858;
    }
    else {
      aVar8 = aVar3;
      if (*piVar1 / 2 <= *(int *)((longlong)aVar3 + 0xc)) {
        iVar13 = *piVar1 * 2;
        goto LAB_141994bbd;
      }
    }
    TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::
    HashInsertInternal((FHashHeader *)aVar8,(ulong64)FVar17,local_884);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar14 = (ulonglong)local_880;
    uVar18 = local_850;
LAB_141994c80:
    uVar12 = (uint)uVar14;
    this->bReentranceCheck = local_887;
    iVar13 = pFVar7->RspBias;
    uVar10 = uVar14;
    cVar11 = local_888;
joined_r0x000141994b98:
    if (iVar13 < 0) goto LAB_141994d01;
    uVar12 = (uint)uVar10;
    FVar17 = *(FFunction *)((longlong)param_1 + (longlong)iVar13 * 8);
    param_1 = (void *)((longlong)param_1 + (longlong)iVar13 * 8);
    local_878 = param_1;
    if ((FVar17 == (FFunction)0x0) || (0xfe < uVar12)) goto LAB_141994d01;
  }
  if (GModulesAreInitialized != false) {
    bVar2 = this->bReentranceCheck;
    this->bReentranceCheck = true;
    TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::Emplace
              (&this->FunctionLookups,(ulong64)FVar17,-1,(bool *)0x0);
    this->bReentranceCheck = bVar2;
  }
LAB_141994d01:
  local_870.Frames = (ulong64 *)local_848;
  local_870.FrameCount = uVar12;
  local_870.Hash = uVar18;
  if (local_888 != '\0') {
LAB_141994d1b:
    local_870.Frames = (ulong64 *)local_848;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  uVar12 = FCallstackTracer::AddCallstack(&this->CallstackTracer,&local_870);
  return uVar12;
}

// LookupFunction @ 1419a1f50

FFunction * __thiscall
FBacktracer::LookupFunction(FBacktracer *this,ulong64 param_1,FLookupState *param_2)

{
  int iVar1;
  FModule *pFVar2;
  FModule *pFVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  FFunction *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = 0;
  uVar10 = (uint)(param_1 >> 0x10);
  if ((param_2->Module).IdSize <= uVar10 - (param_2->Module).Id) {
    uVar9 = this->ModulesNum;
    pFVar2 = this->Modules;
    if (((int)uVar9 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) goto code_r0x0001419a2059;
    iVar12 = 0;
    if ((int)uVar9 < 1) {
      return (FFunction *)0x0;
    }
    do {
      iVar1 = (uVar9 >> 1) + iVar12;
      if (pFVar2[iVar1].Id <= uVar10) {
        iVar12 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
    if (iVar12 == 0) {
      return (FFunction *)0x0;
    }
    pFVar3 = this->Modules;
    pFVar2 = pFVar3 + (iVar12 - 1U);
    uVar9 = pFVar2->IdSize;
    uVar5 = pFVar2->NumFunctions;
    uVar6 = *(undefined4 *)&pFVar2->field_0xc;
    (param_2->Module).Id = pFVar2->Id;
    (param_2->Module).IdSize = uVar9;
    (param_2->Module).NumFunctions = uVar5;
    *(undefined4 *)&(param_2->Module).field_0xc = uVar6;
    (param_2->Module).Functions = pFVar3[iVar12 - 1U].Functions;
  }
  uVar9 = (param_2->Module).Id;
  if (uVar10 - uVar9 < (param_2->Module).IdSize) {
    uVar10 = (param_2->Module).NumFunctions;
    pFVar8 = (param_2->Module).Functions;
    if (((int)uVar10 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
code_r0x0001419a2059:
      pcVar4 = (code *)swi(3);
      pFVar8 = (FFunction *)(*pcVar4)();
      return pFVar8;
    }
    if (0 < (int)uVar10) {
      do {
        iVar12 = (uVar10 >> 1) + iVar11;
        if (pFVar8[iVar12].Id <= (int)param_1 + uVar9 * -0x10000) {
          iVar11 = iVar12 + (uVar10 & 1);
        }
        uVar5 = uVar10 >> 1;
        uVar10 = uVar10 >> 1;
      } while (uVar5 != 0);
      if (iVar11 != 0) {
        return (param_2->Module).Functions + (iVar11 - 1);
      }
    }
  }
  return (FFunction *)0x0;
}

// RemoveModule @ 1419a8390

void __thiscall FBacktracer::RemoveModule(FBacktracer *this,ulong64 param_1)

{
  return;
}

