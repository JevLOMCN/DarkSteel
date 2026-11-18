// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// FAITest_BTDecoratorForceSuccessCompositeFailedFromLastChild @ 147033500

FAITest_BTDecoratorForceSuccessCompositeFailedFromLastChild * __thiscall
FAITest_BTDecoratorForceSuccessCompositeFailedFromLastChild::
FAITest_BTDecoratorForceSuccessCompositeFailedFromLastChild
          (FAITest_BTDecoratorForceSuccessCompositeFailedFromLastChild *this)

{
  UObject *pUVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UBehaviorTree *pUVar6;
  UBTCompositeNode *pUVar7;
  UBTCompositeNode *pUVar8;
  UClass *pUVar9;
  FName *pFVar10;
  FAITest_BTDecoratorForceSuccessCompositeFailedFromLastChild *pFVar11;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
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
  *(undefined ***)this = &___7FAITest_BTDecoratorForceSuccessCompositeFailedFromLastChild__6B_;
  pUVar7 = (UBTCompositeNode *)NewObject<UBTComposite_Sequence>(pUVar1);
  (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,pUVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UBTCompositeNode **)&pUVar1[1].field_0x8 = pUVar7;
  FBTBuilder::AddTask(pUVar7,1,Succeeded,0,-1);
  pUVar8 = (UBTCompositeNode *)FBTBuilder::AddSequence(pUVar7);
  pUVar9 = Z_Construct_UClass_UBTDecorator_ForceSuccess_NoRegister();
  FBTBuilder::WithDecorator<UBTDecorator_ForceSuccess>(pUVar7,pUVar9);
  pFVar10 = ::FName::FName(&local_res8,L"Int");
  FBTBuilder::WithDecoratorBlackboard(pUVar7,NotEqual,1,Both,ResultChange,*pFVar10,-1,-1,-1);
  FBTBuilder::AddTask(pUVar8,2,Succeeded,0,-1);
  pFVar10 = ::FName::FName(&local_res10,L"Int2");
  FVar2 = *pFVar10;
  pFVar10 = ::FName::FName(local_res18,L"Int");
  FBTBuilder::AddTaskValuesChangedWithLogs
            (pUVar8,3,Succeeded,1,-1,*pFVar10,FVar2,0,0,-1,-1,(FName)0x0,0);
  FBTBuilder::AddTask(pUVar7,4,Succeeded,0,-1);
  local_48 = 1;
  if ((*(undefined4 **)&this->field_0x28 <= &local_48) &&
     (&local_48 < *(undefined4 **)&this->field_0x28 + *(int *)&this->field_0x34)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FAITest_BTDecoratorForceSuccessCompositeFailedFromLastChild *)(*pcVar3)();
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
  local_44 = 2;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_48;
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
      pFVar11 = (FAITest_BTDecoratorForceSuccessCompositeFailedFromLastChild *)(*pcVar3)();
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
  local_40 = 3;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_44;
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
      pFVar11 = (FAITest_BTDecoratorForceSuccessCompositeFailedFromLastChild *)(*pcVar3)();
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
  local_3c = 4;
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_40;
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
      pFVar11 = (FAITest_BTDecoratorForceSuccessCompositeFailedFromLastChild *)(*pcVar3)();
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
  *(undefined4 *)(*(longlong *)&this->field_0x28 + (longlong)iVar5 * 4) = local_3c;
  return this;
}

