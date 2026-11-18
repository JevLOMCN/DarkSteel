// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// Add<UInterchangeResultError_Generic> @ 14e675bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResultError_Generic * __thiscall
UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>
          (UInterchangeResultsContainer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UInterchangeResultError_Generic *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  UInterchangeResultError_Generic **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UInterchangeResultError_Generic *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lpCriticalSection = &this->Lock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pUVar6 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UInterchangeResultError_Generic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar7);
  local_98._8_8_ = pUVar6;
  pUVar8 = (UInterchangeResultError_Generic *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  local_a8[0] = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UInterchangeResultError_Generic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pFVar2 = (this->Results).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_a8) &&
     (lVar10 = (longlong)(this->Results).ArrayMax,
     (FScriptContainerElement *)local_a8 < pFVar2 + lVar10 * 8)) {
    local_c0 = (longlong)(this->Results).ArrayNum;
    local_b8 = 8;
    local_d8 = local_a8;
    local_d0 = pFVar2;
    local_c8 = lVar10;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UInterchangeResultError_Generic *)(*pcVar3)();
      return pUVar8;
    }
  }
  iVar5 = (this->Results).ArrayNum;
  piVar1 = &(this->Results).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Results).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Results).AllocatorInstance.Data;
  (this->Results).ArrayNum = iVar5 + 1;
  *(UInterchangeResultError_Generic **)(pFVar2 + (longlong)iVar5 * 8) = local_a8[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a8[0] != (UInterchangeResultError_Generic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8[0]);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pUVar8;
}

