// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 12

// Call @ 14ca0fab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCodecV1Decoder::DecodeFrameData'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FCodecV1Decoder::DecodeFrameData'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca0fac0

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
TFunctionRefCaller<`FNiagaraRendererGeometryCache::DestroyRenderState_Concurrent'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  IGeometryCacheStreamingManager *pIVar5;
  UObject *pUVar6;
  AActor *this;
  FWeakObjectPtr *this_00;
  undefined1 auStackX_8 [8];
  
  this_00 = *(FWeakObjectPtr **)param_1;
  iVar2 = *(int *)((longlong)param_1 + 8);
  pFVar1 = (FWeakObjectPtr *)((longlong)this_00 + (longlong)iVar2 * 0x14);
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar2) {
      `TCheckedPointerIterator<FNiagaraRendererGeometryCache::FComponentPoolEntry_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (this_00 == pFVar1) break;
    bVar4 = FWeakObjectPtr::IsValid(this_00);
    if (bVar4) {
      pIVar5 = IGeometryCacheStreamingManager::Get();
      pcVar3 = *(code **)(pIVar5->_padding_ + 0xc0);
      FWeakObjectPtr::Get(this_00);
      (*pcVar3)(pIVar5);
      pUVar6 = FWeakObjectPtr::Get(this_00);
      (**(code **)(*(longlong *)pUVar6 + 0x4a0))(pUVar6);
    }
    this_00 = (FWeakObjectPtr *)&this_00[2].ObjectSerialNumber;
  }
  this = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x10));
  if (this != (AActor *)0x0) {
    AActor::Destroy(this,false,true);
    return;
  }
  return;
}

// Call @ 14ca0fad0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCacheStreamingManager::PrefetchData'::__l7::<lambda_1>,void>::Call
          (void *param_1)

{
  int iVar1;
  UGeometryCacheComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UGeometryCacheComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 8))
  ;
  if (pUVar2 != (UGeometryCacheComponent *)0x0) {
    pUVar3 = UGeometryCacheComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      FGeometryCacheStreamingManager::PrefetchDataInternal
                (*(FGeometryCacheStreamingManager **)param_1,pUVar2);
    }
  }
  return;
}

// Call @ 14ca0fb30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCacheComponent::JumpAnimationToTime'::__l10::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FGeometryCacheSceneProxy::UpdateAnimation
            (*(FGeometryCacheSceneProxy **)param_1,(FRHICommandListBase *)param_2,
             *(float *)((longlong)param_1 + 8),*(bool *)((longlong)param_1 + 0xc),
             *(bool *)((longlong)param_1 + 0xd),*(float *)((longlong)param_1 + 0x10),
             *(float *)((longlong)param_1 + 0x14));
  return;
}

// Call @ 14ca0fb70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCacheSceneProxy::FrameUpdate'::__l280::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FGeometryCacheSceneProxy::FrameUpdate'::__l280::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca0fb80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCacheComponent::TickComponent'::__l27::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FGeometryCacheSceneProxy::UpdateAnimation
            (*(FGeometryCacheSceneProxy **)param_1,(FRHICommandListBase *)param_2,
             *(float *)((longlong)param_1 + 8),*(bool *)((longlong)param_1 + 0xc),
             *(bool *)((longlong)param_1 + 0xd),*(float *)((longlong)param_1 + 0x10),
             *(float *)((longlong)param_1 + 0x18));
  return;
}

// Call @ 14ca0fbc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l14::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014ca0fbd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x30))
            (*(longlong **)param_1,param_2,*(undefined4 *)((longlong)param_1 + 8),
             *(undefined4 *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 14ca0fbe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStreamingGeometryCacheData::UpdateStreamingStatus'::__l15::<lambda_1>,void,bool,IBulkDataIORequest_*>
::Call(void *param_1,bool *param_2,IBulkDataIORequest **param_3)

{
  `FStreamingGeometryCacheData::UpdateStreamingStatus'::__l15::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14ca0fc00

FGeomCacheTrackProxy * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l1::<lambda_24_>,FGeomCacheTrackProxy_*>
::Call(void *param_1)

{
  FGeomCacheTrackProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x590);
  if (pFVar1 != (FGeomCacheTrackProxy *)0x0) {
    pFVar1 = FGeomCacheTrackProxy::FGeomCacheTrackProxy
                       (pFVar1,*(Type *)(*(longlong *)(*(longlong *)param_1 + 0x220) + 8));
    return pFVar1;
  }
  return (FGeomCacheTrackProxy *)0x0;
}

// Call @ 14ca0fc40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FGeometryCacheSceneProxy::FrameUpdate
            (*(FGeometryCacheSceneProxy **)param_1,(FRHICommandListBase *)param_2);
  return;
}

// Call @ 14ca0fc50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCacheSceneProxy::FrameUpdate'::__l283::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FGeometryCacheSceneProxy::FrameUpdate'::__l283::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ca0fc60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l18::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FGeometryCacheSceneProxy::InitRayTracing
            (*(FGeometryCacheSceneProxy **)param_1,(FRHICommandListBase *)param_2);
  return;
}

