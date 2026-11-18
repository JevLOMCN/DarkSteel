// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: delayimp
// Functions: 39

// GuardedWrite<`__delayLoadHelper2'::__l2::<lambda_1>_> @ 150157798

/* WARNING: Removing unreachable block (ram,0x0001501577fc) */

void __cdecl
GuardedWrite<___delayLoadHelper2_::__l2::<lambda_1>_>
          (void *param_1,ulong64 param_2,<lambda_1> *param_3)

{
  bool bVar1;
  uchar uVar2;
  ulong local_res18 [2];
  
  if (((_load_config_used.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT) == 0) ||
     (__bChangeProtectionOfWholeDloadSection != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    uVar2 = DloadGetSRWLockFunctionPointers();
    if (uVar2 == '\0') {
      do {
      } while (DloadSrwLock != 0);
      LOCK();
      DloadSrwLock = 1;
      UNLOCK();
    }
    else {
      (*__guard_dispatch_icall_fptr)(&DloadSrwLock);
    }
    DloadProtectSection(param_1,param_2,4,local_res18);
  }
  *param_3->ppfnIATEntry = param_3->pfnRet;
  if (bVar1) {
    DloadProtectSection(param_1,param_2,local_res18[0],local_res18);
    uVar2 = DloadGetSRWLockFunctionPointers();
    if (uVar2 == '\0') {
      DloadSrwLock = 0;
    }
    else {
      (*__guard_dispatch_icall_fptr)(&DloadSrwLock);
    }
  }
  return;
}

// GuardedWrite<`__FUnloadDelayLoadedDLL2'::__l8::<lambda_1>_> @ 15015788c

/* WARNING: Removing unreachable block (ram,0x0001501578f3) */

void __cdecl
GuardedWrite<___FUnloadDelayLoadedDLL2_::__l8::<lambda_1>_>
          (void *param_1,ulong64 param_2,<lambda_1> *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  uchar uVar3;
  word *pwVar4;
  word *pwVar5;
  ulonglong uVar6;
  ulong local_res18 [4];
  
  if (((_load_config_used.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT) == 0) ||
     (__bChangeProtectionOfWholeDloadSection != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    uVar3 = DloadGetSRWLockFunctionPointers();
    if (uVar3 == '\0') {
      do {
      } while (DloadSrwLock != 0);
      LOCK();
      DloadSrwLock = 1;
      UNLOCK();
    }
    else {
      (*__guard_dispatch_icall_fptr)(&DloadSrwLock);
    }
    DloadProtectSection(param_1,param_2,4,local_res18);
  }
  pwVar4 = (word *)(switchD_1501dbc7b::caseD_1.e_magic + param_3->pidd->rvaUnloadIAT);
  pwVar5 = (word *)(switchD_1501dbc7b::caseD_1.e_magic + param_3->pidd->rvaIAT);
  if (param_3->countOfImports != 0) {
    uVar6 = (ulonglong)param_3->countOfImports;
    do {
      uVar1 = *(undefined8 *)pwVar4;
      pwVar4 = pwVar4 + 4;
      *(undefined8 *)pwVar5 = uVar1;
      pwVar5 = pwVar5 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (bVar2) {
    DloadProtectSection(param_1,param_2,local_res18[0],local_res18);
    uVar3 = DloadGetSRWLockFunctionPointers();
    if (uVar3 == '\0') {
      DloadSrwLock = 0;
    }
    else {
      (*__guard_dispatch_icall_fptr)(&DloadSrwLock);
    }
  }
  return;
}

// PFromRva<__int64_(__cdecl**)(void)> @ 1501579ac

_func___cdecl_long64 ** __cdecl PFromRva<__int64_(__cdecl**)(void)>(ulong param_1)

{
  return (_func___cdecl_long64 **)(switchD_1501dbc7b::caseD_1.e_magic + param_1);
}

// PFromRva<HINSTANCE___*_*> @ 1501579c0

HINSTANCE__ ** __cdecl PFromRva<HINSTANCE___*_*>(ulong param_1)

{
  return (HINSTANCE__ **)(switchD_1501dbc7b::caseD_1.e_magic + param_1);
}

// PFromRva<_IMAGE_IMPORT_BY_NAME_*> @ 1501579d4

_IMAGE_IMPORT_BY_NAME * __cdecl PFromRva<_IMAGE_IMPORT_BY_NAME_*>(ulong param_1)

{
  return (_IMAGE_IMPORT_BY_NAME *)(switchD_1501dbc7b::caseD_1.e_magic + param_1);
}

// PFromRva<_IMAGE_THUNK_DATA64_*> @ 1501579e8

_IMAGE_THUNK_DATA64 * __cdecl PFromRva<_IMAGE_THUNK_DATA64_*>(ulong param_1)

{
  return (_IMAGE_THUNK_DATA64 *)(switchD_1501dbc7b::caseD_1.e_magic + param_1);
}

// PFromRva<char_const_*> @ 1501579fc

char * __cdecl PFromRva<char_const_*>(ulong param_1)

{
  return switchD_1501dbc7b::caseD_1.e_magic + param_1;
}

// PFromRva<ImgDelayDescr_const_*> @ 150157a10

ImgDelayDescr * __cdecl PFromRva<ImgDelayDescr_const_*>(ulong param_1)

{
  return (ImgDelayDescr *)(switchD_1501dbc7b::caseD_1.e_magic + param_1);
}

// PFromRva<_IMAGE_THUNK_DATA64_const_*> @ 150157a24

_IMAGE_THUNK_DATA64 * __cdecl PFromRva<_IMAGE_THUNK_DATA64_const_*>(ulong param_1)

{
  return (_IMAGE_THUNK_DATA64 *)(switchD_1501dbc7b::caseD_1.e_magic + param_1);
}

// <lambda_1> @ 150157a38

<lambda_1> * __thiscall
`__delayLoadHelper2'::__l2::<lambda_1>::<lambda_1>
          (void *this,_func___cdecl_long64 ***param_1,_func___cdecl_long64 **param_2)

{
  *(_func___cdecl_long64 ***)this = *param_1;
  *(_func___cdecl_long64 **)((longlong)this + 8) = *param_2;
  return this;
}

// <lambda_1> @ 150157a50

<lambda_1> * __thiscall
`__FUnloadDelayLoadedDLL2'::__l8::<lambda_1>::<lambda_1>
          (void *this,ImgDelayDescr **param_1,uint *param_2)

{
  *(ImgDelayDescr **)this = *param_1;
  *(uint *)((longlong)this + 8) = *param_2;
  return this;
}

// operator() @ 150157a68

void __thiscall `__delayLoadHelper2'::__l2::<lambda_1>::operator()(void *this)

{
  **(undefined8 **)this = *(undefined8 *)((longlong)this + 8);
  return;
}

// operator() @ 150157a7c

void __thiscall `__FUnloadDelayLoadedDLL2'::__l8::<lambda_1>::operator()(void *this)

{
  undefined8 uVar1;
  word *pwVar2;
  word *pwVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*(uint *)((longlong)this + 8);
  pwVar2 = (word *)(switchD_1501dbc7b::caseD_1.e_magic + *(uint *)(*(longlong *)this + 0x18));
  pwVar3 = (word *)(switchD_1501dbc7b::caseD_1.e_magic + *(uint *)(*(longlong *)this + 0xc));
  if (*(uint *)((longlong)this + 8) != 0) {
    do {
      uVar1 = *(undefined8 *)pwVar2;
      pwVar2 = pwVar2 + 4;
      *(undefined8 *)pwVar3 = uVar1;
      pwVar3 = pwVar3 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// CountOfImports @ 150157ab8

uint __cdecl CountOfImports(_IMAGE_THUNK_DATA64 *param_1)

{
  <unnamed_type_u1> <Var1;
  uint uVar2;
  
  uVar2 = 0;
  <Var1 = (<unnamed_type_u1>)(param_1->u1).ForwarderString;
  while (<Var1.ForwarderString != 0) {
    param_1 = param_1 + 1;
    uVar2 = uVar2 + 1;
    <Var1 = (<unnamed_type_u1>)param_1->u1;
  }
  return uVar2;
}

// DloadAcquireSectionWriteAccess @ 150157ad4

/* WARNING: Removing unreachable block (ram,0x000150157b29) */

void __cdecl DloadAcquireSectionWriteAccess(void)

{
  uchar uVar1;
  
  if (((_load_config_used.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT) != 0) &&
     (__bChangeProtectionOfWholeDloadSection != 0)) {
    uVar1 = DloadGetSRWLockFunctionPointers();
    if (uVar1 == '\0') {
      do {
      } while (DloadSrwLock != 0);
      LOCK();
      DloadSrwLock = 1;
      UNLOCK();
    }
    else {
      (*__guard_dispatch_icall_fptr)();
    }
    DloadSectionLockCount = DloadSectionLockCount + 1;
    if (DloadSectionLockCount == 1) {
      DloadProtectSection((void *)0x0,0,4,&DloadSectionOldProtection);
    }
    uVar1 = DloadGetSRWLockFunctionPointers();
    if (uVar1 != '\0') {
      (*__guard_dispatch_icall_fptr)(&DloadSrwLock);
      return;
    }
    DloadSrwLock = 0;
  }
  return;
}

// DloadGetSRWLockFunctionPointers @ 150157b94

uchar __cdecl DloadGetSRWLockFunctionPointers(void)

{
  HINSTANCE__ *pHVar1;
  HMODULE hModule;
  _func___cdecl_void_ulong64_ptr *p_Var2;
  HINSTANCE__ *pHVar3;
  bool bVar4;
  
  if (DloadKernel32 != (HINSTANCE__ *)&DAT_00000001) {
    if (DloadKernel32 != (HINSTANCE__ *)0x0) {
      return '\x01';
    }
    hModule = GetModuleHandleW(L"KERNEL32.DLL");
    if (((hModule == (HMODULE)0x0) ||
        (p_Var2 = (_func___cdecl_void_ulong64_ptr *)
                  GetProcAddress(hModule,"AcquireSRWLockExclusive"),
        p_Var2 == (_func___cdecl_void_ulong64_ptr *)0x0)) ||
       (DloadAcquireSRWLockExclusive = p_Var2,
       p_Var2 = (_func___cdecl_void_ulong64_ptr *)GetProcAddress(hModule,"ReleaseSRWLockExclusive"),
       p_Var2 == (_func___cdecl_void_ulong64_ptr *)0x0)) {
      hModule = (HMODULE)&DAT_00000001;
      p_Var2 = DloadReleaseSRWLockExclusive;
    }
    DloadReleaseSRWLockExclusive = p_Var2;
    pHVar3 = (HINSTANCE__ *)0x0;
    LOCK();
    bVar4 = DloadKernel32 != (HINSTANCE__ *)0x0;
    pHVar1 = (HINSTANCE__ *)hModule;
    if (bVar4) {
      pHVar3 = DloadKernel32;
      pHVar1 = DloadKernel32;
    }
    DloadKernel32 = pHVar1;
    UNLOCK();
    if ((bVar4) || (hModule != (HMODULE)&DAT_00000001)) {
      return pHVar3 != (HINSTANCE__ *)&DAT_00000001;
    }
  }
  return '\0';
}

// DloadLock @ 150157c38

/* WARNING: Removing unreachable block (ram,0x000150157c6f) */

void __cdecl DloadLock(void)

{
  uchar uVar1;
  
  uVar1 = DloadGetSRWLockFunctionPointers();
  if (uVar1 == '\0') {
    do {
    } while (DloadSrwLock != 0);
    LOCK();
    DloadSrwLock = 1;
    UNLOCK();
    return;
  }
  (*__guard_dispatch_icall_fptr)(&DloadSrwLock);
  return;
}

// DloadMakePermanentImageCommit @ 150157c88

void __cdecl DloadMakePermanentImageCommit(void *param_1,ulong64 param_2)

{
  code *pcVar1;
  SIZE_T SVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  _MEMORY_BASIC_INFORMATION local_68 [2];
  
  puVar6 = auStack_88;
  SVar2 = VirtualQuery(param_1,local_68,0x30);
  if (SVar2 == 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x19);
    puVar6 = auStack_80;
  }
  if ((puVar6[0x44] & 0x44) != 0) {
    *(undefined8 *)(puVar6 + -8) = 0x150157cc8;
    GetSystemInfo((LPSYSTEM_INFO)(puVar6 + 0x50));
    uVar8 = (ulonglong)*(uint *)(puVar6 + 0x54);
    puVar7 = (undefined4 *)(-uVar8 & (ulonglong)param_1);
    uVar4 = *(uint *)(puVar6 + 0x54) - 1;
    uVar5 = (((ulonglong)((uVar4 & (uint)param_2) + (uVar4 & (uint)param_1)) - 1) + uVar8) / uVar8 +
            param_2 / uVar8;
    uVar3 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      do {
        LOCK();
        *puVar7 = *puVar7;
        UNLOCK();
        puVar7 = (undefined4 *)((longlong)puVar7 + uVar8);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

// DloadObtainSection @ 150157d28

void * __cdecl DloadObtainSection(ulong *param_1,ulong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(int)switchD_1501dbc7b::caseD_1.e_lfanew;
  if (0xd < *(uint *)(switchD_1501dbc7b::caseD_1.e_program + lVar3 + 0x44)) {
    uVar2 = 0;
    if (*(uint *)(switchD_1501dbc7b::caseD_1.e_program + lVar3 + 0xb0) != 0) {
      lVar1 = (ulonglong)*(ushort *)((longlong)switchD_1501dbc7b::caseD_1.e_res_4_ + lVar3 + -8) +
              lVar3 + 0x140000018;
      if (*(ushort *)(switchD_1501dbc7b::caseD_1.e_magic + lVar3 + 6) != 0) {
        do {
          if ((*(uint *)(lVar1 + 0xc) <=
               *(uint *)(switchD_1501dbc7b::caseD_1.e_magic +
                        (ulonglong)*(uint *)(switchD_1501dbc7b::caseD_1.e_program + lVar3 + 0xb0) +
                        0xc)) &&
             (*(uint *)(switchD_1501dbc7b::caseD_1.e_magic +
                       (ulonglong)*(uint *)(switchD_1501dbc7b::caseD_1.e_program + lVar3 + 0xb0) +
                       0xc) < *(uint *)(lVar1 + 0xc) + *(ulong *)(lVar1 + 8))) {
            *param_1 = *(ulong *)(lVar1 + 8);
            *param_2 = *(ulong *)(lVar1 + 0x24);
            return switchD_1501dbc7b::caseD_1.e_magic + *(uint *)(lVar1 + 0xc);
          }
          uVar2 = uVar2 + 1;
          lVar1 = lVar1 + 0x28;
        } while (uVar2 < *(ushort *)(switchD_1501dbc7b::caseD_1.e_magic + lVar3 + 6));
      }
    }
  }
  return (void *)0x0;
}

// DloadProtectSection @ 150157dc8

void __cdecl DloadProtectSection(void *param_1,ulong64 param_2,ulong param_3,ulong *param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  BOOL BVar3;
  void *lpAddress;
  void *pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  ulong local_28;
  uint local_24 [3];
  
  puVar6 = auStack_48;
  lpAddress = DloadObtainSection(&local_28,local_24);
  if (lpAddress == (void *)0x0) {
    *param_4 = 4;
    return;
  }
  if (DloadSectionCommitPermanent == 0) {
    DloadSectionCommitPermanent = 1;
    puVar6 = auStack_48;
    if ((local_24[0] & 0x80000000) == 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar6 = auStack_40;
    }
    *(undefined8 *)(puVar6 + -8) = 0x150157e42;
    DloadMakePermanentImageCommit(lpAddress,(ulonglong)*(uint *)(puVar6 + 0x20));
  }
  if (param_1 == (void *)0x0) {
    if (param_2 != 0) goto LAB_150157e53;
LAB_150157e83:
    param_2 = (ulong64)*(uint *)(puVar6 + 0x20);
  }
  else {
    puVar2 = puVar6;
    if (param_2 == 0) {
LAB_150157e53:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar5 = puVar6 + 8;
      puVar6 = puVar6 + 8;
      puVar2 = puVar5;
      if (param_1 == (void *)0x0) goto LAB_150157e83;
    }
    puVar6 = puVar2;
    pvVar4 = (void *)((ulonglong)*(uint *)(puVar6 + 0x20) + (longlong)lpAddress);
    if ((((pvVar4 <= lpAddress) || ((void *)((longlong)param_1 + param_2) <= param_1)) ||
        (param_1 < lpAddress)) ||
       (lpAddress = param_1, pvVar4 < (void *)((longlong)param_1 + param_2))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar6 = puVar6 + 8;
      lpAddress = param_1;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x150157e9c;
  BVar3 = VirtualProtect(lpAddress,param_2,param_3,param_4);
  if (BVar3 == 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x19);
  }
  return;
}

// DloadReleaseSectionWriteAccess @ 150157ec8

/* WARNING: Removing unreachable block (ram,0x000150157f19) */

void __cdecl DloadReleaseSectionWriteAccess(void)

{
  uchar uVar1;
  ulong local_res10 [6];
  
  if (((_load_config_used.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT) != 0) &&
     (__bChangeProtectionOfWholeDloadSection != 0)) {
    uVar1 = DloadGetSRWLockFunctionPointers();
    if (uVar1 == '\0') {
      do {
      } while (DloadSrwLock != 0);
      LOCK();
      DloadSrwLock = 1;
      UNLOCK();
    }
    else {
      (*__guard_dispatch_icall_fptr)();
    }
    DloadSectionLockCount = DloadSectionLockCount - 1;
    if (DloadSectionLockCount == 0) {
      DloadProtectSection((void *)0x0,0,DloadSectionOldProtection,local_res10);
    }
    uVar1 = DloadGetSRWLockFunctionPointers();
    if (uVar1 == '\0') {
      DloadSrwLock = 0;
    }
    else {
      (*__guard_dispatch_icall_fptr)(&DloadSrwLock);
    }
  }
  return;
}

// DloadUnlock @ 150157f78

void __cdecl DloadUnlock(void)

{
  uchar uVar1;
  
  uVar1 = DloadGetSRWLockFunctionPointers();
  if (uVar1 != '\0') {
    (*__guard_dispatch_icall_fptr)(&DloadSrwLock);
    return;
  }
  DloadSrwLock = 0;
  return;
}

// FLoadedAtPreferredAddress @ 150157fb4

bool __cdecl FLoadedAtPreferredAddress(_IMAGE_NT_HEADERS64 *param_1,HINSTANCE__ *param_2)

{
  return param_2 == (HINSTANCE__ *)(param_1->OptionalHeader).ImageBase;
}

// IndexFromPImgThunkData @ 150157fc4

uint __cdecl IndexFromPImgThunkData(_IMAGE_THUNK_DATA64 *param_1,_IMAGE_THUNK_DATA64 *param_2)

{
  return (uint)((longlong)param_1 - (longlong)param_2 >> 3);
}

// IsBufferInBounds @ 150157fd4

uchar __cdecl IsBufferInBounds(void *param_1,ulong64 param_2,void *param_3,ulong64 param_4)

{
  if ((((param_1 < (void *)((longlong)param_1 + param_2)) &&
       (param_3 < (void *)((longlong)param_3 + param_4))) && (param_1 <= param_3)) &&
     ((void *)((longlong)param_3 + param_4) <= (void *)((longlong)param_1 + param_2))) {
    return '\x01';
  }
  return '\0';
}

// OverlayIAT @ 150157ffc

void __cdecl OverlayIAT(_IMAGE_THUNK_DATA64 *param_1,_IMAGE_THUNK_DATA64 *param_2,uint param_3)

{
  <unnamed_type_u1> <Var1;
  ulonglong uVar2;
  
  if (param_3 != 0) {
    uVar2 = (ulonglong)param_3;
    do {
      <Var1 = param_2->u1;
      param_2 = param_2 + 1;
      *param_1 = (_IMAGE_THUNK_DATA64)<Var1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// PiddFromDllName @ 150158020

/* WARNING: Type propagation algorithm not settling */

ImgDelayDescr * __cdecl PiddFromDllName(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  ImgDelayDescr *pIVar4;
  char *pcVar5;
  
  if (*(int *)(switchD_1501dbc7b::caseD_1.e_program +
              (longlong)(int)switchD_1501dbc7b::caseD_1.e_lfanew + 0xb4) != 0) {
    for (pIVar4 = (ImgDelayDescr *)
                  (switchD_1501dbc7b::caseD_1.e_magic +
                  *(uint *)(switchD_1501dbc7b::caseD_1.e_program +
                           (longlong)(int)switchD_1501dbc7b::caseD_1.e_lfanew + 0xb0));
        pIVar4->rvaDLLName != 0; pIVar4 = pIVar4 + 1) {
      pcVar5 = switchD_1501dbc7b::caseD_1.e_magic + pIVar4->rvaDLLName;
      pcVar2 = pcVar5;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar2 = pcVar2 + (-1 - (longlong)pcVar5);
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar2 == pcVar3 + (-1 - (longlong)param_1)) {
        pcVar3 = param_1;
        if (pcVar2 == (char *)0x0) {
          return pIVar4;
        }
        for (; (pcVar2 = (char *)((longlong)pcVar2 + 0xffffffffffffffff), pcVar2 != (char *)0x0 &&
               (*pcVar3 == *pcVar5)); pcVar3 = pcVar3 + 1) {
          pcVar5 = pcVar5 + 1;
        }
        if (*pcVar3 == *pcVar5) {
          return pIVar4;
        }
      }
    }
  }
  return (ImgDelayDescr *)0x0;
}

// PinhFromImageBase @ 1501580c4

_IMAGE_NT_HEADERS64 * __cdecl PinhFromImageBase(HINSTANCE__ *param_1)

{
  return (_IMAGE_NT_HEADERS64 *)((longlong)&param_1->unused + (longlong)param_1[0xf].unused);
}

// TimeStampOfImage @ 1501580d4

ulong __cdecl TimeStampOfImage(_IMAGE_NT_HEADERS64 *param_1)

{
  return (param_1->FileHeader).TimeDateStamp;
}

// __memcmp @ 1501580e0

int __cdecl __memcmp(void *param_1,void *param_2,ulong64 param_3)

{
  if (param_3 == 0) {
    return 0;
  }
  for (; (param_3 = param_3 - 1, param_3 != 0 && (*(byte *)param_1 == *(byte *)param_2));
      param_1 = (void *)((longlong)param_1 + 1)) {
    param_2 = (void *)((longlong)param_2 + 1);
  }
  return (uint)*(byte *)param_1 - (uint)*(byte *)param_2;
}

// __strlen @ 15015810c

ulong64 __cdecl __strlen(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return (ulong64)(pcVar2 + (-1 - (longlong)param_1));
}

// HRESULT_FROM_WIN32 @ 150158128

uint __cdecl HRESULT_FROM_WIN32(ulong param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xffff | 0x80070000;
  if ((int)param_1 < 1) {
    uVar1 = param_1;
  }
  return uVar1;
}

// ReadAcquire64 @ 15015813c

long64 __cdecl ReadAcquire64(long64 *param_1)

{
  return *param_1;
}

// ReadPointerAcquire @ 150158148

void * __cdecl ReadPointerAcquire(void **param_1)

{
  return *param_1;
}

// WritePointerRelease @ 150158154

void __cdecl WritePointerRelease(void **param_1,void *param_2)

{
  *param_1 = param_2;
  return;
}

// WriteRelease64 @ 150158160

void __cdecl WriteRelease64(long64 *param_1,long64 param_2)

{
  *param_1 = param_2;
  return;
}

// __FUnloadDelayLoadedDLL2 @ 15015816c

int __cdecl __FUnloadDelayLoadedDLL2(char *param_1)

{
  uint uVar1;
  HMODULE hLibModule;
  word *pwVar2;
  int iVar3;
  <lambda_1> local_28;
  ulonglong uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  local_28.pidd = PiddFromDllName(param_1);
  if ((local_28.pidd != (ImgDelayDescr *)0x0) && ((local_28.pidd)->rvaUnloadIAT != 0)) {
    uVar1 = (local_28.pidd)->rvaHmod;
    hLibModule = *(HMODULE *)(switchD_1501dbc7b::caseD_1.e_magic + uVar1);
    if (hLibModule != (HMODULE)0x0) {
      for (pwVar2 = (word *)(switchD_1501dbc7b::caseD_1.e_magic + (local_28.pidd)->rvaIAT);
          *(longlong *)pwVar2 != 0; pwVar2 = pwVar2 + 4) {
        uVar4 = (ulonglong)((uint)uVar4 + 1);
      }
      DloadAcquireSectionWriteAccess();
      local_28.countOfImports = (uint)uVar4;
      GuardedWrite<___FUnloadDelayLoadedDLL2_::__l8::<lambda_1>_>
                (switchD_1501dbc7b::caseD_1.e_magic + (local_28.pidd)->rvaIAT,uVar4 << 3,&local_28);
      FreeLibrary(hLibModule);
      *(undefined8 *)(switchD_1501dbc7b::caseD_1.e_magic + uVar1) = 0;
      DloadReleaseSectionWriteAccess();
      iVar3 = 1;
    }
  }
  return iVar3;
}

// __HrLoadAllImportsForDll @ 150158228

undefined4 __cdecl __HrLoadAllImportsForDll(char *param_1)

{
  longlong lVar1;
  word *pwVar2;
  ImgDelayDescr *pIVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  word *pwVar6;
  
  uVar5 = 0x8007007e;
  pIVar3 = PiddFromDllName(param_1);
  if (pIVar3 != (ImgDelayDescr *)0x0) {
    uVar4 = 0;
    pwVar6 = (word *)(switchD_1501dbc7b::caseD_1.e_magic + pIVar3->rvaIAT);
    lVar1 = *(longlong *)pwVar6;
    pwVar2 = pwVar6;
    while (lVar1 != 0) {
      pwVar2 = pwVar2 + 4;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      lVar1 = *(longlong *)pwVar2;
    }
    pwVar2 = pwVar6 + uVar4 * 4;
    for (; pwVar6 < pwVar2; pwVar6 = pwVar6 + 4) {
      __delayLoadHelper2(pIVar3,(_func___cdecl_long64 **)pwVar6);
    }
    uVar5 = 0;
  }
  return uVar5;
}

// __delayLoadHelper2 @ 1501582a0

_func___cdecl_long64 * __cdecl
__delayLoadHelper2(ImgDelayDescr *param_1,_func___cdecl_long64 **param_2)

{
  HMODULE pHVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  _func___cdecl_long64 *p_Var5;
  HMODULE hLibModule;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined4 *local_res8;
  <lambda_1> local_88;
  undefined4 local_78 [2];
  ImgDelayDescr *local_70;
  _func___cdecl_long64 **local_68;
  char *local_60;
  ulonglong local_58;
  char *pcStack_50;
  HMODULE local_48;
  _func___cdecl_long64 *local_40;
  DWORD local_38;
  
  DloadAcquireSectionWriteAccess();
  local_60 = switchD_1501dbc7b::caseD_1.e_magic + param_1->rvaDLLName;
  pcVar8 = switchD_1501dbc7b::caseD_1.e_magic + param_1->rvaHmod;
  uVar2 = param_1->rvaINT;
  uVar3 = param_1->rvaBoundIAT;
  local_res8 = (undefined4 *)CONCAT44(local_res8._4_4_,param_1->dwTimeStamp);
  local_78[0] = 0x48;
  local_48 = (HMODULE)0x0;
  local_40 = (_func___cdecl_long64 *)0x0;
  local_38 = 0;
  local_58 = 0;
  pcStack_50 = (char *)0x0;
  local_70 = param_1;
  local_68 = param_2;
  if ((param_1->grAttrs & 1) == 0) {
    local_res8 = local_78;
    DloadReleaseSectionWriteAccess();
    RaiseException(0xc06d0057,0,1,(ULONG_PTR *)&local_res8);
    p_Var5 = (_func___cdecl_long64 *)0x0;
  }
  else {
    hLibModule = *(HMODULE *)pcVar8;
    uVar7 = (longlong)param_2 - (longlong)(switchD_1501dbc7b::caseD_1.e_magic + param_1->rvaIAT) >>
            3 & 0xffffffff;
    uVar4 = -(int)((longlong)
                   *(undefined8 *)
                    (switchD_1501dbc7b::caseD_1.e_magic + uVar7 * 8 + (ulonglong)uVar2) >> 0x3f);
    local_58 = (ulonglong)uVar4 ^ 1;
    if (uVar4 == 1) {
      pcStack_50 = (char *)(ulonglong)
                           *(ushort *)
                            (switchD_1501dbc7b::caseD_1.e_magic + uVar7 * 8 + (ulonglong)uVar2);
    }
    else {
      pcStack_50 = switchD_1501dbc7b::caseD_1.e_magic +
                   (ulonglong)
                   *(uint *)(switchD_1501dbc7b::caseD_1.e_magic + uVar7 * 8 + (ulonglong)uVar2) + 2;
    }
    p_Var5 = (_func___cdecl_long64 *)0x0;
    if ((__pfnDliNotifyHook2 == (_func___cdecl__func___cdecl_long64_ptr_uint_DelayLoadInfo_ptr *)0x0
        ) || (p_Var5 = (_func___cdecl_long64 *)(*__guard_dispatch_icall_fptr)(0,local_78),
             p_Var5 == (_func___cdecl_long64 *)0x0)) {
      if (hLibModule == (HMODULE)0x0) {
        if ((((__pfnDliNotifyHook2 ==
               (_func___cdecl__func___cdecl_long64_ptr_uint_DelayLoadInfo_ptr *)0x0) ||
             (hLibModule = (HMODULE)(*__guard_dispatch_icall_fptr)(1,local_78),
             hLibModule == (HMODULE)0x0)) &&
            (hLibModule = LoadLibraryExA(local_60,(HANDLE)0x0,0), hLibModule == (HMODULE)0x0)) &&
           ((local_38 = GetLastError(),
            __pfnDliFailureHook2 ==
            (_func___cdecl__func___cdecl_long64_ptr_uint_DelayLoadInfo_ptr *)0x0 ||
            (hLibModule = (HMODULE)(*__guard_dispatch_icall_fptr)(3,local_78),
            hLibModule == (HMODULE)0x0)))) {
          local_res8 = local_78;
          DloadReleaseSectionWriteAccess();
          RaiseException(0xc06d007e,0,1,(ULONG_PTR *)&local_res8);
          return local_40;
        }
        LOCK();
        pHVar1 = *(HMODULE *)pcVar8;
        *(HMODULE *)pcVar8 = hLibModule;
        UNLOCK();
        if (pHVar1 == hLibModule) {
          FreeLibrary(hLibModule);
        }
      }
      local_48 = hLibModule;
      if (__pfnDliNotifyHook2 !=
          (_func___cdecl__func___cdecl_long64_ptr_uint_DelayLoadInfo_ptr *)0x0) {
        p_Var5 = (_func___cdecl_long64 *)(*__guard_dispatch_icall_fptr)(2,local_78);
      }
      if ((((p_Var5 == (_func___cdecl_long64 *)0x0) &&
           (((param_1->rvaBoundIAT == 0 || (param_1->dwTimeStamp == 0)) ||
            ((lVar6 = (longlong)hLibModule[0xf].unused,
             *(int *)((longlong)&hLibModule->unused + lVar6) != 0x4550 ||
             (((*(int *)((longlong)&hLibModule[2].unused + lVar6) != (int)local_res8 ||
               (hLibModule != *(HMODULE *)((longlong)&hLibModule[0xc].unused + lVar6))) ||
              (p_Var5 = *(_func___cdecl_long64 **)
                         (switchD_1501dbc7b::caseD_1.e_magic + uVar7 * 8 + (ulonglong)uVar3),
              *(_func___cdecl_long64 **)
               (switchD_1501dbc7b::caseD_1.e_magic + uVar7 * 8 + (ulonglong)uVar3) ==
              (_func___cdecl_long64 *)0x0)))))))) &&
          (p_Var5 = (_func___cdecl_long64 *)GetProcAddress(hLibModule,pcStack_50),
          p_Var5 == (_func___cdecl_long64 *)0x0)) &&
         ((local_38 = GetLastError(),
          __pfnDliFailureHook2 ==
          (_func___cdecl__func___cdecl_long64_ptr_uint_DelayLoadInfo_ptr *)0x0 ||
          (p_Var5 = (_func___cdecl_long64 *)(*__guard_dispatch_icall_fptr)(4,local_78),
          p_Var5 == (_func___cdecl_long64 *)0x0)))) {
        local_res8 = local_78;
        DloadReleaseSectionWriteAccess();
        RaiseException(0xc06d007f,0,1,(ULONG_PTR *)&local_res8);
        DloadAcquireSectionWriteAccess();
        p_Var5 = local_40;
      }
      local_88.ppfnIATEntry = param_2;
      local_88.pfnRet = p_Var5;
      GuardedWrite<___delayLoadHelper2_::__l2::<lambda_1>_>(param_2,8,&local_88);
    }
    if (__pfnDliNotifyHook2 != (_func___cdecl__func___cdecl_long64_ptr_uint_DelayLoadInfo_ptr *)0x0)
    {
      local_38 = 0;
      local_48 = hLibModule;
      local_40 = p_Var5;
      (*__guard_dispatch_icall_fptr)(5,local_78);
    }
    DloadReleaseSectionWriteAccess();
  }
  return p_Var5;
}

