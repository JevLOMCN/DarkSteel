// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 149412de0

UScriptStruct * __cdecl FNiagaraStatelessExpressionVec2Binding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Binding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Binding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Binding,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionVec2Binding");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Binding.OuterSingleton;
}

// ~FNiagaraStatelessExpressionVec2Binding @ 14942be90

void __thiscall
FNiagaraStatelessExpressionVec2Binding::~FNiagaraStatelessExpressionVec2Binding
          (FNiagaraStatelessExpressionVec2Binding *this)

{
  return;
}

// BuildInternal @ 1494384d0

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionVec2Binding::BuildInternal
          (FNiagaraStatelessExpressionVec2Binding *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  UPackage *pUVar1;
  FNiagaraVariableBase local_48;
  TObjectPtr<UObject>_u_0 local_38;
  ushort local_30;
  uchar local_2e;
  short local_2c;
  short local_2a;
  int local_28;
  uint local_24;
  undefined **local_20;
  FName local_18;
  int local_10;
  
  local_20 = &___7FNiagaraStatelessExpressionVec2Binding__6B_;
  local_18 = this->A;
  local_38 = FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0)
    ;
  }
  local_30 = FNiagaraTypeDefinition::Vec2Def.UnderlyingType;
  local_2e = FNiagaraTypeDefinition::Vec2Def.Flags;
  local_2c = FNiagaraTypeDefinition::Vec2Def.Size;
  local_2a = FNiagaraTypeDefinition::Vec2Def.Alignment;
  local_28 = FNiagaraTypeDefinition::Vec2Def.RegisteredTypeDefIndex;
  local_24 = FNiagaraTypeDefinition::Vec2Def.UnderlyingTypePathNameHash;
  local_48.Name = this->A;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_48.TypeDefHandle,(FNiagaraTypeDefinition *)&local_38.ObjectPtr);
  local_10 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding(param_1,&local_48);
  local_10 = local_10 << 2;
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Binding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Binding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Binding,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionVec2Binding");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Binding.OuterSingleton
             ,(uchar *)&local_20);
  return __return_storage_ptr__;
}

// EvaluateInternal @ 149442540

TVector2<float> __thiscall
FNiagaraStatelessExpressionVec2Binding::EvaluateInternal
          (FNiagaraStatelessExpressionVec2Binding *this,FEvaluateContext *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TVector2<float> TVar5;
  longlong *in_R8;
  
  iVar1 = this->ParameterOffset;
  lVar2 = *in_R8;
  if ((iVar1 < 0) || ((ulonglong)(longlong)*(int *)(lVar2 + 0x28) < (longlong)iVar1 + 8U)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x17f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.field0_0x0 = (TVector2<float>_u_0)(*pcVar3)();
      return (TVector2<float>)TVar5.field0_0x0;
    }
  }
  param_1->ParameterStore =
       *(FNiagaraParameterStore **)((longlong)iVar1 + *(longlong *)(lVar2 + 0x20));
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// IsConstant @ 149453970

bool __thiscall
FNiagaraStatelessExpressionVec2Binding::IsConstant(FNiagaraStatelessExpressionVec2Binding *this)

{
  return false;
}

