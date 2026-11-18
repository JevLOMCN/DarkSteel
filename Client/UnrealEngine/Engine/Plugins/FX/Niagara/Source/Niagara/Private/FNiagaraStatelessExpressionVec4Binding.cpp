// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 14940b8e0

UScriptStruct * __cdecl FNiagaraStatelessExpressionVec4Binding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Binding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Binding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Binding,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionVec4Binding");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Binding.OuterSingleton;
}

// ~FNiagaraStatelessExpressionVec4Binding @ 14942c050

void __thiscall
FNiagaraStatelessExpressionVec4Binding::~FNiagaraStatelessExpressionVec4Binding
          (FNiagaraStatelessExpressionVec4Binding *this)

{
  return;
}

// BuildInternal @ 149439630

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionVec4Binding::BuildInternal
          (FNiagaraStatelessExpressionVec4Binding *this,FInstancedStruct *__return_storage_ptr__,
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
  
  local_20 = &___7FNiagaraStatelessExpressionVec4Binding__6B_;
  local_18 = this->A;
  local_38 = FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0)
    ;
  }
  local_30 = FNiagaraTypeDefinition::Vec4Def.UnderlyingType;
  local_2e = FNiagaraTypeDefinition::Vec4Def.Flags;
  local_2c = FNiagaraTypeDefinition::Vec4Def.Size;
  local_2a = FNiagaraTypeDefinition::Vec4Def.Alignment;
  local_28 = FNiagaraTypeDefinition::Vec4Def.RegisteredTypeDefIndex;
  local_24 = FNiagaraTypeDefinition::Vec4Def.UnderlyingTypePathNameHash;
  local_48.Name = this->A;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_48.TypeDefHandle,(FNiagaraTypeDefinition *)&local_38.ObjectPtr);
  local_10 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding(param_1,&local_48);
  local_10 = local_10 << 2;
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Binding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Binding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Binding,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionVec4Binding");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Binding.OuterSingleton
             ,(uchar *)&local_20);
  return __return_storage_ptr__;
}

// EvaluateInternal @ 149442cd0

TVector4<float> * __thiscall
FNiagaraStatelessExpressionVec4Binding::EvaluateInternal
          (FNiagaraStatelessExpressionVec4Binding *this,TVector4<float> *__return_storage_ptr__,
          FEvaluateContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FNiagaraParameterStore *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TVector4<float> *pTVar7;
  
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
      pTVar7 = (TVector4<float> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar1 = (pFVar3->ParameterData).AllocatorInstance.Data + iVar2;
  uVar5 = *(undefined8 *)(pFVar1 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)pFVar1;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
  return __return_storage_ptr__;
}

// IsConstant @ 149453cb0

bool __thiscall
FNiagaraStatelessExpressionVec4Binding::IsConstant(FNiagaraStatelessExpressionVec4Binding *this)

{
  return false;
}

