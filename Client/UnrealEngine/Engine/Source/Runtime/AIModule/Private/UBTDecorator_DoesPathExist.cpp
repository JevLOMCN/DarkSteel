// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146eadff0

UClass * __cdecl UBTDecorator_DoesPathExist::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_DoesPathExist.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_DoesPathExist",
               &Z_Registration_Info_UClass_UBTDecorator_DoesPathExist.InnerSingleton,
               StaticRegisterNativesUBTDecorator_DoesPathExist,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_DoesPathExist>,
               InternalVTableHelperCtorCaller<UBTDecorator_DoesPathExist>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_DoesPathExist.InnerSingleton;
}

// UBTDecorator_DoesPathExist @ 146ec65e0

UBTDecorator_DoesPathExist * __thiscall
UBTDecorator_DoesPathExist::UBTDecorator_DoesPathExist
          (UBTDecorator_DoesPathExist *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  UClass *pUVar2;
  
  UObject::UObject((UObject *)this,param_1);
  (this->BlackboardKeyA).bNoneIsAllowedValue = 0;
  (this->BlackboardKeyB).bNoneIsAllowedValue = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BlackboardKeyA).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKeyA).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKeyA).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKeyA).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKeyA).SelectedKeyName.Number = 0;
  (this->BlackboardKeyA).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlackboardKeyA).SelectedKeyID = 0xffff;
  (this->BlackboardKeyB).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKeyB).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKeyB).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKeyB).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKeyB).SelectedKeyName.Number = 0;
  (this->BlackboardKeyB).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlackboardKeyB).SelectedKeyID = 0xffff;
  (this->PathQueryType)._padding_ = 0;
  *(undefined2 *)&(this->PathQueryType)._padding_ = 0xffff;
  (this->PathQueryType).EnumType.field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->PathQueryType).DefaultValue = '\0';
  ::FString::FString(&(this->PathQueryType).NativeEnumTypeName,L"");
  (this->FilterClass)._padding_ = 0;
  *(undefined2 *)&(this->FilterClass)._padding_ = 0xffff;
  (this->FilterClass).DefaultValue.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar2 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
  (this->FilterClass).BaseClass.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// UBTDecorator_DoesPathExist @ 146ec66f0

UBTDecorator_DoesPathExist * __thiscall
UBTDecorator_DoesPathExist::UBTDecorator_DoesPathExist
          (UBTDecorator_DoesPathExist *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  FBlackboardKeySelector *this_00;
  FString *this_01;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  UClass *pUVar6;
  FName *pFVar7;
  UPackage *pUVar8;
  FName local_res8;
  FName local_res18 [2];
  FString local_78;
  longlong local_68;
  int local_60;
  uchar local_5c;
  UEnum *local_58;
  FString local_50;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  this_00 = &this->BlackboardKeyB;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf0;
  plVar2 = &this->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0xff;
  *plVar2 = 0;
  this_01 = &(this->PathQueryType).NativeEnumTypeName;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  lVar5 = this->_padding_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(uint *)&this->_padding_ = (uint)lVar5 & 0xffffff47 | 0x47;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->BlackboardKeyA).bNoneIsAllowedValue = 0;
  (this->BlackboardKeyB).bNoneIsAllowedValue = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->BlackboardKeyA).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKeyA).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKeyA).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKeyA).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKeyA).SelectedKeyName.Number = 0;
  (this->BlackboardKeyA).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlackboardKeyA).SelectedKeyID = 0xffff;
  (this_00->AllowedTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKeyB).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKeyB).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKeyB).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKeyB).SelectedKeyName.Number = 0;
  (this->BlackboardKeyB).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlackboardKeyB).SelectedKeyID = 0xffff;
  (this->PathQueryType)._padding_ = 0;
  *(undefined2 *)&(this->PathQueryType)._padding_ = 0xffff;
  (this->PathQueryType).EnumType.field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->PathQueryType).DefaultValue = '\0';
  ::FString::FString(this_01,L"");
  (this->FilterClass)._padding_ = 0;
  *(undefined2 *)&(this->FilterClass)._padding_ = 0xffff;
  (this->FilterClass).DefaultValue.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar6 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
  (this->FilterClass).BaseClass.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  ::FString::FString(&local_78,"Does path exist");
  if ((FString *)plVar2 != &local_78) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_78.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_78.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_res8 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar7 = ::FName::FName(local_res18,0xe,L"BlackboardKeyA",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            (&this->BlackboardKeyA,(UObject *)this,*pFVar7,(TSubclassOf<UObject>)&local_res8);
  pFVar7 = ::FName::FName(&local_res8,0xe,L"BlackboardKeyA",FNAME_Add);
  FBlackboardKeySelector::AddVectorFilter(&this->BlackboardKeyA,(UObject *)this,*pFVar7);
  local_res8 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar7 = ::FName::FName(local_res18,0xe,L"BlackboardKeyB",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            (this_00,(UObject *)this,*pFVar7,(TSubclassOf<UObject>)&local_res8);
  pFVar7 = ::FName::FName(&local_res8,0xe,L"BlackboardKeyB",FNAME_Add);
  FBlackboardKeySelector::AddVectorFilter(this_00,(UObject *)this,*pFVar7);
  lVar5 = this->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  local_68 = 0;
  *(uint *)&this->_padding_ = (uint)lVar5 & 0xfffffff9 | 1;
  (this->BlackboardKeyA).SelectedKeyName = FBlackboard::KeySelf;
  local_60 = CONCAT22(local_60._2_2_,0xffff);
  local_5c = '\x01';
  if (Z_Registration_Info_UEnum_EPathExistanceQueryType.OuterSingleton == (UEnum *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPathExistanceQueryType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPathExistanceQueryType,(UObject *)pUVar8,
                       L"EPathExistanceQueryType");
  }
  local_58 = Z_Registration_Info_UEnum_EPathExistanceQueryType.OuterSingleton;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_146ec69c3:
    if (local_58 != (UEnum *)0x0) {
      local_res8 = (FName)local_58->_padding_;
      ::FName::ToString(&local_res8,&local_50);
      goto LAB_146ec69ef;
    }
  }
  else if (Z_Registration_Info_UEnum_EPathExistanceQueryType.OuterSingleton != (UEnum *)0x0) {
    UE::GC::MarkAsReachable
              ((UObject *)Z_Registration_Info_UEnum_EPathExistanceQueryType.OuterSingleton);
    goto LAB_146ec69c3;
  }
  ::FString::FString(&local_50,L"None");
LAB_146ec69ef:
  (this->PathQueryType)._padding_ = local_68;
  (this->PathQueryType)._padding_ = local_60;
  (this->PathQueryType).DefaultValue = local_5c;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_58);
  }
  (this->PathQueryType).EnumType.field0_0x0.DebugPtr = local_58;
  if (this_01 != &local_50) {
    pFVar4 = (this_01->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this_01->Data).AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
    (this->PathQueryType).NativeEnumTypeName.Data.ArrayNum = local_50.Data.ArrayNum;
    (this->PathQueryType).NativeEnumTypeName.Data.ArrayMax = local_50.Data.ArrayMax;
    local_50.Data.ArrayNum = 0;
    local_50.Data.ArrayMax = 0;
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UBTDecorator_DoesPathExist @ 146eccdf0

void __thiscall
UBTDecorator_DoesPathExist::~UBTDecorator_DoesPathExist(UBTDecorator_DoesPathExist *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->PathQueryType).NativeEnumTypeName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BlackboardKeyB).AllowedTypes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BlackboardKeyA).AllowedTypes.AllocatorInstance.Data;
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

// CalculateRawConditionValue @ 146ed4b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBTDecorator_DoesPathExist::CalculateRawConditionValue
          (UBTDecorator_DoesPathExist *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  uint uVar1;
  int iVar2;
  UBlackboardComponent *this_00;
  UObject *pUVar3;
  _func___cdecl_bool_ANavigationData_ptr_TVector<double>_ptr_TVector<double>_ptr_TVector<double>_ptr_FNavigationRaycastAdditionalResults_ptr_TSharedPtr<FNavigationQueryFilter_const_,1>_UObject_ptr
  *p_Var4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uchar uVar10;
  bool bVar11;
  UWorld *pUVar12;
  UClass *pUVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ANavigationData *pAVar16;
  FPathFindingQuery *pFVar17;
  UNavigationSystemV1 *this_01;
  FNavigationRaycastAdditionalResults local_res10 [8];
  TObjectPtr<UClass>_u_0 local_res20;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_198;
  UBlackboardComponent *local_188;
  UClass *local_180;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_148;
  TSharedPtr<FNavigationPath,1> local_138;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_128;
  undefined1 local_118 [24];
  TVector<double> local_100;
  FPathFindingQuery local_e8;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 == (UBlackboardComponent *)0x0) {
    return false;
  }
  uVar1 = (this->BlackboardKeyA).SelectedKeyID;
  local_160._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_178._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_160._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_160._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_178._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_178._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_188 = this_00;
  if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  bVar7 = UBlackboardComponent::GetLocationFromEntry
                    (this_00,(FKey)(ushort)uVar1,(TVector<double> *)&local_160._s_0);
  uVar1 = (this->BlackboardKeyB).SelectedKeyID;
  if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  bVar9 = UBlackboardComponent::GetLocationFromEntry
                    (this_00,(FKey)(ushort)uVar1,(TVector<double> *)&local_178._s_0);
  bVar11 = false;
  pUVar12 = (UWorld *)param_1->_padding_;
  if ((pUVar12 == (UWorld *)0x0) &&
     (pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
     pUVar12 == (UWorld *)0x0)) {
    return false;
  }
  this_01 = (UNavigationSystemV1 *)(pUVar12->NavigationSystem).field0_0x0.DebugPtr;
  if (this_01 != (UNavigationSystemV1 *)0x0) {
    pUVar13 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar13->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar13->_padding_)) goto LAB_146ed4cbd;
  }
  this_01 = (UNavigationSystemV1 *)0x0;
LAB_146ed4cbd:
  if ((((this_01 != (UNavigationSystemV1 *)0x0) && (bVar7)) && (bVar9)) &&
     (pUVar3 = (UObject *)param_1->_padding_, pUVar3 != (UObject *)0x0)) {
    pcVar5 = *(code **)(*(longlong *)this_01 + 0x350);
    uVar14 = (**(code **)(*(longlong *)&pUVar3[0x11].field_0x18 + 0x18))
                       (&pUVar3[0x11].field_0x18,local_118);
    uVar15 = (**(code **)(*(longlong *)&pUVar3[0x11].field_0x18 + 0x10))(&pUVar3[0x11].field_0x18);
    pAVar16 = (ANavigationData *)
              (*pcVar5)(this_01,uVar15,uVar14,&UE::Math::TVector<double>::ZeroVector);
    if (pAVar16 != (ANavigationData *)0x0) {
      local_res20 = (this->FilterClass).DefaultValue.field0_0x0;
      local_180 = FBlackboard::GetValue<UBlackboardKeyType_Class>
                            (local_188,(FName *)&this->FilterClass,
                             (FKey *)&(this->FilterClass)._padding_,&local_res20.DebugPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_180 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_180);
      }
      UNavigationQueryFilter::GetQueryFilter
                (&local_198,pAVar16,pUVar3,(TSubclassOf<UNavigationQueryFilter>)&local_180);
      if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
        uVar10 = (this->PathQueryType).DefaultValue;
      }
      else {
        uVar10 = FBlackboard::GetValue<UBlackboardKeyType_Enum>
                           ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->PathQueryType
                            ,(FKey *)&(this->PathQueryType)._padding_,
                            &(this->PathQueryType).DefaultValue);
      }
      FVar6.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
      if (uVar10 == '\0') {
        local_res10[0].bIsRayEndInCorridor = false;
        if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((pAVar16->RaycastImplementationWithAdditionalResults ==
             (_func___cdecl_bool_ANavigationData_ptr_TVector<double>_ptr_TVector<double>_ptr_TVector<double>_ptr_FNavigationRaycastAdditionalResults_ptr_TSharedPtr<FNavigationQueryFilter_const_,1>_UObject_ptr
              *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RaycastImplementationWithAdditionalResults",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
                               ,0x37d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        p_Var4 = pAVar16->RaycastImplementationWithAdditionalResults;
        local_148.Object = local_198.Object;
        local_148.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
        if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar6.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar7 = (*p_Var4)(pAVar16,(TVector<double> *)&local_160._s_0,
                          (TVector<double> *)&local_178._s_0,&local_100,local_res10,&local_148,
                          (UObject *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar6.ReferenceController);
        if ((!bVar7) && (local_res10[0].bIsRayEndInCorridor != false)) {
          bVar11 = true;
        }
      }
      else {
        local_128.Object = local_198.Object;
        local_128.SharedReferenceCount.ReferenceController =
             local_198.SharedReferenceCount.ReferenceController;
        local_138.Object = (FNavigationPath *)0x0;
        local_138.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pFVar17 = FPathFindingQuery::FPathFindingQuery
                            (&local_e8,pUVar3,pAVar16,(TVector<double> *)&local_160._s_0,
                             (TVector<double> *)&local_178._s_0,&local_128,&local_138,
                             __real_7fefffffffffffff,true);
        bVar11 = UNavigationSystemV1::TestPathSync
                           (this_01,pFVar17,(uint)(uVar10 == '\x01'),(int *)0x0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
    }
  }
  return bVar11;
}

// GetPrivateStaticClass @ 146ee77b0

UClass * __cdecl UBTDecorator_DoesPathExist::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_DoesPathExist.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_DoesPathExist",
               &Z_Registration_Info_UClass_UBTDecorator_DoesPathExist.InnerSingleton,
               StaticRegisterNativesUBTDecorator_DoesPathExist,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_DoesPathExist>,
               InternalVTableHelperCtorCaller<UBTDecorator_DoesPathExist>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_DoesPathExist.InnerSingleton;
}

// GetStaticDescription @ 146eeb930

FString * __thiscall
UBTDecorator_DoesPathExist::GetStaticDescription
          (UBTDecorator_DoesPathExist *this,FString *__return_storage_ptr__)

{
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  FValueOrBBKey_Enum::ToString(&this->PathQueryType,&local_28);
  ::FName::ToString(&(this->BlackboardKeyB).SelectedKeyName,&local_38);
  ::FName::ToString(&(this->BlackboardKeyA).SelectedKeyName,&local_48);
  UBTDecorator::GetStaticDescription((UBTDecorator *)this,&local_58);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: Find path from %s to %s (mode:%s)");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeFromAsset @ 146ef1f90

void __thiscall
UBTDecorator_DoesPathExist::InitializeFromAsset
          (UBTDecorator_DoesPathExist *this,UBehaviorTree *param_1)

{
  undefined4 uVar1;
  UBlackboardData *pUVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = (longlong)param_1;
  uVar1 = *(undefined4 *)&this->field_0xb8;
  if (ZPULL(uVar1,0,1) != 0) {
    (this->BlackboardKeyA).SelectedKeyName = FBlackboard::KeySelf;
    *(uint *)&this->field_0xb8 = uVar1 & 0xfffffffe;
  }
  if (param_1 != (UBehaviorTree *)0x0) {
    pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UBlackboardData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if (pUVar2 != (UBlackboardData *)0x0) {
      FBlackboardKeySelector::ResolveSelectedKey(&this->BlackboardKeyA,pUVar2);
      FBlackboardKeySelector::ResolveSelectedKey(&this->BlackboardKeyB,pUVar2);
      return;
    }
  }
  (this->BlackboardKeyA).SelectedKeyID = 0xffff;
  (this->BlackboardKeyB).SelectedKeyID = 0xffff;
  return;
}

// StaticRegisterNativesUBTDecorator_DoesPathExist @ 146f00bd0

void __cdecl UBTDecorator_DoesPathExist::StaticRegisterNativesUBTDecorator_DoesPathExist(void)

{
  return;
}

