// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTPostponeDuringSearch @ 147035f50

FAITest_BTPostponeDuringSearch * __thiscall
FAITest_BTPostponeDuringSearch::FAITest_BTPostponeDuringSearch(FAITest_BTPostponeDuringSearch *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UBehaviorTree *pUVar5;
  UBTCompositeNode *pUVar6;
  FName *pFVar7;
  UBTCompositeNode *pUVar8;
  FAITest_BTPostponeDuringSearch *pFVar9;
  FName local_res20;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  FName local_58;
  FName local_50;
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
  pUVar5 = FBTBuilder::CreateBehaviorTree();
  *(UBehaviorTree **)&this->field_0x38 = pUVar5;
  if (pUVar5 != (UBehaviorTree *)0x0) {
    FAITestBase::AddAutoDestroyObject((FAITestBase *)this,(UObject *)pUVar5);
  }
  pUVar1 = *(UObject **)&this->field_0x38;
  *(undefined ***)this = &___7FAITest_BTPostponeDuringSearch__6B_;
  pUVar6 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar1);
  (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6,pUVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar6;
  FBTBuilder::AddTask(pUVar6,6,Succeeded,0,-1);
  pFVar7 = ::FName::FName(&local_res20,L"Bool2");
  FBTBuilder::WithDecoratorBlackboard(pUVar6,Set,Both,*pFVar7,-1,-1,-1);
  pFVar7 = ::FName::FName(&local_58,L"Bool1");
  FBTBuilder::AddTaskLatentFlags(pUVar6,Succeeded,1,*pFVar7,0,1,0,(FName)0x0,2,3,Set);
  pFVar7 = ::FName::FName(&local_50,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar6,NotSet,Self,*pFVar7,-1,-1,-1);
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar6);
  pFVar7 = ::FName::FName(&local_48,L"Bool3");
  FBTBuilder::WithDecoratorBlackboard(pUVar6,NotSet,Both,*pFVar7,-1,-1,-1);
  pFVar7 = ::FName::FName(&local_40,L"Bool2");
  FBTBuilder::WithServiceLog(pUVar8,-1,-1,4,*pFVar7,true,(FName)0x0,(FName)0x0,false,0);
  FBTBuilder::AddTask(pUVar8,5,Succeeded,0,-1);
  FBTBuilder::AddTask(pUVar6,7,Succeeded,0,-1);
  local_68 = 0;
  if ((*(undefined4 **)&this->field_0x28 <= &local_68) &&
     (&local_68 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTPostponeDuringSearch *)(*pcVar2)();
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
  local_64 = 4;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_68;
  if ((*(undefined4 **)&this->field_0x28 <= &local_64) &&
     (&local_64 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTPostponeDuringSearch *)(*pcVar2)();
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
  local_60 = 1;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_64;
  if ((*(undefined4 **)&this->field_0x28 <= &local_60) &&
     (&local_60 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTPostponeDuringSearch *)(*pcVar2)();
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
  local_5c = 6;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_60;
  if ((*(undefined4 **)&this->field_0x28 <= &local_5c) &&
     (&local_5c < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTPostponeDuringSearch *)(*pcVar2)();
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
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar4 * 4) = local_5c;
  return this;
}

