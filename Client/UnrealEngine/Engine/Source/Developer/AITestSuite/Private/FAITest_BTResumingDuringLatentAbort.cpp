// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTResumingDuringLatentAbort @ 1470393f0

FAITest_BTResumingDuringLatentAbort * __thiscall
FAITest_BTResumingDuringLatentAbort::FAITest_BTResumingDuringLatentAbort
          (FAITest_BTResumingDuringLatentAbort *this)

{
  UObject *pUVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UBehaviorTree *pUVar6;
  UBTCompositeNode *pUVar7;
  FName *pFVar8;
  UClass *pUVar9;
  UTestBTService_Log *pUVar10;
  FAITest_BTResumingDuringLatentAbort *pFVar11;
  FName local_res18;
  FName local_res20;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  FName local_58;
  FName local_50;
  FName local_48 [2];
  
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
  *(undefined ***)this = &___7FAITest_BTResumingDuringLatentAbort__6B_;
  pUVar7 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar1);
  (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,pUVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar7;
  FBTBuilder::AddTask(pUVar7,4,Succeeded,0,-1);
  pFVar8 = ::FName::FName(&local_res18,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,Set,Both,*pFVar8,-1,-1,-1);
  FBTBuilder::AddTask(pUVar7,5,Succeeded,0,-1);
  pFVar8 = ::FName::FName(&local_res20,L"Bool2");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,Set,None,*pFVar8,-1,-1,-1);
  pFVar8 = ::FName::FName(&local_58,L"Bool1");
  FVar2 = *pFVar8;
  pFVar8 = ::FName::FName(&local_50,L"Bool1");
  FBTBuilder::AddTaskLatentFlags(pUVar7,Succeeded,2,*pFVar8,0,1,3,FVar2,2,3,Toggle);
  pFVar8 = ::FName::FName(local_48,L"Bool2");
  FVar2 = *pFVar8;
  pUVar9 = UTestBTService_Log::StaticClass();
  pUVar10 = FBTBuilder::WithTaskService<UTestBTService_Log>(pUVar7,pUVar9);
  local_68 = 0;
  *(uint *)&pUVar10->_padding_ = (uint)pUVar10->_padding_ & 0xfffffffe;
  pUVar10->LogActivation = -1;
  pUVar10->LogDeactivation = -1;
  pUVar10->LogTick = -1;
  pUVar10->KeyNameTick = FVar2;
  (pUVar10->KeyNameBecomeRelevant).ComparisonIndex = 0;
  (pUVar10->KeyNameBecomeRelevant).Number = 0;
  (pUVar10->KeyNameCeaseRelevant).ComparisonIndex = 0;
  (pUVar10->KeyNameCeaseRelevant).Number = 0;
  pUVar10->bToggleValue = false;
  if ((*(undefined4 **)&this->field_0x28 <= &local_68) &&
     (&local_68 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FAITest_BTResumingDuringLatentAbort *)(*pcVar3)();
      return pFVar11;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  local_64 = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_68;
  if ((*(undefined4 **)&this->field_0x28 <= &local_64) &&
     (&local_64 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FAITest_BTResumingDuringLatentAbort *)(*pcVar3)();
      return pFVar11;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  local_60 = 3;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_64;
  if ((*(undefined4 **)&this->field_0x28 <= &local_60) &&
     (&local_60 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FAITest_BTResumingDuringLatentAbort *)(*pcVar3)();
      return pFVar11;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  local_5c = 5;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_60;
  if ((*(undefined4 **)&this->field_0x28 <= &local_5c) &&
     (&local_5c < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FAITest_BTResumingDuringLatentAbort *)(*pcVar3)();
      return pFVar11;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_5c;
  return this;
}

