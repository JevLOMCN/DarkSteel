// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 41

// StaticClass @ 146eabe50

UClass * __cdecl UBTCompositeNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTCompositeNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTCompositeNode",
               &Z_Registration_Info_UClass_UBTCompositeNode.InnerSingleton,
               StaticRegisterNativesUBTCompositeNode,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTCompositeNode>,
               InternalVTableHelperCtorCaller<UBTCompositeNode>,local_res8,UBTNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTCompositeNode.InnerSingleton;
}

// UBTCompositeNode @ 146ec4ff0

UBTCompositeNode * __thiscall
UBTCompositeNode::UBTCompositeNode(UBTCompositeNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  (this->Services).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Services).ArrayNum = 0;
  (this->Services).ArrayMax = 0;
  return this;
}

// UBTCompositeNode @ 146ec5050

UBTCompositeNode * __thiscall
UBTCompositeNode::UBTCompositeNode(UBTCompositeNode *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  plVar2 = &this->_padding_;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  (this->Services).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Services).ArrayNum = 0;
  (this->Services).ArrayMax = 0;
  ::FString::FString(&local_18,"UnknownComposite");
  if ((FString *)plVar2 != &local_18) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->bApplyDecoratorScope = 0;
  this->bUseDecoratorsFailedActivationCheck = 0;
  this->bUseDecoratorsDeactivationCheck = 0;
  this->bUseDecoratorsActivationCheck = 0;
  this->bUseNodeDeactivationNotify = 0;
  this->bUseNodeActivationNotify = 0;
  this->bUseChildExecutionNotify = 0;
  return this;
}

// ~UBTCompositeNode @ 146ecc900

void __thiscall UBTCompositeNode::~UBTCompositeNode(UBTCompositeNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->Services).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FBTCompositeChild,int>
            ((FBTCompositeChild *)(this->Children).AllocatorInstance.Data,(this->Children).ArrayNum)
  ;
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UBTNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTNode::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanNotifyDecoratorsOnActivation @ 146ed5650

bool __thiscall
UBTCompositeNode::CanNotifyDecoratorsOnActivation
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,int param_2)

{
  return true;
}

// CanNotifyDecoratorsOnDeactivation @ 146ed5660

bool __thiscall
UBTCompositeNode::CanNotifyDecoratorsOnDeactivation
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,int param_2,Type *param_3)

{
  return true;
}

// CanNotifyDecoratorsOnFailedActivation @ 146ed56a0

bool __thiscall
UBTCompositeNode::CanNotifyDecoratorsOnFailedActivation
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,int param_2,Type *param_3)

{
  return true;
}

// CanPushSubtree @ 146ed56b0

bool __thiscall
UBTCompositeNode::CanPushSubtree
          (UBTCompositeNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,int param_3)

{
  return true;
}

// CleanupMemory @ 146ed5e90

void __thiscall
UBTCompositeNode::CleanupMemory
          (UBTCompositeNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// ConditionalNotifyChildExecution @ 146ed7e50

void __thiscall
UBTCompositeNode::ConditionalNotifyChildExecution
          (UBTCompositeNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,UBTNode *param_3,
          Type *param_4)

{
  UBTNode *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((this->bUseChildExecutionNotify != 0) && (uVar5 = 0, 0 < (this->Children).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Children).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar1 = *(UBTNode **)((this->Children).AllocatorInstance.Data + lVar6);
      if (pUVar1 == (UBTNode *)0x0) {
        bVar3 = param_3 == (UBTNode *)0x0;
      }
      else {
        bVar3 = pUVar1 == param_3;
      }
      if (bVar3) {
LAB_146ed7f78:
        (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2,uVar5,param_4);
        return;
      }
      uVar4 = 0;
      if ((int)uVar5 < (this->Children).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar1 = *(UBTNode **)((this->Children).AllocatorInstance.Data + lVar6 + 8);
      if (pUVar1 == (UBTNode *)0x0) {
        bVar3 = param_3 == (UBTNode *)0x0;
      }
      else {
        bVar3 = pUVar1 == param_3;
      }
      if (bVar3) goto LAB_146ed7f78;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x30;
    } while ((int)uVar5 < (this->Children).ArrayNum);
  }
  return;
}

// DescribeRuntimeValues @ 146edaea0

/* WARNING: Removing unreachable block (ram,0x000146edafa6) */
/* WARNING: Removing unreachable block (ram,0x000146edb0a0) */

void __thiscall
UBTCompositeNode::DescribeRuntimeValues
          (UBTCompositeNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_28;
  FString local_18;
  
  if (param_3 == Detailed) {
    ::FString::PrintfImpl(&local_28,L"current child: %d");
    pFVar4 = (param_4->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_4->ArrayMax * 0x10)) &&
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
    iVar3 = param_4->ArrayNum;
    if (iVar3 == param_4->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar3 + 1;
    pFVar4 = (param_4->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar4 = 0;
    *(FScriptContainerElement **)pFVar4 = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar4 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar4 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::PrintfImpl(&local_18,L"override child: %d");
    pFVar4 = (param_4->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_4->ArrayMax * 0x10)) &&
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
    iVar3 = param_4->ArrayNum;
    if (iVar3 == param_4->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar3 + 1;
    pFVar4 = (param_4->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar4 = 0;
    *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
    *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
    *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  }
  return;
}

// DoDecoratorsAllowExecution @ 146ede950

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UBTCompositeNode::DoDecoratorsAllowExecution
          (UBTCompositeNode *this,UBehaviorTreeComponent *param_1,int param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  UBTDecorator *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  UBTNode *pUVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  bool local_res8;
  bool local_res20 [8];
  undefined4 local_f8;
  TArray<FOperationStackInfo,TSizedDefaultAllocator<32>_> local_f0;
  uint local_e0;
  uint local_dc;
  uint local_d8 [2];
  FScriptContainerElement *local_d0;
  FString local_c8;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (((param_3 < 0) || ((this->Children).ArrayNum <= param_3)) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1646454341164334670>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTCompositeNode.cpp"
                         ,0x1b2,"Children.IsValidIndex(ChildIdx)"), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if ((param_3 < 0) || ((this->Children).ArrayNum <= param_3)) {
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_50,(UBTNode *)this);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Error,
                 L"%s: DoDecoratorsAllowExecution called with ChildIdx = %d which is not a valid child index"
                );
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  uVar12 = 0;
  uVar11 = 0;
  if (param_3 < (this->Children).ArrayNum) {
    uVar11 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_res8 = true;
  pFVar17 = (this->Children).AllocatorInstance.Data + (longlong)param_3 * 0x30;
  if (*(int *)(pFVar17 + 0x18) == 0) {
    local_res8 = true;
  }
  else {
    uVar11 = 0;
    if (param_2 < (param_1->InstanceStack).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    local_d0 = pFVar17;
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    local_b8 = (param_1->InstanceStack).AllocatorInstance.Data + (longlong)param_2 * 0x68;
    local_e0 = param_2 & 0xffff;
    if (((param_2 != local_e0) || (param_2 < 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if (*(int *)(pFVar17 + 0x28) == 0) {
      uVar16 = uVar12;
      if (0 < *(int *)(pFVar17 + 0x18)) {
        do {
          uVar14 = (uint)uVar12;
          uVar11 = 0;
          if ((int)uVar14 < *(int *)(pFVar17 + 0x18)) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pUVar3 = *(UBTDecorator **)(uVar16 + *(longlong *)(pFVar17 + 0x10));
          if (pUVar3 == (UBTDecorator *)0x0) {
            UBehaviorTreeComponent::StoreDebuggerSearchStep
                      (param_1,(UBTNode *)0x0,(ushort)local_e0,false);
            pUVar10 = GetChildNode(this,param_3);
LAB_146edecc8:
            if (FVisualLogger::bIsRecording != 0) {
              UBehaviorTreeTypes::DescribeNodeHelper(&local_80,(UBTNode *)pUVar3);
              UBehaviorTreeTypes::DescribeNodeHelper(&local_90,pUVar10);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                         L"Child[%d] \"%s\" execution forbidden by %s");
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
              if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_80.Data.AllocatorInstance.Data);
              }
            }
            return false;
          }
          lVar4 = *(longlong *)(local_b8 + 0x30);
          if ((*(int *)(local_b8 + 0x38) < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          bVar6 = UBTDecorator::WrappedCanExecute
                            (pUVar3,param_1,
                             (uchar *)((ulonglong)*(ushort *)((longlong)&pUVar3->_padding_ + 2) +
                                      lVar4));
          UBehaviorTreeComponent::StoreDebuggerSearchStep
                    (param_1,(UBTNode *)pUVar3,(ushort)local_e0,bVar6);
          pUVar10 = GetChildNode(this,param_3);
          if (!bVar6) goto LAB_146edecc8;
          if (FVisualLogger::bIsRecording != 0) {
            UBehaviorTreeTypes::DescribeNodeHelper(&local_a0,(UBTNode *)pUVar3);
            UBehaviorTreeTypes::DescribeNodeHelper(&local_b0,pUVar10);
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                       L"Child[%d] \"%s\" execution allowed by %s");
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
          }
          uVar12 = (ulonglong)(uVar14 + 1);
          uVar16 = uVar16 + 8;
          pFVar17 = local_d0;
        } while ((int)(uVar14 + 1) < *(int *)(local_d0 + 0x18));
      }
      local_res8 = true;
    }
    else {
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                   L"Child[%d] execution test with logic operations");
      }
      local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.ArrayNum = 0;
      local_f0.ArrayMax = 0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_dc = 0xffffffff;
      local_d8[0] = 0xffffffff;
      local_res20[0] = true;
      if (0 < *(int *)(pFVar17 + 0x28)) {
        local_d0 = (FScriptContainerElement *)0x0;
        uVar16 = uVar12;
        do {
          pFVar15 = local_d0;
          uVar14 = (uint)uVar16;
          uVar11 = 0;
          if ((int)uVar14 < *(int *)(pFVar17 + 0x28)) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            uVar12 = local_f0._8_8_ & 0xffffffff;
          }
          pFVar15 = pFVar15 + *(longlong *)(pFVar17 + 0x20);
          cVar1 = pFVar15->field_0x0;
          iVar9 = (int)uVar12;
          if (cVar1 == '\x01') {
            if (iVar9 == 0) {
              bVar13 = 0;
            }
            else {
              uVar11 = 0;
              if ((int)(iVar9 - 1U) < iVar9) {
                uVar11 = ~(iVar9 - 1U) >> 0x1f;
              }
              if (uVar11 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                iVar9 = local_f0.ArrayNum;
              }
              bVar13 = (byte)local_f0.AllocatorInstance.Data[(longlong)(iVar9 + -1) * 4 + 3] & 1;
            }
            if (iVar9 == 0) {
              bVar6 = false;
            }
            else {
              uVar11 = 0;
              if ((int)(iVar9 - 1U) < iVar9) {
                uVar11 = ~(iVar9 - 1U) >> 0x1f;
              }
              if (uVar11 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                iVar9 = local_f0.ArrayNum;
              }
              bVar6 = (bool)((byte)local_f0.AllocatorInstance.Data[(longlong)(iVar9 + -1) * 4 + 3]
                             >> 1 & 1);
            }
            if (local_res20[0] != false) {
              local_res20[0] = false;
              local_dc = (uint)*(ushort *)(pFVar15 + 2);
            }
            uVar2 = *(ushort *)(pFVar15 + 2);
            if ((*(int *)(pFVar17 + 0x18) <= (int)(uint)uVar2) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            pUVar3 = *(UBTDecorator **)(*(longlong *)(pFVar17 + 0x10) + (ulonglong)uVar2 * 8);
            if (bVar13 == 0) {
              lVar4 = *(longlong *)(local_b8 + 0x30);
              if ((*(int *)(local_b8 + 0x38) < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              bVar6 = UBTDecorator::WrappedCanExecute
                                (pUVar3,param_1,
                                 (uchar *)((ulonglong)*(ushort *)((longlong)&pUVar3->_padding_ + 2)
                                          + lVar4));
            }
            if (FVisualLogger::bIsRecording != 0) {
              UBehaviorTreeTypes::DescribeNodeHelper(&local_60,(UBTNode *)pUVar3);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                         L"%s%s %s: %s");
              if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60.Data.AllocatorInstance.Data);
              }
            }
            local_res8 = UpdateOperationStack
                                   (param_1,&local_c8,&local_f0,bVar6,(int *)local_d8,
                                    (int *)&local_dc,local_res20);
            if (local_f0.ArrayNum == 0) {
              if (FVisualLogger::bIsRecording != 0) {
                FVisualLogger::CategorizedLogfImpl
                          ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose
                           ,L"finished execution test: %s");
              }
              uVar11 = local_d8[0];
              if ((int)local_d8[0] < 0) {
                uVar11 = 0;
              }
              uVar14 = 0;
              if ((int)uVar11 < *(int *)(pFVar17 + 0x18)) {
                uVar14 = ~uVar11 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              UBehaviorTreeComponent::StoreDebuggerSearchStep
                        (param_1,*(UBTNode **)
                                  (*(longlong *)(pFVar17 + 0x10) + (longlong)(int)uVar11 * 8),
                         (ushort)local_e0,local_res8);
              break;
            }
LAB_146edf1f1:
            uVar12 = (ulonglong)(uint)local_f0.ArrayNum;
          }
          else if (cVar1 != '\0') {
            local_f8._0_3_ = CONCAT12(cVar1,*(undefined2 *)(pFVar15 + 2));
            local_f8 = CONCAT13(local_f8._3_1_,(undefined3)local_f8) & 0xfeffffff;
            if ((local_f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
               ((FScriptContainerElement *)&local_f8 <
                local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 4)) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              iVar9 = local_f0.ArrayNum;
            }
            if (iVar9 == local_f0.ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x204,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
            }
            local_f0.ArrayNum = iVar9 + 1;
            *(uint *)(local_f0.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_f8;
            ::FString::AppendChars(&local_c8,L"  ",2);
            if (FVisualLogger::bIsRecording != 0) {
              DescribeLogicOp(&local_70,(TEnumAsByte<EBTDecoratorLogic::Type> *)pFVar15);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                         L"%spushed %s:%d");
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
              goto LAB_146edf1f1;
            }
            uVar12 = local_f0._8_8_ & 0xffffffff;
          }
          uVar16 = (ulonglong)(uVar14 + 1);
          local_d0 = local_d0 + 4;
        } while ((int)(uVar14 + 1) < *(int *)(pFVar17 + 0x28));
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
      }
    }
  }
  return local_res8;
}

// FindChildToExecute @ 146ee3400

int __thiscall
UBTCompositeNode::FindChildToExecute
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,Type *param_2)

{
  bool bVar1;
  char cVar2;
  FBTCompositeMemory *pFVar3;
  int iVar4;
  
  pFVar3 = UBTNode::GetNodeMemory<FBTCompositeMemory>((UBTNode *)this,param_1);
  if ((this->Children).ArrayNum == 0) {
    return -2;
  }
  iVar4 = (int)pFVar3->CurrentChild;
  while (((iVar4 = GetNextChild(this,param_1,iVar4,*param_2), -1 < iVar4 &&
          (iVar4 < (this->Children).ArrayNum)) && (param_1->bPostponeSearch == 0))) {
    bVar1 = DoDecoratorsAllowExecution
                      (this,param_1->OwnerComp,(uint)param_1->OwnerComp->ActiveInstanceIdx,iVar4);
    if (bVar1) {
      OnChildActivation(this,param_1,iVar4);
      return iVar4;
    }
    *param_2 = Failed;
    if ((this->bUseDecoratorsFailedActivationCheck == 0) ||
       (cVar2 = (**(code **)(this->_padding_ + 0x338))(this,param_1,iVar4,param_2), cVar2 != '\0'))
    {
      NotifyDecoratorsOnFailedActivation(this,param_1,iVar4,param_2);
    }
  }
  return -2;
}

// GetBranchExecutionIndex @ 146ee4860

ushort __thiscall UBTCompositeNode::GetBranchExecutionIndex(UBTCompositeNode *this,ushort param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  UBTNode *pUVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar4 = (ushort)this->_padding_;
  uVar7 = 0;
  if ((this->Children).ArrayNum < 1) {
    return uVar4;
  }
  lVar11 = 0;
  do {
    pUVar6 = GetChildNode(this,uVar7);
    if (pUVar6 == (UBTNode *)0x0) {
      uVar10 = (uint)(ushort)(this->LastExecutionIndex + 1);
    }
    else {
      uVar10 = 0;
      if ((int)uVar7 < (this->Children).ArrayNum) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      iVar9 = *(int *)((this->Children).AllocatorInstance.Data + lVar11 + 0x18);
      uVar10 = 0;
      if ((int)uVar7 < (this->Children).ArrayNum) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + lVar11 + 8);
      if (lVar1 != 0) {
        iVar9 = iVar9 + *(int *)(lVar1 + 0x60);
      }
      uVar5 = (uint)pUVar6->ExecutionIndex - iVar9;
      uVar10 = uVar5 & 0xffff;
      if (((uVar5 != uVar10) || ((int)uVar5 < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    uVar8 = (ushort)uVar10;
    if (param_1 < uVar8) {
      return uVar4;
    }
    uVar7 = uVar7 + 1;
    lVar11 = lVar11 + 0x30;
    uVar4 = uVar8;
    if ((this->Children).ArrayNum <= (int)uVar7) {
      return uVar8;
    }
  } while( true );
}

// GetChildExecutionIndex @ 146ee4a00

ushort __thiscall
UBTCompositeNode::GetChildExecutionIndex(UBTCompositeNode *this,int param_1,EBTChildIndex param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  UBTNode *pUVar6;
  int iVar7;
  
  pUVar6 = GetChildNode(this,param_1);
  if (pUVar6 == (UBTNode *)0x0) {
    return this->LastExecutionIndex + 1;
  }
  iVar7 = 0;
  if (param_2 == FirstNode) {
    uVar5 = 0;
    if (param_1 < (this->Children).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    iVar7 = *(int *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 0x18);
    uVar5 = 0;
    if (param_1 < (this->Children).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 8);
    if (lVar1 != 0) {
      iVar7 = iVar7 + *(int *)(lVar1 + 0x60);
    }
  }
  uVar5 = (uint)pUVar6->ExecutionIndex - iVar7;
  if ((uVar5 != (uVar5 & 0xffff)) || ((int)uVar5 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (ushort)uVar5;
}

// GetChildIndex @ 146ee4b70

int __thiscall
UBTCompositeNode::GetChildIndex
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,UBTNode *param_2)

{
  UBTNode *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FBTCompositeMemory *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((param_2->ParentNode).field0_0x0.DebugPtr != this) {
    pFVar6 = UBTNode::GetNodeMemory<FBTCompositeMemory>((UBTNode *)this,param_1);
    return (int)pFVar6->CurrentChild;
  }
  uVar7 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Children).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pUVar1 = *(UBTNode **)((this->Children).AllocatorInstance.Data + lVar8);
      if (pUVar1 == (UBTNode *)0x0) {
        bVar3 = param_2 == (UBTNode *)0x0;
      }
      else {
        bVar3 = pUVar1 == param_2;
      }
      if (bVar3) {
        return uVar7;
      }
      uVar4 = 0;
      if ((int)uVar7 < (this->Children).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pUVar1 = *(UBTNode **)((this->Children).AllocatorInstance.Data + lVar8 + 8);
      if (pUVar1 == (UBTNode *)0x0) {
        bVar3 = param_2 == (UBTNode *)0x0;
      }
      else {
        bVar3 = pUVar1 == param_2;
      }
      if (bVar3) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x30;
    } while ((int)uVar7 < (this->Children).ArrayNum);
  }
  return -2;
}

// GetChildIndex @ 146ee4cc0

int __thiscall UBTCompositeNode::GetChildIndex(UBTCompositeNode *this,UBTNode *param_1)

{
  UBTNode *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Children).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pUVar1 = *(UBTNode **)((this->Children).AllocatorInstance.Data + lVar7);
      if (pUVar1 == (UBTNode *)0x0) {
        bVar3 = param_1 == (UBTNode *)0x0;
      }
      else {
        bVar3 = pUVar1 == param_1;
      }
      if (bVar3) {
        return uVar6;
      }
      uVar4 = 0;
      if ((int)uVar6 < (this->Children).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pUVar1 = *(UBTNode **)((this->Children).AllocatorInstance.Data + lVar7 + 8);
      if (pUVar1 == (UBTNode *)0x0) {
        bVar3 = param_1 == (UBTNode *)0x0;
      }
      else {
        bVar3 = pUVar1 == param_1;
      }
      if (bVar3) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x30;
    } while ((int)uVar6 < (this->Children).ArrayNum);
  }
  return -2;
}

// GetChildNode @ 146ee4e00

UBTNode * __thiscall UBTCompositeNode::GetChildNode(UBTCompositeNode *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UBTNode *pUVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_1;
  if ((-1 < param_1) && (param_1 < (this->Children).ArrayNum)) {
    uVar6 = (uint)~param_1 >> 0x1f;
    uVar4 = 0;
    if (param_1 < (this->Children).ArrayNum) {
      uVar4 = uVar6;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UBTNode *)(*pcVar2)();
        return pUVar5;
      }
    }
    iVar1 = (this->Children).ArrayNum;
    if (*(longlong *)((this->Children).AllocatorInstance.Data + lVar7 * 0x30) == 0) {
      uVar4 = 0;
      if (param_1 < iVar1) {
        uVar4 = uVar6;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UBTNode *)(*pcVar2)();
          return pUVar5;
        }
      }
      pUVar5 = *(UBTNode **)((this->Children).AllocatorInstance.Data + lVar7 * 0x30 + 8);
    }
    else {
      uVar4 = 0;
      if (param_1 < iVar1) {
        uVar4 = uVar6;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UBTNode *)(*pcVar2)();
          return pUVar5;
        }
      }
      pUVar5 = *(UBTNode **)((this->Children).AllocatorInstance.Data + lVar7 * 0x30);
    }
    return pUVar5;
  }
  return (UBTNode *)0x0;
}

// GetInstanceMemorySize @ 146ee59f0

ushort __thiscall UBTCompositeNode::GetInstanceMemorySize(UBTCompositeNode *this)

{
  return 2;
}

// GetMatchingChildIndex @ 146ee6310

int __thiscall
UBTCompositeNode::GetMatchingChildIndex(UBTCompositeNode *this,int param_1,FBTNodeIndex *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UBTNode *pUVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar8 = (this->Children).ArrayNum;
  iVar4 = iVar8 + -1;
  if (param_1 != (uint)param_2->InstanceIndex) {
    iVar8 = -2;
    if ((int)(uint)param_2->InstanceIndex <= param_1) {
      iVar8 = iVar4;
    }
    return iVar8;
  }
  if (param_2->ExecutionIndex < (ushort)this->_padding_) {
    return -2;
  }
  uVar7 = 0;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      pUVar6 = GetChildNode(this,uVar7);
      if (pUVar6 == (UBTNode *)0x0) {
        uVar9 = (uint)(ushort)(this->LastExecutionIndex + 1);
      }
      else {
        uVar9 = 0;
        if ((int)uVar7 < (this->Children).ArrayNum) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        iVar8 = *(int *)((this->Children).AllocatorInstance.Data + lVar10 + 0x18);
        uVar9 = 0;
        if ((int)uVar7 < (this->Children).ArrayNum) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + lVar10 + 8);
        if (lVar1 != 0) {
          iVar8 = iVar8 + *(int *)(lVar1 + 0x60);
        }
        uVar5 = (uint)pUVar6->ExecutionIndex - iVar8;
        uVar9 = uVar5 & 0xffff;
        if (((uVar5 != uVar9) || ((int)uVar5 < 0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
      }
      if (param_2->ExecutionIndex < (ushort)uVar9) {
        if (uVar7 != 0) {
          return uVar7 - 1;
        }
        return 0;
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 0x30;
    } while ((int)uVar7 < (this->Children).ArrayNum);
  }
  return iVar4;
}

// GetNextChild @ 146ee6530

int __thiscall
UBTCompositeNode::GetNextChild
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,int param_2,Type param_3)

{
  ushort uVar1;
  ushort uVar2;
  UBehaviorTreeComponent *pUVar3;
  int iVar4;
  FBTCompositeMemory *pFVar5;
  bool bVar6;
  
  pFVar5 = UBTNode::GetNodeMemory<FBTCompositeMemory>((UBTNode *)this,param_1);
  pUVar3 = param_1->OwnerComp;
  uVar1 = pUVar3->ActiveInstanceIdx;
  if (param_2 == -1) {
    uVar2 = (param_1->SearchStart).InstanceIndex;
    if (uVar2 != 0xffff) {
      bVar6 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar6 = (ushort)this->_padding_ < (param_1->SearchStart).ExecutionIndex;
      }
      if (bVar6) {
        iVar4 = GetMatchingChildIndex(this,(uint)uVar1,&param_1->SearchStart);
        return iVar4;
      }
    }
  }
  iVar4 = (int)pFVar5->OverrideChild;
  if ((pFVar5->OverrideChild == -1) ||
     (((pUVar3->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr != (UBTCompositeNode *)0x0 &&
      ((pUVar3->ExecutionRequest).bTryNextChild == 0)))) {
    iVar4 = (**(code **)(this->_padding_ + 0x340))(this,param_1,param_2,param_3);
  }
  else {
    pFVar5->OverrideChild = -1;
  }
  return iVar4;
}

// GetNextChildHandler @ 146ee65f0

int __thiscall
UBTCompositeNode::GetNextChildHandler
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,int param_2,Type param_3)

{
  return -2;
}

// GetPrivateStaticClass @ 146ee6df0

UClass * __cdecl UBTCompositeNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTCompositeNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTCompositeNode",
               &Z_Registration_Info_UClass_UBTCompositeNode.InnerSingleton,
               StaticRegisterNativesUBTCompositeNode,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTCompositeNode>,
               InternalVTableHelperCtorCaller<UBTCompositeNode>,local_res8,UBTNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTCompositeNode.InnerSingleton;
}

// InitializeComposite @ 146ef1b60

void __thiscall UBTCompositeNode::InitializeComposite(UBTCompositeNode *this,ushort param_1)

{
  this->LastExecutionIndex = param_1;
  return;
}

// InitializeMemory @ 146ef2a20

void __thiscall
UBTCompositeNode::InitializeMemory
          (UBTCompositeNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FName local_res8;
  FString local_18;
  
  if (param_3 == Initialize) {
    param_2[0] = '\0';
    param_2[1] = '\0';
  }
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 2) {
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

// NotifyChildExecution @ 146ef4320

void __thiscall
UBTCompositeNode::NotifyChildExecution
          (UBTCompositeNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,int param_3,
          Type *param_4)

{
  return;
}

// NotifyDecoratorsOnActivation @ 146ef4610

void __thiscall
UBTCompositeNode::NotifyDecoratorsOnActivation
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UBTAuxiliaryNode>_u_0 this_00;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  TObjectPtr<UBTAuxiliaryNode>_u_0 TVar7;
  TObjectPtr<UBTAuxiliaryNode>_u_0 *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_48;
  undefined8 local_40;
  ushort local_38;
  undefined1 local_36;
  byte local_35;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_30;
  undefined8 local_28;
  ushort local_20;
  undefined1 local_1e;
  byte local_1d;
  
  uVar10 = 0;
  uVar11 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Children).AllocatorInstance.Data;
  uVar12 = uVar10;
  if (0 < *(int *)(pFVar3 + (longlong)param_2 * 0x30 + 0x18)) {
    do {
      uVar9 = (uint)uVar10;
      uVar11 = 0;
      if ((int)uVar9 < *(int *)(pFVar3 + (longlong)param_2 * 0x30 + 0x18)) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (TObjectPtr<UBTAuxiliaryNode>_u_0)
                ((TObjectPtr<UBTAuxiliaryNode>_u_0 *)
                (uVar12 + *(longlong *)(pFVar3 + (longlong)param_2 * 0x30 + 0x10)))->DebugPtr;
      if ((this_00.DebugPtr[1]._padding_ & 8) != 0) {
        TVar7 = this_00;
        if ((*(byte *)((longlong)&(this_00.DebugPtr)->_padding_ + 5) & 4) != 0) {
          puVar6 = UBTNode::GetNodeMemory<unsigned_char>((UBTNode *)this_00.DebugPtr,param_1);
          TVar7.DebugPtr =
               (UBTAuxiliaryNode *)
               UBTNode::GetNodeInstance((UBTNode *)this_00.DebugPtr,param_1->OwnerComp,puVar6);
        }
        if (TVar7.DebugPtr != (UBTAuxiliaryNode *)0x0) {
          (**(code **)((TVar7.DebugPtr)->_padding_ + 0x318))(TVar7.DebugPtr,param_1);
        }
      }
      cVar1 = *(char *)((longlong)&this_00.DebugPtr[1]._padding_ + 4);
      if (cVar1 == '\x01') {
        uVar2 = param_1->OwnerComp->ActiveInstanceIdx;
        local_30 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
        }
        local_1d = local_1d & 0xfc;
        pTVar8 = &local_30;
        local_28 = 0;
        local_1e = 2;
        local_20 = uVar2;
LAB_146ef47c2:
        FBehaviorTreeSearchData::AddUniqueUpdate
                  (param_1,(FBehaviorTreeSearchUpdate *)&pTVar8->ObjectPtr);
      }
      else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        uVar2 = param_1->OwnerComp->ActiveInstanceIdx;
        local_48 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
        }
        local_35 = local_35 & 0xfc;
        pTVar8 = &local_48;
        local_40 = 0;
        local_36 = 1;
        local_38 = uVar2;
        goto LAB_146ef47c2;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar9 + 1) < *(int *)(pFVar3 + (longlong)param_2 * 0x30 + 0x18));
  }
  return;
}

// NotifyDecoratorsOnDeactivation @ 146ef4810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBTCompositeNode::NotifyDecoratorsOnDeactivation
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,int param_2,Type *param_3,
          bool param_4)

{
  char cVar1;
  ushort uVar2;
  Type TVar3;
  FScriptContainerElement *pFVar4;
  TObjectPtr<UBTAuxiliaryNode>_u_0 this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uchar *puVar8;
  UBTNode *this_01;
  TObjectPtr<UBTAuxiliaryNode>_u_0 TVar9;
  TObjectPtr<UBTAuxiliaryNode>_u_0 *pTVar10;
  longlong lVar11;
  uint uVar12;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_a8;
  undefined8 local_a0;
  ushort local_98;
  undefined1 local_96;
  byte local_95;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_90;
  undefined8 local_88;
  ushort local_80;
  undefined1 local_7e;
  byte local_7d;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_78;
  undefined8 local_70;
  ushort local_68;
  undefined1 local_66;
  byte local_65;
  FString local_60;
  FString local_50;
  FString local_40;
  
  uVar12 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar12 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->Children).AllocatorInstance.Data;
  if (*param_3 == Aborted) {
    uVar12 = 0;
    if (0 < *(int *)(pFVar4 + (longlong)param_2 * 0x30 + 0x18)) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar12 < *(int *)(pFVar4 + (longlong)param_2 * 0x30 + 0x18)) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TVar3 = *param_3;
        this_01 = *(UBTNode **)(lVar11 + *(longlong *)(pFVar4 + (longlong)param_2 * 0x30 + 0x10));
        if ((this_01[1]._padding_ & 0x10) != 0) {
          if (this_01->bCreateNodeInstance != '\0') {
            puVar8 = UBTNode::GetNodeMemory<unsigned_char>(this_01,param_1);
            this_01 = UBTNode::GetNodeInstance(this_01,param_1->OwnerComp,puVar8);
          }
          if (this_01 != (UBTNode *)0x0) {
            (**(code **)(this_01->_padding_ + 800))(this_01,param_1,TVar3);
          }
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar12 < *(int *)(pFVar4 + (longlong)param_2 * 0x30 + 0x18));
    }
  }
  else {
    uVar12 = 0;
    if (0 < *(int *)(pFVar4 + (longlong)param_2 * 0x30 + 0x18)) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar12 < *(int *)(pFVar4 + (longlong)param_2 * 0x30 + 0x18)) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = (TObjectPtr<UBTAuxiliaryNode>_u_0)
                  ((TObjectPtr<UBTAuxiliaryNode>_u_0 *)
                  (lVar11 + *(longlong *)(pFVar4 + (longlong)param_2 * 0x30 + 0x10)))->DebugPtr;
        if ((this_00.DebugPtr[1]._padding_ & 0x20) != 0) {
          TVar9 = this_00;
          if ((*(byte *)((longlong)&(this_00.DebugPtr)->_padding_ + 5) & 4) != 0) {
            puVar8 = UBTNode::GetNodeMemory<unsigned_char>((UBTNode *)this_00.DebugPtr,param_1);
            TVar9.DebugPtr =
                 (UBTAuxiliaryNode *)
                 UBTNode::GetNodeInstance((UBTNode *)this_00.DebugPtr,param_1->OwnerComp,puVar8);
          }
          if (TVar9.DebugPtr != (UBTAuxiliaryNode *)0x0) {
            (**(code **)((TVar9.DebugPtr)->_padding_ + 0x328))(TVar9.DebugPtr,param_1,param_3);
          }
        }
        TVar3 = *param_3;
        if ((this_00.DebugPtr[1]._padding_ & 0x10) != 0) {
          TVar9 = this_00;
          if ((*(byte *)((longlong)&(this_00.DebugPtr)->_padding_ + 5) & 4) != 0) {
            puVar8 = UBTNode::GetNodeMemory<unsigned_char>((UBTNode *)this_00.DebugPtr,param_1);
            TVar9.DebugPtr =
                 (UBTAuxiliaryNode *)
                 UBTNode::GetNodeInstance((UBTNode *)this_00.DebugPtr,param_1->OwnerComp,puVar8);
          }
          if (TVar9.DebugPtr != (UBTAuxiliaryNode *)0x0) {
            (**(code **)((TVar9.DebugPtr)->_padding_ + 800))(TVar9.DebugPtr,param_1,TVar3);
          }
        }
        if (param_4) {
          cVar1 = *(char *)((longlong)&this_00.DebugPtr[1]._padding_ + 4);
          if (cVar1 == '\x02') {
            if (FVisualLogger::bIsRecording != 0) {
              UBehaviorTreeTypes::DescribeNodeHelper(&local_50,(UBTNode *)this);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)param_1->OwnerComp->_padding_,
                         (FName *)&LogBehaviorTree.field_0x4,Verbose,
                         L"Removing out of scope decorator(%s) because of self abort type");
              if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_50.Data.AllocatorInstance.Data);
              }
            }
            uVar2 = param_1->OwnerComp->ActiveInstanceIdx;
            local_90 = this_00;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_00.DebugPtr != (UBTAuxiliaryNode *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
            }
            local_7d = local_7d & 0xfc;
            pTVar10 = &local_90;
            local_88 = 0;
            local_7e = 2;
            local_80 = uVar2;
            goto LAB_146ef4c3e;
          }
          if (cVar1 == '\x01') {
            if (FVisualLogger::bIsRecording != 0) {
              UBehaviorTreeTypes::DescribeNodeHelper(&local_40,(UBTNode *)this);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)param_1->OwnerComp->_padding_,
                         (FName *)&LogBehaviorTree.field_0x4,Verbose,
                         L"Reactivating decorator(%s) because of lower priority abort type");
              if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_40.Data.AllocatorInstance.Data);
              }
            }
            uVar2 = param_1->OwnerComp->ActiveInstanceIdx;
            local_78 = this_00;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_00.DebugPtr != (UBTAuxiliaryNode *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
            }
            local_65 = local_65 & 0xfc;
            pTVar10 = &local_78;
            local_70 = 0;
            local_66 = 1;
            local_68 = uVar2;
            goto LAB_146ef4c3e;
          }
        }
        else {
          if (FVisualLogger::bIsRecording != 0) {
            UBehaviorTreeTypes::DescribeNodeHelper(&local_60,(UBTNode *)this);
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)param_1->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,
                       Verbose,L"Removing decorator(%s) as request is not in active instance");
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
          }
          uVar2 = param_1->OwnerComp->ActiveInstanceIdx;
          local_a8 = this_00;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00.DebugPtr != (UBTAuxiliaryNode *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
          }
          local_95 = local_95 & 0xfc;
          pTVar10 = &local_a8;
          local_a0 = 0;
          local_96 = 2;
          local_98 = uVar2;
LAB_146ef4c3e:
          FBehaviorTreeSearchData::AddUniqueUpdate
                    (param_1,(FBehaviorTreeSearchUpdate *)&pTVar10->ObjectPtr);
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar12 < *(int *)(pFVar4 + (longlong)param_2 * 0x30 + 0x18));
    }
  }
  return;
}

// NotifyDecoratorsOnFailedActivation @ 146ef4c90

void __thiscall
UBTCompositeNode::NotifyDecoratorsOnFailedActivation
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,int param_2,Type *param_3)

{
  char cVar1;
  ushort uVar2;
  Type TVar3;
  FScriptContainerElement *pFVar4;
  TObjectPtr<UBTAuxiliaryNode>_u_0 this_00;
  UBehaviorTreeComponent *this_01;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uchar *puVar8;
  TObjectPtr<UBTAuxiliaryNode>_u_0 TVar9;
  UBTNode *pUVar10;
  longlong lVar11;
  uint uVar12;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_48;
  undefined8 local_40;
  ushort local_38;
  undefined1 local_36;
  byte local_35;
  
  uVar12 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar12 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar12 = 0;
  pFVar4 = (this->Children).AllocatorInstance.Data;
  uVar2 = param_1->OwnerComp->ActiveInstanceIdx;
  if (0 < *(int *)(pFVar4 + (longlong)param_2 * 0x30 + 0x18)) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < *(int *)(pFVar4 + (longlong)param_2 * 0x30 + 0x18)) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (TObjectPtr<UBTAuxiliaryNode>_u_0)
                ((TObjectPtr<UBTAuxiliaryNode>_u_0 *)
                (lVar11 + *(longlong *)(pFVar4 + (longlong)param_2 * 0x30 + 0x10)))->DebugPtr;
      if ((this_00.DebugPtr[1]._padding_ & 0x20) != 0) {
        TVar9 = this_00;
        if ((*(byte *)((longlong)&(this_00.DebugPtr)->_padding_ + 5) & 4) != 0) {
          puVar8 = UBTNode::GetNodeMemory<unsigned_char>((UBTNode *)this_00.DebugPtr,param_1);
          TVar9.DebugPtr =
               (UBTAuxiliaryNode *)
               UBTNode::GetNodeInstance((UBTNode *)this_00.DebugPtr,param_1->OwnerComp,puVar8);
        }
        if (TVar9.DebugPtr != (UBTAuxiliaryNode *)0x0) {
          (**(code **)((TVar9.DebugPtr)->_padding_ + 0x328))(TVar9.DebugPtr,param_1,param_3);
        }
      }
      cVar1 = *(char *)((longlong)&this_00.DebugPtr[1]._padding_ + 4);
      if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
        local_48 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
        }
        local_35 = local_35 & 0xfc;
        local_40 = 0;
        local_36 = 1;
        local_38 = uVar2;
        FBehaviorTreeSearchData::AddUniqueUpdate
                  (param_1,(FBehaviorTreeSearchUpdate *)&local_48.ObjectPtr);
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar12 < *(int *)(pFVar4 + (longlong)param_2 * 0x30 + 0x18));
  }
  this_01 = param_1->OwnerComp;
  TVar3 = *param_3;
  pUVar10 = GetChildNode(this,param_2);
  UBehaviorTreeComponent::StoreDebuggerSearchStep(this_01,pUVar10,uVar2,TVar3);
  return;
}

// NotifyNodeActivation @ 146ef4e70

void __thiscall
UBTCompositeNode::NotifyNodeActivation(UBTCompositeNode *this,FBehaviorTreeSearchData *param_1)

{
  return;
}

// NotifyNodeDeactivation @ 146ef4e80

void __thiscall
UBTCompositeNode::NotifyNodeDeactivation
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,Type *param_2)

{
  return;
}

// OnChildActivation @ 146ef7450

void __thiscall
UBTCompositeNode::OnChildActivation
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,UBTNode *param_2)

{
  int iVar1;
  
  iVar1 = GetChildIndex(this,param_1,param_2);
  OnChildActivation(this,param_1,iVar1);
  return;
}

// OnChildActivation @ 146ef7490

void __thiscall
UBTCompositeNode::OnChildActivation
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,int param_2)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  UBTNode *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FBTCompositeMemory *pFVar7;
  FBTCompositeMemory *pFVar8;
  uint uVar9;
  longlong lVar10;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_48;
  undefined8 local_40;
  ushort local_38;
  undefined1 local_36;
  byte local_35;
  
  uVar9 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  pFVar7 = UBTNode::GetNodeMemory<FBTCompositeMemory>((UBTNode *)this,param_1);
  if ((this->bUseDecoratorsActivationCheck == 0) ||
     (cVar5 = (**(code **)(this->_padding_ + 0x328))(this,param_1,param_2), cVar5 != '\0')) {
    NotifyDecoratorsOnActivation(this,param_1,param_2);
  }
  this_00 = *(UBTNode **)(pFVar2 + (longlong)param_2 * 0x30);
  if (this_00 != (UBTNode *)0x0) {
    pFVar8 = UBTNode::GetNodeMemory<FBTCompositeMemory>(this_00,param_1);
    pFVar8->CurrentChild = -1;
    pFVar8->OverrideChild = -1;
    if ((this_00[1]._padding_ & 4) != 0) {
      (**(code **)(this_00->_padding_ + 0x318))(this_00,param_1);
    }
    uVar9 = 0;
    if (0 < (int)this_00[1]._padding_) {
      lVar10 = 0;
      do {
        uVar1 = param_1->OwnerComp->ActiveInstanceIdx;
        uVar6 = 0;
        if ((int)uVar9 < (int)this_00[1]._padding_) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_48 = (TObjectPtr<UBTAuxiliaryNode>_u_0)
                   ((TObjectPtr<UBTAuxiliaryNode>_u_0 *)(lVar10 + this_00[1]._padding_))->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_48.DebugPtr != (UBTAuxiliaryNode *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
        }
        local_35 = local_35 & 0xfc;
        local_40 = 0;
        local_36 = 1;
        local_38 = uVar1;
        FBehaviorTreeSearchData::AddUniqueUpdate
                  (param_1,(FBehaviorTreeSearchUpdate *)&local_48.ObjectPtr);
        uVar6 = 0;
        if ((int)uVar9 < (int)this_00[1]._padding_) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UBTService::NotifyParentActivation(*(UBTService **)(this_00[1]._padding_ + lVar10),param_1);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar9 < (int)this_00[1]._padding_);
    }
  }
  if ((param_2 != (char)param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7->CurrentChild = (char)param_2;
  return;
}

// OnChildDeactivation @ 146ef7710

void __thiscall
UBTCompositeNode::OnChildDeactivation
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,UBTNode *param_2,Type *param_3,
          bool param_4)

{
  int iVar1;
  
  iVar1 = GetChildIndex(this,param_1,param_2);
  OnChildDeactivation(this,param_1,iVar1,param_3,param_4);
  return;
}

// OnChildDeactivation @ 146ef7760

void __thiscall
UBTCompositeNode::OnChildDeactivation
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,int param_2,Type *param_3,
          bool param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_48;
  undefined8 local_40;
  ushort local_38;
  undefined1 local_36;
  byte local_35;
  
  uVar6 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar9 = (this->Children).AllocatorInstance.Data + (longlong)param_2 * 0x30;
  lVar8 = *(longlong *)(pFVar9 + 8);
  if (lVar8 == 0) {
    if (*(UBTCompositeNode **)pFVar9 != (UBTCompositeNode *)0x0) {
      OnNodeDeactivation(*(UBTCompositeNode **)pFVar9,param_1,param_3);
    }
  }
  else {
    uVar6 = 0;
    if (0 < *(int *)(lVar8 + 0x60)) {
      lVar7 = 0;
      do {
        uVar1 = param_1->OwnerComp->ActiveInstanceIdx;
        uVar5 = 0;
        if ((int)uVar6 < *(int *)(lVar8 + 0x60)) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_48 = (TObjectPtr<UBTAuxiliaryNode>_u_0)
                   ((TObjectPtr<UBTAuxiliaryNode>_u_0 *)(lVar7 + *(longlong *)(lVar8 + 0x58)))->
                   DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_48.DebugPtr != (UBTAuxiliaryNode *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
        }
        local_35 = local_35 & 0xfc;
        local_40 = 0;
        local_36 = 2;
        local_38 = uVar1;
        FBehaviorTreeSearchData::AddUniqueUpdate
                  (param_1,(FBehaviorTreeSearchUpdate *)&local_48.ObjectPtr);
        lVar8 = *(longlong *)(pFVar9 + 8);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < *(int *)(lVar8 + 0x60));
    }
  }
  if ((this->bUseDecoratorsDeactivationCheck == 0) ||
     (cVar4 = (**(code **)(this->_padding_ + 0x330))(this,param_1,param_2,param_3), cVar4 != '\0'))
  {
    NotifyDecoratorsOnDeactivation(this,param_1,param_2,param_3,param_4);
  }
  return;
}

// OnNodeActivation @ 146ef81e0

void __thiscall
UBTCompositeNode::OnNodeActivation(UBTCompositeNode *this,FBehaviorTreeSearchData *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FBTCompositeMemory *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_38;
  undefined8 local_30;
  ushort local_28;
  undefined1 local_26;
  byte local_25;
  
  pFVar5 = UBTNode::GetNodeMemory<FBTCompositeMemory>((UBTNode *)this,param_1);
  pFVar5->CurrentChild = -1;
  pFVar5->OverrideChild = -1;
  if (this->bUseNodeActivationNotify != 0) {
    (**(code **)(this->_padding_ + 0x318))(this,param_1);
  }
  uVar7 = 0;
  uVar8 = uVar7;
  if (0 < (this->Services).ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar1 = param_1->OwnerComp->ActiveInstanceIdx;
      uVar4 = 0;
      if ((int)uVar6 < (this->Services).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_38 = (TObjectPtr<UBTAuxiliaryNode>_u_0)
                 ((TObjectPtr<UBTAuxiliaryNode>_u_0 *)
                 ((this->Services).AllocatorInstance.Data + uVar8))->DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_38.DebugPtr != (UBTAuxiliaryNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
      }
      local_25 = local_25 & 0xfc;
      local_30 = 0;
      local_26 = 1;
      local_28 = uVar1;
      FBehaviorTreeSearchData::AddUniqueUpdate
                (param_1,(FBehaviorTreeSearchUpdate *)&local_38.ObjectPtr);
      uVar4 = 0;
      if ((int)uVar6 < (this->Services).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UBTService::NotifyParentActivation
                (*(UBTService **)((this->Services).AllocatorInstance.Data + uVar8),param_1);
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 8;
    } while ((int)(uVar6 + 1) < (this->Services).ArrayNum);
  }
  return;
}

// OnNodeDeactivation @ 146ef8660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBTCompositeNode::OnNodeDeactivation
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,Type *param_2)

{
  int *piVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  UBTNode *pUVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  UBTNode *pUVar14;
  FBTNodeIndex local_res8 [2];
  FBTNodeIndex local_res20 [2];
  FString local_68;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_58;
  undefined8 local_50;
  ushort local_48;
  undefined1 local_46;
  byte local_45;
  
  if (this->bUseNodeDeactivationNotify != 0) {
    (**(code **)(this->_padding_ + 800))();
  }
  uVar9 = 0;
  uVar11 = uVar9;
  if (0 < (this->Services).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar2 = param_1->OwnerComp->ActiveInstanceIdx;
      uVar13 = 0;
      if ((int)uVar8 < (this->Services).ArrayNum) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_58 = (TObjectPtr<UBTAuxiliaryNode>_u_0)
                 ((TObjectPtr<UBTAuxiliaryNode>_u_0 *)
                 ((this->Services).AllocatorInstance.Data + uVar11))->DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_58.DebugPtr != (UBTAuxiliaryNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
      }
      local_45 = local_45 & 0xfc;
      local_50 = 0;
      local_46 = 2;
      local_48 = uVar2;
      FBehaviorTreeSearchData::AddUniqueUpdate
                (param_1,(FBehaviorTreeSearchUpdate *)&local_58.ObjectPtr);
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar8 + 1) < (this->Services).ArrayNum);
  }
  if (this->bApplyDecoratorScope != 0) {
    local_res8[0].ExecutionIndex = (ushort)this->_padding_;
    local_res8[0].InstanceIndex = param_1->OwnerComp->ActiveInstanceIdx;
    local_res20[0].ExecutionIndex = this->LastExecutionIndex;
    local_res20[0].InstanceIndex = local_res8[0].InstanceIndex;
    UBehaviorTreeComponent::UnregisterAuxNodesInRange(param_1->OwnerComp,local_res8,local_res20);
    uVar13 = (param_1->PendingUpdates).ArrayNum - 1;
    if (-1 < (int)uVar13) {
      lVar12 = (longlong)(int)uVar13 * 0x18;
      do {
        uVar10 = ~uVar13 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar13 < (param_1->PendingUpdates).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar6 = (param_1->PendingUpdates).AllocatorInstance.Data + lVar12;
        if (pFVar6[0x12] == (FScriptContainerElement)0x1) {
          pUVar14 = *(UBTNode **)pFVar6;
          pUVar5 = pUVar14;
          if (pUVar14 == (UBTNode *)0x0) {
            pUVar5 = *(UBTNode **)(pFVar6 + 8);
          }
          uVar2 = *(ushort *)(pFVar6 + 0x10);
          bVar4 = local_res8[0].InstanceIndex < uVar2;
          if (local_res8[0].InstanceIndex == uVar2) {
            bVar4 = local_res8[0].ExecutionIndex < pUVar5->ExecutionIndex;
          }
          if (bVar4) {
            bVar4 = uVar2 < local_res20[0].InstanceIndex;
            if (uVar2 == local_res20[0].InstanceIndex) {
              bVar4 = pUVar5->ExecutionIndex < local_res20[0].ExecutionIndex;
            }
            if (bVar4) {
              if (FVisualLogger::bIsRecording != 0) {
                if (pUVar14 == (UBTNode *)0x0) {
                  pUVar14 = *(UBTNode **)(pFVar6 + 8);
                }
                UBehaviorTreeTypes::DescribeNodeHelper(&local_68,pUVar14);
                FVisualLogger::CategorizedLogfImpl
                          ((UObject *)param_1->OwnerComp->_padding_,
                           (FName *)&LogBehaviorTree.field_0x4,Verbose,
                           L"Search node update[canceled]: %s");
                if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                }
              }
              uVar8 = 0;
              if ((int)uVar13 < (param_1->PendingUpdates).ArrayNum) {
                uVar8 = uVar10;
              }
              if ((uVar8 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar6 = (param_1->PendingUpdates).AllocatorInstance.Data + lVar12;
              iVar7 = (param_1->PendingUpdates).ArrayNum + ~uVar13;
              if (iVar7 != 0) {
                memmove(pFVar6,pFVar6 + 0x18,(longlong)iVar7 * 0x18);
              }
              piVar1 = &(param_1->PendingUpdates).ArrayNum;
              *piVar1 = *piVar1 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,&(param_1->PendingUpdates).AllocatorInstance,
                         (param_1->PendingUpdates).ArrayNum,&(param_1->PendingUpdates).ArrayMax);
            }
          }
        }
        lVar12 = lVar12 + -0x18;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
  }
  return;
}

// OnNodeRestart @ 146ef9210

void __thiscall
UBTCompositeNode::OnNodeRestart(UBTCompositeNode *this,FBehaviorTreeSearchData *param_1)

{
  FBTCompositeMemory *pFVar1;
  
  pFVar1 = UBTNode::GetNodeMemory<FBTCompositeMemory>((UBTNode *)this,param_1);
  pFVar1->CurrentChild = -1;
  pFVar1->OverrideChild = -1;
  return;
}

// RequestDelayedExecution @ 146efd980

void __thiscall
UBTCompositeNode::RequestDelayedExecution
          (UBTCompositeNode *this,UBehaviorTreeComponent *param_1,Type param_2)

{
  UBehaviorTreeComponent::RequestBranchEvaluation(param_1,param_2);
  return;
}

// SetChildOverride @ 146eff700

void __thiscall
UBTCompositeNode::SetChildOverride
          (UBTCompositeNode *this,FBehaviorTreeSearchData *param_1,schar param_2)

{
  FBTCompositeMemory *pFVar1;
  
  if (param_2 < '\0') {
    if (param_2 == -2) {
      pFVar1 = UBTNode::GetNodeMemory<FBTCompositeMemory>((UBTNode *)this,param_1);
      pFVar1->OverrideChild = -2;
    }
  }
  else if ((int)param_2 < (this->Children).ArrayNum) {
    pFVar1 = UBTNode::GetNodeMemory<FBTCompositeMemory>((UBTNode *)this,param_1);
    pFVar1->OverrideChild = param_2;
    return;
  }
  return;
}

// StaticRegisterNativesUBTCompositeNode @ 146f00ad0

void __cdecl UBTCompositeNode::StaticRegisterNativesUBTCompositeNode(void)

{
  return;
}

