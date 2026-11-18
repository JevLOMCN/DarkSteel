// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 128

// FindOrAddImpl<FNiagaraCompileHash_const_&> @ 148e49eb0

uint * __thiscall
TMapBase<FNiagaraCompileHash,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>_>
::FindOrAddImpl<FNiagaraCompileHash_const_&>
          (TMapBase<FNiagaraCompileHash,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>_>
           *this,uint param_1,FNiagaraCompileHash *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FNiagaraCompileHash *local_res20;
  
  iVar1 = TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FNiagaraCompileHash>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (uint *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FNiagaraCompileHash_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FNiagaraCompileHash_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (uint *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 148e49f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInstanceData * __thiscall
TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0xd8 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FInstanceData *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[0x1a];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FInstanceData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xd8 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 148e49ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInstanceData * __thiscall
TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0xe0 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FInstanceData *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[0x1b];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FInstanceData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xe0 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 148e4a0a0

FInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0xa0 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FInstanceData_RenderThread *)(puVar2 + 2);
          }
          break;
        }
        iVar1 = (int)puVar2[0x12];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_res8[0] * 0xa0);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 148e4a160

FInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_148e4a1f2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_148e4a1f2:
  return (FInstanceData_RenderThread *)(lVar3 + 8);
}

// Find @ 148e654f0

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

FNDIDataChannelRead_EmitterInstanceData * __thiscall
TMapBase<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
::Find(TMapBase<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
       *this,FNiagaraEmitterInstance *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FNDIDataChannelRead_EmitterInstanceData *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x70 + *(longlong *)&(this->Pairs).Elements);
        if ((FNiagaraEmitterInstance *)*plVar2 == param_1) {
          pFVar4 = (FNDIDataChannelRead_EmitterInstanceData *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FNDIDataChannelRead_EmitterInstanceData *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0xd];
      } while (iVar1 != -1);
    }
  }
  return (FNDIDataChannelRead_EmitterInstanceData *)0x0;
}

// Find @ 148e65590

FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase> *)0x0
          ;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase> *)
                     (puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase> *)0x0;
}

// Find @ 148e65600

FInstanceData * __thiscall
TMapBase<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>_>
::Find(TMapBase<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FInstanceData *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FInstanceData *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FInstanceData *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FInstanceData *)0x0;
}

// Find @ 148e65670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInstanceData * __thiscall
TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
::Find(TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FInstanceData *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0xd8 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FInstanceData *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FInstanceData *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x1a];
      } while (iVar1 != -1);
    }
  }
  return (FInstanceData *)0x0;
}

// Find @ 148e65700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInstanceData * __thiscall
TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
::Find(TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FInstanceData *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0xe0 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FInstanceData *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FInstanceData *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x1b];
      } while (iVar1 != -1);
    }
  }
  return (FInstanceData *)0x0;
}

// FindOrAddImpl<unsigned___int64_const_&> @ 148e96cb0

FInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[0x11];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x90);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 148e96d70

FInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x78 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[0xe];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x78 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 148e96e20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x158 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDIInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[0x2a];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDIInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x158 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 148e96ed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDIInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[9];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDIInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 148e96f80

FNDIPhysicsAssetData * __thiscall
TMapBase<unsigned___int64,FNDIPhysicsAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDIPhysicsAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0xe950 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDIPhysicsAssetData *)(puVar2 + 2);
          }
          break;
        }
        iVar1 = (int)puVar2[0x1d28];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNDIPhysicsAssetData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDIPhysicsAssetData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xe950 + 0x10);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 148e97030

FNDInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x110 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDInstanceData_RenderThread *)(puVar2 + 2);
          }
          break;
        }
        iVar1 = (int)puVar2[0x20];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x110 + 0x10);
}

// FindOrAddImpl<unsigned___int64> @ 148e970e0

TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TMapBase<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<unsigned___int64>
          (TMapBase<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *
                   )(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// Find @ 148eb8800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDIInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x158 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDIInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDIInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x2a];
      } while (iVar1 != -1);
    }
  }
  return (FNDIInstanceData_RenderThread *)0x0;
}

// Find @ 148eb8890

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDIInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDIInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDIInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[9];
      } while (iVar1 != -1);
    }
  }
  return (FNDIInstanceData_RenderThread *)0x0;
}

// Find @ 148eb8920

FNDIPhysicsAssetData * __thiscall
TMapBase<unsigned___int64,FNDIPhysicsAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>_>
::Find(TMapBase<unsigned___int64,FNDIPhysicsAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDIPhysicsAssetData *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0xe950 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDIPhysicsAssetData *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDIPhysicsAssetData *)(puVar3 + 2);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x1d28];
      } while (iVar1 != -1);
    }
  }
  return (FNDIPhysicsAssetData *)0x0;
}

// Find @ 148eb89b0

FNDISimpleCounterInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDISimpleCounterInstanceData_RenderThread *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDISimpleCounterInstanceData_RenderThread *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDISimpleCounterInstanceData_RenderThread *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FNDISimpleCounterInstanceData_RenderThread *)0x0;
}

// FindChecked @ 148eb8a20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TObjectPtr<USceneCaptureComponent2D> * __thiscall
TMapBase<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,0>_>
::FindChecked(TMapBase<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<USceneCaptureComponent2D> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<USceneCaptureComponent2D> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<USceneCaptureComponent2D> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<USceneCaptureComponent2D> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 148eb8ad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
::FindChecked(TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNDIInstanceData_RenderThread *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x158 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FNDIInstanceData_RenderThread *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[0x2a];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FNDIInstanceData_RenderThread *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FNDIInstanceData_RenderThread *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 148eb8b90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
::FindChecked(TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNDIInstanceData_RenderThread *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FNDIInstanceData_RenderThread *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[9];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FNDIInstanceData_RenderThread *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FNDIInstanceData_RenderThread *)(*pcVar1)();
  return pFVar4;
}

// FindOrAddImpl<unsigned___int64_const_&> @ 148ef6360

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0xc0 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FInstanceData_RenderThread *)(puVar2 + 2);
          }
          break;
        }
        iVar1 = (int)puVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_res8[0] * 0xc0);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 148ef6420

FNDInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x130 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDInstanceData_RenderThread *)(puVar2 + 2);
          }
          break;
        }
        iVar1 = (int)puVar2[0x24];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x130 + 0x10);
}

// FindChecked @ 148fad7c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>_>
::FindChecked(TMapBase<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FInstanceData_RenderThread *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0xc0 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FInstanceData_RenderThread *)(puVar5 + 2);
          }
          break;
        }
        iVar3 = (int)puVar5[0x16];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FInstanceData_RenderThread *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FInstanceData_RenderThread *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 148fad880

FInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,0>_>
::FindChecked(TMapBase<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FInstanceData_RenderThread *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x1e0 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FInstanceData_RenderThread *)(puVar5 + 2);
          }
          break;
        }
        iVar3 = (int)puVar5[0x3a];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FInstanceData_RenderThread *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FInstanceData_RenderThread *)(*pcVar1)();
  return pFVar4;
}

// Emplace<FNiagaraVariable_const_&,FText> @ 148fef0f0

FText * __thiscall
TMapBase<FNiagaraVariable,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FText,0>_>
::Emplace<FNiagaraVariable_const_&,FText>
          (TMapBase<FNiagaraVariable,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FText,0>_>
           *this,FNiagaraVariable *param_1,FText *param_2)

{
  TPairInitializer<FNiagaraVariable_const_&,FText_&&> local_res8 [2];
  FNiagaraVariable *local_18;
  FText *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FNiagaraVariable,FText>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FText,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNiagaraVariable_const_&,FText_&&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (FText *)(*(longlong *)&(this->Pairs).Elements +
                  (longlong)(int)local_res8[0].Key * 0x38 + 0x20);
}

// Emplace<FNiagaraVariableBase_const_&,FNiagaraVariable_const_&> @ 148fef140

FNiagaraVariable * __thiscall
TMapBase<FNiagaraVariableBase,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariable,0>_>
::Emplace<FNiagaraVariableBase_const_&,FNiagaraVariable_const_&>
          (TMapBase<FNiagaraVariableBase,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariable,0>_>
           *this,FNiagaraVariableBase *param_1,FNiagaraVariable *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FNiagaraVariableBase,FNiagaraVariable>_> *)0x0)
  {
    *(FName *)local_18.Pointer = param_1->Name;
    *(int *)((longlong)local_18.Pointer + 8) = (param_1->TypeDefHandle).RegisteredTypeIndex;
    FNiagaraVariable::FNiagaraVariable
              ((FNiagaraVariable *)((longlong)local_18.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar5 = ::GetTypeHash(local_18.Pointer);
  bVar3 = TSet<TTuple<FNiagaraVariableBase,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariable,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FNiagaraVariableBase,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariable,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_18.Pointer,local_res8[0]);
  }
  return (FNiagaraVariable *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x38 + 0x10);
}

// Emplace<FNiagaraVariableBase_const_&,FText_const_&> @ 148fef280

FText * __thiscall
TMapBase<FNiagaraVariableBase,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FText,0>_>
::Emplace<FNiagaraVariableBase_const_&,FText_const_&>
          (TMapBase<FNiagaraVariableBase,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FText,0>_>
           *this,FNiagaraVariableBase *param_1,FText *param_2)

{
  int iVar1;
  int iVar2;
  ITextData *pIVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FNiagaraVariableBase,FText>_> *)0x0) {
    *(FName *)local_18.Pointer = param_1->Name;
    *(int *)((longlong)local_18.Pointer + 8) = (param_1->TypeDefHandle).RegisteredTypeIndex;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    pIVar3 = (param_2->TextData).Reference;
    *(ITextData **)((longlong)local_18.Pointer + 0x10) = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    *(uint *)((longlong)local_18.Pointer + 0x18) = param_2->Flags;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash(local_18.Pointer);
  bVar4 = TSet<TTuple<FNiagaraVariableBase,FText>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FText,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FNiagaraVariableBase,FText>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FText,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FText *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x28 + 0x10);
}

// Emplace<FNiagaraVariableBase_const_&,FNiagaraVariable> @ 148fef3d0

FNiagaraVariable * __thiscall
TMapBase<FNiagaraVariableBase,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariable,0>_>
::Emplace<FNiagaraVariableBase_const_&,FNiagaraVariable>
          (TMapBase<FNiagaraVariableBase,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariable,0>_>
           *this,FNiagaraVariableBase *param_1,FNiagaraVariable *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TSparseSetElement<TTuple<FNiagaraVariableBase,FNiagaraVariable>_> *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer == (TSparseSetElement<TTuple<FNiagaraVariableBase,FNiagaraVariable>_> *)0x0)
  {
    pTVar6 = (TSparseSetElement<TTuple<FNiagaraVariableBase,FNiagaraVariable>_> *)0x0;
  }
  else {
    *(FName *)local_18.Pointer = param_1->Name;
    *(int *)((longlong)local_18.Pointer + 8) = (param_1->TypeDefHandle).RegisteredTypeIndex;
    *(longlong *)((longlong)local_18.Pointer + 0x10) = param_2->_padding_;
    *(int *)((longlong)local_18.Pointer + 0x18) = (int)param_2->_padding_;
    *(undefined8 *)((longlong)local_18.Pointer + 0x20) = 0;
    *(FScriptContainerElement **)((longlong)local_18.Pointer + 0x20) =
         (param_2->VarData).AllocatorInstance.Data;
    (param_2->VarData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_18.Pointer + 0x28) = (param_2->VarData).ArrayNum;
    *(int *)((longlong)local_18.Pointer + 0x2c) = (param_2->VarData).ArrayMax;
    (param_2->VarData).ArrayNum = 0;
    (param_2->VarData).ArrayMax = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0xffffffff;
    pTVar6 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  uVar5 = ::GetTypeHash((FNiagaraVariableBase *)pTVar6);
  bVar3 = TSet<TTuple<FNiagaraVariableBase,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariable,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FNiagaraVariableBase,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariable,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,pTVar6,local_res8[0]);
  }
  return (FNiagaraVariable *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 0x10);
}

// Emplace<FNiagaraVariableBase_const_&,FString> @ 148fef530

FString * __thiscall
TMapBase<FNiagaraVariableBase,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FString,0>_>
::Emplace<FNiagaraVariableBase_const_&,FString>
          (TMapBase<FNiagaraVariableBase,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FString,0>_>
           *this,FNiagaraVariableBase *param_1,FString *param_2)

{
  TPairInitializer<FNiagaraVariableBase_const_&,FString_&&> local_res8 [2];
  FNiagaraVariableBase *local_18;
  FString *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FNiagaraVariableBase,FString>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNiagaraVariableBase_const_&,FString_&&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (FString *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x28 + 0x10);
}

// Emplace<FNiagaraVariableBase_const_&,FText> @ 148fef580

FText * __thiscall
TMapBase<FNiagaraVariableBase,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FText,0>_>
::Emplace<FNiagaraVariableBase_const_&,FText>
          (TMapBase<FNiagaraVariableBase,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FText,0>_>
           *this,FNiagaraVariableBase *param_1,FText *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FNiagaraVariableBase,FText>_> *)0x0) {
    *(FName *)local_18.Pointer = param_1->Name;
    *(int *)((longlong)local_18.Pointer + 8) = (param_1->TypeDefHandle).RegisteredTypeIndex;
    FText::FText((FText *)((longlong)local_18.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar5 = ::GetTypeHash(local_18.Pointer);
  bVar3 = TSet<TTuple<FNiagaraVariableBase,FText>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FText,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FNiagaraVariableBase,FText>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FText,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_18.Pointer,local_res8[0]);
  }
  return (FText *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x28 + 0x10);
}

// Emplace<FName,FNiagaraVariable_const_&> @ 148ff0510

FNiagaraVariable * __thiscall
TMapBase<FName,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraVariable,0>_>
::Emplace<FName,FNiagaraVariable_const_&>
          (TMapBase<FName,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraVariable,0>_>
           *this,FName *param_1,FNiagaraVariable *param_2)

{
  TPairInitializer<FName_&&,FNiagaraVariable_const_&> local_res8 [2];
  FName *local_18;
  FNiagaraVariable *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FName,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FName,FNiagaraVariable,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,FNiagaraVariable_const_&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (FNiagaraVariable *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8[0].Key * 0x30);
}

// FindOrAddImpl<FNiagaraDataInterfaceProxy_*_const_&> @ 148ff2870

FNiagaraAsyncGpuTraceDispatchInfo * __thiscall
TMapBase<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>_>
::FindOrAddImpl<FNiagaraDataInterfaceProxy_*_const_&>
          (TMapBase<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>_>
           *this,uint param_1,FNiagaraDataInterfaceProxy **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FNiagaraDataInterfaceProxy **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((FNiagaraDataInterfaceProxy *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FNiagaraAsyncGpuTraceDispatchInfo *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FNiagaraDataInterfaceProxy_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FNiagaraDataInterfaceProxy_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FNiagaraAsyncGpuTraceDispatchInfo *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<TStatIdData_const_*_const_&> @ 148ff2920

FStatExecutionTimer * __thiscall
TMapBase<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>
::FindOrAddImpl<TStatIdData_const_*_const_&>
          (TMapBase<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>
           *this,uint param_1,TStatIdData **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  TStatIdData **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(TStatIdData **)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_148ff29b2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TStatIdData_const_*,FStatExecutionTimer>,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TStatIdData_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TStatIdData_const_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_148ff29b2:
  return (FStatExecutionTimer *)(lVar3 + 8);
}

// FindOrAddImpl<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>_const_&> @ 148ff29d0

TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>
* __thiscall
TMapBase<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>,0>_>
::FindOrAddImpl<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>_const_&>
          (void *this,uint param_1,TTuple<unsigned___int64,ENiagaraScriptUsage> *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int local_res8 [2];
  TTuple<unsigned___int64,ENiagaraScriptUsage> *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)((longlong)iVar2 * 0x68 + *(longlong *)this);
        if ((*plVar1 == *(longlong *)param_2) && ((char)plVar1[1] == param_2->field_0x8)) {
          if ((iVar2 != -1) && (plVar1 != (longlong *)0x0)) {
            return (TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>
                    *)(plVar1 + 2);
          }
          break;
        }
        iVar2 = (int)plVar1[0xc];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>,TDefaultMapHashableKeyFuncs<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<TTuple<unsigned___int64,ENiagaraScriptUsage>_const_&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>
          *)(*(longlong *)this + (longlong)local_res8[0] * 0x68 + 0x10);
}

// FindOrAddImpl<FPrimitiveComponentId_const_&> @ 148ff2aa0

uint * __thiscall
TMapBase<FPrimitiveComponentId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,unsigned_int,0>_>
::FindOrAddImpl<FPrimitiveComponentId_const_&>
          (TMapBase<FPrimitiveComponentId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,unsigned_int,0>_>
           *this,uint param_1,FPrimitiveComponentId *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FPrimitiveComponentId *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_2->PrimIDValue) {
          if (puVar2 != (uint *)0x0) {
            return puVar2 + 1;
          }
          break;
        }
        uVar1 = puVar2[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FPrimitiveComponentId,unsigned_int>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,unsigned_int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPrimitiveComponentId_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FPrimitiveComponentId_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (uint *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

// FindOrAddImpl<enum_ENiagaraScriptUsage_const_&> @ 148ff2b50

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
TMapBase<enum_ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<enum_ENiagaraScriptUsage_const_&>
          (void *this,uint param_1,ENiagaraScriptUsage *param_2)

{
  undefined4 uVar1;
  ENiagaraScriptUsage *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  ENiagaraScriptUsage *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (ENiagaraScriptUsage *)((longlong)(int)uVar1 * 0x60 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (ENiagaraScriptUsage *)0x0) {
            return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pEVar2 + 8);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x58);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<enum_ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_ENiagaraScriptUsage_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<ENiagaraScriptUsage_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
         (*(longlong *)this + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<TObjectPtr<UNiagaraSystem>_> @ 148ff2c00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNCPool * __thiscall
TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
::FindOrAddImpl<TObjectPtr<UNiagaraSystem>_>
          (TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
           *this,uint param_1,TObjectPtr<UNiagaraSystem> *param_2)

{
  int iVar1;
  UNiagaraSystem *pUVar2;
  UNiagaraSystem *pUVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int local_res8 [2];
  TObjectPtr<UNiagaraSystem> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UNiagaraSystem *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      lVar4 = (longlong)iVar1 * 0x20;
      pUVar3 = *(UNiagaraSystem **)(lVar4 + *(longlong *)&(this->Pairs).Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UNiagaraSystem *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        if ((iVar1 != -1) && (lVar4 = *(longlong *)&(this->Pairs).Elements + lVar4, lVar4 != 0)) {
          return (FNCPool *)(lVar4 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x18 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectPtr<UNiagaraSystem>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectPtr<UNiagaraSystem>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FNCPool *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 148ff53f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (void *this,
          TArray<TTuple<unsigned___int64,ENiagaraScriptUsage>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  ForElementType<unsigned_int> FVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  void *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar20;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar20 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.AllocationFlags.NumBits = 0;
  local_98.AllocationFlags.MaxBits = 0x80;
  local_98.FirstFreeIndex = -1;
  local_98.NumFreeIndices = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar15 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  uVar18 = 0;
  if (uVar15 == 0) goto LAB_148ff56d8;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_98,uVar15);
  uVar16 = 1;
  if (3 < uVar15) {
    uVar14 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_120 = (undefined4)lVar11;
    uVar16 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar16 <= (int)local_50)) goto LAB_148ff56d8;
  local_50 = uVar16;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 != 0) {
    uVar15 = uVar16;
    if (uVar16 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar15 = 0;
        goto LAB_148ff5504;
      }
    }
    else {
LAB_148ff5504:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar15,4);
    }
    if (0 < (int)uVar16) {
      uVar19 = (ulonglong)uVar16;
      uVar14 = uVar20;
      do {
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        uVar10 = uVar14 & (longlong)(int)uVar16 - 1U;
        uVar14 = uVar14 + 1;
        *(undefined4 *)(FVar12.Data + uVar10 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = &local_98.AllocationFlags;
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar14 = uVar20;
    if (local_98.AllocationFlags.NumBits != 0) {
      FVar21 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
      if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar15 = *(uint *)FVar21;
      uVar19 = uVar20;
      while (uVar15 == 0) {
        uStack_150 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_150;
        iVar8 = (int)uVar14;
        local_168 = iVar8 + 1;
        uVar14 = (ulonglong)local_168;
        if ((int)((local_98.AllocationFlags.NumBits - 1U) +
                 ((int)(local_98.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_168) goto LAB_148ff5612;
        uVar15 = *(uint *)((uchar *)((longlong)FVar21 + 4) + (longlong)iVar8 * 4);
      }
      uStack_164 = -uVar15 & uVar15;
      uVar14 = (ulonglong)uStack_164 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_11c = (int)lVar11;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar14 = (ulonglong)uStack_154;
      if (local_98.AllocationFlags.NumBits < (int)uStack_154) {
LAB_148ff5612:
        uVar14 = (ulonglong)(uint)local_98.AllocationFlags.NumBits;
        uStack_154 = local_98.AllocationFlags.NumBits;
      }
    }
    local_114._4_8_ = &local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar14 < local_98.AllocationFlags.NumBits) {
      do {
        lVar11 = (longlong)(int)uVar14;
        pFVar3 = (((TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSizedDefaultAllocator<32>_>
                    *)local_114._4_8_)->AllocatorInstance).Data;
        uVar15 = (int)((ulonglong)*(undefined8 *)(pFVar3 + lVar11 * 0x18) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(pFVar3 + lVar11 * 0x18);
        uVar15 = (uVar15 * 0x40 + (uVar15 >> 2) + 0x9e3779b9 + (uint)(byte)pFVar3[lVar11 * 0x18 + 8]
                 ^ uVar15) & local_50 - 1;
        *(uint *)(pFVar3 + lVar11 * 0x18 + 0x14) = uVar15;
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        uVar19 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(pFVar3 + lVar11 * 0x18 + 0x10) = *(undefined4 *)(FVar12.Data + uVar19 * 4);
        *(int *)(FVar12.Data + uVar19 * 4) = (int)uVar14;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar14 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_148ff56d8:
  uVar15 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (*piVar1 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar15,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar15 = *(uint *)((longlong)this + 0x28);
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  uVar14 = uVar20;
  local_c8 = uVar18;
  uStack_dc = 1;
  if (uVar15 != 0) {
    uVar14 = (ulonglong)uVar15;
    pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = TStack_140.Array;
    }
    uVar16 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
    uVar19 = uVar20;
    local_c8 = 0;
    uVar18 = 0;
    while (uVar16 == 0) {
      iVar8 = (int)uVar20;
      local_c8 = (int)uVar19 + 0x20;
      uVar19 = (ulonglong)local_c8;
      uVar18 = iVar8 + 1;
      uVar20 = (ulonglong)uVar18;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_148ff578e;
      uVar16 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
    }
    uStack_dc = -uVar16 & uVar16;
    uVar20 = (ulonglong)uStack_dc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_118 = (int)lVar11;
    uVar16 = (local_c8 - 1) + local_118;
    if ((int)uVar15 < (int)uVar16) {
      uVar16 = uVar15;
    }
    uVar14 = (ulonglong)uVar16;
  }
LAB_148ff578e:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar14;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar18);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar18;
  local_d8 = TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar15) {
    do {
      iVar8 = TStack_140.CurrentBitIndex;
      lVar13 = (longlong)(int)uVar14 * 0x68;
      lVar11 = *(longlong *)this;
      lVar4 = *(longlong *)(lVar13 + lVar11);
      FVar2 = *(FScriptContainerElement *)(lVar13 + 8 + lVar11);
      uVar18 = (int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4;
      if (local_98.Data.ArrayNum != local_98.NumFreeIndices) {
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        iVar9 = *(int *)(FVar12.Data +
                        (ulonglong)
                        (local_50 - 1 &
                        (uVar18 * 0x40 + (uVar18 >> 2) + 0x9e3779b9 + (uint)(byte)FVar2 ^ uVar18)) *
                        4);
        while (iVar9 != -1) {
          lVar13 = (longlong)iVar9;
          if ((*(longlong *)(local_98.Data.AllocatorInstance.Data + lVar13 * 0x18) == lVar4) &&
             (local_98.Data.AllocatorInstance.Data[lVar13 * 0x18 + 8] == FVar2)) {
            if (iVar9 != -1) goto LAB_148ff593a;
            break;
          }
          iVar9 = *(int *)(local_98.Data.AllocatorInstance.Data + lVar13 * 0x18 + 0x10);
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar17 = (FScriptContainerElement *)((longlong)TStack_140.CurrentBitIndex * 0x68 + lVar11);
      if (((pFVar3 <= pFVar17) && (pFVar17 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      uVar6 = *(undefined8 *)(pFVar17 + 8);
      pFVar3 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar17;
      *(undefined8 *)(pFVar3 + 8) = uVar6;
      TSet<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,DefaultKeyFuncs<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>_const_&>
                (&local_98,(TTuple<unsigned___int64,ENiagaraScriptUsage> *)local_114,
                 (bool *)((longlong)iVar8 * 0x68 + *(longlong *)this));
LAB_148ff593a:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar14 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar8 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  return iVar8;
}

// Find @ 149041820

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNCPool * __thiscall
TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
::Find(TMapBase<TObjectPtr<UNiagaraSystem>,FNCPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>_>
       *this,TObjectPtr<UNiagaraSystem_const_> param_1)

{
  TObjectPtr<UNiagaraSystem_const_>_u_0 TVar1;
  int iVar2;
  FNCPool *pFVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<UNiagaraSystem_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UNiagaraSystem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UNiagaraSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UNiagaraSystem_const_>_>
                    (&this->Pairs,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UNiagaraSystem_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FNCPool *)0x0;
    if (lVar5 != 0) {
      pFVar3 = (FNCPool *)(lVar5 + 8);
    }
    return pFVar3;
  }
  return (FNCPool *)0x0;
}

// FindOrAddImpl<unsigned___int64_const_&> @ 149097ac0

FCameraDataInterface_InstanceDataRT * __thiscall
TMapBase<unsigned___int64,FCameraDataInterface_InstanceDataRT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCameraDataInterface_InstanceDataRT,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FCameraDataInterface_InstanceDataRT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCameraDataInterface_InstanceDataRT,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_149097b52;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FCameraDataInterface_InstanceDataRT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCameraDataInterface_InstanceDataRT,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_149097b52:
  return (FCameraDataInterface_InstanceDataRT *)(lVar3 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 149097b70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDICubeTextureInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDICubeTextureInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[5];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNDICubeTextureInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDICubeTextureInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 149097c20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDITexture2DArrayInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDITexture2DArrayInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDITexture2DArrayInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14909ab60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
           *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  uint local_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar15;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar15 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar14 = 0;
  if (uVar11 == 0) goto LAB_14909ae09;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  uVar12 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_120 = (undefined4)lVar4;
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar12 <= (int)local_50)) goto LAB_14909ae09;
  local_50 = uVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_14909ac71;
      }
    }
    else {
LAB_14909ac71:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar13 = (ulonglong)uVar12;
      uVar10 = uVar15;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = (longlong)(int)uVar12 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar10 = uVar15;
    if (local_70 != 0) {
      FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_78;
      }
      uVar11 = *(uint *)FVar16;
      uVar13 = uVar15;
      while (uVar11 == 0) {
        uStack_150 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_150;
        iVar7 = (int)uVar10;
        local_168 = iVar7 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14909ad72;
        uVar11 = ((uint *)((longlong)FVar16 + 4))[iVar7];
      }
      uStack_164 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_11c = (int)lVar4;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14909ad72:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_110 = (longlong *)local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar7 = (int)uVar10;
        uVar11 = local_50 - 1 & *(uint *)(*local_110 + (longlong)iVar7 * 0xc);
        lVar4 = *local_110 + (longlong)iVar7 * 0xc;
        *(uint *)(lVar4 + 8) = uVar11;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(FVar9.Data + uVar10 * 4);
        *(int *)(FVar9.Data + uVar10 * 4) = iVar7;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14909ae09:
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar11 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar15;
  local_c8 = uVar14;
  uStack_dc = 1;
  if (uVar11 != 0) {
    puVar17 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar17;
    uVar13 = uVar15;
    local_c8 = 0;
    uVar14 = 0;
    while (uVar12 == 0) {
      iVar7 = (int)uVar15;
      local_c8 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)local_c8;
      uVar14 = iVar7 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14909aebe;
      uVar12 = puVar17[(longlong)iVar7 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar15 = (ulonglong)uStack_dc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_118 = (int)lVar4;
    uVar12 = (local_c8 - 1) + local_118;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_14909aebe:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar10;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar14);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar14;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar11) {
    do {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      uVar14 = *(uint *)((longlong)(int)uVar10 * 0x20 + lVar4);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar9.Data + (ulonglong)(local_50 - 1 & uVar14) * 4); iVar7 != -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4)) {
          if (*(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) == uVar14) goto LAB_14909b01a;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)((longlong)(int)uVar10 * 0x20 + lVar4);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           *(undefined4 *)pFVar2;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      Emplace<unsigned_int_const_&>
                ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)local_98
                 ,&local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x20 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_14909b01a:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar10 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar7 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// Find @ 1490f8630

int * __thiscall
TMapBase<FNiagaraVariableBase,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,int,0>_>
::Find(TMapBase<FNiagaraVariableBase,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,int,0>_>
       *this,FNiagaraVariableBase *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if ((*(FName *)(lVar2 + (longlong)iVar5 * 0x18) == param_1->Name) &&
           (*(int *)(lVar1 + 8) == (param_1->TypeDefHandle).RegisteredTypeIndex)) {
          if (iVar5 == -1) {
            return (int *)0x0;
          }
          piVar4 = (int *)0x0;
          if (lVar1 != 0) {
            piVar4 = (int *)(lVar1 + 0xc);
          }
          return piVar4;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  return (int *)0x0;
}

// Find @ 1490f86e0

FNDIArrayInstanceData_RenderThread<unsigned_char> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<unsigned_char> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<unsigned_char> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<unsigned_char> *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<unsigned_char> *)0x0;
}

// Find @ 1490f8750

FNDIArrayInstanceData_RenderThread<int> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<int> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<int> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<int> *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<int> *)0x0;
}

// Find @ 1490f87c0

FNDIArrayInstanceData_RenderThread<float> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<float> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<float> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<float> *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<float> *)0x0;
}

// Find @ 1490f8830

FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_> *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_> *)0x0;
}

// Find @ 1490f88a0

FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_> *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_> *)0x0;
}

// Find @ 1490f8910

FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_> *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_> *)0x0;
}

// Find @ 1490f8980

FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_> *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_> *)0x0;
}

// Find @ 1490f89f0

FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_> *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_> *)0x0;
}

// Find @ 1490f8a60

FNDIArrayInstanceData_RenderThread<FLinearColor> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<FLinearColor> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<FLinearColor> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<FLinearColor> *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<FLinearColor> *)0x0;
}

// Find @ 1490f8ad0

FNDIArrayInstanceData_RenderThread<FNiagaraID> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<FNiagaraID> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<FNiagaraID> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<FNiagaraID> *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<FNiagaraID> *)0x0;
}

// Find @ 1490f8b40

FNDIArrayInstanceData_RenderThread<FNiagaraPosition> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<FNiagaraPosition> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<FNiagaraPosition> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<FNiagaraPosition> *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<FNiagaraPosition> *)0x0;
}

// Find @ 1490f8bb0

FNDIArrayInstanceData_RenderThread<bool> * __thiscall
TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,0>_>
::Find(TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIArrayInstanceData_RenderThread<bool> *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIArrayInstanceData_RenderThread<bool> *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIArrayInstanceData_RenderThread<bool> *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIArrayInstanceData_RenderThread<bool> *)0x0;
}

// Find @ 1490f8c20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDICubeTextureInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDICubeTextureInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDICubeTextureInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDICubeTextureInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[5];
      } while (iVar1 != -1);
    }
  }
  return (FNDICubeTextureInstanceData_RenderThread *)0x0;
}

// Find @ 1490f8cb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDITexture2DArrayInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDITexture2DArrayInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDITexture2DArrayInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDITexture2DArrayInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[6];
      } while (iVar1 != -1);
    }
  }
  return (FNDITexture2DArrayInstanceData_RenderThread *)0x0;
}

// FindChecked @ 1490f8d20

FThreadScopeInfo * __thiscall
TMapBase<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>_>
::FindChecked(TMapBase<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FThreadScopeInfo *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x28;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x28) == param_1) {
          if (lVar1 != 0) {
            return (FThreadScopeInfo *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FThreadScopeInfo *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FThreadScopeInfo *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 1490f8dc0

TSharedPtr<FNiagaraSubmixListener,1> * __thiscall
TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
::FindChecked(TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FNiagaraSubmixListener,1> *pTVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (TSharedPtr<FNiagaraSubmixListener,1> *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedPtr<FNiagaraSubmixListener,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FNiagaraSubmixListener,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 1490f8e60

TSharedPtr<FNiagaraSubmixListener,1> * __thiscall
TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
::FindChecked(TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FNiagaraSubmixListener,1> *pTVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (TSharedPtr<FNiagaraSubmixListener,1> *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TSharedPtr<FNiagaraSubmixListener,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FNiagaraSubmixListener,1> *)(*pcVar1)();
  return pTVar4;
}

// Emplace<unsigned___int64_const_&> @ 14915ecc0

FNDILandscapeData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
::Emplace<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
           *this,ulong64 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x450,0x10,1,(ForAnyElementType *)this,
                       (int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x450 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x450 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<1104,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<1104,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<unsigned___int64,FNDILandscapeData_RenderThread>_> *)0x0) {
    TKeyInitializer<unsigned___int64_const_&>::
    operator<unsigned___int64,FNDILandscapeData_RenderThread>_TTuple<unsigned___int64,FNDILandscapeData_RenderThread>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x440) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  uVar6 = (int)((ulonglong)*(undefined8 *)local_18.Pointer >> 0x20) * 0x17 +
          (int)*(undefined8 *)local_18.Pointer;
  bVar4 = TSet<TTuple<unsigned___int64,FNDILandscapeData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,(int *)&local_res8,(bool *)0x0);
  if (!bVar4) {
    TSet<TTuple<unsigned___int64,FNDILandscapeData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,(int)local_res8.Key);
  }
  return (FNDILandscapeData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x450 + 0x10);
}

// EmplaceByHash<unsigned___int64_const_&> @ 14915fde0

FNDILandscapeData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
::EmplaceByHash<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x450,0x10,1,(ForAnyElementType *)this,
                       (int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x450 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x450 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<1104,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<1104,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<unsigned___int64,FNDILandscapeData_RenderThread>_> *)0x0) {
    TKeyInitializer<unsigned___int64_const_&>::
    operator<unsigned___int64,FNDILandscapeData_RenderThread>_TTuple<unsigned___int64,FNDILandscapeData_RenderThread>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x440) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<unsigned___int64,FNDILandscapeData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<unsigned___int64,FNDILandscapeData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FNDILandscapeData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x450 + 0x10);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 149165690

FNDILandscapeData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  FNDILandscapeData_RenderThread *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x450 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDILandscapeData_RenderThread *)(puVar2 + 2);
          }
          break;
        }
        iVar1 = (int)puVar2[0x88];
      } while (iVar1 != -1);
    }
  }
  pFVar3 = EmplaceByHash<unsigned___int64_const_&>(this,param_1,param_2);
  return pFVar3;
}

// Find @ 14917a210

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FGrid2DCollectionRWInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0xd0 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FGrid2DCollectionRWInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FGrid2DCollectionRWInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x19];
      } while (iVar1 != -1);
    }
  }
  return (FGrid2DCollectionRWInstanceData_RenderThread *)0x0;
}

// Find @ 14917a2a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FGrid3DCollectionRWInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FGrid3DCollectionRWInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x120 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FGrid3DCollectionRWInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FGrid3DCollectionRWInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x23];
      } while (iVar1 != -1);
    }
  }
  return (FGrid3DCollectionRWInstanceData_RenderThread *)0x0;
}

// Find @ 14917a330

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIIntRenderTarget2DInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FNDIIntRenderTarget2DInstanceData_RenderThread *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FNDIIntRenderTarget2DInstanceData_RenderThread *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FNDIIntRenderTarget2DInstanceData_RenderThread *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FNDIIntRenderTarget2DInstanceData_RenderThread *)0x0;
}

// Find @ 14917a3a0

FNDILandscapeData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDILandscapeData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x450 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDILandscapeData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDILandscapeData_RenderThread *)(puVar3 + 2);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x88];
      } while (iVar1 != -1);
    }
  }
  return (FNDILandscapeData_RenderThread *)0x0;
}

// FindChecked @ 14917abf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIExportInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDIExportInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIExportInstanceData_RenderThread,0>_>
::FindChecked(TMapBase<unsigned___int64,FNDIExportInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIExportInstanceData_RenderThread,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNDIExportInstanceData_RenderThread *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x48;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x48) == param_1) {
          if (lVar1 != 0) {
            return (FNDIExportInstanceData_RenderThread *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x40);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FNDIExportInstanceData_RenderThread *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FNDIExportInstanceData_RenderThread *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14917aca0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIIntRenderTarget2DInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
::FindChecked(TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNDIIntRenderTarget2DInstanceData_RenderThread *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FNDIIntRenderTarget2DInstanceData_RenderThread *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[7];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FNDIIntRenderTarget2DInstanceData_RenderThread *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FNDIIntRenderTarget2DInstanceData_RenderThread *)(*pcVar1)();
  return pFVar4;
}

// FindRef @ 14917ad50

FGrid2DCollectionRWInstanceData_GameThread * __thiscall
TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>_>
::FindRef(TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>_>
          *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return (FGrid2DCollectionRWInstanceData_GameThread *)0x0;
          }
          return *(FGrid2DCollectionRWInstanceData_GameThread **)(lVar1 + 8);
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FGrid2DCollectionRWInstanceData_GameThread *)0x0;
}

// FindRef @ 14917adc0

FGrid3DCollectionRWInstanceData_GameThread * __thiscall
TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>_>
::FindRef(TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>_>
          *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return (FGrid3DCollectionRWInstanceData_GameThread *)0x0;
          }
          return *(FGrid3DCollectionRWInstanceData_GameThread **)(lVar1 + 8);
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FGrid3DCollectionRWInstanceData_GameThread *)0x0;
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1491a35f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRenderTarget2DArrayRWInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FRenderTarget2DArrayRWInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[10];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FRenderTarget2DArrayRWInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x58 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1491a36a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRenderTarget2DRWInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FRenderTarget2DRWInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[10];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FRenderTarget2DRWInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x58 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1491a3750

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRenderTargetCubeRWInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FRenderTargetCubeRWInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[9];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FRenderTargetCubeRWInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1491a3800

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRenderTargetVolumeRWInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FRenderTargetVolumeRWInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[10];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FRenderTargetVolumeRWInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x58 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1491a38b0

FRenderThreadData * __thiscall
TMapBase<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0xb8 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FRenderThreadData *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FRenderThreadData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xb8 + 8);
}

// Find @ 1491c34c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDINeighborGrid3DInstanceData_RT * __thiscall
TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
::Find(TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDINeighborGrid3DInstanceData_RT *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0xa8 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDINeighborGrid3DInstanceData_RT *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDINeighborGrid3DInstanceData_RT *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x14];
      } while (iVar1 != -1);
    }
  }
  return (FNDINeighborGrid3DInstanceData_RT *)0x0;
}

// Find @ 1491c3550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNDIParticleRead_RenderInstanceData * __thiscall
TMapBase<unsigned___int64,FNDIParticleRead_RenderInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>_>
::Find(TMapBase<unsigned___int64,FNDIParticleRead_RenderInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDIParticleRead_RenderInstanceData *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDIParticleRead_RenderInstanceData *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDIParticleRead_RenderInstanceData *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0xb];
      } while (iVar1 != -1);
    }
  }
  return (FNDIParticleRead_RenderInstanceData *)0x0;
}

// Find @ 1491c35e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRenderTarget2DArrayRWInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FRenderTarget2DArrayRWInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FRenderTarget2DArrayRWInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FRenderTarget2DArrayRWInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[10];
      } while (iVar1 != -1);
    }
  }
  return (FRenderTarget2DArrayRWInstanceData_RenderThread *)0x0;
}

// Find @ 1491c3650

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRenderTarget2DRWInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FRenderTarget2DRWInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FRenderTarget2DRWInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FRenderTarget2DRWInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[10];
      } while (iVar1 != -1);
    }
  }
  return (FRenderTarget2DRWInstanceData_RenderThread *)0x0;
}

// Find @ 1491c36c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRenderTargetCubeRWInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FRenderTargetCubeRWInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FRenderTargetCubeRWInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FRenderTargetCubeRWInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[9];
      } while (iVar1 != -1);
    }
  }
  return (FRenderTargetCubeRWInstanceData_RenderThread *)0x0;
}

// Find @ 1491c3750

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRenderTargetVolumeRWInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FRenderTargetVolumeRWInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FRenderTargetVolumeRWInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[10];
      } while (iVar1 != -1);
    }
  }
  return (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0;
}

// Find @ 1491c37c0

FRenderThreadData * __thiscall
TMapBase<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>_>
::Find(TMapBase<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FRenderThreadData *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0xb8 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FRenderThreadData *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FRenderThreadData *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x16];
      } while (iVar1 != -1);
    }
  }
  return (FRenderThreadData *)0x0;
}

// Find @ 1491c3850

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

RasterizationGrid3DRWInstanceData * __thiscall
TMapBase<unsigned___int64,RasterizationGrid3DRWInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>_>
::Find(TMapBase<unsigned___int64,RasterizationGrid3DRWInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  RasterizationGrid3DRWInstanceData *pRVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pRVar3 = (RasterizationGrid3DRWInstanceData *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pRVar3 = (RasterizationGrid3DRWInstanceData *)(puVar2 + 1);
          }
          return pRVar3;
        }
        iVar1 = (int)puVar2[0xf];
      } while (iVar1 != -1);
    }
  }
  return (RasterizationGrid3DRWInstanceData *)0x0;
}

// FindChecked @ 1491c43e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDINeighborGrid3DInstanceData_RT * __thiscall
TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
::FindChecked(TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNDINeighborGrid3DInstanceData_RT *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0xa8 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FNDINeighborGrid3DInstanceData_RT *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[0x14];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FNDINeighborGrid3DInstanceData_RT *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FNDINeighborGrid3DInstanceData_RT *)(*pcVar1)();
  return pFVar4;
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1491fec20

FNDISparseVolumeTextureInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDISparseVolumeTextureInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[5];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDISparseVolumeTextureInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1491fecd0

FNDISpline_InstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDISpline_InstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDISpline_InstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x1a0 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDISpline_InstanceData_RenderThread *)(puVar2 + 2);
          }
          break;
        }
        iVar1 = (int)puVar2[0x32];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNDISpline_InstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDISpline_InstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x1a0 + 0x10);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1491fed80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDITextureInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDITextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDITextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDITextureInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNDITextureInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDITextureInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1491fee30

FNDIVirtualTextureSampleInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_1491feec2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_1491feec2:
  return (FNDIVirtualTextureSampleInstanceData_RenderThread *)(lVar3 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1491feee0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIVolumeTextureInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDIVolumeTextureInstanceData_RenderThread *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDIVolumeTextureInstanceData_RenderThread *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 1491fef90

FNiagaraDISkeletalMeshPassedDataToRT * __thiscall
TMapBase<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x100 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNiagaraDISkeletalMeshPassedDataToRT *)(puVar2 + 2);
          }
          break;
        }
        iVar1 = (int)puVar2[0x1e];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNiagaraDISkeletalMeshPassedDataToRT *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x100 + 0x10);
}

// Find @ 14922fb00

FNDISpline_InstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDISpline_InstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FNDISpline_InstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDISpline_InstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x1a0 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDISpline_InstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDISpline_InstanceData_RenderThread *)(puVar3 + 2);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x32];
      } while (iVar1 != -1);
    }
  }
  return (FNDISpline_InstanceData_RenderThread *)0x0;
}

// Find @ 14922fb90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDITextureInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDITextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FNDITextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDITextureInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDITextureInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDITextureInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[6];
      } while (iVar1 != -1);
    }
  }
  return (FNDITextureInstanceData_RenderThread *)0x0;
}

// Find @ 14922fc00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIVolumeTextureInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDIVolumeTextureInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDIVolumeTextureInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDIVolumeTextureInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[6];
      } while (iVar1 != -1);
    }
  }
  return (FNDIVolumeTextureInstanceData_RenderThread *)0x0;
}

// Find @ 14922fc70

FVolumeCacheInstanceData_RenderThread * __thiscall
TMapBase<unsigned___int64,FVolumeCacheInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>_>
::Find(TMapBase<unsigned___int64,FVolumeCacheInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FVolumeCacheInstanceData_RenderThread *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FVolumeCacheInstanceData_RenderThread *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FVolumeCacheInstanceData_RenderThread *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[9];
      } while (iVar1 != -1);
    }
  }
  return (FVolumeCacheInstanceData_RenderThread *)0x0;
}

// FindOrAddImpl<FObjectKey_const_&> @ 14926d060

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FObjectKey_const_&>
          (TMapBase<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FObjectKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FObjectKey *local_res20;
  
  iVar1 = TSet<TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FObjectKey>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar2 + 8);
  }
  local_res20 = param_2;
  TSet<TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FObjectKey_const_&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FName_const_&> @ 14926d100

FGpuUsagePerEvent * __thiscall
TMapBase<FName,FNiagaraDebugHud::FGpuUsagePerEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FNiagaraDebugHud::FGpuUsagePerEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x70 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FGpuUsagePerEvent *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xd].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FGpuUsagePerEvent *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x70 + 8);
}

// FindOrAddImpl<FName_const_&> @ 14926d1b0

FGpuUsagePerStage * __thiscall
TMapBase<FName,FNiagaraDebugHud::FGpuUsagePerStage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FNiagaraDebugHud::FGpuUsagePerStage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x70 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FGpuUsagePerStage *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xd].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FGpuUsagePerStage *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x70 + 8);
}

// FindOrAddImpl<FName_const_&> @ 14926d260

FNiagaraDebugMessage * __thiscall
TMapBase<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FNiagaraDebugMessage *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FNiagaraDebugMessage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FNiagaraDebugMessage *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<enum_EPixelFormat_const_&> @ 14926d310

FBufferRDGUAVPool * __thiscall
TMapBase<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>_>
::FindOrAddImpl<enum_EPixelFormat_const_&>(void *this,uint param_1,EPixelFormat *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [6];
  EPixelFormat *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this + (longlong)iVar1 * 0x28;
        if (*(EPixelFormat *)(*(longlong *)this + (longlong)iVar1 * 0x28) == *param_2) {
          if (lVar2 != 0) goto LAB_14926d3a2;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x20);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EPixelFormat_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<EPixelFormat_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar2 = *(longlong *)this + (longlong)local_res8[0] * 0x28;
LAB_14926d3a2:
  return (FBufferRDGUAVPool *)(lVar2 + 8);
}

// FindOrAddImpl<enum_EPixelFormat_const_&> @ 14926d3c0

FEmptyUAVPool * __thiscall
TMapBase<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,0>_>
::FindOrAddImpl<enum_EPixelFormat_const_&>(void *this,uint param_1,EPixelFormat *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [6];
  EPixelFormat *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this + (longlong)iVar1 * 0x28;
        if (*(EPixelFormat *)(*(longlong *)this + (longlong)iVar1 * 0x28) == *param_2) {
          if (lVar2 != 0) goto LAB_14926d452;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x20);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EPixelFormat_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<EPixelFormat_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar2 = *(longlong *)this + (longlong)local_res8[0] * 0x28;
LAB_14926d452:
  return (FEmptyUAVPool *)(lVar2 + 8);
}

// FindOrAddImpl<UNiagaraEffectType_*> @ 14926d470

FParticlePerfStats * __thiscall
TMapBase<UNiagaraEffectType_*,FParticlePerfStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>_>
::FindOrAddImpl<UNiagaraEffectType_*>
          (TMapBase<UNiagaraEffectType_*,FParticlePerfStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>_>
           *this,uint param_1,UNiagaraEffectType **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UNiagaraEffectType **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0xe0 + *(longlong *)&(this->Pairs).Elements);
        if ((UNiagaraEffectType *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FParticlePerfStats *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0x1b];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UNiagaraEffectType_*_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UNiagaraEffectType_*_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FParticlePerfStats *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xe0 + 8);
}

// FindOrAddImpl<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>_> @ 14926d520

FGpuUsagePerEmitter * __thiscall
TMapBase<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>_>
::FindOrAddImpl<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>_>
           *this,uint param_1,TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0xc0 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UNiagaraEmitter_const_,FWeakObjectPtr>::
              UEOpEquals<UNiagaraEmitter,bool>
                        ((TWeakObjectPtr<UNiagaraEmitter_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0xc0;
      if (bVar2) {
        if (lVar3 != 0) {
          return (FGpuUsagePerEmitter *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xb8);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>_&&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>_&&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (FGpuUsagePerEmitter *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8.ObjectIndex * 0xc0);
}

// FindOrAddImpl<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_> @ 14926d610

FGpuUsagePerSystem * __thiscall
TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>_>
::FindOrAddImpl<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>_>
           *this,uint param_1,TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 200 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UNiagaraSystem_const_,FWeakObjectPtr>::UEOpEquals<UNiagaraSystem,bool>
                        ((TWeakObjectPtr<UNiagaraSystem_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 200;
      if (bVar2) {
        if (lVar3 != 0) {
          return (FGpuUsagePerSystem *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc0);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_&&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_&&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  return (FGpuUsagePerSystem *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8.ObjectIndex * 200 + 8);
}

// FindOrAddImpl<FName> @ 14926d700

FSystemDebugInfo * __thiscall
TMapBase<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
::FindOrAddImpl<FName>
          (TMapBase<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0xa8 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FSystemDebugInfo *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0x14].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FSystemDebugInfo *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xa8 + 8);
}

// FindOrAddImpl<FString> @ 14926d7b0

FNiagaraOutlinerSystemData * __thiscall
TMapBase<FString,FNiagaraOutlinerSystemData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerSystemData,0>_>
::FindOrAddImpl<FString>
          (TMapBase<FString,FNiagaraOutlinerSystemData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerSystemData,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FNiagaraOutlinerSystemData>,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerSystemData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x48, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,FNiagaraOutlinerSystemData>,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerSystemData,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x48;
  }
  return (FNiagaraOutlinerSystemData *)(lVar2 + 0x10);
}

// FindOrAddImpl<FString> @ 14926d830

FNiagaraOutlinerWorldData * __thiscall
TMapBase<FString,FNiagaraOutlinerWorldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerWorldData,0>_>
::FindOrAddImpl<FString>
          (TMapBase<FString,FNiagaraOutlinerWorldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerWorldData,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FNiagaraOutlinerWorldData>,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerWorldData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x80 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FNiagaraOutlinerWorldData *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,FNiagaraOutlinerWorldData>,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerWorldData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FNiagaraOutlinerWorldData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x80 + 0x10);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14926f030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
           *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ForElementType<unsigned_int> FVar17;
  uint *puVar18;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar16;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar16 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar14 = 0;
  if (uVar11 == 0) goto LAB_14926f2f3;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  uVar12 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_120 = (undefined4)lVar4;
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar12 <= (int)local_50)) goto LAB_14926f2f3;
  local_50 = uVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_14926f141;
      }
    }
    else {
LAB_14926f141:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar13 = (ulonglong)uVar12;
      uVar10 = uVar16;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = uVar10 & (longlong)(int)uVar12 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar10 = uVar16;
    if (local_70 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar11 = *(uint *)FVar17;
      uVar13 = uVar16;
      while (uVar11 == 0) {
        uStack_150 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_150;
        iVar7 = (int)uVar10;
        local_168 = iVar7 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14926f252;
        uVar11 = ((uint *)((longlong)FVar17 + 4))[iVar7];
      }
      uStack_164 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_11c = (int)lVar4;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14926f252:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar10 * 0x10 + *(longlong *)local_114._4_8_);
        uVar11 = (int)((ulonglong)*puVar15 >> 0x20) * 0x17 + (int)*puVar15 & local_50 - 1;
        *(uint *)((longlong)puVar15 + 0xc) = uVar11;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar9.Data + uVar13 * 4);
        *(int *)(FVar9.Data + uVar13 * 4) = (int)uVar10;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14926f2f3:
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar11 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar16;
  local_c8 = uVar14;
  uStack_dc = 1;
  if (uVar11 != 0) {
    puVar18 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar18;
    uVar13 = uVar16;
    local_c8 = 0;
    uVar14 = 0;
    while (uVar12 == 0) {
      iVar7 = (int)uVar16;
      local_c8 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)local_c8;
      uVar14 = iVar7 + 1;
      uVar16 = (ulonglong)uVar14;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14926f39e;
      uVar12 = puVar18[(longlong)iVar7 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar16 = (ulonglong)uStack_dc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_118 = (int)lVar4;
    uVar12 = (local_c8 - 1) + local_118;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_14926f39e:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar10;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar14);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar14;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar11) {
    do {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      uVar16 = *(ulonglong *)(lVar4 + (longlong)(int)uVar10 * 0x18);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar9.Data +
                             ((uVar16 >> 0x20) * 0x17 + uVar16 & (ulonglong)(local_50 - 1)) * 4);
            iVar7 != -1; iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x10 + 8)) {
          if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar7 * 0x10) == uVar16) goto LAB_14926f50f;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)(lVar4 + (longlong)(int)uVar10 * 0x18);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           *(undefined8 *)pFVar2;
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
      Emplace<unsigned___int64_const_&>
                ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 local_98,(ulong64 *)local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x18));
LAB_14926f50f:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar10 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar7 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// Find @ 14929be60

FNiagaraVariableBase * __thiscall
TMapBase<FNiagaraVariableBase,FNiagaraVariableBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariableBase,0>_>
::Find(TMapBase<FNiagaraVariableBase,FNiagaraVariableBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariableBase,0>_>
       *this,FNiagaraVariableBase *param_1)

{
  uint uVar1;
  FName *pFVar2;
  FNiagaraVariableBase *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*pFVar2 == param_1->Name) &&
           (pFVar2[1].ComparisonIndex.Value == (param_1->TypeDefHandle).RegisteredTypeIndex)) {
          if (uVar1 == 0xffffffff) {
            return (FNiagaraVariableBase *)0x0;
          }
          pFVar3 = (FNiagaraVariableBase *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar3 = (FNiagaraVariableBase *)&pFVar2[1].Number;
          }
          return pFVar3;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FNiagaraVariableBase *)0x0;
}

// Find @ 1493468e0

FNiagaraPropertySetter * __thiscall
TMapBase<FName,FNiagaraPropertySetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraPropertySetter,0>_>
::Find(TMapBase<FName,FNiagaraPropertySetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraPropertySetter,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FNiagaraPropertySetter *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FNiagaraPropertySetter *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FNiagaraPropertySetter *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FNiagaraPropertySetter *)0x0;
}

// FindChecked @ 149346980

FComponentPropertyAddress * __thiscall
TMapBase<FName,FNiagaraRendererComponents::FComponentPropertyAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraRendererComponents::FComponentPropertyAddress,0>_>
::FindChecked(TMapBase<FName,FNiagaraRendererComponents::FComponentPropertyAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraRendererComponents::FComponentPropertyAddress,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FComponentPropertyAddress *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (FComponentPropertyAddress *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[7].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FComponentPropertyAddress *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FComponentPropertyAddress *)(*pcVar1)();
  return pFVar4;
}

// EmplaceByHash<FString_const_&> @ 14937f020

FNiagaraParameterStore * __thiscall
TMapBase<FString,FNiagaraParameterStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>_>
::EmplaceByHash<FString_const_&>
          (TMapBase<FString,FNiagaraParameterStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>_>
           *this,uint param_1,FString *param_2)

{
  bool bVar1;
  FNiagaraParameterStore *pFVar2;
  longlong lVar3;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_b8;
  FNiagaraParameterStore local_a8;
  
  TSparseArrayBase<160,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<160,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_b8);
  if (local_b8.Pointer != (TSparseSetElement<TTuple<FString,FNiagaraParameterStore>_> *)0x0) {
    pFVar2 = FNiagaraParameterStore::FNiagaraParameterStore(&local_a8);
    ::FString::FString(local_b8.Pointer,param_2);
    FNiagaraParameterStore::FNiagaraParameterStore
              ((FNiagaraParameterStore *)((longlong)local_b8.Pointer + 0x10),pFVar2);
    FNiagaraParameterStore::~FNiagaraParameterStore(&local_a8);
    *(undefined4 *)((longlong)local_b8.Pointer + 0x98) = 0xffffffff;
  }
  local_res8[0] = local_b8.Index;
  bVar1 = TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_b8.Pointer,local_res8,(bool *)0x0);
  lVar3 = (longlong)local_res8[0];
  if (!bVar1) {
    TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_b8.Pointer,local_res8[0]);
  }
  return (FNiagaraParameterStore *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar3 * 0xa0);
}

// FindOrAddImpl<FNiagaraVariableBase_const_&> @ 149380a20

float * __thiscall
TMapBase<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
::FindOrAddImpl<FNiagaraVariableBase_const_&>
          (TMapBase<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
           *this,uint param_1,FNiagaraVariableBase *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FNiagaraVariableBase *local_res20;
  
  iVar1 = TSet<TTuple<FNiagaraVariableBase,float>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FNiagaraVariableBase>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x18, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FNiagaraVariableBase,float>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FNiagaraVariableBase_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<FNiagaraVariableBase_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
  }
  return (float *)(lVar2 + 0xc);
}

// FindOrAddImpl<FNiagaraVariableBase_const_&> @ 149380aa0

TObjectPtr<UObject> * __thiscall
TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
::FindOrAddImpl<FNiagaraVariableBase_const_&>
          (TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
           *this,uint param_1,FNiagaraVariableBase *param_2)

{
  FName *pFVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FNiagaraVariableBase *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar1 = (FName *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*pFVar1 == param_2->Name) &&
           (pFVar1[1].ComparisonIndex.Value == (param_2->TypeDefHandle).RegisteredTypeIndex)) {
          if ((uVar2 != 0xffffffff) && (pFVar1 != (FName *)0x0)) {
            return (TObjectPtr<UObject> *)(pFVar1 + 2);
          }
          break;
        }
        uVar2 = pFVar1[3].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FNiagaraVariableBase_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FNiagaraVariableBase_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TObjectPtr<UObject> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// FindOrAddImpl<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_> @ 149380b60

FNiagaraSystemScalabilityKillCounts * __thiscall
TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>_>
::FindOrAddImpl<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>_>
           *this,uint param_1,TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0x24 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UNiagaraSystem_const_,FWeakObjectPtr>::UEOpEquals<UNiagaraSystem,bool>
                        ((TWeakObjectPtr<UNiagaraSystem_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x24;
      if (bVar2) {
        if (lVar3 != 0) {
          return (FNiagaraSystemScalabilityKillCounts *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x1c);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_&&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_&&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  return (FNiagaraSystemScalabilityKillCounts *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8.ObjectIndex * 0x24 + 8);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 149380c50

void __thiscall
TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
           *this,TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_149380d32;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_149380d32:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 0xc)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      pFVar5 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0xc) = *(undefined8 *)pFVar10;
      *(undefined4 *)(pFVar5 + (longlong)iVar9 * 0xc + 8) = *(undefined4 *)(pFVar10 + 8);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// FindOrAddImpl<TTuple<FName,FName>_> @ 1493c8d90

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSet ** __thiscall
TMapBase<TTuple<FName,FName>,FNiagaraDataSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>_>
::FindOrAddImpl<TTuple<FName,FName>_>
          (TMapBase<TTuple<FName,FName>,FNiagaraDataSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>_>
           *this,uint param_1,TTuple<FName,FName> *param_2)

{
  longlong *plVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  TTuple<FName,FName> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*plVar1 == *(longlong *)param_2) && (plVar1[1] == *(longlong *)&param_2->field_0x8)) {
          if ((iVar2 != -1) && (plVar1 != (longlong *)0x0)) {
            return (FNiagaraDataSet **)(plVar1 + 2);
          }
          break;
        }
        iVar2 = (int)plVar1[3];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TTuple<FName,FName>,FNiagaraDataSet_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TTuple<FName,FName>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TTuple<FName,FName>_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNiagaraDataSet **)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// Find @ 1493e2a40

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSet ** __thiscall
TMapBase<TTuple<FName,FName>,FNiagaraDataSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>_>
::Find(TMapBase<TTuple<FName,FName>,FNiagaraDataSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>_>
       *this,TTuple<FName,FName> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar2 = uVar2 + (int)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar2 * 0x40 + (int)((ulonglong)uVar1 >> 0x20) + (uVar2 >> 2) +
                     uVar3 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar6 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*plVar4 == *(longlong *)param_1) && (plVar4[1] == *(longlong *)&param_1->field_0x8)) {
          if (iVar6 == -1) {
            return (FNiagaraDataSet **)0x0;
          }
          if (plVar4 != (longlong *)0x0) {
            return (FNiagaraDataSet **)(plVar4 + 2);
          }
          return (FNiagaraDataSet **)0x0;
        }
        iVar6 = (int)plVar4[3];
      } while (iVar6 != -1);
    }
  }
  return (FNiagaraDataSet **)0x0;
}

// FindOrAddImpl<TObjectPtr<UNiagaraSystem>_> @ 14941e130

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TObjectPtr<UNiagaraCullProxyComponent> * __thiscall
TMapBase<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>_>
::FindOrAddImpl<TObjectPtr<UNiagaraSystem>_>
          (TMapBase<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>_>
           *this,uint param_1,TObjectPtr<UNiagaraSystem> *param_2)

{
  int iVar1;
  UNiagaraSystem *pUVar2;
  UNiagaraSystem *pUVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int local_res8 [2];
  TObjectPtr<UNiagaraSystem> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UNiagaraSystem *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      lVar4 = (longlong)iVar1 * 0x18;
      pUVar3 = *(UNiagaraSystem **)(lVar4 + *(longlong *)&(this->Pairs).Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UNiagaraSystem *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        if ((iVar1 != -1) && (lVar4 = *(longlong *)&(this->Pairs).Elements + lVar4, lVar4 != 0))
        goto LAB_14941e21a;
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x10 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectPtr<UNiagaraSystem>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectPtr<UNiagaraSystem>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar4 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14941e21a:
  return (TObjectPtr<UNiagaraCullProxyComponent> *)(lVar4 + 8);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14941e970

void __thiscall
TMapBase<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
           *this,TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FNiagaraVariable *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FNiagaraVariable *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14941ea50;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14941ea50:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FNiagaraVariable *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 9 + 4) * 8);
      pFVar6 = (FNiagaraVariable *)(param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + *piVar1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      FNiagaraVariable::FNiagaraVariable
                ((FNiagaraVariable *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x20),
                 pFVar2);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 149444b00

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

TSharedRef<FNiagaraSystemSimulation,1> * __thiscall
TMapBase<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_>
::Find(TMapBase<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_>
       *this,UNiagaraSystem *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UNiagaraSystem *)*plVar2 == param_1) {
          pTVar4 = (TSharedRef<FNiagaraSystemSimulation,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedRef<FNiagaraSystemSimulation,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedRef<FNiagaraSystemSimulation,1> *)0x0;
}

// Find @ 149444ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraScalabilityManager * __thiscall
TMapBase<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
::Find(TMapBase<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
       *this,TObjectPtr<UNiagaraEffectType_const_> param_1)

{
  TObjectPtr<UNiagaraEffectType_const_>_u_0 TVar1;
  int iVar2;
  FNiagaraScalabilityManager *pFVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<UNiagaraEffectType_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UNiagaraEffectType *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UNiagaraEffectType *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UNiagaraEffectType_const_>_>
                    (&this->Pairs,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UNiagaraEffectType_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0xf8 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FNiagaraScalabilityManager *)0x0;
    if (lVar5 != 0) {
      pFVar3 = (FNiagaraScalabilityManager *)(lVar5 + 8);
    }
    return pFVar3;
  }
  return (FNiagaraScalabilityManager *)0x0;
}

// Find @ 149444c50

FNiagaraVariable * __thiscall
TMapBase<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
::Find(TMapBase<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
       *this,FNiagaraVariable *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  FNiagaraVariable *pFVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash((FNiagaraVariableBase *)param_1);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x48;
        if ((*(longlong *)(lVar2 + (longlong)iVar5 * 0x48) == param_1->_padding_) &&
           (*(int *)(lVar1 + 8) == (int)param_1->_padding_)) {
          if (iVar5 == -1) {
            return (FNiagaraVariable *)0x0;
          }
          pFVar4 = (FNiagaraVariable *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FNiagaraVariable *)(lVar1 + 0x20);
          }
          return pFVar4;
        }
        iVar5 = *(int *)(lVar1 + 0x40);
      } while (iVar5 != -1);
    }
  }
  return (FNiagaraVariable *)0x0;
}

