// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTTestTickAuxNodesDeactivateNodes @ 147044e70

FAITest_BTTestTickAuxNodesDeactivateNodes * __thiscall
FAITest_BTTestTickAuxNodesDeactivateNodes::FAITest_BTTestTickAuxNodesDeactivateNodes
          (FAITest_BTTestTickAuxNodesDeactivateNodes *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UBehaviorTree *pUVar5;
  UBTCompositeNode *pUVar6;
  FName *pFVar7;
  UBTCompositeNode *pUVar8;
  FAITest_BTTestTickAuxNodesDeactivateNodes *pFVar9;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined8 local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40 [2];
  
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
  *(undefined ***)this = &___7FAITest_BTTestTickAuxNodesDeactivateNodes__6B_;
  pUVar6 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar1);
  (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6,pUVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar6;
  pFVar7 = ::FName::FName(&local_60,L"Bool1");
  FBTBuilder::WithServiceLog(pUVar6,-1,-1,-1,*pFVar7,false,(FName)0x0,(FName)0x0,false,4);
  pFVar7 = ::FName::FName(&local_58,L"Bool3");
  FBTBuilder::WithServiceLog(pUVar6,-1,-1,-1,*pFVar7,false,(FName)0x0,(FName)0x0,false,2);
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar6);
  pFVar7 = ::FName::FName(&local_50,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar6,NotSet,LowerPriority,*pFVar7,-1,-1,-1);
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar8);
  pFVar7 = ::FName::FName(&local_48,L"Bool2");
  FBTBuilder::WithDecoratorBlackboard(pUVar6,Set,LowerPriority,*pFVar7,-1,-1,-1);
  FBTBuilder::AddTaskLogFinish(pUVar8,4,-1,Succeeded,0);
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar6);
  pFVar7 = ::FName::FName(local_40,L"Bool3");
  FBTBuilder::WithDecoratorBlackboard(pUVar6,Set,LowerPriority,*pFVar7,-1,-1,-1);
  FBTBuilder::AddTaskLogFinish(pUVar8,3,-1,Succeeded,4);
  local_68 = 0;
  FBTBuilder::AddTaskLatentFlags(pUVar6,Succeeded,3,(FName)0x0,1,-1,3,(FName)0x0,2,-1,Set);
  local_78 = 1;
  if ((*(undefined4 **)&this->field_0x28 <= &local_78) &&
     (&local_78 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTTestTickAuxNodesDeactivateNodes *)(*pcVar2)();
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
  local_74 = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_78;
  if ((*(undefined4 **)&this->field_0x28 <= &local_74) &&
     (&local_74 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTTestTickAuxNodesDeactivateNodes *)(*pcVar2)();
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
  local_70[0] = 3;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_74;
  if ((*(undefined4 **)&this->field_0x28 <= local_70) &&
     (local_70 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTTestTickAuxNodesDeactivateNodes *)(*pcVar2)();
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
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_70[0];
  return this;
}

