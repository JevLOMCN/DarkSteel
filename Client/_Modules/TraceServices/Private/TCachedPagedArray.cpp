// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 12

// TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024> @ 14d41e470

TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
* __thiscall
TraceServices::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
          (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
           *this,wchar_t *param_1,IAnalysisCache *param_2,uint param_3)

{
  TArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  size_t _Size;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
  *pTVar9;
  longlong *plVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  int *piVar16;
  ulong64 *local_48;
  ulonglong local_40;
  
  this->Cache = param_2;
  pTVar1 = &this->Pages;
  uVar13 = 0;
  (this->Pages).ArrayNum = 0;
  piVar2 = &(this->Pages).ArrayNum;
  (this->Pages).ArrayMax = 0;
  piVar16 = &(this->Pages).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ResidentPages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResidentPages).ArrayNum = 0;
  (this->ResidentPages).ArrayMax = 0;
  this->CacheId = 0;
  this->ResidentPageCount = param_3;
  this->ElementCount = (ulong64 *)0x0;
  uVar6 = (**(code **)((longlong)*this->Cache + 8))(this->Cache,param_1,0);
  this->CacheId = uVar6;
  (**(code **)((longlong)*this->Cache + 0x10))(this->Cache,&local_48,uVar6);
  if (((local_48 == (ulong64 *)0x0) || (local_40 < 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserData.GetData() && UserData.GetSize() >= sizeof(uint64)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedPagedArray.h"
                         ,0x2d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
              *)(*pcVar4)();
    return pTVar9;
  }
  this->ElementCount = local_48;
  iVar12 = (int)(*local_48 + 0x3ff >> 10);
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar12,&pTVar1->AllocatorInstance,piVar2,piVar16);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  _Size = (longlong)iVar12 * 8;
  memmove(pFVar3 + _Size,pFVar3,(longlong)iVar7 << 3);
  memset((pTVar1->AllocatorInstance).Data,0,_Size);
  if (this->ResidentPageCount != 0xffffffff) {
    return this;
  }
  uVar15 = (uint)(*this->ElementCount + 0x3ff >> 10);
  uVar6 = uVar13;
  if (uVar15 != 0) {
    do {
      iVar7 = (this->Pages).ArrayNum;
      piVar11 = (int *)(longlong)iVar7;
      uVar8 = 0;
      if ((int)uVar13 < iVar7) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         piVar16 = piVar11, bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
                  *)(*pcVar4)();
        return pTVar9;
      }
      if (*(longlong *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar13 * 8) == 0) {
        plVar10 = (longlong *)
                  (**(code **)((longlong)*this->Cache + 0x20))
                            (this->Cache,&local_res8,this->CacheId,uVar6,3,piVar16);
        iVar7 = (this->ResidentPages).ArrayNum;
        if (iVar7 == (this->ResidentPages).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->ResidentPages).AllocatorInstance,
                             &(this->ResidentPages).ArrayMax);
        }
        (this->ResidentPages).ArrayNum = iVar7 + 1;
        pFVar3 = (this->ResidentPages).AllocatorInstance.Data + (longlong)iVar7 * 8;
        lVar14 = *plVar10;
        *plVar10 = 0;
        *(longlong *)pFVar3 = lVar14;
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
        plVar10 = *(longlong **)pFVar3;
        lVar14 = 0;
        if (plVar10 != (longlong *)0x0) {
          if (((ulonglong)plVar10[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
          lVar14 = plVar10[1];
        }
        iVar7 = *piVar2;
        piVar11 = (int *)(longlong)iVar7;
        uVar8 = 0;
        if ((int)uVar13 < iVar7) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , piVar16 = piVar11, bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
                    *)(*pcVar4)();
          return pTVar9;
        }
        *(longlong *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar13 * 8) = lVar14;
        EvictPages(this);
      }
      uVar13 = uVar13 + 1;
      uVar6 = uVar6 + 3;
    } while (uVar13 < uVar15);
  }
  return this;
}

// TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024> @ 14d41e740

TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024> *
__thiscall
TraceServices::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
          (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
           *this,wchar_t *param_1,IAnalysisCache *param_2,uint param_3)

{
  TArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  size_t _Size;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
  *pTVar9;
  longlong *plVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  int *piVar16;
  ulong64 *local_48;
  ulonglong local_40;
  
  this->Cache = param_2;
  pTVar1 = &this->Pages;
  uVar13 = 0;
  (this->Pages).ArrayNum = 0;
  piVar2 = &(this->Pages).ArrayNum;
  (this->Pages).ArrayMax = 0;
  piVar16 = &(this->Pages).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ResidentPages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResidentPages).ArrayNum = 0;
  (this->ResidentPages).ArrayMax = 0;
  this->CacheId = 0;
  this->ResidentPageCount = param_3;
  this->ElementCount = (ulong64 *)0x0;
  uVar6 = (**(code **)((longlong)*this->Cache + 8))(this->Cache,param_1,0);
  this->CacheId = uVar6;
  (**(code **)((longlong)*this->Cache + 0x10))(this->Cache,&local_48,uVar6);
  if (((local_48 == (ulong64 *)0x0) || (local_40 < 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserData.GetData() && UserData.GetSize() >= sizeof(uint64)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedPagedArray.h"
                         ,0x2d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
              *)(*pcVar4)();
    return pTVar9;
  }
  this->ElementCount = local_48;
  iVar12 = (int)(*local_48 + 0x3ff >> 10);
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar12,&pTVar1->AllocatorInstance,piVar2,piVar16);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  _Size = (longlong)iVar12 * 8;
  memmove(pFVar3 + _Size,pFVar3,(longlong)iVar7 << 3);
  memset((pTVar1->AllocatorInstance).Data,0,_Size);
  if (this->ResidentPageCount != 0xffffffff) {
    return this;
  }
  uVar15 = (uint)(*this->ElementCount + 0x3ff >> 10);
  uVar6 = uVar13;
  if (uVar15 != 0) {
    do {
      iVar7 = (this->Pages).ArrayNum;
      piVar11 = (int *)(longlong)iVar7;
      uVar8 = 0;
      if ((int)uVar13 < iVar7) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         piVar16 = piVar11, bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
                  *)(*pcVar4)();
        return pTVar9;
      }
      if (*(longlong *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar13 * 8) == 0) {
        plVar10 = (longlong *)
                  (**(code **)((longlong)*this->Cache + 0x20))
                            (this->Cache,&local_res8,this->CacheId,uVar6,3,piVar16);
        iVar7 = (this->ResidentPages).ArrayNum;
        if (iVar7 == (this->ResidentPages).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->ResidentPages).AllocatorInstance,
                             &(this->ResidentPages).ArrayMax);
        }
        (this->ResidentPages).ArrayNum = iVar7 + 1;
        pFVar3 = (this->ResidentPages).AllocatorInstance.Data + (longlong)iVar7 * 8;
        lVar14 = *plVar10;
        *plVar10 = 0;
        *(longlong *)pFVar3 = lVar14;
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
        plVar10 = *(longlong **)pFVar3;
        lVar14 = 0;
        if (plVar10 != (longlong *)0x0) {
          if (((ulonglong)plVar10[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
          lVar14 = plVar10[1];
        }
        iVar7 = *piVar2;
        piVar11 = (int *)(longlong)iVar7;
        uVar8 = 0;
        if ((int)uVar13 < iVar7) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , piVar16 = piVar11, bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
                    *)(*pcVar4)();
          return pTVar9;
        }
        *(longlong *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar13 * 8) = lVar14;
        EvictPages(this);
      }
      uVar13 = uVar13 + 1;
      uVar6 = uVar6 + 3;
    } while (uVar13 < uVar15);
  }
  return this;
}

// TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024> @ 14d41ea10

TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
* __thiscall
TraceServices::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
          (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
           *this,wchar_t *param_1,IAnalysisCache *param_2,uint param_3)

{
  TArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  size_t _Size;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
  *pTVar9;
  longlong *plVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  int *piVar16;
  ulong64 *local_48;
  ulonglong local_40;
  
  this->Cache = param_2;
  pTVar1 = &this->Pages;
  uVar13 = 0;
  (this->Pages).ArrayNum = 0;
  piVar2 = &(this->Pages).ArrayNum;
  (this->Pages).ArrayMax = 0;
  piVar16 = &(this->Pages).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ResidentPages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResidentPages).ArrayNum = 0;
  (this->ResidentPages).ArrayMax = 0;
  this->CacheId = 0;
  this->ResidentPageCount = param_3;
  this->ElementCount = (ulong64 *)0x0;
  uVar6 = (**(code **)((longlong)*this->Cache + 8))(this->Cache,param_1,0);
  this->CacheId = uVar6;
  (**(code **)((longlong)*this->Cache + 0x10))(this->Cache,&local_48,uVar6);
  if (((local_48 == (ulong64 *)0x0) || (local_40 < 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserData.GetData() && UserData.GetSize() >= sizeof(uint64)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedPagedArray.h"
                         ,0x2d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
              *)(*pcVar4)();
    return pTVar9;
  }
  this->ElementCount = local_48;
  iVar12 = (int)(*local_48 + 0x3ff >> 10);
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar12,&pTVar1->AllocatorInstance,piVar2,piVar16);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  _Size = (longlong)iVar12 * 8;
  memmove(pFVar3 + _Size,pFVar3,(longlong)iVar7 << 3);
  memset((pTVar1->AllocatorInstance).Data,0,_Size);
  if (this->ResidentPageCount != 0xffffffff) {
    return this;
  }
  uVar15 = (uint)(*this->ElementCount + 0x3ff >> 10);
  uVar6 = uVar13;
  if (uVar15 != 0) {
    do {
      iVar7 = (this->Pages).ArrayNum;
      piVar11 = (int *)(longlong)iVar7;
      uVar8 = 0;
      if ((int)uVar13 < iVar7) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         piVar16 = piVar11, bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
                  *)(*pcVar4)();
        return pTVar9;
      }
      if (*(longlong *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar13 * 8) == 0) {
        plVar10 = (longlong *)
                  (**(code **)((longlong)*this->Cache + 0x20))
                            (this->Cache,&local_res8,this->CacheId,uVar6,3,piVar16);
        iVar7 = (this->ResidentPages).ArrayNum;
        if (iVar7 == (this->ResidentPages).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->ResidentPages).AllocatorInstance,
                             &(this->ResidentPages).ArrayMax);
        }
        (this->ResidentPages).ArrayNum = iVar7 + 1;
        pFVar3 = (this->ResidentPages).AllocatorInstance.Data + (longlong)iVar7 * 8;
        lVar14 = *plVar10;
        *plVar10 = 0;
        *(longlong *)pFVar3 = lVar14;
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
        plVar10 = *(longlong **)pFVar3;
        lVar14 = 0;
        if (plVar10 != (longlong *)0x0) {
          if (((ulonglong)plVar10[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
          lVar14 = plVar10[1];
        }
        iVar7 = *piVar2;
        piVar11 = (int *)(longlong)iVar7;
        uVar8 = 0;
        if ((int)uVar13 < iVar7) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , piVar16 = piVar11, bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
                    *)(*pcVar4)();
          return pTVar9;
        }
        *(longlong *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar13 * 8) = lVar14;
        EvictPages(this);
      }
      uVar13 = uVar13 + 1;
      uVar6 = uVar6 + 3;
    } while (uVar13 < uVar15);
  }
  return this;
}

// EvictPages @ 14d45dc80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TraceServices::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
::EvictPages(TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
             *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  uVar7 = (this->ResidentPages).ArrayNum;
  if (this->ResidentPageCount < uVar7) {
    if (((int)uVar7 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar1 = *(longlong **)(this->ResidentPages).AllocatorInstance.Data;
    if (plVar1 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      lVar6 = plVar1[1];
    }
    pFVar2 = (this->Pages).AllocatorInstance.Data;
    for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)(this->Pages).ArrayNum * 8;
        pFVar8 = pFVar8 + 8) {
      if (*(longlong *)pFVar8 == lVar6) {
        uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
        if (uVar7 == 0xffffffff) goto LAB_14d45dd28;
        goto LAB_14d45dd5f;
      }
    }
    uVar7 = 0xffffffff;
LAB_14d45dd28:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index!=INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedPagedArray.h"
                       ,0x8b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_14d45dd5f:
    uVar5 = 0;
    if ((int)uVar7 < (this->Pages).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined8 *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) = 0;
    TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>::RemoveAt(&this->ResidentPages,0,Default);
  }
  return;
}

// EvictPages @ 14d45ddf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TraceServices::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>::
EvictPages(TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
           *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  uVar7 = (this->ResidentPages).ArrayNum;
  if (this->ResidentPageCount < uVar7) {
    if (((int)uVar7 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar1 = *(longlong **)(this->ResidentPages).AllocatorInstance.Data;
    if (plVar1 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      lVar6 = plVar1[1];
    }
    pFVar2 = (this->Pages).AllocatorInstance.Data;
    for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)(this->Pages).ArrayNum * 8;
        pFVar8 = pFVar8 + 8) {
      if (*(longlong *)pFVar8 == lVar6) {
        uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
        if (uVar7 == 0xffffffff) goto LAB_14d45de98;
        goto LAB_14d45decf;
      }
    }
    uVar7 = 0xffffffff;
LAB_14d45de98:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index!=INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedPagedArray.h"
                       ,0x8b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_14d45decf:
    uVar5 = 0;
    if ((int)uVar7 < (this->Pages).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined8 *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) = 0;
    TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>::RemoveAt(&this->ResidentPages,0,Default);
  }
  return;
}

// EvictPages @ 14d45df60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TraceServices::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
::EvictPages(TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
             *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  uVar7 = (this->ResidentPages).ArrayNum;
  if (this->ResidentPageCount < uVar7) {
    if (((int)uVar7 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar1 = *(longlong **)(this->ResidentPages).AllocatorInstance.Data;
    if (plVar1 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      lVar6 = plVar1[1];
    }
    pFVar2 = (this->Pages).AllocatorInstance.Data;
    for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)(this->Pages).ArrayNum * 8;
        pFVar8 = pFVar8 + 8) {
      if (*(longlong *)pFVar8 == lVar6) {
        uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
        if (uVar7 == 0xffffffff) goto LAB_14d45e008;
        goto LAB_14d45e03f;
      }
    }
    uVar7 = 0xffffffff;
LAB_14d45e008:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index!=INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedPagedArray.h"
                       ,0x8b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_14d45e03f:
    uVar5 = 0;
    if ((int)uVar7 < (this->Pages).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined8 *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) = 0;
    TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>::RemoveAt(&this->ResidentPages,0,Default);
  }
  return;
}

// GetPage @ 14d46b7b0

FSavedSymbol * __thiscall
TraceServices::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
::GetPage(TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
          *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FSavedSymbol *pFVar8;
  longlong *plVar9;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  
  uVar6 = 0;
  if ((int)param_1 < (this->Pages).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSavedSymbol *)(*pcVar4)();
    return pFVar8;
  }
  pFVar8 = *(FSavedSymbol **)((this->Pages).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  if (pFVar8 == (FSavedSymbol *)0x0) {
    plVar9 = (longlong *)
             (**(code **)((longlong)*this->Cache + 0x20))
                       (this->Cache,&local_res8,this->CacheId,param_1 * 3,3);
    piVar1 = &(this->ResidentPages).ArrayMax;
    iVar7 = (this->ResidentPages).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ResidentPages).AllocatorInstance,piVar1);
    }
    (this->ResidentPages).ArrayNum = iVar7 + 1;
    pFVar2 = (this->ResidentPages).AllocatorInstance.Data + (longlong)iVar7 * 8;
    lVar3 = *plVar9;
    *plVar9 = 0;
    *(longlong *)pFVar2 = lVar3;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
    plVar9 = *(longlong **)pFVar2;
    pFVar8 = (FSavedSymbol *)0x0;
    if (plVar9 != (longlong *)0x0) {
      if (((ulonglong)plVar9[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      pFVar8 = (FSavedSymbol *)plVar9[1];
    }
    uVar6 = 0;
    if ((int)param_1 < (this->Pages).ArrayNum) {
      uVar6 = ~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSavedSymbol *)(*pcVar4)();
      return pFVar8;
    }
    *(FSavedSymbol **)((this->Pages).AllocatorInstance.Data + (longlong)(int)param_1 * 8) = pFVar8;
    EvictPages(this);
  }
  return pFVar8;
}

// GetPage @ 14d46b920

FSavedSymbol * __thiscall
TraceServices::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>::
GetPage(TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
        *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FSavedSymbol *pFVar8;
  longlong *plVar9;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  
  uVar6 = 0;
  if ((int)param_1 < (this->Pages).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSavedSymbol *)(*pcVar4)();
    return pFVar8;
  }
  pFVar8 = *(FSavedSymbol **)((this->Pages).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  if (pFVar8 == (FSavedSymbol *)0x0) {
    plVar9 = (longlong *)
             (**(code **)((longlong)*this->Cache + 0x20))
                       (this->Cache,&local_res8,this->CacheId,param_1 * 3,3);
    piVar1 = &(this->ResidentPages).ArrayMax;
    iVar7 = (this->ResidentPages).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ResidentPages).AllocatorInstance,piVar1);
    }
    (this->ResidentPages).ArrayNum = iVar7 + 1;
    pFVar2 = (this->ResidentPages).AllocatorInstance.Data + (longlong)iVar7 * 8;
    lVar3 = *plVar9;
    *plVar9 = 0;
    *(longlong *)pFVar2 = lVar3;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
    plVar9 = *(longlong **)pFVar2;
    pFVar8 = (FSavedSymbol *)0x0;
    if (plVar9 != (longlong *)0x0) {
      if (((ulonglong)plVar9[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      pFVar8 = (FSavedSymbol *)plVar9[1];
    }
    uVar6 = 0;
    if ((int)param_1 < (this->Pages).ArrayNum) {
      uVar6 = ~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSavedSymbol *)(*pcVar4)();
      return pFVar8;
    }
    *(FSavedSymbol **)((this->Pages).AllocatorInstance.Data + (longlong)(int)param_1 * 8) = pFVar8;
    EvictPages(this);
  }
  return pFVar8;
}

// GetPage @ 14d46ba90

FSavedSymbol * __thiscall
TraceServices::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
::GetPage(TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
          *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FSavedSymbol *pFVar8;
  longlong *plVar9;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  
  uVar6 = 0;
  if ((int)param_1 < (this->Pages).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSavedSymbol *)(*pcVar4)();
    return pFVar8;
  }
  pFVar8 = *(FSavedSymbol **)((this->Pages).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  if (pFVar8 == (FSavedSymbol *)0x0) {
    plVar9 = (longlong *)
             (**(code **)((longlong)*this->Cache + 0x20))
                       (this->Cache,&local_res8,this->CacheId,param_1 * 3,3);
    piVar1 = &(this->ResidentPages).ArrayMax;
    iVar7 = (this->ResidentPages).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ResidentPages).AllocatorInstance,piVar1);
    }
    (this->ResidentPages).ArrayNum = iVar7 + 1;
    pFVar2 = (this->ResidentPages).AllocatorInstance.Data + (longlong)iVar7 * 8;
    lVar3 = *plVar9;
    *plVar9 = 0;
    *(longlong *)pFVar2 = lVar3;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
    plVar9 = *(longlong **)pFVar2;
    pFVar8 = (FSavedSymbol *)0x0;
    if (plVar9 != (longlong *)0x0) {
      if (((ulonglong)plVar9[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      pFVar8 = (FSavedSymbol *)plVar9[1];
    }
    uVar6 = 0;
    if ((int)param_1 < (this->Pages).ArrayNum) {
      uVar6 = ~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSavedSymbol *)(*pcVar4)();
      return pFVar8;
    }
    *(FSavedSymbol **)((this->Pages).AllocatorInstance.Data + (longlong)(int)param_1 * 8) = pFVar8;
    EvictPages(this);
  }
  return pFVar8;
}

// GetPageForNextItem @ 14d46bc00

FSavedSymbol * __thiscall
TraceServices::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
::GetPageForNextItem
          (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
           *this)

{
  int *piVar1;
  TArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  FSavedSymbol *pFVar10;
  uint uVar11;
  uint uVar12;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  longlong local_18 [2];
  
  lVar9 = 0;
  if ((*this->ElementCount & 0x3ff) == 0) {
    plVar8 = (longlong *)
             (**(code **)((longlong)*this->Cache + 0x18))(this->Cache,&local_res8,this->CacheId,3);
    piVar1 = &(this->ResidentPages).ArrayMax;
    iVar7 = (this->ResidentPages).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ResidentPages).AllocatorInstance,piVar1);
    }
    (this->ResidentPages).ArrayNum = iVar7 + 1;
    pFVar3 = (this->ResidentPages).AllocatorInstance.Data + (longlong)iVar7 * 8;
    lVar4 = *plVar8;
    *plVar8 = 0;
    *(longlong *)pFVar3 = lVar4;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
    plVar8 = *(longlong **)pFVar3;
    pTVar2 = &this->Pages;
    if (plVar8 != (longlong *)0x0) {
      if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      lVar9 = plVar8[1];
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_18[0] = lVar9;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Pages).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FSavedSymbol *)(*pcVar5)();
      return pFVar10;
    }
    iVar7 = (this->Pages).ArrayNum;
    piVar1 = &(this->Pages).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Pages).ArrayNum = iVar7 + 1;
    *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
    EvictPages(this);
  }
  iVar7 = (this->Pages).ArrayNum;
  uVar11 = iVar7 - 1;
  uVar12 = 0;
  if ((int)uVar11 < iVar7) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FSavedSymbol *)(*pcVar5)();
    return pFVar10;
  }
  return *(FSavedSymbol **)
          ((this->Pages).AllocatorInstance.Data + (longlong)(this->Pages).ArrayNum * 8 + -8);
}

// GetPageForNextItem @ 14d46bde0

FSavedSymbol * __thiscall
TraceServices::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>::
GetPageForNextItem(TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
                   *this)

{
  int *piVar1;
  TArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  FSavedSymbol *pFVar10;
  uint uVar11;
  uint uVar12;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  longlong local_18 [2];
  
  lVar9 = 0;
  if ((*this->ElementCount & 0x3ff) == 0) {
    plVar8 = (longlong *)
             (**(code **)((longlong)*this->Cache + 0x18))(this->Cache,&local_res8,this->CacheId,3);
    piVar1 = &(this->ResidentPages).ArrayMax;
    iVar7 = (this->ResidentPages).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ResidentPages).AllocatorInstance,piVar1);
    }
    (this->ResidentPages).ArrayNum = iVar7 + 1;
    pFVar3 = (this->ResidentPages).AllocatorInstance.Data + (longlong)iVar7 * 8;
    lVar4 = *plVar8;
    *plVar8 = 0;
    *(longlong *)pFVar3 = lVar4;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
    plVar8 = *(longlong **)pFVar3;
    pTVar2 = &this->Pages;
    if (plVar8 != (longlong *)0x0) {
      if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      lVar9 = plVar8[1];
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_18[0] = lVar9;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Pages).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FSavedSymbol *)(*pcVar5)();
      return pFVar10;
    }
    iVar7 = (this->Pages).ArrayNum;
    piVar1 = &(this->Pages).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Pages).ArrayNum = iVar7 + 1;
    *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
    EvictPages(this);
  }
  iVar7 = (this->Pages).ArrayNum;
  uVar11 = iVar7 - 1;
  uVar12 = 0;
  if ((int)uVar11 < iVar7) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FSavedSymbol *)(*pcVar5)();
    return pFVar10;
  }
  return *(FSavedSymbol **)
          ((this->Pages).AllocatorInstance.Data + (longlong)(this->Pages).ArrayNum * 8 + -8);
}

// GetPageForNextItem @ 14d46bfc0

FSavedSymbol * __thiscall
TraceServices::
TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
::GetPageForNextItem
          (TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
           *this)

{
  int *piVar1;
  TArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  FSavedSymbol *pFVar10;
  uint uVar11;
  uint uVar12;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  longlong local_18 [2];
  
  lVar9 = 0;
  if ((*this->ElementCount & 0x3ff) == 0) {
    plVar8 = (longlong *)
             (**(code **)((longlong)*this->Cache + 0x18))(this->Cache,&local_res8,this->CacheId,3);
    piVar1 = &(this->ResidentPages).ArrayMax;
    iVar7 = (this->ResidentPages).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ResidentPages).AllocatorInstance,piVar1);
    }
    (this->ResidentPages).ArrayNum = iVar7 + 1;
    pFVar3 = (this->ResidentPages).AllocatorInstance.Data + (longlong)iVar7 * 8;
    lVar4 = *plVar8;
    *plVar8 = 0;
    *(longlong *)pFVar3 = lVar4;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
    plVar8 = *(longlong **)pFVar3;
    pTVar2 = &this->Pages;
    if (plVar8 != (longlong *)0x0) {
      if (((ulonglong)plVar8[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      lVar9 = plVar8[1];
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_18[0] = lVar9;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Pages).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FSavedSymbol *)(*pcVar5)();
      return pFVar10;
    }
    iVar7 = (this->Pages).ArrayNum;
    piVar1 = &(this->Pages).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Pages).ArrayNum = iVar7 + 1;
    *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
    EvictPages(this);
  }
  iVar7 = (this->Pages).ArrayNum;
  uVar11 = iVar7 - 1;
  uVar12 = 0;
  if ((int)uVar11 < iVar7) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FSavedSymbol *)(*pcVar5)();
    return pFVar10;
  }
  return *(FSavedSymbol **)
          ((this->Pages).AllocatorInstance.Data + (longlong)(this->Pages).ArrayNum * 8 + -8);
}

