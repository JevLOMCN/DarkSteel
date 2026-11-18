// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 29

// WithDecorator<UBTDecorator_Cooldown> @ 14701f7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBTDecorator_Cooldown * __cdecl
FBTBuilder::WithDecorator<UBTDecorator_Cooldown>(UBTCompositeNode *param_1,UClass *param_2)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  UBTDecorator_Cooldown **ppUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UBTDecorator_Cooldown *pUVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_f8 [32];
  UBTDecorator_Cooldown **local_d8;
  UBTDecorator_Cooldown **local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UBTDecorator_Cooldown *local_a8;
  UBTDecorator_Cooldown *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar2 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UBTDecorator_Cooldown_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar8);
  local_98._8_8_ = pUVar2;
  pUVar9 = (UBTDecorator_Cooldown *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar11 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UBTDecorator_Cooldown **)(longlong)(int)uVar12;
    local_d0 = (UBTDecorator_Cooldown **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_Cooldown *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UBTDecorator_Cooldown *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  ppUVar4 = *(UBTDecorator_Cooldown ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a8) &&
     (&local_a8 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_Cooldown *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UBTDecorator_Cooldown **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a8 != (UBTDecorator_Cooldown *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UBTDecorator_Cooldown **)(longlong)(int)uVar12;
    local_d0 = (UBTDecorator_Cooldown **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_Cooldown *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a0 = (UBTDecorator_Cooldown *)
             NewObject<UTestBTDecorator_NodeMemoryValidator>((UObject *)param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UBTDecorator_Cooldown *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  ppUVar4 = *(UBTDecorator_Cooldown ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a0) &&
     (&local_a0 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a0;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_Cooldown *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UBTDecorator_Cooldown **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UBTDecorator_Cooldown *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  return pUVar9;
}

// WithDecorator<UBTDecorator_ForceSuccess> @ 14701fb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBTDecorator_ForceSuccess * __cdecl
FBTBuilder::WithDecorator<UBTDecorator_ForceSuccess>(UBTCompositeNode *param_1,UClass *param_2)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  UBTDecorator_ForceSuccess **ppUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UBTDecorator_ForceSuccess *pUVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_f8 [32];
  UBTDecorator_ForceSuccess **local_d8;
  UBTDecorator_ForceSuccess **local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UBTDecorator_ForceSuccess *local_a8;
  UTestBTDecorator_NodeMemoryValidator *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar2 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UBTDecorator_ForceSuccess_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar8);
  local_98._8_8_ = pUVar2;
  pUVar9 = (UBTDecorator_ForceSuccess *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar11 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UBTDecorator_ForceSuccess **)(longlong)(int)uVar12;
    local_d0 = (UBTDecorator_ForceSuccess **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_ForceSuccess *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UBTDecorator_ForceSuccess *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  ppUVar4 = *(UBTDecorator_ForceSuccess ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a8) &&
     (&local_a8 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_ForceSuccess *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UBTDecorator_ForceSuccess **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a8 != (UBTDecorator_ForceSuccess *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UBTDecorator_ForceSuccess **)(longlong)(int)uVar12;
    local_d0 = (UBTDecorator_ForceSuccess **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_ForceSuccess *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a0 = NewObject<UTestBTDecorator_NodeMemoryValidator>((UObject *)param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UTestBTDecorator_NodeMemoryValidator *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  ppUVar4 = *(UBTDecorator_ForceSuccess ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a0) &&
     (&local_a0 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = (UBTDecorator_ForceSuccess **)&local_a0;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_ForceSuccess *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UTestBTDecorator_NodeMemoryValidator **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UTestBTDecorator_NodeMemoryValidator *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  return pUVar9;
}

// WithDecorator<UBTDecorator_Loop> @ 14701fe30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBTDecorator_Loop * __cdecl
FBTBuilder::WithDecorator<UBTDecorator_Loop>(UBTCompositeNode *param_1,UClass *param_2)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  UBTDecorator_Loop **ppUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UBTDecorator_Loop *pUVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_f8 [32];
  UBTDecorator_Loop **local_d8;
  UBTDecorator_Loop **local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UBTDecorator_Loop *local_a8;
  UBTDecorator_Loop *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar2 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UBTDecorator_Loop_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar8);
  local_98._8_8_ = pUVar2;
  pUVar9 = (UBTDecorator_Loop *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar11 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UBTDecorator_Loop **)(longlong)(int)uVar12;
    local_d0 = (UBTDecorator_Loop **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_Loop *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UBTDecorator_Loop *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  ppUVar4 = *(UBTDecorator_Loop ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a8) &&
     (&local_a8 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_Loop *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UBTDecorator_Loop **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UBTDecorator_Loop *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UBTDecorator_Loop **)(longlong)(int)uVar12;
    local_d0 = (UBTDecorator_Loop **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_Loop *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a0 = (UBTDecorator_Loop *)
             NewObject<UTestBTDecorator_NodeMemoryValidator>((UObject *)param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UBTDecorator_Loop *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  ppUVar4 = *(UBTDecorator_Loop ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a0) &&
     (&local_a0 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a0;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_Loop *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UBTDecorator_Loop **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UBTDecorator_Loop *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  return pUVar9;
}

// WithDecorator<UBTDecorator_TimeLimit> @ 147020150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBTDecorator_TimeLimit * __cdecl
FBTBuilder::WithDecorator<UBTDecorator_TimeLimit>(UBTCompositeNode *param_1,UClass *param_2)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  UBTDecorator_TimeLimit **ppUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UBTDecorator_TimeLimit *pUVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_f8 [32];
  UBTDecorator_TimeLimit **local_d8;
  UBTDecorator_TimeLimit **local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UBTDecorator_TimeLimit *local_a8;
  UBTDecorator_TimeLimit *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar2 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UBTDecorator_TimeLimit_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar8);
  local_98._8_8_ = pUVar2;
  pUVar9 = (UBTDecorator_TimeLimit *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar11 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UBTDecorator_TimeLimit **)(longlong)(int)uVar12;
    local_d0 = (UBTDecorator_TimeLimit **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_TimeLimit *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UBTDecorator_TimeLimit *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  ppUVar4 = *(UBTDecorator_TimeLimit ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a8) &&
     (&local_a8 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_TimeLimit *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UBTDecorator_TimeLimit **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a8 != (UBTDecorator_TimeLimit *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UBTDecorator_TimeLimit **)(longlong)(int)uVar12;
    local_d0 = (UBTDecorator_TimeLimit **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_TimeLimit *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a0 = (UBTDecorator_TimeLimit *)
             NewObject<UTestBTDecorator_NodeMemoryValidator>((UObject *)param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UBTDecorator_TimeLimit *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  ppUVar4 = *(UBTDecorator_TimeLimit ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a0) &&
     (&local_a0 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a0;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UBTDecorator_TimeLimit *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UBTDecorator_TimeLimit **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UBTDecorator_TimeLimit *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  return pUVar9;
}

// WithDecorator<UTestBTDecorator_Blackboard> @ 147020470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTestBTDecorator_Blackboard * __cdecl
FBTBuilder::WithDecorator<UTestBTDecorator_Blackboard>(UBTCompositeNode *param_1,UClass *param_2)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  UTestBTDecorator_Blackboard **ppUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UTestBTDecorator_Blackboard *pUVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_f8 [32];
  UTestBTDecorator_Blackboard **local_d8;
  UTestBTDecorator_Blackboard **local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UTestBTDecorator_Blackboard *local_a8;
  UTestBTDecorator_Blackboard *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar2 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UTestBTDecorator_Blackboard::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar8);
  local_98._8_8_ = pUVar2;
  pUVar9 = (UTestBTDecorator_Blackboard *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar11 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UTestBTDecorator_Blackboard **)(longlong)(int)uVar12;
    local_d0 = (UTestBTDecorator_Blackboard **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_Blackboard *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UTestBTDecorator_Blackboard *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  ppUVar4 = *(UTestBTDecorator_Blackboard ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a8) &&
     (&local_a8 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_Blackboard *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UTestBTDecorator_Blackboard **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a8 != (UTestBTDecorator_Blackboard *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UTestBTDecorator_Blackboard **)(longlong)(int)uVar12;
    local_d0 = (UTestBTDecorator_Blackboard **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_Blackboard *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a0 = (UTestBTDecorator_Blackboard *)
             NewObject<UTestBTDecorator_NodeMemoryValidator>((UObject *)param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UTestBTDecorator_Blackboard *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  ppUVar4 = *(UTestBTDecorator_Blackboard ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a0) &&
     (&local_a0 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a0;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_Blackboard *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UTestBTDecorator_Blackboard **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UTestBTDecorator_Blackboard *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  return pUVar9;
}

// WithDecorator<UTestBTDecorator_Blueprint> @ 147020790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTestBTDecorator_Blueprint * __cdecl
FBTBuilder::WithDecorator<UTestBTDecorator_Blueprint>(UBTCompositeNode *param_1,UClass *param_2)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  UTestBTDecorator_Blueprint **ppUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UTestBTDecorator_Blueprint *pUVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_f8 [32];
  UTestBTDecorator_Blueprint **local_d8;
  UTestBTDecorator_Blueprint **local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UTestBTDecorator_Blueprint *local_a8;
  UTestBTDecorator_Blueprint *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar2 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UTestBTDecorator_Blueprint::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar8);
  local_98._8_8_ = pUVar2;
  pUVar9 = (UTestBTDecorator_Blueprint *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar11 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UTestBTDecorator_Blueprint **)(longlong)(int)uVar12;
    local_d0 = (UTestBTDecorator_Blueprint **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_Blueprint *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UTestBTDecorator_Blueprint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  ppUVar4 = *(UTestBTDecorator_Blueprint ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a8) &&
     (&local_a8 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_Blueprint *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UTestBTDecorator_Blueprint **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a8 != (UTestBTDecorator_Blueprint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UTestBTDecorator_Blueprint **)(longlong)(int)uVar12;
    local_d0 = (UTestBTDecorator_Blueprint **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_Blueprint *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a0 = (UTestBTDecorator_Blueprint *)
             NewObject<UTestBTDecorator_NodeMemoryValidator>((UObject *)param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UTestBTDecorator_Blueprint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  ppUVar4 = *(UTestBTDecorator_Blueprint ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a0) &&
     (&local_a0 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a0;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_Blueprint *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UTestBTDecorator_Blueprint **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UTestBTDecorator_Blueprint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  return pUVar9;
}

// WithDecorator<UTestBTDecorator_CantExecute> @ 147020ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTestBTDecorator_CantExecute * __cdecl
FBTBuilder::WithDecorator<UTestBTDecorator_CantExecute>(UBTCompositeNode *param_1,UClass *param_2)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  UTestBTDecorator_CantExecute **ppUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UTestBTDecorator_CantExecute *pUVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_f8 [32];
  UTestBTDecorator_CantExecute **local_d8;
  UTestBTDecorator_CantExecute **local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UTestBTDecorator_CantExecute *local_a8;
  UTestBTDecorator_NodeMemoryValidator *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar2 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UTestBTDecorator_CantExecute::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar8);
  local_98._8_8_ = pUVar2;
  pUVar9 = (UTestBTDecorator_CantExecute *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar11 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UTestBTDecorator_CantExecute **)(longlong)(int)uVar12;
    local_d0 = (UTestBTDecorator_CantExecute **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_CantExecute *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UTestBTDecorator_CantExecute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  ppUVar4 = *(UTestBTDecorator_CantExecute ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a8) &&
     (&local_a8 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_CantExecute *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UTestBTDecorator_CantExecute **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a8 != (UTestBTDecorator_CantExecute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UTestBTDecorator_CantExecute **)(longlong)(int)uVar12;
    local_d0 = (UTestBTDecorator_CantExecute **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_CantExecute *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a0 = NewObject<UTestBTDecorator_NodeMemoryValidator>((UObject *)param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UTestBTDecorator_NodeMemoryValidator *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  ppUVar4 = *(UTestBTDecorator_CantExecute ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a0) &&
     (&local_a0 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = (UTestBTDecorator_CantExecute **)&local_a0;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_CantExecute *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UTestBTDecorator_NodeMemoryValidator **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UTestBTDecorator_NodeMemoryValidator *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  return pUVar9;
}

// WithDecorator<UTestBTDecorator_DelayedAbort> @ 147020dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTestBTDecorator_DelayedAbort * __cdecl
FBTBuilder::WithDecorator<UTestBTDecorator_DelayedAbort>(UBTCompositeNode *param_1,UClass *param_2)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  UTestBTDecorator_DelayedAbort **ppUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UTestBTDecorator_DelayedAbort *pUVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_f8 [32];
  UTestBTDecorator_DelayedAbort **local_d8;
  UTestBTDecorator_DelayedAbort **local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UTestBTDecorator_DelayedAbort *local_a8;
  UTestBTDecorator_DelayedAbort *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar2 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UTestBTDecorator_DelayedAbort::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar8);
  local_98._8_8_ = pUVar2;
  pUVar9 = (UTestBTDecorator_DelayedAbort *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar11 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UTestBTDecorator_DelayedAbort **)(longlong)(int)uVar12;
    local_d0 = (UTestBTDecorator_DelayedAbort **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_DelayedAbort *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UTestBTDecorator_DelayedAbort *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  ppUVar4 = *(UTestBTDecorator_DelayedAbort ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a8) &&
     (&local_a8 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_DelayedAbort *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UTestBTDecorator_DelayedAbort **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a8 != (UTestBTDecorator_DelayedAbort *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UTestBTDecorator_DelayedAbort **)(longlong)(int)uVar12;
    local_d0 = (UTestBTDecorator_DelayedAbort **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_DelayedAbort *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a0 = (UTestBTDecorator_DelayedAbort *)
             NewObject<UTestBTDecorator_NodeMemoryValidator>((UObject *)param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UTestBTDecorator_DelayedAbort *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  ppUVar4 = *(UTestBTDecorator_DelayedAbort ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a0) &&
     (&local_a0 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a0;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_DelayedAbort *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UTestBTDecorator_DelayedAbort **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UTestBTDecorator_DelayedAbort *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  return pUVar9;
}

// WithDecorator<UTestBTDecorator_LoopUntil> @ 1470210f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTestBTDecorator_LoopUntil * __cdecl
FBTBuilder::WithDecorator<UTestBTDecorator_LoopUntil>(UBTCompositeNode *param_1,UClass *param_2)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  UTestBTDecorator_LoopUntil **ppUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UTestBTDecorator_LoopUntil *pUVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_f8 [32];
  UTestBTDecorator_LoopUntil **local_d8;
  UTestBTDecorator_LoopUntil **local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UTestBTDecorator_LoopUntil *local_a8;
  UTestBTDecorator_LoopUntil *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar2 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UTestBTDecorator_LoopUntil::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar8);
  local_98._8_8_ = pUVar2;
  pUVar9 = (UTestBTDecorator_LoopUntil *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar11 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UTestBTDecorator_LoopUntil **)(longlong)(int)uVar12;
    local_d0 = (UTestBTDecorator_LoopUntil **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_LoopUntil *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UTestBTDecorator_LoopUntil *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  ppUVar4 = *(UTestBTDecorator_LoopUntil ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a8) &&
     (&local_a8 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a8;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_LoopUntil *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UTestBTDecorator_LoopUntil **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a8 != (UTestBTDecorator_LoopUntil *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  iVar1 = (param_1->Children).ArrayNum;
  uVar12 = iVar1 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_d8 = (UTestBTDecorator_LoopUntil **)(longlong)(int)uVar12;
    local_d0 = (UTestBTDecorator_LoopUntil **)(longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_LoopUntil *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar1 = (param_1->Children).ArrayNum;
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  local_a0 = (UTestBTDecorator_LoopUntil *)
             NewObject<UTestBTDecorator_NodeMemoryValidator>((UObject *)param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UTestBTDecorator_LoopUntil *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  ppUVar4 = *(UTestBTDecorator_LoopUntil ***)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20);
  if ((ppUVar4 <= &local_a0) &&
     (&local_a0 < ppUVar4 + *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14))) {
    local_c0 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
    local_b8 = 8;
    local_d8 = &local_a0;
    local_d0 = ppUVar4;
    local_c8 = (longlong)*(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UTestBTDecorator_LoopUntil *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18);
  if (iVar7 == *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20),
                       (int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x14));
  }
  *(int *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x18) = iVar7 + 1;
  *(UTestBTDecorator_LoopUntil **)
   (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x30 + -0x20) + (longlong)iVar7 * 8) = local_a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UTestBTDecorator_LoopUntil *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  return pUVar9;
}

// WithTaskService<UTestBTService_BTStopAction> @ 147021410

UTestBTService_BTStopAction * __cdecl
FBTBuilder::WithTaskService<UTestBTService_BTStopAction>(UBTCompositeNode *param_1,UClass *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UTestBTService_BTStopAction *pUVar6;
  uint uVar7;
  UTestBTService_BTStopAction *local_18 [2];
  
  iVar5 = (param_1->Children).ArrayNum;
  uVar7 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar7 < iVar5) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UTestBTService_BTStopAction *)(*pcVar2)();
      return pUVar6;
    }
  }
  lVar1 = *(longlong *)
           ((param_1->Children).AllocatorInstance.Data +
           (longlong)(param_1->Children).ArrayNum * 0x30 + -0x28);
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\BTBuilder.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UTestBTService_BTStopAction *)(*pcVar2)();
      return pUVar6;
    }
  }
  pUVar6 = NewObject<UTestBTService_BTStopAction>((UObject *)param_1->_padding_);
  local_18[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UTestBTService_BTStopAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  if ((*(UTestBTService_BTStopAction ***)(lVar1 + 0x58) <= local_18) &&
     (local_18 < *(UTestBTService_BTStopAction ***)(lVar1 + 0x58) + *(int *)(lVar1 + 100))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UTestBTService_BTStopAction *)(*pcVar2)();
      return pUVar6;
    }
  }
  iVar5 = *(int *)(lVar1 + 0x60);
  if (iVar5 == *(int *)(lVar1 + 100)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar1 + 0x58),(int *)(lVar1 + 100));
  }
  *(int *)(lVar1 + 0x60) = iVar5 + 1;
  *(UTestBTService_BTStopAction **)(*(longlong *)(lVar1 + 0x58) + (longlong)iVar5 * 8) = local_18[0]
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UTestBTService_BTStopAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return pUVar6;
}

// WithTaskService<UTestBTService_Log> @ 1470215a0

UTestBTService_Log * __cdecl
FBTBuilder::WithTaskService<UTestBTService_Log>(UBTCompositeNode *param_1,UClass *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UTestBTService_Log *pUVar6;
  uint uVar7;
  UTestBTService_Log *local_18 [2];
  
  iVar5 = (param_1->Children).ArrayNum;
  uVar7 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar7 < iVar5) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UTestBTService_Log *)(*pcVar2)();
      return pUVar6;
    }
  }
  lVar1 = *(longlong *)
           ((param_1->Children).AllocatorInstance.Data +
           (longlong)(param_1->Children).ArrayNum * 0x30 + -0x28);
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\BTBuilder.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UTestBTService_Log *)(*pcVar2)();
      return pUVar6;
    }
  }
  pUVar6 = NewObject<UTestBTService_Log>((UObject *)param_1->_padding_);
  local_18[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UTestBTService_Log *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  if ((*(UTestBTService_Log ***)(lVar1 + 0x58) <= local_18) &&
     (local_18 < *(UTestBTService_Log ***)(lVar1 + 0x58) + *(int *)(lVar1 + 100))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UTestBTService_Log *)(*pcVar2)();
      return pUVar6;
    }
  }
  iVar5 = *(int *)(lVar1 + 0x60);
  if (iVar5 == *(int *)(lVar1 + 100)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar1 + 0x58),(int *)(lVar1 + 100));
  }
  *(int *)(lVar1 + 0x60) = iVar5 + 1;
  *(UTestBTService_Log **)(*(longlong *)(lVar1 + 0x58) + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UTestBTService_Log *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return pUVar6;
}

// AddParallel @ 14704f540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBTComposite_SimpleParallel * __cdecl
FBTBuilder::AddParallel(UBTCompositeNode *param_1,Type param_2)

{
  int *piVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  UClass *pUVar8;
  UBTComposite_SimpleParallel *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar2 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UBTComposite_SimpleParallel_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar8);
  local_a8._8_8_ = pUVar2;
  pUVar9 = (UBTComposite_SimpleParallel *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar10 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  (pUVar9->FinishMode).Value = (uchar)param_2;
  (**(code **)(pUVar9->_padding_ + 0x2b0))(pUVar9,param_1->_padding_);
  piVar1 = &(param_1->Children).ArrayNum;
  uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,1,&(param_1->Children).AllocatorInstance,piVar1,
                     &(param_1->Children).ArrayMax);
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  lVar11 = (longlong)(int)uVar6;
  *(undefined8 *)(pFVar3 + lVar11 * 0x30) = 0;
  *(undefined8 *)(pFVar3 + lVar11 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar11 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + lVar11 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar11 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar3 + lVar11 * 0x30 + 0x20 + 8) = 0;
  uVar7 = 0;
  if ((int)uVar6 < *piVar1) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UBTComposite_SimpleParallel *)(*pcVar4)();
      return pUVar9;
    }
  }
  pFVar3 = (param_1->Children).AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  *(UBTComposite_SimpleParallel **)(pFVar3 + lVar11 * 0x30) = pUVar9;
  return pUVar9;
}

// AddSelector @ 14704f6c0

UBTComposite_Selector * __cdecl FBTBuilder::AddSelector(UBTCompositeNode *param_1)

{
  TArray<FBTCompositeChild,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  UBTComposite_Selector *pUVar8;
  longlong lVar9;
  
  pUVar8 = NewObject<UBTComposite_Selector>((UObject *)param_1->_padding_);
  (**(code **)(*(longlong *)pUVar8 + 0x2b0))(pUVar8,param_1->_padding_);
  pTVar1 = &param_1->Children;
  piVar2 = &(param_1->Children).ArrayNum;
  uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,1,&pTVar1->AllocatorInstance,piVar2,&(param_1->Children).ArrayMax);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  lVar9 = (longlong)(int)uVar6;
  *(undefined8 *)(pFVar3 + lVar9 * 0x30) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x20 + 8) = 0;
  uVar7 = 0;
  if ((int)uVar6 < *piVar2) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UBTComposite_Selector *)(*pcVar4)();
      return pUVar8;
    }
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  *(UBTComposite_Selector **)(pFVar3 + lVar9 * 0x30) = pUVar8;
  return pUVar8;
}

// AddSequence @ 14704f7d0

UBTComposite_Sequence * __cdecl FBTBuilder::AddSequence(UBTCompositeNode *param_1)

{
  TArray<FBTCompositeChild,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  UBTComposite_Sequence *pUVar8;
  longlong lVar9;
  
  pUVar8 = NewObject<UBTComposite_Sequence>((UObject *)param_1->_padding_);
  (**(code **)(*(longlong *)pUVar8 + 0x2b0))(pUVar8,param_1->_padding_);
  pTVar1 = &param_1->Children;
  piVar2 = &(param_1->Children).ArrayNum;
  uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,1,&pTVar1->AllocatorInstance,piVar2,&(param_1->Children).ArrayMax);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  lVar9 = (longlong)(int)uVar6;
  *(undefined8 *)(pFVar3 + lVar9 * 0x30) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x30 + 0x20 + 8) = 0;
  uVar7 = 0;
  if ((int)uVar6 < *piVar2) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UBTComposite_Sequence *)(*pcVar4)();
      return pUVar8;
    }
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  *(UBTComposite_Sequence **)(pFVar3 + lVar9 * 0x30) = pUVar8;
  return pUVar8;
}

// AddTask @ 14704f8e0

void __cdecl
FBTBuilder::AddTask(UBTCompositeNode *param_1,int param_2,Type param_3,int param_4,int param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UTestBTTask_Log *pUVar7;
  longlong lVar8;
  
  pUVar7 = NewObject<UTestBTTask_Log>((UObject *)param_1->_padding_);
  pUVar7->LogIndex = param_2;
  pUVar7->LogTickIndex = param_5;
  piVar1 = &(param_1->Children).ArrayNum;
  (pUVar7->LogResult).Value = (uchar)param_3;
  pUVar7->ExecutionTicks = param_4;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,1,&(param_1->Children).AllocatorInstance,piVar1,
                     &(param_1->Children).ArrayMax);
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  lVar8 = (longlong)(int)uVar5;
  *(undefined8 *)(pFVar2 + lVar8 * 0x30) = 0;
  *(undefined8 *)(pFVar2 + lVar8 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar8 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar8 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar8 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar2 + lVar8 * 0x30 + 0x20 + 8) = 0;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UTestBTTask_Log **)(pFVar2 + lVar8 * 0x30 + 8) = pUVar7;
  return;
}

// AddTaskBTStopAction @ 14704f9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FBTBuilder::AddTaskBTStopAction
          (UBTCompositeNode *param_1,int param_2,Type param_3,EBTTestTaskStopTiming param_4,
          EBTTestStopAction param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar8 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UTestBTTask_BTStopAction::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  local_a8._8_8_ = pUVar8;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  piVar1 = &(param_1->Children).ArrayNum;
  pUVar8[2].field_0x21 = param_5;
  *(int *)&pUVar8[2].field_0x24 = param_2;
  *(char *)(pUVar8 + 3) = (char)param_3;
  pUVar8[2].field_0x20 = param_4;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,1,&(param_1->Children).AllocatorInstance,piVar1,
                     &(param_1->Children).ArrayMax);
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  lVar10 = (longlong)(int)uVar5;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x20 + 8) = 0;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  *(UObject **)(pFVar2 + lVar10 * 0x30 + 8) = pUVar8;
  return;
}

// AddTaskFlagChange @ 14704fb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FBTBuilder::AddTaskFlagChange
          (UBTCompositeNode *param_1,bool param_2,Type param_3,FName param_4,FName param_5,
          bool param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar8 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UTestBTTask_SetFlag::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  local_a8._8_8_ = pUVar8;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(uint *)&pUVar8[3].field_0x4 = param_5.ComparisonIndex.Value;
  *(uint *)&pUVar8[3].field_0x8 = param_5.Number;
  pUVar8[3].field_0xc = param_6;
  *(uint *)&pUVar8[2].field_0x20 = param_4.ComparisonIndex.Value;
  *(uint *)&pUVar8[2].field_0x24 = param_4.Number;
  piVar1 = &(param_1->Children).ArrayNum;
  *(bool *)(pUVar8 + 3) = param_2;
  pUVar8[3].field_0xd = (char)param_3;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,1,&(param_1->Children).AllocatorInstance,piVar1,
                     &(param_1->Children).ArrayMax);
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  lVar10 = (longlong)(int)uVar5;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x20 + 8) = 0;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  *(UObject **)(pFVar2 + lVar10 * 0x30 + 8) = pUVar8;
  return;
}

// AddTaskLatentFlags @ 14704fd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FBTBuilder::AddTaskLatentFlags
          (UBTCompositeNode *param_1,Type param_2,int param_3,FName param_4,int param_5,int param_6,
          int param_7,FName param_8,int param_9,int param_10,EBTTestChangeFlagBehavior param_11)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pUVar8 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UTestBTTask_LatentWithFlags::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar7);
  local_98._8_8_ = pUVar8;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(int *)&pUVar8[2].field_0x20 = param_5;
  *(int *)(pUVar8 + 3) = param_6;
  *(int *)&pUVar8[3].field_0x14 = param_7;
  *(uint *)&pUVar8[3].field_0x20 = param_8.ComparisonIndex.Value;
  *(uint *)&pUVar8[3].field_0x24 = param_8.Number;
  *(int *)&pUVar8[3].field_0x4 = param_9;
  *(int *)&pUVar8[3].field_0xc = param_10;
  *(EBTTestChangeFlagBehavior *)(pUVar8 + 4) = param_11;
  *(uint *)&pUVar8[3].field_0x18 = param_4.ComparisonIndex.Value;
  *(uint *)&pUVar8[3].field_0x1c = param_4.Number;
  piVar1 = &(param_1->Children).ArrayNum;
  *(int *)&pUVar8[3].field_0x10 = param_3;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,1,&(param_1->Children).AllocatorInstance,piVar1,
                     &(param_1->Children).ArrayMax);
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  lVar10 = (longlong)(int)uVar5;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x20 + 8) = 0;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  *(UObject **)(pFVar2 + lVar10 * 0x30 + 8) = pUVar8;
  return;
}

// AddTaskLogFinish @ 14704fef0

void __cdecl
FBTBuilder::AddTaskLogFinish
          (UBTCompositeNode *param_1,int param_2,int param_3,Type param_4,int param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UTestBTTask_Log *pUVar7;
  longlong lVar8;
  
  pUVar7 = NewObject<UTestBTTask_Log>((UObject *)param_1->_padding_);
  pUVar7->LogIndex = param_2;
  pUVar7->ExecutionTicks = param_5;
  piVar1 = &(param_1->Children).ArrayNum;
  pUVar7->LogFinished = param_3;
  (pUVar7->LogResult).Value = (uchar)param_4;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,1,&(param_1->Children).AllocatorInstance,piVar1,
                     &(param_1->Children).ArrayMax);
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  lVar8 = (longlong)(int)uVar5;
  *(undefined8 *)(pFVar2 + lVar8 * 0x30) = 0;
  *(undefined8 *)(pFVar2 + lVar8 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar8 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar8 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar8 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar2 + lVar8 * 0x30 + 0x20 + 8) = 0;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UTestBTTask_Log **)(pFVar2 + lVar8 * 0x30 + 8) = pUVar7;
  return;
}

// AddTaskSubtree @ 147050000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FBTBuilder::AddTaskSubtree(UBTCompositeNode *param_1,UBehaviorTree *param_2)

{
  TArray<FBTCompositeChild,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FName FVar10;
  void *pvVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  FName FVar15;
  FName this;
  undefined1 auStackY_118 [32];
  TFieldIterator<FObjectProperty> local_e0;
  FName local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pUVar9 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar9,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UBTTask_RunBehavior_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar9;
  pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  pUVar8 = Z_Construct_UClass_UBTTask_RunBehavior_NoRegister();
  ::FName::FName(local_c8,L"BehaviorAsset",FNAME_Find);
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
  this = FVar15;
  if (local_c8[0] != (FName)0x0) {
    if (pUVar8 == (UClass *)0x0) {
      local_e0.Field = (FField *)0x0;
    }
    else {
      local_e0.Field = (FField *)pUVar8->_padding_;
    }
    local_e0.InterfaceIndex = -1;
    local_e0.bIncludeSuper = true;
    local_e0.bIncludeDeprecated = true;
    local_e0.bIncludeInterface = false;
    local_e0.Struct = (UStruct *)pUVar8;
    TFieldIterator<FObjectProperty>::IterateToNext(&local_e0);
    FVar5 = (FName)local_e0.Field;
    while (this = FVar15, local_e0.Field = (FField *)FVar5, FVar5 != (FName)0x0) {
      bVar6 = IsThisNotNull((void *)FVar5,"FField::GetFName");
      FVar10 = FVar15;
      if (bVar6) {
        FVar10 = *(FName *)((longlong)FVar5 + 0x20);
      }
      this = FVar5;
      if (FVar10 == local_c8[0]) break;
      local_e0.Field = *(FField **)((longlong)FVar5 + 0x18);
      TFieldIterator<FObjectProperty>::IterateToNext(&local_e0);
      FVar5 = (FName)local_e0.Field;
    }
  }
  pvVar11 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this,pUVar9,0);
  FObjectPropertyBase::SetObjectPropertyValue
            ((FObjectPropertyBase *)this,pvVar11,(UObject *)param_2);
  pTVar1 = &param_1->Children;
  piVar2 = &(param_1->Children).ArrayNum;
  uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,1,&pTVar1->AllocatorInstance,piVar2,&(param_1->Children).ArrayMax);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  lVar13 = (longlong)(int)uVar7;
  *(undefined8 *)(pFVar3 + lVar13 * 0x30) = 0;
  *(undefined8 *)(pFVar3 + lVar13 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar13 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + lVar13 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar13 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar3 + lVar13 * 0x30 + 0x20 + 8) = 0;
  uVar14 = 0;
  if ((int)uVar7 < *piVar2) {
    uVar14 = ~uVar7 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  *(UObject **)(pFVar3 + lVar13 * 0x30 + 8) = pUVar9;
  return;
}

// AddTaskToggleFlag @ 147050250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FBTBuilder::AddTaskToggleFlag(UBTCompositeNode *param_1,Type param_2,FName param_3,int param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar8 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UTestBTTask_ToggleFlag::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  local_a8._8_8_ = pUVar8;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(FName *)&pUVar8[2].field_0x24 = param_3;
  piVar1 = &(param_1->Children).ArrayNum;
  pUVar8[3].field_0x8 = (char)param_2;
  *(int *)&pUVar8[3].field_0x4 = param_4;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,1,&(param_1->Children).AllocatorInstance,piVar1,
                     &(param_1->Children).ArrayMax);
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  lVar10 = (longlong)(int)uVar5;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x20 + 8) = 0;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  *(UObject **)(pFVar2 + lVar10 * 0x30 + 8) = pUVar8;
  return;
}

// AddTaskValueChange @ 1470503d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FBTBuilder::AddTaskValueChange
          (UBTCompositeNode *param_1,int param_2,Type param_3,FName param_4,FName param_5,
          int param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar8 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UTestBTTask_SetValue::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  local_a8._8_8_ = pUVar8;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(uint *)&pUVar8[3].field_0x4 = param_5.ComparisonIndex.Value;
  *(uint *)&pUVar8[3].field_0x8 = param_5.Number;
  *(int *)&pUVar8[3].field_0xc = param_6;
  *(uint *)&pUVar8[2].field_0x20 = param_4.ComparisonIndex.Value;
  *(uint *)&pUVar8[2].field_0x24 = param_4.Number;
  piVar1 = &(param_1->Children).ArrayNum;
  *(int *)(pUVar8 + 3) = param_2;
  pUVar8[3].field_0x10 = (char)param_3;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,1,&(param_1->Children).AllocatorInstance,piVar1,
                     &(param_1->Children).ArrayMax);
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  lVar10 = (longlong)(int)uVar5;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x20 + 8) = 0;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  *(UObject **)(pFVar2 + lVar10 * 0x30 + 8) = pUVar8;
  return;
}

// AddTaskValuesChangedWithLogs @ 147050560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FBTBuilder::AddTaskValuesChangedWithLogs
          (UBTCompositeNode *param_1,int param_2,Type param_3,int param_4,int param_5,FName param_6,
          FName param_7,int param_8,int param_9,int param_10,int param_11,FName param_12,
          int param_13)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar8 = (UObject *)param_1->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UTestBTTask_SetValuesWithLogs::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  local_a8._8_8_ = pUVar8;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  piVar1 = &(param_1->Children).ArrayNum;
  *(int *)&pUVar8[2].field_0x24 = param_11;
  *(int *)(pUVar8 + 3) = param_8;
  *(int *)&pUVar8[3].field_0x4 = param_9;
  *(int *)&pUVar8[3].field_0x8 = param_10;
  *(uint *)&pUVar8[3].field_0xc = param_6.ComparisonIndex.Value;
  *(uint *)&pUVar8[3].field_0x10 = param_6.Number;
  *(uint *)&pUVar8[3].field_0x18 = param_7.ComparisonIndex.Value;
  *(uint *)&pUVar8[3].field_0x1c = param_7.Number;
  *(int *)&pUVar8[3].field_0x20 = param_5;
  *(FName *)&pUVar8[3].field_0x24 = param_12;
  *(int *)&pUVar8[4].field_0x4 = param_13;
  *(int *)&pUVar8[2].field_0x20 = param_2;
  *(int *)&pUVar8[3].field_0x14 = param_4;
  pUVar8[4].field_0x8 = (char)param_3;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,1,&(param_1->Children).AllocatorInstance,piVar1,
                     &(param_1->Children).ArrayMax);
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  lVar10 = (longlong)(int)uVar5;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x20 + 8) = 0;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_1->Children).AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  *(UObject **)(pFVar2 + lVar10 * 0x30 + 8) = pUVar8;
  return;
}

// CreateBehaviorTree @ 147050a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBehaviorTree * __cdecl FBTBuilder::CreateBehaviorTree(void)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UBlackboardData *this;
  UBehaviorTree *pUVar7;
  FName FVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_138 [32];
  FName *local_118;
  FName *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  FName local_e8;
  FName local_e0;
  uint local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UBlackboardData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._8_8_ = pUVar5;
  this = (UBlackboardData *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  local_d8 = local_d8 & 0xfffffffe;
  ::FName::FName(&local_d0,L"Bool1");
  local_e8 = local_d0;
  pUVar5 = GetTransientPackageAsObject();
  local_e0 = (FName)NewObject<UBlackboardKeyType_Bool>(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e0);
  }
  pFVar1 = (FName *)(this->Keys).AllocatorInstance.Data;
  if ((pFVar1 <= &local_e8) &&
     (lVar10 = (longlong)(this->Keys).ArrayMax, &local_e8 < pFVar1 + lVar10 * 3)) {
    local_100 = (longlong)(this->Keys).ArrayNum;
    local_f8 = 0x18;
    local_118 = &local_e8;
    local_110 = pFVar1;
    local_108 = lVar10;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UBehaviorTree *)(*pcVar2)();
      return pUVar7;
    }
  }
  iVar4 = (this->Keys).ArrayNum;
  if (iVar4 == (this->Keys).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Keys).AllocatorInstance,&(this->Keys).ArrayMax);
  }
  (this->Keys).ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((this->Keys).AllocatorInstance.Data + (longlong)iVar4 * 0x18);
  *pFVar1 = local_e8;
  pFVar1[1] = local_e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e0);
  }
  pFVar1[2].ComparisonIndex.Value = pFVar1[2].ComparisonIndex.Value & 0xfffffffe | local_d8 & 1;
  ::FName::FName(&local_c8,L"Bool2");
  local_e8 = local_c8;
  pUVar5 = GetTransientPackageAsObject();
  FVar8 = (FName)NewObject<UBlackboardKeyType_Bool>(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar8);
  }
  pFVar1 = (FName *)(this->Keys).AllocatorInstance.Data;
  local_e0 = FVar8;
  if ((pFVar1 <= &local_e8) &&
     (lVar10 = (longlong)(this->Keys).ArrayMax, &local_e8 < pFVar1 + lVar10 * 3)) {
    local_100 = (longlong)(this->Keys).ArrayNum;
    local_f8 = 0x18;
    local_118 = &local_e8;
    local_110 = pFVar1;
    local_108 = lVar10;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UBehaviorTree *)(*pcVar2)();
      return pUVar7;
    }
  }
  iVar4 = (this->Keys).ArrayNum;
  if (iVar4 == (this->Keys).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Keys).AllocatorInstance,&(this->Keys).ArrayMax);
  }
  (this->Keys).ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((this->Keys).AllocatorInstance.Data + (longlong)iVar4 * 0x18);
  *pFVar1 = local_e8;
  pFVar1[1] = local_e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e0);
  }
  pFVar1[2].ComparisonIndex.Value = pFVar1[2].ComparisonIndex.Value & 0xfffffffe | local_d8 & 1;
  ::FName::FName(&local_c0,L"Bool3");
  local_e8 = local_c0;
  pUVar5 = GetTransientPackageAsObject();
  FVar8 = (FName)NewObject<UBlackboardKeyType_Bool>(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar8);
  }
  pFVar1 = (FName *)(this->Keys).AllocatorInstance.Data;
  local_e0 = FVar8;
  if ((pFVar1 <= &local_e8) &&
     (lVar10 = (longlong)(this->Keys).ArrayMax, &local_e8 < pFVar1 + lVar10 * 3)) {
    local_100 = (longlong)(this->Keys).ArrayNum;
    local_f8 = 0x18;
    local_118 = &local_e8;
    local_110 = pFVar1;
    local_108 = lVar10;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UBehaviorTree *)(*pcVar2)();
      return pUVar7;
    }
  }
  iVar4 = (this->Keys).ArrayNum;
  if (iVar4 == (this->Keys).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Keys).AllocatorInstance,&(this->Keys).ArrayMax);
  }
  (this->Keys).ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((this->Keys).AllocatorInstance.Data + (longlong)iVar4 * 0x18);
  *pFVar1 = local_e8;
  pFVar1[1] = local_e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e0);
  }
  pFVar1[2].ComparisonIndex.Value = pFVar1[2].ComparisonIndex.Value & 0xfffffffe | local_d8 & 1;
  ::FName::FName(&local_b8,L"Bool4");
  local_e8 = local_b8;
  pUVar5 = GetTransientPackageAsObject();
  FVar8 = (FName)NewObject<UBlackboardKeyType_Bool>(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar8);
  }
  pFVar1 = (FName *)(this->Keys).AllocatorInstance.Data;
  local_e0 = FVar8;
  if ((pFVar1 <= &local_e8) &&
     (lVar10 = (longlong)(this->Keys).ArrayMax, &local_e8 < pFVar1 + lVar10 * 3)) {
    local_100 = (longlong)(this->Keys).ArrayNum;
    local_f8 = 0x18;
    local_118 = &local_e8;
    local_110 = pFVar1;
    local_108 = lVar10;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UBehaviorTree *)(*pcVar2)();
      return pUVar7;
    }
  }
  iVar4 = (this->Keys).ArrayNum;
  if (iVar4 == (this->Keys).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Keys).AllocatorInstance,&(this->Keys).ArrayMax);
  }
  (this->Keys).ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((this->Keys).AllocatorInstance.Data + (longlong)iVar4 * 0x18);
  *pFVar1 = local_e8;
  pFVar1[1] = local_e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e0);
  }
  pFVar1[2].ComparisonIndex.Value = pFVar1[2].ComparisonIndex.Value & 0xfffffffe | local_d8 & 1;
  ::FName::FName(&local_b0,L"Int");
  local_e8 = local_b0;
  pUVar5 = GetTransientPackageAsObject();
  FVar8 = (FName)NewObject<UBlackboardKeyType_Int>(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar8);
  }
  pFVar1 = (FName *)(this->Keys).AllocatorInstance.Data;
  local_e0 = FVar8;
  if ((pFVar1 <= &local_e8) &&
     (lVar10 = (longlong)(this->Keys).ArrayMax, &local_e8 < pFVar1 + lVar10 * 3)) {
    local_100 = (longlong)(this->Keys).ArrayNum;
    local_f8 = 0x18;
    local_118 = &local_e8;
    local_110 = pFVar1;
    local_108 = lVar10;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UBehaviorTree *)(*pcVar2)();
      return pUVar7;
    }
  }
  iVar4 = (this->Keys).ArrayNum;
  if (iVar4 == (this->Keys).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Keys).AllocatorInstance,&(this->Keys).ArrayMax);
  }
  (this->Keys).ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((this->Keys).AllocatorInstance.Data + (longlong)iVar4 * 0x18);
  *pFVar1 = local_e8;
  pFVar1[1] = local_e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e0);
  }
  pFVar1[2].ComparisonIndex.Value = pFVar1[2].ComparisonIndex.Value & 0xfffffffe | local_d8 & 1;
  ::FName::FName(local_a8,L"Int2");
  local_e8 = local_a8[0];
  pUVar5 = GetTransientPackageAsObject();
  FVar8 = (FName)NewObject<UBlackboardKeyType_Int>(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar8);
  }
  pFVar1 = (FName *)(this->Keys).AllocatorInstance.Data;
  local_e0 = FVar8;
  if ((pFVar1 <= &local_e8) &&
     (lVar10 = (longlong)(this->Keys).ArrayMax, &local_e8 < pFVar1 + lVar10 * 3)) {
    local_100 = (longlong)(this->Keys).ArrayNum;
    local_f8 = 0x18;
    local_118 = &local_e8;
    local_110 = pFVar1;
    local_108 = lVar10;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UBehaviorTree *)(*pcVar2)();
      return pUVar7;
    }
  }
  iVar4 = (this->Keys).ArrayNum;
  if (iVar4 == (this->Keys).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Keys).AllocatorInstance,&(this->Keys).ArrayMax);
  }
  (this->Keys).ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((this->Keys).AllocatorInstance.Data + (longlong)iVar4 * 0x18);
  *pFVar1 = local_e8;
  pFVar1[1] = local_e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e0);
  }
  pFVar1[2].ComparisonIndex.Value = pFVar1[2].ComparisonIndex.Value & 0xfffffffe | local_d8 & 1;
  UBlackboardData::UpdateParentKeys(this);
  pUVar5 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UBehaviorTree>(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this == (UBlackboardData *)0x0)) {
    (pUVar7->BlackboardAsset).field0_0x0.DebugPtr = this;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this);
    (pUVar7->BlackboardAsset).field0_0x0.DebugPtr = this;
  }
  return pUVar7;
}

// WithDecoratorBlackboard @ 14705ab20

void __cdecl
FBTBuilder::WithDecoratorBlackboard
          (UBTCompositeNode *param_1,Type param_2,int param_3,Type param_4,Type param_5,
          FName param_6,int param_7,int param_8,int param_9)

{
  bool bVar1;
  UClass *pUVar2;
  UTestBTDecorator_Blackboard *pUVar3;
  void *pvVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName local_50;
  TFieldIterator<FByteProperty> local_48;
  
  pUVar2 = UTestBTDecorator_Blackboard::StaticClass();
  pUVar3 = WithDecorator<UTestBTDecorator_Blackboard>(param_1,pUVar2);
  pUVar3->LogIndexBecomeRelevant = param_7;
  pUVar3->LogIndexCeaseRelevant = param_8;
  pUVar3->LogIndexCalculate = param_9;
  pUVar2 = Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
  ::FName::FName(&local_50,L"OperationType",FNAME_Find);
  FVar11 = local_50;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  FVar9 = FVar10;
  if (local_50 != (FName)0x0) {
    if (pUVar2 == (UClass *)0x0) {
      local_48.Field = (FField *)0x0;
    }
    else {
      local_48.Field = (FField *)pUVar2->_padding_;
    }
    local_48.InterfaceIndex = -1;
    local_48.bIncludeSuper = true;
    local_48.bIncludeDeprecated = true;
    local_48.bIncludeInterface = false;
    local_48.Struct = (UStruct *)pUVar2;
    TFieldIterator<FByteProperty>::IterateToNext(&local_48);
    FVar8 = (FName)local_48.Field;
    while (FVar9 = FVar10, local_48.Field = (FField *)FVar8, FVar8 != (FName)0x0) {
      bVar1 = IsThisNotNull((void *)FVar8,"FField::GetFName");
      FVar5 = FVar10;
      if (bVar1) {
        FVar5 = *(FName *)((longlong)FVar8 + 0x20);
      }
      FVar9 = FVar8;
      if (FVar5 == FVar11) break;
      local_48.Field = *(FField **)((longlong)FVar8 + 0x18);
      TFieldIterator<FByteProperty>::IterateToNext(&local_48);
      FVar8 = (FName)local_48.Field;
    }
  }
  pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)FVar9,(UObject *)pUVar3,0);
  (**(code **)(*(longlong *)FVar9 + 0x1f0))(FVar9,pvVar4);
  pUVar2 = Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
  ::FName::FName(&local_50,L"FlowAbortMode",FNAME_Find);
  FVar11 = local_50;
  FVar9 = FVar10;
  if (local_50 != (FName)0x0) {
    if (pUVar2 == (UClass *)0x0) {
      local_48.Field = (FField *)0x0;
    }
    else {
      local_48.Field = (FField *)pUVar2->_padding_;
    }
    local_48.InterfaceIndex = -1;
    local_48.bIncludeSuper = true;
    local_48.bIncludeDeprecated = true;
    local_48.bIncludeInterface = false;
    local_48.Struct = (UStruct *)pUVar2;
    TFieldIterator<FByteProperty>::IterateToNext(&local_48);
    FVar8 = (FName)local_48.Field;
    while (FVar9 = FVar10, local_48.Field = (FField *)FVar8, FVar8 != (FName)0x0) {
      bVar1 = IsThisNotNull((void *)FVar8,"FField::GetFName");
      if (bVar1) {
        FVar5 = *(FName *)((longlong)FVar8 + 0x20);
      }
      else {
        FVar5.ComparisonIndex.Value = 0;
        FVar5.Number = 0;
      }
      FVar9 = FVar8;
      if (FVar5 == FVar11) break;
      local_48.Field = *(FField **)((longlong)FVar8 + 0x18);
      TFieldIterator<FByteProperty>::IterateToNext(&local_48);
      FVar8 = (FName)local_48.Field;
    }
  }
  pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)FVar9,(UObject *)pUVar3,0);
  (**(code **)(*(longlong *)FVar9 + 0x1f0))(FVar9,pvVar4);
  pUVar2 = Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
  ::FName::FName(&local_50,L"NotifyObserver",FNAME_Find);
  FVar11 = local_50;
  FVar9 = FVar10;
  if (local_50 != (FName)0x0) {
    if (pUVar2 == (UClass *)0x0) {
      local_48.Field = (FField *)0x0;
    }
    else {
      local_48.Field = (FField *)pUVar2->_padding_;
    }
    local_48.InterfaceIndex = -1;
    local_48.bIncludeSuper = true;
    local_48.bIncludeDeprecated = true;
    local_48.bIncludeInterface = false;
    local_48.Struct = (UStruct *)pUVar2;
    TFieldIterator<FByteProperty>::IterateToNext(&local_48);
    FVar8 = (FName)local_48.Field;
    while (FVar9 = FVar10, local_48.Field = (FField *)FVar8, FVar8 != (FName)0x0) {
      bVar1 = IsThisNotNull((void *)FVar8,"FField::GetFName");
      if (bVar1) {
        FVar6 = *(FName *)((longlong)FVar8 + 0x20);
      }
      else {
        FVar6.ComparisonIndex.Value = 0;
        FVar6.Number = 0;
      }
      FVar9 = FVar8;
      if (FVar6 == FVar11) break;
      local_48.Field = *(FField **)((longlong)FVar8 + 0x18);
      TFieldIterator<FByteProperty>::IterateToNext(&local_48);
      FVar8 = (FName)local_48.Field;
    }
  }
  pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)FVar9,(UObject *)pUVar3,0);
  (**(code **)(*(longlong *)FVar9 + 0x1f0))(FVar9,pvVar4);
  pUVar2 = Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
  ::FName::FName(&local_50,L"IntValue",FNAME_Find);
  FVar11 = local_50;
  FVar9 = FVar10;
  if (local_50 != (FName)0x0) {
    if (pUVar2 == (UClass *)0x0) {
      local_48.Field = (FField *)0x0;
    }
    else {
      local_48.Field = (FField *)pUVar2->_padding_;
    }
    local_48.InterfaceIndex = -1;
    local_48.bIncludeSuper = true;
    local_48.bIncludeDeprecated = true;
    local_48.bIncludeInterface = false;
    local_48.Struct = (UStruct *)pUVar2;
    TFieldIterator<FIntProperty>::IterateToNext((TFieldIterator<FIntProperty> *)&local_48);
    FVar8 = (FName)local_48.Field;
    while (FVar9 = FVar10, local_48.Field = (FField *)FVar8, FVar8 != (FName)0x0) {
      bVar1 = IsThisNotNull((void *)FVar8,"FField::GetFName");
      if (bVar1) {
        FVar7 = *(FName *)((longlong)FVar8 + 0x20);
      }
      else {
        FVar7.ComparisonIndex.Value = 0;
        FVar7.Number = 0;
      }
      FVar9 = FVar8;
      if (FVar7 == FVar11) break;
      local_48.Field = *(FField **)((longlong)FVar8 + 0x18);
      TFieldIterator<FIntProperty>::IterateToNext((TFieldIterator<FIntProperty> *)&local_48);
      FVar8 = (FName)local_48.Field;
    }
  }
  pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)FVar9,(UObject *)pUVar3,0);
  (**(code **)(*(longlong *)FVar9 + 0x1f0))(FVar9,pvVar4);
  pUVar2 = Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
  ::FName::FName(&local_50,L"BlackboardKey",FNAME_Find);
  FVar11 = FVar10;
  if (local_50 != (FName)0x0) {
    if (pUVar2 == (UClass *)0x0) {
      local_48.Field = (FField *)0x0;
    }
    else {
      local_48.Field = (FField *)pUVar2->_padding_;
    }
    local_48.InterfaceIndex = -1;
    local_48.bIncludeSuper = true;
    local_48.bIncludeDeprecated = true;
    local_48.bIncludeInterface = false;
    local_48.Struct = (UStruct *)pUVar2;
    TFieldIterator<FStructProperty>::IterateToNext((TFieldIterator<FStructProperty> *)&local_48);
    FVar9 = (FName)local_48.Field;
    while (FVar11 = FVar10, local_48.Field = (FField *)FVar9, FVar9 != (FName)0x0) {
      bVar1 = IsThisNotNull((void *)FVar9,"FField::GetFName");
      if (bVar1) {
        FVar8 = *(FName *)((longlong)FVar9 + 0x20);
      }
      else {
        FVar8.ComparisonIndex.Value = 0;
        FVar8.Number = 0;
      }
      FVar11 = FVar9;
      if (FVar8 == local_50) break;
      local_48.Field = *(FField **)((longlong)FVar9 + 0x18);
      TFieldIterator<FStructProperty>::IterateToNext((TFieldIterator<FStructProperty> *)&local_48);
      FVar9 = (FName)local_48.Field;
    }
  }
  pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)FVar11,(UObject *)pUVar3,0)
  ;
  *(FName *)((longlong)pvVar4 + 0x10) = param_6;
  return;
}

// WithDecoratorBlackboard @ 14705afc0

void __cdecl
FBTBuilder::WithDecoratorBlackboard
          (UBTCompositeNode *param_1,Type param_2,Type param_3,FName param_4,int param_5,int param_6
          ,int param_7)

{
  bool bVar1;
  UClass *pUVar2;
  UTestBTDecorator_Blackboard *pUVar3;
  void *pvVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName local_48;
  TFieldIterator<FByteProperty> local_40;
  
  pUVar2 = UTestBTDecorator_Blackboard::StaticClass();
  pUVar3 = WithDecorator<UTestBTDecorator_Blackboard>(param_1,pUVar2);
  pUVar3->LogIndexBecomeRelevant = param_5;
  pUVar3->LogIndexCeaseRelevant = param_6;
  pUVar3->LogIndexCalculate = param_7;
  pUVar2 = Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
  ::FName::FName(&local_48,L"OperationType",FNAME_Find);
  FVar8 = local_48;
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  FVar9 = FVar7;
  if (local_48 != (FName)0x0) {
    if (pUVar2 == (UClass *)0x0) {
      local_40.Field = (FField *)0x0;
    }
    else {
      local_40.Field = (FField *)pUVar2->_padding_;
    }
    local_40.InterfaceIndex = -1;
    local_40.bIncludeSuper = true;
    local_40.bIncludeDeprecated = true;
    local_40.bIncludeInterface = false;
    local_40.Struct = (UStruct *)pUVar2;
    TFieldIterator<FByteProperty>::IterateToNext(&local_40);
    FVar6 = (FName)local_40.Field;
    while (FVar9 = FVar7, local_40.Field = (FField *)FVar6, FVar6 != (FName)0x0) {
      bVar1 = IsThisNotNull((void *)FVar6,"FField::GetFName");
      FVar5 = FVar7;
      if (bVar1) {
        FVar5 = *(FName *)((longlong)FVar6 + 0x20);
      }
      FVar9 = FVar6;
      if (FVar5 == FVar8) break;
      local_40.Field = *(FField **)((longlong)FVar6 + 0x18);
      TFieldIterator<FByteProperty>::IterateToNext(&local_40);
      FVar6 = (FName)local_40.Field;
    }
  }
  pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)FVar9,(UObject *)pUVar3,0);
  (**(code **)(*(longlong *)FVar9 + 0x1f0))(FVar9,pvVar4);
  pUVar2 = Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
  ::FName::FName(&local_48,L"FlowAbortMode",FNAME_Find);
  FVar8 = local_48;
  FVar9 = FVar7;
  if (local_48 != (FName)0x0) {
    if (pUVar2 == (UClass *)0x0) {
      local_40.Field = (FField *)0x0;
    }
    else {
      local_40.Field = (FField *)pUVar2->_padding_;
    }
    local_40.InterfaceIndex = -1;
    local_40.bIncludeSuper = true;
    local_40.bIncludeDeprecated = true;
    local_40.bIncludeInterface = false;
    local_40.Struct = (UStruct *)pUVar2;
    TFieldIterator<FByteProperty>::IterateToNext(&local_40);
    FVar6 = (FName)local_40.Field;
    while (FVar9 = FVar7, local_40.Field = (FField *)FVar6, FVar6 != (FName)0x0) {
      bVar1 = IsThisNotNull((void *)FVar6,"FField::GetFName");
      if (bVar1) {
        FVar5 = *(FName *)((longlong)FVar6 + 0x20);
      }
      else {
        FVar5.ComparisonIndex.Value = 0;
        FVar5.Number = 0;
      }
      FVar9 = FVar6;
      if (FVar5 == FVar8) break;
      local_40.Field = *(FField **)((longlong)FVar6 + 0x18);
      TFieldIterator<FByteProperty>::IterateToNext(&local_40);
      FVar6 = (FName)local_40.Field;
    }
  }
  pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)FVar9,(UObject *)pUVar3,0);
  (**(code **)(*(longlong *)FVar9 + 0x1f0))(FVar9,pvVar4);
  pUVar2 = Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
  ::FName::FName(&local_48,L"BlackboardKey",FNAME_Find);
  FVar8 = FVar7;
  if (local_48 != (FName)0x0) {
    if (pUVar2 == (UClass *)0x0) {
      local_40.Field = (FField *)0x0;
    }
    else {
      local_40.Field = (FField *)pUVar2->_padding_;
    }
    local_40.InterfaceIndex = -1;
    local_40.bIncludeSuper = true;
    local_40.bIncludeDeprecated = true;
    local_40.bIncludeInterface = false;
    local_40.Struct = (UStruct *)pUVar2;
    TFieldIterator<FStructProperty>::IterateToNext((TFieldIterator<FStructProperty> *)&local_40);
    FVar9 = (FName)local_40.Field;
    while (FVar8 = FVar7, local_40.Field = (FField *)FVar9, FVar9 != (FName)0x0) {
      bVar1 = IsThisNotNull((void *)FVar9,"FField::GetFName");
      if (bVar1) {
        FVar6 = *(FName *)((longlong)FVar9 + 0x20);
      }
      else {
        FVar6.ComparisonIndex.Value = 0;
        FVar6.Number = 0;
      }
      FVar8 = FVar9;
      if (FVar6 == local_48) break;
      local_40.Field = *(FField **)((longlong)FVar9 + 0x18);
      TFieldIterator<FStructProperty>::IterateToNext((TFieldIterator<FStructProperty> *)&local_40);
      FVar9 = (FName)local_40.Field;
    }
  }
  pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)FVar8,(UObject *)pUVar3,0);
  *(FName *)((longlong)pvVar4 + 0x10) = param_4;
  return;
}

// WithDecoratorBlueprint @ 14705b2b0

void __cdecl
FBTBuilder::WithDecoratorBlueprint
          (UBTCompositeNode *param_1,Type param_2,EBPConditionType param_3,int param_4,int param_5,
          int param_6,FName param_7)

{
  FName FVar1;
  bool bVar2;
  UClass *pUVar3;
  UTestBTDecorator_Blueprint *pUVar4;
  FName FVar5;
  void *pvVar6;
  FName FVar7;
  FName this;
  FName local_28;
  TFieldIterator<FByteProperty> local_20;
  
  pUVar3 = UTestBTDecorator_Blueprint::StaticClass();
  pUVar4 = WithDecorator<UTestBTDecorator_Blueprint>(param_1,pUVar3);
  pUVar4->LogIndexCeaseRelevant = param_5;
  pUVar4->LogIndexCalculate = param_6;
  pUVar4->ObservingKeyName = param_7;
  pUVar4->LogIndexBecomeRelevant = param_4;
  pUVar4->BPConditionType = param_3;
  pUVar3 = Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
  ::FName::FName(&local_28,L"FlowAbortMode",FNAME_Find);
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  this = FVar7;
  if (local_28 != (FName)0x0) {
    if (pUVar3 == (UClass *)0x0) {
      local_20.Field = (FField *)0x0;
    }
    else {
      local_20.Field = (FField *)pUVar3->_padding_;
    }
    local_20.InterfaceIndex = -1;
    local_20.bIncludeSuper = true;
    local_20.bIncludeDeprecated = true;
    local_20.bIncludeInterface = false;
    local_20.Struct = (UStruct *)pUVar3;
    TFieldIterator<FByteProperty>::IterateToNext(&local_20);
    FVar1 = (FName)local_20.Field;
    while (this = FVar7, local_20.Field = (FField *)FVar1, FVar1 != (FName)0x0) {
      bVar2 = IsThisNotNull((void *)FVar1,"FField::GetFName");
      FVar5 = FVar7;
      if (bVar2) {
        FVar5 = *(FName *)((longlong)FVar1 + 0x20);
      }
      this = FVar1;
      if (FVar5 == local_28) break;
      local_20.Field = *(FField **)((longlong)FVar1 + 0x18);
      TFieldIterator<FByteProperty>::IterateToNext(&local_20);
      FVar1 = (FName)local_20.Field;
    }
  }
  pvVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this,(UObject *)pUVar4,0);
  (**(code **)(*(longlong *)this + 0x1f0))(this,pvVar6,(longlong)(int)param_2);
  return;
}

// WithServiceBTStopAction @ 14705b430

void __cdecl
FBTBuilder::WithServiceBTStopAction
          (UBTCompositeNode *param_1,int param_2,EBTTestServiceStopTiming param_3,
          EBTTestStopAction param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UTestBTService_BTStopAction *pUVar6;
  UTestBTService_BTStopAction *local_18 [2];
  
  UTestBTService_BTStopAction::StaticClass();
  pUVar6 = NewObject<UTestBTService_BTStopAction>((UObject *)param_1->_padding_);
  local_18[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UTestBTService_BTStopAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pFVar2 = (param_1->Services).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(param_1->Services).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->Services).ArrayNum;
  piVar1 = &(param_1->Services).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_1->Services).AllocatorInstance,piVar1);
  }
  (param_1->Services).ArrayNum = iVar5 + 1;
  *(UTestBTService_BTStopAction **)
   ((param_1->Services).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UTestBTService_BTStopAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  pUVar6->StopTiming = param_3;
  pUVar6->StopAction = param_4;
  pUVar6->LogIndex = param_2;
  return;
}

// WithServiceLog @ 14705b570

void __cdecl
FBTBuilder::WithServiceLog
          (UBTCompositeNode *param_1,int param_2,int param_3,int param_4,FName param_5,bool param_6,
          FName param_7,FName param_8,bool param_9,int param_10)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UTestBTService_Log *pUVar6;
  UTestBTService_Log *local_18 [2];
  
  UTestBTService_Log::StaticClass();
  pUVar6 = NewObject<UTestBTService_Log>((UObject *)param_1->_padding_);
  local_18[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UTestBTService_Log *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pFVar2 = (param_1->Services).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(param_1->Services).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->Services).ArrayNum;
  piVar1 = &(param_1->Services).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_1->Services).AllocatorInstance,piVar1);
  }
  (param_1->Services).ArrayNum = iVar5 + 1;
  *(UTestBTService_Log **)((param_1->Services).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UTestBTService_Log *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  *(uint *)&pUVar6->_padding_ = (uint)pUVar6->_padding_ & 0xfffffffe;
  pUVar6->KeyNameTick = param_5;
  *(uint *)&pUVar6->_padding_ = (uint)pUVar6->_padding_ | (uint)param_6;
  pUVar6->KeyNameBecomeRelevant = param_7;
  pUVar6->KeyNameCeaseRelevant = param_8;
  pUVar6->bToggleValue = param_9;
  pUVar6->LogDeactivation = param_3;
  pUVar6->LogTick = param_4;
  pUVar6->TicksDelaySetKeyNameTick = param_10;
  pUVar6->LogActivation = param_2;
  return;
}

