// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 149416a30

UScriptStruct * __cdecl FNiagaraStatelessExpressionVec3::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3,(UObject *)pUVar1
                         ,L"NiagaraStatelessExpressionVec3");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3.OuterSingleton;
}

// Build @ 1494316b0

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionVec3::Build
          (FNiagaraStatelessExpressionVec3 *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  UPackage *pUVar3;
  FNiagaraParameterStore *local_res8;
  undefined **local_d8;
  undefined8 local_d0;
  float local_c8;
  FInstancedStruct local_c0;
  undefined1 local_b0 [24];
  FNiagaraParameterStore local_98;
  
  FInstancedStruct::FInstancedStruct(&local_c0);
  cVar1 = (**(code **)((longlong)*this + 0x20))(this);
  if (cVar1 == '\0') {
    (**(code **)((longlong)*this + 0x28))(this,__return_storage_ptr__,param_1);
  }
  else {
    local_d8 = &___7FNiagaraStatelessExpressionVec3Constant__6B_;
    local_c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    FNiagaraParameterStore::FNiagaraParameterStore(&local_98);
    local_res8 = &local_98;
    puVar2 = (undefined8 *)(**(code **)((longlong)*this + 0x30))(this,local_b0,&local_res8);
    local_d0 = *puVar2;
    local_c8 = *(float *)(puVar2 + 1);
    FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
    if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Constant,
                           (UObject *)pUVar3,L"NiagaraStatelessExpressionVec3Constant");
    }
    FInstancedStruct::InitializeAs
              (__return_storage_ptr__,
               Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.
               OuterSingleton,(uchar *)&local_d8);
    FNiagaraParameterStore::~FNiagaraParameterStore(&local_98);
  }
  FInstancedStruct::Reset(&local_c0);
  return __return_storage_ptr__;
}

// BuildInternal @ 149438b60

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionVec3::BuildInternal
          (FNiagaraStatelessExpressionVec3 *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstancedStruct *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\Expressions\\NiagaraStatelessExpressionVec3.h"
                     ,0x14,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInstancedStruct *)(*pcVar1)();
    return pFVar3;
  }
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Evaluate @ 149441ce0

void __thiscall
FNiagaraStatelessExpressionVec3::Evaluate
          (FNiagaraStatelessExpressionVec3 *this,FEvaluateContext *param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  puVar1 = (undefined8 *)(**(code **)((longlong)*this + 0x30))(this,local_18,param_1);
  *(undefined8 *)param_2 = *puVar1;
  *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)(puVar1 + 1);
  return;
}

// EvaluateInternal @ 1494427f0

TVector<float> * __thiscall
FNiagaraStatelessExpressionVec3::EvaluateInternal
          (FNiagaraStatelessExpressionVec3 *this,TVector<float> *__return_storage_ptr__,
          FEvaluateContext *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  TVector<float> *pTVar4;
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\Expressions\\NiagaraStatelessExpressionVec3.h"
                     ,0x15,L"");
  uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<float> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar2;
  return __return_storage_ptr__;
}

// GetOutputTypeDef @ 14944ac20

FNiagaraTypeDefinition * __thiscall
FNiagaraStatelessExpressionVec3::GetOutputTypeDef
          (FNiagaraStatelessExpressionVec3 *this,FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0)
    ;
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::Vec3Def.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::Vec3Def.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::Vec3Def.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::Vec3Def.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::Vec3Def.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::Vec3Def.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

