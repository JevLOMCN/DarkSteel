// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTSubtreeAbortOut @ 14703fe80

FAITest_BTSubtreeAbortOut * __thiscall
FAITest_BTSubtreeAbortOut::FAITest_BTSubtreeAbortOut(FAITest_BTSubtreeAbortOut *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UBehaviorTree *pUVar5;
  UObject *pUVar6;
  UBTCompositeNode *pUVar7;
  FName *pFVar8;
  FAITest_BTSubtreeAbortOut *pFVar9;
  FName local_res8;
  FName local_res10;
  undefined4 local_38;
  undefined4 local_34 [3];
  
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
  lVar1 = *(longlong *)&this->field_0x38;
  *(undefined ***)this = &___7FAITest_BTSubtreeAbortOut__6B_;
  pUVar6 = GetTransientPackageAsObject();
  pUVar5 = NewObject<UBehaviorTree>(pUVar6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = *(UObject **)(lVar1 + 0x38), pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  (pUVar5->BlackboardAsset).field0_0x0 = *(TObjectPtr<UBlackboardData>_u_0 *)(lVar1 + 0x38);
  if (pUVar5 != (UBehaviorTree *)0x0) {
    FAITestBase::AddAutoDestroyObject((FAITestBase *)this,(UObject *)pUVar5);
    pUVar7 = (UBTCompositeNode *)NewObject<UBTComposite_Sequence>((UObject *)pUVar5);
    (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,pUVar5);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (pUVar5->RootNode).field0_0x0.DebugPtr = pUVar7;
    FBTBuilder::AddTask(pUVar7,10,Succeeded,0,-1);
    pFVar8 = ::FName::FName(&local_res8,L"Bool1");
    FBTBuilder::AddTaskFlagChange(pUVar7,true,Succeeded,*pFVar8,(FName)0x0,false);
    FBTBuilder::AddTask(pUVar7,0xb,Succeeded,0,-1);
  }
  pUVar6 = *(UObject **)&this->field_0x38;
  pUVar7 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar6);
  (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UBTCompositeNode **)&pUVar6[1].field_0x8 = pUVar7;
  FBTBuilder::AddTask(pUVar7,0,Succeeded,0,-1);
  pFVar8 = ::FName::FName(&local_res10,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,Set,LowerPriority,*pFVar8,-1,-1,-1);
  FBTBuilder::AddTaskSubtree(pUVar7,pUVar5);
  local_38 = 10;
  if ((*(undefined4 **)&this->field_0x28 <= &local_38) &&
     (&local_38 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTSubtreeAbortOut *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar4 = *(int *)&this->field_0x30;
  if (iVar4 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar4 + 1;
  local_34[0] = 0;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_38;
  if ((*(undefined4 **)&this->field_0x28 <= local_34) &&
     (local_34 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTSubtreeAbortOut *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar4 = *(int *)&this->field_0x30;
  if (iVar4 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar4 + 1;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_34[0];
  return this;
}

