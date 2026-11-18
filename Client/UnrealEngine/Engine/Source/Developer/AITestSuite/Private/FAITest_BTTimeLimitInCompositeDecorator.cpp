// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTTimeLimitInCompositeDecorator @ 1470456d0

FAITest_BTTimeLimitInCompositeDecorator * __thiscall
FAITest_BTTimeLimitInCompositeDecorator::FAITest_BTTimeLimitInCompositeDecorator
          (FAITest_BTTimeLimitInCompositeDecorator *this)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  UBehaviorTree *pUVar8;
  UBTCompositeNode *pUVar9;
  UClass *pUVar10;
  UBTDecorator_TimeLimit *pUVar11;
  FAITest_BTTimeLimitInCompositeDecorator *pFVar12;
  uint uVar13;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  longlong local_34;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined4 uStack_28;
  
  *(uint *)&this->field_0x18 = *(uint *)&this->field_0x18 & 0xfffffffe;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FAITest_SimpleBT__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  this->field_0x48 = 0;
  pUVar8 = FBTBuilder::CreateBehaviorTree();
  *(UBehaviorTree **)&this->field_0x38 = pUVar8;
  if (pUVar8 != (UBehaviorTree *)0x0) {
    FAITestBase::AddAutoDestroyObject((FAITestBase *)this,(UObject *)pUVar8);
  }
  pUVar1 = *(UObject **)&this->field_0x38;
  *(undefined ***)this = &___7FAITest_BTTimeLimitInCompositeDecorator__6B_;
  pUVar9 = (UBTCompositeNode *)NewObject<UBTComposite_Selector>(pUVar1);
  (**(code **)(pUVar9->_padding_ + 0x2b0))(pUVar9,pUVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar9;
  FBTBuilder::AddTask(pUVar9,1,Succeeded,5,2);
  local_34 = 0;
  uStack_2c = 0xffff;
  uStack_28 = 0x3daaaaab;
  pUVar10 = Z_Construct_UClass_UBTDecorator_TimeLimit_NoRegister();
  pUVar11 = FBTBuilder::WithDecorator<UBTDecorator_TimeLimit>(pUVar9,pUVar10);
  (pUVar11->TimeLimit)._padding_ = local_34;
  (pUVar11->TimeLimit)._padding_ = CONCAT22(uStack_2a,uStack_2c);
  (pUVar11->TimeLimit).DefaultValue = (float)uStack_28;
  iVar7 = (pUVar9->Children).ArrayNum;
  uVar13 = iVar7 - 1;
  uVar5 = 0;
  if ((int)uVar13 < iVar7) {
    uVar5 = ~uVar13 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FAITest_BTTimeLimitInCompositeDecorator *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar7 = (pUVar9->Children).ArrayNum;
  local_48 = CONCAT31(local_48._1_3_,1);
  local_48 = local_48 & 0xffff;
  pFVar2 = (pUVar9->Children).AllocatorInstance.Data;
  if ((*(uint **)(pFVar2 + (longlong)iVar7 * 0x30 + -0x10) <= &local_48) &&
     (&local_48 <
      *(uint **)(pFVar2 + (longlong)iVar7 * 0x30 + -0x10) +
      *(int *)(pFVar2 + (longlong)iVar7 * 0x30 + -4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FAITest_BTTimeLimitInCompositeDecorator *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar6 = *(int *)(pFVar2 + (longlong)iVar7 * 0x30 + -8);
  if (iVar6 == *(int *)(pFVar2 + (longlong)iVar7 * 0x30 + -4)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,(ForAnyElementType *)(pFVar2 + (longlong)iVar7 * 0x30 + -0x10),
                       (int *)(pFVar2 + (longlong)iVar7 * 0x30 + -4));
  }
  *(int *)(pFVar2 + (longlong)iVar7 * 0x30 + -8) = iVar6 + 1;
  *(uint *)(*(longlong *)(pFVar2 + (longlong)iVar7 * 0x30 + -0x10) + (longlong)iVar6 * 4) = local_48
  ;
  FBTBuilder::AddTask(pUVar9,3,Succeeded,0,-1);
  local_44 = 1;
  if ((*(undefined4 **)&this->field_0x28 <= &local_44) &&
     (&local_44 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FAITest_BTTimeLimitInCompositeDecorator *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar7 = *(int *)&this->field_0x30;
  if (iVar7 == *(int *)&this->field_0x34) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar7 + 1;
  local_40 = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar7 * 4) = local_44;
  if ((*(undefined4 **)&this->field_0x28 <= &local_40) &&
     (&local_40 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FAITest_BTTimeLimitInCompositeDecorator *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar7 = *(int *)&this->field_0x30;
  if (iVar7 == *(int *)&this->field_0x34) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar7 + 1;
  local_3c = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar7 * 4) = local_40;
  if ((*(undefined4 **)&this->field_0x28 <= &local_3c) &&
     (&local_3c < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FAITest_BTTimeLimitInCompositeDecorator *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar7 = *(int *)&this->field_0x30;
  if (iVar7 == *(int *)&this->field_0x34) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar7 + 1;
  local_38 = 3;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar7 * 4) = local_3c;
  if ((*(undefined4 **)&this->field_0x28 <= &local_38) &&
     (&local_38 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FAITest_BTTimeLimitInCompositeDecorator *)(*pcVar3)();
      return pFVar12;
    }
  }
  iVar7 = *(int *)&this->field_0x30;
  if (iVar7 == *(int *)&this->field_0x34) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar7 + 1;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar7 * 4) = local_38;
  return this;
}

