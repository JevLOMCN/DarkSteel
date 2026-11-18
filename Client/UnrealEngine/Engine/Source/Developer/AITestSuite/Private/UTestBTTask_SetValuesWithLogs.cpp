// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 13

// StaticClass @ 14700fe40

UClass * __cdecl UTestBTTask_SetValuesWithLogs::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_SetValuesWithLogs.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_SetValuesWithLogs",
               &Z_Registration_Info_UClass_UTestBTTask_SetValuesWithLogs.InnerSingleton,
               StaticRegisterNativesUTestBTTask_SetValuesWithLogs,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTTask_SetValuesWithLogs>,
               InternalVTableHelperCtorCaller<UTestBTTask_SetValuesWithLogs>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_SetValuesWithLogs.InnerSingleton;
}

// UTestBTTask_SetValuesWithLogs @ 14704b1b0

UTestBTTask_SetValuesWithLogs * __thiscall
UTestBTTask_SetValuesWithLogs::UTestBTTask_SetValuesWithLogs
          (UTestBTTask_SetValuesWithLogs *this,FVTableHelper *param_1)

{
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->KeyName1).ComparisonIndex = 0;
  (this->KeyName1).Number = 0;
  (this->KeyName2).ComparisonIndex = 0;
  (this->KeyName2).Number = 0;
  (this->OnAbortKeyName).ComparisonIndex = 0;
  (this->OnAbortKeyName).Number = 0;
  return this;
}

// UTestBTTask_SetValuesWithLogs @ 14704b200

UTestBTTask_SetValuesWithLogs * __thiscall
UTestBTTask_SetValuesWithLogs::UTestBTTask_SetValuesWithLogs
          (UTestBTTask_SetValuesWithLogs *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FName local_res8;
  FString local_18;
  
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->KeyName1).ComparisonIndex = 0;
  (this->KeyName1).Number = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->KeyName2).ComparisonIndex = 0;
  (this->KeyName2).Number = 0;
  (this->OnAbortKeyName).ComparisonIndex = 0;
  (this->OnAbortKeyName).Number = 0;
  ::FString::FString(&local_18,"SetValues");
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
  this->ExecutionTicks1 = 0;
  this->ExecutionTicks2 = 0;
  this->LogIndex = 0;
  this->LogFinished = -1;
  this->LogTickIndex = -1;
  (this->TaskResult).Value = '\0';
  ::FName::FName(&local_res8,L"Int");
  this->KeyName1 = local_res8;
  this->Value1 = 1;
  ::FName::FName(&local_res8,L"Int2");
  this->KeyName2 = local_res8;
  (this->OnAbortKeyName).ComparisonIndex = 0;
  (this->OnAbortKeyName).Number = 0;
  this->Value2 = 1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffb | 3;
  this->OnAbortValue = 1;
  return this;
}

// ~UTestBTTask_SetValuesWithLogs @ 14704bb60

void __thiscall
UTestBTTask_SetValuesWithLogs::~UTestBTTask_SetValuesWithLogs(UTestBTTask_SetValuesWithLogs *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// AbortTask @ 14704f1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UTestBTTask_SetValuesWithLogs::AbortTask
          (UTestBTTask_SetValuesWithLogs *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  UBlackboardComponent *this_00;
  bool bVar2;
  FKey local_res8;
  
  bVar2 = ::FName::IsWithinBounds((FNameEntryId)(this->OnAbortKeyName).ComparisonIndex.Value);
  if (bVar2) {
    this_00 = (UBlackboardComponent *)param_1->_padding_;
    iVar1 = this->OnAbortValue;
    UBlackboardComponent::GetKeyID(this_00,(FName *)&local_res8);
    UBlackboardComponent::SetValue<UBlackboardKeyType_Int>(this_00,local_res8,iVar1);
  }
  return Aborted;
}

// CleanupMemory @ 147050970

void __thiscall
UTestBTTask_SetValuesWithLogs::CleanupMemory
          (UTestBTTask_SetValuesWithLogs *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  return;
}

// ExecuteTask @ 147051e70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UTestBTTask_SetValuesWithLogs::ExecuteTask
          (UTestBTTask_SetValuesWithLogs *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  UBlackboardComponent *pUVar2;
  FBTSetValueTaskMemory *pFVar3;
  ulong64 uVar4;
  FKey local_res8;
  
  pFVar3 = UBTNode::CastInstanceNodeMemory<FBTSetValueTaskMemory>((UBTNode *)this,param_2);
  uVar4 = (longlong)this->ExecutionTicks1 + FAITestHelpers::UpdatesCounter;
  pFVar3->EndFrameIdx = uVar4;
  pFVar3->EndFrameIdx2 = (longlong)this->ExecutionTicks2 + uVar4;
  pUVar2 = (UBlackboardComponent *)param_1->_padding_;
  iVar1 = this->Value1;
  UBlackboardComponent::GetKeyID(pUVar2,(FName *)&local_res8);
  UBlackboardComponent::SetValue<UBlackboardKeyType_Int>(pUVar2,local_res8,iVar1);
  LogExecution(this,param_1,this->LogIndex);
  if (this->ExecutionTicks1 == 0) {
    pUVar2 = (UBlackboardComponent *)param_1->_padding_;
    iVar1 = this->Value2;
    UBlackboardComponent::GetKeyID(pUVar2,(FName *)&local_res8);
    UBlackboardComponent::SetValue<UBlackboardKeyType_Int>(pUVar2,local_res8,iVar1);
    if (this->ExecutionTicks2 == 0) {
      return (uint)(this->TaskResult).Value;
    }
  }
  return InProgress;
}

// GetInstanceMemorySize @ 147052310

ushort __thiscall
UTestBTTask_SetValuesWithLogs::GetInstanceMemorySize(UTestBTTask_SetValuesWithLogs *this)

{
  return 0x10;
}

// GetPrivateStaticClass @ 147053170

UClass * __cdecl UTestBTTask_SetValuesWithLogs::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_SetValuesWithLogs.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_SetValuesWithLogs",
               &Z_Registration_Info_UClass_UTestBTTask_SetValuesWithLogs.InnerSingleton,
               StaticRegisterNativesUTestBTTask_SetValuesWithLogs,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTTask_SetValuesWithLogs>,
               InternalVTableHelperCtorCaller<UTestBTTask_SetValuesWithLogs>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_SetValuesWithLogs.InnerSingleton;
}

// InitializeMemory @ 1470537e0

void __thiscall
UTestBTTask_SetValuesWithLogs::InitializeMemory
          (UTestBTTask_SetValuesWithLogs *this,UBehaviorTreeComponent *param_1,uchar *param_2,
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
  }
  UBTNode::CastInstanceNodeMemory<FBTSetValueTaskMemory>((UBTNode *)this,param_2);
  return;
}

// LogExecution @ 147057880

void __thiscall
UTestBTTask_SetValuesWithLogs::LogExecution
          (UTestBTTask_SetValuesWithLogs *this,UBehaviorTreeComponent *param_1,int param_2)

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

// StaticRegisterNativesUTestBTTask_SetValuesWithLogs @ 147059a30

void __cdecl UTestBTTask_SetValuesWithLogs::StaticRegisterNativesUTestBTTask_SetValuesWithLogs(void)

{
  return;
}

// TickTask @ 14705a2d0

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
UTestBTTask_SetValuesWithLogs::TickTask
          (UTestBTTask_SetValuesWithLogs *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          float param_3)

{
  int iVar1;
  UBlackboardComponent *this_00;
  FBTSetValueTaskMemory *pFVar2;
  FKey local_res8;
  
  pFVar2 = UBTNode::CastInstanceNodeMemory<FBTSetValueTaskMemory>((UBTNode *)this,param_2);
  LogExecution(this,param_1,this->LogTickIndex);
  if (pFVar2->EndFrameIdx <= FAITestHelpers::UpdatesCounter) {
    iVar1 = this->Value2;
    this_00 = (UBlackboardComponent *)param_1->_padding_;
    UBlackboardComponent::GetKeyID(this_00,(FName *)&local_res8);
    UBlackboardComponent::SetValue<UBlackboardKeyType_Int>(this_00,local_res8,iVar1);
    pFVar2->EndFrameIdx = 0xffffffffffffffff;
  }
  if (pFVar2->EndFrameIdx2 <= FAITestHelpers::UpdatesCounter) {
    LogExecution(this,param_1,this->LogFinished);
    UBTTaskNode::FinishLatentTask((UBTTaskNode *)this,param_1,(uint)(this->TaskResult).Value);
    return;
  }
  return;
}

