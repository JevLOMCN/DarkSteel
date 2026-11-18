// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTTestAbortNestedSimpleParallel @ 147044a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FAITest_BTTestAbortNestedSimpleParallel * __thiscall
FAITest_BTTestAbortNestedSimpleParallel::FAITest_BTTestAbortNestedSimpleParallel
          (FAITest_BTTestAbortNestedSimpleParallel *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UBehaviorTree *pUVar5;
  UBTCompositeNode *pUVar6;
  UBTComposite_SimpleParallel *pUVar7;
  UClass *pUVar8;
  UBTComposite_Selector *pUVar9;
  UBTDecorator_TimeLimit *pUVar10;
  UObject *pUVar11;
  longlong lVar12;
  FAITest_BTTestAbortNestedSimpleParallel *pFVar13;
  longlong *plVar14;
  undefined1 auStackY_128 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 & 0xfffffffe;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FAITest_SimpleBT__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  this->field_0x48 = 0;
  pUVar5 = FBTBuilder::CreateBehaviorTree();
  *(UBehaviorTree **)&this->field_0x38 = pUVar5;
  if (pUVar5 != (UBehaviorTree *)0x0) {
    FAITestBase::AddAutoDestroyObject((FAITestBase *)this,(UObject *)pUVar5);
  }
  *(undefined ***)this = &___7FAITest_BTTestAbortNestedSimpleParallel__6B_;
  pUVar5 = FBTBuilder::CreateBehaviorTree();
  FAITestBase::AddAutoDestroyObject((FAITestBase *)this,(UObject *)pUVar5);
  pUVar6 = (UBTCompositeNode *)NewObject<UBTComposite_Sequence>((UObject *)pUVar5);
  (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (pUVar5->RootNode).field0_0x0.DebugPtr = pUVar6;
  pUVar7 = FBTBuilder::AddParallel(pUVar6,AbortBackground);
  FBTBuilder::AddTaskLogFinish((UBTCompositeNode *)pUVar7,1,-1,Succeeded,500);
  pUVar8 = Z_Construct_UClass_UBTDecorator_Cooldown_NoRegister();
  FBTBuilder::WithDecorator<UBTDecorator_Cooldown>((UBTCompositeNode *)pUVar7,pUVar8);
  pUVar6 = (UBTCompositeNode *)FBTBuilder::AddSequence((UBTCompositeNode *)pUVar7);
  FBTBuilder::AddTaskLogFinish(pUVar6,2,-1,Succeeded,5);
  pUVar8 = Z_Construct_UClass_UBTDecorator_Cooldown_NoRegister();
  FBTBuilder::WithDecorator<UBTDecorator_Cooldown>(pUVar6,pUVar8);
  FBTBuilder::AddTaskLogFinish(pUVar6,3,-1,Succeeded,5);
  pUVar11 = *(UObject **)&this->field_0x38;
  pUVar6 = (UBTCompositeNode *)NewObject<UBTComposite_Sequence>(pUVar11);
  (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6,pUVar11);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UBTCompositeNode **)&pUVar11[1].field_0x8 = pUVar6;
  pUVar9 = FBTBuilder::AddSelector(pUVar6);
  local_d0 = 0;
  uStack_c4 = 0x3e088889;
  uStack_c8 = 0xffff;
  pUVar8 = Z_Construct_UClass_UBTDecorator_TimeLimit_NoRegister();
  pUVar10 = FBTBuilder::WithDecorator<UBTDecorator_TimeLimit>(pUVar6,pUVar8);
  (pUVar10->TimeLimit)._padding_ = local_d0;
  (pUVar10->TimeLimit)._padding_ = CONCAT22(uStack_c6,uStack_c8);
  (pUVar10->TimeLimit).DefaultValue = (float)uStack_c4;
  UTestBTTask_RunBehavior::StaticClass();
  pUVar11 = *(UObject **)&pUVar9->field_0x40;
  FObjectInitializer::AssertIfInConstructor
            (pUVar11,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UTestBTTask_RunBehavior::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar11;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar14 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  iVar4 = *(int *)&pUVar9->field_0x60;
  if (iVar4 == *(int *)&pUVar9->field_0x64) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)&pUVar9->field_0x58,(int *)&pUVar9->field_0x64);
  }
  *(int *)&pUVar9->field_0x60 = iVar4 + 1;
  lVar1 = *(longlong *)&pUVar9->field_0x58;
  lVar12 = (longlong)iVar4;
  *(undefined8 *)(lVar1 + lVar12 * 0x30) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar12 * 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar12 * 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x18 + lVar12 * 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x20 + lVar12 * 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x28 + lVar12 * 0x30) = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  *(UObject **)(lVar1 + 8 + lVar12 * 0x30) = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  *(UBehaviorTree **)&pUVar11[2].field_0x20 = pUVar5;
  local_d8 = 1;
  if ((*(undefined4 **)&this->field_0x28 <= &local_d8) &&
     (&local_d8 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FAITest_BTTestAbortNestedSimpleParallel *)(*pcVar2)();
      return pFVar13;
    }
  }
  iVar4 = *(int *)&this->field_0x30;
  if (iVar4 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar4 + 1;
  local_d4 = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_d8;
  if ((*(undefined4 **)&this->field_0x28 <= &local_d4) &&
     (&local_d4 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FAITest_BTTestAbortNestedSimpleParallel *)(*pcVar2)();
      return pFVar13;
    }
  }
  iVar4 = *(int *)&this->field_0x30;
  if (iVar4 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar4 + 1;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_d4;
  return this;
}

