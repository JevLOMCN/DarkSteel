// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 149410b70

UScriptStruct * __cdecl FNiagaraStatelessExpressionFloatBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatBinding,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionFloatBinding");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatBinding.OuterSingleton;
}

// ~FNiagaraStatelessExpressionFloatBinding @ 14942bdb0

void __thiscall
FNiagaraStatelessExpressionFloatBinding::~FNiagaraStatelessExpressionFloatBinding
          (FNiagaraStatelessExpressionFloatBinding *this)

{
  return;
}

// BuildInternal @ 149437c20

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionFloatBinding::BuildInternal
          (FNiagaraStatelessExpressionFloatBinding *this,FInstancedStruct *__return_storage_ptr__,
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
  
  local_20 = &___7FNiagaraStatelessExpressionFloatBinding__6B_;
  local_18 = this->A;
  local_38 = FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0);
  }
  local_30 = FNiagaraTypeDefinition::FloatDef.UnderlyingType;
  local_2e = FNiagaraTypeDefinition::FloatDef.Flags;
  local_2c = FNiagaraTypeDefinition::FloatDef.Size;
  local_2a = FNiagaraTypeDefinition::FloatDef.Alignment;
  local_28 = FNiagaraTypeDefinition::FloatDef.RegisteredTypeDefIndex;
  local_24 = FNiagaraTypeDefinition::FloatDef.UnderlyingTypePathNameHash;
  local_48.Name = this->A;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_48.TypeDefHandle,(FNiagaraTypeDefinition *)&local_38.ObjectPtr);
  local_10 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding(param_1,&local_48);
  local_10 = local_10 << 2;
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatBinding,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionFloatBinding");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatBinding.
             OuterSingleton,(uchar *)&local_20);
  return __return_storage_ptr__;
}

// EvaluateInternal @ 149442250

float __thiscall
FNiagaraStatelessExpressionFloatBinding::EvaluateInternal
          (FNiagaraStatelessExpressionFloatBinding *this,FEvaluateContext *param_1)

{
  int iVar1;
  FNiagaraParameterStore *pFVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  iVar1 = this->ParameterOffset;
  pFVar2 = param_1->ParameterStore;
  if ((iVar1 < 0) || ((ulonglong)(longlong)(pFVar2->ParameterData).ArrayNum < (longlong)iVar1 + 4U))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x17f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar5 = (float)(*pcVar3)();
      return fVar5;
    }
  }
  return *(float *)((pFVar2->ParameterData).AllocatorInstance.Data + iVar1);
}

// IsConstant @ 1494537d0

bool __thiscall
FNiagaraStatelessExpressionFloatBinding::IsConstant(FNiagaraStatelessExpressionFloatBinding *this)

{
  return false;
}

