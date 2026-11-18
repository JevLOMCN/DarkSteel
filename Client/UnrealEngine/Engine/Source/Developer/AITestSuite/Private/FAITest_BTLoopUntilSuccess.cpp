// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTLoopUntilSuccess @ 147034e70

FAITest_BTLoopUntilSuccess * __thiscall
FAITest_BTLoopUntilSuccess::FAITest_BTLoopUntilSuccess(FAITest_BTLoopUntilSuccess *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UBehaviorTree *pUVar5;
  UBTCompositeNode *pUVar6;
  FName *pFVar7;
  UBTCompositeNode *pUVar8;
  UClass *pUVar9;
  UTestBTDecorator_LoopUntil *pUVar10;
  FAITest_BTLoopUntilSuccess *pFVar11;
  undefined1 *puVar12;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  UEnum *local_58;
  FString local_50;
  
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
  *(undefined ***)this = &___7FAITest_BTLoopUntilSuccess__6B_;
  pUVar6 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar1);
  (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6,pUVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar6;
  pFVar7 = ::FName::FName(&local_res10,L"Bool1");
  FBTBuilder::AddTaskFlagChange(pUVar6,false,Failed,*pFVar7,(FName)0x0,false);
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar6);
  pUVar9 = UTestBTDecorator_LoopUntil::StaticClass();
  pUVar10 = FBTBuilder::WithDecorator<UTestBTDecorator_LoopUntil>(pUVar6,pUVar9);
  local_68 = 0;
  local_5c = 0;
  local_60 = CONCAT22(local_60._2_2_,0xffff);
  local_58 = StaticEnum<enum_EBTNodeResult::Type>();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_147034f8c:
    if (local_58 != (UEnum *)0x0) {
      local_res8 = (FName)local_58->_padding_;
      ::FName::ToString(&local_res8,&local_50);
      goto LAB_147034fb8;
    }
  }
  else if (local_58 != (UEnum *)0x0) {
    UE::GC::MarkAsReachable((UObject *)local_58);
    goto LAB_147034f8c;
  }
  ::FString::FString(&local_50,L"None");
LAB_147034fb8:
  *(undefined8 *)&pUVar10->field_0x68 = local_68;
  *(undefined4 *)&pUVar10->field_0x70 = local_60;
  pUVar10->field_0x74 = local_5c;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_58);
  }
  *(UEnum **)&pUVar10->field_0x78 = local_58;
  puVar12 = &pUVar10->field_0x80;
  if ((FString *)puVar12 != &local_50) {
    if (*(void **)puVar12 != (void *)0x0) {
      FMemory::Free(*(void **)puVar12);
    }
    *(FScriptContainerElement **)puVar12 = local_50.Data.AllocatorInstance.Data;
    *(int *)&pUVar10->field_0x88 = local_50.Data.ArrayNum;
    *(int *)&pUVar10->field_0x8c = local_50.Data.ArrayMax;
    local_50.Data.ArrayNum = 0;
    local_50.Data.ArrayMax = 0;
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  FBTBuilder::AddTask(pUVar8,1,Failed,0,-1);
  FBTBuilder::AddTask(pUVar8,2,Succeeded,0,-1);
  pFVar7 = ::FName::FName(&local_res18,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar8,Set,None,*pFVar7,-1,-1,-1);
  pFVar7 = ::FName::FName(&local_res20,L"Bool1");
  FBTBuilder::AddTaskFlagChange(pUVar8,true,Failed,*pFVar7,(FName)0x0,false);
  local_78 = 1;
  if (((*(undefined4 **)&this->field_0x28 <= &local_78) &&
      (&local_78 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar11 = (FAITest_BTLoopUntilSuccess *)(*pcVar2)();
    return pFVar11;
  }
  iVar4 = *(int *)&this->field_0x30;
  if (iVar4 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar4 + 1;
  local_74 = 1;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_78;
  if (((*(undefined4 **)&this->field_0x28 <= &local_74) &&
      (&local_74 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar11 = (FAITest_BTLoopUntilSuccess *)(*pcVar2)();
    return pFVar11;
  }
  iVar4 = *(int *)&this->field_0x30;
  if (iVar4 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar4 + 1;
  local_70[0] = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_74;
  if (((*(undefined4 **)&this->field_0x28 <= local_70) &&
      (local_70 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar11 = (FAITest_BTLoopUntilSuccess *)(*pcVar2)();
    return pFVar11;
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

