// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 10

// StaticClass @ 146ff8960

UClass * __cdecl UTestBTTask_BTStopAction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_BTStopAction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_BTStopAction",
               &Z_Registration_Info_UClass_UTestBTTask_BTStopAction.InnerSingleton,
               StaticRegisterNativesUTestBTTask_BTStopAction,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UTestBTTask_BTStopAction>,
               InternalVTableHelperCtorCaller<UTestBTTask_BTStopAction>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_BTStopAction.InnerSingleton;
}

// UTestBTTask_BTStopAction @ 14704abd0

UTestBTTask_BTStopAction * __thiscall
UTestBTTask_BTStopAction::UTestBTTask_BTStopAction
          (UTestBTTask_BTStopAction *this,FVTableHelper *param_1)

{
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UTestBTTask_BTStopAction @ 14704ac10

UTestBTTask_BTStopAction * __thiscall
UTestBTTask_BTStopAction::UTestBTTask_BTStopAction
          (UTestBTTask_BTStopAction *this,FObjectInitializer *param_1)

{
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 6;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->StopTiming = DuringExecute;
  (this->LogResult).Value = '\0';
  this->LogIndex = -1;
  return this;
}

// ~UTestBTTask_BTStopAction @ 14704baa0

void __thiscall UTestBTTask_BTStopAction::~UTestBTTask_BTStopAction(UTestBTTask_BTStopAction *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// AbortTask @ 14704ef30

Type __thiscall
UTestBTTask_BTStopAction::AbortTask
          (UTestBTTask_BTStopAction *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  longlong lVar5;
  
  if (this->StopTiming == DuringAbort) {
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
      TVar4 = (*pcVar2)();
      return TVar4;
    }
    if (UMockAI_BT::ExecutionLog.ArrayNum == UMockAI_BT::ExecutionLog.ArrayMax) {
      UMockAI_BT::ExecutionLog.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&UMockAI_BT::ExecutionLog.AllocatorInstance,
                      &UMockAI_BT::ExecutionLog.ArrayMax);
    }
    lVar5 = (longlong)UMockAI_BT::ExecutionLog.ArrayNum;
    UMockAI_BT::ExecutionLog.ArrayNum = UMockAI_BT::ExecutionLog.ArrayNum + 1;
    *(int *)(UMockAI_BT::ExecutionLog.AllocatorInstance.Data + lVar5 * 4) = *piVar1;
    DoBTStopAction(param_1,this->StopAction);
  }
  return Aborted;
}

// ExecuteTask @ 147051b70

Type __thiscall
UTestBTTask_BTStopAction::ExecuteTask
          (UTestBTTask_BTStopAction *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  longlong lVar5;
  
  if (this->StopTiming != DuringExecute) {
    return InProgress;
  }
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
    TVar4 = (*pcVar2)();
    return TVar4;
  }
  if (UMockAI_BT::ExecutionLog.ArrayNum == UMockAI_BT::ExecutionLog.ArrayMax) {
    UMockAI_BT::ExecutionLog.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&UMockAI_BT::ExecutionLog.AllocatorInstance,
                    &UMockAI_BT::ExecutionLog.ArrayMax);
  }
  lVar5 = (longlong)UMockAI_BT::ExecutionLog.ArrayNum;
  UMockAI_BT::ExecutionLog.ArrayNum = UMockAI_BT::ExecutionLog.ArrayNum + 1;
  *(int *)(UMockAI_BT::ExecutionLog.AllocatorInstance.Data + lVar5 * 4) = *piVar1;
  DoBTStopAction(param_1,this->StopAction);
  return (Type)(this->LogResult).Value;
}

// GetPrivateStaticClass @ 147052cf0

UClass * __cdecl UTestBTTask_BTStopAction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_BTStopAction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_BTStopAction",
               &Z_Registration_Info_UClass_UTestBTTask_BTStopAction.InnerSingleton,
               StaticRegisterNativesUTestBTTask_BTStopAction,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UTestBTTask_BTStopAction>,
               InternalVTableHelperCtorCaller<UTestBTTask_BTStopAction>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_BTStopAction.InnerSingleton;
}

// OnTaskFinished @ 1470581e0

void __thiscall
UTestBTTask_BTStopAction::OnTaskFinished
          (UTestBTTask_BTStopAction *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  if (this->StopTiming == DuringFinish) {
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

// StaticRegisterNativesUTestBTTask_BTStopAction @ 1470599d0

void __cdecl UTestBTTask_BTStopAction::StaticRegisterNativesUTestBTTask_BTStopAction(void)

{
  return;
}

// TickTask @ 14705a060

void __thiscall
UTestBTTask_BTStopAction::TickTask
          (UTestBTTask_BTStopAction *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          float param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
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
    DoBTStopAction(param_1,this->StopAction);
    UBTTaskNode::FinishLatentTask((UBTTaskNode *)this,param_1,(uint)(this->LogResult).Value);
  }
  return;
}

