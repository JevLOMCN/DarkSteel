// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 9

// FTypeManager @ 1471dc640

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTypeManager * __thiscall
UE::Mass::FTypeManager::FTypeManager(FTypeManager *this,FMassEntityManager *param_1)

{
  this->OuterEntityManager = param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->TypeDataMap = 0;
  *(undefined8 *)&(this->TypeDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->TypeDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->TypeDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->TypeDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypeDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->TypeDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TypeDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->TypeDataMap).field_0x48 = 0;
  *(undefined8 *)&(this->SubsystemTypes).Elements = 0;
  *(undefined8 *)&(this->SubsystemTypes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SubsystemTypes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SubsystemTypes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SubsystemTypes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SubsystemTypes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SubsystemTypes).Elements.field_0x30 = 0xffffffff;
  (this->SubsystemTypes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SubsystemTypes).HashSize = 0;
  this->bBuiltInTypesRegistered = false;
  return this;
}

// GetRelationTypeHandle @ 147225840

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTypeHandle __thiscall
UE::Mass::FTypeManager::GetRelationTypeHandle
          (FTypeManager *this,TNotNull<UScriptStruct_const_*> param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UPackage *pUVar4;
  UObject *in_R8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  undefined1 local_res20 [8];
  
  local_res18 = in_R8;
  if (in_R8 == (UObject *)0x0) {
LAB_1472258b9:
    local_res10 = (FWeakObjectPtr)&local_res18;
    `UE::Mass::FTypeManager::GetRelationTypeHandle'::__l2::<lambda_1>::operator()(&local_res10);
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassRelation,(UObject *)pUVar4,L"MassRelation"
                          );
      if (Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1472258b9;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton)->_padding_;
    if ((*(int *)&in_R8[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&in_R8[1].field_0x8 + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1472258b9;
  }
  pUVar3 = local_res18;
  if (local_res18 != (UObject *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassRelation,(UObject *)pUVar4,L"MassRelation"
                          );
      if (Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1472259a4;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton)->_padding_;
    if ((*(int *)&pUVar3[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      if (local_res18 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(local_res18);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
          GC::MarkAsReachable(local_res18);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res20);
      }
      (param_1.Val)->_padding_ = (longlong)local_res10;
      return (FTypeHandle)(TObjectKey<UStruct_const_>)param_1.Val;
    }
  }
LAB_1472259a4:
  (param_1.Val)->_padding_ = 0;
  return (FTypeHandle)(TObjectKey<UStruct_const_>)param_1.Val;
}

// IsValidRelationType @ 147233be0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::FTypeManager::IsValidRelationType
          (FTypeManager *this,TNotNull<UScriptStruct_const_*> param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  UPackage *pUVar4;
  uint uVar5;
  uint uVar6;
  FWeakObjectPtr local_res10;
  UScriptStruct *local_res18 [2];
  
  if (param_1.Val != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassRelation,(UObject *)pUVar4,L"MassRelation"
                          );
      if (Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton == (UScriptStruct *)0x0) {
        return false;
      }
    }
    iVar3 = (int)(Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton)->_padding_;
    if (((int)(param_1.Val)->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar3 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton)->_padding_)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)param_1.Val);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res18[0] = param_1.Val;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)param_1.Val);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
      uVar5 = local_res10.ObjectSerialNumber;
      uVar2 = local_res10.ObjectIndex - uVar5 ^ uVar5 >> 0xd;
      uVar6 = (-0x61c88647 - uVar2) - uVar5 ^ uVar2 << 8;
      uVar5 = (uVar5 - uVar2) - uVar6 ^ uVar6 >> 0xd;
      uVar2 = (uVar2 - uVar5) - uVar6 ^ uVar5 >> 0xc;
      uVar6 = (uVar6 - uVar2) - uVar5 ^ uVar2 << 0x10;
      uVar5 = (uVar5 - uVar6) - uVar2 ^ uVar6 >> 5;
      uVar2 = (uVar2 - uVar5) - uVar6 ^ uVar5 >> 3;
      uVar6 = (uVar6 - uVar2) - uVar5 ^ uVar2 << 10;
      iVar3 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>,FDefaultSetAllocator>
              ::FindIndexByHash<UE::Mass::FTypeHandle>
                        ((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>,FDefaultSetAllocator>
                          *)&this->TypeDataMap,(uVar5 - uVar6) - uVar2 ^ uVar6 >> 0xf,
                         (FTypeHandle *)&local_res10);
      if (iVar3 != -1) {
        return true;
      }
    }
  }
  return false;
}

// RegisterBuiltInTypes @ 14723e890

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UE::Mass::FTypeManager::RegisterBuiltInTypes(FTypeManager *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnRegisterBuiltInTypes,
             (FWriteAccessScope *)&local_28);
  bVar3 = false;
  OnRegisterBuiltInTypes._28_4_ = OnRegisterBuiltInTypes._28_4_ + 1;
  uVar7 = OnRegisterBuiltInTypes._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnRegisterBuiltInTypes._16_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + OnRegisterBuiltInTypes._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnRegisterBuiltInTypes._8_8_), plVar1 == (longlong *)0x0)
          ) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,this), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnRegisterBuiltInTypes._28_4_ = OnRegisterBuiltInTypes._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnRegisterBuiltInTypes,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  this->bBuiltInTypesRegistered = true;
  return;
}

// RegisterType @ 14723fc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FTypeHandle __thiscall
UE::Mass::FTypeManager::RegisterType(FTypeManager *this,FRelationTypeTraits *param_1)

{
  FString *pFVar1;
  int iVar2;
  FTypeInfo *pFVar3;
  UScriptStruct *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  undefined4 uVar8;
  bool bVar9;
  FArchetypeGroupType FVar10;
  UPackage *pUVar11;
  FString *pFVar12;
  FTypeInfo *pFVar13;
  undefined4 extraout_var;
  FTypeHandle FVar14;
  ulonglong uVar15;
  FRelationTypeTraits *in_R8;
  undefined1 auStack_1f8 [32];
  FScriptContainerElement *local_1d8;
  undefined1 local_1c8 [8];
  FWeakObjectPtr local_1c0;
  FTypeManager *local_1b8;
  FNameEntryId local_1b0;
  uint uStack_1ac;
  undefined1 local_1a8 [4];
  FName local_1a4;
  FName local_19c;
  FName local_194;
  FName local_18c;
  FTypeInfo *local_180;
  FWeakObjectPtr local_178;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  undefined8 local_118;
  FRelationTypeTraits local_108;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFVar3 = (FTypeInfo *)(in_R8->RelationTagType).Val;
  local_1b8 = this;
  if (0 < AITestSuite::TestsInProgress) {
    if (pFVar3 != (FTypeInfo *)0x0) {
      if (Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassRelation,(UObject *)pUVar11,
                             L"MassRelation");
        if (Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton == (UScriptStruct *)0x0)
        goto LAB_14723fd21;
      }
      iVar2 = (int)(Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton)->_padding_;
      if ((*(int *)&(pFVar3->Traits).field_0x28 < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)&(pFVar3->Traits).field_0x20 + (longlong)iVar2 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton)->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) goto LAB_14723fe34;
    }
LAB_14723fd21:
    if (1 < (byte)LogTestableEnsures._0_1_) {
      local_1a4.ComparisonIndex.Value = *(uint *)&(pFVar3->Traits).field_0x8;
      local_1a4.Number = *(uint *)&(pFVar3->Traits).field_0xc;
      ::FName::ToString(&local_1a4,&local_170);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14723fd6e;
  }
  if (pFVar3 != (FTypeInfo *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar11 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassRelation,(UObject *)pUVar11,
                           L"MassRelation");
      if (Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14723fdd4;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton)->_padding_;
    if ((*(int *)&(pFVar3->Traits).field_0x28 < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)&(pFVar3->Traits).field_0x20 + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton)->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14723fe34;
  }
LAB_14723fdd4:
  local_19c.ComparisonIndex.Value = *(uint *)&(pFVar3->Traits).field_0x8;
  local_19c.Number = *(uint *)&(pFVar3->Traits).field_0xc;
  ::FName::ToString(&local_19c,&local_160);
  local_1d8 = (FScriptContainerElement *)L"";
  if (local_160.Data.ArrayNum != 0) {
    local_1d8 = local_160.Data.AllocatorInstance.Data;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("UE::Mass::IsA<FMassRelation>(InType)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassTypeManager.cpp"
                     ,0x56,L"%s is not a valid relation type");
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (bVar9) {
    pcVar6 = (code *)swi(3);
    FVar14.TypeKey.ObjectKey = (TObjectKey<UStruct_const_>)(*pcVar6)();
    return (FTypeHandle)FVar14.TypeKey.ObjectKey;
  }
LAB_14723fe34:
  pUVar4 = (in_R8->RelationFragmentType).Val;
  if (AITestSuite::TestsInProgress < 1) {
    if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar11 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassRelationFragment,(UObject *)pUVar11,
                           L"MassRelationFragment");
      if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton !=
          (UScriptStruct *)0x0) goto LAB_14723ff2f;
    }
    else {
LAB_14723ff2f:
      iVar2 = (int)(Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton)->
                   _padding_;
      if (((int)pUVar4->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton)->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) goto LAB_14723ffb7;
    }
    local_18c = (FName)((in_R8->RelationFragmentType).Val)->_padding_;
    ::FName::ToString(&local_18c,&local_140);
    local_1d8 = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      local_1d8 = local_140.Data.AllocatorInstance.Data;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeTraits.RelationFragmentType->IsChildOf(FMassRelationFragment::StaticStruct())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassTypeManager.cpp"
                       ,0x5a,
                       L"%s is not a valid TypeTraits.RelationFragmentType, needs to derive from FMassRelationFragment"
                      );
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      FVar14.TypeKey.ObjectKey = (TObjectKey<UStruct_const_>)(*pcVar6)();
      return (FTypeHandle)FVar14.TypeKey.ObjectKey;
    }
    goto LAB_14723ffb7;
  }
  if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar11 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassRelationFragment,(UObject *)pUVar11,
                         L"MassRelationFragment");
    if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14723fe78;
  }
  else {
LAB_14723fe78:
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton)->_padding_
    ;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton)->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
LAB_14723ffb7:
      if (in_R8->RelationName == (FName)0x0) {
        uVar8 = *(undefined4 *)&(pFVar3->Traits).field_0xc;
        (in_R8->RelationName).ComparisonIndex =
             (FNameEntryId)*(undefined4 *)&(pFVar3->Traits).field_0x8;
        (in_R8->RelationName).Number = uVar8;
        pFVar12 = ::FName::ToString(&in_R8->RelationName,&local_130);
        pFVar1 = &in_R8->DebugInFix;
        if (pFVar1 != pFVar12) {
          pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          (pFVar1->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
          (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (in_R8->DebugInFix).Data.ArrayNum = (pFVar12->Data).ArrayNum;
          (in_R8->DebugInFix).Data.ArrayMax = (pFVar12->Data).ArrayMax;
          (pFVar12->Data).ArrayNum = 0;
          (pFVar12->Data).ArrayMax = 0;
        }
        this = local_1b8;
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
          this = local_1b8;
        }
      }
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)pFVar3);
      }
      local_1c0.ObjectIndex = 0;
      local_1c0.ObjectSerialNumber = 0;
      local_180 = pFVar3;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)pFVar3);
      }
      FWeakObjectPtr::operator=(&local_1c0,(FObjectPtr)&local_180);
      local_178 = local_1c0;
      pFVar13 = TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
                ::Find((TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
                        *)&this->TypeDataMap,(FTypeHandle *)&local_178);
      if ((this->bBuiltInTypesRegistered != false) && (pFVar13 != (FTypeInfo *)0x0)) {
        if (AITestSuite::TestsInProgress < 1) {
          ``UE::Mass::FTypeManager::RegisterType'::__l76::<lambda_1>::operator()'::__l16::<lambda_1>
          ::operator()(local_1c8);
        }
        else if (2 < (byte)LogTestableEnsures._0_1_) {
          Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Modifying_relat_151580190,
                     (FLogCategoryBase *)&LogTestableEnsures);
          (param_1->RelationName).ComparisonIndex = 0;
          (param_1->RelationName).Number = 0;
          return (FTypeHandle)(TObjectKey<UStruct_const_>)param_1;
        }
        (param_1->RelationName).ComparisonIndex = 0;
        (param_1->RelationName).Number = 0;
        return (FTypeHandle)(TObjectKey<UStruct_const_>)param_1;
      }
      local_58 = 0;
      local_118 = *(undefined8 *)&(pFVar3->Traits).field_0x8;
      if ((in_R8->RegisteredGroupType).Identifier == 0xffffffff) {
        FVar10 = FMassEntityManager::FindOrAddArchetypeGroupType
                           (this->OuterEntityManager,(FName)local_1a8);
        (in_R8->RegisteredGroupType).Identifier = *(uint *)CONCAT44(extraout_var,FVar10.Identifier);
      }
      uVar15 = (ulonglong)local_58;
      if ((3 < uVar15) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        FVar14.TypeKey.ObjectKey = (TObjectKey<UStruct_const_>)(*pcVar6)();
        return (FTypeHandle)FVar14.TypeKey.ObjectKey;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15] !=
          Core::Private::TDestructorCaller<UE::Mass::FEmptyTypeTraits>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(&local_108);
      }
      Relations::FRelationTypeTraits::FRelationTypeTraits(&local_108,in_R8);
      local_58 = 3;
      RegisterTypeInternal(this,(UStruct *)&local_1b0,pFVar3);
      FVar7.Number = uStack_1ac;
      FVar7.ComparisonIndex.Value = local_1b0.Value;
      if (((local_1b0.Value != 0) || (uStack_1ac != 0)) && (this->bBuiltInTypesRegistered != false))
      {
        FMassEntityManager::OnNewTypeRegistered(this->OuterEntityManager,(FTypeHandle)FVar7);
      }
      param_1->RelationName = FVar7;
      uVar15 = (ulonglong)local_58;
      if ((3 < local_58) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        FVar14.TypeKey.ObjectKey = (TObjectKey<UStruct_const_>)(*pcVar6)();
        return (FTypeHandle)FVar14.TypeKey.ObjectKey;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15] ==
          Core::Private::TDestructorCaller<UE::Mass::FEmptyTypeTraits>::Destruct) {
        return (FTypeHandle)(TObjectKey<UStruct_const_>)param_1;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(&local_108);
      return (FTypeHandle)(TObjectKey<UStruct_const_>)param_1;
    }
  }
  if (1 < (byte)LogTestableEnsures._0_1_) {
    local_194 = (FName)((in_R8->RelationFragmentType).Val)->_padding_;
    ::FName::ToString(&local_194,&local_150);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
      (param_1->RelationName).ComparisonIndex = 0;
      (param_1->RelationName).Number = 0;
      return (FTypeHandle)(TObjectKey<UStruct_const_>)param_1;
    }
  }
LAB_14723fd6e:
  (param_1->RelationName).ComparisonIndex = 0;
  (param_1->RelationName).Number = 0;
  return (FTypeHandle)(TObjectKey<UStruct_const_>)param_1;
}

// RegisterType @ 147240210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FTypeHandle __thiscall
UE::Mass::FTypeManager::RegisterType
          (FTypeManager *this,TNotNull<UStruct_const_*> param_1,FSharedFragmentTypeTraits *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FTypeHandle FVar5;
  ulonglong uVar6;
  undefined1 *in_R9;
  undefined1 auStack_158 [32];
  FScriptContainerElement *local_138;
  FName local_128;
  FName local_120;
  FString local_118;
  FString local_108;
  undefined8 local_f8;
  undefined1 local_e8 [176];
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (AITestSuite::TestsInProgress < 1) {
    if (param_2 != (FSharedFragmentTypeTraits *)0x0) {
      if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar4,
                             L"MassSharedFragment");
        if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_147240370;
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_
      ;
      if ((*(int *)(param_2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(param_2 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_1472403e8;
    }
LAB_147240370:
    local_120 = *(FName *)(param_2 + 0x18);
    ::FName::ToString(&local_120,&local_108);
    local_138 = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      local_138 = local_108.Data.AllocatorInstance.Data;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Mass::IsA<FMassSharedFragment>(InType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassTypeManager.cpp"
                       ,0x4a,L"%s is not a valid shared fragment type");
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.TypeKey.ObjectKey = (TObjectKey<UStruct_const_>)(*pcVar2)();
      return (FTypeHandle)FVar5.TypeKey.ObjectKey;
    }
    goto LAB_1472403e8;
  }
  if (param_2 != (FSharedFragmentTypeTraits *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar4,
                           L"MassSharedFragment");
      if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1472402b2;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_;
    if ((*(int *)(param_2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1472403e8;
  }
LAB_1472402b2:
  if (1 < (byte)LogTestableEnsures._0_1_) {
    local_128 = *(FName *)(param_2 + 0x18);
    ::FName::ToString(&local_128,&local_118);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
LAB_1472403e8:
  local_f8 = *(undefined8 *)(param_2 + 0x18);
  local_e8[0] = *in_R9;
  local_38 = 2;
  RegisterTypeInternal(this,param_1,(FTypeInfo *)param_2);
  uVar6 = (ulonglong)local_38;
  if ((3 < local_38) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar5.TypeKey.ObjectKey = (TObjectKey<UStruct_const_>)(*pcVar2)();
    return (FTypeHandle)FVar5.TypeKey.ObjectKey;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] !=
      Core::Private::TDestructorCaller<UE::Mass::FSharedFragmentTypeTraits>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(local_e8);
  }
  return (FTypeHandle)(TObjectKey<UStruct_const_>)param_1.Val;
}

// RegisterType @ 1472404a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTypeHandle __thiscall
UE::Mass::FTypeManager::RegisterType
          (FTypeManager *this,TNotNull<UStruct_const_*> param_1,FSubsystemTypeTraits *param_2)

{
  code *pcVar1;
  bool bVar2;
  FTypeHandle FVar3;
  ulonglong uVar4;
  undefined2 *in_R9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined2 local_d8 [88];
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8 = *(undefined8 *)(param_2 + 0xc);
  local_d8[0] = *in_R9;
  local_28 = 1;
  RegisterTypeInternal(this,param_1,(FTypeInfo *)param_2);
  uVar4 = (ulonglong)local_28;
  if (3 < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.TypeKey.ObjectKey = (TObjectKey<UStruct_const_>)(*pcVar1)();
      return (FTypeHandle)FVar3.TypeKey.ObjectKey;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] !=
      Core::Private::TDestructorCaller<UE::Mass::FSubsystemTypeTraits>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(local_d8);
  }
  return (FTypeHandle)(TObjectKey<UStruct_const_>)param_1.Val;
}

// RegisterTypeInternal @ 147240570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FTypeHandle __thiscall
UE::Mass::FTypeManager::RegisterTypeInternal
          (FTypeManager *this,TNotNull<UStruct_const_*> param_1,FTypeInfo *param_2)

{
  TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
  *pTVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  bool bVar27;
  FTypeInfo *pFVar28;
  FTypeHandle FVar29;
  FName *in_R9;
  ulonglong uVar30;
  undefined1 auStack_238 [32];
  undefined1 local_218 [8];
  FWeakObjectPtr local_210;
  undefined8 local_208;
  undefined1 local_200 [8];
  FTypeInfo *local_1f8;
  FWeakObjectPtr local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong *local_1d8 [2];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_208 = 0;
  if (param_2 == (FTypeInfo *)0x0) {
    local_1f0.ObjectIndex = 0;
    local_1f0.ObjectSerialNumber = 0;
  }
  else {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_210.ObjectIndex = 0;
    local_210.ObjectSerialNumber = 0;
    local_1f8 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_210,(FObjectPtr)&local_1f8);
    local_1f0 = local_210;
  }
  (param_1.Val)->_padding_ = (longlong)local_1f0;
  pFVar28 = TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
            ::Find((TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
                    *)&this->TypeDataMap,(FTypeHandle *)&local_1f0);
  if (pFVar28 == (FTypeInfo *)0x0) {
    uVar30 = (ulonglong)(byte)in_R9[0x18].ComparisonIndex.Value;
    if (3 < uVar30) {
      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L"");
      if (bVar27) {
        pcVar3 = (code *)swi(3);
        FVar29.TypeKey.ObjectKey = (TObjectKey<UStruct_const_>)(*pcVar3)();
        return (FTypeHandle)FVar29.TypeKey.ObjectKey;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Mass::FSubsystemTypeTraits,UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar30) != '\0') {
      local_1e8 = (param_1.Val)->_padding_;
      TSet<UE::Mass::FTypeHandle,DefaultKeyFuncs<UE::Mass::FTypeHandle,0>,FDefaultSetAllocator>::
      Emplace<UE::Mass::FTypeHandle>
                (&this->SubsystemTypes,(FTypeHandle *)local_200,(bool *)&local_1e8);
    }
    local_1e0 = (param_1.Val)->_padding_;
    local_1d8[0] = &local_1e0;
    TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::Mass::FTypeHandle_&&,UE::Mass::FTypeInfo_&&>_>
              ((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>,FDefaultSetAllocator>
                *)&this->TypeDataMap,
               (TPairInitializer<UE::Mass::FTypeHandle_&&,UE::Mass::FTypeInfo_&&> *)(local_200 + 4),
               (bool *)local_1d8);
  }
  else if (this->bBuiltInTypesRegistered == false) {
    pTVar1 = &pFVar28->Traits;
    pFVar28->TypeName = *in_R9;
    if ((TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
         *)(in_R9 + 2) != pTVar1) {
      bVar2 = (byte)in_R9[0x18].ComparisonIndex.Value;
      local_58 = CONCAT71(local_58._1_7_,bVar2);
      if (3 < (ulonglong)bVar2) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x105,L"");
        if (bVar27) {
          pcVar3 = (code *)swi(3);
          FVar29.TypeKey.ObjectKey = (TObjectKey<UStruct_const_>)(*pcVar3)();
          return (FTypeHandle)FVar29.TypeKey.ObjectKey;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[bVar2])(&local_108,in_R9 + 2);
      local_1c8 = local_108;
      uStack_1c0 = uStack_100;
      local_1b8 = local_f8;
      uStack_1b0 = uStack_f0;
      local_1a8 = local_e8;
      uStack_1a0 = uStack_e0;
      local_198 = local_d8;
      uStack_190 = uStack_d0;
      local_188 = local_c8;
      uStack_180 = uStack_c0;
      local_178 = local_b8;
      uStack_170 = uStack_b0;
      local_168 = local_a8;
      uStack_160 = uStack_a0;
      local_158 = local_98;
      uStack_150 = uStack_90;
      local_148 = local_88;
      uStack_140 = uStack_80;
      local_138 = local_78;
      uStack_130 = uStack_70;
      local_128 = local_68;
      uStack_120 = uStack_60;
      uVar4 = *(undefined8 *)&(pFVar28->Traits).field_0x10;
      uVar5 = *(undefined8 *)&(pFVar28->Traits).field_0x18;
      local_118 = local_58;
      uStack_110 = uStack_50;
      uVar6 = *(undefined8 *)pTVar1;
      uVar7 = *(undefined8 *)&(pFVar28->Traits).field_0x8;
      uVar8 = *(undefined8 *)&(pFVar28->Traits).field_0x20;
      uVar9 = *(undefined8 *)&(pFVar28->Traits).field_0x28;
      uVar10 = *(undefined8 *)&(pFVar28->Traits).field_0x30;
      uVar11 = *(undefined8 *)&(pFVar28->Traits).field_0x38;
      uVar12 = *(undefined8 *)&(pFVar28->Traits).field_0x40;
      uVar13 = *(undefined8 *)&(pFVar28->Traits).field_0x48;
      uVar14 = *(undefined8 *)&(pFVar28->Traits).field_0x50;
      uVar15 = *(undefined8 *)&(pFVar28->Traits).field_0x58;
      uVar16 = *(undefined8 *)&(pFVar28->Traits).field_0x60;
      uVar17 = *(undefined8 *)&(pFVar28->Traits).field_0x68;
      uVar18 = *(undefined8 *)&(pFVar28->Traits).field_0x70;
      uVar19 = *(undefined8 *)&(pFVar28->Traits).field_0x78;
      uVar20 = *(undefined8 *)&(pFVar28->Traits).field_0x80;
      uVar21 = *(undefined8 *)&(pFVar28->Traits).field_0x88;
      uVar22 = *(undefined8 *)&(pFVar28->Traits).field_0x90;
      uVar23 = *(undefined8 *)&(pFVar28->Traits).field_0x98;
      uVar24 = *(undefined8 *)&(pFVar28->Traits).field_0xa0;
      uVar25 = *(undefined8 *)&(pFVar28->Traits).field_0xa8;
      uVar30 = *(ulonglong *)&(pFVar28->Traits).TypeIndex;
      uVar26 = *(undefined8 *)&(pFVar28->Traits).field_0xb8;
      *(undefined8 *)pTVar1 = local_108;
      *(undefined8 *)&(pFVar28->Traits).field_0x8 = uStack_100;
      *(undefined8 *)&(pFVar28->Traits).field_0x10 = local_f8;
      *(undefined8 *)&(pFVar28->Traits).field_0x18 = uStack_f0;
      *(undefined8 *)&(pFVar28->Traits).field_0x20 = local_e8;
      *(undefined8 *)&(pFVar28->Traits).field_0x28 = uStack_e0;
      *(undefined8 *)&(pFVar28->Traits).field_0x30 = local_d8;
      *(undefined8 *)&(pFVar28->Traits).field_0x38 = uStack_d0;
      *(undefined8 *)&(pFVar28->Traits).field_0x40 = local_c8;
      *(undefined8 *)&(pFVar28->Traits).field_0x48 = uStack_c0;
      *(undefined8 *)&(pFVar28->Traits).field_0x50 = local_b8;
      *(undefined8 *)&(pFVar28->Traits).field_0x58 = uStack_b0;
      *(undefined8 *)&(pFVar28->Traits).field_0x60 = local_a8;
      *(undefined8 *)&(pFVar28->Traits).field_0x68 = uStack_a0;
      *(undefined8 *)&(pFVar28->Traits).field_0x70 = local_98;
      *(undefined8 *)&(pFVar28->Traits).field_0x78 = uStack_90;
      *(undefined8 *)&(pFVar28->Traits).field_0x80 = local_88;
      *(undefined8 *)&(pFVar28->Traits).field_0x88 = uStack_80;
      *(undefined8 *)&(pFVar28->Traits).field_0x90 = local_78;
      *(undefined8 *)&(pFVar28->Traits).field_0x98 = uStack_70;
      *(undefined8 *)&(pFVar28->Traits).field_0xa0 = local_68;
      *(undefined8 *)&(pFVar28->Traits).field_0xa8 = uStack_60;
      *(ulonglong *)&(pFVar28->Traits).TypeIndex = local_58;
      *(undefined8 *)&(pFVar28->Traits).field_0xb8 = uStack_50;
      local_108 = uVar6;
      uStack_100 = uVar7;
      local_f8 = uVar4;
      uStack_f0 = uVar5;
      local_e8 = uVar8;
      uStack_e0 = uVar9;
      local_d8 = uVar10;
      uStack_d0 = uVar11;
      local_c8 = uVar12;
      uStack_c0 = uVar13;
      local_b8 = uVar14;
      uStack_b0 = uVar15;
      local_a8 = uVar16;
      uStack_a0 = uVar17;
      local_98 = uVar18;
      uStack_90 = uVar19;
      local_88 = uVar20;
      uStack_80 = uVar21;
      local_78 = uVar22;
      uStack_70 = uVar23;
      local_68 = uVar24;
      uStack_60 = uVar25;
      local_58 = uVar30;
      uStack_50 = uVar26;
      if (3 < (uVar30 & 0xff)) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L"");
        if (bVar27) {
          pcVar3 = (code *)swi(3);
          FVar29.TypeKey.ObjectKey = (TObjectKey<UStruct_const_>)(*pcVar3)();
          return (FTypeHandle)FVar29.TypeKey.ObjectKey;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar30 & 0xff])(&local_108);
    }
  }
  else if (AITestSuite::TestsInProgress < 1) {
    ``UE::Mass::FTypeManager::RegisterTypeInternal'::__l10::<lambda_1>::operator()'::__l16::
    <lambda_1>::operator()(local_218);
  }
  else if (2 < (byte)LogTestableEnsures._0_1_) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Registered_type_15157fe38,
               (FLogCategoryBase *)&LogTestableEnsures);
  }
  return (FTypeHandle)(TObjectKey<UStruct_const_>)param_1.Val;
}

// operator() @ 150502f30

bool __thiscall
`UE::Mass::FTypeManager::GetRelationTypeHandle'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3706402952194293627>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3706402952194293627>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150502fa8;
    }
  }
  bVar2 = false;
LAB_150502fa8:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

