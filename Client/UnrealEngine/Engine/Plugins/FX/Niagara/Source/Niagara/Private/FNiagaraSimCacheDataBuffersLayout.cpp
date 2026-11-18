// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 1493779f0

UScriptStruct * __cdecl FNiagaraSimCacheDataBuffersLayout::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffersLayout.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffersLayout.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout,
                         (UObject *)pUVar1,L"NiagaraSimCacheDataBuffersLayout");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffersLayout.OuterSingleton;
}

// ~FNiagaraSimCacheDataBuffersLayout @ 14938a250

void __thiscall
FNiagaraSimCacheDataBuffersLayout::~FNiagaraSimCacheDataBuffersLayout
          (FNiagaraSimCacheDataBuffersLayout *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CacheBufferReadInfo_RT).VariableCopyMappingsToDataBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CacheBufferReadInfo_RT).ComponentMappingsToDataBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CacheBufferReadInfo).ComponentMappingsToDataBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InterpVariableNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RebaseVariableNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Variables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14938b610

FNiagaraSimCacheDataBuffersLayout * __thiscall
FNiagaraSimCacheDataBuffersLayout::operator=
          (FNiagaraSimCacheDataBuffersLayout *this,FNiagaraSimCacheDataBuffersLayout *param_1)

{
  TArray<FNiagaraSimCacheVariable,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FNiagaraSimCacheVariable,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = &param_1->Variables;
  this->LayoutName = param_1->LayoutName;
  pTVar2 = &this->Variables;
  this->SimTarget = param_1->SimTarget;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Variables).ArrayNum = (param_1->Variables).ArrayNum;
    (this->Variables).ArrayMax = (param_1->Variables).ArrayMax;
    (param_1->Variables).ArrayNum = 0;
    (param_1->Variables).ArrayMax = 0;
  }
  pTVar3 = &param_1->RebaseVariableNames;
  this->FloatCount = param_1->FloatCount;
  pTVar4 = &this->RebaseVariableNames;
  this->HalfCount = param_1->HalfCount;
  this->Int32Count = param_1->Int32Count;
  this->bLocalSpace = param_1->bLocalSpace;
  this->bAllowInterpolation = param_1->bAllowInterpolation;
  this->bAllowVelocityExtrapolation = param_1->bAllowVelocityExtrapolation;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RebaseVariableNames).ArrayNum = (param_1->RebaseVariableNames).ArrayNum;
    (this->RebaseVariableNames).ArrayMax = (param_1->RebaseVariableNames).ArrayMax;
    (param_1->RebaseVariableNames).ArrayNum = 0;
    (param_1->RebaseVariableNames).ArrayMax = 0;
  }
  pTVar3 = &param_1->InterpVariableNames;
  pTVar4 = &this->InterpVariableNames;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InterpVariableNames).ArrayNum = (param_1->InterpVariableNames).ArrayNum;
    (this->InterpVariableNames).ArrayMax = (param_1->InterpVariableNames).ArrayMax;
    (param_1->InterpVariableNames).ArrayNum = 0;
    (param_1->InterpVariableNames).ArrayMax = 0;
  }
  pTVar5 = &(param_1->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer;
  this->ComponentVelocity = param_1->ComponentVelocity;
  pTVar6 = &(this->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer;
  (this->CacheBufferWriteInfo).ComponentUniqueID = (param_1->CacheBufferWriteInfo).ComponentUniqueID
  ;
  if (pTVar6 != pTVar5) {
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayNum =
         (param_1->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayNum;
    (this->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayMax =
         (param_1->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayMax;
    (param_1->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayNum = 0;
    (param_1->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayMax = 0;
  }
  FCacheBufferReadInfo::operator=(&this->CacheBufferReadInfo,&param_1->CacheBufferReadInfo);
  this->bNeedsCacheBufferReadInfoUpdateForRT = param_1->bNeedsCacheBufferReadInfoUpdateForRT;
  FCacheBufferReadInfo::operator=(&this->CacheBufferReadInfo_RT,&param_1->CacheBufferReadInfo_RT);
  return this;
}

// operator= @ 14938b7b0

FNiagaraSimCacheDataBuffersLayout * __thiscall
FNiagaraSimCacheDataBuffersLayout::operator=
          (FNiagaraSimCacheDataBuffersLayout *this,FNiagaraSimCacheDataBuffersLayout *param_1)

{
  TArray<FNiagaraSimCacheVariable,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  this->LayoutName = param_1->LayoutName;
  this->SimTarget = param_1->SimTarget;
  pTVar1 = &this->Variables;
  if (pTVar1 != &param_1->Variables) {
    iVar3 = (this->Variables).ArrayMax;
    piVar2 = &(this->Variables).ArrayMax;
    _Src = (param_1->Variables).AllocatorInstance.Data;
    iVar4 = (param_1->Variables).ArrayNum;
    (this->Variables).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x18);
      }
    }
  }
  this->FloatCount = param_1->FloatCount;
  this->HalfCount = param_1->HalfCount;
  this->Int32Count = param_1->Int32Count;
  this->bLocalSpace = param_1->bLocalSpace;
  this->bAllowInterpolation = param_1->bAllowInterpolation;
  this->bAllowVelocityExtrapolation = param_1->bAllowVelocityExtrapolation;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->RebaseVariableNames,&param_1->RebaseVariableNames);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->InterpVariableNames,&param_1->InterpVariableNames);
  this->ComponentVelocity = param_1->ComponentVelocity;
  (this->CacheBufferWriteInfo).ComponentUniqueID = (param_1->CacheBufferWriteInfo).ComponentUniqueID
  ;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::operator=
            (&(this->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer,
             &(param_1->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer);
  FCacheBufferReadInfo::operator=(&this->CacheBufferReadInfo,&param_1->CacheBufferReadInfo);
  this->bNeedsCacheBufferReadInfoUpdateForRT = param_1->bNeedsCacheBufferReadInfoUpdateForRT;
  FCacheBufferReadInfo::operator=(&this->CacheBufferReadInfo_RT,&param_1->CacheBufferReadInfo_RT);
  return this;
}

// FindCacheVariable @ 1493a1220

FNiagaraSimCacheVariable * __thiscall
FNiagaraSimCacheDataBuffersLayout::FindCacheVariable
          (FNiagaraSimCacheDataBuffersLayout *this,FNiagaraVariableBase *param_1)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNiagaraSimCacheVariable *pFVar5;
  uint uVar6;
  FName *pFVar7;
  longlong lVar8;
  uint uVar9;
  
  pFVar2 = (FName *)(this->Variables).AllocatorInstance.Data;
  iVar1 = (this->Variables).ArrayNum;
  pFVar7 = pFVar2;
  while( true ) {
    if (pFVar7 == pFVar2 + (longlong)iVar1 * 3) {
      return (FNiagaraSimCacheVariable *)0x0;
    }
    if ((*pFVar7 == param_1->Name) &&
       (pFVar7[1].ComparisonIndex.Value == (param_1->TypeDefHandle).RegisteredTypeIndex)) break;
    pFVar7 = pFVar7 + 3;
  }
  lVar8 = ((longlong)pFVar7 - (longlong)pFVar2) / 6 + ((longlong)pFVar7 - (longlong)pFVar2 >> 0x3f);
  uVar9 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  if (uVar9 == 0xffffffff) {
    return (FNiagaraSimCacheVariable *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar9 < iVar1) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNiagaraSimCacheVariable *)(*pcVar3)();
    return pFVar5;
  }
  return (FNiagaraSimCacheVariable *)
         ((this->Variables).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18);
}

// IndexOfCacheVariable @ 1493a84f0

int __thiscall
FNiagaraSimCacheDataBuffersLayout::IndexOfCacheVariable
          (FNiagaraSimCacheDataBuffersLayout *this,FNiagaraVariableBase *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->Variables).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->Variables).ArrayNum * 3) {
      return -1;
    }
    if ((*pFVar2 == param_1->Name) &&
       (pFVar2[1].ComparisonIndex.Value == (param_1->TypeDefHandle).RegisteredTypeIndex)) break;
    pFVar2 = pFVar2 + 3;
  }
  return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x18);
}

