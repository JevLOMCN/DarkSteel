// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 1494134c0

UScriptStruct * __cdecl FNiagaraStatelessExpressionColor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColor,
                         (UObject *)pUVar1,L"NiagaraStatelessExpressionColor");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColor.OuterSingleton;
}

// Build @ 149431390

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionColor::Build
          (FNiagaraStatelessExpressionColor *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  char cVar1;
  undefined1 (*pauVar2) [16];
  UPackage *pUVar3;
  FNiagaraParameterStore *local_res8;
  FInstancedStruct local_d8;
  undefined **local_c8;
  FLinearColor_u_0 local_c0;
  undefined1 local_b0 [24];
  FNiagaraParameterStore local_98;
  
  FInstancedStruct::FInstancedStruct(&local_d8);
  cVar1 = (**(code **)((longlong)*this + 0x20))(this);
  if (cVar1 == '\0') {
    (**(code **)((longlong)*this + 0x28))(this,__return_storage_ptr__,param_1);
  }
  else {
    local_c8 = &___7FNiagaraStatelessExpressionColorConstant__6B_;
    local_c0 = FLinearColor::Black.field0_0x0;
    FNiagaraParameterStore::FNiagaraParameterStore(&local_98);
    local_res8 = &local_98;
    pauVar2 = (undefined1 (*) [16])(**(code **)((longlong)*this + 0x30))(this,local_b0,&local_res8);
    local_c0 = *(FLinearColor_u_0 *)pauVar2;
    FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
    if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorConstant,
                           (UObject *)pUVar3,L"NiagaraStatelessExpressionColorConstant");
    }
    FInstancedStruct::InitializeAs
              (__return_storage_ptr__,
               Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.
               OuterSingleton,(uchar *)&local_c8);
    FNiagaraParameterStore::~FNiagaraParameterStore(&local_98);
  }
  FInstancedStruct::Reset(&local_d8);
  return __return_storage_ptr__;
}

// BuildInternal @ 149437150

FInstancedStruct * __thiscall
FNiagaraStatelessExpressionColor::BuildInternal
          (FNiagaraStatelessExpressionColor *this,FInstancedStruct *__return_storage_ptr__,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstancedStruct *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\Expressions\\NiagaraStatelessExpressionColor.h"
                     ,0x14,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInstancedStruct *)(*pcVar1)();
    return pFVar3;
  }
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Evaluate @ 149441c60

void __thiscall
FNiagaraStatelessExpressionColor::Evaluate
          (FNiagaraStatelessExpressionColor *this,FEvaluateContext *param_1,void *param_2)

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

// EvaluateInternal @ 149441d50

FLinearColor * __thiscall
FNiagaraStatelessExpressionColor::EvaluateInternal
          (FNiagaraStatelessExpressionColor *this,FLinearColor *__return_storage_ptr__,
          FEvaluateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\Expressions\\NiagaraStatelessExpressionColor.h"
                     ,0x15,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLinearColor *)(*pcVar1)();
    return pFVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
  return __return_storage_ptr__;
}

// GetOutputTypeDef @ 14944aaa0

FNiagaraTypeDefinition * __thiscall
FNiagaraStatelessExpressionColor::GetOutputTypeDef
          (FNiagaraStatelessExpressionColor *this,FNiagaraTypeDefinition *__return_storage_ptr__)

{
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0);
  }
  __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::ColorDef.UnderlyingType;
  __return_storage_ptr__->Flags = FNiagaraTypeDefinition::ColorDef.Flags;
  __return_storage_ptr__->Size = FNiagaraTypeDefinition::ColorDef.Size;
  __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::ColorDef.Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex =
       FNiagaraTypeDefinition::ColorDef.RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash =
       FNiagaraTypeDefinition::ColorDef.UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

