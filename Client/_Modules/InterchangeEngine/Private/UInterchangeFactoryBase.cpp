// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 2

// AddMessage<UInterchangeResultError_Generic> @ 14e4cefb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResultError_Generic * __thiscall
UInterchangeFactoryBase::AddMessage<UInterchangeResultError_Generic>(UInterchangeFactoryBase *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  UInterchangeResultsContainer *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UInterchangeResultError_Generic *pUVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  longlong *plVar10;
  longlong lVar11;
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
  if ((this->Results).field0_0x0.DebugPtr == (UInterchangeResultsContainer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Results != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                       ,0x17b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UInterchangeResultError_Generic *)(*pcVar4)();
      return pUVar7;
    }
  }
  pUVar2 = (this->Results).field0_0x0.DebugPtr;
  lpCriticalSection = &pUVar2->Lock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar8 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar8,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UInterchangeResultError_Generic_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar9);
    local_98._8_8_ = pUVar8;
    pUVar7 = (UInterchangeResultError_Generic *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar10 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    local_a8[0] = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UInterchangeResultError_Generic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    pFVar3 = (pUVar2->Results).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_a8) &&
       (lVar11 = (longlong)(pUVar2->Results).ArrayMax,
       (FScriptContainerElement *)local_a8 < pFVar3 + lVar11 * 8)) {
      local_c0 = (longlong)(pUVar2->Results).ArrayNum;
      local_b8 = 8;
      local_d8 = local_a8;
      local_d0 = pFVar3;
      local_c8 = lVar11;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UInterchangeResultError_Generic *)(*pcVar4)();
        return pUVar7;
      }
    }
    iVar6 = (pUVar2->Results).ArrayNum;
    piVar1 = &(pUVar2->Results).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pUVar2->Results).AllocatorInstance,piVar1);
    }
    pFVar3 = (pUVar2->Results).AllocatorInstance.Data;
    (pUVar2->Results).ArrayNum = iVar6 + 1;
    *(UInterchangeResultError_Generic **)(pFVar3 + (longlong)iVar6 * 8) = local_a8[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_a8[0] != (UInterchangeResultError_Generic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_a8[0]);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pUVar7;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddMessage<UInterchangeResultWarning_Generic> @ 14e4cf1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResultWarning_Generic * __thiscall
UInterchangeFactoryBase::AddMessage<UInterchangeResultWarning_Generic>
          (UInterchangeFactoryBase *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  UInterchangeResultsContainer *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UInterchangeResultWarning_Generic *pUVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  UInterchangeResultWarning_Generic **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UInterchangeResultWarning_Generic *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->Results).field0_0x0.DebugPtr == (UInterchangeResultsContainer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Results != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                       ,0x17b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UInterchangeResultWarning_Generic *)(*pcVar4)();
      return pUVar7;
    }
  }
  pUVar2 = (this->Results).field0_0x0.DebugPtr;
  lpCriticalSection = &pUVar2->Lock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar8 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar8,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UInterchangeResultWarning_Generic_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar9);
    local_98._8_8_ = pUVar8;
    pUVar7 = (UInterchangeResultWarning_Generic *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar10 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    local_a8[0] = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UInterchangeResultWarning_Generic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    pFVar3 = (pUVar2->Results).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_a8) &&
       (lVar11 = (longlong)(pUVar2->Results).ArrayMax,
       (FScriptContainerElement *)local_a8 < pFVar3 + lVar11 * 8)) {
      local_c0 = (longlong)(pUVar2->Results).ArrayNum;
      local_b8 = 8;
      local_d8 = local_a8;
      local_d0 = pFVar3;
      local_c8 = lVar11;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UInterchangeResultWarning_Generic *)(*pcVar4)();
        return pUVar7;
      }
    }
    iVar6 = (pUVar2->Results).ArrayNum;
    piVar1 = &(pUVar2->Results).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pUVar2->Results).AllocatorInstance,piVar1);
    }
    pFVar3 = (pUVar2->Results).AllocatorInstance.Data;
    (pUVar2->Results).ArrayNum = iVar6 + 1;
    *(UInterchangeResultWarning_Generic **)(pFVar3 + (longlong)iVar6 * 8) = local_a8[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_a8[0] != (UInterchangeResultWarning_Generic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_a8[0]);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pUVar7;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

