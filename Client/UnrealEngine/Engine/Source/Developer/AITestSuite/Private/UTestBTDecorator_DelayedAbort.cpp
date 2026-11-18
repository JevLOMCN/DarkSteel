// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 11

// StaticClass @ 147013890

UClass * __cdecl UTestBTDecorator_DelayedAbort::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTDecorator_DelayedAbort",
               &Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort.InnerSingleton,
               StaticRegisterNativesUTestBTDecorator_DelayedAbort,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTDecorator_DelayedAbort>,
               InternalVTableHelperCtorCaller<UTestBTDecorator_DelayedAbort>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort.InnerSingleton;
}

// UTestBTDecorator_DelayedAbort @ 14704a750

UTestBTDecorator_DelayedAbort * __thiscall
UTestBTDecorator_DelayedAbort::UTestBTDecorator_DelayedAbort
          (UTestBTDecorator_DelayedAbort *this,FVTableHelper *param_1)

{
  UBTDecorator::UBTDecorator((UBTDecorator *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UTestBTDecorator_DelayedAbort @ 14704a790

UTestBTDecorator_DelayedAbort * __thiscall
UTestBTDecorator_DelayedAbort::UTestBTDecorator_DelayedAbort
          (UTestBTDecorator_DelayedAbort *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FString local_18;
  
  UBTDecorator::UBTDecorator((UBTDecorator *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::FString(&local_18,"Delayed Abort");
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
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffffc4;
  this->DelayTicks = 5;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 4;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfd | 5;
  this->bOnlyOnce = true;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 2;
  return this;
}

// ~UTestBTDecorator_DelayedAbort @ 14704ba00

void __thiscall
UTestBTDecorator_DelayedAbort::~UTestBTDecorator_DelayedAbort(UTestBTDecorator_DelayedAbort *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTDecorator::~UBTDecorator((UBTDecorator *)this);
  return;
}

// CleanupMemory @ 1470508f0

void __thiscall
UTestBTDecorator_DelayedAbort::CleanupMemory
          (UTestBTDecorator_DelayedAbort *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  return;
}

// GetInstanceMemorySize @ 1470522d0

ushort __thiscall
UTestBTDecorator_DelayedAbort::GetInstanceMemorySize(UTestBTDecorator_DelayedAbort *this)

{
  return 8;
}

// GetPrivateStaticClass @ 147052930

UClass * __cdecl UTestBTDecorator_DelayedAbort::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTDecorator_DelayedAbort",
               &Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort.InnerSingleton,
               StaticRegisterNativesUTestBTDecorator_DelayedAbort,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTDecorator_DelayedAbort>,
               InternalVTableHelperCtorCaller<UTestBTDecorator_DelayedAbort>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort.InnerSingleton;
}

// InitializeMemory @ 1470536a0

void __thiscall
UTestBTDecorator_DelayedAbort::InitializeMemory
          (UTestBTDecorator_DelayedAbort *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FName local_res8;
  FString local_18;
  
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
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 8) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnBecomeRelevant @ 147057ae0

void __thiscall
UTestBTDecorator_DelayedAbort::OnBecomeRelevant
          (UTestBTDecorator_DelayedAbort *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  *(ulong64 *)param_2 = (longlong)this->DelayTicks + FAITestHelpers::UpdatesCounter;
  return;
}

// StaticRegisterNativesUTestBTDecorator_DelayedAbort @ 147059980

void __cdecl UTestBTDecorator_DelayedAbort::StaticRegisterNativesUTestBTDecorator_DelayedAbort(void)

{
  return;
}

// TickNode @ 147059d20

void __thiscall
UTestBTDecorator_DelayedAbort::TickNode
          (UTestBTDecorator_DelayedAbort *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          float param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(ulonglong *)param_2 <= FAITestHelpers::UpdatesCounter) {
    if (this == (UTestBTDecorator_DelayedAbort *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequestedBy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BehaviorTreeComponent.h"
                         ,0x9a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UBehaviorTreeComponent::RequestBranchEvaluation(param_1,(UBTDecorator *)this);
    *(ulonglong *)param_2 = -(ulonglong)(this->bOnlyOnce != false);
  }
  return;
}

