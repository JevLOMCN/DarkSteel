// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 1494135c0

UScriptStruct * __cdecl FNiagaraStatelessExpressionColorBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorBinding,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionColorBinding");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorBinding.OuterSingleton;
}

// ~FNiagaraStatelessExpressionColorBinding @ 14942bcd0

void __thiscall
FNiagaraStatelessExpressionColorBinding::~FNiagaraStatelessExpressionColorBinding
          (FNiagaraStatelessExpressionColorBinding *this)

{
  return;
}

// BuildInternal @ 149437370

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionColorBinding::BuildInternal
          (FNiagaraStatelessExpressionColorBinding *this,FInstancedStruct *__return_storage_ptr__,
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
  
  local_20 = &___7FNiagaraStatelessExpressionColorBinding__6B_;
  local_18 = this->A;
  local_38 = FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0);
  }
  local_30 = FNiagaraTypeDefinition::ColorDef.UnderlyingType;
  local_2e = FNiagaraTypeDefinition::ColorDef.Flags;
  local_2c = FNiagaraTypeDefinition::ColorDef.Size;
  local_2a = FNiagaraTypeDefinition::ColorDef.Alignment;
  local_28 = FNiagaraTypeDefinition::ColorDef.RegisteredTypeDefIndex;
  local_24 = FNiagaraTypeDefinition::ColorDef.UnderlyingTypePathNameHash;
  local_48.Name = this->A;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_48.TypeDefHandle,(FNiagaraTypeDefinition *)&local_38.ObjectPtr);
  local_10 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding(param_1,&local_48);
  local_10 = local_10 << 2;
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorBinding,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionColorBinding");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorBinding.
             OuterSingleton,(uchar *)&local_20);
  return __return_storage_ptr__;
}

// EvaluateInternal @ 149441e60

FLinearColor * __thiscall
FNiagaraStatelessExpressionColorBinding::EvaluateInternal
          (FNiagaraStatelessExpressionColorBinding *this,FLinearColor *__return_storage_ptr__,
          FEvaluateContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FNiagaraParameterStore *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FLinearColor *pFVar7;
  
  iVar2 = this->ParameterOffset;
  pFVar3 = param_1->ParameterStore;
  if ((iVar2 < 0) ||
     ((ulonglong)(longlong)(pFVar3->ParameterData).ArrayNum < (longlong)iVar2 + 0x10U)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x17f,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FLinearColor *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar1 = (pFVar3->ParameterData).AllocatorInstance.Data + iVar2;
  uVar5 = *(undefined8 *)(pFVar1 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)pFVar1;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
  return __return_storage_ptr__;
}

// IsConstant @ 149453630

bool __thiscall
FNiagaraStatelessExpressionColorBinding::IsConstant(FNiagaraStatelessExpressionColorBinding *this)

{
  return false;
}

