// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Allocate @ 141486710

void * __thiscall
TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
::Allocate(TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  void **ppvVar6;
  undefined8 *puVar7;
  void *pvVar8;
  longlong lVar9;
  longlong *lpTlsValue;
  
  plVar5 = TlsGetValue(this->TlsSlot);
  lpTlsValue = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = ::operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(this->TlsSlot,lpTlsValue);
    plVar5 = lpTlsValue;
  }
  ppvVar6 = (void **)plVar5[1];
  if (ppvVar6 == (void **)0x0) {
    ppvVar6 = (void **)*plVar5;
    if (ppvVar6 == (void **)0x0) {
      ppvVar6 = FLockFreePointerListLIFOBase<void_*,64,1>::Pop
                          ((FLockFreePointerListLIFOBase<void_*,64,1> *)&this->GlobalFreeListBundles
                          );
      plVar5[1] = (longlong)ppvVar6;
      if (ppvVar6 == (void **)0x0) {
        puVar7 = FMemory::Malloc(0x10000,0);
        plVar5[1] = (longlong)puVar7;
        lVar9 = 0xff;
        do {
          puVar1 = puVar7 + 0x20;
          *puVar7 = puVar1;
          lVar9 = lVar9 + -1;
          puVar7 = puVar1;
        } while (lVar9 != 0);
        *puVar1 = 0;
        ppvVar6 = (void **)plVar5[1];
      }
    }
    else {
      plVar5[1] = (longlong)ppvVar6;
      *plVar5 = 0;
    }
    *(undefined4 *)(plVar5 + 2) = 0x100;
  }
  pvVar8 = *ppvVar6;
  iVar4 = (int)plVar5[2] + -1;
  *(int *)(plVar5 + 2) = iVar4;
  plVar5[1] = (longlong)pvVar8;
  if (((iVar4 < 0) || ((iVar4 != 0) != (pvVar8 != (void *)0x0))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TLS.NumPartial >= 0 && ((!!TLS.NumPartial) == (!!TLS.PartialBundle))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                         ,0x59,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pvVar8 = (void *)(*pcVar2)();
    return pvVar8;
  }
  return ppvVar6;
}

// Allocate @ 141486840

void * __thiscall
TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
::Allocate(TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  void **ppvVar6;
  undefined8 *puVar7;
  void *pvVar8;
  longlong lVar9;
  longlong *lpTlsValue;
  
  plVar5 = TlsGetValue(this->TlsSlot);
  lpTlsValue = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = ::operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(this->TlsSlot,lpTlsValue);
    plVar5 = lpTlsValue;
  }
  ppvVar6 = (void **)plVar5[1];
  if (ppvVar6 == (void **)0x0) {
    ppvVar6 = (void **)*plVar5;
    if (ppvVar6 == (void **)0x0) {
      ppvVar6 = FLockFreePointerListLIFOBase<void_*,64,1>::Pop
                          ((FLockFreePointerListLIFOBase<void_*,64,1> *)&this->GlobalFreeListBundles
                          );
      plVar5[1] = (longlong)ppvVar6;
      if (ppvVar6 == (void **)0x0) {
        puVar7 = FMemory::Malloc(0x10000,0);
        plVar5[1] = (longlong)puVar7;
        lVar9 = 0x12e;
        do {
          puVar1 = puVar7 + 0x1b;
          *puVar7 = puVar1;
          lVar9 = lVar9 + -1;
          puVar7 = puVar1;
        } while (lVar9 != 0);
        *puVar1 = 0;
        ppvVar6 = (void **)plVar5[1];
      }
    }
    else {
      plVar5[1] = (longlong)ppvVar6;
      *plVar5 = 0;
    }
    *(undefined4 *)(plVar5 + 2) = 0x12f;
  }
  pvVar8 = *ppvVar6;
  iVar4 = (int)plVar5[2] + -1;
  *(int *)(plVar5 + 2) = iVar4;
  plVar5[1] = (longlong)pvVar8;
  if (((iVar4 < 0) || ((iVar4 != 0) != (pvVar8 != (void *)0x0))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TLS.NumPartial >= 0 && ((!!TLS.NumPartial) == (!!TLS.PartialBundle))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                         ,0x59,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pvVar8 = (void *)(*pcVar2)();
    return pvVar8;
  }
  return ppvVar6;
}

// Free @ 141496590

void __thiscall
TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
::Free(TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
       *this,void *param_1)

{
  undefined8 *puVar1;
  undefined8 *lpTlsValue;
  
  puVar1 = TlsGetValue(this->TlsSlot);
  lpTlsValue = (undefined8 *)0x0;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = ::operator_new(0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      lpTlsValue = puVar1;
    }
    TlsSetValue(this->TlsSlot,lpTlsValue);
    puVar1 = lpTlsValue;
  }
  if (0xff < *(int *)(puVar1 + 2)) {
    if ((void **)*puVar1 != (void **)0x0) {
      TLockFreePointerListLIFOPad<void_*,64>::Push
                ((TLockFreePointerListLIFOPad<void_*,64> *)&this->GlobalFreeListBundles,
                 (void **)*puVar1);
    }
    *puVar1 = puVar1[1];
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
  }
  *(undefined8 *)param_1 = puVar1[1];
  *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
  puVar1[1] = param_1;
  return;
}

// Free @ 141496640

void __thiscall
TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
::Free(TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
       *this,void *param_1)

{
  undefined8 *puVar1;
  undefined8 *lpTlsValue;
  
  puVar1 = TlsGetValue(this->TlsSlot);
  lpTlsValue = (undefined8 *)0x0;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = ::operator_new(0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      lpTlsValue = puVar1;
    }
    TlsSetValue(this->TlsSlot,lpTlsValue);
    puVar1 = lpTlsValue;
  }
  if (0x12e < *(int *)(puVar1 + 2)) {
    if ((void **)*puVar1 != (void **)0x0) {
      TLockFreePointerListLIFOPad<void_*,64>::Push
                ((TLockFreePointerListLIFOPad<void_*,64> *)&this->GlobalFreeListBundles,
                 (void **)*puVar1);
    }
    *puVar1 = puVar1[1];
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
  }
  *(undefined8 *)param_1 = puVar1[1];
  *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
  puVar1[1] = param_1;
  return;
}

