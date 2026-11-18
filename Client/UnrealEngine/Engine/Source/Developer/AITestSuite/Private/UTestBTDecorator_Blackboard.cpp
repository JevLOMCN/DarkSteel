// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 10

// StaticClass @ 147007e10

UClass * __cdecl UTestBTDecorator_Blackboard::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTDecorator_Blackboard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTDecorator_Blackboard",
               &Z_Registration_Info_UClass_UTestBTDecorator_Blackboard.InnerSingleton,
               StaticRegisterNativesUTestBTDecorator_Blackboard,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTDecorator_Blackboard>,
               InternalVTableHelperCtorCaller<UTestBTDecorator_Blackboard>,local_res8,
               UBTDecorator_Blackboard::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTDecorator_Blackboard.InnerSingleton;
}

// UTestBTDecorator_Blackboard @ 14704a580

UTestBTDecorator_Blackboard * __thiscall
UTestBTDecorator_Blackboard::UTestBTDecorator_Blackboard
          (UTestBTDecorator_Blackboard *this,FVTableHelper *param_1)

{
  UBTDecorator_Blackboard::UBTDecorator_Blackboard((UBTDecorator_Blackboard *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UTestBTDecorator_Blackboard @ 14704a5c0

UTestBTDecorator_Blackboard * __thiscall
UTestBTDecorator_Blackboard::UTestBTDecorator_Blackboard
          (UTestBTDecorator_Blackboard *this,FObjectInitializer *param_1)

{
  UBTDecorator_Blackboard::UBTDecorator_Blackboard((UBTDecorator_Blackboard *)this,param_1);
  this->LogIndexBecomeRelevant = -1;
  this->LogIndexCeaseRelevant = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->LogIndexCalculate = -1;
  return this;
}

// ~UTestBTDecorator_Blackboard @ 14704b9a0

void __thiscall
UTestBTDecorator_Blackboard::~UTestBTDecorator_Blackboard(UTestBTDecorator_Blackboard *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTDecorator_Blackboard::~UBTDecorator_Blackboard((UBTDecorator_Blackboard *)this);
  return;
}

// CalculateRawConditionValue @ 147050760

bool __thiscall
UTestBTDecorator_Blackboard::CalculateRawConditionValue
          (UTestBTDecorator_Blackboard *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  bool bVar1;
  
  LogExecution(this,this->LogIndexCalculate);
  bVar1 = UBTDecorator_Blackboard::CalculateRawConditionValue
                    ((UBTDecorator_Blackboard *)this,param_1,param_2);
  return bVar1;
}

// GetPrivateStaticClass @ 1470526f0

UClass * __cdecl UTestBTDecorator_Blackboard::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTDecorator_Blackboard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTDecorator_Blackboard",
               &Z_Registration_Info_UClass_UTestBTDecorator_Blackboard.InnerSingleton,
               StaticRegisterNativesUTestBTDecorator_Blackboard,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTDecorator_Blackboard>,
               InternalVTableHelperCtorCaller<UTestBTDecorator_Blackboard>,local_res8,
               UBTDecorator_Blackboard::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTDecorator_Blackboard.InnerSingleton;
}

// LogExecution @ 147057500

void __thiscall
UTestBTDecorator_Blackboard::LogExecution(UTestBTDecorator_Blackboard *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  int local_res10 [6];
  
  if (-1 < param_1) {
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

// OnBecomeRelevant @ 147057a40

void __thiscall
UTestBTDecorator_Blackboard::OnBecomeRelevant
          (UTestBTDecorator_Blackboard *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  LogExecution(this,this->LogIndexBecomeRelevant);
  UBTDecorator_BlackboardBase::OnBecomeRelevant((UBTDecorator_BlackboardBase *)this,param_1,param_2)
  ;
  return;
}

// OnCeaseRelevant @ 147057d80

void __thiscall
UTestBTDecorator_Blackboard::OnCeaseRelevant
          (UTestBTDecorator_Blackboard *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  LogExecution(this,this->LogIndexCeaseRelevant);
  UBTDecorator_BlackboardBase::OnCeaseRelevant((UBTDecorator_BlackboardBase *)this,param_1,param_2);
  return;
}

// StaticRegisterNativesUTestBTDecorator_Blackboard @ 147059950

void __cdecl UTestBTDecorator_Blackboard::StaticRegisterNativesUTestBTDecorator_Blackboard(void)

{
  return;
}

