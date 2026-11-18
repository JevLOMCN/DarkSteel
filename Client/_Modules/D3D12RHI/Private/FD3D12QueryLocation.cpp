// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// CopyResultTo @ 145a5b1a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12QueryLocation::CopyResultTo(FD3D12QueryLocation *this,void *param_1)

{
  D3D12_QUERY_TYPE DVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  size_t _Size;
  
  if (param_1 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dst",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                       ,0xa0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->Heap->NumQueries <= this->Index) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Heap->NumQueries",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                       ,0xa1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->Heap->ResultPtr == (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Heap->ResultPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  _Size = 0x58;
  DVar1 = this->Heap->QueryType;
  if ((DVar1 == D3D12_QUERY_TYPE_OCCLUSION) || (DVar1 == D3D12_QUERY_TYPE_TIMESTAMP)) {
LAB_145a5b284:
    iVar6 = 8;
  }
  else {
    if (DVar1 != D3D12_QUERY_TYPE_PIPELINE_STATISTICS) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                         ,0x4b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_145a5b284;
    }
    iVar6 = 0x58;
  }
  uVar2 = this->Index;
  DVar1 = this->Heap->QueryType;
  puVar3 = this->Heap->ResultPtr;
  if ((DVar1 != D3D12_QUERY_TYPE_OCCLUSION) && (DVar1 != D3D12_QUERY_TYPE_TIMESTAMP)) {
    if (DVar1 == D3D12_QUERY_TYPE_PIPELINE_STATISTICS) goto LAB_145a5b2d6;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                       ,0x4b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  _Size = 8;
LAB_145a5b2d6:
  memcpy(param_1,puVar3 + iVar6 * uVar2,_Size);
  return;
}

