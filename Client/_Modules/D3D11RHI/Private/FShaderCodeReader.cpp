// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 3

// FindOptionalData @ 145980920

char * __thiscall
FShaderCodeReader::FindOptionalData(FShaderCodeReader *this,EShaderOptionalDataKey param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  uchar *puVar5;
  EShaderOptionalDataKey *pEVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (((this->ShaderCode).ArrayNum < 4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderCode.Num() >= 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                         ,0x415,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pcVar4 = (char *)(*pcVar2)();
    return pcVar4;
  }
  iVar7 = 0;
  if (((this->ShaderCode).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pcVar4 = (char *)(*pcVar2)();
    return pcVar4;
  }
  uVar8 = (ulonglong)(this->ShaderCode).ArrayNum;
  puVar1 = (this->ShaderCode).DataPtr;
  if (3 < uVar8) {
    puVar5 = TArrayView<unsigned_char_const_,int>::operator[](&this->ShaderCode,0);
    iVar7 = *(int *)(puVar5 + (uVar8 - 4));
    if ((iVar7 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalOptionalDataSize >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                           ,0x45d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pcVar4 = (char *)(*pcVar2)();
      return pcVar4;
    }
    if (((this->ShaderCode).ArrayNum < iVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderCode.Num() >= LocalOptionalDataSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                           ,0x45e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pcVar4 = (char *)(*pcVar2)();
      return pcVar4;
    }
  }
  pEVar6 = puVar1 + (uVar8 - (longlong)iVar7);
  while( true ) {
    if (puVar1 + (uVar8 - 4) <= pEVar6) {
      return (char *)0x0;
    }
    if (*pEVar6 == param_1) break;
    pEVar6 = pEVar6 + 5 + (uint)*(undefined4 *)(pEVar6 + 1);
  }
  return (char *)(pEVar6 + 5);
}

// FindOptionalData @ 145980a70

uchar * __thiscall
FShaderCodeReader::FindOptionalData
          (FShaderCodeReader *this,EShaderOptionalDataKey param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  uchar *puVar4;
  EShaderOptionalDataKey *pEVar5;
  int iVar6;
  ulonglong uVar7;
  
  if ((param_2 == '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                         ,0x3f7,L""), bVar2)) {
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
      return (uchar *)0x0;
    }
    if ((*pEVar5 == param_1) && (*(undefined4 *)(pEVar5 + 1) == (uint)param_2)) break;
    pEVar5 = pEVar5 + 5 + (uint)*(undefined4 *)(pEVar5 + 1);
  }
  return pEVar5 + 5;
}

// GetActualShaderCodeSize @ 1459813d0

uint __thiscall FShaderCodeReader::GetActualShaderCodeSize(FShaderCodeReader *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uchar *puVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(this->ShaderCode).ArrayNum;
  if (uVar6 < 4) {
    return (this->ShaderCode).ArrayNum;
  }
  puVar5 = TArrayView<unsigned_char_const_,int>::operator[](&this->ShaderCode,0);
  iVar1 = *(int *)(puVar5 + (uVar6 - 4));
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalOptionalDataSize >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x45d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if ((this->ShaderCode).ArrayNum < iVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num() >= LocalOptionalDataSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x45e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (this->ShaderCode).ArrayNum - iVar1;
}

