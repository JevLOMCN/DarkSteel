// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// ~INiagaraRenderableMesh @ 148ea6ae0

void __thiscall INiagaraRenderableMesh::~INiagaraRenderableMesh(INiagaraRenderableMesh *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7INiagaraRenderableMesh__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148ea6b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ComputeLOD @ 148eae920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
INiagaraRenderableMesh::ComputeLOD
          (INiagaraRenderableMesh *this,TVector<double> *param_1,float param_2,FSceneView *param_3,
          float param_4)

{
  return 0;
}

// GetLODRange @ 148ebdde0

TIntVector2<int> __thiscall INiagaraRenderableMesh::GetLODRange(INiagaraRenderableMesh *this)

{
  TIntVector2<int>_u_0 in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return (TIntVector2<int>)in_RDX;
}

// GetLODScreenSize @ 148ebddf0

TVector<float> * __thiscall
INiagaraRenderableMesh::GetLODScreenSize
          (INiagaraRenderableMesh *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  return __return_storage_ptr__;
}

// GetRayTraceLODModelData @ 148ec00b0

void __thiscall
INiagaraRenderableMesh::GetRayTraceLODModelData
          (INiagaraRenderableMesh *this,FLODModelData *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000148ec00b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))();
  return;
}

// SetMinLODBias @ 148ecfcd0

void __thiscall INiagaraRenderableMesh::SetMinLODBias(INiagaraRenderableMesh *this,int param_1)

{
  return;
}

// SetupRayTraceVertexFactory @ 148ed1a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
INiagaraRenderableMesh::SetupRayTraceVertexFactory
          (INiagaraRenderableMesh *this,FRHICommandListBase *param_1,
          FNiagaraMeshVertexFactory *param_2,FLODModelData *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000148ed1a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x30))();
  return;
}

// SetupVertexFactory @ 148ed1e40

void __thiscall
INiagaraRenderableMesh::SetupVertexFactory
          (INiagaraRenderableMesh *this,FNiagaraMeshVertexFactory *param_1,FLODModelData *param_2)

{
  return;
}

