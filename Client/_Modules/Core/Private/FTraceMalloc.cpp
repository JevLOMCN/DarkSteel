// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// FTraceMalloc @ 141987300

FTraceMalloc * __thiscall FTraceMalloc::FTraceMalloc(FTraceMalloc *this,FMalloc *param_1)

{
  this->WrappedMalloc = param_1;
  this->_padding_ = (longlong)&___7FTraceMalloc__6B_;
  return this;
}

// ~FTraceMalloc @ 1419882e0

void __thiscall FTraceMalloc::~FTraceMalloc(FTraceMalloc *this)

{
  this->_padding_ = (longlong)&___7FTraceMalloc__6B_;
  FExec::~FExec((FExec *)this);
  return;
}

// Free @ 141994620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTraceMalloc::Free(FTraceMalloc *this,void *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMemoryFreeFields>((TLogScope<0> *)&local_38);
    *local_38 = param_1;
    *(undefined1 *)((longlong)local_38 + 0xc) = 0;
    *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
  }
  puVar2 = (undefined1 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xbb4);
  uVar1 = *puVar2;
  *puVar2 = 1;
  (**(code **)((longlong)*this->WrappedMalloc + 0x48))(this->WrappedMalloc,param_1);
  *puVar2 = uVar1;
  return;
}

// Malloc @ 1419a21e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall FTraceMalloc::Malloc(FTraceMalloc *this,ulong64 param_1,uint param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  FWriteBuffer *pFVar5;
  char cVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  char local_68;
  uint local_64;
  undefined4 local_5c;
  FTraceMalloc *local_58;
  undefined8 *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar9 = -1 < MetadataChannel->Enabled;
  local_64 = param_2;
  local_58 = this;
  if (bVar9) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>
              ((TLogScope<0> *)&local_50);
    *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(local_48 + 0x20);
  }
  uVar7 = (ulonglong)_tls_index;
  bVar10 = -1 < MemAllocChannel->Enabled;
  uVar8 = local_5c;
  if (bVar10) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMemoryMemoryScopeFields>((TLogScope<0> *)&local_50);
    *(undefined4 *)local_50 = 0x101;
    *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(local_48 + 0x20);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8);
    uVar8 = *(undefined4 *)(lVar2 + 0xbb0);
    *(undefined4 *)(lVar2 + 0xbb0) = 0x101;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8);
  uVar1 = *(undefined1 *)(lVar2 + 0xbb4);
  *(undefined1 *)(lVar2 + 0xbb4) = 1;
  pvVar4 = (void *)(**(code **)((longlong)*local_58->WrappedMalloc + 0x28))
                             (local_58->WrappedMalloc,param_1,param_2);
  *(undefined1 *)(lVar2 + 0xbb4) = uVar1;
  iVar3 = 0;
  local_68 = local_64 != 0;
  if ((bool)local_68) {
    for (; (local_64 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMemoryAllocFields>((TLogScope<0> *)&local_50);
    *local_50 = pvVar4;
    *(undefined4 *)(local_50 + 1) = 0;
    *(int *)((longlong)local_50 + 0xc) = (int)(param_1 >> 3);
    cVar6 = '\0';
    if (local_68 != '\0') {
      cVar6 = (char)iVar3;
    }
    *(byte *)(local_50 + 2) = cVar6 << 3 | (byte)param_1 & 7;
    *(undefined1 *)((longlong)local_50 + 0x11) = 0;
    *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(local_48 + 0x20);
  }
  if (bVar10) {
    *(undefined4 *)(lVar2 + 0xbb0) = uVar8;
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar5 = *(FWriteBuffer **)(lVar2 + 0x20);
    if ((int)pFVar5 - *(int *)&pFVar5->Cursor < 1) {
      pFVar5 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar5->Cursor = '\n';
    pFVar5->Cursor = pFVar5->Cursor + 1;
    pFVar5->Committed = pFVar5->Cursor;
  }
  if (bVar9) {
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar5 = *(FWriteBuffer **)(lVar2 + 0x20);
    if ((int)pFVar5 - *(int *)&pFVar5->Cursor < 1) {
      pFVar5 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar5->Cursor = '\n';
    pFVar5->Cursor = pFVar5->Cursor + 1;
    pFVar5->Committed = pFVar5->Cursor;
  }
  return pvVar4;
}

// OnMallocInitialized @ 1419a45a0

void __thiscall FTraceMalloc::OnMallocInitialized(FTraceMalloc *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001419a45a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedMalloc + 0xd0))();
  return;
}

// OnPostFork @ 1419a45e0

void __thiscall FTraceMalloc::OnPostFork(FTraceMalloc *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001419a45e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedMalloc + 0xe0))();
  return;
}

// OnPreFork @ 1419a4620

void __thiscall FTraceMalloc::OnPreFork(FTraceMalloc *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001419a4627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedMalloc + 0xd8))();
  return;
}

// Realloc @ 1419a6e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall
FTraceMalloc::Realloc(FTraceMalloc *this,void *param_1,ulong64 param_2,uint param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  FWriteBuffer *pFVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  FScopedLogScope local_70 [4];
  undefined4 local_6c;
  FTraceMalloc *local_68;
  undefined8 *local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_98;
  bVar8 = -1 < MetadataChannel->Enabled;
  local_68 = this;
  if (bVar8) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>
              ((TLogScope<0> *)&local_60);
    *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_58 + 0x20);
  }
  uVar7 = (ulonglong)_tls_index;
  local_70[0].bActive = false;
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMemoryMemoryScopeFields>((TLogScope<0> *)&local_60);
    if (local_70[0].bActive == false) {
      local_70[0].bActive = true;
    }
    *(undefined4 *)local_60 = 0x101;
    *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_58 + 0x20);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8);
    local_6c = *(undefined4 *)(lVar2 + 0xbb0);
    *(undefined4 *)(lVar2 + 0xbb0) = 0x101;
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMemoryReallocFreeFields>((TLogScope<0> *)&local_60);
    *local_60 = param_1;
    *(undefined1 *)((longlong)local_60 + 0xc) = 0;
    *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_58 + 0x20);
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8);
  uVar1 = *(undefined1 *)(lVar2 + 0xbb4);
  *(undefined1 *)(lVar2 + 0xbb4) = 1;
  pvVar4 = (void *)(**(code **)((longlong)*local_68->WrappedMalloc + 0x38))
                             (local_68->WrappedMalloc,param_1,param_2,param_3);
  *(undefined1 *)(lVar2 + 0xbb4) = uVar1;
  iVar3 = 0;
  if (param_3 != 0) {
    for (; (param_3 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMemoryReallocAllocFields>((TLogScope<0> *)&local_60);
    *local_60 = pvVar4;
    *(undefined4 *)(local_60 + 1) = 0;
    *(int *)((longlong)local_60 + 0xc) = (int)(param_2 >> 3);
    cVar6 = '\0';
    if (param_3 != 0) {
      cVar6 = (char)iVar3;
    }
    *(byte *)(local_60 + 2) = cVar6 << 3 | (byte)param_2 & 7;
    *(undefined1 *)((longlong)local_60 + 0x11) = 0;
    *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_58 + 0x20);
  }
  if (local_70[0].bActive != false) {
    *(undefined4 *)(lVar2 + 0xbb0) = local_6c;
  }
  UE::Trace::Private::FScopedLogScope::Deinit(local_70);
  if (bVar8) {
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar5 = *(FWriteBuffer **)(lVar2 + 0x20);
    if ((int)pFVar5 - *(int *)&pFVar5->Cursor < 1) {
      pFVar5 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar5->Cursor = '\n';
    pFVar5->Cursor = pFVar5->Cursor + 1;
    pFVar5->Committed = pFVar5->Cursor;
  }
  return pvVar4;
}

