// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 14940b6f0

UScriptStruct * __cdecl FNiagaraStatelessExpressionVec4::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4,(UObject *)pUVar1
                         ,L"NiagaraStatelessExpressionVec4");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4.OuterSingleton;
}

// Build @ 1494317e0

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionVec4::Build
          (FNiagaraStatelessExpressionVec4 *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  UPackage *pUVar3;
  FNiagaraParameterStore *local_res8;
  FInstancedStruct local_d8;
  undefined **local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  FNiagaraParameterStore local_98;
  
  FInstancedStruct::FInstancedStruct(&local_d8);
  cVar1 = (**(code **)((longlong)*this + 0x20))(this);
  if (cVar1 == '\0') {
    (**(code **)((longlong)*this + 0x28))(this,__return_storage_ptr__,param_1);
  }
  else {
    local_c8[0] = &___7FNiagaraStatelessExpressionVec4Constant__6B_;
    local_b8 = 0;
    uStack_b0 = 0;
    FNiagaraParameterStore::FNiagaraParameterStore(&local_98);
    local_res8 = &local_98;
    puVar2 = (undefined8 *)(**(code **)((longlong)*this + 0x30))(this,local_a8,&local_res8);
    local_b8 = *puVar2;
    uStack_b0 = puVar2[1];
    FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
    if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Constant,
                           (UObject *)pUVar3,L"NiagaraStatelessExpressionVec4Constant");
    }
    FInstancedStruct::InitializeAs
              (__return_storage_ptr__,
               Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.
               OuterSingleton,(uchar *)local_c8);
    FNiagaraParameterStore::~FNiagaraParameterStore(&local_98);
  }
  FInstancedStruct::Reset(&local_d8);
  return __return_storage_ptr__;
}

// BuildInternal @ 149439410

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionVec4::BuildInternal
          (FNiagaraStatelessExpressionVec4 *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstancedStruct *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\Expressions\\NiagaraStatelessExpressionVec4.h"
                     ,0x14,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInstancedStruct *)(*pcVar1)();
    return pFVar3;
  }
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Evaluate @ 149441d20

void __thiscall
FNiagaraStatelessExpressionVec4::Evaluate
          (FNiagaraStatelessExpressionVec4 *this,FEvaluateContext *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)(**(code **)((longlong)*this + 0x30))(this,local_18,param_1);
  uVar1 = puVar2[1];
  *(undefined8 *)param_2 = *puVar2;
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// EvaluateInternal @ 149442c00

TVector4<float> * __thiscall
FNiagaraStatelessExpressionVec4::EvaluateInternal
          (FNiagaraStatelessExpressionVec4 *this,TVector4<float> *__return_storage_ptr__,
          FEvaluateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector4<float> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\Expressions\\NiagaraStatelessExpressionVec4.h"
                     ,0x15,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TVector4<float> *)(*pcVar1)();
    return pTVar3;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  return __return_storage_ptr__;
}

// GetOutputTypeDef @ 14944aca0

FNiagaraTypeDefinition * __thiscall
FNiagaraStatelessExpressionVec4::GetOutputTypeDef
          (FNiagaraStatelessExpressionVec4 *this,FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0)
    ;
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::Vec4Def.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::Vec4Def.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::Vec4Def.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::Vec4Def.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::Vec4Def.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::Vec4Def.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

