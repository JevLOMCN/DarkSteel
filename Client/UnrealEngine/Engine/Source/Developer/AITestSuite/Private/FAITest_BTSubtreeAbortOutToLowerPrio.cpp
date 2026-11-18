// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTSubtreeAbortOutToLowerPrio @ 147040860

FAITest_BTSubtreeAbortOutToLowerPrio * __thiscall
FAITest_BTSubtreeAbortOutToLowerPrio::FAITest_BTSubtreeAbortOutToLowerPrio
          (FAITest_BTSubtreeAbortOutToLowerPrio *this)

{
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UBehaviorTree *pUVar6;
  UObject *pUVar7;
  UBTCompositeNode *pUVar8;
  UBTCompositeNode *pUVar9;
  FName *pFVar10;
  UClass *pUVar11;
  UTestBTService_Log *pUVar12;
  FAITest_BTSubtreeAbortOutToLowerPrio *pFVar13;
  FName local_res18;
  FName local_res20;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90 [2];
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
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
  *(undefined ***)this = &___7FAITest_BTSubtreeAbortOutToLowerPrio__6B_;
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
    pUVar9 = (UBTCompositeNode *)FBTBuilder::AddSequence(pUVar8);
    pFVar10 = ::FName::FName(&local_res18,L"Bool2");
    FBTBuilder::WithDecoratorBlackboard(pUVar8,Set,Both,*pFVar10,3,4,-1);
    pFVar10 = ::FName::FName(&local_res20,L"Bool3");
    FBTBuilder::AddTaskFlagChange(pUVar9,true,Succeeded,*pFVar10,(FName)0x0,false);
    pUVar9 = (UBTCompositeNode *)FBTBuilder::AddSequence(pUVar8);
    pFVar10 = ::FName::FName(&local_88,L"Bool3");
    FBTBuilder::WithDecoratorBlackboard(pUVar8,Set,LowerPriority,*pFVar10,5,6,-1);
    FBTBuilder::AddTask(pUVar9,0xc,Succeeded,10,-1);
    pFVar10 = ::FName::FName(&local_80,L"Bool1");
    FVar2 = *pFVar10;
    pUVar11 = UTestBTService_Log::StaticClass();
    pUVar12 = FBTBuilder::WithTaskService<UTestBTService_Log>(pUVar9,pUVar11);
    *(uint *)&pUVar12->_padding_ = (uint)pUVar12->_padding_ & 0xfffffffe;
    pUVar12->LogActivation = 0xd;
    pUVar12->LogDeactivation = 0xe;
    pUVar12->LogTick = 0xf;
    pUVar12->KeyNameTick = FVar2;
    (pUVar12->KeyNameBecomeRelevant).ComparisonIndex = 0;
    (pUVar12->KeyNameBecomeRelevant).Number = 0;
    (pUVar12->KeyNameCeaseRelevant).ComparisonIndex = 0;
    (pUVar12->KeyNameCeaseRelevant).Number = 0;
    pUVar12->bToggleValue = false;
  }
  pUVar7 = *(UObject **)&this->field_0x38;
  pUVar8 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar7);
  (**(code **)(pUVar8->_padding_ + 0x2b0))(pUVar8,pUVar7);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  *(UBTCompositeNode **)&pUVar7[1].field_0x8 = pUVar8;
  pFVar10 = ::FName::FName(&local_78,L"Bool3");
  FBTBuilder::AddTaskFlagChange(pUVar8,true,Failed,*pFVar10,(FName)0x0,false);
  FBTBuilder::AddTaskSubtree(pUVar8,pUVar6);
  pFVar10 = ::FName::FName(&local_70,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar8,NotSet,Both,*pFVar10,1,2,-1);
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSequence(pUVar8);
  pFVar10 = ::FName::FName(&local_68,L"Bool3");
  FBTBuilder::AddTaskFlagChange(pUVar8,false,Succeeded,*pFVar10,(FName)0x0,false);
  pFVar10 = ::FName::FName(&local_60,L"Bool2");
  FBTBuilder::AddTaskFlagChange(pUVar8,true,Succeeded,*pFVar10,(FName)0x0,false);
  pFVar10 = ::FName::FName(local_58,L"Bool1");
  FBTBuilder::AddTaskFlagChange(pUVar8,false,Succeeded,*pFVar10,(FName)0x0,false);
  local_b8 = 1;
  if ((*(undefined4 **)&this->field_0x28 <= &local_b8) &&
     (&local_b8 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTSubtreeAbortOutToLowerPrio *)(*pcVar3)();
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
  local_b4 = 3;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_b8;
  if ((*(undefined4 **)&this->field_0x28 <= &local_b4) &&
     (&local_b4 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTSubtreeAbortOutToLowerPrio *)(*pcVar3)();
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
  local_b0 = 0xd;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_b4;
  if ((*(undefined4 **)&this->field_0x28 <= &local_b0) &&
     (&local_b0 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTSubtreeAbortOutToLowerPrio *)(*pcVar3)();
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
  local_ac = 0xf;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_b0;
  if ((*(undefined4 **)&this->field_0x28 <= &local_ac) &&
     (&local_ac < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTSubtreeAbortOutToLowerPrio *)(*pcVar3)();
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
  local_a8 = 0xc;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_ac;
  if ((*(undefined4 **)&this->field_0x28 <= &local_a8) &&
     (&local_a8 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTSubtreeAbortOutToLowerPrio *)(*pcVar3)();
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
  local_a4 = 0xf;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_a8;
  if ((*(undefined4 **)&this->field_0x28 <= &local_a4) &&
     (&local_a4 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTSubtreeAbortOutToLowerPrio *)(*pcVar3)();
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
  local_a0 = 0xe;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_a4;
  if ((*(undefined4 **)&this->field_0x28 <= &local_a0) &&
     (&local_a0 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTSubtreeAbortOutToLowerPrio *)(*pcVar3)();
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
  local_9c = 4;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_a0;
  if ((*(undefined4 **)&this->field_0x28 <= &local_9c) &&
     (&local_9c < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTSubtreeAbortOutToLowerPrio *)(*pcVar3)();
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
  local_98 = 3;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_9c;
  if ((*(undefined4 **)&this->field_0x28 <= &local_98) &&
     (&local_98 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTSubtreeAbortOutToLowerPrio *)(*pcVar3)();
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
  local_94 = 4;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_98;
  if ((*(undefined4 **)&this->field_0x28 <= &local_94) &&
     (&local_94 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTSubtreeAbortOutToLowerPrio *)(*pcVar3)();
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
  local_90[0] = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_94;
  if ((*(undefined4 **)&this->field_0x28 <= local_90) &&
     (local_90 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FAITest_BTSubtreeAbortOutToLowerPrio *)(*pcVar3)();
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
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_90[0];
  return this;
}

