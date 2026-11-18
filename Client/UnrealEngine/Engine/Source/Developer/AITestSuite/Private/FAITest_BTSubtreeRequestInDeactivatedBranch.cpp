// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTSubtreeRequestInDeactivatedBranch @ 1470412c0

FAITest_BTSubtreeRequestInDeactivatedBranch * __thiscall
FAITest_BTSubtreeRequestInDeactivatedBranch::FAITest_BTSubtreeRequestInDeactivatedBranch
          (FAITest_BTSubtreeRequestInDeactivatedBranch *this)

{
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UBehaviorTree *pUVar6;
  UObject *pUVar7;
  UBTCompositeNode *pUVar8;
  FName *pFVar9;
  FAITest_BTSubtreeRequestInDeactivatedBranch *pFVar10;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined4 local_48 [4];
  
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
  lVar1 = *(longlong *)&this->field_0x38;
  *(undefined ***)this = &___7FAITest_BTSubtreeRequestInDeactivatedBranch__6B_;
  pUVar7 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UBehaviorTree>(pUVar7);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = *(UObject **)(lVar1 + 0x38), pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  (pUVar6->BlackboardAsset).field0_0x0 = *(TObjectPtr<UBlackboardData>_u_0 *)(lVar1 + 0x38);
  if (pUVar6 != (UBehaviorTree *)0x0) {
    FAITestBase::AddAutoDestroyObject((FAITestBase *)this,(UObject *)pUVar6);
    pUVar8 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>((UObject *)pUVar6);
    (**(code **)(pUVar8->_padding_ + 0x2b0))(pUVar8,pUVar6);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (pUVar6->RootNode).field0_0x0.DebugPtr = pUVar8;
    FBTBuilder::AddTask(pUVar8,10,Succeeded,0,-1);
    pFVar9 = ::FName::FName(&local_res8,L"Bool2");
    FBTBuilder::WithDecoratorBlackboard(pUVar8,Set,LowerPriority,*pFVar9,-1,-1,-1);
    pFVar9 = ::FName::FName(&local_res10,L"Bool2");
    FVar2 = *pFVar9;
    pFVar9 = ::FName::FName(&local_res18,L"Bool1");
    FBTBuilder::AddTaskFlagChange(pUVar8,true,InProgress,*pFVar9,FVar2,true);
  }
  pUVar7 = *(UObject **)&this->field_0x38;
  pUVar8 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar7);
  (**(code **)(pUVar8->_padding_ + 0x2b0))(pUVar8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  *(UBTCompositeNode **)&pUVar7[1].field_0x8 = pUVar8;
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar8);
  FBTBuilder::AddTask(pUVar8,0,Succeeded,0,-1);
  pFVar9 = ::FName::FName(&local_res20,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar8,Set,LowerPriority,*pFVar9,-1,-1,-1);
  FBTBuilder::AddTaskSubtree(pUVar8,pUVar6);
  local_48[0] = 0;
  if ((*(undefined4 **)&this->field_0x28 <= local_48) &&
     (local_48 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FAITest_BTSubtreeRequestInDeactivatedBranch *)(*pcVar3)();
      return pFVar10;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_48[0];
  return this;
}

