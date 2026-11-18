// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 5

// ~IGenericTeamAgentInterface @ 146e81aa0

void __thiscall
IGenericTeamAgentInterface::~IGenericTeamAgentInterface(IGenericTeamAgentInterface *this)

{
  *this = (IGenericTeamAgentInterface)&___7IGenericTeamAgentInterface__6B_;
  return;
}

// GetGenericTeamId @ 146e8e0d0

FGenericTeamId __thiscall
IGenericTeamAgentInterface::GetGenericTeamId(IGenericTeamAgentInterface *this)

{
  uchar *in_RDX;
  
  *in_RDX = FGenericTeamId::NoTeam.TeamID;
  return (FGenericTeamId)(uchar)in_RDX;
}

// GetTeamAttitudeTowards @ 146e8ff40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

Type __thiscall
IGenericTeamAgentInterface::GetTeamAttitudeTowards(IGenericTeamAgentInterface *this,AActor *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  Type TVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  if (param_1 != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar4);
    if (plVar5 != (longlong *)0x0) {
      puVar6 = (undefined1 *)(**(code **)(*plVar5 + 0x18))(plVar5,local_res20);
      uVar1 = *puVar6;
      puVar6 = (undefined1 *)(**(code **)((longlong)*this + 0x18))(this,local_18);
      local_res18[0] = *puVar6;
      if (FGenericTeamId::AttitudeSolverImpl._0_8_ != 0) {
        local_res10[0] = uVar1;
        UE::Core::Private::Function::CheckCallable((void *)FGenericTeamId::AttitudeSolverImpl._0_8_)
        ;
        uVar2 = FGenericTeamId::AttitudeSolverImpl._0_8_;
        plVar5 = (longlong *)&FGenericTeamId::AttitudeSolverImpl.field_0x10;
        if (FGenericTeamId::AttitudeSolverImpl._40_8_ != 0) {
          plVar5 = (longlong *)FGenericTeamId::AttitudeSolverImpl._40_8_;
        }
        uVar7 = (**(code **)(*plVar5 + 8))();
        TVar3 = (*(code *)uVar2)(uVar7,local_res18,local_res10);
        return TVar3;
      }
    }
  }
  return Neutral;
}

// SetGenericTeamId @ 146e9f060

void __thiscall
IGenericTeamAgentInterface::SetGenericTeamId
          (IGenericTeamAgentInterface *this,FGenericTeamId *param_1)

{
  return;
}

// _getUObject @ 146ea61b0

UObject * __thiscall IGenericTeamAgentInterface::_getUObject(IGenericTeamAgentInterface *this)

{
  return (UObject *)0x0;
}

