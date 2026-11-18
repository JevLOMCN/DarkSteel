// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 411

// Call @ 148e5cba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *
                       )(lVar6 + 0x18),
                       (TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *
                       )(lVar3 + 0x58));
          }
          TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *)
                     (lVar6 + 0x18),
                     (TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *)
                     ((longlong)param_1 + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 148e5cbb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::
  PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 148e5cbe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148e5cc20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)param_1;
  lVar2 = *(longlong *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar4 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar4 = lVar1 + 0x48;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                             (longlong)*(int *)(lVar1 + 0x58) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(lVar1 + 0x10)) == lVar2) {
          TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
                           *)(lVar1 + 0x10),iVar3);
          return;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)(lVar1 + 0x10));
      } while (iVar3 != -1);
      return;
    }
  }
  return;
}

// Call @ 148e5cca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148e5cce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148e5cd20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_1>,bool,UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FVMExternalFunctionBindingInfo *param_3)

{
  bool bVar1;
  
  bVar1 = `FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 148e5cd30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l2::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  FName FVar1;
  
  FVar1 = param_3->DefinitionName;
  if ((((FVar1 == NDIAsyncGpuTraceLocal::IssueAsyncRayTraceName) ||
       (FVar1 == NDIAsyncGpuTraceLocal::CreateAsyncRayTraceName)) ||
      (FVar1 == NDIAsyncGpuTraceLocal::ReserveAsyncRayTraceName)) ||
     (FVar1 == NDIAsyncGpuTraceLocal::ReadAsyncRayTraceName)) {
    *(undefined1 *)(**(longlong **)param_1 + 0xc) = 1;
  }
  return *(char *)(**(longlong **)param_1 + 0xc) == '\0';
}

// Call @ 148e5cd80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_78 [32];
  longlong lStack_58;
  TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *plStack_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong lStack_28;
  TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
  *pTStack_18;
  char cStack_10;
  char cStack_f;
  
  lVar1 = *(longlong *)param_1;
  TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)auStack_78,
             (TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10));
  cStack_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = auStack_78._16_16_;
  plStack_48 = (longlong *)auStack_78._0_8_;
  auStack_40._0_8_ = auStack_78._8_8_;
  lStack_28 = lStack_58;
  pTStack_20 = pTStack_50;
  uVar3 = auStack_78._24_8_ >> 0x20;
  uVar5 = auStack_78._28_4_;
  pTStack_18 = (TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10);
  if ((int)uVar5 < *(int *)(auStack_78._16_8_ + 0x18)) {
    do {
      if (*(int *)((longlong)param_1 + 8) == 0) {
        TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar5);
        cStack_10 = '\x01';
      }
      else {
        lVar4 = (longlong)(int)uVar3 * 0x20;
        lVar1 = *plStack_48;
        *(int *)(lVar4 + 8 + lVar1) = *(int *)((longlong)param_1 + 8);
        *(undefined4 *)(lVar4 + 0xc + lVar1) = *(undefined4 *)((longlong)param_1 + 0xc);
        *(undefined1 *)(lVar4 + 0x10 + lVar1) = *(undefined1 *)((longlong)param_1 + 0x10);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
      uVar5 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((cStack_10 != '\0') && (cStack_f != '\0')) {
      uVar5 = *(int *)&(pTStack_18->Elements).field_0x8 - *(int *)&(pTStack_18->Elements).field_0x34
      ;
      if (uVar5 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar5) && (pTStack_18->HashSize < iVar2)) || (iVar2 < pTStack_18->HashSize)) {
        pTStack_18->HashSize = iVar2;
        TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
        ::Rehash(pTStack_18);
      }
    }
  }
  return;
}

// Call @ 148e5cd90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148e5cde0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIConsoleVariableLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148e5ce20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 148e5ce50

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FInstanceData *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
           ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
                   *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if (pFVar1 != (FInstanceData *)0x0) {
    pFVar1->bCapturingSimCache = true;
  }
  return;
}

// Call @ 148e5ce80

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::__l23::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  longlong *plVar3;
  FNiagaraDataBufferReadback *this;
  longlong lVar4;
  longlong lVar5;
  FNiagaraGpuReadbackManager *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FInstanceData *pFVar11;
  ulonglong uVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackX_8 [8];
  FRHICommandListImmediate *pFStackX_10;
  uint uStackX_18;
  longlong lStackX_20;
  TReferenceControllerBase<1> *pTStack_60;
  TReferenceControllerBase<1> *pTStack_58;
  
  pFStackX_10 = param_2;
  pFVar11 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
            ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
                    *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if (pFVar11 != (FInstanceData *)0x0) {
    pFVar17 = (pFVar11->PendingSimCacheReadbacks).AllocatorInstance.Data;
    uStackX_18 = (pFVar11->PendingSimCacheReadbacks).ArrayNum;
    uVar12 = (ulonglong)(int)uStackX_18;
    pFVar7 = pFVar17 + uVar12 * 8;
    while( true ) {
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if ((pFVar11->PendingSimCacheReadbacks).ArrayNum != (int)uVar12) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<FNiagaraDataBuffer>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_8);
      }
      if (pFVar17 == pFVar7) break;
      pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 0x20);
      pTVar13 = ::operator_new(0x90);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_148e58354:
        if (((pTVar15->_padding_ == 0) || (*(longlong *)&pTVar15->SharedReferenceCount == 0)) ||
           (*(int *)(*(longlong *)&pTVar15->SharedReferenceCount + 8) < 1)) {
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar15->_padding_ = (longlong)pTVar15;
          if (pTVar14 != *(TReferenceControllerBase<1> **)&pTVar15->SharedReferenceCount) {
            if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar3 = *(longlong **)&pTVar15->SharedReferenceCount;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
            *(TReferenceControllerBase<1> **)&pTVar15->SharedReferenceCount = pTVar14;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
        }
      }
      else {
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFNiagaraDataBufferReadback___00_SharedPointerInternals__6B_
        ;
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13[2]._padding_ = 0;
        pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[8].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[8].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[1]._padding_ = 0;
        pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[3]._padding_ = 0;
        pTVar13[4]._padding_ = 0;
        pTVar13[5]._padding_ = 0;
        pTVar13[6]._padding_ = 0;
        pTVar15 = pTVar13 + 1;
        pTVar13[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[5].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[6].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[6].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[7]._padding_ = 0;
        pTVar13[7].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[7].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[8]._padding_ = 0;
        pTVar14 = pTVar13;
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_148e58354;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTStack_60 = pTVar15;
      pTStack_58 = pTVar14;
      if (((pFVar2->Data <= (FScriptContainerElement *)&pTStack_60) &&
          ((FScriptContainerElement *)&pTStack_60 <
           pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar10 == *piVar1) {
        iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar10 + 1;
      pFVar16 = pFVar2->Data + (longlong)iVar10 * 0x10;
      *(TReferenceControllerBase<1> **)pFVar16 = pTStack_60;
      *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTStack_58;
      pTStack_58 = (TReferenceControllerBase<1> *)0x0;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      if ((*(longlong *)pFVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this = *(FNiagaraDataBufferReadback **)pFVar16;
      lVar4 = *(longlong *)((longlong)param_1 + 0x28);
      bVar9 = IsInParallelRenderingThread();
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInParallelRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                             ,0x6a,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *(longlong *)pFVar17;
      pFVar6 = *(FNiagaraGpuReadbackManager **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38);
      lStackX_20 = lVar5;
      if (lVar5 != 0) {
        if ((*(int *)(lVar5 + 8) == -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsBeingWritten()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x26,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      FNiagaraDataBufferReadback::EnqueueReadback
                (this,(FRHICommandList *)pFStackX_10,(FNiagaraDataBuffer *)&lStackX_20,pFVar6,
                 (FNiagaraGPUInstanceCountManager *)(lVar4 + 0x48));
      uVar12 = (ulonglong)uStackX_18;
      pFVar17 = pFVar17 + 8;
    }
    piVar1 = &(pFVar11->PendingSimCacheReadbacks).ArrayMax;
    pFVar7 = (pFVar11->PendingSimCacheReadbacks).AllocatorInstance.Data;
    iVar10 = (pFVar11->PendingSimCacheReadbacks).ArrayNum;
    if ((pFVar11->PendingSimCacheReadbacks).ArrayMax < 0) {
      DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
                ((TRefCountPtr<FNiagaraDataBuffer> *)pFVar7,iVar10);
      (pFVar11->PendingSimCacheReadbacks).ArrayNum = 0;
      param_2 = pFStackX_10;
      if (*piVar1 != 0) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(pFVar11->PendingSimCacheReadbacks).AllocatorInstance,0,piVar1);
        param_2 = pFStackX_10;
      }
    }
    else {
      DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
                ((TRefCountPtr<FNiagaraDataBuffer> *)pFVar7,iVar10);
      (pFVar11->PendingSimCacheReadbacks).ArrayNum = 0;
      param_2 = pFStackX_10;
    }
  }
  FNiagaraGpuReadbackManager::WaitCompletion
            (*(FNiagaraGpuReadbackManager **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38),
             param_2);
  return;
}

// Call @ 148e5ce90

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FInstanceData *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
           ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
                   *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if (pFVar1 != (FInstanceData *)0x0) {
    pFVar1->bCapturingSimCache = false;
  }
  return;
}

// Call @ 148e5cec0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),0x58,
               FNDIArrayImplHelperBase<FNiagaraMeshRendererMeshPropertiesBase>::CopyGpuToCpuMemory);
  }
  return;
}

// Call @ 148e5cf20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_2>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = `FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_2>::operator()
                    (param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 148e5cf30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraMeshRendererMeshPropertiesBase>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 148e5cf40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l29::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  ulonglong *puStackX_18;
  
  lVar5 = *(longlong *)param_1;
  uVar1 = *(ulonglong *)((longlong)param_1 + 0x18);
  if (*(int *)(lVar5 + 0x18) != *(int *)(lVar5 + 0x44)) {
    lVar6 = *(longlong *)(lVar5 + 0x50);
    if (*(longlong *)(lVar5 + 0x50) == 0) {
      lVar6 = lVar5 + 0x48;
    }
    iVar4 = *(int *)(lVar6 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                             (ulonglong)(*(int *)(lVar5 + 0x58) - 1)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x10)) == uVar1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(RT_InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceAsyncGpuTrace.cpp"
                             ,0xb7,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(lVar5 + 0x10));
      } while (iVar4 != -1);
    }
  }
  lVar5 = *(longlong *)param_1;
  puStackX_18 = (ulonglong *)((longlong)param_1 + 0x18);
  TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
              *)(lVar5 + 0x10),&TStackX_8,(bool *)&puStackX_18);
  lVar5 = (longlong)(int)TStackX_8.Key * 0x20 + *(longlong *)(lVar5 + 0x10);
  *(undefined4 *)(lVar5 + 8) = *(undefined4 *)((longlong)param_1 + 8);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined1 *)(lVar5 + 0x10) = *(undefined1 *)((longlong)param_1 + 0x10);
  return;
}

// Call @ 148ead130

TQuat<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Math::TQuat<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),UE::Math::TQuat<float>,FNiagaraSimCacheAttributeReaderHelper_&,int>
::Call(TQuat<float> *__return_storage_ptr__,void *param_1,
      FNiagaraSimCacheAttributeReaderHelper *param_2,int *param_3)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 148ead160

TVector2<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Math::TVector2<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),UE::Math::TVector2<float>,FNiagaraSimCacheAttributeReaderHelper_&,int>
::Call(void *param_1,FNiagaraSimCacheAttributeReaderHelper *param_2,int *param_3)

{
  undefined4 *in_R9;
  
  (*(code *)param_2->CacheFrame)(param_1,param_3,*in_R9);
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Call @ 148ead190

TVector4<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Math::TVector4<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),UE::Math::TVector4<float>,FNiagaraSimCacheAttributeReaderHelper_&,int>
::Call(TVector4<float> *__return_storage_ptr__,void *param_1,
      FNiagaraSimCacheAttributeReaderHelper *param_2,int *param_3)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 148ead1c0

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),UE::Math::TVector<float>,FNiagaraSimCacheAttributeReaderHelper_&,int>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,
      FNiagaraSimCacheAttributeReaderHelper *param_2,int *param_3)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 148ead1f0

FLinearColor * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FLinearColor_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),FLinearColor,FNiagaraSimCacheAttributeReaderHelper_&,int>
::Call(FLinearColor *__return_storage_ptr__,void *param_1,
      FNiagaraSimCacheAttributeReaderHelper *param_2,int *param_3)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 148ead220

FNiagaraID __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FNiagaraID_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),FNiagaraID,FNiagaraSimCacheAttributeReaderHelper_&,int>
::Call(void *param_1,FNiagaraSimCacheAttributeReaderHelper *param_2,int *param_3)

{
  undefined4 *in_R9;
  
  (*(code *)param_2->CacheFrame)(param_1,param_3,*in_R9);
  return (FNiagaraID)param_1;
}

// Call @ 148ead250

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<int_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),int,FNiagaraSimCacheAttributeReaderHelper_&,int>
::Call(void *param_1,FNiagaraSimCacheAttributeReaderHelper *param_2,int *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148ead25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)param_1)(param_2,*param_3);
  return iVar1;
}

// Call @ 148ead270

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<float_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),float,FNiagaraSimCacheAttributeReaderHelper_&,int>
::Call(void *param_1,FNiagaraSimCacheAttributeReaderHelper *param_2,int *param_3)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148ead27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)param_1)(param_2,*param_3);
  return fVar1;
}

// Call @ 148ead290

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<int,int>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
::Call(void *param_1,uchar **param_2,uchar **param_3)

{
  *(undefined4 *)(*param_3 + *(uint *)((longlong)param_1 + 4)) =
       *(undefined4 *)(*param_2 + *(int *)param_1);
  return;
}

// Call @ 148ead2b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<float,float>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
::Call(void *param_1,uchar **param_2,uchar **param_3)

{
  *(undefined4 *)(*param_3 + *(uint *)((longlong)param_1 + 4)) =
       *(undefined4 *)(*param_2 + *(int *)param_1);
  return;
}

// Call @ 148ead2d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<double,float>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
::Call(void *param_1,uchar **param_2,uchar **param_3)

{
  *(float *)(*param_3 + *(uint *)((longlong)param_1 + 4)) =
       (float)*(double *)(*param_2 + *(int *)param_1);
  return;
}

// Call @ 148ead300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TQuat<double>,UE::Math::TQuat<float>_>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
::Call(void *param_1,uchar **param_2,uchar **param_3)

{
  double *pdVar1;
  float *pfVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pdVar1 = (double *)(*param_2 + *(int *)param_1);
  dVar4 = pdVar1[1];
  pdVar3 = (double *)(*param_2 + (longlong)*(int *)param_1 + 0x10);
  dVar5 = *pdVar3;
  dVar6 = pdVar3[1];
  pfVar2 = (float *)(*param_3 + *(uint *)((longlong)param_1 + 4));
  *pfVar2 = (float)*pdVar1;
  pfVar2[1] = (float)dVar4;
  pfVar2[2] = (float)dVar5;
  pfVar2[3] = (float)dVar6;
  return;
}

// Call @ 148ead370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector2<double>,UE::Math::TVector2<float>_>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
::Call(void *param_1,uchar **param_2,uchar **param_3)

{
  *(ulonglong *)(*param_3 + *(uint *)((longlong)param_1 + 4)) =
       CONCAT44((float)*(double *)((longlong)(*param_2 + *(int *)param_1) + 8),
                (float)*(double *)(*param_2 + *(int *)param_1));
  return;
}

// Call @ 148ead3b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector4<double>,UE::Math::TVector4<float>_>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
::Call(void *param_1,uchar **param_2,uchar **param_3)

{
  double *pdVar1;
  float *pfVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pdVar1 = (double *)(*param_2 + *(int *)param_1);
  dVar4 = pdVar1[1];
  pdVar3 = (double *)(*param_2 + (longlong)*(int *)param_1 + 0x10);
  dVar5 = *pdVar3;
  dVar6 = pdVar3[1];
  pfVar2 = (float *)(*param_3 + *(uint *)((longlong)param_1 + 4));
  *pfVar2 = (float)*pdVar1;
  pfVar2[1] = (float)dVar4;
  pfVar2[2] = (float)dVar5;
  pfVar2[3] = (float)dVar6;
  return;
}

// Call @ 148ead420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector<double>,UE::Math::TVector<float>_>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
::Call(void *param_1,uchar **param_2,uchar **param_3)

{
  double *pdVar1;
  double dVar2;
  uchar *puVar3;
  double dVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)((longlong)param_1 + 4);
  dVar2 = *(double *)(*param_2 + (longlong)*(int *)param_1 + 0x10);
  pdVar1 = (double *)(*param_2 + *(int *)param_1);
  dVar4 = pdVar1[1];
  puVar3 = *param_3;
  *(float *)(puVar3 + uVar5) = (float)*pdVar1;
  *(float *)(puVar3 + uVar5 + 4) = (float)dVar4;
  *(float *)(puVar3 + uVar5 + 8) = (float)dVar2;
  return;
}

// Call @ 148ead480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<FLinearColor,FLinearColor>'::__l2::<lambda_1>,void,unsigned_char_const_*,unsigned_char_*>
::Call(void *param_1,uchar **param_2,uchar **param_3)

{
  uint uVar1;
  uchar *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)((longlong)param_1 + 4);
  uVar3 = *(undefined8 *)(*param_2 + *(int *)param_1 + 8);
  puVar2 = *param_3;
  *(undefined8 *)(puVar2 + uVar1) = *(undefined8 *)(*param_2 + *(int *)param_1);
  *(undefined8 *)(puVar2 + uVar1 + 8) = uVar3;
  return;
}

// Call @ 148ead4a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  UObject *pUVar4;
  longlong lVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`public:___cdecl_`public:___cdecl_`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(FRHICommandListImmediate&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(TArrayView<TTuple<void*___ptr64,unsigned_int>_const_,int>)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId129,"NDISimpleCounterGTCallback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceSimpleCounter.cpp"
               ,0x81);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`public:___cdecl_`public:___cdecl_`public:_virtual_void___cdecl_FNDISimpleCounterProxy::PostSimulate(FNDIGpuComputePostSimulateContext_const&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(FRHICommandListImmediate&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(TArrayView<TTuple<void*___ptr64,unsigned_int>_const_,int>)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId129);
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xc));
  if (pUVar4 != (UObject *)0x0) {
    lVar1 = *(longlong *)((longlong)param_1 + 0x18);
    uVar2 = *(ulonglong *)param_1;
    if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
      lVar5 = *(longlong *)(lVar1 + 0xb0);
      if (*(longlong *)(lVar1 + 0xb0) == 0) {
        lVar5 = lVar1 + 0xa8;
      }
      iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)(lVar1 + 0xb8) - 1) &
                               (uVar2 >> 0x20) * 0x17 + uVar2) * 4);
      if (iVar3 != -1) {
        do {
          lVar5 = *(longlong *)(lVar1 + 0x70) + (longlong)iVar3 * 0x18;
          if (*(ulonglong *)(*(longlong *)(lVar1 + 0x70) + (longlong)iVar3 * 0x18) == uVar2) {
            if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
              LOCK();
              *(undefined4 *)(*(longlong *)(lVar5 + 8) + 4) = *(undefined4 *)((longlong)param_1 + 8)
              ;
              UNLOCK();
            }
            break;
          }
          iVar3 = *(int *)(lVar5 + 0x10);
        } while (iVar3 != -1);
      }
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 148ead4b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (bVar8) {
    lVar1 = *(longlong *)((longlong)param_1 + 0x20);
    uVar2 = *(ulonglong *)param_1;
    if (*(int *)(lVar1 + 0x70) != *(int *)(lVar1 + 0x9c)) {
      lVar10 = *(longlong *)(lVar1 + 0xa8);
      if (*(longlong *)(lVar1 + 0xa8) == 0) {
        lVar10 = lVar1 + 0xa0;
      }
      iVar9 = *(int *)(lVar10 + ((ulonglong)(*(int *)(lVar1 + 0xb0) - 1) &
                                (uVar2 >> 0x20) * 0x17 + uVar2) * 4);
      if (iVar9 != -1) {
        while (lVar10 = *(longlong *)(lVar1 + 0x68) + (longlong)iVar9 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar1 + 0x68) + (longlong)iVar9 * 0x18) != uVar2) {
          iVar9 = *(int *)(lVar10 + 0x10);
          if (iVar9 == -1) {
            return;
          }
        }
        if ((lVar10 != 0) && (lVar1 = *(longlong *)(lVar10 + 8), lVar1 != 0)) {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 8));
          if (*(int *)(lVar1 + 0x18) == *(int *)((longlong)param_1 + 0x10)) {
            uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
            uVar4 = *(undefined4 *)((longlong)param_1 + 0x10);
            uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
            uVar6 = *(undefined8 *)(lVar1 + 0x10);
            uVar7 = *(undefined8 *)(lVar1 + 0x18);
            *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)((longlong)param_1 + 8);
            *(undefined4 *)(lVar1 + 0x14) = uVar3;
            *(undefined4 *)(lVar1 + 0x18) = uVar4;
            *(undefined4 *)(lVar1 + 0x1c) = uVar5;
            *(undefined8 *)((longlong)param_1 + 8) = uVar6;
            *(undefined8 *)((longlong)param_1 + 0x10) = uVar7;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 8));
        }
      }
    }
  }
  return;
}

// Call @ 148ead4c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()(param_1,&local_18);
  return;
}

// Call @ 148ead4f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>::operator()'::__l2::
  <lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 148ead520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>::operator()'::__l2::
  <lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 148ead550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>::operator()'::__l2::
  <lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 148ead580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceDynamicMesh::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x68) != *(int *)(lVar1 + 0x94)) {
    TSet<TTuple<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x60),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148ead5d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfacePhysicsAsset::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSet<TTuple<unsigned___int64,FNDIPhysicsAssetData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned___int64,FNDIPhysicsAssetData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>,FDefaultSetAllocator>
            *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  return;
}

// Call @ 148ead5f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSceneCapture2D::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148ead630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIDataTableLocal::FNDIProxy::SendGameToRender'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FReadBuffer *this;
  undefined1 *puVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FBuiltDataTable *pFVar4;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FInstanceData_RenderThread *pFVar7;
  TMap<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *this_02;
  <lambda_1> <StackX_8;
  
  pFVar7 = TMapBase<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,0>_>
                       *)(*(longlong *)param_1 + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8)
                     );
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  pFVar4 = *(FBuiltDataTable **)((longlong)param_1 + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar7->BuiltDataTable).SharedReferenceCount.ReferenceController;
  (pFVar7->BuiltDataTable).Object = pFVar4;
  (pFVar7->BuiltDataTable).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  this = &pFVar7->FilteredRowDataOffsetBuffer;
  pFVar7->NumFilteredRows = *(uint *)((longlong)param_1 + 0x20);
  (pFVar7->FilteredRowDataOffsetBuffer).NumBytes = 0;
  this_00 = (this->Buffer).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (pFVar7->FilteredRowDataOffsetBuffer).SRV.Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    (pFVar7->FilteredRowDataOffsetBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = &pFVar7->AttributeReadOffsets;
  bVar5 = 1 < *(int *)&(pFVar7->AttributeReadOffsets).field_0x48;
  if (!bVar5) {
    TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_02,0,*(int *)&(pFVar7->AttributeReadOffsets).field_0x8);
  puVar1 = &(pFVar7->AttributeReadOffsets).field_0xc;
  *(undefined4 *)&(pFVar7->AttributeReadOffsets).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(pFVar7->AttributeReadOffsets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar7->AttributeReadOffsets).field_0x34 = 0;
  iVar2 = *(int *)&(pFVar7->AttributeReadOffsets).field_0x2c;
  *(undefined4 *)&(pFVar7->AttributeReadOffsets).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(pFVar7->AttributeReadOffsets).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar7->AttributeReadOffsets).field_0x10,0)
    ;
  }
  if (bVar5) {
    *(undefined4 *)&(pFVar7->AttributeReadOffsets).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              *)this_02);
  }
  <StackX_8.GameToRenderData = (FGameToRenderData *)((longlong)param_1 + 8);
  FReadBuffer::
  InitializeWithData<__NDIDataTableLocal::FNDIProxy::SendGameToRender_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (this,(FRHICommandListBase *)param_2,L"NiagaraDataTable::PerDataDI",4,
             *(uint *)((longlong)param_1 + 0x30),PF_R32_UINT,None,&<StackX_8);
  return;
}

// Call @ 148ead640

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceDataTable::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148ead680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceEmitterProperties::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSet<TTuple<unsigned___int64,NDIEmitterPropertiesLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIEmitterPropertiesLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned___int64,NDIEmitterPropertiesLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIEmitterPropertiesLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
            *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  return;
}

// Call @ 148ead6a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceMemoryBuffer::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x20) != *(int *)(lVar1 + 0x4c)) {
    TSet<TTuple<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x18),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148ead6e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSimCacheReader::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148ead720

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSimpleCounter::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FNDISimpleCounterInstanceData_RenderThread *pFVar4;
  
  pFVar4 = TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x20),*(ulong64 *)((longlong)param_1 + 8));
  if (pFVar4 != (FNDISimpleCounterInstanceData_RenderThread *)0x0) {
    if (pFVar4->CountOffset == 0xffffffff) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1715637597058892037>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceSimpleCounter.cpp"
                         ,0x105,"InstanceData->CountOffset != INDEX_NONE");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      lVar1 = *(longlong *)((longlong)param_1 + 0x10);
      bVar3 = IsInParallelRenderingThread();
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                           ,0x6a,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FNiagaraGPUInstanceCountManager::FreeEntry
                ((FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48),&pFVar4->CountOffset);
      pFVar4->CountOffset = 0xffffffff;
    }
    TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(*(longlong *)param_1 + 0x20),*(ulong64 *)((longlong)param_1 + 8));
  }
  return;
}

// Call @ 148ead730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceMemoryBuffer::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FVMExternalFunctionBindingInfo *param_3)

{
  bool bVar1;
  
  bVar1 = `UNiagaraDataInterfaceMemoryBuffer::InitPerInstanceData'::__l5::<lambda_1>::operator()
                    (param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 148ead740

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSimpleCounter::InitPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x20),&TStackX_8,(bool *)&lStackX_18);
  puVar5 = (undefined4 *)(*(longlong *)(lVar1 + 0x20) + (longlong)(int)TStackX_8.Key * 0x20 + 8);
  if ((undefined4 *)((longlong)param_1 + 0x18) != puVar5) {
    *puVar5 = *(undefined4 *)((longlong)param_1 + 0x18);
    *(undefined1 *)(puVar5 + 1) = 1;
  }
  lVar1 = *(longlong *)((longlong)param_1 + 0x10);
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = FNiagaraGPUInstanceCountManager::AcquireOrAllocateEntry
                    ((FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48),param_2);
  puVar5[2] = uVar4;
  return;
}

// Call @ 148ead750

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceMemoryBuffer::PerInstanceTickPostSimulate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIInstanceData_RenderThread *this;
  
  this = TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
         ::FindOrAddImpl<unsigned___int64_const_&>
                   ((TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
                     *)(*(longlong *)param_1 + 0x18),
                    (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                    (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8));
  NDIMemoryBufferLocal::FNDIInstanceData_RenderThread::UpdateData
            (this,(FGameToRenderData *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 148ead7a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIPhysicsAssetData::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(**(longlong **)param_1 + 0x20))();
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ead7c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Call @ 148ead7e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraRenderThreadDeletor<NDIDataTableLocal::FBuiltDataTable>::operator()'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if (*(FBuiltDataTable **)param_1 != (FBuiltDataTable *)0x0) {
    NDIDataTableLocal::FBuiltDataTable::_scalar_deleting_destructor_(*(FBuiltDataTable **)param_1,1)
    ;
    return;
  }
  return;
}

// Call @ 148ead800

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceEmitterProperties::InitPerInstanceData'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  longlong local_res18 [2];
  
  lVar1 = *(longlong *)param_1;
  local_res18[0] = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,NDIEmitterPropertiesLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIEmitterPropertiesLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,NDIEmitterPropertiesLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIEmitterPropertiesLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10),&local_res8,(bool *)local_res18);
  *(undefined1 *)((longlong)(int)local_res8.Key * 0x88 + 8 + *(longlong *)(lVar1 + 0x10)) =
       *(undefined1 *)((longlong)param_1 + 0x10);
  return;
}

// Call @ 148ead860

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 148ead890

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSimpleCounter::SimCacheReadFrame'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDISimpleCounterInstanceData_RenderThread *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x20),*(ulong64 *)((longlong)param_1 + 8));
  if ((pFVar1 != (FNDISimpleCounterInstanceData_RenderThread *)0x0) &&
     ((FNDISimpleCounterInstanceData_RenderThread *)((longlong)param_1 + 0x10) != pFVar1)) {
    (pFVar1->CountValue).TypedValue =
         (((FNDISimpleCounterInstanceData_RenderThread *)((longlong)param_1 + 0x10))->CountValue).
         TypedValue;
    (pFVar1->CountValue).bIsSet = true;
  }
  return;
}

// Call @ 148ead8d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSimpleCounter::PushToRenderThreadImpl'::__l10::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined1 auStackX_8 [8];
  
  iVar1 = *(int *)((longlong)param_1 + 0x50);
  puVar7 = *(ulonglong **)((longlong)param_1 + 0x48);
  if (*(ulonglong **)((longlong)param_1 + 0x48) == (ulonglong *)0x0) {
    puVar7 = (ulonglong *)((longlong)param_1 + 8);
  }
  puVar8 = puVar7 + (longlong)iVar1 * 2;
LAB_148ea83d0:
  do {
    if (*(int *)((longlong)param_1 + 0x50) != iVar1) {
      `TCheckedPointerIterator<TTuple<unsigned___int64,int>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (puVar7 == puVar8) {
      return;
    }
    lVar2 = *(longlong *)param_1;
    uVar3 = *puVar7;
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar9 = lVar2 + 0x58;
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        lVar9 = *(longlong *)(lVar2 + 0x60);
      }
      iVar4 = *(int *)(lVar9 + ((uVar3 >> 0x20) * 0x17 + uVar3 &
                               (ulonglong)(*(int *)(lVar2 + 0x68) - 1)) * 4);
      if (iVar4 != -1) {
        do {
          puVar5 = (ulonglong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar2 + 0x20));
          if (*puVar5 == uVar3) {
            puVar6 = puVar5 + 1;
            if (puVar5 == (ulonglong *)0x0) {
              puVar6 = (ulonglong *)0x0;
            }
            if ((puVar6 != (ulonglong *)0x0) && (puVar7 + 1 != puVar6)) {
              *(int *)puVar6 = (int)puVar7[1];
              *(undefined1 *)((longlong)puVar6 + 4) = 1;
            }
            goto LAB_148ea846d;
          }
          iVar4 = (int)puVar5[3];
        } while (iVar4 != -1);
        puVar7 = puVar7 + 2;
        goto LAB_148ea83d0;
      }
    }
LAB_148ea846d:
    puVar7 = puVar7 + 2;
  } while( true );
}

// Call @ 148ead8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined4 *puVar1;
  FNiagaraGpuReadbackManager *this;
  longlong lVar2;
  UNiagaraDataInterfaceDynamicMeshSimCacheData *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FNDIInstanceData_RenderThread *pFVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStackY_938 [32];
  uchar *puStack_908;
  undefined8 uStack_900;
  uchar *puStack_8f8;
  undefined8 uStack_8f0;
  void *pvStack_8e8;
  undefined8 uStack_8e0;
  FRDGEventName FStack_8d8;
  FRDGBuffer **ppFStack_8b8;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  uchar *puStack_8a8;
  int iStack_8a0;
  undefined4 uStack_89c;
  uchar *puStack_898;
  int iStack_890;
  undefined4 uStack_88c;
  TArrayView<FRDGBuffer_*_const,int> TStack_888;
  TArrayView<unsigned_char_const_,int> TStack_878;
  TArrayView<unsigned_char_const_,int> TStack_868;
  code *apcStack_858 [5];
  undefined8 *puStack_830;
  FRDGBuilder FStack_828;
  FRDGBuffer *pFStack_58;
  FRDGBuffer *pFStack_50;
  FRDGBuffer *pFStack_48;
  ulonglong uStack_40;
  
  uStack_40 = __security_cookie.value ^ (ulonglong)auStackY_938;
  pFVar7 = TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x60),*(ulong64 *)((longlong)param_1 + 8));
  if ((((((pFVar7 != (FNDIInstanceData_RenderThread *)0x0) &&
         (*(uint *)((longlong)param_1 + 0x18) == pFVar7->NumTriangles)) &&
        (*(uint *)((longlong)param_1 + 0x1c) == pFVar7->NumVertices)) &&
       ((*(uint *)((longlong)param_1 + 0x20) == pFVar7->NumTexCoords &&
        (*(uint *)((longlong)param_1 + 0x60) == pFVar7->VertexBufferSize)))) &&
      ((*(uint *)((longlong)param_1 + 100) == pFVar7->PositionOffset &&
       ((*(uint *)((longlong)param_1 + 0x68) == pFVar7->TangentBasisOffset &&
        (*(uint *)((longlong)param_1 + 0x6c) == pFVar7->TexCoordOffset)))))) &&
     ((*(uint *)((longlong)param_1 + 0x70) == pFVar7->ColorOffset &&
      ((((*(uint *)((longlong)param_1 + 0xa0) == pFVar7->NumSections &&
         ((pFVar7->SectionPooledBuffer).Reference != (FRDGPooledBuffer *)0x0)) &&
        ((pFVar7->IndexPooledBuffer).Reference != (FRDGPooledBuffer *)0x0)) &&
       ((pFVar7->VertexPooledBuffer).Reference != (FRDGPooledBuffer *)0x0)))))) {
    FStack_8d8.EventFormat = L"";
    uVar10 = 0;
    FStack_8d8.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_8d8.FormattedEventName.Data.ArrayNum = 0;
    FStack_8d8.FormattedEventName.Data.ArrayMax = 0;
    FRDGBuilder::FRDGBuilder(&FStack_828,param_2,&FStack_8d8,None,GMaxRHIShaderPlatform);
    pFStack_58 = FRDGBuilder::RegisterExternalBuffer(&FStack_828,&pFVar7->SectionPooledBuffer,None);
    pFStack_50 = FRDGBuilder::RegisterExternalBuffer(&FStack_828,&pFVar7->IndexPooledBuffer,None);
    pFStack_48 = FRDGBuilder::RegisterExternalBuffer(&FStack_828,&pFVar7->VertexPooledBuffer,None);
    pvStack_8e8 = (void *)0x0;
    uStack_8e0 = 0;
    puStack_8f8 = (uchar *)0x0;
    uStack_8f0 = 0;
    puStack_908 = (uchar *)0x0;
    uStack_900 = 0;
    this = *(FNiagaraGpuReadbackManager **)(*(longlong *)((longlong)param_1 + 0xb0) + 0x38);
    apcStack_858[0] = (code *)0x0;
    puStack_830 = FMemory::Malloc(0x20,8);
    *puStack_830 = &TFunction_OwnedObject<``UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::`16'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
                    ::_vftable_;
    puStack_830[1] = &pvStack_8e8;
    puStack_830[2] = &puStack_8f8;
    puStack_830[3] = &puStack_908;
    if (puStack_830 + 1 != (longlong *)0x0) {
      apcStack_858[0] =
           TFunctionRefCaller<``UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
           ::Call;
    }
    ppFStack_8b8 = &pFStack_58;
    uStack_8b0 = 3;
    TStack_888._12_4_ = uStack_8ac;
    TStack_888.ArrayNum = 3;
    TStack_888.DataPtr = ppFStack_8b8;
    FNiagaraGpuReadbackManager::EnqueueReadbacks
              (this,&FStack_828,&TStack_888,
               (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
               apcStack_858);
    FRDGBuilder::Execute(&FStack_828);
    FNiagaraGpuReadbackManager::WaitCompletion(this,param_2);
    iVar6 = *(int *)((longlong)param_1 + 0xa0);
    if (0 < iVar6) {
      uVar8 = 1;
      lVar12 = 4;
      uVar11 = uVar10;
      do {
        uVar9 = (uint)uVar10;
        uVar5 = 0;
        if ((int)uVar9 < iVar6) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)((longlong)param_1 + 0x98);
        uVar5 = 0;
        if ((int)uVar8 < (int)uStack_8e0) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar8 = uVar8 + 2;
        puVar1 = (undefined4 *)(lVar12 + (longlong)pvStack_8e8);
        lVar12 = lVar12 + 8;
        *(undefined4 *)(lVar2 + 8 + uVar11) = *puVar1;
        uVar11 = uVar11 + 0x18;
        iVar6 = *(int *)((longlong)param_1 + 0xa0);
      } while ((int)(uVar9 + 1) < iVar6);
    }
    iVar6 = (int)uStack_900;
    this_00 = *(UNiagaraDataInterfaceDynamicMeshSimCacheData **)((longlong)param_1 + 0x10);
    puStack_8a8 = puStack_908;
    if (((int)uStack_900 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iStack_8a0 = iVar6;
    iVar6 = (int)uStack_8f0;
    puStack_898 = puStack_8f8;
    if (((int)uStack_8f0 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TStack_878._12_4_ = uStack_89c;
    TStack_878.ArrayNum = iStack_8a0;
    iStack_890 = iVar6;
    TStack_868._12_4_ = uStack_88c;
    TStack_868.ArrayNum = iVar6;
    TStack_868.DataPtr = puStack_898;
    TStack_878.DataPtr = puStack_8a8;
    iVar6 = UNiagaraDataInterfaceDynamicMeshSimCacheData::FindOrCreateMesh
                      (this_00,(FNDIDynamicMeshSimCacheFrame *)((longlong)param_1 + 0x18),
                       &TStack_868,&TStack_878);
    lVar12 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = *(uint *)((longlong)param_1 + 0xa8);
    uVar5 = 0;
    if ((int)uVar8 < *(int *)(lVar12 + 0x50)) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(int *)(*(longlong *)(lVar12 + 0x48) + (longlong)(int)uVar8 * 4) = iVar6;
    if (puStack_908 != (uchar *)0x0) {
      FMemory::Free(puStack_908);
    }
    if (puStack_8f8 != (uchar *)0x0) {
      FMemory::Free(puStack_8f8);
    }
    if (pvStack_8e8 != (void *)0x0) {
      FMemory::Free(pvStack_8e8);
    }
    FRDGBuilder::~FRDGBuilder(&FStack_828);
  }
  return;
}

// Call @ 148ead8f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceDynamicMesh::PerInstanceTickPostSimulate'::__l17::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIInstanceData_RenderThread *this;
  
  this = TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
         ::FindOrAddImpl<unsigned___int64_const_&>
                   ((TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
                     *)(*(longlong *)param_1 + 0x60),
                    (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                    (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8));
  NDIDynamicMeshLocal::FNDIInstanceData_RenderThread::UpdateData
            (this,param_2,(FGameToRenderData *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 148ead940

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSceneCapture2D::PerInstanceTickPostSimulate'::__l17::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITextureReference *pFVar1;
  FRHITextureReference *this;
  FRHIResource *this_00;
  FNDInstanceData_RenderThread *pFVar2;
  FTextureResource *pFVar3;
  FRHIResource *this_01;
  
  pFVar2 = TMapBase<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread,0>_>
                       *)(*(longlong *)param_1 + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8)
                     );
  if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
    pFVar1 = (pFVar2->TextureReferenceRHI).Reference;
    if (pFVar1 != (FRHITextureReference *)0x0) {
      (pFVar2->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    this_01 = (FRHIResource *)(pFVar2->SamplerStateRHI).Reference;
  }
  else {
    pFVar1 = (pFVar2->TextureReferenceRHI).Reference;
    this = *(FRHITextureReference **)
            (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x140) + 0x20);
    if (pFVar1 != this) {
      (pFVar2->TextureReferenceRHI).Reference = this;
      if (this != (FRHITextureReference *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this);
      }
      if (pFVar1 != (FRHITextureReference *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    pFVar3 = UTexture::GetResource(*(UTexture **)((longlong)param_1 + 0x10));
    if (pFVar3 != (FTextureResource *)0x0) {
      pFVar3 = UTexture::GetResource(*(UTexture **)((longlong)param_1 + 0x10));
      this_01 = (FRHIResource *)(pFVar2->SamplerStateRHI).Reference;
      this_00 = (FRHIResource *)pFVar3->_padding_;
      if (this_01 == this_00) {
        return;
      }
      (pFVar2->SamplerStateRHI).Reference = (FRHISamplerState *)this_00;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_00);
      }
      if (this_01 == (FRHIResource *)0x0) {
        return;
      }
      goto LAB_148ea8a47;
    }
    this_01 = (FRHIResource *)(pFVar2->SamplerStateRHI).Reference;
  }
  if (this_01 == (FRHIResource *)0x0) {
    return;
  }
  (pFVar2->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
LAB_148ea8a47:
  FRHIResource::Release(this_01);
  return;
}

// Call @ 148ead950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  FNiagaraGpuReadbackManager *this;
  FNDIInstanceData_RenderThread *pFVar2;
  FRDGBuffer *pFVar3;
  undefined1 auStackY_868 [32];
  undefined1 auStack_838 [16];
  undefined **ppuStack_828;
  undefined8 uStack_820;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined8 uStack_810;
  FRDGBuilder FStack_808;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_868;
  pFVar2 = TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x18),*(ulong64 *)((longlong)param_1 + 8));
  if ((pFVar2 != (FNDIInstanceData_RenderThread *)0x0) && (iVar1 = pFVar2->NumElements, iVar1 != 0))
  {
    auStack_838._0_8_ = L"";
    this = *(FNiagaraGpuReadbackManager **)(*(longlong *)((longlong)param_1 + 0x20) + 0x38);
    auStack_838._8_8_ = (FScriptContainerElement *)0x0;
    ppuStack_828 = (undefined **)0x0;
    FRDGBuilder::FRDGBuilder
              (&FStack_808,param_2,(FRDGEventName *)auStack_838,None,GMaxRHIShaderPlatform);
    uStack_810 = 0;
    ppuStack_828 = &TFunction_OwnedObject<``UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::`18'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                    ::_vftable_;
    uStack_820 = *(undefined8 *)((longlong)param_1 + 0x10);
    uStack_818 = *(undefined4 *)((longlong)param_1 + 0x18);
    uStack_814 = auStack_838._12_4_;
    auStack_838._0_8_ =
         TFunctionRefCaller<``UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
         ::Call;
    pFVar3 = FRDGBuilder::RegisterExternalBuffer(&FStack_808,&pFVar2->PooledBuffer,None);
    FNiagaraGpuReadbackManager::EnqueueReadback
              (this,&FStack_808,pFVar3,0,iVar1 * 4,
               (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
               auStack_838);
    FRDGBuilder::Execute(&FStack_808);
    FNiagaraGpuReadbackManager::WaitCompletion(this,param_2);
    FRDGBuilder::~FRDGBuilder(&FStack_808);
  }
  return;
}

// Call @ 148ead960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIMemoryBufferLocal::FNDIProxy::PreStage'::__l11::<lambda_1>,void,void_const_*>
::Call(void *param_1,void **param_2)

{
  return;
}

// Call @ 148ead970

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceMemoryBuffer::SimCacheReadFrame'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIInstanceData_RenderThread *this;
  
  this = TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
         ::FindOrAddImpl<unsigned___int64_const_&>
                   ((TMapBase<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIMemoryBufferLocal::FNDIInstanceData_RenderThread,0>_>
                     *)(*(longlong *)param_1 + 0x18),
                    (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                    (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8));
  NDIMemoryBufferLocal::FNDIInstanceData_RenderThread::UpdateData
            (this,(FGameToRenderData *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 148ead9c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FNiagaraSimCacheGpuResource *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FInstanceData_RenderThread *pFVar4;
  
  pFVar4 = TMapBase<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,0>_>
                       *)(*(longlong *)param_1 + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8)
                     );
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20);
  pFVar2 = *(FNiagaraSimCacheGpuResource **)((longlong)param_1 + 0x18);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->SimCacheResource).SharedReferenceCount.ReferenceController;
  (pFVar4->SimCacheResource).Object = pFVar2;
  (pFVar4->SimCacheResource).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar4->EmitterIndex = *(int *)((longlong)param_1 + 0x10);
  return;
}

// Call @ 148eada40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  longlong lVar2;
  FNiagaraGpuReadbackManager *this;
  code *pcVar3;
  bool bVar4;
  FNDISimpleCounterInstanceData_RenderThread *pFVar5;
  FRWBuffer *pFVar6;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  
  pFVar5 = TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x20),*(ulong64 *)((longlong)param_1 + 8));
  if ((pFVar5 != (FNDISimpleCounterInstanceData_RenderThread *)0x0) &&
     (pFVar5->CountOffset != 0xffffffff)) {
    lVar2 = *(longlong *)((longlong)param_1 + 0x10);
    bVar4 = IsInParallelRenderingThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x6a,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uStack_10 = 0;
    this = *(FNiagaraGpuReadbackManager **)(*(longlong *)((longlong)param_1 + 0x10) + 0x38);
    ppuStack_28 = &TFunction_OwnedObject<``UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::`15'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                   ::_vftable_;
    uStack_20 = *(undefined8 *)((longlong)param_1 + 0x18);
    uStack_18 = *(undefined4 *)((longlong)param_1 + 0x20);
    uVar1 = pFVar5->CountOffset;
    apcStack_38[0] =
         TFunctionRefCaller<``UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
         ::Call;
    pFVar6 = FNiagaraGPUInstanceCountManager::GetInstanceCountBuffer
                       ((FNiagaraGPUInstanceCountManager *)(lVar2 + 0x48));
    FNiagaraGpuReadbackManager::EnqueueReadback
              (this,(FRHICommandList *)param_2,(pFVar6->Buffer).Reference,uVar1 << 2,4,
               (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
               apcStack_38);
    FNiagaraGpuReadbackManager::WaitCompletion(this,param_2);
  }
  return;
}

// Call @ 148eada50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceDynamicMesh::SimCacheReadFrame'::__l8::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIInstanceData_RenderThread *this;
  
  this = TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
         ::FindOrAddImpl<unsigned___int64_const_&>
                   ((TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
                     *)(*(longlong *)param_1 + 0x60),
                    (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                    (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8));
  NDIDynamicMeshLocal::FNDIInstanceData_RenderThread::UpdateData
            (this,param_2,*(FGameToRenderData **)((longlong)param_1 + 0x10));
  return;
}

// Call @ 148eadaa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::__l19::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148f909b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSocketReader::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148f909f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceVirtualTexture::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148f90a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceVirtualTexture::PerInstanceTick'::__l3::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  FRHIShaderResourceView *pFVar3;
  TRefCountPtr<FRHITexture> this;
  double dVar4;
  TVector2<float>_u_0 TVar5;
  bool bVar6;
  URuntimeVirtualTexture *this_00;
  IAllocatedVirtualTexture *pIVar7;
  FNDInstanceData_RenderThread *this_01;
  TVector4<double> *pTVar8;
  FRHITexture *pFVar9;
  FRHIShaderResourceView *pFVar10;
  FNDInstanceData_RenderThread *pFVar11;
  FLayerTexture *pFVar12;
  longlong lVar13;
  undefined1 auStack_1a8 [32];
  float fStack_188;
  float fStack_184;
  TVector4<double>_u_0 TStack_178;
  TVector4<double> TStack_158;
  FNDInstanceData_RenderThread FStack_138;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  this_00 = (URuntimeVirtualTexture *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x10));
  if (this_00 == (URuntimeVirtualTexture *)0x0) {
    pIVar7 = (IAllocatedVirtualTexture *)0x0;
  }
  else {
    pIVar7 = URuntimeVirtualTexture::GetAllocatedVirtualTexture(this_00);
  }
  this_01 = TMapBase<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread,0>_>
                        *)(*(longlong *)param_1 + 0x10),
                       (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                       (int)*(undefined8 *)((longlong)param_1 + 8),
                       (ulong64 *)((longlong)param_1 + 8));
  if (pIVar7 == (IAllocatedVirtualTexture *)0x0) {
    pFVar11 = NDIVirtualTextureLocal::FNDInstanceData_RenderThread::FNDInstanceData_RenderThread
                        (&FStack_138);
    NDIVirtualTextureLocal::FNDInstanceData_RenderThread::operator=(this_01,pFVar11);
    if ((FRHIResource *)FStack_138.SharedSampler.Reference != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)FStack_138.SharedSampler.Reference);
    }
    lVar13 = 3;
    pFVar12 = (FLayerTexture *)&FStack_138.MaterialType;
    do {
      pFVar1 = pFVar12[-1].PageTable.Reference;
      lVar13 = lVar13 + -1;
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
      pFVar3 = pFVar12[-1].TextureSRV.Reference;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
      this.Reference = pFVar12[-1].Texture.Reference;
      if (this.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
      pFVar12 = pFVar12 + -1;
    } while (lVar13 != 0);
  }
  else {
    this_01->MaterialType = this_00->MaterialType;
    (**(code **)(pIVar7->_padding_ + 0x38))(pIVar7,this_01->PageTableUniforms);
    pTVar8 = URuntimeVirtualTexture::GetUniformParameter(this_00,&TStack_158,0);
    dVar4 = (pTVar8->field0_0x0)._s_0.Y;
    this_01->UVUniforms[0].field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    this_01->UVUniforms[0].field0_0x0._s_0.Y = dVar4;
    dVar4 = (pTVar8->field0_0x0)._s_0.W;
    this_01->UVUniforms[0].field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    this_01->UVUniforms[0].field0_0x0._s_0.W = dVar4;
    pTVar8 = URuntimeVirtualTexture::GetUniformParameter(this_00,&TStack_158,1);
    dVar4 = (pTVar8->field0_0x0)._s_0.Y;
    this_01->UVUniforms[1].field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    this_01->UVUniforms[1].field0_0x0._s_0.Y = dVar4;
    dVar4 = (pTVar8->field0_0x0)._s_0.W;
    this_01->UVUniforms[1].field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    this_01->UVUniforms[1].field0_0x0._s_0.W = dVar4;
    pTVar8 = URuntimeVirtualTexture::GetUniformParameter(this_00,&TStack_158,2);
    dVar4 = (pTVar8->field0_0x0)._s_0.Y;
    this_01->UVUniforms[2].field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    this_01->UVUniforms[2].field0_0x0._s_0.Y = dVar4;
    dVar4 = (pTVar8->field0_0x0)._s_0.W;
    this_01->UVUniforms[2].field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    this_01->UVUniforms[2].field0_0x0._s_0.W = dVar4;
    URuntimeVirtualTexture::GetUniformParameter(this_00,(TVector4<double> *)&TStack_178._s_0,3);
    fStack_188 = (float)TStack_178._s_0.X;
    fStack_184 = (float)TStack_178._s_0.Y;
    TVar5._s_0.Y = fStack_184;
    TVar5._s_0.X = fStack_188;
    (this_01->WorldHeightUnpack).field0_0x0 = TVar5;
    pFVar9 = (FRHITexture *)(**(code **)(pIVar7->_padding_ + 0x28))(pIVar7);
    pFVar1 = this_01->LayerTexture[0].Texture.Reference;
    if (pFVar1 != pFVar9) {
      this_01->LayerTexture[0].Texture.Reference = pFVar9;
      if (pFVar9 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    pcVar2 = *(code **)(pIVar7->_padding_ + 0x30);
    bVar6 = URuntimeVirtualTexture::IsLayerSRGB(this_00,0);
    pFVar10 = (FRHIShaderResourceView *)(*pcVar2)(pIVar7,0,bVar6);
    pFVar3 = this_01->LayerTexture[0].TextureSRV.Reference;
    if (pFVar3 != pFVar10) {
      this_01->LayerTexture[0].TextureSRV.Reference = pFVar10;
      if (pFVar10 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar10);
      }
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    pFVar9 = (FRHITexture *)(**(code **)(pIVar7->_padding_ + 0x10))(pIVar7,0);
    pFVar1 = this_01->LayerTexture[0].PageTable.Reference;
    if (pFVar1 != pFVar9) {
      this_01->LayerTexture[0].PageTable.Reference = pFVar9;
      if (pFVar9 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    (**(code **)(pIVar7->_padding_ + 0x40))(pIVar7,&this_01->LayerTexture[0].TextureUniforms,0);
    pFVar9 = (FRHITexture *)(**(code **)(pIVar7->_padding_ + 0x28))(pIVar7,1);
    pFVar1 = this_01->LayerTexture[1].Texture.Reference;
    if (pFVar1 != pFVar9) {
      this_01->LayerTexture[1].Texture.Reference = pFVar9;
      if (pFVar9 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    pcVar2 = *(code **)(pIVar7->_padding_ + 0x30);
    bVar6 = URuntimeVirtualTexture::IsLayerSRGB(this_00,1);
    pFVar10 = (FRHIShaderResourceView *)(*pcVar2)(pIVar7,1,bVar6);
    pFVar3 = this_01->LayerTexture[1].TextureSRV.Reference;
    if (pFVar3 != pFVar10) {
      this_01->LayerTexture[1].TextureSRV.Reference = pFVar10;
      if (pFVar10 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar10);
      }
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    pFVar9 = (FRHITexture *)(**(code **)(pIVar7->_padding_ + 0x10))(pIVar7,0);
    pFVar1 = this_01->LayerTexture[1].PageTable.Reference;
    if (pFVar1 != pFVar9) {
      this_01->LayerTexture[1].PageTable.Reference = pFVar9;
      if (pFVar9 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    (**(code **)(pIVar7->_padding_ + 0x40))(pIVar7,&this_01->LayerTexture[1].TextureUniforms,1);
    pFVar9 = (FRHITexture *)(**(code **)(pIVar7->_padding_ + 0x28))(pIVar7,2);
    pFVar1 = this_01->LayerTexture[2].Texture.Reference;
    if (pFVar1 != pFVar9) {
      this_01->LayerTexture[2].Texture.Reference = pFVar9;
      if (pFVar9 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    pcVar2 = *(code **)(pIVar7->_padding_ + 0x30);
    bVar6 = URuntimeVirtualTexture::IsLayerSRGB(this_00,2);
    pFVar10 = (FRHIShaderResourceView *)(*pcVar2)(pIVar7,2,bVar6);
    pFVar3 = this_01->LayerTexture[2].TextureSRV.Reference;
    if (pFVar3 != pFVar10) {
      this_01->LayerTexture[2].TextureSRV.Reference = pFVar10;
      if (pFVar10 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar10);
      }
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    pFVar9 = (FRHITexture *)(**(code **)(pIVar7->_padding_ + 0x10))(pIVar7,0);
    pFVar1 = this_01->LayerTexture[2].PageTable.Reference;
    if (pFVar1 != pFVar9) {
      this_01->LayerTexture[2].PageTable.Reference = pFVar9;
      if (pFVar9 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    (**(code **)(pIVar7->_padding_ + 0x40))(pIVar7,&this_01->LayerTexture[2].TextureUniforms,2);
  }
  return;
}

// Call @ 148f90a40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceStaticMesh::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148f90a80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceUObjectPropertyReader::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 148f90ac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetCopyFunction'::__l5::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  *(undefined4 *)*param_3 = **(undefined4 **)param_1;
  return;
}

// Call @ 148f90ae0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<bool>::GetCopyFunction'::__l5::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  piVar2 = *param_3;
  lVar3 = *(longlong *)param_1;
  if (*(char *)(lVar1 + 0x70) == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldSize != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xa4b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *piVar2 = -(uint)((*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + lVar3) & *(byte *)(lVar1 + 0x73)
                    ) != 0);
  return;
}

// Call @ 148f90b50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetGetterFunction'::__l5::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000148f90b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x260))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),*param_3);
  return;
}

// Call @ 148f90b70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<bool>::GetGetterFunction'::__l5::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  int *piVar1;
  char local_res8 [32];
  
  piVar1 = *param_3;
  local_res8[0] = '\0';
  (**(code **)(**(longlong **)param_1 + 0x260))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),local_res8);
  *piVar1 = -(uint)(local_res8[0] != '\0');
  return;
}

// Call @ 148f90bb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FVMExternalFunctionBindingInfo *param_3)

{
  bool bVar1;
  
  bVar1 = `UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l5::<lambda_1>::operator()
                    (param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 148f90bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceStaticMesh::InitPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  longlong *local_res18;
  
  lVar1 = **(longlong **)param_1;
  local_res18 = *(longlong **)param_1 + 1;
  TSet<TTuple<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10),&local_res8,(bool *)&local_res18);
  NDIStaticMeshLocal::FInstanceData_RenderThread::Init
            ((FInstanceData_RenderThread *)
             (*(longlong *)(lVar1 + 0x10) + (longlong)(int)local_res8.Key * 0x1e0 + 0x10),
             (FRHICommandListBase *)param_2,*(FGpuInitializeData **)param_1);
  return;
}

// Call @ 148f90c40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceUObjectPropertyReader::InitPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar3 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar3 + 0x10),&TStackX_8,(bool *)&lStackX_18);
  lVar3 = (longlong)(int)TStackX_8.Key * 0x140 + *(longlong *)(lVar3 + 0x10);
  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,*(int *)((longlong)param_1 + 0x18) + 3U & 0xfffffffc,
             (ForAnyElementType *)(lVar3 + 0x108),(int *)(lVar3 + 0x110),(int *)(lVar3 + 0x114));
  memset(*(void **)(lVar3 + 0x108),0xff,(longlong)*(int *)(lVar3 + 0x114) << 2);
  pFVar4 = (ForAnyElementType *)(lVar3 + 0x118);
  if (pFVar4 != (ForAnyElementType *)((longlong)param_1 + 0x10)) {
    iVar2 = *(int *)((longlong)param_1 + 0x18);
    piVar1 = (int *)(lVar3 + 0x124);
    _Src = ((ForAnyElementType *)((longlong)param_1 + 0x10))->Data;
    *(int *)(lVar3 + 0x120) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,*piVar1,pFVar4,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 2);
    }
  }
  return;
}

// Call @ 148f90c50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDISocketReaderLocal::FNDIProxy::PreStage'::__l5::<lambda_1>,void,void_const_*>
::Call(void *param_1,void **param_2)

{
  return;
}

// Call @ 148f90c60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshUvMapping::ReleaseGpuQuadTree'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(**(longlong **)param_1 + 0x20))();
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f90c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Call @ 148f90ca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  *(uint *)*param_3 = (uint)**(byte **)param_1;
  return;
}

// Call @ 148f90cc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector2<float>_>::GetCopyFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  *(ulonglong *)*param_3 = CONCAT44((float)(*(double **)param_1)[1],(float)**(double **)param_1);
  return;
}

// Call @ 148f90d00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetCopyFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  double *pdVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  pdVar1 = *(double **)param_1;
  dVar3 = pdVar1[1];
  dVar4 = pdVar1[2];
  dVar5 = pdVar1[3];
  pfVar2 = *param_3;
  *pfVar2 = (float)*pdVar1;
  pfVar2[1] = (float)dVar3;
  pfVar2[2] = (float)dVar4;
  pfVar2[3] = (float)dVar5;
  return;
}

// Call @ 148f90d60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetCopyFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  double dVar1;
  double *pdVar2;
  float *pfVar3;
  double dVar4;
  
  pdVar2 = *(double **)param_1;
  dVar1 = pdVar2[2];
  dVar4 = pdVar2[1];
  pfVar3 = *param_3;
  *pfVar3 = (float)*pdVar2;
  pfVar3[1] = (float)dVar4;
  pfVar3[2] = (float)dVar1;
  return;
}

// Call @ 148f90db0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetCopyFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = **(uint **)param_1;
  fVar1 = FLinearColor::sRGBToLinearTable[uVar3 >> 8 & 0xff];
  fVar2 = FLinearColor::sRGBToLinearTable[uVar3 & 0xff];
  pfVar4 = *param_3;
  *pfVar4 = FLinearColor::sRGBToLinearTable[uVar3 >> 0x10 & 0xff];
  pfVar4[1] = fVar1;
  pfVar4[2] = fVar2;
  pfVar4[3] = (float)(uVar3 >> 0x18) * __real_3b808081;
  return;
}

// Call @ 148f90e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetCopyFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  FNiagaraPosition *pFVar3;
  FNiagaraPosition local_38;
  TVector<double>_u_0 local_28;
  
  pdVar1 = *(double **)param_1;
  puVar2 = *param_3;
  local_28._s_0.X = *pdVar1;
  local_28._s_0.Y = pdVar1[1];
  local_28._s_0.Z = pdVar1[2];
  pFVar3 = FNiagaraLWCConverter::ConvertWorldToSimulationPosition
                     (param_2,&local_38,(TVector<double> *)&local_28._s_0);
  *puVar2 = *(undefined8 *)pFVar3;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)&pFVar3->field_0x8;
  return;
}

// Call @ 148f90e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  uint *puVar1;
  byte local_res8 [32];
  
  puVar1 = *param_3;
  local_res8[0] = 0;
  (**(code **)(**(longlong **)param_1 + 0x260))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),local_res8);
  *puVar1 = (uint)local_res8[0];
  return;
}

// Call @ 148f90ea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector2<float>_>::GetGetterFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  puVar1 = *param_3;
  local_18 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (**(code **)(**(longlong **)param_1 + 0x260))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),local_18);
  *puVar1 = CONCAT44((float)(double)local_18._8_8_,(float)(double)local_18._0_8_);
  return;
}

// Call @ 148f90f00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetGetterFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  `NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetGetterFunction'::__l8
  ::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 148f90f10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetGetterFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  `NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetGetterFunction'::__l8::
  <lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 148f90f20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetGetterFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  `NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetGetterFunction'::__l8::<lambda_1>::
  operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 148f90f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetGetterFunction'::__l8::<lambda_1>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  `NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetGetterFunction'::__l8::
  <lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 148f90f40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIStaticMeshLocal::FInstanceData_GameThread::Init'::__l106::<lambda_1>,bool,UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FVMExternalFunctionBindingInfo *param_3)

{
  bool bVar1;
  
  bVar1 = `NDIStaticMeshLocal::FInstanceData_GameThread::Init'::__l106::<lambda_1>::operator()
                    (param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 148f90f50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l8::<lambda_2>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = `UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l8::<lambda_2>::operator()
                    (param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 148f90f60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetCopyFunction'::__l9::<lambda_2>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  *(float *)*param_3 = (float)**(double **)param_1;
  return;
}

// Call @ 148f90f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetGetterFunction'::__l9::<lambda_2>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  float *pfVar1;
  double local_res8 [4];
  
  pfVar1 = *param_3;
  local_res8[0] = 0.0;
  (**(code **)(**(longlong **)param_1 + 0x260))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),local_res8);
  *pfVar1 = (float)local_res8[0];
  return;
}

// Call @ 148f90fd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l12::<lambda_2>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  *(uint *)*param_3 = (uint)**(ushort **)param_1;
  return;
}

// Call @ 148f90ff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetCopyFunction'::__l12::<lambda_2>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = (*(undefined8 **)param_1)[1];
  puVar1 = *param_3;
  *puVar1 = **(undefined8 **)param_1;
  puVar1[1] = uVar2;
  return;
}

// Call @ 148f91010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l12::<lambda_2>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  uint *puVar1;
  ushort local_res8 [16];
  
  puVar1 = *param_3;
  local_res8[0] = 0;
  (**(code **)(**(longlong **)param_1 + 0x260))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),local_res8);
  *puVar1 = (uint)local_res8[0];
  return;
}

// Call @ 148f91050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetGetterFunction'::__l12::<lambda_2>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  undefined8 *puVar1;
  FLinearColor_u_0 local_18;
  
  puVar1 = *param_3;
  local_18 = FLinearColor::Black.field0_0x0;
  (**(code **)(**(longlong **)param_1 + 0x260))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),&local_18);
  *puVar1 = local_18._0_8_;
  puVar1[1] = local_18._8_8_;
  return;
}

// Call @ 148f91090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l16::<lambda_3>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  *(undefined4 *)*param_3 = **(undefined4 **)param_1;
  return;
}

// Call @ 148f910b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l16::<lambda_3>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  undefined4 *puVar1;
  undefined4 local_res8 [8];
  
  puVar1 = *param_3;
  local_res8[0] = 0;
  (**(code **)(**(longlong **)param_1 + 0x260))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),local_res8);
  *puVar1 = local_res8[0];
  return;
}

// Call @ 148f910f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l20::<lambda_4>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  *(int *)*param_3 = (int)**(short **)param_1;
  return;
}

// Call @ 148f91110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l20::<lambda_4>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  uint *puVar1;
  ushort local_res8 [16];
  
  puVar1 = *param_3;
  local_res8[0] = 0;
  (**(code **)(**(longlong **)param_1 + 0x260))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),local_res8);
  *puVar1 = (uint)local_res8[0];
  return;
}

// Call @ 148f91150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l24::<lambda_5>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  *(undefined4 *)*param_3 = **(undefined4 **)param_1;
  return;
}

// Call @ 148f91170

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l24::<lambda_5>,void,FNiagaraLWCConverter_const_&,void_*>
::Call(void *param_1,FNiagaraLWCConverter *param_2,void **param_3)

{
  undefined4 *puVar1;
  undefined4 local_res8 [8];
  
  puVar1 = *param_3;
  local_res8[0] = 0;
  (**(code **)(**(longlong **)param_1 + 0x260))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),local_res8);
  *puVar1 = local_res8[0];
  return;
}

// Call @ 149031950

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UNiagaraComponent_*),void,UNiagaraComponent_*>::Call
          (void *param_1,UNiagaraComponent **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000149031956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

// Call @ 149031960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l14::TSTR_NiagaraSetDynamicData2391>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014903199d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// Call @ 1490319b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraAsyncGpuTraceHelper::FNiagaraAsyncGpuTraceHelper'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FNiagaraAsyncGpuTraceHelper>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FPrimitiveSceneInfo::OnGPUSceneInstancesAllocated,
             (FNiagaraAsyncGpuTraceHelper *)&stack0x00000008,*(pmf_2a79654c *)param_1);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FNiagaraAsyncGpuTraceHelper>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FPrimitiveSceneInfo::OnGPUSceneInstancesFreed,
             (FNiagaraAsyncGpuTraceHelper *)&stack0x00000008,*(pmf_2a79654c *)param_1);
  return;
}

// Call @ 149031a00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraComputeExecutionContext::Reset'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNiagaraComputeExecutionContext *this;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  this = *(FNiagaraComputeExecutionContext **)((longlong)param_1 + 8);
  lVar1 = *(longlong *)param_1;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComputeExecutionContext.cpp"
                       ,0xd6,L"Can only reset the gpu context from the render thread");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (lVar1 != 0) {
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x6a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FNiagaraGPUInstanceCountManager::FreeEntry
              ((FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48),&this->CountOffset_RT);
  }
  this->CurrentNumInstances_RT = 0;
  this->CountOffset_RT = 0xffffffff;
  (this->EmitterInstanceReadback).GPUCountOffset = 0xffffffff;
  FNiagaraComputeExecutionContext::SetDataToRender(this,(FNiagaraDataBuffer *)0x0);
  return;
}

// Call @ 149031a10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraUtilities::ResolveAliases'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FNiagaraUtilities::ResolveAliases'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 149031a40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraVariableAttributeBinding::SetAsPreviousValue'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  undefined4 *puVar1;
  ForElementType<TStringView<wchar_t>_> FVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ForElementType<TStringView<wchar_t>_> FVar8;
  
  FVar2 = *(ForElementType<TStringView<wchar_t>_> *)param_1;
  uVar3 = *(undefined4 *)&param_2->DataPtr;
  uVar4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar5 = param_2->Size;
  uVar6 = *(undefined4 *)&param_2->field_0xc;
  iVar7 = *(int *)((ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x108))->InlineData;
  if (iVar7 == *(int *)((longlong)FVar2 + 0x10c)) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                      (0x810,(ForElementType<TStringView<wchar_t>_> *)FVar2,
                       (int *)((longlong)FVar2 + 0x10c));
  }
  *(int *)((ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x108))->InlineData =
       iVar7 + 1;
  FVar8 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x100);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x100) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar8 = FVar2;
  }
  puVar1 = (undefined4 *)((longlong)FVar8 + (longlong)iVar7 * 0x10);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = iVar5;
  puVar1[3] = uVar6;
  return;
}

// Call @ 149031ab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  
  if (*(longlong *)((longlong)param_1 + 8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraAsyncGpuTraceHelper.cpp"
                       ,0x149,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)param_1;
  uVar1 = *(uint *)((longlong)param_1 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x228);
  puVar6 = TMapBase<FPrimitiveComponentId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,unsigned_int,0>_>
           ::FindOrAddImpl<FPrimitiveComponentId_const_&>
                     ((TMapBase<FPrimitiveComponentId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,unsigned_int,0>_>
                       *)(lVar2 + 0x1f8),*(uint *)(lVar3 + 0x10),
                      (FPrimitiveComponentId *)(lVar3 + 0x10));
  *puVar6 = uVar1;
  *(undefined1 *)(lVar2 + 0x2b4) = 1;
  return;
}

// Call @ 149031ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l14::<lambda_2>,void>::
Call(void *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSetDynamicData> FVar13;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  longlong lVar17;
  FNameEntryId FVar18;
  LARGE_INTEGER LStackX_8;
  FName FStackX_10;
  FStatMessage aFStack_78 [2];
  longlong lStack_58;
  
  FVar18.Value = 0;
  FVar13 = StatPtr_STAT_NiagaraSetDynamicData;
  if (StatPtr_STAT_NiagaraSetDynamicData ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSetDynamicData>)0x0) {
    pFVar12 = ::FName::FName(&FStackX_10,"STAT_NiagaraSetDynamicData");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSetDynamicData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSetDynamicData,*pFVar12,
                        L"Set Dynamic Data (RT)","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar9 = false;
  bVar11 = false;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar15.Value;
        LStackX_8.s.HighPart = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x95a);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar15.Value;
      LStackX_8.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar10 = true;
      FVar18.Value = FVar15.Value;
      goto LAB_14902820e;
    }
  }
  bVar10 = false;
  FVar16.ComparisonIndex.Value = 0;
  FVar16.Number = 0;
LAB_14902820e:
  lVar2 = *(longlong *)((longlong)param_1 + 0xb0);
  lVar17 = -1;
  lVar3 = *(longlong *)((longlong)param_1 + 0xa0);
  lVar4 = *(longlong *)((longlong)param_1 + 0xa8);
  lStack_58 = lVar2;
  if (((lVar3 != 0) || (lVar4 != 0)) || (lVar2 != 0)) {
    QueryPerformanceCounter(&LStackX_8);
    lVar17 = CONCAT44(LStackX_8.s.HighPart,LStackX_8.s.LowPart);
  }
  FNiagaraSystemRenderData::ExecuteDynamicDataCommands_RenderThread
            ((TArray<FNiagaraSystemRenderData::FSetDynamicDataCommand,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)((longlong)param_1 + 8));
  lVar5 = *(longlong *)param_1;
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x9c);
  uVar7 = *(undefined4 *)((longlong)param_1 + 0xa0);
  uVar8 = *(undefined4 *)((longlong)param_1 + 0xa4);
  *(undefined4 *)(lVar5 + 0x378) = *(undefined4 *)((longlong)param_1 + 0x98);
  *(undefined4 *)(lVar5 + 0x37c) = uVar6;
  *(undefined4 *)(lVar5 + 0x380) = uVar7;
  *(undefined4 *)(lVar5 + 900) = uVar8;
  uVar6 = *(undefined4 *)((longlong)param_1 + 0xac);
  uVar7 = *(undefined4 *)((longlong)param_1 + 0xb0);
  uVar8 = *(undefined4 *)((longlong)param_1 + 0xb4);
  *(undefined4 *)(lVar5 + 0x388) = *(undefined4 *)((longlong)param_1 + 0xa8);
  *(undefined4 *)(lVar5 + 0x38c) = uVar6;
  *(undefined4 *)(lVar5 + 0x390) = uVar7;
  *(undefined4 *)(lVar5 + 0x394) = uVar8;
  if (lVar17 != -1) {
    QueryPerformanceCounter(&LStackX_8);
    lVar17 = CONCAT44(LStackX_8.s.HighPart,LStackX_8.s.LowPart) - lVar17;
    if (lVar3 != 0) {
      *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + lVar17;
      *(longlong *)(lVar3 + 0x38) = *(longlong *)(lVar3 + 0x38) + 1;
    }
    if (lVar4 != 0) {
      *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + lVar17;
      *(longlong *)(lVar4 + 0x38) = *(longlong *)(lVar4 + 0x38) + 1;
    }
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + lVar17;
      *(longlong *)(lVar2 + 0x38) = *(longlong *)(lVar2 + 0x38) + 1;
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      aFStack_78[0].NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      aFStack_78[0].NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&LStackX_8);
      aFStack_78[0].StatData.Pad[4] = '\0';
      aFStack_78[0].StatData.Pad[5] = '\0';
      aFStack_78[0].StatData.Pad[6] = '\0';
      aFStack_78[0].StatData.Pad[7] = '\0';
      aFStack_78[0].StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      aFStack_78[0].StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      aFStack_78[0].StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      aFStack_78[0].StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,aFStack_78);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// Call @ 1490d1410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataChannelData::~FNiagaraDataChannelData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNiagaraDataSet *pFVar1;
  
  pFVar1 = *(FNiagaraDataSet **)param_1;
  if (pFVar1 != (FNiagaraDataSet *)0x0) {
    FNiagaraDataSet::~FNiagaraDataSet(pFVar1);
    ::operator_delete(pFVar1,0xc0);
  }
  pFVar1 = *(FNiagaraDataSet **)((longlong)param_1 + 8);
  if (pFVar1 != (FNiagaraDataSet *)0x0) {
    FNiagaraDataSet::~FNiagaraDataSet(pFVar1);
    ::operator_delete(pFVar1,0xc0);
  }
  return;
}

// Call @ 1490d1470

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                       (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x50));
          }
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                     (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 1490d1480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<int,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                       (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x50));
          }
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                     (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 1490d1490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<float,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                       (TArray<float,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x50));
          }
          TArray<float,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                     (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 1490d14a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
                       (lVar6 + 0x18),
                       (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
                       (lVar3 + 0x50));
          }
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                     (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
                     ((longlong)param_1 + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 1490d14b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                       (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x50))
            ;
          }
          TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                     (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)
                     ((longlong)param_1 + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 1490d14c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
                       (lVar6 + 0x18),
                       (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
                       (lVar3 + 0x50));
          }
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18)
                     ,(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
                      ((longlong)param_1 + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 1490d14d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                       (lVar6 + 0x18),
                       (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                       (lVar3 + 0x50));
          }
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18)
                     ,(TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                      ((longlong)param_1 + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 1490d14e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                       (lVar6 + 0x18),
                       (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                       (lVar3 + 0x50));
          }
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                     (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                     ((longlong)param_1 + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 1490d14f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<FLinearColor,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                       (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x50));
          }
          TArray<FLinearColor,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                     (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 1490d1500

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<FNiagaraID,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<FNiagaraID,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                       (TArray<FNiagaraID,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x50));
          }
          TArray<FNiagaraID,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FNiagaraID,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                     (TArray<FNiagaraID,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 1490d1510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                       (TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x50));
          }
          TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                     (TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8)
                    );
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 1490d1520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = *(ulonglong *)param_1;
    lVar2 = *(longlong *)((longlong)param_1 + 0x20);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
      if (*(longlong *)(lVar2 + 0x60) == 0) {
        lVar6 = lVar2 + 0x58;
      }
      iVar4 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x68) - 1) &
                               (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar4 != -1) {
        while (lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18,
              *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18) != uVar1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          SRWLock = (PSRWLOCK)(lVar6 + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          if (*(char *)(lVar6 + 8) == '\0') {
            *(undefined1 *)(lVar6 + 8) = 1;
            TArray<bool,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<bool,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                       (TArray<bool,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x50));
          }
          TArray<bool,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<bool,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x18),
                     (TArray<bool,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8));
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | *(byte *)(lVar2 + 0x18);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  return;
}

// Call @ 1490d1530

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate'::__l2::
  <lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1490d1560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate'::__l2::<lambda_1>::
  operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1490d1590

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate'::__l2::<lambda_1>::
  operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1490d15c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate'::
  __l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1490d15f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate'::__l2::
  <lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1490d1620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate'::
  __l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1490d1650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate'::
  __l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1490d1680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate'::
  __l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1490d16b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate'::__l2::
  <lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1490d16e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate'::__l2::
  <lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1490d1710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate'::__l2::
  <lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1490d1740

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate'::__l2::<lambda_1>::
  operator()'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1490d1770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterface2DArrayTexture::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d17b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceCamera::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FCameraDataInterface_InstanceDataRT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCameraDataInterface_InstanceDataRT,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FCameraDataInterface_InstanceDataRT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCameraDataInterface_InstanceDataRT,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d17f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceCubeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDICubeTextureInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDICubeTextureInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d1830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  void *_Dst;
  LPCRITICAL_SECTION lpCriticalSection;
  size_t _Size;
  
  FNiagaraDataInterfaceProxyOscilloscope::DownsampleAudioToBuffer
            (*(FNiagaraDataInterfaceProxyOscilloscope **)param_1);
  lVar1 = *(longlong *)param_1;
  _Size = (longlong)*(int *)(lVar1 + 0x138) << 2;
  if ((_Size != 0) && (*(int *)(lVar1 + 0x150) == 0)) {
    FReadBuffer::Initialize
              ((FReadBuffer *)(lVar1 + 0x140),(FRHICommandListBase *)param_2,L"GPUDownsampledBuffer"
               ,4,*(int *)(lVar1 + 0x158) * *(int *)(*(longlong *)param_1 + 0x114),PF_R32_FLOAT,
               Static,(FResourceArrayUploadInterface *)0x0);
  }
  if (*(int *)(*(longlong *)param_1 + 0x150) != 0) {
    _Dst = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_2,*(FRHIBuffer **)(*(longlong *)param_1 + 0x140),
                      0,(uint)_Size,RLM_WriteOnly);
    lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x180);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    memcpy(_Dst,*(void **)(*(longlong *)param_1 + 0x130),_Size);
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_2,*(FRHIBuffer **)(*(longlong *)param_1 + 0x140));
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// Call @ 1490d1840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  int iVar2;
  FRHIResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  FNiagaraDataInterfaceProxySpectrum::UpdateSpectrum
            (*(FNiagaraDataInterfaceProxySpectrum **)param_1);
  uVar10 = 0;
  uVar9 = *(int *)(*(longlong *)param_1 + 0x130) * *(int *)(*(longlong *)param_1 + 0x138);
  lVar7 = *(longlong *)param_1;
  iVar1 = *(int *)(*(longlong *)param_1 + 0x130) * 4;
  uVar8 = iVar1 * *(int *)(lVar7 + 0x138);
  if (uVar8 != *(uint *)(lVar7 + 0x200)) {
    if (*(uint *)(lVar7 + 0x200) != 0) {
      *(undefined4 *)(lVar7 + 0x200) = 0;
      pFVar3 = *(FRHIResource **)(lVar7 + 0x1f0);
      if (pFVar3 != (FRHIResource *)0x0) {
        *(undefined8 *)(lVar7 + 0x1f0) = 0;
        FRHIResource::Release(pFVar3);
      }
      pFVar3 = *(FRHIResource **)(lVar7 + 0x1f8);
      if (pFVar3 != (FRHIResource *)0x0) {
        *(undefined8 *)(lVar7 + 0x1f8) = 0;
        FRHIResource::Release(pFVar3);
      }
    }
    if (0 < (int)uVar9) {
      FReadBuffer::Initialize
                ((FReadBuffer *)(*(longlong *)param_1 + 0x1f0),(FRHICommandListBase *)param_2,
                 L"FNiagaraDataInterfaceProxySpectrum_GPUBuffer",4,uVar9,PF_R32_FLOAT,Static,
                 (FResourceArrayUploadInterface *)0x0);
    }
  }
  if (*(int *)(*(longlong *)param_1 + 0x200) != 0) {
    pvVar6 = FRHICommandListBase::LockBuffer
                       ((FRHICommandListBase *)param_2,
                        *(FRHIBuffer **)(*(longlong *)param_1 + 0x1f0),0,uVar8,RLM_WriteOnly);
    lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x208);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    lVar7 = *(longlong *)param_1;
    if (0 < *(int *)(lVar7 + 0x138)) {
      uVar11 = uVar10;
      do {
        iVar2 = *(int *)(lVar7 + 0x130);
        uVar9 = (uint)uVar10;
        lVar7 = *(longlong *)param_1;
        uVar8 = 0;
        if ((int)uVar9 < *(int *)(lVar7 + 0x168)) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        memcpy((void *)((longlong)pvVar6 + (longlong)(int)(iVar2 * uVar9) * 4),
               *(void **)(*(longlong *)(lVar7 + 0x160) + uVar11),(longlong)iVar1);
        lVar7 = *(longlong *)param_1;
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar11 = uVar11 + 0x10;
      } while ((int)(uVar9 + 1) < *(int *)(lVar7 + 0x138));
    }
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_2,*(FRHIBuffer **)(lVar7 + 0x1f0));
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// Call @ 1490d1850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceCurlNoise::PushToRenderThreadImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)((longlong)param_1 + 8);
  *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)((longlong)param_1 + 0x10);
  return;
}

// Call @ 1490d1870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceCurveBase::PushToRenderThreadImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FName FVar1;
  longlong lVar2;
  FRHIResource *pFVar3;
  uint uVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  void *_Dst;
  uchar auVar9 [8];
  uchar auVar10 [8];
  FName FStackX_8;
  FStatMessage FStack_38;
  
  *(undefined4 *)(*(longlong *)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + 8);
  *(undefined4 *)(*(longlong *)param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined4 *)(*(longlong *)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + 0x10);
  *(int *)(*(longlong *)param_1 + 0x1c) = (int)(longlong)*(float *)((longlong)param_1 + 0x14);
  *(undefined4 *)(*(longlong *)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + 0x18);
  auVar9[4] = '\0';
  auVar9[5] = '\0';
  auVar9[6] = '\0';
  auVar9[7] = '\0';
  auVar9._0_4_ = *(uint *)(*(longlong *)param_1 + 0x38);
  if (auVar9 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar5 = ::FName::FName(&FStackX_8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar5,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    FStackX_8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      FStack_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      FStackX_8 = FVar1;
      FStack_38.StatData.Pad = auVar9;
      FStack_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&FStack_38);
      FStatsTrace::Add(&FStackX_8,-(longlong)auVar9);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)(lVar2 + 0x38) = 0;
  pFVar3 = *(FRHIResource **)(lVar2 + 0x28);
  if (pFVar3 != (FRHIResource *)0x0) {
    *(undefined8 *)(lVar2 + 0x28) = 0;
    FRHIResource::Release(pFVar3);
  }
  pFVar3 = *(FRHIResource **)(lVar2 + 0x30);
  if (pFVar3 != (FRHIResource *)0x0) {
    *(undefined8 *)(lVar2 + 0x30) = 0;
    FRHIResource::Release(pFVar3);
  }
  if (0 < (int)*(uint *)((longlong)param_1 + 0x28)) {
    FReadBuffer::Initialize
              ((FReadBuffer *)(*(longlong *)param_1 + 0x28),(FRHICommandListBase *)param_2,
               L"CurveLUT",4,*(uint *)((longlong)param_1 + 0x28),PF_R32_FLOAT,Static,
               (FResourceArrayUploadInterface *)0x0);
    uVar4 = *(int *)((longlong)param_1 + 0x28) << 2;
    _Dst = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_2,*(FRHIBuffer **)(*(longlong *)param_1 + 0x28),0
                      ,uVar4,RLM_WriteOnly);
    memcpy(_Dst,*(void **)((longlong)param_1 + 0x20),(ulonglong)uVar4);
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_2,*(FRHIBuffer **)(*(longlong *)param_1 + 0x28));
    auVar10[4] = '\0';
    auVar10[5] = '\0';
    auVar10[6] = '\0';
    auVar10[7] = '\0';
    auVar10._0_4_ = *(uint *)(*(longlong *)param_1 + 0x38);
    if (auVar10 != (uchar  [8])0x0) {
      FVar6 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar5 = ::FName::FName(&FStackX_8,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                           *pFVar5,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                           "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar1 = *(FName *)FVar6;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        FStackX_8 = FVar1;
        pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar7 == (FThreadStats *)0x0) {
          pFVar8 = FThreadStatsPool::Get();
          pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
        }
        FStack_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        FStackX_8 = FVar1;
        FStack_38.StatData.Pad = auVar10;
        FStack_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar7,&FStack_38);
        FStatsTrace::Add(&FStackX_8,(long64)auVar10);
        if (pFVar7->ScopeCount == 0) {
          FThreadStats::Flush(pFVar7,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar7,false,false);
        }
      }
    }
  }
  return;
}

// Call @ 1490d1880

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataChannelData::Reset'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)param_1;
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x30), lVar2 != 0)) {
    *(undefined8 *)(lVar1 + 0x30) = 0;
    if ((*(int *)(lVar2 + 8) < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBeingRead()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x2c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
  }
  return;
}

// Call @ 1490d18f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame'::__l2::<lambda_1>::operator()
            (param_1,&local_18);
  return;
}

// Call @ 1490d1920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataInterfaceProxySpectrum::UpdateCQT'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNiagaraDataInterfaceProxySpectrum::ResizeCQT
            (*(FNiagaraDataInterfaceProxySpectrum **)((longlong)param_1 + 0x10),*(float *)param_1,
             *(float *)((longlong)param_1 + 4),*(int *)((longlong)param_1 + 8));
  return;
}

// Call @ 1490d1940

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataInterfaceProxySpectrum::UpdateNoiseFloor'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)param_1;
  if (__real_41200000 <= *(float *)param_1) {
    fVar1 = __real_41200000;
  }
  if (fVar1 <= __real_c3480000) {
    fVar1 = __real_c3480000;
  }
  *(float *)(*(longlong *)((longlong)param_1 + 8) + 0x134) = fVar1;
  return;
}

// Call @ 1490d1970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterface::~UNiagaraDataInterface'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490d1980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Call @ 1490d1990

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d19e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d1a30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d1a80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d1ad0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d1b20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d1b70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d1bc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d1c10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d1c60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d1cb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d1d00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x70),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1490d1d50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 1490d1d80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 1490d1db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 1490d1de0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 1490d1e10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 1490d1e40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 1490d1e70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 1490d1ea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 1490d1ed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 1490d1f00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 1490d1f30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 1490d1f60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
::Call(void *param_1,UNiagaraScript **param_2,FNiagaraDataInterfaceGeneratedFunction *param_3)

{
  bool bVar1;
  
  bVar1 = FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(param_3->DefinitionName);
  *(bool *)*(undefined8 *)param_1 = bVar1;
  return **(char **)param_1 == '\0';
}

// Call @ 1490d1f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  FRHIResource *pFVar2;
  
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x150) != 0) {
    *(undefined4 *)(lVar1 + 0x150) = 0;
    pFVar2 = *(FRHIResource **)(lVar1 + 0x140);
    if (pFVar2 != (FRHIResource *)0x0) {
      *(undefined8 *)(lVar1 + 0x140) = 0;
      FRHIResource::Release(pFVar2);
    }
    pFVar2 = *(FRHIResource **)(lVar1 + 0x148);
    if (pFVar2 != (FRHIResource *)0x0) {
      *(undefined8 *)(lVar1 + 0x148) = 0;
      FRHIResource::Release(pFVar2);
    }
  }
  FReadBuffer::Initialize
            ((FReadBuffer *)(*(longlong *)((longlong)param_1 + 8) + 0x140),
             (FRHICommandListBase *)param_2,
             L"FNiagaraDataInterfaceProxyOscilloscope_GPUDownsampledBuffer",4,*(uint *)param_1,
             PF_R32_FLOAT,Static,(FResourceArrayUploadInterface *)0x0);
  return;
}

// Call @ 1490d1fa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataInterfaceProxyOscilloscope::RegisterToAllAudioDevices'::__l5::<lambda_1>,void,unsigned_int,FAudioDevice_*>
::Call(void *param_1,uint *param_2,FAudioDevice **param_3)

{
  `FNiagaraDataInterfaceProxyOscilloscope::RegisterToAllAudioDevices'::__l5::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 1490d1fb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataInterfaceProxySubmix::RegisterToAllAudioDevices'::__l5::<lambda_1>,void,unsigned_int,FAudioDevice_*>
::Call(void *param_1,uint *param_2,FAudioDevice **param_3)

{
  FNiagaraDataInterfaceProxySubmix::AddSubmixListener
            (*(FNiagaraDataInterfaceProxySubmix **)param_1,*param_2);
  return;
}

// Call @ 1490d1fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataInterfaceProxyOscilloscope::UnregisterFromAllAudioDevices'::__l5::<lambda_1>,void,unsigned_int,FAudioDevice_*>
::Call(void *param_1,uint *param_2,FAudioDevice **param_3)

{
  `FNiagaraDataInterfaceProxyOscilloscope::UnregisterFromAllAudioDevices'::__l5::<lambda_1>::
  operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 1490d1fd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataChannelGameData::AppendFromDataSet'::__l6::<lambda_1>,void,UScriptStruct_*,UScriptStruct_*,unsigned_char_*>
::Call(void *param_1,UScriptStruct **param_2,UScriptStruct **param_3,uchar **param_4)

{
  `FNiagaraDataChannelGameData::AppendFromDataSet'::__l6::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4);
  return;
}

// Call @ 1490d1ff0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterface2DArrayTexture::PerInstanceTick'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITextureReference *pFVar1;
  FRHITextureReference *this;
  FRHIResource *pFVar2;
  FNDITexture2DArrayInstanceData_RenderThread *pFVar3;
  FTextureResource *pFVar4;
  TRefCountPtr<FRHISamplerState> this_00;
  
  pFVar3 = TMapBase<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>_>
                       *)(*(longlong *)param_1 + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8)
                     );
  if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
    pFVar1 = (pFVar3->TextureReferenceRHI).Reference;
    if (pFVar1 != (FRHITextureReference *)0x0) {
      (pFVar3->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (FRHIResource *)(pFVar3->SamplerStateRHI).Reference;
    if (pFVar2 != (FRHIResource *)0x0) {
      (pFVar3->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(pFVar2);
    }
    *(undefined8 *)&(pFVar3->TextureSize).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (pFVar3->TextureSize).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z
    ;
    return;
  }
  pFVar1 = (pFVar3->TextureReferenceRHI).Reference;
  this = *(FRHITextureReference **)
          (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x140) + 0x20);
  if (pFVar1 != this) {
    (pFVar3->TextureReferenceRHI).Reference = this;
    if (this != (FRHITextureReference *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this);
    }
    if (pFVar1 != (FRHITextureReference *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  pFVar4 = UTexture::GetResource(*(UTexture **)((longlong)param_1 + 0x10));
  this_00 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
            ::StaticResource.StateRHI;
  if (pFVar4 != (FTextureResource *)0x0) {
    pFVar4 = UTexture::GetResource(*(UTexture **)((longlong)param_1 + 0x10));
    this_00.Reference = (FRHISamplerState *)pFVar4->_padding_;
  }
  pFVar2 = (FRHIResource *)(pFVar3->SamplerStateRHI).Reference;
  if (pFVar2 != (FRHIResource *)this_00.Reference) {
    (pFVar3->SamplerStateRHI).Reference = this_00.Reference;
    if ((FRHIResource *)this_00.Reference != (FRHIResource *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00.Reference);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  (pFVar3->TextureSize).field0_0x0._s_0.X = (float)*(int *)((longlong)param_1 + 0x18);
  (pFVar3->TextureSize).field0_0x0._s_0.Y = (float)*(int *)((longlong)param_1 + 0x1c);
  (pFVar3->TextureSize).field0_0x0._s_0.Z = (float)*(int *)((longlong)param_1 + 0x20);
  return;
}

// Call @ 1490d2000

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceCubeTexture::PerInstanceTick'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITextureReference *pFVar1;
  FRHITextureReference *this;
  FRHIResource *pFVar2;
  FNDICubeTextureInstanceData_RenderThread *pFVar3;
  FTextureResource *pFVar4;
  TIntPoint<int>_u_0 TVar5;
  TRefCountPtr<FRHISamplerState> this_00;
  
  pFVar3 = TMapBase<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>_>
                       *)(*(longlong *)param_1 + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8)
                     );
  if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
    pFVar1 = (pFVar3->TextureReferenceRHI).Reference;
    if (pFVar1 != (FRHITextureReference *)0x0) {
      (pFVar3->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (FRHIResource *)(pFVar3->SamplerStateRHI).Reference;
    TVar5 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    if (pFVar2 != (FRHIResource *)0x0) {
      (pFVar3->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(pFVar2);
      TVar5 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    }
  }
  else {
    pFVar1 = (pFVar3->TextureReferenceRHI).Reference;
    this = *(FRHITextureReference **)
            (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x140) + 0x20);
    if (pFVar1 != this) {
      (pFVar3->TextureReferenceRHI).Reference = this;
      if (this != (FRHITextureReference *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this);
      }
      if (pFVar1 != (FRHITextureReference *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    pFVar4 = UTexture::GetResource(*(UTexture **)((longlong)param_1 + 0x10));
    this_00 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource.StateRHI;
    if (pFVar4 != (FTextureResource *)0x0) {
      pFVar4 = UTexture::GetResource(*(UTexture **)((longlong)param_1 + 0x10));
      this_00.Reference = (FRHISamplerState *)pFVar4->_padding_;
    }
    pFVar2 = (FRHIResource *)(pFVar3->SamplerStateRHI).Reference;
    if (pFVar2 != (FRHIResource *)this_00.Reference) {
      (pFVar3->SamplerStateRHI).Reference = this_00.Reference;
      if ((FRHIResource *)this_00.Reference != (FRHIResource *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_00.Reference);
      }
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    TVar5 = *(TIntPoint<int>_u_0 *)((longlong)param_1 + 0x18);
  }
  (pFVar3->TextureSize).field0_0x0 = TVar5;
  return;
}

// Call @ 1490d2010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataChannelGameData::WriteToDataSet'::__l9::<lambda_1>,void,UScriptStruct_*,UScriptStruct_*,unsigned_char_*>
::Call(void *param_1,UScriptStruct **param_2,UScriptStruct **param_3,uchar **param_4)

{
  `FNiagaraDataChannelGameData::WriteToDataSet'::__l9::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4);
  return;
}

// Call @ 1490d2030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAudioSubmix::CopyToInternal'::__l10::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  
  pUVar4 = FWeakObjectPtr::Get(param_1);
  if (pUVar4 != (UObject *)0x0) {
    plVar1 = *(longlong **)(pUVar4 + 1);
    if (plVar1 == (longlong *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)&pUVar4[1].field_0x10);
  }
  return;
}

// Call @ 1490d20a0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::SetParameterBool'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
::Call(void *param_1,FAudioPlayerInterface_InstanceData **param_2,UAudioComponent **param_3,
      FNiagaraSystemInstance **param_4)

{
  UAudioComponent *pUVar1;
  char cVar2;
  
  pUVar1 = *param_3;
  if (pUVar1 != (UAudioComponent *)0x0) {
    cVar2 = (**(code **)(*(longlong *)&pUVar1->field_0x250 + 0xa8))(&pUVar1->field_0x250);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)&pUVar1->field_0x250 + 0x20))
                (&pUVar1->field_0x250,*(undefined8 *)param_1,*(undefined1 *)((longlong)param_1 + 8))
      ;
    }
  }
  return;
}

// Call @ 1490d2100

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::SetParameterFloat'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
::Call(void *param_1,FAudioPlayerInterface_InstanceData **param_2,UAudioComponent **param_3,
      FNiagaraSystemInstance **param_4)

{
  UAudioComponent *pUVar1;
  char cVar2;
  
  pUVar1 = *param_3;
  if (pUVar1 != (UAudioComponent *)0x0) {
    cVar2 = (**(code **)(*(longlong *)&pUVar1->field_0x250 + 0xa8))(&pUVar1->field_0x250);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)&pUVar1->field_0x250 + 0x40))
                (&pUVar1->field_0x250,*(undefined8 *)param_1,*(undefined4 *)((longlong)param_1 + 8))
      ;
    }
  }
  return;
}

// Call @ 1490d2160

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::SetParameterInteger'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
::Call(void *param_1,FAudioPlayerInterface_InstanceData **param_2,UAudioComponent **param_3,
      FNiagaraSystemInstance **param_4)

{
  UAudioComponent *pUVar1;
  char cVar2;
  
  pUVar1 = *param_3;
  if (pUVar1 != (UAudioComponent *)0x0) {
    cVar2 = (**(code **)(*(longlong *)&pUVar1->field_0x250 + 0xa8))(&pUVar1->field_0x250);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)&pUVar1->field_0x250 + 0x30))
                (&pUVar1->field_0x250,*(undefined8 *)param_1,*(undefined4 *)((longlong)param_1 + 8))
      ;
    }
  }
  return;
}

// Call @ 1490d21c0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::SetPausedState'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
::Call(void *param_1,FAudioPlayerInterface_InstanceData **param_2,UAudioComponent **param_3,
      FNiagaraSystemInstance **param_4)

{
  if (*param_3 != (UAudioComponent *)0x0) {
    UAudioComponent::SetPaused(*param_3,*(bool *)param_1);
    return;
  }
  return;
}

// Call @ 1490d21e0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::UpdateLocation'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
::Call(void *param_1,FAudioPlayerInterface_InstanceData **param_2,UAudioComponent **param_3,
      FNiagaraSystemInstance **param_4)

{
  UAudioComponent *this;
  char cVar1;
  TVector<double>_u_0 local_28;
  
  this = *param_3;
  if (this != (UAudioComponent *)0x0) {
    cVar1 = (**(code **)(*(longlong *)&this->field_0x250 + 0xa8))();
    if (cVar1 != '\0') {
      local_28._s_0.X = (double)*(undefined8 *)param_1;
      local_28._s_0.Y = *(double *)((longlong)param_1 + 8);
      local_28._s_0.Z = *(double *)((longlong)param_1 + 0x10);
      USceneComponent::SetWorldLocation
                ((USceneComponent *)this,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,
                 None);
    }
  }
  return;
}

// Call @ 1490d2250

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::UpdatePitch'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
::Call(void *param_1,FAudioPlayerInterface_InstanceData **param_2,UAudioComponent **param_3,
      FNiagaraSystemInstance **param_4)

{
  UAudioComponent *this;
  char cVar1;
  
  this = *param_3;
  if (this != (UAudioComponent *)0x0) {
    cVar1 = (**(code **)(*(longlong *)&this->field_0x250 + 0xa8))();
    if (cVar1 != '\0') {
      UAudioComponent::SetPitchMultiplier(this,*(float *)param_1);
    }
  }
  return;
}

// Call @ 1490d22a0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::UpdateRotation'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
::Call(void *param_1,FAudioPlayerInterface_InstanceData **param_2,UAudioComponent **param_3,
      FNiagaraSystemInstance **param_4)

{
  UAudioComponent *this;
  char cVar1;
  TRotator<double> local_28;
  
  this = *param_3;
  if (this != (UAudioComponent *)0x0) {
    cVar1 = (**(code **)(*(longlong *)&this->field_0x250 + 0xa8))();
    if (cVar1 != '\0') {
      local_28.Pitch = (double)(float)*(undefined8 *)param_1;
      local_28.Yaw = (double)(float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
      local_28.Roll = (double)*(float *)((longlong)param_1 + 8);
      USceneComponent::SetWorldRotation
                ((USceneComponent *)this,&local_28,false,(FHitResult *)0x0,None);
    }
  }
  return;
}

// Call @ 1490d2310

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::UpdateVolume'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
::Call(void *param_1,FAudioPlayerInterface_InstanceData **param_2,UAudioComponent **param_3,
      FNiagaraSystemInstance **param_4)

{
  UAudioComponent *this;
  char cVar1;
  
  this = *param_3;
  if (this != (UAudioComponent *)0x0) {
    cVar1 = (**(code **)(*(longlong *)&this->field_0x250 + 0xa8))();
    if (cVar1 != '\0') {
      UAudioComponent::SetVolumeMultiplier(this,*(float *)param_1);
    }
  }
  return;
}

// Call @ 1490d2360

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataChannelData::CreateRenderThreadProxy'::__l19::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_18;
  longlong local_10;
  
  plVar1 = *(longlong **)param_1;
  pcVar2 = *(code **)(*plVar1 + 200);
  local_18 = *(undefined8 *)((longlong)param_1 + 8);
  local_10 = *(longlong *)((longlong)param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar2)(plVar1,&local_18);
  return;
}

// Call @ 1490d23b0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l19::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
::Call(void *param_1,FAudioPlayerInterface_InstanceData **param_2,UAudioComponent **param_3,
      FNiagaraSystemInstance **param_4)

{
  `UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l19::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4);
  return;
}

// Call @ 1490d23d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::SimCacheReadFrame'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNDIArrayInstanceData_RenderThread<unsigned_char> *this;
  undefined4 uStack_1c;
  TArrayView<unsigned_char_const_,int> TStack_18;
  
  this = TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThread<unsigned_char> *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
    lVar4 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x40)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    iVar2 = *(int *)(lVar4 + 4 + (longlong)(int)uVar1 * 8);
    lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar1 * 8);
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TStack_18._12_4_ = uStack_1c;
    TStack_18.ArrayNum = iVar3;
    TStack_18.DataPtr = (uchar *)(iVar2 + lVar5);
    FNDIArrayInstanceData_RenderThread<unsigned_char>::
    UpdateDataImpl<FNDIArrayImplHelper<unsigned_char>_>(this,(FRHICommandList *)param_2,&TStack_18);
  }
  return;
}

// Call @ 1490d23e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::SimCacheReadFrame'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNDIArrayInstanceData_RenderThread<int> *this;
  undefined4 uStack_1c;
  TArrayView<int_const_,int> TStack_18;
  
  this = TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThread<int> *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
    lVar4 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x40)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    iVar2 = *(int *)(lVar4 + 4 + (longlong)(int)uVar1 * 8);
    lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar1 * 8);
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TStack_18._12_4_ = uStack_1c;
    TStack_18.ArrayNum = iVar3;
    TStack_18.DataPtr = (int *)(iVar2 + lVar5);
    FNDIArrayInstanceData_RenderThread<int>::UpdateDataImpl<FNDIArrayImplHelper<int>_>
              (this,(FRHICommandList *)param_2,&TStack_18);
  }
  return;
}

// Call @ 1490d23f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::SimCacheReadFrame'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNDIArrayInstanceData_RenderThread<float> *this;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> TStack_18;
  
  this = TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThread<float> *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
    lVar4 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x40)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    iVar2 = *(int *)(lVar4 + 4 + (longlong)(int)uVar1 * 8);
    lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar1 * 8);
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TStack_18._12_4_ = uStack_1c;
    TStack_18.ArrayNum = iVar3;
    TStack_18.DataPtr = (float *)(iVar2 + lVar5);
    FNDIArrayInstanceData_RenderThread<float>::UpdateDataImpl<FNDIArrayImplHelper<float>_>
              (this,(FRHICommandList *)param_2,&TStack_18);
  }
  return;
}

// Call @ 1490d2400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::SimCacheReadFrame'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_> *this;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TMatrix<float>_const_,int> TStack_18;
  
  this = TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_> *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
    lVar4 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x40)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    iVar2 = *(int *)(lVar4 + 4 + (longlong)(int)uVar1 * 8);
    lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar1 * 8);
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TStack_18._12_4_ = uStack_1c;
    TStack_18.ArrayNum = iVar3;
    TStack_18.DataPtr = (TMatrix<float> *)(iVar2 + lVar5);
    FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>::
    UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TMatrix<float>_>_>
              (this,(FRHICommandList *)param_2,&TStack_18);
  }
  return;
}

// Call @ 1490d2410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::SimCacheReadFrame'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_> *this;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TQuat<float>_const_,int> TStack_18;
  
  this = TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_> *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
    lVar4 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x40)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    iVar2 = *(int *)(lVar4 + 4 + (longlong)(int)uVar1 * 8);
    lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar1 * 8);
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TStack_18._12_4_ = uStack_1c;
    TStack_18.ArrayNum = iVar3;
    TStack_18.DataPtr = (TQuat<float> *)(iVar2 + lVar5);
    FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>::
    UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TQuat<float>_>_>
              (this,(FRHICommandList *)param_2,&TStack_18);
  }
  return;
}

// Call @ 1490d2420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::SimCacheReadFrame'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_> *this;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TVector2<float>_const_,int> TStack_18;
  
  this = TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_> *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
    lVar4 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x40)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    iVar2 = *(int *)(lVar4 + 4 + (longlong)(int)uVar1 * 8);
    lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar1 * 8);
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TStack_18._12_4_ = uStack_1c;
    TStack_18.ArrayNum = iVar3;
    TStack_18.DataPtr = (TVector2<float> *)(iVar2 + lVar5);
    FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>::
    UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TVector2<float>_>_>
              (this,(FRHICommandList *)param_2,&TStack_18);
  }
  return;
}

// Call @ 1490d2430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::SimCacheReadFrame'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_> *this;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TVector4<float>_const_,int> TStack_18;
  
  this = TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_> *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
    lVar4 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x40)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    iVar2 = *(int *)(lVar4 + 4 + (longlong)(int)uVar1 * 8);
    lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar1 * 8);
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TStack_18._12_4_ = uStack_1c;
    TStack_18.ArrayNum = iVar3;
    TStack_18.DataPtr = (TVector4<float> *)(iVar2 + lVar5);
    FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>::
    UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TVector4<float>_>_>
              (this,(FRHICommandList *)param_2,&TStack_18);
  }
  return;
}

// Call @ 1490d2440

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::SimCacheReadFrame'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_> *this;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TVector<float>_const_,int> TStack_18;
  
  this = TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_> *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
    lVar4 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x40)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    iVar2 = *(int *)(lVar4 + 4 + (longlong)(int)uVar1 * 8);
    lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar1 * 8);
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TStack_18._12_4_ = uStack_1c;
    TStack_18.ArrayNum = iVar3;
    TStack_18.DataPtr = (TVector<float> *)(iVar2 + lVar5);
    FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>::
    UpdateDataImpl<FNDIArrayImplHelper<UE::Math::TVector<float>_>_>
              (this,(FRHICommandList *)param_2,&TStack_18);
  }
  return;
}

// Call @ 1490d2450

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::SimCacheReadFrame'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNDIArrayInstanceData_RenderThread<FLinearColor> *this;
  undefined4 uStack_1c;
  TArrayView<FLinearColor_const_,int> TStack_18;
  
  this = TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThread<FLinearColor> *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
    lVar4 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x40)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    iVar2 = *(int *)(lVar4 + 4 + (longlong)(int)uVar1 * 8);
    lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar1 * 8);
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TStack_18._12_4_ = uStack_1c;
    TStack_18.ArrayNum = iVar3;
    TStack_18.DataPtr = (FLinearColor *)(iVar2 + lVar5);
    FNDIArrayInstanceData_RenderThread<FLinearColor>::
    UpdateDataImpl<FNDIArrayImplHelper<FLinearColor>_>(this,(FRHICommandList *)param_2,&TStack_18);
  }
  return;
}

// Call @ 1490d2460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::SimCacheReadFrame'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNDIArrayInstanceData_RenderThread<FNiagaraID> *this;
  undefined4 uStack_1c;
  TArrayView<FNiagaraID_const_,int> TStack_18;
  
  this = TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThread<FNiagaraID> *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
    lVar4 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x40)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    iVar2 = *(int *)(lVar4 + 4 + (longlong)(int)uVar1 * 8);
    lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar1 * 8);
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TStack_18._12_4_ = uStack_1c;
    TStack_18.ArrayNum = iVar3;
    TStack_18.DataPtr = (FNiagaraID *)(iVar2 + lVar5);
    FNDIArrayInstanceData_RenderThread<FNiagaraID>::UpdateDataImpl<FNDIArrayImplHelper<FNiagaraID>_>
              (this,(FRHICommandList *)param_2,&TStack_18);
  }
  return;
}

// Call @ 1490d2470

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::SimCacheReadFrame'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNDIArrayInstanceData_RenderThread<FNiagaraPosition> *this;
  undefined4 uStack_1c;
  TArrayView<FNiagaraPosition_const_,int> TStack_18;
  
  this = TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThread<FNiagaraPosition> *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
    lVar4 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x40)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    iVar2 = *(int *)(lVar4 + 4 + (longlong)(int)uVar1 * 8);
    lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar1 * 8);
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TStack_18._12_4_ = uStack_1c;
    TStack_18.ArrayNum = iVar3;
    TStack_18.DataPtr = (FNiagaraPosition *)(iVar2 + lVar5);
    FNDIArrayInstanceData_RenderThread<FNiagaraPosition>::
    UpdateDataImpl<FNDIArrayImplHelper<FNiagaraPosition>_>
              (this,(FRHICommandList *)param_2,&TStack_18);
  }
  return;
}

// Call @ 1490d2480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::SimCacheReadFrame'::__l24::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FNDIArrayInstanceData_RenderThread<bool> *this;
  undefined4 uStack_1c;
  TArrayView<bool_const_,int> TStack_18;
  
  this = TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThread<bool> *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x18);
    lVar4 = *(longlong *)((longlong)param_1 + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar4 + 0x40)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    iVar2 = *(int *)(lVar4 + 4 + (longlong)(int)uVar1 * 8);
    lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar1 * 8);
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TStack_18._12_4_ = uStack_1c;
    TStack_18.ArrayNum = iVar3;
    TStack_18.DataPtr = (bool *)(iVar2 + lVar5);
    FNDIArrayInstanceData_RenderThread<bool>::UpdateDataImpl<FNDIArrayImplHelper<bool>_>
              (this,(FRHICommandList *)param_2,&TStack_18);
  }
  return;
}

// Call @ 1490d2490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataChannelData::EndFrame'::__l43::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if (*(longlong *)param_1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)param_1;
  pFVar1 = (ForAnyElementType *)(lVar3 + 0x50);
  if (pFVar1 == (ForAnyElementType *)((longlong)param_1 + 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = *(int *)((longlong)param_1 + 0x18);
  if (iVar2 != 0) {
    iVar6 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,pFVar1,(int *)(lVar3 + 0x58),(int *)(lVar3 + 0x5c));
    ConstructItems<TRefCountPtr<FNiagaraDataBuffer>,TRefCountPtr<FNiagaraDataBuffer>,int>
              (pFVar1->Data + (longlong)iVar6 * 8,
               (TRefCountPtr<FNiagaraDataBuffer> *)
               ((ForAnyElementType *)((longlong)param_1 + 0x10))->Data,iVar2);
  }
  *(undefined1 *)(lVar3 + 0x39) = 1;
  return;
}

// Call @ 1490d24a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),4,
               FNDIArrayImplHelperBase<unsigned_char>::CopyGpuToCpuMemory);
  }
  return;
}

// Call @ 1490d2500

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),4,FNDIArrayImplHelperBase<int>::CopyGpuToCpuMemory
              );
  }
  return;
}

// Call @ 1490d2560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),4,
               FNDIArrayImplHelperBase<float>::CopyGpuToCpuMemory);
  }
  return;
}

// Call @ 1490d25c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),0x40,
               FNDIArrayImplHelperBase<UE::Math::TMatrix<float>_>::CopyGpuToCpuMemory);
  }
  return;
}

// Call @ 1490d2620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),0x10,
               FNDIArrayImplHelperBase<UE::Math::TQuat<float>_>::CopyGpuToCpuMemory);
  }
  return;
}

// Call @ 1490d2680

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),8,
               FNDIArrayImplHelperBase<UE::Math::TVector2<float>_>::CopyGpuToCpuMemory);
  }
  return;
}

// Call @ 1490d26e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),0x10,
               FNDIArrayImplHelperBase<UE::Math::TVector4<float>_>::CopyGpuToCpuMemory);
  }
  return;
}

// Call @ 1490d2740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),0xc,
               FNDIArrayImplHelperBase<UE::Math::TVector<float>_>::CopyGpuToCpuMemory);
  }
  return;
}

// Call @ 1490d27a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),0x10,
               FNDIArrayImplHelperBase<FLinearColor>::CopyGpuToCpuMemory);
  }
  return;
}

// Call @ 1490d2800

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),8,
               FNDIArrayImplHelperBase<FNiagaraID>::CopyGpuToCpuMemory);
  }
  return;
}

// Call @ 1490d2860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),0xc,
               FNDIArrayImplHelperBase<UE::Math::TVector<float>_>::CopyGpuToCpuMemory);
  }
  return;
}

// Call @ 1490d28c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIArrayInstanceData_RenderThreadBase *this;
  
  this = (FNDIArrayInstanceData_RenderThreadBase *)
         TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,0>_>
         ::Find((TMapBase<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,0>_>
                 *)(*(longlong *)param_1 + 0x70),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDIArrayInstanceData_RenderThreadBase *)0x0) {
    FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame
              (this,param_2,*(UNDIArraySimCacheData **)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x18),4,FNDIArrayImplHelper<bool>::CopyGpuToCpuMemory);
  }
  return;
}

// Call @ 1490d2920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSubmixListener::UnregisterFromSubmix'::__l13::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<bool> aVar1;
  code *pcVar2;
  FTaskBase *this;
  FAudioDeviceManager *this_00;
  FAudioDevice *pFVar3;
  longlong lVar4;
  TSharedRef<ISubmixBufferListener,1> *pTVar5;
  TSharedRef<ISubmixBufferListener,1> TStack_18;
  
  this_00 = FAudioDeviceManager::Get();
  pFVar3 = FAudioDeviceManager::GetAudioDeviceRaw(this_00,*(uint *)(*(longlong *)param_1 + 0x38));
  if (pFVar3 != (FAudioDevice *)0x0) {
    lVar4 = *(longlong *)(*(longlong *)param_1 + 0x40);
    if (lVar4 == 0) {
      lVar4 = (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3);
    }
    pcVar2 = *(code **)(pFVar3->_padding_ + 0xa0);
    pTVar5 = TSharedFromThis<ISubmixBufferListener,1>::AsShared
                       ((TSharedFromThis<ISubmixBufferListener,1> *)(*(longlong *)param_1 + 8),
                        &TStack_18);
    (*pcVar2)(pFVar3,pTVar5,lVar4);
    lVar4 = **(longlong **)((longlong)param_1 + 8);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0xd0) == '\0')) {
      this = (FTaskBase *)**(longlong **)((longlong)param_1 + 8);
      LOCK();
      aVar1 = this->TaskTriggered;
      this->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar1 == (atomic<bool>)0x0) {
        LOCK();
        this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
        UNLOCK();
        Tasks::Private::FTaskBase::TryLaunch(this,0xd8);
      }
    }
  }
  return;
}

// Call @ 1490d2930

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1490d2940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1490d2950

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1490d2960

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1490d2970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1490d2980

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1490d2990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1490d29a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1490d29b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1490d29c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1490d29d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1490d29e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::InitPerInstanceData'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  
  lVar1 = *(longlong *)param_1;
  lStackX_18 = (longlong)param_1 + 8;
  TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x70),&TStackX_8,(bool *)&lStackX_18);
  FNDIArrayInstanceData_RenderThreadBase::Initialize
            ((FNDIArrayInstanceData_RenderThreadBase *)
             (*(longlong *)(lVar1 + 0x70) + (longlong)(int)TStackX_8.Key * 0x40 + 8),param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1490d29f0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l24::<lambda_2>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
::Call(void *param_1,FAudioPlayerInterface_InstanceData **param_2,UAudioComponent **param_3,
      FNiagaraSystemInstance **param_4)

{
  `UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l24::<lambda_2>::operator()
            (param_1,*param_2,*param_3,*param_4);
  return;
}

// Call @ 149171050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDIExportInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIExportInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIExportInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIExportInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 149171090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1491710d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 149171110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 149171150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 149171190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1491711d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIExportLocal::EnqueueGameThreadCallback'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UObject *this;
  UClass *pUVar6;
  UFunction *pUVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_58;
  ForAnyElementType FStack_50;
  undefined8 uStack_48;
  UObject *pUStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double dStack_28;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId50,"NiagaraExportGTCallback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceExport.cpp"
               ,0x32);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId50);
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x18));
  if (pUVar5 == (UObject *)0x0) {
    if (2 < (byte)LogNiagara._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  else {
    this = FWeakObjectPtr::Get(param_1);
    if (this == (UObject *)0x0) {
      if (2 < (byte)LogNiagara._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
    }
    else {
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + 8);
      uStack_68 = (double)*(float *)((longlong)param_1 + 0x20) * __real_4140000000000000;
      dStack_58 = (double)*(float *)((longlong)param_1 + 0x28) * __real_4140000000000000;
      pUVar8 = *(UClass **)&this->field_0x10;
      uStack_60 = (double)*(float *)((longlong)param_1 + 0x24) * __real_4140000000000000;
      pUVar6 = UNiagaraParticleCallbackHandler::StaticClass();
      bVar4 = UClass::ImplementsInterface(pUVar8,pUVar6);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("O->GetClass()->ImplementsInterface(UNiagaraParticleCallbackHandler::StaticClass())"
                             ,
                             "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Niagara\\UHT\\NiagaraDataInterfaceExport.gen.cpp"
                             ,0x7e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStack_50.Data = (FScriptContainerElement *)0x0;
      uStack_48 = 0;
      pUVar7 = UObject::FindFunction(this,NAME_UNiagaraParticleCallbackHandler_ReceiveParticleData);
      if (pUVar7 == (UFunction *)0x0) {
        pUVar8 = UNiagaraParticleCallbackHandler::StaticClass();
        puVar9 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)this,pUVar8);
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9,pFVar1,pUVar5,&uStack_68);
        }
      }
      else {
        if (&FStack_50 != pFVar1) {
          iVar2 = *(int *)((longlong)param_1 + 0x10);
          _Src = pFVar1->Data;
          uStack_48 = CONCAT44(uStack_48._4_4_,iVar2);
          if (((iVar2 != 0) || (uStack_48._4_4_ != 0)) &&
             (ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,8,iVar2,uStack_48._4_4_,&FStack_50,iVar2,
                         (int *)((longlong)&uStack_48 + 4)), iVar2 != 0)) {
            memcpy(FStack_50.Data,_Src,(longlong)iVar2 * 0x38);
          }
        }
        uStack_38 = (undefined4)uStack_68;
        uStack_34 = uStack_68._4_4_;
        uStack_30 = (undefined4)uStack_60;
        uStack_2c = uStack_60._4_4_;
        dStack_28 = dStack_58;
        pUStack_40 = pUVar5;
        (**(code **)(*(longlong *)this + 0x260))(this,pUVar7,&FStack_50);
      }
      if (FStack_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_50.Data);
      }
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 1491711e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITexture *pFVar1;
  FNiagaraPooledRWTexture *pFVar2;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar3;
  FNiagaraGrid2DLegacyTiled2DInfo FStack_28;
  
  pFVar3 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if ((((*(longlong *)((longlong)param_1 + 0x10) != 0) &&
       (pFVar1 = *(FRHITexture **)(*(longlong *)((longlong)param_1 + 0x10) + 0x20),
       pFVar1 != (FRHITexture *)0x0)) &&
      (pFVar3 != (FGrid2DCollectionRWInstanceData_RenderThread *)0x0)) &&
     (pFVar2 = pFVar3->CurrentData, pFVar2 != (FNiagaraPooledRWTexture *)0x0)) {
    FNiagaraGrid2DLegacyTiled2DInfo::FNiagaraGrid2DLegacyTiled2DInfo
              (&FStack_28,&pFVar3->NumCells,pFVar3->NumAttributes);
    FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D
              (&FStack_28,(FRHICommandList *)param_2,
               (((pFVar2->Texture).Reference)->RenderTargetItem).TargetableTexture.Reference,pFVar1)
    ;
  }
  return;
}

// Call @ 1491711f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITexture *pFVar1;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar2;
  undefined1 auStack_48 [24];
  TIntVector3<int>_u_0 TStack_30;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  uint uStack_10;
  
  pFVar2 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if ((((*(longlong *)((longlong)param_1 + 0x10) != 0) &&
       (pFVar1 = *(FRHITexture **)(*(longlong *)((longlong)param_1 + 0x10) + 0x20),
       pFVar1 != (FRHITexture *)0x0)) &&
      (pFVar2 != (FGrid2DCollectionRWInstanceData_RenderThread *)0x0)) &&
     (pFVar2->CurrentData != (FNiagaraPooledRWTexture *)0x0)) {
    TStack_30._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    auStack_48._0_4_ = (pFVar2->NumCells).field0_0x0._s_0.X;
    auStack_48._4_4_ = (pFVar2->NumCells).field0_0x0._s_0.Y;
    auStack_48._20_4_ = *(int *)((longlong)param_1 + 0x18);
    uStack_24._0_4_ = 0;
    uStack_24._4_4_ = 0;
    uStack_14 = 0;
    auStack_48._16_4_ = 0;
    TStack_30._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    uStack_1c._0_4_ = 1;
    uStack_1c._4_4_ = 0;
    uStack_10 = 1;
    auStack_48._8_8_ = 1;
    TransitionAndCopyTexture
              ((FRHICommandList *)param_2,
               (((pFVar2->CurrentData->Texture).Reference)->RenderTargetItem).TargetableTexture.
               Reference,pFVar1,(FRHICopyTextureInfo *)auStack_48);
  }
  return;
}

// Call @ 149171200

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceExport::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  ulonglong *puStackX_18;
  
  lVar2 = *(longlong *)param_1;
  uVar3 = *(ulonglong *)((longlong)param_1 + 8);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar7 = *(longlong *)(lVar2 + 0x50);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      lVar7 = lVar2 + 0x48;
    }
    iVar6 = *(int *)(lVar7 + ((uVar3 >> 0x20) * 0x17 + uVar3 &
                             (ulonglong)(*(int *)(lVar2 + 0x58) - 1)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar6 * 0x48) == uVar3) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(RT_InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceExport.cpp"
                             ,0xbf,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x40 + (longlong)iVar6 * 0x48);
      } while (iVar6 != -1);
    }
  }
  lVar2 = *(longlong *)param_1;
  puStackX_18 = (ulonglong *)((longlong)param_1 + 8);
  TSet<TTuple<unsigned___int64,FNDIExportInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIExportInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIExportInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIExportInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x10),&TStackX_8,(bool *)&puStackX_18);
  puVar1 = (undefined1 *)(*(longlong *)(lVar2 + 0x10) + ((longlong)(int)TStackX_8.Key * 9 + 1) * 8);
  if ((puVar1 == (undefined1 *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceExport.cpp"
                         ,0xc1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *puVar1 = *(undefined1 *)((longlong)param_1 + 0x10);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)((longlong)param_1 + 0x18);
  return;
}

// Call @ 149171210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  ulonglong uVar4;
  FRHIResource *this;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FNiagaraTypeDefinition *this_00;
  UClass *pUVar9;
  UStruct *pUVar10;
  UScriptStruct *pUVar11;
  FRHIResource *this_01;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  undefined4 auStack_58 [2];
  ulonglong *apuStack_50 [3];
  
  lVar12 = *(longlong *)((longlong)param_1 + 8);
  uVar4 = *(ulonglong *)((longlong)param_1 + 0x10);
  if (*(int *)(lVar12 + 0x18) != *(int *)(lVar12 + 0x44)) {
    lVar14 = *(longlong *)(lVar12 + 0x50);
    if (*(longlong *)(lVar12 + 0x50) == 0) {
      lVar14 = lVar12 + 0x48;
    }
    iVar8 = *(int *)(lVar14 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)(*(int *)(lVar12 + 0x58) - 1)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar8 * 0xd0 + *(longlong *)(lVar12 + 0x10)) == uVar4) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                             ,0x804,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0xd0 + 200 + *(longlong *)(lVar12 + 0x10));
      } while (iVar8 != -1);
    }
  }
  lVar12 = *(longlong *)((longlong)param_1 + 8);
  apuStack_50[0] = (ulonglong *)((longlong)param_1 + 0x10);
  TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar12 + 0x10),&TStackX_8,(bool *)apuStack_50);
  lVar12 = (longlong)(int)TStackX_8.Key * 0xd0 + *(longlong *)(lVar12 + 0x10);
  *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(*(longlong *)((longlong)param_1 + 8) + 8);
  *(undefined1 *)(lVar12 + 0x10) = *(undefined1 *)((longlong)param_1 + 0x18);
  *(undefined8 *)(lVar12 + 0x14) = *(undefined8 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(lVar12 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x30);
  *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = uVar6;
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)(lVar12 + 0x38) = uVar6;
  if ((undefined1 *)((longlong)param_1 + 0x48) != (undefined1 *)(lVar12 + 0x40)) {
    if (*(char *)((longlong)param_1 + 0x49) == '\0') {
      if (*(char *)(lVar12 + 0x41) != '\0') {
        *(undefined1 *)(lVar12 + 0x41) = 0;
      }
    }
    else {
      *(undefined1 *)(lVar12 + 0x40) = *(undefined1 *)((longlong)param_1 + 0x48);
      *(undefined1 *)(lVar12 + 0x41) = 1;
    }
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(lVar12 + 0xb0),
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa0));
  uVar15 = *(uint *)((longlong)param_1 + 0x98);
  pFVar2 = (ForAnyElementType *)(lVar12 + 0x90);
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (*(int *)(lVar12 + 0x9c) < (int)uVar15) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar15,pFVar2,*(int *)(lVar12 + 0x98),(int *)(lVar12 + 0x9c));
  }
  iVar8 = *(int *)((longlong)param_1 + 0x98);
  uVar15 = 0;
  if (0 < iVar8) {
    pFVar3 = (ForAnyElementType *)(lVar12 + 0xa0);
    lStackX_18 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar15 < iVar8) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)(lVar12 + 0x98);
      lVar14 = *(longlong *)((longlong)param_1 + 0x90);
      if (iVar8 == *(int *)(lVar12 + 0x9c)) {
        iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar2,(int *)(lVar12 + 0x9c));
        *(int *)(lVar12 + 0x98) = iVar8;
      }
      *(int *)(lVar12 + 0x98) = iVar8 + 1;
      *(undefined8 *)(pFVar2->Data + (longlong)iVar8 * 8) = *(undefined8 *)(lVar14 + lStackX_18);
      uVar13 = 0;
      if ((int)uVar15 < *(int *)((longlong)param_1 + 0x98)) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = FNiagaraTypeDefinitionHandle::Resolve
                          ((FNiagaraTypeDefinitionHandle *)
                           (lStackX_18 + 8 + *(longlong *)((longlong)param_1 + 0x90)));
      uVar13 = (uint)(ushort)this_00->Size;
      if (this_00->Size == 0xffff) {
        if (((this_00->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) ||
           (pUVar9 = FNiagaraTypeDefinition::GetClass(this_00), pUVar9 != (UClass *)0x0)) {
          this_00->Size = 0;
          uVar13 = 0;
        }
        else {
          pUVar10 = FNiagaraTypeDefinition::GetStruct(this_00);
          pUVar11 = CastChecked<UScriptStruct,UStruct>(pUVar10);
          iVar8 = (int)*(short *)((longlong)&pUVar11->_padding_ + 4);
          uVar13 = iVar8 + -1 + (int)pUVar11->_padding_ & -iVar8;
          if ((0x7fff < (int)uVar13) &&
             (bVar7 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_2309485622517038180>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                                 ,0x39c,"StructSize <= TNumericLimits<int16>::Max()"), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_00->Size = (short)uVar13;
        }
      }
      piVar1 = (int *)(lVar12 + 0xac);
      auStack_58[0] = (undefined4)((ulonglong)(longlong)(short)uVar13 >> 2);
      if (((pFVar3->Data <= (FScriptContainerElement *)auStack_58) &&
          ((FScriptContainerElement *)auStack_58 < pFVar3->Data + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)(lVar12 + 0xa8);
      if (iVar8 == *piVar1) {
        iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar3,piVar1);
      }
      lStackX_18 = lStackX_18 + 0xc;
      uVar15 = uVar15 + 1;
      *(int *)(lVar12 + 0xa8) = iVar8 + 1;
      *(undefined4 *)(pFVar3->Data + (longlong)iVar8 * 4) = auStack_58[0];
      iVar8 = *(int *)((longlong)param_1 + 0x98);
    } while ((int)uVar15 < iVar8);
  }
  if ((*(longlong *)param_1 == 0) ||
     (this = *(FRHIResource **)(*(longlong *)param_1 + 0x20), this == (FRHIResource *)0x0)) {
    this_01 = *(FRHIResource **)(lVar12 + 0x78);
    if (this_01 == (FRHIResource *)0x0) {
      return;
    }
    *(undefined8 *)(lVar12 + 0x78) = 0;
  }
  else {
    this_01 = *(FRHIResource **)(lVar12 + 0x78);
    if (this_01 == this) {
      return;
    }
    *(FRHIResource **)(lVar12 + 0x78) = this;
    FRHIResource::AddRef(this);
    if (this_01 == (FRHIResource *)0x0) {
      return;
    }
  }
  FRHIResource::Release(this_01);
  return;
}

// Call @ 149171220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ulonglong uVar1;
  FRHIResource *this;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  ulonglong *puStackX_18;
  
  lVar6 = *(longlong *)param_1;
  uVar1 = *(ulonglong *)((longlong)param_1 + 8);
  if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
    lVar5 = *(longlong *)(lVar6 + 0x50);
    if (*(longlong *)(lVar6 + 0x50) == 0) {
      lVar5 = lVar6 + 0x48;
    }
    iVar4 = *(int *)(lVar5 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                             (ulonglong)(*(int *)(lVar6 + 0x58) - 1)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x40 + *(longlong *)(lVar6 + 0x10)) == uVar1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(RT_InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceIntRenderTarget2D.cpp"
                             ,0x25a,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + 0x38 + *(longlong *)(lVar6 + 0x10));
      } while (iVar4 != -1);
    }
  }
  lVar6 = *(longlong *)param_1;
  puStackX_18 = (ulonglong *)((longlong)param_1 + 8);
  TSet<TTuple<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar6 + 0x10),&TStackX_8,(bool *)&puStackX_18);
  lVar6 = (longlong)(int)TStackX_8.Key * 0x40 + *(longlong *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 8) = *(undefined8 *)((longlong)param_1 + 0x10);
  if ((*(longlong **)((longlong)param_1 + 0x60) != (longlong *)0x0) &&
     (lVar5 = (**(code **)(**(longlong **)((longlong)param_1 + 0x60) + 0xa0))(), lVar5 != 0)) {
    this = *(FRHIResource **)(lVar5 + 0x20);
    this_00 = *(FRHIResource **)(lVar6 + 0x18);
    if (this_00 != this) {
      *(FRHIResource **)(lVar6 + 0x18) = this;
      if (this != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this);
      }
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
  }
  return;
}

// Call @ 149171230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(ulonglong *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar6 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar6 = lVar1 + 0x48;
    }
    iVar5 = *(int *)(lVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x450 + *(longlong *)(lVar1 + 0x10)) == uVar2) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceLandscape.cpp"
                             ,0x6c0,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x450 + 0x440 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
  ::Emplace<unsigned___int64_const_&>
            ((TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
              *)(*(longlong *)param_1 + 0x10),(ulong64 *)((longlong)param_1 + 8));
  return;
}

// Call @ 149171240

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITexture *pFVar1;
  FRHITexture *this;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar2;
  
  pFVar2 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)((longlong)param_1 + 8) + 0x10),
                  *(ulong64 *)((longlong)param_1 + 0x10));
  if ((*(longlong *)param_1 == 0) ||
     (pFVar1 = *(FRHITexture **)(*(longlong *)param_1 + 0x20), pFVar1 == (FRHITexture *)0x0)) {
    pFVar1 = (pFVar2->RenderTargetToCopyTo).Reference;
    if (pFVar1 != (FRHITexture *)0x0) {
      (pFVar2->RenderTargetToCopyTo).Reference = (FRHITexture *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
      return;
    }
  }
  else {
    this = (pFVar2->RenderTargetToCopyTo).Reference;
    if (this != pFVar1) {
      (pFVar2->RenderTargetToCopyTo).Reference = pFVar1;
      FRHIResource::AddRef((FRHIResource *)pFVar1);
      if (this != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this);
        return;
      }
    }
  }
  return;
}

// Call @ 1491712c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITexture *pFVar1;
  FRHITexture *this;
  FGrid3DCollectionRWInstanceData_RenderThread *pFVar2;
  
  pFVar2 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)((longlong)param_1 + 8) + 0x10),
                  *(ulong64 *)((longlong)param_1 + 0x10));
  if ((*(longlong *)param_1 == 0) ||
     (pFVar1 = *(FRHITexture **)(*(longlong *)param_1 + 0x20), pFVar1 == (FRHITexture *)0x0)) {
    pFVar1 = (pFVar2->RenderTargetToCopyTo).Reference;
    if (pFVar1 != (FRHITexture *)0x0) {
      (pFVar2->RenderTargetToCopyTo).Reference = (FRHITexture *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
      return;
    }
  }
  else {
    this = (pFVar2->RenderTargetToCopyTo).Reference;
    if (this != pFVar1) {
      (pFVar2->RenderTargetToCopyTo).Reference = pFVar1;
      FRHIResource::AddRef((FRHIResource *)pFVar1);
      if (this != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this);
        return;
      }
    }
  }
  return;
}

// Call @ 1491712d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDILandscapeData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDILandscapeData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 149171310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNiagaraDataInterfaceProxyLandscape::UpdateProxy_RT
            (*(FNiagaraDataInterfaceProxyLandscape **)param_1,*(ulong64 *)((longlong)param_1 + 0x30)
             ,*(URuntimeVirtualTexture **)((longlong)param_1 + 8),
             *(bool *)((longlong)param_1 + 0x10),
             *(URuntimeVirtualTexture **)((longlong)param_1 + 0x18),
             *(URuntimeVirtualTexture **)((longlong)param_1 + 0x20),
             *(ERuntimeVirtualTextureMaterialType *)((longlong)param_1 + 0x28));
  return;
}

// Call @ 149171350

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  FRHITexture *this;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar8;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar9;
  FRHITexture *this_00;
  longlong lVar10;
  
  lVar2 = *(longlong *)((longlong)param_1 + 8);
  uVar3 = *(ulonglong *)((longlong)param_1 + 0x10);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar10 = *(longlong *)(lVar2 + 0x50);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      lVar10 = lVar2 + 0x48;
    }
    iVar7 = *(int *)(lVar10 + ((uVar3 >> 0x20) * 0x17 + uVar3 &
                              (ulonglong)(*(int *)(lVar2 + 0x58) - 1)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar7 * 0xd0 + *(longlong *)(lVar2 + 0x10)) == uVar3)
        goto LAB_14916d311;
        iVar7 = *(int *)((longlong)iVar7 * 0xd0 + 200 + *(longlong *)(lVar2 + 0x10));
      } while (iVar7 != -1);
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                     ,0x9f3,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14916d311:
  pFVar8 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)((longlong)param_1 + 8) + 0x10),
                  *(ulong64 *)((longlong)param_1 + 0x10));
  (pFVar8->NumCells).field0_0x0 = *(TIntPoint<int>_u_0 *)((longlong)param_1 + 0x1c);
  pFVar8->NumAttributes = *(int *)((longlong)param_1 + 0x24);
  dVar5 = *(double *)((longlong)param_1 + 0x30);
  (pFVar8->CellSize).field0_0x0._s_0.X = *(double *)((longlong)param_1 + 0x28);
  (pFVar8->CellSize).field0_0x0._s_0.Y = dVar5;
  FVar9 = (pFVar8->Buffers).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                )0x0) {
    FVar9 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
             )&pFVar8->Buffers;
  }
  DestructItems<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int>
            ((TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_> *)FVar9,
             (pFVar8->Buffers).ArrayNum);
  piVar1 = &(pFVar8->Buffers).ArrayMax;
  (pFVar8->Buffers).ArrayNum = 0;
  if (*piVar1 != 0) {
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>_>
              (8,8,0,&(pFVar8->Buffers).AllocatorInstance,0,piVar1);
  }
  pFVar8->CurrentData = (FNiagaraPooledRWTexture *)0x0;
  pFVar8->DestinationData = (FNiagaraPooledRWTexture *)0x0;
  if ((*(longlong *)param_1 == 0) ||
     (this = *(FRHITexture **)(*(longlong *)param_1 + 0x20), this == (FRHITexture *)0x0)) {
    this_00 = (pFVar8->RenderTargetToCopyTo).Reference;
    if (this_00 == (FRHITexture *)0x0) {
      return;
    }
    (pFVar8->RenderTargetToCopyTo).Reference = (FRHITexture *)0x0;
  }
  else {
    this_00 = (pFVar8->RenderTargetToCopyTo).Reference;
    if (this_00 == this) {
      return;
    }
    (pFVar8->RenderTargetToCopyTo).Reference = this;
    FRHIResource::AddRef((FRHIResource *)this);
    if (this_00 == (FRHITexture *)0x0) {
      return;
    }
  }
  FRHIResource::Release((FRHIResource *)this_00);
  return;
}

// Call @ 149171360

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  FRHIBuffer *this;
  FRHIShaderResourceView *this_00;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FGrid3DCollectionRWInstanceData_RenderThread *pFVar8;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar9;
  longlong lVar10;
  
  lVar2 = *(longlong *)param_1;
  uVar3 = *(ulonglong *)((longlong)param_1 + 8);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar10 = *(longlong *)(lVar2 + 0x50);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      lVar10 = lVar2 + 0x48;
    }
    iVar7 = *(int *)(lVar10 + ((ulonglong)(*(int *)(lVar2 + 0x58) - 1) &
                              (uVar3 >> 0x20) * 0x17 + uVar3) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar7 * 0x120 + *(longlong *)(lVar2 + 0x10)) == uVar3)
        goto LAB_14916d483;
        iVar7 = *(int *)((longlong)iVar7 * 0x120 + 0x118 + *(longlong *)(lVar2 + 0x10));
      } while (iVar7 != -1);
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                     ,0xee7,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14916d483:
  pFVar8 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  *(undefined8 *)&(pFVar8->NumCells).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x14);
  (pFVar8->NumCells).field0_0x0._s_0.Z = *(int *)((longlong)param_1 + 0x1c);
  *(undefined8 *)&(pFVar8->NumTiles).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x20);
  (pFVar8->NumTiles).field0_0x0._s_0.Z = *(int *)((longlong)param_1 + 0x28);
  pFVar8->TotalNumAttributes = *(int *)((longlong)param_1 + 0x2c);
  pFVar8->TotalNumNamedAttributes = *(int *)((longlong)param_1 + 0x30);
  dVar5 = *(double *)((longlong)param_1 + 0x40);
  (pFVar8->CellSize).field0_0x0._s_0.X = *(double *)((longlong)param_1 + 0x38);
  (pFVar8->CellSize).field0_0x0._s_0.Y = dVar5;
  (pFVar8->CellSize).field0_0x0._s_0.Z = *(double *)((longlong)param_1 + 0x48);
  FVar9 = (pFVar8->Buffers).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                )0x0) {
    FVar9 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
             )&pFVar8->Buffers;
  }
  DestructItems<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int>
            ((TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_> *)FVar9,
             (pFVar8->Buffers).ArrayNum);
  piVar1 = &(pFVar8->Buffers).ArrayMax;
  (pFVar8->Buffers).ArrayNum = 0;
  if (*piVar1 != 0) {
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>_>
              (8,8,0,&(pFVar8->Buffers).AllocatorInstance,0,piVar1);
  }
  pFVar8->CurrentData = (FNiagaraPooledRWTexture *)0x0;
  pFVar8->DestinationData = (FNiagaraPooledRWTexture *)0x0;
  (pFVar8->PerAttributeData).NumBytes = 0;
  this = (pFVar8->PerAttributeData).Buffer.Reference;
  if (this != (FRHIBuffer *)0x0) {
    (pFVar8->PerAttributeData).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this);
  }
  this_00 = (pFVar8->PerAttributeData).SRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (pFVar8->PerAttributeData).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// Call @ 149171370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIExportProxy::PostStage'::__l5::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FNDIExportProxy::PostStage'::__l5::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 1491713a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDI_Landscape_SharedResource::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (**(code **)(**(longlong **)param_1 + 0x20))();
  puVar1 = *(undefined8 **)param_1;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) &&
     (param_2->field_0x64 == '\0')) {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x20,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar2;
    *(undefined8 **)&param_2->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &TRHILambdaCommand<FRHICommandListImmediate,``FNDI_Landscape_SharedResource::Release'::`5'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = L"TRHILambdaCommand";
    puVar2[2] = puVar1;
  }
  else if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014916d9ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Call @ 1491713b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITexture *pFVar1;
  FRHITexture *this;
  bool bVar2;
  FNDIIntRenderTarget2DInstanceData_RenderThread *pFVar3;
  longlong lVar4;
  longlong lStackX_8;
  
  pFVar3 = TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIIntRenderTarget2DInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if ((pFVar3 == (FNDIIntRenderTarget2DInstanceData_RenderThread *)0x0) &&
     (lStackX_8 = (longlong)param_1 + 8,
     bVar2 = ``UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::
             <lambda_1>::operator()'::__l2::<lambda_1>::operator()(&lStackX_8), !bVar2)) {
    return;
  }
  (pFVar3->Size).field0_0x0 = *(TIntVector2<int>_u_0 *)((longlong)param_1 + 0x10);
  pFVar1 = (pFVar3->TextureRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (pFVar3->TextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  if ((*(longlong **)((longlong)param_1 + 0x60) != (longlong *)0x0) &&
     (lVar4 = (**(code **)(**(longlong **)((longlong)param_1 + 0x60) + 0xa0))(), lVar4 != 0)) {
    pFVar1 = *(FRHITexture **)(lVar4 + 0x20);
    this = (pFVar3->TextureRHI).Reference;
    if (this != pFVar1) {
      (pFVar3->TextureRHI).Reference = pFVar1;
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar1);
      }
      if (this != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this);
      }
    }
  }
  return;
}

// Call @ 1491713c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceExport::PerInstanceTick'::__l20::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  UObject *apUStackX_8 [4];
  
  lVar5 = *(longlong *)param_1;
  uVar1 = *(ulonglong *)((longlong)param_1 + 8);
  if (*(int *)(lVar5 + 0x18) != *(int *)(lVar5 + 0x44)) {
    lVar6 = *(longlong *)(lVar5 + 0x50);
    if (*(longlong *)(lVar5 + 0x50) == 0) {
      lVar6 = lVar5 + 0x48;
    }
    iVar4 = *(int *)(lVar6 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                             (ulonglong)(*(int *)(lVar5 + 0x58) - 1)) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = *(longlong *)(lVar5 + 0x10) + (longlong)iVar4 * 0x48;
        if (*(ulonglong *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar4 * 0x48) == uVar1) {
          lVar5 = lVar6 + 8;
          if (lVar6 == 0) {
            lVar5 = 0;
          }
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0xc) = *(undefined8 *)((longlong)param_1 + 0x10);
            apUStackX_8[0] = *(UObject **)((longlong)param_1 + 0x18);
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               (apUStackX_8[0] != (UObject *)0x0)) {
              GC::MarkAsReachable(apUStackX_8[0]);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar5 + 0x14),(FObjectPtr)apUStackX_8);
            return;
          }
          break;
        }
        iVar4 = *(int *)(lVar6 + 0x40);
      } while (iVar4 != -1);
    }
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1172611288254119684>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceExport.cpp"
                     ,0xfc,"InstanceData != nullptr");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// Call @ 1491713d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  ulonglong *puStackX_18;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(ulonglong *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar6 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar6 = lVar1 + 0x48;
    }
    iVar5 = *(int *)(lVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0xd0 + *(longlong *)(lVar1 + 0x10)) == uVar2) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollectionReader.cpp"
                             ,0x7e,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0xd0 + 200 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  lVar1 = *(longlong *)param_1;
  puStackX_18 = (ulonglong *)((longlong)param_1 + 8);
  TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10),&TStackX_8,(bool *)&puStackX_18);
  *(undefined8 *)((longlong)(int)TStackX_8.Key * 0xd0 + 0xc0 + *(longlong *)(lVar1 + 0x10)) =
       *(undefined8 *)((longlong)param_1 + 0x10);
  return;
}

// Call @ 1491713e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  ulonglong *puStackX_18;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(ulonglong *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar6 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar6 = lVar1 + 0x48;
    }
    iVar5 = *(int *)(lVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x120 + *(longlong *)(lVar1 + 0x10)) == uVar2) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollectionReader.cpp"
                             ,0x81,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x120 + 0x118 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  lVar1 = *(longlong *)param_1;
  puStackX_18 = (ulonglong *)((longlong)param_1 + 8);
  TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10),&TStackX_8,(bool *)&puStackX_18);
  *(undefined8 *)((longlong)(int)TStackX_8.Key * 0x120 + 0x110 + *(longlong *)(lVar1 + 0x10)) =
       *(undefined8 *)((longlong)param_1 + 0x10);
  return;
}

// Call @ 1491713f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l100::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  ulonglong *apuStackX_18 [2];
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(ulonglong *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar6 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar6 = lVar1 + 0x48;
    }
    iVar5 = *(int *)(lVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x120 + *(longlong *)(lVar1 + 0x10)) == uVar2) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                             ,0xcad,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x120 + 0x118 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  apuStackX_18[0] = (ulonglong *)((longlong)param_1 + 8);
  TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(*(longlong *)param_1 + 0x10),&TStackX_8,(bool *)apuStackX_18);
  return;
}

// Call @ 149171400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  ulonglong uVar4;
  FRHIResource *this;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FNiagaraTypeDefinition *this_00;
  UClass *pUVar9;
  UStruct *pUVar10;
  UScriptStruct *pUVar11;
  FRHIResource *this_01;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  longlong lStackX_18;
  undefined4 auStack_58 [2];
  ulonglong *apuStack_50 [3];
  
  lVar12 = *(longlong *)param_1;
  uVar4 = *(ulonglong *)((longlong)param_1 + 0x10);
  if (*(int *)(lVar12 + 0x18) != *(int *)(lVar12 + 0x44)) {
    lVar14 = *(longlong *)(lVar12 + 0x50);
    if (*(longlong *)(lVar12 + 0x50) == 0) {
      lVar14 = lVar12 + 0x48;
    }
    iVar8 = *(int *)(lVar14 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)(*(int *)(lVar12 + 0x58) - 1)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar8 * 0x120 + *(longlong *)(lVar12 + 0x10)) == uVar4) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                             ,0xd26,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x120 + 0x118 + *(longlong *)(lVar12 + 0x10));
      } while (iVar8 != -1);
    }
  }
  lVar12 = *(longlong *)param_1;
  apuStack_50[0] = (ulonglong *)((longlong)param_1 + 0x10);
  TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar12 + 0x10),&TStackX_8,(bool *)apuStack_50);
  lVar12 = (longlong)(int)TStackX_8.Key * 0x120 + *(longlong *)(lVar12 + 0x10);
  *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(*(longlong *)param_1 + 8);
  *(undefined1 *)(lVar12 + 0x10) = *(undefined1 *)((longlong)param_1 + 0x18);
  *(undefined8 *)(lVar12 + 0x14) = *(undefined8 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(lVar12 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x24);
  *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)((longlong)param_1 + 0x30);
  *(undefined4 *)(lVar12 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x34);
  *(undefined4 *)(lVar12 + 0x30) = *(undefined4 *)((longlong)param_1 + 0x38);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x48);
  *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)(lVar12 + 0x40) = uVar6;
  *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)((longlong)param_1 + 0x50);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x60);
  *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)((longlong)param_1 + 0x58);
  *(undefined8 *)(lVar12 + 0x58) = uVar6;
  *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)((longlong)param_1 + 0x68);
  if ((undefined1 *)((longlong)param_1 + 0x70) != (undefined1 *)(lVar12 + 0x68)) {
    if (*(char *)((longlong)param_1 + 0x71) == '\0') {
      if (*(char *)(lVar12 + 0x69) != '\0') {
        *(undefined1 *)(lVar12 + 0x69) = 0;
      }
    }
    else {
      *(undefined1 *)(lVar12 + 0x68) = *(undefined1 *)((longlong)param_1 + 0x70);
      *(undefined1 *)(lVar12 + 0x69) = 1;
    }
  }
  *(undefined1 *)(lVar12 + 0x6a) = *(undefined1 *)((longlong)param_1 + 0x72);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(lVar12 + 0xa0),
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 200));
  uVar15 = *(uint *)((longlong)param_1 + 0xc0);
  pFVar2 = (ForAnyElementType *)(lVar12 + 0x80);
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (*(int *)(lVar12 + 0x8c) < (int)uVar15) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar15,pFVar2,*(int *)(lVar12 + 0x88),(int *)(lVar12 + 0x8c));
  }
  iVar8 = *(int *)((longlong)param_1 + 0xc0);
  uVar15 = 0;
  if (0 < iVar8) {
    pFVar3 = (ForAnyElementType *)(lVar12 + 0x90);
    lStackX_18 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar15 < iVar8) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)(lVar12 + 0x88);
      lVar14 = *(longlong *)((longlong)param_1 + 0xb8);
      if (iVar8 == *(int *)(lVar12 + 0x8c)) {
        iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar2,(int *)(lVar12 + 0x8c));
        *(int *)(lVar12 + 0x88) = iVar8;
      }
      *(int *)(lVar12 + 0x88) = iVar8 + 1;
      *(undefined8 *)(pFVar2->Data + (longlong)iVar8 * 8) = *(undefined8 *)(lStackX_18 + lVar14);
      uVar13 = 0;
      if ((int)uVar15 < *(int *)((longlong)param_1 + 0xc0)) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = FNiagaraTypeDefinitionHandle::Resolve
                          ((FNiagaraTypeDefinitionHandle *)
                           (lStackX_18 + 8 + *(longlong *)((longlong)param_1 + 0xb8)));
      uVar13 = (uint)(ushort)this_00->Size;
      if (this_00->Size == 0xffff) {
        if (((this_00->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) ||
           (pUVar9 = FNiagaraTypeDefinition::GetClass(this_00), pUVar9 != (UClass *)0x0)) {
          this_00->Size = 0;
          uVar13 = 0;
        }
        else {
          pUVar10 = FNiagaraTypeDefinition::GetStruct(this_00);
          pUVar11 = CastChecked<UScriptStruct,UStruct>(pUVar10);
          iVar8 = (int)*(short *)((longlong)&pUVar11->_padding_ + 4);
          uVar13 = iVar8 + -1 + (int)pUVar11->_padding_ & -iVar8;
          if ((0x7fff < (int)uVar13) &&
             (bVar7 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_2309485622517038180>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                                 ,0x39c,"StructSize <= TNumericLimits<int16>::Max()"), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_00->Size = (short)uVar13;
        }
      }
      piVar1 = (int *)(lVar12 + 0x9c);
      auStack_58[0] = (undefined4)((ulonglong)(longlong)(short)uVar13 >> 2);
      if (((pFVar3->Data <= (FScriptContainerElement *)auStack_58) &&
          ((FScriptContainerElement *)auStack_58 < pFVar3->Data + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)(lVar12 + 0x98);
      if (iVar8 == *piVar1) {
        iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar3,piVar1);
      }
      lStackX_18 = lStackX_18 + 0xc;
      uVar15 = uVar15 + 1;
      *(int *)(lVar12 + 0x98) = iVar8 + 1;
      *(undefined4 *)(pFVar3->Data + (longlong)iVar8 * 4) = auStack_58[0];
      iVar8 = *(int *)((longlong)param_1 + 0xc0);
    } while ((int)uVar15 < iVar8);
  }
  if ((*(longlong *)((longlong)param_1 + 8) == 0) ||
     (this = *(FRHIResource **)(*(longlong *)((longlong)param_1 + 8) + 0x20),
     this == (FRHIResource *)0x0)) {
    this_01 = *(FRHIResource **)(lVar12 + 0xf8);
    if (this_01 == (FRHIResource *)0x0) {
      return;
    }
    *(undefined8 *)(lVar12 + 0xf8) = 0;
  }
  else {
    this_01 = *(FRHIResource **)(lVar12 + 0xf8);
    if (this_01 == this) {
      return;
    }
    *(FRHIResource **)(lVar12 + 0xf8) = this;
    FRHIResource::AddRef(this);
    if (this_01 == (FRHIResource *)0x0) {
      return;
    }
  }
  FRHIResource::Release(this_01);
  return;
}

// Call @ 149171410

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::__l2::<lambda_2>,void,FRHITexture_*_&,FRHISamplerState_*_&>
::Call(void *param_1,FRHITexture **param_2,FRHISamplerState **param_3)

{
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if ((pFVar1 != (FGrid2DCollectionRWInstanceData_RenderThread *)0x0) &&
     (pFVar1->CurrentData != (FNiagaraPooledRWTexture *)0x0)) {
    *param_2 = (((pFVar1->CurrentData->Texture).Reference)->RenderTargetItem).TargetableTexture.
               Reference;
    *param_3 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  }
  return;
}

// Call @ 149171470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceLandscape::DrawDebugHud'::__l29::<lambda_2>,bool,ALandscapeProxy_*>
::Call(void *param_1,ALandscapeProxy **param_2)

{
  bool bVar1;
  
  bVar1 = `UNiagaraDataInterfaceLandscape::DrawDebugHud'::__l29::<lambda_2>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 1491b6610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1491b6650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 local_res8;
  
  lVar1 = *(longlong *)param_1;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceParticleRead.cpp"
                       ,0x108,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8 = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8 >> 0x20) * 0x17 + (int)local_res8,&local_res8);
  }
  return;
}

// Call @ 1491b66d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1491b6710

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIResource *this;
  FRHITexture *this_00;
  longlong lVar1;
  FRenderTarget2DRWInstanceData_RenderThread *this_01;
  ulong64 uStackX_8;
  
  this_01 = TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
                    *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if (this_01 != (FRenderTarget2DRWInstanceData_RenderThread *)0x0) {
    this = (FRHIResource *)(this_01->SamplerStateRHI).Reference;
    if (this != (FRHIResource *)0x0) {
      (this_01->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(this);
    }
    this_00 = (this_01->TextureRHI).Reference;
    if (this_00 != (FRHITexture *)0x0) {
      (this_01->TextureRHI).Reference = (FRHITexture *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    FRenderTarget2DRWInstanceData_RenderThread::UpdateMemoryStats(this_01);
  }
  lVar1 = *(longlong *)param_1;
  uStackX_8 = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(uStackX_8 >> 0x20) * 0x17 + (int)uStackX_8,&uStackX_8);
  }
  return;
}

// Call @ 1491b6720

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIResource *this;
  IPooledRenderTarget *pIVar1;
  longlong lVar2;
  FRenderTarget2DArrayRWInstanceData_RenderThread *this_00;
  ulong64 uStackX_8;
  
  this_00 = TMapBase<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,0>_>
                    *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if (this_00 != (FRenderTarget2DArrayRWInstanceData_RenderThread *)0x0) {
    this = (FRHIResource *)(this_00->SamplerStateRHI).Reference;
    if (this != (FRHIResource *)0x0) {
      (this_00->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(this);
    }
    pIVar1 = (this_00->RenderTarget).Reference;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (this_00->RenderTarget).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
    FRenderTarget2DArrayRWInstanceData_RenderThread::UpdateMemoryStats(this_00);
  }
  lVar2 = *(longlong *)param_1;
  uStackX_8 = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    TSet<TTuple<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar2 + 0x10),(int)(uStackX_8 >> 0x20) * 0x17 + (int)uStackX_8,&uStackX_8);
  }
  return;
}

// Call @ 1491b6730

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIResource *this;
  IPooledRenderTarget *pIVar1;
  longlong lVar2;
  FRenderTargetCubeRWInstanceData_RenderThread *this_00;
  ulong64 uStackX_8;
  
  this_00 = TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
                    *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if (this_00 != (FRenderTargetCubeRWInstanceData_RenderThread *)0x0) {
    this = (FRHIResource *)(this_00->SamplerStateRHI).Reference;
    if (this != (FRHIResource *)0x0) {
      (this_00->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(this);
    }
    pIVar1 = (this_00->RenderTarget).Reference;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (this_00->RenderTarget).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
    FRenderTargetCubeRWInstanceData_RenderThread::UpdateMemoryStats(this_00);
  }
  lVar2 = *(longlong *)param_1;
  uStackX_8 = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    TSet<TTuple<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar2 + 0x10),(int)(uStackX_8 >> 0x20) * 0x17 + (int)uStackX_8,&uStackX_8);
  }
  return;
}

// Call @ 1491b6740

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIResource *this;
  IPooledRenderTarget *pIVar1;
  longlong lVar2;
  FRenderTargetVolumeRWInstanceData_RenderThread *this_00;
  ulong64 uStackX_8;
  
  this_00 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                    *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if (this_00 != (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0) {
    this = (FRHIResource *)(this_00->SamplerStateRHI).Reference;
    if (this != (FRHIResource *)0x0) {
      (this_00->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(this);
    }
    pIVar1 = (this_00->RenderTarget).Reference;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (this_00->RenderTarget).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
    FRenderTargetVolumeRWInstanceData_RenderThread::UpdateMemoryStats(this_00);
  }
  lVar2 = *(longlong *)param_1;
  uStackX_8 = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    TSet<TTuple<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar2 + 0x10),(int)(uStackX_8 >> 0x20) * 0x17 + (int)uStackX_8,&uStackX_8);
  }
  return;
}

// Call @ 1491b6750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 local_res8;
  
  lVar1 = *(longlong *)param_1;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRigidMeshCollisionQuery.cpp"
                       ,0x40c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8 = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8 >> 0x20) * 0x17 + (int)local_res8,&local_res8);
  }
  return;
}

// Call @ 1491b67d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  ulonglong *puStackX_18;
  
  lVar6 = *(longlong *)param_1;
  uVar1 = *(ulonglong *)((longlong)param_1 + 0x30);
  if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
    lVar7 = *(longlong *)(lVar6 + 0x50);
    if (*(longlong *)(lVar6 + 0x50) == 0) {
      lVar7 = lVar6 + 0x48;
    }
    iVar5 = *(int *)(lVar7 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                             (ulonglong)(*(int *)(lVar6 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0xa8 + *(longlong *)(lVar6 + 0x10)) == uVar1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceNeighborGrid3D.cpp"
                             ,0x24d,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0xa8 + 0xa0 + *(longlong *)(lVar6 + 0x10));
      } while (iVar5 != -1);
    }
  }
  lVar6 = *(longlong *)param_1;
  puStackX_18 = (ulonglong *)((longlong)param_1 + 0x30);
  TSet<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>,FDefaultSetAllocator>
              *)(lVar6 + 0x10),&TStackX_8,(bool *)&puStackX_18);
  lVar6 = (longlong)(int)TStackX_8.Key * 0xa8 + *(longlong *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0xc) = *(undefined8 *)((longlong)param_1 + 8);
  *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x10);
  *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)((longlong)param_1 + 0x18);
  *(undefined8 *)(lVar6 + 0x28) = uVar3;
  *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined1 *)(lVar6 + 0x38) = 1;
  return;
}

// Call @ 1491b67e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  longlong lVar9;
  longlong lVar10;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  ulonglong *puStackX_18;
  FString FStack_28;
  
  lVar9 = *(longlong *)param_1;
  pFVar8 = ::FString::FString(&FStack_28,(FString *)((longlong)param_1 + 0x18));
  cVar1 = *(char *)((longlong)param_1 + 0x10);
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceParticleRead.cpp"
                         ,0xff,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(ulonglong *)((longlong)param_1 + 8);
  if (*(int *)(lVar9 + 0x18) != *(int *)(lVar9 + 0x44)) {
    lVar10 = *(longlong *)(lVar9 + 0x50);
    if (*(longlong *)(lVar9 + 0x50) == 0) {
      lVar10 = lVar9 + 0x48;
    }
    iVar7 = *(int *)(lVar10 + ((ulonglong)(*(int *)(lVar9 + 0x58) - 1) &
                              (uVar3 >> 0x20) * 0x17 + uVar3) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar7 * 0x60 + *(longlong *)(lVar9 + 0x10)) == uVar3) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!SystemsRenderData.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceParticleRead.cpp"
                             ,0x100,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x60 + 0x58 + *(longlong *)(lVar9 + 0x10));
      } while (iVar7 != -1);
    }
  }
  puStackX_18 = (ulonglong *)((longlong)param_1 + 8);
  TSet<TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>,FDefaultSetAllocator>
              *)(lVar9 + 0x10),&TStackX_8,(bool *)&puStackX_18);
  lVar9 = (longlong)(int)TStackX_8.Key * 0x60 + *(longlong *)(lVar9 + 0x10);
  *(uint *)(lVar9 + 0x48) = (uint)(cVar1 != '\0');
  iVar2 = (pFVar8->Data).ArrayNum;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange
            ((FString *)(lVar9 + 0x10),(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar7);
  pFVar4 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// Call @ 1491b67f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  ulonglong *puStackX_18;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(ulonglong *)((longlong)param_1 + 0x20);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar6 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar6 = lVar1 + 0x48;
    }
    iVar5 = *(int *)(lVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x80 + *(longlong *)(lVar1 + 0x10)) == uVar2) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRasterizationGrid3D.cpp"
                             ,0x38e,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x80 + 0x78 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  lVar1 = *(longlong *)param_1;
  puStackX_18 = (ulonglong *)((longlong)param_1 + 0x20);
  TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10),&TStackX_8,(bool *)&puStackX_18);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  lVar6 = (longlong)(int)TStackX_8.Key * 0x80;
  *(undefined1 *)(lVar6 + 8 + lVar1) = *(undefined1 *)((longlong)param_1 + 0x28);
  *(undefined4 *)(lVar6 + 0xc + lVar1) = *(undefined4 *)((longlong)param_1 + 8);
  *(undefined8 *)(lVar6 + 0x10 + lVar1) = *(undefined8 *)((longlong)param_1 + 0xc);
  *(undefined4 *)(lVar6 + 0x18 + lVar1) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined8 *)(lVar6 + 0x1c + lVar1) = *(undefined8 *)((longlong)param_1 + 0x3c);
  *(undefined4 *)(lVar6 + 0x24 + lVar1) = *(undefined4 *)((longlong)param_1 + 0x44);
  *(undefined4 *)(lVar6 + 0x28 + lVar1) = *(undefined4 *)((longlong)param_1 + 0x18);
  *(undefined4 *)(lVar6 + 0x2c + lVar1) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined1 *)(lVar6 + 0x30 + lVar1) = 1;
  return;
}

// Call @ 1491b6800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  FRHIResource *pFVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStackX_8 [8];
  
  *(undefined1 *)(*(longlong *)param_1 + 0x10) = *(undefined1 *)((longlong)param_1 + 0x18);
  *(undefined8 *)(*(longlong *)param_1 + 0x14) = *(undefined8 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(*(longlong *)param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x10);
  lVar3 = *(longlong *)param_1;
  *(undefined4 *)(lVar3 + 0x30) = 0;
  pFVar4 = *(FRHIResource **)(lVar3 + 0x20);
  if (pFVar4 != (FRHIResource *)0x0) {
    *(undefined8 *)(lVar3 + 0x20) = 0;
    FRHIResource::Release(pFVar4);
  }
  pFVar4 = *(FRHIResource **)(lVar3 + 0x28);
  if (pFVar4 != (FRHIResource *)0x0) {
    *(undefined8 *)(lVar3 + 0x28) = 0;
    FRHIResource::Release(pFVar4);
  }
  if (*(int *)(*(longlong *)param_1 + 0x1c) != 0) {
    FReadBuffer::Initialize
              ((FReadBuffer *)(*(longlong *)param_1 + 0x20),(FRHICommandListBase *)param_2,
               L"UNiagaraDataInterfaceMeshRendererInfo",4,*(int *)((longlong)param_1 + 0x10) * 6,
               PF_R32_FLOAT,Static,(FResourceArrayUploadInterface *)0x0);
    puVar5 = FRHICommandListBase::LockBuffer
                       ((FRHICommandListBase *)param_2,*(FRHIBuffer **)(*(longlong *)param_1 + 0x20)
                        ,0,*(uint *)(*(longlong *)param_1 + 0x30),RLM_WriteOnly);
    iVar2 = *(int *)((longlong)param_1 + 0x10);
    puVar6 = *(undefined4 **)((longlong)param_1 + 8);
    puVar1 = puVar6 + (longlong)iVar2 * 6;
    while( true ) {
      if (*(int *)((longlong)param_1 + 0x10) != iVar2) {
        `TCheckedPointerIterator<UNiagaraDataInterfaceMeshRendererInfo::FMeshData_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(auStackX_8);
      }
      if (puVar6 == puVar1) break;
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      puVar5[2] = puVar6[2];
      puVar5[3] = puVar6[3];
      puVar5[4] = puVar6[4];
      puVar5[5] = puVar6[5];
      puVar5 = puVar5 + 6;
      puVar6 = puVar6 + 6;
    }
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_2,*(FRHIBuffer **)(*(longlong *)param_1 + 0x20));
  }
  return;
}

// Call @ 1491b6810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  ulonglong *puStackX_18;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(ulonglong *)((longlong)param_1 + 0x20);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar6 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar6 = lVar1 + 0x48;
    }
    iVar5 = *(int *)(lVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0xa8 + *(longlong *)(lVar1 + 0x10)) == uVar2)
        goto LAB_1491b1751;
        iVar5 = *(int *)((longlong)iVar5 * 0xa8 + 0xa0 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceNeighborGrid3D.cpp"
                     ,0x299,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1491b1751:
  lVar1 = *(longlong *)param_1;
  puStackX_18 = (ulonglong *)((longlong)param_1 + 0x20);
  TSet<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10),&TStackX_8,(bool *)&puStackX_18);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  lVar6 = (longlong)(int)TStackX_8.Key * 0xa8;
  *(undefined8 *)(lVar6 + 0xc + lVar1) = *(undefined8 *)((longlong)param_1 + 8);
  *(undefined4 *)(lVar6 + 0x14 + lVar1) = *(undefined4 *)((longlong)param_1 + 0x10);
  *(undefined4 *)(lVar6 + 0x1c + lVar1) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)(lVar6 + 0x18 + lVar1) = *(undefined4 *)((longlong)param_1 + 0x18);
  *(undefined1 *)(lVar6 + 0x38 + lVar1) = 1;
  return;
}

// Call @ 1491b6820

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  FRHIBuffer *this;
  FRHIShaderResourceView *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  RasterizationGrid3DRWInstanceData *pRVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(ulonglong *)((longlong)param_1 + 0x20);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar7 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar7 = lVar1 + 0x48;
    }
    iVar5 = *(int *)(lVar7 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x80 + *(longlong *)(lVar1 + 0x10)) == uVar2)
        goto LAB_1491b184c;
        iVar5 = *(int *)((longlong)iVar5 * 0x80 + 0x78 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("RT_Proxy->SystemInstancesToProxyData.Contains(InstanceID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRasterizationGrid3D.cpp"
                     ,0x40c,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1491b184c:
  pRVar6 = TMapBase<unsigned___int64,RasterizationGrid3DRWInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>_>
           ::Find((TMapBase<unsigned___int64,RasterizationGrid3DRWInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>_>
                   *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 0x20));
  *(undefined8 *)&(pRVar6->NumTiles).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x3c);
  (pRVar6->NumTiles).field0_0x0._s_0.Z = *(int *)((longlong)param_1 + 0x44);
  *(undefined8 *)&(pRVar6->NumCells).field0_0x0 = *(undefined8 *)((longlong)param_1 + 8);
  (pRVar6->NumCells).field0_0x0._s_0.Z = *(int *)((longlong)param_1 + 0x10);
  pRVar6->Precision = *(float *)((longlong)param_1 + 0x14);
  pRVar6->TotalNumAttributes = *(int *)((longlong)param_1 + 0x2c);
  iVar5 = *(int *)((longlong)param_1 + 0x18);
  (pRVar6->PerAttributeData).NumBytes = 0;
  pRVar6->ResetValue = iVar5;
  pRVar6->NeedsRealloc = true;
  this = (pRVar6->PerAttributeData).Buffer.Reference;
  if (this != (FRHIBuffer *)0x0) {
    (pRVar6->PerAttributeData).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this);
  }
  this_00 = (pRVar6->PerAttributeData).SRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (pRVar6->PerAttributeData).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// Call @ 1491b6830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIRigidMeshCollisionData::ReleaseBuffers'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(**(longlong **)param_1 + 0x20))();
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491b6857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Call @ 1491b6870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIMIDPrivate::VMSetScalarParameter'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  bool bVar1;
  UMaterialInstanceDynamic *this;
  
  bVar1 = FWeakObjectPtr::IsValid(param_1);
  if (bVar1) {
    this = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(param_1);
    if (this != (UMaterialInstanceDynamic *)0x0) {
      UMaterialInstanceDynamic::SetScalarParameterValue
                (this,*(FName *)((longlong)param_1 + 8),*(float *)((longlong)param_1 + 0x10));
      return;
    }
  }
  return;
}

// Call @ 1491b68c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIMPCPrivate::VMSetScalarParameter'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  UMaterialParameterCollectionInstance *this;
  
  this = (UMaterialParameterCollectionInstance *)FWeakObjectPtr::Get(param_1);
  if (this != (UMaterialParameterCollectionInstance *)0x0) {
    UMaterialParameterCollectionInstance::SetScalarParameterValue
              (this,*(FName *)((longlong)param_1 + 8),*(float *)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Call @ 1491b6900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIMIDPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  bool bVar1;
  UMaterialInstanceDynamic *this;
  FLinearColor *pFVar2;
  FLinearColor_u_0 local_28;
  FLinearColor local_18;
  
  bVar1 = FWeakObjectPtr::IsValid(param_1);
  if ((bVar1) &&
     (this = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(param_1),
     this != (UMaterialInstanceDynamic *)0x0)) {
    pFVar2 = FLinearColor::FLinearColor(&local_18,(TVector4<float> *)((longlong)param_1 + 0x10));
    local_28._0_8_ = *(undefined8 *)&pFVar2->field0_0x0;
    local_28._8_8_ = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
    UMaterialInstanceDynamic::SetVectorParameterValue
              (this,*(FName *)((longlong)param_1 + 8),(FLinearColor *)&local_28._s_0);
  }
  return;
}

// Call @ 1491b6960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDIMPCPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  UMaterialParameterCollectionInstance *this;
  FLinearColor local_18;
  
  this = (UMaterialParameterCollectionInstance *)FWeakObjectPtr::Get(param_1);
  if (this != (UMaterialParameterCollectionInstance *)0x0) {
    FLinearColor::FLinearColor(&local_18,(TVector4<float> *)((longlong)param_1 + 0x10));
    UMaterialParameterCollectionInstance::SetVectorParameterValue
              (this,*(FName *)((longlong)param_1 + 8),&local_18);
  }
  return;
}

// Call @ 1491b69b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::__l9::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITexture *pFVar1;
  FRenderTarget2DRWInstanceData_RenderThread *pFVar2;
  FLLMScope aFStackX_8 [5];
  FMemScope FStackX_18;
  FMemScope FStackX_20;
  FMemScope FStack_78;
  uchar *apuStack_70 [2];
  int iStack_60;
  FRHITexture *pFStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  
  pFVar2 = TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if (pFVar2 != (FRenderTarget2DRWInstanceData_RenderThread *)0x0) {
    pFVar1 = (pFVar2->TextureRHI).Reference;
    FLLMScope::FLLMScope((FLLMScope *)&FStackX_18,Textures,false,None,Default,true);
    FMemScope::FMemScope(&FStack_78,Textures,true);
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 1;
    uStack_3c = 0x101;
    pFStack_58 = pFVar1;
    FLLMScope::FLLMScope(aFStackX_8,Textures,false,None,Default,true);
    FMemScope::FMemScope(&FStackX_20,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,apuStack_70,param_2,&pFStack_58);
    FMemScope::~FMemScope(&FStackX_20);
    FLLMScope::~FLLMScope(aFStackX_8);
    FMemScope::~FMemScope(&FStack_78);
    FLLMScope::~FLLMScope((FLLMScope *)&FStackX_18);
    UNDIRenderTargetSimCacheData::GetPixelData
              (*(UNDIRenderTargetSimCacheData **)((longlong)param_1 + 0x18),
               *(int *)((longlong)param_1 + 0x20),apuStack_70[0],iStack_60,0);
    pFStack_58 = (pFVar2->TextureRHI).Reference;
    uStack_50 = 0;
    uStack_40 = 3;
    uStack_48 = 0;
    uStack_3c = 0x101;
    FLLMScope::FLLMScope(aFStackX_8,Textures,false,None,Default,true);
    FMemScope::FMemScope(&FStackX_18,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,param_2,&pFStack_58);
    FMemScope::~FMemScope(&FStackX_18);
    FLLMScope::~FLLMScope(aFStackX_8);
  }
  return;
}

// Call @ 1491b69c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate'::__l27::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  FRHIResource *pFVar2;
  IPooledRenderTarget *pIVar3;
  longlong *plVar4;
  FRHIResource *this;
  FRenderTarget2DArrayRWInstanceData_RenderThread *this_00;
  longlong lVar5;
  TRefCountPtr<IPooledRenderTarget> TVar6;
  uint uVar7;
  longlong *plStackX_8;
  
  this_00 = TMapBase<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread,0>_>
                        *)(*(longlong *)param_1 + 0x10),
                       (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                       (int)*(undefined8 *)((longlong)param_1 + 8),
                       (ulong64 *)((longlong)param_1 + 8));
  *(undefined8 *)&(this_00->Size).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x10);
  (this_00->Size).field0_0x0._s_0.Z = *(int *)((longlong)param_1 + 0x18);
  this_00->MipLevels = 1;
  pFVar2 = (FRHIResource *)(this_00->SamplerStateRHI).Reference;
  if (pFVar2 != (FRHIResource *)0x0) {
    (this_00->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(pFVar2);
  }
  pIVar3 = (this_00->RenderTarget).Reference;
  pTVar1 = &this_00->RenderTarget;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  if (*(longlong *)((longlong)param_1 + 0x68) != 0) {
    plVar4 = *(longlong **)(*(longlong *)((longlong)param_1 + 0x68) + 0x20);
    uVar7 = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x20))();
      uVar7 = (uint)*(byte *)(lVar5 + 0x30);
    }
    this_00->MipLevels = uVar7;
    lVar5 = (**(code **)(**(longlong **)((longlong)param_1 + 0x68) + 0xa8))();
    if (lVar5 != 0) {
      pFVar2 = *(FRHIResource **)(lVar5 + 0x28);
      this = (FRHIResource *)(this_00->SamplerStateRHI).Reference;
      if (this != pFVar2) {
        (this_00->SamplerStateRHI).Reference = (FRHISamplerState *)pFVar2;
        if (pFVar2 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(pFVar2);
        }
        if (this != (FRHIResource *)0x0) {
          FRHIResource::Release(this);
        }
      }
      TVar6 = CreateRenderTarget((FRHITexture *)&plStackX_8,*(wchar_t **)(lVar5 + 0x20));
      if ((IPooledRenderTarget *)pTVar1 != TVar6.Reference) {
        pIVar3 = pTVar1->Reference;
        pTVar1->Reference = (IPooledRenderTarget *)(TVar6.Reference)->_padding_;
        (TVar6.Reference)->_padding_ = 0;
        if (pIVar3 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar3->_padding_ + 0x38))();
        }
      }
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
  }
  FRenderTarget2DArrayRWInstanceData_RenderThread::UpdateMemoryStats(this_00);
  return;
}

// Call @ 1491b69d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::__l27::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  FRHIResource *pFVar2;
  IPooledRenderTarget *pIVar3;
  longlong *plVar4;
  FRHIResource *this;
  FRenderTargetCubeRWInstanceData_RenderThread *this_00;
  longlong lVar5;
  TRefCountPtr<IPooledRenderTarget> TVar6;
  uint uVar7;
  longlong *plStackX_8;
  
  this_00 = TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
                        *)(*(longlong *)param_1 + 0x10),
                       (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                       (int)*(undefined8 *)((longlong)param_1 + 8),
                       (ulong64 *)((longlong)param_1 + 8));
  this_00->Size = *(int *)((longlong)param_1 + 0x10);
  this_00->MipLevels = 1;
  pFVar2 = (FRHIResource *)(this_00->SamplerStateRHI).Reference;
  if (pFVar2 != (FRHIResource *)0x0) {
    (this_00->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(pFVar2);
  }
  pIVar3 = (this_00->RenderTarget).Reference;
  pTVar1 = &this_00->RenderTarget;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
    plVar4 = *(longlong **)(*(longlong *)((longlong)param_1 + 0x60) + 0x20);
    uVar7 = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x20))();
      uVar7 = (uint)*(byte *)(lVar5 + 0x30);
    }
    this_00->MipLevels = uVar7;
    lVar5 = (**(code **)(**(longlong **)((longlong)param_1 + 0x60) + 0xb8))();
    if (lVar5 != 0) {
      pFVar2 = *(FRHIResource **)(lVar5 + 0x28);
      this = (FRHIResource *)(this_00->SamplerStateRHI).Reference;
      if (this != pFVar2) {
        (this_00->SamplerStateRHI).Reference = (FRHISamplerState *)pFVar2;
        if (pFVar2 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(pFVar2);
        }
        if (this != (FRHIResource *)0x0) {
          FRHIResource::Release(this);
        }
      }
      TVar6 = CreateRenderTarget((FRHITexture *)&plStackX_8,*(wchar_t **)(lVar5 + 0x20));
      if ((IPooledRenderTarget *)pTVar1 != TVar6.Reference) {
        pIVar3 = pTVar1->Reference;
        pTVar1->Reference = (IPooledRenderTarget *)(TVar6.Reference)->_padding_;
        (TVar6.Reference)->_padding_ = 0;
        if (pIVar3 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar3->_padding_ + 0x38))();
        }
      }
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
  }
  FRenderTargetCubeRWInstanceData_RenderThread::UpdateMemoryStats(this_00);
  return;
}

// Call @ 1491b69e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::__l27::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  FRHIResource *pFVar2;
  IPooledRenderTarget *pIVar3;
  longlong *plVar4;
  FRHIResource *this;
  FRenderTargetVolumeRWInstanceData_RenderThread *this_00;
  longlong lVar5;
  TRefCountPtr<IPooledRenderTarget> TVar6;
  uint uVar7;
  longlong *plStackX_8;
  
  this_00 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                        *)(*(longlong *)param_1 + 0x10),
                       (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                       (int)*(undefined8 *)((longlong)param_1 + 8),
                       (ulong64 *)((longlong)param_1 + 8));
  *(undefined8 *)&(this_00->Size).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x10);
  (this_00->Size).field0_0x0._s_0.Z = *(int *)((longlong)param_1 + 0x18);
  this_00->MipLevels = 1;
  pFVar2 = (FRHIResource *)(this_00->SamplerStateRHI).Reference;
  if (pFVar2 != (FRHIResource *)0x0) {
    (this_00->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(pFVar2);
  }
  pIVar3 = (this_00->RenderTarget).Reference;
  pTVar1 = &this_00->RenderTarget;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  if (*(longlong *)((longlong)param_1 + 0x68) != 0) {
    plVar4 = *(longlong **)(*(longlong *)((longlong)param_1 + 0x68) + 0x20);
    uVar7 = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x20))();
      uVar7 = (uint)*(byte *)(lVar5 + 0x30);
    }
    this_00->MipLevels = uVar7;
    lVar5 = (**(code **)(**(longlong **)((longlong)param_1 + 0x68) + 0xb0))();
    if (lVar5 != 0) {
      pFVar2 = *(FRHIResource **)(lVar5 + 0x28);
      this = (FRHIResource *)(this_00->SamplerStateRHI).Reference;
      if (this != pFVar2) {
        (this_00->SamplerStateRHI).Reference = (FRHISamplerState *)pFVar2;
        if (pFVar2 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(pFVar2);
        }
        if (this != (FRHIResource *)0x0) {
          FRHIResource::Release(this);
        }
      }
      TVar6 = CreateRenderTarget((FRHITexture *)&plStackX_8,*(wchar_t **)(lVar5 + 0x20));
      if ((IPooledRenderTarget *)pTVar1 != TVar6.Reference) {
        pIVar3 = pTVar1->Reference;
        pTVar1->Reference = (IPooledRenderTarget *)(TVar6.Reference)->_padding_;
        (TVar6.Reference)->_padding_ = 0;
        if (pIVar3 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar3->_padding_ + 0x38))();
        }
      }
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
  }
  FRenderTargetVolumeRWInstanceData_RenderThread::UpdateMemoryStats(this_00);
  return;
}

// Call @ 1491b69f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ERDGPassFlags EVar5;
  int iVar6;
  FRenderTargetVolumeRWInstanceData_RenderThread *pFVar7;
  FGlobalShaderMap *this;
  FShaderType *pFVar8;
  FName this_00;
  undefined8 *puVar9;
  FRDGTexture *pFVar10;
  FRDGTextureUAV *pFVar11;
  FRDGEventName *this_01;
  FShaderParametersMetadata *pFVar12;
  wchar_t *pwVar13;
  FRDGPass *this_02;
  FRHITexture *pFVar14;
  undefined8 *puVar15;
  FRHITexture *pFVar16;
  undefined1 auStackY_998 [32];
  undefined8 *puStack_948;
  int iStack_940;
  int iStack_93c;
  int iStack_938;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  TShaderRefBase<FShader,FShaderMapPointerTable> TStack_928;
  longlong *plStack_918;
  FShader *pFStack_910;
  FShaderMapBase *pFStack_908;
  int iStack_900;
  int iStack_8fc;
  int iStack_8f8;
  undefined4 uStack_8f4;
  FRDGEventName FStack_8f0;
  TIntVector4<unsigned_int>_u_0 TStack_8d8;
  TIntVector4<unsigned_int>_u_0 TStack_8c8;
  FRDGParameterStruct FStack_8b8;
  undefined1 auStack_8a0 [8];
  FString FStack_898;
  FRDGEventName FStack_888;
  undefined1 auStack_868 [24];
  float fStack_850;
  int iStack_84c;
  undefined4 uStack_848;
  undefined1 *puStack_844;
  undefined4 uStack_83c;
  undefined2 uStack_838;
  undefined1 uStack_836;
  undefined1 uStack_835;
  undefined2 uStack_834;
  void *pvStack_828;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined1 auStack_818 [64];
  ForAnyElementType FStack_7d8;
  int iStack_7d0;
  int aiStack_7cc [87];
  ForElementType<FRDGPass_*> FStack_670;
  uint uStack_668;
  uint auStack_664 [339];
  FRDGUserValidation FStack_118;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_998;
  puVar15 = (undefined8 *)0x0;
  if (*(FTextureRenderResources **)((longlong)param_1 + 0x20) != (FTextureRenderResources *)0x0) {
    TStack_8d8._0_8_ = 0;
    TStack_8d8._8_8_ = 0;
    TStack_8c8._0_8_ = 0;
    TStack_8c8._8_8_ = 0;
    SVT::FTextureRenderResources::GetPackedUniforms
              (*(FTextureRenderResources **)((longlong)param_1 + 0x20),
               (TIntVector4<unsigned_int> *)&TStack_8d8._s_0,
               (TIntVector4<unsigned_int> *)&TStack_8c8._s_0);
    pFVar7 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
             ::Find((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                     *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
    if (pFVar7 != (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0) {
      FStack_8f0.EventFormat = L"";
      FStack_8f0.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_8f0.FormattedEventName.Data.ArrayNum = 0;
      FStack_8f0.FormattedEventName.Data.ArrayMax = 0;
      FRDGBuilder::FRDGBuilder
                ((FRDGBuilder *)auStack_818,param_2,&FStack_8f0,None,GMaxRHIShaderPlatform);
      this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                [*(int *)((longlong)param_1 + 0x28)]);
      pFVar8 = (FShaderType *)FNiagaraCopySVTToDenseBufferCS::GetStaticType();
      FGlobalShaderMap::GetShader(this,&TStack_928,pFVar8,0);
      if (TStack_928.ShaderContent == (FShader *)0x0) {
        this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)auStack_8a0);
        ::FName::ToString((FName *)this_00,&FStack_898);
        FNiagaraCopySVTToDenseBufferCS::GetStaticType();
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (FStack_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_898.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FNiagaraCopySVTToDenseBufferCS::GetStaticType();
      iVar6 = *(int *)((longlong)param_1 + 0x14) + 3;
      iStack_940 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
      iVar6 = *(int *)((longlong)param_1 + 0x18) + 3;
      iStack_93c = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
      iVar6 = *(int *)((longlong)param_1 + 0x1c) + 3;
      iStack_938 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
      puVar9 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x60,0x10);
      if (puVar9 == (undefined8 *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        puVar9[2] = 0;
        *puVar9 = &___7__TObject_VFParameters_FNiagaraCopySVTToDenseBufferCS___FRDGAllocator__6B_;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar15 = puVar9;
      }
      puStack_948 = puVar15;
      if (((FStack_7d8.Data <= (FScriptContainerElement *)&puStack_948) &&
          ((FScriptContainerElement *)&puStack_948 < FStack_7d8.Data + (longlong)aiStack_7cc[0] * 8)
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iStack_7d0 == aiStack_7cc[0]) {
        iStack_7d0 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&FStack_7d8,aiStack_7cc);
      }
      iVar6 = iStack_7d0 + 1;
      plVar1 = puVar15 + 2;
      *(undefined8 **)(FStack_7d8.Data + (longlong)iStack_7d0 * 8) = puStack_948;
      iStack_7d0 = iVar6;
      if (((pFVar7->RenderTarget).Reference != (IPooledRenderTarget *)0x0) &&
         (pFVar7->TransientRDGTexture == (FRDGTexture *)0x0)) {
        pFVar10 = FRDGBuilder::RegisterExternalTexture
                            ((FRDGBuilder *)auStack_818,&pFVar7->RenderTarget,None);
        pFVar7->TransientRDGTexture = pFVar10;
        pFVar11 = FRDGBuilder::CreateUAV((FRDGBuilder *)auStack_818,pFVar10,None,PF_Unknown);
        pFVar7->TransientRDGUAV = pFVar11;
      }
      if (((pFVar7->RenderTarget).Reference == (IPooledRenderTarget *)0x0) ||
         (pFVar7->TransientRDGUAV == (FRDGTextureUAV *)0x0)) {
        fStack_850 = FClearValueBinding::Black.Value.Color[3];
        iStack_84c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
        uStack_930 = 1;
        uStack_92c = 1;
        puStack_844 = &DAT_100000001;
        uStack_835 = *(undefined1 *)((longlong)param_1 + 0x10);
        uStack_81c = 1;
        auStack_868._0_8_ = 0x20008;
        auStack_868._8_8_ = FClearValueBinding::Black._0_8_;
        auStack_868._16_8_ = FClearValueBinding::Black.Value._4_8_;
        uStack_848 = 0;
        uStack_83c = 0x10001;
        uStack_838 = 0x101;
        uStack_836 = 2;
        uStack_834 = 0xff00;
        pvStack_828 = (void *)0x0;
        uStack_820 = 0;
        pFVar10 = FRDGBuilder::CreateTexture
                            ((FRDGBuilder *)auStack_818,(FRDGTextureDesc *)auStack_868,
                             L"NiagaraEmptyTextureUAV::Texture3D",None);
        pFVar11 = FRDGBuilder::CreateUAV((FRDGBuilder *)auStack_818,pFVar10,SkipBarrier,PF_Unknown);
        *plVar1 = (longlong)pFVar11;
        if (pvStack_828 != (void *)0x0) {
          FMemory::Free(pvStack_828);
        }
      }
      else {
        *plVar1 = (longlong)pFVar7->TransientRDGUAV;
      }
      lVar2 = *(longlong *)((longlong)param_1 + 0x20);
      bVar4 = IsInParallelRenderingThread();
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInParallelRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                             ,0x10c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = *(FRHITexture **)(lVar2 + 0xb0);
      lVar2 = *(longlong *)((longlong)param_1 + 0x20);
      bVar4 = IsInParallelRenderingThread();
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInParallelRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                             ,0x10d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = *(FRHITexture **)(lVar2 + 0xb8);
      puVar15[3] = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                   ::StaticResource.StateRHI.Reference;
      if (pFVar16 == (FRHITexture *)0x0) {
        pFVar16 = (GBlackUintVolumeTexture->TextureRHI).Reference;
      }
      puVar15[4] = pFVar16;
      if (pFVar14 == (FRHITexture *)0x0) {
        pFVar14 = (GBlackVolumeTexture->TextureRHI).Reference;
      }
      puVar15[5] = pFVar14;
      pFStack_910 = TStack_928.ShaderContent;
      puVar15[6] = TStack_8d8._0_8_;
      puVar15[7] = TStack_8d8._8_8_;
      pFStack_908 = TStack_928.ShaderMap;
      puVar15[8] = TStack_8c8._0_8_;
      puVar15[9] = TStack_8c8._8_8_;
      puVar15[10] = *(undefined8 *)((longlong)param_1 + 0x14);
      *(undefined4 *)(puVar15 + 0xb) = *(undefined4 *)((longlong)param_1 + 0x1c);
      iStack_900 = iStack_940;
      iStack_8fc = iStack_93c;
      iStack_8f8 = iStack_938;
      *(undefined4 *)((longlong)puVar15 + 0x5c) = 0;
      plStack_918 = plVar1;
      this_01 = FRDGEventName::FRDGEventName(&FStack_888,1,L"Copy SVT to Volume RT");
      pFVar12 = FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass(&FStack_118,plVar1,pFVar12,this_01,Compute);
      FRDGBuilder::FlushAccessModeQueue((FRDGBuilder *)auStack_818);
      pwVar13 = FRDGEventName::GetTCHAR(this_01);
      EVar5 = FRDGBuilder::OverridePassFlags((FRDGBuilder *)auStack_818,pwVar13,Compute);
      this_02 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x1b0,8);
      FStack_8b8.Contents = (uchar *)plVar1;
      if (((pFVar12->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStack_8b8.Layout.Reference = (pFVar12->Layout).Reference;
      if (FStack_8b8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)FStack_8b8.Layout.Reference);
      }
      FStack_8b8.Metadata = pFVar12;
      FRDGPass::FRDGPass(this_02,this_01,&FStack_8b8,EVar5,Async);
      this_02->_padding_ =
           (longlong)
           &TRDGLambdaPass<FNiagaraCopySVTToDenseBufferCS::FParameters,``UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::`27'::<lambda_1>::operator()'::`8'::<lambda_1>_>
            ::_vftable_;
      this_02[1]._padding_ = (longlong)plStack_918;
      this_02[1].FullPathIfDebug.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)pFStack_910;
      *(longlong **)&this_02[1].Name.FormattedEventName.Data.ArrayNum = plVar1;
      *(FShaderMapBase **)&this_02[1].FullPathIfDebug.Data.ArrayNum = pFStack_908;
      this_02[1].Name.EventFormat = (wchar_t *)CONCAT44(iStack_8fc,iStack_900);
      this_02[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)CONCAT44(uStack_8f4,iStack_8f8);
      FRDGBuilder::ClobberPassOutputs((FRDGBuilder *)auStack_818,this_02);
      if (uStack_668 == auStack_664[0]) {
        uStack_668 = ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                               (0x808,&FStack_670,(int *)auStack_664);
      }
      FStack_670.Data[(int)uStack_668] = this_02;
      (this_02->Handle).Index = uStack_668;
      uStack_668 = uStack_668 + 1;
      FRDGBuilder::SetupParameterPass((FRDGBuilder *)auStack_818,this_02);
      if (FStack_888.FormattedEventName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_888.FormattedEventName.Data.AllocatorInstance.Data);
      }
      FRDGBuilder::Execute((FRDGBuilder *)auStack_818);
      pFVar7->TransientRDGTexture = (FRDGTexture *)0x0;
      pFVar7->TransientRDGSRV = (FRDGTextureSRV *)0x0;
      pFVar7->TransientRDGUAV = (FRDGTextureUAV *)0x0;
      FRDGBuilder::~FRDGBuilder((FRDGBuilder *)auStack_818);
    }
  }
  return;
}

// Call @ 1491b6a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ForAnyElementType *pFVar4;
  FRenderTarget2DRWInstanceData_RenderThread *pFVar5;
  FName *pFVar6;
  void *_Src;
  longlong lVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 auStackY_138 [32];
  undefined1 auStack_108 [12];
  uint uStack_fc;
  int aiStack_f8 [2];
  TIntVector3<int>_u_0 TStack_f0;
  FRHITransitionInfo FStack_e0;
  int aiStack_b0 [2];
  FRHIGPUTextureReadback FStack_a8;
  undefined1 auStack_50 [8];
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar5 = TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if (pFVar5 != (FRenderTarget2DRWInstanceData_RenderThread *)0x0) {
    FStack_e0.field1_0x8 = (FRHITransitionInfo_u_8)(pFVar5->TextureRHI).Reference;
    auStack_108._8_4_ = 1;
    auStack_108._0_8_ = &FStack_e0;
    FStack_e0._padding_._0_4_ = 0xffffffff;
    FStack_e0._padding_._4_2_ = 0xffff;
    FStack_e0.Type = Texture;
    FStack_e0.AccessBefore = SRVMask;
    FStack_e0.AccessAfter = CopySrc;
    FStack_e0.Flags = None;
    FStack_e0.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_2,
               (TArrayView<FRHITransitionInfo_const_,int> *)auStack_108,None);
    pFVar6 = ::FName::FName((FName *)&TStack_f0._s_0,"ReadRTTexture");
    FRHIGPUTextureReadback::FRHIGPUTextureReadback(&FStack_a8,*pFVar6);
    TStack_f0._s_0.X = *(int *)((longlong)param_1 + 0x20);
    iVar8 = 0;
    TStack_f0._s_0.Y = *(int *)((longlong)param_1 + 0x24);
    TStack_f0._s_0.Z = 1;
    auStack_108._0_8_ = (FRHITransitionInfo *)0x0;
    stack0xffffffffffffff00 = (ulonglong)uStack_fc << 0x20;
    FRHIGPUTextureReadback::EnqueueCopy
              (&FStack_a8,(FRHICommandList *)param_2,(pFVar5->TextureRHI).Reference,
               (TIntVector3<int> *)auStack_108,0,(TIntVector3<int> *)&TStack_f0._s_0);
    FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
    FRHICommandListImmediate::FlushResources(param_2);
    _Src = FRHIGPUTextureReadback::Lock(&FStack_a8,aiStack_f8,aiStack_b0);
    lVar7 = (**(code **)(((pFVar5->TextureRHI).Reference)->_padding_ + 0x20))();
    pFVar4 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
    iVar2 = GPixelFormats[*(byte *)(lVar7 + 0x33)].BlockBytes;
    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2 * (pFVar5->Size).field0_0x0._s_0.Y * (pFVar5->Size).field0_0x0._s_0.X,
               pFVar4,(int *)(pFVar4 + 1),(int *)((longlong)&pFVar4[1].Data + 4));
    if (0 < (pFVar5->Size).field0_0x0._s_0.Y) {
      do {
        iVar3 = (pFVar5->Size).field0_0x0._s_0.X;
        memcpy((void *)((ulonglong)(uint)(iVar3 * iVar8 * iVar2) +
                       **(longlong **)((longlong)param_1 + 0x18)),_Src,
               (ulonglong)(uint)(iVar3 * iVar2));
        iVar8 = iVar8 + 1;
        _Src = (void *)((longlong)_Src + (ulonglong)(uint)(iVar2 * aiStack_f8[0]));
      } while (iVar8 < (pFVar5->Size).field0_0x0._s_0.Y);
    }
    FRHIGPUTextureReadback::Unlock(&FStack_a8);
    FStack_e0.field1_0x8 = (FRHITransitionInfo_u_8)(pFVar5->TextureRHI).Reference;
    auStack_108._8_4_ = 1;
    auStack_108._0_8_ = &FStack_e0;
    FStack_e0._padding_._0_4_ = 0xffffffff;
    FStack_e0._padding_._4_2_ = 0xffff;
    FStack_e0.Type = Texture;
    FStack_e0.AccessBefore = CopySrc;
    FStack_e0.AccessAfter = SRVMask;
    FStack_e0.Flags = None;
    FStack_e0.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_2,
               (TArrayView<FRHITransitionInfo_const_,int> *)auStack_108,None);
    puVar9 = auStack_50;
    lVar7 = 8;
    do {
      puVar1 = (undefined8 *)(puVar9 + -8);
      puVar9 = puVar9 + -8;
      lVar7 = lVar7 + -1;
      if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)*puVar1);
      }
    } while (lVar7 != 0);
    FStack_a8._padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)FStack_a8._padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)FStack_a8._padding_);
    }
  }
  return;
}

// Call @ 1491b6a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  FRenderTargetVolumeRWInstanceData_RenderThread *pFVar5;
  FName *pFVar6;
  void *pvVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *_Src;
  undefined1 *puVar12;
  undefined1 auStackY_f8 [32];
  int iStack_c8;
  int iStack_c4;
  TIntVector3<int>_u_0 aTStack_c0 [2];
  FRHIGPUTextureReadback FStack_a8;
  undefined1 auStack_50 [8];
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar5 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if (pFVar5 != (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0) {
    pFVar6 = ::FName::FName((FName *)&aTStack_c0[0]._s_0,"ReadVolumeTexture");
    FRHIGPUTextureReadback::FRHIGPUTextureReadback(&FStack_a8,*pFVar6);
    aTStack_c0[0]._0_8_ = 0;
    aTStack_c0[0]._s_0.Z = 0;
    FRHIGPUTextureReadback::EnqueueCopy
              (&FStack_a8,(FRHICommandList *)param_2,
               (((pFVar5->RenderTarget).Reference)->RenderTargetItem).TargetableTexture.Reference,
               (TIntVector3<int> *)&aTStack_c0[0]._s_0,0,
               (TIntVector3<int> *)((longlong)param_1 + 0x20));
    FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
    FRHICommandListImmediate::FlushResources(param_2);
    pvVar7 = FRHIGPUTextureReadback::Lock(&FStack_a8,&iStack_c8,&iStack_c4);
    lVar8 = (**(code **)(((((pFVar5->RenderTarget).Reference)->RenderTargetItem).TargetableTexture.
                         Reference)->_padding_ + 0x20))();
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
    iVar2 = GPixelFormats[*(byte *)(lVar8 + 0x33)].BlockBytes;
    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(pFVar5->Size).field0_0x0._s_0.Z * (pFVar5->Size).field0_0x0._s_0.X * iVar2 *
                   (pFVar5->Size).field0_0x0._s_0.Y,pFVar3,(int *)(pFVar3 + 1),
               (int *)((longlong)&pFVar3[1].Data + 4));
    if (0 < (pFVar5->Size).field0_0x0._s_0.Z) {
      iVar4 = (pFVar5->Size).field0_0x0._s_0.Y;
      iVar9 = iStack_c8;
      iVar11 = 0;
      do {
        _Src = pvVar7;
        iVar10 = 0;
        if (0 < iVar4) {
          do {
            memcpy((void *)((ulonglong)
                            (uint)((iVar10 + iVar4 * iVar11) * (pFVar5->Size).field0_0x0._s_0.X *
                                  iVar2) + **(longlong **)((longlong)param_1 + 0x18)),_Src,
                   (ulonglong)(uint)((pFVar5->Size).field0_0x0._s_0.X * iVar2));
            iVar10 = iVar10 + 1;
            iVar4 = (pFVar5->Size).field0_0x0._s_0.Y;
            _Src = (void *)((longlong)_Src + (ulonglong)(uint)(iVar2 * iStack_c8));
            iVar9 = iStack_c8;
          } while (iVar10 < iVar4);
        }
        iVar11 = iVar11 + 1;
        pvVar7 = (void *)((longlong)pvVar7 + (ulonglong)(uint)(iVar2 * iVar9 * iStack_c4));
      } while (iVar11 < (pFVar5->Size).field0_0x0._s_0.Z);
    }
    FRHIGPUTextureReadback::Unlock(&FStack_a8);
    puVar12 = auStack_50;
    lVar8 = 8;
    do {
      puVar1 = (undefined8 *)(puVar12 + -8);
      puVar12 = puVar12 + -8;
      lVar8 = lVar8 + -1;
      if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)*puVar1);
      }
    } while (lVar8 != 0);
    FStack_a8._padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)FStack_a8._padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)FStack_a8._padding_);
    }
  }
  return;
}

// Call @ 1491b6a20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIResource *pFVar1;
  FRHITexture *pFVar2;
  longlong *plVar3;
  FRHIResource *this;
  FRHITexture *this_00;
  FRenderTarget2DRWInstanceData_RenderThread *this_01;
  longlong lVar4;
  uint uVar5;
  
  this_01 = TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
                        *)(*(longlong *)param_1 + 0x10),
                       (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                       (int)*(undefined8 *)((longlong)param_1 + 8),
                       (ulong64 *)((longlong)param_1 + 8));
  uVar5 = 0;
  (this_01->Size).field0_0x0 = *(TIntPoint<int>_u_0 *)((longlong)param_1 + 0x14);
  this_01->MipLevels = 1;
  this_01->MipMapGeneration = *(ENiagaraMipMapGeneration *)((longlong)param_1 + 0x24);
  this_01->MipMapGenerationType = *(ENiagaraMipMapGenerationType *)((longlong)param_1 + 0x25);
  pFVar1 = (FRHIResource *)(this_01->SamplerStateRHI).Reference;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this_01->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(pFVar1);
  }
  pFVar2 = (this_01->TextureRHI).Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    (this_01->TextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  if (*(longlong *)((longlong)param_1 + 0x68) != 0) {
    plVar3 = *(longlong **)(*(longlong *)((longlong)param_1 + 0x68) + 0x20);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x20))();
      uVar5 = (uint)*(byte *)(lVar4 + 0x30);
    }
    this_01->MipLevels = uVar5;
    lVar4 = (**(code **)(**(longlong **)((longlong)param_1 + 0x68) + 0xa0))();
    if (lVar4 != 0) {
      pFVar1 = *(FRHIResource **)(lVar4 + 0x28);
      this = (FRHIResource *)(this_01->SamplerStateRHI).Reference;
      if (this != pFVar1) {
        (this_01->SamplerStateRHI).Reference = (FRHISamplerState *)pFVar1;
        if (pFVar1 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(pFVar1);
        }
        if (this != (FRHIResource *)0x0) {
          FRHIResource::Release(this);
        }
      }
      pFVar2 = *(FRHITexture **)(lVar4 + 0x20);
      this_00 = (this_01->TextureRHI).Reference;
      if (this_00 != pFVar2) {
        (this_01->TextureRHI).Reference = pFVar2;
        if (pFVar2 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar2);
        }
        if (this_00 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      }
    }
  }
  FRenderTarget2DRWInstanceData_RenderThread::UpdateMemoryStats(this_01);
  return;
}

// Call @ 1491b6a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l37::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRenderTargetVolumeRWInstanceData_RenderThread *pFVar1;
  undefined1 auStackY_128 [32];
  FLLMScope aFStack_f8 [5];
  FMemScope aFStack_e8 [2];
  FUpdateTextureRegion3D FStack_d8;
  FUpdateTexture3DData FStack_a8;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar1 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if (pFVar1 != (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0) {
    FStack_d8.Depth = (pFVar1->Size).field0_0x0._s_0.Z;
    aFStack_e8[0] = *(FMemScope *)&(pFVar1->Size).field0_0x0;
    FStack_d8.DestZ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    FStack_d8.SrcZ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    FStack_d8.Width = aFStack_e8[0]._0_4_;
    FStack_d8.Height = aFStack_e8[0].PrevTag;
    FStack_d8.DestX = (uint)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    FStack_d8.DestY =
         (uint)((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
    FStack_d8.SrcX = FStack_d8.DestX;
    FStack_d8.SrcY = FStack_d8.DestY;
    FRHICommandListImmediate::BeginUpdateTexture3D
              (param_2,&FStack_a8,
               (((pFVar1->RenderTarget).Reference)->RenderTargetItem).TargetableTexture.Reference,0,
               &FStack_d8);
    UNDIRenderTargetSimCacheData::GetPixelData
              (*(UNDIRenderTargetSimCacheData **)((longlong)param_1 + 0x18),
               *(int *)((longlong)param_1 + 0x20),FStack_a8.Data,FStack_a8.RowPitch,
               FStack_a8.DepthPitch);
    FLLMScope::FLLMScope(aFStack_f8,Textures,false,None,Default,true);
    FMemScope::FMemScope(aFStack_e8,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x410))(GDynamicRHI,param_2,&FStack_a8);
    FMemScope::~FMemScope(aFStack_e8);
    FLLMScope::~FLLMScope(aFStack_f8);
  }
  return;
}

// Call @ 149221610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSet<TTuple<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT,0>,FDefaultSetAllocator>
            *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  return;
}

// Call @ 149221630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 149221670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  FNDISpline_InstanceData_RenderThread *this;
  ulong64 local_res8 [4];
  
  this = TMapBase<unsigned___int64,FNDISpline_InstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>_>
         ::Find((TMapBase<unsigned___int64,FNDISpline_InstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>_>
                 *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  if (this != (FNDISpline_InstanceData_RenderThread *)0x0) {
    FNDISpline_InstanceData_RenderThread::Reset(this);
  }
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDISpline_InstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDISpline_InstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1492216e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDITextureInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDITextureInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 149221720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 149221760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FVolumeCacheInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FVolumeCacheInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1492217a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulong64 local_res8 [4];
  
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],local_res8
              );
  }
  return;
}

// Call @ 1492217e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSharedObject::FlushDeletionList'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&FNiagaraSharedObject::CritSec);
  uVar6 = 0;
  if (0 < FNiagaraSharedObject::DeferredDeletionList.ArrayNum) {
    lVar7 = 0;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < FNiagaraSharedObject::DeferredDeletionList.ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(longlong *)(FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data + lVar7)
           == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DeferredDeletionList[i] != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                             ,0x26,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = 0;
      if ((int)uVar6 < FNiagaraSharedObject::DeferredDeletionList.ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)
                    (FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data + lVar7) + 8)
          == 0) {
        uVar4 = 0;
        if ((int)uVar6 < FNiagaraSharedObject::DeferredDeletionList.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar1 = *(undefined8 **)
                  (FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data + lVar7);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        uVar4 = 0;
        if ((int)uVar6 < FNiagaraSharedObject::DeferredDeletionList.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = (FNiagaraSharedObject::DeferredDeletionList.ArrayNum - uVar6) + -1;
        if (1 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          memmove(FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data +
                  (longlong)(int)uVar6 * 8,
                  FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data +
                  (longlong)(FNiagaraSharedObject::DeferredDeletionList.ArrayNum - iVar5) * 8,
                  (longlong)iVar5 << 3);
        }
        FNiagaraSharedObject::DeferredDeletionList.ArrayNum =
             FNiagaraSharedObject::DeferredDeletionList.ArrayNum + -1;
        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance,
                   FNiagaraSharedObject::DeferredDeletionList.ArrayNum,
                   &FNiagaraSharedObject::DeferredDeletionList.ArrayMax);
      }
      else {
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      }
    } while ((int)uVar6 < FNiagaraSharedObject::DeferredDeletionList.ArrayNum);
  }
                    /* WARNING: Could not recover jumptable at 0x000149217a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&FNiagaraSharedObject::CritSec);
  return;
}

// Call @ 1492217f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  return;
}

// Call @ 149221810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  FRHITexture *this;
  undefined8 uVar2;
  FRHITexture *this_00;
  
  *(undefined1 *)(*(longlong *)param_1 + 0x58) = *(undefined1 *)((longlong)param_1 + 0x50);
  *(undefined1 *)(*(longlong *)param_1 + 0x59) = *(undefined1 *)((longlong)param_1 + 0x51);
  *(undefined1 *)(*(longlong *)param_1 + 0x5a) = *(undefined1 *)((longlong)param_1 + 0x52);
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)((longlong)param_1 + 8);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)((longlong)param_1 + 0x18);
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)((longlong)param_1 + 0x30);
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)((longlong)param_1 + 0x48);
  this_00 = FVectorFieldTextureAccessor::GetTexture
                      ((FVectorFieldTextureAccessor *)((longlong)param_1 + 0x58));
  this = *(FRHITexture **)(*(longlong *)param_1 + 0x60);
  if (this != this_00) {
    *(FRHITexture **)(*(longlong *)param_1 + 0x60) = this_00;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this);
      return;
    }
  }
  return;
}

// Call @ 149221820

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDISkeletalMesh_InstanceData::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong **)param_1 != (longlong *)0x0) {
    (**(code **)(**(longlong **)param_1 + 0x20))();
    puVar1 = *(undefined8 **)param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x20))();
    puVar1 = *(undefined8 **)((longlong)param_1 + 8);
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014922186e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}

// Call @ 149221880

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSkeletalMeshConnectivity::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(**(longlong **)param_1 + 0x20))();
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492218a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Call @ 1492218c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITextureReference *pFVar1;
  FRHITextureReference *this;
  FRHIResource *pFVar2;
  FNDIVolumeTextureInstanceData_RenderThread *pFVar3;
  FTextureResource *pFVar4;
  TRefCountPtr<FRHISamplerState> this_00;
  
  pFVar3 = TMapBase<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>_>
                       *)(*(longlong *)param_1 + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8)
                     );
  if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
    pFVar1 = (pFVar3->TextureReferenceRHI).Reference;
    if (pFVar1 != (FRHITextureReference *)0x0) {
      (pFVar3->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (FRHIResource *)(pFVar3->SamplerStateRHI).Reference;
    if (pFVar2 != (FRHIResource *)0x0) {
      (pFVar3->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(pFVar2);
    }
    *(undefined8 *)&(pFVar3->TextureSize).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (pFVar3->TextureSize).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z
    ;
    return;
  }
  pFVar1 = (pFVar3->TextureReferenceRHI).Reference;
  this = *(FRHITextureReference **)
          (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x140) + 0x20);
  if (pFVar1 != this) {
    (pFVar3->TextureReferenceRHI).Reference = this;
    if (this != (FRHITextureReference *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this);
    }
    if (pFVar1 != (FRHITextureReference *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  pFVar4 = UTexture::GetResource(*(UTexture **)((longlong)param_1 + 0x10));
  this_00 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
            ::StaticResource.StateRHI;
  if (pFVar4 != (FTextureResource *)0x0) {
    pFVar4 = UTexture::GetResource(*(UTexture **)((longlong)param_1 + 0x10));
    this_00.Reference = (FRHISamplerState *)pFVar4->_padding_;
  }
  pFVar2 = (FRHIResource *)(pFVar3->SamplerStateRHI).Reference;
  if (pFVar2 != (FRHIResource *)this_00.Reference) {
    (pFVar3->SamplerStateRHI).Reference = this_00.Reference;
    if ((FRHIResource *)this_00.Reference != (FRHIResource *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00.Reference);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  (pFVar3->TextureSize).field0_0x0._s_0.X = (float)*(int *)((longlong)param_1 + 0x18);
  (pFVar3->TextureSize).field0_0x0._s_0.Y = (float)*(int *)((longlong)param_1 + 0x1c);
  (pFVar3->TextureSize).field0_0x0._s_0.Z = (float)*(int *)((longlong)param_1 + 0x20);
  return;
}

// Call @ 1492218d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceTexture::PerInstanceTick'::__l17::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITextureReference *pFVar1;
  FRHITextureReference *this;
  FRHIResource *pFVar2;
  FNDITextureInstanceData_RenderThread *pFVar3;
  FTextureResource *pFVar4;
  TRefCountPtr<FRHISamplerState> this_00;
  
  pFVar3 = TMapBase<unsigned___int64,FNDITextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDITextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>_>
                       *)(*(longlong *)param_1 + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8)
                     );
  if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
    pFVar1 = (pFVar3->TextureReferenceRHI).Reference;
    if (pFVar1 != (FRHITextureReference *)0x0) {
      (pFVar3->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (FRHIResource *)(pFVar3->SamplerStateRHI).Reference;
    if (pFVar2 != (FRHIResource *)0x0) {
      (pFVar3->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(pFVar2);
    }
    (pFVar3->TextureSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
    pFVar3->MipLevels = 0;
    return;
  }
  pFVar1 = (pFVar3->TextureReferenceRHI).Reference;
  this = *(FRHITextureReference **)
          (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x140) + 0x20);
  if (pFVar1 != this) {
    (pFVar3->TextureReferenceRHI).Reference = this;
    if (this != (FRHITextureReference *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this);
    }
    if (pFVar1 != (FRHITextureReference *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  pFVar4 = UTexture::GetResource(*(UTexture **)((longlong)param_1 + 0x10));
  this_00 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
            ::StaticResource.StateRHI;
  if (pFVar4 != (FTextureResource *)0x0) {
    pFVar4 = UTexture::GetResource(*(UTexture **)((longlong)param_1 + 0x10));
    this_00.Reference = (FRHISamplerState *)pFVar4->_padding_;
  }
  pFVar2 = (FRHIResource *)(pFVar3->SamplerStateRHI).Reference;
  if (pFVar2 != (FRHIResource *)this_00.Reference) {
    (pFVar3->SamplerStateRHI).Reference = this_00.Reference;
    if ((FRHIResource *)this_00.Reference != (FRHIResource *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00.Reference);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  (pFVar3->TextureSize).field0_0x0 = *(TIntPoint<int>_u_0 *)((longlong)param_1 + 0x18);
  pFVar3->MipLevels = *(int *)((longlong)param_1 + 0x20);
  return;
}

// Call @ 1492218e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataSet::ResetBuffers'::__l17::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)param_1;
  iVar2 = *(int *)(lVar3 + 0xa8);
  puVar4 = *(undefined8 **)(lVar3 + 0xa0);
  if (*(undefined8 **)(lVar3 + 0xa0) == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(lVar3 + 0x90);
  }
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0xa8) != iVar2) {
      `TCheckedPointerIterator<FNiagaraDataBuffer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar4 == puVar1) break;
    FNiagaraDataBuffer::ReleaseGPU((FNiagaraDataBuffer *)*puVar4);
    puVar4 = puVar4 + 1;
  }
  FNiagaraDataSet::ResetBuffersInternal(*(FNiagaraDataSet **)param_1);
  return;
}

// Call @ 149221960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l25::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIVirtualTextureSampleInstanceData_RenderThread *pFVar1;
  FVirtualTexture2DResource *pFVar2;
  
  pFVar1 = TMapBase<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,0>_>
                       *)(*(longlong *)param_1 + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8)
                     );
  (pFVar1->TextureSize).field0_0x0 = *(TIntPoint<int>_u_0 *)((longlong)param_1 + 0x18);
  pFVar1->MipLevels = *(int *)((longlong)param_1 + 0x20);
  pFVar2 = (FVirtualTexture2DResource *)
           UTexture::GetResource(*(UTexture **)((longlong)param_1 + 0x10));
  pFVar1->VirtualTextureResource = pFVar2;
  pFVar1->VirtualTextureResource_SRGB =
       *(byte *)(*(longlong *)((longlong)param_1 + 0x10) + 0x116) & 1;
  return;
}

// Call @ 1492219d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDI_SkeletalMesh_GeneratedData::Tick'::__l49::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FNDI_SkeletalMesh_GeneratedData::Tick'::__l49::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1492219e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FReadBuffer *this;
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  FName FVar7;
  FRHIBuffer *pFVar8;
  FRHIShaderResourceView *pFVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  bool bVar26;
  FNDISpline_InstanceData_RenderThread *pFVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar29;
  FThreadStats *pFVar30;
  FThreadStatsPool *pFVar31;
  void *pvVar32;
  float *pfVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  ulonglong uVar37;
  uint uVar38;
  longlong lVar39;
  uchar auVar40 [8];
  uchar auVar41 [8];
  uchar auVar42 [8];
  uchar auVar43 [8];
  uchar auVar44 [8];
  uchar auVar45 [8];
  ulonglong uVar46;
  undefined1 auStackY_378 [32];
  FName FStack_308;
  FName FStack_300;
  FName FStack_2f8;
  FName FStack_2f0;
  FName FStack_2e8;
  FName FStack_2e0;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  FStatMessage FStack_2c8;
  FStatMessage FStack_2b8;
  FStatMessage FStack_2a8;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  FStatMessage FStack_288;
  FStatMessage FStack_278;
  FStatMessage FStack_268;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  FName FStack_218;
  FName FStack_210;
  FName FStack_208;
  FName FStack_200;
  FName FStack_1f8;
  FName FStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float afStack_1d8 [2];
  float afStack_1d0 [2];
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  TMatrix<float> TStack_128;
  ulonglong uStack_e8;
  
  uStack_e8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pFVar27 = TMapBase<unsigned___int64,FNDISpline_InstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,FNDISpline_InstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>_>
                        *)(*(longlong *)param_1 + 0x10),
                       (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                       (int)*(undefined8 *)((longlong)param_1 + 8),
                       (ulong64 *)((longlong)param_1 + 8));
  dVar5 = *(double *)((longlong)param_1 + 0x40);
  dVar6 = *(double *)((longlong)param_1 + 0x48);
  dVar12 = *(double *)((longlong)param_1 + 0x30);
  dVar13 = *(double *)((longlong)param_1 + 0x38);
  dVar14 = *(double *)((longlong)param_1 + 0x60);
  dVar15 = *(double *)((longlong)param_1 + 0x68);
  dVar16 = *(double *)((longlong)param_1 + 0x50);
  dVar17 = *(double *)((longlong)param_1 + 0x58);
  dVar18 = *(double *)((longlong)param_1 + 0x80);
  dVar19 = *(double *)((longlong)param_1 + 0x88);
  dVar20 = *(double *)((longlong)param_1 + 0x70);
  dVar21 = *(double *)((longlong)param_1 + 0x78);
  dVar22 = *(double *)((longlong)param_1 + 0x20);
  dVar23 = *(double *)((longlong)param_1 + 0x28);
  dVar24 = *(double *)((longlong)param_1 + 0x18);
  (pFVar27->SplineTransform).M[0][0] = (float)*(double *)((longlong)param_1 + 0x10);
  (pFVar27->SplineTransform).M[0][1] = (float)dVar24;
  (pFVar27->SplineTransform).M[0][2] = (float)dVar22;
  (pFVar27->SplineTransform).M[0][3] = (float)dVar23;
  (pFVar27->SplineTransform).M[1][0] = (float)dVar12;
  (pFVar27->SplineTransform).M[1][1] = (float)dVar13;
  (pFVar27->SplineTransform).M[1][2] = (float)dVar5;
  (pFVar27->SplineTransform).M[1][3] = (float)dVar6;
  (pFVar27->SplineTransform).M[2][0] = (float)dVar16;
  (pFVar27->SplineTransform).M[2][1] = (float)dVar17;
  (pFVar27->SplineTransform).M[2][2] = (float)dVar14;
  (pFVar27->SplineTransform).M[2][3] = (float)dVar15;
  (pFVar27->SplineTransform).M[3][0] = (float)dVar20;
  (pFVar27->SplineTransform).M[3][1] = (float)dVar21;
  (pFVar27->SplineTransform).M[3][2] = (float)dVar18;
  (pFVar27->SplineTransform).M[3][3] = (float)dVar19;
  dStack_188 = *(double *)((longlong)param_1 + 0x30);
  dStack_180 = *(double *)((longlong)param_1 + 0x38);
  dStack_198 = *(double *)((longlong)param_1 + 0x20);
  dStack_190 = *(double *)((longlong)param_1 + 0x28);
  dStack_178 = *(double *)((longlong)param_1 + 0x40);
  dStack_170 = *(double *)((longlong)param_1 + 0x48);
  dStack_1a8 = *(double *)((longlong)param_1 + 0x10);
  dStack_1a0 = *(double *)((longlong)param_1 + 0x18);
  dStack_158 = *(double *)((longlong)param_1 + 0x60);
  dStack_150 = *(double *)((longlong)param_1 + 0x68);
  dStack_130 = *(double *)((longlong)param_1 + 0x88);
  dStack_168 = *(double *)((longlong)param_1 + 0x50);
  dStack_160 = *(double *)((longlong)param_1 + 0x58);
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  (pFVar27->SplineTransformRotationMat).M[0][0] = (float)dStack_1a8;
  (pFVar27->SplineTransformRotationMat).M[0][1] = (float)dStack_1a0;
  (pFVar27->SplineTransformRotationMat).M[0][2] = (float)dStack_198;
  (pFVar27->SplineTransformRotationMat).M[0][3] = (float)dStack_190;
  *(ulonglong *)(pFVar27->SplineTransformRotationMat).M[1] =
       CONCAT44((float)dStack_180,(float)dStack_188);
  *(ulonglong *)((pFVar27->SplineTransformRotationMat).M[1] + 2) =
       CONCAT44((float)dStack_170,(float)dStack_178);
  (pFVar27->SplineTransformRotationMat).M[2][0] = (float)dStack_168;
  (pFVar27->SplineTransformRotationMat).M[2][1] = (float)dStack_160;
  (pFVar27->SplineTransformRotationMat).M[2][2] = (float)dStack_158;
  (pFVar27->SplineTransformRotationMat).M[2][3] = (float)dStack_150;
  *(float *)((longlong)((pFVar27->SplineTransformRotationMat).M + 3) + 0) = 0.0;
  *(float *)((longlong)((pFVar27->SplineTransformRotationMat).M + 3) + 4) = 0.0;
  *(ulonglong *)((pFVar27->SplineTransformRotationMat).M[3] + 2) =
       (ulonglong)(uint)(float)dStack_130 << 0x20;
  fVar25 = __real_322bcc77;
  UE::Math::TMatrix<float>::RemoveScaling(&pFVar27->SplineTransformRotationMat,__real_322bcc77);
  if ((((float)((uint)(pFVar27->SplineTransform).M[0][0] & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= fVar25) &&
      ((float)((uint)(pFVar27->SplineTransform).M[0][1] & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       fVar25)) &&
     ((float)((uint)(pFVar27->SplineTransform).M[0][2] & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      fVar25)) {
    if ((((float)((uint)(pFVar27->SplineTransform).M[1][0] & __xmm_7fffffff7fffffff7fffffff7fffffff)
          <= fVar25) &&
        ((float)((uint)(pFVar27->SplineTransform).M[1][1] & __xmm_7fffffff7fffffff7fffffff7fffffff)
         <= fVar25)) &&
       ((float)((uint)(pFVar27->SplineTransform).M[1][2] & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= fVar25)) {
      if ((((float)((uint)(pFVar27->SplineTransform).M[2][0] &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar25) &&
          ((float)((uint)(pFVar27->SplineTransform).M[2][1] & __xmm_7fffffff7fffffff7fffffff7fffffff
                  ) <= fVar25)) &&
         (fStack_1e8 = UE::Math::TMatrix<float>::Identity.M[0][0],
         fStack_1e4 = UE::Math::TMatrix<float>::Identity.M[0][1],
         fStack_1e0 = UE::Math::TMatrix<float>::Identity.M[0][2],
         fStack_1dc = UE::Math::TMatrix<float>::Identity.M[0][3],
         fStack_1c8 = UE::Math::TMatrix<float>::Identity.M[2][0],
         fStack_1c4 = UE::Math::TMatrix<float>::Identity.M[2][1],
         fStack_1c0 = UE::Math::TMatrix<float>::Identity.M[2][2],
         fStack_1bc = UE::Math::TMatrix<float>::Identity.M[2][3],
         fStack_1b8 = UE::Math::TMatrix<float>::Identity.M[3][0],
         fStack_1b4 = UE::Math::TMatrix<float>::Identity.M[3][1],
         fStack_1b0 = UE::Math::TMatrix<float>::Identity.M[3][2],
         fStack_1ac = UE::Math::TMatrix<float>::Identity.M[3][3],
         afStack_1d8 = (float  [2])UE::Math::TMatrix<float>::Identity.M[1]._0_8_,
         afStack_1d0 = (float  [2])UE::Math::TMatrix<float>::Identity.M[1]._8_8_,
         (float)((uint)(pFVar27->SplineTransform).M[2][2] & __xmm_7fffffff7fffffff7fffffff7fffffff)
         <= fVar25)) goto LAB_149218f1c;
    }
  }
  FMath::MatrixInverse(&TStack_128,&pFVar27->SplineTransform);
  fStack_1e8 = TStack_128.M[0][0];
  fStack_1e4 = TStack_128.M[0][1];
  fStack_1e0 = TStack_128.M[0][2];
  fStack_1dc = TStack_128.M[0][3];
  fStack_1c8 = TStack_128.M[2][0];
  fStack_1c4 = TStack_128.M[2][1];
  fStack_1c0 = TStack_128.M[2][2];
  fStack_1bc = TStack_128.M[2][3];
  fStack_1b8 = TStack_128.M[3][0];
  fStack_1b4 = TStack_128.M[3][1];
  fStack_1b0 = TStack_128.M[3][2];
  fStack_1ac = TStack_128.M[3][3];
  afStack_1d8 = (float  [2])TStack_128.M[1]._0_8_;
  afStack_1d0 = (float  [2])TStack_128.M[1]._8_8_;
LAB_149218f1c:
  (pFVar27->SplineTransformInverse).M[0][0] = fStack_1e8;
  (pFVar27->SplineTransformInverse).M[0][1] = fStack_1e4;
  (pFVar27->SplineTransformInverse).M[0][2] = fStack_1e0;
  (pFVar27->SplineTransformInverse).M[0][3] = fStack_1dc;
  *(float (*) [2])(pFVar27->SplineTransformInverse).M[1] = afStack_1d8;
  *(float (*) [2])((pFVar27->SplineTransformInverse).M[1] + 2) = afStack_1d0;
  (pFVar27->SplineTransformInverse).M[2][0] = fStack_1c8;
  (pFVar27->SplineTransformInverse).M[2][1] = fStack_1c4;
  (pFVar27->SplineTransformInverse).M[2][2] = fStack_1c0;
  (pFVar27->SplineTransformInverse).M[2][3] = fStack_1bc;
  (pFVar27->SplineTransformInverse).M[3][0] = fStack_1b8;
  (pFVar27->SplineTransformInverse).M[3][1] = fStack_1b4;
  (pFVar27->SplineTransformInverse).M[3][2] = fStack_1b0;
  (pFVar27->SplineTransformInverse).M[3][3] = fStack_1ac;
  fStack_258 = (pFVar27->SplineTransformInverse).M[0][0];
  fStack_248 = (pFVar27->SplineTransformInverse).M[0][1];
  fStack_238 = (pFVar27->SplineTransformInverse).M[0][2];
  fStack_228 = (pFVar27->SplineTransformInverse).M[0][3];
  fStack_234 = (pFVar27->SplineTransformInverse).M[1][2];
  fStack_224 = (pFVar27->SplineTransformInverse).M[1][3];
  fStack_240 = (pFVar27->SplineTransformInverse).M[2][1];
  fStack_230 = (pFVar27->SplineTransformInverse).M[2][2];
  fStack_220 = (pFVar27->SplineTransformInverse).M[2][3];
  fStack_23c = (pFVar27->SplineTransformInverse).M[3][1];
  fStack_22c = (pFVar27->SplineTransformInverse).M[3][2];
  fStack_21c = (pFVar27->SplineTransformInverse).M[3][3];
  fStack_244 = (pFVar27->SplineTransformInverse).M[1][1];
  fStack_250 = (pFVar27->SplineTransformInverse).M[2][0];
  fStack_24c = (pFVar27->SplineTransformInverse).M[3][0];
  fStack_254 = (pFVar27->SplineTransformInverse).M[1][0];
  (pFVar27->SplineTransformInverseTranspose).M[0][0] = fStack_258;
  (pFVar27->SplineTransformInverseTranspose).M[0][1] = fStack_254;
  (pFVar27->SplineTransformInverseTranspose).M[0][2] = fStack_250;
  (pFVar27->SplineTransformInverseTranspose).M[0][3] = fStack_24c;
  (pFVar27->SplineTransformInverseTranspose).M[1][0] = fStack_248;
  (pFVar27->SplineTransformInverseTranspose).M[1][1] = fStack_244;
  (pFVar27->SplineTransformInverseTranspose).M[1][2] = fStack_240;
  (pFVar27->SplineTransformInverseTranspose).M[1][3] = fStack_23c;
  (pFVar27->SplineTransformInverseTranspose).M[2][0] = fStack_238;
  (pFVar27->SplineTransformInverseTranspose).M[2][1] = fStack_234;
  (pFVar27->SplineTransformInverseTranspose).M[2][2] = fStack_230;
  (pFVar27->SplineTransformInverseTranspose).M[2][3] = fStack_22c;
  (pFVar27->SplineTransformInverseTranspose).M[3][0] = fStack_228;
  (pFVar27->SplineTransformInverseTranspose).M[3][1] = fStack_224;
  (pFVar27->SplineTransformInverseTranspose).M[3][2] = fStack_220;
  (pFVar27->SplineTransformInverseTranspose).M[3][3] = fStack_21c;
  fStack_2d8 = (float)*(double *)((longlong)param_1 + 0x90);
  fStack_2d0 = (float)*(double *)((longlong)param_1 + 0xa0);
  fStack_2cc = (float)*(double *)((longlong)param_1 + 0xa8);
  fStack_2d4 = (float)*(double *)((longlong)param_1 + 0x98);
  (pFVar27->SplineTransformRotation).X = fStack_2d8;
  (pFVar27->SplineTransformRotation).Y = fStack_2d4;
  (pFVar27->SplineTransformRotation).Z = fStack_2d0;
  (pFVar27->SplineTransformRotation).W = fStack_2cc;
  dVar5 = *(double *)((longlong)param_1 + 0xb8);
  dVar6 = *(double *)((longlong)param_1 + 0xc0);
  this = &pFVar27->SplinePositionsLUT;
  (pFVar27->DefaultUpVector).field0_0x0._s_0.X = (float)*(double *)((longlong)param_1 + 0xb0);
  (pFVar27->DefaultUpVector).field0_0x0._s_0.Y = (float)dVar5;
  (pFVar27->DefaultUpVector).field0_0x0._s_0.Z = (float)dVar6;
  auVar45[4] = '\0';
  auVar45[5] = '\0';
  auVar45[6] = '\0';
  auVar45[7] = '\0';
  auVar45._0_4_ = (pFVar27->SplinePositionsLUT).NumBytes;
  pFVar27->SplineLength = *(float *)((longlong)param_1 + 0xf8);
  pFVar27->SplineDistanceStep = *(float *)((longlong)param_1 + 0xfc);
  pFVar27->InvSplineDistanceStep = *(float *)((longlong)param_1 + 0x100);
  pFVar27->MaxIndex = *(int *)((longlong)param_1 + 0x104);
  if (auVar45 != (uchar  [8])0x0) {
    FVar29 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar28 = ::FName::FName(&FStack_218,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar28,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar7 = *(FName *)FVar29;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      FStack_2c8.NameAndInfo.Number = FVar7.Number & 0xffffbfff | 0xb000;
      FStack_308 = FVar7;
      FStack_2c8.StatData.Pad = auVar45;
      FStack_2c8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar30,&FStack_2c8);
      FStatsTrace::Add(&FStack_308,-(longlong)auVar45);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
  }
  auVar41[4] = '\0';
  auVar41[5] = '\0';
  auVar41[6] = '\0';
  auVar41[7] = '\0';
  auVar41._0_4_ = (pFVar27->SplineScalesLUT).NumBytes;
  if (auVar41 != (uchar  [8])0x0) {
    FVar29 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar28 = ::FName::FName(&FStack_210,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar28,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar7 = *(FName *)FVar29;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      FStack_2b8.NameAndInfo.Number = FVar7.Number & 0xffffbfff | 0xb000;
      FStack_300 = FVar7;
      FStack_2b8.StatData.Pad = auVar41;
      FStack_2b8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar30,&FStack_2b8);
      FStatsTrace::Add(&FStack_300,-(longlong)auVar41);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
  }
  auVar42[4] = '\0';
  auVar42[5] = '\0';
  auVar42[6] = '\0';
  auVar42[7] = '\0';
  auVar42._0_4_ = (pFVar27->SplineRotationsLUT).NumBytes;
  if (auVar42 != (uchar  [8])0x0) {
    FVar29 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar28 = ::FName::FName(&FStack_208,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar28,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar7 = *(FName *)FVar29;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      FStack_2a8.NameAndInfo.Number = FVar7.Number & 0xffffbfff | 0xb000;
      FStack_2f8 = FVar7;
      FStack_2a8.StatData.Pad = auVar42;
      FStack_2a8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar30,&FStack_2a8);
      FStatsTrace::Add(&FStack_2f8,-(longlong)auVar42);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
  }
  uVar37 = 0;
  (pFVar27->SplinePositionsLUT).NumBytes = 0;
  pFVar8 = (this->Buffer).Reference;
  if (pFVar8 != (FRHIBuffer *)0x0) {
    (this->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar8);
  }
  pFVar9 = (pFVar27->SplinePositionsLUT).SRV.Reference;
  if (pFVar9 != (FRHIShaderResourceView *)0x0) {
    (pFVar27->SplinePositionsLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar9);
  }
  (pFVar27->SplineScalesLUT).NumBytes = 0;
  pFVar8 = (pFVar27->SplineScalesLUT).Buffer.Reference;
  if (pFVar8 != (FRHIBuffer *)0x0) {
    (pFVar27->SplineScalesLUT).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar8);
  }
  pFVar9 = (pFVar27->SplineScalesLUT).SRV.Reference;
  if (pFVar9 != (FRHIShaderResourceView *)0x0) {
    (pFVar27->SplineScalesLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar9);
  }
  (pFVar27->SplineRotationsLUT).NumBytes = 0;
  pFVar8 = (pFVar27->SplineRotationsLUT).Buffer.Reference;
  if (pFVar8 != (FRHIBuffer *)0x0) {
    (pFVar27->SplineRotationsLUT).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar8);
  }
  pFVar9 = (pFVar27->SplineRotationsLUT).SRV.Reference;
  if (pFVar9 != (FRHIShaderResourceView *)0x0) {
    (pFVar27->SplineRotationsLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar9);
  }
  if ((*(int *)((longlong)param_1 + 0xd0) == 0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("rtShaderLUT.Positions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                          ,0x2ce,L""), bVar26)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FReadBuffer::Initialize
            (this,(FRHICommandListBase *)param_2,L"SplinePositionsLUT",0x10,
             *(uint *)((longlong)param_1 + 0xd0),PF_A32B32G32R32F,Static,
             (FResourceArrayUploadInterface *)0x0);
  pvVar32 = FRHICommandListBase::LockBuffer
                      ((FRHICommandListBase *)param_2,(this->Buffer).Reference,0,
                       *(int *)((longlong)param_1 + 0xd0) << 4,RLM_WriteOnly);
  if (0 < *(int *)((longlong)param_1 + 0xd0)) {
    pfVar33 = (float *)((longlong)pvVar32 + 8);
    uVar46 = uVar37;
    do {
      uVar35 = (uint)uVar37;
      uVar38 = ~uVar35 >> 0x1f;
      uVar36 = 0;
      if ((int)uVar35 < *(int *)((longlong)param_1 + 0xd0)) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pfVar33[-2] = (float)*(double *)(uVar46 + *(longlong *)((longlong)param_1 + 200));
      uVar36 = 0;
      if ((int)uVar35 < *(int *)((longlong)param_1 + 0xd0)) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pfVar33[-1] = (float)*(double *)(*(longlong *)((longlong)param_1 + 200) + 8 + uVar46);
      uVar36 = 0;
      if ((int)uVar35 < *(int *)((longlong)param_1 + 0xd0)) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar37 = (ulonglong)(uVar35 + 1);
      dVar5 = *(double *)(*(longlong *)((longlong)param_1 + 200) + 0x10 + uVar46);
      uVar46 = uVar46 + 0x18;
      pfVar33[1] = 1.0;
      *pfVar33 = (float)dVar5;
      pfVar33 = pfVar33 + 4;
    } while ((int)(uVar35 + 1) < *(int *)((longlong)param_1 + 0xd0));
  }
  uVar37 = 0;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_2,(this->Buffer).Reference);
  FReadBuffer::Initialize
            (&pFVar27->SplineScalesLUT,(FRHICommandListBase *)param_2,L"SplineScalesLUT",0x10,
             *(uint *)((longlong)param_1 + 0xe0),PF_A32B32G32R32F,Static,
             (FResourceArrayUploadInterface *)0x0);
  pvVar32 = FRHICommandListBase::LockBuffer
                      ((FRHICommandListBase *)param_2,(pFVar27->SplineScalesLUT).Buffer.Reference,0,
                       *(int *)((longlong)param_1 + 0xe0) << 4,RLM_WriteOnly);
  iVar34 = *(int *)((longlong)param_1 + 0xe0);
  if (0 < iVar34) {
    pfVar33 = (float *)((longlong)pvVar32 + 8);
    uVar46 = uVar37;
    do {
      uVar35 = (uint)uVar37;
      uVar38 = ~uVar35 >> 0x1f;
      uVar36 = 0;
      if ((int)uVar35 < iVar34) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pfVar33[-2] = (float)*(double *)(uVar46 + *(longlong *)((longlong)param_1 + 0xd8));
      uVar36 = 0;
      if ((int)uVar35 < *(int *)((longlong)param_1 + 0xe0)) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pfVar33[-1] = (float)*(double *)(uVar46 + 8 + *(longlong *)((longlong)param_1 + 0xd8));
      uVar36 = 0;
      if ((int)uVar35 < *(int *)((longlong)param_1 + 0xe0)) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar37 = (ulonglong)(uVar35 + 1);
      dVar5 = *(double *)(*(longlong *)((longlong)param_1 + 0xd8) + 0x10 + uVar46);
      uVar46 = uVar46 + 0x18;
      pfVar33[1] = 1.0;
      *pfVar33 = (float)dVar5;
      pfVar33 = pfVar33 + 4;
      iVar34 = *(int *)((longlong)param_1 + 0xe0);
    } while ((int)(uVar35 + 1) < iVar34);
  }
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_2,(pFVar27->SplineScalesLUT).Buffer.Reference);
  FReadBuffer::Initialize
            (&pFVar27->SplineRotationsLUT,(FRHICommandListBase *)param_2,L"SplineRotationsLUT",0x10,
             *(uint *)((longlong)param_1 + 0xf0),PF_A32B32G32R32F,Static,
             (FResourceArrayUploadInterface *)0x0);
  pfVar33 = FRHICommandListBase::LockBuffer
                      ((FRHICommandListBase *)param_2,(pFVar27->SplineRotationsLUT).Buffer.Reference
                       ,0,*(int *)((longlong)param_1 + 0xf0) << 4,RLM_WriteOnly);
  iVar34 = *(int *)((longlong)param_1 + 0xf0);
  uVar36 = 0;
  if (0 < iVar34) {
    lVar39 = 0;
    do {
      uVar35 = 0;
      if ((int)uVar36 < iVar34) {
        uVar35 = ~uVar36 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar10 = *(longlong *)((longlong)param_1 + 0xe8);
      uVar36 = uVar36 + 1;
      pdVar1 = (double *)(lVar10 + lVar39);
      pdVar2 = (double *)(lVar10 + 8 + lVar39);
      pdVar3 = (double *)(lVar10 + 0x10 + lVar39);
      pdVar4 = (double *)(lVar10 + 0x18 + lVar39);
      lVar39 = lVar39 + 0x20;
      fStack_298 = (float)*pdVar1;
      fStack_294 = (float)*pdVar2;
      fStack_290 = (float)*pdVar3;
      fStack_28c = (float)*pdVar4;
      *pfVar33 = fStack_298;
      pfVar33[1] = fStack_294;
      pfVar33[2] = fStack_290;
      pfVar33[3] = fStack_28c;
      pfVar33 = pfVar33 + 4;
      iVar34 = *(int *)((longlong)param_1 + 0xf0);
    } while ((int)uVar36 < iVar34);
  }
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_2,(pFVar27->SplineRotationsLUT).Buffer.Reference);
  auVar43[4] = '\0';
  auVar43[5] = '\0';
  auVar43[6] = '\0';
  auVar43[7] = '\0';
  auVar43._0_4_ = (pFVar27->SplinePositionsLUT).NumBytes;
  if (auVar43 != (uchar  [8])0x0) {
    FVar29 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar28 = ::FName::FName(&FStack_200,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar28,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar7 = *(FName *)FVar29;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      FStack_288.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      FStack_2f0 = FVar7;
      FStack_288.StatData.Pad = auVar43;
      FStack_288.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar30,&FStack_288);
      FStatsTrace::Add(&FStack_2f0,(long64)auVar43);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
  }
  auVar40[4] = '\0';
  auVar40[5] = '\0';
  auVar40[6] = '\0';
  auVar40[7] = '\0';
  auVar40._0_4_ = (pFVar27->SplineScalesLUT).NumBytes;
  if (auVar40 != (uchar  [8])0x0) {
    FVar29 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar28 = ::FName::FName(&FStack_1f8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar28,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar7 = *(FName *)FVar29;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      FStack_278.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      FStack_2e8 = FVar7;
      FStack_278.StatData.Pad = auVar40;
      FStack_278.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar30,&FStack_278);
      FStatsTrace::Add(&FStack_2e8,(long64)auVar40);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
  }
  auVar44[4] = '\0';
  auVar44[5] = '\0';
  auVar44[6] = '\0';
  auVar44[7] = '\0';
  auVar44._0_4_ = (pFVar27->SplineRotationsLUT).NumBytes;
  if (auVar44 != (uchar  [8])0x0) {
    FVar29 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar28 = ::FName::FName(&FStack_1f0,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar28,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar7 = *(FName *)FVar29;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      FStack_268.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      FStack_2e0 = FVar7;
      FStack_268.StatData.Pad = auVar44;
      FStack_268.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar30,&FStack_268);
      FStatsTrace::Add(&FStack_2e0,(long64)auVar44);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
  }
  return;
}

// Call @ 1492219f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  TKeyInitializer<unsigned___int64_const_&> TStackX_8;
  ulonglong *puStackX_18;
  
  lVar7 = *(longlong *)param_1;
  uVar1 = *(ulonglong *)((longlong)param_1 + 0x18);
  if (*(int *)(lVar7 + 0x18) != *(int *)(lVar7 + 0x44)) {
    lVar8 = *(longlong *)(lVar7 + 0x50);
    if (*(longlong *)(lVar7 + 0x50) == 0) {
      lVar8 = lVar7 + 0x48;
    }
    iVar6 = *(int *)(lVar8 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                             (ulonglong)(*(int *)(lVar7 + 0x58) - 1)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(lVar7 + 0x10) + (longlong)iVar6 * 0x50) == uVar1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!TheProxy->InstanceData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVolumeCache.cpp"
                             ,0x8e,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)(lVar7 + 0x10) + 0x48 + (longlong)iVar6 * 0x50);
      } while (iVar6 != -1);
    }
  }
  lVar7 = *(longlong *)param_1;
  puStackX_18 = (ulonglong *)((longlong)param_1 + 0x18);
  TSet<TTuple<unsigned___int64,FVolumeCacheInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FVolumeCacheInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar7 + 0x10),&TStackX_8,(bool *)&puStackX_18);
  uVar2 = *(undefined8 *)((longlong)param_1 + 8);
  lVar8 = *(longlong *)((longlong)param_1 + 0x10);
  lVar7 = (longlong)(int)TStackX_8.Key * 0x50 + *(longlong *)(lVar7 + 0x10);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar7 + 0x40);
  *(undefined8 *)(lVar7 + 0x38) = uVar2;
  *(longlong *)(lVar7 + 0x40) = lVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 149221a00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::__l14::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDISparseVolumeTextureInstanceData_RenderThread *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread,0>_>
                       *)(*(longlong *)param_1 + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8)
                     );
  pFVar1->RenderResources = *(FTextureRenderResources **)((longlong)param_1 + 0x10);
  *(undefined8 *)&(pFVar1->TextureSize).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x18);
  (pFVar1->TextureSize).field0_0x0._s_0.Z = *(int *)((longlong)param_1 + 0x20);
  pFVar1->MipLevels = *(int *)((longlong)param_1 + 0x24);
  pFVar1->NumFrames = *(int *)((longlong)param_1 + 0x28);
  return;
}

// Call @ 149221a60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l27::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNDIVirtualTextureSampleInstanceData_RenderThread *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread,0>_>
                       *)(*(longlong *)param_1 + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)param_1 + 8),(ulong64 *)((longlong)param_1 + 8)
                     );
  (pFVar1->TextureSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  pFVar1->MipLevels = 0;
  pFVar1->VirtualTextureResource = (FVirtualTexture2DResource *)0x0;
  pFVar1->VirtualTextureResource_SRGB = '\0';
  return;
}

// Call @ 149221ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  void *pvVar1;
  uint uVar2;
  
  *(byte *)(*(longlong *)param_1 + 0x70) = *(char *)(*(longlong *)param_1 + 0x70) - 1U & 1;
  *(undefined1 *)(*(longlong *)param_1 + 0x72) = *(undefined1 *)(*(longlong *)param_1 + 0x71);
  *(undefined1 *)(*(longlong *)param_1 + 0x71) = 1;
  uVar2 = *(int *)((longlong)param_1 + 0x10) << 4;
  pvVar1 = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_2,
                      *(FRHIBuffer **)
                       ((ulonglong)(*(byte *)(*(longlong *)param_1 + 0x70) & 1) * 0x20 + 0x30 +
                       *(longlong *)param_1),0,uVar2,RLM_WriteOnly);
  memcpy(pvVar1,*(void **)((longlong)param_1 + 8),(ulonglong)uVar2);
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_2,
             *(FRHIBuffer **)
              ((ulonglong)(*(byte *)(*(longlong *)param_1 + 0x70) & 1) * 0x20 + 0x30 +
              *(longlong *)param_1));
  uVar2 = *(int *)((longlong)param_1 + 0x20) << 4;
  pvVar1 = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_2,
                      *(FRHIBuffer **)
                       (((ulonglong)(*(byte *)(*(longlong *)param_1 + 0x70) & 1) + 2) * 0x20 +
                       *(longlong *)param_1),0,uVar2,RLM_WriteOnly);
  memcpy(pvVar1,*(void **)((longlong)param_1 + 0x18),(ulonglong)uVar2);
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_2,
             *(FRHIBuffer **)
              (((ulonglong)(*(byte *)(*(longlong *)param_1 + 0x70) & 1) + 2) * 0x20 +
              *(longlong *)param_1));
  return;
}

// Call @ 149287cf0

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

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FString_(__cdecl*)(FNiagaraSystemInstance_*),FString,FNiagaraSystemInstance_*>::
Call(FString *__return_storage_ptr__,void *param_1,FNiagaraSystemInstance **param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 149287d10

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(FString),void,FString>::Call
          (void *param_1,FString *param_2)

{
  code *pcVar1;
  FScriptContainerElement *local_18;
  int local_10;
  int local_c;
  
  pcVar1 = *(code **)param_1;
  local_18 = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10 = (param_2->Data).ArrayNum;
  local_c = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  (*pcVar1)(&local_18);
  return;
}

// Call @ 149287d50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_10>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l15::<lambda_10>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149287d80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_11>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l15::<lambda_11>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149287db0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_12>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l15::<lambda_12>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149287de0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_13>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l15::<lambda_13>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149287e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_14>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l15::<lambda_14>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149287e40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_15>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l15::<lambda_15>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149287e70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_16>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l19::<lambda_16>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149287ea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l22::<lambda_17>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l22::<lambda_17>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149287ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_18>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l19::<lambda_18>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149287f00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_19>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l19::<lambda_19>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149287f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::FNiagaraDebugHud'::__l2::<lambda_1>,void,TSharedPtr<FNiagaraGpuFrameResults,1>_const_&>
::Call(void *param_1,TSharedPtr<FNiagaraGpuFrameResults,1> *param_2)

{
  uint *puVar1;
  ulong64 *puVar2;
  FNiagaraGpuFrameResults *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName FVar5;
  code *pcVar6;
  byte *pbVar7;
  bool bVar8;
  int iVar9;
  UWorld *pUVar10;
  FNiagaraGpuComputeDispatchInterface *pFVar11;
  FGpuUsagePerEvent *pFVar12;
  UObject *this;
  UClass *pUVar13;
  UObject *pUVar14;
  FGpuUsagePerSystem *pFVar15;
  FGpuUsagePerEmitter *this_00;
  FGpuUsagePerStage *this_01;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *pTVar19;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *pTVar20;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
  *pTVar21;
  longlong lVar22;
  byte *pbVar23;
  int iVar24;
  FName *pFVar25;
  undefined1 auStackX_8 [8];
  uint uStackX_10;
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  undefined1 auStack_230 [16];
  uint uStack_220;
  uint uStack_21c;
  longlong lStack_218;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *pTStack_210;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *pTStack_208;
  char cStack_200;
  char cStack_1ff;
  longlong *plStack_1f8;
  undefined1 auStack_1f0 [16];
  uint uStack_1e0;
  uint uStack_1dc;
  longlong lStack_1d8;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
  *pTStack_1d0;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
  *pTStack_1c8;
  char cStack_1c0;
  char cStack_1bf;
  longlong *plStack_1b8;
  undefined1 auStack_1b0 [16];
  uint uStack_1a0;
  uint uStack_19c;
  longlong lStack_198;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
  *pTStack_190;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
  *pTStack_188;
  undefined2 uStack_180;
  longlong *plStack_178;
  undefined1 auStack_170 [16];
  uint uStack_160;
  uint uStack_15c;
  longlong lStack_158;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *pTStack_150;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *pTStack_148;
  undefined2 uStack_140;
  UObject *pUStack_138;
  UObject *pUStack_130;
  longlong lStack_128;
  byte *pbStack_120;
  TReferenceControllerBase<1> *pTStack_118;
  undefined1 auStack_110 [32];
  longlong lStack_f0;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *pTStack_e8;
  undefined1 auStack_e0 [32];
  longlong lStack_c0;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *pTStack_b8;
  undefined1 auStack_b0 [32];
  longlong lStack_90;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
  *pTStack_88;
  undefined1 auStack_80 [32];
  longlong lStack_60;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
  *pTStack_58;
  
  pUVar10 = (UWorld *)FWeakObjectPtr::Get(*(FWeakObjectPtr **)param_1);
  pFVar11 = FNiagaraGpuComputeDispatchInterface::Get(pUVar10);
  if ((param_2->Object == (FNiagaraGpuFrameResults *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = param_2->Object;
  if ((FNiagaraGpuComputeDispatchInterface *)pFVar3->OwnerContext == pFVar11) {
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    lVar22 = *(longlong *)param_1;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pbStack_120 = *(byte **)(lVar22 + 0x188);
    pTStack_118 = *(TReferenceControllerBase<1> **)(lVar22 + 400);
    *(FNiagaraGpuFrameResults **)(lVar22 + 0x188) = pFVar3;
    *(TReferenceControllerBase<1> **)(lVar22 + 400) = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_118)
    ;
    *(ulong64 *)(*(longlong *)param_1 + 0x198) = GFrameCounter;
    lVar22 = *(longlong *)param_1;
    if ((*(longlong *)(lVar22 + 0x188) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar24 = *(int *)(*(longlong *)(lVar22 + 0x188) + 0x18);
    if (*(longlong *)(lVar22 + 0x1a0) != *(longlong *)(*(longlong *)param_1 + 0x198)) {
      iVar9 = *(int *)(lVar22 + 0x1b8);
      if (*(int *)(lVar22 + 0x1b8) < *(int *)(lVar22 + 0x1c0)) {
        iVar9 = *(int *)(lVar22 + 0x1c0);
      }
      *(longlong *)(lVar22 + 0x1a0) = *(longlong *)(*(longlong *)param_1 + 0x198);
      uVar16 = *(int *)(lVar22 + 0x1b4) + 1;
      *(int *)(lVar22 + 0x1b8) = iVar9;
      *(undefined4 *)(lVar22 + 0x1c0) = 0;
      *(uint *)(lVar22 + 0x1b4) = uVar16;
      if ((*(byte *)(lVar22 + 0x1a8) == 0) || (0x1f < uVar16)) {
        *(byte *)(lVar22 + 0x1a8) = 0x1f < uVar16 | *(byte *)(lVar22 + 0x1a8);
        *(int *)(lVar22 + 0x1ac) = iVar9;
        *(float *)(lVar22 + 0x1b0) = (float)*(int *)(lVar22 + 0x1bc) / (float)uVar16;
        if (0x1f < uVar16) {
          *(undefined8 *)(lVar22 + 0x1b4) = 0;
          *(undefined4 *)(lVar22 + 0x1bc) = 0;
        }
      }
    }
    *(int *)(lVar22 + 0x1bc) = *(int *)(lVar22 + 0x1bc) + iVar24;
    *(int *)(lVar22 + 0x1c0) = *(int *)(lVar22 + 0x1c0) + iVar24;
    lVar22 = *(longlong *)param_1;
    if ((*(longlong *)(lVar22 + 0x188) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FNiagaraDebugHud::FSmoothedCounter<unsigned___int64>::Accumulate
              ((FSmoothedCounter<unsigned___int64> *)(lVar22 + 0x1c8),
               *(ulong64 *)(*(longlong *)param_1 + 0x198),
               *(ulong64 *)(*(longlong *)(lVar22 + 0x188) + 0x20));
    lVar22 = *(longlong *)param_1;
    if ((*(longlong *)(lVar22 + 0x188) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lStack_128 = *(longlong *)(lVar22 + 0x188);
    iVar24 = 1;
    uStackX_10 = *(uint *)(lStack_128 + 0x30);
    uVar18 = (ulonglong)(int)uStackX_10;
    pbVar23 = *(byte **)(lStack_128 + 0x28);
    pFVar25 = (FName *)(pbVar23 + 0x24);
    pbStack_120 = pbVar23 + uVar18 * 0x38;
    while( true ) {
      pbVar7 = pbStack_120;
      if (*(int *)(lStack_128 + 0x30) != (int)uVar18) {
        `TCheckedPointerIterator<FNiagaraGpuFrameResults::FDispatchResults,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(auStackX_8);
      }
      if (pbVar23 == pbVar7) break;
      if ((pFVar25[-3].ComparisonIndex.Value == 0) && (pFVar25[-3].Number == 0)) {
        FVar5 = *pFVar25;
        lVar22 = *(longlong *)param_1;
        uVar16 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
        pFVar12 = TMapBase<FName,FNiagaraDebugHud::FGpuUsagePerEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>_>
                  ::FindOrAddImpl<FName_const_&>
                            ((TMapBase<FName,FNiagaraDebugHud::FGpuUsagePerEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>_>
                              *)(lVar22 + 0x250),uVar16 + FVar5.Number,pFVar25);
        if ((pFVar12->InstanceCount).LastFrameSeen != *(ulong64 *)(*(longlong *)param_1 + 0x198)) {
          uVar16 = (pFVar12->InstanceCount).CurrentFrameMax;
          if (uVar16 < (pFVar12->InstanceCount).CurrentFrameSum) {
            uVar16 = (pFVar12->InstanceCount).CurrentFrameSum;
          }
          uVar17 = (pFVar12->InstanceCount).CurrentCount + 1;
          bVar8 = (pFVar12->InstanceCount).SmoothedSetOnce;
          (pFVar12->InstanceCount).LastFrameSeen = *(ulong64 *)(*(longlong *)param_1 + 0x198);
          (pFVar12->InstanceCount).CurrentFrameMax = uVar16;
          (pFVar12->InstanceCount).CurrentFrameSum = 0;
          (pFVar12->InstanceCount).CurrentCount = uVar17;
          if ((bVar8 == false) || (0x1f < uVar17)) {
            (pFVar12->InstanceCount).SmoothedFrameMax = uVar16;
            (pFVar12->InstanceCount).SmoothedSetOnce = (bool)(0x1f < uVar17 | bVar8);
            (pFVar12->InstanceCount).SmoothedTotalAvg =
                 (float)(pFVar12->InstanceCount).CurrentTotalSum / (float)uVar17;
            if (0x1f < uVar17) {
              (pFVar12->InstanceCount).CurrentCount = 0;
              (pFVar12->InstanceCount).CurrentFrameMax = 0;
              (pFVar12->InstanceCount).CurrentTotalSum = 0;
            }
          }
        }
        puVar1 = &(pFVar12->InstanceCount).CurrentTotalSum;
        *puVar1 = *puVar1 + 1;
        puVar1 = &(pFVar12->InstanceCount).CurrentFrameSum;
        *puVar1 = *puVar1 + 1;
        lVar22 = *(longlong *)&pFVar25[1].Number;
        if ((pFVar12->Microseconds).LastFrameSeen != *(ulong64 *)(*(longlong *)param_1 + 0x198)) {
          bVar8 = (pFVar12->Microseconds).SmoothedSetOnce;
          (pFVar12->Microseconds).LastFrameSeen = *(ulong64 *)(*(longlong *)param_1 + 0x198);
          uVar18 = (pFVar12->Microseconds).CurrentFrameMax;
          if (uVar18 < (pFVar12->Microseconds).CurrentFrameSum) {
            uVar18 = (pFVar12->Microseconds).CurrentFrameSum;
          }
          uVar16 = (pFVar12->Microseconds).CurrentCount + 1;
          (pFVar12->Microseconds).CurrentFrameMax = uVar18;
          (pFVar12->Microseconds).CurrentFrameSum = 0;
          (pFVar12->Microseconds).CurrentCount = uVar16;
          if ((bVar8 == false) || (0x1f < uVar16)) {
            (pFVar12->Microseconds).SmoothedFrameMax = uVar18;
            (pFVar12->Microseconds).SmoothedSetOnce = (bool)(0x1f < uVar16 | bVar8);
            (pFVar12->Microseconds).SmoothedTotalAvg =
                 (float)(pFVar12->Microseconds).CurrentTotalSum / (float)uVar16;
            if (0x1f < uVar16) {
              (pFVar12->Microseconds).CurrentCount = 0;
              (pFVar12->Microseconds).CurrentFrameMax = 0;
              (pFVar12->Microseconds).CurrentTotalSum = 0;
            }
          }
        }
        puVar2 = &(pFVar12->Microseconds).CurrentTotalSum;
        *puVar2 = *puVar2 + lVar22;
        puVar2 = &(pFVar12->Microseconds).CurrentFrameSum;
        *puVar2 = *puVar2 + lVar22;
      }
      else {
        this = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar25 + -3));
        if (this != (UObject *)0x0) {
          pUVar13 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
          pUVar14 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar13);
          if (pUVar14 != (UObject *)0x0) {
            lVar22 = *(longlong *)param_1;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar14);
            }
            FStackX_18.ObjectIndex = 0;
            FStackX_18.ObjectSerialNumber = 0;
            pUStack_138 = pUVar14;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar14);
            }
            FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&pUStack_138);
            pFVar15 = TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>_>
                      ::FindOrAddImpl<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_>
                                ((TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>_>
                                  *)(lVar22 + 0x200),
                                 FStackX_18.ObjectSerialNumber ^ FStackX_18.ObjectIndex,
                                 (TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> *)&FStackX_18);
            FNiagaraDebugHud::FSmoothedCounter<unsigned___int64>::Accumulate
                      (&pFVar15->Microseconds,*(ulong64 *)(*(longlong *)param_1 + 0x198),
                       *(ulong64 *)&pFVar25[1].Number);
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(this);
            }
            FStackX_20.ObjectIndex = 0;
            FStackX_20.ObjectSerialNumber = 0;
            pUStack_130 = this;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(this);
            }
            FWeakObjectPtr::operator=(&FStackX_20,(FObjectPtr)&pUStack_130);
            this_00 = TMapBase<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>_>
                      ::FindOrAddImpl<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>_>
                                ((TMapBase<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>_>
                                  *)&pFVar15->Emitters,
                                 FStackX_20.ObjectSerialNumber ^ FStackX_20.ObjectIndex,
                                 (TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr> *)&FStackX_20);
            FNiagaraDebugHud::FSmoothedCounter<unsigned___int64>::Accumulate
                      (&this_00->Microseconds,*(ulong64 *)(*(longlong *)param_1 + 0x198),
                       *(ulong64 *)&pFVar25[1].Number);
            FNiagaraDebugHud::FSmoothedCounter<unsigned_int>::Accumulate
                      (&this_00->InstanceCount,*(ulong64 *)(*(longlong *)param_1 + 0x198),1);
            FVar5 = *pFVar25;
            uVar16 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
            this_01 = TMapBase<FName,FNiagaraDebugHud::FGpuUsagePerStage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,FNiagaraDebugHud::FGpuUsagePerStage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>_>
                                  *)&this_00->Stages,uVar16 + FVar5.Number,pFVar25);
            FNiagaraDebugHud::FSmoothedCounter<unsigned___int64>::Accumulate
                      (&this_01->Microseconds,*(ulong64 *)(*(longlong *)param_1 + 0x198),
                       *(ulong64 *)&pFVar25[1].Number);
            FNiagaraDebugHud::FSmoothedCounter<unsigned_int>::Accumulate
                      (&this_01->InstanceCount,*(ulong64 *)(*(longlong *)param_1 + 0x198),1);
            if ((*pbVar23 & 1) != 0) {
              FNiagaraDebugHud::FSmoothedCounter<unsigned_int>::Accumulate
                        (&pFVar15->InstanceCount,*(ulong64 *)(*(longlong *)param_1 + 0x198),1);
            }
          }
        }
      }
      pbVar23 = pbVar23 + 0x38;
      pFVar25 = pFVar25 + 7;
      uVar18 = (ulonglong)uStackX_10;
    }
    pTVar19 = (TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
               *)(*(longlong *)param_1 + 0x200);
    TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)auStack_110,pTVar19);
    auStack_230._0_8_ = auStack_110._8_8_;
    stack0xfffffffffffffdd8 = auStack_110._16_16_;
    lStack_218 = lStack_f0;
    pTStack_210 = pTStack_e8;
    cStack_200 = '\0';
    cStack_1ff = '\0';
    uVar18 = auStack_110._24_8_ >> 0x20;
    uVar16 = auStack_110._28_4_;
    pTStack_208 = pTVar19;
    if ((int)uVar16 < *(int *)(auStack_110._16_8_ + 0x18)) {
      do {
        lVar22 = (longlong)(int)uVar18 * 200;
        if ((ulonglong)
            (*(longlong *)(*(longlong *)param_1 + 0x198) -
            *(longlong *)(lVar22 + 0x38 + *(longlong *)auStack_110._0_8_)) < 0x20) {
          pTVar20 = (TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
                     *)(*(longlong *)auStack_110._0_8_ + 0x70 + lVar22);
          TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
          ::TIterator::TIterator((TIterator *)auStack_e0,pTVar20);
          uStack_140 = 0;
          stack0xfffffffffffffe98 = auStack_e0._16_16_;
          plStack_178 = (longlong *)auStack_e0._0_8_;
          auStack_170._0_8_ = auStack_e0._8_8_;
          lStack_158 = lStack_c0;
          pTStack_150 = pTStack_b8;
          uVar18 = auStack_e0._24_8_ >> 0x20;
          uVar16 = auStack_e0._28_4_;
          pTStack_148 = pTVar20;
          if ((int)uVar16 < *(int *)(auStack_e0._16_8_ + 0x18)) {
            do {
              if ((ulonglong)
                  (*(longlong *)(*(longlong *)param_1 + 0x198) -
                  *(longlong *)((longlong)(int)uVar16 * 0xc0 + 0x30 + *plStack_178)) < 0x20) {
                pTVar21 = (TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
                           *)((longlong)(int)uVar16 * 0xc0 + *plStack_178 + 0x68);
                TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
                ::TIterator::TIterator((TIterator *)auStack_b0,pTVar21);
                uStack_180 = 0;
                stack0xfffffffffffffe58 = auStack_b0._16_16_;
                plStack_1b8 = (longlong *)auStack_b0._0_8_;
                auStack_1b0._0_8_ = auStack_b0._8_8_;
                lStack_198 = lStack_90;
                pTStack_190 = pTStack_88;
                uVar18 = auStack_b0._24_8_ >> 0x20;
                pTStack_188 = pTVar21;
                if (auStack_b0._28_4_ < *(int *)(auStack_b0._16_8_ + 0x18)) {
                  do {
                    if (0x1f < (ulonglong)
                               (*(longlong *)(*(longlong *)param_1 + 0x198) -
                               *(longlong *)((longlong)(int)uVar18 * 0x70 + 0x30 + *plStack_1b8))) {
                      TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
                      ::RemoveByIndex(pTStack_190,(int)uVar18);
                      uStack_180 = CONCAT11(uStack_180._1_1_,1);
                    }
                    uStack_1a0 = uStack_1a0 & ~auStack_1b0._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1b0);
                    uVar18 = (ulonglong)uStack_19c;
                  } while ((int)uStack_19c < *(int *)(auStack_1b0._8_8_ + 0x18));
                  if (((char)uStack_180 != '\0') && (uStack_180._1_1_ != '\0')) {
                    uVar16 = *(int *)&(pTStack_188->Elements).field_0x8 -
                             *(int *)&(pTStack_188->Elements).field_0x34;
                    if (uVar16 < 4) {
                      iVar9 = 1;
                    }
                    else {
                      uVar18 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
                      lVar22 = 0x3f;
                      if (uVar18 != 0) {
                        for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                        }
                      }
                      iVar9 = 1 << ((byte)lVar22 & 0x1f);
                    }
                    if (((0 < (int)uVar16) && (pTStack_188->HashSize < iVar9)) ||
                       (iVar9 < pTStack_188->HashSize)) {
                      pTStack_188->HashSize = iVar9;
                      TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
                      ::Rehash(pTStack_188);
                    }
                  }
                }
              }
              else {
                TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
                ::RemoveByIndex(pTStack_150,(int)uVar18);
                uStack_140 = CONCAT11(uStack_140._1_1_,1);
              }
              uStack_160 = uStack_160 & ~auStack_170._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_170);
              uVar18 = (ulonglong)uStack_15c;
              uVar16 = uStack_15c;
            } while ((int)uStack_15c < *(int *)(auStack_170._8_8_ + 0x18));
            if (((char)uStack_140 != '\0') && (uStack_140._1_1_ != '\0')) {
              uVar16 = *(int *)&(pTStack_148->Elements).field_0x8 -
                       *(int *)&(pTStack_148->Elements).field_0x34;
              if (uVar16 < 4) {
                iVar9 = 1;
              }
              else {
                uVar18 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
                lVar22 = 0x3f;
                if (uVar18 != 0) {
                  for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                  }
                }
                iVar9 = 1 << ((byte)lVar22 & 0x1f);
              }
              if (((0 < (int)uVar16) && (pTStack_148->HashSize < iVar9)) ||
                 (iVar9 < pTStack_148->HashSize)) {
                pTStack_148->HashSize = iVar9;
                TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
                ::Rehash(pTStack_148);
              }
            }
          }
        }
        else {
          TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_210,uVar16);
          cStack_200 = '\x01';
        }
        uStack_220 = uStack_220 & ~auStack_230._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_230);
        uVar18 = (ulonglong)uStack_21c;
        uVar16 = uStack_21c;
      } while ((int)uStack_21c < *(int *)(auStack_230._8_8_ + 0x18));
      if ((cStack_200 != '\0') && (cStack_1ff != '\0')) {
        uVar16 = *(int *)&(pTStack_208->Elements).field_0x8 -
                 *(int *)&(pTStack_208->Elements).field_0x34;
        if (uVar16 < 4) {
          iVar9 = 1;
        }
        else {
          uVar18 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar9 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((0 < (int)uVar16) && (pTStack_208->HashSize < iVar9)) ||
           (iVar9 < pTStack_208->HashSize)) {
          pTStack_208->HashSize = iVar9;
          TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
          ::Rehash(pTStack_208);
        }
      }
    }
    lVar22 = *(longlong *)param_1;
    TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)auStack_80,
               (TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
                *)(lVar22 + 0x250));
    cStack_1c0 = '\0';
    cStack_1bf = '\0';
    stack0xfffffffffffffe18 = auStack_80._16_16_;
    plStack_1f8 = (longlong *)auStack_80._0_8_;
    auStack_1f0._0_8_ = auStack_80._8_8_;
    lStack_1d8 = lStack_60;
    pTStack_1d0 = pTStack_58;
    uVar18 = auStack_80._24_8_ >> 0x20;
    uVar16 = auStack_80._28_4_;
    pTStack_1c8 = (TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
                   *)(lVar22 + 0x250);
    if ((int)uVar16 < *(int *)(auStack_80._16_8_ + 0x18)) {
      do {
        if (0x1f < (ulonglong)
                   (*(longlong *)(*(longlong *)param_1 + 0x198) -
                   *(longlong *)((longlong)(int)uVar18 * 0x70 + 0x30 + *plStack_1f8))) {
          TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_1d0,uVar16);
          cStack_1c0 = '\x01';
        }
        uStack_1e0 = uStack_1e0 & ~auStack_1f0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1f0);
        uVar18 = (ulonglong)uStack_1dc;
        uVar16 = uStack_1dc;
      } while ((int)uStack_1dc < *(int *)(auStack_1f0._8_8_ + 0x18));
      if ((cStack_1c0 != '\0') && (cStack_1bf != '\0')) {
        uVar16 = *(int *)&(pTStack_1c8->Elements).field_0x8 -
                 *(int *)&(pTStack_1c8->Elements).field_0x34;
        if (3 < uVar16) {
          uVar18 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar24 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((0 < (int)uVar16) && (pTStack_1c8->HashSize < iVar24)) ||
           (iVar24 < pTStack_1c8->HashSize)) {
          pTStack_1c8->HashSize = iVar24;
          TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
          ::Rehash(pTStack_1c8);
        }
      }
    }
  }
  return;
}

// Call @ 149287f40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataBufferReadback::GPUReadbackInternal'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FNiagaraDataBufferReadback::GPUReadbackInternal'::__l2::<lambda_1>::operator()(param_1,&local_18)
  ;
  return;
}

// Call @ 149287f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataSetReadback::GPUReadbackInternal'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FNiagaraDataSetReadback::GPUReadbackInternal'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 149287fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  FNiagaraDataSet *this;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  this = *(FNiagaraDataSet **)((longlong)param_1 + 8);
  if (this != (FNiagaraDataSet *)0x0) {
    FNiagaraDataSet::~FNiagaraDataSet(this);
    ::operator_delete(this,0xc0);
    return;
  }
  return;
}

// Call @ 149287ff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l5::<lambda_1>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l5::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149288020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataSetReadback::ImmediateReadback'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNiagaraGpuReadbackManager::WaitCompletion
            (*(FNiagaraGpuReadbackManager **)(*(longlong *)param_1 + 0x38),param_2);
  return;
}

// Call @ 149288040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataBufferReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,void>::
Call(void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  atomic<int> *paVar5;
  longlong lStack_38;
  TReferenceControllerBase<1> *pTStack_30;
  FReadAccessScope FStack_28;
  
  LOCK();
  *(int *)(*(longlong *)param_1 + 0x10) = *(int *)(*(longlong *)param_1 + 0x10) + -1;
  UNLOCK();
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x18),&FStack_28);
  if (*(int *)(lVar2 + 0x28) == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(lVar2 + 0x20);
  }
  lVar3 = *plVar4;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  lStack_38 = lVar2;
  pTStack_30 = pTVar1;
  (**(code **)(lVar3 + 0x60))(plVar4,&lStack_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Call @ 149288050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataSetReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  LOCK();
  *(int *)(*(longlong *)param_1 + 0x10) = *(int *)(*(longlong *)param_1 + 0x10) + -1;
  UNLOCK();
  lVar1 = *(longlong *)param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x168),&local_28);
  if (*(int *)(lVar1 + 0x178) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(lVar1 + 0x170);
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,lVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// Call @ 1492880b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001492880b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x110))(*(longlong **)param_1,param_2,1);
  return;
}

// Call @ 1492880d0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataSetReadback::EnqueueReadback'::__l19::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNiagaraDataSetReadback::GPUReadbackInternal
            (*(FNiagaraDataSetReadback **)param_1,param_2,
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x10),
             *(FNiagaraComputeExecutionContext **)((longlong)param_1 + 0x18));
  return;
}

// Call @ 1492880f0

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawValidation'::__l21::<lambda_1>,void,FNiagaraVariableBase_const_&,int>
::Call(void *param_1,FNiagaraVariableBase *param_2,int *param_3)

{
  FValidationErrorInfo *pFVar1;
  
  pFVar1 = FNiagaraDebugHud::GetValidationErrorInfo
                     (*(FNiagaraDebugHud **)param_1,
                      (UNiagaraComponent *)**(undefined8 **)((longlong)param_1 + 8));
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&pFVar1->SystemVariablesWithErrors,&param_2->Name);
  return;
}

// Call @ 149288120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraEmitterInstanceImpl::Tick'[::D]::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_18;
  longlong local_10;
  
  plVar1 = *(longlong **)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x20);
  pcVar3 = *(code **)(*plVar1 + 0x108);
  local_18 = *(undefined8 *)((longlong)param_1 + 0x10);
  local_10 = *(longlong *)((longlong)param_1 + 0x18);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(plVar1,*(undefined8 *)((longlong)param_1 + 8),&local_18,uVar2);
  return;
}

// Call @ 149288170

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_20>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l19::<lambda_20>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 1492881a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_21>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l19::<lambda_21>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 1492881d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_22>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l19::<lambda_22>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149288200

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l26::<lambda_23>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l26::<lambda_23>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149288230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawValidation'::__l26::<lambda_2>,void,FNiagaraVariableBase_const_&,unsigned_int,int>
::Call(void *param_1,FNiagaraVariableBase *param_2,uint *param_3,int *param_4)

{
  `FNiagaraDebugHud::DrawValidation'::__l26::<lambda_2>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 149288250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDataSetReadback::EnqueueReadback'::__l32::<lambda_2>,void>::Call
          (void *param_1)

{
  FNiagaraDataSetReadback::ReadbackCompleteInternal(*(FNiagaraDataSetReadback **)param_1);
  return;
}

// Call @ 149288260

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l11::<lambda_2>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l11::<lambda_2>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149288290

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraEmitterInstanceImpl::Tick'::__l245::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined4 uVar1;
  FRHIUniformBufferLayout *pFVar2;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar3;
  FRHIUniformBufferLayout *this;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TStack_88;
  int aiStack_80 [2];
  TMemoryImagePtr<FScriptContainerElement>_u_0 TStack_78;
  undefined8 uStack_70;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TStack_68;
  undefined8 uStack_60;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TStack_58;
  undefined8 uStack_50;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TStack_48;
  undefined8 uStack_40;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TStack_38;
  undefined8 uStack_30;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  
  pFVar2 = ::operator_new(0x98);
  this = (FRHIUniformBufferLayout *)0x0;
  if (pFVar2 != (FRHIUniformBufferLayout *)0x0) {
    uVar1 = *(undefined4 *)((longlong)param_1 + 8);
    TStack_88.Packed = 0;
    aiStack_80[0] = 0;
    aiStack_80[1] = 0;
    ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (2,2,0x1d,(ForAnyElementType *)&TStack_88.Frozen,aiStack_80,aiStack_80 + 1);
    TVar3 = TStack_88;
    if ((TStack_88.Packed & 1) != 0) {
      TVar3.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&TStack_88 + ((longlong)TStack_88.Packed >> 0x18));
    }
    FGenericPlatformString::Memcpy(TVar3.UnfrozenPtr,L"Niagara GPU External CBuffer",0x3a);
    TStack_78.Packed = 0;
    uStack_70 = 0;
    TStack_68.Packed = 0;
    uStack_60 = 0;
    TStack_58.Packed = 0;
    uStack_50 = 0;
    TStack_48.Packed = 0;
    uStack_40 = 0;
    TStack_38.Packed = 0;
    uStack_30 = 0;
    TStack_28.Packed = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    uStack_10 = 0x1ffffff;
    uStack_c = 0;
    uStack_14 = uVar1;
    FRHIUniformBufferLayoutInitializer::ComputeHash
              ((FRHIUniformBufferLayoutInitializer *)&TStack_88.Frozen);
    FRHIUniformBufferLayout::FRHIUniformBufferLayout
              (pFVar2,(FRHIUniformBufferLayoutInitializer *)&TStack_88.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&TStack_28.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&TStack_38.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&TStack_48.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&TStack_58.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&TStack_68.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&TStack_78.Frozen);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&TStack_88.Frozen);
    pFVar2->_padding_ = (longlong)&___7FNiagaraRHIUniformBufferLayout__6B_;
    this = pFVar2;
  }
  pFVar2 = *(FRHIUniformBufferLayout **)(*(longlong *)param_1 + 0x78);
  if (pFVar2 != this) {
    *(FRHIUniformBufferLayout **)(*(longlong *)param_1 + 0x78) = this;
    if (this != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this);
    }
    if (pFVar2 != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  return;
}

// Call @ 1492882a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_3>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l8::<lambda_3>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 1492882d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_4>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l8::<lambda_4>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149288300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_5>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l8::<lambda_5>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149288330

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_6>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l8::<lambda_6>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149288360

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_7>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l8::<lambda_7>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 149288390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_8>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l15::<lambda_8>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 1492883c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_9>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
::Call(void *param_1,FCanvas **param_2,UFont **param_3,float *param_4,float *param_5,
      FOverviewColumn *param_6,FSystemDebugInfo *param_7)

{
  `FNiagaraDebugHud::DrawOverview'::__l15::<lambda_9>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 1492ddb70

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int),void,int>::Call
          (void *param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001492ddb75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

// Call @ 1492ddb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::__l2::<lambda_1>,void,FNiagaraMeshRendererMeshProperties_const_&>
::Call(void *param_1,FNiagaraMeshRendererMeshProperties *param_2)

{
  int *piVar1;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar5;
  code *pcVar6;
  UStaticMesh *this;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FNiagaraRenderableStaticMesh *pFVar10;
  FStaticMeshRenderData *pFVar11;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar12;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar13;
  uint uVar14;
  ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> FVar15;
  longlong *plVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  longlong *plVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_2a8 [32];
  ForElementType<FPSOPrecacheVertexFactoryData> *pFStack_288;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFStack_280;
  longlong lStack_278;
  longlong lStack_270;
  undefined8 uStack_268;
  undefined1 auStack_258 [8];
  UStaticMesh *pUStack_250;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> TStack_248;
  FScriptContainerElement *pFStack_238;
  undefined1 auStack_230 [16];
  INiagaraRenderableMeshInterface *pIStack_220;
  FPSOPrecacheVertexFactoryData FStack_218;
  FStaticMeshDataType FStack_208;
  FNiagaraRenderableStaticMesh FStack_148;
  TArray<FVertexElement,TFixedAllocator<17>_> TStack_d8;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  pIStack_220 = (INiagaraRenderableMeshInterface *)0x0;
  pUStack_250 = (UStaticMesh *)0x0;
  NiagaraMeshRendererPropertiesInternal::ResolveRenderableMeshInternal
            (param_2,(FNiagaraEmitterInstance *)**(undefined8 **)param_1,&pIStack_220,&pUStack_250);
  this = pUStack_250;
  if (pUStack_250 != (UStaticMesh *)0x0) {
    TStack_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_248.ArrayNum = 0;
    TStack_248.ArrayMax = 0;
    pFVar10 = FNiagaraRenderableStaticMesh::FNiagaraRenderableStaticMesh(&FStack_148,pUStack_250);
    (**(code **)(pFVar10->_padding_ + 0x40))(pFVar10);
    FStack_148._padding_ = (longlong)&___7INiagaraRenderableMesh__6B_;
    if ((longlong *)FStack_148._padding_ != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)(FStack_148._padding_ + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)FStack_148._padding_ + 8))();
      }
    }
    if (TStack_248.ArrayNum != 0) {
      UNiagaraMeshRendererProperties::ApplyMaterialOverrides
                (*(UNiagaraMeshRendererProperties **)((longlong)param_1 + 8),
                 (FNiagaraEmitterInstance *)0x0,&TStack_248);
      iVar3 = TStack_248.ArrayNum;
      pFVar17 = TStack_248.AllocatorInstance.Data + (longlong)TStack_248.ArrayNum * 8;
      FVar18.Data = TStack_248.AllocatorInstance.Data;
      pFStack_238 = pFVar17;
      while( true ) {
        if (TStack_248.ArrayNum != iVar3) {
          auStack_258[0] = 0;
          `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStack_258);
        }
        if (FVar18.Data == pFVar17) break;
        lVar4 = *(longlong *)FVar18.Data;
        if (lVar4 != 0) {
          FVar15 = *(ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> *)
                    ((longlong)param_1 + 0x10);
          iVar8 = *(int *)((ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> *)
                          ((longlong)FVar15 + 0x78))->InlineData;
          if (iVar8 == *(int *)((longlong)FVar15 + 0x7c)) {
            iVar8 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams>_>
                              (0x838,(ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams>
                                      *)FVar15,(int *)((longlong)FVar15 + 0x7c));
          }
          *(int *)((ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> *)
                  ((longlong)FVar15 + 0x78))->InlineData = iVar8 + 1;
          if (*(ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> *)
               ((longlong)FVar15 + 0x70) !=
              (ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams>)0x0) {
            FVar15 = *(ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> *)
                      ((longlong)FVar15 + 0x70);
          }
          plVar19 = (longlong *)((longlong)iVar8 * 0x38 + (longlong)FVar15);
          DefaultConstructItems<UNiagaraRendererProperties::FPSOPrecacheParams,int>(plVar19,1);
          *plVar19 = lVar4;
          if (**(char **)((longlong)param_1 + 0x18) == '\0') {
            uVar9 = UStaticMesh::GetMinLODIdx(this,false);
            pFVar11 = UStaticMesh::GetRenderData(this);
            pFVar17 = pFStack_238;
            if (((int)uVar9 < 0) || ((pFVar11->LODResources).Array.ArrayNum <= (int)uVar9))
            goto LAB_1492d5afc;
            FStack_208.TextureCoordinates.ArrayMax = 4;
            FStack_208.PositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
            FStack_208.PositionComponent.StreamOffset = 0;
            FStack_208.PositionComponent.Offset = '\0';
            FStack_208.PositionComponent.Stride = '\0';
            FStack_208.PositionComponent.Type.Value = '\0';
            FStack_208.PositionComponent.VertexStreamUsage = Default;
            FStack_208.TangentBasisComponents[0].VertexBuffer = (FVertexBuffer *)0x0;
            FStack_208.TangentBasisComponents[0].StreamOffset = 0;
            FStack_208.TangentBasisComponents[0].Offset = '\0';
            FStack_208.TangentBasisComponents[0].Stride = '\0';
            FStack_208.TangentBasisComponents[0].Type.Value = '\0';
            FStack_208.TangentBasisComponents[0].VertexStreamUsage = Default;
            FStack_208.TangentBasisComponents[1].VertexBuffer = (FVertexBuffer *)0x0;
            FStack_208.TangentBasisComponents[1].StreamOffset = 0;
            FStack_208.TangentBasisComponents[1].Offset = '\0';
            FStack_208.TangentBasisComponents[1].Stride = '\0';
            FStack_208.TangentBasisComponents[1].Type.Value = '\0';
            FStack_208.TangentBasisComponents[1].VertexStreamUsage = Default;
            FStack_208.TextureCoordinates.ArrayNum = 0;
            FStack_208.LightMapCoordinateComponent.VertexBuffer = (FVertexBuffer *)0x0;
            FStack_208.LightMapCoordinateComponent.StreamOffset = 0;
            FStack_208.LightMapCoordinateComponent.Offset = '\0';
            FStack_208.LightMapCoordinateComponent.Stride = '\0';
            FStack_208.LightMapCoordinateComponent.Type.Value = '\0';
            FStack_208.LightMapCoordinateComponent.VertexStreamUsage = Default;
            FStack_208.ColorComponent.VertexBuffer = (FVertexBuffer *)0x0;
            FStack_208.ColorComponent.StreamOffset = 0;
            FStack_208.ColorComponent.Offset = '\0';
            FStack_208.ColorComponent.Stride = '\0';
            FStack_208.ColorComponent.Type.Value = '\0';
            FStack_208.ColorComponent.VertexStreamUsage = Default;
            FStack_208.PositionComponentSRV = (FRHIShaderResourceView *)0x0;
            FStack_208.TangentsSRV = (FRHIShaderResourceView *)0x0;
            FStack_208.LODLightmapDataIndex = '\0';
            FStack_208.TextureCoordinatesSRV = (FRHIShaderResourceView *)0x0;
            FStack_208.ColorComponentsSRV = (FRHIShaderResourceView *)0x0;
            TStack_d8.ArrayNum = 0;
            FStack_208.ColorIndexMask = 0xffffffff;
            FStack_208.LightMapCoordinateIndex = -1;
            FStack_208.NumTexCoords = '\0';
            TStack_d8.ArrayMax = 0x11;
            pFVar11 = UStaticMesh::GetRenderData(this);
            iVar8 = (pFVar11->LODResources).Array.ArrayNum;
            uVar14 = 0;
            if ((int)uVar9 < iVar8) {
              uVar14 = ~uVar9 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (pFStack_288 = (ForElementType<FPSOPrecacheVertexFactoryData> *)(longlong)(int)uVar9,
               pFStack_280 = (ForElementType<FPSOPrecacheVertexFactoryData> *)(longlong)iVar8,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar4 = *(longlong *)
                     ((pFVar11->LODResources).Array.AllocatorInstance.Data +
                     (longlong)(int)uVar9 * 8);
            FPositionVertexBuffer::BindPositionVertexBuffer
                      ((FPositionVertexBuffer *)(lVar4 + 0x188),(FVertexFactory *)0x0,&FStack_208);
            FStaticMeshVertexBuffer::BindTangentVertexBuffer
                      ((FStaticMeshVertexBuffer *)(lVar4 + 0xd0),(FVertexFactory *)0x0,&FStack_208);
            FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
                      ((FStaticMeshVertexBuffer *)(lVar4 + 0xd0),(FVertexFactory *)0x0,&FStack_208,4
                      );
            FColorVertexBuffer::BindColorVertexBuffer
                      ((FColorVertexBuffer *)(lVar4 + 0x1d8),(FVertexFactory *)0x0,&FStack_208);
            FNiagaraMeshVertexFactory::GetVertexElements
                      (GMaxRHIFeatureLevel,*(bool *)*(undefined8 *)((longlong)param_1 + 0x18),
                       &FStack_208,&TStack_d8);
            pFVar2 = (ForElementType<FPSOPrecacheVertexFactoryData> *)(plVar19 + 1);
            pFVar12 = (ForElementType<FPSOPrecacheVertexFactoryData> *)
                      FPSOPrecacheVertexFactoryData::FPSOPrecacheVertexFactoryData
                                (&FStack_218,
                                 (FVertexFactoryType *)**(undefined8 **)((longlong)param_1 + 0x20),
                                 &TStack_d8);
            pFVar5 = (ForElementType<FPSOPrecacheVertexFactoryData> *)plVar19[5];
            pFVar13 = pFVar2;
            if (pFVar5 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
              pFVar13 = pFVar5;
            }
            if (pFVar13 <= pFVar12) {
              pFVar13 = pFVar2;
              if (pFVar5 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
                pFVar13 = pFVar5;
              }
              if (pFVar12 < (ForElementType<FPSOPrecacheVertexFactoryData> *)
                            (pFVar13->InlineData +
                            (longlong)*(int *)((longlong)plVar19 + 0x34) * 0x10)) {
                lStack_270 = (longlong)(int)plVar19[6];
                uStack_268 = 0x10;
                pFStack_280 = pFVar2;
                if (pFVar5 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
                  pFStack_280 = pFVar5;
                }
                pFStack_288 = pFVar12;
                lStack_278 = (longlong)*(int *)((longlong)plVar19 + 0x34);
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
            }
            iVar8 = (int)plVar19[6];
            if (iVar8 == *(int *)((longlong)plVar19 + 0x34)) {
              iVar8 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                                (0x810,pFVar2,(int *)((longlong)plVar19 + 0x34));
            }
            *(int *)(plVar19 + 6) = iVar8 + 1;
            uVar20 = *(undefined4 *)pFVar12->InlineData;
            uVar21 = *(undefined4 *)(pFVar12->InlineData + 4);
            uVar22 = *(undefined4 *)(pFVar12->InlineData + 8);
            uVar23 = *(undefined4 *)(pFVar12->InlineData + 0xc);
          }
          else {
            pFVar2 = (ForElementType<FPSOPrecacheVertexFactoryData> *)(plVar19 + 1);
            pFVar5 = (ForElementType<FPSOPrecacheVertexFactoryData> *)plVar19[5];
            auStack_230._0_8_ = *(undefined8 *)*(uchar **)((longlong)param_1 + 0x20);
            pFVar13 = pFVar2;
            if (pFVar5 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
              pFVar13 = pFVar5;
            }
            auStack_230[8] = '\0';
            auStack_230[9] = '\0';
            auStack_230[10] = '\0';
            auStack_230[0xb] = '\0';
            auStack_230[0xc] = '\0';
            auStack_230[0xd] = '\0';
            auStack_230[0xe] = '\0';
            auStack_230[0xf] = '\0';
            if (pFVar13 <= (ForElementType<FPSOPrecacheVertexFactoryData> *)auStack_230) {
              pFVar13 = pFVar2;
              if (pFVar5 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
                pFVar13 = pFVar5;
              }
              if (auStack_230 <
                  pFVar13->InlineData + (longlong)*(int *)((longlong)plVar19 + 0x34) * 0x10) {
                lStack_270 = (longlong)(int)plVar19[6];
                uStack_268 = 0x10;
                pFStack_280 = pFVar2;
                if (pFVar5 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
                  pFStack_280 = pFVar5;
                }
                pFStack_288 = (ForElementType<FPSOPrecacheVertexFactoryData> *)auStack_230;
                lStack_278 = (longlong)*(int *)((longlong)plVar19 + 0x34);
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
            }
            iVar8 = (int)plVar19[6];
            if (iVar8 == *(int *)((longlong)plVar19 + 0x34)) {
              iVar8 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                                (0x810,pFVar2,(int *)((longlong)plVar19 + 0x34));
            }
            *(int *)(plVar19 + 6) = iVar8 + 1;
            uVar20 = auStack_230._0_4_;
            uVar21 = auStack_230._4_4_;
            uVar22 = auStack_230._8_4_;
            uVar23 = auStack_230._12_4_;
          }
          plVar16 = plVar19 + 1;
          if ((longlong *)plVar19[5] != (longlong *)0x0) {
            plVar16 = (longlong *)plVar19[5];
          }
          plVar16 = plVar16 + (longlong)iVar8 * 2;
          *(undefined4 *)plVar16 = uVar20;
          *(undefined4 *)((longlong)plVar16 + 4) = uVar21;
          *(undefined4 *)(plVar16 + 1) = uVar22;
          *(undefined4 *)((longlong)plVar16 + 0xc) = uVar23;
          pFVar17 = pFStack_238;
        }
LAB_1492d5afc:
        FVar18.Data = FVar18.Data + 8;
      }
    }
    if (TStack_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_248.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 1492ddb90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  FNiagaraGpuReadbackManager *this;
  code *pcVar2;
  bool bVar3;
  
  FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush
            (*(FNiagaraGpuComputeDispatch **)param_1,param_2,true);
  lVar1 = *(longlong *)param_1;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraGPUInstanceCountManager::FlushIndirectArgsPool
            ((FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48),(FRHICommandListBase *)param_2);
  this = *(FNiagaraGpuReadbackManager **)(*(longlong *)param_1 + 0x38);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
  FNiagaraGpuReadbackManager::TickInternal(this,true);
  return;
}

// Call @ 1492ddba0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush
            (*(FNiagaraGpuComputeDispatch **)param_1,param_2,true);
  lVar1 = *(longlong *)param_1;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraGPUInstanceCountManager::FlushIndirectArgsPool
            ((FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48),(FRHICommandListBase *)param_2);
  return;
}

// Call @ 1492ddc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraMeshRendererProperties::GetUsedMaterials'::__l2::<lambda_1>,void,FNiagaraMeshRendererMeshProperties_const_&>
::Call(void *param_1,FNiagaraMeshRendererMeshProperties *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  UStaticMesh *pUVar6;
  longlong lVar7;
  FNiagaraRenderableStaticMesh *pFVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 auStackY_f8 [32];
  undefined1 auStack_c8 [8];
  UStaticMesh *pUStack_c0;
  INiagaraRenderableMeshInterface *apIStack_b8 [2];
  FNiagaraRenderableStaticMesh FStack_a8;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar4 = *(ForAnyElementType **)param_1;
  iVar3 = *(int *)((longlong)&pFVar4[1].Data + 4);
  *(undefined4 *)&pFVar4[1].Data = 0;
  if (iVar3 < 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
  }
  apIStack_b8[0] = (INiagaraRenderableMeshInterface *)0x0;
  pUStack_c0 = (UStaticMesh *)0x0;
  NiagaraMeshRendererPropertiesInternal::ResolveRenderableMeshInternal
            (param_2,(FNiagaraEmitterInstance *)**(undefined8 **)((longlong)param_1 + 8),apIStack_b8
             ,&pUStack_c0);
  if ((apIStack_b8[0] == (INiagaraRenderableMeshInterface *)0x0) ||
     (**(longlong **)((longlong)param_1 + 0x10) == 0)) {
    if (pUStack_c0 != (UStaticMesh *)0x0) {
      pFVar8 = FNiagaraRenderableStaticMesh::FNiagaraRenderableStaticMesh(&FStack_a8,pUStack_c0);
      (**(code **)(pFVar8->_padding_ + 0x40))(pFVar8,*(undefined8 *)param_1);
      FStack_a8._padding_ = (longlong)&___7INiagaraRenderableMesh__6B_;
      if ((longlong *)FStack_a8._padding_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(FStack_a8._padding_ + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)FStack_a8._padding_ + 8))(FStack_a8._padding_,1);
        }
      }
    }
  }
  else {
    (**(code **)((longlong)*apIStack_b8[0] + 0x18))
              (apIStack_b8[0],*(undefined8 *)(**(longlong **)((longlong)param_1 + 0x10) + 0x120),
               *(undefined8 *)param_1);
  }
  if (0 < (*(TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> **)param_1)->ArrayNum) {
    UNiagaraMeshRendererProperties::ApplyMaterialOverrides
              (*(UNiagaraMeshRendererProperties **)((longlong)param_1 + 0x18),
               (FNiagaraEmitterInstance *)**(undefined8 **)((longlong)param_1 + 8),
               *(TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> **)param_1);
    pFVar4 = *(ForAnyElementType **)((longlong)param_1 + 0x20);
    uVar10 = *(int *)(*(longlong *)param_1 + 8) + *(int *)&pFVar4[1].Data;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (*piVar1 < (int)uVar10) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar10,pFVar4,*(int *)&pFVar4[1].Data,piVar1);
    }
    plVar5 = *(longlong **)param_1;
    puVar9 = (undefined8 *)*plVar5;
    lVar7 = plVar5[1];
    puVar2 = puVar9 + (int)lVar7;
    while( true ) {
      if ((int)plVar5[1] != (int)lVar7) {
        `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStack_c8);
      }
      if (puVar9 == puVar2) break;
      pUVar6 = (UStaticMesh *)*puVar9;
      if (GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar6 != (UStaticMesh *)0x0) goto LAB_1492d5efd;
      }
      else if (pUVar6 != (UStaticMesh *)0x0) {
        GC::MarkAsReachable((UObject *)pUVar6);
LAB_1492d5efd:
        pUStack_c0 = pUVar6;
        TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<UMaterialInterface_*>
                  (*(TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> **)
                    ((longlong)param_1 + 0x20),(UMaterialInterface **)&pUStack_c0);
      }
      puVar9 = puVar9 + 1;
    }
  }
  return;
}

// Call @ 1492ddc20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraGPUProfilerInterface::PostResults'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TMulticastDelegate<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FNiagaraGPUProfilerInterface::OnFrameResults_GameThread,param_1);
  return;
}

// Call @ 1492ddc40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraGpuComputeDispatch::Tick'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush
            (*(FNiagaraGpuComputeDispatch **)param_1,param_2,false);
  lVar1 = *(longlong *)param_1;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraGPUInstanceCountManager::FlushIndirectArgsPool
            ((FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48),(FRHICommandListBase *)param_2);
  return;
}

// Call @ 1492ddcb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::__l6::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
::Call(void *param_1,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_2)

{
  TArrayView<TTuple<void_*,unsigned_int>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::__l6::<lambda_1>::operator()
            (param_1,&local_18);
  return;
}

// Call @ 1492ddce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NiagaraLWCHelper::RebaseEmitters'::__l20::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  NiagaraLWCHelper::RebaseGPUEmitters
            (param_2,param_1,
             (TArray<FNiagaraComputeExecutionContext_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)((longlong)param_1 + 0x10),
             *(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 0x60));
  return;
}

// Call @ 1492ddd00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l2::<lambda_3>,void>::Call
          (void *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  FRHIResource *this;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar9;
  FRHIPooledRenderQuery FStack_28;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)(*(longlong *)param_1 + 0x278);
  if (*(longlong *)(lVar2 + 0xb0) != 0) {
    puVar7 = (undefined8 *)
             (**(code **)(**(longlong **)(lVar2 + 0xc0) + 0x10))
                       (*(longlong **)(lVar2 + 0xc0),&FStack_28);
    puVar3 = *(undefined8 **)(lVar2 + 0xb0);
    if (puVar3 != puVar7) {
      this = (FRHIResource *)*puVar3;
      *puVar3 = *puVar7;
      *puVar7 = 0;
      if (this != (FRHIResource *)0x0) {
        FRHIResource::Release(this);
      }
    }
    puVar3[1] = puVar7[1];
    FRHIPooledRenderQuery::~FRHIPooledRenderQuery(&FStack_28);
    (**(code **)(GDynamicRHI->_padding_ + 0x280))(GDynamicRHI,uVar1,**(undefined8 **)(lVar2 + 0xb0))
    ;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(int *)(lVar2 + 0xc) = (*(int *)(lVar2 + 0xc) + 1) % 5;
  }
  if (*(char *)((longlong)param_1 + 0x10) != '\0') {
    FNiagaraGpuComputeDispatch::FinishDispatches(*(FNiagaraGpuComputeDispatch **)param_1);
    lVar2 = *(longlong *)param_1;
    this_00 = (TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_> *)
              (lVar2 + 0x328);
    uVar8 = 0;
    while ((-1 < (int)uVar8 && ((int)uVar8 < *(int *)(lVar2 + 0x330)))) {
      if (((int)uVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10;
      if ((*(longlong *)(pFVar9 + 8) == 0) || (*(int *)(*(longlong *)(pFVar9 + 8) + 8) != 1)) {
        if ((*(longlong *)pFVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FNiagaraDataChannelDataProxy::EndFrame
                  (*(FNiagaraDataChannelDataProxy **)pFVar9,
                   *(FNiagaraGpuComputeDispatchInterface **)param_1,
                   *(FRHICommandListImmediate **)((longlong)param_1 + 8));
        uVar8 = uVar8 + 1;
      }
      else {
        if ((*(longlong *)pFVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FNiagaraDataChannelDataProxy::OnRemovedFromDispatcher
                  (*(FNiagaraDataChannelDataProxy **)pFVar9,
                   *(FNiagaraGpuComputeDispatchInterface **)param_1);
        uVar6 = 0;
        if ((int)uVar8 < *(int *)(lVar2 + 0x330)) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(this_00,uVar8);
        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this_00,*(int *)(lVar2 + 0x330),
                   (int *)(lVar2 + 0x334));
      }
    }
  }
  return;
}

// Call @ 1492ddd10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l2::<lambda_8>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  DestructItems<FNiagaraGpuDispatchGroup,int>
            (*(FNiagaraGpuDispatchGroup **)(lVar1 + 0x10),*(int *)(lVar1 + 0x18));
  *(undefined4 *)(lVar1 + 0x18) = 0;
  if (*(int *)(lVar1 + 0x1c) != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(lVar1 + 0x10),0,(int *)(lVar1 + 0x1c));
  }
  return;
}

// Call @ 14933f1f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraRendererLayout::Finalize'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)param_1;
  puVar1 = (undefined8 *)((longlong)param_1 + 8);
  puVar3 = (undefined8 *)(lVar2 + 0x10);
  if (puVar3 != puVar1) {
    if ((void *)*puVar3 != (void *)0x0) {
      FMemory::Free((void *)*puVar3);
    }
    *puVar3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)((longlong)param_1 + 0x10);
    *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  *(undefined2 *)(*(longlong *)param_1 + 0x24) = *(undefined2 *)((longlong)param_1 + 0x18);
  *(undefined2 *)(*(longlong *)param_1 + 0x26) = *(undefined2 *)((longlong)param_1 + 0x1a);
  return;
}

// Call @ 14933f270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraRendererComponents::FindProperty'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  TStringView<wchar_t> TVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FName *pFVar6;
  FName local_res8 [4];
  
  pFVar3 = *(ForAnyElementType **)param_1;
  TVar2 = *param_2;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  iVar5 = *(int *)&pFVar3[1].Data;
  if (iVar5 == *piVar1) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar5 + 1;
  pFVar4 = pFVar3->Data;
  pFVar6 = ::FName::FName(local_res8,TVar2.Size,TVar2.DataPtr,FNAME_Add);
  *(FName *)(pFVar4 + (longlong)iVar5 * 8) = *pFVar6;
  return;
}

// Call @ 14933f2e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FNiagaraRendererMeshes::Initialize'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14933f2f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraRendererComponents::DestroyRenderState_Concurrent'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  UObject *pUVar2;
  AActor *this;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr *pFVar3;
  undefined1 auStackX_8 [8];
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  this_00 = *(FWeakObjectPtr **)param_1;
  pFVar3 = this_00 + (longlong)iVar1 * 0xd;
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar1) {
      `TCheckedPointerIterator<FNiagaraRendererComponents::FComponentPoolEntry_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (this_00 == pFVar3) break;
    pUVar2 = FWeakObjectPtr::Get(this_00);
    if (pUVar2 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar2 + 0x4a0))(pUVar2);
    }
    this_00 = this_00 + 0xd;
  }
  this = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x10));
  if (this != (AActor *)0x0) {
    AActor::Destroy(this,false,true);
  }
  return;
}

// Call @ 14933f300

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_2>,void,FNiagaraMeshRendererMeshProperties_const_&>
::Call(void *param_1,FNiagaraMeshRendererMeshProperties *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  undefined4 uVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulonglong *puVar12;
  TQuat<double> *pTVar13;
  ForElementType<unsigned_int> *pFVar14;
  UClass *pUVar15;
  ForElementType<unsigned_int> FVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ForElementType<FNiagaraRendererMeshes::FMeshData> *pFVar20;
  ForElementType<unsigned_int> FVar21;
  longlong *plVar22;
  ForAnyElementType FVar23;
  ForElementType<unsigned_int> *pFVar24;
  undefined4 uVar25;
  undefined1 auStackX_18 [8];
  int iStackX_20;
  uchar auStack_138 [16];
  TSharedPtr<INiagaraRenderableMesh,1> TStack_128;
  uint uStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> TStack_100;
  longlong lStack_f0;
  FScriptContainerElement *pFStack_e8;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined8 uStack_bc;
  float fStack_b4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [16];
  ForElementType<unsigned_int> FStack_98;
  ForElementType<unsigned_int> FStack_90;
  TQuat<double> aTStack_88 [2];
  
  FNiagaraMeshRendererMeshProperties::ResolveRenderableMesh
            (param_2,&TStack_128,*(FNiagaraEmitterInstance **)((longlong)param_1 + 0x10));
  if ((ForElementType<unsigned_int>)TStack_128.Object != (ForElementType<unsigned_int>)0x0) {
    uStack_108 = 0;
    iStackX_20 = 1;
    *(int *)(*(longlong *)param_1 + 0x210) = **(int **)((longlong)param_1 + 8) + 1;
    if (param_2->LODMode == LODLevel) {
      uStack_108 = (ulonglong)(uint)param_2->LODLevel;
      iStackX_20 = param_2->LODLevel + 1;
    }
    else if (param_2->LODMode == PerParticle) {
      if (((ForElementType<unsigned_int>)TStack_128.Object == (ForElementType<unsigned_int>)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar12 = (ulonglong *)
                (**(code **)(*(longlong *)TStack_128.Object + 0x48))(TStack_128.Object,auStack_b0);
      uVar19 = *puVar12;
      uStack_110._4_4_ = (int)(uVar19 >> 0x20);
      iStackX_20 = uStack_110._4_4_;
      if (param_2->bUseLODRange == false) {
        uStack_108 = uVar19 & 0xffffffff;
      }
      else {
        uStack_108 = uVar19 & 0xffffffff;
        if ((int)uVar19 < (param_2->LODRange).field0_0x0._s_0.X) {
          uStack_108 = (ulonglong)(uint)(param_2->LODRange).field0_0x0._s_0.X;
        }
        if (uStack_110._4_4_ < (param_2->LODRange).field0_0x0._s_0.Y) {
          iStackX_20 = (param_2->LODRange).field0_0x0._s_0.Y;
        }
      }
      uVar1 = *(uint *)(*(longlong *)param_1 + 0x218);
      uVar10 = 0;
      if (1 < iStackX_20 - (int)uStack_108) {
        uVar10 = 0x80;
      }
      *(uint *)(*(longlong *)param_1 + 0x218) = (uVar10 | uVar1 & 0x80) ^ uVar1 & 0xffffff7f;
      uStack_110 = uVar19;
    }
    uVar7 = __real_bf800000;
    uStack_118 = (uint)uStack_108;
    uVar19 = uStack_108;
    if ((int)uStack_118 < iStackX_20) {
      do {
        uVar17 = uStack_108;
        iVar2 = iStackX_20;
        lVar18 = *(longlong *)param_1;
        iVar11 = *(int *)(lVar18 + 0x200);
        if (iVar11 == *(int *)(lVar18 + 0x204)) {
          iVar11 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraRendererMeshes::FMeshData>_>
                             (0x1080,(ForElementType<FNiagaraRendererMeshes::FMeshData> *)
                                     (lVar18 + 0x170),(int *)(lVar18 + 0x204));
        }
        *(int *)(lVar18 + 0x200) = iVar11 + 1;
        pFVar20 = (ForElementType<FNiagaraRendererMeshes::FMeshData> *)(lVar18 + 0x170);
        if (*(ForElementType<FNiagaraRendererMeshes::FMeshData> **)(lVar18 + 0x1f0) !=
            (ForElementType<FNiagaraRendererMeshes::FMeshData> *)0x0) {
          pFVar20 = *(ForElementType<FNiagaraRendererMeshes::FMeshData> **)(lVar18 + 0x1f0);
        }
        pFVar24 = (ForElementType<unsigned_int> *)(pFVar20->InlineData + (longlong)iVar11 * 0x80);
        DefaultConstructItems<FNiagaraRendererMeshes::FMeshData,int>(pFVar24,1);
        if (TStack_128.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (TStack_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        FStack_98 = *pFVar24;
        FStack_90 = pFVar24[1];
        *pFVar24 = (ForElementType<unsigned_int>)TStack_128.Object;
        pFVar24[1] = (ForElementType<unsigned_int>)
                     TStack_128.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FStack_90);
        *(undefined4 *)(pFVar24 + 2) = **(undefined4 **)((longlong)param_1 + 8);
        pFVar24[2].field_0x4 = param_2->LODMode;
        iVar11 = (int)uVar19;
        *(int *)(pFVar24 + 3) = iVar11;
        fStack_c0 = (float)(double)param_2->_padding_;
        uStack_c8 = CONCAT44((float)(double)param_2->_padding_,(float)(double)param_2->_padding_);
        *(undefined8 *)&pFVar24[5].field_0x4 = uStack_c8;
        *(float *)&pFVar24[6].field_0x4 = fStack_c0;
        *(uchar *)(pFVar24 + 7) = (uchar)param_2->_padding_;
        fStack_b4 = (float)(double)param_2->_padding_;
        uStack_bc = CONCAT44((float)(double)param_2->_padding_,(float)(double)param_2->_padding_);
        *(undefined8 *)&pFVar24[7].field_0x4 = uStack_bc;
        *(float *)&pFVar24[8].field_0x4 = fStack_b4;
        pTVar13 = UE::Math::TRotator<double>::Quaternion
                            ((TRotator<double> *)&param_2->_padding_,aTStack_88);
        fStack_d8 = (float)pTVar13->X;
        fStack_d4 = (float)pTVar13->Y;
        fStack_d0 = (float)pTVar13->Z;
        fStack_cc = (float)pTVar13->W;
        *(float *)(pFVar24 + 10) = fStack_d8;
        *(float *)&pFVar24[10].field_0x4 = fStack_d4;
        *(float *)(pFVar24 + 0xb) = fStack_d0;
        *(float *)&pFVar24[0xb].field_0x4 = fStack_cc;
        if (param_2->LODMode == LODBias) {
          if (((ForElementType<unsigned_int>)TStack_128.Object == (ForElementType<unsigned_int>)0x0)
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)(*(longlong *)TStack_128.Object + 8))(TStack_128.Object,param_2->LODBias);
        }
        else if (((byte)(param_2->LODMode - ByComponentBounds) < 3) &&
                (*(float *)&pFVar24[3].field_0x4 = param_2->LODDistanceFactor,
                param_2->LODMode == PerParticle)) {
          if (((ForElementType<unsigned_int>)TStack_128.Object == (ForElementType<unsigned_int>)0x0)
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar14 = (ForElementType<unsigned_int> *)
                    (**(code **)(*(longlong *)TStack_128.Object + 0x50))
                              (TStack_128.Object,auStack_a8,uVar19);
          pFVar24[4] = *pFVar14;
          *(undefined4 *)(pFVar24 + 5) = *(undefined4 *)(pFVar14 + 1);
          if (iVar11 < iVar2 + -1) {
            uVar25 = *(undefined4 *)(pFVar24 + 4);
          }
          else {
            uVar25 = 0;
          }
          *(undefined4 *)(pFVar24 + 4) = uVar25;
          uVar25 = uVar7;
          if ((int)uVar17 < iVar11) {
            uVar25 = *(undefined4 *)&pFVar24[4].field_0x4;
          }
          *(undefined4 *)&pFVar24[4].field_0x4 = uVar25;
        }
        TStack_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_100.ArrayNum = 0;
        TStack_100.ArrayMax = 0;
        if (((ForElementType<unsigned_int>)TStack_128.Object == (ForElementType<unsigned_int>)0x0)
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)(*(longlong *)TStack_128.Object + 0x40))(TStack_128.Object,&TStack_100);
        UNiagaraMeshRendererProperties::ApplyMaterialOverrides
                  (*(UNiagaraMeshRendererProperties **)((longlong)param_1 + 0x18),
                   *(FNiagaraEmitterInstance **)((longlong)param_1 + 0x10),&TStack_100);
        uVar17 = (ulonglong)TStack_100.ArrayNum;
        uStack_110 = CONCAT44(uStack_110._4_4_,TStack_100.ArrayNum);
        pFStack_e8 = TStack_100.AllocatorInstance.Data + uVar17 * 8;
        uVar19 = uVar17;
        FVar23.Data = TStack_100.AllocatorInstance.Data;
        while( true ) {
          pFVar8 = pFStack_e8;
          if ((int)uVar17 != (int)uVar19) {
            auStackX_18[0] = 0;
            `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(auStackX_18);
          }
          if (FVar23.Data == pFVar8) break;
          FVar21 = (ForElementType<unsigned_int>)(pFVar24 + 0xc);
          lVar18 = *(longlong *)FVar23.Data;
          plVar3 = *(longlong **)(*(longlong *)param_1 + 0x158);
          iVar11 = *(int *)(*(longlong *)param_1 + 0x160);
          lStack_f0 = lVar18;
          for (plVar22 = plVar3; plVar22 != plVar3 + iVar11; plVar22 = plVar22 + 1) {
            lVar4 = *plVar22;
            if (lVar4 == lVar18) {
LAB_1493391bf:
              auStack_138._0_4_ = (undefined4)((longlong)plVar22 - (longlong)plVar3 >> 3);
              goto LAB_1493391da;
            }
            if (lVar4 != 0) {
              pUVar15 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
              iVar2 = (int)pUVar15->_padding_;
              lVar18 = lStack_f0;
              if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
                  &pUVar15->_padding_)) {
                if (*(longlong *)(lVar4 + 0x130) == 0) {
                  bVar9 = lStack_f0 == 0;
                }
                else {
                  bVar9 = *(longlong *)(lVar4 + 0x130) == lStack_f0;
                }
                if (bVar9) goto LAB_1493391bf;
              }
            }
          }
          auStack_138[0] = 0xff;
          auStack_138[1] = 0xff;
          auStack_138[2] = 0xff;
          auStack_138[3] = 0xff;
LAB_1493391da:
          FVar5 = pFVar24[0xe];
          FVar16 = FVar21;
          if (FVar5 != (ForElementType<unsigned_int>)0x0) {
            FVar16 = FVar5;
          }
          if ((ulonglong)FVar16 <= auStack_138) {
            FVar16 = FVar21;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar5;
            }
            if ((auStack_138 <
                 (uchar *)((longlong)FVar16 + (longlong)*(int *)&pFVar24[0xf].field_0x4 * 4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar11 = *(int *)(pFVar24 + 0xf);
          if (iVar11 == *(int *)&pFVar24[0xf].field_0x4) {
            iVar11 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                               (0x404,(ForElementType<unsigned_int> *)FVar21,
                                (int *)&pFVar24[0xf].field_0x4);
          }
          uVar19 = uStack_110 & 0xffffffff;
          *(int *)(pFVar24 + 0xf) = iVar11 + 1;
          if (pFVar24[0xe] != (ForElementType<unsigned_int>)0x0) {
            FVar21 = pFVar24[0xe];
          }
          FVar23.Data = FVar23.Data + 8;
          *(undefined4 *)((longlong)FVar21 + (longlong)iVar11 * 4) = auStack_138._0_4_;
          uVar17 = TStack_100._8_8_ & 0xffffffff;
        }
        if (TStack_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_100.AllocatorInstance.Data);
        }
        uStack_118 = uStack_118 + 1;
        uVar19 = (ulonglong)uStack_118;
      } while ((int)uStack_118 < iStackX_20);
    }
  }
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_128.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 149396490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSimCacheGpuResource::BuildResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  FRHIResource *pFVar2;
  TRefCountPtr<FRHIBuffer> TVar3;
  TRefCountPtr<FRHIShaderResourceView> TVar4;
  void *_Dst;
  FRHIBuffer *pFVar5;
  FRHIShaderResourceView *pFVar6;
  FRHIResource *pFStackX_8;
  
  *(undefined4 *)(*(longlong *)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + 8);
  *(undefined4 *)(*(longlong *)param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar1 = *(longlong *)param_1;
  *(undefined4 *)(lVar1 + 0x30) = 0;
  pFVar2 = *(FRHIResource **)(lVar1 + 0x20);
  if (pFVar2 != (FRHIResource *)0x0) {
    *(undefined8 *)(lVar1 + 0x20) = 0;
    FRHIResource::Release(pFVar2);
  }
  pFVar2 = *(FRHIResource **)(lVar1 + 0x28);
  if (pFVar2 != (FRHIResource *)0x0) {
    *(undefined8 *)(lVar1 + 0x28) = 0;
    FRHIResource::Release(pFVar2);
  }
  if (0 < *(int *)((longlong)param_1 + 0x18)) {
    lVar1 = *(longlong *)param_1;
    *(int *)(lVar1 + 0x30) = *(int *)((longlong)param_1 + 0x18) * 4;
    pFVar5 = (FRHIBuffer *)(lVar1 + 0x20);
    TVar3 = FRHICommandListBase::CreateBuffer
                      ((FRHICommandListBase *)param_2,(FRHIBufferCreateDesc *)&pFStackX_8);
    if (pFVar5 != TVar3.Reference) {
      pFVar2 = (FRHIResource *)pFVar5->_padding_;
      pFVar5->_padding_ = (TVar3.Reference)->_padding_;
      (TVar3.Reference)->_padding_ = 0;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    if (pFStackX_8 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFStackX_8);
    }
    TVar4 = FRHICommandListBase::CreateShaderResourceView
                      ((FRHICommandListBase *)param_2,(FRHIBuffer *)&pFStackX_8,
                       (FInitializer *)pFVar5->_padding_);
    pFVar6 = (FRHIShaderResourceView *)(lVar1 + 0x28);
    if (pFVar6 != TVar4.Reference) {
      pFVar2 = *(FRHIResource **)pFVar6;
      *(undefined8 *)pFVar6 = *(undefined8 *)TVar4.Reference;
      *(undefined8 *)TVar4.Reference = 0;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    if (pFStackX_8 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFStackX_8);
    }
    _Dst = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_2,*(FRHIBuffer **)(*(longlong *)param_1 + 0x20),0
                      ,*(uint *)(*(longlong *)param_1 + 0x30),RLM_WriteOnly);
    memcpy(_Dst,*(void **)((longlong)param_1 + 0x10),
           (ulonglong)*(uint *)(*(longlong *)param_1 + 0x30));
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_2,*(FRHIBuffer **)(*(longlong *)param_1 + 0x20));
  }
  return;
}

// Call @ 1493964a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::__l2::<lambda_1>,bool,FNiagaraSimCacheVariable_const_&>
::Call(void *param_1,FNiagaraSimCacheVariable *param_2)

{
  int *piVar1;
  FName *pFVar2;
  longlong *plVar3;
  longlong lVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FName FVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  TArrayView<FString_const_,int> TStack_18;
  
  plVar3 = *(longlong **)((longlong)param_1 + 8);
  uVar11 = ::GetTypeHash(&param_2->Variable);
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar14 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar14 = plVar3 + 7;
    }
    iVar12 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar3[9] - 1U & uVar11) * 4);
    if (iVar12 != -1) {
      lVar4 = *plVar3;
      do {
        lVar13 = (longlong)iVar12;
        if ((*(FName *)(lVar4 + lVar13 * 0x14) == (param_2->Variable).Name) &&
           (*(int *)(lVar4 + 8 + lVar13 * 0x14) ==
            (param_2->Variable).TypeDefHandle.RegisteredTypeIndex)) {
          if (iVar12 != -1) {
            return true;
          }
          break;
        }
        iVar12 = *(int *)(lVar4 + 0xc + lVar13 * 0x14);
      } while (iVar12 != -1);
    }
  }
  TStack_18.DataPtr = (FString *)**(undefined8 **)((longlong)param_1 + 0x10);
  TStack_18._8_8_ = (*(undefined8 **)((longlong)param_1 + 0x10))[1];
  bVar9 = NiagaraSimCacheCompareInternal::MatchesWildcardArray(&TStack_18,(param_2->Variable).Name);
  if (!bVar9) {
    pFVar5 = *(ForAnyElementType **)param_1;
    if ((((FNiagaraSimCacheVariable *)pFVar5->Data <= param_2) &&
        (param_2 < (FNiagaraSimCacheVariable *)pFVar5->Data +
                   *(int *)((longlong)&pFVar5[1].Data + 4))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    iVar12 = *(int *)&pFVar5[1].Data;
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    if (iVar12 == *piVar1) {
      iVar12 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,pFVar5,piVar1);
    }
    *(int *)&pFVar5[1].Data = iVar12 + 1;
    FVar8 = *(FName *)&(param_2->Variable).TypeDefHandle;
    pFVar6 = pFVar5->Data;
    pFVar2 = (FName *)(pFVar6 + (longlong)iVar12 * 0x18);
    *pFVar2 = (param_2->Variable).Name;
    pFVar2[1] = FVar8;
    *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x18 + 0x10) = *(undefined8 *)&param_2->HalfOffset;
  }
  return true;
}

// Call @ 1493964b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::__l2::<lambda_1>,bool,FNiagaraSimCacheVariable_const_&>
::Call(void *param_1,FNiagaraSimCacheVariable *param_2)

{
  float fVar1;
  int iVar2;
  TMapBase<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
  *this;
  bool bVar3;
  uint uVar4;
  FString *this_00;
  float *pfVar5;
  int iVar6;
  wchar_t *pwVar7;
  FString aFStack_28 [2];
  
  this_00 = ::FName::ToString((FName *)param_2,aFStack_28);
  iVar2 = *(int *)(*(undefined8 **)param_1 + 1);
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)**(undefined8 **)param_1;
  }
  bVar3 = ::FString::MatchesWildcard(this_00,pwVar7,iVar6,IgnoreCase);
  if (aFStack_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(aFStack_28[0].Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    this = *(TMapBase<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
             **)((longlong)param_1 + 0x10);
    fVar1 = *(float *)((longlong)param_1 + 8);
    uVar4 = ::GetTypeHash(&param_2->Variable);
    pfVar5 = TMapBase<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
             ::FindOrAddImpl<FNiagaraVariableBase_const_&>(this,uVar4,&param_2->Variable);
    *pfVar5 = fVar1;
  }
  return true;
}

// Call @ 1493964c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::__l2::<lambda_1>,bool,FNiagaraSimCacheVariable_const_&>
::Call(void *param_1,FNiagaraSimCacheVariable *param_2)

{
  float fVar1;
  longlong *plVar2;
  TMapBase<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
  *this;
  uint uVar3;
  FNiagaraTypeDefinition *pFVar4;
  float *pfVar5;
  
  pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(&(param_2->Variable).TypeDefHandle);
  plVar2 = *(longlong **)param_1;
  if ((((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)*plVar2) &&
      (pFVar4->UnderlyingType == *(ushort *)(plVar2 + 1))) &&
     (pFVar4->Flags == *(uchar *)((longlong)plVar2 + 10))) {
    fVar1 = *(float *)((longlong)param_1 + 8);
    this = *(TMapBase<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
             **)((longlong)param_1 + 0x10);
    uVar3 = ::GetTypeHash(&param_2->Variable);
    pfVar5 = TMapBase<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
             ::FindOrAddImpl<FNiagaraVariableBase_const_&>(this,uVar3,&param_2->Variable);
    *pfVar5 = fVar1;
  }
  return true;
}

// Call @ 149396540

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSimCacheJson::EmitterFrameToJson'::__l5::<lambda_1>,bool,FNiagaraSimCacheVariable_const_&>
::Call(void *param_1,FNiagaraSimCacheVariable *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar4 = *(int *)&pFVar2[1].Data;
  if (iVar4 == *piVar1) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar4 + 1;
  pFVar3 = pFVar2->Data;
  *(FName *)(pFVar3 + (longlong)iVar4 * 0xc) = (param_2->Variable).Name;
  *(int *)(pFVar3 + (longlong)iVar4 * 0xc + 8) =
       (param_2->Variable).TypeDefHandle.RegisteredTypeIndex;
  return true;
}

// Call @ 1493965a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>::operator()'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493965b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Call @ 1493965c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraSimCache::ReadFrame'::__l21::<lambda_1>,bool,FNiagaraVariableBase,UNiagaraDataInterface_*>
::Call(void *param_1,FNiagaraVariableBase *param_2,UNiagaraDataInterface **param_3)

{
  bool bVar1;
  
  bVar1 = `UNiagaraSimCache::ReadFrame'::__l21::<lambda_1>::operator()(param_1,param_2,*param_3);
  return bVar1;
}

// Call @ 1493965d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraSimCache::BeginWrite'::__l31::<lambda_1>,bool,FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&>
::Call(void *param_1,FDataInterfaceUsageContext *param_2)

{
  FName *pFVar1;
  UNiagaraDataInterface *this;
  UClass *pUVar2;
  longlong *plVar3;
  int iVar4;
  FName *pFVar5;
  undefined1 auStackX_10 [8];
  FName *apFStack_18 [2];
  
  this = param_2->DataInterface;
  if (this != (UNiagaraDataInterface *)0x0) {
    pUVar2 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x48))(plVar3,apFStack_18,param_2->OwnerObject);
      iVar4 = (int)apFStack_18[1];
      pFVar1 = (FName *)((longlong)apFStack_18[0] + (longlong)iVar4 * 0xc);
      pFVar5 = apFStack_18[0];
      while( true ) {
        if ((int)apFStack_18[1] != iVar4) {
          `TCheckedPointerIterator<FNiagaraVariableBase,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStackX_10);
        }
        if (pFVar5 == pFVar1) break;
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  ((TArray<FName,TSizedDefaultAllocator<32>_> *)(*(longlong *)param_1 + 0xb0),pFVar5
                  );
        pFVar5 = (FName *)&pFVar5[1].Number;
      }
      if (apFStack_18[0] != (FName *)0x0) {
        FMemory::Free(apFStack_18[0]);
      }
    }
  }
  return true;
}

// Call @ 1493965e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraSimCache::CanRead'::__l35::<lambda_1>,bool,FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&>
::Call(void *param_1,FDataInterfaceUsageContext *param_2)

{
  UNiagaraDataInterface *this;
  UClass *pUVar1;
  void *pvVar2;
  
  this = param_2->DataInterface;
  if (this != (UNiagaraDataInterface *)0x0) {
    pUVar1 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
    pvVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar1);
    if (pvVar2 != (void *)0x0) {
      **(undefined1 **)param_1 = 1;
    }
  }
  return **(char **)param_1 == '\0';
}

// Call @ 149396630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNiagaraSimCacheDataBuffersLayout::FCacheBufferReadInfo::operator=
            ((FCacheBufferReadInfo *)(*(longlong *)param_1 + 0x98),
             (FCacheBufferReadInfo *)((longlong)param_1 + 8));
  return;
}

// Call @ 149396650

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  longlong lVar2;
  FNiagaraDataBuffer *this;
  FNiagaraSimCacheDataBuffers *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uchar *puVar8;
  TArrayView<unsigned_short_const_,int> *pTVar9;
  int aiStackX_8 [2];
  TTuple<unsigned_int,int> TStackX_18;
  FNiagaraSimCacheDataBuffers *pFStackX_20;
  undefined4 uStack_16c;
  FRHITransitionInfo FStack_168;
  FRHITransitionInfo FStack_138;
  TArrayView<FNiagaraSimCacheDataBuffersLayout::FVariableCopyMapping_const_,int> TStack_108;
  TArrayView<FRHITransitionInfo_const_,int> TStack_f8;
  TArrayView<TTuple<unsigned_int,int>_const_,int> TStack_e8;
  TArrayView<FRHITransitionInfo_const_,int> TStack_d8;
  TArrayView<unsigned_char,int> TStack_c8;
  TArrayView<unsigned_short_const_,int> TStack_b8;
  TArrayView<unsigned_char,int> TStack_a8;
  TArrayView<unsigned_short_const_,int> TStack_98;
  TArrayView<unsigned_char,int> TStack_88;
  TArrayView<unsigned_short_const_,int> TStack_78;
  TArrayView<unsigned_short_const_,int> TStack_68;
  TArrayView<unsigned_short_const_,int> TStack_58;
  TArrayView<unsigned_short_const_,int> TStack_48;
  
  lVar2 = *(longlong *)((longlong)param_1 + 0xf8);
  uVar5 = *(uint *)(lVar2 + 0xb4);
  if (**(uint **)((longlong)param_1 + 0xe8) < *(uint *)(lVar2 + 0xb4)) {
    uVar5 = **(uint **)((longlong)param_1 + 0xe8);
  }
  if (*(longlong *)(lVar2 + 0x78) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x158,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this = *(FNiagaraDataBuffer **)(lVar2 + 0x78);
  lVar2 = *(longlong *)param_1;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)param_1 + 8) + 0x21c) == -1) {
    uVar7 = FNiagaraGPUInstanceCountManager::AcquireOrAllocateEntry
                      ((FNiagaraGPUInstanceCountManager *)(lVar2 + 0x48),param_2);
    *(uint *)(*(longlong *)((longlong)param_1 + 8) + 0x21c) = uVar7;
  }
  this->GPUInstanceCountBufferOffset = *(uint *)(*(longlong *)((longlong)param_1 + 8) + 0x21c);
  *(uint *)(*(longlong *)((longlong)param_1 + 8) + 0x234) = uVar5;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 8) + 0x204) =
       *(undefined4 *)((longlong)param_1 + 0x10);
  if (*(int *)(lVar2 + 0x54) < *(int *)(lVar2 + 0x50)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedInstanceCounts <= AllocatedInstanceCounts",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                       ,0x44,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FStack_168._padding_._0_4_ = 0xffffffff;
  FStack_168._padding_._4_2_ = 0xffff;
  TStackX_18._0_4_ = *(undefined4 *)(*(longlong *)((longlong)param_1 + 8) + 0x21c);
  FStack_168.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar2 + 0x70);
  FStack_168.AccessBefore = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
  TStack_f8.DataPtr = &FStack_168;
  TStack_f8._12_4_ = uStack_16c;
  TStack_f8.ArrayNum = 1;
  FStack_168.Type = UAV;
  FStack_168.AccessAfter = UAVCompute;
  FStack_168.Flags = None;
  FStack_168.CommitInfo.bIsSet = false;
  TStackX_18._4_4_ = uVar5;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&TStack_f8,None);
  TStack_e8.DataPtr = &TStackX_18;
  TStack_e8._12_4_ = uStack_16c;
  TStack_e8.ArrayNum = 1;
  NiagaraClearCounts::ClearCountsInt
            ((FRHICommandList *)param_2,*(FRHIUnorderedAccessView **)(lVar2 + 0x70),&TStack_e8);
  FStack_138.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar2 + 0x70);
  FStack_138.AccessAfter = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
  TStack_d8.DataPtr = &FStack_138;
  TStack_d8._12_4_ = uStack_16c;
  TStack_d8.ArrayNum = 1;
  FStack_138._padding_._0_4_ = 0xffffffff;
  FStack_138._padding_._4_2_ = 0xffff;
  FStack_138.Type = UAV;
  FStack_138.AccessBefore = UAVCompute;
  FStack_138.Flags = None;
  FStack_138.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&TStack_d8,None);
  FNiagaraDataBuffer::AllocateGPU
            (this,(FRHICommandListBase *)param_2,uVar5,*(Type *)(*(longlong *)param_1 + 0x34),
             L"NiagaraSimCache");
  if (this->NumInstancesAllocated < uVar5) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumInstances <= NumInstancesAllocated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x9c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->NumInstances = uVar5;
  this->GPUDataReadyStage = First;
  FNiagaraComputeExecutionContext::SetDataToRender
            (*(FNiagaraComputeExecutionContext **)((longlong)param_1 + 8),this);
  if (uVar5 != 0) {
    aiStackX_8[0] = 0;
    if (*(short *)(*(longlong *)((longlong)param_1 + 0xe0) + 0x20) != 0) {
      puVar8 = FRHICommandListBase::LockBuffer
                         ((FRHICommandListBase *)param_2,(this->GPUBufferFloat).Buffer.Reference,0,
                          (this->GPUBufferFloat).NumBytes,RLM_WriteOnly);
      uVar7 = (this->GPUBufferFloat).NumBytes;
      uVar1 = this->FloatStride;
      if ((int)uVar7 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = *(FNiagaraSimCacheDataBuffers **)((longlong)param_1 + 0xe8);
      pTVar9 = TArrayView<unsigned_short_const_,int>::
               TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                         (&TStack_68,
                          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                          (*(longlong *)((longlong)param_1 + 0xe0) + 0x98));
      TStack_c8._12_4_ = uStack_16c;
      TStack_c8.ArrayNum = uVar7;
      TStack_b8.DataPtr = pTVar9->DataPtr;
      TStack_b8.ArrayNum = pTVar9->ArrayNum;
      TStack_b8._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
      TStack_c8.DataPtr = puVar8;
      FNiagaraSimCacheHelper::ReadFloatBuffers
                (uVar5,aiStackX_8,(uint)*(ushort *)(*(longlong *)((longlong)param_1 + 0xe0) + 0x20),
                 &TStack_b8,pFVar3,&TStack_c8,uVar1);
      pFStackX_20 = *(FNiagaraSimCacheDataBuffers **)((longlong)param_1 + 0xf0);
      uVar7 = this->FloatStride;
      pFVar3 = *(FNiagaraSimCacheDataBuffers **)((longlong)param_1 + 0xe8);
      TStack_108.ArrayNum = *(int *)(*(longlong *)((longlong)param_1 + 0xe0) + 0xb0);
      TStack_108.DataPtr =
           *(FVariableCopyMapping **)(*(longlong *)((longlong)param_1 + 0xe0) + 0xa8);
      if (TStack_108.ArrayNum < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FNiagaraSimCacheHelper::ReadCustomBuffers
                (uVar5,*(float *)((longlong)param_1 + 0x14),*(float *)((longlong)param_1 + 0x18),
                 *(float *)((longlong)param_1 + 0x1c),
                 (TTransform<double> *)((longlong)param_1 + 0x20),
                 (TTransform<double> *)((longlong)param_1 + 0x80),
                 *(ushort *)(*(longlong *)((longlong)param_1 + 0xe0) + 0x50),&TStack_108,pFVar3,
                 pFStackX_20,puVar8,uVar7);
      FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)param_2,(this->GPUBufferFloat).Buffer.Reference);
    }
    if (*(short *)(*(longlong *)((longlong)param_1 + 0xe0) + 0x22) != 0) {
      puVar8 = FRHICommandListBase::LockBuffer
                         ((FRHICommandListBase *)param_2,(this->GPUBufferHalf).Buffer.Reference,0,
                          (this->GPUBufferHalf).NumBytes,RLM_WriteOnly);
      uVar7 = this->HalfStride;
      uVar1 = (this->GPUBufferHalf).NumBytes;
      if ((int)uVar1 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = *(FNiagaraSimCacheDataBuffers **)((longlong)param_1 + 0xe8);
      pTVar9 = TArrayView<unsigned_short_const_,int>::
               TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                         (&TStack_58,
                          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                          (*(longlong *)((longlong)param_1 + 0xe0) + 0x98));
      TStack_a8._12_4_ = uStack_16c;
      TStack_a8.ArrayNum = uVar1;
      TStack_98.DataPtr = pTVar9->DataPtr;
      TStack_98.ArrayNum = pTVar9->ArrayNum;
      TStack_98._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
      TStack_a8.DataPtr = puVar8;
      FNiagaraSimCacheHelper::ReadHalfBuffers
                (uVar5,aiStackX_8,(uint)*(ushort *)(*(longlong *)((longlong)param_1 + 0xe0) + 0x22),
                 &TStack_98,pFVar3,&TStack_a8,uVar7);
      FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)param_2,(this->GPUBufferHalf).Buffer.Reference);
    }
    if (*(short *)(*(longlong *)((longlong)param_1 + 0xe0) + 0x24) != 0) {
      puVar8 = FRHICommandListBase::LockBuffer
                         ((FRHICommandListBase *)param_2,(this->GPUBufferInt).Buffer.Reference,0,
                          (this->GPUBufferInt).NumBytes,RLM_WriteOnly);
      uVar7 = this->Int32Stride;
      uVar1 = (this->GPUBufferInt).NumBytes;
      if ((int)uVar1 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = *(FNiagaraSimCacheDataBuffers **)((longlong)param_1 + 0xe8);
      pTVar9 = TArrayView<unsigned_short_const_,int>::
               TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                         (&TStack_48,
                          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                          (*(longlong *)((longlong)param_1 + 0xe0) + 0x98));
      TStack_88._12_4_ = uStack_16c;
      TStack_88.ArrayNum = uVar1;
      TStack_78.DataPtr = pTVar9->DataPtr;
      TStack_78.ArrayNum = pTVar9->ArrayNum;
      TStack_78._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
      TStack_88.DataPtr = puVar8;
      FNiagaraSimCacheHelper::ReadInt32Buffers
                (uVar5,aiStackX_8,(uint)*(ushort *)(*(longlong *)((longlong)param_1 + 0xe0) + 0x24),
                 &TStack_78,pFVar3,&TStack_88,uVar7);
      FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)param_2,(this->GPUBufferInt).Buffer.Reference);
    }
  }
  this->IDAcquireTag = *(uint *)(*(longlong *)((longlong)param_1 + 0xe8) + 4);
  LOCK();
  **(int **)((longlong)param_1 + 0x100) = **(int **)((longlong)param_1 + 0x100) + -1;
  UNLOCK();
  return;
}

// Call @ 149396660

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraSimCache::BeginWrite'::__l44::<lambda_2>,bool,FNiagaraVariableBase,UNiagaraDataInterface_*>
::Call(void *param_1,FNiagaraVariableBase *param_2,UNiagaraDataInterface **param_3)

{
  bool bVar1;
  
  bVar1 = `UNiagaraSimCache::BeginWrite'::__l44::<lambda_2>::operator()(param_1,param_2,*param_3);
  return bVar1;
}

// Call @ 149396670

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraSimCache::WriteFrame'::__l53::<lambda_2>,bool,FNiagaraVariableBase,UNiagaraDataInterface_*>
::Call(void *param_1,FNiagaraVariableBase *param_2,UNiagaraDataInterface **param_3)

{
  bool bVar1;
  
  bVar1 = `UNiagaraSimCache::WriteFrame'::__l53::<lambda_2>::operator()(param_1,param_2,*param_3);
  return bVar1;
}

// Call @ 1493d9800

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001493d983d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// Call @ 1493d9850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001493d988d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// Call @ 1493d98a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  FRHIResource *this;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar2;
  bool bVar3;
  FRHIShaderResourceView *this_02;
  
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemStaticBuffers.h"
                       ,0x24,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this = *(FRHIResource **)(lVar1 + 0x40);
  this_00 = *(FRHIResource **)(*(longlong *)param_1 + 0x38);
  if (this_00 != this) {
    *(FRHIResource **)(*(longlong *)param_1 + 0x38) = this;
    if (this != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (*(longlong *)(*(longlong *)param_1 + 0x38) == 0) {
    this_02 = FNiagaraRenderer::GetDummyFloatBuffer();
    this_01 = *(FRHIShaderResourceView **)(*(longlong *)param_1 + 0x38);
    if (this_01 != this_02) {
      *(FRHIShaderResourceView **)(*(longlong *)param_1 + 0x38) = this_02;
      if (this_02 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_02);
      }
      if (this_01 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
  }
  return;
}

// Call @ 1493d98b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraSystem::FStaticBuffersDeletor::operator()'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  void *pvVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemStaticBuffers.cpp"
                       ,8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)((longlong)pvVar1 + 0x48) = 0;
  pFVar2 = *(FRHIResource **)((longlong)pvVar1 + 0x38);
  if (pFVar2 != (FRHIResource *)0x0) {
    *(undefined8 *)((longlong)pvVar1 + 0x38) = 0;
    FRHIResource::Release(pFVar2);
  }
  pFVar2 = *(FRHIResource **)((longlong)pvVar1 + 0x40);
  if (pFVar2 != (FRHIResource *)0x0) {
    *(undefined8 *)((longlong)pvVar1 + 0x40) = 0;
    FRHIResource::Release(pFVar2);
  }
  if (*(FRHIResource **)((longlong)pvVar1 + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)pvVar1 + 0x40));
  }
  if (*(FRHIResource **)((longlong)pvVar1 + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)pvVar1 + 0x38));
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)((longlong)pvVar1 + 0x20));
  *(undefined ***)((longlong)pvVar1 + 0x18) = &___7FResourceArrayUploadInterface__6B_;
  if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)pvVar1 + 8));
  }
  ::operator_delete(pvVar1,0x50);
  return;
}

// Call @ 1493d98c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FNiagaraDataBuffer *this;
  FNiagaraDataBuffer *pFVar7;
  longlong *plVar8;
  undefined1 auStackX_8 [8];
  
  plVar2 = *(longlong **)((longlong)param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined8 *)param_1);
  }
  lVar3 = *(longlong *)param_1;
  plVar8 = *(longlong **)(lVar3 + 0x40);
  iVar1 = *(int *)(lVar3 + 0x48);
  plVar2 = plVar8 + iVar1;
  while( true ) {
    if (*(int *)(lVar3 + 0x48) != iVar1) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (plVar8 == plVar2) {
      return;
    }
    lVar4 = *plVar8;
    *(undefined1 *)(lVar4 + 0x230) = 0;
    *(undefined8 *)(lVar4 + 0x234) = 0;
    *(undefined4 *)(lVar4 + 0xc) = 0;
    *(undefined4 *)(lVar4 + 8) = 0xffffffff;
    if ((*(longlong *)(lVar4 + 0x208) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ComputeContext->DataBuffers_RT[i] == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                           ,0x6b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this = ::operator_new(0x160);
    pFVar7 = (FNiagaraDataBuffer *)0x0;
    if (this != (FNiagaraDataBuffer *)0x0) {
      pFVar7 = FNiagaraDataBuffer::FNiagaraDataBuffer(this,*(FNiagaraDataSet **)(lVar4 + 0x58));
    }
    *(FNiagaraDataBuffer **)(lVar4 + 0x208) = pFVar7;
    if ((*(longlong *)(lVar4 + 0x210) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ComputeContext->DataBuffers_RT[i] == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                           ,0x6b,L""), bVar6)) break;
    pFVar7 = ::operator_new(0x160);
    if (pFVar7 == (FNiagaraDataBuffer *)0x0) {
      plVar8 = plVar8 + 1;
      *(undefined8 *)(lVar4 + 0x210) = 0;
    }
    else {
      pFVar7 = FNiagaraDataBuffer::FNiagaraDataBuffer(pFVar7,*(FNiagaraDataSet **)(lVar4 + 0x58));
      *(FNiagaraDataBuffer **)(lVar4 + 0x210) = pFVar7;
      plVar8 = plVar8 + 1;
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Call @ 1493d98d0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNiagaraSystemGpuComputeProxy::ReleaseTicks
            (*(FNiagaraSystemGpuComputeProxy **)param_1,0x7fffffff,true);
  return;
}

// Call @ 1493d98f0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  FNiagaraComputeExecutionContext *this;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 auStackX_8 [8];
  
  plVar3 = *(longlong **)((longlong)param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0xc0))(plVar3,*(undefined8 *)param_1);
  }
  FNiagaraSystemGpuComputeProxy::ReleaseTicks
            (*(FNiagaraSystemGpuComputeProxy **)param_1,0x7fffffff,true);
  lVar4 = *(longlong *)param_1;
  puVar7 = *(undefined8 **)(lVar4 + 0x40);
  iVar2 = *(int *)(lVar4 + 0x48);
  puVar1 = puVar7 + iVar2;
  while( true ) {
    if (*(int *)(lVar4 + 0x48) != iVar2) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (puVar7 == puVar1) break;
    this = (FNiagaraComputeExecutionContext *)*puVar7;
    FNiagaraComputeExecutionContext::ResetInternal
              (this,*(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 8));
    if (this->DataBuffers_RT[0] == (FNiagaraDataBuffer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeContext->DataBuffers_RT[i]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                         ,0x89,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FNiagaraDataBuffer::ReleaseGPU(this->DataBuffers_RT[0]);
    FNiagaraSharedObject::Destroy((FNiagaraSharedObject *)this->DataBuffers_RT[0]);
    this->DataBuffers_RT[0] = (FNiagaraDataBuffer *)0x0;
    if (this->DataBuffers_RT[1] == (FNiagaraDataBuffer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeContext->DataBuffers_RT[i]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                         ,0x89,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FNiagaraDataBuffer::ReleaseGPU(this->DataBuffers_RT[1]);
    FNiagaraSharedObject::Destroy((FNiagaraSharedObject *)this->DataBuffers_RT[1]);
    puVar7 = puVar7 + 1;
    this->DataBuffers_RT[1] = (FNiagaraDataBuffer *)0x0;
  }
  if ((*(char *)((longlong)param_1 + 0x10) != '\0') &&
     (*(FNiagaraSystemGpuComputeProxy **)param_1 != (FNiagaraSystemGpuComputeProxy *)0x0)) {
    FNiagaraSystemGpuComputeProxy::_scalar_deleting_destructor_
              (*(FNiagaraSystemGpuComputeProxy **)param_1,1);
    return;
  }
  return;
}

// Call @ 1493d9900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l4::<lambda_1>,void,UNiagaraRendererProperties_const_*,int>
::Call(void *param_1,UNiagaraRendererProperties **param_2,int *param_3)

{
  `UNiagaraSystem::ComputeEmittersExecutionOrder'::__l4::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 1493d9920

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNiagaraSystemGpuComputeProxy::QueueTick
            (*(FNiagaraSystemGpuComputeProxy **)param_1,
             (FNiagaraGPUSystemTick *)((longlong)param_1 + 8));
  return;
}

// Call @ 1493d9940

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l6::<lambda_1>,void,UNiagaraRendererProperties_const_*,int>
::Call(void *param_1,UNiagaraRendererProperties **param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  ForElementType<_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::FSortInfo>
  FVar3;
  UNiagaraRendererProperties *pUVar4;
  int iVar5;
  ForElementType<_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::FSortInfo>
  FVar6;
  
  FVar3 = *(ForElementType<_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::FSortInfo>
            *)param_1;
  pUVar4 = *param_2;
  iVar2 = *(int *)((ForElementType<_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::FSortInfo>
                    *)((longlong)FVar3 + 0x48))->InlineData;
  iVar5 = iVar2;
  if (iVar2 == *(int *)((longlong)FVar3 + 0x4c)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::FSortInfo>_>
                      (0x408,(ForElementType<_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::FSortInfo>
                              *)FVar3,(int *)((longlong)FVar3 + 0x4c));
  }
  *(int *)((ForElementType<_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::FSortInfo>
            *)((longlong)FVar3 + 0x48))->InlineData = iVar5 + 1;
  FVar6 = *(ForElementType<_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::FSortInfo>
            *)((longlong)FVar3 + 0x40);
  if (*(ForElementType<_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::FSortInfo>
        *)((longlong)FVar3 + 0x40) ==
      (ForElementType<_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::FSortInfo>
       )0x0) {
    FVar6 = FVar3;
  }
  piVar1 = (int *)((longlong)FVar6 + (longlong)iVar5 * 8);
  *piVar1 = pUVar4->SortOrderHint;
  piVar1[1] = iVar2;
  return;
}

// Call @ 1493d99b0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraSystem::PrecachePSOs'::__l9::<lambda_1>,void,UNiagaraRendererProperties_const_*,int>
::Call(void *param_1,UNiagaraRendererProperties **param_2,int *param_3)

{
  UNiagaraRendererProperties::CollectPSOPrecacheData
            (*param_2,(FNiagaraEmitterInstance *)**(undefined8 **)param_1,
             *(TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               **)((longlong)param_1 + 8));
  return;
}

// Call @ 1493d99d0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSystemInstanceTickConcurrentTask::DoTask'::__l18::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStackX_8 [8];
  
  piVar1 = (int *)((longlong)param_1 + 0x1c8);
  iVar2 = *piVar1;
  if (*(undefined8 **)((longlong)param_1 + 0x1c0) != (undefined8 *)0x0) {
    param_1 = *(undefined8 **)((longlong)param_1 + 0x1c0);
  }
  puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar2 * 0xe * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (param_1 == puVar3) break;
    FNiagaraSystemGpuComputeProxy::QueueTick
              (*(FNiagaraSystemGpuComputeProxy **)param_1,
               (FNiagaraGPUSystemTick *)((longlong)param_1 + 8));
    param_1 = (void *)((longlong)param_1 + 0x70);
  }
  return;
}

// Call @ 1493d99e0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l28::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStackX_8 [8];
  
  piVar1 = (int *)((longlong)param_1 + 0x1c8);
  iVar2 = *piVar1;
  if (*(undefined8 **)((longlong)param_1 + 0x1c0) != (undefined8 *)0x0) {
    param_1 = *(undefined8 **)((longlong)param_1 + 0x1c0);
  }
  puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar2 * 0xe * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (param_1 == puVar3) break;
    FNiagaraSystemGpuComputeProxy::QueueTick
              (*(FNiagaraSystemGpuComputeProxy **)param_1,
               (FNiagaraGPUSystemTick *)((longlong)param_1 + 8));
    param_1 = (void *)((longlong)param_1 + 0x70);
  }
  return;
}

// Call @ 1493d99f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSystemStaticBuffers::Finalize'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  if (*(int *)(*(longlong *)param_1 + 0x48) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GpuFloatBuffer.NumBytes == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemStaticBuffers.cpp"
                       ,0x16,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)param_1;
  FReadBuffer::Initialize
            ((FReadBuffer *)(lVar1 + 0x38),(FRHICommandListBase *)param_2,
             L"NiagaraSystemStaticBuffers",4,*(uint *)(lVar1 + 0x28),PF_R32_FLOAT,Static,
             (FResourceArrayUploadInterface *)(lVar1 + 0x18));
  return;
}

// Call @ 1493d9a00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::<lambda_1>,void>::Call
          (void *param_1)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x41) = *(undefined1 *)(*(longlong *)param_1 + 0x40);
  return;
}

// Call @ 1493d9a20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_2>,void>::Call
          (void *param_1)

{
  atomic<bool> aVar1;
  FTaskBase *this;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)(*(longlong *)param_1 + 0xd0) == '\0')) {
    this = *(FTaskBase **)param_1;
    LOCK();
    aVar1 = this->TaskTriggered;
    this->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(this,0xd8);
      return;
    }
  }
  return;
}

// Call @ 1493d9a60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*(FTaskBase **)((longlong)param_1 + 0x18) != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(*(FTaskBase **)((longlong)param_1 + 0x18));
  }
  FNiagaraSystemRenderData::Destroy_RenderThread(*(FNiagaraSystemRenderData **)param_1);
  puVar1 = (undefined8 *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  puVar3 = (undefined8 *)(lVar2 + 0x20);
  if (puVar3 != puVar1) {
    if ((void *)*puVar3 != (void *)0x0) {
      FMemory::Free((void *)*puVar3);
    }
    *puVar3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)((longlong)param_1 + 0x10);
    *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Call @ 14943dba0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
::Call(void *param_1,FParticleSimulationContext *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014943dba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14943dbb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraWorldManager::TickStart'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  **(undefined4 **)param_1 = *(undefined4 *)((longlong)param_1 + 0x10);
  return;
}

// Call @ 14943dc00

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>::operator()'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNiagaraStatelessEmitterData *this;
  
  this = *(FNiagaraStatelessEmitterData **)param_1;
  if (this != (FNiagaraStatelessEmitterData *)0x0) {
    FNiagaraStatelessEmitterData::~FNiagaraStatelessEmitterData(this);
    ::operator_delete(this,0x230);
    return;
  }
  return;
}

// Call @ 149478c70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::CaptureForDebugging'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 149478c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraStatelessEmitterData::InitRenderResources'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  void *_Dst;
  
  FByteAddressBuffer::Initialize
            ((FByteAddressBuffer *)(*(longlong *)param_1 + 0x210),(FRHICommandListBase *)param_2,
             L"NiagaraStatelessEmitterData_StaticDataBuffer",*(uint *)(*(longlong *)param_1 + 0x208)
             ,Static);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_2,*(FRHIBuffer **)(*(longlong *)param_1 + 0x210),0,
                    *(uint *)(*(longlong *)param_1 + 0x220),RLM_WriteOnly);
  memcpy(_Dst,*(void **)(*(longlong *)param_1 + 0x200),
         (ulonglong)*(uint *)(*(longlong *)param_1 + 0x220));
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_2,*(FRHIBuffer **)(*(longlong *)param_1 + 0x210));
  return;
}

// Call @ 149478c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  FNiagaraDataSet *this;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  this = *(FNiagaraDataSet **)((longlong)param_1 + 8);
  if (this != (FNiagaraDataSet *)0x0) {
    FNiagaraDataSet::~FNiagaraDataSet(this);
    ::operator_delete(this,0xc0);
    return;
  }
  return;
}

// Call @ 149478ce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::HandleCompletion'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x2c) = 3;
  return;
}

// Call @ 149478d00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::__l22::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float fVar6;
  
  fVar6 = *(float *)((longlong)param_1 + 8) - *(float *)(*(longlong *)param_1 + 0x24);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(*(longlong *)param_1 + 0x28) = fVar6;
  *(undefined4 *)(*(longlong *)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + 8);
  *(undefined4 *)(*(longlong *)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0xc);
  pvVar2 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(*(longlong *)param_1 + 0x40);
    if (pvVar3 != pvVar2) {
      *(void **)(*(longlong *)param_1 + 0x40) = pvVar2;
      FMemory::Free(pvVar3);
    }
  }
  if (*(char *)((longlong)param_1 + 0x18) != '\0') {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x20);
    *(undefined1 *)(*(longlong *)param_1 + 0x48) = 1;
    lVar4 = *(longlong *)param_1;
    puVar5 = (undefined8 *)(lVar4 + 0x50);
    if (puVar5 != puVar1) {
      if ((void *)*puVar5 != (void *)0x0) {
        FMemory::Free((void *)*puVar5);
      }
      *puVar5 = *puVar1;
      *puVar1 = 0;
      *(undefined4 *)(lVar4 + 0x58) = *(undefined4 *)((longlong)param_1 + 0x28);
      *(undefined4 *)(lVar4 + 0x5c) = *(undefined4 *)((longlong)param_1 + 0x2c);
      *(undefined8 *)((longlong)param_1 + 0x28) = 0;
    }
  }
  if (*(char *)((longlong)param_1 + 0x30) != '\0') {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x38);
    lVar4 = *(longlong *)param_1;
    puVar5 = (undefined8 *)(lVar4 + 0x30);
    if (puVar5 != puVar1) {
      if ((void *)*puVar5 != (void *)0x0) {
        FMemory::Free((void *)*puVar5);
      }
      *puVar5 = *puVar1;
      *puVar1 = 0;
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)((longlong)param_1 + 0x40);
      *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)((longlong)param_1 + 0x44);
      *(undefined8 *)((longlong)param_1 + 0x40) = 0;
    }
  }
  return;
}

// Call @ 149478d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::__l27::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNiagaraStatelessComputeManager *this;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  this = (*(FEmitterInstance_RT **)param_1)->ComputeManager;
  if (this != (FNiagaraStatelessComputeManager *)0x0) {
    FNiagaraStatelessComputeManager::GenerateDataBufferForDebugging
              (this,param_2,*(FNiagaraDataBuffer **)((longlong)param_1 + 8),
               *(FEmitterInstance_RT **)param_1);
  }
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)param_1 + 0x10);
  plVar2 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149478d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// Call @ 149478d70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::ResetSimulation'::__l28::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x24) = 0;
  *(undefined4 *)(*(longlong *)param_1 + 0x28) = 0;
  *(undefined4 *)(*(longlong *)param_1 + 0x2c) = 0;
  *(undefined4 *)(*(longlong *)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + 8);
  if (*(undefined4 **)(*(longlong *)param_1 + 0x40) != (undefined4 *)0x0) {
    **(undefined4 **)(*(longlong *)param_1 + 0x40) = *(undefined4 *)((longlong)param_1 + 8);
  }
  return;
}

// Call @ 149478db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::Init'::__l13::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNiagaraStatelessComputeManager *pFVar1;
  
  pFVar1 = FNiagaraGpuComputeDispatchInterface::
           GetOrCreateDataManager<FNiagaraStatelessComputeManager>
                     (*(FNiagaraGpuComputeDispatchInterface **)((longlong)param_1 + 8));
  *(FNiagaraStatelessComputeManager **)(*(longlong *)param_1 + 8) = pFVar1;
  return;
}

