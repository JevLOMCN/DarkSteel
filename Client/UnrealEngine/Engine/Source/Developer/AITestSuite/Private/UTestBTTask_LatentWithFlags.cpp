// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 14

// StaticClass @ 147003680

UClass * __cdecl UTestBTTask_LatentWithFlags::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_LatentWithFlags.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_LatentWithFlags",
               &Z_Registration_Info_UClass_UTestBTTask_LatentWithFlags.InnerSingleton,
               StaticRegisterNativesUTestBTTask_LatentWithFlags,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTTask_LatentWithFlags>,
               InternalVTableHelperCtorCaller<UTestBTTask_LatentWithFlags>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_LatentWithFlags.InnerSingleton;
}

// UTestBTTask_LatentWithFlags @ 14704ac60

UTestBTTask_LatentWithFlags * __thiscall
UTestBTTask_LatentWithFlags::UTestBTTask_LatentWithFlags
          (UTestBTTask_LatentWithFlags *this,FVTableHelper *param_1)

{
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,param_1);
  this->LogIndexExecuting = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->LogIndexAborting = -1;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ExecuteHalfTicks = 2;
  this->LogIndexExecuteStart = 0;
  this->LogIndexExecuteFinish = 0;
  this->LogIndexAbortStart = 0;
  this->LogIndexAbortFinish = 0;
  this->AbortHalfTicks = 2;
  ::FName::FName(&this->KeyNameExecute,L"Bool1");
  ::FName::FName(&this->KeyNameAbort,L"Bool2");
  this->ChangeFlagBehavior = Set;
  this->LogResult = '\0';
  return this;
}

// UTestBTTask_LatentWithFlags @ 14704ad00

UTestBTTask_LatentWithFlags * __thiscall
UTestBTTask_LatentWithFlags::UTestBTTask_LatentWithFlags(UTestBTTask_LatentWithFlags *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,pFVar1);
  this->LogIndexExecuting = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->LogIndexAborting = -1;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ExecuteHalfTicks = 2;
  this->LogIndexExecuteStart = 0;
  this->LogIndexExecuteFinish = 0;
  this->LogIndexAbortStart = 0;
  this->LogIndexAbortFinish = 0;
  this->AbortHalfTicks = 2;
  ::FName::FName(&this->KeyNameExecute,L"Bool1");
  ::FName::FName(&this->KeyNameAbort,L"Bool2");
  this->ChangeFlagBehavior = Set;
  this->LogResult = '\0';
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffb | 2;
  return this;
}

// ~UTestBTTask_LatentWithFlags @ 14704bac0

void __thiscall
UTestBTTask_LatentWithFlags::~UTestBTTask_LatentWithFlags(UTestBTTask_LatentWithFlags *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// AbortTask @ 14704f030

Type __thiscall
UTestBTTask_LatentWithFlags::AbortTask
          (UTestBTTask_LatentWithFlags *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  FBTLatentTaskMemory *pFVar2;
  ulong64 uVar3;
  
  pFVar2 = UBTNode::CastInstanceNodeMemory<FBTLatentTaskMemory>((UBTNode *)this,param_2);
  uVar3 = (longlong)this->AbortHalfTicks + FAITestHelpers::UpdatesCounter;
  pFVar2->FlagFrameIdx = uVar3;
  iVar1 = this->AbortHalfTicks;
  pFVar2->bFlagSet = '\0';
  pFVar2->bIsAborting = '\x01';
  pFVar2->EndFrameIdx = (longlong)iVar1 + uVar3;
  LogExecution(this,param_1,this->LogIndexAbortStart);
  if (this->AbortHalfTicks == 0) {
    ChangeFlag(this,param_1,this->KeyNameAbort);
    pFVar2->bFlagSet = '\x01';
    LogExecution(this,param_1,this->LogIndexAbortFinish);
    return Aborted;
  }
  return InProgress;
}

// ChangeFlag @ 147050870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UTestBTTask_LatentWithFlags::ChangeFlag
          (UTestBTTask_LatentWithFlags *this,UBehaviorTreeComponent *param_1,FName param_2)

{
  UBlackboardComponent *this_00;
  bool bVar1;
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  if (this->ChangeFlagBehavior == Set) {
    UBlackboardComponent::SetValueAsBool
              ((UBlackboardComponent *)param_1->_padding_,local_res18,true);
  }
  else if (this->ChangeFlagBehavior == Toggle) {
    this_00 = (UBlackboardComponent *)param_1->_padding_;
    bVar1 = UBlackboardComponent::GetValueAsBool(this_00,local_res18);
    UBlackboardComponent::SetValueAsBool(this_00,local_res18,!bVar1);
    return;
  }
  return;
}

// CleanupMemory @ 147050950

void __thiscall
UTestBTTask_LatentWithFlags::CleanupMemory
          (UTestBTTask_LatentWithFlags *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  return;
}

// ExecuteTask @ 147051c80

Type __thiscall
UTestBTTask_LatentWithFlags::ExecuteTask
          (UTestBTTask_LatentWithFlags *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FBTLatentTaskMemory *pFVar3;
  ulong64 uVar4;
  
  pFVar3 = UBTNode::CastInstanceNodeMemory<FBTLatentTaskMemory>((UBTNode *)this,param_2);
  uVar4 = (longlong)this->ExecuteHalfTicks + FAITestHelpers::UpdatesCounter;
  pFVar3->FlagFrameIdx = uVar4;
  iVar2 = this->ExecuteHalfTicks;
  pFVar3->bFlagSet = '\0';
  pFVar3->bIsAborting = '\0';
  pFVar3->EndFrameIdx = (longlong)iVar2 + uVar4;
  LogExecution(this,param_1,this->LogIndexExecuteStart);
  if (this->ExecuteHalfTicks == 0) {
    ChangeFlag(this,param_1,this->KeyNameExecute);
    pFVar3->bFlagSet = '\x01';
    LogExecution(this,param_1,this->LogIndexExecuteFinish);
    return (Type)(this->LogResult).Value;
  }
  return InProgress;
}

// GetInstanceMemorySize @ 1470522f0

ushort __thiscall
UTestBTTask_LatentWithFlags::GetInstanceMemorySize(UTestBTTask_LatentWithFlags *this)

{
  return 0x18;
}

// GetPrivateStaticClass @ 147052db0

UClass * __cdecl UTestBTTask_LatentWithFlags::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_LatentWithFlags.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_LatentWithFlags",
               &Z_Registration_Info_UClass_UTestBTTask_LatentWithFlags.InnerSingleton,
               StaticRegisterNativesUTestBTTask_LatentWithFlags,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTTask_LatentWithFlags>,
               InternalVTableHelperCtorCaller<UTestBTTask_LatentWithFlags>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_LatentWithFlags.InnerSingleton;
}

// InitializeMemory @ 1470537a0

void __thiscall
UTestBTTask_LatentWithFlags::InitializeMemory
          (UTestBTTask_LatentWithFlags *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  if (param_3 == Initialize) {
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
  }
  UBTNode::CastInstanceNodeMemory<FBTLatentTaskMemory>((UBTNode *)this,param_2);
  return;
}

// LogExecution @ 1470576c0

void __thiscall
UTestBTTask_LatentWithFlags::LogExecution
          (UTestBTTask_LatentWithFlags *this,UBehaviorTreeComponent *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  int local_res18 [4];
  
  if (-1 < param_2) {
    local_res18[0] = param_2;
    if (((UMockAI_BT::ExecutionLog.AllocatorInstance.Data <= (FScriptContainerElement *)local_res18)
        && ((FScriptContainerElement *)local_res18 <
            UMockAI_BT::ExecutionLog.AllocatorInstance.Data +
            (longlong)UMockAI_BT::ExecutionLog.ArrayMax * 4)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (UMockAI_BT::ExecutionLog.ArrayNum == UMockAI_BT::ExecutionLog.ArrayMax) {
      UMockAI_BT::ExecutionLog.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&UMockAI_BT::ExecutionLog.AllocatorInstance,
                      &UMockAI_BT::ExecutionLog.ArrayMax);
    }
    lVar3 = (longlong)UMockAI_BT::ExecutionLog.ArrayNum;
    UMockAI_BT::ExecutionLog.ArrayNum = UMockAI_BT::ExecutionLog.ArrayNum + 1;
    *(int *)(UMockAI_BT::ExecutionLog.AllocatorInstance.Data + lVar3 * 4) = local_res18[0];
  }
  return;
}

// StaticRegisterNativesUTestBTTask_LatentWithFlags @ 1470599e0

void __cdecl UTestBTTask_LatentWithFlags::StaticRegisterNativesUTestBTTask_LatentWithFlags(void)

{
  return;
}

// TickTask @ 14705a160

void __thiscall
UTestBTTask_LatentWithFlags::TickTask
          (UTestBTTask_LatentWithFlags *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          float param_3)

{
  FBTLatentTaskMemory *pFVar1;
  byte bVar2;
  longlong lVar3;
  
  pFVar1 = UBTNode::CastInstanceNodeMemory<FBTLatentTaskMemory>((UBTNode *)this,param_2);
  lVar3 = 0x80;
  if (pFVar1->bIsAborting == '\0') {
    lVar3 = 0x74;
  }
  LogExecution(this,param_1,*(int *)((longlong)&this->_padding_ + lVar3));
  if ((pFVar1->bFlagSet == 0) && (pFVar1->FlagFrameIdx <= FAITestHelpers::UpdatesCounter)) {
    bVar2 = pFVar1->field_0x10 | 1;
    pFVar1->field_0x10 = bVar2;
    ChangeFlag(this,param_1,
               *(FName *)((longlong)&this->_padding_ + ((ulonglong)(bVar2 & 2) | 0x24) * 4));
  }
  if (pFVar1->EndFrameIdx <= FAITestHelpers::UpdatesCounter) {
    if (pFVar1->bIsAborting != '\0') {
      LogExecution(this,param_1,this->LogIndexAbortFinish);
      UBTTaskNode::FinishLatentAbort((UBTTaskNode *)this,param_1);
      return;
    }
    LogExecution(this,param_1,this->LogIndexExecuteFinish);
    UBTTaskNode::FinishLatentTask((UBTTaskNode *)this,param_1,(uint)(this->LogResult).Value);
  }
  return;
}

