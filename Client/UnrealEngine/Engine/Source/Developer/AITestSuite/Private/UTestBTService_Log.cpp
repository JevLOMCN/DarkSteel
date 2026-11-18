// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 10

// StaticClass @ 147018d00

UClass * __cdecl UTestBTService_Log::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTService_Log.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTService_Log",
               &Z_Registration_Info_UClass_UTestBTService_Log.InnerSingleton,
               StaticRegisterNativesUTestBTService_Log,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,L"Game"
               ,InternalConstructor<UTestBTService_Log>,
               InternalVTableHelperCtorCaller<UTestBTService_Log>,local_res8,UBTService::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTService_Log.InnerSingleton;
}

// UTestBTService_Log @ 14704aa70

UTestBTService_Log * __thiscall
UTestBTService_Log::UTestBTService_Log(UTestBTService_Log *this,FVTableHelper *param_1)

{
  UBTService::UBTService((UBTService *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->KeyNameTick).ComparisonIndex = 0;
  (this->KeyNameTick).Number = 0;
  (this->KeyNameBecomeRelevant).ComparisonIndex = 0;
  (this->KeyNameBecomeRelevant).Number = 0;
  (this->KeyNameCeaseRelevant).ComparisonIndex = 0;
  (this->KeyNameCeaseRelevant).Number = 0;
  return this;
}

// UTestBTService_Log @ 14704aac0

UTestBTService_Log * __thiscall
UTestBTService_Log::UTestBTService_Log(UTestBTService_Log *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FString local_18;
  
  UBTService::UBTService((UBTService *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->KeyNameTick).ComparisonIndex = 0;
  (this->KeyNameTick).Number = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->KeyNameBecomeRelevant).ComparisonIndex = 0;
  (this->KeyNameBecomeRelevant).Number = 0;
  (this->KeyNameCeaseRelevant).ComparisonIndex = 0;
  (this->KeyNameCeaseRelevant).Number = 0;
  ::FString::FString(&local_18,"LogService");
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
  (this->KeyNameTick).ComparisonIndex = 0;
  (this->KeyNameTick).Number = 0;
  (this->KeyNameBecomeRelevant).ComparisonIndex = 0;
  (this->KeyNameBecomeRelevant).Number = 0;
  (this->KeyNameCeaseRelevant).ComparisonIndex = 0;
  (this->KeyNameCeaseRelevant).Number = 0;
  this->bToggleValue = false;
  this->_padding_ = 0;
  this->LogActivation = -1;
  this->LogDeactivation = -1;
  this->LogTick = -1;
  return this;
}

// ~UTestBTService_Log @ 14704ba80

void __thiscall UTestBTService_Log::~UTestBTService_Log(UTestBTService_Log *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTService::~UBTService((UBTService *)this);
  return;
}

// GetPrivateStaticClass @ 147052c30

UClass * __cdecl UTestBTService_Log::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTService_Log.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTService_Log",
               &Z_Registration_Info_UClass_UTestBTService_Log.InnerSingleton,
               StaticRegisterNativesUTestBTService_Log,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,L"Game"
               ,InternalConstructor<UTestBTService_Log>,
               InternalVTableHelperCtorCaller<UTestBTService_Log>,local_res8,UBTService::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTService_Log.InnerSingleton;
}

// OnBecomeRelevant @ 147057c50

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
UTestBTService_Log::OnBecomeRelevant
          (UTestBTService_Log *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  UBlackboardComponent *this_00;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  int *piVar4;
  
  UBTAuxiliaryNode::OnBecomeRelevant((UBTAuxiliaryNode *)this,param_1,param_2);
  if (this->KeyNameBecomeRelevant != (FName)0x0) {
    this_00 = (UBlackboardComponent *)param_1->_padding_;
    if (this->bToggleValue == false) {
      bVar2 = true;
    }
    else {
      bVar2 = UBlackboardComponent::GetValueAsBool(this_00,&this->KeyNameBecomeRelevant);
      bVar2 = !bVar2;
    }
    UBlackboardComponent::SetValueAsBool(this_00,&this->KeyNameBecomeRelevant,bVar2);
  }
  piVar4 = &this->LogActivation;
  if (-1 < *piVar4) {
    if (((UMockAI_BT::ExecutionLog.AllocatorInstance.Data <= piVar4) &&
        (piVar4 < UMockAI_BT::ExecutionLog.AllocatorInstance.Data +
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
    *(int *)(UMockAI_BT::ExecutionLog.AllocatorInstance.Data + lVar3 * 4) = *piVar4;
  }
  return;
}

// OnCeaseRelevant @ 147057f70

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
UTestBTService_Log::OnCeaseRelevant
          (UTestBTService_Log *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  UBlackboardComponent *this_00;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  int *piVar4;
  
  UBTAuxiliaryNode::OnCeaseRelevant((UBTAuxiliaryNode *)this,param_1,param_2);
  if (this->KeyNameCeaseRelevant != (FName)0x0) {
    this_00 = (UBlackboardComponent *)param_1->_padding_;
    if (this->bToggleValue == false) {
      bVar2 = true;
    }
    else {
      bVar2 = UBlackboardComponent::GetValueAsBool(this_00,&this->KeyNameCeaseRelevant);
      bVar2 = !bVar2;
    }
    UBlackboardComponent::SetValueAsBool(this_00,&this->KeyNameCeaseRelevant,bVar2);
  }
  piVar4 = &this->LogDeactivation;
  if (-1 < *piVar4) {
    if (((UMockAI_BT::ExecutionLog.AllocatorInstance.Data <= piVar4) &&
        (piVar4 < UMockAI_BT::ExecutionLog.AllocatorInstance.Data +
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
    *(int *)(UMockAI_BT::ExecutionLog.AllocatorInstance.Data + lVar3 * 4) = *piVar4;
  }
  return;
}

// SetFlagOnTick @ 147058550

void __thiscall
UTestBTService_Log::SetFlagOnTick(UTestBTService_Log *this,FName param_1,bool param_2)

{
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | (uint)param_2;
  this->KeyNameTick = param_1;
  return;
}

// StaticRegisterNativesUTestBTService_Log @ 1470599c0

void __cdecl UTestBTService_Log::StaticRegisterNativesUTestBTService_Log(void)

{
  return;
}

// TickNode @ 147059ef0

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
UTestBTService_Log::TickNode
          (UTestBTService_Log *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3)

{
  int *piVar1;
  UBlackboardComponent *this_00;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  UBTService::TickNode((UBTService *)this,param_1,param_2,param_3);
  if ((this->KeyNameTick != (FName)0x0) && (this->TicksDelaySetKeyNameTick <= this->NumTicks)) {
    this_00 = (UBlackboardComponent *)param_1->_padding_;
    if (this->bToggleValue == false) {
      bVar3 = true;
    }
    else {
      bVar3 = UBlackboardComponent::GetValueAsBool(this_00,&this->KeyNameTick);
      bVar3 = !bVar3;
    }
    UBlackboardComponent::SetValueAsBool(this_00,&this->KeyNameTick,bVar3);
  }
  piVar1 = &this->LogTick;
  if (-1 < *piVar1) {
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
  }
  this->NumTicks = this->NumTicks + 1;
  return;
}

