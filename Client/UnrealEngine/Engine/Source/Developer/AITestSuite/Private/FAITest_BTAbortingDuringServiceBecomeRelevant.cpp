// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTAbortingDuringServiceBecomeRelevant @ 147027610

FAITest_BTAbortingDuringServiceBecomeRelevant * __thiscall
FAITest_BTAbortingDuringServiceBecomeRelevant::FAITest_BTAbortingDuringServiceBecomeRelevant
          (FAITest_BTAbortingDuringServiceBecomeRelevant *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UBehaviorTree *pUVar5;
  UBTCompositeNode *pUVar6;
  UBTCompositeNode *pUVar7;
  FName *pFVar8;
  FAITest_BTAbortingDuringServiceBecomeRelevant *pFVar9;
  FName local_res18;
  FName local_res20;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [3];
  
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
  *(undefined ***)this = &___7FAITest_BTAbortingDuringServiceBecomeRelevant__6B_;
  pUVar6 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar1);
  (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6,pUVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar6;
  pUVar7 = (UBTCompositeNode *)FBTBuilder::AddSequence(pUVar6);
  pFVar8 = ::FName::FName(&local_res18,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar6,NotSet,Self,*pFVar8,-1,-1,-1);
  pFVar8 = ::FName::FName(&local_res20,L"Bool1");
  FBTBuilder::WithServiceLog(pUVar7,1,2,3,(FName)0x0,false,*pFVar8,(FName)0x0,false,0);
  FBTBuilder::AddTask(pUVar7,4,Succeeded,0,-1);
  FBTBuilder::AddTask(pUVar6,6,Succeeded,0,-1);
  local_58 = 1;
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
      pFVar9 = (FAITest_BTAbortingDuringServiceBecomeRelevant *)(*pcVar2)();
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
  local_54 = 3;
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
      pFVar9 = (FAITest_BTAbortingDuringServiceBecomeRelevant *)(*pcVar2)();
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
  local_50 = 4;
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
      pFVar9 = (FAITest_BTAbortingDuringServiceBecomeRelevant *)(*pcVar2)();
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
  local_4c = 3;
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
      pFVar9 = (FAITest_BTAbortingDuringServiceBecomeRelevant *)(*pcVar2)();
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
  local_48 = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_4c;
  if ((*(undefined4 **)&this->field_0x28 <= &local_48) &&
     (&local_48 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTAbortingDuringServiceBecomeRelevant *)(*pcVar2)();
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
  local_44[0] = 6;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_48;
  if ((*(undefined4 **)&this->field_0x28 <= local_44) &&
     (local_44 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTAbortingDuringServiceBecomeRelevant *)(*pcVar2)();
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
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_44[0];
  return this;
}

