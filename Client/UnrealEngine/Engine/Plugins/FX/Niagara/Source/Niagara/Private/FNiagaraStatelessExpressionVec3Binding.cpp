// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 149416c40

UScriptStruct * __cdecl FNiagaraStatelessExpressionVec3Binding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Binding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Binding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Binding,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionVec3Binding");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Binding.OuterSingleton;
}

// ~FNiagaraStatelessExpressionVec3Binding @ 14942bf70

void __thiscall
FNiagaraStatelessExpressionVec3Binding::~FNiagaraStatelessExpressionVec3Binding
          (FNiagaraStatelessExpressionVec3Binding *this)

{
  return;
}

// BuildInternal @ 149438d80

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionVec3Binding::BuildInternal
          (FNiagaraStatelessExpressionVec3Binding *this,FInstancedStruct *__return_storage_ptr__,
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
  
  local_20 = &___7FNiagaraStatelessExpressionVec3Binding__6B_;
  local_18 = this->A;
  local_38 = FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0)
    ;
  }
  local_30 = FNiagaraTypeDefinition::Vec3Def.UnderlyingType;
  local_2e = FNiagaraTypeDefinition::Vec3Def.Flags;
  local_2c = FNiagaraTypeDefinition::Vec3Def.Size;
  local_2a = FNiagaraTypeDefinition::Vec3Def.Alignment;
  local_28 = FNiagaraTypeDefinition::Vec3Def.RegisteredTypeDefIndex;
  local_24 = FNiagaraTypeDefinition::Vec3Def.UnderlyingTypePathNameHash;
  local_48.Name = this->A;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_48.TypeDefHandle,(FNiagaraTypeDefinition *)&local_38.ObjectPtr);
  local_10 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding(param_1,&local_48);
  local_10 = local_10 << 2;
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Binding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Binding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Binding,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionVec3Binding");
  }
  FInstancedStruct::InitializeAs
            (__return_storage_ptr__,
             Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Binding.OuterSingleton
             ,(uchar *)&local_20);
  return __return_storage_ptr__;
}

// EvaluateInternal @ 149442900

TVector<float> * __thiscall
FNiagaraStatelessExpressionVec3Binding::EvaluateInternal
          (FNiagaraStatelessExpressionVec3Binding *this,TVector<float> *__return_storage_ptr__,
          FEvaluateContext *param_1)

{
  float fVar1;
  FNiagaraParameterStore *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  TVector<float> *pTVar7;
  
  lVar6 = (longlong)this->ParameterOffset;
  pFVar2 = param_1->ParameterStore;
  if ((this->ParameterOffset < 0) ||
     ((ulonglong)(longlong)(pFVar2->ParameterData).ArrayNum < lVar6 + 0xcU)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x17f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar3 = (pFVar2->ParameterData).AllocatorInstance.Data;
  fVar1 = *(float *)(pFVar3 + lVar6 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)(pFVar3 + lVar6);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// IsConstant @ 149453b10

bool __thiscall
FNiagaraStatelessExpressionVec3Binding::IsConstant(FNiagaraStatelessExpressionVec3Binding *this)

{
  return false;
}

