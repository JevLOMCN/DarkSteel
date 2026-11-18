// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// ~INiagaraRenderableMeshArrayInterface @ 148e56680

void __thiscall
INiagaraRenderableMeshArrayInterface::~INiagaraRenderableMeshArrayInterface
          (INiagaraRenderableMeshArrayInterface *this)

{
  *this = (INiagaraRenderableMeshArrayInterface)&___7INiagaraRenderableMeshArrayInterface__6B_;
  return;
}

// _getUObject @ 148e86790

UObject * __thiscall
INiagaraRenderableMeshArrayInterface::_getUObject(INiagaraRenderableMeshArrayInterface *this)

{
  return (UObject *)0x0;
}

// <lambda_invoker_cdecl> @ 1492c7130

void __cdecl
`INiagaraRenderableMeshArrayInterface::ForEachMesh'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (int param_1)

{
  return;
}

// ForEachMesh @ 1492ebb70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
INiagaraRenderableMeshArrayInterface::ForEachMesh
          (INiagaraRenderableMeshArrayInterface *this,FNiagaraSystemInstance *param_1,
          TFunction<void___cdecl(FNiagaraMeshRendererMeshProperties_const_&)> *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *local_88 [2];
  undefined **local_78;
  code *local_70;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_48 [24];
  undefined8 local_30;
  
  local_30 = 0;
  pcVar1 = *(code **)((longlong)*this + 0x10);
  local_58[0] = *(longlong *)param_2;
  if (local_58[0] != 0) {
    puVar2 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,local_48);
  }
  local_60 = 0;
  local_78 = &___7__TFunction_OwnedObject_P6AXH_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_70 = `INiagaraRenderableMeshArrayInterface::ForEachMesh'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_88[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int),void,int>::Call
  ;
  (*pcVar1)(this,param_1,local_88,local_58);
  if (*(longlong *)param_2 != 0) {
    plVar3 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return;
}

