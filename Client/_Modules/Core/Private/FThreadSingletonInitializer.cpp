// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Get @ 1416f1630

FTlsAutoCleanup * __cdecl
FThreadSingletonInitializer::Get
          (TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *param_1,uint *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint dwTlsIndex;
  uint uVar4;
  int iVar5;
  FTlsAutoCleanup *pFVar6;
  ForAnyElementType *pFVar7;
  FTlsAutoCleanup *local_18 [2];
  
  dwTlsIndex = *param_2;
  if (*param_2 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    if ((dwTlsIndex == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPlatformTLS::IsValidTlsSlot(ThisTlsSlot)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                           ,0x5d3,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTlsAutoCleanup *)(*pcVar2)();
      return pFVar6;
    }
    LOCK();
    uVar4 = *param_2;
    if (uVar4 == 0xffffffff) {
      *param_2 = dwTlsIndex;
      uVar4 = 0xffffffff;
    }
    UNLOCK();
    if (uVar4 != 0xffffffff) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = uVar4;
    }
  }
  pFVar6 = TlsGetValue(dwTlsIndex);
  if (pFVar6 == (FTlsAutoCleanup *)0x0) {
    pFVar6 = (FTlsAutoCleanup *)(**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(uint *)(lVar1 + 0xa08) & 1) == 0) {
      *(uint *)(lVar1 + 0xa08) = *(uint *)(lVar1 + 0xa08) | 1;
      __tlregdtor(`FTlsAutoCleanup::Register'::__l2::_dynamic_atexit_destructor_for__TlsInstances__)
      ;
    }
    pFVar7 = (ForAnyElementType *)(lVar1 + 0x9e0);
    local_18[0] = pFVar6;
    if (((pFVar7->Data <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar7->Data + (longlong)*(int *)(lVar1 + 0x9ec) * 8)
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTlsAutoCleanup *)(*pcVar2)();
      return pFVar6;
    }
    iVar5 = *(int *)(lVar1 + 0x9e8);
    if (iVar5 == *(int *)(lVar1 + 0x9ec)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar7,(int *)(lVar1 + 0x9ec));
    }
    *(int *)(lVar1 + 0x9e8) = iVar5 + 1;
    *(FTlsAutoCleanup **)(pFVar7->Data + (longlong)iVar5 * 8) = local_18[0];
    TlsSetValue(dwTlsIndex,pFVar6);
  }
  return pFVar6;
}

// Inject @ 141700ea0

FTlsAutoCleanup * __cdecl
FThreadSingletonInitializer::Inject(FTlsAutoCleanup *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  DWORD dwTlsIndex;
  uint uVar3;
  FTlsAutoCleanup *pFVar4;
  
  if (*param_2 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    if ((dwTlsIndex == 0xffffffff) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPlatformTLS::IsValidTlsSlot(ThisTlsSlot)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                           ,0x5fb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTlsAutoCleanup *)(*pcVar1)();
      return pFVar4;
    }
    LOCK();
    uVar3 = *param_2;
    if (uVar3 == 0xffffffff) {
      *param_2 = dwTlsIndex;
      uVar3 = 0xffffffff;
    }
    UNLOCK();
    if (uVar3 != 0xffffffff) {
      TlsFree(dwTlsIndex);
    }
  }
  pFVar4 = TlsGetValue(*param_2);
  TlsSetValue(*param_2,param_1);
  return pFVar4;
}

// TryGet @ 1417179a0

FTlsAutoCleanup * __cdecl FThreadSingletonInitializer::TryGet(uint *param_1)

{
  FTlsAutoCleanup *pFVar1;
  
  if (*param_1 == 0xffffffff) {
    return (FTlsAutoCleanup *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001417179aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = TlsGetValue(*param_1);
  return pFVar1;
}

