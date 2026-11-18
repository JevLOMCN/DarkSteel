// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticStruct @ 146e78ce0

UScriptStruct * __cdecl FGenericTeamId::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGenericTeamId.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FGenericTeamId.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGenericTeamId,(UObject *)pUVar1,L"GenericTeamId"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FGenericTeamId.OuterSingleton;
}

// GetAttitude @ 146e8d620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

Type __cdecl FGenericTeamId::GetAttitude(AActor *param_1,AActor *param_2)

{
  Type TVar1;
  UClass *pUVar2;
  longlong *plVar3;
  
  if (param_1 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if ((plVar3 != (longlong *)0x0) && (param_2 != (AActor *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146e8d666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      TVar1 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2,*(code **)(*plVar3 + 0x20));
      return TVar1;
    }
  }
  return Neutral;
}

// GetTeamIdentifier @ 146e90000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGenericTeamId __cdecl FGenericTeamId::GetTeamIdentifier(AActor *param_1)

{
  UClass *pUVar1;
  longlong *plVar2;
  UObjectBaseUtility *in_RDX;
  
  if (in_RDX != (UObjectBaseUtility *)0x0) {
    pUVar1 = Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress(in_RDX,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      return (FGenericTeamId)(uchar)param_1;
    }
  }
  *(uchar *)&param_1->_padding_ = NoTeam.TeamID;
  return (FGenericTeamId)(uchar)param_1;
}

// ResetAttitudeSolver @ 146e9d280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FGenericTeamId::ResetAttitudeSolver(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_48._28_4_ = AttitudeSolverImpl._28_4_;
  local_48._24_4_ = AttitudeSolverImpl._24_4_;
  local_48._20_4_ = AttitudeSolverImpl._20_4_;
  local_48._16_4_ = AttitudeSolverImpl._16_4_;
  uVar2 = AttitudeSolverImpl._8_8_;
  local_48._0_8_ = AttitudeSolverImpl._0_8_;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar1 = CONCAT44(AttitudeSolverImpl._36_4_,AttitudeSolverImpl._32_4_);
  local_48._40_8_ = CONCAT44(AttitudeSolverImpl._44_4_,AttitudeSolverImpl._40_4_);
  AttitudeSolverImpl._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<enum_ETeamAttitude::Type_(__cdecl*)(FGenericTeamId,FGenericTeamId),enum_ETeamAttitude::Type,FGenericTeamId,FGenericTeamId>
       ::Call;
  AttitudeSolverImpl._8_8_ = local_48._8_8_;
  AttitudeSolverImpl._32_4_ = local_48._32_4_;
  AttitudeSolverImpl._36_4_ = local_48._36_4_;
  AttitudeSolverImpl._40_4_ = 0;
  AttitudeSolverImpl._44_4_ = 0;
  AttitudeSolverImpl._16_4_ = 0x514b8260;
  AttitudeSolverImpl._20_4_ = 1;
  AttitudeSolverImpl._24_4_ = 0x46e87fa0;
  AttitudeSolverImpl._28_4_ = 1;
  local_48._8_8_ = uVar2;
  local_48._32_8_ = uVar1;
  if (local_48._0_8_ != 0) {
    plVar3 = (longlong *)(local_48 + 0x10);
    if ((longlong *)local_48._40_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_48._40_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// SetAttitudeSolver @ 146e9eb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericTeamId::SetAttitudeSolver
          (TFunction<ETeamAttitude::Type___cdecl(FGenericTeamId,FGenericTeamId)> *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48._0_8_ = *(undefined8 *)param_1;
  uStack_20 = (longlong *)0x0;
  if (local_48._0_8_ != 0) {
    puVar9 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar9)(puVar9,local_48 + 0x10);
  }
  uVar8 = AttitudeSolverImpl._28_4_;
  uVar7 = AttitudeSolverImpl._24_4_;
  uVar6 = AttitudeSolverImpl._20_4_;
  uVar5 = AttitudeSolverImpl._16_4_;
  uVar4 = AttitudeSolverImpl._8_8_;
  uVar3 = AttitudeSolverImpl._0_8_;
  uVar1 = CONCAT44(AttitudeSolverImpl._36_4_,AttitudeSolverImpl._32_4_);
  plVar2 = (longlong *)CONCAT44(AttitudeSolverImpl._44_4_,AttitudeSolverImpl._40_4_);
  AttitudeSolverImpl._0_8_ = local_48._0_8_;
  AttitudeSolverImpl._8_8_ = local_48._8_8_;
  AttitudeSolverImpl._32_4_ = local_48._32_4_;
  AttitudeSolverImpl._36_4_ = local_48._36_4_;
  AttitudeSolverImpl._40_4_ = (undefined4)uStack_20;
  AttitudeSolverImpl._44_4_ = uStack_20._4_4_;
  AttitudeSolverImpl._16_4_ = local_48._16_4_;
  AttitudeSolverImpl._20_4_ = local_48._20_4_;
  AttitudeSolverImpl._24_4_ = local_48._24_4_;
  AttitudeSolverImpl._28_4_ = local_48._28_4_;
  local_48._0_8_ = uVar3;
  local_48._8_8_ = uVar4;
  local_48._16_4_ = uVar5;
  local_48._20_4_ = uVar6;
  local_48._24_4_ = uVar7;
  local_48._28_4_ = uVar8;
  local_48._32_8_ = uVar1;
  uStack_20 = plVar2;
  if (uVar3 != 0) {
    plVar10 = (longlong *)(local_48 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      plVar10 = plVar2;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// GetAttitude @ 146fabea0

Type __cdecl FGenericTeamId::GetAttitude(FGenericTeamId param_1,FGenericTeamId param_2)

{
  undefined8 uVar1;
  Type TVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uchar local_res18 [8];
  uchar local_res20 [8];
  
  if (AttitudeSolverImpl._0_8_ != 0) {
    local_res18[0] = param_2.TeamID;
    local_res20[0] = param_1.TeamID;
    UE::Core::Private::Function::CheckCallable((void *)AttitudeSolverImpl._0_8_);
    uVar1 = AttitudeSolverImpl._0_8_;
    plVar4 = (longlong *)&AttitudeSolverImpl.field_0x10;
    if (AttitudeSolverImpl._40_8_ != 0) {
      plVar4 = (longlong *)AttitudeSolverImpl._40_8_;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    TVar2 = (*(code *)uVar1)(uVar3,local_res20,local_res18);
    return TVar2;
  }
  return Neutral;
}

