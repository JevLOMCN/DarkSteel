// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTRequestExecutionOnTimerBasedLatentAbortFinished @ 1470368d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FAITest_BTRequestExecutionOnTimerBasedLatentAbortFinished * __thiscall
FAITest_BTRequestExecutionOnTimerBasedLatentAbortFinished::
FAITest_BTRequestExecutionOnTimerBasedLatentAbortFinished
          (FAITest_BTRequestExecutionOnTimerBasedLatentAbortFinished *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UBehaviorTree *pUVar6;
  UBTCompositeNode *pUVar7;
  UBTCompositeNode *pUVar8;
  UClass *pUVar9;
  UBTDecorator_TimeLimit *pUVar10;
  UObject *pUVar11;
  longlong lVar12;
  FAITest_BTRequestExecutionOnTimerBasedLatentAbortFinished *pFVar13;
  longlong *plVar14;
  undefined1 auStackY_138 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 & 0xfffffffe;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FAITest_SimpleBT__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  this->field_0x48 = 0;
  pUVar6 = FBTBuilder::CreateBehaviorTree();
  *(UBehaviorTree **)&this->field_0x38 = pUVar6;
  if (pUVar6 != (UBehaviorTree *)0x0) {
    FAITestBase::AddAutoDestroyObject((FAITestBase *)this,(UObject *)pUVar6);
  }
  pUVar11 = *(UObject **)&this->field_0x38;
  *(undefined ***)this = &___7FAITest_BTRequestExecutionOnTimerBasedLatentAbortFinished__6B_;
  pUVar7 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar11);
  (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,pUVar11);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UBTCompositeNode **)&pUVar11[1].field_0x8 = pUVar7;
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar7);
  local_d8 = 0;
  uStack_cc = 0x3eddddde;
  uStack_d0 = 0xffff;
  pUVar9 = Z_Construct_UClass_UBTDecorator_TimeLimit_NoRegister();
  pUVar10 = FBTBuilder::WithDecorator<UBTDecorator_TimeLimit>(pUVar7,pUVar9);
  (pUVar10->TimeLimit)._padding_ = local_d8;
  (pUVar10->TimeLimit)._padding_ = CONCAT22(uStack_ce,uStack_d0);
  (pUVar10->TimeLimit).DefaultValue = (float)uStack_cc;
  UTestBTTask_TimerBasedLatent::StaticClass();
  pUVar11 = (UObject *)pUVar8->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar11,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UTestBTTask_TimerBasedLatent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar9);
  local_b8._8_8_ = pUVar11;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar14 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  iVar5 = (pUVar8->Children).ArrayNum;
  piVar1 = &(pUVar8->Children).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(pUVar8->Children).AllocatorInstance,piVar1);
  }
  pFVar2 = (pUVar8->Children).AllocatorInstance.Data;
  (pUVar8->Children).ArrayNum = iVar5 + 1;
  lVar12 = (longlong)iVar5;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x18) = 0;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x28) = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  *(UObject **)(pFVar2 + lVar12 * 0x30 + 8) = pUVar11;
  uStack_c0 = 0xffff;
  *(undefined4 *)&pUVar11[2].field_0x20 = 1;
  *(undefined4 *)(pUVar11 + 3) = 2;
  *(undefined4 *)&pUVar11[3].field_0x4 = 3;
  *(undefined4 *)&pUVar11[3].field_0xc = 2;
  *(undefined4 *)&pUVar11[3].field_0x8 = 6;
  local_c8 = 0;
  uStack_bc = 0x3dcccccd;
  pUVar9 = Z_Construct_UClass_UBTDecorator_TimeLimit_NoRegister();
  pUVar10 = FBTBuilder::WithDecorator<UBTDecorator_TimeLimit>(pUVar8,pUVar9);
  (pUVar10->TimeLimit)._padding_ = local_c8;
  (pUVar10->TimeLimit)._padding_ = CONCAT22(uStack_be,uStack_c0);
  (pUVar10->TimeLimit).DefaultValue = (float)uStack_bc;
  FBTBuilder::AddTask(pUVar8,5,Succeeded,0,-1);
  local_e8 = 1;
  if ((*(undefined4 **)&this->field_0x28 <= &local_e8) &&
     (&local_e8 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTRequestExecutionOnTimerBasedLatentAbortFinished *)(*pcVar3)();
      return pFVar13;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  local_e4 = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_e8;
  if ((*(undefined4 **)&this->field_0x28 <= &local_e4) &&
     (&local_e4 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTRequestExecutionOnTimerBasedLatentAbortFinished *)(*pcVar3)();
      return pFVar13;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  local_e0 = 3;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_e4;
  if ((*(undefined4 **)&this->field_0x28 <= &local_e0) &&
     (&local_e0 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTRequestExecutionOnTimerBasedLatentAbortFinished *)(*pcVar3)();
      return pFVar13;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  local_dc = 5;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_e0;
  if ((*(undefined4 **)&this->field_0x28 <= &local_dc) &&
     (&local_dc < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTRequestExecutionOnTimerBasedLatentAbortFinished *)(*pcVar3)();
      return pFVar13;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_dc;
  return this;
}

