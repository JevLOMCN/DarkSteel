// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 12

// StaticClass @ 147006970

UClass * __cdecl UTestBTTask_Log::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_Log.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_Log",
               &Z_Registration_Info_UClass_UTestBTTask_Log.InnerSingleton,
               StaticRegisterNativesUTestBTTask_Log,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Game",
               InternalConstructor<UTestBTTask_Log>,InternalVTableHelperCtorCaller<UTestBTTask_Log>,
               local_res8,UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_Log.InnerSingleton;
}

// UTestBTTask_Log @ 14704adb0

UTestBTTask_Log * __thiscall
UTestBTTask_Log::UTestBTTask_Log(UTestBTTask_Log *this,FVTableHelper *param_1)

{
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UTestBTTask_Log @ 14704adf0

UTestBTTask_Log * __thiscall
UTestBTTask_Log::UTestBTTask_Log(UTestBTTask_Log *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FString local_18;
  
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::FString(&local_18,"Log");
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
  this->ExecutionTicks = 0;
  this->LogIndex = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffb | 2;
  (this->LogResult).Value = '\0';
  this->LogFinished = -1;
  this->LogTickIndex = -1;
  return this;
}

// ~UTestBTTask_Log @ 14704bae0

void __thiscall UTestBTTask_Log::~UTestBTTask_Log(UTestBTTask_Log *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// CleanupMemory @ 147050960

void __thiscall
UTestBTTask_Log::CleanupMemory
          (UTestBTTask_Log *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// ExecuteTask @ 147051d40

Type __thiscall
UTestBTTask_Log::ExecuteTask(UTestBTTask_Log *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  FBTLogTaskMemory *pFVar1;
  
  pFVar1 = UBTNode::CastInstanceNodeMemory<FBTLogTaskMemory>((UBTNode *)this,param_2);
  pFVar1->EndFrameIdx = (longlong)this->ExecutionTicks + FAITestHelpers::UpdatesCounter;
  LogExecution(this,param_1,this->LogIndex);
  if (this->ExecutionTicks == 0) {
    return (Type)(this->LogResult).Value;
  }
  return InProgress;
}

// GetInstanceMemorySize @ 147052300

ushort __thiscall UTestBTTask_Log::GetInstanceMemorySize(UTestBTTask_Log *this)

{
  return 8;
}

// GetPrivateStaticClass @ 147052e70

UClass * __cdecl UTestBTTask_Log::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_Log.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_Log",
               &Z_Registration_Info_UClass_UTestBTTask_Log.InnerSingleton,
               StaticRegisterNativesUTestBTTask_Log,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Game",
               InternalConstructor<UTestBTTask_Log>,InternalVTableHelperCtorCaller<UTestBTTask_Log>,
               local_res8,UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_Log.InnerSingleton;
}

// InitializeMemory @ 1470537c0

void __thiscall
UTestBTTask_Log::InitializeMemory
          (UTestBTTask_Log *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

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
  }
  UBTNode::CastInstanceNodeMemory<FBTLogTaskMemory>((UBTNode *)this,param_2);
  return;
}

// LogExecution @ 1470577a0

void __thiscall
UTestBTTask_Log::LogExecution(UTestBTTask_Log *this,UBehaviorTreeComponent *param_1,int param_2)

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

// StaticRegisterNativesUTestBTTask_Log @ 1470599f0

void __cdecl UTestBTTask_Log::StaticRegisterNativesUTestBTTask_Log(void)

{
  return;
}

// TickTask @ 14705a250

void __thiscall
UTestBTTask_Log::TickTask
          (UTestBTTask_Log *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3)

{
  FBTLogTaskMemory *pFVar1;
  
  pFVar1 = UBTNode::CastInstanceNodeMemory<FBTLogTaskMemory>((UBTNode *)this,param_2);
  if (this->LogTickIndex != -1) {
    LogExecution(this,param_1,this->LogTickIndex);
  }
  if (pFVar1->EndFrameIdx <= FAITestHelpers::UpdatesCounter) {
    LogExecution(this,param_1,this->LogFinished);
    UBTTaskNode::FinishLatentTask((UBTTaskNode *)this,param_1,(uint)(this->LogResult).Value);
  }
  return;
}

