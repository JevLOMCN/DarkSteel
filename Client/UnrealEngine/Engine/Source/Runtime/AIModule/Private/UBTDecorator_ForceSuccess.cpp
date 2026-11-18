// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146eab840

UClass * __cdecl UBTDecorator_ForceSuccess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_ForceSuccess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_ForceSuccess",
               &Z_Registration_Info_UClass_UBTDecorator_ForceSuccess.InnerSingleton,
               StaticRegisterNativesUBTDecorator_ForceSuccess,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_ForceSuccess>,
               InternalVTableHelperCtorCaller<UBTDecorator_ForceSuccess>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_ForceSuccess.InnerSingleton;
}

// UBTDecorator_ForceSuccess @ 146ec6aa0

UBTDecorator_ForceSuccess * __thiscall
UBTDecorator_ForceSuccess::UBTDecorator_ForceSuccess
          (UBTDecorator_ForceSuccess *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UBTDecorator_ForceSuccess @ 146ec6af0

UBTDecorator_ForceSuccess * __thiscall
UBTDecorator_ForceSuccess::UBTDecorator_ForceSuccess
          (UBTDecorator_ForceSuccess *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x55 = this->field_0x55 & 0xf8;
  this->field_0x59 = 0xff;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  this->field_0x58 = this->field_0x58 & 0xf0;
  this->field_0x64 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  this->field_0x54 = 0;
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 & 0xffffff47 | 0x47;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::operator=((FString *)&this->field_0x30,L"Force Success");
  this->field_0x58 = this->field_0x58 & 0xf8;
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 & 0xffffffe0 | 0x20;
  return this;
}

// ~UBTDecorator_ForceSuccess @ 146ecce80

void __thiscall
UBTDecorator_ForceSuccess::~UBTDecorator_ForceSuccess(UBTDecorator_ForceSuccess *this)

{
  *(undefined ***)this = &UBTNode::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UBTNode::_vftable__for__IGameplayTaskOwnerInterface__;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  *(undefined ***)&this->field_0x28 = &___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146ee7870

UClass * __cdecl UBTDecorator_ForceSuccess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_ForceSuccess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_ForceSuccess",
               &Z_Registration_Info_UClass_UBTDecorator_ForceSuccess.InnerSingleton,
               StaticRegisterNativesUBTDecorator_ForceSuccess,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_ForceSuccess>,
               InternalVTableHelperCtorCaller<UBTDecorator_ForceSuccess>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_ForceSuccess.InnerSingleton;
}

// OnNodeProcessed @ 146ef90d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBTDecorator_ForceSuccess::OnNodeProcessed
          (UBTDecorator_ForceSuccess *this,FBehaviorTreeSearchData *param_1,Type *param_2)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  UBTCompositeNode *this_00;
  ushort uVar5;
  ushort uVar6;
  FString local_18;
  
  if (param_1->bSearchInProgress != 0) goto LAB_146ef9163;
  uVar1 = param_1->OwnerComp->ActiveInstanceIdx;
  this_00 = *(UBTCompositeNode **)&this->field_0x48;
  if (this_00 == (UBTCompositeNode *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ushort)this_00->_padding_;
  }
  if (this->field_0x59 == 0xff) {
LAB_146ef912d:
    if (this_00 == (UBTCompositeNode *)0x0) goto LAB_146ef9138;
    uVar5 = (ushort)this_00->_padding_;
  }
  else {
    if (this_00 != (UBTCompositeNode *)0x0) {
      this_00 = (UBTCompositeNode *)
                UBTCompositeNode::GetChildNode(this_00,(uint)(byte)this->field_0x59);
      goto LAB_146ef912d;
    }
LAB_146ef9138:
    uVar5 = 0;
  }
  uVar2 = (param_1->SearchRootNode).ExecutionIndex;
  if ((uVar6 != uVar2) || (uVar1 != (param_1->SearchRootNode).InstanceIndex)) {
    if (uVar5 != uVar2) {
      return;
    }
    if (uVar1 != (param_1->SearchRootNode).InstanceIndex) {
      return;
    }
  }
LAB_146ef9163:
  if ((*param_2 == Aborted) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeResult != EBTNodeResult::Aborted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Decorators\\BTDecorator_ForceSuccess.cpp"
                         ,0x27,L"Should never change a result set to \'Aborted\'"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *param_2 = Succeeded;
  if (FVisualLogger::bIsRecording != 0) {
    UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)this);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)param_1->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
               L"Forcing Success: %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUBTDecorator_ForceSuccess @ 146f00be0

void __cdecl UBTDecorator_ForceSuccess::StaticRegisterNativesUBTDecorator_ForceSuccess(void)

{
  return;
}

