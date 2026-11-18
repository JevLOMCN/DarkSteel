// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// TStaticArray<UE::Math::TVector4<float>,6,4294967295> @ 144cacc00

TStaticArray<UE::Math::TVector4<float>,6,4294967295> * __thiscall
TStaticArray<UE::Math::TVector4<float>,6,4294967295>::
TStaticArray<UE::Math::TVector4<float>,6,4294967295>
          (TStaticArray<UE::Math::TVector4<float>,6,4294967295> *this)

{
  *(undefined8 *)((longlong)&this->Elements[0].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)&this->Elements[0].field0_0x0 = 0;
  this->Elements[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&this->Elements[1].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->Elements[1].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->Elements[2].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->Elements[2].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->Elements[3].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->Elements[3].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->Elements[4].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->Elements[4].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->Elements[5].field0_0x0 + 4) = 0;
  this->Elements[5].field0_0x0._s_0.W = 1.0;
  return this;
}

// TStaticArray<TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,5,4294967295> @ 145194ea0

TStaticArray<TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,5,4294967295>
* __thiscall
TStaticArray<TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,5,4294967295>
::
TStaticArray<TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,5,4294967295>
          (TStaticArray<TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,5,4294967295>
           *this)

{
  this->Elements[0].AllocatorInstance.Data =
       (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
        *)0x0;
  this->Elements[0].ArrayNum = 0;
  this->Elements[0].ArrayMax = 0;
  this->Elements[1].AllocatorInstance.Data =
       (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
        *)0x0;
  this->Elements[1].ArrayNum = 0;
  this->Elements[1].ArrayMax = 0;
  this->Elements[2].AllocatorInstance.Data =
       (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
        *)0x0;
  this->Elements[2].ArrayNum = 0;
  this->Elements[2].ArrayMax = 0;
  this->Elements[3].AllocatorInstance.Data =
       (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
        *)0x0;
  this->Elements[3].ArrayNum = 0;
  this->Elements[3].ArrayMax = 0;
  this->Elements[4].AllocatorInstance.Data =
       (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
        *)0x0;
  this->Elements[4].ArrayNum = 0;
  this->Elements[4].ArrayMax = 0;
  return this;
}

// TStaticArray<FParallelMeshDrawCommandPass_*,39,4294967295><std::nullptr_t> @ 1454c6e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

TStaticArray<FParallelMeshDrawCommandPass_*,39,4294967295> * __thiscall
TStaticArray<FParallelMeshDrawCommandPass_*,39,4294967295>::
TStaticArray<FParallelMeshDrawCommandPass_*,39,4294967295><std::nullptr_t>
          (TStaticArray<FParallelMeshDrawCommandPass_*,39,4294967295> *this,EInPlace param_1,
          void **param_2)

{
                    /* WARNING: Load size is inaccurate */
  this->Elements[0] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[1] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[2] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[3] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[4] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[5] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[6] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[7] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[8] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[9] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[10] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0xb] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0xc] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0xd] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0xe] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0xf] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x10] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x11] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x12] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x13] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x14] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x15] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x16] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x17] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x18] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x19] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x1a] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x1b] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x1c] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x1d] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x1e] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x1f] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x20] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x21] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x22] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x23] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x24] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x25] = *param_2;
                    /* WARNING: Load size is inaccurate */
  this->Elements[0x26] = *param_2;
  return this;
}

// TStaticArray<FRDGTextureDesc,4,4294967295> @ 14551d850

TStaticArray<FRDGTextureDesc,4,4294967295> * __thiscall
TStaticArray<FRDGTextureDesc,4,4294967295>::TStaticArray<FRDGTextureDesc,4,4294967295>
          (TStaticArray<FRDGTextureDesc,4,4294967295> *this)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  lVar3 = 4;
  puVar2 = &this->Elements[0].field_0xc;
  do {
    *(undefined8 *)(puVar2 + -0xc) = 0;
    *(undefined8 *)(puVar2 + -4) = 1;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    uVar1 = GNumExplicitGPUsForRendering;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    *(undefined4 *)(puVar2 + 0x18) = 1;
    *(undefined4 *)(puVar2 + 0x1c) = 1;
    *(undefined4 *)(puVar2 + 0x20) = 0x10001;
    *(undefined4 *)(puVar2 + 0x24) = 0x101;
    *(undefined2 *)(puVar2 + 0x28) = 0xff00;
    *(undefined8 *)(puVar2 + 0x34) = 0;
    *(int *)(puVar2 + 0x10) = (1 << ((byte)uVar1 & 0x1f)) + -1;
    *(undefined4 *)(puVar2 + 0x3c) = 0;
    *(undefined4 *)(puVar2 + 0x40) = 1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x50;
  } while (lVar3 != 0);
  return this;
}

// ~TStaticArray<TRefCountPtr<IPooledRenderTarget>,3,4294967295> @ 1455206f0

void __thiscall
TStaticArray<TRefCountPtr<IPooledRenderTarget>,3,4294967295>::
~TStaticArray<TRefCountPtr<IPooledRenderTarget>,3,4294967295>
          (TStaticArray<TRefCountPtr<IPooledRenderTarget>,3,4294967295> *this)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  longlong lVar2;
  TRefCountPtr<IPooledRenderTarget> *pTVar3;
  
  pTVar3 = this[1].Elements;
  lVar2 = 3;
  do {
    pTVar1 = pTVar3 + -1;
    pTVar3 = pTVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar2 != 0);
  return;
}

