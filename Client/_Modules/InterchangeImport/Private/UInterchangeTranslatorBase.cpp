// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 3

// AddMessage<UInterchangeResultError_Generic> @ 14e675d80

UInterchangeResultError_Generic * __thiscall
UInterchangeTranslatorBase::AddMessage<UInterchangeResultError_Generic>
          (UInterchangeTranslatorBase *this)

{
  longlong *plVar1;
  int iVar2;
  UInterchangeResultsContainer *this_00;
  UInterchangeSourceData *pUVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  UInterchangeResultError_Generic *pUVar6;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  this_00 = (this->Results).field0_0x0.DebugPtr;
  if (this_00 == (UInterchangeResultsContainer *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3799874561680343173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
                       ,0x85,"Results");
    if (!bVar5) {
      return (UInterchangeResultError_Generic *)0x0;
    }
  }
  else {
    if ((this->SourceData).field0_0x0.DebugPtr != (UInterchangeSourceData *)0x0) {
      pUVar6 = UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>(this_00);
      pUVar3 = (this->SourceData).field0_0x0.DebugPtr;
      local_18.Data = (FScriptContainerElement *)0x0;
      iVar2 = (pUVar3->Filename).Data.ArrayNum;
      _Src = (pUVar3->Filename).Data.AllocatorInstance.Data;
      local_10 = CONCAT44(local_10._4_4_,iVar2);
      if (iVar2 == 0) {
        local_10 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,0,&local_18,iVar2,(int *)((longlong)&local_10 + 4));
        memcpy(local_18.Data,_Src,(longlong)iVar2 * 2);
      }
      plVar1 = &pUVar6->_padding_;
      if ((ForAnyElementType *)plVar1 != &local_18) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)local_18.Data;
        *(undefined4 *)&pUVar6->_padding_ = (undefined4)local_10;
        local_18.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)((longlong)&pUVar6->_padding_ + 4) = local_10._4_4_;
        local_10 = 0;
      }
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data);
      }
      return pUVar6;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3799874561680343173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
                       ,0x85,"SourceData");
    if (!bVar5) {
      return (UInterchangeResultError_Generic *)0x0;
    }
  }
  pcVar4 = (code *)swi(3);
  pUVar6 = (UInterchangeResultError_Generic *)(*pcVar4)();
  return pUVar6;
}

// AddMessage<UInterchangeResultWarning_Generic> @ 14e675ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResultWarning_Generic * __thiscall
UInterchangeTranslatorBase::AddMessage<UInterchangeResultWarning_Generic>
          (UInterchangeTranslatorBase *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  UInterchangeResultsContainer *pUVar2;
  FScriptContainerElement *pFVar3;
  UInterchangeSourceData *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UInterchangeResultWarning_Generic *pUVar8;
  UPackage *pUVar9;
  UClass *pUVar10;
  longlong *plVar11;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  UInterchangeResultWarning_Generic *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pUVar2 = (this->Results).field0_0x0.DebugPtr;
  if (pUVar2 == (UInterchangeResultsContainer *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3799874561680343173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
                       ,0x85,"Results");
    if (bVar6) {
code_r0x00014e675f70:
      pcVar5 = (code *)swi(3);
      pUVar8 = (UInterchangeResultWarning_Generic *)(*pcVar5)();
      return pUVar8;
    }
    pUVar8 = (UInterchangeResultWarning_Generic *)0x0;
  }
  else if ((this->SourceData).field0_0x0.DebugPtr == (UInterchangeSourceData *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3799874561680343173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
                       ,0x85,"SourceData");
    if (bVar6) goto code_r0x00014e675f70;
    pUVar8 = (UInterchangeResultWarning_Generic *)0x0;
  }
  else {
    lpCriticalSection = &pUVar2->Lock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar9 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UInterchangeResultWarning_Generic_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar10);
    local_a8._8_8_ = pUVar9;
    pUVar8 = (UInterchangeResultWarning_Generic *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    local_b8[0] = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UInterchangeResultWarning_Generic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    pFVar3 = (pUVar2->Results).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < pFVar3 + (longlong)(pUVar2->Results).ArrayMax * 8))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar8 = (UInterchangeResultWarning_Generic *)(*pcVar5)();
      return pUVar8;
    }
    iVar7 = (pUVar2->Results).ArrayNum;
    piVar1 = &(pUVar2->Results).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pUVar2->Results).AllocatorInstance,piVar1);
    }
    pFVar3 = (pUVar2->Results).AllocatorInstance.Data;
    (pUVar2->Results).ArrayNum = iVar7 + 1;
    *(UInterchangeResultWarning_Generic **)(pFVar3 + (longlong)iVar7 * 8) = local_b8[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_b8[0] != (UInterchangeResultWarning_Generic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b8[0]);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar4 = (this->SourceData).field0_0x0.DebugPtr;
    local_c8.Data = (FScriptContainerElement *)0x0;
    iVar7 = (pUVar4->Filename).Data.ArrayNum;
    pFVar3 = (pUVar4->Filename).Data.AllocatorInstance.Data;
    local_c0 = CONCAT44(local_c0._4_4_,iVar7);
    if (iVar7 == 0) {
      local_c0 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,&local_c8,iVar7,(int *)((longlong)&local_c0 + 4));
      memcpy(local_c8.Data,pFVar3,(longlong)iVar7 * 2);
    }
    plVar11 = &pUVar8->_padding_;
    if ((ForAnyElementType *)plVar11 != &local_c8) {
      if ((void *)*plVar11 != (void *)0x0) {
        FMemory::Free((void *)*plVar11);
      }
      *plVar11 = (longlong)local_c8.Data;
      *(undefined4 *)&pUVar8->_padding_ = (undefined4)local_c0;
      local_c8.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&pUVar8->_padding_ + 4) = local_c0._4_4_;
      local_c0 = 0;
    }
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  return pUVar8;
}

// AddMessage<UInterchangeResultDisplay_Generic> @ 14e6ad9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResultDisplay_Generic * __thiscall
UInterchangeTranslatorBase::AddMessage<UInterchangeResultDisplay_Generic>
          (UInterchangeTranslatorBase *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  UInterchangeResultsContainer *pUVar2;
  FScriptContainerElement *pFVar3;
  UInterchangeSourceData *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UInterchangeResultDisplay_Generic *pUVar8;
  UPackage *pUVar9;
  UClass *pUVar10;
  longlong *plVar11;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  UInterchangeResultDisplay_Generic *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pUVar2 = (this->Results).field0_0x0.DebugPtr;
  if (pUVar2 == (UInterchangeResultsContainer *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3799874561680343173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
                       ,0x85,"Results");
    if (bVar6) {
code_r0x00014e6ada50:
      pcVar5 = (code *)swi(3);
      pUVar8 = (UInterchangeResultDisplay_Generic *)(*pcVar5)();
      return pUVar8;
    }
    pUVar8 = (UInterchangeResultDisplay_Generic *)0x0;
  }
  else if ((this->SourceData).field0_0x0.DebugPtr == (UInterchangeSourceData *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3799874561680343173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
                       ,0x85,"SourceData");
    if (bVar6) goto code_r0x00014e6ada50;
    pUVar8 = (UInterchangeResultDisplay_Generic *)0x0;
  }
  else {
    lpCriticalSection = &pUVar2->Lock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar9 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UInterchangeResultDisplay_Generic_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar10);
    local_a8._8_8_ = pUVar9;
    pUVar8 = (UInterchangeResultDisplay_Generic *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    local_b8[0] = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UInterchangeResultDisplay_Generic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    pFVar3 = (pUVar2->Results).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < pFVar3 + (longlong)(pUVar2->Results).ArrayMax * 8))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar8 = (UInterchangeResultDisplay_Generic *)(*pcVar5)();
      return pUVar8;
    }
    iVar7 = (pUVar2->Results).ArrayNum;
    piVar1 = &(pUVar2->Results).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pUVar2->Results).AllocatorInstance,piVar1);
    }
    pFVar3 = (pUVar2->Results).AllocatorInstance.Data;
    (pUVar2->Results).ArrayNum = iVar7 + 1;
    *(UInterchangeResultDisplay_Generic **)(pFVar3 + (longlong)iVar7 * 8) = local_b8[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_b8[0] != (UInterchangeResultDisplay_Generic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b8[0]);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar4 = (this->SourceData).field0_0x0.DebugPtr;
    local_c8.Data = (FScriptContainerElement *)0x0;
    iVar7 = (pUVar4->Filename).Data.ArrayNum;
    pFVar3 = (pUVar4->Filename).Data.AllocatorInstance.Data;
    local_c0 = CONCAT44(local_c0._4_4_,iVar7);
    if (iVar7 == 0) {
      local_c0 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,&local_c8,iVar7,(int *)((longlong)&local_c0 + 4));
      memcpy(local_c8.Data,pFVar3,(longlong)iVar7 * 2);
    }
    plVar11 = &pUVar8->_padding_;
    if ((ForAnyElementType *)plVar11 != &local_c8) {
      if ((void *)*plVar11 != (void *)0x0) {
        FMemory::Free((void *)*plVar11);
      }
      *plVar11 = (longlong)local_c8.Data;
      *(undefined4 *)&pUVar8->_padding_ = (undefined4)local_c0;
      local_c8.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&pUVar8->_padding_ + 4) = local_c0._4_4_;
      local_c0 = 0;
    }
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  return pUVar8;
}

