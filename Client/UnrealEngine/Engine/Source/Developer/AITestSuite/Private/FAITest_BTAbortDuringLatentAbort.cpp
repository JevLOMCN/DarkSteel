// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTAbortDuringLatentAbort @ 147023d90

FAITest_BTAbortDuringLatentAbort * __thiscall
FAITest_BTAbortDuringLatentAbort::FAITest_BTAbortDuringLatentAbort
          (FAITest_BTAbortDuringLatentAbort *this)

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
  FAITest_BTAbortDuringLatentAbort *pFVar10;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  FName local_48;
  FName local_40;
  
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
  *(undefined ***)this = &___7FAITest_BTAbortDuringLatentAbort__6B_;
  pUVar7 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar1);
  (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,pUVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar7;
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar7);
  pFVar9 = ::FName::FName(&local_res8,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,Set,LowerPriority,*pFVar9,-1,-1,-1);
  FBTBuilder::AddTask(pUVar8,1,Succeeded,0,-1);
  pFVar9 = ::FName::FName(&local_res10,L"Bool3");
  FBTBuilder::WithDecoratorBlackboard(pUVar8,Set,None,*pFVar9,-1,-1,-1);
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar7);
  pFVar9 = ::FName::FName(&local_res18,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,NotSet,Self,*pFVar9,-1,-1,-1);
  pFVar9 = ::FName::FName(&local_res20,L"Bool1");
  FVar2 = *pFVar9;
  pFVar9 = ::FName::FName(&local_48,L"Bool2");
  FBTBuilder::AddTaskLatentFlags(pUVar8,Succeeded,1,*pFVar9,2,3,1,FVar2,4,5,Set);
  pFVar9 = ::FName::FName(&local_40,L"Bool2");
  FBTBuilder::WithDecoratorBlackboard(pUVar8,NotSet,Self,*pFVar9,-1,-1,-1);
  FBTBuilder::AddTask(pUVar8,6,Succeeded,0,-1);
  FBTBuilder::AddTask(pUVar7,7,Succeeded,0,-1);
  local_58 = 2;
  if ((*(undefined4 **)&this->field_0x28 <= &local_58) &&
     (&local_58 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FAITest_BTAbortDuringLatentAbort *)(*pcVar3)();
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
  local_54 = 4;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_58;
  if ((*(undefined4 **)&this->field_0x28 <= &local_54) &&
     (&local_54 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FAITest_BTAbortDuringLatentAbort *)(*pcVar3)();
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
  local_50 = 5;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_54;
  if ((*(undefined4 **)&this->field_0x28 <= &local_50) &&
     (&local_50 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FAITest_BTAbortDuringLatentAbort *)(*pcVar3)();
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
  local_4c = 7;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_50;
  if ((*(undefined4 **)&this->field_0x28 <= &local_4c) &&
     (&local_4c < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FAITest_BTAbortDuringLatentAbort *)(*pcVar3)();
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
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_4c;
  return this;
}

