// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// FResolvedSymbolFilter @ 14d424b80

FResolvedSymbolFilter * __thiscall
TraceServices::FResolvedSymbolFilter::FResolvedSymbolFilter(FResolvedSymbolFilter *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FResolvedSymbolFilter *pFVar5;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  wchar_t *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  wchar_t *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  wchar_t *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  wchar_t *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = 9;
  this->_padding_ = (longlong)&___7FResolvedSymbolFilter_TraceServices__6B_;
  (this->IgnoreSymbolsByModuleName).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IgnoreSymbolsByModuleName).ArrayNum = 0;
  (this->IgnoreSymbolsByModuleName).ArrayMax = 0;
  (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = 0;
  (this->IgnoreSymbolsByFunctionName).ArrayMax = 0;
  (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IgnoreSymbolsByFilePath).ArrayNum = 0;
  (this->IgnoreSymbolsByFilePath).ArrayMax = 0;
  local_28 = L"FMemory::";
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                     &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  uStack_190 = 0x10;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_28;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_1c,uStack_20);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_198 = L"FMallocWrapper::";
  if ((pFVar1 <= (FScriptContainerElement *)&local_198) &&
     ((FScriptContainerElement *)&local_198 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_180 = 0x14;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_198;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_18c,uStack_190);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_188 = L"FMallocPoisonProxy::";
  if ((pFVar1 <= (FScriptContainerElement *)&local_188) &&
     ((FScriptContainerElement *)&local_188 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
    (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4;
  }
  uStack_170 = 0x1b;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_188;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_17c,uStack_180);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_178 = L"FMallocLeakDetectionProxy::";
  if ((pFVar1 <= (FScriptContainerElement *)&local_178) &&
     ((FScriptContainerElement *)&local_178 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_160 = 0x15;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_178;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_16c,uStack_170);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_168 = L"FVirtualWinApiHooks::";
  if ((pFVar1 <= (FScriptContainerElement *)&local_168) &&
     ((FScriptContainerElement *)&local_168 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_150 = 6;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_168;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_15c,uStack_160);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_158 = L"Malloc";
  if ((pFVar1 <= (FScriptContainerElement *)&local_158) &&
     ((FScriptContainerElement *)&local_158 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_140 = 7;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_158;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_14c,uStack_150);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_148 = L"Realloc";
  if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
     ((FScriptContainerElement *)&local_148 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_130 = 4;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_148;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_13c,uStack_140);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_138 = L"Free";
  if ((pFVar1 <= (FScriptContainerElement *)&local_138) &&
     ((FScriptContainerElement *)&local_138 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_120 = 0xc;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_138;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_12c,uStack_130);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_128 = L"MemoryTrace_";
  if ((pFVar1 <= (FScriptContainerElement *)&local_128) &&
     ((FScriptContainerElement *)&local_128 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_110 = 0xc;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_128;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_11c,uStack_120);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_118 = L"operator new";
  if ((pFVar1 <= (FScriptContainerElement *)&local_118) &&
     ((FScriptContainerElement *)&local_118 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_100 = 0xf;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_118;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_10c,uStack_110);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_108 = L"operator delete";
  if ((pFVar1 <= (FScriptContainerElement *)&local_108) &&
     ((FScriptContainerElement *)&local_108 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_f0 = 5;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_108;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_fc,uStack_100);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_f8 = L"std::";
  if ((pFVar1 <= (FScriptContainerElement *)&local_f8) &&
     ((FScriptContainerElement *)&local_f8 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_e0 = 0x18;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_f8;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_ec,uStack_f0);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_e8 = L"FWindowsPlatformMemory::";
  if ((pFVar1 <= (FScriptContainerElement *)&local_e8) &&
     ((FScriptContainerElement *)&local_e8 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_d0 = 0x18;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_e8;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_dc,uStack_e0);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_d8 = L"FCachedOSPageAllocator::";
  if ((pFVar1 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_c0 = 0xd;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_d8;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_cc,uStack_d0);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_c8 = L"FMallocBinned";
  if ((pFVar1 <= (FScriptContainerElement *)&local_c8) &&
     ((FScriptContainerElement *)&local_c8 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_b0 = 0x24;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_c8;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_bc,uStack_c0);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_b8 = L"FD3D12Adapter::TraceMemoryAllocation";
  if ((pFVar1 <= (FScriptContainerElement *)&local_b8) &&
     ((FScriptContainerElement *)&local_b8 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_a0 = 10;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_b8;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_ac,uStack_b0);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_a8 = L"AnsiMalloc";
  if ((pFVar1 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_90 = 0xb;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_a8;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_9c,uStack_a0);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_98 = L"AnsiRealloc";
  if ((pFVar1 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_80 = 8;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_98;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_8c,uStack_90);
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  local_88 = L"AnsiFree";
  if ((pFVar1 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFunctionName).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFunctionName).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFunctionName).AllocatorInstance,
                       &(this->IgnoreSymbolsByFunctionName).ArrayMax);
  }
  uStack_70 = 0xc;
  (this->IgnoreSymbolsByFunctionName).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_88;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_7c,uStack_80);
  pFVar1 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data;
  local_78 = L"/Containers/";
  if ((pFVar1 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFilePath).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFilePath).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFilePath).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFilePath).AllocatorInstance,
                       &(this->IgnoreSymbolsByFilePath).ArrayMax);
  }
  uStack_60 = 0x1a;
  (this->IgnoreSymbolsByFilePath).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_78;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_6c,uStack_70);
  pFVar1 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data;
  local_68 = L"/ConcurrentLinearAllocator";
  if ((pFVar1 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFilePath).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFilePath).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFilePath).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFilePath).AllocatorInstance,
                       &(this->IgnoreSymbolsByFilePath).ArrayMax);
  }
  uStack_50 = 0x13;
  (this->IgnoreSymbolsByFilePath).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_68;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_5c,uStack_60);
  pFVar1 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data;
  local_58 = L"/D3D12PoolAllocator";
  if ((pFVar1 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFilePath).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFilePath).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFilePath).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFilePath).AllocatorInstance,
                       &(this->IgnoreSymbolsByFilePath).ArrayMax);
  }
  uStack_40 = 10;
  (this->IgnoreSymbolsByFilePath).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_58;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_4c,uStack_50);
  pFVar1 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data;
  local_48 = L"/AutoRTFM/";
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFilePath).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFilePath).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFilePath).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFilePath).AllocatorInstance,
                       &(this->IgnoreSymbolsByFilePath).ArrayMax);
  }
  uStack_30 = 0x10;
  (this->IgnoreSymbolsByFilePath).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_48;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_3c,uStack_40);
  pFVar1 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data;
  local_38 = L"/HAL/FMemory.inl";
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar1 + (longlong)(this->IgnoreSymbolsByFilePath).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FResolvedSymbolFilter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->IgnoreSymbolsByFilePath).ArrayNum;
  if (iVar4 == (this->IgnoreSymbolsByFilePath).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->IgnoreSymbolsByFilePath).AllocatorInstance,
                       &(this->IgnoreSymbolsByFilePath).ArrayMax);
  }
  (this->IgnoreSymbolsByFilePath).ArrayNum = iVar4 + 1;
  pFVar1 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(wchar_t **)pFVar1 = local_38;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_2c,uStack_30);
  return this;
}

// ~FResolvedSymbolFilter @ 14d42c540

void __thiscall
TraceServices::FResolvedSymbolFilter::~FResolvedSymbolFilter(FResolvedSymbolFilter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FResolvedSymbolFilter_TraceServices__6B_;
  pFVar1 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IgnoreSymbolsByModuleName).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Update @ 14d48ea10

void __thiscall
TraceServices::FResolvedSymbolFilter::Update(FResolvedSymbolFilter *this,FResolvedSymbol *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  FString local_38;
  
  bVar2 = false;
  if (param_1->Result == (atomic<TraceServices::ESymbolQueryResult>)0x2) {
    bVar2 = true;
  }
  else {
    if (param_1->Module == (wchar_t *)0x0) {
LAB_14d48ea8e:
      if (param_1->Name == (wchar_t *)0x0) {
LAB_14d48eade:
        if (param_1->File != (wchar_t *)0x0) {
          ::FString::FString(&local_38,param_1->File);
          ::FString::ReplaceCharInlineCaseSensitive(&local_38,L'\\',L'/');
          iVar1 = (this->IgnoreSymbolsByFilePath).ArrayNum;
          pFVar4 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data;
          pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
          while( true ) {
            if ((this->IgnoreSymbolsByFilePath).ArrayNum != iVar1) {
              `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            bVar2 = false;
            if (pFVar4 == pFVar5) goto LAB_14d48eb68;
            iVar3 = ::FString::Find(&local_38,*(wchar_t **)pFVar4,(int)*(undefined8 *)(pFVar4 + 8),
                                    CaseSensitive,FromStart,-1);
            if (iVar3 != -1) break;
            pFVar4 = pFVar4 + 0x10;
          }
          bVar2 = true;
LAB_14d48eb68:
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14d48eb8e;
      }
      iVar1 = (this->IgnoreSymbolsByFunctionName).ArrayNum;
      pFVar4 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
      pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->IgnoreSymbolsByFunctionName).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar4 == pFVar5) goto LAB_14d48eade;
        iVar3 = FGenericPlatformStricmp::Strnicmp
                          (param_1->Name,*(wchar_t **)pFVar4,(longlong)*(int *)(pFVar4 + 8));
        if (iVar3 == 0) break;
        pFVar4 = pFVar4 + 0x10;
      }
    }
    else {
      iVar1 = (this->IgnoreSymbolsByModuleName).ArrayNum;
      pFVar4 = (this->IgnoreSymbolsByModuleName).AllocatorInstance.Data;
      pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->IgnoreSymbolsByModuleName).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar4 == pFVar5) goto LAB_14d48ea8e;
        iVar3 = FGenericPlatformStricmp::Strnicmp
                          (param_1->Module,*(wchar_t **)pFVar4,(longlong)*(int *)(pFVar4 + 8));
        if (iVar3 == 0) break;
        pFVar4 = pFVar4 + 0x10;
      }
    }
    bVar2 = true;
  }
LAB_14d48eb8e:
  param_1->FilterStatus = (atomic<TraceServices::EResolvedSymbolFilterStatus>)(!bVar2 + '\x01');
  return;
}

