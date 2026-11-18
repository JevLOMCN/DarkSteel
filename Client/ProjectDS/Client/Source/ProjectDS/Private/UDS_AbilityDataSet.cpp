// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 61

// StaticClass @ 14b401f40

UClass * __cdecl UDS_AbilityDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbilityDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbilityDataSet",
               &Z_Registration_Info_UClass_UDS_AbilityDataSet.InnerSingleton,
               StaticRegisterNativesUDS_AbilityDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AbilityDataSet>,
               InternalVTableHelperCtorCaller<UDS_AbilityDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbilityDataSet.InnerSingleton;
}

// UDS_AbilityDataSet @ 14b4065c0

UDS_AbilityDataSet * __thiscall
UDS_AbilityDataSet::UDS_AbilityDataSet(UDS_AbilityDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_AbilityDataSet__6B_;
  return this;
}

// UDS_AbilityDataSet @ 14b4065f0

UDS_AbilityDataSet * __thiscall
UDS_AbilityDataSet::UDS_AbilityDataSet(UDS_AbilityDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_AbilityDataSet__6B_;
  return this;
}

// ~UDS_AbilityDataSet @ 14b407a90

void __thiscall UDS_AbilityDataSet::~UDS_AbilityDataSet(UDS_AbilityDataSet *this)

{
  *(undefined ***)this = &___7UDS_AbilityDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b409780

UClass * __cdecl UDS_AbilityDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbilityDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbilityDataSet",
               &Z_Registration_Info_UClass_UDS_AbilityDataSet.InnerSingleton,
               StaticRegisterNativesUDS_AbilityDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AbilityDataSet>,
               InternalVTableHelperCtorCaller<UDS_AbilityDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbilityDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_AbilityDataSet @ 14b40ada0

void __cdecl UDS_AbilityDataSet::StaticRegisterNativesUDS_AbilityDataSet(void)

{
  return;
}

// GetAbilityData<UDS_AbnormalAbilityData> @ 14b7978d0

TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_AbnormalAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7979b2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7979b2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_AirWalkAbilityData> @ 14b797a80

TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_AirWalkAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b797b62;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b797b62:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_AttackTargetAbilityData> @ 14b797c30

TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_AttackTargetAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_AttackTargetAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b797d12;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b797d12:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_CastingSkillAbilityData> @ 14b797de0

TWeakObjectPtr<UDS_CastingSkillAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_CastingSkillAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_CastingSkillAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_CastingSkillAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_CastingSkillAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_CastingSkillAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b797ec2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b797ec2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_CastingSkillAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CastingSkillAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_CastingSkillAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_CastingSkillAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_CharacterSwitchAbilityData> @ 14b797f90

TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_CharacterSwitchAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_CharacterSwitchAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b798072;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b798072:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_ComeBackAbilityData> @ 14b798140

TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_ComeBackAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_ComeBackAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b798222;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b798222:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_DeathAbilityData> @ 14b7982f0

TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_DeathAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_DeathAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7983d2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7983d2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr> *)&local_res8,(void *)0x0)
  ;
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_EmissiveEffectAbilityData> @ 14b7984a0

TWeakObjectPtr<UDS_EmissiveEffectAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_EmissiveEffectAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_EmissiveEffectAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_EmissiveEffectAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_EmissiveEffectAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_EmissiveEffectAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b798582;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b798582:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_EmissiveEffectAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EmissiveEffectAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_EmissiveEffectAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_EmissiveEffectAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_FindTargetAbilityData> @ 14b798650

TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_FindTargetAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b798732;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b798732:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_LockOnTargetAbilityData> @ 14b798800

TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_LockOnTargetAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_LockOnTargetAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7988e2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7988e2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_RotateToTargetAbilityData> @ 14b7989b0

TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_RotateToTargetAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_RotateToTargetAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b798a92;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b798a92:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_SkillModeAbilityData> @ 14b798b60

TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_SkillModeAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_SkillModeAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b798c42;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b798c42:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_SkillMoveAbilityData> @ 14b798d10

TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_SkillMoveAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_SkillMoveAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b798df2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b798df2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_GroggyAbilityData> @ 14b7d2440

TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_GroggyAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_GroggyAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d2522;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d2522:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> *)&local_res8,(void *)0x0
                    );
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_Hold> @ 14b7d25f0

TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_Hold>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_Hold_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d26d2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d26d2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_LiftUp> @ 14b7d27a0

TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>)(FWeakObjectPtr)param_1
    ;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>)(FWeakObjectPtr)param_1
    ;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_LiftUp_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d2882;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d2882:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *)&local_res8
                     ,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_NPC> @ 14b7d2950

TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPC>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_NPC_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d2a32;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d2a32:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_NPCCamp> @ 14b7d2b00

TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCCamp>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_NPCCamp_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d2be2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d2be2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_NPCGimmick> @ 14b7d2cb0

TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCGimmick>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_NPCGimmick_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d2d92;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d2d92:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_NPCLing> @ 14b7d2e60

TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCLing>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_NPCLing_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d2f42;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d2f42:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_NPCLingTalk> @ 14b7d3010

TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCLingTalk>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_NPCLingTalk_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d30f2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d30f2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_NPCTaming> @ 14b7d31c0

TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCTaming>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_NPCTaming_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d32a2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d32a2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_StuffGather> @ 14b7d3370

TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffGather>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_StuffGather_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d3452;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d3452:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_StuffOpenLocks> @ 14b7d3520

TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffOpenLocks>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_StuffOpenLocks_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d3602;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d3602:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr>)TVar6.WeakPtr
      ;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_StuffPortal> @ 14b7d36d0

TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffPortal>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_StuffPortal_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d37b2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d37b2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_StuffQuestBoard> @ 14b7d3880

TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffQuestBoard>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_StuffQuestBoard_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d3962;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d3962:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>)
             TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_StuffWarpDevice> @ 14b7d3a30

TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffWarpDevice>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_StuffWarpDevice_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d3b12;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d3b12:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>)
             TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionAbilityData_StuffWarpDeviceUse> @ 14b7d3be0

TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffWarpDeviceUse>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionAbilityData_StuffWarpDeviceUse_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d3cc2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d3cc2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr> *
                     )&local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr>)
             TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_InteractionProcessAbilityData> @ 14b7d3d90

TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_InteractionProcessAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1
    ;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1
    ;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_InteractionProcessAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d3e72;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d3e72:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> *)&local_res8
                     ,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_LevelSequencePlayAbilityData> @ 14b7d3f40

TWeakObjectPtr<UDS_LevelSequencePlayAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_LevelSequencePlayAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_LevelSequencePlayAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_LevelSequencePlayAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_LevelSequencePlayAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_LevelSequencePlayAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d4022;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d4022:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_LevelSequencePlayAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_LevelSequencePlayAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_LevelSequencePlayAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_LevelSequencePlayAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_MountAbilityData> @ 14b7d40f0

TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_MountAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7d41d2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7d41d2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&local_res8,(void *)0x0)
  ;
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_MoveToPointAbilityData> @ 14b81d950

TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_MoveToPointAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_MoveToPointAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81da32;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81da32:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_MoveToTargetAbilityData> @ 14b81db00

TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_MoveToTargetAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_MoveToTargetAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81dbe2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81dbe2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_NPCBubbleTalkAbilityData> @ 14b81dcb0

TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_NPCBubbleTalkAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_NPCBubbleTalkAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81dd92;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81dd92:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_NPCClientControlAbilityData_Falling> @ 14b81de60

TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_NPCClientControlAbilityData_Falling>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_NPCClientControlAbilityData_Falling_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81df42;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81df42:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_NPCClientControlAbilityData_Hide> @ 14b81e010

TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_NPCClientControlAbilityData_Hide>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_NPCClientControlAbilityData_Hide_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81e0f2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81e0f2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_NPCClientControlAbilityData_Show> @ 14b81e1c0

TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_NPCClientControlAbilityData_Show>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_NPCClientControlAbilityData_Show_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81e2a2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81e2a2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_NPCClientControlAbilityData_Thrown> @ 14b81e370

TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_NPCClientControlAbilityData_Thrown>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_NPCClientControlAbilityData_Thrown_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81e452;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81e452:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_NormalAttackAbilityData> @ 14b81e520

TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_NormalAttackAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_NormalAttackAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81e602;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81e602:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_PlayerSkillAbilityData_Detection> @ 14b81e6d0

TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_PlayerSkillAbilityData_Detection>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_PlayerSkillAbilityData_Detection_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81e7b2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81e7b2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_PlayerSkillAbilityData_InstallCamp> @ 14b81e880

TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_PlayerSkillAbilityData_InstallCamp>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_PlayerSkillAbilityData_InstallCamp_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81e962;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81e962:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr> *)
                     &local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_PlayerSkillAbilityData_InstallCampCasting> @ 14b81ea30

TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_PlayerSkillAbilityData_InstallCampCasting>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr>)
           (FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_PlayerSkillAbilityData_InstallCampCasting_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81eb12;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81eb12:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr> *
                     )&local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr>)
             TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr>)
         (FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_ResurrectAbilityData> @ 14b81ebe0

TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_ResurrectAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_ResurrectAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81ecc2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81ecc2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_RotateToAngleAbilityData> @ 14b81ed90

TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_RotateToAngleAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_RotateToAngleAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81ee72;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81ee72:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_SkillRotateAbilityData> @ 14b81ef40

TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_SkillRotateAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_SkillRotateAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81f022;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81f022:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_SwimAbilityData> @ 14b81f0f0

TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_SwimAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_SwimAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81f1d2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81f1d2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_TamingNPCAbilityData> @ 14b81f2a0

TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_TamingNPCAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_TamingNPCAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81f382;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81f382:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_ToggleSkillAbilityData> @ 14b81f450

TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_ToggleSkillAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_ToggleSkillAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81f532;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81f532:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_TraceAbilityData> @ 14b81f600

TWeakObjectPtr<UDS_TraceAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_TraceAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_TraceAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_TraceAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_TraceAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_TraceAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b81f6e2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b81f6e2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_TraceAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_TraceAbilityData,FWeakObjectPtr> *)&local_res8,(void *)0x0)
  ;
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_TraceAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_TraceAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_NPCMountAbilityData> @ 14b861a40

TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_NPCMountAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_NPCMountAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b861b22;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b861b22:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_WarpActionAbilityData> @ 14b861bf0

TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_WarpActionAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_WarpActionAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b861cd2;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b861cd2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityData<UDS_WarpRequestAbilityData> @ 14b861da0

TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityDataSet::GetAbilityData<UDS_WarpRequestAbilityData>
          (ulong64 *param_1,EDS_AbilityTagType *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilityDataSet *this;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> TVar6;
  EDS_AbilityTagType *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  FDS_GameplayTags::GetAbilityTag(in_R8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_30);
    return (TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  FindOrAddAbilityData(this,(FGameplayTag *)&local_38);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_38,(void *)0x0);
  if (bVar3) {
    *param_1 = 0;
    local_28 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
    return (TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_38);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_WarpRequestAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b861e82;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b861e82:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_20);
  bVar3 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>)TVar6.WeakPtr;
    }
    *param_1 = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_18);
  }
  else {
    *param_1 = (ulong64)local_res8;
  }
  return (TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// FindOrAddAbilityData @ 14b9eb6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> __thiscall
UDS_AbilityDataSet::FindOrAddAbilityData(UDS_AbilityDataSet *this,FGameplayTag *param_1)

{
  bool bVar1;
  FName FVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  EDS_AbilityTagType *pEVar7;
  ulong64 uVar8;
  TSubclassOf<UDS_AbilityData> *pTVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  UDS_LogManager *pUVar12;
  longlong lVar13;
  UClass *pUVar14;
  FName *in_R8;
  longlong *plVar15;
  undefined1 auStackY_248 [32];
  FString local_208;
  FName local_1f8 [2];
  undefined1 local_1e8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pEVar7 = FDS_GameplayTags::GetAbilityTagType((FGameplayTag *)in_R8);
  bVar1 = (bool)*pEVar7;
  uVar8 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_AbilityData::GetData((ulong64)local_1f8,uVar8,bVar1);
  bVar4 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)local_1f8,(void *)0x0);
  if (bVar4) {
    FVar2 = *in_R8;
    uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    if (AbilityDataClassTemplateMap._8_4_ != AbilityDataClassTemplateMap._52_4_) {
      lVar13 = 0x154cf7078;
      if (AbilityDataClassTemplateMap._64_8_ != 0) {
        lVar13 = AbilityDataClassTemplateMap._64_8_;
      }
      iVar6 = *(int *)(lVar13 + (ulonglong)
                                (AbilityDataClassTemplateMap._72_4_ - 1 & FVar2.Number + uVar5) * 4)
      ;
      if (iVar6 != -1) {
        do {
          if (*(FName *)(AbilityDataClassTemplateMap._0_8_ + (longlong)iVar6 * 0x18) == *in_R8) {
            pTVar9 = TMapBase<FGameplayTag,TSubclassOf<UDS_AbilityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>_>
                     ::FindChecked((TMapBase<FGameplayTag,TSubclassOf<UDS_AbilityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>_>
                                    *)&AbilityDataClassTemplateMap,(FGameplayTag *)in_R8);
            pUVar14 = (pTVar9->Class).field0_0x0.DebugPtr;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar14 == (UClass *)0x0) break;
            }
            else {
              if (pUVar14 == (UClass *)0x0) break;
              UE::GC::MarkAsReachable((UObject *)pUVar14);
            }
            pUVar10 = Z_Construct_UClass_UDS_AbilityData_NoRegister();
            if (pUVar10 != (UClass *)0x0) {
              iVar6 = (int)pUVar10->_padding_;
              if (((int)pUVar14->_padding_ < iVar6) ||
                 ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar6 * 8) !=
                  &pUVar10->_padding_)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                pUVar10 = Z_Construct_UClass_UDS_AbilityData_NoRegister();
                FVar3.Data = local_208.Data.AllocatorInstance.Data;
                if (pUVar10 == (UClass *)0x0) {
LAB_14b9eb8a6:
                  pUVar14 = (UClass *)0x0;
                }
                else {
                  iVar6 = (int)pUVar10->_padding_;
                  if (((int)pUVar14->_padding_ < iVar6) ||
                     ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar6 * 8) !=
                      &pUVar10->_padding_)) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (!bVar4) goto LAB_14b9eb8a6;
                }
                if ((FName)local_208.Data.AllocatorInstance.Data == (FName)0x0) {
                  FObjectInitializer::AssertIfInConstructor
                            ((UObject *)this,
                             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                            );
                }
                pUVar10 = Z_Construct_UClass_UDS_AbilityData_NoRegister();
                CheckIsClassChildOf_Internal(pUVar10,pUVar14);
                FStaticConstructObjectParameters::FStaticConstructObjectParameters
                          ((FStaticConstructObjectParameters *)local_1e8,pUVar14);
                local_1e8._48_8_ = (FObjectInstancingGraph *)0x0;
                local_1e8._56_8_ = (UPackage *)0x0;
                local_1e8._16_8_ = FVar3.Data;
                local_1e8._24_4_ = RF_NoFlags;
                local_1e8._40_8_ = (UObject *)0x0;
                local_1e8[0x20] = false;
                local_1e8._8_8_ = this;
                pUVar11 = StaticConstructObject_Internal
                                    ((FStaticConstructObjectParameters *)local_1e8);
                if (local_1e8._64_8_ != 0) {
                  plVar15 = (longlong *)(local_1e8 + 0x50);
                  if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
                    plVar15 = (longlong *)local_1e8._104_8_;
                  }
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
                if (pUVar11 != (UObject *)0x0) {
                  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar11;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar11);
                  }
                  UDS_DataSetBase::AddData
                            ((UDS_DataSetBase *)this,(ulonglong)bVar1,
                             (TObjectPtr<UDS_DataBase>)&local_208);
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar11);
                  }
                  param_1->TagName = (FName)0x0;
                  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar11;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar11);
                  }
                  goto LAB_14b9eb7c0;
                }
                pUVar12 = UDS_LogManager::GetInst();
                if (pUVar12 != (UDS_LogManager *)0x0) {
                  pUVar12 = UDS_LogManager::GetInst();
                  ::FName::ToString(in_R8,&local_208);
                  local_168._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_168,"UDS_AbilityDataSet::FindOrAddAbilityData",0x28,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar12,1,Warning,local_168.Ptr,0x112,
                             L"newAbilityData is nullptr. (%s)");
                  if ((void *)local_168._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_168._padding_);
                  }
                  if ((FName)local_208.Data.AllocatorInstance.Data != (FName)0x0) {
                    FMemory::Free(local_208.Data.AllocatorInstance.Data);
                  }
                }
              }
            }
            break;
          }
          iVar6 = *(int *)(AbilityDataClassTemplateMap._0_8_ + 0x10 + (longlong)iVar6 * 0x18);
        } while (iVar6 != -1);
      }
    }
    param_1->TagName = (FName)0x0;
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14b9eb7c0:
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_208);
  }
  else {
    param_1->TagName = local_1f8[0];
  }
  return (TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAbilityDataClassByTag @ 14b9ebd60

TSubclassOf<UDS_AbilityData> __cdecl
UDS_AbilityDataSet::GetAbilityDataClassByTag(FGameplayTag *param_1)

{
  FGameplayTag FVar1;
  FName FVar2;
  uint uVar3;
  TSubclassOf<UDS_AbilityData> *pTVar4;
  FName *in_RDX;
  longlong lVar5;
  int iVar6;
  
  FVar1.TagName = *in_RDX;
  uVar3 = ::GetTypeHash(FVar1.TagName.ComparisonIndex.Value);
  if (AbilityDataClassTemplateMap._8_4_ != AbilityDataClassTemplateMap._52_4_) {
    lVar5 = 0x154cf7078;
    if (AbilityDataClassTemplateMap._64_8_ != 0) {
      lVar5 = AbilityDataClassTemplateMap._64_8_;
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)
                             (AbilityDataClassTemplateMap._72_4_ - 1 & FVar1.TagName.Number + uVar3)
                             * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(AbilityDataClassTemplateMap._0_8_ + (longlong)iVar6 * 0x18) == *in_RDX) {
          if (iVar6 != -1) {
            pTVar4 = TMapBase<FGameplayTag,TSubclassOf<UDS_AbilityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>_>
                     ::FindChecked((TMapBase<FGameplayTag,TSubclassOf<UDS_AbilityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>_>
                                    *)&AbilityDataClassTemplateMap,(FGameplayTag *)in_RDX);
            FVar2 = (FName)(pTVar4->Class).field0_0x0.DebugPtr;
            param_1->TagName = FVar2;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              return (TSubclassOf<UDS_AbilityData>)(TObjectPtr<UClass>)param_1;
            }
            if (FVar2 == (FName)0x0) {
              return (TSubclassOf<UDS_AbilityData>)(TObjectPtr<UClass>)param_1;
            }
            UE::GC::MarkAsReachable((UObject *)FVar2);
            return (TSubclassOf<UDS_AbilityData>)(TObjectPtr<UClass>)param_1;
          }
          break;
        }
        iVar6 = *(int *)(AbilityDataClassTemplateMap._0_8_ + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  param_1->TagName = (FName)0x0;
  return (TSubclassOf<UDS_AbilityData>)(TObjectPtr<UClass>)param_1;
}

// InitAbilityDataClassTemplateMap @ 14b9f53a0

void __cdecl UDS_AbilityDataSet::InitAbilityDataClassTemplateMap(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UEnum *pUVar4;
  EDS_AbilityTagType local_res8 [8];
  EDS_AbilityTagType local_res10 [8];
  EDS_AbilityTagType local_res18 [8];
  EDS_AbilityTagType local_res20 [8];
  EDS_AbilityTagType local_648 [52];
  undefined1 local_614 [8];
  undefined1 local_60c [8];
  undefined1 local_604 [8];
  undefined1 local_5fc [8];
  undefined1 local_5f4 [8];
  undefined1 local_5ec [8];
  undefined1 local_5e4 [8];
  undefined1 local_5dc [8];
  undefined1 local_5d4 [8];
  undefined1 local_5cc [8];
  undefined1 local_5c4 [8];
  undefined1 local_5bc [8];
  undefined1 local_5b4 [8];
  undefined1 local_5ac [8];
  undefined1 local_5a4 [8];
  undefined1 local_59c [8];
  undefined1 local_594 [8];
  undefined1 local_58c [8];
  undefined1 local_584 [8];
  undefined1 local_57c [8];
  undefined1 local_574 [8];
  undefined1 local_56c [8];
  undefined1 local_564 [8];
  undefined1 local_55c [8];
  undefined1 local_554 [8];
  undefined1 local_54c [8];
  undefined1 local_544 [12];
  UClass *local_538;
  UClass *local_530;
  UClass *local_528;
  UClass *local_520;
  UClass *local_518;
  UClass *local_510;
  UClass *local_508;
  UClass *local_500;
  UClass *local_4f8;
  UClass *local_4f0;
  UClass *local_4e8;
  UClass *local_4e0;
  UClass *local_4d8;
  UClass *local_4d0;
  UClass *local_4c8;
  UClass *local_4c0;
  UClass *local_4b8;
  UClass *local_4b0;
  UClass *local_4a8;
  UClass *local_4a0;
  UClass *local_498;
  UClass *local_490;
  UClass *local_488;
  UClass *local_480;
  UClass *local_478;
  UClass *local_470;
  UClass *local_468;
  UClass *local_460;
  UClass *local_458;
  UClass *local_450;
  UClass *local_448;
  UClass *local_440;
  UClass *local_438;
  UClass *local_430;
  UClass *local_428;
  UClass *local_420;
  UClass *local_418;
  UClass *local_410;
  UClass *local_408;
  UClass *local_400;
  UClass *local_3f8;
  UClass *local_3f0;
  UClass *local_3e8;
  UClass *local_3e0;
  UClass *local_3d8;
  UClass *local_3d0;
  UClass *local_3c8;
  UClass *local_3c0;
  UClass *local_3b8;
  UClass *local_3b0;
  UClass *local_3a8;
  UClass *local_3a0;
  UClass *local_398;
  UClass *local_390;
  FGameplayTag *local_388;
  UClass **local_380;
  FGameplayTag *local_378;
  UClass **local_370;
  FGameplayTag *local_368;
  UClass **local_360;
  FGameplayTag *local_358;
  UClass **local_350;
  FGameplayTag *local_348;
  UClass **local_340;
  FGameplayTag *local_338;
  UClass **local_330;
  FGameplayTag *local_328;
  UClass **local_320;
  FGameplayTag *local_318;
  UClass **local_310;
  FGameplayTag *local_308;
  UClass **local_300;
  FGameplayTag *local_2f8;
  UClass **local_2f0;
  FGameplayTag *local_2e8;
  UClass **local_2e0;
  FGameplayTag *local_2d8;
  UClass **local_2d0;
  FGameplayTag *local_2c8;
  UClass **local_2c0;
  FGameplayTag *local_2b8;
  UClass **local_2b0;
  FGameplayTag *local_2a8;
  UClass **local_2a0;
  FGameplayTag *local_298;
  UClass **local_290;
  FGameplayTag *local_288;
  UClass **local_280;
  FGameplayTag *local_278;
  UClass **local_270;
  FGameplayTag *local_268;
  UClass **local_260;
  FGameplayTag *local_258;
  UClass **local_250;
  FGameplayTag *local_248;
  UClass **local_240;
  FGameplayTag *local_238;
  UClass **local_230;
  FGameplayTag *local_228;
  UClass **local_220;
  FGameplayTag *local_218;
  UClass **local_210;
  FGameplayTag *local_208;
  UClass **local_200;
  FGameplayTag *local_1f8;
  UClass **local_1f0;
  FGameplayTag *local_1e8;
  UClass **local_1e0;
  FGameplayTag *local_1d8;
  UClass **local_1d0;
  FGameplayTag *local_1c8;
  UClass **local_1c0;
  FGameplayTag *local_1b8;
  UClass **local_1b0;
  FGameplayTag *local_1a8;
  UClass **local_1a0;
  FGameplayTag *local_198;
  UClass **local_190;
  FGameplayTag *local_188;
  UClass **local_180;
  FGameplayTag *local_178;
  UClass **local_170;
  FGameplayTag *local_168;
  UClass **local_160;
  FGameplayTag *local_158;
  UClass **local_150;
  FGameplayTag *local_148;
  UClass **local_140;
  FGameplayTag *local_138;
  UClass **local_130;
  FGameplayTag *local_128;
  UClass **local_120;
  FGameplayTag *local_118;
  UClass **local_110;
  FGameplayTag *local_108;
  UClass **local_100;
  FGameplayTag *local_f8;
  UClass **local_f0;
  FGameplayTag *local_e8;
  UClass **local_e0;
  FGameplayTag *local_d8;
  UClass **local_d0;
  FGameplayTag *local_c8;
  UClass **local_c0;
  FGameplayTag *local_b8;
  UClass **local_b0;
  FGameplayTag *local_a8;
  UClass **local_a0;
  FGameplayTag *local_98;
  UClass **local_90;
  FGameplayTag *local_88;
  UClass **local_80;
  FGameplayTag *local_78;
  UClass **local_70;
  FGameplayTag *local_68;
  UClass **local_60;
  FGameplayTag *local_58;
  UClass **local_50;
  FGameplayTag *local_48;
  UClass **local_40;
  FGameplayTag *local_38;
  UClass **local_30;
  
  pUVar4 = StaticEnum<enum_EDS_AbilityTagType>();
  if (pUVar4 == (UEnum *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8647427827383140444>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.cpp"
                       ,0x5c,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar1 = (pUVar4->Names).NumValues;
    bVar3 = 1 < (int)AbilityDataClassTemplateMap._72_4_;
    if (!bVar3) {
      TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                        *)&AbilityDataClassTemplateMap);
    }
    AbilityDataClassTemplateMap._8_4_ = 0;
    if (AbilityDataClassTemplateMap._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&AbilityDataClassTemplateMap,0,
                 (int *)&AbilityDataClassTemplateMap.field_0xc);
    }
    AbilityDataClassTemplateMap._52_4_ = 0;
    AbilityDataClassTemplateMap._40_4_ = 0;
    AbilityDataClassTemplateMap._48_4_ = 0xffffffff;
    if (0x80 < (uint)AbilityDataClassTemplateMap._44_4_) {
      AbilityDataClassTemplateMap._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&AbilityDataClassTemplateMap.field_0x10,0);
    }
    if (bVar3) {
      AbilityDataClassTemplateMap._72_4_ = 1;
      TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap);
    }
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
               *)&AbilityDataClassTemplateMap,iVar1);
    local_538 = Z_Construct_UClass_UDS_MoveToPointAbilityData_NoRegister();
    local_res8[0] = MoveToPoint;
    local_388 = FDS_GameplayTags::GetAbilityTag(local_res8);
    local_380 = &local_538;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_614,(bool *)&local_388);
    local_530 = Z_Construct_UClass_UDS_MoveToTargetAbilityData_NoRegister();
    local_res10[0] = MoveToTarget;
    local_378 = FDS_GameplayTags::GetAbilityTag(local_res10);
    local_370 = &local_530;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_614 + 4),
               (bool *)&local_378);
    local_528 = Z_Construct_UClass_UDS_TraceAbilityData_NoRegister();
    local_res18[0] = Trace;
    local_368 = FDS_GameplayTags::GetAbilityTag(local_res18);
    local_360 = &local_528;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_60c,(bool *)&local_368);
    local_520 = Z_Construct_UClass_UDS_RotateToAngleAbilityData_NoRegister();
    local_res20[0] = RotateToAngle;
    local_358 = FDS_GameplayTags::GetAbilityTag(local_res20);
    local_350 = &local_520;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_60c + 4),
               (bool *)&local_358);
    local_518 = Z_Construct_UClass_UDS_NormalAttackAbilityData_NoRegister();
    local_648[0] = NormalAttack;
    local_348 = FDS_GameplayTags::GetAbilityTag(local_648);
    local_340 = &local_518;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_604,(bool *)&local_348);
    local_510 = Z_Construct_UClass_UDS_ActiveSkillAbilityData_NoRegister();
    local_648[1] = 0x11;
    local_338 = FDS_GameplayTags::GetAbilityTag(local_648 + 1);
    local_330 = &local_510;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_604 + 4),
               (bool *)&local_338);
    local_508 = Z_Construct_UClass_UDS_CastingSkillAbilityData_NoRegister();
    local_648[2] = 0x13;
    local_328 = FDS_GameplayTags::GetAbilityTag(local_648 + 2);
    local_320 = &local_508;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_5fc,(bool *)&local_328);
    local_500 = Z_Construct_UClass_UDS_ToggleSkillAbilityData_NoRegister();
    local_648[3] = 0x15;
    local_318 = FDS_GameplayTags::GetAbilityTag(local_648 + 3);
    local_310 = &local_500;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_5fc + 4),
               (bool *)&local_318);
    local_4f8 = Z_Construct_UClass_UDS_SkillModeAbilityData_NoRegister();
    local_648[4] = 0x18;
    local_308 = FDS_GameplayTags::GetAbilityTag(local_648 + 4);
    local_300 = &local_4f8;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_5f4,(bool *)&local_308);
    local_4f0 = Z_Construct_UClass_UDS_FindTargetAbilityData_NoRegister();
    local_648[5] = 0x1b;
    local_2f8 = FDS_GameplayTags::GetAbilityTag(local_648 + 5);
    local_2f0 = &local_4f0;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_5f4 + 4),
               (bool *)&local_2f8);
    local_4e8 = Z_Construct_UClass_UDS_LockOnTargetAbilityData_NoRegister();
    local_648[6] = 0x1c;
    local_2e8 = FDS_GameplayTags::GetAbilityTag(local_648 + 6);
    local_2e0 = &local_4e8;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_5ec,(bool *)&local_2e8);
    local_4e0 = Z_Construct_UClass_UDS_RotateToTargetAbilityData_NoRegister();
    local_648[7] = 0x1d;
    local_2d8 = FDS_GameplayTags::GetAbilityTag(local_648 + 7);
    local_2d0 = &local_4e0;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_5ec + 4),
               (bool *)&local_2d8);
    local_4d8 = Z_Construct_UClass_UDS_SkillRotateAbilityData_NoRegister();
    local_648[8] = 0x1e;
    local_2c8 = FDS_GameplayTags::GetAbilityTag(local_648 + 8);
    local_2c0 = &local_4d8;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_5e4,(bool *)&local_2c8);
    local_4d0 = Z_Construct_UClass_UDS_SkillMoveAbilityData_NoRegister();
    local_648[9] = 0x1f;
    local_2b8 = FDS_GameplayTags::GetAbilityTag(local_648 + 9);
    local_2b0 = &local_4d0;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_5e4 + 4),
               (bool *)&local_2b8);
    local_4c8 = Z_Construct_UClass_UDS_AttackTargetAbilityData_NoRegister();
    local_648[10] = 0x20;
    local_2a8 = FDS_GameplayTags::GetAbilityTag(local_648 + 10);
    local_2a0 = &local_4c8;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_5dc,(bool *)&local_2a8);
    local_4c0 = Z_Construct_UClass_UDS_GroggyAbilityData_NoRegister();
    local_648[0xb] = 0x25;
    local_298 = FDS_GameplayTags::GetAbilityTag(local_648 + 0xb);
    local_290 = &local_4c0;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_5dc + 4),
               (bool *)&local_298);
    local_4b8 = Z_Construct_UClass_UDS_AirWalkAbilityData_NoRegister();
    local_648[0xc] = 0x29;
    local_288 = FDS_GameplayTags::GetAbilityTag(local_648 + 0xc);
    local_280 = &local_4b8;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_5d4,(bool *)&local_288);
    local_4b0 = Z_Construct_UClass_UDS_AbnormalAbilityData_NoRegister();
    local_648[0xd] = 0x30;
    local_278 = FDS_GameplayTags::GetAbilityTag(local_648 + 0xd);
    local_270 = &local_4b0;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_5d4 + 4),
               (bool *)&local_278);
    local_4a8 = Z_Construct_UClass_UDS_InteractionProcessAbilityData_NoRegister();
    local_648[0xe] = 0x33;
    local_268 = FDS_GameplayTags::GetAbilityTag(local_648 + 0xe);
    local_260 = &local_4a8;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_5cc,(bool *)&local_268);
    local_4a0 = Z_Construct_UClass_UDS_InteractionAbilityData_NPC_NoRegister();
    local_648[0xf] = 0x34;
    local_258 = FDS_GameplayTags::GetAbilityTag(local_648 + 0xf);
    local_250 = &local_4a0;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_5cc + 4),
               (bool *)&local_258);
    local_498 = Z_Construct_UClass_UDS_InteractionAbilityData_NPCGimmick_NoRegister();
    local_648[0x10] = 0x35;
    local_248 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x10);
    local_240 = &local_498;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_5c4,(bool *)&local_248);
    local_490 = Z_Construct_UClass_UDS_InteractionAbilityData_NPCCamp_NoRegister();
    local_648[0x11] = 0x36;
    local_238 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x11);
    local_230 = &local_490;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_5c4 + 4),
               (bool *)&local_238);
    local_488 = Z_Construct_UClass_UDS_InteractionAbilityData_NPCLing_NoRegister();
    local_648[0x12] = 0x37;
    local_228 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x12);
    local_220 = &local_488;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_5bc,(bool *)&local_228);
    local_480 = Z_Construct_UClass_UDS_InteractionAbilityData_NPCLingTalk_NoRegister();
    local_648[0x13] = 0x38;
    local_218 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x13);
    local_210 = &local_480;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_5bc + 4),
               (bool *)&local_218);
    local_478 = Z_Construct_UClass_UDS_InteractionAbilityData_NPCTaming_NoRegister();
    local_648[0x14] = 0x3e;
    local_208 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x14);
    local_200 = &local_478;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_5b4,(bool *)&local_208);
    local_470 = Z_Construct_UClass_UDS_InteractionAbilityData_StuffGather_NoRegister();
    local_648[0x15] = 0x39;
    local_1f8 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x15);
    local_1f0 = &local_470;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_5b4 + 4),
               (bool *)&local_1f8);
    local_468 = Z_Construct_UClass_UDS_InteractionAbilityData_StuffWarpDevice_NoRegister();
    local_648[0x16] = 0x3a;
    local_1e8 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x16);
    local_1e0 = &local_468;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_5ac,(bool *)&local_1e8);
    local_460 = Z_Construct_UClass_UDS_InteractionAbilityData_StuffWarpDeviceUse_NoRegister();
    local_648[0x17] = 0x3b;
    local_1d8 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x17);
    local_1d0 = &local_460;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_5ac + 4),
               (bool *)&local_1d8);
    local_458 = Z_Construct_UClass_UDS_InteractionAbilityData_StuffPortal_NoRegister();
    local_648[0x18] = 0x3c;
    local_1c8 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x18);
    local_1c0 = &local_458;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_5a4,(bool *)&local_1c8);
    local_450 = Z_Construct_UClass_UDS_InteractionAbilityData_StuffQuestBoard_NoRegister();
    local_648[0x19] = 0x3d;
    local_1b8 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x19);
    local_1b0 = &local_450;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_5a4 + 4),
               (bool *)&local_1b8);
    local_448 = Z_Construct_UClass_UDS_InteractionAbilityData_StuffOpenLocks_NoRegister();
    local_648[0x1a] = 0x40;
    local_1a8 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x1a);
    local_1a0 = &local_448;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_59c,(bool *)&local_1a8);
    local_440 = Z_Construct_UClass_UDS_InteractionAbilityData_Hold_NoRegister();
    local_648[0x1b] = 0x41;
    local_198 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x1b);
    local_190 = &local_440;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_59c + 4),
               (bool *)&local_198);
    local_438 = Z_Construct_UClass_UDS_InteractionAbilityData_LiftUp_NoRegister();
    local_648[0x1c] = 0x42;
    local_188 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x1c);
    local_180 = &local_438;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_594,(bool *)&local_188);
    local_430 = Z_Construct_UClass_UDS_PlayerSkillAbilityData_Detection_NoRegister();
    local_648[0x1d] = 0x43;
    local_178 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x1d);
    local_170 = &local_430;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_594 + 4),
               (bool *)&local_178);
    local_428 = Z_Construct_UClass_UDS_PlayerSkillAbilityData_InstallCamp_NoRegister();
    local_648[0x1e] = 0x44;
    local_168 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x1e);
    local_160 = &local_428;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_58c,(bool *)&local_168);
    local_420 = Z_Construct_UClass_UDS_PlayerSkillAbilityData_InstallCampCasting_NoRegister();
    local_648[0x1f] = 0x45;
    local_158 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x1f);
    local_150 = &local_420;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_58c + 4),
               (bool *)&local_158);
    local_418 = Z_Construct_UClass_UDS_WarpRequestAbilityData_NoRegister();
    local_648[0x20] = 0x46;
    local_148 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x20);
    local_140 = &local_418;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_584,(bool *)&local_148);
    local_410 = Z_Construct_UClass_UDS_WarpActionAbilityData_NoRegister();
    local_648[0x21] = 0x47;
    local_138 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x21);
    local_130 = &local_410;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_584 + 4),
               (bool *)&local_138);
    local_408 = Z_Construct_UClass_UDS_TransportWarpAbilityData_NoRegister();
    local_648[0x22] = 0x49;
    local_128 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x22);
    local_120 = &local_408;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_57c,(bool *)&local_128);
    local_400 = Z_Construct_UClass_UDS_MountAbilityData_NoRegister();
    local_648[0x23] = 0x4a;
    local_118 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x23);
    local_110 = &local_400;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_57c + 4),
               (bool *)&local_118);
    local_3f8 = Z_Construct_UClass_UDS_NPCMountAbilityData_NoRegister();
    local_648[0x24] = 0x55;
    local_108 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x24);
    local_100 = &local_3f8;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_574,(bool *)&local_108);
    local_3f0 = Z_Construct_UClass_UDS_DeathAbilityData_NoRegister();
    local_648[0x25] = 0x56;
    local_f8 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x25);
    local_f0 = &local_3f0;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_574 + 4),
               (bool *)&local_f8);
    local_3e8 = Z_Construct_UClass_UDS_ResurrectAbilityData_NoRegister();
    local_648[0x26] = 0x57;
    local_e8 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x26);
    local_e0 = &local_3e8;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_56c,(bool *)&local_e8);
    local_3e0 = Z_Construct_UClass_UDS_CharacterSwitchAbilityData_NoRegister();
    local_648[0x27] = 0x5c;
    local_d8 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x27);
    local_d0 = &local_3e0;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_56c + 4),
               (bool *)&local_d8);
    local_3d8 = Z_Construct_UClass_UDS_NPCBubbleTalkAbilityData_NoRegister();
    local_648[0x28] = 0x5d;
    local_c8 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x28);
    local_c0 = &local_3d8;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_564,(bool *)&local_c8);
    local_3d0 = Z_Construct_UClass_UDS_LevelSequencePlayAbilityData_NoRegister();
    local_648[0x29] = 0x5e;
    local_b8 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x29);
    local_b0 = &local_3d0;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_564 + 4),
               (bool *)&local_b8);
    local_3c8 = Z_Construct_UClass_UDS_ComeBackAbilityData_NoRegister();
    local_648[0x2a] = 0x61;
    local_a8 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x2a);
    local_a0 = &local_3c8;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_55c,(bool *)&local_a8);
    local_3c0 = Z_Construct_UClass_UDS_NPCClientControlAbilityData_Show_NoRegister();
    local_648[0x2b] = 0x62;
    local_98 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x2b);
    local_90 = &local_3c0;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_55c + 4),
               (bool *)&local_98);
    local_3b8 = Z_Construct_UClass_UDS_NPCClientControlAbilityData_Hide_NoRegister();
    local_648[0x2c] = 99;
    local_88 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x2c);
    local_80 = &local_3b8;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_554,(bool *)&local_88);
    local_3b0 = Z_Construct_UClass_UDS_NPCClientControlAbilityData_Thrown_NoRegister();
    local_648[0x2d] = 100;
    local_78 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x2d);
    local_70 = &local_3b0;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_554 + 4),
               (bool *)&local_78);
    local_3a8 = Z_Construct_UClass_UDS_NPCClientControlAbilityData_Falling_NoRegister();
    local_648[0x2e] = 0x65;
    local_68 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x2e);
    local_60 = &local_3a8;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_54c,(bool *)&local_68);
    local_3a0 = Z_Construct_UClass_UDS_SwimAbilityData_NoRegister();
    local_648[0x2f] = 5;
    local_58 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x2f);
    local_50 = &local_3a0;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_54c + 4),
               (bool *)&local_58);
    local_398 = Z_Construct_UClass_UDS_TamingNPCAbilityData_NoRegister();
    local_648[0x30] = 0x69;
    local_48 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x30);
    local_40 = &local_398;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)local_544,(bool *)&local_48);
    local_390 = Z_Construct_UClass_UDS_EmissiveEffectAbilityData_NoRegister();
    local_648[0x31] = 0x6b;
    local_38 = FDS_GameplayTags::GetAbilityTag(local_648 + 0x31);
    local_30 = &local_390;
    TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,UClass_*_&&>_>
              ((TSet<TTuple<FGameplayTag,TSubclassOf<UDS_AbilityData>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>,FDefaultSetAllocator>
                *)&AbilityDataClassTemplateMap,
               (TPairInitializer<FGameplayTag_const_&,UClass_*_&&> *)(local_544 + 4),
               (bool *)&local_38);
  }
  return;
}

