// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 17

// StaticClass @ 147014340

UClass * __cdecl UTestBTDecorator_NodeMemoryValidator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTDecorator_NodeMemoryValidator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTDecorator_NodeMemoryValidator",
               &Z_Registration_Info_UClass_UTestBTDecorator_NodeMemoryValidator.InnerSingleton,
               StaticRegisterNativesUTestBTDecorator_NodeMemoryValidator,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTDecorator_NodeMemoryValidator>,
               InternalVTableHelperCtorCaller<UTestBTDecorator_NodeMemoryValidator>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTDecorator_NodeMemoryValidator.InnerSingleton;
}

// GetCheckedNodeMemory<FBTNodeMemoryValidatorDecoratorMemory> @ 14701be70

FBTNodeMemoryValidatorDecoratorMemory * __thiscall
UTestBTDecorator_NodeMemoryValidator::GetCheckedNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>
          (UTestBTDecorator_NodeMemoryValidator *this,FBehaviorTreeSearchData *param_1)

{
  ushort uVar1;
  UBehaviorTreeComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FBTNodeMemoryValidatorDecoratorMemory *pFVar8;
  longlong lVar9;
  
  uVar1 = param_1->OwnerComp->ActiveInstanceIdx;
  uVar7 = UBehaviorTreeComponent::FindInstanceContainingNode(param_1->OwnerComp,(UBTNode *)this);
  if (uVar7 != uVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SearchData.OwnerComp.FindInstanceContainingNode(this) == SearchData.OwnerComp.GetActiveInstanceIdx()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Classes\\BehaviorTree\\TestBTDecorator_NodeMemoryValidator.h"
                       ,0x25,L"Accessing memory from the wrong instance");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FBTNodeMemoryValidatorDecoratorMemory *)(*pcVar5)();
      return pFVar8;
    }
  }
  pUVar2 = param_1->OwnerComp;
  uVar1 = pUVar2->ActiveInstanceIdx;
  if ((pUVar2->InstanceStack).ArrayNum <= (int)(uint)uVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FBTNodeMemoryValidatorDecoratorMemory *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar3 = (pUVar2->InstanceStack).AllocatorInstance.Data;
  lVar9 = (ulonglong)uVar1 * 0x68;
  lVar4 = *(longlong *)(pFVar3 + lVar9 + 0x30);
  if (*(int *)(pFVar3 + lVar9 + 0x38) < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FBTNodeMemoryValidatorDecoratorMemory *)(*pcVar5)();
      return pFVar8;
    }
  }
  return (FBTNodeMemoryValidatorDecoratorMemory *)((ulonglong)*(ushort *)&this->field_0x52 + lVar4);
}

// UTestBTDecorator_NodeMemoryValidator @ 14704a8e0

UTestBTDecorator_NodeMemoryValidator * __thiscall
UTestBTDecorator_NodeMemoryValidator::UTestBTDecorator_NodeMemoryValidator
          (UTestBTDecorator_NodeMemoryValidator *this,FVTableHelper *param_1)

{
  UBTDecorator::UBTDecorator((UBTDecorator *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UTestBTDecorator_NodeMemoryValidator @ 14704a920

UTestBTDecorator_NodeMemoryValidator * __thiscall
UTestBTDecorator_NodeMemoryValidator::UTestBTDecorator_NodeMemoryValidator
          (UTestBTDecorator_NodeMemoryValidator *this,FObjectInitializer *param_1)

{
  UBTDecorator::UBTDecorator((UBTDecorator *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::operator=((FString *)&this->field_0x30,L"NodeMemoryValidator");
  this->field_0x58 = this->field_0x58 | 7;
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 & 0xfffffff8;
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 | 0x38;
  return this;
}

// ~UTestBTDecorator_NodeMemoryValidator @ 14704ba40

void __thiscall
UTestBTDecorator_NodeMemoryValidator::~UTestBTDecorator_NodeMemoryValidator
          (UTestBTDecorator_NodeMemoryValidator *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UBTDecorator::~UBTDecorator((UBTDecorator *)this);
  return;
}

// CalculateRawConditionValue @ 1470507f0

bool __thiscall
UTestBTDecorator_NodeMemoryValidator::CalculateRawConditionValue
          (UTestBTDecorator_NodeMemoryValidator *this,UBehaviorTreeComponent *param_1,uchar *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FBTNodeMemoryValidatorDecoratorMemory *pFVar4;
  
  pFVar4 = UBTNode::CastInstanceNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>
                     ((UBTNode *)this,param_2);
  if (pFVar4->Dummy != 0xabbaabba) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DecoratorMemory->Dummy == FBTNodeMemoryValidatorDecoratorMemory::TestValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\BehaviorTree\\TestBTDecorator_NodeMemoryValidator.cpp"
                       ,0x39,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = UBTDecorator::CalculateRawConditionValue((UBTDecorator *)this,param_1,param_2);
  return bVar2;
}

// CleanupMemory @ 147050900

void __thiscall
UTestBTDecorator_NodeMemoryValidator::CleanupMemory
          (UTestBTDecorator_NodeMemoryValidator *this,UBehaviorTreeComponent *param_1,uchar *param_2
          ,Type param_3)

{
  code *pcVar1;
  bool bVar2;
  FBTNodeMemoryValidatorDecoratorMemory *pFVar3;
  
  pFVar3 = UBTNode::CastInstanceNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>
                     ((UBTNode *)this,param_2);
  if (pFVar3->Dummy != 0xabbaabba) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DecoratorMemory->Dummy == FBTNodeMemoryValidatorDecoratorMemory::TestValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\BehaviorTree\\TestBTDecorator_NodeMemoryValidator.cpp"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetInstanceMemorySize @ 1470522e0

ushort __thiscall
UTestBTDecorator_NodeMemoryValidator::GetInstanceMemorySize
          (UTestBTDecorator_NodeMemoryValidator *this)

{
  return 4;
}

// GetPrivateStaticClass @ 147052ab0

UClass * __cdecl UTestBTDecorator_NodeMemoryValidator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTDecorator_NodeMemoryValidator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTDecorator_NodeMemoryValidator",
               &Z_Registration_Info_UClass_UTestBTDecorator_NodeMemoryValidator.InnerSingleton,
               StaticRegisterNativesUTestBTDecorator_NodeMemoryValidator,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTDecorator_NodeMemoryValidator>,
               InternalVTableHelperCtorCaller<UTestBTDecorator_NodeMemoryValidator>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTDecorator_NodeMemoryValidator.InnerSingleton;
}

// InitializeMemory @ 147053770

void __thiscall
UTestBTDecorator_NodeMemoryValidator::InitializeMemory
          (UTestBTDecorator_NodeMemoryValidator *this,UBehaviorTreeComponent *param_1,uchar *param_2
          ,Type param_3)

{
  FBTNodeMemoryValidatorDecoratorMemory *pFVar1;
  
  if (param_3 == Initialize) {
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    pFVar1 = UBTNode::CastInstanceNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>
                       ((UBTNode *)this,param_2);
    pFVar1->Dummy = 0xabbaabba;
    return;
  }
  UBTNode::CastInstanceNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>((UBTNode *)this,param_2);
  return;
}

// OnBecomeRelevant @ 147057b00

void __thiscall
UTestBTDecorator_NodeMemoryValidator::OnBecomeRelevant
          (UTestBTDecorator_NodeMemoryValidator *this,UBehaviorTreeComponent *param_1,uchar *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FBTNodeMemoryValidatorDecoratorMemory *pFVar3;
  
  pFVar3 = UBTNode::CastInstanceNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>
                     ((UBTNode *)this,param_2);
  if (pFVar3->Dummy != 0xabbaabba) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DecoratorMemory->Dummy == FBTNodeMemoryValidatorDecoratorMemory::TestValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\BehaviorTree\\TestBTDecorator_NodeMemoryValidator.cpp"
                       ,0x15,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnCeaseRelevant @ 147057e20

void __thiscall
UTestBTDecorator_NodeMemoryValidator::OnCeaseRelevant
          (UTestBTDecorator_NodeMemoryValidator *this,UBehaviorTreeComponent *param_1,uchar *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FBTNodeMemoryValidatorDecoratorMemory *pFVar3;
  
  pFVar3 = UBTNode::CastInstanceNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>
                     ((UBTNode *)this,param_2);
  if (pFVar3->Dummy != 0xabbaabba) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DecoratorMemory->Dummy == FBTNodeMemoryValidatorDecoratorMemory::TestValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\BehaviorTree\\TestBTDecorator_NodeMemoryValidator.cpp"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnNodeActivation @ 1470580f0

void __thiscall
UTestBTDecorator_NodeMemoryValidator::OnNodeActivation
          (UTestBTDecorator_NodeMemoryValidator *this,FBehaviorTreeSearchData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FBTNodeMemoryValidatorDecoratorMemory *pFVar3;
  
  pFVar3 = GetCheckedNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>(this,param_1);
  if (pFVar3->Dummy != 0xabbaabba) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DecoratorMemory->Dummy == FBTNodeMemoryValidatorDecoratorMemory::TestValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\BehaviorTree\\TestBTDecorator_NodeMemoryValidator.cpp"
                       ,0x27,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnNodeDeactivation @ 147058140

void __thiscall
UTestBTDecorator_NodeMemoryValidator::OnNodeDeactivation
          (UTestBTDecorator_NodeMemoryValidator *this,FBehaviorTreeSearchData *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  FBTNodeMemoryValidatorDecoratorMemory *pFVar3;
  
  pFVar3 = GetCheckedNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>(this,param_1);
  if (pFVar3->Dummy != 0xabbaabba) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DecoratorMemory->Dummy == FBTNodeMemoryValidatorDecoratorMemory::TestValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\BehaviorTree\\TestBTDecorator_NodeMemoryValidator.cpp"
                       ,0x2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnNodeProcessed @ 147058190

void __thiscall
UTestBTDecorator_NodeMemoryValidator::OnNodeProcessed
          (UTestBTDecorator_NodeMemoryValidator *this,FBehaviorTreeSearchData *param_1,Type *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FBTNodeMemoryValidatorDecoratorMemory *pFVar3;
  
  pFVar3 = GetCheckedNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>(this,param_1);
  if (pFVar3->Dummy != 0xabbaabba) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DecoratorMemory->Dummy == FBTNodeMemoryValidatorDecoratorMemory::TestValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\BehaviorTree\\TestBTDecorator_NodeMemoryValidator.cpp"
                       ,0x33,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticRegisterNativesUTestBTDecorator_NodeMemoryValidator @ 1470599a0

void __cdecl
UTestBTDecorator_NodeMemoryValidator::StaticRegisterNativesUTestBTDecorator_NodeMemoryValidator
          (void)

{
  return;
}

// TickNode @ 147059da0

void __thiscall
UTestBTDecorator_NodeMemoryValidator::TickNode
          (UTestBTDecorator_NodeMemoryValidator *this,UBehaviorTreeComponent *param_1,uchar *param_2
          ,float param_3)

{
  code *pcVar1;
  bool bVar2;
  FBTNodeMemoryValidatorDecoratorMemory *pFVar3;
  
  pFVar3 = UBTNode::CastInstanceNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>
                     ((UBTNode *)this,param_2);
  if (pFVar3->Dummy != 0xabbaabba) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DecoratorMemory->Dummy == FBTNodeMemoryValidatorDecoratorMemory::TestValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\BehaviorTree\\TestBTDecorator_NodeMemoryValidator.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

