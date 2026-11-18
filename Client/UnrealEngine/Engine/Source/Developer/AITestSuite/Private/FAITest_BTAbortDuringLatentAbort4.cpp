// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTAbortDuringLatentAbort4 @ 1470236a0

FAITest_BTAbortDuringLatentAbort4 * __thiscall
FAITest_BTAbortDuringLatentAbort4::FAITest_BTAbortDuringLatentAbort4
          (FAITest_BTAbortDuringLatentAbort4 *this)

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
  FAITest_BTAbortDuringLatentAbort4 *pFVar10;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
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
  pUVar6 = FBTBuilder::CreateBehaviorTree();
  *(UBehaviorTree **)&this->field_0x38 = pUVar6;
  if (pUVar6 != (UBehaviorTree *)0x0) {
    FAITestBase::AddAutoDestroyObject((FAITestBase *)this,(UObject *)pUVar6);
  }
  pUVar1 = *(UObject **)&this->field_0x38;
  *(undefined ***)this = &___7FAITest_BTAbortDuringLatentAbort4__6B_;
  pUVar7 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar1);
  (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,pUVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar7;
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSelector(pUVar7);
  pFVar9 = ::FName::FName(&local_res10,L"Bool2");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,Set,Both,*pFVar9,-1,-1,-1);
  FBTBuilder::AddTask(pUVar8,8,Succeeded,0,-1);
  pFVar9 = ::FName::FName(&local_res18,L"Bool3");
  FBTBuilder::WithDecoratorBlackboard(pUVar8,Set,Both,*pFVar9,-1,-1,-1);
  pFVar9 = ::FName::FName(&local_res20,L"Bool2");
  FVar2 = *pFVar9;
  pFVar9 = ::FName::FName(&local_58,L"Bool1");
  FBTBuilder::AddTaskLatentFlags(pUVar7,Succeeded,1,*pFVar9,0,1,1,FVar2,2,3,Set);
  pFVar9 = ::FName::FName(&local_50,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,NotSet,Both,*pFVar9,-1,-1,-1);
  pFVar9 = ::FName::FName(&local_48,L"Bool3");
  FBTBuilder::AddTaskLatentFlags(pUVar7,Succeeded,1,*pFVar9,4,5,0,(FName)0x0,6,7,Set);
  pFVar9 = ::FName::FName(&local_40,L"Bool4");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,NotSet,Both,*pFVar9,-1,-1,-1);
  local_78 = 0;
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
      pFVar10 = (FAITest_BTAbortDuringLatentAbort4 *)(*pcVar3)();
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
  local_74 = 2;
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
      pFVar10 = (FAITest_BTAbortDuringLatentAbort4 *)(*pcVar3)();
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
  local_70 = 3;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_74;
  if ((*(undefined4 **)&this->field_0x28 <= &local_70) &&
     (&local_70 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FAITest_BTAbortDuringLatentAbort4 *)(*pcVar3)();
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
  local_6c = 4;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_70;
  if ((*(undefined4 **)&this->field_0x28 <= &local_6c) &&
     (&local_6c < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FAITest_BTAbortDuringLatentAbort4 *)(*pcVar3)();
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
  local_68 = 6;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_6c;
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
      pFVar10 = (FAITest_BTAbortDuringLatentAbort4 *)(*pcVar3)();
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
  local_64 = 7;
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
      pFVar10 = (FAITest_BTAbortDuringLatentAbort4 *)(*pcVar3)();
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
  local_60[0] = 8;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_64;
  if ((*(undefined4 **)&this->field_0x28 <= local_60) &&
     (local_60 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FAITest_BTAbortDuringLatentAbort4 *)(*pcVar3)();
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
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_60[0];
  return this;
}

