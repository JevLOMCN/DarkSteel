// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 3

// FOpenGLShaderBindings @ 145be4480

FOpenGLShaderBindings * __thiscall
FOpenGLShaderBindings::FOpenGLShaderBindings
          (FOpenGLShaderBindings *this,FOpenGLShaderBindings *param_1)

{
  int *piVar1;
  TArray<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *_Src;
  FOpenGLShaderVarying *pFVar5;
  undefined8 uVar6;
  
  piVar1 = &(this->PackedUniformBuffers).ArrayMax;
  (this->PackedUniformBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->PackedUniformBuffers).ArrayNum;
  pTVar4 = (TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)
           (param_1->PackedUniformBuffers).AllocatorInstance.Data;
  (this->PackedUniformBuffers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,int>
              ((this->PackedUniformBuffers).AllocatorInstance.Data,pTVar4,iVar3);
  }
  pTVar4 = &this->PackedGlobalArrays;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PackedGlobalArrays).ArrayMax;
  iVar3 = (param_1->PackedGlobalArrays).ArrayNum;
  _Src = (param_1->PackedGlobalArrays).AllocatorInstance.Data;
  (this->PackedGlobalArrays).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,iVar3,0,&pTVar4->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  pTVar2 = &this->InputVaryings;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->InputVaryings).ArrayMax;
  iVar3 = (param_1->InputVaryings).ArrayNum;
  pFVar5 = (FOpenGLShaderVarying *)(param_1->InputVaryings).AllocatorInstance.Data;
  (this->InputVaryings).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FOpenGLShaderVarying,FOpenGLShaderVarying,int>
              ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
  }
  pTVar2 = &this->OutputVaryings;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OutputVaryings).ArrayMax;
  iVar3 = (param_1->OutputVaryings).ArrayNum;
  pFVar5 = (FOpenGLShaderVarying *)(param_1->OutputVaryings).AllocatorInstance.Data;
  (this->OutputVaryings).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FOpenGLShaderVarying,FOpenGLShaderVarying,int>
              ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
  }
  (this->InOutMask).Bitmask = (param_1->InOutMask).Bitmask;
  this->NumSamplers = param_1->NumSamplers;
  this->NumUniformBuffers = param_1->NumUniformBuffers;
  this->NumUAVs = param_1->NumUAVs;
  this->bFlattenUB = param_1->bFlattenUB;
  uVar6 = *(undefined8 *)((param_1->VaryingHash).Hash + 8);
  *(undefined8 *)(this->VaryingHash).Hash = *(undefined8 *)(param_1->VaryingHash).Hash;
  *(undefined8 *)((this->VaryingHash).Hash + 8) = uVar6;
  *(undefined4 *)((this->VaryingHash).Hash + 0x10) =
       *(undefined4 *)((param_1->VaryingHash).Hash + 0x10);
  return this;
}

// ~FOpenGLShaderBindings @ 145be9d30

void __thiscall FOpenGLShaderBindings::~FOpenGLShaderBindings(FOpenGLShaderBindings *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FOpenGLShaderVarying,int>
            ((FOpenGLShaderVarying *)(this->OutputVaryings).AllocatorInstance.Data,
             (this->OutputVaryings).ArrayNum);
  pFVar1 = (this->OutputVaryings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOpenGLShaderVarying,int>
            ((FOpenGLShaderVarying *)(this->InputVaryings).AllocatorInstance.Data,
             (this->InputVaryings).ArrayNum);
  pFVar1 = (this->InputVaryings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PackedGlobalArrays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,int>
            ((TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)
             (this->PackedUniformBuffers).AllocatorInstance.Data,
             (this->PackedUniformBuffers).ArrayNum);
  pFVar1 = (this->PackedUniformBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Serialize @ 145c2ca90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __thiscall
FOpenGLShaderBindings::Serialize
          (FOpenGLShaderBindings *this,FArchive *param_1,FShaderResourceTable *param_2)

{
  FShaderBindingInOutMask *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  uint *puVar5;
  uchar *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [16];
  FSHA1 local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  TArrayPrivateFriend::
  Serialize<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&this->PackedUniformBuffers);
  TArrayPrivateFriend::Serialize<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>
            (param_1,&this->PackedGlobalArrays);
  TArrayPrivateFriend::Serialize<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_>
            (param_1,&this->InputVaryings);
  TArrayPrivateFriend::Serialize<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_>
            (param_1,&this->OutputVaryings);
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->ResourceTableBits);
    }
  }
  else {
    param_2->ResourceTableBits = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ShaderResourceViewMap);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->SamplerMap);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->UnorderedAccessViewMap);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ResourceTableLayoutHashes);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->TextureMap);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ResourceCollectionMap);
  pFVar1 = &this->InOutMask;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Bitmask);
    }
  }
  else {
    pFVar1->Bitmask = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumSamplers,1);
  }
  else {
    this->NumSamplers = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar6 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumUniformBuffers,1);
  }
  else {
    this->NumUniformBuffers = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar6 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1);
  }
  else {
    this->NumUAVs = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  ::operator<<(param_1,&this->bFlattenUB);
  if ((param_1->field_0x28 & 1) != 0) {
    FSHA1::FSHA1(&local_d8);
    iVar4 = (this->InputVaryings).ArrayNum;
    pFVar7 = (this->InputVaryings).AllocatorInstance.Data;
    pFVar3 = pFVar7 + (longlong)iVar4 * 0x18;
    while( true ) {
      if ((this->InputVaryings).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FOpenGLShaderVarying_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e8);
      }
      if (pFVar7 == pFVar3) break;
      FSHA1::Update(&local_d8,(uchar *)(pFVar7 + 0x10),4);
      FSHA1::Update(&local_d8,*(uchar **)pFVar7,(longlong)*(int *)(pFVar7 + 8));
      pFVar7 = pFVar7 + 0x18;
    }
    iVar4 = (this->OutputVaryings).ArrayNum;
    pFVar7 = (this->OutputVaryings).AllocatorInstance.Data;
    pFVar3 = pFVar7 + (longlong)iVar4 * 0x18;
    while( true ) {
      if ((this->OutputVaryings).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FOpenGLShaderVarying_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e8);
      }
      if (pFVar7 == pFVar3) break;
      FSHA1::Update(&local_d8,(uchar *)(pFVar7 + 0x10),4);
      FSHA1::Update(&local_d8,*(uchar **)pFVar7,(longlong)*(int *)(pFVar7 + 8));
      pFVar7 = pFVar7 + 0x18;
    }
    FSHA1::Final(&local_d8);
    FSHA1::GetHash(&local_d8,(this->VaryingHash).Hash);
    DestructItems<FOpenGLShaderVarying,int>
              ((FOpenGLShaderVarying *)(this->InputVaryings).AllocatorInstance.Data,
               (this->InputVaryings).ArrayNum);
    piVar2 = &(this->InputVaryings).ArrayMax;
    (this->InputVaryings).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->InputVaryings).AllocatorInstance,0,piVar2);
    }
    DestructItems<FOpenGLShaderVarying,int>
              ((FOpenGLShaderVarying *)(this->OutputVaryings).AllocatorInstance.Data,
               (this->OutputVaryings).ArrayNum);
    piVar2 = &(this->OutputVaryings).ArrayMax;
    (this->OutputVaryings).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->OutputVaryings).AllocatorInstance,0,piVar2);
    }
    FSHA1::~FSHA1(&local_d8);
  }
  return param_1;
}

