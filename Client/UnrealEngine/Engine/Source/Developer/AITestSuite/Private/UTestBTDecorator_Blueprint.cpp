// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 12

// StaticClass @ 147010300

UClass * __cdecl UTestBTDecorator_Blueprint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTDecorator_Blueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTDecorator_Blueprint",
               &Z_Registration_Info_UClass_UTestBTDecorator_Blueprint.InnerSingleton,
               StaticRegisterNativesUTestBTDecorator_Blueprint,0xb8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Game",InternalConstructor<UTestBTDecorator_Blueprint>,
               InternalVTableHelperCtorCaller<UTestBTDecorator_Blueprint>,local_res8,
               UBTDecorator_BlueprintBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTDecorator_Blueprint.InnerSingleton;
}

// UTestBTDecorator_Blueprint @ 14704a610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UTestBTDecorator_Blueprint * __thiscall
UTestBTDecorator_Blueprint::UTestBTDecorator_Blueprint
          (UTestBTDecorator_Blueprint *this,FVTableHelper *param_1)

{
  UBTDecorator_BlueprintBase::UBTDecorator_BlueprintBase((UBTDecorator_BlueprintBase *)this,param_1)
  ;
  this->BPConditionType = TrueCondition;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->ObservingKeyName).ComparisonIndex = 0;
  (this->ObservingKeyName).Number = 0;
  return this;
}

// UTestBTDecorator_Blueprint @ 14704a660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UTestBTDecorator_Blueprint * __thiscall
UTestBTDecorator_Blueprint::UTestBTDecorator_Blueprint
          (UTestBTDecorator_Blueprint *this,FObjectInitializer *param_1)

{
  UBTDecorator_BlueprintBase::UBTDecorator_BlueprintBase((UBTDecorator_BlueprintBase *)this,param_1)
  ;
  this->BPConditionType = TrueCondition;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->LogIndexBecomeRelevant = -1;
  this->LogIndexCeaseRelevant = -1;
  this->LogIndexCalculate = -1;
  (this->ObservingKeyName).ComparisonIndex = 0;
  (this->ObservingKeyName).Number = 0;
  return this;
}

// ~UTestBTDecorator_Blueprint @ 14704b9c0

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
UTestBTDecorator_Blueprint::~UTestBTDecorator_Blueprint(UTestBTDecorator_Blueprint *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTDecorator_BlueprintBase::~UBTDecorator_BlueprintBase((UBTDecorator_BlueprintBase *)this);
  return;
}

// CalculateRawConditionValue @ 1470507b0

bool __thiscall
UTestBTDecorator_Blueprint::CalculateRawConditionValue
          (UTestBTDecorator_Blueprint *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  LogExecution(this,this->LogIndexCalculate);
  return this->BPConditionType == TrueCondition;
}

// GetPrivateStaticClass @ 1470527b0

UClass * __cdecl UTestBTDecorator_Blueprint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTDecorator_Blueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTDecorator_Blueprint",
               &Z_Registration_Info_UClass_UTestBTDecorator_Blueprint.InnerSingleton,
               StaticRegisterNativesUTestBTDecorator_Blueprint,0xb8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Game",InternalConstructor<UTestBTDecorator_Blueprint>,
               InternalVTableHelperCtorCaller<UTestBTDecorator_Blueprint>,local_res8,
               UBTDecorator_BlueprintBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTDecorator_Blueprint.InnerSingleton;
}

// LogExecution @ 1470575e0

void __thiscall
UTestBTDecorator_Blueprint::LogExecution(UTestBTDecorator_Blueprint *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  int local_res10 [6];
  
  if (param_1 != -1) {
    local_res10[0] = param_1;
    if (((UMockAI_BT::ExecutionLog.AllocatorInstance.Data <= (FScriptContainerElement *)local_res10)
        && ((FScriptContainerElement *)local_res10 <
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
    *(int *)(UMockAI_BT::ExecutionLog.AllocatorInstance.Data + lVar3 * 4) = local_res10[0];
  }
  return;
}

// OnBecomeRelevant @ 147057a90

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
UTestBTDecorator_Blueprint::OnBecomeRelevant
          (UTestBTDecorator_Blueprint *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  LogExecution(this,this->LogIndexBecomeRelevant);
  UBTDecorator_BlueprintBase::OnBecomeRelevant((UBTDecorator_BlueprintBase *)this,param_1,param_2);
  return;
}

// OnCeaseRelevant @ 147057dd0

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
UTestBTDecorator_Blueprint::OnCeaseRelevant
          (UTestBTDecorator_Blueprint *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  LogExecution(this,this->LogIndexCeaseRelevant);
  UBTDecorator_BlueprintBase::OnCeaseRelevant((UBTDecorator_BlueprintBase *)this,param_1,param_2);
  return;
}

// PostInitProperties @ 1470582d0

void __thiscall UTestBTDecorator_Blueprint::PostInitProperties(UTestBTDecorator_Blueprint *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UTestBTDecorator_Blueprint *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UTestBTDecorator_Blueprint **)
      ((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UTestBTDecorator_Blueprint **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 1470582e0

void __thiscall UTestBTDecorator_Blueprint::PostLoad(UTestBTDecorator_Blueprint *this)

{
  FName *pFVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  UObject::PostLoad((UObject *)this);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffff9fff;
  pFVar1 = &this->ObservingKeyName;
  *(uint *)&this->_padding_ =
       (uint)this->_padding_ | -(uint)(this->BPConditionType != NoCondition) & 0x2000;
  uVar6 = (uint)this->_padding_;
  if (*pFVar1 != (FName)0x0) {
    piVar2 = (int *)((longlong)&this->_padding_ + 4);
    iVar5 = *piVar2;
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar5 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)&this->_padding_,0,piVar2);
    }
    if (((undefined1 *)this->_padding_ <= pFVar1) &&
       (pFVar1 < (undefined1 *)this->_padding_ + (longlong)*piVar2 * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (int)this->_padding_;
    if (iVar5 == *piVar2) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)&this->_padding_,piVar2);
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    *(FName *)(this->_padding_ + (longlong)iVar5 * 8) = *pFVar1;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 4;
    uVar6 = (uint)this->_padding_;
  }
  if ((uVar6 & 0x6004) != 0) {
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  }
  return;
}

// StaticRegisterNativesUTestBTDecorator_Blueprint @ 147059960

void __cdecl UTestBTDecorator_Blueprint::StaticRegisterNativesUTestBTDecorator_Blueprint(void)

{
  return;
}

