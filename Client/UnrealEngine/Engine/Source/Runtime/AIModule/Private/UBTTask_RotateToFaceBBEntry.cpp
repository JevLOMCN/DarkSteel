// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 16

// StaticClass @ 146eaea50

UClass * __cdecl UBTTask_RotateToFaceBBEntry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_RotateToFaceBBEntry",
               &Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry.InnerSingleton,
               StaticRegisterNativesUBTTask_RotateToFaceBBEntry,0xa8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UBTTask_RotateToFaceBBEntry>,
               InternalVTableHelperCtorCaller<UBTTask_RotateToFaceBBEntry>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry.InnerSingleton;
}

// UBTTask_RotateToFaceBBEntry @ 146ec9bf0

UBTTask_RotateToFaceBBEntry * __thiscall
UBTTask_RotateToFaceBBEntry::UBTTask_RotateToFaceBBEntry
          (UBTTask_RotateToFaceBBEntry *this,FVTableHelper *param_1)

{
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->Precision)._padding_ = 0;
  *(undefined2 *)&(this->Precision)._padding_ = 0xffff;
  (this->Precision).DefaultValue = 0.0;
  return this;
}

// UBTTask_RotateToFaceBBEntry @ 146ec9c40

UBTTask_RotateToFaceBBEntry * __thiscall
UBTTask_RotateToFaceBBEntry::UBTTask_RotateToFaceBBEntry
          (UBTTask_RotateToFaceBBEntry *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res18;
  FString local_18;
  
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Precision)._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined2 *)&(this->Precision)._padding_ = 0xffff;
  (this->Precision).DefaultValue = 10.0;
  ::FString::FString(&local_18,"Rotate to face BB entry");
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
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffb | 2;
  local_res8 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar2 = ::FName::FName(&local_res18,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar2,
             (TSubclassOf<UObject>)&local_res8);
  pFVar2 = ::FName::FName(&local_res8,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddVectorFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar2);
  pFVar2 = ::FName::FName(&local_res8,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddRotatorFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar2);
  return this;
}

// ~UBTTask_RotateToFaceBBEntry @ 146ecd6a0

void __thiscall
UBTTask_RotateToFaceBBEntry::~UBTTask_RotateToFaceBBEntry(UBTTask_RotateToFaceBBEntry *this)

{
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// AbortTask @ 146ed1930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_RotateToFaceBBEntry::AbortTask
          (UBTTask_RotateToFaceBBEntry *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  AAIController *this_00;
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  AActor *pAVar4;
  TVector<double> *pTVar5;
  TVector<double> local_28;
  
  this_00 = (AAIController *)param_1->_padding_;
  if (this_00 != (AAIController *)0x0) {
    if (param_2 == (uchar *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MyMemory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Tasks\\BTTask_RotateToFaceBBEntry.cpp"
                         ,0xa3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3 = (*pcVar1)();
        return TVar3;
      }
    }
    if (param_2[0x20] == '\0') {
      pTVar5 = AAIController::GetFocalPointForPriority(this_00,&local_28,'\x02');
      if ((((pTVar5->field0_0x0)._s_0.X == *(double *)(param_2 + 8)) &&
          ((pTVar5->field0_0x0)._s_0.Y == *(double *)(param_2 + 0x10))) &&
         ((pTVar5->field0_0x0)._s_0.Z == *(double *)(param_2 + 0x18))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    else {
      pAVar4 = AAIController::GetFocusActorForPriority(this_00,'\x02');
      bVar2 = *(AActor **)param_2 == pAVar4;
    }
    if (bVar2) {
      (**(code **)(this_00->_padding_ + 0x938))(this_00,2);
    }
  }
  return Aborted;
}

// CleanUp @ 146ed5b00

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
UBTTask_RotateToFaceBBEntry::CleanUp
          (UBTTask_RotateToFaceBBEntry *this,AAIController *param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  AActor *pAVar3;
  TVector<double> *pTVar4;
  TVector<double> local_28;
  
  if (param_2 == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MyMemory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Tasks\\BTTask_RotateToFaceBBEntry.cpp"
                       ,0xa3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2[0x20] == '\0') {
    pTVar4 = AAIController::GetFocalPointForPriority(param_1,&local_28,'\x02');
    if ((((pTVar4->field0_0x0)._s_0.X == *(double *)(param_2 + 8)) &&
        ((pTVar4->field0_0x0)._s_0.Y == *(double *)(param_2 + 0x10))) &&
       ((pTVar4->field0_0x0)._s_0.Z == *(double *)(param_2 + 0x18))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    pAVar3 = AAIController::GetFocusActorForPriority(param_1,'\x02');
    bVar2 = *(AActor **)param_2 == pAVar3;
  }
  if (bVar2) {
    (**(code **)(param_1->_padding_ + 0x938))(param_1,2);
  }
  return;
}

// CleanupMemory @ 146ed5f80

void __thiscall
UBTTask_RotateToFaceBBEntry::CleanupMemory
          (UBTTask_RotateToFaceBBEntry *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  return;
}

// DescribeRuntimeValues @ 146edc7b0

/* WARNING: Removing unreachable block (ram,0x000146edc8fa) */
/* WARNING: Removing unreachable block (ram,0x000146edce46) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBTTask_RotateToFaceBBEntry::DescribeRuntimeValues
          (UBTTask_RotateToFaceBBEntry *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  FScriptContainerElement *pFVar3;
  AAIController *this_00;
  UObject *pUVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  TVector<double>_u_0 *pTVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  undefined1 local_f8 [16];
  double local_e8;
  TVector<double>_u_0 local_e0;
  FString local_c8;
  FString local_b8;
  TVector<double>_u_0 local_a8;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  double local_68;
  TVector<double> local_60 [3];
  
  ::FName::ToString((FName *)&this->_padding_,&local_b8);
  UBehaviorTreeTypes::GetShortTypeName(&local_c8,(UObject *)this);
  ::FString::PrintfImpl(&local_138,L"%s: %s");
  pFVar3 = (param_4->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_138) &&
      ((FScriptContainerElement *)&local_138 < pFVar3 + (longlong)param_4->ArrayMax * 0x10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = param_4->ArrayNum;
  if (iVar9 == param_4->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  lVar11 = (longlong)iVar9;
  param_4->ArrayNum = iVar9 + 1;
  pFVar3 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar11 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar3 + lVar11 * 0x10) = local_138.Data.AllocatorInstance.Data;
  *(int *)(pFVar3 + lVar11 * 0x10 + 8) = local_138.Data.ArrayNum;
  *(int *)(pFVar3 + lVar11 * 0x10 + 0xc) = local_138.Data.ArrayMax;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  this_00 = (AAIController *)param_1->_padding_;
  if (this_00 != (AAIController *)0x0) {
    pUVar4 = (UObject *)this_00->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 == (UObject *)0x0) goto LAB_146edcd75;
      UE::GC::MarkAsReachable(pUVar4);
    }
    if (pUVar4 != (UObject *)0x0) {
      pUVar4 = (UObject *)this_00->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      if (*(USceneComponent **)(pUVar4 + 0xb) == (USceneComponent *)0x0) {
        pTVar10 = &local_a8;
        local_a8._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
        local_a8._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
        local_a8._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar10 = &USceneComponent::GetForwardVector(*(USceneComponent **)(pUVar4 + 0xb),local_60)->
                   field0_0x0;
      }
      dVar1 = (pTVar10->_s_0).Z;
      auVar2 = *(undefined1 (*) [16])&(pTVar10->_s_0).X;
      local_68 = dVar1;
      AAIController::GetFocalPointForPriority(this_00,(TVector<double> *)&local_e0._s_0,'\x02');
      uVar23 = SUB84(local_e0._s_0.Z,0);
      uVar24 = (undefined4)((ulonglong)local_e0._16_8_ >> 0x20);
      if (((local_e0._s_0.X == __real_47efffffe0000000) &&
          (local_e0._s_0.Y == __real_47efffffe0000000)) &&
         (local_e0._s_0.Z == __real_47efffffe0000000)) {
        ::FString::FString(&local_128,L"FocalPoint is an Invalid Location");
        pFVar3 = (param_4->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 < pFVar3 + (longlong)param_4->ArrayMax * 0x10))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = param_4->ArrayNum;
        if (iVar9 == param_4->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        lVar11 = (longlong)iVar9;
        param_4->ArrayNum = iVar9 + 1;
        pFVar3 = (param_4->AllocatorInstance).Data;
        *(undefined8 *)(pFVar3 + lVar11 * 0x10) = 0;
        *(FScriptContainerElement **)(pFVar3 + lVar11 * 0x10) =
             local_128.Data.AllocatorInstance.Data;
        local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar3 + lVar11 * 0x10 + 8) = local_128.Data.ArrayNum;
        *(int *)(pFVar3 + lVar11 * 0x10 + 0xc) = local_128.Data.ArrayMax;
        local_128.Data.ArrayNum = 0;
        local_128.Data.ArrayMax = 0;
        goto LAB_146edce41;
      }
      pUVar4 = (UObject *)this_00->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
        uVar23 = SUB84(local_e0._s_0.Z,0);
        uVar24 = (undefined4)((ulonglong)local_e0._16_8_ >> 0x20);
      }
      lVar11 = *(longlong *)(pUVar4 + 0xb);
      if (lVar11 == 0) {
        uVar12 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar14 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      else {
        local_90 = *(undefined4 *)(lVar11 + 0x210);
        uStack_8c = *(undefined4 *)(lVar11 + 0x214);
        uStack_88 = *(undefined4 *)(lVar11 + 0x218);
        uStack_84 = *(undefined4 *)(lVar11 + 0x21c);
        local_80 = *(undefined8 *)(lVar11 + 0x220);
        uVar12 = (undefined4)local_80;
        uVar14 = (undefined4)((ulonglong)local_80 >> 0x20);
        uVar16 = local_90;
        uVar17 = uStack_8c;
        uVar18 = uStack_88;
        uVar19 = uStack_84;
      }
      dVar22 = local_e0._s_0.X - (double)CONCAT44(uVar17,uVar16);
      local_e8 = (double)CONCAT44(uVar14,uVar12);
      dVar7 = (double)CONCAT44(uVar24,uVar23) - local_e8;
      uVar13 = auVar2._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar15 = auVar2._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar21 = local_e0._s_0.Y - (double)CONCAT44(uVar19,uVar18);
      dVar6 = __real_3ff0000000000000;
      if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar13) &&
            (double)CONCAT44(uVar15,uVar13) != __real_3f1a36e2e0000000) ||
          (uVar13 = auVar2._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar15 = auVar2._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar13) &&
          (double)CONCAT44(uVar15,uVar13) != __real_3f1a36e2e0000000)) ||
         (uVar13 = SUB84(local_68,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar15 = (uint)((ulonglong)local_68 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
         , __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar13) &&
           (double)CONCAT44(uVar15,uVar13) != __real_3f1a36e2e0000000)) {
        uVar13 = SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar15 = (uint)((ulonglong)dVar22 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((((double)CONCAT44(uVar15,uVar13) < __real_3f1a36e2e0000000 ||
              (double)CONCAT44(uVar15,uVar13) == __real_3f1a36e2e0000000) &&
            (uVar13 = SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar15 = (uint)((ulonglong)dVar21 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            (double)CONCAT44(uVar15,uVar13) < __real_3f1a36e2e0000000 ||
            (double)CONCAT44(uVar15,uVar13) == __real_3f1a36e2e0000000)) &&
           (uVar13 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar15 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar15,uVar13) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar15,uVar13) == __real_3f1a36e2e0000000)) goto LAB_146edcc7e;
        dVar6 = auVar2._0_8_;
        dVar7 = auVar2._8_8_;
        dVar20 = dVar7 * dVar7 + dVar6 * dVar6;
        if (__real_3e45798ee0000000 < dVar20) {
          dVar20 = __real_3ff0000000000000 / SQRT(dVar20);
          dVar6 = dVar6 * dVar20;
          dVar7 = dVar7 * dVar20;
        }
        dVar20 = dVar21 * dVar21 + dVar22 * dVar22;
        if (__real_3e45798ee0000000 < dVar20) {
          dVar20 = __real_3ff0000000000000 / SQRT(dVar20);
          dVar22 = dVar22 * dVar20;
          dVar21 = dVar21 * dVar20;
        }
        dVar6 = dVar6 * dVar22 + dVar7 * dVar21;
        dVar7 = __real_bff0000000000000;
        local_f8 = auVar2;
        local_e8 = dVar1;
        if (__real_bff0000000000000 <= dVar6) goto LAB_146edcc7e;
      }
      else {
LAB_146edcc7e:
        dVar7 = dVar6;
        if (__real_3ff0000000000000 <= dVar6) {
          dVar7 = __real_3ff0000000000000;
        }
      }
      acos(dVar7);
      ::FString::PrintfImpl(&local_118,L"Current angle: %.2f");
      pFVar3 = (param_4->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar3 + (longlong)param_4->ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = param_4->ArrayNum;
      if (iVar9 == param_4->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      lVar11 = (longlong)iVar9;
      param_4->ArrayNum = iVar9 + 1;
      pFVar3 = (param_4->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + lVar11 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar3 + lVar11 * 0x10) = local_118.Data.AllocatorInstance.Data;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar3 + lVar11 * 0x10 + 8) = local_118.Data.ArrayNum;
      *(int *)(pFVar3 + lVar11 * 0x10 + 0xc) = local_118.Data.ArrayMax;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      goto LAB_146edce41;
    }
  }
LAB_146edcd75:
  ::FString::FString(&local_108,L"Controller or Pawn is NULL");
  pFVar3 = (param_4->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 < pFVar3 + (longlong)param_4->ArrayMax * 0x10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = param_4->ArrayNum;
  if (iVar9 == param_4->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  lVar11 = (longlong)iVar9;
  param_4->ArrayNum = iVar9 + 1;
  pFVar3 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar11 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar3 + lVar11 * 0x10) = local_108.Data.AllocatorInstance.Data;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar3 + lVar11 * 0x10 + 8) = local_108.Data.ArrayNum;
  *(int *)(pFVar3 + lVar11 * 0x10 + 0xc) = local_108.Data.ArrayMax;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
LAB_146edce41:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// ExecuteTask @ 146ee15e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_RotateToFaceBBEntry::ExecuteTask
          (UBTTask_RotateToFaceBBEntry *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  longlong *plVar2;
  UObject *pUVar3;
  longlong lVar4;
  UBlackboardComponent *this_00;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  bool bVar12;
  Type TVar13;
  UClass *pUVar14;
  UClass *pUVar15;
  UObject *pUVar16;
  TVector<double>_u_0 *pTVar17;
  float fVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  double dVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  TRotator<double> local_2a8;
  double local_280;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_260;
  double local_238;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  undefined1 local_1a8 [16];
  double local_198;
  TVector<double>_u_0 local_188;
  undefined1 local_168 [16];
  double local_158;
  TVector<double> local_148;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  double local_108;
  TVector<double> local_f8;
  TVector<double> local_d8 [6];
  
  plVar2 = (longlong *)param_1->_padding_;
  if (plVar2 == (longlong *)0x0) {
    return Failed;
  }
  pUVar3 = (UObject *)plVar2[0x62];
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar3 == (UObject *)0x0) {
      return Failed;
    }
    UE::GC::MarkAsReachable(pUVar3);
  }
  else if (pUVar3 == (UObject *)0x0) {
    return Failed;
  }
  if ((param_2 == (uchar *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("MyMemory",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Tasks\\BTTask_RotateToFaceBBEntry.cpp"
                          ,0x2e,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    TVar13 = (*pcVar5)();
    return TVar13;
  }
  param_2[0] = '\0';
  uVar6 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  *(double *)(param_2 + 8) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  *(double *)(param_2 + 0x18) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  param_2[0x20] = '\0';
  fVar18 = GetPrecisionDot(this,param_1);
  pUVar3 = (UObject *)plVar2[0x62];
  TVar13 = Failed;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  lVar4 = *(longlong *)(pUVar3 + 0xb);
  if (lVar4 == 0) {
    uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar22 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    local_130 = *(undefined4 *)(lVar4 + 0x210);
    uStack_12c = *(undefined4 *)(lVar4 + 0x214);
    uStack_128 = *(undefined4 *)(lVar4 + 0x218);
    uStack_124 = *(undefined4 *)(lVar4 + 0x21c);
    local_120 = *(undefined8 *)(lVar4 + 0x220);
    uVar19 = (undefined4)local_120;
    uVar22 = (undefined4)((ulonglong)local_120 >> 0x20);
    uVar21 = local_130;
    uVar24 = uStack_12c;
    uVar34 = uStack_128;
    uVar35 = uStack_124;
  }
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  lVar4 = this->_padding_;
  local_280 = (double)CONCAT44(uVar22,uVar19);
  bVar12 = true;
  if ((lVar4 == 0) || (pUVar14 = UBlackboardKeyType::StaticClass(), pUVar14 == (UClass *)0x0)) {
LAB_146ee177b:
    pUVar14 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    if (!bVar12) goto LAB_146ee177b;
    pUVar14 = (UClass *)this->_padding_;
  }
  pUVar15 = UBlackboardKeyType_Object::StaticClass();
  if (pUVar14 == pUVar15) {
    uVar30 = (uint)this->_padding_;
    if (((uVar30 != (uVar30 & 0xffff)) || ((int)uVar30 < 0)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar12
       )) {
      pcVar5 = (code *)swi(3);
      TVar13 = (*pcVar5)();
      return TVar13;
    }
    pUVar16 = UBlackboardComponent::GetValue<UBlackboardKeyType_Object>
                        (this_00,(FKey)(ushort)uVar30);
    if (pUVar16 != (UObject *)0x0) {
      pUVar14 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar14->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar14->_padding_)) goto LAB_146ee181a;
    }
    pUVar16 = (UObject *)0x0;
LAB_146ee181a:
    if (pUVar16 != (UObject *)0x0) {
      lVar4 = *(longlong *)(pUVar16 + 0xb);
      if (lVar4 == 0) {
        uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar22 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      else {
        uVar19 = *(undefined4 *)(lVar4 + 0x220);
        uVar22 = *(undefined4 *)(lVar4 + 0x224);
        uVar29 = *(undefined4 *)(lVar4 + 0x210);
        uVar31 = *(undefined4 *)(lVar4 + 0x214);
        uVar32 = *(undefined4 *)(lVar4 + 0x218);
        uVar33 = *(undefined4 *)(lVar4 + 0x21c);
      }
      local_2c0._s_0.Z = (double)CONCAT44(uVar22,uVar19);
      dVar9 = (double)CONCAT44(uVar31,uVar29) - (double)CONCAT44(uVar24,uVar21);
      dVar27 = (double)CONCAT44(uVar33,uVar32) - (double)CONCAT44(uVar35,uVar34);
      uVar30 = SUB84(dVar27,0);
      uVar26 = (uint)((ulonglong)dVar27 >> 0x20);
      dVar27 = local_2c0._s_0.Z - local_280;
      local_108 = dVar27;
      if (*(USceneComponent **)(pUVar3 + 0xb) == (USceneComponent *)0x0) {
        pTVar17 = &local_228;
        local_228._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
        local_228._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
        local_228._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar17 = &USceneComponent::GetForwardVector(*(USceneComponent **)(pUVar3 + 0xb),local_d8)->
                   field0_0x0;
      }
      local_278._0_4_ = *(undefined4 *)&(pTVar17->_s_0).X;
      local_278._4_4_ = *(uint *)((longlong)&(pTVar17->_s_0).X + 4);
      local_278._8_4_ = *(undefined4 *)&(pTVar17->_s_0).Y;
      local_278._12_4_ = *(undefined4 *)((longlong)&(pTVar17->_s_0).Y + 4);
      local_278._s_0.Z = (pTVar17->_s_0).Z;
      if (((((double)CONCAT44(local_278._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_278._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
             __real_3f1a36e2e0000000 ||
             (double)CONCAT44(local_278._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_278._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
             __real_3f1a36e2e0000000) &&
           ((double)CONCAT44(local_278._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             local_278._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
            __real_3f1a36e2e0000000 ||
            (double)CONCAT44(local_278._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             local_278._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
            __real_3f1a36e2e0000000)) &&
          (uVar20 = SUB84(local_278._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar23 = (uint)((ulonglong)local_278._s_0.Z >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar23,uVar20) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar23,uVar20) == __real_3f1a36e2e0000000)) ||
         (((uVar20 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar23 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar23,uVar20) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar23,uVar20) == __real_3f1a36e2e0000000 &&
           (uVar20 = uVar30 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar23 = uVar26 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar23,uVar20) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar23,uVar20) == __real_3f1a36e2e0000000)) &&
          (uVar20 = SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar23 = (uint)((ulonglong)dVar27 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar23,uVar20) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar23,uVar20) == __real_3f1a36e2e0000000)))) {
        uVar21 = SUB84(__real_3ff0000000000000,0);
        uVar24 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      }
      else {
        local_208._8_4_ = uVar30;
        local_208._0_8_ = dVar9;
        local_208._12_4_ = uVar26;
        local_208._s_0.Z = local_108;
        dVar27 = UE::Math::TVector<double>::CosineAngle2D
                           ((TVector<double> *)&local_278._s_0,(TVector<double> *)&local_208._s_0);
        uVar21 = SUB84(dVar27,0);
        uVar24 = (undefined4)((ulonglong)dVar27 >> 0x20);
      }
      if ((double)CONCAT44(uVar24,uVar21) < (double)fVar18) {
        (**(code **)(*plVar2 + 0x930))(plVar2,pUVar16,2);
        param_2[0x20] = '\x01';
        TVar13 = InProgress;
        *(UObject **)param_2 = pUVar16;
      }
      else {
        TVar13 = Succeeded;
      }
    }
    return TVar13;
  }
  lVar4 = this->_padding_;
  if ((lVar4 == 0) || (pUVar14 = UBlackboardKeyType::StaticClass(), pUVar14 == (UClass *)0x0)) {
LAB_146ee19cd:
    pUVar14 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) goto LAB_146ee19cd;
    pUVar14 = (UClass *)this->_padding_;
  }
  pUVar15 = UBlackboardKeyType_Vector::StaticClass();
  if (pUVar14 == pUVar15) {
    uVar30 = (uint)this->_padding_;
    if (((uVar30 != (uVar30 & 0xffff)) || ((int)uVar30 < 0)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar12
       )) {
      pcVar5 = (code *)swi(3);
      TVar13 = (*pcVar5)();
      return TVar13;
    }
    UBlackboardComponent::GetValue<UBlackboardKeyType_Vector>
              (this_00,(TVector<double> *)&local_260._s_0,(FKey)(ushort)uVar30);
    if (local_260._s_0.X <= __real_c7efffffe0000000) {
      return Failed;
    }
    if (__real_47efffffe0000000 <= local_260._s_0.X) {
      return Failed;
    }
    uVar19 = (undefined4)((ulonglong)local_260._8_8_ >> 0x20);
    if (local_260._s_0.Y <= __real_c7efffffe0000000) {
      return Failed;
    }
    if (__real_47efffffe0000000 <= local_260._s_0.Y) {
      return Failed;
    }
    if (local_260._s_0.Z <= __real_c7efffffe0000000) {
      return Failed;
    }
    if (local_260._s_0.Z < __real_47efffffe0000000) {
      dVar9 = local_260._s_0.X - (double)CONCAT44(uVar24,uVar21);
      dVar27 = local_260._s_0.Y - (double)CONCAT44(uVar35,uVar34);
      uVar26 = SUB84(dVar27,0);
      uVar20 = (uint)((ulonglong)dVar27 >> 0x20);
      local_238 = local_260._s_0.Z - local_280;
      uVar30 = SUB84(local_238,0);
      uVar11 = (ulonglong)local_238 >> 0x20;
      if (*(USceneComponent **)(pUVar3 + 0xb) == (USceneComponent *)0x0) {
        pTVar17 = &local_1e8;
        local_1e8._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
        local_1e8._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
        local_1e8._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar17 = &USceneComponent::GetForwardVector(*(USceneComponent **)(pUVar3 + 0xb),&local_f8)
                   ->field0_0x0;
      }
      local_2c0._0_4_ = *(undefined4 *)&(pTVar17->_s_0).X;
      local_2c0._4_4_ = *(uint *)((longlong)&(pTVar17->_s_0).X + 4);
      local_2c0._8_4_ = *(undefined4 *)&(pTVar17->_s_0).Y;
      local_2c0._12_4_ = *(undefined4 *)((longlong)&(pTVar17->_s_0).Y + 4);
      local_2c0._s_0.Z = (pTVar17->_s_0).Z;
      if (((((double)CONCAT44(local_2c0._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_2c0._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
             __real_3f1a36e2e0000000 ||
             (double)CONCAT44(local_2c0._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_2c0._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
             __real_3f1a36e2e0000000) &&
           ((double)CONCAT44(local_2c0._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             local_2c0._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
            __real_3f1a36e2e0000000 ||
            (double)CONCAT44(local_2c0._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             local_2c0._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
            __real_3f1a36e2e0000000)) &&
          (uVar23 = SUB84(local_2c0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar25 = (uint)((ulonglong)local_2c0._s_0.Z >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar25,uVar23) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar25,uVar23) == __real_3f1a36e2e0000000)) ||
         (((uVar23 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar25 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar25,uVar23) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar25,uVar23) == __real_3f1a36e2e0000000 &&
           (uVar23 = uVar26 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar25 = uVar20 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar25,uVar23) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar25,uVar23) == __real_3f1a36e2e0000000)) &&
          (uVar30 = uVar30 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar23 = (uint)uVar11 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar23,uVar30) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar23,uVar30) == __real_3f1a36e2e0000000)))) {
        uVar21 = SUB84(__real_3ff0000000000000,0);
        uVar24 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      }
      else {
        local_1c8._8_4_ = uVar26;
        local_1c8._0_8_ = dVar9;
        local_1c8._12_4_ = uVar20;
        local_1c8._s_0.Z = local_238;
        dVar27 = UE::Math::TVector<double>::CosineAngle2D
                           ((TVector<double> *)&local_2c0._s_0,(TVector<double> *)&local_1c8._s_0);
        uVar21 = SUB84(dVar27,0);
        uVar24 = (undefined4)((ulonglong)dVar27 >> 0x20);
      }
      if ((double)fVar18 <= (double)CONCAT44(uVar24,uVar21)) {
        return Succeeded;
      }
      local_198 = local_260._s_0.Z;
      local_1a8._8_4_ = SUB84(local_260._s_0.Y,0);
      local_1a8._0_8_ = local_260._s_0.X;
      local_1a8._12_4_ = uVar19;
      (**(code **)(*plVar2 + 0x928))(plVar2,local_1a8,2);
      auVar7._8_4_ = SUB84(local_260._s_0.Y,0);
      auVar7._0_8_ = local_260._s_0.X;
      auVar7._12_4_ = uVar19;
      *(undefined1 (*) [16])(param_2 + 8) = auVar7;
      *(double *)(param_2 + 0x18) = local_260._s_0.Z;
      return InProgress;
    }
    return Failed;
  }
  lVar4 = this->_padding_;
  if ((lVar4 != 0) && (pUVar14 = UBlackboardKeyType::StaticClass(), pUVar14 != (UClass *)0x0)) {
    iVar1 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      pUVar14 = (UClass *)this->_padding_;
      goto LAB_146ee1c2f;
    }
  }
  pUVar14 = (UClass *)0x0;
LAB_146ee1c2f:
  pUVar15 = UBlackboardKeyType_Rotator::StaticClass();
  if (pUVar14 != pUVar15) {
    return Failed;
  }
  uVar30 = (uint)this->_padding_;
  if (((uVar30 != (uVar30 & 0xffff)) || ((int)uVar30 < 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar12))
  {
    pcVar5 = (code *)swi(3);
    TVar13 = (*pcVar5)();
    return TVar13;
  }
  UBlackboardComponent::GetValue<UBlackboardKeyType_Rotator>
            (this_00,&local_2a8,(FKey)(ushort)uVar30);
  if (((local_2a8.Pitch == FAISystem::InvalidRotation.Pitch) &&
      (local_2a8.Yaw == FAISystem::InvalidRotation.Yaw)) &&
     (local_2a8.Roll == FAISystem::InvalidRotation.Roll)) {
    return Failed;
  }
  UE::Math::TRotator<double>::Vector(&local_2a8,(TVector<double> *)&local_2d8._s_0);
  if (*(USceneComponent **)(pUVar3 + 0xb) == (USceneComponent *)0x0) {
    pTVar17 = &local_188;
    local_188._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_188._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    local_188._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar17 = &USceneComponent::GetForwardVector(*(USceneComponent **)(pUVar3 + 0xb),&local_148)->
               field0_0x0;
  }
  local_238 = (pTVar17->_s_0).Z;
  uVar30 = *(uint *)&(pTVar17->_s_0).X & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar26 = *(uint *)((longlong)&(pTVar17->_s_0).X + 4) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar27 = __real_3ff0000000000000;
  if ((((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar30) &&
         (double)CONCAT44(uVar26,uVar30) != __real_3f1a36e2e0000000) ||
       (uVar30 = *(uint *)&(pTVar17->_s_0).Y & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar26 = *(uint *)((longlong)&(pTVar17->_s_0).Y + 4) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar30) &&
       (double)CONCAT44(uVar26,uVar30) != __real_3f1a36e2e0000000)) ||
      (uVar30 = SUB84(local_238,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar26 = (uint)((ulonglong)local_238 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar30) &&
      (double)CONCAT44(uVar26,uVar30) != __real_3f1a36e2e0000000)) &&
     (((uVar30 = local_2d8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar26 = local_2d8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar30) &&
       (double)CONCAT44(uVar26,uVar30) != __real_3f1a36e2e0000000 ||
       (uVar30 = local_2d8._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar26 = local_2d8._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar30) &&
       (double)CONCAT44(uVar26,uVar30) != __real_3f1a36e2e0000000)) ||
      (uVar30 = SUB84(local_2d8._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar26 = (uint)((ulonglong)local_2d8._16_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar30) &&
      (double)CONCAT44(uVar26,uVar30) != __real_3f1a36e2e0000000)))) {
    dVar9 = (((TVector<double>_u_0 *)&(pTVar17->_s_0).X)->_s_0).X;
    dVar10 = (pTVar17->_s_0).Y;
    dVar27 = dVar10 * dVar10 + dVar9 * dVar9;
    if (__real_3e45798ee0000000 < dVar27) {
      dVar27 = __real_3ff0000000000000 / SQRT(dVar27);
      dVar9 = dVar9 * dVar27;
      dVar10 = dVar10 * dVar27;
    }
    dVar27 = local_2d8._s_0.Y * local_2d8._s_0.Y + local_2d8._s_0.X * local_2d8._s_0.X;
    uVar28 = local_2d8._s_0.Y;
    uVar6 = local_2d8._s_0.X;
    if (__real_3e45798ee0000000 < dVar27) {
      dVar27 = __real_3ff0000000000000 / SQRT(dVar27);
      uVar6 = local_2d8._s_0.X * dVar27;
      uVar28 = local_2d8._s_0.Y * dVar27;
    }
    dVar27 = (double)uVar28 * dVar10 + (double)uVar6 * dVar9 + 0.0;
  }
  if ((double)fVar18 <= dVar27) {
    return Succeeded;
  }
  dVar9 = local_2d8._s_0.X * __real_40c3880000000000 + (double)CONCAT44(uVar24,uVar21);
  dVar27 = local_2d8._s_0.Y * __real_40c3880000000000 + (double)CONCAT44(uVar35,uVar34);
  uVar21 = SUB84(dVar27,0);
  uVar24 = (undefined4)((ulonglong)dVar27 >> 0x20);
  dVar27 = local_2d8._s_0.Z * __real_40c3880000000000 + local_280;
  local_168._8_4_ = uVar21;
  local_168._0_8_ = dVar9;
  local_168._12_4_ = uVar24;
  local_158 = dVar27;
  (**(code **)(*plVar2 + 0x928))(plVar2,local_168,2);
  auVar8._8_4_ = uVar21;
  auVar8._0_8_ = dVar9;
  auVar8._12_4_ = uVar24;
  *(undefined1 (*) [16])(param_2 + 8) = auVar8;
  *(double *)(param_2 + 0x18) = dVar27;
  return InProgress;
}

// GetInstanceMemorySize @ 146ee5ae0

ushort __thiscall
UBTTask_RotateToFaceBBEntry::GetInstanceMemorySize(UBTTask_RotateToFaceBBEntry *this)

{
  return 0x28;
}

// GetPrecisionDot @ 146ee6cd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
UBTTask_RotateToFaceBBEntry::GetPrecisionDot
          (UBTTask_RotateToFaceBBEntry *this,UBehaviorTreeComponent *param_1)

{
  float fVar1;
  
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    fVar1 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->Precision,
                       (FKey *)&(this->Precision)._padding_,&(this->Precision).DefaultValue);
    fVar1 = cosf(fVar1 * __real_3c8efa35);
    return fVar1;
  }
  fVar1 = cosf((this->Precision).DefaultValue * __real_3c8efa35);
  return fVar1;
}

// GetPrivateStaticClass @ 146ee8ca0

UClass * __cdecl UBTTask_RotateToFaceBBEntry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_RotateToFaceBBEntry",
               &Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry.InnerSingleton,
               StaticRegisterNativesUBTTask_RotateToFaceBBEntry,0xa8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UBTTask_RotateToFaceBBEntry>,
               InternalVTableHelperCtorCaller<UBTTask_RotateToFaceBBEntry>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_RotateToFaceBBEntry.InnerSingleton;
}

// GetStaticDescription @ 146eecf20

FString * __thiscall
UBTTask_RotateToFaceBBEntry::GetStaticDescription
          (UBTTask_RotateToFaceBBEntry *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  ::FName::ToString((FName *)&this->_padding_,&local_18);
  UBehaviorTreeTypes::GetShortTypeName(&local_28,(UObject *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeMemory @ 146ef3020

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
UBTTask_RotateToFaceBBEntry::InitializeMemory
          (UBTTask_RotateToFaceBBEntry *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

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

// StaticRegisterNativesUBTTask_RotateToFaceBBEntry @ 146f00e20

void __cdecl UBTTask_RotateToFaceBBEntry::StaticRegisterNativesUBTTask_RotateToFaceBBEntry(void)

{
  return;
}

// TickTask @ 146f02280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBTTask_RotateToFaceBBEntry::TickTask
          (UBTTask_RotateToFaceBBEntry *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          float param_3)

{
  undefined1 auVar1 [16];
  AAIController *this_00;
  UObject *pUVar2;
  longlong lVar3;
  double dVar4;
  TVector<double>_u_0 *pTVar5;
  UBTTaskNode *pUVar6;
  Type TVar7;
  undefined4 uVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TVector<double> local_68 [3];
  
  this_00 = (AAIController *)param_1->_padding_;
  if (this_00 == (AAIController *)0x0) {
LAB_146f025a2:
    pUVar6 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(param_1,(UBTNode *)this);
    UBehaviorTreeComponent::OnTaskFinished(param_1,pUVar6,Failed);
  }
  else {
    pUVar2 = (UObject *)this_00->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar2 == (UObject *)0x0) goto LAB_146f025a2;
      UE::GC::MarkAsReachable(pUVar2);
    }
    else if (pUVar2 == (UObject *)0x0) goto LAB_146f025a2;
    pUVar2 = (UObject *)this_00->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if (*(USceneComponent **)(pUVar2 + 0xb) == (USceneComponent *)0x0) {
      pTVar5 = &local_80;
      local_80._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      local_80._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      local_80._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    }
    else {
      pTVar5 = &USceneComponent::GetForwardVector(*(USceneComponent **)(pUVar2 + 0xb),local_68)->
                field0_0x0;
    }
    local_68[0].field0_0x0._16_8_ = *(undefined8 *)*(undefined1 (*) [16])((longlong)pTVar5 + 0x10);
    auVar1 = *(undefined1 (*) [16])pTVar5;
    AAIController::GetFocalPointForPriority(this_00,(TVector<double> *)&local_98._s_0,'\x02');
    if (((local_98._s_0.X == __real_47efffffe0000000) &&
        (local_98._s_0.Y == __real_47efffffe0000000)) &&
       (local_98._s_0.Z == __real_47efffffe0000000)) {
      CleanUp(this,this_00,param_2);
      pUVar6 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(param_1,(UBTNode *)this);
      TVar7 = Failed;
    }
    else {
      pUVar2 = (UObject *)this_00->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      lVar3 = *(longlong *)(pUVar2 + 0xb);
      if (lVar3 == 0) {
        uVar8 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar11 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      else {
        uVar8 = *(undefined4 *)(lVar3 + 0x220);
        uVar11 = *(undefined4 *)(lVar3 + 0x224);
        uVar13 = *(double *)(lVar3 + 0x210);
        uVar15 = *(double *)(lVar3 + 0x218);
      }
      dVar18 = local_98._s_0.X - (double)uVar13;
      local_80._s_0.Z = (double)CONCAT44(uVar11,uVar8);
      uVar9 = auVar1._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar12 = auVar1._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar17 = local_98._s_0.Y - (double)uVar15;
      dVar16 = auVar1._8_8_;
      dVar4 = __real_3ff0000000000000;
      if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar9) &&
            (double)CONCAT44(uVar12,uVar9) != __real_3f1a36e2e0000000) ||
          (uVar9 = auVar1._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar12 = auVar1._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar9) &&
          (double)CONCAT44(uVar12,uVar9) != __real_3f1a36e2e0000000)) ||
         (uVar9 = (uint)local_68[0].field0_0x0._s_0.Z & (uint)__xmm_7fffffffffffffff7fffffffffffffff
         , uVar12 = (uint)((ulonglong)local_68[0].field0_0x0._16_8_ >> 0x20) &
                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar9) &&
         (double)CONCAT44(uVar12,uVar9) != __real_3f1a36e2e0000000)) {
        uVar9 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar12 = (uint)((ulonglong)dVar18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar9) &&
              (double)CONCAT44(uVar12,uVar9) != __real_3f1a36e2e0000000) ||
            (uVar9 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar12 = (uint)((ulonglong)dVar17 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar9) &&
            (double)CONCAT44(uVar12,uVar9) != __real_3f1a36e2e0000000)) ||
           (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)(local_98._s_0.Z - local_80._s_0.Z) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_98._s_0.Z - local_80._s_0.Z,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
          dVar4 = auVar1._0_8_;
          dVar14 = dVar16 * dVar16 + dVar4 * dVar4;
          if (__real_3e45798ee0000000 < dVar14) {
            dVar14 = __real_3ff0000000000000 / SQRT(dVar14);
            dVar4 = dVar4 * dVar14;
            dVar16 = dVar16 * dVar14;
          }
          dVar14 = dVar18 * dVar18 + dVar17 * dVar17;
          if (__real_3e45798ee0000000 < dVar14) {
            dVar14 = __real_3ff0000000000000 / SQRT(dVar14);
            dVar18 = dVar18 * dVar14;
            dVar17 = dVar17 * dVar14;
          }
          dVar4 = dVar4 * dVar18 + dVar16 * dVar17;
          local_80._0_16_ = auVar1;
        }
      }
      fVar10 = GetPrecisionDot(this,param_1);
      if (dVar4 < (double)fVar10) {
        return;
      }
      CleanUp(this,this_00,param_2);
      pUVar6 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(param_1,(UBTNode *)this);
      TVar7 = Succeeded;
    }
    UBehaviorTreeComponent::OnTaskFinished(param_1,pUVar6,TVar7);
  }
  return;
}

