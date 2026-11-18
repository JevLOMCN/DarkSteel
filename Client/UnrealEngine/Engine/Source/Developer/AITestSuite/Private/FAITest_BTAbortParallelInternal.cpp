// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTAbortParallelInternal @ 147025e10

FAITest_BTAbortParallelInternal * __thiscall
FAITest_BTAbortParallelInternal::FAITest_BTAbortParallelInternal
          (FAITest_BTAbortParallelInternal *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UBehaviorTree *pUVar5;
  UBTCompositeNode *pUVar6;
  UBTComposite_SimpleParallel *pUVar7;
  UBTCompositeNode *pUVar8;
  UBTCompositeNode *pUVar9;
  FName *pFVar10;
  FAITest_BTAbortParallelInternal *pFVar11;
  FName local_res8;
  FName local_res10;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [4];
  
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
  *(undefined ***)this = &___7FAITest_BTAbortParallelInternal__6B_;
  pUVar6 = (UBTCompositeNode *)NewObject<UBTComposite_Sequence>(pUVar1);
  (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6,pUVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar6;
  pUVar7 = FBTBuilder::AddParallel(pUVar6,WaitForBackground);
  FBTBuilder::AddTask((UBTCompositeNode *)pUVar7,0,Succeeded,5,-1);
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSequence((UBTCompositeNode *)pUVar7);
  FBTBuilder::AddTask(pUVar8,1,Succeeded,1,-1);
  pUVar9 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar8);
  FBTBuilder::AddTask(pUVar9,2,Succeeded,3,-1);
  pFVar10 = ::FName::FName(&local_res8,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar9,Set,LowerPriority,*pFVar10,-1,-1,-1);
  FBTBuilder::AddTask(pUVar9,3,Succeeded,1,-1);
  pFVar10 = ::FName::FName(&local_res10,L"Bool1");
  FBTBuilder::AddTaskFlagChange(pUVar8,true,Succeeded,*pFVar10,(FName)0x0,false);
  FBTBuilder::AddTask(pUVar6,4,Succeeded,0,-1);
  local_58 = 0;
  if ((*(undefined4 **)&this->field_0x28 <= &local_58) &&
     (&local_58 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FAITest_BTAbortParallelInternal *)(*pcVar2)();
      return pFVar11;
    }
  }
  iVar4 = *(int *)&this->field_0x30;
  if (iVar4 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar4 + 1;
  local_54 = 1;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_58;
  if ((*(undefined4 **)&this->field_0x28 <= &local_54) &&
     (&local_54 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FAITest_BTAbortParallelInternal *)(*pcVar2)();
      return pFVar11;
    }
  }
  iVar4 = *(int *)&this->field_0x30;
  if (iVar4 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar4 + 1;
  local_50 = 3;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_54;
  if ((*(undefined4 **)&this->field_0x28 <= &local_50) &&
     (&local_50 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FAITest_BTAbortParallelInternal *)(*pcVar2)();
      return pFVar11;
    }
  }
  iVar4 = *(int *)&this->field_0x30;
  if (iVar4 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar4 + 1;
  local_4c = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_50;
  if ((*(undefined4 **)&this->field_0x28 <= &local_4c) &&
     (&local_4c < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FAITest_BTAbortParallelInternal *)(*pcVar2)();
      return pFVar11;
    }
  }
  iVar4 = *(int *)&this->field_0x30;
  if (iVar4 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar4 + 1;
  local_48[0] = 4;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_4c;
  if ((*(undefined4 **)&this->field_0x28 <= local_48) &&
     (local_48 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FAITest_BTAbortParallelInternal *)(*pcVar2)();
      return pFVar11;
    }
  }
  iVar4 = *(int *)&this->field_0x30;
  if (iVar4 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar4 + 1;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_48[0];
  return this;
}

