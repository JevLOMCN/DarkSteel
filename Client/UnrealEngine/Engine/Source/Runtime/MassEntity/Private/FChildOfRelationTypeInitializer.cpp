// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// RegisterType @ 14723fa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

void __cdecl
UE::Mass::Relations::FChildOfRelationTypeInitializer::RegisterType(FTypeManager *param_1)

{
  FArchetypeGroupType FVar1;
  UPackage *pUVar2;
  undefined4 extraout_var;
  FWeakObjectPtr FVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [32];
  UScriptStruct *local_b8;
  ERemovalPolicy local_b0;
  UScriptStruct *local_a8;
  undefined2 local_a0;
  EExternalMappingRequired local_9e;
  undefined8 local_98;
  undefined2 local_90;
  undefined1 local_8e;
  TFunction<bool___cdecl(FMassEntityManager_&)> local_88;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  FWeakObjectPtr FStack_40;
  FWeakObjectPtr local_38;
  FWeakObjectPtr FStack_30;
  void *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassChildOfRelation,(UObject *)pUVar2,
                         L"MassChildOfRelation");
  }
  if (Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton != (UScriptStruct *)0x0)
  {
    local_d8._16_8_ = (UScriptStruct *)0x0;
    local_d8._24_8_ = Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassRelationFragment,(UObject *)pUVar2,
                           L"MassRelationFragment");
    }
    local_b8 = Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton !=
        (UScriptStruct *)0x0) {
      local_b0 = CleanUp;
      local_48.ObjectIndex = 0;
      local_48.ObjectSerialNumber = 0;
      FStack_40.ObjectIndex = 0;
      FStack_40.ObjectSerialNumber = 0;
      local_38 = (FWeakObjectPtr)0x0;
      FStack_30.ObjectIndex = 0;
      FStack_30.ObjectSerialNumber = 0;
      local_a8 = (UScriptStruct *)0x0;
      local_a0._0_1_ = CleanUp;
      local_a0._1_1_ = true;
      local_9e = Default;
      local_98._0_1_ = false;
      local_98._1_3_ = 0;
      local_98._4_4_ = 0;
      local_90 = 0x100;
      local_8e = 1;
      local_88._0_1_ = 0;
      local_88._4_4_ = 0xffffffff;
      local_88._16_8_ = 0;
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_28 = (void *)0x0;
      local_20 = 0;
      local_d8._0_8_ = UMassRelationEntityDestruction::StaticClass();
      if ((GC::GIsIncrementalReachabilityPending != false) && ((FName)local_d8._0_8_ != (FName)0x0))
      {
        GC::MarkAsReachable((UObject *)local_d8._0_8_);
      }
      FWeakObjectPtr::operator=(&FStack_40,(FObjectPtr)local_d8);
      local_d8._0_8_ = UMassRelationRoleDestruction::StaticClass();
      if ((GC::GIsIncrementalReachabilityPending != false) && ((FName)local_d8._0_8_ != (FName)0x0))
      {
        GC::MarkAsReachable((UObject *)local_d8._0_8_);
      }
      FWeakObjectPtr::operator=(&FStack_30,(FObjectPtr)local_d8);
      local_38 = FStack_30;
      local_90 = 0x101;
      local_a0._0_1_ = CleanUp;
      local_a0._1_1_ = false;
      if (Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassChildOfFragment,(UObject *)pUVar2,
                             L"MassChildOfFragment");
      }
      local_88._0_1_ = 1;
      local_a8 = Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton;
      ::FName::FName((FName *)local_d8,"ChildOf");
      local_d8._16_8_ = local_d8._0_8_;
      FVar1 = FMassEntityManager::FindOrAddArchetypeGroupType
                        (param_1->OuterEntityManager,(FName)local_d8);
      local_88._4_4_ = *(undefined4 *)CONCAT44(extraout_var,FVar1.Identifier);
      local_d8._0_8_ = UMassChildOfRelationEntityCreation::StaticClass();
      if ((GC::GIsIncrementalReachabilityPending != false) && ((FName)local_d8._0_8_ != (FName)0x0))
      {
        GC::MarkAsReachable((UObject *)local_d8._0_8_);
      }
      FWeakObjectPtr::operator=(&local_48,(FObjectPtr)local_d8);
      FTypeManager::RegisterType(param_1,(FRelationTypeTraits *)local_d8);
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
      if (local_88._16_8_ != 0) {
        FVar3 = (FWeakObjectPtr)&local_88.field_0x20;
        if (local_50 != (FWeakObjectPtr)0x0) {
          FVar3 = local_50;
        }
        (**(code **)(*(longlong *)FVar3 + 0x10))();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

