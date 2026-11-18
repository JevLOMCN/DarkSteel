// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 13

// StaticClass @ 146eae3b0

UClass * __cdecl UBTService_DefaultFocus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTService_DefaultFocus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTService_DefaultFocus",
               &Z_Registration_Info_UClass_UBTService_DefaultFocus.InnerSingleton,
               StaticRegisterNativesUBTService_DefaultFocus,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTService_DefaultFocus>,
               InternalVTableHelperCtorCaller<UBTService_DefaultFocus>,local_res8,
               UBTService_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTService_DefaultFocus.InnerSingleton;
}

// UBTService_DefaultFocus @ 146ec8170

UBTService_DefaultFocus * __thiscall
UBTService_DefaultFocus::UBTService_DefaultFocus
          (UBTService_DefaultFocus *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res18 [2];
  FString local_18;
  
  UBTService_BlackboardBase::UBTService_BlackboardBase((UBTService_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::FString(&local_18,"Set default focus");
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
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffb;
  this->FocusPriority = '\0';
  local_res8 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar2 = ::FName::FName(local_res18,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar2,
             (TSubclassOf<UObject>)&local_res8);
  pFVar2 = ::FName::FName(&local_res8,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddVectorFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar2);
  return this;
}

// UBTService_DefaultFocus @ 146ec82a0

UBTService_DefaultFocus * __thiscall
UBTService_DefaultFocus::UBTService_DefaultFocus
          (UBTService_DefaultFocus *this,FVTableHelper *param_1)

{
  uint *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffff;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffe;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UBTService_DefaultFocus @ 146ecd340

void __thiscall UBTService_DefaultFocus::~UBTService_DefaultFocus(UBTService_DefaultFocus *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTService_BlackboardBase::~UBTService_BlackboardBase((UBTService_BlackboardBase *)this);
  return;
}

// CleanupMemory @ 146ed5f40

void __thiscall
UBTService_DefaultFocus::CleanupMemory
          (UBTService_DefaultFocus *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3
          )

{
  return;
}

// GetInstanceMemorySize @ 146ee5aa0

ushort __thiscall UBTService_DefaultFocus::GetInstanceMemorySize(UBTService_DefaultFocus *this)

{
  return 0x28;
}

// GetPrivateStaticClass @ 146ee83a0

UClass * __cdecl UBTService_DefaultFocus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTService_DefaultFocus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTService_DefaultFocus",
               &Z_Registration_Info_UClass_UBTService_DefaultFocus.InnerSingleton,
               StaticRegisterNativesUBTService_DefaultFocus,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTService_DefaultFocus>,
               InternalVTableHelperCtorCaller<UBTService_DefaultFocus>,local_res8,
               UBTService_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTService_DefaultFocus.InnerSingleton;
}

// GetStaticDescription @ 146eec510

FString * __thiscall
UBTService_DefaultFocus::GetStaticDescription
          (UBTService_DefaultFocus *this,FString *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,"invalid");
  lVar2 = this->_padding_;
  if ((lVar2 == 0) || (pUVar4 = UBlackboardKeyType::StaticClass(), pUVar4 == (UClass *)0x0)) {
LAB_146eec579:
    pUVar4 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_146eec579;
    pUVar4 = (UClass *)this->_padding_;
  }
  pUVar5 = UBlackboardKeyType_Object::StaticClass();
  if (pUVar4 != pUVar5) {
    lVar2 = this->_padding_;
    if ((lVar2 == 0) || (pUVar4 = UBlackboardKeyType::StaticClass(), pUVar4 == (UClass *)0x0)) {
LAB_146eec5c8:
      pUVar4 = (UClass *)0x0;
    }
    else {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_146eec5c8;
      pUVar4 = (UClass *)this->_padding_;
    }
    pUVar5 = UBlackboardKeyType_Vector::StaticClass();
    if (pUVar4 != pUVar5) goto LAB_146eec635;
  }
  pFVar6 = ::FName::ToString((FName *)&this->_padding_,&local_18);
  if (&local_28 != pFVar6) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_146eec635:
  ::FString::PrintfImpl(__return_storage_ptr__,L"Set default focus to %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeMemory @ 146ef2f20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBTService_DefaultFocus::InitializeMemory
          (UBTService_DefaultFocus *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3
          )

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
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x1c] = '\0';
    param_2[0x1d] = '\0';
    param_2[0x1e] = '\0';
    param_2[0x1f] = '\0';
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
  }
  UBTNode::CastInstanceNodeMemory<FBTFocusMemory>((UBTNode *)this,param_2);
  return;
}

// OnBecomeRelevant @ 146ef5fe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBTService_DefaultFocus::OnBecomeRelevant
          (UBTService_DefaultFocus *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  UBlackboardComponent *this_00;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  FBTFocusMemory *pFVar8;
  UClass *pUVar9;
  AActor *pAVar10;
  UClass *pUVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  UBTService_DefaultFocus *local_res10;
  undefined1 local_res20 [8];
  code *local_78 [4];
  FDelegateAllocation local_58;
  double local_48 [2];
  double local_38;
  
  pFVar8 = UBTNode::CastInstanceNodeMemory<FBTFocusMemory>((UBTNode *)this,param_2);
  if ((pFVar8 == (FBTFocusMemory *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MyMemory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Services\\BTService_DefaultFocus.cpp"
                         ,0x20,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar11 = (UClass *)0x0;
  pFVar8->FocusActorSet = (AActor *)0x0;
  uVar6 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  (pFVar8->FocusLocationSet).field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (pFVar8->FocusLocationSet).field0_0x0._s_0.Y = (double)uVar6;
  (pFVar8->FocusLocationSet).field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  pFVar8->bActorSet = false;
  plVar3 = (longlong *)param_1->_padding_;
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if ((plVar3 != (longlong *)0x0) && (this_00 != (UBlackboardComponent *)0x0)) {
    lVar4 = this->_padding_;
    if ((lVar4 != 0) && (pUVar9 = UBlackboardKeyType::StaticClass(), pUVar9 != (UClass *)0x0)) {
      iVar1 = (int)pUVar9->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        pUVar11 = (UClass *)this->_padding_;
      }
    }
    pUVar9 = UBlackboardKeyType_Object::StaticClass();
    uVar2 = (uint)this->_padding_;
    if (pUVar11 == pUVar9) {
      if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7
         )) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pAVar10 = (AActor *)
                UBlackboardComponent::GetValue<UBlackboardKeyType_Object>
                          (this_00,(FKey)(ushort)uVar2);
      if (pAVar10 != (AActor *)0x0) {
        pUVar11 = Z_Construct_UClass_AActor_NoRegister();
        iVar1 = (int)pUVar11->_padding_;
        if ((iVar1 <= *(int *)(pAVar10->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar10->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar11->_padding_)) {
          (**(code **)(*plVar3 + 0x930))(plVar3,pAVar10,this->FocusPriority);
          pFVar8->FocusActorSet = pAVar10;
          pFVar8->bActorSet = true;
        }
      }
    }
    else {
      if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7
         )) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UBlackboardComponent::GetValue<UBlackboardKeyType_Vector>
                (this_00,(TVector<double> *)local_78,(FKey)(ushort)uVar2);
      local_48[0] = (double)local_78[0];
      local_38 = (double)local_78[2];
      (**(code **)(*plVar3 + 0x928))(plVar3,local_48,this->FocusPriority);
      (pFVar8->FocusLocationSet).field0_0x0._s_0.X = (double)local_78[0];
      (pFVar8->FocusLocationSet).field0_0x0._s_0.Y =
           (double)CONCAT44(local_78[1]._4_4_,local_78[1]._0_4_);
      (pFVar8->FocusLocationSet).field0_0x0._s_0.Z = (double)local_78[2];
    }
    uVar2 = (uint)this->_padding_;
    if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_78[1]._0_4_ = 0;
    local_78[0] = OnBlackboardKeyValueChange;
    local_78[1]._4_4_ = local_58._12_4_;
    local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_58.DelegateSize = 0;
    puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_58);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar13 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar13;
      *puVar12 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTService_DefaultFocus____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar12[3] = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_res10);
      puVar12[4] = local_78[0];
      puVar12[5] = CONCAT44(local_78[1]._4_4_,local_78[1]._0_4_);
    }
    UBlackboardComponent::RegisterObserver
              (this_00,(FKey)(ushort)local_res20,(UObject *)(ulonglong)(ushort)uVar2,
               (TDelegate<EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *)this);
  }
  return;
}

// OnBlackboardKeyValueChange @ 146ef6940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EBlackboardNotificationResult __thiscall
UBTService_DefaultFocus::OnBlackboardKeyValueChange
          (UBTService_DefaultFocus *this,UBlackboardComponent *param_1,FKey param_2)

{
  UBehaviorTreeComponent *this_00;
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  UClass *pUVar6;
  uchar *puVar7;
  FBTFocusMemory *pFVar8;
  UClass *pUVar9;
  AActor *pAVar10;
  TVector<double>_u_0 local_58;
  double local_38;
  double dStack_30;
  double local_28;
  
  this_00 = (UBehaviorTreeComponent *)(param_1->BrainComp).field0_0x0.DebugPtr;
  if (this_00 != (UBehaviorTreeComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if (((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
         &pUVar6->_padding_)) &&
       (plVar1 = (longlong *)this_00->_padding_, plVar1 != (longlong *)0x0)) {
      iVar5 = UBehaviorTreeComponent::FindInstanceContainingNode(this_00,(UBTNode *)this);
      puVar7 = UBehaviorTreeComponent::GetNodeMemory(this_00,(UBTNode *)this,iVar5);
      pFVar8 = UBTNode::CastInstanceNodeMemory<FBTFocusMemory>((UBTNode *)this,puVar7);
      pUVar6 = (UClass *)0x0;
      pFVar8->FocusActorSet = (AActor *)0x0;
      uVar4 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
      (pFVar8->FocusLocationSet).field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
      (pFVar8->FocusLocationSet).field0_0x0._s_0.Y = (double)uVar4;
      (pFVar8->FocusLocationSet).field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
      pFVar8->bActorSet = false;
      (**(code **)(*plVar1 + 0x938))(plVar1,this->FocusPriority);
      lVar2 = this->_padding_;
      if ((lVar2 != 0) && (pUVar9 = UBlackboardKeyType::StaticClass(), pUVar9 != (UClass *)0x0)) {
        iVar5 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar5) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar9->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar6 = (UClass *)this->_padding_;
        }
      }
      pUVar9 = UBlackboardKeyType_Object::StaticClass();
      if (pUVar6 == pUVar9) {
        pAVar10 = (AActor *)
                  UBlackboardComponent::GetValue<UBlackboardKeyType_Object>(param_1,param_2);
        if (pAVar10 != (AActor *)0x0) {
          pUVar6 = Z_Construct_UClass_AActor_NoRegister();
          iVar5 = (int)pUVar6->_padding_;
          if ((iVar5 <= *(int *)(pAVar10->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar10->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
              &pUVar6->_padding_)) {
            (**(code **)(*plVar1 + 0x930))(plVar1,pAVar10,this->FocusPriority);
            pFVar8->FocusActorSet = pAVar10;
            pFVar8->bActorSet = true;
          }
        }
      }
      else {
        UBlackboardComponent::GetValue<UBlackboardKeyType_Vector>
                  (param_1,(TVector<double> *)&local_58._s_0,param_2);
        local_38 = local_58._s_0.X;
        dStack_30 = local_58._s_0.Y;
        local_28 = local_58._s_0.Z;
        (**(code **)(*plVar1 + 0x928))(plVar1,&local_38,this->FocusPriority);
        (pFVar8->FocusLocationSet).field0_0x0._s_0.X = local_58._s_0.X;
        (pFVar8->FocusLocationSet).field0_0x0._s_0.Y = local_58._s_0.Y;
        (pFVar8->FocusLocationSet).field0_0x0._s_0.Z = local_58._s_0.Z;
      }
    }
  }
  return ContinueObserving;
}

// OnCeaseRelevant @ 146ef7290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBTService_DefaultFocus::OnCeaseRelevant
          (UBTService_DefaultFocus *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  AAIController *this_00;
  code *pcVar1;
  bool bVar2;
  FBTFocusMemory *pFVar3;
  AActor *pAVar4;
  TVector<double> *pTVar5;
  TVector<double> local_28;
  
  pFVar3 = UBTNode::CastInstanceNodeMemory<FBTFocusMemory>((UBTNode *)this,param_2);
  if (pFVar3 == (FBTFocusMemory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MyMemory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Services\\BTService_DefaultFocus.cpp"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (AAIController *)param_1->_padding_;
  if (this_00 != (AAIController *)0x0) {
    if (pFVar3->bActorSet == false) {
      pTVar5 = AAIController::GetFocalPointForPriority(this_00,&local_28,this->FocusPriority);
      if ((((pTVar5->field0_0x0)._s_0.X == (pFVar3->FocusLocationSet).field0_0x0._s_0.X) &&
          ((pTVar5->field0_0x0)._s_0.Y == (pFVar3->FocusLocationSet).field0_0x0._s_0.Y)) &&
         ((pTVar5->field0_0x0)._s_0.Z == (pFVar3->FocusLocationSet).field0_0x0._s_0.Z)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    else {
      pAVar4 = AAIController::GetFocusActorForPriority(this_00,this->FocusPriority);
      bVar2 = pFVar3->FocusActorSet == pAVar4;
    }
    if (bVar2) {
      (**(code **)(this_00->_padding_ + 0x938))(this_00,this->FocusPriority);
    }
  }
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    UBlackboardComponent::UnregisterObserversFrom
              ((UBlackboardComponent *)param_1->_padding_,(UObject *)this);
  }
  return;
}

// StaticRegisterNativesUBTService_DefaultFocus @ 146f00d30

void __cdecl UBTService_DefaultFocus::StaticRegisterNativesUBTService_DefaultFocus(void)

{
  return;
}

