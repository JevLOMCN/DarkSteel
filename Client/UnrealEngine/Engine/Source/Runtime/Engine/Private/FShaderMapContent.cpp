// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetShaderPipeline @ 147f7beb0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderPipeline * __thiscall
FShaderMapContent::GetShaderPipeline(FShaderMapContent *this,FShaderPipelineType *param_1)

{
  TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FShaderPipeline *pFVar6;
  ForAnyElementType FVar7;
  FProjectShaderPipelineToKey local_res8;
  
  pTVar1 = &this->ShaderPipelines;
  uVar4 = Algo::
          BinarySearchBy<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>,FHashedName,FShaderMapContent::FProjectShaderPipelineToKey,TLess<void>_>
                    (pTVar1,&param_1->HashedName,local_res8,(TLess<void>)local_res8);
  pFVar6 = (FShaderPipeline *)0x0;
  if (uVar4 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar4 < (this->ShaderPipelines).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FShaderPipeline *)(*pcVar2)();
        return pFVar6;
      }
    }
    FVar7 = pTVar1->AllocatorInstance;
    if (((ulonglong)FVar7 & 1) != 0) {
      FVar7 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar7 >> 0x18));
    }
    pFVar6 = *(FShaderPipeline **)((longlong)FVar7 + (longlong)(int)uVar4 * 8);
    if (((ulonglong)pFVar6 & 1) != 0) {
      pFVar6 = (FShaderPipeline *)
               (((longlong)pFVar6 >> 0x18) + (longlong)FVar7 + (longlong)(int)uVar4 * 8);
    }
  }
  return pFVar6;
}

