// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant @ 147036dd0

FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant * __thiscall
FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant::
FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant
          (FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant *this)

{
  UObject *pUVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UBehaviorTree *pUVar6;
  UBTCompositeNode *pUVar7;
  UBTCompositeNode *pUVar8;
  FName *pFVar9;
  UClass *pUVar10;
  UTestBTService_Log *pUVar11;
  FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant *pFVar12;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
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
  pUVar1 = *(UObject **)&this->field_0x38;
  *(undefined ***)this = &___7FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant__6B_;
  pUVar7 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar1);
  (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,pUVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar7;
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar7);
  pFVar9 = ::FName::FName(&local_70,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,NotSet,Both,*pFVar9,-1,-1,-1);
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar8);
  pFVar9 = ::FName::FName(&local_68,L"Bool1");
  FBTBuilder::AddTaskToggleFlag(pUVar8,InProgress,*pFVar9,1);
  pFVar9 = ::FName::FName(&local_60,L"Bool2");
  FBTBuilder::WithDecoratorBlackboard(pUVar8,NotSet,Both,*pFVar9,-1,-1,-1);
  pFVar9 = ::FName::FName(&local_58,L"Bool1");
  FVar2 = *pFVar9;
  pUVar10 = UTestBTService_Log::StaticClass();
  pUVar11 = FBTBuilder::WithTaskService<UTestBTService_Log>(pUVar8,pUVar10);
  *(uint *)&pUVar11->_padding_ = (uint)pUVar11->_padding_ & 0xfffffffe;
  (pUVar11->KeyNameTick).ComparisonIndex = 0;
  (pUVar11->KeyNameTick).Number = 0;
  (pUVar11->KeyNameBecomeRelevant).ComparisonIndex = 0;
  (pUVar11->KeyNameBecomeRelevant).Number = 0;
  pUVar11->LogActivation = -1;
  pUVar11->LogDeactivation = -1;
  pUVar11->LogTick = -1;
  pUVar11->KeyNameCeaseRelevant = FVar2;
  pUVar11->bToggleValue = true;
  pFVar9 = ::FName::FName(local_50,L"Bool2");
  FVar2 = *pFVar9;
  pUVar10 = UTestBTService_Log::StaticClass();
  pUVar11 = FBTBuilder::WithTaskService<UTestBTService_Log>(pUVar8,pUVar10);
  *(uint *)&pUVar11->_padding_ = (uint)pUVar11->_padding_ & 0xfffffffe;
  (pUVar11->KeyNameTick).ComparisonIndex = 0;
  (pUVar11->KeyNameTick).Number = 0;
  (pUVar11->KeyNameBecomeRelevant).ComparisonIndex = 0;
  (pUVar11->KeyNameBecomeRelevant).Number = 0;
  pUVar11->LogActivation = 1;
  pUVar11->LogDeactivation = 2;
  pUVar11->LogTick = 3;
  pUVar11->KeyNameCeaseRelevant = FVar2;
  pUVar11->bToggleValue = false;
  FBTBuilder::AddTask(pUVar8,5,Succeeded,0,-1);
  FBTBuilder::AddTask(pUVar7,6,Succeeded,0,-1);
  local_88 = 1;
  if ((*(undefined4 **)&this->field_0x28 <= &local_88) &&
     (&local_88 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  local_84 = 3;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_88;
  if ((*(undefined4 **)&this->field_0x28 <= &local_84) &&
     (&local_84 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  local_80 = 3;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_84;
  if ((*(undefined4 **)&this->field_0x28 <= &local_80) &&
     (&local_80 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  local_7c = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_80;
  if ((*(undefined4 **)&this->field_0x28 <= &local_7c) &&
     (&local_7c < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  local_78 = 6;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_7c;
  if ((*(undefined4 **)&this->field_0x28 <= &local_78) &&
     (&local_78 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  local_74 = 5;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_78;
  if ((*(undefined4 **)&this->field_0x28 <= &local_74) &&
     (&local_74 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FAITest_BTRestartTheAbortedBranchDuringServiceCeaseRelevant *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_74;
  return this;
}

