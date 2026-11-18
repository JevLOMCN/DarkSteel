// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 3

// Call @ 14de24da0

TOptional<bool> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),TOptional<bool>,ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&>
::Call(void *param_1,ISceneViewExtension **param_2,FSceneViewExtensionContext *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)*param_2)(param_3->_padding_);
  *(undefined1 *)param_1 = uVar1;
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return SUB82(param_1,0);
}

// Call @ 14de24dd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l21::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14de24e00;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(longlong *)param_1 != 0) {
      TSet<TTuple<unsigned_int,FInstancedPropertyBag>,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<unsigned_int,FInstancedPropertyBag>,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>,FDefaultSetAllocator>
               *)(*(longlong *)param_1 + 0x80));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14de24e00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14de24e40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FInstancedStruct *this;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14de22230;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(longlong *)param_1 != 0) {
      this = &TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
              ::FindOrAddImpl<unsigned_int_const_&>
                        ((TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
                          *)(*(longlong *)param_1 + 0x80),*(uint *)((longlong)param_1 + 0x10),
                         (uint *)((longlong)param_1 + 0x10))->Value;
      if (this != (FInstancedStruct *)((longlong)param_1 + 0x18)) {
        FInstancedStruct::InitializeAs
                  (this,(((FInstancedStruct *)((longlong)param_1 + 0x18))->ScriptStruct).field0_0x0.
                        DebugPtr,*(uchar **)((longlong)param_1 + 0x20));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return;
      }
    }
  }
LAB_14de22230:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

