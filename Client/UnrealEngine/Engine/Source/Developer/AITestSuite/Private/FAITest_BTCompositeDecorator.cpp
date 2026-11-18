// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTCompositeDecorator @ 147030d90

FAITest_BTCompositeDecorator * __thiscall
FAITest_BTCompositeDecorator::FAITest_BTCompositeDecorator(FAITest_BTCompositeDecorator *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UBehaviorTree *pUVar6;
  UBTCompositeNode *pUVar7;
  FName *pFVar8;
  FAITest_BTCompositeDecorator *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [5];
  
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
  *(undefined ***)this = &___7FAITest_BTCompositeDecorator__6B_;
  pUVar7 = (UBTCompositeNode *)NewObject<UBTComposite_Sequence>(pUVar1);
  (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar7;
  FBTBuilder::AddTask(pUVar7,0,Succeeded,0,-1);
  FBTBuilder::AddTask(pUVar7,1,Succeeded,0,-1);
  pFVar8 = ::FName::FName(&local_res8,L"Bool1");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,NotSet,None,*pFVar8,-1,-1,-1);
  pFVar8 = ::FName::FName(&local_res10,L"Bool2");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,NotSet,None,*pFVar8,-1,-1,-1);
  pFVar8 = ::FName::FName(&local_res18,L"Bool3");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,Set,None,*pFVar8,-1,-1,-1);
  pFVar8 = ::FName::FName(&local_res20,L"Bool4");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,NotSet,None,*pFVar8,-1,-1,-1);
  iVar5 = (pUVar7->Children).ArrayNum;
  uVar10 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar10 < iVar5) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTCompositeDecorator *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_78 = CONCAT31(local_78._1_3_,3);
  local_78 = CONCAT22(3,(undefined2)local_78);
  pFVar11 = (pUVar7->Children).AllocatorInstance.Data +
            (longlong)(pUVar7->Children).ArrayNum * 0x30 + -0x10;
  if ((*(undefined4 **)&pFVar11->field_0x0 <= &local_78) &&
     (&local_78 < *(undefined4 **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTCompositeDecorator *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar5 = *(int *)&pFVar11[8].field_0x0;
  if (iVar5 == *(int *)(pFVar11 + 0xc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)&pFVar11[8].field_0x0 = iVar5 + 1;
  local_74 = CONCAT31(local_74._1_3_,1);
  local_74 = local_74 & 0xffff;
  *(undefined4 *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar5 * 4) = local_78;
  if ((*(uint **)&pFVar11->field_0x0 <= &local_74) &&
     (&local_74 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTCompositeDecorator *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar5 = *(int *)&pFVar11[8].field_0x0;
  if (iVar5 == *(int *)(pFVar11 + 0xc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)&pFVar11[8].field_0x0 = iVar5 + 1;
  local_70 = CONCAT31(local_70._1_3_,4);
  *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar5 * 4) = local_74;
  local_70 = CONCAT22(1,(undefined2)local_70);
  if ((*(undefined4 **)&pFVar11->field_0x0 <= &local_70) &&
     (&local_70 < *(undefined4 **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTCompositeDecorator *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar5 = *(int *)&pFVar11[8].field_0x0;
  if (iVar5 == *(int *)(pFVar11 + 0xc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)&pFVar11[8].field_0x0 = iVar5 + 1;
  local_6c = CONCAT31(local_6c._1_3_,2);
  *(undefined4 *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar5 * 4) = local_70;
  local_6c = CONCAT22(2,(undefined2)local_6c);
  if ((*(undefined4 **)&pFVar11->field_0x0 <= &local_6c) &&
     (&local_6c < *(undefined4 **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTCompositeDecorator *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar5 = *(int *)&pFVar11[8].field_0x0;
  if (iVar5 == *(int *)(pFVar11 + 0xc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)&pFVar11[8].field_0x0 = iVar5 + 1;
  local_68 = CONCAT31(local_68._1_3_,1);
  *(undefined4 *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar5 * 4) = local_6c;
  local_68 = CONCAT22(1,(undefined2)local_68);
  if ((*(undefined4 **)&pFVar11->field_0x0 <= &local_68) &&
     (&local_68 < *(undefined4 **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTCompositeDecorator *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar5 = *(int *)&pFVar11[8].field_0x0;
  if (iVar5 == *(int *)(pFVar11 + 0xc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)&pFVar11[8].field_0x0 = iVar5 + 1;
  local_64 = CONCAT31(local_64._1_3_,1);
  *(undefined4 *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar5 * 4) = local_68;
  local_64 = CONCAT22(2,(undefined2)local_64);
  if ((*(undefined4 **)&pFVar11->field_0x0 <= &local_64) &&
     (&local_64 < *(undefined4 **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTCompositeDecorator *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar5 = *(int *)&pFVar11[8].field_0x0;
  if (iVar5 == *(int *)(pFVar11 + 0xc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)&pFVar11[8].field_0x0 = iVar5 + 1;
  local_60 = CONCAT31(local_60._1_3_,1);
  *(undefined4 *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar5 * 4) = local_64;
  local_60 = CONCAT22(3,(undefined2)local_60);
  if ((*(undefined4 **)&pFVar11->field_0x0 <= &local_60) &&
     (&local_60 < *(undefined4 **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTCompositeDecorator *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar5 = *(int *)&pFVar11[8].field_0x0;
  if (iVar5 == *(int *)(pFVar11 + 0xc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)&pFVar11[8].field_0x0 = iVar5 + 1;
  *(undefined4 *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar5 * 4) = local_60;
  FBTBuilder::AddTask(pUVar7,2,Succeeded,0,-1);
  local_5c = 0;
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
      pFVar9 = (FAITest_BTCompositeDecorator *)(*pcVar2)();
      return pFVar9;
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
      pFVar9 = (FAITest_BTCompositeDecorator *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  local_54[0] = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_58;
  if ((*(undefined4 **)&this->field_0x28 <= local_54) &&
     (local_54 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FAITest_BTCompositeDecorator *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar5 = *(int *)&this->field_0x30;
  if (iVar5 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
  }
  *(int *)&this->field_0x30 = iVar5 + 1;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_54[0];
  return this;
}

