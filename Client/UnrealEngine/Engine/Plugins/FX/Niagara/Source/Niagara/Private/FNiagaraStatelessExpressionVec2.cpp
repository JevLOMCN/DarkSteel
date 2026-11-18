// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 149412ca0

UScriptStruct * __cdecl FNiagaraStatelessExpressionVec2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2,(UObject *)pUVar1
                         ,L"NiagaraStatelessExpressionVec2");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2.OuterSingleton;
}

// Build @ 1494315a0

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionVec2::Build
          (FNiagaraStatelessExpressionVec2 *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  UPackage *pUVar3;
  FNiagaraParameterStore *local_res8;
  undefined1 local_res20 [8];
  undefined **local_b8;
  undefined8 local_b0;
  FInstancedStruct local_a8;
  FNiagaraParameterStore local_98;
  
  FInstancedStruct::FInstancedStruct(&local_a8);
  cVar1 = (**(code **)((longlong)*this + 0x20))(this);
  if (cVar1 == '\0') {
    (**(code **)((longlong)*this + 0x28))(this,__return_storage_ptr__,param_1);
  }
  else {
    local_b8 = &___7FNiagaraStatelessExpressionVec2Constant__6B_;
    FNiagaraParameterStore::FNiagaraParameterStore(&local_98);
    local_res8 = &local_98;
    puVar2 = (undefined8 *)(**(code **)((longlong)*this + 0x30))(this,local_res20,&local_res8);
    local_b0 = *puVar2;
    FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
    if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Constant,
                           (UObject *)pUVar3,L"NiagaraStatelessExpressionVec2Constant");
    }
    FInstancedStruct::InitializeAs
              (__return_storage_ptr__,
               Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.
               OuterSingleton,(uchar *)&local_b8);
    FNiagaraParameterStore::~FNiagaraParameterStore(&local_98);
  }
  FInstancedStruct::Reset(&local_a8);
  return __return_storage_ptr__;
}

// BuildInternal @ 1494382b0

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionVec2::BuildInternal
          (FNiagaraStatelessExpressionVec2 *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstancedStruct *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\Expressions\\NiagaraStatelessExpressionVec2.h"
                     ,0x14,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInstancedStruct *)(*pcVar1)();
    return pFVar3;
  }
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Evaluate @ 149441cb0

void __thiscall
FNiagaraStatelessExpressionVec2::Evaluate
          (FNiagaraStatelessExpressionVec2 *this,FEvaluateContext *param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)(**(code **)((longlong)*this + 0x30))(this,local_res8,param_1);
  *(undefined8 *)param_2 = *puVar1;
  return;
}

// EvaluateInternal @ 149442450

TVector2<float> __thiscall
FNiagaraStatelessExpressionVec2::EvaluateInternal
          (FNiagaraStatelessExpressionVec2 *this,FEvaluateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector2<float> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\Expressions\\NiagaraStatelessExpressionVec2.h"
                     ,0x15,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
    return (TVector2<float>)TVar3.field0_0x0;
  }
  param_1->ParameterStore =
       (FNiagaraParameterStore *)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// GetOutputTypeDef @ 14944aba0

FNiagaraTypeDefinition * __thiscall
FNiagaraStatelessExpressionVec2::GetOutputTypeDef
          (FNiagaraStatelessExpressionVec2 *this,FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0)
    ;
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::Vec2Def.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::Vec2Def.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::Vec2Def.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::Vec2Def.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::Vec2Def.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::Vec2Def.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

