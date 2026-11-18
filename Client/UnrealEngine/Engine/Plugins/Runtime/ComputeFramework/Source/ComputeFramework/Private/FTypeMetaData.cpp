// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 2

// FTypeMetaData @ 1494c4660

FTypeMetaData * __thiscall
ComputeFramework::FTypeMetaData::FTypeMetaData(FTypeMetaData *this,FShaderValueTypeHandle param_1)

{
  TArray<FShaderParametersMetadata_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FShaderParametersMetadata *pFVar8;
  FTypeMetaData *pFVar9;
  longlong lVar10;
  FShaderValueTypeHandle local_res10;
  FShaderParametersMetadata *local_48;
  TArray<FShaderParametersMetadata_*,TSizedDefaultAllocator<32>_> local_40;
  FShaderParametersMetadataBuilder local_30;
  
  pTVar1 = &this->AllocatedMetadatas;
  (this->AllocatedMetadatas).ArrayNum = 0;
  piVar2 = &(this->AllocatedMetadatas).ArrayNum;
  (this->AllocatedMetadatas).ArrayMax = 0;
  piVar3 = &(this->AllocatedMetadatas).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_30.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Members.ArrayNum = 0;
  local_30.Members.ArrayMax = 0;
  local_30.NextMemberOffset = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_res10.ValueTypePtr = param_1.ValueTypePtr;
  AddParamForType(&local_30,L"Dummy",&local_res10,&local_40);
  pFVar8 = FShaderParametersMetadataBuilder::Build(&local_30,ShaderParameterStruct,L"Dummy");
  local_48 = pFVar8;
  if ((pFVar8->Members).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FTypeMetaData *)(*pcVar5)();
      return pFVar9;
    }
  }
  this->Metadata = *(FShaderParametersMetadata **)((pFVar8->Members).AllocatorInstance.Data + 0x28);
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar3 * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FTypeMetaData *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar7 = *piVar2;
  if (iVar7 == *piVar3) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar3);
  }
  *piVar2 = iVar7 + 1;
  *(FShaderParametersMetadata **)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48
  ;
  if (pTVar1 == &local_40) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FTypeMetaData *)(*pcVar5)();
      return pFVar9;
    }
  }
  lVar10 = (longlong)local_40.ArrayNum;
  if (local_40.ArrayNum != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_40.ArrayNum,&pTVar1->AllocatorInstance,piVar2,piVar3);
    memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8,local_40.AllocatorInstance.Data,
           lVar10 << 3);
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  if (local_30.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Members.AllocatorInstance.Data);
  }
  return this;
}

// ~FTypeMetaData @ 1494c5bf0

void __thiscall ComputeFramework::FTypeMetaData::~FTypeMetaData(FTypeMetaData *this)

{
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->AllocatedMetadatas).AllocatorInstance.Data;
  iVar1 = (this->AllocatedMetadatas).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->AllocatedMetadatas).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FShaderParametersMetadata_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    puVar2 = *(undefined8 **)pFVar4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar3 = (this->AllocatedMetadatas).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

