// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 9

// StaticClass @ 147016c30

UClass * __cdecl UTestBTService_BTStopAction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTService_BTStopAction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTService_BTStopAction",
               &Z_Registration_Info_UClass_UTestBTService_BTStopAction.InnerSingleton,
               StaticRegisterNativesUTestBTService_BTStopAction,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTService_BTStopAction>,
               InternalVTableHelperCtorCaller<UTestBTService_BTStopAction>,local_res8,
               UBTService::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTService_BTStopAction.InnerSingleton;
}

// UTestBTService_BTStopAction @ 14704a970

UTestBTService_BTStopAction * __thiscall
UTestBTService_BTStopAction::UTestBTService_BTStopAction
          (UTestBTService_BTStopAction *this,FVTableHelper *param_1)

{
  UBTService::UBTService((UBTService *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UTestBTService_BTStopAction @ 14704a9b0

UTestBTService_BTStopAction * __thiscall
UTestBTService_BTStopAction::UTestBTService_BTStopAction
          (UTestBTService_BTStopAction *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FString local_18;
  
  UBTService::UBTService((UBTService *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::FString(&local_18,"StopTreeService");
  plVar1 = &this->_padding_;
  if ((FString *)plVar1 != &local_18) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 7;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffb;
  this->_padding_ = 0;
  this->LogIndex = -1;
  this->StopTiming = DuringTick;
  return this;
}

// ~UTestBTService_BTStopAction @ 14704ba60

void __thiscall
UTestBTService_BTStopAction::~UTestBTService_BTStopAction(UTestBTService_BTStopAction *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTService::~UBTService((UBTService *)this);
  return;
}

// GetPrivateStaticClass @ 147052b70

UClass * __cdecl UTestBTService_BTStopAction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTService_BTStopAction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTService_BTStopAction",
               &Z_Registration_Info_UClass_UTestBTService_BTStopAction.InnerSingleton,
               StaticRegisterNativesUTestBTService_BTStopAction,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTService_BTStopAction>,
               InternalVTableHelperCtorCaller<UTestBTService_BTStopAction>,local_res8,
               UBTService::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTService_BTStopAction.InnerSingleton;
}

// OnBecomeRelevant @ 147057b50

void __thiscall
UTestBTService_BTStopAction::OnBecomeRelevant
          (UTestBTService_BTStopAction *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  UBTAuxiliaryNode::OnBecomeRelevant((UBTAuxiliaryNode *)this,param_1,param_2);
  if (this->StopTiming == DuringBecomeRelevant) {
    piVar1 = &this->LogIndex;
    if (((UMockAI_BT::ExecutionLog.AllocatorInstance.Data <= piVar1) &&
        (piVar1 < UMockAI_BT::ExecutionLog.AllocatorInstance.Data +
                  (longlong)UMockAI_BT::ExecutionLog.ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (UMockAI_BT::ExecutionLog.ArrayNum == UMockAI_BT::ExecutionLog.ArrayMax) {
      UMockAI_BT::ExecutionLog.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&UMockAI_BT::ExecutionLog.AllocatorInstance,
                      &UMockAI_BT::ExecutionLog.ArrayMax);
    }
    lVar4 = (longlong)UMockAI_BT::ExecutionLog.ArrayNum;
    UMockAI_BT::ExecutionLog.ArrayNum = UMockAI_BT::ExecutionLog.ArrayNum + 1;
    *(int *)(UMockAI_BT::ExecutionLog.AllocatorInstance.Data + lVar4 * 4) = *piVar1;
    DoBTStopAction(param_1,this->StopAction);
  }
  return;
}

// OnCeaseRelevant @ 147057e70

void __thiscall
UTestBTService_BTStopAction::OnCeaseRelevant
          (UTestBTService_BTStopAction *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  UBTAuxiliaryNode::OnCeaseRelevant((UBTAuxiliaryNode *)this,param_1,param_2);
  if (this->StopTiming == DuringCeaseRelevant) {
    piVar1 = &this->LogIndex;
    if (((UMockAI_BT::ExecutionLog.AllocatorInstance.Data <= piVar1) &&
        (piVar1 < UMockAI_BT::ExecutionLog.AllocatorInstance.Data +
                  (longlong)UMockAI_BT::ExecutionLog.ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (UMockAI_BT::ExecutionLog.ArrayNum == UMockAI_BT::ExecutionLog.ArrayMax) {
      UMockAI_BT::ExecutionLog.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&UMockAI_BT::ExecutionLog.AllocatorInstance,
                      &UMockAI_BT::ExecutionLog.ArrayMax);
    }
    lVar4 = (longlong)UMockAI_BT::ExecutionLog.ArrayNum;
    UMockAI_BT::ExecutionLog.ArrayNum = UMockAI_BT::ExecutionLog.ArrayNum + 1;
    *(int *)(UMockAI_BT::ExecutionLog.AllocatorInstance.Data + lVar4 * 4) = *piVar1;
    UBehaviorTreeComponent::StopTree(param_1,Safe);
    DoBTStopAction(param_1,this->StopAction);
  }
  return;
}

// StaticRegisterNativesUTestBTService_BTStopAction @ 1470599b0

void __cdecl UTestBTService_BTStopAction::StaticRegisterNativesUTestBTService_BTStopAction(void)

{
  return;
}

// TickNode @ 147059df0

void __thiscall
UTestBTService_BTStopAction::TickNode
          (UTestBTService_BTStopAction *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          float param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  UBTService::TickNode((UBTService *)this,param_1,param_2,param_3);
  if (this->StopTiming == DuringTick) {
    piVar1 = &this->LogIndex;
    if (((UMockAI_BT::ExecutionLog.AllocatorInstance.Data <= piVar1) &&
        (piVar1 < UMockAI_BT::ExecutionLog.AllocatorInstance.Data +
                  (longlong)UMockAI_BT::ExecutionLog.ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (UMockAI_BT::ExecutionLog.ArrayNum == UMockAI_BT::ExecutionLog.ArrayMax) {
      UMockAI_BT::ExecutionLog.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&UMockAI_BT::ExecutionLog.AllocatorInstance,
                      &UMockAI_BT::ExecutionLog.ArrayMax);
    }
    lVar4 = (longlong)UMockAI_BT::ExecutionLog.ArrayNum;
    UMockAI_BT::ExecutionLog.ArrayNum = UMockAI_BT::ExecutionLog.ArrayNum + 1;
    *(int *)(UMockAI_BT::ExecutionLog.AllocatorInstance.Data + lVar4 * 4) = *piVar1;
    UBehaviorTreeComponent::StopTree(param_1,Safe);
    DoBTStopAction(param_1,this->StopAction);
  }
  return;
}

