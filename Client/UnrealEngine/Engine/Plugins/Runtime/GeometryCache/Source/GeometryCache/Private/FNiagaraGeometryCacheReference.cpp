// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 3

// StaticStruct @ 14c9ff3a0

UScriptStruct * __cdecl FNiagaraGeometryCacheReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCache();
    Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference,(UObject *)pUVar1,
                         L"NiagaraGeometryCacheReference");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheReference.OuterSingleton;
}

// FNiagaraGeometryCacheReference @ 14ca06e10

FNiagaraGeometryCacheReference * __thiscall
FNiagaraGeometryCacheReference::FNiagaraGeometryCacheReference(FNiagaraGeometryCacheReference *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  (this->GeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_1e = 0;
  local_20 = 1;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            (&this->GeometryCacheUserParamBinding,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->MICOverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MICOverrideMaterials).ArrayNum = 0;
  (this->MICOverrideMaterials).ArrayMax = 0;
  return this;
}

// ResolveMaterial @ 14ca29eb0

UMaterialInterface * __thiscall
FNiagaraGeometryCacheReference::ResolveMaterial
          (FNiagaraGeometryCacheReference *this,UGeometryCache *param_1,int param_2)

{
  int iVar1;
  UGeometryCache *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UMaterialInterface *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  
  if ((param_2 < 0) || ((this->OverrideMaterials).ArrayNum <= param_2)) {
    pUVar6 = (UMaterialInterface *)0x0;
  }
  else {
    uVar5 = 0;
    if (param_2 < (this->OverrideMaterials).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UMaterialInterface *)(*pcVar3)();
      return pUVar6;
    }
    pUVar6 = *(UMaterialInterface **)
              ((this->OverrideMaterials).AllocatorInstance.Data + (longlong)param_2 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 == (UMaterialInterface *)0x0) goto LAB_14ca29f52;
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    if (pUVar6 != (UMaterialInterface *)0x0) goto LAB_14ca29fa9;
  }
LAB_14ca29f52:
  if ((-1 < param_2) &&
     (pUVar2 = (this->GeometryCache).field0_0x0.DebugPtr, param_2 < (pUVar2->Materials).ArrayNum)) {
    uVar5 = 0;
    if (param_2 < (pUVar2->Materials).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UMaterialInterface *)(*pcVar3)();
      return pUVar6;
    }
    pUVar6 = *(UMaterialInterface **)
              ((pUVar2->Materials).AllocatorInstance.Data + (longlong)param_2 * 8);
  }
LAB_14ca29fa9:
  iVar1 = (this->MICOverrideMaterials).ArrayNum;
  pFVar7 = (this->MICOverrideMaterials).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->MICOverrideMaterials).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraGeometryCacheMICOverride_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar8) break;
    if (*(UMaterialInterface **)pFVar7 == (UMaterialInterface *)0x0) {
      bVar4 = pUVar6 == (UMaterialInterface *)0x0;
    }
    else {
      bVar4 = *(UMaterialInterface **)pFVar7 == pUVar6;
    }
    if (bVar4) {
      return *(UMaterialInterface **)(pFVar7 + 8);
    }
    pFVar7 = pFVar7 + 0x10;
  }
  return pUVar6;
}

