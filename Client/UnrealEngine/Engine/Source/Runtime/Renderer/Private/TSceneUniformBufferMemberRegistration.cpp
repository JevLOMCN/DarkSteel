// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 18

// Commit @ 1448d03f0

void __thiscall
TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>::Commit
          (TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters> *this)

{
  int iVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  TFunction<void___cdecl(void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&)> local_38;
  
  local_38._0_8_ = *(undefined8 *)&this->field_0x30;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar3 = (undefined8 *)&this->field_0x40;
    if (*(undefined8 **)&this->field_0x58 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&this->field_0x58;
    }
    (**(code **)*puVar3)(puVar3,&local_38.field_0x10);
  }
  pFVar2 = FGPUSceneResourceParameters::FTypeInfo::GetStructMetadata();
  if (*(int *)&this->field_0x18 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)&this->field_0x10;
  }
  iVar1 = FSceneUniformBufferTypeRegistry::RegisterMember(pwVar4,pFVar2,&local_38);
  *(int *)&this->field_0x20 = iVar1;
  return;
}

// operator() @ 1448f2a70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>::
TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>'::__l2::<lambda_1>::operator()
          (void *this,void *param_1,FShaderParametersMetadata *param_2,FRDGBuilder *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = FGPUSceneResourceParameters::FTypeInfo::GetStructMetadata();
  if (param_2 != pFVar2) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("&Metadata == TMember::FTypeInfo::GetStructMetadata()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\SceneUniformBuffer.h"
                       ,0x48,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  UNRECOVERED_JUMPTABLE = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001448f2b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,param_1,param_3);
  return;
}

// Commit @ 144a43b10

void __thiscall
TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>::Commit
          (TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters> *this)

{
  int iVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  TFunction<void___cdecl(void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&)> local_38;
  
  local_38._0_8_ = *(undefined8 *)&this->field_0x30;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar3 = (undefined8 *)&this->field_0x40;
    if (*(undefined8 **)&this->field_0x58 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&this->field_0x58;
    }
    (**(code **)*puVar3)(puVar3,&local_38.field_0x10);
  }
  pFVar2 = RenderCurve::FRenderCurveSceneParameters::FTypeInfo::GetStructMetadata();
  if (*(int *)&this->field_0x18 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)&this->field_0x10;
  }
  iVar1 = FSceneUniformBufferTypeRegistry::RegisterMember(pwVar4,pFVar2,&local_38);
  *(int *)&this->field_0x20 = iVar1;
  return;
}

// operator() @ 144a5ed80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>::
TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>'::__l2::<lambda_1>::
operator()(void *this,void *param_1,FShaderParametersMetadata *param_2,FRDGBuilder *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = RenderCurve::FRenderCurveSceneParameters::FTypeInfo::GetStructMetadata();
  if (param_2 != pFVar2) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("&Metadata == TMember::FTypeInfo::GetStructMetadata()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\SceneUniformBuffer.h"
                       ,0x48,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  UNRECOVERED_JUMPTABLE = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000144a5ee1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,param_1,param_3);
  return;
}

// Commit @ 14501dad0

void __thiscall
TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>::Commit
          (TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters> *this)

{
  int iVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  TFunction<void___cdecl(void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&)> local_38;
  
  local_38._0_8_ = *(undefined8 *)&this->field_0x30;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar3 = (undefined8 *)&this->field_0x40;
    if (*(undefined8 **)&this->field_0x58 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&this->field_0x58;
    }
    (**(code **)*puVar3)(puVar3,&local_38.field_0x10);
  }
  pFVar2 = FNaniteMaterialsParameters::FTypeInfo::GetStructMetadata();
  if (*(int *)&this->field_0x18 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)&this->field_0x10;
  }
  iVar1 = FSceneUniformBufferTypeRegistry::RegisterMember(pwVar4,pFVar2,&local_38);
  *(int *)&this->field_0x20 = iVar1;
  return;
}

// Commit @ 14501df00

void __thiscall
TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>::Commit
          (TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters> *this)

{
  int iVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  TFunction<void___cdecl(void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&)> local_38;
  
  local_38._0_8_ = *(undefined8 *)&this->field_0x30;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar3 = (undefined8 *)&this->field_0x40;
    if (*(undefined8 **)&this->field_0x58 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&this->field_0x58;
    }
    (**(code **)*puVar3)(puVar3,&local_38.field_0x10);
  }
  pFVar2 = FNaniteOwnershipVisibilityParameters::FTypeInfo::GetStructMetadata();
  if (*(int *)&this->field_0x18 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)&this->field_0x10;
  }
  iVar1 = FSceneUniformBufferTypeRegistry::RegisterMember(pwVar4,pFVar2,&local_38);
  *(int *)&this->field_0x20 = iVar1;
  return;
}

// operator() @ 14503b580

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>::
TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>'::__l2::<lambda_1>::operator()
          (void *this,void *param_1,FShaderParametersMetadata *param_2,FRDGBuilder *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = FNaniteMaterialsParameters::FTypeInfo::GetStructMetadata();
  if (param_2 != pFVar2) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("&Metadata == TMember::FTypeInfo::GetStructMetadata()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\SceneUniformBuffer.h"
                       ,0x48,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  UNRECOVERED_JUMPTABLE = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014503b61a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,param_1,param_3);
  return;
}

// operator() @ 14503b630

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>::
TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>'::__l2::<lambda_1>::
operator()(void *this,void *param_1,FShaderParametersMetadata *param_2,FRDGBuilder *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = FNaniteOwnershipVisibilityParameters::FTypeInfo::GetStructMetadata();
  if (param_2 != pFVar2) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("&Metadata == TMember::FTypeInfo::GetStructMetadata()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\SceneUniformBuffer.h"
                       ,0x48,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  UNRECOVERED_JUMPTABLE = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014503b6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,param_1,param_3);
  return;
}

// Commit @ 145651b30

void __thiscall
TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>::Commit
          (TSceneUniformBufferMemberRegistration<FSkinningSceneParameters> *this)

{
  int iVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  TFunction<void___cdecl(void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&)> local_38;
  
  local_38._0_8_ = *(undefined8 *)&this->field_0x30;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar3 = (undefined8 *)&this->field_0x40;
    if (*(undefined8 **)&this->field_0x58 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&this->field_0x58;
    }
    (**(code **)*puVar3)(puVar3,&local_38.field_0x10);
  }
  pFVar2 = FSkinningSceneParameters::GetStructMetadata();
  if (*(int *)&this->field_0x18 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)&this->field_0x10;
  }
  iVar1 = FSceneUniformBufferTypeRegistry::RegisterMember(pwVar4,pFVar2,&local_38);
  *(int *)&this->field_0x20 = iVar1;
  return;
}

// operator() @ 145668900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>::
TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>'::__l2::<lambda_1>::operator()
          (void *this,void *param_1,FShaderParametersMetadata *param_2,FRDGBuilder *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = FSkinningSceneParameters::GetStructMetadata();
  if (param_2 != pFVar2) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("&Metadata == TMember::FTypeInfo::GetStructMetadata()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\SceneUniformBuffer.h"
                       ,0x48,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  UNRECOVERED_JUMPTABLE = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001456689a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,param_1,param_3);
  return;
}

// Commit @ 1456bd490

void __thiscall
TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>::Commit
          (TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters> *this)

{
  int iVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  TFunction<void___cdecl(void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&)> local_38;
  
  local_38._0_8_ = *(undefined8 *)&this->field_0x30;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar3 = (undefined8 *)&this->field_0x40;
    if (*(undefined8 **)&this->field_0x58 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&this->field_0x58;
    }
    (**(code **)*puVar3)(puVar3,&local_38.field_0x10);
  }
  pFVar2 = FSplineMeshSceneResourceParameters::FTypeInfo::GetStructMetadata();
  if (*(int *)&this->field_0x18 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)&this->field_0x10;
  }
  iVar1 = FSceneUniformBufferTypeRegistry::RegisterMember(pwVar4,pFVar2,&local_38);
  *(int *)&this->field_0x20 = iVar1;
  return;
}

// operator() @ 1456e0ce0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>::
TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>'::__l2::<lambda_1>::
operator()(void *this,void *param_1,FShaderParametersMetadata *param_2,FRDGBuilder *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = FSplineMeshSceneResourceParameters::FTypeInfo::GetStructMetadata();
  if (param_2 != pFVar2) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("&Metadata == TMember::FTypeInfo::GetStructMetadata()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\SceneUniformBuffer.h"
                       ,0x48,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  UNRECOVERED_JUMPTABLE = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001456e0d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,param_1,param_3);
  return;
}

// Commit @ 145737fc0

void __thiscall
TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>::Commit
          (TSceneUniformBufferMemberRegistration<RendererViewData::FParameters> *this)

{
  int iVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  TFunction<void___cdecl(void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&)> local_38;
  
  local_38._0_8_ = *(undefined8 *)&this->field_0x30;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar3 = (undefined8 *)&this->field_0x40;
    if (*(undefined8 **)&this->field_0x58 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&this->field_0x58;
    }
    (**(code **)*puVar3)(puVar3,&local_38.field_0x10);
  }
  pFVar2 = RendererViewData::FParameters::FTypeInfo::GetStructMetadata();
  if (*(int *)&this->field_0x18 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)&this->field_0x10;
  }
  iVar1 = FSceneUniformBufferTypeRegistry::RegisterMember(pwVar4,pFVar2,&local_38);
  *(int *)&this->field_0x20 = iVar1;
  return;
}

// operator() @ 1457517f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>::
TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>'::__l2::<lambda_1>::operator()
          (void *this,void *param_1,FShaderParametersMetadata *param_2,FRDGBuilder *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = RendererViewData::FParameters::FTypeInfo::GetStructMetadata();
  if (param_2 != pFVar2) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("&Metadata == TMember::FTypeInfo::GetStructMetadata()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\SceneUniformBuffer.h"
                       ,0x48,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  UNRECOVERED_JUMPTABLE = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014575188d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,param_1,param_3);
  return;
}

// Commit @ 1457a39a0

void __thiscall
TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>::Commit
          (TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms> *this)

{
  int iVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  TFunction<void___cdecl(void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&)> local_38;
  
  local_38._0_8_ = *(undefined8 *)&this->field_0x30;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar3 = (undefined8 *)&this->field_0x40;
    if (*(undefined8 **)&this->field_0x58 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&this->field_0x58;
    }
    (**(code **)*puVar3)(puVar3,&local_38.field_0x10);
  }
  pFVar2 = FVirtualShadowMapInvalidationSceneUniforms::FTypeInfo::GetStructMetadata();
  if (*(int *)&this->field_0x18 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)&this->field_0x10;
  }
  iVar1 = FSceneUniformBufferTypeRegistry::RegisterMember(pwVar4,pFVar2,&local_38);
  *(int *)&this->field_0x20 = iVar1;
  return;
}

// operator() @ 1457c8280

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>::
TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>'::__l2::<lambda_1>
::operator()(void *this,void *param_1,FShaderParametersMetadata *param_2,FRDGBuilder *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = FVirtualShadowMapInvalidationSceneUniforms::FTypeInfo::GetStructMetadata();
  if (param_2 != pFVar2) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("&Metadata == TMember::FTypeInfo::GetStructMetadata()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\SceneUniformBuffer.h"
                       ,0x48,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  *(undefined8 *)param_1 = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  UNRECOVERED_JUMPTABLE = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001457c8317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,param_1,param_3);
  return;
}

// Commit @ 1458a9250

void __thiscall
TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>::Commit
          (TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters> *this)

{
  int iVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  TFunction<void___cdecl(void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&)> local_38;
  
  local_38._0_8_ = *(undefined8 *)&this->field_0x30;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar3 = (undefined8 *)&this->field_0x40;
    if (*(undefined8 **)&this->field_0x58 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&this->field_0x58;
    }
    (**(code **)*puVar3)(puVar3,&local_38.field_0x10);
  }
  pFVar2 = FMeshPaintTextureParameters::FTypeInfo::GetStructMetadata();
  if (*(int *)&this->field_0x18 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)&this->field_0x10;
  }
  iVar1 = FSceneUniformBufferTypeRegistry::RegisterMember(pwVar4,pFVar2,&local_38);
  *(int *)&this->field_0x20 = iVar1;
  return;
}

// operator() @ 1458d3480

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>::
TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>'::__l2::<lambda_1>::operator()
          (void *this,void *param_1,FShaderParametersMetadata *param_2,FRDGBuilder *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FShaderParametersMetadata *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = FMeshPaintTextureParameters::FTypeInfo::GetStructMetadata();
  if (param_2 != pFVar2) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("&Metadata == TMember::FTypeInfo::GetStructMetadata()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\SceneUniformBuffer.h"
                       ,0x48,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  UNRECOVERED_JUMPTABLE = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001458d3519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,param_1,param_3);
  return;
}

