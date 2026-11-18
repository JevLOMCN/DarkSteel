// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 19

// StaticClass @ 146ead900

UClass * __cdecl UBTAuxiliaryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTAuxiliaryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTAuxiliaryNode",
               &Z_Registration_Info_UClass_UBTAuxiliaryNode.InnerSingleton,
               StaticRegisterNativesUBTAuxiliaryNode,0x60,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTAuxiliaryNode>,
               InternalVTableHelperCtorCaller<UBTAuxiliaryNode>,local_res8,UBTNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTAuxiliaryNode.InnerSingleton;
}

// UBTAuxiliaryNode @ 146ec4f40

UBTAuxiliaryNode * __thiscall
UBTAuxiliaryNode::UBTAuxiliaryNode(UBTAuxiliaryNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UBTAuxiliaryNode @ 146ec4f90

UBTAuxiliaryNode * __thiscall
UBTAuxiliaryNode::UBTAuxiliaryNode(UBTAuxiliaryNode *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  this->bNotifyBecomeRelevant = '\0';
  this->bTickIntervals = '\0';
  this->bNotifyTick = '\0';
  this->bNotifyCeaseRelevant = '\0';
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ChildIndex = 0xff;
  return this;
}

// ~UBTAuxiliaryNode @ 146ecc8b0

void __thiscall UBTAuxiliaryNode::~UBTAuxiliaryNode(UBTAuxiliaryNode *this)

{
  this->_padding_ = (longlong)&UBTNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTNode::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DescribeRuntimeValues @ 146edad20

/* WARNING: Removing unreachable block (ram,0x000146edae79) */

void __thiscall
UBTAuxiliaryNode::DescribeRuntimeValues
          (UBTAuxiliaryNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  FString local_28;
  FString local_18;
  
  if ((param_3 == Detailed) && (this->bTickIntervals != '\0')) {
    uVar4 = (**(code **)(this->_padding_ + 0x2e8))();
    lVar6 = 0;
    if (uVar4 != 0) {
      lVar6 = (longlong)param_2 - ((ulonglong)(uVar4 + 3) & 0xfffffffffffffffc);
    }
    ::FString::SanitizeFloat(&local_18,(double)*(float *)(lVar6 + 4),1);
    ::FString::PrintfImpl(&local_28,L"next tick: %ss");
    pFVar1 = (param_4->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_4->ArrayMax * 0x10)) &&
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
    iVar5 = param_4->ArrayNum;
    if (iVar5 == param_4->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    lVar6 = (longlong)iVar5;
    param_4->ArrayNum = iVar5 + 1;
    pFVar1 = (param_4->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar6 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar1 + lVar6 * 0x10) = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar1 + lVar6 * 0x10 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar1 + lVar6 * 0x10 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetMyNode @ 146ee6500

UBTNode * __thiscall UBTAuxiliaryNode::GetMyNode(UBTAuxiliaryNode *this)

{
  UBTNode *pUVar1;
  
  if (this->ChildIndex == 0xff) {
    return (UBTNode *)this->_padding_;
  }
  if ((UBTCompositeNode *)this->_padding_ != (UBTCompositeNode *)0x0) {
    pUVar1 = UBTCompositeNode::GetChildNode
                       ((UBTCompositeNode *)this->_padding_,(uint)this->ChildIndex);
    return pUVar1;
  }
  return (UBTNode *)0x0;
}

// GetNextNeededDeltaTime @ 146ee6780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
UBTAuxiliaryNode::GetNextNeededDeltaTime
          (UBTAuxiliaryNode *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  ushort uVar1;
  UBTAuxiliaryNode *pUVar2;
  
  if (this->bNotifyTick == '\0') {
    if ((this->_padding_ & 0x40000000000) == 0) {
      return __real_7f7fffff;
    }
  }
  else {
    pUVar2 = this;
    if ((this->_padding_ & 0x40000000000) == 0) goto LAB_146ee67bf;
  }
  pUVar2 = (UBTAuxiliaryNode *)UBTNode::GetNodeInstance((UBTNode *)this,param_1,param_2);
LAB_146ee67bf:
  if ((pUVar2 == (UBTAuxiliaryNode *)0x0) || (pUVar2->bNotifyTick == '\0')) {
    return __real_7f7fffff;
  }
  if (this->bTickIntervals == '\0') {
    return 0.0;
  }
  uVar1 = (**(code **)(this->_padding_ + 0x2e8))(this);
  if (uVar1 != 0) {
    return *(float *)(param_2 + (4 - ((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc)));
  }
  return _DAT_00000004;
}

// GetNextTickRemainingTime @ 146ee6830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall UBTAuxiliaryNode::GetNextTickRemainingTime(UBTAuxiliaryNode *this,uchar *param_1)

{
  ushort uVar1;
  float fVar2;
  
  if (this->bTickIntervals == '\0') {
    return 0.0;
  }
  uVar1 = (**(code **)(this->_padding_ + 0x2e8))();
  if (uVar1 != 0) {
    fVar2 = *(float *)(param_1 + (4 - ((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc)));
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    return fVar2;
  }
  fVar2 = _DAT_00000004;
  if (_DAT_00000004 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}

// GetPrivateStaticClass @ 146ee6d30

UClass * __cdecl UBTAuxiliaryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTAuxiliaryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTAuxiliaryNode",
               &Z_Registration_Info_UClass_UBTAuxiliaryNode.InnerSingleton,
               StaticRegisterNativesUBTAuxiliaryNode,0x60,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTAuxiliaryNode>,
               InternalVTableHelperCtorCaller<UBTAuxiliaryNode>,local_res8,UBTNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTAuxiliaryNode.InnerSingleton;
}

// GetSpecialMemorySize @ 146eeaec0

ushort __thiscall UBTAuxiliaryNode::GetSpecialMemorySize(UBTAuxiliaryNode *this)

{
  if (this->bTickIntervals != '\0') {
    return 0xc;
  }
  return (ushort)(*(byte *)((longlong)&this->_padding_ + 5) >> 2 & 1) << 2;
}

// InitializeParentLink @ 146ef32b0

void __thiscall UBTAuxiliaryNode::InitializeParentLink(UBTAuxiliaryNode *this,uchar param_1)

{
  this->ChildIndex = param_1;
  return;
}

// OnBecomeRelevant @ 146ef5600

void __thiscall
UBTAuxiliaryNode::OnBecomeRelevant
          (UBTAuxiliaryNode *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  return;
}

// OnCeaseRelevant @ 146ef6e90

void __thiscall
UBTAuxiliaryNode::OnCeaseRelevant
          (UBTAuxiliaryNode *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  return;
}

// SetNextTickTime @ 146eff9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UBTAuxiliaryNode::SetNextTickTime(UBTAuxiliaryNode *this,uchar *param_1,float param_2)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = _DAT_00000004;
  if ((this->bTickIntervals != '\0') &&
     (uVar2 = (**(code **)(this->_padding_ + 0x2e8))(), fVar1 = param_2, uVar2 != 0)) {
    *(float *)(param_1 + (4 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc))) = param_2;
    return;
  }
  _DAT_00000004 = fVar1;
  return;
}

// StaticRegisterNativesUBTAuxiliaryNode @ 146f00ac0

void __cdecl UBTAuxiliaryNode::StaticRegisterNativesUBTAuxiliaryNode(void)

{
  return;
}

// TickNode @ 146f01860

void __thiscall
UBTAuxiliaryNode::TickNode
          (UBTAuxiliaryNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3)

{
  return;
}

// WrappedOnBecomeRelevant @ 146f044e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBTAuxiliaryNode::WrappedOnBecomeRelevant
          (UBTAuxiliaryNode *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  FString local_18;
  
  if (this->bNotifyBecomeRelevant != 0) {
    if ((this->_padding_ & 0x40000000000) != 0) {
      this = (UBTAuxiliaryNode *)UBTNode::GetNodeInstance((UBTNode *)this,param_1,param_2);
    }
    if (this != (UBTAuxiliaryNode *)0x0) {
      if (FVisualLogger::bIsRecording != 0) {
        UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)this);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)param_1,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                   L"OnBecomeRelevant: %s");
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(this->_padding_ + 0x300))(this,param_1,param_2);
    }
  }
  return;
}

// WrappedOnCeaseRelevant @ 146f045a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBTAuxiliaryNode::WrappedOnCeaseRelevant
          (UBTAuxiliaryNode *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  FString local_18;
  
  if (this->bNotifyCeaseRelevant != '\0') {
    if ((this->_padding_ & 0x40000000000) != 0) {
      this = (UBTAuxiliaryNode *)UBTNode::GetNodeInstance((UBTNode *)this,param_1,param_2);
    }
    if (this != (UBTAuxiliaryNode *)0x0) {
      if (FVisualLogger::bIsRecording != 0) {
        UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)this);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)param_1,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                   L"OnCeaseRelevant: %s");
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(this->_padding_ + 0x308))(this,param_1,param_2);
    }
  }
  return;
}

// WrappedTickNode @ 146f04980

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UBTAuxiliaryNode::WrappedTickNode
          (UBTAuxiliaryNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3,
          float *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ushort uVar4;
  UBTAuxiliaryNode *pUVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  FString local_48;
  FString local_38 [2];
  
  if (this->bNotifyTick == '\0') {
    if ((this->_padding_ & 0x40000000000) == 0) {
      return false;
    }
  }
  else {
    pUVar5 = this;
    if ((this->_padding_ & 0x40000000000) == 0) goto LAB_146f049d5;
  }
  pUVar5 = (UBTAuxiliaryNode *)UBTNode::GetNodeInstance((UBTNode *)this,param_1,param_2);
LAB_146f049d5:
  if (pUVar5 == (UBTAuxiliaryNode *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9141982728718122957>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTAuxiliaryNode.cpp"
                       ,0x33,"NodeOb");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else if (pUVar5->bNotifyTick != '\0') {
    if (pUVar5->bTickIntervals == '\0') {
      if (FVisualLogger::bIsRecording != 0) {
        UBehaviorTreeTypes::DescribeNodeHelper(local_38,(UBTNode *)this);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                   L"Ticking aux node: %s");
        if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(pUVar5->_padding_ + 0x310))(pUVar5,param_1,param_2,param_3);
      *param_4 = 0.0;
      return true;
    }
    uVar4 = (**(code **)(this->_padding_ + 0x2e8))(this);
    lVar6 = 0;
    if (uVar4 != 0) {
      lVar6 = (longlong)param_2 - ((ulonglong)(uVar4 + 3) & 0xfffffffffffffffc);
    }
    fVar7 = *(float *)(lVar6 + 4) - param_3;
    fVar8 = param_3 + *(float *)(lVar6 + 8);
    *(float *)(lVar6 + 4) = fVar7;
    *(float *)(lVar6 + 8) = fVar8;
    bVar2 = fVar7 <= 0.0;
    if (bVar2) {
      *(undefined8 *)(lVar6 + 4) = 0;
      if (FVisualLogger::bIsRecording != 0) {
        UBehaviorTreeTypes::DescribeNodeHelper(&local_48,(UBTNode *)this);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                   L"Ticking aux node: %s");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(pUVar5->_padding_ + 0x310))(pUVar5,param_1,param_2,fVar8);
    }
    if (*(float *)(lVar6 + 4) < *param_4) {
      *param_4 = *(float *)(lVar6 + 4);
      return bVar2;
    }
    return bVar2;
  }
  return false;
}

