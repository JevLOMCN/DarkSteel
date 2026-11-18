// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// ~FNiagaraStatelessExpression @ 14942bc90

void __thiscall
FNiagaraStatelessExpression::~FNiagaraStatelessExpression(FNiagaraStatelessExpression *this)

{
  return;
}

// Build @ 149431340

FInstancedStruct * __thiscall
FNiagaraStatelessExpression::Build
          (FNiagaraStatelessExpression *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstancedStruct *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessExpression.h"
                     ,0x20,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInstancedStruct *)(*pcVar1)();
    return pFVar3;
  }
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Evaluate @ 149441c20

void __thiscall
FNiagaraStatelessExpression::Evaluate
          (FNiagaraStatelessExpression *this,FEvaluateContext *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessExpression.h"
                     ,0x21,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetOutputTypeDef @ 14944aa40

FNiagaraTypeDefinition * __thiscall
FNiagaraStatelessExpression::GetOutputTypeDef
          (FNiagaraStatelessExpression *this,FNiagaraTypeDefinition *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraTypeDefinition *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessExpression.h"
                     ,0x22,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraTypeDefinition *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->Size = -1;
  __return_storage_ptr__->Alignment = -1;
  __return_storage_ptr__->RegisteredTypeDefIndex = -1;
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)0x0;
  __return_storage_ptr__->UnderlyingType = 0;
  __return_storage_ptr__->Flags = '\0';
  __return_storage_ptr__->UnderlyingTypePathNameHash = 0xffffffff;
  return __return_storage_ptr__;
}

// IsConstant @ 1494535c0

bool __thiscall FNiagaraStatelessExpression::IsConstant(FNiagaraStatelessExpression *this)

{
  return false;
}

// StaticStruct @ 1494736b0

UScriptStruct * __cdecl FNiagaraStatelessExpression::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpression,(UObject *)pUVar1,
                         L"NiagaraStatelessExpression");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpression.OuterSingleton;
}

