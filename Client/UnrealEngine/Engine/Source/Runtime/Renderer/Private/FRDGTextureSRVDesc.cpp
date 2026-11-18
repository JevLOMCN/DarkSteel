// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// CreateForMipLevel @ 144b11fe0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureSRVDesc * __cdecl
FRDGTextureSRVDesc::CreateForMipLevel
          (FRDGTextureSRVDesc *__return_storage_ptr__,FRDGTexture *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  FRDGTextureSRVDesc *pFVar4;
  
  if (0x80 < param_2 + 1U) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipLevel >= -1 && MipLevel <= TNumericLimits<int8>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x302,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRDGTextureSRVDesc *)(*pcVar2)();
      return pFVar4;
    }
  }
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 2) = 1;
  *(undefined2 *)((longlong)&__return_storage_ptr__->_padding_ + 6) = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 2) = 0;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->Texture = param_1;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 2) = (param_1->Desc).field_0x30;
  cVar1 = (param_1->Desc).field_0x32;
  if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
    *(undefined2 *)((longlong)&__return_storage_ptr__->_padding_ + 6) =
         *(undefined2 *)&(param_1->Desc).field_0x2e;
  }
  *(char *)((longlong)&__return_storage_ptr__->_padding_ + 1) = (char)param_2;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 2) = 1;
  return __return_storage_ptr__;
}

// Create @ 1450c0f70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureSRVDesc * __cdecl
FRDGTextureSRVDesc::Create(FRDGTextureSRVDesc *__return_storage_ptr__,FRDGTexture *param_1)

{
  char cVar1;
  
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 2) = 1;
  *(undefined2 *)((longlong)&__return_storage_ptr__->_padding_ + 6) = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 2) = 0;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->Texture = param_1;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 2) = (param_1->Desc).field_0x30;
  cVar1 = (param_1->Desc).field_0x32;
  if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
    *(undefined2 *)((longlong)&__return_storage_ptr__->_padding_ + 6) =
         *(undefined2 *)&(param_1->Desc).field_0x2e;
  }
  return __return_storage_ptr__;
}

// FRDGTextureSRVDesc @ 145295bd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureSRVDesc * __thiscall
FRDGTextureSRVDesc::FRDGTextureSRVDesc(FRDGTextureSRVDesc *this,FRDGTexture *param_1)

{
  char cVar1;
  
  *(undefined4 *)((longlong)&this->_padding_ + 2) = 1;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->Texture = param_1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = (param_1->Desc).field_0x30;
  cVar1 = (param_1->Desc).field_0x32;
  if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
    *(undefined2 *)((longlong)&this->_padding_ + 6) = *(undefined2 *)&(param_1->Desc).field_0x2e;
  }
  return this;
}

// CreateForSlice @ 1452ba400

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureSRVDesc * __cdecl
FRDGTextureSRVDesc::CreateForSlice
          (FRDGTextureSRVDesc *__return_storage_ptr__,FRDGTexture *param_1,int param_2)

{
  undefined2 *puVar1;
  code *pcVar2;
  bool bVar3;
  FRDGTextureSRVDesc *pFVar4;
  undefined2 local_18 [8];
  
  if (param_1 == (FRDGTexture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x30c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRDGTextureSRVDesc *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((param_1->Desc).field_0x32 != '\x01') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture->Desc.Dimension == ETextureDimension::Texture2DArray",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x30d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRDGTextureSRVDesc *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((param_2 < 0) || ((int)(uint)*(ushort *)&(param_1->Desc).field_0x2e <= param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SliceIndex >= 0 && SliceIndex < Texture->Desc.ArraySize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRDGTextureSRVDesc *)(*pcVar2)();
      return pFVar4;
    }
  }
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 2) = 1;
  *(undefined2 *)((longlong)&__return_storage_ptr__->_padding_ + 6) = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 2) = 0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->Texture = param_1;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 2) = (param_1->Desc).field_0x30;
  puVar1 = (undefined2 *)((longlong)&__return_storage_ptr__->_padding_ + 1);
  *(short *)((longlong)&__return_storage_ptr__->_padding_ + 4) = (short)param_2;
  *(undefined2 *)((longlong)&__return_storage_ptr__->_padding_ + 6) = 1;
  if (local_18 != puVar1) {
    *puVar1 = 0x100;
  }
  return __return_storage_ptr__;
}

