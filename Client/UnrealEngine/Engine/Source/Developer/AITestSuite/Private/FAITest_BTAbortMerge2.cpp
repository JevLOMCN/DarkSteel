// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTAbortMerge2 @ 147024880

FAITest_BTAbortMerge2 * __thiscall
FAITest_BTAbortMerge2::FAITest_BTAbortMerge2(FAITest_BTAbortMerge2 *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UBehaviorTree *pUVar5;
  UBTCompositeNode *pUVar6;
  FName *pFVar7;
  UClass *pUVar8;
  FAITest_BTAbortMerge2 *pFVar9;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  
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
  pUVar1 = *(UObject **)&this->field_0x38;
  *(undefined ***)this = &___7FAITest_BTAbortMerge2__6B_;
  pUVar6 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar1);
  (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar6;
  FBTBuilder::AddTask(pUVar6,0,Failed,0,-1);
  FBTBuilder::AddTask(pUVar6,1,Succeeded,0,-1);
  pFVar7 = ::FName::FName(&local_res8,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar6,Set,LowerPriority,*pFVar7,-1,-1,-1);
  pUVar8 = UTestBTDecorator_CantExecute::StaticClass();
  FBTBuilder::WithDecorator<UTestBTDecorator_CantExecute>(pUVar6,pUVar8);
  FBTBuilder::AddTask(pUVar6,2,Succeeded,0,-1);
  pFVar7 = ::FName::FName(&local_res10,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar6,Set,LowerPriority,*pFVar7,-1,-1,-1);
  FBTBuilder::AddTask(pUVar6,3,Failed,0,-1);
  pFVar7 = ::FName::FName(&local_res18,L"Bool1");
  FBTBuilder::AddTaskFlagChange(pUVar6,true,Failed,*pFVar7,(FName)0x0,false);
  local_38 = 0;
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
      pFVar9 = (FAITest_BTAbortMerge2 *)(*pcVar2)();
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
  local_34 = 3;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_38;
  if ((*(undefined4 **)&this->field_0x28 <= &local_34) &&
     (&local_34 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTAbortMerge2 *)(*pcVar2)();
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
  local_30[0] = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_34;
  if ((*(undefined4 **)&this->field_0x28 <= local_30) &&
     (local_30 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTAbortMerge2 *)(*pcVar2)();
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
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_30[0];
  return this;
}

