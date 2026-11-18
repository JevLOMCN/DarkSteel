// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 149410980

UScriptStruct * __cdecl FNiagaraStatelessExpressionFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloat,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionFloat");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloat.OuterSingleton;
}

// Build @ 1494314a0

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionFloat::Build
          (FNiagaraStatelessExpressionFloat *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  char cVar1;
  UPackage *pUVar2;
  FNiagaraParameterStore *local_res8;
  undefined **local_b8;
  undefined4 local_b0;
  FInstancedStruct local_a8;
  FNiagaraParameterStore local_98;
  
  FInstancedStruct::FInstancedStruct(&local_a8);
  cVar1 = (**(code **)((longlong)*this + 0x20))(this);
  if (cVar1 == '\0') {
    (**(code **)((longlong)*this + 0x28))(this,__return_storage_ptr__,param_1);
  }
  else {
    local_b8 = &___7FNiagaraStatelessExpressionFloatConstant__6B_;
    FNiagaraParameterStore::FNiagaraParameterStore(&local_98);
    local_res8 = &local_98;
    local_b0 = (**(code **)((longlong)*this + 0x30))(this,&local_res8);
    FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
    if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatConstant,
                           (UObject *)pUVar2,L"NiagaraStatelessExpressionFloatConstant");
    }
    FInstancedStruct::InitializeAs
              (__return_storage_ptr__,
               Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.
               OuterSingleton,(uchar *)&local_b8);
    FNiagaraParameterStore::~FNiagaraParameterStore(&local_98);
  }
  FInstancedStruct::Reset(&local_a8);
  return __return_storage_ptr__;
}

// BuildInternal @ 149437a00

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionFloat::BuildInternal
          (FNiagaraStatelessExpressionFloat *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstancedStruct *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\Expressions\\NiagaraStatelessExpressionFloat.h"
                     ,0x14,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInstancedStruct *)(*pcVar1)();
    return pFVar3;
  }
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Evaluate @ 149441c90

void __thiscall
FNiagaraStatelessExpressionFloat::Evaluate
          (FNiagaraStatelessExpressionFloat *this,FEvaluateContext *param_1,void *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)((longlong)*this + 0x30))();
  *(undefined4 *)param_2 = uVar1;
  return;
}

// EvaluateInternal @ 1494421a0

float __thiscall
FNiagaraStatelessExpressionFloat::EvaluateInternal
          (FNiagaraStatelessExpressionFloat *this,FEvaluateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\Expressions\\NiagaraStatelessExpressionFloat.h"
                     ,0x15,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return 0.0;
}

// GetOutputTypeDef @ 14944ab20

FNiagaraTypeDefinition * __thiscall
FNiagaraStatelessExpressionFloat::GetOutputTypeDef
          (FNiagaraStatelessExpressionFloat *this,FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0);
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::FloatDef.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::FloatDef.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::FloatDef.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::FloatDef.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::FloatDef.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::FloatDef.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

