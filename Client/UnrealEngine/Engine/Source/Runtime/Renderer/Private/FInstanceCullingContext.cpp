// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 130

// <lambda_10> @ 144b942b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_10> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_10>::<lambda_10>
          (void *this,<lambda_10> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_10> @ 144b94340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_10> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_10>::<lambda_10>
          (void *this,
          TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
          *param_1,FInstanceCullingDeferredContext **param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = *param_2;
  return this;
}

// <lambda_11> @ 144b943d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_11> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_11>::<lambda_11>
          (void *this,<lambda_11> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_12> @ 144b94460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_12> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_12>::<lambda_12>
          (void *this,<lambda_12> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_13> @ 144b944f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_13> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_13>::<lambda_13>
          (void *this,<lambda_13> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_14> @ 144b94580

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_14> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_14>::<lambda_14>
          (void *this,<lambda_14> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_15> @ 144b94610

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_15> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_15>::<lambda_15>
          (void *this,<lambda_15> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_16> @ 144b946a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_16> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_16>::<lambda_16>
          (void *this,<lambda_16> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_17> @ 144b94730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_17> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_17>::<lambda_17>
          (void *this,<lambda_17> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_18> @ 144b947c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_18> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_18>::<lambda_18>
          (void *this,<lambda_18> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_19> @ 144b94850

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_19> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_19>::<lambda_19>
          (void *this,<lambda_19> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_20> @ 144b948e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_20> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_20>::<lambda_20>
          (void *this,<lambda_20> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_21> @ 144b94970

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_21> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_21>::<lambda_21>
          (void *this,<lambda_21> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_22> @ 144b94a00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_22> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_22>::<lambda_22>
          (void *this,<lambda_22> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_23> @ 144b94a90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_23> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_23>::<lambda_23>
          (void *this,<lambda_23> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_24> @ 144b94b20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_24> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_24>::<lambda_24>
          (void *this,<lambda_24> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_25> @ 144b94bb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_25> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_25>::<lambda_25>
          (void *this,<lambda_25> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_26> @ 144b94c40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_26> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_26>::<lambda_26>
          (void *this,<lambda_26> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_27> @ 144b94cd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_27> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_27>::<lambda_27>
          (void *this,<lambda_27> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_28> @ 144b94d60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_28> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_28>::<lambda_28>
          (void *this,<lambda_28> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_29> @ 144b94df0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_29> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_29>::<lambda_29>
          (void *this,<lambda_29> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_2> @ 144b94e80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_2> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_2>::<lambda_2>
          (void *this,<lambda_2> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_30> @ 144b94f10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_30> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_30>::<lambda_30>
          (void *this,<lambda_30> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_31> @ 144b94fa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_31> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_31>::<lambda_31>
          (void *this,<lambda_31> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  *(uint *)((longlong)this + 0x18) = param_1->BinIndex;
  return this;
}

// <lambda_32> @ 144b95040

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_32> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_32>::<lambda_32>
          (void *this,<lambda_32> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  *(uint *)((longlong)this + 0x18) = param_1->BinIndex;
  return this;
}

// <lambda_33> @ 144b950e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_33> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_33>::<lambda_33>
          (void *this,<lambda_33> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  *(uint *)((longlong)this + 0x18) = param_1->BinIndex;
  return this;
}

// <lambda_34> @ 144b95180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_34> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_34>::<lambda_34>
          (void *this,<lambda_34> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  *(uint *)((longlong)this + 0x18) = param_1->BinIndex;
  return this;
}

// <lambda_35> @ 144b95220

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_35> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_35>::<lambda_35>
          (void *this,<lambda_35> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  *(uint *)((longlong)this + 0x18) = param_1->BinIndex;
  return this;
}

// <lambda_36> @ 144b952c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_36> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_36>::<lambda_36>
          (void *this,<lambda_36> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  *(uint *)((longlong)this + 0x18) = param_1->BinIndex;
  return this;
}

// <lambda_37> @ 144b95360

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_37> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_37>::<lambda_37>
          (void *this,<lambda_37> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  *(uint *)((longlong)this + 0x18) = param_1->BinIndex;
  return this;
}

// <lambda_38> @ 144b95400

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_38> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_38>::<lambda_38>
          (void *this,<lambda_38> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  *(uint *)((longlong)this + 0x18) = param_1->BinIndex;
  return this;
}

// <lambda_39> @ 144b954a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_39> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_39>::<lambda_39>
          (void *this,<lambda_39> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  *(uint *)((longlong)this + 0x18) = param_1->BinIndex;
  return this;
}

// <lambda_3> @ 144b95540

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_3> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_3>::<lambda_3>
          (void *this,<lambda_3> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_40> @ 144b955d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_40> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_40>::<lambda_40>
          (void *this,<lambda_40> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  *(uint *)((longlong)this + 0x18) = param_1->BinIndex;
  return this;
}

// <lambda_41> @ 144b95670

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_41> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_41>::<lambda_41>
          (void *this,<lambda_41> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_42> @ 144b95700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_42> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_42>::<lambda_42>
          (void *this,<lambda_42> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_43> @ 144b95790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_43> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_43>::<lambda_43>
          (void *this,<lambda_43> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_45> @ 144b95820

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_45> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_45>::<lambda_45>
          (void *this,<lambda_45> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_46> @ 144b958b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_46> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_46>::<lambda_46>
          (void *this,<lambda_46> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_47> @ 144b95940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_47> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_47>::<lambda_47>
          (void *this,<lambda_47> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_4> @ 144b959d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_4> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_4>::<lambda_4>
          (void *this,<lambda_4> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_5> @ 144b95a60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_5> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_5>::<lambda_5>
          (void *this,<lambda_5> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_5> @ 144b95af0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_5> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_5>::<lambda_5>
          (void *this,
          TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
          *param_1,FInstanceCullingDeferredContext **param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = *param_2;
  return this;
}

// <lambda_6> @ 144b95b80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_6> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_6>::<lambda_6>
          (void *this,<lambda_6> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_6> @ 144b95c10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_6> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_6>::<lambda_6>
          (void *this,
          TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
          *param_1,FInstanceCullingDeferredContext **param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = *param_2;
  return this;
}

// <lambda_7> @ 144b95ca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_7> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_7>::<lambda_7>
          (void *this,<lambda_7> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_8> @ 144b95d30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_8> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_8>::<lambda_8>
          (void *this,<lambda_8> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_8> @ 144b95dc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_8> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_8>::<lambda_8>
          (void *this,
          TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
          *param_1,FInstanceCullingDeferredContext **param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = *param_2;
  return this;
}

// <lambda_9> @ 144b95e50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_9> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_9>::<lambda_9>
          (void *this,<lambda_9> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->PassParameters).ArrayNum;
  _Src = (param_1->PassParameters).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = param_1->DeferredContext;
  return this;
}

// <lambda_9> @ 144b95ee0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

<lambda_9> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_9>::<lambda_9>
          (void *this,
          TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
          *param_1,FInstanceCullingDeferredContext **param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  }
  *(FInstanceCullingDeferredContext **)((longlong)this + 0x10) = *param_2;
  return this;
}

// FInstanceCullingContext @ 144b975c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FInstanceCullingContext * __thiscall
FInstanceCullingContext::FInstanceCullingContext
          (FInstanceCullingContext *this,wchar_t *param_1,EShaderPlatform param_2,
          FInstanceCullingManager *param_3,TArrayView<int_const_,int> *param_4,
          TRefCountPtr<IPooledRenderTarget> *param_5,EInstanceCullingMode param_6,
          EInstanceCullingFlags param_7,EBatchProcessingMode param_8)

{
  int *_Src;
  IPooledRenderTarget *pIVar1;
  code *pcVar2;
  FMeshDrawCommandStatsManager *this_00;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FInstanceCullingContext *pFVar6;
  FUniformBufferStaticSlotRegistry *pFVar7;
  FMeshDrawCommandPassStats *pFVar8;
  TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *_Dst;
  int *piVar9;
  FName FVar10;
  uint uVar11;
  
  uVar11 = 0;
  this->ShaderPlatform = param_2;
  this->InstanceCullingManager = param_3;
  iVar5 = param_4->ArrayNum;
  _Src = param_4->DataPtr;
  piVar9 = &(this->ViewIds).ArrayMax;
  (this->ViewIds).AllocatorInstance.SecondaryData.Data = (int *)0x0;
  (this->ViewIds).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar9 = 6;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<int>_>
              (4,4,iVar5,0,&(this->ViewIds).AllocatorInstance,iVar5,piVar9);
    _Dst = (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->ViewIds).AllocatorInstance.SecondaryData.Data;
    if (_Dst == (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
      _Dst = &this->ViewIds;
    }
    memcpy(_Dst,_Src,(longlong)iVar5 << 2);
  }
  (this->PrevHZB).Reference = (IPooledRenderTarget *)0x0;
  pIVar1 = param_5->Reference;
  (this->PrevHZB).Reference = pIVar1;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x30))();
  }
  if ((param_3 == (FInstanceCullingManager *)0x0) || (param_3->bIsEnabled != false)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  this->bIsEnabled = bVar3;
  this->InstanceCullingMode = param_6;
  this->Flags = param_7;
  *(undefined8 *)&this->SyncPrerequisitesFunc = 0;
  *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x28 = 0;
  (this->MeshDrawCommandInfos).AllocatorInstance.Data = (FMeshDrawCommandInfo *)0x0;
  (this->MeshDrawCommandInfos).ArrayNum = 0;
  (this->MeshDrawCommandInfos).ArrayMax = 0;
  (this->IndirectArgs).AllocatorInstance.Data = (FRHIDrawIndexedIndirectParameters *)0x0;
  (this->IndirectArgs).ArrayNum = 0;
  (this->IndirectArgs).ArrayMax = 0;
  (this->DrawCommandDescs).AllocatorInstance.Data = (TIntVector2<unsigned_int> *)0x0;
  (this->DrawCommandDescs).ArrayNum = 0;
  (this->DrawCommandDescs).ArrayMax = 0;
  (this->PayloadData).AllocatorInstance.Data = (FPayloadData *)0x0;
  (this->PayloadData).ArrayNum = 0;
  (this->PayloadData).ArrayMax = 0;
  (this->InstanceIdOffsets).AllocatorInstance.Data = (uint *)0x0;
  (this->InstanceIdOffsets).ArrayNum = 0;
  (this->InstanceIdOffsets).ArrayMax = 0;
  (this->DrawCommandCompactionData).AllocatorInstance.Data = (FCompactionData *)0x0;
  (this->DrawCommandCompactionData).ArrayNum = 0;
  (this->DrawCommandCompactionData).ArrayMax = 0;
  (this->CompactionBlockDataIndices).AllocatorInstance.Data = (uint *)0x0;
  (this->CompactionBlockDataIndices).ArrayNum = 0;
  (this->CompactionBlockDataIndices).ArrayMax = 0;
  this->TotalInstances = 0;
  this->DynamicInstanceIdOffset = -1;
  this->DynamicInstanceIdNum = -1;
  this->NumCompactionInstances = 0;
  (this->LoadBalancers).Elements[0] = (FInstanceProcessingGPULoadBalancer *)0x0;
  (this->LoadBalancers).Elements[1] = (FInstanceProcessingGPULoadBalancer *)0x0;
  this->SingleInstanceProcessingMode = param_8;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FInstanceCullingContext *)(*pcVar2)();
      return pFVar6;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_2].MaxFeatureLevel == ES3_1) {
    piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if (*piVar9 < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&InstanceCullingSlotName,"InstanceCullingUbSlot");
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (*piVar9 < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        ::FName::FName(&BatchedPrimitiveSlotName,"BatchedPrimitive");
        _Init_thread_footer(&::_TSS1);
      }
    }
    pFVar7 = FUniformBufferStaticSlotRegistry::Get();
    bVar3 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)param_2);
    iVar5 = (pFVar7->SlotNames).ArrayNum;
    FVar10 = InstanceCullingSlotName;
    if (bVar3) {
      FVar10 = BatchedPrimitiveSlotName;
    }
    if (0 < iVar5) {
      do {
        uVar4 = 0;
        if ((int)uVar11 < iVar5) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FInstanceCullingContext *)(*pcVar2)();
            return pFVar6;
          }
        }
        if (*(FName *)((pFVar7->SlotNames).AllocatorInstance.Data + (longlong)(int)uVar11 * 8) ==
            FVar10) goto LAB_144b97846;
        iVar5 = (pFVar7->SlotNames).ArrayNum;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar5);
    }
  }
  uVar11 = 0xff;
LAB_144b97846:
  this->InstanceCullingStaticSlot = (uchar)uVar11;
  bVar3 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)param_2);
  this->bUsesUniformBufferView = bVar3;
  this->MeshDrawCommandPassStats = (FMeshDrawCommandPassStats *)0x0;
  this_00 = FMeshDrawCommandStatsManager::Instance;
  if (FMeshDrawCommandStatsManager::Instance != (FMeshDrawCommandStatsManager *)0x0) {
    iVar5 = wcscmp(param_1,L"HitProxy");
    if (iVar5 != 0) {
      pFVar8 = FMeshDrawCommandStatsManager::CreatePassStats(this_00,param_1);
      this->MeshDrawCommandPassStats = pFVar8;
    }
  }
  return this;
}

// ~<lambda_10> @ 144b983b0

void __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_10>::~<lambda_10>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~<lambda_5> @ 144b983d0

void __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_5>::~<lambda_5>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~<lambda_6> @ 144b983f0

void __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_6>::~<lambda_6>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~<lambda_7> @ 144b98410

void __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_7>::~<lambda_7>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~<lambda_8> @ 144b98430

void __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_8>::~<lambda_8>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~<lambda_9> @ 144b98450

void __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_9>::~<lambda_9>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~FInstanceCullingContext @ 144b99150

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FInstanceCullingContext::~FInstanceCullingContext(FInstanceCullingContext *this)

{
  int iVar1;
  FInstanceProcessingGPULoadBalancer *pFVar2;
  int *piVar3;
  uint *puVar4;
  FCompactionData *pFVar5;
  FPayloadData *pFVar6;
  TIntVector2<unsigned_int> *pTVar7;
  FRHIDrawIndexedIndirectParameters *pFVar8;
  FMeshDrawCommandInfo *pFVar9;
  longlong *plVar10;
  IPooledRenderTarget *pIVar11;
  longlong *plVar12;
  TStaticArray<FInstanceProcessingGPULoadBalancer_*,2,4294967295> *pTVar13;
  
  for (pTVar13 = &this->LoadBalancers;
      pTVar13 !=
      (TStaticArray<FInstanceProcessingGPULoadBalancer_*,2,4294967295> *)
      &this->SingleInstanceProcessingMode;
      pTVar13 = (TStaticArray<FInstanceProcessingGPULoadBalancer_*,2,4294967295> *)
                (pTVar13->Elements + 1)) {
    pFVar2 = pTVar13->Elements[0];
    if (pFVar2 != (FInstanceProcessingGPULoadBalancer *)0x0) {
      piVar3 = *(int **)pFVar2;
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          if (*(void **)(piVar3 + 6) != (void *)0x0) {
            FMemory::Free(*(void **)(piVar3 + 6));
          }
          if (*(void **)(piVar3 + 2) != (void *)0x0) {
            FMemory::Free(*(void **)(piVar3 + 2));
          }
          ::operator_delete(piVar3,0x28);
        }
      }
      ::operator_delete(pFVar2,0x20);
    }
  }
  puVar4 = (this->CompactionBlockDataIndices).AllocatorInstance.Data;
  if (puVar4 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar4);
  }
  pFVar5 = (this->DrawCommandCompactionData).AllocatorInstance.Data;
  if (pFVar5 != (FCompactionData *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar5);
  }
  puVar4 = (this->InstanceIdOffsets).AllocatorInstance.Data;
  if (puVar4 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar4);
  }
  pFVar6 = (this->PayloadData).AllocatorInstance.Data;
  if (pFVar6 != (FPayloadData *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar6);
  }
  pTVar7 = (this->DrawCommandDescs).AllocatorInstance.Data;
  if (pTVar7 != (TIntVector2<unsigned_int> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar7);
  }
  pFVar8 = (this->IndirectArgs).AllocatorInstance.Data;
  if (pFVar8 != (FRHIDrawIndexedIndirectParameters *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar8);
  }
  pFVar9 = (this->MeshDrawCommandInfos).AllocatorInstance.Data;
  if (pFVar9 != (FMeshDrawCommandInfo *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar9);
  }
  if (*(longlong *)&this->SyncPrerequisitesFunc != 0) {
    plVar10 = *(longlong **)&(this->SyncPrerequisitesFunc).field_0x28;
    plVar12 = (longlong *)&(this->SyncPrerequisitesFunc).field_0x10;
    if (plVar10 != (longlong *)0x0) {
      plVar12 = plVar10;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  pIVar11 = (this->PrevHZB).Reference;
  if (pIVar11 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar11->_padding_ + 0x38))();
  }
  piVar3 = (this->ViewIds).AllocatorInstance.SecondaryData.Data;
  if (piVar3 != (int *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar3);
    return;
  }
  return;
}

// operator() @ 144b99a60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_10>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return 0;
}

// operator() @ 144b99b00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_11>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x48);
}

// operator() @ 144b99bb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIntVector2<unsigned_int> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_12>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(TIntVector2<unsigned_int> **)(*(longlong *)((longlong)this + 0x10) + 0x40);
}

// operator() @ 144b99c60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_13>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x48) << 3;
}

// operator() @ 144b99d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_14>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x58);
}

// operator() @ 144b99dc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPayloadData * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_15>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(FPayloadData **)(*(longlong *)((longlong)this + 0x10) + 0x50);
}

// operator() @ 144b99e70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_16>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x58) << 4;
}

// operator() @ 144b99f20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_17>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x28);
}

// operator() @ 144b99fd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_18>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int **)(*(longlong *)((longlong)this + 0x10) + 0x20);
}

// operator() @ 144b9a080

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_19>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x28) << 2;
}

// operator() @ 144b9dda0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FInstanceCullingContext::AddClearIndirectArgInstanceCountPass'::__l5::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  TIntVector3<int>_u_0 local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  pcVar1 = *(code **)((longlong)this + 0x20);
  plVar4 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x48);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  iVar2 = (*pcVar1)(uVar3);
  *(int *)(*(longlong *)((longlong)this + 8) + 8) = iVar2;
  FComputeShaderUtils::GetGroupCountWrapped
            ((TIntVector3<int> *)&local_18._s_0,
             (int)((iVar2 + 0x3f >> 0x1f & 0x3fU) + iVar2 + 0x3f) >> 6);
  if (((0 < local_18._s_0.X) && (0 < local_18._s_0.Y)) && (0 < local_18._s_0.Z)) {
    FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_18._s_0);
    FComputeShaderUtils::Dispatch<FClearIndirectArgInstanceCountCs>
              (param_2,(TShaderRefBase<FClearIndirectArgInstanceCountCs,FShaderMapPointerTable> *)
                       ((longlong)this + 0x10),*(FShaderParametersMetadata **)this,
               *(FParameters **)((longlong)this + 8),(TIntVector3<int> *)&local_18._s_0);
  }
  return;
}

// operator() @ 144b9e730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_20>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0xb8);
}

// operator() @ 144b9e7e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FContextBatchInfoPacked * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_21>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(FContextBatchInfoPacked **)(*(longlong *)((longlong)this + 0x10) + 0xb0);
}

// operator() @ 144b9e890

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_22>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0xb8) * 0x28;
}

// operator() @ 144b9e940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_23>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x38) * 5;
}

// operator() @ 144b9e9f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRHIDrawIndexedIndirectParameters * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_24>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(FRHIDrawIndexedIndirectParameters **)(*(longlong *)((longlong)this + 0x10) + 0x30);
}

// operator() @ 144b9eaa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_25>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x38) * 0x14;
}

// operator() @ 144b9eb50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_26>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x38);
}

// operator() @ 144b9ec00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_27>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x68);
}

// operator() @ 144b9ecb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_28>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(uint **)(*(longlong *)((longlong)this + 0x10) + 0x60);
}

// operator() @ 144b9ed60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_29>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x68) << 2;
}

// operator() @ 144ba04b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_2>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x78);
}

// operator() @ 144ba0560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_30>::operator()(void *this)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar4 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar4 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  uVar1 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 0xc4);
  bVar3 = PlatformGPUSceneUsesUniformBufferView
                    ((FStaticShaderPlatform)
                     *(EShaderPlatform *)(*(longlong *)((longlong)this + 0x10) + 0xc0));
  uVar2 = uVar1 + 0x400;
  if (!bVar3) {
    uVar2 = uVar1;
  }
  return uVar2;
}

// operator() @ 144ba0620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_31>::operator()(void *this)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar6 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar6 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  lVar6 = *(longlong *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x18);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar6 + 0xa8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return *(int *)(*(longlong *)(lVar6 + 0xa0) + 8 + (longlong)(int)uVar1 * 0x10);
}

// operator() @ 144ba0730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_32>::operator()(void *this)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar6 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar6 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  lVar6 = *(longlong *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x18);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar6 + 0xa8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar4 = (uint *)(*pcVar2)();
      return puVar4;
    }
  }
  return *(uint **)(*(longlong *)(lVar6 + 0xa0) + (longlong)(int)uVar1 * 0x10);
}

// operator() @ 144ba0840

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_33>::operator()(void *this)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  uint uVar5;
  longlong lVar6;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar6 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar6 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  lVar6 = *(longlong *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x18);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar6 + 0xa8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (longlong)*(int *)(*(longlong *)(lVar6 + 0xa0) + 8 + (longlong)(int)uVar1 * 0x10) << 2;
}

// operator() @ 144ba0950

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_34>::operator()(void *this)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar7 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar7 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  lVar7 = *(longlong *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x18);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x98)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  plVar5 = (longlong *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar7 + 0x90));
  if (*(int *)((longlong)plVar5 + 0xc) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xdc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return *(int *)(*plVar5 + 0x10);
}

// operator() @ 144ba0a90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPackedBatch * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_35>::operator()(void *this)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  FPackedBatch *pFVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar7 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar7 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  lVar7 = *(longlong *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x18);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x98)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPackedBatch *)(*pcVar2)();
      return pFVar4;
    }
  }
  plVar5 = (longlong *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar7 + 0x90));
  if (*(int *)((longlong)plVar5 + 0xc) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xdc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPackedBatch *)(*pcVar2)();
      return pFVar4;
    }
  }
  return *(FPackedBatch **)(*plVar5 + 8);
}

// operator() @ 144ba0bd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_36>::operator()(void *this)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar7 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar7 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  lVar7 = *(longlong *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x18);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x98)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  plVar5 = (longlong *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar7 + 0x90));
  if (*(int *)((longlong)plVar5 + 0xc) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xdc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return *(int *)(*plVar5 + 0x10) << 2;
}

// operator() @ 144ba0d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_37>::operator()(void *this)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar7 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar7 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  lVar7 = *(longlong *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x18);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x98)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  plVar5 = (longlong *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar7 + 0x90));
  if (*(int *)((longlong)plVar5 + 0xc) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return *(int *)(*plVar5 + 0x20);
}

// operator() @ 144ba0e50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPackedItem * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_38>::operator()(void *this)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  FPackedItem *pFVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar7 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar7 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  lVar7 = *(longlong *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x18);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x98)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPackedItem *)(*pcVar2)();
      return pFVar4;
    }
  }
  plVar5 = (longlong *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar7 + 0x90));
  if (*(int *)((longlong)plVar5 + 0xc) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPackedItem *)(*pcVar2)();
      return pFVar4;
    }
  }
  return *(FPackedItem **)(*plVar5 + 0x18);
}

// operator() @ 144ba0f90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_39>::operator()(void *this)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar7 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar7 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  lVar7 = *(longlong *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x18);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x98)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  plVar5 = (longlong *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar7 + 0x90));
  if (*(int *)((longlong)plVar5 + 0xc) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return *(int *)(*plVar5 + 0x20) << 3;
}

// operator() @ 144ba1660

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCompactionData * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_3>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(FCompactionData **)(*(longlong *)((longlong)this + 0x10) + 0x70);
}

// operator() @ 144ba17a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIntVector3<int> * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_40>::operator()
          (void *this,TIntVector3<int> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  TIntVector3<int> *pTVar5;
  longlong lVar6;
  uint uVar7;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_28;
  
  local_28.ArrayNum = *(int *)((longlong)this + 8);
  lVar6 = (longlong)local_28.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.ArrayNum == 0) {
    local_28.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
               &local_28.ArrayMax);
    memcpy(local_28.AllocatorInstance.Data,_Src,lVar6 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_28);
  lVar6 = *(longlong *)((longlong)this + 0x10);
  uVar1 = *(uint *)((longlong)this + 0x18);
  uVar7 = 0;
  if ((int)uVar1 < *(int *)(lVar6 + 0x98)) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIntVector3<int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  iVar2 = *(int *)(*(longlong *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar6 + 0x90)) + 0x10);
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIntVector3<int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  FComputeShaderUtils::GetGroupCountWrapped(__return_storage_ptr__,iVar2);
  return __return_storage_ptr__;
}

// operator() @ 144ba18f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_41>::operator()(void *this)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar3 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar3 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  uVar1 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 300);
  uVar2 = 1;
  if (1 < uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}

// operator() @ 144ba19b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_42>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return (void *)0x0;
}

// operator() @ 144ba1a50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_43>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return 0;
}

// operator() @ 144ba1af0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_45>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x88);
}

// operator() @ 144ba1ba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_46>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(uint **)(*(longlong *)((longlong)this + 0x10) + 0x80);
}

// operator() @ 144ba1c50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_47>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x88) << 2;
}

// operator() @ 144ba1d00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_4>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return *(int *)(*(longlong *)((longlong)this + 0x10) + 0x78) * 0x14;
}

// operator() @ 144ba1db0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_5>::operator()(void *this)

{
  int iVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  int iVar2;
  longlong lVar3;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar3 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar3 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x130);
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// operator() @ 144ba51e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_6>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return (void *)0x0;
}

// operator() @ 144ba5280

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_7>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return 0;
}

// operator() @ 144ba5320

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_8>::operator()(void *this)

{
  int iVar1;
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  int iVar2;
  longlong lVar3;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar3 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar3 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 300);
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// operator() @ 144ba53e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_9>::operator()(void *this)

{
  FInstanceCullingDeferredContext *this_00;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 8);
  lVar1 = (longlong)local_18.ArrayNum;
  this_00 = *(FInstanceCullingDeferredContext **)((longlong)this + 0x10);
  _Src = *(void **)this;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this_00,&local_18);
  return (void *)0x0;
}

// AddClearIndirectArgInstanceCountPass @ 144ba8790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FInstanceCullingContext::AddClearIndirectArgInstanceCountPass
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGBuffer *param_3,
          TFunction<int___cdecl(void)> *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FRDGBufferUAV *pFVar6;
  FGlobalShaderType *pFVar7;
  FShaderType *pFVar8;
  FName this;
  FShaderParametersMetadata *pFVar9;
  FRDGEventName *pFVar10;
  longlong *plVar11;
  FParameters *pFVar12;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [8];
  undefined8 *local_170;
  FRDGBufferUAVDesc local_168;
  undefined1 local_158 [8];
  TIntVector3<int>_u_0 local_150 [2];
  TIntVector3<int>_u_0 local_138;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_128;
  FString local_118;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_108;
  initializer_list<FRDGResource_*> local_f8;
  TShaderRefBase<FClearIndirectArgInstanceCountCs,FShaderMapPointerTable> local_e8;
  FRDGEventName local_d8;
  FRDGEventName local_c0;
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &___7__TObject_VFParameters_FClearIndirectArgInstanceCountCs___FRDGAllocator__6B_;
  }
  local_170 = puVar5;
  if ((((undefined8 **)param_1->_padding_ <= &local_170) &&
      (&local_170 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar4 + 1;
  pFVar12 = (FParameters *)(puVar5 + 2);
  local_168._padding_._0_2_ = 0x1c;
  local_168._padding_._2_1_ = 0;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_170;
  local_168.Buffer = param_3;
  pFVar6 = FRDGBuilder::CreateUAV(param_1,&local_168,None);
  pFVar12->DrawIndirectArgsBufferOut = pFVar6;
  *(uint *)(puVar5 + 3) = (param_3->Desc).NumElements / 5;
  pFVar7 = FClearIndirectArgInstanceCountCs::GetStaticType();
  if (*(int *)&pFVar7->field_0x50 != 1) {
    local_178[0] = 0;
    `FGlobalShaderMap::GetShader<FClearIndirectArgInstanceCountCs>'::__l2::<lambda_1>::operator()
              (local_178);
  }
  pFVar8 = (FShaderType *)FClearIndirectArgInstanceCountCs::GetStaticType();
  FGlobalShaderMap::GetShader(param_2,&local_128,pFVar8,0);
  if (local_128.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_158);
    ::FName::ToString((FName *)this,&local_118);
    FClearIndirectArgInstanceCountCs::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FClearIndirectArgInstanceCountCs::GetStaticType();
  local_e8.ShaderContent = (FClearIndirectArgInstanceCountCs *)local_128.ShaderContent;
  local_e8.ShaderMap = local_128.ShaderMap;
  if (*(longlong *)param_4 == 0) {
    FComputeShaderUtils::GetGroupCountWrapped
              ((TIntVector3<int> *)&local_150[0]._s_0,
               (int)((*(int *)(puVar5 + 3) + 0x3f >> 0x1f & 0x3fU) + *(int *)(puVar5 + 3) + 0x3f) >>
               6);
    pFVar10 = FRDGEventName::FRDGEventName(&local_c0,1,L"ClearIndirectArgInstanceCount");
    pFVar9 = FClearIndirectArgInstanceCountCs::FParameters::FTypeInfo::GetStructMetadata();
    local_138._s_0.Z = local_150[0]._s_0.Z;
    local_138._0_8_ = local_150[0]._0_8_;
    FComputeShaderUtils::AddPass<FClearIndirectArgInstanceCountCs>
              (param_1,pFVar10,Compute,&local_e8,pFVar9,pFVar12,(TIntVector3<int> *)&local_138._s_0)
    ;
    if (local_c0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar9 = FClearIndirectArgInstanceCountCs::FParameters::FTypeInfo::GetStructMetadata();
    local_108.ShaderContent = local_128.ShaderContent;
    local_108.ShaderMap = local_128.ShaderMap;
    ValidateShaderParameters(&local_108,pFVar9,pFVar12);
    local_f8._First = (FRDGResource **)0x0;
    local_f8._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl(&(local_128.ShaderContent)->Bindings,pFVar9,pFVar12,&local_f8);
    local_a8._72_8_ = *(undefined8 *)&param_4->field_0x28;
    local_a8._32_8_ = *(undefined8 *)param_4;
    *(undefined8 *)&param_4->field_0x28 = 0;
    local_a8._64_8_ = *(undefined8 *)&param_4->field_0x20;
    local_a8._16_8_ = local_128.ShaderContent;
    local_a8._24_8_ = local_128.ShaderMap;
    local_a8._48_8_ = *(undefined8 *)&param_4->field_0x10;
    local_a8._56_8_ = *(undefined8 *)&param_4->field_0x18;
    if (local_a8._32_8_ != 0) {
      *(undefined8 *)param_4 = 0;
    }
    local_a8._0_8_ = pFVar9;
    local_a8._8_8_ = pFVar12;
    pFVar10 = FRDGEventName::FRDGEventName(&local_d8,1,L"ClearIndirectArgInstanceCount");
    FRDGBuilder::
    AddPassInternal<void,_FInstanceCullingContext::AddClearIndirectArgInstanceCountPass_::__l5::<lambda_1>_>
              (param_1,pFVar10,pFVar9,pFVar12,Compute,(<lambda_1> *)local_a8);
    if (local_d8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_a8._32_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x30);
      if ((longlong *)local_a8._72_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._72_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  if (*(longlong *)param_4 != 0) {
    plVar11 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// AddInstanceRunsToDrawCommand @ 144ba8bb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstanceCullingContext::AddInstanceRunsToDrawCommand
          (FInstanceCullingContext *this,uint param_1,int param_2,uint *param_3,uint param_4,
          EInstanceFlags param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  if (param_4 != 0) {
    do {
      uVar1 = (param_3[uVar3 * 2 + 1] - param_3[uVar3 * 2]) + 1;
      AddInstancesToDrawCommand
                (this,param_1,param_3[uVar3 * 2] + param_2,uVar2,uVar1,
                 param_5 | ForceInstanceCulling,param_6);
      uVar2 = uVar2 + uVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_4);
  }
  return;
}

// AddInstancesToDrawCommand @ 144ba8c80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstanceCullingContext::AddInstancesToDrawCommand
          (FInstanceCullingContext *this,uint param_1,int param_2,uint param_3,uint param_4,
          EInstanceFlags param_5)

{
  int *piVar1;
  uint uVar2;
  FPayloadData *pFVar3;
  EInstanceFlags EVar4;
  int iVar5;
  EBatchProcessingMode EVar6;
  uint uVar7;
  
  EVar4 = param_5;
  _param_5 = (uint)param_5;
  uVar7 = (EVar4 & 1) * 2;
  if ((EVar4 & PreserveInstanceOrder) == None) {
    uVar7 = uVar7 | param_1 * 4;
  }
  else {
    iVar5 = (this->PayloadData).ArrayNum;
    piVar1 = &(this->PayloadData).ArrayMax;
    uVar2 = (this->DrawCommandCompactionData).ArrayNum;
    uVar7 = uVar7 | iVar5 * 4 | 1;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_>
                        (0x410,&(this->PayloadData).AllocatorInstance,piVar1);
      (this->PayloadData).ArrayNum = iVar5;
    }
    (this->PayloadData).ArrayNum = iVar5 + 1;
    pFVar3 = (this->PayloadData).AllocatorInstance.Data;
    pFVar3[iVar5].RunInstanceOffset = param_3;
    pFVar3[iVar5].CompactionDataIndex = uVar2;
    pFVar3[iVar5].bDynamicInstanceDataOffset_IndirectArgsIndex = _param_5 << 0x1f | param_1;
    pFVar3[iVar5].InstanceDataOffset = param_2;
  }
  if ((param_4 == 1) && ((EVar4 & ForceInstanceCulling) == None)) {
    EVar6 = this->SingleInstanceProcessingMode;
  }
  else {
    EVar6 = Generic;
  }
  TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_>::Add
            ((TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_> *)
             (this->LoadBalancers).Elements[EVar6],param_2,param_4,uVar7);
  this->TotalInstances = this->TotalInstances + param_4;
  return;
}

// AddInstancesToDrawCommand @ 144ba8d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstanceCullingContext::AddInstancesToDrawCommand
          (FInstanceCullingContext *this,uint param_1,int param_2,uint param_3,uint param_4,
          EInstanceFlags param_5,uint param_6)

{
  int *piVar1;
  TArray<FRHIDrawIndexedIndirectParameters,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  TArray<UE::Math::TIntVector2<unsigned_int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar3;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar4;
  undefined4 uVar5;
  FRHIDrawIndexedIndirectParameters *pFVar6;
  TIntVector2<unsigned_int>_u_0 *pTVar7;
  FRHIDrawIndexedIndirectParameters *pFVar8;
  uint *puVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_e8 [32];
  int local_98;
  uint local_94;
  uint local_90;
  TIntVector2<unsigned_int>_u_0 local_88;
  uint local_80;
  FMeshDrawCommandInfo *local_78;
  FRHIDrawIndexedIndirectParameters local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((param_6 == 0xffffffff) || ((param_4 <= param_6 && (param_3 == 0)))) {
    AddInstancesToDrawCommand(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    local_98 = param_2;
    if (param_3 != 0) {
      if (param_4 == 0) {
        return;
      }
      if (param_3 % param_6 != 0) {
        uVar12 = param_6 - param_3 % param_6;
        uVar16 = param_4;
        if (uVar12 < param_4) {
          uVar16 = uVar12;
        }
        param_1 = (this->IndirectArgs).ArrayNum - 1;
        AddInstancesToDrawCommand(this,param_1,param_2,param_3,uVar16,param_5);
        local_98 = param_2 + uVar16;
        param_4 = param_4 - uVar16;
      }
    }
    if (param_4 != 0) {
      iVar13 = (this->MeshDrawCommandInfos).ArrayNum;
      uVar12 = ((param_6 - 1) + param_4) / param_6;
      uVar15 = iVar13 - 1;
      local_90 = 0;
      uVar16 = 0;
      if ((int)uVar15 < iVar13) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      local_80 = uVar12;
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar2 = &this->IndirectArgs;
      iVar13 = (this->IndirectArgs).ArrayNum;
      local_78 = (this->MeshDrawCommandInfos).AllocatorInstance.Data +
                 (this->MeshDrawCommandInfos).ArrayNum;
      uVar15 = iVar13 - 1;
      uVar16 = 0;
      if ((int)uVar15 < iVar13) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar14 = (longlong)(this->IndirectArgs).ArrayNum;
      pTVar3 = &this->DrawCommandDescs;
      iVar13 = (this->DrawCommandDescs).ArrayNum;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      uVar15 = iVar13 - 1;
      pFVar8 = pFVar6 + lVar14 + -1;
      local_70.IndexCountPerInstance = pFVar8->IndexCountPerInstance;
      local_70.InstanceCount = pFVar8->InstanceCount;
      local_70.StartIndexLocation = pFVar8->StartIndexLocation;
      local_70.BaseVertexLocation = pFVar8->BaseVertexLocation;
      local_70.StartInstanceLocation = pFVar6[lVar14 + -1].StartInstanceLocation;
      uVar16 = 0;
      if ((int)uVar15 < iVar13) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar16 = 0;
      local_88 = (pTVar3->AllocatorInstance).Data[(longlong)(this->DrawCommandDescs).ArrayNum + -1].
                 field0_0x0;
      if (uVar12 != 0) {
        do {
          uVar12 = param_4;
          if (param_6 < param_4) {
            uVar12 = param_6;
          }
          if ((param_3 != 0) || (uVar16 != 0)) {
            pTVar7 = &((pTVar3->AllocatorInstance).Data)->field0_0x0;
            if ((pTVar7 <= &local_88) &&
               ((&local_88 < pTVar7 + (this->DrawCommandDescs).ArrayMax &&
                (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)))) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar13 = (this->DrawCommandDescs).ArrayNum;
            piVar1 = &(this->DrawCommandDescs).ArrayMax;
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_>
                                 (0x408,&pTVar3->AllocatorInstance,piVar1);
            }
            (this->DrawCommandDescs).ArrayNum = iVar13 + 1;
            (pTVar3->AllocatorInstance).Data[iVar13].field0_0x0 = local_88;
            pFVar8 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar8 <= &local_70) && (&local_70 < pFVar8 + (this->IndirectArgs).ArrayMax)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            param_1 = (this->IndirectArgs).ArrayNum;
            piVar1 = &(this->IndirectArgs).ArrayMax;
            if (param_1 == *piVar1) {
              param_1 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_>
                                  (0x414,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->IndirectArgs).ArrayNum = param_1 + 1;
            pTVar4 = &this->InstanceIdOffsets;
            pFVar6 = (pTVar2->AllocatorInstance).Data;
            pFVar8 = pFVar6 + (int)param_1;
            pFVar8->IndexCountPerInstance = local_70.IndexCountPerInstance;
            pFVar8->InstanceCount = local_70.InstanceCount;
            pFVar8->StartIndexLocation = local_70.StartIndexLocation;
            pFVar8->BaseVertexLocation = local_70.BaseVertexLocation;
            pFVar6[(int)param_1].StartInstanceLocation = local_70.StartInstanceLocation;
            if (this->bUsesUniformBufferView == false) {
              local_94 = this->TotalInstances;
            }
            else {
              local_94 = (*(uint *)&(this->LoadBalancers).Elements[1]->field_0x18 & 0x7fffff) * 0x20
                         + (*(uint *)&(this->LoadBalancers).Elements[0]->field_0x18 & 0xffffff) *
                           0x10;
            }
            local_94 = local_94 * (this->ViewIds).ArrayNum;
            puVar9 = (pTVar4->AllocatorInstance).Data;
            if (((puVar9 <= &local_94) && (&local_94 < puVar9 + (this->InstanceIdOffsets).ArrayMax))
               && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar13 = (this->InstanceIdOffsets).ArrayNum;
            piVar1 = &(this->InstanceIdOffsets).ArrayMax;
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                 (0x404,&pTVar4->AllocatorInstance,piVar1);
            }
            (this->InstanceIdOffsets).ArrayNum = iVar13 + 1;
            (pTVar4->AllocatorInstance).Data[iVar13] = local_94;
            uVar5 = *(undefined4 *)&local_78[-1].field_0x8;
            *(uint *)&local_78[-1].field_0x8 =
                 (ZPULL(uVar5,0,0xf) + 1 ^ local_78[-1].NumBatches) & 0x7fff ^ uVar5;
          }
          AddInstancesToDrawCommand(this,param_1,local_98,param_3,uVar12,param_5);
          param_4 = param_4 - uVar12;
          local_98 = local_98 + uVar12;
          uVar16 = local_90 + 1;
          local_90 = uVar16;
        } while (uVar16 < local_80);
      }
    }
  }
  return;
}

// AllocateIndirectArgs @ 144baa600

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

uint __thiscall
FInstanceCullingContext::AllocateIndirectArgs
          (FInstanceCullingContext *this,FMeshDrawCommand *param_1)

{
  int *piVar1;
  uint uVar2;
  FRHIDrawIndexedIndirectParameters *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar6 = param_1->NumPrimitives;
  iVar9 = (*(int *)&param_1->field_0x114 << 0x1d) >> 0x1d;
  if (iVar9 < 6) {
    if (iVar9 == 1) {
      uVar8 = uVar6 + 2;
    }
    else if (iVar9 == 2) {
      uVar8 = uVar6 * 2;
    }
    else if (iVar9 == 3) {
      uVar8 = uVar6 * 4;
    }
    else {
      uVar8 = uVar6 * 3;
      if (iVar9 == 4) {
        uVar8 = uVar6;
      }
    }
    uVar6 = param_1->FirstIndex;
    uVar7 = (this->IndirectArgs).ArrayNum;
    piVar1 = &(this->IndirectArgs).ArrayMax;
    uVar2 = (param_1->field7_0x100).VertexParams.BaseVertexIndex;
    if (uVar7 == *piVar1) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_>
                        (0x414,&(this->IndirectArgs).AllocatorInstance,piVar1);
    }
    (this->IndirectArgs).ArrayNum = uVar7 + 1;
    pFVar3 = (this->IndirectArgs).AllocatorInstance.Data;
    pFVar3[(int)uVar7].IndexCountPerInstance = uVar8;
    pFVar3[(int)uVar7].InstanceCount = 0;
    pFVar3[(int)uVar7].StartIndexLocation = uVar6;
    pFVar3[(int)uVar7].BaseVertexLocation = uVar2;
    pFVar3[(int)uVar7].StartInstanceLocation = 0;
    return uVar7;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2635879141030756099>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                     ,0xfd,"MeshDrawCommand->PrimitiveType < PT_Num");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  return 0;
}

// BeginAsyncSetup @ 144baa8c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstanceCullingContext::BeginAsyncSetup
          (FInstanceCullingContext *this,TFunction<void___cdecl(FInstanceCullingContext_&)> *param_1
          )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&this->SyncPrerequisitesFunc;
  uVar3 = *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x8;
  uVar4 = *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x10;
  uVar5 = *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x18;
  uVar6 = *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x20;
  uVar7 = *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x28;
  *(undefined8 *)&this->SyncPrerequisitesFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  return;
}

// BuildRenderingCommands @ 144baafb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstanceCullingContext::BuildRenderingCommands
          (FInstanceCullingContext *this,FRDGBuilder *param_1,FGPUScene *param_2,int param_3,
          int param_4,FInstanceCullingResult *param_5)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)&this->SyncPrerequisitesFunc != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SyncPrerequisitesFunc",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                       ,0x2a9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)&(param_5->Parameters).DrawIndirectArgsBuffer = 0;
  *(undefined8 *)&(param_5->Parameters).DrawIndirectArgsBuffer.field_0x8 = 4;
  *(undefined8 *)&(param_5->Parameters).InstanceIdOffsetBuffer = 0;
  *(undefined8 *)&(param_5->Parameters).InstanceIdOffsetBuffer.field_0x8 = 8;
  (param_5->Parameters).InstanceDataByteOffset = 0;
  (param_5->Parameters).IndirectArgsByteOffset = 0;
  (param_5->Parameters)._padding_ = 0;
  *(undefined8 *)&(param_5->Parameters).InstanceCulling = 0;
  *(undefined8 *)&(param_5->Parameters).InstanceCulling.field_0x8 = 1;
  *(undefined8 *)&(param_5->Parameters).Scene = 0;
  *(undefined8 *)&(param_5->Parameters).Scene.field_0x8 = 1;
  *(undefined8 *)&(param_5->Parameters).BatchedPrimitive = 0;
  *(undefined8 *)&(param_5->Parameters).BatchedPrimitive.field_0x8 = 1;
  this->DynamicInstanceIdOffset = param_3;
  this->DynamicInstanceIdNum = param_4;
  BuildRenderingCommandsInternal(this,param_1,param_2,Synchronous,&param_5->Parameters);
  return;
}

// BuildRenderingCommands @ 144bab0e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstanceCullingContext::BuildRenderingCommands
          (FInstanceCullingContext *this,FRDGBuilder *param_1,FGPUScene *param_2,
          FInstanceCullingDrawParams *param_3)

{
  BuildRenderingCommandsInternal(this,param_1,param_2,DeferredOrAsync,param_3);
  return;
}

// BuildRenderingCommandsInternal @ 144bab100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FInstanceCullingContext::BuildRenderingCommandsInternal
          (FInstanceCullingContext *this,FRDGBuilder *param_1,FGPUScene *param_2,
          EAsyncProcessingMode param_3,FInstanceCullingDrawParams *param_4)

{
  char cVar1;
  FInstanceCullingDeferredContext *this_00;
  TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *pTVar2;
  TRDGUniformBuffer<FBatchedPrimitiveParameters> *pTVar3;
  undefined8 uVar4;
  FInstanceCullingManager *pFVar5;
  TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_> *this_01;
  FMeshDrawCommandPassStats *pFVar6;
  code *pcVar7;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar8;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar9;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar10;
  ForElementType<int> *pFVar11;
  TConsoleVariableData<int> *pTVar12;
  FParameters *pFVar13;
  TRDGUniformBuffer<FSceneUniformParameters> **ppTVar14;
  bool bVar15;
  EUniformBufferBindingFlags EVar16;
  bool bVar17;
  byte bVar18;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar19;
  FShaderParametersMetadata *pFVar20;
  FRDGScope *this_02;
  FRDGBufferUAV *pFVar21;
  FRDGBufferUAV *pFVar22;
  FGPUSceneResourceParameters *pFVar23;
  FRDGBuffer *pFVar24;
  FCullingShaderParameters *pFVar25;
  FDynamicMeshBoundsShaderParameters *pFVar26;
  FParameters *pFVar27;
  FRDGBufferSRV *pFVar28;
  FShaderType *pFVar29;
  FName this_03;
  FRDGEventName *pFVar30;
  FParameters *pFVar31;
  TIntVector3<int> *pTVar32;
  FRDGBuffer *pFVar33;
  FParameters *pFVar34;
  FBatchedPrimitiveParameters *pFVar35;
  FShader *pFVar36;
  FInstanceCullingGlobalUniforms *pFVar37;
  FRHIGPUBufferReadback *pFVar38;
  byte bVar39;
  int iVar40;
  int *piVar41;
  TIntVector2<unsigned_int> *pTVar42;
  FPayloadData *pFVar43;
  FParameters *pFVar44;
  uint *puVar45;
  int iVar46;
  ulong64 uVar47;
  FRDGBufferSRVDesc *pFVar48;
  TRDGUniformBuffer<FSceneUniformParameters> **ppTVar49;
  uint uVar50;
  TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar51;
  uint uVar52;
  int iVar53;
  longlong lVar54;
  ERDGInitialDataFlags EVar55;
  undefined1 local_768 [16];
  undefined8 local_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined8 local_748;
  uint local_738;
  FRDGBufferUAVDesc local_728;
  undefined1 local_718 [4];
  uint local_714;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_708;
  uint local_6f8;
  FRDGBufferSRV *local_6f0;
  FGlobalShaderMap *local_6e8;
  FRDGBuffer *local_6e0;
  undefined8 local_6d8;
  EBufferUsageFlags EStack_6d0;
  undefined4 uStack_6cc;
  undefined8 local_6c8;
  wchar_t **local_6c0;
  FInstanceCullingManager *local_6b8;
  FRDGBuffer *local_6b0;
  FRDGBuffer *local_6a8;
  FRDGBufferUAV *local_6a0;
  FRDGBuffer *local_698;
  FRDGBuffer *local_690;
  FRDGBuffer *local_688;
  FRDGBufferUAVDesc local_680;
  FRDGBufferUAVDesc local_670;
  FRDGBufferUAVDesc local_660;
  FRDGBufferUAVDesc local_650;
  TIntVector3<int>_u_0 local_638;
  wchar_t *local_628;
  TIntVector3<int>_u_0 local_620 [2];
  TIntVector3<int>_u_0 local_608;
  FParameters *local_5f8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_5f0;
  char local_5e0;
  TIntVector3<int>_u_0 local_5d8;
  FRDGBufferSRVDesc local_5c8;
  FRDGBufferSRVDesc local_5a8;
  FRDGBufferSRVDesc local_588;
  FRDGBufferSRVDesc local_568;
  FRDGBufferSRVDesc local_548;
  FRDGBufferSRVDesc local_528;
  FRDGBufferSRVDesc local_508;
  FRDGBufferSRVDesc local_4e8;
  FRDGBufferSRVDesc local_4c8;
  FRDGBufferSRVDesc local_4a8;
  FRDGBufferSRVDesc local_488;
  FRDGBufferSRVDesc local_468;
  FRDGBufferSRVDesc local_448;
  FRDGBufferSRVDesc local_428;
  FRDGBufferSRVDesc local_408;
  FRDGBufferSRVDesc local_3e8;
  FGPUData local_3c8;
  FRDGBufferDesc local_3a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[35],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[35],wchar_t_const_*_&&>_>_>
  local_390;
  TRDGUniformBuffer<FSceneUniformParameters> *local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  FRDGBufferSRV *local_338;
  FRDGBufferSRV *pFStack_330;
  FRDGBufferSRV *local_328;
  FRDGBufferSRV *pFStack_320;
  FRDGBufferSRV *local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  FRDGBufferSRV *local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  FRHIShaderResourceView *pFStack_2d0;
  FRDGBufferSRV *local_2c8;
  FRDGBufferSRV *pFStack_2c0;
  FRDGBufferSRV *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  FRDGBufferSRV *pFStack_2a0;
  FRDGBufferSRV *local_298;
  FRDGBufferUAV *pFStack_290;
  FRDGBufferUAV *local_288;
  FRDGBufferUAV *pFStack_280;
  FRDGBufferSRV *local_278;
  FRDGBufferUAV *local_270;
  FRDGBufferUAV *local_268;
  FRDGTexture *local_260;
  FRHISamplerState *local_258;
  float local_250;
  float local_24c;
  int local_248;
  int local_240;
  int local_23c;
  FString local_238;
  undefined1 local_228 [8];
  TShaderRefBase<FCalculateCompactBlockInstanceOffsetsCs,FShaderMapPointerTable> local_220;
  TShaderRefBase<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs,FShaderMapPointerTable>
  local_208;
  FRDGBufferDesc local_1f8;
  TRDGUniformBuffer<FSceneUniformParameters> *local_1e0 [2];
  FShaderParametersMetadata *local_1d0;
  TRDGUniformBuffer<FSceneUniformParameters> *local_1c8 [2];
  FShaderParametersMetadata *local_1b8;
  FRDGBufferDesc local_1b0;
  TShaderRefBase<FCompactVisibleInstancesCs,FShaderMapPointerTable> local_198;
  TRDGUniformBuffer<FSceneUniformParameters> *local_188 [2];
  FShaderParametersMetadata *local_178;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  FRDGEventName local_150;
  TIntVector3<int> local_138;
  TIntVector3<int> local_12c;
  FRDGEventName local_120;
  FRDGEventName local_108;
  FCullingShaderParameters local_e8;
  FDynamicMeshBoundsShaderParameters local_d8;
  TFunction<int___cdecl(void)> local_c8;
  FGPUSceneResourceParameters local_98;
  
  local_738 = 0;
  if (this->MeshDrawCommandPassStats != (FMeshDrawCommandPassStats *)0x0) {
    if ((this->MeshDrawCommandPassStats->bBuildRenderingCommandsCalled != false) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!MeshDrawCommandPassStats->bBuildRenderingCommandsCalled",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                            ,0x2c3,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this->MeshDrawCommandPassStats->bBuildRenderingCommandsCalled = true;
  }
  if ((param_4 == (FInstanceCullingDrawParams *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceCullingDrawParams",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                          ,0x2c8,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(undefined8 *)&param_4->DrawIndirectArgsBuffer = 0;
  *(undefined8 *)&(param_4->DrawIndirectArgsBuffer).field_0x8 = 0;
  *(undefined8 *)&param_4->InstanceIdOffsetBuffer = 0;
  *(undefined8 *)&(param_4->InstanceIdOffsetBuffer).field_0x8 = 0;
  param_4->InstanceDataByteOffset = 0;
  param_4->IndirectArgsByteOffset = 0;
  param_4->_padding_ = 0;
  *(undefined8 *)&param_4->InstanceCulling = 0;
  *(undefined8 *)&(param_4->InstanceCulling).field_0x8 = 0;
  *(undefined8 *)&param_4->Scene = 0;
  *(undefined8 *)&(param_4->Scene).field_0x8 = 0;
  *(undefined8 *)&param_4->BatchedPrimitive = 0;
  *(undefined8 *)&(param_4->BatchedPrimitive).field_0x8 = 0;
  if (this->InstanceCullingManager != (FInstanceCullingManager *)0x0) {
    pTVar19 = FSceneUniformBuffer::GetBuffer(this->InstanceCullingManager->SceneUniforms,param_1);
    pFVar20 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
    EVar16 = Static;
    if (pFVar20->BindingFlags != StaticAndShader) {
      EVar16 = pFVar20->BindingFlags;
    }
    uStack_750 = CONCAT31(uStack_750._1_3_,EVar16);
    *(TRDGUniformBuffer<FSceneUniformParameters> **)&param_4->Scene = pTVar19;
    *(ulonglong *)&(param_4->Scene).field_0x8 = CONCAT44(uStack_74c,uStack_750);
    local_758 = pTVar19;
  }
  if ((((param_3 != Synchronous) && (this->InstanceCullingManager != (FInstanceCullingManager *)0x0)
       ) && (this_00 = this->InstanceCullingManager->DeferredContext,
            this_00 != (FInstanceCullingDeferredContext *)0x0)) &&
     (this->InstanceCullingMode == Normal)) {
    if (this_00->bProcessed != false) {
      return;
    }
    local_728.Buffer = (FRDGBuffer *)CONCAT44(local_728.Buffer._4_4_,4);
    pFVar24 = local_728.Buffer;
    local_728.Buffer = (FRDGBuffer *)CONCAT44(local_728.Buffer._4_4_,8);
    *(FRDGBuffer **)&param_4->DrawIndirectArgsBuffer = this_00->DrawIndirectArgsBuffer;
    *(FRDGBuffer **)&(param_4->DrawIndirectArgsBuffer).field_0x8 = pFVar24;
    local_728._padding_ = (longlong)this_00->InstanceDataBuffer;
    *(longlong *)&param_4->InstanceIdOffsetBuffer = local_728._padding_;
    *(FRDGBuffer **)&(param_4->InstanceIdOffsetBuffer).field_0x8 = local_728.Buffer;
    pTVar2 = this_00->UniformBuffer;
    pFVar20 = FInstanceCullingGlobalUniforms::GetStructMetadata();
    EVar16 = Static;
    if (pFVar20->BindingFlags != StaticAndShader) {
      EVar16 = pFVar20->BindingFlags;
    }
    local_728.Buffer = (FRDGBuffer *)CONCAT71(local_728.Buffer._1_7_,EVar16);
    *(TRDGUniformBuffer<FInstanceCullingGlobalUniforms> **)&param_4->InstanceCulling = pTVar2;
    *(FRDGBuffer **)&(param_4->InstanceCulling).field_0x8 = local_728.Buffer;
    pTVar3 = this_00->BatchedPrimitive;
    local_728._padding_ = (longlong)pTVar2;
    pFVar20 = FBatchedPrimitiveParameters::GetStructMetadata();
    EVar16 = Static;
    if (pFVar20->BindingFlags != StaticAndShader) {
      EVar16 = pFVar20->BindingFlags;
    }
    local_728.Buffer = (FRDGBuffer *)CONCAT71(local_728.Buffer._1_7_,EVar16);
    *(TRDGUniformBuffer<FBatchedPrimitiveParameters> **)&param_4->BatchedPrimitive = pTVar3;
    *(FRDGBuffer **)&(param_4->BatchedPrimitive).field_0x8 = local_728.Buffer;
    local_728._padding_ = (longlong)pTVar3;
    FInstanceCullingMergedContext::AddBatch
              ((FInstanceCullingMergedContext *)this_00,param_1,this,param_4);
    return;
  }
  WaitForSetupTask(this);
  if ((*(longlong *)&this->SyncPrerequisitesFunc != 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!SyncPrerequisitesFunc",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                          ,0x2b7,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (this->TotalInstances == 0) {
    if (this->InstanceCullingManager == (FInstanceCullingManager *)0x0) {
      return;
    }
    pTVar2 = this->InstanceCullingManager->DummyUniformBuffer;
    pFVar20 = FInstanceCullingGlobalUniforms::GetStructMetadata();
    EVar16 = Static;
    if (pFVar20->BindingFlags != StaticAndShader) {
      EVar16 = pFVar20->BindingFlags;
    }
    local_728.Buffer = (FRDGBuffer *)CONCAT71(local_728.Buffer._1_7_,EVar16);
    *(TRDGUniformBuffer<FInstanceCullingGlobalUniforms> **)&param_4->InstanceCulling = pTVar2;
    *(FRDGBuffer **)&(param_4->InstanceCulling).field_0x8 = local_728.Buffer;
    return;
  }
  if ((this->DynamicInstanceIdOffset < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("DynamicInstanceIdOffset >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                          ,0x2ea,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->DynamicInstanceIdNum < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("DynamicInstanceIdNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                          ,0x2eb,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->InstanceCullingMode != Normal) && ((this->ViewIds).ArrayNum != 2)) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2635879141030755603>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                          ,0x2ed,
                          "InstanceCullingMode == EInstanceCullingMode::Normal || ViewIds.Num() == 2"
                         ), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar12 = CVarCullInstances.Ref;
  if (this->InstanceCullingManager != (FInstanceCullingManager *)0x0) {
    bVar15 = IsInParallelRenderingThread();
    if ((!bVar15) &&
       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (pTVar12->ShadowedValue[1] != 0) {
      bVar15 = true;
      goto LAB_144bab41a;
    }
  }
  bVar15 = false;
LAB_144bab41a:
  local_6b8 = this->InstanceCullingManager;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_5e0 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    local_628 = L"Off";
    if (bVar15) {
      local_628 = L"On";
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x2f3;
      local_160 = 0x54bcc730;
      uStack_15c = 1;
      ::Desc._padding_._0_4_ = 0x54bcc730;
      ::Desc._padding_._4_4_ = uStack_164;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_BuildRenderingC;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FInstanceCullingContext::BuildRenderingCommandsInternal'::__l53::<lambda_1>::
             operator()<wchar_t_const_*>'::__l3::<lambda_2>::
             operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[35],wchar_t_const_*_&&>_>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_390._Myfirst._Val = &::Desc;
    local_390._padding_ = 0x150e509d0;
    local_5f0.State = (FRDGScopeState *)param_1;
    local_390._padding_ = (longlong)&local_628;
    local_390._padding_ = (longlong)local_718;
    this_02 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_02;
    local_5f0.Scope = this_02;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[35],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[35],wchar_t_const_*_&&>_>_>_>
              (&(this_02->Impl).Impl,(FRDGScopeState *)param_1,&local_390);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_02,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_02,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_5e0 = '\x01';
  }
  if (((GInstanceCullingAllowOrderPreservation == 0) ||
      (bVar17 = IsMobilePlatform((FStaticShaderPlatform)this->ShaderPlatform), bVar17)) ||
     ((this->Flags & NoInstanceOrderPreservation) != None)) {
    bVar18 = 0;
  }
  else {
    bVar18 = 1;
  }
  uVar50 = (this->CompactionBlockDataIndices).ArrayNum;
  pFVar21 = (FRDGBufferUAV *)0x0;
  local_6a8 = (FRDGBuffer *)0x0;
  local_6b0 = (FRDGBuffer *)0x0;
  local_6f0 = (FRDGBufferSRV *)0x0;
  pFVar22 = pFVar21;
  local_6f8 = uVar50;
  if (bVar18 != 0) {
    local_748 = 0;
    uStack_750 = 0x10109;
    local_758._4_4_ = 1;
    if (1 < this->NumCompactionInstances) {
      local_758._4_4_ = this->NumCompactionInstances;
    }
    local_1f8.Metadata = (FShaderParametersMetadata *)0x0;
    local_758._0_4_ = 4;
    local_1f8._12_4_ = uStack_74c;
    local_1f8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_1f8.BytesPerElement = 4;
    local_1f8.NumElements = local_758._4_4_;
    local_6a8 = FRDGBuilder::CreateBuffer
                          (param_1,&local_1f8,L"InstanceCulling.Compaction.TempInstanceIdsBuffer",
                           None);
    local_670._padding_._2_1_ = 0;
    bVar39 = 0;
    if (((local_6a8->Desc).Usage & DrawIndirect) != None) {
      bVar39 = 0x1c;
    }
    local_670._padding_._0_2_ = (ushort)bVar39;
    local_670.Buffer = local_6a8;
    pFVar21 = FRDGBuilder::CreateUAV(param_1,&local_670,None);
    uStack_750 = 0x10109;
    local_748 = 0;
    uVar52 = 1;
    if (1 < uVar50) {
      uVar52 = uVar50;
    }
    local_1d0 = (FShaderParametersMetadata *)0x0;
    local_758 = (TRDGUniformBuffer<FSceneUniformParameters> *)CONCAT44(uVar52,4);
    local_1e0[1]._4_4_ = uStack_74c;
    local_1e0[1]._0_4_ = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_1e0[0] = local_758;
    local_6b0 = FRDGBuilder::CreateBuffer
                          (param_1,(FRDGBufferDesc *)local_1e0,
                           L"InstanceCulling.Compaction.BlockInstanceCounts",None);
    bVar39 = 0;
    local_680._padding_._2_1_ = 0;
    if (((local_6b0->Desc).Usage & DrawIndirect) != None) {
      bVar39 = 0x1c;
    }
    local_680._padding_._0_2_ = (ushort)bVar39;
    local_680.Buffer = local_6b0;
    pFVar22 = FRDGBuilder::CreateUAV(param_1,&local_680,None);
    uVar52 = (this->DrawCommandCompactionData).ArrayNum;
    if ((int)uVar52 < 1) {
      local_5a8.Buffer =
           FSystemTextures::GetDefaultStructuredBuffer
                     ((FSystemTextures *)&GSystemTextures,param_1,0x14);
    }
    else {
      local_5a8.Buffer =
           CreateStructuredBuffer
                     (param_1,L"InstanceCulling.DrawCommandCompactionData",0x14,uVar52,
                      (this->DrawCommandCompactionData).AllocatorInstance.Data,
                      (ulonglong)(uVar52 * 0x14),None);
    }
    local_5a8._padding_._4_4_ = 0;
    local_5a8._padding_ = 0;
    local_5a8._padding_._0_4_ = 0xffffffff;
    local_5a8._padding_._0_1_ = 0;
    if ((((local_5a8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_5a8._padding_._0_1_ = 0x1c;
    }
    local_6f0 = FRDGBuilder::CreateSRV(param_1,&local_5a8);
    if (uVar50 != 0) {
      if ((this->NumCompactionInstances == 0) &&
         (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2635879141030755565>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                              ,0x313,"NumCompactionInstances > 0"), bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      AddClearUAVPass(param_1,pFVar22,0,Compute);
    }
  }
  local_6e8 = GetGlobalShaderMap(this->ShaderPlatform);
  uVar50 = (this->ViewIds).ArrayNum;
  if (uVar50 == 0) {
    uVar50 = 1;
    piVar41 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_const&___ptr64,ERDGInitialDataFlags)'
               ::__l2::DummyElement;
    EVar55 = NoCopy;
    uVar47 = 4;
  }
  else {
    piVar41 = (this->ViewIds).AllocatorInstance.SecondaryData.Data;
    if ((TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)piVar41 ==
        (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      piVar41 = (int *)&this->ViewIds;
    }
    uVar47 = (ulong64)(uVar50 * 4);
    EVar55 = None;
  }
  local_6e0 = CreateStructuredBuffer
                        (param_1,L"InstanceCulling.ViewIds",4,uVar50,piVar41,uVar47,EVar55);
  if (this->bUsesUniformBufferView == false) {
    uVar50 = this->TotalInstances;
  }
  else {
    uVar50 = (*(uint *)&(this->LoadBalancers).Elements[1]->field_0x18 & 0x7fffff) * 0x20 +
             (*(uint *)&(this->LoadBalancers).Elements[0]->field_0x18 & 0xffffff) * 0x10;
  }
  uVar50 = uVar50 * (this->ViewIds).ArrayNum;
  bVar17 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)this->ShaderPlatform);
  local_714 = uVar50 + 0x400;
  if (!bVar17) {
    local_714 = uVar50;
  }
  bVar17 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)this->ShaderPlatform);
  pTVar19 = (TRDGUniformBuffer<FSceneUniformParameters> *)0x0;
  if (bVar17) {
    uStack_750 = 0x10109;
    local_758 = (TRDGUniformBuffer<FSceneUniformParameters> *)CONCAT44(local_714,0x10);
    local_748 = 0;
    local_6d8 = local_758;
    uStack_6cc = uStack_74c;
    EStack_6d0 = UniformBuffer|StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  }
  else {
    EStack_6d0 = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_6d8 = (TRDGUniformBuffer<FSceneUniformParameters> *)CONCAT44(local_714,4);
  }
  local_6c8 = 0;
  local_1b8 = (FShaderParametersMetadata *)0x0;
  local_1c8[0] = local_6d8;
  local_1c8[1] = (TRDGUniformBuffer<FSceneUniformParameters> *)_EStack_6d0;
  local_688 = FRDGBuilder::CreateBuffer
                        (param_1,(FRDGBufferDesc *)local_1c8,L"InstanceCulling.InstanceIdsBuffer",
                         None);
  local_660._padding_._2_1_ = 0;
  bVar39 = 0;
  if (((local_688->Desc).Usage & DrawIndirect) != None) {
    bVar39 = 0x1c;
  }
  local_660._padding_._0_2_ = (ushort)bVar39;
  local_660.Buffer = local_688;
  local_6a0 = FRDGBuilder::CreateUAV(param_1,&local_660,SkipBarrier);
  uVar50 = (this->DrawCommandDescs).ArrayNum;
  local_308 = 0;
  uStack_300 = 0;
  local_2a8 = 0;
  pFStack_2a0 = (FRDGBufferSRV *)0x0;
  local_298 = (FRDGBufferSRV *)0x0;
  pFStack_290 = (FRDGBufferUAV *)0x0;
  local_288 = (FRDGBufferUAV *)0x0;
  pFStack_280 = (FRDGBufferUAV *)0x0;
  local_2e8 = (FRDGBufferSRV *)0x0;
  pFStack_2d0 = (FRHIShaderResourceView *)0x0;
  local_2b0 = 0;
  local_260 = (FRDGTexture *)0x0;
  local_258 = (FRHISamplerState *)0x0;
  bVar17 = uVar50 != 0;
  if (bVar17) {
    pTVar42 = (this->DrawCommandDescs).AllocatorInstance.Data;
    uVar47 = (ulong64)(uVar50 * 8);
  }
  else {
    uVar50 = 1;
    pTVar42 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::Math::TIntVector2<unsigned_int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<UE::Math::TIntVector2<unsigned_int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const&___ptr64,ERDGInitialDataFlags)'
               ::__l2::DummyElement;
    uVar47 = 8;
  }
  local_5c8.Buffer =
       CreateStructuredBuffer
                 (param_1,L"InstanceCulling.DrawCommandDescs",8,uVar50,pTVar42,uVar47,!bVar17);
  local_5c8._padding_._4_4_ = 0;
  local_5c8._padding_._0_4_ = 0xffffffff;
  local_5c8._padding_ = 0;
  local_5c8._padding_._0_1_ = 0;
  if ((((local_5c8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_5c8._padding_._0_1_ = 0x1c;
  }
  local_2c8 = FRDGBuilder::CreateSRV(param_1,&local_5c8);
  uVar50 = (this->PayloadData).ArrayNum;
  bVar17 = uVar50 != 0;
  if (bVar17) {
    pFVar43 = (this->PayloadData).AllocatorInstance.Data;
    uVar47 = (ulong64)(uVar50 << 4);
  }
  else {
    uVar50 = 1;
    pFVar43 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingContext::FPayloadData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FInstanceCullingContext::FPayloadData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const&___ptr64,ERDGInitialDataFlags)'
               ::__l2::DummyElement;
    uVar47 = 0x10;
  }
  local_568.Buffer =
       CreateStructuredBuffer
                 (param_1,L"InstanceCulling.PayloadData",0x10,uVar50,pFVar43,uVar47,!bVar17);
  local_568._padding_._4_4_ = 0;
  local_568._padding_._0_4_ = 0xffffffff;
  local_568._padding_ = 0;
  local_568._padding_._0_1_ = 0;
  if ((((local_568.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_568._padding_._0_1_ = 0x1c;
  }
  pFStack_2c0 = FRDGBuilder::CreateSRV(param_1,&local_568);
  if (this->InstanceCullingManager != (FInstanceCullingManager *)0x0) {
    pTVar19 = FSceneUniformBuffer::GetBuffer(this->InstanceCullingManager->SceneUniforms,param_1);
  }
  pFVar20 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  EVar16 = Static;
  if (pFVar20->BindingFlags != StaticAndShader) {
    EVar16 = pFVar20->BindingFlags;
  }
  uStack_750 = CONCAT31(uStack_750._1_3_,EVar16);
  uStack_360 = CONCAT44(uStack_74c,uStack_750);
  local_758 = pTVar19;
  local_368 = pTVar19;
  pFVar23 = FGPUScene::GetShaderParameters(param_2,&local_98,param_1);
  local_240 = this->DynamicInstanceIdOffset;
  local_23c = local_240 + this->DynamicInstanceIdNum;
  local_358._0_4_ = (pFVar23->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
  local_358._4_4_ = (pFVar23->CommonParameters).GPUSceneInstanceDataTileSizeMask;
  uStack_350._0_4_ = (pFVar23->CommonParameters).GPUSceneInstanceDataTileStride;
  uStack_350._4_4_ = (pFVar23->CommonParameters).GPUSceneFrameNumber;
  local_348._0_4_ = (pFVar23->CommonParameters).GPUSceneMaxAllocatedInstanceId;
  local_348._4_4_ = (pFVar23->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex;
  uStack_340 = *(undefined8 *)&(pFVar23->CommonParameters).GPUSceneNumLightmapDataItems;
  local_338 = pFVar23->GPUSceneInstanceSceneData;
  pFStack_330 = pFVar23->GPUSceneInstancePayloadData;
  local_318 = pFVar23->GPUSceneLightData;
  uStack_310 = *(undefined8 *)&pFVar23->field_0x48;
  local_328 = pFVar23->GPUScenePrimitiveSceneData;
  pFStack_320 = pFVar23->GPUSceneLightmapData;
  local_278 = local_6f0;
  local_758._4_4_ = (this->IndirectArgs).ArrayNum * 5;
  uStack_750 = 0x4189;
  local_758._0_4_ = 4;
  local_748 = 0;
  local_3a8.BytesPerElement = 4;
  local_3a8.NumElements = local_758._4_4_;
  local_3a8._12_4_ = uStack_74c;
  local_3a8.Usage =
       MultiGPUGraphIgnore|VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  local_3a8.Metadata = (FShaderParametersMetadata *)0x0;
  local_270 = pFVar21;
  local_268 = pFVar22;
  pFVar24 = FRDGBuilder::CreateBuffer
                      (param_1,&local_3a8,L"InstanceCulling.DrawIndirectArgsBuffer",None);
  local_698 = pFVar24;
  FRDGBuilder::QueueBufferUpload
            (param_1,pFVar24,(this->IndirectArgs).AllocatorInstance.Data,
             (ulonglong)(uint)((this->IndirectArgs).ArrayNum * 0x14),None);
  local_c8._0_8_ = 0;
  local_c8._40_8_ = 0;
  AddClearIndirectArgInstanceCountPass(param_1,local_6e8,pFVar24,&local_c8);
  local_758._4_4_ = (this->InstanceIdOffsets).ArrayNum;
  uStack_750 = 0x4109;
  local_758._0_4_ = 4;
  local_1b0._12_4_ = uStack_74c;
  local_1b0.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  local_748 = 0;
  local_1b0.BytesPerElement = 4;
  local_1b0.NumElements = local_758._4_4_;
  local_1b0.Metadata = (FShaderParametersMetadata *)0x0;
  local_690 = FRDGBuilder::CreateBuffer
                        (param_1,&local_1b0,L"InstanceCulling.InstanceIdOffsetBuffer",None);
  FRDGBuilder::QueueBufferUpload
            (param_1,local_690,(this->InstanceIdOffsets).AllocatorInstance.Data,
             (ulonglong)(uint)((this->InstanceIdOffsets).ArrayNum << 2),None);
  local_588.Buffer = local_6e0;
  local_588._padding_._4_4_ = 0;
  local_588._padding_._0_4_ = 0xffffffff;
  local_588._padding_ = 0;
  local_588._padding_._0_1_ = 0;
  if (((local_6e0->Desc).Usage & DrawIndirect) != None) {
    local_588._padding_._0_1_ = 0x1c;
  }
  local_2b8 = FRDGBuilder::CreateSRV(param_1,&local_588);
  uStack_2e0 = (ulonglong)(uint)uStack_2e0;
  uVar50 = 0;
  if (((bVar15) || (local_6b8 != (FInstanceCullingManager *)0x0)) &&
     (this->InstanceCullingManager != (FInstanceCullingManager *)0x0)) {
    pFVar25 = FRendererViewDataManager::GetCullingParameters
                        (this->InstanceCullingManager->ViewDataManager,&local_e8,param_1);
    pTVar51 = (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(this->ViewIds).AllocatorInstance.SecondaryData.Data;
    iVar53 = (this->ViewIds).ArrayNum;
    local_2e8 = pFVar25->InViews;
    uStack_2e0._0_4_ = pFVar25->NumSceneRendererPrimaryViews;
    uStack_2e0._4_4_ = pFVar25->NumCullingViews;
    if (pTVar51 ==
        (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar51 = &this->ViewIds;
    }
    pFVar11 = &pTVar51->AllocatorInstance;
    while( true ) {
      if ((this->ViewIds).ArrayNum != iVar53) {
        local_768[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_768);
      }
      pFVar24 = local_698;
      uVar50 = local_738;
      if (pTVar51 ==
          (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)(pFVar11->InlineData + (longlong)iVar53 * 4)) break;
      if ((uStack_2e0._4_4_ <= *(int *)(pTVar51->AllocatorInstance).InlineData) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ViewId < int32(PassParametersTmp.ViewDataCullingParameters.NumCullingViews)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                              ,0x34b,
                              L"Attempting to process a culling context that references a view that has not been uploaded yet."
                             ), bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar51 = (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)((pTVar51->AllocatorInstance).InlineData + 4);
    }
  }
  uVar52 = 0;
  pFVar26 = GetDynamicMeshBoundsShaderParameters(&local_d8,param_1);
  local_728._padding_ = CONCAT53(local_728._padding_._3_5_,0x1c);
  local_2d8 = *(undefined8 *)pFVar26;
  pFStack_2d0 = pFVar26->DynamicMeshBoundsBuffer;
  local_248 = (this->ViewIds).ArrayNum;
  pFStack_290 = local_6a0;
  local_288 = local_6a0;
  local_728.Buffer = pFVar24;
  pFStack_280 = FRDGBuilder::CreateUAV(param_1,&local_728,SkipBarrier);
  local_428.Buffer = local_690;
  local_428._padding_._0_1_ = 0x1c;
  local_428._padding_._4_4_ = 0;
  local_428._padding_._0_4_ = 0xffffffff;
  local_428._padding_ = 0;
  pFStack_2a0 = FRDGBuilder::CreateSRV(param_1,&local_428);
  if (((this->PrevHZB).Reference == (IPooledRenderTarget *)0x0) ||
     (bVar17 = IsOcclusionCullingEnabled(), !bVar17)) {
    local_738 = 0;
  }
  else {
    local_260 = FRDGBuilder::RegisterExternalTexture(param_1,&this->PrevHZB,None);
    local_738 = 8;
    uVar4 = *(undefined8 *)&(local_260->Desc).field_0x24;
    local_258 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                ::StaticResource.StateRHI.Reference;
    local_250 = (float)(int)uVar4;
    local_24c = (float)(int)((ulonglong)uVar4 >> 0x20);
  }
  pFVar5 = this->InstanceCullingManager;
  if ((pFVar5 == (FInstanceCullingManager *)0x0) ||
     (pFVar5->InstanceOcclusionQueryBuffer == (FRDGBuffer *)0x0)) {
    local_3e8._padding_._0_1_ = 0x1c;
    local_3e8._padding_._4_4_ = 0;
    local_3e8._padding_._0_4_ = 0xffffffff;
    local_3e8._padding_ = 0;
    local_3e8.Buffer =
         FSystemTextures::GetDefaultBuffer((FSystemTextures *)&GSystemTextures,param_1,4,0);
    pFVar48 = &local_3e8;
  }
  else {
    local_408._padding_._0_1_ = pFVar5->InstanceOcclusionQueryBufferFormat;
    pFVar48 = &local_408;
    local_408._padding_._4_4_ = 0;
    local_408._padding_._0_4_ = 0xffffffff;
    local_408._padding_ = 0;
    local_408.Buffer = pFVar5->InstanceOcclusionQueryBuffer;
  }
  local_298 = FRDGBuilder::CreateSRV(param_1,pFVar48);
  pFVar24 = (FRDGBuffer *)&this[-0x11eefd0].field_0x58;
  local_6c0 = BatchProcessingModeStr;
  local_6e0 = pFVar24;
  do {
    this_01 = *(TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_> **)
               ((longlong)pFVar24 + (longlong)(local_6c0 + 0x21));
    if ((((this_01->Data).Reference)->Items).ArrayNum != 0) {
      pFVar27 = FRDGBuilder::
                AllocParameters<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters>
                          (param_1);
      lVar54 = 2;
      pFVar13 = pFVar27;
      ppTVar14 = &local_368;
      do {
        ppTVar49 = ppTVar14;
        pFVar44 = pFVar13;
        pTVar19 = ppTVar49[1];
        pTVar8 = ppTVar49[2];
        pTVar9 = ppTVar49[3];
        *(TRDGUniformBuffer<FSceneUniformParameters> **)&pFVar44->Scene = *ppTVar49;
        *(TRDGUniformBuffer<FSceneUniformParameters> **)&(pFVar44->Scene).field_0x8 = pTVar19;
        pTVar19 = ppTVar49[4];
        pTVar10 = ppTVar49[5];
        *(TRDGUniformBuffer<FSceneUniformParameters> **)
         &(pFVar44->GPUSceneParameters).CommonParameters = pTVar8;
        *(TRDGUniformBuffer<FSceneUniformParameters> **)
         &(pFVar44->GPUSceneParameters).CommonParameters.GPUSceneInstanceDataTileStride = pTVar9;
        pTVar8 = ppTVar49[6];
        pTVar9 = ppTVar49[7];
        *(TRDGUniformBuffer<FSceneUniformParameters> **)
         &(pFVar44->GPUSceneParameters).CommonParameters.GPUSceneMaxAllocatedInstanceId = pTVar19;
        *(TRDGUniformBuffer<FSceneUniformParameters> **)
         &(pFVar44->GPUSceneParameters).CommonParameters.GPUSceneNumLightmapDataItems = pTVar10;
        pTVar19 = ppTVar49[8];
        pTVar10 = ppTVar49[9];
        (pFVar44->GPUSceneParameters).GPUSceneInstanceSceneData = (FRDGBufferSRV *)pTVar8;
        (pFVar44->GPUSceneParameters).GPUSceneInstancePayloadData = (FRDGBufferSRV *)pTVar9;
        pTVar8 = ppTVar49[10];
        pTVar9 = ppTVar49[0xb];
        (pFVar44->GPUSceneParameters).GPUScenePrimitiveSceneData = (FRDGBufferSRV *)pTVar19;
        (pFVar44->GPUSceneParameters).GPUSceneLightmapData = (FRDGBufferSRV *)pTVar10;
        pTVar19 = ppTVar49[0xc];
        pTVar10 = ppTVar49[0xd];
        (pFVar44->GPUSceneParameters).GPUSceneLightData = (FRDGBufferSRV *)pTVar8;
        *(TRDGUniformBuffer<FSceneUniformParameters> **)&(pFVar44->GPUSceneParameters).field_0x48 =
             pTVar9;
        pTVar8 = ppTVar49[0xe];
        pTVar9 = ppTVar49[0xf];
        (pFVar44->LoadBalancerParameters).BatchBuffer = (FRDGBufferSRV *)pTVar19;
        (pFVar44->LoadBalancerParameters).ItemBuffer = (FRDGBufferSRV *)pTVar10;
        *(TRDGUniformBuffer<FSceneUniformParameters> **)
         &(pFVar44->LoadBalancerParameters).NumBatches = pTVar8;
        *(TRDGUniformBuffer<FSceneUniformParameters> **)
         &(pFVar44->LoadBalancerParameters).NumGroupsPerBatch = pTVar9;
        lVar54 = lVar54 + -1;
        pFVar13 = (FParameters *)&pFVar44->ViewDataCullingParameters;
        ppTVar14 = ppTVar49 + 0x10;
      } while (lVar54 != 0);
      pTVar19 = ppTVar49[0x11];
      pTVar8 = ppTVar49[0x12];
      pTVar9 = ppTVar49[0x13];
      (pFVar44->ViewDataCullingParameters).InViews = (FRDGBufferSRV *)ppTVar49[0x10];
      *(TRDGUniformBuffer<FSceneUniformParameters> **)
       &(pFVar44->ViewDataCullingParameters).NumSceneRendererPrimaryViews = pTVar19;
      pTVar19 = ppTVar49[0x14];
      pTVar10 = ppTVar49[0x15];
      *(TRDGUniformBuffer<FSceneUniformParameters> **)&pFVar44->DynamicBoundsParameters = pTVar8;
      (pFVar44->DynamicBoundsParameters).DynamicMeshBoundsBuffer = (FRHIShaderResourceView *)pTVar9;
      pFVar44->DrawCommandDescs = (FRDGBufferSRV *)pTVar19;
      pFVar44->InstanceCullingPayloads = (FRDGBufferSRV *)pTVar10;
      local_5f8 = pFVar27;
      TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_>::Upload
                (this_01,&local_3c8,param_1,1);
      local_548._padding_._0_4_ = 0xffffffff;
      local_548._padding_._4_4_ = 0;
      local_548._padding_ = 0;
      local_548.Buffer = local_3c8.BatchBuffer;
      local_548._padding_._0_1_ = 0;
      if ((((local_3c8.BatchBuffer)->Desc).Usage & DrawIndirect) != None) {
        local_548._padding_._0_1_ = 0x1c;
      }
      pFVar28 = FRDGBuilder::CreateSRV(param_1,&local_548);
      (pFVar27->LoadBalancerParameters).BatchBuffer = pFVar28;
      local_528._padding_._0_4_ = 0xffffffff;
      local_528._padding_._4_4_ = 0;
      local_528._padding_ = 0;
      local_528.Buffer = local_3c8.ItemBuffer;
      local_528._padding_._0_1_ = 0;
      if ((((local_3c8.ItemBuffer)->Desc).Usage & DrawIndirect) != None) {
        local_528._padding_._0_1_ = 0x1c;
      }
      pFVar28 = FRDGBuilder::CreateSRV(param_1,&local_528);
      (pFVar27->LoadBalancerParameters).ItemBuffer = pFVar28;
      (pFVar27->LoadBalancerParameters).NumBatches = local_3c8.NumBatches;
      (pFVar27->LoadBalancerParameters).NumItems = local_3c8.NumItems;
      (pFVar27->LoadBalancerParameters).NumGroupsPerBatch = local_3c8.NumGroupsPerBatch;
      pFVar27->CurrentBatchProcessingMode = uVar52;
      if (((uVar52 == 1) &&
          (this_01->TotalInstances != (((this_01->Data).Reference)->Items).ArrayNum)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("EBatchProcessingMode(Mode) != EBatchProcessingMode::UnCulled || LoadBalancer->HasSingleInstanceItemsOnly()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                              ,0x379,L""), bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((bVar15) && (uVar52 != 1)) {
        iVar53 = 2;
      }
      else {
        iVar53 = 0;
      }
      iVar46 = 0;
      if (this->InstanceCullingMode == Stereo) {
        iVar46 = 0x10;
      }
      iVar40 = (-(uint)(local_6b8 != (FInstanceCullingManager *)0x0) & 4) + local_738;
      pFVar29 = (FShaderType *)FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::GetStaticType();
      FGlobalShaderMap::GetShader
                (local_6e8,&local_708,pFVar29,
                 (uint)bVar18 * 0x40 + iVar46 + iVar40 + (uint)(uVar52 == 1) + iVar53);
      if (local_708.ShaderContent == (FShader *)0x0) {
        this_03 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_228);
        ::FName::ToString((FName *)this_03,&local_238);
        FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::GetStaticType();
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
        if (bVar17) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::GetStaticType();
      local_208.ShaderContent =
           (FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs *)local_708.ShaderContent;
      iVar53 = (((this_01->Data).Reference)->Batches).ArrayNum;
      if ((iVar53 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_620[0]._s_0,iVar53);
      pFVar30 = FRDGEventName::FRDGEventName(&local_120,L"CullInstances(%s)");
      pFVar20 = FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters::FTypeInfo::
                GetStructMetadata();
      local_608._s_0.Z = local_620[0]._s_0.Z;
      local_608._0_8_ = local_620[0]._0_8_;
      FComputeShaderUtils::AddPass<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs>
                (param_1,pFVar30,Compute,&local_208,pFVar20,local_5f8,
                 (TIntVector3<int> *)&local_608._s_0);
      if (((uVar50 & 2) != 0) &&
         (uVar50 = uVar50 & 0xfffffffd, param_4 != (FInstanceCullingDrawParams *)0x0)) {
        FMemory::Free(param_4);
      }
      uVar50 = uVar50 & 0xfffffffe;
      pFVar24 = local_6e0;
      if (local_120.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_120.FormattedEventName.Data.AllocatorInstance.Data);
        pFVar24 = local_6e0;
      }
    }
    uVar52 = uVar52 + 1;
    local_6c0 = local_6c0 + 1;
    if (1 < uVar52) {
      if ((bVar18 != 0) && (local_6f8 != 0)) {
        EStack_6d0 = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
        local_6d8 = (TRDGUniformBuffer<FSceneUniformParameters> *)CONCAT44(local_6f8,4);
        local_6c8 = 0;
        local_188[0] = local_6d8;
        local_188[1] = (TRDGUniformBuffer<FSceneUniformParameters> *)_EStack_6d0;
        local_178 = (FShaderParametersMetadata *)0x0;
        pFVar24 = FRDGBuilder::CreateBuffer
                            (param_1,(FRDGBufferDesc *)local_188,
                             L"InstanceCulling.Compaction.BlockDestInstanceOffsets",None);
        pFVar31 = FRDGBuilder::AllocParameters<FCalculateCompactBlockInstanceOffsetsCs::FParameters>
                            (param_1);
        local_508._padding_._4_4_ = 0;
        local_508._padding_ = 0;
        local_508._padding_._0_4_ = 0xffffffff;
        pFVar31->DrawCommandCompactionData = local_6f0;
        local_508.Buffer = local_6b0;
        local_508._padding_._0_1_ = 0;
        if (((local_6b0->Desc).Usage & DrawIndirect) != None) {
          local_508._padding_._0_1_ = 0x1c;
        }
        pFVar28 = FRDGBuilder::CreateSRV(param_1,&local_508);
        pFVar31->BlockInstanceCounts = pFVar28;
        bVar18 = 0;
        local_650._padding_._2_1_ = 0;
        if (((pFVar24->Desc).Usage & DrawIndirect) != None) {
          bVar18 = 0x1c;
        }
        local_650._padding_._0_2_ = (ushort)bVar18;
        local_650.Buffer = pFVar24;
        pFVar22 = FRDGBuilder::CreateUAV(param_1,&local_650,None);
        pFVar31->BlockDestInstanceOffsetsOut = pFVar22;
        pFVar31->DrawIndirectArgsBufferOut = pFStack_280;
        FGlobalShaderMap::GetShader<FCalculateCompactBlockInstanceOffsetsCs>(local_6e8,&local_220);
        pTVar32 = FComputeShaderUtils::GetGroupCountWrapped
                            (&local_12c,(this->DrawCommandCompactionData).ArrayNum);
        uVar4 = *(undefined8 *)&pTVar32->field0_0x0;
        iVar53 = (pTVar32->field0_0x0)._s_0.Z;
        pFVar30 = FRDGEventName::FRDGEventName(&local_108,1,L"Instance Compaction Phase 1");
        pFVar20 = FCalculateCompactBlockInstanceOffsetsCs::FParameters::FTypeInfo::GetStructMetadata
                            ();
        local_638._0_8_ = uVar4;
        local_638._s_0.Z = iVar53;
        FComputeShaderUtils::AddPass<FCalculateCompactBlockInstanceOffsetsCs>
                  (param_1,pFVar30,Compute,&local_220,pFVar20,pFVar31,
                   (TIntVector3<int> *)&local_638._s_0);
        uVar52 = uVar50 & 0xfffffff7;
        if (local_108.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.FormattedEventName.Data.AllocatorInstance.Data);
        }
        if (((uVar50 & 4) != 0) &&
           (uVar52 = uVar50 & 0xfffffff3, param_4 != (FInstanceCullingDrawParams *)0x0)) {
          FMemory::Free(param_4);
        }
        uVar50 = (this->CompactionBlockDataIndices).ArrayNum;
        bVar15 = uVar50 != 0;
        if (bVar15) {
          puVar45 = (this->CompactionBlockDataIndices).AllocatorInstance.Data;
          uVar47 = (ulong64)(uVar50 * 4);
        }
        else {
          uVar50 = 1;
          puVar45 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const&___ptr64,ERDGInitialDataFlags)'
                     ::__l2::DummyElement;
          uVar47 = 4;
        }
        pFVar33 = CreateStructuredBuffer
                            (param_1,L"InstanceCulling.Compaction.BlockDrawCommandIndices",4,uVar50,
                             puVar45,uVar47,!bVar15);
        pFVar34 = FRDGBuilder::AllocParameters<FCompactVisibleInstancesCs::FParameters>(param_1);
        local_4e8._padding_._0_4_ = 0xffffffff;
        local_4e8._padding_._4_4_ = 0;
        pFVar34->DrawCommandCompactionData = local_6f0;
        local_4e8._padding_ = 0;
        local_4e8._padding_._0_1_ = 0;
        if (((pFVar33->Desc).Usage & DrawIndirect) != None) {
          local_4e8._padding_._0_1_ = 0x1c;
        }
        local_4e8.Buffer = pFVar33;
        pFVar28 = FRDGBuilder::CreateSRV(param_1,&local_4e8);
        pFVar34->BlockDrawCommandIndices = pFVar28;
        local_4c8._padding_._0_1_ = 0;
        local_4c8.Buffer = local_6a8;
        local_4c8._padding_._4_4_ = 0;
        local_4c8._padding_._0_4_ = 0xffffffff;
        local_4c8._padding_ = 0;
        if (((local_6a8->Desc).Usage & DrawIndirect) != None) {
          local_4c8._padding_._0_1_ = 0x1c;
        }
        pFVar28 = FRDGBuilder::CreateSRV(param_1,&local_4c8);
        pFVar34->InstanceIdsBufferIn = pFVar28;
        local_4a8._padding_._0_1_ = 0;
        local_4a8._padding_._4_4_ = 0;
        local_4a8._padding_._0_4_ = 0xffffffff;
        local_4a8._padding_ = 0;
        if (((pFVar24->Desc).Usage & DrawIndirect) != None) {
          local_4a8._padding_._0_1_ = 0x1c;
        }
        local_4a8.Buffer = pFVar24;
        pFVar28 = FRDGBuilder::CreateSRV(param_1,&local_4a8);
        pFVar34->BlockDestInstanceOffsets = pFVar28;
        pFVar34->InstanceIdsBufferOut = local_6a0;
        pFVar34->InstanceIdsBufferOutMobile = local_6a0;
        FGlobalShaderMap::GetShader<FCompactVisibleInstancesCs>(local_6e8,&local_198);
        pTVar32 = FComputeShaderUtils::GetGroupCountWrapped(&local_138,local_6f8);
        uVar4 = *(undefined8 *)&pTVar32->field0_0x0;
        iVar53 = (pTVar32->field0_0x0)._s_0.Z;
        pFVar30 = FRDGEventName::FRDGEventName(&local_150,1,L"Instance Compaction Phase 2");
        pFVar20 = FCompactVisibleInstancesCs::FParameters::FTypeInfo::GetStructMetadata();
        local_5d8._0_8_ = uVar4;
        local_5d8._s_0.Z = iVar53;
        FComputeShaderUtils::AddPass<FCompactVisibleInstancesCs>
                  (param_1,pFVar30,Compute,&local_198,pFVar20,pFVar34,
                   (TIntVector3<int> *)&local_5d8._s_0);
        if (local_150.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.FormattedEventName.Data.AllocatorInstance.Data);
        }
        if (((uVar52 & 0x10) != 0) && (param_4 != (FInstanceCullingDrawParams *)0x0)) {
          FMemory::Free(param_4);
        }
      }
      pFVar24 = local_698;
      local_708.ShaderContent = (FShader *)local_690;
      local_708.ShaderMap._0_4_ = 8;
      *(FRDGBuffer **)&param_4->DrawIndirectArgsBuffer = local_698;
      *(ulonglong *)&(param_4->DrawIndirectArgsBuffer).field_0x8 =
           CONCAT44(local_708.ShaderMap._4_4_,4);
      *(FRDGBuffer **)&param_4->InstanceIdOffsetBuffer = local_690;
      *(ulonglong *)&(param_4->InstanceIdOffsetBuffer).field_0x8 =
           CONCAT44(local_708.ShaderMap._4_4_,8);
      bVar15 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)this->ShaderPlatform);
      if (bVar15) {
        pFVar35 = FRDGBuilder::AllocParameters<FBatchedPrimitiveParameters>(param_1);
        local_488._padding_._0_4_ = 0xffffffff;
        local_488._padding_._4_4_ = 0;
        local_488._padding_ = 0;
        local_488.Buffer = local_688;
        local_488._padding_._0_1_ = 0;
        if (((local_688->Desc).Usage & DrawIndirect) != None) {
          local_488._padding_._0_1_ = 0x1c;
        }
        pFVar28 = FRDGBuilder::CreateSRV(param_1,&local_488);
        pFVar35->Data = pFVar28;
        pFVar36 = (FShader *)
                  FRDGBuilder::CreateUniformBuffer<FBatchedPrimitiveParameters>(param_1,pFVar35);
        pFVar20 = FBatchedPrimitiveParameters::GetStructMetadata();
        EVar16 = Static;
        if (pFVar20->BindingFlags != StaticAndShader) {
          EVar16 = pFVar20->BindingFlags;
        }
        local_708.ShaderMap._0_4_ = CONCAT31(local_708.ShaderMap._1_3_,EVar16);
        *(FShader **)&param_4->BatchedPrimitive = pFVar36;
        *(ulonglong *)&(param_4->BatchedPrimitive).field_0x8 =
             CONCAT44(local_708.ShaderMap._4_4_,local_708.ShaderMap._0_4_);
        local_708.ShaderContent = pFVar36;
      }
      else {
        pFVar37 = FRDGBuilder::AllocParameters<FInstanceCullingGlobalUniforms>(param_1);
        local_448.Buffer = local_688;
        local_468._padding_._0_4_ = 0xffffffff;
        local_468._padding_._4_4_ = 0;
        local_468._padding_ = 0;
        local_468.Buffer = local_688;
        local_468._padding_._0_1_ = 0;
        if (((local_688->Desc).Usage & DrawIndirect) != None) {
          local_468._padding_._0_1_ = 0x1c;
        }
        pFVar28 = FRDGBuilder::CreateSRV(param_1,&local_468);
        pFVar37->InstanceIdsBuffer = pFVar28;
        local_448._padding_._4_4_ = 0;
        local_448._padding_ = 0;
        local_448._padding_._0_4_ = 0xffffffff;
        local_448._padding_._0_1_ = 0;
        if ((((local_448.Buffer)->Desc).Usage & DrawIndirect) != None) {
          local_448._padding_._0_1_ = 0x1c;
        }
        pFVar28 = FRDGBuilder::CreateSRV(param_1,&local_448);
        pFVar37->PageInfoBuffer = pFVar28;
        pFVar37->BufferCapacity = local_714;
        pFVar36 = (FShader *)
                  FRDGBuilder::CreateUniformBuffer<FInstanceCullingGlobalUniforms>(param_1,pFVar37);
        pFVar20 = FInstanceCullingGlobalUniforms::GetStructMetadata();
        EVar16 = Static;
        if (pFVar20->BindingFlags != StaticAndShader) {
          EVar16 = pFVar20->BindingFlags;
        }
        local_708.ShaderMap._0_4_ = CONCAT31(local_708.ShaderMap._1_3_,EVar16);
        *(FShader **)&param_4->InstanceCulling = pFVar36;
        *(ulonglong *)&(param_4->InstanceCulling).field_0x8 =
             CONCAT44(local_708.ShaderMap._4_4_,local_708.ShaderMap._0_4_);
        local_708.ShaderContent = pFVar36;
      }
      if (this->MeshDrawCommandPassStats != (FMeshDrawCommandPassStats *)0x0) {
        pFVar38 = FMeshDrawCommandStatsManager::QueueDrawRDGIndirectArgsReadback
                            (FMeshDrawCommandStatsManager::Instance,param_1,pFVar24);
        pFVar6 = this->MeshDrawCommandPassStats;
        pFVar6->InstanceCullingGPUBufferReadback = pFVar38;
        pFVar6->IndirectArgParameterOffset = 0;
      }
      if (local_5e0 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_5f0);
      }
      return;
    }
  } while( true );
}

// CreateDeferredContext @ 144bb6350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FInstanceCullingDeferredContext * __cdecl
FInstanceCullingContext::CreateDeferredContext
          (FRDGBuilder *param_1,FGPUScene *param_2,FInstanceCullingManager *param_3)

{
  char cVar1;
  undefined8 uVar2;
  FParameters *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TRefCountPtr<FRHISamplerState> TVar8;
  ForAnyElementType FVar9;
  FInstanceCullingManager *pFVar10;
  FShader *pFVar11;
  undefined8 *puVar12;
  TRDGUniformBuffer<FSceneUniformParameters> **ppTVar13;
  bool bVar14;
  byte bVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  FInstanceCullingDeferredContext *pFVar19;
  FRDGScope *this;
  FParameters *pFVar20;
  <lambda_6> *p<Var21;
  <lambda_5> *p<Var22;
  FRDGBuffer *pFVar23;
  <lambda_10> *p<Var24;
  <lambda_9> *p<Var25;
  <lambda_8> *p<Var26;
  FRDGBufferUAV *pFVar27;
  FRDGBuffer *pFVar28;
  FGlobalShaderMap *pFVar29;
  FRDGBufferDesc *pFVar30;
  FRDGBuffer *pFVar31;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar32;
  FShaderParametersMetadata *pFVar33;
  FGPUSceneResourceParameters *pFVar34;
  FRDGBufferUAV *pFVar35;
  FCullingShaderParameters *pFVar36;
  FDynamicMeshBoundsShaderParameters *pFVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  FRDGBufferSRV *pFVar40;
  FRDGTexture *pFVar41;
  FShaderType *pFVar42;
  FName this_00;
  FRDGEventName *pFVar43;
  FParameters *pFVar44;
  FParameters *pFVar45;
  FBatchedPrimitiveParameters *pFVar46;
  TRDGUniformBuffer<FBatchedPrimitiveParameters> *pTVar47;
  FInstanceCullingGlobalUniforms *pFVar48;
  TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *pTVar49;
  FRHIGPUBufferReadback *pFVar50;
  TRDGUniformBuffer<FSceneUniformParameters> **ppTVar51;
  undefined8 *puVar52;
  code **ppcVar53;
  longlong *plVar54;
  undefined ***pppuVar55;
  int iVar56;
  longlong lVar57;
  uint uVar58;
  EPixelFormat EVar59;
  longlong lVar60;
  FStaticShaderPlatform FVar61;
  uint uVar62;
  uint uVar63;
  undefined1 auStackY_1668 [32];
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1628;
  byte local_1618;
  FInstanceCullingDeferredContext *local_1610;
  uint local_1608;
  EShaderPlatform local_1604 [2];
  uint local_1600 [2];
  FRDGBuffer *local_15f8;
  undefined1 local_15f0 [8];
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_15e8;
  FInstanceCullingDeferredContext *local_15d8;
  FRDGBufferUAV *local_15d0;
  FRDGTextureUAV *local_15c8;
  undefined8 local_15c0;
  FRDGBuffer *local_15b8;
  FRDGBuffer *local_15b0;
  ForAnyElementType local_15a8;
  undefined8 local_15a0;
  FInstanceCullingDeferredContext *local_1598;
  uint local_1590;
  ForAnyElementType local_1588;
  undefined8 local_1580;
  FInstanceCullingDeferredContext *local_1578;
  uint local_1570;
  ForAnyElementType local_1568;
  undefined8 local_1560;
  FInstanceCullingDeferredContext *local_1558;
  uint local_1550;
  ForAnyElementType local_1548;
  undefined8 local_1540;
  FInstanceCullingDeferredContext *local_1538;
  uint local_1530;
  ForAnyElementType local_1528;
  undefined8 local_1520;
  FInstanceCullingDeferredContext *local_1518;
  uint local_1510;
  int local_1508;
  FInstanceCullingManager *local_1500;
  FGlobalShaderMap *local_14f8;
  void *local_14f0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_14e8;
  FInstanceCullingDeferredContext *local_14d8;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_14d0;
  FInstanceCullingDeferredContext *local_14c0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_14b8;
  FInstanceCullingDeferredContext *local_14a8;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_14a0;
  FInstanceCullingDeferredContext *local_1490;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1488;
  FInstanceCullingDeferredContext *local_1478;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1470;
  FInstanceCullingDeferredContext *local_1460;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1458;
  FInstanceCullingDeferredContext *local_1448;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1440;
  FInstanceCullingDeferredContext *local_1430;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1428;
  FInstanceCullingDeferredContext *local_1418;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1410;
  FInstanceCullingDeferredContext *local_1400;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_13f8;
  FInstanceCullingDeferredContext *local_13e8;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_13e0;
  FInstanceCullingDeferredContext *local_13d0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_13c8;
  FInstanceCullingDeferredContext *local_13b8;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_13b0;
  FInstanceCullingDeferredContext *local_13a0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1398;
  FInstanceCullingDeferredContext *local_1388;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1380;
  FInstanceCullingDeferredContext *local_1370;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1368;
  FInstanceCullingDeferredContext *local_1358;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1350;
  FInstanceCullingDeferredContext *local_1340;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1338;
  FInstanceCullingDeferredContext *local_1328;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1320;
  FInstanceCullingDeferredContext *local_1310;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1308;
  FInstanceCullingDeferredContext *local_12f8;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_12f0;
  FInstanceCullingDeferredContext *local_12e0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_12d8;
  FInstanceCullingDeferredContext *local_12c8;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_12c0;
  FInstanceCullingDeferredContext *local_12b0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_12a8;
  FInstanceCullingDeferredContext *local_1298;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1290;
  FInstanceCullingDeferredContext *local_1280;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1278;
  FInstanceCullingDeferredContext *local_1268;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1260;
  FInstanceCullingDeferredContext *local_1250;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1248;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1238;
  FInstanceCullingDeferredContext *local_1228;
  uint local_1220;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_1218;
  FInstanceCullingDeferredContext *local_1208;
  uint local_1200;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_11f8;
  FInstanceCullingDeferredContext *local_11e8;
  uint local_11e0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_11d8;
  FInstanceCullingDeferredContext *local_11c8;
  uint local_11c0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  local_11b8;
  FInstanceCullingDeferredContext *local_11a8;
  uint local_11a0;
  FRDGBuffer *local_1198;
  FRDGBuffer *local_1190;
  FRDGBufferUAV *local_1188;
  FRDGBufferUAVDesc local_1180;
  FRDGBufferUAVDesc local_1170;
  FRDGBufferUAVDesc local_1160;
  FRDGBufferSRVDesc local_1150;
  FRDGBufferSRVDesc local_1130;
  FRDGBufferSRVDesc local_1110;
  FInstanceCullingManager *local_10f0;
  wchar_t *local_10e8;
  FRDGBuffer *local_10e0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_10d8;
  char local_10c8;
  FRDGBufferSRVDesc local_10c0;
  FRDGBufferSRVDesc local_10a0;
  FRDGBufferSRVDesc local_1080;
  FRDGBufferSRVDesc local_1060;
  FRDGBufferSRVDesc local_1040;
  FRDGBufferSRVDesc local_1020;
  FRDGBufferSRVDesc local_1000;
  FRDGBufferSRVDesc local_fe0;
  FRDGBufferSRVDesc local_fc0;
  FRDGBufferSRVDesc local_fa0;
  FRDGBufferSRVDesc local_f80;
  FRDGBufferSRVDesc local_f60;
  <lambda_7> local_f40;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_f28;
  FRDGBufferSRVDesc local_f18;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[43],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[43],wchar_t_const_*_&&>_>_>
  local_ef8;
  FRDGBufferUAVDesc local_ed8;
  FRDGBufferUAVDesc local_ec8;
  FString local_eb8;
  initializer_list<FRDGResource_*> local_ea8;
  TShaderRefBase<FCalculateCompactBlockInstanceOffsetsCs,FShaderMapPointerTable> local_e98;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e88;
  initializer_list<FRDGResource_*> local_e78;
  TShaderRefBase<FCompactVisibleInstancesCs,FShaderMapPointerTable> local_e68;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e58;
  initializer_list<FRDGResource_*> local_e48;
  FRDGBufferDesc local_e38;
  FRDGBufferDesc local_e20;
  FRDGBufferDesc local_e08;
  undefined4 uStack_de4;
  undefined4 local_de0;
  undefined4 uStack_ddc;
  FParameters local_dc8;
  undefined1 local_c98 [24];
  undefined1 local_c80 [24];
  undefined1 local_c68 [24];
  FRDGEventName local_c50;
  FRDGEventName local_c38;
  FRDGEventName local_c20;
  undefined1 local_c08 [24];
  undefined1 local_bf0 [24];
  code *local_bd8 [5];
  undefined8 *local_bb0;
  FDynamicMeshBoundsShaderParameters local_ba8;
  FCullingShaderParameters local_b98;
  FRDGBufferDesc local_b88;
  FGPUSceneResourceParameters local_b68;
  undefined8 local_b18 [38];
  code *local_9e8;
  longlong local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  longlong *local_9c0;
  code *local_9b8;
  undefined **local_9a8;
  FParameters *pFStack_9a0;
  FInstanceCullingDeferredContext *local_998;
  undefined ***local_990;
  code *local_988;
  undefined **local_978;
  FInstanceCullingDeferredContext *pFStack_970;
  undefined8 local_968;
  undefined ***local_960;
  code *local_958 [2];
  code *local_948 [3];
  code **local_930;
  code *local_928 [2];
  code *local_918 [3];
  code **local_900;
  code *local_8f8 [2];
  code *local_8e8 [3];
  code **local_8d0;
  code *local_8c8 [2];
  code *local_8b8 [3];
  code **local_8a0;
  code *local_898 [2];
  code *local_888 [3];
  code **local_870;
  code *local_868 [2];
  code *local_858 [3];
  code **local_840;
  code *local_838 [2];
  code *local_828 [3];
  code **local_810;
  code *local_808 [2];
  code *local_7f8 [3];
  code **local_7e0;
  code *local_7d8 [2];
  code *local_7c8 [3];
  code **local_7b0;
  code *local_7a8 [2];
  code *local_798 [3];
  code **local_780;
  code *local_778 [2];
  code *local_768 [3];
  code **local_750;
  code *local_748 [2];
  code *local_738 [3];
  code **local_720;
  code *local_718 [2];
  code *local_708 [3];
  code **local_6f0;
  code *local_6e8 [2];
  code *local_6d8 [3];
  code **local_6c0;
  code *local_6b8 [2];
  code *local_6a8 [3];
  code **local_690;
  code *local_688 [2];
  code *local_678 [3];
  code **local_660;
  code *local_658 [2];
  code *local_648 [3];
  code **local_630;
  code *local_628 [2];
  code *local_618 [3];
  code **local_600;
  code *local_5f8 [2];
  code *local_5e8 [3];
  code **local_5d0;
  code *local_5c8 [2];
  code *local_5b8 [3];
  code **local_5a0;
  code *local_598 [2];
  code *local_588 [3];
  code **local_570;
  code *local_568 [2];
  code *local_558 [3];
  code **local_540;
  code *local_538 [2];
  code *local_528 [3];
  code **local_510;
  code *local_508 [2];
  code *local_4f8 [3];
  code **local_4e0;
  code *local_4d8 [2];
  code *local_4c8 [3];
  code **local_4b0;
  code *local_4a8 [2];
  code *local_498 [3];
  code **local_480;
  code *local_478 [2];
  code *local_468 [3];
  code **local_450;
  code *local_448 [2];
  code *local_438 [3];
  code **local_420;
  code *local_418 [2];
  code *local_408 [3];
  code **local_3f0;
  code *local_3e8 [2];
  code *local_3d8 [3];
  code **local_3c0;
  code *local_3b8 [2];
  code *local_3a8 [3];
  code **local_390;
  code *local_388 [2];
  code *local_378 [3];
  code **local_360;
  code *local_358 [2];
  code *local_348 [3];
  code **local_330;
  code *local_328 [2];
  code *local_318 [3];
  code **local_300;
  code *local_2f8 [2];
  code *local_2e8 [3];
  code **local_2d0;
  code *local_2c8 [2];
  code *local_2b8 [3];
  code **local_2a0;
  code *local_298 [2];
  code *local_288 [3];
  code **local_270;
  code *local_268 [2];
  code *local_258 [3];
  code **local_240;
  <lambda_1> local_238;
  longlong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  <lambda_1> local_1e8;
  undefined **local_1b8;
  FInstanceCullingDeferredContext *pFStack_1b0;
  undefined8 local_1a8;
  undefined ***local_1a0;
  <lambda_1> local_198;
  undefined **local_168;
  FParameters *pFStack_160;
  FInstanceCullingDeferredContext *local_158;
  undefined ***local_150;
  undefined1 local_148 [48];
  TFunction<void_const_*___cdecl(void)> local_118;
  TFunction<unsigned___int64___cdecl(void)> local_e8;
  TFunction<unsigned___int64___cdecl(void)> local_b8;
  TFunction<unsigned_int___cdecl(void)> local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1668;
  pFVar27 = (FRDGBufferUAV *)0x0;
  local_1600[0] = (param_3->ViewPrevHZBs).ArrayNum + 1;
  local_1608 = 0;
  if ((int)local_1600[0] < 2) {
    local_1600[0] = 2;
  }
  local_15b8 = (FRDGBuffer *)(longlong)(int)param_2->FeatureLevel;
  FVar61.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(longlong)local_15b8];
  local_1604[0] = FVar61.Platform;
  local_15c0 = param_2;
  local_1500 = param_3;
  local_10f0 = param_3;
  pFVar19 = FRDGBuilder::
            AllocObject<FInstanceCullingDeferredContext,enum_EShaderPlatform_const_&,FInstanceCullingManager_*,unsigned_int_&>
                      (param_1,local_1604,&local_10f0,local_1600);
  local_1610 = pFVar19;
  local_1508 = TAutoConsoleVariable<int>::GetValueOnRenderThread(&CVarCullInstances);
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_10c8 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    local_10e8 = L"Off";
    if (local_1508 != 0) {
      local_10e8 = L"On";
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x43a;
      local_de0 = 0x54bcc6c0;
      uStack_ddc = 1;
      ::Desc._padding_._0_4_ = 0x54bcc6c0;
      ::Desc._padding_._4_4_ = uStack_de4;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_BuildRenderingC;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FInstanceCullingContext::CreateDeferredContext'::__l7::<lambda_1>::
             operator()<wchar_t_const_*>'::__l3::<lambda_2>::
             operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[43],wchar_t_const_*_&&>_>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_ef8._Myfirst._Val = &::Desc;
    local_ef8._padding_ = 0x150e510f0;
    local_10d8.State = (FRDGScopeState *)param_1;
    local_ef8._padding_ = (longlong)&local_10e8;
    local_ef8._padding_ = (longlong)local_15f0;
    this = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this;
    local_10d8.Scope = this;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[43],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[43],wchar_t_const_*_&&>_>_>_>
              (&(this->Impl).Impl,(FRDGScopeState *)param_1,&local_ef8);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_10c8 = '\x01';
  }
  uVar63 = local_1600[0];
  local_1628.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1628.ArrayNum = 0;
  local_1628.ArrayMax = 0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::SetNum(&local_1628,local_1600[0],Default);
  pFVar35 = pFVar27;
  if (uVar63 != 0) {
    do {
      pFVar20 = FRDGBuilder::
                AllocParameters<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters>
                          (param_1);
      uVar58 = (uint)pFVar35;
      uVar63 = 0;
      if ((int)uVar58 < local_1628.ArrayNum) {
        uVar63 = ~uVar58 >> 0x1f;
      }
      if ((uVar63 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
        return pFVar19;
      }
      pFVar35 = (FRDGBufferUAV *)(ulonglong)(uVar58 + 1);
      *(FParameters **)(local_1628.AllocatorInstance.Data + (longlong)(int)uVar58 * 8) = pFVar20;
      pFVar19 = local_1610;
      FVar61.Platform = local_1604[0];
    } while (uVar58 + 1 < local_1600[0]);
  }
  if ((GInstanceCullingAllowOrderPreservation == 0) || (bVar14 = IsMobilePlatform(FVar61), bVar14))
  {
    local_1618 = 0;
  }
  else {
    local_1618 = 1;
  }
  local_15c8 = (FRDGTextureUAV *)0x0;
  local_1190 = (FRDGBuffer *)0x0;
  local_15d0 = (FRDGBufferUAV *)0x0;
  local_1198 = (FRDGBuffer *)0x0;
  if (local_1618 != 0) {
    local_1380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
    ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
              (&local_1380,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
    local_298[0] = (code *)0x0;
    local_1370 = pFVar19;
    local_270 = FMemory::Malloc(0x20,8);
    local_270[1] = (code *)0x0;
    *local_270 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_4>,0,1>
                          ::_vftable_;
    local_270[1] = (code *)local_1380.AllocatorInstance.Data;
    local_1380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_270 + 2) = local_1380.ArrayNum;
    *(int *)((longlong)local_270 + 0x14) = local_1380.ArrayMax;
    local_1380.ArrayNum = 0;
    local_1380.ArrayMax = 0;
    local_270[3] = (code *)local_1370;
    if (local_270 + 1 != (code **)0x0) {
      local_298[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_4>,unsigned___int64>
                     ::Call;
    }
    local_1398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
    ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
              (&local_1398,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
    local_4a8[0] = (code *)0x0;
    local_1388 = pFVar19;
    local_480 = FMemory::Malloc(0x20,8);
    local_480[1] = (code *)0x0;
    *local_480 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_3>,0,1>
                          ::_vftable_;
    local_480[1] = (code *)local_1398.AllocatorInstance.Data;
    local_1398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_480 + 2) = local_1398.ArrayNum;
    *(int *)((longlong)local_480 + 0x14) = local_1398.ArrayMax;
    local_1398.ArrayNum = 0;
    local_1398.ArrayMax = 0;
    local_480[3] = (code *)local_1388;
    if (local_480 + 1 != (code **)0x0) {
      local_4a8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_3>,void_const_*>
                     ::Call;
    }
    local_13b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
    ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
              (&local_13b0,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
    local_2f8[0] = (code *)0x0;
    local_13a0 = pFVar19;
    local_2d0 = FMemory::Malloc(0x20,8);
    local_2d0[1] = (code *)0x0;
    *local_2d0 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_2>,0,1>
                          ::_vftable_;
    local_2d0[1] = (code *)local_13b0.AllocatorInstance.Data;
    local_13b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_2d0 + 2) = local_13b0.ArrayNum;
    *(int *)((longlong)local_2d0 + 0x14) = local_13b0.ArrayMax;
    local_13b0.ArrayNum = 0;
    local_13b0.ArrayMax = 0;
    local_2d0[3] = (code *)local_13a0;
    if (local_2d0 + 1 != (code **)0x0) {
      local_2f8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_2>,unsigned_int>
                     ::Call;
    }
    local_10a0.Buffer =
         CreateStructuredBuffer
                   (param_1,L"InstanceCulling.DrawCommandCompactionData",0x14,
                    (TFunction<unsigned_int___cdecl(void)> *)local_2f8,
                    (TFunction<void_const_*___cdecl(void)> *)local_4a8,
                    (TFunction<unsigned___int64___cdecl(void)> *)local_298);
    local_10a0._padding_._4_4_ = 0;
    local_10a0._padding_._0_4_ = 0xffffffff;
    local_10a0._padding_ = 0;
    local_10a0._padding_._0_1_ = 0;
    if ((((local_10a0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_10a0._padding_._0_1_ = 0x1c;
    }
    local_15c8 = (FRDGTextureUAV *)FRDGBuilder::CreateSRV(param_1,&local_10a0);
    if (local_2f8[0] != (code *)0x0) {
      ppcVar53 = local_2f8 + 2;
      if (local_2d0 != (code **)0x0) {
        ppcVar53 = local_2d0;
      }
      (**(code **)(*ppcVar53 + 0x10))(ppcVar53);
    }
    if (local_13b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b0.AllocatorInstance.Data);
    }
    if (local_4a8[0] != (code *)0x0) {
      ppcVar53 = local_4a8 + 2;
      if (local_480 != (code **)0x0) {
        ppcVar53 = local_480;
      }
      (**(code **)(*ppcVar53 + 0x10))();
    }
    if (local_1398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1398.AllocatorInstance.Data);
    }
    if (local_298[0] != (code *)0x0) {
      ppcVar53 = local_298 + 2;
      if (local_270 != (code **)0x0) {
        ppcVar53 = local_270;
      }
      (**(code **)(*ppcVar53 + 0x10))();
    }
    if (local_1380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1380.AllocatorInstance.Data);
    }
    local_f40.PassParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
    ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
              (&local_f40.PassParameters,(FParameters **)local_1628.AllocatorInstance.Data,
               local_1628.ArrayNum,0);
    local_f40.DeferredContext = pFVar19;
    TFunction<unsigned___int64___cdecl(void)>::
    TFunction<unsigned___int64___cdecl(void)><_FInstanceCullingContext::CreateDeferredContext_::__l12::<lambda_7>_>
              (&local_b8,&local_f40);
    p<Var21 = `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_6>::<lambda_6>
                        (local_c80,&local_1628,&local_1610);
    TFunction<void_const_*___cdecl(void)>::
    TFunction<void_const_*___cdecl(void)><_FInstanceCullingContext::CreateDeferredContext_::__l12::<lambda_6>_>
              ((TFunction<void_const_*___cdecl(void)> *)local_148,p<Var21);
    p<Var22 = `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_5>::<lambda_5>
                        (local_c68,&local_1628,&local_1610);
    local_268[0] = (code *)0x0;
    local_240 = FMemory::Malloc(0x20,8);
    local_240[1] = (code *)0x0;
    *local_240 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_5>,0,1>
                          ::_vftable_;
    local_240[1] = (code *)(p<Var22->PassParameters).AllocatorInstance.Data;
    (p<Var22->PassParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_240 + 2) = (p<Var22->PassParameters).ArrayNum;
    *(int *)((longlong)local_240 + 0x14) = (p<Var22->PassParameters).ArrayMax;
    (p<Var22->PassParameters).ArrayNum = 0;
    (p<Var22->PassParameters).ArrayMax = 0;
    local_240[3] = (code *)p<Var22->DeferredContext;
    if (local_240 + 1 != (code **)0x0) {
      local_268[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_5>,unsigned_int>
                     ::Call;
    }
    pFVar23 = CreateStructuredBuffer
                        (param_1,L"InstanceCulling.Compaction.TempInstanceIdsBuffer",4,
                         (TFunction<unsigned_int___cdecl(void)> *)local_268,
                         (TFunction<void_const_*___cdecl(void)> *)local_148,&local_b8);
    local_1190 = pFVar23;
    if (local_268[0] != (code *)0x0) {
      ppcVar53 = local_268 + 2;
      if (local_240 != (code **)0x0) {
        ppcVar53 = local_240;
      }
      (**(code **)(*ppcVar53 + 0x10))(ppcVar53);
    }
    `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_5>::~<lambda_5>(local_c68);
    if (local_148._0_8_ != 0) {
      plVar54 = (longlong *)(local_148 + 0x10);
      if ((longlong *)local_148._40_8_ != (longlong *)0x0) {
        plVar54 = (longlong *)local_148._40_8_;
      }
      (**(code **)(*plVar54 + 0x10))();
    }
    `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_6>::~<lambda_6>(local_c80);
    TFunction<unsigned___int64___cdecl(void)>::~TFunction<unsigned___int64___cdecl(void)>(&local_b8)
    ;
    `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_7>::~<lambda_7>(&local_f40);
    FRDGBufferUAVDesc::FRDGBufferUAVDesc(&local_ed8,pFVar23);
    local_15d0 = FRDGBuilder::CreateUAV(param_1,&local_ed8,None);
    p<Var24 = `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_10>::<lambda_10>
                        (local_c08,&local_1628,&local_1610);
    TFunction<unsigned___int64___cdecl(void)>::
    TFunction<unsigned___int64___cdecl(void)><_FInstanceCullingContext::CreateDeferredContext_::__l12::<lambda_10>_>
              (&local_e8,p<Var24);
    p<Var25 = `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_9>::<lambda_9>
                        (local_bf0,&local_1628,&local_1610);
    TFunction<void_const_*___cdecl(void)>::
    TFunction<void_const_*___cdecl(void)><_FInstanceCullingContext::CreateDeferredContext_::__l12::<lambda_9>_>
              (&local_118,p<Var25);
    p<Var26 = `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_8>::<lambda_8>
                        (local_c98,&local_1628,&local_1610);
    TFunction<unsigned_int___cdecl(void)>::
    TFunction<unsigned_int___cdecl(void)><_FInstanceCullingContext::CreateDeferredContext_::__l12::<lambda_8>_>
              (&local_88,p<Var26);
    pFVar23 = CreateStructuredBuffer
                        (param_1,L"InstanceCulling.Compaction.BlockInstanceCounts",4,&local_88,
                         &local_118,&local_e8);
    local_1198 = pFVar23;
    TFunction<unsigned_int___cdecl(void)>::~TFunction<unsigned_int___cdecl(void)>(&local_88);
    `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_8>::~<lambda_8>(local_c98);
    TFunction<void_const_*___cdecl(void)>::~TFunction<void_const_*___cdecl(void)>(&local_118);
    `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_9>::~<lambda_9>(local_bf0);
    TFunction<unsigned___int64___cdecl(void)>::~TFunction<unsigned___int64___cdecl(void)>(&local_e8)
    ;
    `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_10>::~<lambda_10>(local_c08);
    FRDGBufferUAVDesc::FRDGBufferUAVDesc(&local_ec8,pFVar23);
    pFVar27 = FRDGBuilder::CreateUAV(param_1,&local_ec8,None);
    AddClearUAVPass(param_1,pFVar27,0,Compute);
  }
  FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters::FParameters(&local_dc8);
  local_1350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_1350,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_748[0] = (code *)0x0;
  local_1340 = pFVar19;
  local_720 = FMemory::Malloc(0x20,8);
  local_720[1] = (code *)0x0;
  *local_720 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_13>,0,1>
                        ::_vftable_;
  local_720[1] = (code *)local_1350.AllocatorInstance.Data;
  local_1350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_720 + 2) = local_1350.ArrayNum;
  *(int *)((longlong)local_720 + 0x14) = local_1350.ArrayMax;
  local_1350.ArrayNum = 0;
  local_1350.ArrayMax = 0;
  local_720[3] = (code *)local_1340;
  if (local_720 + 1 != (code **)0x0) {
    local_748[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_13>,unsigned___int64>
                   ::Call;
  }
  local_1368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_1368,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_778[0] = (code *)0x0;
  local_1358 = pFVar19;
  local_750 = FMemory::Malloc(0x20,8);
  local_750[1] = (code *)0x0;
  *local_750 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_12>,0,1>
                        ::_vftable_;
  local_750[1] = (code *)local_1368.AllocatorInstance.Data;
  local_1368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_750 + 2) = local_1368.ArrayNum;
  *(int *)((longlong)local_750 + 0x14) = local_1368.ArrayMax;
  local_1368.ArrayNum = 0;
  local_1368.ArrayMax = 0;
  local_750[3] = (code *)local_1358;
  if (local_750 + 1 != (code **)0x0) {
    local_778[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_12>,void_const_*>
                   ::Call;
  }
  local_13c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_13c8,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_7a8[0] = (code *)0x0;
  local_13b8 = pFVar19;
  local_780 = FMemory::Malloc(0x20,8);
  *local_780 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_11>,0,1>
                        ::_vftable_;
  ppcVar53 = local_780 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_13c8.AllocatorInstance.Data;
  local_13c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_780 + 2) = local_13c8.ArrayNum;
  *(int *)((longlong)local_780 + 0x14) = local_13c8.ArrayMax;
  local_13c8.ArrayNum = 0;
  local_13c8.ArrayMax = 0;
  local_780[3] = (code *)local_13b8;
  if (ppcVar53 != (code **)0x0) {
    local_7a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_11>,unsigned_int>
                   ::Call;
  }
  local_15f8 = CreateStructuredBuffer
                         (param_1,L"InstanceCulling.DrawCommandDescs",8,
                          (TFunction<unsigned_int___cdecl(void)> *)local_7a8,
                          (TFunction<void_const_*___cdecl(void)> *)local_778,
                          (TFunction<unsigned___int64___cdecl(void)> *)local_748);
  if (local_7a8[0] != (code *)0x0) {
    ppcVar53 = local_7a8 + 2;
    if (local_780 != (code **)0x0) {
      ppcVar53 = local_780;
    }
    (**(code **)(*ppcVar53 + 0x10))(ppcVar53);
  }
  if (local_13c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_13c8.AllocatorInstance.Data);
  }
  if (local_778[0] != (code *)0x0) {
    ppcVar53 = local_778 + 2;
    if (local_750 != (code **)0x0) {
      ppcVar53 = local_750;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_1368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1368.AllocatorInstance.Data);
  }
  if (local_748[0] != (code *)0x0) {
    ppcVar53 = local_748 + 2;
    if (local_720 != (code **)0x0) {
      ppcVar53 = local_720;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_1350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1350.AllocatorInstance.Data);
  }
  local_1308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_1308,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_6b8[0] = (code *)0x0;
  local_12f8 = pFVar19;
  local_690 = FMemory::Malloc(0x20,8);
  *local_690 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_16>,0,1>
                        ::_vftable_;
  ppcVar53 = local_690 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_1308.AllocatorInstance.Data;
  local_1308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_690 + 2) = local_1308.ArrayNum;
  *(int *)((longlong)local_690 + 0x14) = local_1308.ArrayMax;
  local_1308.ArrayNum = 0;
  local_1308.ArrayMax = 0;
  local_690[3] = (code *)local_12f8;
  if (ppcVar53 != (code **)0x0) {
    local_6b8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_16>,unsigned___int64>
                   ::Call;
  }
  local_1320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_1320,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_6e8[0] = (code *)0x0;
  local_1310 = pFVar19;
  local_6c0 = FMemory::Malloc(0x20,8);
  *local_6c0 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_15>,0,1>
                        ::_vftable_;
  ppcVar53 = local_6c0 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_1320.AllocatorInstance.Data;
  local_1320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_6c0 + 2) = local_1320.ArrayNum;
  *(int *)((longlong)local_6c0 + 0x14) = local_1320.ArrayMax;
  local_1320.ArrayNum = 0;
  local_1320.ArrayMax = 0;
  local_6c0[3] = (code *)local_1310;
  if (ppcVar53 != (code **)0x0) {
    local_6e8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_15>,void_const_*>
                   ::Call;
  }
  local_1338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_1338,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_718[0] = (code *)0x0;
  local_1328 = pFVar19;
  local_6f0 = FMemory::Malloc(0x20,8);
  *local_6f0 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_14>,0,1>
                        ::_vftable_;
  ppcVar53 = local_6f0 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_1338.AllocatorInstance.Data;
  local_1338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_6f0 + 2) = local_1338.ArrayNum;
  *(int *)((longlong)local_6f0 + 0x14) = local_1338.ArrayMax;
  local_1338.ArrayNum = 0;
  local_1338.ArrayMax = 0;
  local_6f0[3] = (code *)local_1328;
  if (ppcVar53 != (code **)0x0) {
    local_718[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_14>,unsigned_int>
                   ::Call;
  }
  local_10e0 = CreateStructuredBuffer
                         (param_1,L"InstanceCulling.PayloadData",0x10,
                          (TFunction<unsigned_int___cdecl(void)> *)local_718,
                          (TFunction<void_const_*___cdecl(void)> *)local_6e8,
                          (TFunction<unsigned___int64___cdecl(void)> *)local_6b8);
  if (local_718[0] != (code *)0x0) {
    ppcVar53 = local_718 + 2;
    if (local_6f0 != (code **)0x0) {
      ppcVar53 = local_6f0;
    }
    (**(code **)(*ppcVar53 + 0x10))(ppcVar53);
  }
  if (local_1338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1338.AllocatorInstance.Data);
  }
  if (local_6e8[0] != (code *)0x0) {
    ppcVar53 = local_6e8 + 2;
    if (local_6c0 != (code **)0x0) {
      ppcVar53 = local_6c0;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_1320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1320.AllocatorInstance.Data);
  }
  if (local_6b8[0] != (code *)0x0) {
    ppcVar53 = local_6b8 + 2;
    if (local_690 != (code **)0x0) {
      ppcVar53 = local_690;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_1308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1308.AllocatorInstance.Data);
  }
  local_12c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_12c0,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_628[0] = (code *)0x0;
  local_12b0 = pFVar19;
  local_600 = FMemory::Malloc(0x20,8);
  *local_600 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_19>,0,1>
                        ::_vftable_;
  ppcVar53 = local_600 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_12c0.AllocatorInstance.Data;
  local_12c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_600 + 2) = local_12c0.ArrayNum;
  *(int *)((longlong)local_600 + 0x14) = local_12c0.ArrayMax;
  local_12c0.ArrayNum = 0;
  local_12c0.ArrayMax = 0;
  local_600[3] = (code *)local_12b0;
  if (ppcVar53 != (code **)0x0) {
    local_628[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_19>,unsigned___int64>
                   ::Call;
  }
  local_12d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_12d8,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_658[0] = (code *)0x0;
  local_12c8 = pFVar19;
  local_630 = FMemory::Malloc(0x20,8);
  *local_630 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_18>,0,1>
                        ::_vftable_;
  ppcVar53 = local_630 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_12d8.AllocatorInstance.Data;
  local_12d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_630 + 2) = local_12d8.ArrayNum;
  *(int *)((longlong)local_630 + 0x14) = local_12d8.ArrayMax;
  local_12d8.ArrayNum = 0;
  local_12d8.ArrayMax = 0;
  local_630[3] = (code *)local_12c8;
  if (ppcVar53 != (code **)0x0) {
    local_658[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_18>,void_const_*>
                   ::Call;
  }
  local_12f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_12f0,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_688[0] = (code *)0x0;
  local_12e0 = pFVar19;
  local_660 = FMemory::Malloc(0x20,8);
  *local_660 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_17>,0,1>
                        ::_vftable_;
  ppcVar53 = local_660 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_12f0.AllocatorInstance.Data;
  local_12f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_660 + 2) = local_12f0.ArrayNum;
  *(int *)((longlong)local_660 + 0x14) = local_12f0.ArrayMax;
  local_12f0.ArrayNum = 0;
  local_12f0.ArrayMax = 0;
  local_660[3] = (code *)local_12e0;
  if (ppcVar53 != (code **)0x0) {
    local_688[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_17>,unsigned_int>
                   ::Call;
  }
  local_15b0 = CreateStructuredBuffer
                         (param_1,L"InstanceCulling.ViewIds",4,
                          (TFunction<unsigned_int___cdecl(void)> *)local_688,
                          (TFunction<void_const_*___cdecl(void)> *)local_658,
                          (TFunction<unsigned___int64___cdecl(void)> *)local_628);
  if (local_688[0] != (code *)0x0) {
    ppcVar53 = local_688 + 2;
    if (local_660 != (code **)0x0) {
      ppcVar53 = local_660;
    }
    (**(code **)(*ppcVar53 + 0x10))(ppcVar53);
  }
  if (local_12f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_12f0.AllocatorInstance.Data);
  }
  if (local_658[0] != (code *)0x0) {
    ppcVar53 = local_658 + 2;
    if (local_630 != (code **)0x0) {
      ppcVar53 = local_630;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_12d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_12d8.AllocatorInstance.Data);
  }
  if (local_628[0] != (code *)0x0) {
    ppcVar53 = local_628 + 2;
    if (local_600 != (code **)0x0) {
      ppcVar53 = local_600;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_12c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_12c0.AllocatorInstance.Data);
  }
  local_1278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_1278,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_598[0] = (code *)0x0;
  local_1268 = pFVar19;
  local_570 = FMemory::Malloc(0x20,8);
  *local_570 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_22>,0,1>
                        ::_vftable_;
  ppcVar53 = local_570 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_1278.AllocatorInstance.Data;
  local_1278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_570 + 2) = local_1278.ArrayNum;
  *(int *)((longlong)local_570 + 0x14) = local_1278.ArrayMax;
  local_1278.ArrayNum = 0;
  local_1278.ArrayMax = 0;
  local_570[3] = (code *)local_1268;
  if (ppcVar53 != (code **)0x0) {
    local_598[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_22>,unsigned___int64>
                   ::Call;
  }
  local_1290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_1290,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_5c8[0] = (code *)0x0;
  local_1280 = pFVar19;
  local_5a0 = FMemory::Malloc(0x20,8);
  *local_5a0 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_21>,0,1>
                        ::_vftable_;
  ppcVar53 = local_5a0 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_1290.AllocatorInstance.Data;
  local_1290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_5a0 + 2) = local_1290.ArrayNum;
  *(int *)((longlong)local_5a0 + 0x14) = local_1290.ArrayMax;
  local_1290.ArrayNum = 0;
  local_1290.ArrayMax = 0;
  local_5a0[3] = (code *)local_1280;
  if (ppcVar53 != (code **)0x0) {
    local_5c8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_21>,void_const_*>
                   ::Call;
  }
  local_12a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_12a8,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_5f8[0] = (code *)0x0;
  local_1298 = pFVar19;
  local_5d0 = FMemory::Malloc(0x20,8);
  *local_5d0 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_20>,0,1>
                        ::_vftable_;
  ppcVar53 = local_5d0 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_12a8.AllocatorInstance.Data;
  local_12a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_5d0 + 2) = local_12a8.ArrayNum;
  *(int *)((longlong)local_5d0 + 0x14) = local_12a8.ArrayMax;
  local_12a8.ArrayNum = 0;
  local_12a8.ArrayMax = 0;
  local_5d0[3] = (code *)local_1298;
  if (ppcVar53 != (code **)0x0) {
    local_5f8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_20>,unsigned_int>
                   ::Call;
  }
  pFVar23 = CreateStructuredBuffer
                      (param_1,L"InstanceCulling.BatchInfos",0x28,
                       (TFunction<unsigned_int___cdecl(void)> *)local_5f8,
                       (TFunction<void_const_*___cdecl(void)> *)local_5c8,
                       (TFunction<unsigned___int64___cdecl(void)> *)local_598);
  if (local_5f8[0] != (code *)0x0) {
    ppcVar53 = local_5f8 + 2;
    if (local_5d0 != (code **)0x0) {
      ppcVar53 = local_5d0;
    }
    (**(code **)(*ppcVar53 + 0x10))(ppcVar53);
  }
  if (local_12a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_12a8.AllocatorInstance.Data);
  }
  if (local_5c8[0] != (code *)0x0) {
    ppcVar53 = local_5c8 + 2;
    if (local_5a0 != (code **)0x0) {
      ppcVar53 = local_5a0;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_1290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1290.AllocatorInstance.Data);
  }
  if (local_598[0] != (code *)0x0) {
    ppcVar53 = local_598 + 2;
    if (local_570 != (code **)0x0) {
      ppcVar53 = local_570;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_1278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1278.AllocatorInstance.Data);
  }
  local_1260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_1260,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_568[0] = (code *)0x0;
  local_1250 = pFVar19;
  local_540 = FMemory::Malloc(0x20,8);
  local_15e8.ArrayNum = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  *local_540 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_23>,0,1>
                        ::_vftable_;
  ppcVar53 = local_540 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_1260.AllocatorInstance.Data;
  local_1260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_540 + 2) = local_1260.ArrayNum;
  *(int *)((longlong)local_540 + 0x14) = local_1260.ArrayMax;
  local_1260.ArrayNum = 0;
  local_1260.ArrayMax = 0;
  local_540[3] = (code *)local_1250;
  if (ppcVar53 != (code **)0x0) {
    local_568[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_23>,unsigned_int>
                   ::Call;
  }
  local_15e8.AllocatorInstance.Data = (FScriptContainerElement *)0x100000004;
  local_15d8 = (FInstanceCullingDeferredContext *)0x0;
  local_e08.BytesPerElement = 4;
  local_e08.NumElements = 1;
  local_e08.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  local_e08._12_4_ = local_15e8.ArrayMax;
  local_e08.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar28 = FRDGBuilder::CreateBuffer
                      (param_1,&local_e08,L"InstanceCulling.DrawIndirectArgsBuffer",
                       (TFunction<unsigned_int___cdecl(void)> *)local_568,None);
  pFVar19->DrawIndirectArgsBuffer = pFVar28;
  if (local_568[0] != (code *)0x0) {
    ppcVar53 = local_568 + 2;
    if (local_540 != (code **)0x0) {
      ppcVar53 = local_540;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_1260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1260.AllocatorInstance.Data);
  }
  local_14d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_14d0,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_508[0] = (code *)0x0;
  local_14c0 = pFVar19;
  local_4e0 = FMemory::Malloc(0x20,8);
  *local_4e0 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_25>,0,1>
                        ::_vftable_;
  ppcVar53 = local_4e0 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_14d0.AllocatorInstance.Data;
  local_14d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_4e0 + 2) = local_14d0.ArrayNum;
  *(int *)((longlong)local_4e0 + 0x14) = local_14d0.ArrayMax;
  local_14d0.ArrayNum = 0;
  local_14d0.ArrayMax = 0;
  local_4e0[3] = (code *)local_14c0;
  if (ppcVar53 != (code **)0x0) {
    local_508[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_25>,unsigned___int64>
                   ::Call;
  }
  local_14e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_14e8,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_538[0] = (code *)0x0;
  local_14d8 = pFVar19;
  local_510 = FMemory::Malloc(0x20,8);
  *local_510 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_24>,0,1>
                        ::_vftable_;
  ppcVar53 = local_510 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_14e8.AllocatorInstance.Data;
  local_14e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_510 + 2) = local_14e8.ArrayNum;
  *(int *)((longlong)local_510 + 0x14) = local_14e8.ArrayMax;
  local_14e8.ArrayNum = 0;
  local_14e8.ArrayMax = 0;
  local_510[3] = (code *)local_14d8;
  if (ppcVar53 != (code **)0x0) {
    local_538[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_24>,void_const_*>
                   ::Call;
  }
  FRDGBuilder::QueueBufferUpload
            (param_1,pFVar19->DrawIndirectArgsBuffer,
             (TFunction<void_const_*___cdecl(void)> *)local_538,
             (TFunction<unsigned___int64___cdecl(void)> *)local_508);
  if (local_538[0] != (code *)0x0) {
    ppcVar53 = local_538 + 2;
    if (local_510 != (code **)0x0) {
      ppcVar53 = local_510;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_14e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14e8.AllocatorInstance.Data);
  }
  if (local_508[0] != (code *)0x0) {
    ppcVar53 = local_508 + 2;
    if (local_4e0 != (code **)0x0) {
      ppcVar53 = local_4e0;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_14d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14d0.AllocatorInstance.Data);
  }
  pFVar29 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(longlong)local_15b8]);
  local_14b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_14f8 = pFVar29;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_14b8,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_bd8[0] = (code *)0x0;
  local_14a8 = pFVar19;
  local_bb0 = FMemory::Malloc(0x20,8);
  *local_bb0 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_26>,0,1>
                ::_vftable_;
  puVar12 = local_bb0 + 1;
  *puVar12 = 0;
  *puVar12 = local_14b8.AllocatorInstance.Data;
  local_14b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_bb0 + 2) = local_14b8.ArrayNum;
  *(int *)((longlong)local_bb0 + 0x14) = local_14b8.ArrayMax;
  local_14b8.ArrayNum = 0;
  local_14b8.ArrayMax = 0;
  local_bb0[3] = local_14a8;
  if (puVar12 != (undefined8 *)0x0) {
    local_bd8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_26>,int>
                   ::Call;
  }
  AddClearIndirectArgInstanceCountPass
            (param_1,pFVar29,pFVar19->DrawIndirectArgsBuffer,
             (TFunction<int___cdecl(void)> *)local_bd8);
  if (local_14b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14b8.AllocatorInstance.Data);
  }
  local_14a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_14a0,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_4d8[0] = (code *)0x0;
  local_1490 = pFVar19;
  local_4b0 = FMemory::Malloc(0x20,8);
  local_15e8.ArrayNum = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  *local_4b0 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_27>,0,1>
                        ::_vftable_;
  ppcVar53 = local_4b0 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_14a0.AllocatorInstance.Data;
  local_14a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_4b0 + 2) = local_14a0.ArrayNum;
  *(int *)((longlong)local_4b0 + 0x14) = local_14a0.ArrayMax;
  local_14a0.ArrayNum = 0;
  local_14a0.ArrayMax = 0;
  local_4b0[3] = (code *)local_1490;
  if (ppcVar53 != (code **)0x0) {
    local_4d8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_27>,unsigned_int>
                   ::Call;
  }
  local_15e8.AllocatorInstance.Data = (FScriptContainerElement *)0x100000004;
  local_15d8 = (FInstanceCullingDeferredContext *)0x0;
  local_e38.BytesPerElement = 4;
  local_e38.NumElements = 1;
  local_e38.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  local_e38._12_4_ = local_15e8.ArrayMax;
  local_e38.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar28 = FRDGBuilder::CreateBuffer
                      (param_1,&local_e38,L"InstanceCulling.InstanceIdOffsetBuffer",
                       (TFunction<unsigned_int___cdecl(void)> *)local_4d8,None);
  if (local_4d8[0] != (code *)0x0) {
    ppcVar53 = local_4d8 + 2;
    if (local_4b0 != (code **)0x0) {
      ppcVar53 = local_4b0;
    }
    (**(code **)(*ppcVar53 + 0x10))(ppcVar53);
  }
  if (local_14a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14a0.AllocatorInstance.Data);
  }
  local_1470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_1470,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_478[0] = (code *)0x0;
  local_1460 = pFVar19;
  local_450 = FMemory::Malloc(0x20,8);
  *local_450 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_29>,0,1>
                        ::_vftable_;
  ppcVar53 = local_450 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_1470.AllocatorInstance.Data;
  local_1470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_450 + 2) = local_1470.ArrayNum;
  *(int *)((longlong)local_450 + 0x14) = local_1470.ArrayMax;
  local_1470.ArrayNum = 0;
  local_1470.ArrayMax = 0;
  local_450[3] = (code *)local_1460;
  if (ppcVar53 != (code **)0x0) {
    local_478[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_29>,unsigned___int64>
                   ::Call;
  }
  local_1488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_1488,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_2c8[0] = (code *)0x0;
  local_1478 = pFVar19;
  local_2a0 = FMemory::Malloc(0x20,8);
  *local_2a0 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_28>,0,1>
                        ::_vftable_;
  ppcVar53 = local_2a0 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_1488.AllocatorInstance.Data;
  local_1488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_2a0 + 2) = local_1488.ArrayNum;
  *(int *)((longlong)local_2a0 + 0x14) = local_1488.ArrayMax;
  local_1488.ArrayNum = 0;
  local_1488.ArrayMax = 0;
  local_2a0[3] = (code *)local_1478;
  if (ppcVar53 != (code **)0x0) {
    local_2c8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_28>,void_const_*>
                   ::Call;
  }
  FRDGBuilder::QueueBufferUpload
            (param_1,pFVar28,(TFunction<void_const_*___cdecl(void)> *)local_2c8,
             (TFunction<unsigned___int64___cdecl(void)> *)local_478);
  if (local_2c8[0] != (code *)0x0) {
    ppcVar53 = local_2c8 + 2;
    if (local_2a0 != (code **)0x0) {
      ppcVar53 = local_2a0;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_1488.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1488.AllocatorInstance.Data);
  }
  if (local_478[0] != (code *)0x0) {
    ppcVar53 = local_478 + 2;
    if (local_450 != (code **)0x0) {
      ppcVar53 = local_450;
    }
    (**(code **)(*ppcVar53 + 0x10))();
  }
  if (local_1470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1470.AllocatorInstance.Data);
  }
  local_15e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
            (&local_15e8,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
  local_448[0] = (code *)0x0;
  local_15d8 = pFVar19;
  local_420 = FMemory::Malloc(0x20,8);
  *local_420 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_30>,0,1>
                        ::_vftable_;
  ppcVar53 = local_420 + 1;
  *ppcVar53 = (code *)0x0;
  *ppcVar53 = (code *)local_15e8.AllocatorInstance.Data;
  local_15e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_420 + 2) = local_15e8.ArrayNum;
  *(int *)((longlong)local_420 + 0x14) = local_15e8.ArrayMax;
  local_15e8.ArrayNum = 0;
  local_15e8.ArrayMax = 0;
  local_420[3] = (code *)local_15d8;
  if (ppcVar53 != (code **)0x0) {
    local_448[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_30>,unsigned_int>
                   ::Call;
  }
  pFVar30 = CreateInstanceIdBufferDesc(&local_b88,FVar61.Platform,1);
  local_e20.BytesPerElement = pFVar30->BytesPerElement;
  local_e20.NumElements = pFVar30->NumElements;
  local_e20.Usage = pFVar30->Usage;
  local_e20._12_4_ = *(undefined4 *)&pFVar30->field_0xc;
  local_e20.Metadata = pFVar30->Metadata;
  pFVar31 = FRDGBuilder::CreateBuffer
                      (param_1,&local_e20,L"InstanceCulling.InstanceIdsBuffer",
                       (TFunction<unsigned_int___cdecl(void)> *)local_448,None);
  local_15b8 = pFVar31;
  if (local_448[0] != (code *)0x0) {
    ppcVar53 = local_448 + 2;
    if (local_420 != (code **)0x0) {
      ppcVar53 = local_420;
    }
    (**(code **)(*ppcVar53 + 0x10))(ppcVar53);
  }
  if (local_15e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_15e8.AllocatorInstance.Data);
  }
  local_1180._padding_._2_1_ = 0;
  bVar15 = 0;
  if (((pFVar31->Desc).Usage & DrawIndirect) != None) {
    bVar15 = 0x1c;
  }
  local_1180._padding_._0_2_ = (ushort)bVar15;
  local_1180.Buffer = pFVar31;
  local_1188 = FRDGBuilder::CreateUAV(param_1,&local_1180,SkipBarrier);
  pFVar19->InstanceDataBuffer = pFVar28;
  pTVar32 = FSceneUniformBuffer::GetBuffer(local_1500->SceneUniforms,param_1);
  pFVar33 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  local_dc8.Scene._9_4_ = local_1248.ShaderMap._1_4_;
  local_dc8.Scene._8_1_ = Static;
  if (pFVar33->BindingFlags != StaticAndShader) {
    local_dc8.Scene._8_1_ = pFVar33->BindingFlags;
  }
  local_dc8.Scene._13_2_ = local_1248.ShaderMap._5_2_;
  local_dc8.Scene._15_1_ = local_1248.ShaderMap._7_1_;
  local_dc8.Scene._0_8_ = pTVar32;
  pFVar34 = FGPUScene::GetShaderParameters(local_15c0,&local_b68,param_1);
  local_1080._padding_._0_4_ = 0xffffffff;
  local_dc8.GPUSceneParameters.CommonParameters.GPUSceneInstanceDataTileSizeLog2 =
       (pFVar34->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
  local_dc8.GPUSceneParameters.CommonParameters.GPUSceneInstanceDataTileSizeMask =
       (pFVar34->CommonParameters).GPUSceneInstanceDataTileSizeMask;
  local_dc8.GPUSceneParameters.CommonParameters.GPUSceneInstanceDataTileStride =
       (pFVar34->CommonParameters).GPUSceneInstanceDataTileStride;
  local_dc8.GPUSceneParameters.CommonParameters.GPUSceneFrameNumber =
       (pFVar34->CommonParameters).GPUSceneFrameNumber;
  local_dc8.GPUSceneParameters.CommonParameters.GPUSceneMaxAllocatedInstanceId =
       (pFVar34->CommonParameters).GPUSceneMaxAllocatedInstanceId;
  local_dc8.GPUSceneParameters.CommonParameters.GPUSceneMaxPersistentPrimitiveIndex =
       (pFVar34->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex;
  local_dc8.GPUSceneParameters.CommonParameters.GPUSceneNumLightmapDataItems =
       (pFVar34->CommonParameters).GPUSceneNumLightmapDataItems;
  local_dc8.GPUSceneParameters.CommonParameters._28_4_ =
       *(undefined4 *)&(pFVar34->CommonParameters).field_0x1c;
  local_dc8.GPUSceneParameters.GPUSceneInstanceSceneData = pFVar34->GPUSceneInstanceSceneData;
  local_dc8.GPUSceneParameters.GPUSceneInstancePayloadData = pFVar34->GPUSceneInstancePayloadData;
  local_dc8.GPUSceneParameters.GPUSceneLightData = pFVar34->GPUSceneLightData;
  local_dc8.GPUSceneParameters._72_8_ = *(undefined8 *)&pFVar34->field_0x48;
  local_dc8.GPUSceneParameters.GPUScenePrimitiveSceneData = pFVar34->GPUScenePrimitiveSceneData;
  local_dc8.GPUSceneParameters.GPUSceneLightmapData = pFVar34->GPUSceneLightmapData;
  local_1080.Buffer = local_15f8;
  local_1080._padding_._4_4_ = 0;
  local_1080._padding_ = 0;
  local_1080._padding_._0_1_ = 0;
  if (((local_15f8->Desc).Usage & DrawIndirect) != None) {
    local_1080._padding_._0_1_ = 0x1c;
  }
  local_dc8.DrawCommandDescs = FRDGBuilder::CreateSRV(param_1,&local_1080);
  local_1060.Buffer = local_10e0;
  local_1060._padding_._4_4_ = 0;
  local_1060._padding_._0_4_ = 0xffffffff;
  local_1060._padding_ = 0;
  local_1060._padding_._0_1_ = 0;
  if (((local_10e0->Desc).Usage & DrawIndirect) != None) {
    local_1060._padding_._0_1_ = 0x1c;
  }
  local_dc8.InstanceCullingPayloads = FRDGBuilder::CreateSRV(param_1,&local_1060);
  local_1040._padding_._4_4_ = 0;
  local_1040._padding_._0_4_ = 0xffffffff;
  local_1040._padding_ = 0;
  local_1040._padding_._0_1_ = 0;
  if (((pFVar23->Desc).Usage & DrawIndirect) != None) {
    local_1040._padding_._0_1_ = 0x1c;
  }
  local_1040.Buffer = pFVar23;
  local_dc8.BatchInfos = FRDGBuilder::CreateSRV(param_1,&local_1040);
  local_1020.Buffer = local_15b0;
  local_1020._padding_._4_4_ = 0;
  local_1020._padding_._0_4_ = 0xffffffff;
  local_1020._padding_ = 0;
  local_1020._padding_._0_1_ = 0;
  if (((local_15b0->Desc).Usage & DrawIndirect) != None) {
    local_1020._padding_._0_1_ = 0x1c;
  }
  local_dc8.ViewIds = FRDGBuilder::CreateSRV(param_1,&local_1020);
  local_dc8.InstanceIdsBufferOut = local_1188;
  local_dc8.InstanceIdsBufferOutMobile = local_1188;
  local_1160.Buffer = pFVar19->DrawIndirectArgsBuffer;
  local_1160._padding_._0_2_ = 0x1c;
  local_1160._padding_._2_1_ = 0;
  pFVar35 = FRDGBuilder::CreateUAV(param_1,&local_1160,SkipBarrier);
  EVar59 = PF_R32_UINT;
  local_f18._padding_._0_1_ = 0x1c;
  local_f18._padding_._4_4_ = 0;
  local_f18._padding_ = 0;
  local_f18._padding_._0_4_ = 0xffffffff;
  local_f18.Buffer = pFVar28;
  local_dc8.DrawIndirectArgsBufferOut = pFVar35;
  local_dc8.InstanceIdOffsetBuffer = FRDGBuilder::CreateSRV(param_1,&local_f18);
  pFVar10 = local_1500;
  pFVar36 = FRendererViewDataManager::GetCullingParameters
                      (local_1500->ViewDataManager,&local_b98,param_1);
  local_dc8.ViewDataCullingParameters.InViews = pFVar36->InViews;
  local_dc8.ViewDataCullingParameters.NumSceneRendererPrimaryViews =
       pFVar36->NumSceneRendererPrimaryViews;
  local_dc8.ViewDataCullingParameters.NumCullingViews = pFVar36->NumCullingViews;
  pFVar37 = GetDynamicMeshBoundsShaderParameters(&local_ba8,param_1);
  pFVar23 = pFVar10->InstanceOcclusionQueryBuffer;
  local_dc8.DynamicBoundsParameters.DynamicMeshBoundsMax = pFVar37->DynamicMeshBoundsMax;
  local_dc8.DynamicBoundsParameters._4_4_ = *(undefined4 *)&pFVar37->field_0x4;
  local_dc8.DynamicBoundsParameters.DynamicMeshBoundsBuffer = pFVar37->DynamicMeshBoundsBuffer;
  local_dc8.DrawCommandCompactionData = (FRDGBufferSRV *)local_15c8;
  local_dc8.CompactInstanceIdsBufferOut = local_15d0;
  local_dc8.CompactionBlockCounts = pFVar27;
  if (pFVar23 == (FRDGBuffer *)0x0) {
    pFVar23 = FSystemTextures::GetDefaultBuffer((FSystemTextures *)&GSystemTextures,param_1,4,0);
  }
  else {
    EVar59 = pFVar10->InstanceOcclusionQueryBufferFormat;
  }
  local_dc8.InstanceOcclusionQueryBuffer = FRDGBuilder::CreateSRV(param_1,pFVar23,EVar59);
  uVar63 = 0;
  *(atomic<int> *)((longlong)&pFVar19->_padding_ + 4) = pFVar10->ViewDataManager->NumRegisteredViews
  ;
  if (local_1600[0] != 0) {
    do {
      lVar57 = 2;
      puVar12 = local_b18;
      ppTVar13 = (TRDGUniformBuffer<FSceneUniformParameters> **)&local_dc8;
      do {
        ppTVar51 = ppTVar13;
        puVar38 = puVar12;
        pTVar32 = ppTVar51[1];
        uVar2 = ppTVar51[2];
        uVar5 = ppTVar51[3];
        *puVar38 = *ppTVar51;
        puVar38[1] = pTVar32;
        uVar6 = ppTVar51[4];
        uVar7 = ppTVar51[5];
        puVar38[2] = uVar2;
        puVar38[3] = uVar5;
        uVar2 = ppTVar51[6];
        uVar5 = ppTVar51[7];
        puVar38[4] = uVar6;
        puVar38[5] = uVar7;
        uVar6 = ppTVar51[8];
        uVar7 = ppTVar51[9];
        puVar38[6] = uVar2;
        puVar38[7] = uVar5;
        uVar2 = ppTVar51[10];
        uVar5 = ppTVar51[0xb];
        puVar38[8] = uVar6;
        puVar38[9] = uVar7;
        uVar6 = ppTVar51[0xc];
        uVar7 = ppTVar51[0xd];
        puVar38[10] = uVar2;
        puVar38[0xb] = uVar5;
        uVar2 = ppTVar51[0xe];
        uVar5 = ppTVar51[0xf];
        puVar38[0xc] = uVar6;
        puVar38[0xd] = uVar7;
        puVar38[0xe] = uVar2;
        puVar38[0xf] = uVar5;
        lVar57 = lVar57 + -1;
        puVar12 = puVar38 + 0x10;
        ppTVar13 = ppTVar51 + 0x10;
      } while (lVar57 != 0);
      uVar2 = ppTVar51[0x11];
      uVar5 = ppTVar51[0x12];
      uVar6 = ppTVar51[0x13];
      puVar38[0x10] = ppTVar51[0x10];
      puVar38[0x11] = uVar2;
      uVar62 = ~uVar63 >> 0x1f;
      uVar2 = ppTVar51[0x14];
      uVar7 = ppTVar51[0x15];
      puVar38[0x12] = uVar5;
      puVar38[0x13] = uVar6;
      local_15f8 = (FRDGBuffer *)CONCAT44(local_15f8._4_4_,uVar62);
      puVar38[0x14] = uVar2;
      puVar38[0x15] = uVar7;
      uVar58 = 0;
      if ((int)uVar63 < local_1628.ArrayNum) {
        uVar58 = uVar62;
      }
      if ((uVar58 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
        return pFVar19;
      }
      FVar9.Data = local_1628.AllocatorInstance.Data;
      lVar57 = 2;
      lVar60 = (longlong)(int)uVar63;
      puVar12 = local_b18;
      puVar38 = *(undefined8 **)(local_1628.AllocatorInstance.Data + lVar60 * 8);
      do {
        puVar52 = puVar38;
        puVar39 = puVar12;
        uVar2 = puVar39[1];
        uVar5 = puVar39[2];
        uVar6 = puVar39[3];
        *puVar52 = *puVar39;
        puVar52[1] = uVar2;
        uVar2 = puVar39[4];
        uVar7 = puVar39[5];
        puVar52[2] = uVar5;
        puVar52[3] = uVar6;
        uVar5 = puVar39[6];
        uVar6 = puVar39[7];
        puVar52[4] = uVar2;
        puVar52[5] = uVar7;
        uVar2 = puVar39[8];
        uVar7 = puVar39[9];
        puVar52[6] = uVar5;
        puVar52[7] = uVar6;
        uVar5 = puVar39[10];
        uVar6 = puVar39[0xb];
        puVar52[8] = uVar2;
        puVar52[9] = uVar7;
        uVar2 = puVar39[0xc];
        uVar7 = puVar39[0xd];
        puVar52[10] = uVar5;
        puVar52[0xb] = uVar6;
        uVar5 = puVar39[0xe];
        uVar6 = puVar39[0xf];
        puVar52[0xc] = uVar2;
        puVar52[0xd] = uVar7;
        puVar52[0xe] = uVar5;
        puVar52[0xf] = uVar6;
        lVar57 = lVar57 + -1;
        puVar12 = puVar39 + 0x10;
        puVar38 = puVar52 + 0x10;
      } while (lVar57 != 0);
      uVar2 = puVar39[0x11];
      local_1568.Data = (FScriptContainerElement *)0x0;
      uVar5 = puVar39[0x12];
      uVar6 = puVar39[0x13];
      puVar52[0x10] = puVar39[0x10];
      puVar52[0x11] = uVar2;
      uVar2 = puVar39[0x14];
      uVar7 = puVar39[0x15];
      puVar52[0x12] = uVar5;
      puVar52[0x13] = uVar6;
      puVar52[0x14] = uVar2;
      puVar52[0x15] = uVar7;
      lVar57 = (longlong)local_1628.ArrayNum;
      local_1560 = CONCAT44(local_1560._4_4_,local_1628.ArrayNum);
      if (local_1628.ArrayNum == 0) {
        local_1560 = local_1628._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_1628.ArrayNum,0,&local_1568,local_1628.ArrayNum,
                   (int *)((longlong)&local_1560 + 4));
        memcpy(local_1568.Data,FVar9.Data,lVar57 << 3);
      }
      local_8f8[0] = (code *)0x0;
      local_8d0 = (code **)0x0;
      local_1558 = pFVar19;
      local_1550 = uVar63;
      local_8d0 = FMemory::Malloc(0x28,8);
      FVar9.Data = local_1628.AllocatorInstance.Data;
      ppcVar53 = local_8d0 + 1;
      *local_8d0 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_33>,0,1>
                            ::_vftable_;
      *ppcVar53 = (code *)0x0;
      *ppcVar53 = (code *)local_1568.Data;
      local_1568.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(local_8d0 + 2) = (undefined4)local_1560;
      *(undefined4 *)((longlong)local_8d0 + 0x14) = local_1560._4_4_;
      local_1560 = 0;
      local_8d0[3] = (code *)local_1558;
      *(uint *)(local_8d0 + 4) = local_1550;
      if (ppcVar53 != (code **)0x0) {
        local_8f8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_33>,unsigned___int64>
                       ::Call;
      }
      local_1588.Data = (FScriptContainerElement *)0x0;
      lVar57 = (longlong)local_1628.ArrayNum;
      local_1580 = CONCAT44(local_1580._4_4_,local_1628.ArrayNum);
      if (local_1628.ArrayNum == 0) {
        local_1580 = local_1628._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_1628.ArrayNum,0,&local_1588,local_1628.ArrayNum,
                   (int *)((longlong)&local_1580 + 4));
        memcpy(local_1588.Data,FVar9.Data,lVar57 << 3);
      }
      local_928[0] = (code *)0x0;
      local_900 = (code **)0x0;
      local_1578 = pFVar19;
      local_1570 = uVar63;
      local_900 = FMemory::Malloc(0x28,8);
      ppcVar53 = local_900 + 1;
      *local_900 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_32>,0,1>
                            ::_vftable_;
      *ppcVar53 = (code *)0x0;
      *ppcVar53 = (code *)local_1588.Data;
      local_1588.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(local_900 + 2) = (undefined4)local_1580;
      *(undefined4 *)((longlong)local_900 + 0x14) = local_1580._4_4_;
      local_1580 = 0;
      local_900[3] = (code *)local_1578;
      *(uint *)(local_900 + 4) = local_1570;
      if (ppcVar53 != (code **)0x0) {
        local_928[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_32>,void_const_*>
                       ::Call;
      }
      local_11f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
      ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
                (&local_11f8,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0
                );
      local_958[0] = (code *)0x0;
      local_930 = (code **)0x0;
      local_11e8 = pFVar19;
      local_11e0 = uVar63;
      local_930 = FMemory::Malloc(0x28,8);
      ppcVar53 = local_930 + 1;
      *local_930 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_31>,0,1>
                            ::_vftable_;
      *ppcVar53 = (code *)0x0;
      *ppcVar53 = (code *)local_11f8.AllocatorInstance.Data;
      local_11f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_930 + 2) = local_11f8.ArrayNum;
      *(int *)((longlong)local_930 + 0x14) = local_11f8.ArrayMax;
      local_11f8.ArrayNum = 0;
      local_11f8.ArrayMax = 0;
      local_930[3] = (code *)local_11e8;
      *(uint *)(local_930 + 4) = local_11e0;
      if (ppcVar53 != (code **)0x0) {
        local_958[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_31>,unsigned_int>
                       ::Call;
      }
      pFVar23 = CreateStructuredBuffer
                          (param_1,L"InstanceCulling.BatchInds",4,
                           (TFunction<unsigned_int___cdecl(void)> *)local_958,
                           (TFunction<void_const_*___cdecl(void)> *)local_928,
                           (TFunction<unsigned___int64___cdecl(void)> *)local_8f8);
      if (local_958[0] != (code *)0x0) {
        ppcVar53 = local_958 + 2;
        if (local_930 != (code **)0x0) {
          ppcVar53 = local_930;
        }
        (**(code **)(*ppcVar53 + 0x10))();
      }
      if (local_11f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_11f8.AllocatorInstance.Data);
      }
      if (local_928[0] != (code *)0x0) {
        ppcVar53 = local_928 + 2;
        if (local_900 != (code **)0x0) {
          ppcVar53 = local_900;
        }
        (**(code **)(*ppcVar53 + 0x10))();
      }
      if (local_1588.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1588.Data);
      }
      if (local_8f8[0] != (code *)0x0) {
        ppcVar53 = local_8f8 + 2;
        if (local_8d0 != (code **)0x0) {
          ppcVar53 = local_8d0;
        }
        (**(code **)(*ppcVar53 + 0x10))();
      }
      if (local_1568.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1568.Data);
      }
      local_1150._padding_._4_4_ = 0;
      local_1150._padding_._0_4_ = 0xffffffff;
      local_1150._padding_ = 0;
      uVar16 = 0;
      if (((pFVar23->Desc).Usage & DrawIndirect) != None) {
        uVar16 = 0x1c;
      }
      local_1150._padding_._0_4_ =
           CONCAT31((int3)((uint)(undefined4)local_1150._padding_ >> 8),uVar16);
      local_1150.Buffer = pFVar23;
      FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_1150);
      pFVar23 = local_1150.Buffer;
      pFVar40 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
      pFVar40->_padding_ = pFVar23->_padding_;
      pFVar40->_padding_ = 0;
      *(byte *)&pFVar40->_padding_ = (byte)pFVar40->_padding_ & 0xfe;
      *(undefined1 *)&pFVar40->_padding_ = 3;
      *(undefined8 *)((longlong)&pFVar40->_padding_ + 4) = 0xffffffffffffffff;
      pFVar40->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
      (pFVar40->Desc)._padding_ =
           CONCAT44(local_1150._padding_._4_4_,(undefined4)local_1150._padding_);
      (pFVar40->Desc)._padding_ =
           CONCAT44(local_1150._padding_._4_4_,(undefined4)local_1150._padding_);
      (pFVar40->Desc)._padding_ = local_1150._padding_;
      (pFVar40->Desc).Buffer = local_1150.Buffer;
      TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                (&param_1->Views,(FRDGView *)pFVar40);
      FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar40);
      uVar58 = 0;
      if ((int)uVar63 < local_1628.ArrayNum) {
        uVar58 = uVar62;
      }
      if ((uVar58 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
        return pFVar19;
      }
      local_11b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_15d0 = (FRDGBufferUAV *)CONCAT44(local_15d0._4_4_,(uint)(uVar63 == 0));
      *(FRDGBufferSRV **)(*(longlong *)(local_1628.AllocatorInstance.Data + lVar60 * 8) + 0xc0) =
           pFVar40;
      TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
      ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
                (&local_11b8,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0
                );
      local_868[0] = (code *)0x0;
      local_840 = (code **)0x0;
      local_11a8 = pFVar19;
      local_11a0 = uVar63;
      local_840 = FMemory::Malloc(0x28,8);
      ppcVar53 = local_840 + 1;
      *local_840 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_36>,0,1>
                            ::_vftable_;
      *ppcVar53 = (code *)0x0;
      *ppcVar53 = (code *)local_11b8.AllocatorInstance.Data;
      local_11b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_840 + 2) = local_11b8.ArrayNum;
      *(int *)((longlong)local_840 + 0x14) = local_11b8.ArrayMax;
      local_11b8.ArrayNum = 0;
      local_11b8.ArrayMax = 0;
      local_840[3] = (code *)local_11a8;
      *(uint *)(local_840 + 4) = local_11a0;
      if (ppcVar53 != (code **)0x0) {
        local_868[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_36>,unsigned___int64>
                       ::Call;
      }
      local_1218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
      ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
                (&local_1218,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0
                );
      local_898[0] = (code *)0x0;
      local_870 = (code **)0x0;
      local_1208 = pFVar19;
      local_1200 = uVar63;
      local_870 = FMemory::Malloc(0x28,8);
      ppcVar53 = local_870 + 1;
      *local_870 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_35>,0,1>
                            ::_vftable_;
      *ppcVar53 = (code *)0x0;
      *ppcVar53 = (code *)local_1218.AllocatorInstance.Data;
      local_1218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_870 + 2) = local_1218.ArrayNum;
      *(int *)((longlong)local_870 + 0x14) = local_1218.ArrayMax;
      local_1218.ArrayNum = 0;
      local_1218.ArrayMax = 0;
      local_870[3] = (code *)local_1208;
      *(uint *)(local_870 + 4) = local_1200;
      if (ppcVar53 != (code **)0x0) {
        local_898[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_35>,void_const_*>
                       ::Call;
      }
      local_11d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
      ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
                (&local_11d8,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0
                );
      local_8c8[0] = (code *)0x0;
      local_8a0 = (code **)0x0;
      local_11c8 = pFVar19;
      local_11c0 = uVar63;
      local_8a0 = FMemory::Malloc(0x28,8);
      ppcVar53 = local_8a0 + 1;
      *local_8a0 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_34>,0,1>
                            ::_vftable_;
      *ppcVar53 = (code *)0x0;
      *ppcVar53 = (code *)local_11d8.AllocatorInstance.Data;
      local_11d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_8a0 + 2) = local_11d8.ArrayNum;
      *(int *)((longlong)local_8a0 + 0x14) = local_11d8.ArrayMax;
      local_11d8.ArrayNum = 0;
      local_11d8.ArrayMax = 0;
      local_8a0[3] = (code *)local_11c8;
      *(uint *)(local_8a0 + 4) = local_11c0;
      if (ppcVar53 != (code **)0x0) {
        local_8c8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_34>,unsigned_int>
                       ::Call;
      }
      local_15b0 = CreateStructuredBuffer
                             (param_1,L"InstanceCullingLoadBalancer.Batches",4,
                              (TFunction<unsigned_int___cdecl(void)> *)local_8c8,
                              (TFunction<void_const_*___cdecl(void)> *)local_898,
                              (TFunction<unsigned___int64___cdecl(void)> *)local_868);
      if (local_8c8[0] != (code *)0x0) {
        ppcVar53 = local_8c8 + 2;
        if (local_8a0 != (code **)0x0) {
          ppcVar53 = local_8a0;
        }
        (**(code **)(*ppcVar53 + 0x10))();
      }
      if (local_11d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_11d8.AllocatorInstance.Data);
      }
      if (local_898[0] != (code *)0x0) {
        ppcVar53 = local_898 + 2;
        if (local_870 != (code **)0x0) {
          ppcVar53 = local_870;
        }
        (**(code **)(*ppcVar53 + 0x10))();
      }
      if (local_1218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1218.AllocatorInstance.Data);
      }
      if (local_868[0] != (code *)0x0) {
        ppcVar53 = local_868 + 2;
        if (local_840 != (code **)0x0) {
          ppcVar53 = local_840;
        }
        (**(code **)(*ppcVar53 + 0x10))();
      }
      if (local_11b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_11b8.AllocatorInstance.Data);
      }
      FVar9.Data = local_1628.AllocatorInstance.Data;
      lVar57 = (longlong)local_1628.ArrayNum;
      local_15a8.Data = (FScriptContainerElement *)0x0;
      local_15a0 = CONCAT44(local_15a0._4_4_,local_1628.ArrayNum);
      if (local_1628.ArrayNum == 0) {
        local_15a0 = local_1628._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_1628.ArrayNum,0,&local_15a8,local_1628.ArrayNum,
                   (int *)((longlong)&local_15a0 + 4));
        memcpy(local_15a8.Data,FVar9.Data,lVar57 << 3);
      }
      local_838[0] = (code *)0x0;
      local_810 = (code **)0x0;
      local_1598 = pFVar19;
      local_1590 = uVar63;
      local_810 = FMemory::Malloc(0x28,8);
      FVar9.Data = local_1628.AllocatorInstance.Data;
      ppcVar53 = local_810 + 1;
      *local_810 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_39>,0,1>
                            ::_vftable_;
      *ppcVar53 = (code *)0x0;
      *ppcVar53 = (code *)local_15a8.Data;
      local_15a8.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(local_810 + 2) = (undefined4)local_15a0;
      *(undefined4 *)((longlong)local_810 + 0x14) = local_15a0._4_4_;
      local_15a0 = 0;
      local_810[3] = (code *)local_1598;
      *(uint *)(local_810 + 4) = local_1590;
      lVar57 = (longlong)local_1628.ArrayNum;
      if (ppcVar53 != (code **)0x0) {
        local_838[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_39>,unsigned___int64>
                       ::Call;
      }
      local_1548.Data = (FScriptContainerElement *)0x0;
      local_1540 = CONCAT44(local_1540._4_4_,local_1628.ArrayNum);
      if (local_1628.ArrayNum == 0) {
        local_1540 = local_1628._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_1628.ArrayNum,0,&local_1548,local_1628.ArrayNum,
                   (int *)((longlong)&local_1540 + 4));
        memcpy(local_1548.Data,FVar9.Data,lVar57 << 3);
      }
      local_808[0] = (code *)0x0;
      local_7e0 = (code **)0x0;
      local_1538 = pFVar19;
      local_1530 = uVar63;
      local_7e0 = FMemory::Malloc(0x28,8);
      FVar9.Data = local_1628.AllocatorInstance.Data;
      ppcVar53 = local_7e0 + 1;
      *local_7e0 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_38>,0,1>
                            ::_vftable_;
      *ppcVar53 = (code *)0x0;
      *ppcVar53 = (code *)local_1548.Data;
      local_1548.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(local_7e0 + 2) = (undefined4)local_1540;
      *(undefined4 *)((longlong)local_7e0 + 0x14) = local_1540._4_4_;
      local_1540 = 0;
      local_7e0[3] = (code *)local_1538;
      *(uint *)(local_7e0 + 4) = local_1530;
      lVar57 = (longlong)local_1628.ArrayNum;
      if (ppcVar53 != (code **)0x0) {
        local_808[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_38>,void_const_*>
                       ::Call;
      }
      local_1528.Data = (FScriptContainerElement *)0x0;
      local_1520 = CONCAT44(local_1520._4_4_,local_1628.ArrayNum);
      if (local_1628.ArrayNum == 0) {
        local_1520 = local_1628._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_1628.ArrayNum,0,&local_1528,local_1628.ArrayNum,
                   (int *)((longlong)&local_1520 + 4));
        memcpy(local_1528.Data,FVar9.Data,lVar57 << 3);
      }
      local_7d8[0] = (code *)0x0;
      local_7b0 = (code **)0x0;
      local_1518 = pFVar19;
      local_1510 = uVar63;
      local_7b0 = FMemory::Malloc(0x28,8);
      ppcVar53 = local_7b0 + 1;
      *local_7b0 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_37>,0,1>
                            ::_vftable_;
      *ppcVar53 = (code *)0x0;
      *ppcVar53 = (code *)local_1528.Data;
      local_1528.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(local_7b0 + 2) = (undefined4)local_1520;
      *(undefined4 *)((longlong)local_7b0 + 0x14) = local_1520._4_4_;
      local_1520 = 0;
      local_7b0[3] = (code *)local_1518;
      *(uint *)(local_7b0 + 4) = local_1510;
      if (ppcVar53 != (code **)0x0) {
        local_7d8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_37>,unsigned_int>
                       ::Call;
      }
      pFVar23 = CreateStructuredBuffer
                          (param_1,L"InstanceCullingLoadBalancer.Items",8,
                           (TFunction<unsigned_int___cdecl(void)> *)local_7d8,
                           (TFunction<void_const_*___cdecl(void)> *)local_808,
                           (TFunction<unsigned___int64___cdecl(void)> *)local_838);
      if (local_7d8[0] != (code *)0x0) {
        ppcVar53 = local_7d8 + 2;
        if (local_7b0 != (code **)0x0) {
          ppcVar53 = local_7b0;
        }
        (**(code **)(*ppcVar53 + 0x10))();
      }
      if (local_1528.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1528.Data);
      }
      if (local_808[0] != (code *)0x0) {
        ppcVar53 = local_808 + 2;
        if (local_7e0 != (code **)0x0) {
          ppcVar53 = local_7e0;
        }
        (**(code **)(*ppcVar53 + 0x10))();
      }
      if (local_1548.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1548.Data);
      }
      if (local_838[0] != (code *)0x0) {
        ppcVar53 = local_838 + 2;
        if (local_810 != (code **)0x0) {
          ppcVar53 = local_810;
        }
        (**(code **)(*ppcVar53 + 0x10))();
      }
      if (local_15a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_15a8.Data);
      }
      local_1130._padding_._0_4_ = 0xffffffff;
      local_1130._padding_._4_4_ = 0;
      local_1130._padding_ = 0;
      local_1130.Buffer = local_15b0;
      uVar16 = 0;
      if (((local_15b0->Desc).Usage & DrawIndirect) != None) {
        uVar16 = 0x1c;
      }
      local_1130._padding_._0_4_ =
           CONCAT31((int3)((uint)(undefined4)local_1130._padding_ >> 8),uVar16);
      FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_1130);
      pFVar28 = local_1130.Buffer;
      pFVar40 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
      pFVar40->_padding_ = pFVar28->_padding_;
      pFVar40->_padding_ = 0;
      *(byte *)&pFVar40->_padding_ = (byte)pFVar40->_padding_ & 0xfe;
      *(undefined1 *)&pFVar40->_padding_ = 3;
      *(undefined8 *)((longlong)&pFVar40->_padding_ + 4) = 0xffffffffffffffff;
      pFVar40->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
      (pFVar40->Desc)._padding_ =
           CONCAT44(local_1130._padding_._4_4_,(undefined4)local_1130._padding_);
      (pFVar40->Desc)._padding_ =
           CONCAT44(local_1130._padding_._4_4_,(undefined4)local_1130._padding_);
      (pFVar40->Desc)._padding_ = local_1130._padding_;
      (pFVar40->Desc).Buffer = local_1130.Buffer;
      iVar17 = (param_1->Views).Array.ArrayNum;
      if (iVar17 == (param_1->Views).Array.ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,
                            &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar17 + 1;
      (param_1->Views).Array.AllocatorInstance.Data[iVar17] = (FRDGView *)pFVar40;
      *(int *)((longlong)&pFVar40->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar40);
      iVar17 = 0;
      if ((int)uVar63 < local_1628.ArrayNum) {
        iVar17 = (int)local_15f8;
      }
      if ((iVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
        return pFVar19;
      }
      local_1110._padding_._0_4_ = 0xffffffff;
      *(FRDGBufferSRV **)(*(longlong *)(local_1628.AllocatorInstance.Data + lVar60 * 8) + 0x60) =
           pFVar40;
      local_1110._padding_._4_4_ = 0;
      local_1110._padding_ = 0;
      uVar16 = 0;
      if (((pFVar23->Desc).Usage & DrawIndirect) != None) {
        uVar16 = 0x1c;
      }
      local_1110._padding_._0_4_ =
           CONCAT31((int3)((uint)(undefined4)local_1110._padding_ >> 8),uVar16);
      local_1110.Buffer = pFVar23;
      FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_1110);
      pFVar23 = local_1110.Buffer;
      pFVar40 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
      pFVar40->_padding_ = pFVar23->_padding_;
      pFVar40->_padding_ = 0;
      *(byte *)&pFVar40->_padding_ = (byte)pFVar40->_padding_ & 0xfe;
      *(undefined1 *)&pFVar40->_padding_ = 3;
      *(undefined8 *)((longlong)&pFVar40->_padding_ + 4) = 0xffffffffffffffff;
      pFVar40->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
      (pFVar40->Desc)._padding_ =
           CONCAT44(local_1110._padding_._4_4_,(undefined4)local_1110._padding_);
      (pFVar40->Desc)._padding_ =
           CONCAT44(local_1110._padding_._4_4_,(undefined4)local_1110._padding_);
      (pFVar40->Desc)._padding_ = local_1110._padding_;
      (pFVar40->Desc).Buffer = local_1110.Buffer;
      iVar17 = (param_1->Views).Array.ArrayNum;
      if (iVar17 == (param_1->Views).Array.ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,
                            &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar17 + 1;
      (param_1->Views).Array.AllocatorInstance.Data[iVar17] = (FRDGView *)pFVar40;
      *(int *)((longlong)&pFVar40->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar40);
      iVar17 = 0;
      if ((int)uVar63 < local_1628.ArrayNum) {
        iVar17 = (int)local_15f8;
      }
      if ((iVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
        return pFVar19;
      }
      *(FRDGBufferSRV **)(*(longlong *)(local_1628.AllocatorInstance.Data + lVar60 * 8) + 0x68) =
           pFVar40;
      iVar17 = (int)local_15f8;
      iVar18 = 0;
      if ((int)uVar63 < local_1628.ArrayNum) {
        iVar18 = (int)local_15f8;
      }
      if ((iVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
        return pFVar19;
      }
      *(undefined4 *)(*(longlong *)(local_1628.AllocatorInstance.Data + lVar60 * 8) + 0x78) = 1;
      iVar18 = 0;
      if ((int)uVar63 < local_1628.ArrayNum) {
        iVar18 = iVar17;
      }
      if ((iVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
        return pFVar19;
      }
      pFVar10 = local_1500;
      *(undefined4 *)(*(longlong *)(local_1628.AllocatorInstance.Data + lVar60 * 8) + 0x124) =
           local_15d0._0_4_;
      if ((uVar63 == 0) || (iVar18 = (local_1500->ViewPrevHZBs).ArrayNum, iVar18 < (int)uVar63)) {
LAB_144bb950e:
        iVar18 = 0;
      }
      else {
        uVar58 = 0;
        if ((int)(uVar63 - 1) < iVar18) {
          uVar58 = -uVar63 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
          return pFVar19;
        }
        pFVar41 = FRDGBuilder::RegisterExternalTexture
                            (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                     ((pFVar10->ViewPrevHZBs).AllocatorInstance.Data +
                                     (longlong)(int)(uVar63 - 1) * 8),None);
        if ((pFVar41 == (FRDGTexture *)0x0) || (bVar14 = IsOcclusionCullingEnabled(), !bVar14))
        goto LAB_144bb950e;
        iVar18 = 0;
        if ((int)uVar63 < local_1628.ArrayNum) {
          iVar18 = iVar17;
        }
        if ((iVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
          return pFVar19;
        }
        *(FRDGTexture **)(*(longlong *)(local_1628.AllocatorInstance.Data + lVar60 * 8) + 0x108) =
             pFVar41;
        uVar2 = *(undefined8 *)&(pFVar41->Desc).field_0x24;
        iVar18 = 0;
        if ((int)uVar63 < local_1628.ArrayNum) {
          iVar18 = iVar17;
        }
        local_15c0 = (FGPUScene *)CONCAT44((float)(int)((ulonglong)uVar2 >> 0x20),(float)(int)uVar2)
        ;
        if ((iVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
          return pFVar19;
        }
        *(FGPUScene **)(*(longlong *)(local_1628.AllocatorInstance.Data + lVar60 * 8) + 0x118) =
             local_15c0;
        TVar8 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                ::StaticResource.StateRHI;
        iVar18 = 0;
        if ((int)uVar63 < local_1628.ArrayNum) {
          iVar18 = iVar17;
        }
        if ((iVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
          return pFVar19;
        }
        iVar18 = 8;
        *(FRHISamplerState **)
         (*(longlong *)(local_1628.AllocatorInstance.Data + lVar60 * 8) + 0x110) = TVar8.Reference;
      }
      if ((local_1508 == 0) || (uVar63 == 0)) {
        iVar56 = 0;
      }
      else {
        iVar56 = 2;
      }
      uVar58 = (uint)local_1618;
      pFVar42 = (FShaderType *)FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::GetStaticType();
      FGlobalShaderMap::GetShader
                (local_14f8,&local_1248,pFVar42,
                 uVar58 * 0x40 + (0x25 - (uint)(uVar63 != 0)) + iVar56 + iVar18);
      if (local_1248.ShaderContent == (FShader *)0x0) {
        this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_14f0);
        ::FName::ToString((FName *)this_00,&local_eb8);
        FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::GetStaticType();
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_eb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_eb8.Data.AllocatorInstance.Data);
        }
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
          return pFVar19;
        }
      }
      FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::GetStaticType();
      pFVar11 = local_1248.ShaderContent;
      local_15f8 = (FRDGBuffer *)
                   CONCAT17(local_1248.ShaderMap._7_1_,
                            CONCAT25(local_1248.ShaderMap._5_2_,
                                     CONCAT41(local_1248.ShaderMap._1_4_,local_1248.ShaderMap._0_1_)
                                    ));
      local_1238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
      ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
                (&local_1238,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0
                );
      local_9e8 = (code *)0x0;
      local_9c0 = (longlong *)0x0;
      local_1228 = pFVar19;
      local_1220 = uVar63;
      local_9c0 = FMemory::Malloc(0x28,8);
      plVar54 = local_9c0 + 1;
      *local_9c0 = (longlong)
                   &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_40>,0,1>
                    ::_vftable_;
      *plVar54 = 0;
      *plVar54 = (longlong)local_1238.AllocatorInstance.Data;
      local_1238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_9c0 + 2) = local_1238.ArrayNum;
      *(int *)((longlong)local_9c0 + 0x14) = local_1238.ArrayMax;
      local_1238.ArrayNum = 0;
      local_1238.ArrayMax = 0;
      local_9c0[3] = (longlong)local_1228;
      *(uint *)(local_9c0 + 4) = local_1220;
      if (plVar54 != (longlong *)0x0) {
        local_9e8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_40>,UE::Math::TIntVector3<int>_>
                    ::Call;
      }
      iVar18 = 0;
      if ((int)uVar63 < local_1628.ArrayNum) {
        iVar18 = iVar17;
      }
      if ((iVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        pFVar19 = (FInstanceCullingDeferredContext *)(*pcVar4)();
        return pFVar19;
      }
      local_1608 = local_1608 | 1;
      pFVar3 = *(FParameters **)(local_1628.AllocatorInstance.Data + lVar60 * 8);
      pFVar43 = FRDGEventName::FRDGEventName(&local_c20,L"CullInstances(%s). Bin %d");
      pFVar33 = FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters::FTypeInfo::
                GetStructMetadata();
      local_f28.ShaderContent = pFVar11;
      local_f28.ShaderMap = (FShaderMapBase *)local_15f8;
      ValidateShaderParameters(&local_f28,pFVar33,pFVar3);
      local_ea8._First = (FRDGResource **)0x0;
      local_ea8._Last = (FRDGResource **)0x0;
      ClearUnusedGraphResourcesImpl(&pFVar11->Bindings,pFVar33,pFVar3,&local_ea8);
      local_238.ComputeShader.ShaderMap = (FShaderMapBase *)local_15f8;
      local_238.GroupCount.field0_0x0._0_8_ = local_9e8;
      local_1f0 = local_9c0;
      local_9c0 = (longlong *)0x0;
      local_9e8 = (code *)0x0;
      local_238.ComputeShader.ShaderContent = (FLightGridInjectionCS *)pFVar11;
      local_208 = local_9d8;
      uStack_200 = uStack_9d0;
      local_1f8 = local_9c8;
      local_238.ParametersMetadata = pFVar33;
      local_238.Parameters = pFVar3;
      FRDGBuilder::
      AddPassInternal<void,_FComputeShaderUtils::AddPass<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs>_::__l2::<lambda_1>_>
                (param_1,pFVar43,pFVar33,pFVar3,Compute,&local_238);
      if ((code *)local_238.GroupCount.field0_0x0._0_8_ != (code *)0x0) {
        plVar54 = &local_208;
        if (local_1f0 != (longlong *)0x0) {
          plVar54 = local_1f0;
        }
        (**(code **)(*plVar54 + 0x10))();
      }
      uVar58 = local_1608;
      if (((local_1608 & 2) != 0) && (uVar58 = local_1608 & 0xfffffffd, local_14f0 != (void *)0x0))
      {
        FMemory::Free(local_14f0);
      }
      local_1608 = uVar58 & 0xfffffffe;
      if (local_c20.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_c20.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_9e8 != (code *)0x0) {
        plVar54 = &local_9d8;
        if (local_9c0 != (longlong *)0x0) {
          plVar54 = local_9c0;
        }
        (**(code **)(*plVar54 + 0x10))();
      }
      if (local_1238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1238.AllocatorInstance.Data);
      }
      uVar63 = uVar63 + 1;
      pFVar35 = local_dc8.DrawIndirectArgsBufferOut;
      FVar61.Platform = local_1604[0];
    } while (uVar63 < local_1600[0]);
  }
  if (local_1618 != 0) {
    local_1428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
    ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
              (&local_1428,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
    local_3b8[0] = (code *)0x0;
    local_1418 = pFVar19;
    local_390 = FMemory::Malloc(0x20,8);
    *local_390 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`31'::<lambda_43>,0,1>
                          ::_vftable_;
    ppcVar53 = local_390 + 1;
    *ppcVar53 = (code *)0x0;
    *ppcVar53 = (code *)local_1428.AllocatorInstance.Data;
    local_1428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_390 + 2) = local_1428.ArrayNum;
    *(int *)((longlong)local_390 + 0x14) = local_1428.ArrayMax;
    local_1428.ArrayNum = 0;
    local_1428.ArrayMax = 0;
    local_390[3] = (code *)local_1418;
    if (ppcVar53 != (code **)0x0) {
      local_3b8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_43>,unsigned___int64>
                     ::Call;
    }
    local_1440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
    ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
              (&local_1440,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
    local_3e8[0] = (code *)0x0;
    local_1430 = pFVar19;
    local_3c0 = FMemory::Malloc(0x20,8);
    *local_3c0 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`31'::<lambda_42>,0,1>
                          ::_vftable_;
    ppcVar53 = local_3c0 + 1;
    *ppcVar53 = (code *)0x0;
    *ppcVar53 = (code *)local_1440.AllocatorInstance.Data;
    local_1440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_3c0 + 2) = local_1440.ArrayNum;
    *(int *)((longlong)local_3c0 + 0x14) = local_1440.ArrayMax;
    local_1440.ArrayNum = 0;
    local_1440.ArrayMax = 0;
    local_3c0[3] = (code *)local_1430;
    if (ppcVar53 != (code **)0x0) {
      local_3e8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_42>,void_const_*>
                     ::Call;
    }
    local_1458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
    ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
              (&local_1458,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
    local_418[0] = (code *)0x0;
    local_1448 = pFVar19;
    local_3f0 = FMemory::Malloc(0x20,8);
    *local_3f0 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`31'::<lambda_41>,0,1>
                          ::_vftable_;
    ppcVar53 = local_3f0 + 1;
    *ppcVar53 = (code *)0x0;
    *ppcVar53 = (code *)local_1458.AllocatorInstance.Data;
    local_1458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_3f0 + 2) = local_1458.ArrayNum;
    *(int *)((longlong)local_3f0 + 0x14) = local_1458.ArrayMax;
    local_1458.ArrayNum = 0;
    local_1458.ArrayMax = 0;
    local_3f0[3] = (code *)local_1448;
    if (ppcVar53 != (code **)0x0) {
      local_418[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_41>,unsigned_int>
                     ::Call;
    }
    pFVar23 = CreateStructuredBuffer
                        (param_1,L"InstanceCulling.Compaction.BlockDestInstanceOffsets",4,
                         (TFunction<unsigned_int___cdecl(void)> *)local_418,
                         (TFunction<void_const_*___cdecl(void)> *)local_3e8,
                         (TFunction<unsigned___int64___cdecl(void)> *)local_3b8);
    if (local_418[0] != (code *)0x0) {
      ppcVar53 = local_418 + 2;
      if (local_3f0 != (code **)0x0) {
        ppcVar53 = local_3f0;
      }
      (**(code **)(*ppcVar53 + 0x10))();
    }
    if (local_1458.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1458.AllocatorInstance.Data);
    }
    if (local_3e8[0] != (code *)0x0) {
      ppcVar53 = local_3e8 + 2;
      if (local_3c0 != (code **)0x0) {
        ppcVar53 = local_3c0;
      }
      (**(code **)(*ppcVar53 + 0x10))();
    }
    if (local_1440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1440.AllocatorInstance.Data);
    }
    if (local_3b8[0] != (code *)0x0) {
      ppcVar53 = local_3b8 + 2;
      if (local_390 != (code **)0x0) {
        ppcVar53 = local_390;
      }
      (**(code **)(*ppcVar53 + 0x10))();
    }
    if (local_1428.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1428.AllocatorInstance.Data);
    }
    pFVar44 = (FParameters *)
              FRDGBuilder::AllocParameters<FCalculateCompactBlockInstanceOffsetsCs::FParameters>
                        (param_1);
    local_1000._padding_._4_4_ = 0;
    local_1000._padding_._0_4_ = 0xffffffff;
    local_1000._padding_ = 0;
    pFVar44->RWRadianceProbeIndirectionTexture = local_15c8;
    local_1000.Buffer = local_1198;
    local_1000._padding_._0_1_ = 0;
    if (((local_1198->Desc).Usage & DrawIndirect) != None) {
      local_1000._padding_._0_1_ = 0x1c;
    }
    pFVar40 = FRDGBuilder::CreateSRV(param_1,&local_1000);
    pFVar44->RWProbeLastTracedFrame = (FRDGBufferUAV *)pFVar40;
    local_1170._padding_._2_1_ = 0;
    bVar15 = 0;
    if (((pFVar23->Desc).Usage & DrawIndirect) != None) {
      bVar15 = 0x1c;
    }
    local_1170._padding_._0_2_ = (ushort)bVar15;
    local_1170.Buffer = pFVar23;
    pFVar27 = FRDGBuilder::CreateUAV(param_1,&local_1170,None);
    pFVar44->RWPriorityHistogram = pFVar27;
    pFVar44->RWMinNewProbeTraceCost = pFVar35;
    FGlobalShaderMap::GetShader<FCalculateCompactBlockInstanceOffsetsCs>(local_14f8,&local_e98);
    local_960 = (undefined ***)0x0;
    local_978 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`32'::<lambda_44>,0,0>
                 ::_vftable_;
    local_988 = UE::Core::Private::Function::
                TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l32::<lambda_44>,UE::Math::TIntVector3<int>_>
                ::Call;
    pFStack_970 = pFVar19;
    pFVar43 = FRDGEventName::FRDGEventName(&local_c38,1,L"Instance Compaction Phase 1");
    pFVar33 = FCalculateCompactBlockInstanceOffsetsCs::FParameters::FTypeInfo::GetStructMetadata();
    local_e88.ShaderContent = (FShader *)local_e98.ShaderContent;
    local_e88.ShaderMap = local_e98.ShaderMap;
    ValidateShaderParameters(&local_e88,pFVar33,pFVar44);
    local_e78._First = (FRDGResource **)0x0;
    local_e78._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl
              ((FShaderParameterBindings *)local_e98.ShaderContent,pFVar33,pFVar44,&local_e78);
    local_1e8.GroupCount.field0_0x0._0_8_ = local_988;
    local_1a0 = local_960;
    local_1e8.ComputeShader.ShaderContent = (FAllocateUsedProbesCS *)local_e98.ShaderContent;
    local_1e8.ComputeShader.ShaderMap = local_e98.ShaderMap;
    local_1b8 = local_978;
    pFStack_1b0 = pFStack_970;
    local_1a8 = local_968;
    local_988 = (code *)0x0;
    local_1e8.ParametersMetadata = pFVar33;
    local_1e8.Parameters = pFVar44;
    FRDGBuilder::
    AddPassInternal<void,_FComputeShaderUtils::AddPass<FCalculateCompactBlockInstanceOffsetsCs>_::__l2::<lambda_1>_>
              (param_1,pFVar43,pFVar33,pFVar44,Compute,&local_1e8);
    if ((code *)local_1e8.GroupCount.field0_0x0._0_8_ != (code *)0x0) {
      pppuVar55 = &local_1b8;
      if (local_1a0 != (undefined ***)0x0) {
        pppuVar55 = local_1a0;
      }
      (*(code *)(*pppuVar55)[2])();
    }
    uVar63 = local_1608;
    local_1608 = local_1608 & 0xfffffff7;
    if (local_c38.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_c38.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (((uVar63 & 4) != 0) && (local_1608 = uVar63 & 0xfffffff3, local_14f0 != (void *)0x0)) {
      FMemory::Free(local_14f0);
    }
    if (local_988 != (code *)0x0) {
      pppuVar55 = &local_978;
      if (local_960 != (undefined ***)0x0) {
        pppuVar55 = local_960;
      }
      (*(code *)(*pppuVar55)[2])();
    }
    local_13e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
    ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
              (&local_13e0,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
    local_328[0] = (code *)0x0;
    local_13d0 = pFVar19;
    local_300 = FMemory::Malloc(0x20,8);
    *local_300 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`33'::<lambda_47>,0,1>
                          ::_vftable_;
    ppcVar53 = local_300 + 1;
    *ppcVar53 = (code *)0x0;
    *ppcVar53 = (code *)local_13e0.AllocatorInstance.Data;
    local_13e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_300 + 2) = local_13e0.ArrayNum;
    *(int *)((longlong)local_300 + 0x14) = local_13e0.ArrayMax;
    local_13e0.ArrayNum = 0;
    local_13e0.ArrayMax = 0;
    local_300[3] = (code *)local_13d0;
    if (ppcVar53 != (code **)0x0) {
      local_328[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_47>,unsigned___int64>
                     ::Call;
    }
    local_13f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
    ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
              (&local_13f8,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
    local_358[0] = (code *)0x0;
    local_13e8 = pFVar19;
    local_330 = FMemory::Malloc(0x20,8);
    *local_330 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`33'::<lambda_46>,0,1>
                          ::_vftable_;
    ppcVar53 = local_330 + 1;
    *ppcVar53 = (code *)0x0;
    *ppcVar53 = (code *)local_13f8.AllocatorInstance.Data;
    local_13f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_330 + 2) = local_13f8.ArrayNum;
    *(int *)((longlong)local_330 + 0x14) = local_13f8.ArrayMax;
    local_13f8.ArrayNum = 0;
    local_13f8.ArrayMax = 0;
    local_330[3] = (code *)local_13e8;
    if (ppcVar53 != (code **)0x0) {
      local_358[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_46>,void_const_*>
                     ::Call;
    }
    local_1410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
    ::CopyToEmpty<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,int>
              (&local_1410,(FParameters **)local_1628.AllocatorInstance.Data,local_1628.ArrayNum,0);
    local_388[0] = (code *)0x0;
    local_1400 = pFVar19;
    local_360 = FMemory::Malloc(0x20,8);
    *local_360 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`33'::<lambda_45>,0,1>
                          ::_vftable_;
    ppcVar53 = local_360 + 1;
    *ppcVar53 = (code *)0x0;
    *ppcVar53 = (code *)local_1410.AllocatorInstance.Data;
    local_1410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_360 + 2) = local_1410.ArrayNum;
    *(int *)((longlong)local_360 + 0x14) = local_1410.ArrayMax;
    local_1410.ArrayNum = 0;
    local_1410.ArrayMax = 0;
    local_360[3] = (code *)local_1400;
    if (ppcVar53 != (code **)0x0) {
      local_388[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_45>,unsigned_int>
                     ::Call;
    }
    pFVar28 = CreateStructuredBuffer
                        (param_1,L"InstanceCulling.CompactionBlockDataIndices",4,
                         (TFunction<unsigned_int___cdecl(void)> *)local_388,
                         (TFunction<void_const_*___cdecl(void)> *)local_358,
                         (TFunction<unsigned___int64___cdecl(void)> *)local_328);
    if (local_388[0] != (code *)0x0) {
      ppcVar53 = local_388 + 2;
      if (local_360 != (code **)0x0) {
        ppcVar53 = local_360;
      }
      (**(code **)(*ppcVar53 + 0x10))();
    }
    if (local_1410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1410.AllocatorInstance.Data);
    }
    if (local_358[0] != (code *)0x0) {
      ppcVar53 = local_358 + 2;
      if (local_330 != (code **)0x0) {
        ppcVar53 = local_330;
      }
      (**(code **)(*ppcVar53 + 0x10))();
    }
    if (local_13f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13f8.AllocatorInstance.Data);
    }
    if (local_328[0] != (code *)0x0) {
      ppcVar53 = local_328 + 2;
      if (local_300 != (code **)0x0) {
        ppcVar53 = local_300;
      }
      (**(code **)(*ppcVar53 + 0x10))();
    }
    if (local_13e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13e0.AllocatorInstance.Data);
    }
    pFVar45 = FRDGBuilder::AllocParameters<FCompactVisibleInstancesCs::FParameters>(param_1);
    local_10c0._padding_._4_4_ = 0;
    local_10c0._padding_._0_4_ = 0xffffffff;
    pFVar45->DrawCommandCompactionData = (FRDGBufferSRV *)local_15c8;
    local_10c0._padding_ = 0;
    local_10c0._padding_._0_1_ = 0;
    if (((pFVar28->Desc).Usage & DrawIndirect) != None) {
      local_10c0._padding_._0_1_ = 0x1c;
    }
    local_10c0.Buffer = pFVar28;
    pFVar40 = FRDGBuilder::CreateSRV(param_1,&local_10c0);
    pFVar45->BlockDrawCommandIndices = pFVar40;
    local_fe0._padding_._0_1_ = 0;
    local_fe0.Buffer = local_1190;
    local_fe0._padding_._4_4_ = 0;
    local_fe0._padding_._0_4_ = 0xffffffff;
    local_fe0._padding_ = 0;
    if (((local_1190->Desc).Usage & DrawIndirect) != None) {
      local_fe0._padding_._0_1_ = 0x1c;
    }
    pFVar40 = FRDGBuilder::CreateSRV(param_1,&local_fe0);
    pFVar45->InstanceIdsBufferIn = pFVar40;
    local_fc0._padding_._4_4_ = 0;
    local_fc0._padding_._0_1_ = 0;
    local_fc0._padding_._0_4_ = 0xffffffff;
    local_fc0._padding_ = 0;
    if (((pFVar23->Desc).Usage & DrawIndirect) != None) {
      local_fc0._padding_._0_1_ = 0x1c;
    }
    local_fc0.Buffer = pFVar23;
    pFVar40 = FRDGBuilder::CreateSRV(param_1,&local_fc0);
    pFVar45->BlockDestInstanceOffsets = pFVar40;
    pFVar45->InstanceIdsBufferOut = local_1188;
    pFVar45->InstanceIdsBufferOutMobile = local_1188;
    FGlobalShaderMap::GetShader<FCompactVisibleInstancesCs>(local_14f8,&local_e68);
    local_990 = (undefined ***)0x0;
    local_9a8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`33'::<lambda_48>,0,0>
                 ::_vftable_;
    local_9b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_48>,UE::Math::TIntVector3<int>_>
                ::Call;
    pFStack_9a0 = pFVar45;
    local_998 = pFVar19;
    pFVar43 = FRDGEventName::FRDGEventName(&local_c50,1,L"Instance Compaction Phase 2");
    pFVar33 = FCompactVisibleInstancesCs::FParameters::FTypeInfo::GetStructMetadata();
    local_e58.ShaderContent = (FShader *)local_e68.ShaderContent;
    local_e58.ShaderMap = local_e68.ShaderMap;
    ValidateShaderParameters(&local_e58,pFVar33,pFVar45);
    local_e48._First = (FRDGResource **)0x0;
    local_e48._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl
              ((FShaderParameterBindings *)local_e68.ShaderContent,pFVar33,pFVar45,&local_e48);
    local_198.GroupCount.field0_0x0._0_8_ = local_9b8;
    local_150 = local_990;
    local_198.ComputeShader.ShaderContent = (FClearProbeFreeList *)local_e68.ShaderContent;
    local_198.ComputeShader.ShaderMap = local_e68.ShaderMap;
    local_168 = local_9a8;
    pFStack_160 = pFStack_9a0;
    local_158 = local_998;
    local_9b8 = (code *)0x0;
    local_198.ParametersMetadata = pFVar33;
    local_198.Parameters = (FParameters *)pFVar45;
    FRDGBuilder::
    AddPassInternal<void,_FComputeShaderUtils::AddPass<FCompactVisibleInstancesCs>_::__l2::<lambda_1>_>
              (param_1,pFVar43,pFVar33,pFVar45,Compute,&local_198);
    if ((code *)local_198.GroupCount.field0_0x0._0_8_ != (code *)0x0) {
      pppuVar55 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar55 = local_150;
      }
      (*(code *)(*pppuVar55)[2])();
    }
    if (local_c50.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_c50.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (((local_1608 & 0x10) != 0) && (local_14f0 != (void *)0x0)) {
      FMemory::Free(local_14f0);
    }
    if (local_9b8 != (code *)0x0) {
      pppuVar55 = &local_9a8;
      if (local_990 != (undefined ***)0x0) {
        pppuVar55 = local_990;
      }
      (*(code *)(*pppuVar55)[2])();
    }
  }
  bVar14 = PlatformGPUSceneUsesUniformBufferView(FVar61);
  if (bVar14) {
    pFVar46 = FRDGBuilder::AllocParameters<FBatchedPrimitiveParameters>(param_1);
    local_fa0._padding_._4_4_ = 0;
    local_fa0._padding_._0_4_ = 0xffffffff;
    local_fa0._padding_ = 0;
    local_fa0.Buffer = local_15b8;
    local_fa0._padding_._0_1_ = 0;
    if (((local_15b8->Desc).Usage & DrawIndirect) != None) {
      local_fa0._padding_._0_1_ = 0x1c;
    }
    pFVar40 = FRDGBuilder::CreateSRV(param_1,&local_fa0);
    pFVar46->Data = pFVar40;
    pTVar47 = FRDGBuilder::CreateUniformBuffer<FBatchedPrimitiveParameters>(param_1,pFVar46);
    pFVar19->BatchedPrimitive = pTVar47;
  }
  else {
    pFVar48 = FRDGBuilder::AllocParameters<FInstanceCullingGlobalUniforms>(param_1);
    local_f60.Buffer = local_15b8;
    local_f80._padding_._4_4_ = 0;
    local_f80._padding_._0_4_ = 0xffffffff;
    local_f80._padding_ = 0;
    local_f80.Buffer = local_15b8;
    local_f80._padding_._0_1_ = 0;
    if (((local_15b8->Desc).Usage & DrawIndirect) != None) {
      local_f80._padding_._0_1_ = 0x1c;
    }
    pFVar40 = FRDGBuilder::CreateSRV(param_1,&local_f80);
    pFVar48->InstanceIdsBuffer = pFVar40;
    local_f60._padding_._4_4_ = 0;
    local_f60._padding_._0_1_ = 0;
    local_f60._padding_._0_4_ = 0xffffffff;
    local_f60._padding_ = 0;
    if ((((local_f60.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_f60._padding_._0_1_ = 0x1c;
    }
    pFVar40 = FRDGBuilder::CreateSRV(param_1,&local_f60);
    pFVar48->PageInfoBuffer = pFVar40;
    pFVar48->BufferCapacity = 0;
    pTVar49 = FRDGBuilder::CreateUniformBuffer<FInstanceCullingGlobalUniforms>(param_1,pFVar48);
    pFVar19->UniformBuffer = pTVar49;
  }
  if ((FMeshDrawCommandStatsManager::Instance != (FMeshDrawCommandStatsManager *)0x0) &&
     (FMeshDrawCommandStatsManager::Instance->bCollectStats != false)) {
    pFVar50 = FMeshDrawCommandStatsManager::QueueDrawRDGIndirectArgsReadback
                        (FMeshDrawCommandStatsManager::Instance,param_1,
                         pFVar19->DrawIndirectArgsBuffer);
    pFVar19->MeshDrawCommandStatsIndirectArgsReadbackBuffer = pFVar50;
  }
  if (local_1628.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1628.AllocatorInstance.Data);
  }
  if (local_10c8 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_10d8);
  }
  return pFVar19;
}

// CreateDummyInstanceCullingUniformBuffer @ 144bba760

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGUniformBuffer<FInstanceCullingGlobalUniforms> * __cdecl
FInstanceCullingContext::CreateDummyInstanceCullingUniformBuffer(FRDGBuilder *param_1)

{
  FInstanceCullingGlobalUniforms *pFVar1;
  FRDGBuffer *pFVar2;
  FRDGBufferSRV *pFVar3;
  TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *pTVar4;
  FRDGBufferSRVDesc local_28;
  
  pFVar1 = FRDGBuilder::AllocParameters<FInstanceCullingGlobalUniforms>(param_1);
  pFVar2 = FSystemTextures::GetDefaultStructuredBuffer
                     ((FSystemTextures *)&GSystemTextures,param_1,4);
  local_28._padding_._0_4_ = 0xffffffff;
  local_28._padding_._4_4_ = 0;
  local_28._padding_ = 0;
  local_28._padding_._0_1_ = 0;
  if (((pFVar2->Desc).Usage & DrawIndirect) != None) {
    local_28._padding_._0_1_ = 0x1c;
  }
  local_28.Buffer = pFVar2;
  pFVar3 = FRDGBuilder::CreateSRV(param_1,&local_28);
  pFVar1->InstanceIdsBuffer = pFVar3;
  local_28._padding_._4_4_ = 0;
  local_28._padding_._0_1_ = 0;
  local_28._padding_._0_4_ = 0xffffffff;
  local_28._padding_ = 0;
  if (((pFVar2->Desc).Usage & DrawIndirect) != None) {
    local_28._padding_._0_1_ = 0x1c;
  }
  local_28.Buffer = pFVar2;
  pFVar3 = FRDGBuilder::CreateSRV(param_1,&local_28);
  pFVar1->PageInfoBuffer = pFVar3;
  pFVar1->BufferCapacity = 0;
  pTVar4 = FRDGBuilder::CreateUniformBuffer<FInstanceCullingGlobalUniforms>(param_1,pFVar1);
  return pTVar4;
}

// GetInstanceIdBufferStride @ 144bc5f80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl FInstanceCullingContext::GetInstanceIdBufferStride(EShaderPlatform param_1)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)param_1);
  uVar2 = 4;
  if (bVar1) {
    uVar2 = 0x200;
  }
  return uVar2;
}

// GetInstanceIdNumElements @ 144bc5fb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall FInstanceCullingContext::GetInstanceIdNumElements(FInstanceCullingContext *this)

{
  if (this->bUsesUniformBufferView != false) {
    return ((*(uint *)&(this->LoadBalancers).Elements[1]->field_0x18 & 0x7fffff) * 0x20 +
           (*(uint *)&(this->LoadBalancers).Elements[0]->field_0x18 & 0xffffff) * 0x10) *
           (this->ViewIds).ArrayNum;
  }
  return this->TotalInstances * (this->ViewIds).ArrayNum;
}

// GetStaticUniformBufferSlot @ 144bccef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uchar __cdecl FInstanceCullingContext::GetStaticUniformBufferSlot(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  uint uVar4;
  FUniformBufferStaticSlotRegistry *pFVar5;
  int iVar6;
  int *piVar7;
  FName FVar8;
  uint uVar9;
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar7 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&InstanceCullingSlotName,"InstanceCullingUbSlot");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar7 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FName::FName(&BatchedPrimitiveSlotName,"BatchedPrimitive");
      _Init_thread_footer(&::_TSS1);
    }
  }
  pFVar5 = FUniformBufferStaticSlotRegistry::Get();
  bVar2 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)param_1);
  iVar6 = (pFVar5->SlotNames).ArrayNum;
  FVar8 = InstanceCullingSlotName;
  if (bVar2) {
    FVar8 = BatchedPrimitiveSlotName;
  }
  uVar9 = 0;
  if (0 < iVar6) {
    do {
      uVar4 = 0;
      if ((int)uVar9 < iVar6) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
      }
      if (*(FName *)((pFVar5->SlotNames).AllocatorInstance.Data + (longlong)(int)uVar9 * 8) == FVar8
         ) {
        return (uchar)uVar9;
      }
      iVar6 = (pFVar5->SlotNames).ArrayNum;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar6);
  }
  return 0xff;
}

// HasCullingCommands @ 144bd0260

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FInstanceCullingContext::HasCullingCommands(FInstanceCullingContext *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)&this->SyncPrerequisitesFunc != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SyncPrerequisitesFunc",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                       ,0x2b7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return this->TotalInstances != 0;
}

// IsGPUCullingEnabled @ 144bd2570

bool __cdecl FInstanceCullingContext::IsGPUCullingEnabled(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarCullInstances.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

// IsInstanceOrderPreservationEnabled @ 144bd25c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FInstanceCullingContext::IsInstanceOrderPreservationEnabled(FInstanceCullingContext *this)

{
  bool bVar1;
  
  if (GInstanceCullingAllowOrderPreservation != 0) {
    bVar1 = IsMobilePlatform((FStaticShaderPlatform)this->ShaderPlatform);
    if ((!bVar1) && ((this->Flags & NoInstanceOrderPreservation) == None)) {
      return true;
    }
  }
  return false;
}

// IsOcclusionCullingEnabled @ 144bd2600

bool __cdecl FInstanceCullingContext::IsOcclusionCullingEnabled(void)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  pTVar1 = CVarCullInstances.Ref;
  bVar3 = IsInParallelGameThread();
  lVar5 = 4;
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  pTVar2 = CVarOcclusionCullInstances.Ref;
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) == 0) {
    return false;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar5 = 0;
  }
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) == 0) {
    return false;
  }
  return true;
}

// ResetCommands @ 144be01b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FInstanceCullingContext::ResetCommands(FInstanceCullingContext *this,int param_1)

{
  int *piVar1;
  
  if (-1 < param_1) {
    piVar1 = &(this->IndirectArgs).ArrayMax;
    (this->IndirectArgs).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_>
                (0x14,4,param_1,&(this->IndirectArgs).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->MeshDrawCommandInfos).ArrayMax;
    (this->MeshDrawCommandInfos).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo>_>
                (0xc,4,param_1,&(this->MeshDrawCommandInfos).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->DrawCommandDescs).ArrayMax;
    (this->DrawCommandDescs).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_>
                (8,4,param_1,&(this->DrawCommandDescs).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->InstanceIdOffsets).ArrayMax;
    (this->InstanceIdOffsets).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                (4,4,param_1,&(this->InstanceIdOffsets).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->PayloadData).ArrayMax;
    (this->PayloadData).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_>
                (0x10,4,param_1,&(this->PayloadData).AllocatorInstance,0,piVar1);
    }
    this->TotalInstances = 0;
    piVar1 = &(this->DrawCommandCompactionData).ArrayMax;
    (this->DrawCommandCompactionData).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FCompactionData>_>
                (0x14,4,param_1,&(this->DrawCommandCompactionData).AllocatorInstance,0,piVar1);
    }
    (this->CompactionBlockDataIndices).ArrayNum = 0;
    if ((this->CompactionBlockDataIndices).ArrayMax < 0) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                (4,4,0,&(this->CompactionBlockDataIndices).AllocatorInstance,0,
                 &(this->CompactionBlockDataIndices).ArrayMax);
    }
    this->NumCompactionInstances = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// SetDeferredContextCullingParams @ 144be1240

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FInstanceCullingContext::SetDeferredContextCullingParams
          (FInstanceCullingDeferredContext *param_1,FInstanceCullingDrawParams *param_2)

{
  TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *pTVar1;
  TRDGUniformBuffer<FBatchedPrimitiveParameters> *pTVar2;
  EUniformBufferBindingFlags EVar3;
  FShaderParametersMetadata *pFVar4;
  uint uStack_10;
  undefined4 uStack_c;
  
  *(FRDGBuffer **)&param_2->DrawIndirectArgsBuffer = param_1->DrawIndirectArgsBuffer;
  *(ulonglong *)&(param_2->DrawIndirectArgsBuffer).field_0x8 = CONCAT44(uStack_c,4);
  *(FRDGBuffer **)&param_2->InstanceIdOffsetBuffer = param_1->InstanceDataBuffer;
  *(ulonglong *)&(param_2->InstanceIdOffsetBuffer).field_0x8 = CONCAT44(uStack_c,8);
  pTVar1 = param_1->UniformBuffer;
  pFVar4 = FInstanceCullingGlobalUniforms::GetStructMetadata();
  EVar3 = Static;
  if (pFVar4->BindingFlags != StaticAndShader) {
    EVar3 = pFVar4->BindingFlags;
  }
  uStack_10 = (uint)EVar3;
  *(TRDGUniformBuffer<FInstanceCullingGlobalUniforms> **)&param_2->InstanceCulling = pTVar1;
  *(ulonglong *)&(param_2->InstanceCulling).field_0x8 = CONCAT44(uStack_c,uStack_10);
  pTVar2 = param_1->BatchedPrimitive;
  pFVar4 = FBatchedPrimitiveParameters::GetStructMetadata();
  EVar3 = Static;
  if (pFVar4->BindingFlags != StaticAndShader) {
    EVar3 = pFVar4->BindingFlags;
  }
  uStack_10 = (uint)EVar3;
  *(TRDGUniformBuffer<FBatchedPrimitiveParameters> **)&param_2->BatchedPrimitive = pTVar2;
  *(ulonglong *)&(param_2->BatchedPrimitive).field_0x8 = CONCAT44(uStack_c,uStack_10);
  return;
}

// SetDynamicPrimitiveInstanceOffsets @ 144be1530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstanceCullingContext::SetDynamicPrimitiveInstanceOffsets
          (FInstanceCullingContext *this,int param_1,int param_2)

{
  this->DynamicInstanceIdOffset = param_1;
  this->DynamicInstanceIdNum = param_2;
  return;
}

// SetupDrawCommands @ 144be1bd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FInstanceCullingContext::SetupDrawCommands
          (FInstanceCullingContext *this,
          TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1,bool param_2,FScene *param_3,int *param_4,int *param_5,int *param_6)

{
  undefined1 *puVar1;
  TArray<UE::Math::TIntVector2<unsigned_int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  int *piVar3;
  FCompactionData *pFVar4;
  FMeshDrawCommandPrimitiveIdInfo *pFVar5;
  FMeshDrawCommandPrimitiveIdInfo *pFVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  FMeshDrawCommand *pFVar10;
  FMeshDrawCommandInfo *pFVar11;
  FRHIDrawIndexedIndirectParameters *pFVar12;
  TIntVector2<unsigned_int>_u_0 *pTVar13;
  uint *puVar14;
  code *pcVar15;
  FMeshDrawCommandSortKey_u_0 FVar16;
  undefined8 uVar17;
  TIntVector2<unsigned_int> TVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  FVisibleMeshDrawCommand *pFVar24;
  FVisibleMeshDrawCommand *pFVar25;
  undefined1 uVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  FName *pFVar34;
  FThreadSafeStaticStat<_public:_void___cdecl_FInstanceCullingContext::SetupDrawCommands(TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,bool,FScene_const_*,int_&,int_&,int_&)_::_2_::FStat_STAT_BuildMeshDrawCommandPrimitiveIdBuffer>
  FVar35;
  FThreadSafeStaticStat<_public:_void___cdecl_FInstanceCullingContext::SetupDrawCommands(TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,bool,FScene_const_*,int_&,int_&,int_&)_::_2_::FStat_STAT_DynamicInstancingOfVisibleMeshDrawCommands>
  FVar36;
  FInstanceProcessingGPULoadBalancer *pFVar37;
  longlong lVar38;
  byte bVar39;
  EInstanceFlags EVar40;
  uint uVar41;
  uint uVar42;
  FMeshDrawCommandCullingPayload_u_0 FVar43;
  FName FVar44;
  uint uVar45;
  uint uVar46;
  int *piVar47;
  ulonglong uVar48;
  EInstanceFlags EVar49;
  FVisibleMeshDrawCommand *pFVar50;
  FName FVar51;
  TArray<FInstanceCullingContext::FMeshDrawCommandInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar52;
  char cVar53;
  uint uVar54;
  TStaticArray<FInstanceProcessingGPULoadBalancer_*,2,4294967295> *pTVar55;
  bool bVar56;
  byte local_113;
  uint local_110;
  uint local_108;
  uint local_100;
  int local_f4;
  TIntVector2<unsigned_int>_u_0 local_f0;
  FVisibleMeshDrawCommand *local_e8;
  FColor_u_0 local_e0;
  FColor_u_0 local_dc;
  EBatchProcessingMode local_d8;
  uint local_d4;
  FVisibleMeshDrawCommand *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  longlong local_98;
  FName local_90;
  FName local_88;
  FName local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  piVar47 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar47 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_BuildMeshDrawCommandPrimitiveIdBuffer ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FInstanceCullingContext::SetupDrawCommands(TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,bool,FScene_const_*,int_&,int_&,int_&)_::_2_::FStat_STAT_BuildMeshDrawCommandPrimitiveIdBuffer>
         )0x0) {
      pFVar34 = ::FName::FName(&local_68,"STAT_BuildMeshDrawCommandPrimitiveIdBuffer");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BuildMeshDrawCommandPrimitiveIdBuffer,
                 *pFVar34,L"STAT_BuildMeshDrawCommandPrimitiveIdBuffer","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar35 = StatPtr_STAT_BuildMeshDrawCommandPrimitiveIdBuffer;
  if (StatPtr_STAT_BuildMeshDrawCommandPrimitiveIdBuffer ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FInstanceCullingContext::SetupDrawCommands(TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,bool,FScene_const_*,int_&,int_&,int_&)_::_2_::FStat_STAT_BuildMeshDrawCommandPrimitiveIdBuffer>
       )0x0) {
    pFVar34 = ::FName::FName(&local_60,"STAT_BuildMeshDrawCommandPrimitiveIdBuffer");
    FVar35 = (FThreadSafeStaticStat<_public:_void___cdecl_FInstanceCullingContext::SetupDrawCommands(TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,bool,FScene_const_*,int_&,int_&,int_&)_::_2_::FStat_STAT_BuildMeshDrawCommandPrimitiveIdBuffer>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_BuildMeshDrawCommandPrimitiveIdBuffer,*pFVar34,
                          L"STAT_BuildMeshDrawCommandPrimitiveIdBuffer","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar51 = *(FName *)FVar35;
  bVar19 = false;
  bVar23 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  bVar27 = false;
  bVar21 = false;
  if ((FVar51.ComparisonIndex.Value.Value == 0) && (FVar51.Number == 0)) {
LAB_144be1d7d:
    bVar23 = bVar21;
    bVar19 = bVar27;
    bVar27 = false;
    local_b0 = local_88;
    FVar51 = local_88;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e0._s_0,(char *)*(FName *)((longlong)FVar35 + 0x10));
      bVar19 = false;
      bVar23 = true;
      bVar27 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar51.ComparisonIndex.Value.Value;
        local_a8.Number = FVar51.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar35 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                   ,0x5ab);
        bVar19 = true;
        bVar23 = true;
        bVar27 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144be1d7d;
    local_b0 = FVar51;
    FThreadStats::AddMessage(FVar51,CycleScopeStart);
    bVar27 = true;
  }
  local_d0 = (param_1->AllocatorInstance).Data;
  iVar32 = (this->ViewIds).ArrayNum;
  if ((1 < iVar32) && ((iVar32 != 2 || (this->InstanceCullingMode != Stereo)))) {
    this->SingleInstanceProcessingMode = Generic;
  }
  if ((*piVar47 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_DynamicInstancingOfVisibleMeshDrawCommands ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FInstanceCullingContext::SetupDrawCommands(TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,bool,FScene_const_*,int_&,int_&,int_&)_::_2_::FStat_STAT_DynamicInstancingOfVisibleMeshDrawCommands>
         )0x0) {
      pFVar34 = ::FName::FName(&local_58,"STAT_DynamicInstancingOfVisibleMeshDrawCommands");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_DynamicInstancingOfVisibleMeshDrawCommands,*pFVar34,
                 L"STAT_DynamicInstancingOfVisibleMeshDrawCommands","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    else {
      _Init_thread_footer(&::_TSS1);
    }
  }
  FVar36 = StatPtr_STAT_DynamicInstancingOfVisibleMeshDrawCommands;
  if (StatPtr_STAT_DynamicInstancingOfVisibleMeshDrawCommands ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FInstanceCullingContext::SetupDrawCommands(TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,bool,FScene_const_*,int_&,int_&,int_&)_::_2_::FStat_STAT_DynamicInstancingOfVisibleMeshDrawCommands>
       )0x0) {
    pFVar34 = ::FName::FName(local_50,"STAT_DynamicInstancingOfVisibleMeshDrawCommands");
    FVar36 = (FThreadSafeStaticStat<_public:_void___cdecl_FInstanceCullingContext::SetupDrawCommands(TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,bool,FScene_const_*,int_&,int_&,int_&)_::_2_::FStat_STAT_DynamicInstancingOfVisibleMeshDrawCommands>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_DynamicInstancingOfVisibleMeshDrawCommands,*pFVar34,
                          L"STAT_DynamicInstancingOfVisibleMeshDrawCommands","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar44 = *(FName *)FVar36;
  bVar22 = false;
  bVar21 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  bVar29 = false;
  bVar28 = false;
  if ((FVar44.ComparisonIndex.Value.Value != 0) || (FVar44.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_dc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_dc._s_0,(char *)*(FName *)((longlong)FVar36 + 0x10));
      bVar22 = false;
      bVar21 = true;
      bVar29 = false;
      bVar28 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar44.ComparisonIndex.Value.Value;
        local_a0.Number = FVar44.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar36 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                   ,0x5b8);
        bVar22 = true;
        bVar21 = true;
        bVar29 = true;
        bVar28 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar44;
      FThreadStats::AddMessage(FVar44,CycleScopeStart);
      bVar28 = true;
      goto LAB_144be1f30;
    }
  }
  bVar22 = bVar29;
  bVar21 = bVar28;
  bVar28 = false;
  local_90 = local_78;
  FVar44 = local_78;
LAB_144be1f30:
  ResetCommands(this,param_1->ArrayNum);
  pTVar55 = &this->LoadBalancers;
  do {
    if (pTVar55 ==
        (TStaticArray<FInstanceProcessingGPULoadBalancer_*,2,4294967295> *)
        &this->SingleInstanceProcessingMode) {
      local_108 = 1;
      local_113 = 0;
      local_f4 = -1;
      *param_4 = 1;
      uVar46 = (this->ViewIds).ArrayNum;
      uVar31 = param_1->ArrayNum;
      local_d8 = this->SingleInstanceProcessingMode;
      local_100 = 0;
      local_110 = 0;
      local_d4 = uVar31;
      if (((GInstanceCullingAllowOrderPreservation == 0) ||
          (bVar29 = IsMobilePlatform((FStaticShaderPlatform)this->ShaderPlatform), bVar29)) ||
         (bVar29 = true, (this->Flags & NoInstanceOrderPreservation) != None)) {
        bVar29 = false;
      }
      bVar56 = this->bUsesUniformBufferView == false;
      uVar41 = 0x40;
      if (bVar56) {
        uVar41 = 0xffffffff;
      }
      local_b8 = 0x20;
      if (bVar56) {
        local_b8 = 0xffffffff;
      }
      uVar42 = 0;
      if (0 < (int)uVar31) {
        local_c8 = 0;
        local_98 = 0;
        local_c0 = 0;
        do {
          pTVar52 = &this->MeshDrawCommandInfos;
          uVar31 = (uint)local_b8;
          pFVar10 = local_d0[local_c8].MeshDrawCommand;
          pFVar50 = local_d0 + local_c8;
          bVar39 = local_d0[local_c8].Flags & 0x20;
          local_e8 = pFVar50;
          if ((bVar39 != 0) && (param_3 == (FScene *)0x0)) {
            bVar56 = ::FDebug::CheckVerifyFailedImpl2
                               ("!bFetchInstanceCountFromScene || Scene != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                                ,0x5e3,L"");
            if (bVar56) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            uVar31 = (uint)local_b8;
          }
          puVar1 = &pFVar50->field_0x44;
          uVar7 = *puVar1;
          if (((pFVar50->Flags & 8) == 0) && (GOcclusionForceInstanceCulling == 0)) {
            bVar56 = false;
          }
          else {
            bVar56 = true;
          }
          if ((bVar29) && ((pFVar50->Flags & 0x10) != 0)) {
            bVar20 = true;
          }
          else {
            bVar20 = false;
          }
          if ((((bVar39 != 0) || (local_d8 != UnCulled)) || (bVar56)) ||
             ((0 < pFVar50->NumRuns || (1 < pFVar10->NumInstances)))) {
            uVar42 = 1;
          }
          else {
            uVar42 = 0;
          }
          cVar53 = (char)uVar42;
          if ((((!param_2) || ((cVar53 != '\0' && (bVar20)))) ||
              ((this->bUsesUniformBufferView != false && ((uVar31 <= local_108 || (cVar53 != '\0')))
               ))) || ((local_f4 == -1 ||
                       ((pFVar50->StateBucketId != local_f4 ||
                        (pFVar50->CullingPayloadFlags != local_113)))))) {
            iVar32 = (this->MeshDrawCommandInfos).ArrayNum;
            piVar47 = &(this->MeshDrawCommandInfos).ArrayMax;
            local_108 = 1;
            if (iVar32 == *piVar47) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo>_>
                                 (0x40c,&pTVar52->AllocatorInstance,piVar47);
            }
            uVar31 = pFVar10->NumPrimitives;
            (this->MeshDrawCommandInfos).ArrayNum = iVar32 + 1;
            pFVar11 = (pTVar52->AllocatorInstance).Data + iVar32;
            iVar32 = *(int *)&pFVar10->field_0x114;
            *(undefined8 *)pFVar11 = 0;
            pFVar11->bUseIndirect = 0;
            *(uint *)pFVar11 = *(uint *)pFVar11 | uVar42;
            iVar32 = (iVar32 << 0x1d) >> 0x1d;
            pFVar11->NumBatches = 1;
            pFVar11->BatchDataStride = 0x4000;
            if (iVar32 < 6) {
              if (iVar32 == 1) {
                uVar42 = uVar31 + 2;
              }
              else if (iVar32 == 2) {
                uVar42 = uVar31 * 2;
              }
              else if (iVar32 == 3) {
                uVar42 = uVar31 * 4;
              }
              else {
                uVar42 = uVar31 * 3;
                if (iVar32 == 4) {
                  uVar42 = uVar31;
                }
              }
              local_110 = (this->IndirectArgs).ArrayNum;
              piVar47 = &(this->IndirectArgs).ArrayMax;
              uVar31 = pFVar10->FirstIndex;
              uVar54 = (pFVar10->field7_0x100).VertexParams.BaseVertexIndex;
              if (local_110 == *piVar47) {
                local_110 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_>
                                      (0x414,&(this->IndirectArgs).AllocatorInstance,piVar47);
              }
              (this->IndirectArgs).ArrayNum = local_110 + 1;
              pFVar12 = (this->IndirectArgs).AllocatorInstance.Data;
              pFVar12[(int)local_110].IndexCountPerInstance = uVar42;
              pFVar12[(int)local_110].InstanceCount = 0;
              pFVar12[(int)local_110].StartIndexLocation = uVar31;
              pFVar12[(int)local_110].BaseVertexLocation = uVar54;
              pFVar12[(int)local_110].StartInstanceLocation = 0;
              pFVar50 = local_e8;
            }
            else {
              bVar30 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2635879141030756099>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                                  ,0xfd,"MeshDrawCommand->PrimitiveType < PT_Num");
              if (bVar30) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              local_110 = 0;
            }
            pTVar2 = &this->DrawCommandDescs;
            FVar43 = (pFVar50->CullingPayload).field0_0x0;
            local_f0._s_0.X = (FVar43.PackedData & 0xf) << 2 | (byte)uVar7 & 2 | (uint)(uVar7 & 1);
            if ((pFVar50->CullingPayloadFlags & 1) != 0) {
              local_f0._s_0.X = local_f0._s_0.X | (FVar43.PackedData & 0x1fff0) << 2;
            }
            if ((pFVar50->CullingPayloadFlags & 2) != 0) {
              local_f0._s_0.X = local_f0._s_0.X | (FVar43.PackedData & 0xfffe0000) << 2;
            }
            pTVar13 = &((pTVar2->AllocatorInstance).Data)->field0_0x0;
            local_f0._s_0.Y = (pFVar50->CullingPayload).DynamicMeshBoundsIndex;
            if (((pTVar13 <= &local_f0) && (&local_f0 < pTVar13 + (this->DrawCommandDescs).ArrayMax)
                ) && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar30)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            iVar32 = (this->DrawCommandDescs).ArrayNum;
            piVar47 = &(this->DrawCommandDescs).ArrayMax;
            if (iVar32 == *piVar47) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_>
                                 (0x408,&pTVar2->AllocatorInstance,piVar47);
            }
            TVar18.field0_0x0._s_0.Y = local_f0._s_0.Y;
            TVar18.field0_0x0._s_0.X = local_f0._s_0.X;
            (this->DrawCommandDescs).ArrayNum = iVar32 + 1;
            (pTVar2->AllocatorInstance).Data[iVar32].field0_0x0 = TVar18.field0_0x0;
            if (cVar53 == '\0') {
              uVar31 = 2;
            }
            else {
              uVar31 = local_110 * 0x28;
            }
            pFVar11->bUseIndirect = pFVar11->bUseIndirect;
            pFVar11->IndirectArgsOffsetOrNumInstances = uVar31 >> 1;
            if (this->bUsesUniformBufferView == false) {
              uVar31 = (this->InstanceIdOffsets).ArrayNum << 2;
            }
            else {
              uVar31 = (*(int *)&(this->LoadBalancers).Elements[0]->field_0x18 +
                       *(int *)&(this->LoadBalancers).Elements[1]->field_0x18 * 2) *
                       (this->ViewIds).ArrayNum * 0x100;
            }
            pFVar11->InstanceDataByteOffset = uVar31;
            if (this->bUsesUniformBufferView == false) {
              uVar31 = this->TotalInstances;
            }
            else {
              uVar31 = (*(uint *)&(this->LoadBalancers).Elements[1]->field_0x18 & 0x7fffff) * 0x20 +
                       (*(uint *)&(this->LoadBalancers).Elements[0]->field_0x18 & 0xffffff) * 0x10;
            }
            iVar32 = (this->ViewIds).ArrayNum;
            piVar47 = &(this->InstanceIdOffsets).ArrayMax;
            iVar33 = (this->InstanceIdOffsets).ArrayNum;
            if (iVar33 == *piVar47) {
              iVar33 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                 (0x404,&(this->InstanceIdOffsets).AllocatorInstance,piVar47);
            }
            (this->InstanceIdOffsets).ArrayNum = iVar33 + 1;
            (this->InstanceIdOffsets).AllocatorInstance.Data[iVar33] = uVar31 * iVar32;
            local_f4 = pFVar50->StateBucketId;
            local_113 = pFVar50->CullingPayloadFlags;
            if (local_98 < local_c8) {
              FVar16 = local_d0[local_c8].SortKey.field0_0x0;
              local_d0[local_98].MeshDrawCommand = local_d0[local_c8].MeshDrawCommand;
              local_d0[local_98].SortKey.field0_0x0 = FVar16;
              pFVar5 = &local_d0[local_c8].PrimitiveIdInfo;
              iVar32 = pFVar5->ScenePrimitiveId;
              uVar17 = *(undefined8 *)&pFVar5->field_0x8;
              pFVar6 = &local_d0[local_98].PrimitiveIdInfo;
              pFVar6->DrawPrimitiveId = pFVar5->DrawPrimitiveId;
              pFVar6->ScenePrimitiveId = iVar32;
              *(undefined8 *)&pFVar6->field_0x8 = uVar17;
              pFVar24 = local_d0 + local_c8;
              uVar8 = *(undefined4 *)&pFVar24->field_0x24;
              puVar14 = *(uint **)(&pFVar24->StateBucketId + 2);
              pFVar25 = local_d0 + local_98;
              pFVar25->StateBucketId = pFVar24->StateBucketId;
              *(undefined4 *)&pFVar25->field_0x24 = uVar8;
              *(uint **)(&pFVar25->StateBucketId + 2) = puVar14;
              pFVar24 = local_d0 + local_c8;
              FVar43 = (pFVar24->CullingPayload).field0_0x0;
              uVar17 = *(undefined8 *)(&pFVar24->NumRuns + 2);
              pFVar25 = local_d0 + local_98;
              pFVar25->NumRuns = pFVar24->NumRuns;
              (pFVar25->CullingPayload).field0_0x0 = FVar43;
              *(undefined8 *)(&pFVar25->NumRuns + 2) = uVar17;
              *(undefined8 *)&local_d0[local_98].field_0x40 =
                   *(undefined8 *)&local_d0[local_c8].field_0x40;
            }
            local_100 = local_100 + 1;
            local_98 = local_98 + 1;
          }
          else {
            local_108 = local_108 + 1;
            uVar31 = *param_4;
            if (*param_4 < (int)local_108) {
              uVar31 = local_108;
            }
            *param_4 = uVar31;
            iVar32 = (this->MeshDrawCommandInfos).ArrayNum;
            uVar42 = iVar32 - 1;
            uVar31 = 0;
            if ((int)uVar42 < iVar32) {
              uVar31 = ~uVar42 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar38 = (longlong)(this->MeshDrawCommandInfos).ArrayNum;
            pFVar11 = (pTVar52->AllocatorInstance).Data;
            uVar8 = *(undefined4 *)(pFVar11 + lVar38 + -1);
            if (((undefined4 *)(pFVar11 + lVar38 + -1))->bUseIndirect == 0) {
              *(uint *)(pFVar11 + lVar38 + -1) = uVar8 + 2;
            }
          }
          pFVar24 = local_e8;
          if ((pFVar50->Flags & 4) != 0) {
            uVar31 = this->TotalInstances;
            puVar14 = local_e8->RunArray;
            EVar40 = (pFVar50->PrimitiveIdInfo).bIsDynamicPrimitive | ForceInstanceCulling;
            if (!bVar56) {
              EVar40 = (pFVar50->PrimitiveIdInfo).bIsDynamicPrimitive;
            }
            EVar49 = EVar40 | PreserveInstanceOrder;
            if (!bVar20) {
              EVar49 = EVar40;
            }
            if (puVar14 == (uint *)0x0) {
              if (bVar39 == 0) {
                AddInstancesToDrawCommand
                          (this,local_110,(pFVar50->PrimitiveIdInfo).InstanceSceneDataOffset,0,
                           *(uint *)(*(longlong *)((longlong)&local_d0->MeshDrawCommand + local_c0)
                                    + 0xf8),EVar49,uVar41);
              }
              else {
                if ((param_3 == (FScene *)0x0) &&
                   (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Scene != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                                        ,0x650,L""), bVar56)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                if (((BADTYPE)(pFVar24->PrimitiveIdInfo).bIsDynamicPrimitive) &&
                   (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!VisibleMeshDrawCommand.PrimitiveIdInfo.bIsDynamicPrimitive"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                                        ,0x651,L""), bVar56)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                uVar42 = (pFVar24->PrimitiveIdInfo).ScenePrimitiveId;
                uVar54 = 0;
                if ((int)uVar42 < (param_3->Primitives).ArrayNum) {
                  uVar54 = ~uVar42 >> 0x1f;
                }
                if ((uVar54 == 0) &&
                   (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar56)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                uVar42 = *(uint *)(*(longlong *)
                                    ((param_3->Primitives).AllocatorInstance.Data +
                                    (longlong)(int)uVar42 * 8) + 0x228);
                if (uVar42 != 0) {
                  AddInstancesToDrawCommand
                            (this,local_110,(pFVar24->PrimitiveIdInfo).InstanceSceneDataOffset,0,
                             uVar42,EVar49,uVar41);
                }
              }
            }
            else {
              uVar42 = 0;
              uVar54 = 0;
              if (local_e8->NumRuns != 0) {
                do {
                  uVar45 = (puVar14[uVar54 * 2 + 1] - puVar14[uVar54 * 2]) + 1;
                  AddInstancesToDrawCommand
                            (this,local_110,
                             puVar14[uVar54 * 2] +
                             (pFVar50->PrimitiveIdInfo).InstanceSceneDataOffset,uVar42,uVar45,
                             EVar49 | ForceInstanceCulling,uVar41);
                  uVar42 = uVar42 + uVar45;
                  uVar54 = uVar54 + 1;
                } while (uVar54 < (uint)pFVar24->NumRuns);
              }
            }
            if ((bVar20) && (iVar32 = this->TotalInstances - uVar31, iVar32 != 0)) {
              iVar33 = (this->InstanceIdOffsets).ArrayNum;
              local_e8 = (FVisibleMeshDrawCommand *)
                         CONCAT44(local_e8._4_4_,(this->DrawCommandCompactionData).ArrayNum);
              uVar42 = iVar33 - 1;
              uVar31 = 0;
              if ((int)uVar42 < iVar33) {
                uVar31 = ~uVar42 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar56)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar33 = (this->DrawCommandCompactionData).ArrayNum;
              piVar47 = &(this->DrawCommandCompactionData).ArrayMax;
              piVar3 = &(this->CompactionBlockDataIndices).ArrayNum;
              puVar14 = (this->InstanceIdOffsets).AllocatorInstance.Data;
              iVar9 = (this->InstanceIdOffsets).ArrayNum;
              uVar31 = *piVar3;
              if (iVar33 == *piVar47) {
                iVar33 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FCompactionData>_>
                                   (0x414,&(this->DrawCommandCompactionData).AllocatorInstance,
                                    piVar47);
              }
              (this->DrawCommandCompactionData).ArrayNum = iVar33 + 1;
              uVar42 = puVar14[(longlong)iVar9 + -1];
              pFVar4 = (this->DrawCommandCompactionData).AllocatorInstance.Data + iVar33;
              pFVar4->SrcInstanceIdOffset = this->NumCompactionInstances;
              pFVar4->DestInstanceIdOffset = uVar42;
              pFVar4->BlockOffset = uVar31;
              pFVar4->IndirectArgsIndex = local_110;
              pFVar4->NumInstances_NumViews = iVar32 * 0x100 | uVar46;
              iVar33 = (this->CompactionBlockDataIndices).ArrayNum;
              uVar48 = (ulonglong)iVar33;
              UE::Core::Private::
              ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                        (4,4,iVar32 + 0x3fU >> 6,
                         &(this->CompactionBlockDataIndices).AllocatorInstance,piVar3,
                         &(this->CompactionBlockDataIndices).ArrayMax);
              if (iVar33 < (this->CompactionBlockDataIndices).ArrayNum) {
                uVar8 = local_e8._0_4_;
                lVar38 = uVar48 * 4;
                do {
                  uVar42 = (uint)uVar48;
                  uVar31 = 0;
                  if ((int)uVar42 < *piVar3) {
                    uVar31 = ~uVar42 >> 0x1f;
                  }
                  if ((uVar31 == 0) &&
                     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar56)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  uVar48 = (ulonglong)(uVar42 + 1);
                  *(undefined4 *)
                   (lVar38 + (longlong)(this->CompactionBlockDataIndices).AllocatorInstance.Data) =
                       uVar8;
                  lVar38 = lVar38 + 4;
                } while ((int)(uVar42 + 1) < (this->CompactionBlockDataIndices).ArrayNum);
              }
              this->NumCompactionInstances = this->NumCompactionInstances + iVar32 * uVar46;
            }
          }
          local_c0 = local_c0 + 0x48;
          local_c8 = local_c8 + 1;
          FVar44 = local_90;
          FVar51 = local_b0;
          uVar42 = local_100;
          uVar31 = local_d4;
        } while (local_c8 < (int)local_d4);
      }
      if (((!param_2) && (uVar31 != uVar42)) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("bInCompactIdenticalCommands || NumDrawCommandsIn == NumDrawCommandsOut"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                              ,0x67e,L""), bVar29)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      if ((uVar42 != (this->MeshDrawCommandInfos).ArrayNum) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumDrawCommandsOut == MeshDrawCommandInfos.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                              ,0x67f,
                              L"There must be a 1:1 mapping between MeshDrawCommandInfos and mesh draw commands, as this assumption is made in SubmitDrawCommands."
                             ), bVar29)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      *param_5 = param_1->ArrayNum;
      *param_6 = uVar42;
      iVar32 = param_1->ArrayNum;
      if (iVar32 < (int)uVar42) {
        iVar33 = UE::Core::Private::
                 ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
                           (0x48,8,uVar42 - iVar32,&param_1->AllocatorInstance,&param_1->ArrayNum,
                            &param_1->ArrayMax);
        DefaultConstructItems<FVisibleMeshDrawCommand,int>
                  ((param_1->AllocatorInstance).Data + iVar33,uVar42 - iVar32);
      }
      else {
        if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
        }
        if ((int)uVar42 < iVar32) {
          uVar46 = iVar32 - uVar42;
          if (((int)(uVar46 | uVar42) < 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar29)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          if (uVar46 != 0) {
            pFVar50 = (param_1->AllocatorInstance).Data + (int)uVar42;
            iVar32 = (param_1->ArrayNum - uVar46) - uVar42;
            if (iVar32 != 0) {
              memmove(pFVar50,pFVar50 + (int)uVar46,(longlong)iVar32 * 0x48);
            }
            param_1->ArrayNum = param_1->ArrayNum - uVar46;
          }
        }
      }
      if (bVar21) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar28) {
        FThreadStats::AddMessage(FVar44,CycleScopeEnd);
      }
      if (bVar23) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar27) {
        FThreadStats::AddMessage(FVar51,CycleScopeEnd);
      }
      return;
    }
    pFVar37 = pTVar55->Elements[0];
    if (pFVar37 == (FInstanceProcessingGPULoadBalancer *)0x0) {
      pFVar37 = ::operator_new(0x20);
      if (pFVar37 == (FInstanceProcessingGPULoadBalancer *)0x0) {
        pFVar37 = (FInstanceProcessingGPULoadBalancer *)0x0;
      }
      else {
        piVar47 = ::operator_new(0x28);
        if (piVar47 == (int *)0x0) {
          *(longlong *)pFVar37 = 0;
        }
        else {
          *piVar47 = 0;
          piVar47[2] = 0;
          piVar47[3] = 0;
          piVar47[4] = 0;
          piVar47[5] = 0;
          piVar47[6] = 0;
          piVar47[7] = 0;
          piVar47[8] = 0;
          piVar47[9] = 0;
          *(int **)pFVar37 = piVar47;
          LOCK();
          *piVar47 = *piVar47 + 1;
          UNLOCK();
        }
        *(undefined8 *)&pFVar37->field_0x8 = 0;
        *(undefined8 *)&pFVar37->field_0x10 = 0;
        *(undefined4 *)&pFVar37->field_0x18 = 0;
      }
      pTVar55->Elements[0] = pFVar37;
    }
    if (this->InstanceCullingMode == Stereo) {
      if (((this->ViewIds).ArrayNum != 2) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("ViewIds.Num() == 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                              ,0x5c4,L""), bVar29)) {
code_r0x000144be2017:
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    else if ((*(int *)(*(longlong *)pFVar37 + 0x20) != 0) &&
            (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                ("LoadBalancer->IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                                 ,0x5c8,L""), bVar29)) goto code_r0x000144be2017;
    pTVar55 = (TStaticArray<FInstanceProcessingGPULoadBalancer_*,2,4294967295> *)
              (pTVar55->Elements + 1);
    FVar51 = local_b0;
  } while( true );
}

// StepInstanceDataOffsetBytes @ 144be8ca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall
FInstanceCullingContext::StepInstanceDataOffsetBytes(FInstanceCullingContext *this,uint param_1)

{
  if (this->bUsesUniformBufferView != false) {
    return (*(int *)&(this->LoadBalancers).Elements[0]->field_0x18 +
           *(int *)&(this->LoadBalancers).Elements[1]->field_0x18 * 2) * (this->ViewIds).ArrayNum *
           0x100;
  }
  return param_1 * 4;
}

// SubmitDrawCommands @ 144be8ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstanceCullingContext::SubmitDrawCommands
          (FInstanceCullingContext *this,
          TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1,TRobinHoodHashSet<FGraphicsMinimalPipelineStateInitializer,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
                   *param_2,FMeshDrawCommandOverrideArgs *param_3,int param_4,int param_5,
          uint param_6,FRHICommandList *param_7)

{
  uchar uVar1;
  FRHIUniformBuffer *pFVar2;
  FName FVar3;
  code *pcVar4;
  FInstanceCullingContext *pFVar5;
  TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  IRHIComputeContext *pIVar9;
  undefined8 *puVar10;
  FVertexInputStream *pFVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_MeshDrawCalls> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FRHIBreadcrumbAllocator *pFVar14;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,FString,FName,unsigned_int>_>
  *pTVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint *puVar24;
  undefined1 auStackY_568 [32];
  uint local_4fc;
  FInstanceCullingContext *local_4f8;
  FMeshDrawCommandSceneArgs local_4f0;
  FMeshDrawCommandOverrideArgs *local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  FName local_4a8;
  TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *local_4a0;
  longlong local_498;
  TRobinHoodHashSet<FGraphicsMinimalPipelineStateInitializer,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  *local_490;
  FStatMessage local_488;
  FRHIBreadcrumbScope local_478;
  char local_468;
  FName local_460;
  FMeshDrawCommandSceneArgs local_458;
  uint uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  FMeshDrawCommandStateCache local_408;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_568;
  if (param_1->ArrayNum != 0) {
    local_4f8 = this;
    local_4c0 = param_3;
    local_4a0 = param_1;
    local_490 = param_2;
    if (this->bIsEnabled == false) {
      local_458.RootConstants.bIsSet = false;
      local_458.PrimitiveIdsBuffer = (FRHIBuffer *)0x0;
      local_458.IndirectArgsBuffer = (FRHIBuffer *)0x0;
      local_458.PrimitiveIdOffset = 0;
      local_458.IndirectArgsByteOffset = 0;
      local_458.BatchedPrimitiveSlot = 0xff;
      SubmitMeshDrawCommandsRange
                (param_1,param_2,&local_458,0,false,param_4,param_5,param_6,param_7);
    }
    else {
      uVar22 = (ulonglong)param_4;
      iVar8 = param_5 + param_4;
      if (((this->MeshDrawCommandInfos).ArrayNum < iVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("MeshDrawCommandInfos.Num() >= (StartIndex + NumMeshDrawCommands)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                             ,0x69a,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_4f0.PrimitiveIdsBuffer = param_3->InstanceBuffer;
      local_4f0.RootConstants.bIsSet = false;
      local_4f0.IndirectArgsBuffer = (FRHIBuffer *)0x0;
      local_4f0.PrimitiveIdOffset = 0;
      local_4f0.IndirectArgsByteOffset = 0;
      local_4f0.BatchedPrimitiveSlot = 0xff;
      if ((&param_3->RootConstants != &local_4f0.RootConstants) &&
         ((param_3->RootConstants).bIsSet != false)) {
        local_4f0.RootConstants.TypedValue.field0_0x0._0_8_ =
             *(undefined8 *)&(param_3->RootConstants).TypedValue.field0_0x0;
        local_4f0.RootConstants.TypedValue.field0_0x0._8_8_ =
             *(undefined8 *)((longlong)&(param_3->RootConstants).TypedValue.field0_0x0 + 8);
        local_4f0.RootConstants.bIsSet = true;
      }
      uVar1 = local_4f8->InstanceCullingStaticSlot;
      if (uVar1 != 0xff) {
        pFVar2 = param_3->InstanceCullingStaticUB;
        local_4f0.BatchedPrimitiveSlot = 0xff;
        if (local_4f8->bUsesUniformBufferView != false) {
          local_4f0.BatchedPrimitiveSlot = uVar1;
        }
        if ((GRHICommandList.bLatchedBypass == false) || ((param_7->field_0x29b & 0x20) == 0)) {
          puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_7,0x20,8);
          *(int *)&param_7->field_0x60 = *(int *)&param_7->field_0x60 + 1;
          **(undefined8 **)&param_7->field_0x30 = puVar10;
          *(undefined8 **)&param_7->field_0x30 = puVar10 + 1;
          puVar10[1] = 0;
          *puVar10 = &___7FRHICommandSetStaticUniformBuffer__6B_;
          puVar10[2] = pFVar2;
          *(uchar *)(puVar10 + 3) = uVar1;
        }
        else {
          pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_7);
          (**(code **)(pIVar9->_padding_ + 0xb8))(pIVar9,uVar1);
        }
      }
      local_408.ShaderBindings[0].MaxUniformBufferUsed = -1;
      local_408.ShaderBindings[1].MaxUniformBufferUsed = -1;
      local_408.ShaderBindings[0].UniformBuffers[0] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[0].UniformBuffers[1] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].MaxUniformBufferUsed = -1;
      pFVar11 = local_408.VertexStreams;
      local_408.ShaderBindings[0].UniformBuffers[2] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[0].UniformBuffers[3] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].MaxUniformBufferUsed = -1;
      lVar18 = 0x11;
      local_408.ShaderBindings[0].UniformBuffers[4] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[0].UniformBuffers[5] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].MaxUniformBufferUsed = -1;
      local_408.ShaderBindings[0].UniformBuffers[6] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[0].UniformBuffers[7] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].MaxUniformBufferUsed = -1;
      local_408.ShaderBindings[0].UniformBuffers[8] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[0].UniformBuffers[9] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[0].UniformBuffers[10] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[0].UniformBuffers[0xb] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[0].UniformBuffers[0xc] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[0].UniformBuffers[0xd] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[0] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[1] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[2] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[3] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[4] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[5] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[6] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[7] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[8] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[9] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[10] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[0xb] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[0xc] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[1].UniformBuffers[0xd] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[0] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[1] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[2] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[3] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[4] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[5] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[6] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[7] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[8] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[9] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[10] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[0xb] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[0xc] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[2].UniformBuffers[0xd] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[0] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[1] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[2] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[3] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[4] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[5] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[6] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[7] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[8] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[9] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[10] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[0xb] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[0xc] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[3].UniformBuffers[0xd] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[0] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[1] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[2] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[3] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[4] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[5] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[6] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[7] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[8] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[9] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[10] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[0xb] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[0xc] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[4].UniformBuffers[0xd] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[0] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[1] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[2] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[3] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[4] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[5] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[6] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[7] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[8] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[9] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[10] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[0xb] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[0xc] = (FRHIUniformBuffer *)0x0;
      local_408.ShaderBindings[5].UniformBuffers[0xd] = (FRHIUniformBuffer *)0x0;
      do {
        pFVar11->StreamIndex = 0;
        pFVar11->bStreamSourceSlot = 0;
        pFVar11->Offset = 0;
        (pFVar11->field3_0x4).VertexBuffer = (FRHIBuffer *)0x0;
        pFVar11 = pFVar11 + 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      local_408.PipelineId = 0xffffffff;
      local_408.StencilRef = 0xffffffff;
      if ((param_5 != 0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar13 = StatPtr_STAT_MeshDrawCalls;
        if (StatPtr_STAT_MeshDrawCalls == (FThreadSafeStaticStat<FStat_STAT_MeshDrawCalls>)0x0) {
          pFVar12 = ::FName::FName(&local_460,"STAT_MeshDrawCalls");
          FVar13 = (FThreadSafeStaticStat<FStat_STAT_MeshDrawCalls>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshDrawCalls,*pFVar12,
                              L"Mesh draw calls","STATGROUP_SceneRendering","STATCAT_Advanced",
                              L"Scene Rendering",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar3 = *(FName *)FVar13;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_488.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
          local_4a8 = FVar3;
          local_488.StatData.Pad = (uchar  [8])(longlong)param_5;
          local_488.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_00,&local_488);
          FStatsTrace::Add(&local_4a8,(longlong)param_5);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      if (param_4 < iVar8) {
        lVar23 = uVar22 * 0xc;
        lVar18 = uVar22 * 0x48;
        do {
          pTVar6 = local_4a0;
          uVar21 = (uint)uVar22;
          uVar16 = 0;
          if ((int)uVar21 < local_4a0->ArrayNum) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          local_4b8 = lVar18;
          local_4b0 = lVar23;
          if ((uVar16 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar5 = local_4f8;
          plVar20 = (longlong *)
                    ((longlong)&((pTVar6->AllocatorInstance).Data)->MeshDrawCommand + lVar18);
          uVar16 = 0;
          if ((int)uVar21 < (local_4f8->MeshDrawCommandInfos).ArrayNum) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar24 = (uint *)(&((pFVar5->MeshDrawCommandInfos).AllocatorInstance.Data)->field_0x0 +
                            lVar23);
          local_4f0.IndirectArgsByteOffset = 0;
          local_4f0.IndirectArgsBuffer = (FRHIBuffer *)0x0;
          uVar16 = *puVar24 >> 1;
          if ((*puVar24 & 1) == 0) {
            uVar16 = uVar16 * param_6;
          }
          else {
            local_4f0.IndirectArgsByteOffset = uVar16 + local_4c0->IndirectArgsByteOffset;
            local_4f0.IndirectArgsBuffer = local_4c0->IndirectArgsBuffer;
            uVar16 = param_6;
          }
          local_4f0.PrimitiveIdOffset = puVar24[1] + local_4c0->InstanceDataByteOffset;
          local_468 = '\0';
          if (GShowMaterialDrawEvents != 0) {
            local_498 = *plVar20;
            local_4fc = uVar16 * *(int *)(local_498 + 0xf8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              local_418 = 0;
              uStack_414 = 0;
              ::Desc._12_8_ = ZEXT48(uStack_41c);
              ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
              ::Desc._padding_._4_4_ = 0;
              ::Desc._padding_ = (longlong)u_MaterialDrawEve;
              ::Desc._padding_ = (longlong)u__s__s___u_insta;
              ::Desc._padding_._0_4_ = 0x6c9;
              InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
              ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
              ::Desc.TraceGpuSpecId = 0;
              ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
              atexit(``FInstanceCullingContext::SubmitDrawCommands'::__l40::<lambda_1>::
                     operator()<FString_const_&,FName_const_&,unsigned_int>'::__l2::
                     _dynamic_atexit_destructor_for__Desc__);
              _Init_thread_footer(&::_TSS0);
            }
            pFVar14 = FRHIComputeCommandList::GetBreadcrumbAllocator
                                ((FRHIComputeCommandList *)param_7);
            pTVar15 = FMemStackBase::Alloc(&pFVar14->Inner,0x160,8);
            pTVar15 = UE::RHI::Breadcrumbs::Private::
                      TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,FString,FName,unsigned_int>_>
                      ::
                      TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,FString,FName,unsigned_int>_><FString_const_&,FName_const_&,unsigned_int_&>
                                (pTVar15,pFVar14,&::Desc,(FString *)(local_498 + 0x148),
                                 (FName *)(local_498 + 0x170),&local_4fc);
            FRHIBreadcrumbScope::FRHIBreadcrumbScope
                      (&local_478,(FRHIComputeCommandList *)param_7,(FRHIBreadcrumbNode *)pTVar15);
            local_468 = '\x01';
          }
          bVar7 = FMeshDrawCommand::SubmitDrawBegin
                            ((FMeshDrawCommand *)*plVar20,local_490,&local_4f0,uVar16,param_7,
                             &local_408,true);
          if (bVar7) {
            FMeshDrawCommand::SubmitDrawEnd((FMeshDrawCommand *)*plVar20,&local_4f0,uVar16,param_7);
            uVar17 = puVar24[2];
            uVar19 = 1;
            if (1 < (uVar17 & 0x7fff)) {
              do {
                local_4f0.IndirectArgsByteOffset = local_4f0.IndirectArgsByteOffset + 0x14;
                local_4f0.PrimitiveIdOffset = local_4f0.PrimitiveIdOffset + (uVar17 >> 0xf);
                FMeshDrawCommand::SubmitDrawEnd
                          ((FMeshDrawCommand *)*plVar20,&local_4f0,uVar16,param_7);
                uVar17 = puVar24[2];
                uVar19 = uVar19 + 1;
              } while (uVar19 < (uVar17 & 0x7fff));
            }
          }
          if (local_468 != '\0') {
            FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_478);
          }
          uVar22 = (ulonglong)(uVar21 + 1);
          lVar18 = local_4b8 + 0x48;
          lVar23 = local_4b0 + 0xc;
        } while ((int)(uVar21 + 1) < iVar8);
      }
    }
  }
  return;
}

// WaitForSetupTask @ 144beb880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FInstanceCullingContext::WaitForSetupTask(FInstanceCullingContext *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (*(void **)&this->SyncPrerequisitesFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->SyncPrerequisitesFunc);
    pcVar1 = *(code **)&this->SyncPrerequisitesFunc;
    plVar9 = *(longlong **)&(this->SyncPrerequisitesFunc).field_0x28;
    plVar8 = (longlong *)&(this->SyncPrerequisitesFunc).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar8 = plVar9;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar1)(uVar7,this);
  }
  local_48 = *(longlong *)&this->SyncPrerequisitesFunc;
  uVar6 = *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x8;
  uVar2 = *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x10;
  uVar3 = *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x14;
  uVar4 = *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x18;
  uVar5 = *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x1c;
  uVar7 = *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->SyncPrerequisitesFunc).field_0x28;
  *(undefined8 *)&this->SyncPrerequisitesFunc = 0;
  *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x10 = local_38;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x14 = uStack_34;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x18 = uStack_30;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x28 = 0;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x2c = 0;
  local_38 = uVar2;
  uStack_34 = uVar3;
  uStack_30 = uVar4;
  uStack_2c = uVar5;
  local_28 = uVar7;
  if (local_48 != 0) {
    plVar9 = (longlong *)&local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar9 = plStack_20;
    }
    uStack_40 = uVar6;
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// operator= @ 144ef19a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FInstanceCullingContext * __thiscall
FInstanceCullingContext::operator=(FInstanceCullingContext *this,FInstanceCullingContext *param_1)

{
  int *piVar1;
  TArray<FInstanceCullingContext::FMeshDrawCommandInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  TArray<FRHIDrawIndexedIndirectParameters,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar3;
  TArray<UE::Math::TIntVector2<unsigned_int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar4;
  TArray<FInstanceCullingContext::FPayloadData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar5;
  TArray<FInstanceCullingContext::FCompactionData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar6;
  int iVar7;
  IPooledRenderTarget *pIVar8;
  IPooledRenderTarget *pIVar9;
  longlong lVar10;
  undefined8 *puVar11;
  FMeshDrawCommandInfo *_Src;
  FRHIDrawIndexedIndirectParameters *_Src_00;
  TIntVector2<unsigned_int> *_Src_01;
  FPayloadData *_Src_02;
  FCompactionData *_Src_03;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  FInstanceProcessingGPULoadBalancer *pFVar19;
  TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *_Dst;
  undefined8 *puVar20;
  longlong *plVar21;
  TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *_Src_04;
  undefined1 auStackY_a8 [32];
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  this->InstanceCullingManager = param_1->InstanceCullingManager;
  this->ShaderPlatform = param_1->ShaderPlatform;
  if (this != param_1) {
    _Src_04 = (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(param_1->ViewIds).AllocatorInstance.SecondaryData.Data;
    piVar1 = &(this->ViewIds).ArrayMax;
    iVar7 = (param_1->ViewIds).ArrayNum;
    if (_Src_04 ==
        (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      _Src_04 = &param_1->ViewIds;
    }
    (this->ViewIds).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 6;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<int>_>
                (4,4,iVar7,*piVar1,&(this->ViewIds).AllocatorInstance,iVar7,piVar1);
      _Dst = (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)(this->ViewIds).AllocatorInstance.SecondaryData.Data;
      if (iVar7 != 0) {
        if (_Dst == (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
          _Dst = &this->ViewIds;
        }
        memcpy(_Dst,_Src_04,(longlong)iVar7 << 2);
      }
    }
  }
  pIVar8 = (param_1->PrevHZB).Reference;
  pIVar9 = (this->PrevHZB).Reference;
  if (pIVar9 != pIVar8) {
    (this->PrevHZB).Reference = pIVar8;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x30))();
    }
    if (pIVar9 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar9->_padding_ + 0x38))(pIVar9);
    }
  }
  this->bIsEnabled = param_1->bIsEnabled;
  this->InstanceCullingMode = param_1->InstanceCullingMode;
  this->Flags = param_1->Flags;
  this->TotalInstances = param_1->TotalInstances;
  this->DynamicInstanceIdOffset = param_1->DynamicInstanceIdOffset;
  this->DynamicInstanceIdNum = param_1->DynamicInstanceIdNum;
  lVar10 = *(longlong *)&param_1->SyncPrerequisitesFunc;
  uStack_40 = (longlong *)0x0;
  if (lVar10 != 0) {
    puVar11 = *(undefined8 **)&(param_1->SyncPrerequisitesFunc).field_0x28;
    puVar20 = (undefined8 *)&(param_1->SyncPrerequisitesFunc).field_0x10;
    if (puVar11 != (undefined8 *)0x0) {
      puVar20 = puVar11;
    }
    (**(code **)*puVar20)(puVar20,&local_58);
  }
  lVar18 = *(longlong *)&this->SyncPrerequisitesFunc;
  uVar12 = *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x10;
  uVar13 = *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x14;
  uVar14 = *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x18;
  uVar15 = *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x1c;
  uVar16 = *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x20;
  plVar17 = *(longlong **)&(this->SyncPrerequisitesFunc).field_0x28;
  *(longlong *)&this->SyncPrerequisitesFunc = lVar10;
  *(undefined8 *)&(this->SyncPrerequisitesFunc).field_0x8 = uStack_60;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x10 = local_58;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x14 = uStack_54;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x18 = uStack_50;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x1c = uStack_4c;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x20 = (undefined4)local_48;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x24 = local_48._4_4_;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x28 = (undefined4)uStack_40;
  *(undefined4 *)&(this->SyncPrerequisitesFunc).field_0x2c = uStack_40._4_4_;
  local_58 = uVar12;
  uStack_54 = uVar13;
  uStack_50 = uVar14;
  uStack_4c = uVar15;
  local_48 = uVar16;
  uStack_40 = plVar17;
  if (lVar18 != 0) {
    plVar21 = (longlong *)&local_58;
    if (plVar17 != (longlong *)0x0) {
      plVar21 = plVar17;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  pTVar2 = &this->MeshDrawCommandInfos;
  if (pTVar2 != &param_1->MeshDrawCommandInfos) {
    iVar7 = (param_1->MeshDrawCommandInfos).ArrayNum;
    piVar1 = &(this->MeshDrawCommandInfos).ArrayMax;
    _Src = (param_1->MeshDrawCommandInfos).AllocatorInstance.Data;
    (this->MeshDrawCommandInfos).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo>_>
                (0xc,4,iVar7,*piVar1,&pTVar2->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar7 * 0xc);
      }
    }
  }
  pTVar3 = &this->IndirectArgs;
  if (pTVar3 != &param_1->IndirectArgs) {
    iVar7 = (param_1->IndirectArgs).ArrayNum;
    piVar1 = &(this->IndirectArgs).ArrayMax;
    _Src_00 = (param_1->IndirectArgs).AllocatorInstance.Data;
    (this->IndirectArgs).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_>
                (0x14,4,iVar7,*piVar1,&pTVar3->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src_00,(longlong)iVar7 * 0x14);
      }
    }
  }
  pTVar4 = &this->DrawCommandDescs;
  if (pTVar4 != &param_1->DrawCommandDescs) {
    iVar7 = (param_1->DrawCommandDescs).ArrayNum;
    piVar1 = &(this->DrawCommandDescs).ArrayMax;
    _Src_01 = (param_1->DrawCommandDescs).AllocatorInstance.Data;
    (this->DrawCommandDescs).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_>
                (8,4,iVar7,*piVar1,&pTVar4->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,_Src_01,(longlong)iVar7 << 3);
      }
    }
  }
  pTVar5 = &this->PayloadData;
  if (pTVar5 != &param_1->PayloadData) {
    iVar7 = (param_1->PayloadData).ArrayNum;
    piVar1 = &(this->PayloadData).ArrayMax;
    _Src_02 = (param_1->PayloadData).AllocatorInstance.Data;
    (this->PayloadData).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_>
                (0x10,4,iVar7,*piVar1,&pTVar5->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,_Src_02,(longlong)iVar7 << 4);
      }
    }
  }
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::operator=
            (&this->InstanceIdOffsets,&param_1->InstanceIdOffsets);
  pTVar6 = &this->DrawCommandCompactionData;
  if (pTVar6 != &param_1->DrawCommandCompactionData) {
    iVar7 = (param_1->DrawCommandCompactionData).ArrayNum;
    piVar1 = &(this->DrawCommandCompactionData).ArrayMax;
    _Src_03 = (param_1->DrawCommandCompactionData).AllocatorInstance.Data;
    (this->DrawCommandCompactionData).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FCompactionData>_>
                (0x14,4,iVar7,*piVar1,&pTVar6->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,_Src_03,(longlong)iVar7 * 0x14);
      }
    }
  }
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::operator=
            (&this->CompactionBlockDataIndices,&param_1->CompactionBlockDataIndices);
  this->NumCompactionInstances = param_1->NumCompactionInstances;
  pFVar19 = (param_1->LoadBalancers).Elements[1];
  (this->LoadBalancers).Elements[0] = (param_1->LoadBalancers).Elements[0];
  (this->LoadBalancers).Elements[1] = pFVar19;
  this->SingleInstanceProcessingMode = param_1->SingleInstanceProcessingMode;
  this->InstanceCullingStaticSlot = param_1->InstanceCullingStaticSlot;
  this->bUsesUniformBufferView = param_1->bUsesUniformBufferView;
  this->MeshDrawCommandPassStats = param_1->MeshDrawCommandPassStats;
  return this;
}

