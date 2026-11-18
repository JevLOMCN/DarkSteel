// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 6

// Call @ 14e98ab40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ulong64 uVar1;
  longlong lVar2;
  FNDIGeometryCollectionArrays *pFVar3;
  FScriptContainerElement *pFVar4;
  FNDIGeometryCollectionData *pFVar5;
  
  uVar1 = *(ulong64 *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  pFVar5 = TMapBase<unsigned___int64,FNDIGeometryCollectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIGeometryCollectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>_>
                   *)(lVar2 + 0x10),uVar1);
  if ((pFVar5 != (FNDIGeometryCollectionData *)0x0) &&
     (pFVar5->AssetArrays != (FNDIGeometryCollectionArrays *)0x0)) {
    TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x10),uVar1);
    pFVar3 = pFVar5->AssetArrays;
    if (pFVar3 != (FNDIGeometryCollectionArrays *)0x0) {
      pFVar4 = (pFVar3->ElementIndexToTransformBufferMapping).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->ComponentRestTransformBuffer).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->BoundsBuffer).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->PrevWorldInverseTransformBuffer).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->WorldInverseTransformBuffer).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->PrevWorldTransformBuffer).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->WorldTransformBuffer).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(pFVar3,0x78);
    }
  }
  return;
}

// Call @ 14e98ab50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
            *)(*(longlong *)param_1 + 0x10),*(ulong64 *)((longlong)param_1 + 8));
  return;
}

// Call @ 14e98ab70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceChaosDestruction::PushToRenderThreadImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + 8);
  *(undefined4 *)(*(longlong *)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + 0xc);
  return;
}

// Call @ 14e98ab90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNDIGeometryCollectionData::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(**(longlong **)param_1 + 0x20))();
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e98abb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Call @ 14e98abd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceChaosDestruction::DestroyPerInstanceData'::__l19::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulong64 uStackX_8;
  
  lVar1 = *(longlong *)param_1;
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceChaosDestruction.cpp"
                       ,0xdb3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar2 = *(ulonglong *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x20) != *(int *)(lVar1 + 0x4c)) {
    lVar6 = *(longlong *)(lVar1 + 0x58);
    if (*(longlong *)(lVar1 + 0x58) == 0) {
      lVar6 = lVar1 + 0x50;
    }
    iVar5 = *(int *)(lVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x60) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x270 + *(longlong *)(lVar1 + 0x18)) == uVar2)
        goto LAB_14e987f82;
        iVar5 = *(int *)((longlong)iVar5 * 0x270 + 0x268 + *(longlong *)(lVar1 + 0x18));
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SystemsToGPUInstanceData.Contains(SystemInstance)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceChaosDestruction.cpp"
                     ,0xdb4,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e987f82:
  uStackX_8 = *(ulong64 *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x20) != *(int *)(lVar1 + 0x4c)) {
    TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x18),(int)(uStackX_8 >> 0x20) * 0x17 + (int)uStackX_8,&uStackX_8);
  }
  return;
}

// Call @ 14e98abe0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UNiagaraDataInterfaceChaosDestruction::InitPerInstanceData'::__l28::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puStack_278;
  FNiagaraDIChaosDestruction_GPUData *pFStack_270;
  FNiagaraDIChaosDestruction_GPUData FStack_268;
  
  lVar1 = *(longlong *)param_1;
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceChaosDestruction.cpp"
                         ,0xdac,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = *(ulonglong *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x20) != *(int *)(lVar1 + 0x4c)) {
    lVar6 = *(longlong *)(lVar1 + 0x58);
    if (*(longlong *)(lVar1 + 0x58) == 0) {
      lVar6 = lVar1 + 0x50;
    }
    iVar5 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar1 + 0x60) - 1) &
                             (uVar2 >> 0x20) * 0x17 + uVar2) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x270 + *(longlong *)(lVar1 + 0x18)) == uVar2) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!SystemsToGPUInstanceData.Contains(SystemInstance)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceChaosDestruction.cpp"
                             ,0xdad,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x270 + 0x268 + *(longlong *)(lVar1 + 0x18));
      } while (iVar5 != -1);
    }
  }
  memset(&FStack_268,0,0x260);
  puStack_278 = (ulonglong *)((longlong)param_1 + 8);
  pFStack_270 = FNiagaraDIChaosDestruction_GPUData::FNiagaraDIChaosDestruction_GPUData(&FStack_268);
  TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,FNiagaraDIChaosDestruction_GPUData_&&>_>
            ((TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x18),
             (TPairInitializer<unsigned___int64_const_&,FNiagaraDIChaosDestruction_GPUData_&&> *)
             &stack0x00000008,(bool *)&puStack_278);
  FNiagaraDIChaosDestruction_GPUData::~FNiagaraDIChaosDestruction_GPUData(&FStack_268);
  return;
}

