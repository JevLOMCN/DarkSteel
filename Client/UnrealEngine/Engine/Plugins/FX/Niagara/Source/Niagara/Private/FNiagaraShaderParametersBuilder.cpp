// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// AddLooseParamArray<UE::Math::TIntVector4<unsigned_int>_> @ 148e8bfa0

/* WARNING: Removing unreachable block (ram,0x000148e8c048) */

void __thiscall
FNiagaraShaderParametersBuilder::AddLooseParamArray<UE::Math::TIntVector4<unsigned_int>_>
          (FNiagaraShaderParametersBuilder *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  FString local_18;
  
  pTVar2 = this->LooseNames;
  ::FString::PrintfImpl(&local_18,L"%s_%s");
  iVar6 = pTVar2->ArrayNum;
  if (iVar6 == pTVar2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
  }
  pTVar2->ArrayNum = iVar6 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3 = this->MetadataBuilder;
  pTVar2 = this->LooseNames;
  uVar8 = pTVar2->ArrayNum - 1;
  uVar7 = 0;
  if ((int)uVar8 < pTVar2->ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  if (*(int *)(pFVar9 + (longlong)pTVar2->ArrayNum * 0x10 + -8) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = *(wchar_t **)(pFVar9 + (longlong)pTVar2->ArrayNum * 0x10 + -0x10);
  }
  piVar1 = &(pFVar3->Members).ArrayMax;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  iVar6 = (pFVar3->Members).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar6 + 1;
  uVar7 = pFVar3->NextMemberOffset;
  pFVar9 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
  *(int *)(pFVar9 + 0x24) = param_2;
  *(wchar_t **)pFVar9 = pwVar10;
  *(undefined8 *)(pFVar9 + 0x28) = 0;
  *(wchar_t **)(pFVar9 + 8) = L"";
  *(undefined4 *)(pFVar9 + 0x10) = 0x44;
  *(uint *)(pFVar9 + 0x14) = uVar7;
  *(undefined2 *)(pFVar9 + 0x18) = 3;
  *(undefined4 *)(pFVar9 + 0x1c) = 1;
  *(undefined4 *)(pFVar9 + 0x20) = 4;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + param_2 * 0x10;
  return;
}

// AddIncludedStruct @ 148f89b30

void __thiscall
FNiagaraShaderParametersBuilder::AddIncludedStruct
          (FNiagaraShaderParametersBuilder *this,FShaderParametersMetadata *param_1)

{
  TArray<FNiagaraDataInterfaceStructIncludeInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pTVar1 = this->StructIncludeInfos;
  iVar2 = pTVar1->ArrayNum;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (pTVar1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraDataInterfaceStructIncludeInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (*(FShaderParametersMetadata **)pFVar3 == param_1) {
      return;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  pTVar1 = this->StructIncludeInfos;
  iVar2 = pTVar1->ArrayNum;
  if (iVar2 == pTVar1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar2 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 0x10;
  DefaultConstructItems<FNiagaraDataInterfaceStructIncludeInfo,int>(pFVar3,1);
  *(FShaderParametersMetadata **)pFVar3 = param_1;
  *(uint *)(pFVar3 + 8) = this->MetadataBuilder->NextMemberOffset + 0xf & 0xfffffff0;
  FShaderParametersMetadataBuilder::AddIncludedStruct(this->MetadataBuilder,param_1,Float);
  return;
}

// AddLooseParamArray<UE::Math::TIntVector4<int>_> @ 14915d240

/* WARNING: Removing unreachable block (ram,0x00014915d2e8) */

void __thiscall
FNiagaraShaderParametersBuilder::AddLooseParamArray<UE::Math::TIntVector4<int>_>
          (FNiagaraShaderParametersBuilder *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  FString local_18;
  
  pTVar2 = this->LooseNames;
  ::FString::PrintfImpl(&local_18,L"%s_%s");
  iVar6 = pTVar2->ArrayNum;
  if (iVar6 == pTVar2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
  }
  pTVar2->ArrayNum = iVar6 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3 = this->MetadataBuilder;
  pTVar2 = this->LooseNames;
  uVar8 = pTVar2->ArrayNum - 1;
  uVar7 = 0;
  if ((int)uVar8 < pTVar2->ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  if (*(int *)(pFVar9 + (longlong)pTVar2->ArrayNum * 0x10 + -8) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = *(wchar_t **)(pFVar9 + (longlong)pTVar2->ArrayNum * 0x10 + -0x10);
  }
  piVar1 = &(pFVar3->Members).ArrayMax;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  iVar6 = (pFVar3->Members).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar6 + 1;
  uVar7 = pFVar3->NextMemberOffset;
  pFVar9 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
  *(int *)(pFVar9 + 0x24) = param_2;
  *(wchar_t **)pFVar9 = pwVar10;
  *(undefined8 *)(pFVar9 + 0x28) = 0;
  *(wchar_t **)(pFVar9 + 8) = L"";
  *(undefined4 *)(pFVar9 + 0x10) = 0x44;
  *(uint *)(pFVar9 + 0x14) = uVar7;
  *(undefined2 *)(pFVar9 + 0x18) = 2;
  *(undefined4 *)(pFVar9 + 0x1c) = 1;
  *(undefined4 *)(pFVar9 + 0x20) = 4;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + param_2 * 0x10;
  return;
}

