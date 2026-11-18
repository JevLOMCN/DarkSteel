// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// FindOptionalData<FShaderCodePackedResourceCounts> @ 145b8dec0

FShaderCodePackedResourceCounts * __thiscall
FShaderCodeReader::FindOptionalData<FShaderCodePackedResourceCounts>(FShaderCodeReader *this)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  FShaderCodePackedResourceCounts *pFVar4;
  uchar *puVar5;
  EShaderResourceUsageFlags *pEVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (((this->ShaderCode).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FShaderCodePackedResourceCounts *)(*pcVar2)();
    return pFVar4;
  }
  uVar8 = (ulonglong)(this->ShaderCode).ArrayNum;
  puVar1 = (this->ShaderCode).DataPtr;
  if (uVar8 < 4) {
    iVar7 = 0;
  }
  else {
    puVar5 = TArrayView<unsigned_char_const_,int>::operator[](&this->ShaderCode,0);
    iVar7 = *(int *)(puVar5 + (uVar8 - 4));
    if ((iVar7 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalOptionalDataSize >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                           ,0x45d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FShaderCodePackedResourceCounts *)(*pcVar2)();
      return pFVar4;
    }
    if (((this->ShaderCode).ArrayNum < iVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderCode.Num() >= LocalOptionalDataSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                           ,0x45e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FShaderCodePackedResourceCounts *)(*pcVar2)();
      return pFVar4;
    }
  }
  pEVar6 = puVar1 + (uVar8 - (longlong)iVar7);
  while( true ) {
    if (puVar1 + (uVar8 - 4) <= pEVar6) {
      return (FShaderCodePackedResourceCounts *)0x0;
    }
    if ((*pEVar6 == (DiagnosticBuffer|ShaderBundle|NoDerivativeOps)) && (*(uint *)(pEVar6 + 1) == 5)
       ) break;
    pEVar6 = &((FShaderCodePackedResourceCounts *)(pEVar6 + 5))->UsageFlags + *(uint *)(pEVar6 + 1);
  }
  return (FShaderCodePackedResourceCounts *)(pEVar6 + 5);
}

