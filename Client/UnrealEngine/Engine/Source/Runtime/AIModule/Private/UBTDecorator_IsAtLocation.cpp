// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146eac2c0

UClass * __cdecl UBTDecorator_IsAtLocation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_IsAtLocation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_IsAtLocation",
               &Z_Registration_Info_UClass_UBTDecorator_IsAtLocation.InnerSingleton,
               StaticRegisterNativesUBTDecorator_IsAtLocation,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_IsAtLocation>,
               InternalVTableHelperCtorCaller<UBTDecorator_IsAtLocation>,local_res8,
               UBTDecorator_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_IsAtLocation.InnerSingleton;
}

// UBTDecorator_IsAtLocation @ 146ec6b80

UBTDecorator_IsAtLocation * __thiscall
UBTDecorator_IsAtLocation::UBTDecorator_IsAtLocation
          (UBTDecorator_IsAtLocation *this,FVTableHelper *param_1)

{
  uint *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffe;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffff;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(&this->ParametrizedAcceptableRadius);
  (this->bUseNavAgentGoalLocation)._padding_ = 0;
  (this->bUseNavAgentGoalLocation).DefaultValue = false;
  *(undefined2 *)&(this->bUseNavAgentGoalLocation)._padding_ = 0xffff;
  (this->bPathFindingBasedTest)._padding_ = 0;
  (this->bPathFindingBasedTest).DefaultValue = false;
  *(undefined2 *)&(this->bPathFindingBasedTest)._padding_ = 0xffff;
  return this;
}

// UBTDecorator_IsAtLocation @ 146ec6c40

UBTDecorator_IsAtLocation * __thiscall
UBTDecorator_IsAtLocation::UBTDecorator_IsAtLocation
          (UBTDecorator_IsAtLocation *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res18 [2];
  FString local_38;
  undefined8 local_28;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  
  UBTDecorator_BlackboardBase::UBTDecorator_BlackboardBase
            ((UBTDecorator_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(&this->ParametrizedAcceptableRadius);
  (this->bUseNavAgentGoalLocation)._padding_ = 0;
  (this->bUseNavAgentGoalLocation).DefaultValue = false;
  *(undefined2 *)&(this->bUseNavAgentGoalLocation)._padding_ = 0xffff;
  (this->bPathFindingBasedTest)._padding_ = 0;
  *(undefined2 *)&(this->bPathFindingBasedTest)._padding_ = 0xffff;
  (this->bPathFindingBasedTest).DefaultValue = false;
  ::FString::FString(&local_38,"Is At Location");
  plVar1 = &this->_padding_;
  if ((FString *)plVar1 != &local_38) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_38.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_38.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->bUseParametrizedRadius = 0;
  local_28 = 0;
  uStack_20 = 0xffff;
  (this->bUseNavAgentGoalLocation)._padding_ = 0;
  (this->bUseNavAgentGoalLocation)._padding_ = CONCAT22(uStack_1e,0xffff);
  (this->bUseNavAgentGoalLocation).DefaultValue = true;
  *(undefined3 *)&(this->bUseNavAgentGoalLocation).field_0xd = uStack_1c._1_3_;
  uStack_1c = CONCAT31(uStack_1c._1_3_,1);
  this->AcceptableRadius = 50.0;
  this->GeometricDistanceType = Distance3D;
  (this->bPathFindingBasedTest)._padding_ = 0;
  (this->bPathFindingBasedTest)._padding_ = CONCAT22(uStack_1e,0xffff);
  (this->bPathFindingBasedTest).DefaultValue = true;
  *(undefined3 *)&(this->bPathFindingBasedTest).field_0xd = uStack_1c._1_3_;
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
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~UBTDecorator_IsAtLocation @ 146ecced0

void __thiscall
UBTDecorator_IsAtLocation::~UBTDecorator_IsAtLocation(UBTDecorator_IsAtLocation *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->ParametrizedAcceptableRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  UBTDecorator_BlackboardBase::~UBTDecorator_BlackboardBase((UBTDecorator_BlackboardBase *)this);
  return;
}

// CalculateRawConditionValue @ 146ed4f50

/* WARNING: Type propagation algorithm not settling */
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
UBTDecorator_IsAtLocation::CalculateRawConditionValue
          (UBTDecorator_IsAtLocation *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  UPathFollowingComponent *this_00;
  UBlackboardComponent *this_01;
  UObject *pUVar4;
  longlong lVar5;
  USceneComponent *pUVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  UClass *pUVar11;
  AActor *pAVar12;
  AActor *pAVar13;
  TVector<double>_u_0 *pTVar14;
  TVector<double>_u_0 *pTVar15;
  AActor *pAVar16;
  float fVar17;
  double dVar18;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  
  lVar3 = param_1->_padding_;
  if (lVar3 == 0) {
    return false;
  }
  this_00 = *(UPathFollowingComponent **)(lVar3 + 0x3b0);
  if (this_00 == (UPathFollowingComponent *)0x0) {
    return false;
  }
  this_01 = (UBlackboardComponent *)param_1->_padding_;
  fVar17 = this->AcceptableRadius;
  if (this->bUseParametrizedRadius != 0) {
    pUVar4 = *(UObject **)(lVar3 + 0x310);
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
LAB_146ed4fe1:
        if ((this->ParametrizedAcceptableRadius)._padding_ != 0) {
          pUVar4 = *(UObject **)(lVar3 + 0x310);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          FAIDataProviderValue::BindData
                    ((FAIDataProviderValue *)&this->ParametrizedAcceptableRadius,pUVar4,-1);
          fVar17 = FAIDataProviderFloatValue::GetValue(&this->ParametrizedAcceptableRadius);
        }
      }
    }
    else if (pUVar4 != (UObject *)0x0) goto LAB_146ed4fe1;
  }
  lVar5 = this->_padding_;
  pAVar16 = (AActor *)0x0;
  pAVar13 = pAVar16;
  if ((lVar5 != 0) && (pUVar11 = UBlackboardKeyType::StaticClass(), pUVar11 != (UClass *)0x0)) {
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar11->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      pAVar13 = (AActor *)this->_padding_;
    }
  }
  pAVar12 = (AActor *)UBlackboardKeyType_Object::StaticClass();
  if (pAVar13 != pAVar12) {
    lVar5 = this->_padding_;
    if ((lVar5 != 0) && (pUVar11 = UBlackboardKeyType::StaticClass(), pUVar11 != (UClass *)0x0)) {
      iVar1 = (int)pUVar11->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar11->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        pAVar16 = (AActor *)this->_padding_;
      }
    }
    pAVar13 = (AActor *)UBlackboardKeyType_Vector::StaticClass();
    if (pAVar16 != pAVar13) {
      return false;
    }
    uVar2 = (uint)this->_padding_;
    if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8))
    {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    UBlackboardComponent::GetValue<UBlackboardKeyType_Vector>
              (this_01,(TVector<double> *)&local_98._s_0,(FKey)(ushort)uVar2);
    if (local_98._s_0.X <= __real_c7efffffe0000000) {
      return false;
    }
    if (__real_47efffffe0000000 <= local_98._s_0.X) {
      return false;
    }
    if (local_98._s_0.Y <= __real_c7efffffe0000000) {
      return false;
    }
    if (__real_47efffffe0000000 <= local_98._s_0.Y) {
      return false;
    }
    if (local_98._s_0.Z <= __real_c7efffffe0000000) {
      return false;
    }
    if (__real_47efffffe0000000 <= local_98._s_0.Z) {
      return false;
    }
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      cVar10 = (this->bPathFindingBasedTest).DefaultValue;
    }
    else {
      cVar10 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                         ((UBlackboardComponent *)param_1->_padding_,
                          (FName *)&this->bPathFindingBasedTest,
                          (FKey *)&(this->bPathFindingBasedTest)._padding_,
                          &(this->bPathFindingBasedTest).DefaultValue);
    }
    if (cVar10 != '\0') {
      bVar8 = UPathFollowingComponent::HasReached
                        (this_00,(TVector<double> *)&local_98._s_0,OverlapAgent,fVar17);
      return bVar8;
    }
    pUVar4 = *(UObject **)(lVar3 + 0x310);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 == (UObject *)0x0) {
        return false;
      }
    }
    else {
      if (pUVar4 == (UObject *)0x0) {
        return false;
      }
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = *(UObject **)(lVar3 + 0x310);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    lVar3 = *(longlong *)(pUVar4 + 0xb);
    local_50._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_50._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_50._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_50._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_50._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar3 != 0) {
      local_50._0_4_ = *(undefined4 *)(lVar3 + 0x210);
      local_50._4_4_ = *(undefined4 *)(lVar3 + 0x214);
      local_50._8_4_ = *(undefined4 *)(lVar3 + 0x218);
      local_50._12_4_ = *(undefined4 *)(lVar3 + 0x21c);
      local_50._s_0.Z = *(double *)(lVar3 + 0x220);
    }
    pTVar15 = &local_98;
    pTVar14 = &local_50;
    goto LAB_146ed5405;
  }
  uVar2 = (uint)this->_padding_;
  if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pAVar13 = (AActor *)
            UBlackboardComponent::GetValue<UBlackboardKeyType_Object>(this_01,(FKey)(ushort)uVar2);
  if (pAVar13 == (AActor *)0x0) {
LAB_146ed50f1:
    pAVar13 = pAVar16;
  }
  else {
    pUVar11 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)(pAVar13->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar13->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar11->_padding_)) goto LAB_146ed50f1;
  }
  if (pAVar13 == (AActor *)0x0) {
    return false;
  }
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    cVar10 = (this->bPathFindingBasedTest).DefaultValue;
  }
  else {
    cVar10 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                       ((UBlackboardComponent *)param_1->_padding_,
                        (FName *)&this->bPathFindingBasedTest,
                        (FKey *)&(this->bPathFindingBasedTest)._padding_,
                        &(this->bPathFindingBasedTest).DefaultValue);
  }
  if (cVar10 != '\0') {
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      bVar8 = (this->bUseNavAgentGoalLocation).DefaultValue;
    }
    else {
      bVar8 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                        ((UBlackboardComponent *)param_1->_padding_,
                         (FName *)&this->bUseNavAgentGoalLocation,
                         (FKey *)&(this->bUseNavAgentGoalLocation)._padding_,
                         &(this->bUseNavAgentGoalLocation).DefaultValue);
    }
    bVar8 = UPathFollowingComponent::HasReached(this_00,pAVar13,OverlapAgentAndGoal,fVar17,bVar8);
    return bVar8;
  }
  pUVar4 = *(UObject **)(lVar3 + 0x310);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 == (UObject *)0x0) {
      return false;
    }
  }
  else {
    if (pUVar4 == (UObject *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable(pUVar4);
  }
  pUVar6 = (pAVar13->RootComponent).field0_0x0.DebugPtr;
  local_80._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_80._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_80._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_80._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_80._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pUVar6 != (USceneComponent *)0x0) {
    local_80._0_4_ = *(undefined4 *)(pUVar6->ComponentToWorld).Translation.XY.m128d_f64;
    local_80._4_4_ =
         *(undefined4 *)((longlong)(pUVar6->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    local_80._8_4_ = *(undefined4 *)((pUVar6->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    local_80._12_4_ =
         *(undefined4 *)((longlong)(pUVar6->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
    local_80._s_0.Z = (pUVar6->ComponentToWorld).Translation.ZW.m128d_f64[0];
  }
  pUVar4 = *(UObject **)(lVar3 + 0x310);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  lVar3 = *(longlong *)(pUVar4 + 0xb);
  local_68._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_68._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_68._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_68._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (lVar3 != 0) {
    local_68._0_4_ = *(undefined4 *)(lVar3 + 0x210);
    local_68._4_4_ = *(undefined4 *)(lVar3 + 0x214);
    local_68._8_4_ = *(undefined4 *)(lVar3 + 0x218);
    local_68._12_4_ = *(undefined4 *)(lVar3 + 0x21c);
    local_68._s_0.Z = *(double *)(lVar3 + 0x220);
  }
  pTVar15 = &local_80;
  pTVar14 = &local_68;
LAB_146ed5405:
  dVar18 = GetGeometricDistanceSquared
                     (this,(TVector<double> *)&pTVar14->_s_0,(TVector<double> *)&pTVar15->_s_0);
  return dVar18 < (double)(fVar17 * fVar17);
}

// GetGeometricDistanceSquared @ 146ee58a0

double __thiscall
UBTDecorator_IsAtLocation::GetGeometricDistanceSquared
          (UBTDecorator_IsAtLocation *this,TVector<double> *param_1,TVector<double> *param_2)

{
  FAIDistanceType FVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = __real_7fefffffffffffff;
  FVar1 = this->GeometricDistanceType;
  if (FVar1 == Distance3D) {
    dVar4 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar6 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    dVar5 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    return dVar4 * dVar4 + dVar6 * dVar6 + dVar5 * dVar5;
  }
  if (FVar1 == Distance2D) {
    dVar4 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar5 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    return dVar4 * dVar4 + dVar5 * dVar5;
  }
  if (FVar1 == DistanceZ) {
    dVar4 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    return dVar4 * dVar4;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Decorators\\BTDecorator_IsAtLocation.cpp"
                     ,0x31,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    dVar4 = (double)(*pcVar2)();
    return dVar4;
  }
  return dVar4;
}

// GetPrivateStaticClass @ 146ee7930

UClass * __cdecl UBTDecorator_IsAtLocation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_IsAtLocation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_IsAtLocation",
               &Z_Registration_Info_UClass_UBTDecorator_IsAtLocation.InnerSingleton,
               StaticRegisterNativesUBTDecorator_IsAtLocation,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_IsAtLocation>,
               InternalVTableHelperCtorCaller<UBTDecorator_IsAtLocation>,local_res8,
               UBTDecorator_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_IsAtLocation.InnerSingleton;
}

// GetStaticDescription @ 146eeba50

FString * __thiscall
UBTDecorator_IsAtLocation::GetStaticDescription
          (UBTDecorator_IsAtLocation *this,FString *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  UClass *pUVar7;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,"invalid");
  lVar2 = this->_padding_;
  pUVar7 = (UClass *)0x0;
  pUVar5 = pUVar7;
  if ((lVar2 != 0) && (pUVar4 = UBlackboardKeyType::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (UClass *)this->_padding_;
    }
  }
  pUVar4 = UBlackboardKeyType_Object::StaticClass();
  if (pUVar5 != pUVar4) {
    lVar2 = this->_padding_;
    if ((lVar2 != 0) && (pUVar5 = UBlackboardKeyType::StaticClass(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar7 = (UClass *)this->_padding_;
      }
    }
    pUVar5 = UBlackboardKeyType_Vector::StaticClass();
    if (pUVar7 != pUVar5) goto LAB_146eebb73;
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
LAB_146eebb73:
  UBTDecorator::GetStaticDescription((UBTDecorator *)this,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUBTDecorator_IsAtLocation @ 146f00bf0

void __cdecl UBTDecorator_IsAtLocation::StaticRegisterNativesUBTDecorator_IsAtLocation(void)

{
  return;
}

// __DefaultConstructor @ 146f08170

void __cdecl UBTDecorator_IsAtLocation::__DefaultConstructor(FObjectInitializer *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  UBTDecorator_BlackboardBase *this;
  FName *pFVar3;
  FName local_res8;
  FName local_res10;
  FString local_38;
  undefined8 local_28;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  
  this = (UBTDecorator_BlackboardBase *)param_1->Obj;
  if (this != (UBTDecorator_BlackboardBase *)0x0) {
    UBTDecorator_BlackboardBase::UBTDecorator_BlackboardBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
    FAIDataProviderFloatValue::FAIDataProviderFloatValue
              ((FAIDataProviderFloatValue *)&this[1]._padding_);
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    ::FString::FString(&local_38,"Is At Location");
    plVar1 = &this->_padding_;
    if ((FString *)plVar1 != &local_38) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)local_38.Data.AllocatorInstance.Data;
      *(int *)&this->_padding_ = local_38.Data.ArrayNum;
      *(int *)((longlong)&this->_padding_ + 4) = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    puVar2 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar2 = *puVar2 & 0xfffffffe;
    uStack_1c = CONCAT31(uStack_1c._1_3_,1);
    local_28 = 0;
    uStack_20 = 0xffff;
    this[1]._padding_ = 0;
    this[1]._padding_ = CONCAT44(uStack_1c,CONCAT22(uStack_1e,0xffff));
    uStack_1c = CONCAT31(uStack_1c._1_3_,1);
    *(undefined4 *)&this[1]._padding_ = 0x42480000;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = CONCAT44(uStack_1c,CONCAT22(uStack_1e,0xffff));
    local_res8 = (FName)Z_Construct_UClass_AActor_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pFVar3 = ::FName::FName(&local_res10,0xd,L"BlackboardKey",FNAME_Add);
    FBlackboardKeySelector::AddObjectFilter
              (&this->BlackboardKey,(UObject *)this,*pFVar3,(TSubclassOf<UObject>)&local_res8);
    pFVar3 = ::FName::FName(&local_res8,0xd,L"BlackboardKey",FNAME_Add);
    FBlackboardKeySelector::AddVectorFilter(&this->BlackboardKey,(UObject *)this,*pFVar3);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  }
  return;
}

