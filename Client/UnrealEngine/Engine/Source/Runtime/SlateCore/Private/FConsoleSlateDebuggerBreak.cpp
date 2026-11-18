// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 19

// FConsoleSlateDebuggerBreak @ 142428770

FConsoleSlateDebuggerBreak * __thiscall
FConsoleSlateDebuggerBreak::FConsoleSlateDebuggerBreak(FConsoleSlateDebuggerBreak *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  (this->BreakOnInvalidationElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreakOnInvalidationElements).ArrayNum = 0;
  (this->BreakOnInvalidationElements).ArrayMax = 0;
  (this->BreakOnBeginPaintElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreakOnBeginPaintElements).ArrayNum = 0;
  (this->BreakOnBeginPaintElements).ArrayMax = 0;
  (this->BreakOnEndPaintElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreakOnEndPaintElements).ArrayNum = 0;
  (this->BreakOnEndPaintElements).ArrayMax = 0;
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = HandleBreakOnWidgetInvalidation;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->WidgetInvalidationCommand,L"SlateDebugger.Break.OnWidgetInvalidation",
             L"Break when the widget get invalidated (must be attached to a debugger).\nUsage: [WidgetPtr=0x1234567]|[WidgetId=12345] [Reason=Paint|Volatility|ChildOrder|RenderTransform|Visibility|AttributeRegistration|Prepass|All|]"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_58,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = HandleBeginWidgetPaint;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->WidgetBeginPaintCommand,L"SlateDebugger.Break.OnWidgetBeginPaint",
             L"Break before the widget get painted (must be attached to a debugger).\nUsage: [WidgetPtr=0x1234567]|[WidgetId=12345]"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_58,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = HandleEndWidgetPaint;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->WidgetEndPaintCommand,L"SlateDebugger.Break.OnWidgetEndPaint",
             L"Break after the widget got painted (must be attached to a debugger).\nUsage: [WidgetPtr=0x1234567]|[WidgetId=12345]"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_58,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[4] = RemoveAll;
    puVar1[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->RemoveAllCommand,L"SlateDebugger.Break.RemoveAll",
             L"Remove all request to break.\n",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return this;
}

// ~FConsoleSlateDebuggerBreak @ 14242e750

void __thiscall
FConsoleSlateDebuggerBreak::~FConsoleSlateDebuggerBreak(FConsoleSlateDebuggerBreak *this)

{
  FScriptContainerElement *pFVar1;
  
  RemoveAll(this);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->RemoveAllCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->WidgetEndPaintCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->WidgetBeginPaintCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->WidgetInvalidationCommand);
  pFVar1 = (this->BreakOnEndPaintElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BreakOnBeginPaintElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BreakOnInvalidationElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddBeginPaint @ 142432920

void __thiscall
FConsoleSlateDebuggerBreak::AddBeginPaint(FConsoleSlateDebuggerBreak *this,ulong64 param_1)

{
  ulong64 local_res10 [3];
  
  local_res10[0] = param_1;
  if ((this->BreakOnBeginPaintElements).ArrayNum == 0) {
    TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
    ::AddRaw<FConsoleSlateDebuggerBreak>
              ((TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::BeginWidgetPaint,(FConsoleSlateDebuggerBreak *)&stack0x00000008,
               (pmf_570cb17e)this);
  }
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64_const_&>
            (&this->BreakOnBeginPaintElements,local_res10);
  return;
}

// AddBeginPaint @ 142432970

void __thiscall
FConsoleSlateDebuggerBreak::AddBeginPaint(FConsoleSlateDebuggerBreak *this,SWidget *param_1)

{
  ulong64 local_res8 [4];
  
  local_res8[0] = param_1->UniqueIdentifier;
  if ((this->BreakOnBeginPaintElements).ArrayNum == 0) {
    TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
    ::AddRaw<FConsoleSlateDebuggerBreak>
              ((TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::BeginWidgetPaint,(FConsoleSlateDebuggerBreak *)(local_res8 + 1),
               (pmf_570cb17e)this);
  }
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64_const_&>
            (&this->BreakOnBeginPaintElements,local_res8);
  return;
}

// AddEndPaint @ 142432b20

void __thiscall
FConsoleSlateDebuggerBreak::AddEndPaint(FConsoleSlateDebuggerBreak *this,ulong64 param_1)

{
  ulong64 local_res10 [3];
  
  local_res10[0] = param_1;
  if ((this->BreakOnEndPaintElements).ArrayNum == 0) {
    TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
    ::AddRaw<FConsoleSlateDebuggerBreak>
              ((TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::EndWidgetPaint,(FConsoleSlateDebuggerBreak *)&stack0x00000008,
               (pmf_7b03d560)this);
  }
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64_const_&>
            (&this->BreakOnEndPaintElements,local_res10);
  return;
}

// AddEndPaint @ 142432b70

void __thiscall
FConsoleSlateDebuggerBreak::AddEndPaint(FConsoleSlateDebuggerBreak *this,SWidget *param_1)

{
  ulong64 local_res8 [4];
  
  local_res8[0] = param_1->UniqueIdentifier;
  if ((this->BreakOnEndPaintElements).ArrayNum == 0) {
    TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
    ::AddRaw<FConsoleSlateDebuggerBreak>
              ((TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::EndWidgetPaint,(FConsoleSlateDebuggerBreak *)(local_res8 + 1),
               (pmf_7b03d560)this);
  }
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64_const_&>
            (&this->BreakOnEndPaintElements,local_res8);
  return;
}

// AddInvalidation @ 142432d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerBreak::AddInvalidation
          (FConsoleSlateDebuggerBreak *this,FInvalidationElement *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FInvalidationElement *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  undefined8 uVar6;
  EInvalidateWidgetReason EVar7;
  undefined7 uVar8;
  bool bVar9;
  int iVar10;
  FInvalidationElement *pFVar11;
  
  if ((param_1->WidgetId != 0) && (param_1->Reason != None)) {
    bVar9 = FWindowsPlatformMisc::IsDebuggerPresent();
    if ((!bVar9) && (2 < (byte)LogSlateDebugger._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
    }
    if ((this->BreakOnInvalidationElements).ArrayNum == 0) {
      TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebuggerBreak>
                ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::WidgetInvalidateEvent,
                 (FConsoleSlateDebuggerBreak *)&stack0x00000010,(pmf_b0cd9de5)this);
    }
    pFVar3 = (FInvalidationElement *)(this->BreakOnInvalidationElements).AllocatorInstance.Data;
    EVar7 = param_1->Reason;
    uVar8 = *(undefined7 *)&param_1->field_0x9;
    for (pFVar11 = pFVar3; pFVar11 != pFVar3 + (this->BreakOnInvalidationElements).ArrayNum;
        pFVar11 = pFVar11 + 1) {
      if (pFVar11->WidgetId == param_1->WidgetId) {
        pFVar11->WidgetId = param_1->WidgetId;
        pFVar11->Reason = EVar7;
        *(undefined7 *)&pFVar11->field_0x9 = uVar8;
        return;
      }
    }
    if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->BreakOnInvalidationElements).ArrayMax))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = (this->BreakOnInvalidationElements).ArrayNum;
    piVar1 = &(this->BreakOnInvalidationElements).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)this,piVar1);
    }
    uVar5 = param_1->WidgetId;
    uVar6 = *(undefined8 *)&param_1->Reason;
    (this->BreakOnInvalidationElements).ArrayNum = iVar10 + 1;
    pFVar2 = (this->BreakOnInvalidationElements).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
    *(ulong64 *)pFVar2 = uVar5;
    *(undefined8 *)(pFVar2 + 8) = uVar6;
  }
  return;
}

// AddInvalidation @ 142432e50

void __thiscall
FConsoleSlateDebuggerBreak::AddInvalidation
          (FConsoleSlateDebuggerBreak *this,SWidget *param_1,EInvalidateWidgetReason param_2)

{
  FInvalidationElement local_18;
  
  local_18.WidgetId = param_1->UniqueIdentifier;
  local_18.Reason = param_2;
  AddInvalidation(this,&local_18);
  return;
}

// HandleBeginWidgetPaint @ 14243fdd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerBreak::HandleBeginWidgetPaint
          (FConsoleSlateDebuggerBreak *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  ulong64 local_res18 [2];
  FInvalidationElement local_18;
  
  local_18.WidgetId = 0;
  local_18.Reason =
       Prepass|AttributeRegistration|Visibility|RenderTransform|ChildOrder|PaintAndVolatility|Layout
  ;
  bVar1 = ParseWidgetArgs(this,&local_18,param_1,false);
  if (bVar1) {
    local_res18[0] = local_18.WidgetId;
    if ((this->BreakOnBeginPaintElements).ArrayNum == 0) {
      TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebuggerBreak>
                ((TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::BeginWidgetPaint,
                 (FConsoleSlateDebuggerBreak *)(local_res18 + 1),(pmf_570cb17e)this);
    }
    TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64_const_&>
              (&this->BreakOnBeginPaintElements,local_res18);
    return;
  }
  if (4 < (byte)LogSlateDebugger._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
  }
  return;
}

// HandleBeginWidgetPaint @ 14243fe80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerBreak::HandleBeginWidgetPaint
          (FConsoleSlateDebuggerBreak *this,SWidget *param_1,FPaintArgs *param_2,FGeometry *param_3,
          FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FString local_18;
  
  if (param_1 != (SWidget *)0x0) {
    pFVar4 = (this->BreakOnBeginPaintElements).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(this->BreakOnBeginPaintElements).ArrayNum * 8;
    if (pFVar4 != pFVar1) {
      while (*(ulong64 *)pFVar4 != param_1->UniqueIdentifier) {
        pFVar4 = pFVar4 + 8;
        if (pFVar4 == pFVar1) {
          return;
        }
      }
      if (4 < (byte)LogSlateDebugger._0_1_) {
        FReflectionMetaData::GetWidgetPath(&local_18,param_1,true,false);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (!bVar3) {
        FWindowsPlatformMisc::PromptForRemoteDebugging(false);
      }
      bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// HandleBreakOnWidgetInvalidation @ 14243ff30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerBreak::HandleBreakOnWidgetInvalidation
          (FConsoleSlateDebuggerBreak *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  FInvalidationElement local_28;
  FInvalidationElement local_18;
  
  local_28.WidgetId = 0;
  local_28.Reason =
       Prepass|AttributeRegistration|Visibility|RenderTransform|ChildOrder|PaintAndVolatility|Layout
  ;
  bVar1 = ParseWidgetArgs(this,&local_28,param_1,true);
  if (bVar1) {
    local_18._9_7_ = local_28._9_7_;
    local_18.Reason = local_28.Reason;
    local_18.WidgetId = local_28.WidgetId;
    AddInvalidation(this,&local_18);
    return;
  }
  if (4 < (byte)LogSlateDebugger._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
  }
  return;
}

// HandleEndWidgetPaint @ 142440580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerBreak::HandleEndWidgetPaint
          (FConsoleSlateDebuggerBreak *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  ulong64 local_res18 [2];
  FInvalidationElement local_18;
  
  local_18.WidgetId = 0;
  local_18.Reason =
       Prepass|AttributeRegistration|Visibility|RenderTransform|ChildOrder|PaintAndVolatility|Layout
  ;
  bVar1 = ParseWidgetArgs(this,&local_18,param_1,false);
  if (bVar1) {
    local_res18[0] = local_18.WidgetId;
    if ((this->BreakOnEndPaintElements).ArrayNum == 0) {
      TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
      ::AddRaw<FConsoleSlateDebuggerBreak>
                ((TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                  *)&FSlateDebugging::EndWidgetPaint,(FConsoleSlateDebuggerBreak *)(local_res18 + 1)
                 ,(pmf_7b03d560)this);
    }
    TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64_const_&>
              (&this->BreakOnEndPaintElements,local_res18);
    return;
  }
  if (4 < (byte)LogSlateDebugger._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
  }
  return;
}

// HandleEndWidgetPaint @ 142440630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerBreak::HandleEndWidgetPaint
          (FConsoleSlateDebuggerBreak *this,SWidget *param_1,FSlateWindowElementList *param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FString local_18;
  
  if (param_1 != (SWidget *)0x0) {
    pFVar4 = (this->BreakOnEndPaintElements).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(this->BreakOnEndPaintElements).ArrayNum * 8;
    if (pFVar4 != pFVar1) {
      while (*(ulong64 *)pFVar4 != param_1->UniqueIdentifier) {
        pFVar4 = pFVar4 + 8;
        if (pFVar4 == pFVar1) {
          return;
        }
      }
      if (4 < (byte)LogSlateDebugger._0_1_) {
        FReflectionMetaData::GetWidgetPath(&local_18,param_1,true,false);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (!bVar3) {
        FWindowsPlatformMisc::PromptForRemoteDebugging(false);
      }
      bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// HandleWidgetInvalidated @ 142444230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerBreak::HandleWidgetInvalidated
          (FConsoleSlateDebuggerBreak *this,FSlateDebuggingInvalidateArgs *param_1)

{
  SWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  pSVar1 = param_1->WidgetInvalidated;
  if (pSVar1 != (SWidget *)0x0) {
    pFVar4 = (this->BreakOnInvalidationElements).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)(this->BreakOnInvalidationElements).ArrayNum * 0x10;
    if (pFVar4 != pFVar5) {
      while (*(ulong64 *)pFVar4 != pSVar1->UniqueIdentifier) {
        pFVar4 = pFVar4 + 0x10;
        if (pFVar4 == pFVar5) {
          return;
        }
      }
      if ((param_1->InvalidateWidgetReason & (byte)pFVar4[8]) != None) {
        if (4 < (byte)LogSlateDebugger._0_1_) {
          FReflectionMetaData::GetWidgetPath(&local_18,pSVar1,true,false);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlateDebugger);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
        bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
        if (!bVar3) {
          FWindowsPlatformMisc::PromptForRemoteDebugging(false);
        }
        bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  return;
}

// ParseWidgetArgs @ 14244a740

bool __thiscall
FConsoleSlateDebuggerBreak::ParseWidgetArgs
          (FConsoleSlateDebuggerBreak *this,FInvalidationElement *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  ulong64 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [8];
  char local_res20;
  ulong64 local_48;
  ulong64 local_40;
  
  iVar1 = param_2->ArrayNum;
  pFVar9 = (param_2->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  local_res20 = param_3;
  do {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar9 == pFVar8) {
      return param_2->ArrayNum != 0;
    }
    pwVar2 = *(wchar_t **)pFVar9;
    iVar6 = *(int *)(pFVar9 + 8) + -1;
    if (*(int *)(pFVar9 + 8) == 0) {
      iVar6 = 0;
    }
    iVar5 = iVar6;
    if (7 < iVar6) {
      iVar5 = 7;
    }
    iVar7 = 0;
    if (0 < iVar5) {
      iVar7 = iVar5;
    }
    if ((iVar7 == 7) && (iVar5 = FGenericPlatformStricmp::Strnicmp(L"Reason=",pwVar2,7), iVar5 == 0)
       ) {
      if (local_res20 == '\0') {
        return false;
      }
      iVar5 = iVar6;
      if (iVar6 + -7 < iVar6) {
        iVar5 = iVar6 + -7;
      }
      iVar7 = 0;
      if (0 < iVar5) {
        iVar7 = iVar5;
      }
      bVar4 = LexTryParseString(&param_1->Reason,pwVar2 + ((longlong)iVar6 - (longlong)iVar7));
      if (!bVar4) {
        return false;
      }
    }
    else {
      iVar5 = iVar6;
      if (10 < iVar6) {
        iVar5 = 10;
      }
      iVar7 = 0;
      if (0 < iVar5) {
        iVar7 = iVar5;
      }
      if ((iVar7 == 10) &&
         (iVar5 = FGenericPlatformStricmp::Strnicmp(L"WidgetPtr=",pwVar2,10), iVar5 == 0)) {
        iVar5 = iVar6;
        if (iVar6 + -10 < iVar6) {
          iVar5 = iVar6 + -10;
        }
        iVar7 = 0;
        if (0 < iVar5) {
          iVar7 = iVar5;
        }
        bVar4 = LexTryParseString<unsigned___int64>
                          (&local_48,pwVar2 + ((longlong)iVar6 - (longlong)iVar7));
        uVar3 = local_48;
      }
      else {
        iVar5 = iVar6;
        if (9 < iVar6) {
          iVar5 = 9;
        }
        iVar7 = 0;
        if (0 < iVar5) {
          iVar7 = iVar5;
        }
        if ((iVar7 != 9) ||
           (iVar5 = FGenericPlatformStricmp::Strnicmp(L"WidgetId=",pwVar2,9), iVar5 != 0)) {
          return false;
        }
        iVar5 = iVar6;
        if (iVar6 + -9 < iVar6) {
          iVar5 = iVar6 + -9;
        }
        iVar7 = 0;
        if (0 < iVar5) {
          iVar7 = iVar5;
        }
        bVar4 = LexTryParseString<unsigned___int64>
                          (&local_40,pwVar2 + ((longlong)iVar6 - (longlong)iVar7));
        uVar3 = local_40;
      }
      if (!bVar4) {
        return false;
      }
      if (uVar3 == 0) {
        return false;
      }
      param_1->WidgetId = *(ulong64 *)(uVar3 + 0x200);
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// RemoveAll @ 14244eb10

void __thiscall FConsoleSlateDebuggerBreak::RemoveAll(FConsoleSlateDebuggerBreak *this)

{
  int *piVar1;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::WidgetInvalidateEvent,this);
  piVar1 = &(this->BreakOnInvalidationElements).ArrayMax;
  (this->BreakOnInvalidationElements).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::BeginWidgetPaint,this);
  piVar1 = &(this->BreakOnBeginPaintElements).ArrayMax;
  (this->BreakOnBeginPaintElements).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->BreakOnBeginPaintElements).AllocatorInstance,0,piVar1);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FSlateDebugging::EndWidgetPaint,
             this);
  piVar1 = &(this->BreakOnEndPaintElements).ArrayMax;
  (this->BreakOnEndPaintElements).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->BreakOnEndPaintElements).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveBeginPaint @ 14244ec70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerBreak::RemoveBeginPaint(FConsoleSlateDebuggerBreak *this,SWidget *param_1)

{
  ulong64 local_res8 [4];
  
  local_res8[0] = param_1->UniqueIdentifier;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
            (&this->BreakOnBeginPaintElements,local_res8,Default);
  if ((this->BreakOnBeginPaintElements).ArrayNum == 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FSlateDebugging::BeginWidgetPaint,this);
    return;
  }
  return;
}

// RemoveEndPaint @ 14244f020

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerBreak::RemoveEndPaint(FConsoleSlateDebuggerBreak *this,SWidget *param_1)

{
  ulong64 local_res8 [4];
  
  local_res8[0] = param_1->UniqueIdentifier;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
            (&this->BreakOnEndPaintElements,local_res8,Default);
  if ((this->BreakOnEndPaintElements).ArrayNum == 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FSlateDebugging::EndWidgetPaint,this);
    return;
  }
  return;
}

// RemoveInvalidation @ 14244f070

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FConsoleSlateDebuggerBreak::RemoveInvalidation(FConsoleSlateDebuggerBreak *this,SWidget *param_1)

{
  <lambda_1> local_res8 [4];
  
  local_res8[0].WidgetId = param_1->UniqueIdentifier;
  TArray<FConsoleSlateDebuggerBreak::FInvalidationElement,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_FConsoleSlateDebuggerBreak::RemoveInvalidation_::__l2::<lambda_1>_>
            (&this->BreakOnInvalidationElements,local_res8,Default);
  if ((this->BreakOnInvalidationElements).ArrayNum == 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FSlateDebugging::WidgetInvalidateEvent,this);
    return;
  }
  return;
}

