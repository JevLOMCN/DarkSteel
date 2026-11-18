// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// ~FSlabAllocator @ 14d3d12d0

void __thiscall TraceServices::FSlabAllocator::~FSlabAllocator(FSlabAllocator *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->Cs;
  this->_padding_ = (longlong)&___7FSlabAllocator_TraceServices__6B_;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = (this->Slabs).AllocatorInstance.Data;
    iVar1 = (this->Slabs).ArrayNum;
    pFVar2 = pFVar3 + (longlong)iVar1 * 8;
    while( true ) {
      if ((this->Slabs).ArrayNum != iVar1) {
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar3 == pFVar2) break;
      FMemory::Free(*(void **)pFVar3);
      pFVar3 = pFVar3 + 8;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (this->Slabs).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d3d1362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Allocate @ 14d3d51e0

void * __thiscall TraceServices::FSlabAllocator::Allocate(FSlabAllocator *this,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulong64 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  ulong64 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  void *pvVar9;
  uchar *puVar10;
  ulonglong uVar11;
  uchar *local_28;
  uchar *local_20;
  
  lpCriticalSection = &this->Cs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this->TotalUsedSize = this->TotalUsedSize + param_1;
  uVar3 = this->SlabSize;
  uVar11 = (-(int)param_1 & 0xf) + param_1;
  if (uVar3 < uVar11) {
    this->TotalAllocatedSize = this->TotalAllocatedSize + uVar11;
    local_28 = FMemory::Malloc(uVar11,0x10);
    pFVar4 = (this->Slabs).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)(this->Slabs).ArrayMax * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pvVar9 = (void *)(*pcVar6)();
        return pvVar9;
      }
    }
    iVar8 = (this->Slabs).ArrayNum;
    piVar2 = &(this->Slabs).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Slabs).AllocatorInstance,piVar2);
    }
    (this->Slabs).ArrayNum = iVar8 + 1;
    *(uchar **)((this->Slabs).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_28;
    puVar10 = local_28;
  }
  else {
    puVar1 = &this->CurrentSlabAllocatedSize;
    if ((this->CurrentSlab == (uchar *)0x0) || (uVar3 < *puVar1 + uVar11)) {
      this->TotalAllocatedSize = this->TotalAllocatedSize + uVar3;
      local_20 = FMemory::Malloc(uVar3,0x10);
      this->CurrentSlab = local_20;
      *puVar1 = 0;
      pFVar4 = (this->Slabs).AllocatorInstance.Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_20) &&
         ((FScriptContainerElement *)&local_20 < pFVar4 + (longlong)(this->Slabs).ArrayMax * 8)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pvVar9 = (void *)(*pcVar6)();
          return pvVar9;
        }
      }
      iVar8 = (this->Slabs).ArrayNum;
      piVar2 = &(this->Slabs).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Slabs).AllocatorInstance,piVar2);
      }
      (this->Slabs).ArrayNum = iVar8 + 1;
      *(uchar **)((this->Slabs).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_20;
    }
    uVar5 = *puVar1;
    *puVar1 = uVar5 + uVar11;
    puVar10 = this->CurrentSlab + uVar5;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return puVar10;
}

