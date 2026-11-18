// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 1

// FindOptionalDataAndSize @ 1446da110

uchar * __thiscall
FShaderCodeReader::FindOptionalDataAndSize
          (FShaderCodeReader *this,EShaderOptionalDataKey param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  uchar *puVar4;
  EShaderOptionalDataKey *pEVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (((this->ShaderCode).ArrayNum < 4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderCode.Num() >= 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                         ,0x434,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (uchar *)(*pcVar1)();
    return puVar3;
  }
  iVar6 = 0;
  if (((this->ShaderCode).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (uchar *)(*pcVar1)();
    return puVar3;
  }
  uVar7 = (ulonglong)(this->ShaderCode).ArrayNum;
  puVar3 = (this->ShaderCode).DataPtr;
  if (3 < uVar7) {
    puVar4 = TArrayView<unsigned_char_const_,int>::operator[](&this->ShaderCode,0);
    iVar6 = *(int *)(puVar4 + (uVar7 - 4));
    if ((iVar6 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalOptionalDataSize >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                           ,0x45d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
    if (((this->ShaderCode).ArrayNum < iVar6) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderCode.Num() >= LocalOptionalDataSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                           ,0x45e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  pEVar5 = puVar3 + (uVar7 - (longlong)iVar6);
  while( true ) {
    if (puVar3 + (uVar7 - 4) <= pEVar5) {
      *param_2 = -1;
      return (uchar *)0x0;
    }
    if (*pEVar5 == param_1) break;
    pEVar5 = pEVar5 + 5 + (uint)*(undefined4 *)(pEVar5 + 1);
  }
  *param_2 = *(undefined4 *)(pEVar5 + 1);
  return pEVar5 + 5;
}

