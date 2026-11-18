// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// FNiagaraSimCacheCreateParameters @ 148e54350

FNiagaraSimCacheCreateParameters * __thiscall
FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters
          (FNiagaraSimCacheCreateParameters *this,FNiagaraSimCacheCreateParameters *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  
  pTVar1 = &this->RebaseIncludeAttributes;
  this->AttributeCaptureMode = param_1->AttributeCaptureMode;
  uVar6 = (this->bAllowRebasing ^ param_1->bAllowRebasing) & 1 ^ *(uint *)&this->field_0x4;
  *(uint *)&this->field_0x4 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x4) & 2 ^ uVar6;
  *(uint *)&this->field_0x4 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x4) & 4 ^ uVar6;
  *(uint *)&this->field_0x4 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x4) & 8 ^ uVar6;
  *(uint *)&this->field_0x4 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x4) & 0x10 ^ uVar6;
  *(uint *)&this->field_0x4 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x4) & 0x20 ^ uVar6;
  *(uint *)&this->field_0x4 = uVar6;
  uVar3 = *(uint *)&param_1->field_0x4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(uint *)&this->field_0x4 = (uVar6 ^ uVar3) & 0x40 ^ uVar6;
  piVar2 = &(this->RebaseIncludeAttributes).ArrayMax;
  iVar4 = (param_1->RebaseIncludeAttributes).ArrayNum;
  pFVar5 = (param_1->RebaseIncludeAttributes).AllocatorInstance.Data;
  (this->RebaseIncludeAttributes).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  pTVar1 = &this->RebaseExcludeAttributes;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RebaseExcludeAttributes).ArrayMax;
  iVar4 = (param_1->RebaseExcludeAttributes).ArrayNum;
  pFVar5 = (param_1->RebaseExcludeAttributes).AllocatorInstance.Data;
  (this->RebaseExcludeAttributes).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  pTVar1 = &this->InterpolationIncludeAttributes;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InterpolationIncludeAttributes).ArrayMax;
  iVar4 = (param_1->InterpolationIncludeAttributes).ArrayNum;
  pFVar5 = (param_1->InterpolationIncludeAttributes).AllocatorInstance.Data;
  (this->InterpolationIncludeAttributes).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  pTVar1 = &this->InterpolationExcludeAttributes;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InterpolationExcludeAttributes).ArrayMax;
  iVar4 = (param_1->InterpolationExcludeAttributes).ArrayNum;
  pFVar5 = (param_1->InterpolationExcludeAttributes).AllocatorInstance.Data;
  (this->InterpolationExcludeAttributes).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  pTVar1 = &this->ExplicitCaptureAttributes;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ExplicitCaptureAttributes).ArrayMax;
  iVar4 = (param_1->ExplicitCaptureAttributes).ArrayNum;
  pFVar5 = (param_1->ExplicitCaptureAttributes).AllocatorInstance.Data;
  (this->ExplicitCaptureAttributes).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  return this;
}

// ~FNiagaraSimCacheCreateParameters @ 148e56600

void __thiscall
FNiagaraSimCacheCreateParameters::~FNiagaraSimCacheCreateParameters
          (FNiagaraSimCacheCreateParameters *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ExplicitCaptureAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InterpolationExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InterpolationIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RebaseExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RebaseIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// StaticStruct @ 149377320

UScriptStruct * __cdecl FNiagaraSimCacheCreateParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheCreateParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSimCacheCreateParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters,
                         (UObject *)pUVar1,L"NiagaraSimCacheCreateParameters");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheCreateParameters.OuterSingleton;
}

// operator= @ 14938b4c0

FNiagaraSimCacheCreateParameters * __thiscall
FNiagaraSimCacheCreateParameters::operator=
          (FNiagaraSimCacheCreateParameters *this,FNiagaraSimCacheCreateParameters *param_1)

{
  uint uVar1;
  
  this->AttributeCaptureMode = param_1->AttributeCaptureMode;
  uVar1 = (this->bAllowRebasing ^ param_1->bAllowRebasing) & 1 ^ *(uint *)&this->field_0x4;
  *(uint *)&this->field_0x4 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x4) & 2 ^ uVar1;
  *(uint *)&this->field_0x4 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x4) & 4 ^ uVar1;
  *(uint *)&this->field_0x4 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x4) & 8 ^ uVar1;
  *(uint *)&this->field_0x4 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x4) & 0x10 ^ uVar1;
  *(uint *)&this->field_0x4 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x4) & 0x20 ^ uVar1;
  *(uint *)&this->field_0x4 = uVar1;
  *(uint *)&this->field_0x4 = (uVar1 ^ *(uint *)&param_1->field_0x4) & 0x40 ^ uVar1;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->RebaseIncludeAttributes,&param_1->RebaseIncludeAttributes);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->RebaseExcludeAttributes,&param_1->RebaseExcludeAttributes);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->InterpolationIncludeAttributes,&param_1->InterpolationIncludeAttributes);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->InterpolationExcludeAttributes,&param_1->InterpolationExcludeAttributes);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->ExplicitCaptureAttributes,&param_1->ExplicitCaptureAttributes);
  return this;
}

// CreateForDebugging @ 14939a1b0

FNiagaraSimCacheCreateParameters * __cdecl
FNiagaraSimCacheCreateParameters::CreateForDebugging
          (FNiagaraSimCacheCreateParameters *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  __return_storage_ptr__->AttributeCaptureMode = All;
  (__return_storage_ptr__->RebaseIncludeAttributes).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RebaseIncludeAttributes).ArrayNum = 0;
  (__return_storage_ptr__->RebaseIncludeAttributes).ArrayMax = 0;
  (__return_storage_ptr__->RebaseExcludeAttributes).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RebaseExcludeAttributes).ArrayNum = 0;
  (__return_storage_ptr__->RebaseExcludeAttributes).ArrayMax = 0;
  (__return_storage_ptr__->InterpolationIncludeAttributes).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->InterpolationIncludeAttributes).ArrayNum = 0;
  (__return_storage_ptr__->InterpolationIncludeAttributes).ArrayMax = 0;
  (__return_storage_ptr__->InterpolationExcludeAttributes).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->InterpolationExcludeAttributes).ArrayNum = 0;
  (__return_storage_ptr__->InterpolationExcludeAttributes).ArrayMax = 0;
  (__return_storage_ptr__->ExplicitCaptureAttributes).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ExplicitCaptureAttributes).ArrayNum = 0;
  (__return_storage_ptr__->ExplicitCaptureAttributes).ArrayMax = 0;
  puVar2 = &__return_storage_ptr__->field_0x4;
  __return_storage_ptr__->bAllowRebasing = 1;
  __return_storage_ptr__->bIncludeDebugData = 1;
  __return_storage_ptr__->bAllowSerializeLargeCache = 1;
  __return_storage_ptr__->bAllowVelocityExtrapolation = 0;
  __return_storage_ptr__->bInterpolateAllTypes = 1;
  __return_storage_ptr__->bAllowInterpolation = 0;
  __return_storage_ptr__->bAllowDataInterfaceCaching = 1;
  return __return_storage_ptr__;
}

