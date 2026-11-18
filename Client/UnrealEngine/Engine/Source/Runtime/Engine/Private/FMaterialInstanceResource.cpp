// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// RenderThread_FindParameterByNameInternal<float> @ 147f27320

int __thiscall
FMaterialInstanceResource::RenderThread_FindParameterByNameInternal<float>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FNameEntryId local_18;
  
  iVar8 = (this->ScalarParameterArray).HashTable.ArrayNum;
  if (iVar8 == 0) {
    if (((this->ScalarParameterArray).Array.ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueArray.Array.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                           ,0x17f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  else {
    uVar2 = (param_1->Name).ComparisonIndex;
    uVar9 = (param_1->Name).Number;
    uVar7 = ::GetTypeHash((FNameEntryId)uVar2);
    iVar1 = uVar7 + uVar9;
    uVar9 = iVar1 + ~(iVar1 * 0x8000);
    uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
    uVar9 = (int)uVar9 >> 6 ^ uVar9;
    uVar9 = uVar9 + ~(uVar9 << 0xb);
    uVar7 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar8 - 1U;
    uVar9 = 0;
    if ((int)uVar7 < (this->ScalarParameterArray).HashTable.ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    uVar4 = *(ushort *)
             ((this->ScalarParameterArray).HashTable.AllocatorInstance.Data +
             (longlong)(int)uVar7 * 2);
    if (uVar4 != 0) {
      uVar9 = uVar4 - 1;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->ScalarParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar3 = (param_1->Name).ComparisonIndex;
        pFVar10 = (this->ScalarParameterArray).Array.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 0x14;
        if ((((*(int *)pFVar10 == uVar3) && (*(uint *)(pFVar10 + 8) == (param_1->Name).Number)) &&
            ((int)*(short *)(pFVar10 + 0xc) == param_1->Index)) &&
           ((byte)((ushort)*(undefined2 *)(pFVar10 + 0xe) >> 0xe) == (param_1->Association).Value))
        {
          return uVar9;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->ScalarParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar4 = *(ushort *)
                 ((this->ScalarParameterArray).Array.AllocatorInstance.Data +
                 (longlong)(int)uVar9 * 0x14 + 0xe);
        uVar9 = uVar4 & 0x3fff;
      } while ((uVar4 & 0x3fff) != 0);
    }
  }
  return -1;
}

// RenderThread_FindParameterByNameInternal<UMaterialParameterCollection_const_*> @ 147f27560

int __thiscall
FMaterialInstanceResource::
RenderThread_FindParameterByNameInternal<UMaterialParameterCollection_const_*>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FNameEntryId local_18;
  
  iVar8 = (this->ParameterCollectionParameterArray).HashTable.ArrayNum;
  if (iVar8 == 0) {
    if (((this->ParameterCollectionParameterArray).Array.ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueArray.Array.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                           ,0x17f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  else {
    uVar2 = (param_1->Name).ComparisonIndex;
    uVar9 = (param_1->Name).Number;
    uVar7 = ::GetTypeHash((FNameEntryId)uVar2);
    iVar1 = uVar7 + uVar9;
    uVar9 = iVar1 + ~(iVar1 * 0x8000);
    uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
    uVar9 = (int)uVar9 >> 6 ^ uVar9;
    uVar9 = uVar9 + ~(uVar9 << 0xb);
    uVar7 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar8 - 1U;
    uVar9 = 0;
    if ((int)uVar7 < (this->ParameterCollectionParameterArray).HashTable.ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    uVar4 = *(ushort *)
             ((this->ParameterCollectionParameterArray).HashTable.AllocatorInstance.Data +
             (longlong)(int)uVar7 * 2);
    if (uVar4 != 0) {
      uVar9 = uVar4 - 1;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->ParameterCollectionParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar3 = (param_1->Name).ComparisonIndex;
        pFVar10 = (this->ParameterCollectionParameterArray).Array.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 0x18;
        if ((((*(int *)pFVar10 == uVar3) && (*(uint *)(pFVar10 + 8) == (param_1->Name).Number)) &&
            ((int)*(short *)(pFVar10 + 0xc) == param_1->Index)) &&
           ((byte)((ushort)*(undefined2 *)(pFVar10 + 0xe) >> 0xe) == (param_1->Association).Value))
        {
          return uVar9;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->ParameterCollectionParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar4 = *(ushort *)
                 ((this->ParameterCollectionParameterArray).Array.AllocatorInstance.Data +
                 (longlong)(int)uVar9 * 0x18 + 0xe);
        uVar9 = uVar4 & 0x3fff;
      } while ((uVar4 & 0x3fff) != 0);
    }
  }
  return -1;
}

// RenderThread_FindParameterByNameInternal<URuntimeVirtualTexture_const_*> @ 147f277a0

int __thiscall
FMaterialInstanceResource::RenderThread_FindParameterByNameInternal<URuntimeVirtualTexture_const_*>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FNameEntryId local_18;
  
  iVar8 = (this->RuntimeVirtualTextureParameterArray).HashTable.ArrayNum;
  if (iVar8 == 0) {
    if (((this->RuntimeVirtualTextureParameterArray).Array.ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueArray.Array.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                           ,0x17f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  else {
    uVar2 = (param_1->Name).ComparisonIndex;
    uVar9 = (param_1->Name).Number;
    uVar7 = ::GetTypeHash((FNameEntryId)uVar2);
    iVar1 = uVar7 + uVar9;
    uVar9 = iVar1 + ~(iVar1 * 0x8000);
    uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
    uVar9 = (int)uVar9 >> 6 ^ uVar9;
    uVar9 = uVar9 + ~(uVar9 << 0xb);
    uVar7 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar8 - 1U;
    uVar9 = 0;
    if ((int)uVar7 < (this->RuntimeVirtualTextureParameterArray).HashTable.ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    uVar4 = *(ushort *)
             ((this->RuntimeVirtualTextureParameterArray).HashTable.AllocatorInstance.Data +
             (longlong)(int)uVar7 * 2);
    if (uVar4 != 0) {
      uVar9 = uVar4 - 1;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->RuntimeVirtualTextureParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar3 = (param_1->Name).ComparisonIndex;
        pFVar10 = (this->RuntimeVirtualTextureParameterArray).Array.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 0x18;
        if ((((*(int *)pFVar10 == uVar3) && (*(uint *)(pFVar10 + 8) == (param_1->Name).Number)) &&
            ((int)*(short *)(pFVar10 + 0xc) == param_1->Index)) &&
           ((byte)((ushort)*(undefined2 *)(pFVar10 + 0xe) >> 0xe) == (param_1->Association).Value))
        {
          return uVar9;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->RuntimeVirtualTextureParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar4 = *(ushort *)
                 ((this->RuntimeVirtualTextureParameterArray).Array.AllocatorInstance.Data +
                 (longlong)(int)uVar9 * 0x18 + 0xe);
        uVar9 = uVar4 & 0x3fff;
      } while ((uVar4 & 0x3fff) != 0);
    }
  }
  return -1;
}

// RenderThread_FindParameterByNameInternal<USparseVolumeTexture_const_*> @ 147f279e0

int __thiscall
FMaterialInstanceResource::RenderThread_FindParameterByNameInternal<USparseVolumeTexture_const_*>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FNameEntryId local_18;
  
  iVar8 = (this->SparseVolumeTextureParameterArray).HashTable.ArrayNum;
  if (iVar8 == 0) {
    if (((this->SparseVolumeTextureParameterArray).Array.ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueArray.Array.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                           ,0x17f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  else {
    uVar2 = (param_1->Name).ComparisonIndex;
    uVar9 = (param_1->Name).Number;
    uVar7 = ::GetTypeHash((FNameEntryId)uVar2);
    iVar1 = uVar7 + uVar9;
    uVar9 = iVar1 + ~(iVar1 * 0x8000);
    uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
    uVar9 = (int)uVar9 >> 6 ^ uVar9;
    uVar9 = uVar9 + ~(uVar9 << 0xb);
    uVar7 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar8 - 1U;
    uVar9 = 0;
    if ((int)uVar7 < (this->SparseVolumeTextureParameterArray).HashTable.ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    uVar4 = *(ushort *)
             ((this->SparseVolumeTextureParameterArray).HashTable.AllocatorInstance.Data +
             (longlong)(int)uVar7 * 2);
    if (uVar4 != 0) {
      uVar9 = uVar4 - 1;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->SparseVolumeTextureParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar3 = (param_1->Name).ComparisonIndex;
        pFVar10 = (this->SparseVolumeTextureParameterArray).Array.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 0x18;
        if ((((*(int *)pFVar10 == uVar3) && (*(uint *)(pFVar10 + 8) == (param_1->Name).Number)) &&
            ((int)*(short *)(pFVar10 + 0xc) == param_1->Index)) &&
           ((byte)((ushort)*(undefined2 *)(pFVar10 + 0xe) >> 0xe) == (param_1->Association).Value))
        {
          return uVar9;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->SparseVolumeTextureParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar4 = *(ushort *)
                 ((this->SparseVolumeTextureParameterArray).Array.AllocatorInstance.Data +
                 (longlong)(int)uVar9 * 0x18 + 0xe);
        uVar9 = uVar4 & 0x3fff;
      } while ((uVar4 & 0x3fff) != 0);
    }
  }
  return -1;
}

// RenderThread_FindParameterByNameInternal<UTexture_const_*> @ 147f27c20

int __thiscall
FMaterialInstanceResource::RenderThread_FindParameterByNameInternal<UTexture_const_*>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FNameEntryId local_18;
  
  iVar8 = (this->TextureParameterArray).HashTable.ArrayNum;
  if (iVar8 == 0) {
    if (((this->TextureParameterArray).Array.ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueArray.Array.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                           ,0x17f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  else {
    uVar2 = (param_1->Name).ComparisonIndex;
    uVar9 = (param_1->Name).Number;
    uVar7 = ::GetTypeHash((FNameEntryId)uVar2);
    iVar1 = uVar7 + uVar9;
    uVar9 = iVar1 + ~(iVar1 * 0x8000);
    uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
    uVar9 = (int)uVar9 >> 6 ^ uVar9;
    uVar9 = uVar9 + ~(uVar9 << 0xb);
    uVar7 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar8 - 1U;
    uVar9 = 0;
    if ((int)uVar7 < (this->TextureParameterArray).HashTable.ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    uVar4 = *(ushort *)
             ((this->TextureParameterArray).HashTable.AllocatorInstance.Data +
             (longlong)(int)uVar7 * 2);
    if (uVar4 != 0) {
      uVar9 = uVar4 - 1;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->TextureParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar3 = (param_1->Name).ComparisonIndex;
        pFVar10 = (this->TextureParameterArray).Array.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 0x18;
        if ((((*(int *)pFVar10 == uVar3) && (*(uint *)(pFVar10 + 8) == (param_1->Name).Number)) &&
            ((int)*(short *)(pFVar10 + 0xc) == param_1->Index)) &&
           ((byte)((ushort)*(undefined2 *)(pFVar10 + 0xe) >> 0xe) == (param_1->Association).Value))
        {
          return uVar9;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->TextureParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar4 = *(ushort *)
                 ((this->TextureParameterArray).Array.AllocatorInstance.Data +
                 (longlong)(int)uVar9 * 0x18 + 0xe);
        uVar9 = uVar4 & 0x3fff;
      } while ((uVar4 & 0x3fff) != 0);
    }
  }
  return -1;
}

// RenderThread_FindParameterByNameInternal<UTextureCollection_const_*> @ 147f27e60

int __thiscall
FMaterialInstanceResource::RenderThread_FindParameterByNameInternal<UTextureCollection_const_*>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FNameEntryId local_18;
  
  iVar8 = (this->TextureCollectionParameterArray).HashTable.ArrayNum;
  if (iVar8 == 0) {
    if (((this->TextureCollectionParameterArray).Array.ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueArray.Array.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                           ,0x17f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  else {
    uVar2 = (param_1->Name).ComparisonIndex;
    uVar9 = (param_1->Name).Number;
    uVar7 = ::GetTypeHash((FNameEntryId)uVar2);
    iVar1 = uVar7 + uVar9;
    uVar9 = iVar1 + ~(iVar1 * 0x8000);
    uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
    uVar9 = (int)uVar9 >> 6 ^ uVar9;
    uVar9 = uVar9 + ~(uVar9 << 0xb);
    uVar7 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar8 - 1U;
    uVar9 = 0;
    if ((int)uVar7 < (this->TextureCollectionParameterArray).HashTable.ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    uVar4 = *(ushort *)
             ((this->TextureCollectionParameterArray).HashTable.AllocatorInstance.Data +
             (longlong)(int)uVar7 * 2);
    if (uVar4 != 0) {
      uVar9 = uVar4 - 1;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->TextureCollectionParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar3 = (param_1->Name).ComparisonIndex;
        pFVar10 = (this->TextureCollectionParameterArray).Array.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 0x18;
        if ((((*(int *)pFVar10 == uVar3) && (*(uint *)(pFVar10 + 8) == (param_1->Name).Number)) &&
            ((int)*(short *)(pFVar10 + 0xc) == param_1->Index)) &&
           ((byte)((ushort)*(undefined2 *)(pFVar10 + 0xe) >> 0xe) == (param_1->Association).Value))
        {
          return uVar9;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->TextureCollectionParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar4 = *(ushort *)
                 ((this->TextureCollectionParameterArray).Array.AllocatorInstance.Data +
                 (longlong)(int)uVar9 * 0x18 + 0xe);
        uVar9 = uVar4 & 0x3fff;
      } while ((uVar4 & 0x3fff) != 0);
    }
  }
  return -1;
}

// RenderThread_FindParameterByNameInternal<UE::Math::TVector4<double>_> @ 147f280a0

int __thiscall
FMaterialInstanceResource::RenderThread_FindParameterByNameInternal<UE::Math::TVector4<double>_>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FNameEntryId local_18;
  
  iVar8 = (this->DoubleVectorParameterArray).HashTable.ArrayNum;
  if (iVar8 == 0) {
    if (((this->DoubleVectorParameterArray).Array.ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueArray.Array.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                           ,0x17f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  else {
    uVar2 = (param_1->Name).ComparisonIndex;
    uVar9 = (param_1->Name).Number;
    uVar7 = ::GetTypeHash((FNameEntryId)uVar2);
    iVar1 = uVar7 + uVar9;
    uVar9 = iVar1 + ~(iVar1 * 0x8000);
    uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
    uVar9 = (int)uVar9 >> 6 ^ uVar9;
    uVar9 = uVar9 + ~(uVar9 << 0xb);
    uVar7 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar8 - 1U;
    uVar9 = 0;
    if ((int)uVar7 < (this->DoubleVectorParameterArray).HashTable.ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    uVar4 = *(ushort *)
             ((this->DoubleVectorParameterArray).HashTable.AllocatorInstance.Data +
             (longlong)(int)uVar7 * 2);
    if (uVar4 != 0) {
      uVar9 = uVar4 - 1;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->DoubleVectorParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar3 = (param_1->Name).ComparisonIndex;
        pFVar10 = (this->DoubleVectorParameterArray).Array.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 0x30;
        if ((((*(int *)pFVar10 == uVar3) && (*(uint *)(pFVar10 + 8) == (param_1->Name).Number)) &&
            ((int)*(short *)(pFVar10 + 0xc) == param_1->Index)) &&
           ((byte)((ushort)*(undefined2 *)(pFVar10 + 0xe) >> 0xe) == (param_1->Association).Value))
        {
          return uVar9;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->DoubleVectorParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar4 = *(ushort *)
                 ((this->DoubleVectorParameterArray).Array.AllocatorInstance.Data +
                 (longlong)(int)uVar9 * 0x30 + 0xe);
        uVar9 = uVar4 & 0x3fff;
      } while ((uVar4 & 0x3fff) != 0);
    }
  }
  return -1;
}

// RenderThread_FindParameterByNameInternal<FLinearColor> @ 147f282d0

int __thiscall
FMaterialInstanceResource::RenderThread_FindParameterByNameInternal<FLinearColor>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FNameEntryId local_18;
  
  iVar8 = (this->VectorParameterArray).HashTable.ArrayNum;
  if (iVar8 == 0) {
    if (((this->VectorParameterArray).Array.ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueArray.Array.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                           ,0x17f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  else {
    uVar2 = (param_1->Name).ComparisonIndex;
    uVar9 = (param_1->Name).Number;
    uVar7 = ::GetTypeHash((FNameEntryId)uVar2);
    iVar1 = uVar7 + uVar9;
    uVar9 = iVar1 + ~(iVar1 * 0x8000);
    uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
    uVar9 = (int)uVar9 >> 6 ^ uVar9;
    uVar9 = uVar9 + ~(uVar9 << 0xb);
    uVar7 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar8 - 1U;
    uVar9 = 0;
    if ((int)uVar7 < (this->VectorParameterArray).HashTable.ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    uVar4 = *(ushort *)
             ((this->VectorParameterArray).HashTable.AllocatorInstance.Data +
             (longlong)(int)uVar7 * 2);
    if (uVar4 != 0) {
      uVar9 = uVar4 - 1;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->VectorParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar3 = (param_1->Name).ComparisonIndex;
        pFVar10 = (this->VectorParameterArray).Array.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 0x20;
        if ((((*(int *)pFVar10 == uVar3) && (*(uint *)(pFVar10 + 8) == (param_1->Name).Number)) &&
            ((int)*(short *)(pFVar10 + 0xc) == param_1->Index)) &&
           ((byte)((ushort)*(undefined2 *)(pFVar10 + 0xe) >> 0xe) == (param_1->Association).Value))
        {
          return uVar9;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->VectorParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar4 = *(ushort *)
                 ((this->VectorParameterArray).Array.AllocatorInstance.Data +
                 (longlong)(int)uVar9 * 0x20 + 0xe);
        uVar9 = uVar4 & 0x3fff;
      } while ((uVar4 & 0x3fff) != 0);
    }
  }
  return -1;
}

// RenderThread_FindParameterByNameInternal<bool> @ 147f28500

int __thiscall
FMaterialInstanceResource::RenderThread_FindParameterByNameInternal<bool>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FNameEntryId local_18;
  
  iVar8 = (this->StaticSwitchParameterArray).HashTable.ArrayNum;
  if (iVar8 == 0) {
    if (((this->StaticSwitchParameterArray).Array.ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueArray.Array.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                           ,0x17f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  else {
    uVar2 = (param_1->Name).ComparisonIndex;
    uVar9 = (param_1->Name).Number;
    uVar7 = ::GetTypeHash((FNameEntryId)uVar2);
    iVar1 = uVar7 + uVar9;
    uVar9 = iVar1 + ~(iVar1 * 0x8000);
    uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
    uVar9 = (int)uVar9 >> 6 ^ uVar9;
    uVar9 = uVar9 + ~(uVar9 << 0xb);
    uVar7 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar8 - 1U;
    uVar9 = 0;
    if ((int)uVar7 < (this->StaticSwitchParameterArray).HashTable.ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    uVar4 = *(ushort *)
             ((this->StaticSwitchParameterArray).HashTable.AllocatorInstance.Data +
             (longlong)(int)uVar7 * 2);
    if (uVar4 != 0) {
      uVar9 = uVar4 - 1;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->StaticSwitchParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar3 = (param_1->Name).ComparisonIndex;
        pFVar10 = (this->StaticSwitchParameterArray).Array.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 0x14;
        if ((((*(int *)pFVar10 == uVar3) && (*(uint *)(pFVar10 + 8) == (param_1->Name).Number)) &&
            ((int)*(short *)(pFVar10 + 0xc) == param_1->Index)) &&
           ((byte)((ushort)*(undefined2 *)(pFVar10 + 0xe) >> 0xe) == (param_1->Association).Value))
        {
          return uVar9;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->StaticSwitchParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar4 = *(ushort *)
                 ((this->StaticSwitchParameterArray).Array.AllocatorInstance.Data +
                 (longlong)(int)uVar9 * 0x14 + 0xe);
        uVar9 = uVar4 & 0x3fff;
      } while ((uVar4 & 0x3fff) != 0);
    }
  }
  return -1;
}

// RenderThread_UpdateParameter<float> @ 147f28740

void __thiscall
FMaterialInstanceResource::RenderThread_UpdateParameter<float>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1,float *param_2
          )

{
  int *piVar1;
  THashedMaterialParameterMap<float> *this_00;
  ulonglong uVar2;
  float fVar3;
  FHashedMaterialParameterInfoPacked *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  FHashedMaterialParameterInfoPacked local_48;
  float local_38;
  
  FLLMScope::FLLMScope(local_res8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,MaterialInstance,true);
  FMaterialRenderProxy::InvalidateUniformExpressionCache((FMaterialRenderProxy *)this,false);
  this_00 = &this->ScalarParameterArray;
  uVar8 = RenderThread_FindParameterByNameInternal<float>(this,param_1);
  if (uVar8 == 0xffffffff) {
    local_48.Name.ComparisonIndex.Value = 0;
    local_48.Name.DisplayIndex.Value = 0;
    local_48.Name.Number = 0;
    local_48.Index = 0;
    local_48._14_2_ = 0;
    FHashedMaterialParameterInfoPacked::operator=(&local_48,param_1);
    pFVar4 = (FHashedMaterialParameterInfoPacked *)(this_00->Array).AllocatorInstance.Data;
    local_38 = *param_2;
    if ((pFVar4 <= &local_48) &&
       (&local_48 <
        (FHashedMaterialParameterInfoPacked *)
        ((longlong)pFVar4 + (longlong)(this->ScalarParameterArray).Array.ArrayMax * 0x14))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->ScalarParameterArray).Array.ArrayNum;
    piVar1 = &(this->ScalarParameterArray).Array.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x414,(ForAnyElementType *)this_00,piVar1);
    }
    (this->ScalarParameterArray).Array.ArrayNum = iVar9 + 1;
    pFVar5 = (this_00->Array).AllocatorInstance.Data;
    lVar10 = (longlong)iVar9;
    *(undefined8 *)(pFVar5 + lVar10 * 0x14) = local_48.Name._0_8_;
    *(uint *)(pFVar5 + lVar10 * 0x14 + 8) = local_48.Name.Number;
    *(ushort *)(pFVar5 + lVar10 * 0x14 + 0xe) = *(ushort *)(pFVar5 + lVar10 * 0x14 + 0xe) & 0xc000;
    *(short *)(pFVar5 + lVar10 * 0x14 + 0xc) = local_48.Index;
    *(ushort *)(pFVar5 + lVar10 * 0x14 + 0xe) = local_48._14_2_ & 0xc000;
    *(float *)(pFVar5 + lVar10 * 0x14 + 0x10) = local_38;
    if (0x4000 < (this->ScalarParameterArray).Array.ArrayNum) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueArray.Array.Num() <= (1<<14)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x117,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = (this->ScalarParameterArray).Array.ArrayNum;
    iVar9 = 1;
    if (3 < uVar8) {
      uVar2 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (iVar9 == (this->ScalarParameterArray).HashTable.ArrayNum) {
      THashedMaterialParameterMap<float>::HashAddOneItem(this_00,uVar8 - 1);
    }
    else {
      THashedMaterialParameterMap<float>::HashAddAllItems(this_00,iVar9);
    }
  }
  else {
    fVar3 = *param_2;
    uVar11 = 0;
    if ((int)uVar8 < (this->ScalarParameterArray).Array.ArrayNum) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(float *)((this_00->Array).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x14 + 0x10) = fVar3
    ;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RenderThread_UpdateParameter<UMaterialParameterCollection_const_*> @ 147f289b0

void __thiscall
FMaterialInstanceResource::RenderThread_UpdateParameter<UMaterialParameterCollection_const_*>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1,
          UMaterialParameterCollection **param_2)

{
  int *piVar1;
  THashedMaterialParameterMap<UMaterialParameterCollection_const_*> *this_00;
  ulonglong uVar2;
  UMaterialParameterCollection *pUVar3;
  FHashedMaterialParameterInfoPacked *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  FHashedMaterialParameterInfoPacked local_38;
  UMaterialParameterCollection *local_28;
  
  FLLMScope::FLLMScope(local_res8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,MaterialInstance,true);
  FMaterialRenderProxy::InvalidateUniformExpressionCache((FMaterialRenderProxy *)this,false);
  this_00 = &this->ParameterCollectionParameterArray;
  uVar8 = RenderThread_FindParameterByNameInternal<UMaterialParameterCollection_const_*>
                    (this,param_1);
  if (uVar8 == 0xffffffff) {
    local_38.Name.ComparisonIndex.Value = 0;
    local_38.Name.DisplayIndex.Value = 0;
    local_38.Name.Number = 0;
    local_38.Index = 0;
    local_38._14_2_ = 0;
    FHashedMaterialParameterInfoPacked::operator=(&local_38,param_1);
    local_28 = *param_2;
    pFVar4 = (FHashedMaterialParameterInfoPacked *)(this_00->Array).AllocatorInstance.Data;
    if ((pFVar4 <= &local_38) &&
       (&local_38 <
        (FHashedMaterialParameterInfoPacked *)
        ((longlong)pFVar4 +
        (longlong)(this->ParameterCollectionParameterArray).Array.ArrayMax * 0x18))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->ParameterCollectionParameterArray).Array.ArrayNum;
    piVar1 = &(this->ParameterCollectionParameterArray).Array.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this_00,piVar1);
    }
    (this->ParameterCollectionParameterArray).Array.ArrayNum = iVar9 + 1;
    lVar10 = (longlong)iVar9;
    pFVar5 = (this_00->Array).AllocatorInstance.Data;
    *(undefined8 *)(pFVar5 + lVar10 * 0x18) = local_38.Name._0_8_;
    *(uint *)(pFVar5 + lVar10 * 0x18 + 8) = local_38.Name.Number;
    *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) = *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) & 0xc000;
    *(short *)(pFVar5 + lVar10 * 0x18 + 0xc) = local_38.Index;
    *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) = local_38._14_2_ & 0xc000;
    *(UMaterialParameterCollection **)(pFVar5 + lVar10 * 0x18 + 0x10) = local_28;
    if (0x4000 < (this->ParameterCollectionParameterArray).Array.ArrayNum) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueArray.Array.Num() <= (1<<14)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x117,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = (this->ParameterCollectionParameterArray).Array.ArrayNum;
    iVar9 = 1;
    if (3 < uVar8) {
      uVar2 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (iVar9 == (this->ParameterCollectionParameterArray).HashTable.ArrayNum) {
      THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::HashAddOneItem
                (this_00,uVar8 - 1);
    }
    else {
      THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::HashAddAllItems
                (this_00,iVar9);
    }
  }
  else {
    pUVar3 = *param_2;
    uVar11 = 0;
    if ((int)uVar8 < (this->ParameterCollectionParameterArray).Array.ArrayNum) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(UMaterialParameterCollection **)
     ((this_00->Array).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18 + 0x10) = pUVar3;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RenderThread_UpdateParameter<URuntimeVirtualTexture_const_*> @ 147f28c00

void __thiscall
FMaterialInstanceResource::RenderThread_UpdateParameter<URuntimeVirtualTexture_const_*>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1,
          URuntimeVirtualTexture **param_2)

{
  int *piVar1;
  THashedMaterialParameterMap<URuntimeVirtualTexture_const_*> *this_00;
  ulonglong uVar2;
  URuntimeVirtualTexture *pUVar3;
  FHashedMaterialParameterInfoPacked *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  FHashedMaterialParameterInfoPacked local_38;
  URuntimeVirtualTexture *local_28;
  
  FLLMScope::FLLMScope(local_res8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,MaterialInstance,true);
  FMaterialRenderProxy::InvalidateUniformExpressionCache((FMaterialRenderProxy *)this,false);
  this_00 = &this->RuntimeVirtualTextureParameterArray;
  uVar8 = RenderThread_FindParameterByNameInternal<URuntimeVirtualTexture_const_*>(this,param_1);
  if (uVar8 == 0xffffffff) {
    local_38.Name.ComparisonIndex.Value = 0;
    local_38.Name.DisplayIndex.Value = 0;
    local_38.Name.Number = 0;
    local_38.Index = 0;
    local_38._14_2_ = 0;
    FHashedMaterialParameterInfoPacked::operator=(&local_38,param_1);
    local_28 = *param_2;
    pFVar4 = (FHashedMaterialParameterInfoPacked *)(this_00->Array).AllocatorInstance.Data;
    if ((pFVar4 <= &local_38) &&
       (&local_38 <
        (FHashedMaterialParameterInfoPacked *)
        ((longlong)pFVar4 +
        (longlong)(this->RuntimeVirtualTextureParameterArray).Array.ArrayMax * 0x18))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->RuntimeVirtualTextureParameterArray).Array.ArrayNum;
    piVar1 = &(this->RuntimeVirtualTextureParameterArray).Array.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this_00,piVar1);
    }
    (this->RuntimeVirtualTextureParameterArray).Array.ArrayNum = iVar9 + 1;
    lVar10 = (longlong)iVar9;
    pFVar5 = (this_00->Array).AllocatorInstance.Data;
    *(undefined8 *)(pFVar5 + lVar10 * 0x18) = local_38.Name._0_8_;
    *(uint *)(pFVar5 + lVar10 * 0x18 + 8) = local_38.Name.Number;
    *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) = *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) & 0xc000;
    *(short *)(pFVar5 + lVar10 * 0x18 + 0xc) = local_38.Index;
    *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) = local_38._14_2_ & 0xc000;
    *(URuntimeVirtualTexture **)(pFVar5 + lVar10 * 0x18 + 0x10) = local_28;
    if (0x4000 < (this->RuntimeVirtualTextureParameterArray).Array.ArrayNum) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueArray.Array.Num() <= (1<<14)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x117,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = (this->RuntimeVirtualTextureParameterArray).Array.ArrayNum;
    iVar9 = 1;
    if (3 < uVar8) {
      uVar2 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (iVar9 == (this->RuntimeVirtualTextureParameterArray).HashTable.ArrayNum) {
      THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::HashAddOneItem(this_00,uVar8 - 1)
      ;
    }
    else {
      THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::HashAddAllItems(this_00,iVar9);
    }
  }
  else {
    pUVar3 = *param_2;
    uVar11 = 0;
    if ((int)uVar8 < (this->RuntimeVirtualTextureParameterArray).Array.ArrayNum) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(URuntimeVirtualTexture **)
     ((this_00->Array).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18 + 0x10) = pUVar3;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RenderThread_UpdateParameter<USparseVolumeTexture_const_*> @ 147f28e50

void __thiscall
FMaterialInstanceResource::RenderThread_UpdateParameter<USparseVolumeTexture_const_*>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1,
          USparseVolumeTexture **param_2)

{
  int *piVar1;
  THashedMaterialParameterMap<USparseVolumeTexture_const_*> *this_00;
  ulonglong uVar2;
  USparseVolumeTexture *pUVar3;
  FHashedMaterialParameterInfoPacked *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  FHashedMaterialParameterInfoPacked local_38;
  USparseVolumeTexture *local_28;
  
  FLLMScope::FLLMScope(local_res8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,MaterialInstance,true);
  FMaterialRenderProxy::InvalidateUniformExpressionCache((FMaterialRenderProxy *)this,false);
  this_00 = &this->SparseVolumeTextureParameterArray;
  uVar8 = RenderThread_FindParameterByNameInternal<USparseVolumeTexture_const_*>(this,param_1);
  if (uVar8 == 0xffffffff) {
    local_38.Name.ComparisonIndex.Value = 0;
    local_38.Name.DisplayIndex.Value = 0;
    local_38.Name.Number = 0;
    local_38.Index = 0;
    local_38._14_2_ = 0;
    FHashedMaterialParameterInfoPacked::operator=(&local_38,param_1);
    local_28 = *param_2;
    pFVar4 = (FHashedMaterialParameterInfoPacked *)(this_00->Array).AllocatorInstance.Data;
    if ((pFVar4 <= &local_38) &&
       (&local_38 <
        (FHashedMaterialParameterInfoPacked *)
        ((longlong)pFVar4 +
        (longlong)(this->SparseVolumeTextureParameterArray).Array.ArrayMax * 0x18))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->SparseVolumeTextureParameterArray).Array.ArrayNum;
    piVar1 = &(this->SparseVolumeTextureParameterArray).Array.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this_00,piVar1);
    }
    (this->SparseVolumeTextureParameterArray).Array.ArrayNum = iVar9 + 1;
    lVar10 = (longlong)iVar9;
    pFVar5 = (this_00->Array).AllocatorInstance.Data;
    *(undefined8 *)(pFVar5 + lVar10 * 0x18) = local_38.Name._0_8_;
    *(uint *)(pFVar5 + lVar10 * 0x18 + 8) = local_38.Name.Number;
    *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) = *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) & 0xc000;
    *(short *)(pFVar5 + lVar10 * 0x18 + 0xc) = local_38.Index;
    *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) = local_38._14_2_ & 0xc000;
    *(USparseVolumeTexture **)(pFVar5 + lVar10 * 0x18 + 0x10) = local_28;
    if (0x4000 < (this->SparseVolumeTextureParameterArray).Array.ArrayNum) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueArray.Array.Num() <= (1<<14)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x117,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = (this->SparseVolumeTextureParameterArray).Array.ArrayNum;
    iVar9 = 1;
    if (3 < uVar8) {
      uVar2 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (iVar9 == (this->SparseVolumeTextureParameterArray).HashTable.ArrayNum) {
      THashedMaterialParameterMap<USparseVolumeTexture_const_*>::HashAddOneItem(this_00,uVar8 - 1);
    }
    else {
      THashedMaterialParameterMap<USparseVolumeTexture_const_*>::HashAddAllItems(this_00,iVar9);
    }
  }
  else {
    pUVar3 = *param_2;
    uVar11 = 0;
    if ((int)uVar8 < (this->SparseVolumeTextureParameterArray).Array.ArrayNum) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(USparseVolumeTexture **)
     ((this_00->Array).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18 + 0x10) = pUVar3;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RenderThread_UpdateParameter<UTexture_const_*> @ 147f290a0

void __thiscall
FMaterialInstanceResource::RenderThread_UpdateParameter<UTexture_const_*>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1,
          UTexture **param_2)

{
  int *piVar1;
  THashedMaterialParameterMap<UTexture_const_*> *this_00;
  ulonglong uVar2;
  UTexture *pUVar3;
  FHashedMaterialParameterInfoPacked *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  FHashedMaterialParameterInfoPacked local_38;
  UTexture *local_28;
  
  FLLMScope::FLLMScope(local_res8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,MaterialInstance,true);
  FMaterialRenderProxy::InvalidateUniformExpressionCache((FMaterialRenderProxy *)this,false);
  this_00 = &this->TextureParameterArray;
  uVar8 = RenderThread_FindParameterByNameInternal<UTexture_const_*>(this,param_1);
  if (uVar8 == 0xffffffff) {
    local_38.Name.ComparisonIndex.Value = 0;
    local_38.Name.DisplayIndex.Value = 0;
    local_38.Name.Number = 0;
    local_38.Index = 0;
    local_38._14_2_ = 0;
    FHashedMaterialParameterInfoPacked::operator=(&local_38,param_1);
    local_28 = *param_2;
    pFVar4 = (FHashedMaterialParameterInfoPacked *)(this_00->Array).AllocatorInstance.Data;
    if ((pFVar4 <= &local_38) &&
       (&local_38 <
        (FHashedMaterialParameterInfoPacked *)
        ((longlong)pFVar4 + (longlong)(this->TextureParameterArray).Array.ArrayMax * 0x18))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->TextureParameterArray).Array.ArrayNum;
    piVar1 = &(this->TextureParameterArray).Array.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this_00,piVar1);
    }
    (this->TextureParameterArray).Array.ArrayNum = iVar9 + 1;
    lVar10 = (longlong)iVar9;
    pFVar5 = (this_00->Array).AllocatorInstance.Data;
    *(undefined8 *)(pFVar5 + lVar10 * 0x18) = local_38.Name._0_8_;
    *(uint *)(pFVar5 + lVar10 * 0x18 + 8) = local_38.Name.Number;
    *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) = *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) & 0xc000;
    *(short *)(pFVar5 + lVar10 * 0x18 + 0xc) = local_38.Index;
    *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) = local_38._14_2_ & 0xc000;
    *(UTexture **)(pFVar5 + lVar10 * 0x18 + 0x10) = local_28;
    if (0x4000 < (this->TextureParameterArray).Array.ArrayNum) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueArray.Array.Num() <= (1<<14)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x117,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = (this->TextureParameterArray).Array.ArrayNum;
    iVar9 = 1;
    if (3 < uVar8) {
      uVar2 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (iVar9 == (this->TextureParameterArray).HashTable.ArrayNum) {
      THashedMaterialParameterMap<UTexture_const_*>::HashAddOneItem(this_00,uVar8 - 1);
    }
    else {
      THashedMaterialParameterMap<UTexture_const_*>::HashAddAllItems(this_00,iVar9);
    }
  }
  else {
    pUVar3 = *param_2;
    uVar11 = 0;
    if ((int)uVar8 < (this->TextureParameterArray).Array.ArrayNum) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(UTexture **)((this_00->Array).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18 + 0x10) =
         pUVar3;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RenderThread_UpdateParameter<UTextureCollection_const_*> @ 147f292f0

void __thiscall
FMaterialInstanceResource::RenderThread_UpdateParameter<UTextureCollection_const_*>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1,
          UTextureCollection **param_2)

{
  int *piVar1;
  THashedMaterialParameterMap<UTextureCollection_const_*> *this_00;
  ulonglong uVar2;
  UTextureCollection *pUVar3;
  FHashedMaterialParameterInfoPacked *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  FHashedMaterialParameterInfoPacked local_38;
  UTextureCollection *local_28;
  
  FLLMScope::FLLMScope(local_res8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,MaterialInstance,true);
  FMaterialRenderProxy::InvalidateUniformExpressionCache((FMaterialRenderProxy *)this,false);
  this_00 = &this->TextureCollectionParameterArray;
  uVar8 = RenderThread_FindParameterByNameInternal<UTextureCollection_const_*>(this,param_1);
  if (uVar8 == 0xffffffff) {
    local_38.Name.ComparisonIndex.Value = 0;
    local_38.Name.DisplayIndex.Value = 0;
    local_38.Name.Number = 0;
    local_38.Index = 0;
    local_38._14_2_ = 0;
    FHashedMaterialParameterInfoPacked::operator=(&local_38,param_1);
    local_28 = *param_2;
    pFVar4 = (FHashedMaterialParameterInfoPacked *)(this_00->Array).AllocatorInstance.Data;
    if ((pFVar4 <= &local_38) &&
       (&local_38 <
        (FHashedMaterialParameterInfoPacked *)
        ((longlong)pFVar4 + (longlong)(this->TextureCollectionParameterArray).Array.ArrayMax * 0x18)
       )) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->TextureCollectionParameterArray).Array.ArrayNum;
    piVar1 = &(this->TextureCollectionParameterArray).Array.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this_00,piVar1);
    }
    (this->TextureCollectionParameterArray).Array.ArrayNum = iVar9 + 1;
    lVar10 = (longlong)iVar9;
    pFVar5 = (this_00->Array).AllocatorInstance.Data;
    *(undefined8 *)(pFVar5 + lVar10 * 0x18) = local_38.Name._0_8_;
    *(uint *)(pFVar5 + lVar10 * 0x18 + 8) = local_38.Name.Number;
    *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) = *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) & 0xc000;
    *(short *)(pFVar5 + lVar10 * 0x18 + 0xc) = local_38.Index;
    *(ushort *)(pFVar5 + lVar10 * 0x18 + 0xe) = local_38._14_2_ & 0xc000;
    *(UTextureCollection **)(pFVar5 + lVar10 * 0x18 + 0x10) = local_28;
    if (0x4000 < (this->TextureCollectionParameterArray).Array.ArrayNum) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueArray.Array.Num() <= (1<<14)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x117,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = (this->TextureCollectionParameterArray).Array.ArrayNum;
    iVar9 = 1;
    if (3 < uVar8) {
      uVar2 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (iVar9 == (this->TextureCollectionParameterArray).HashTable.ArrayNum) {
      THashedMaterialParameterMap<UTextureCollection_const_*>::HashAddOneItem(this_00,uVar8 - 1);
    }
    else {
      THashedMaterialParameterMap<UTextureCollection_const_*>::HashAddAllItems(this_00,iVar9);
    }
  }
  else {
    pUVar3 = *param_2;
    uVar11 = 0;
    if ((int)uVar8 < (this->TextureCollectionParameterArray).Array.ArrayNum) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(UTextureCollection **)
     ((this_00->Array).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18 + 0x10) = pUVar3;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RenderThread_UpdateParameter<UE::Math::TVector4<double>_> @ 147f29540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FMaterialInstanceResource::RenderThread_UpdateParameter<UE::Math::TVector4<double>_>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1,
          TVector4<double> *param_2)

{
  int *piVar1;
  THashedMaterialParameterMap<UE::Math::TVector4<double>_> *this_00;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FHashedMaterialParameterInfoPacked *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  FHashedMaterialParameterInfoPacked local_68;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  FLLMScope::FLLMScope(local_res8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,MaterialInstance,true);
  FMaterialRenderProxy::InvalidateUniformExpressionCache((FMaterialRenderProxy *)this,false);
  this_00 = &this->DoubleVectorParameterArray;
  uVar12 = RenderThread_FindParameterByNameInternal<UE::Math::TVector4<double>_>(this,param_1);
  if (uVar12 == 0xffffffff) {
    local_48 = (double)___xmm_3ff00000000000000000000000000000;
    dStack_40 = (double)_UNK_15061cbc8;
    local_58 = 0.0;
    dStack_50 = 0.0;
    local_68.Name.ComparisonIndex.Value = 0;
    local_68.Name.DisplayIndex.Value = 0;
    local_68.Name.Number = 0;
    local_68.Index = 0;
    local_68._14_2_ = 0;
    FHashedMaterialParameterInfoPacked::operator=(&local_68,param_1);
    pFVar5 = (FHashedMaterialParameterInfoPacked *)(this_00->Array).AllocatorInstance.Data;
    local_58 = (param_2->field0_0x0)._s_0.X;
    dStack_50 = (param_2->field0_0x0)._s_0.Y;
    local_48 = (param_2->field0_0x0)._s_0.Z;
    dStack_40 = (param_2->field0_0x0)._s_0.W;
    if ((pFVar5 <= &local_68) &&
       (&local_68 < pFVar5 + (longlong)(this->DoubleVectorParameterArray).Array.ArrayMax * 3)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar14 = (this->DoubleVectorParameterArray).Array.ArrayNum;
    piVar1 = &(this->DoubleVectorParameterArray).Array.ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1030,(ForAnyElementType *)this_00,piVar1);
    }
    (this->DoubleVectorParameterArray).Array.ArrayNum = iVar14 + 1;
    pFVar3 = (this_00->Array).AllocatorInstance.Data;
    lVar15 = (longlong)iVar14 * 0x30;
    *(undefined8 *)(pFVar3 + lVar15) = local_68.Name._0_8_;
    *(uint *)(pFVar3 + lVar15 + 8) = local_68.Name.Number;
    *(ushort *)(pFVar3 + lVar15 + 0xe) = *(ushort *)(pFVar3 + lVar15 + 0xe) & 0xc000;
    *(short *)(pFVar3 + lVar15 + 0xc) = local_68.Index;
    *(ushort *)(pFVar3 + lVar15 + 0xe) = local_68._14_2_ & 0xc000;
    *(double *)(pFVar3 + lVar15 + 0x10) = local_58;
    *(double *)(pFVar3 + lVar15 + 0x10 + 8) = dStack_50;
    *(double *)(pFVar3 + lVar15 + 0x20) = local_48;
    *(double *)(pFVar3 + lVar15 + 0x20 + 8) = dStack_40;
    if (0x4000 < (this->DoubleVectorParameterArray).Array.ArrayNum) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ValueArray.Array.Num() <= (1<<14)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                          ,0x117,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar12 = (this->DoubleVectorParameterArray).Array.ArrayNum;
    iVar14 = 1;
    if (3 < uVar12) {
      uVar2 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar15 & 0x1f);
    }
    if (iVar14 == (this->DoubleVectorParameterArray).HashTable.ArrayNum) {
      THashedMaterialParameterMap<UE::Math::TVector4<double>_>::HashAddOneItem(this_00,uVar12 - 1);
    }
    else {
      THashedMaterialParameterMap<UE::Math::TVector4<double>_>::HashAddAllItems(this_00,iVar14);
    }
  }
  else {
    dVar7 = (param_2->field0_0x0)._s_0.X;
    dVar8 = (param_2->field0_0x0)._s_0.Y;
    dVar9 = (param_2->field0_0x0)._s_0.Z;
    dVar10 = (param_2->field0_0x0)._s_0.W;
    uVar13 = 0;
    if ((int)uVar12 < (this->DoubleVectorParameterArray).Array.ArrayNum) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = (this_00->Array).AllocatorInstance.Data;
    pFVar3 = pFVar4 + (longlong)(int)uVar12 * 0x30 + 0x10;
    *(double *)pFVar3 = dVar7;
    *(double *)(pFVar3 + 8) = dVar8;
    pFVar4 = pFVar4 + (longlong)(int)uVar12 * 0x30 + 0x20;
    *(double *)pFVar4 = dVar9;
    *(double *)(pFVar4 + 8) = dVar10;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RenderThread_UpdateParameter<FLinearColor> @ 147f29800

void __thiscall
FMaterialInstanceResource::RenderThread_UpdateParameter<FLinearColor>
          (FMaterialInstanceResource *this,FMemoryImageMaterialParameterInfo *param_1,
          FLinearColor *param_2)

{
  int *piVar1;
  THashedMaterialParameterMap<FLinearColor> *this_00;
  ulonglong uVar2;
  FHashedMaterialParameterInfoPacked *pFVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  FHashedMaterialParameterInfoPacked local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FLLMScope::FLLMScope(local_res8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,MaterialInstance,true);
  FMaterialRenderProxy::InvalidateUniformExpressionCache((FMaterialRenderProxy *)this,false);
  this_00 = &this->VectorParameterArray;
  uVar11 = RenderThread_FindParameterByNameInternal<FLinearColor>(this,param_1);
  if (uVar11 == 0xffffffff) {
    local_38.Name.ComparisonIndex.Value = 0;
    local_38.Name.DisplayIndex.Value = 0;
    local_38.Name.Number = 0;
    local_38.Index = 0;
    local_38._14_2_ = 0;
    FHashedMaterialParameterInfoPacked::operator=(&local_38,param_1);
    local_28 = *(undefined8 *)&param_2->field0_0x0;
    uStack_20 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    pFVar3 = (FHashedMaterialParameterInfoPacked *)(this_00->Array).AllocatorInstance.Data;
    if (((pFVar3 <= &local_38) &&
        (&local_38 < pFVar3 + (longlong)(this->VectorParameterArray).Array.ArrayMax * 2)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar13 = (this->VectorParameterArray).Array.ArrayNum;
    piVar1 = &(this->VectorParameterArray).Array.ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x420,(ForAnyElementType *)this_00,piVar1);
    }
    (this->VectorParameterArray).Array.ArrayNum = iVar13 + 1;
    pFVar14 = (this_00->Array).AllocatorInstance.Data + (longlong)iVar13 * 0x20;
    *(undefined8 *)pFVar14 = local_38.Name._0_8_;
    *(uint *)(pFVar14 + 8) = local_38.Name.Number;
    *(ushort *)(pFVar14 + 0xe) = *(ushort *)(pFVar14 + 0xe) & 0xc000;
    *(short *)(pFVar14 + 0xc) = local_38.Index;
    *(ushort *)(pFVar14 + 0xe) = local_38._14_2_ & 0xc000;
    *(undefined8 *)(pFVar14 + 0x10) = local_28;
    *(undefined8 *)(pFVar14 + 0x18) = uStack_20;
    if ((0x4000 < (this->VectorParameterArray).Array.ArrayNum) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ValueArray.Array.Num() <= (1<<14)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                            ,0x117,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = (this->VectorParameterArray).Array.ArrayNum;
    iVar13 = 1;
    if (3 < uVar11) {
      uVar2 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (iVar13 == (this->VectorParameterArray).HashTable.ArrayNum) {
      THashedMaterialParameterMap<FLinearColor>::HashAddOneItem(this_00,uVar11 - 1);
    }
    else {
      THashedMaterialParameterMap<FLinearColor>::HashAddAllItems(this_00,iVar13);
    }
  }
  else {
    fVar6 = (param_2->field0_0x0)._s_0.R;
    fVar7 = (param_2->field0_0x0)._s_0.G;
    fVar8 = (param_2->field0_0x0)._s_0.B;
    fVar9 = (param_2->field0_0x0)._s_0.A;
    uVar12 = 0;
    if ((int)uVar11 < (this->VectorParameterArray).Array.ArrayNum) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar14 = (this_00->Array).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x20 + 0x10;
    *(float *)pFVar14 = fVar6;
    *(float *)(pFVar14 + 4) = fVar7;
    *(float *)(pFVar14 + 8) = fVar8;
    *(float *)(pFVar14 + 0xc) = fVar9;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// FMaterialInstanceResource @ 147f29fe0

FMaterialInstanceResource * __thiscall
FMaterialInstanceResource::FMaterialInstanceResource
          (FMaterialInstanceResource *this,UMaterialInstance *param_1)

{
  FName local_res8;
  FString local_18;
  
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,&local_18);
  FMaterialRenderProxy::FMaterialRenderProxy((FMaterialRenderProxy *)this,&local_18);
  this->Owner = param_1;
  this->_padding_ = (longlong)&___7FMaterialInstanceResource__6B_;
  this->Parent = (UMaterialInterface *)0x0;
  this->GameThreadParent = (UMaterialInterface *)0x0;
  (this->StaticSwitchParameterArray).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticSwitchParameterArray).Array.ArrayNum = 0;
  (this->StaticSwitchParameterArray).Array.ArrayMax = 0;
  (this->StaticSwitchParameterArray).HashTable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticSwitchParameterArray).HashTable.ArrayNum = 0;
  (this->StaticSwitchParameterArray).HashTable.ArrayMax = 0;
  (this->VectorParameterArray).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameterArray).Array.ArrayNum = 0;
  (this->VectorParameterArray).Array.ArrayMax = 0;
  (this->VectorParameterArray).HashTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameterArray).HashTable.ArrayNum = 0;
  (this->VectorParameterArray).HashTable.ArrayMax = 0;
  (this->DoubleVectorParameterArray).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleVectorParameterArray).Array.ArrayNum = 0;
  (this->DoubleVectorParameterArray).Array.ArrayMax = 0;
  (this->DoubleVectorParameterArray).HashTable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DoubleVectorParameterArray).HashTable.ArrayNum = 0;
  (this->DoubleVectorParameterArray).HashTable.ArrayMax = 0;
  (this->ScalarParameterArray).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameterArray).Array.ArrayNum = 0;
  (this->ScalarParameterArray).Array.ArrayMax = 0;
  (this->ScalarParameterArray).HashTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameterArray).HashTable.ArrayNum = 0;
  (this->ScalarParameterArray).HashTable.ArrayMax = 0;
  (this->TextureParameterArray).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureParameterArray).Array.ArrayNum = 0;
  (this->TextureParameterArray).Array.ArrayMax = 0;
  (this->TextureParameterArray).HashTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureParameterArray).HashTable.ArrayNum = 0;
  (this->TextureParameterArray).HashTable.ArrayMax = 0;
  (this->TextureCollectionParameterArray).Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextureCollectionParameterArray).Array.ArrayNum = 0;
  (this->TextureCollectionParameterArray).Array.ArrayMax = 0;
  (this->TextureCollectionParameterArray).HashTable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextureCollectionParameterArray).HashTable.ArrayNum = 0;
  (this->TextureCollectionParameterArray).HashTable.ArrayMax = 0;
  (this->RuntimeVirtualTextureParameterArray).Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextureParameterArray).Array.ArrayNum = 0;
  (this->RuntimeVirtualTextureParameterArray).Array.ArrayMax = 0;
  (this->RuntimeVirtualTextureParameterArray).HashTable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextureParameterArray).HashTable.ArrayNum = 0;
  (this->RuntimeVirtualTextureParameterArray).HashTable.ArrayMax = 0;
  (this->SparseVolumeTextureParameterArray).Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SparseVolumeTextureParameterArray).Array.ArrayNum = 0;
  (this->SparseVolumeTextureParameterArray).Array.ArrayMax = 0;
  (this->SparseVolumeTextureParameterArray).HashTable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SparseVolumeTextureParameterArray).HashTable.ArrayNum = 0;
  (this->SparseVolumeTextureParameterArray).HashTable.ArrayMax = 0;
  (this->ParameterCollectionParameterArray).Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterCollectionParameterArray).Array.ArrayNum = 0;
  (this->ParameterCollectionParameterArray).Array.ArrayMax = 0;
  (this->ParameterCollectionParameterArray).HashTable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterCollectionParameterArray).HashTable.ArrayNum = 0;
  (this->ParameterCollectionParameterArray).HashTable.ArrayMax = 0;
  (this->ParentLayerIndexRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentLayerIndexRemap).ArrayNum = 0;
  (this->ParentLayerIndexRemap).ArrayMax = 0;
  (this->UserSceneTextureOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserSceneTextureOverrides).ArrayNum = 0;
  (this->UserSceneTextureOverrides).ArrayMax = 0;
  (this->PostProcessBlendableOverrides).bOverrideBlendableLocation = false;
  (this->PostProcessBlendableOverrides).bOverrideBlendablePriority = false;
  (this->PostProcessBlendableOverrides).BlendableLocationOverride.Value = '\0';
  (this->PostProcessBlendableOverrides).BlendablePriorityOverride = 0;
  return this;
}

// ~FMaterialInstanceResource @ 147f2eda0

void __thiscall
FMaterialInstanceResource::~FMaterialInstanceResource(FMaterialInstanceResource *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UserSceneTextureOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentLayerIndexRemap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParameterCollectionParameterArray).HashTable.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParameterCollectionParameterArray).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SparseVolumeTextureParameterArray).HashTable.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SparseVolumeTextureParameterArray).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RuntimeVirtualTextureParameterArray).HashTable.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RuntimeVirtualTextureParameterArray).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureCollectionParameterArray).HashTable.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureCollectionParameterArray).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureParameterArray).HashTable.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureParameterArray).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalarParameterArray).HashTable.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalarParameterArray).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DoubleVectorParameterArray).HashTable.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DoubleVectorParameterArray).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorParameterArray).HashTable.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorParameterArray).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticSwitchParameterArray).HashTable.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticSwitchParameterArray).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMaterialRenderProxy::~FMaterialRenderProxy((FMaterialRenderProxy *)this);
  return;
}

// EvaluateParameterCollections @ 147f38700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialInstanceResource::EvaluateParameterCollections
          (FMaterialInstanceResource *this,FRHICommandListBase *param_1,
          FUniformExpressionCache *param_2,FMaterialRenderContext *param_3,
          FUniformExpressionCacheAsyncUpdater *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  
  FMaterialRenderProxy::EvaluateParameterCollections
            ((FMaterialRenderProxy *)this,param_1,param_2,param_3,param_4);
  iVar2 = (param_2->ParameterCollections).ArrayNum;
  pFVar7 = (param_2->ParameterCollections).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x10;
  do {
    if ((param_2->ParameterCollections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar8) {
      return;
    }
    iVar3 = (this->ParameterCollectionParameterArray).Array.ArrayNum;
    pFVar6 = (this->ParameterCollectionParameterArray).Array.AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((this->ParameterCollectionParameterArray).Array.ArrayNum != iVar3) {
        `TCheckedPointerIterator<THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::TNamedParameter_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar1) break;
      lVar5 = *(longlong *)(pFVar6 + 0x10);
      if (lVar5 != 0) {
        do {
          if (((*(int *)pFVar7 == *(int *)(lVar5 + 0x28) &&
               *(int *)(pFVar7 + 0xc) == *(int *)(lVar5 + 0x34)) &&
              *(int *)(pFVar7 + 8) == *(int *)(lVar5 + 0x30)) &&
              *(int *)(pFVar7 + 4) == *(int *)(lVar5 + 0x2c)) {
            uVar4 = *(undefined8 *)(*(longlong *)(pFVar6 + 0x10) + 0x30);
            *(undefined8 *)pFVar7 = *(undefined8 *)(*(longlong *)(pFVar6 + 0x10) + 0x28);
            *(undefined8 *)(pFVar7 + 8) = uVar4;
            goto LAB_147f387ea;
          }
          lVar5 = *(longlong *)(lVar5 + 0x58);
        } while (lVar5 != 0);
      }
      pFVar6 = pFVar6 + 0x18;
    }
LAB_147f387ea:
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// FinishCacheUniformExpressions @ 147f390b0

void __thiscall
FMaterialInstanceResource::FinishCacheUniformExpressions(FMaterialInstanceResource *this)

{
  this->Owner->bCachingUniformExpressions = false;
  return;
}

// GameThread_Destroy @ 147f393a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMaterialInstanceResource::GameThread_Destroy(FMaterialInstanceResource *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FMaterialInstanceResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FMaterialInstanceResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMaterialInstanceResource::GameThread_Destroy'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMaterialInstanceResource::GameThread_Destroy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMaterialInstanceResource::GameThread_Destroy_::__l2::TSTR_FDestroyMaterialInstanceResourceCommand179>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FMaterialInstanceResource::GameThread_Destroy'::__l2::TSTR_FDestroyMaterialInstanceResourceCommand179>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// GameThread_SetParent @ 147f3abe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMaterialInstanceResource::GameThread_SetParent
          (FMaterialInstanceResource *this,UMaterialInterface *param_1)

{
  UMaterialInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FMaterialInstanceResource *pFStack_70;
  UMaterialInterface *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FMaterialInstanceResource *pFStack_40;
  UMaterialInterface *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pUVar1 = this->GameThreadParent;
  if (pUVar1 != param_1) {
    this->GameThreadParent = param_1;
    if (param_1 == (UMaterialInterface *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentMaterialInterface != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                         ,0x1da,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMaterialInstanceResource::GameThread_SetParent'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMaterialInstanceResource::GameThread_SetParent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    local_68 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMaterialInstanceResource::GameThread_SetParent_::__l5::TSTR_InitMaterialInstanceResource476>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FMaterialInstanceResource::GameThread_SetParent'::__l5::TSTR_InitMaterialInstanceResource476>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    if (pUVar1 != (UMaterialInterface *)0x0) {
      FRenderCommandFence::BeginFence(&pUVar1->ParentRefFence,RenderThread);
    }
  }
  return;
}

// GameThread_UpdateCachedData @ 147f3adb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMaterialInstanceResource::GameThread_UpdateCachedData
          (FMaterialInstanceResource *this,FMaterialInstanceCachedData *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  code **ppcVar5;
  ulonglong uVar6;
  undefined1 auStackY_e8 [32];
  ForAnyElementType local_a0;
  undefined8 local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  iVar1 = (param_1->ParentLayerIndexRemap).ArrayNum;
  _Src = (param_1->ParentLayerIndexRemap).AllocatorInstance.Data;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = CONCAT44(local_98._4_4_,iVar1);
  if (iVar1 == 0) {
    local_98 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,&local_a0,iVar1,(int *)((longlong)&local_98 + 4));
    memcpy(local_a0.Data,_Src,(longlong)iVar1 << 2);
  }
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x20,8);
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FMaterialInstanceResource::GameThread_UpdateCachedData'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_60[1] = (code *)this;
  local_60[2] = (code *)0x0;
  local_60[2] = (code *)local_a0.Data;
  local_a0.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(local_60 + 3) = (undefined4)local_98;
  *(undefined4 *)((longlong)local_60 + 0x1c) = local_98._4_4_;
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMaterialInstanceResource::GameThread_UpdateCachedData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  local_98 = 0;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMaterialInstanceResource::GameThread_UpdateCachedData_::__l2::TSTR_MaterialInstanceResource_UpdateCachedData493>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FMaterialInstanceResource::GameThread_UpdateCachedData'::__l2::TSTR_MaterialInstanceResource_UpdateCachedData493>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar5 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar5 = local_30;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar5 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar5 = local_60;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  return;
}

// GetBlendableLocation @ 147f3f0d0

/* WARNING: Enum "EBlendableLocation": Some values do not have unique names */

EBlendableLocation __thiscall
FMaterialInstanceResource::GetBlendableLocation(FMaterialInstanceResource *this,FMaterial *param_1)

{
  code *pcVar1;
  bool bVar2;
  EBlendableLocation EVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_1 == (FMaterial *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Base",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                       ,0x19b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  if (((this->PostProcessBlendableOverrides).bOverrideBlendableLocation != false) &&
     ((this->PostProcessBlendableOverrides).BlendableLocationOverride.Value != '\x03')) {
    iVar4 = (**(code **)(param_1->_padding_ + 0x430))(param_1);
    if (iVar4 == 3) {
      return BL_ReplacingTonemapper;
    }
    return (EBlendableLocation)(this->PostProcessBlendableOverrides).BlendableLocationOverride.Value
    ;
  }
  if (this->Parent != (UMaterialInterface *)0x0) {
    plVar5 = (longlong *)(**(code **)(this->Parent->_padding_ + 0x310))();
                    /* WARNING: Could not recover jumptable at 0x000147f3f177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,param_1,*(code **)(*plVar5 + 0x58));
    return EVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f3f18a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(param_1->_padding_ + 0x430))(param_1);
  return EVar3;
}

// GetBlendablePriority @ 147f3f2b0

int __thiscall
FMaterialInstanceResource::GetBlendablePriority(FMaterialInstanceResource *this,FMaterial *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_1 == (FMaterial *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Base",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                       ,0x1b5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if ((this->PostProcessBlendableOverrides).bOverrideBlendablePriority != false) {
    return (this->PostProcessBlendableOverrides).BlendablePriorityOverride;
  }
  if (this->Parent != (UMaterialInterface *)0x0) {
    plVar4 = (longlong *)(**(code **)(this->Parent->_padding_ + 0x310))();
                    /* WARNING: Could not recover jumptable at 0x000147f3f331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,param_1,*(code **)(*plVar4 + 0x60));
    return iVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f3f344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(param_1->_padding_ + 0x438))(param_1);
  return iVar3;
}

// GetFallback @ 147f3fa60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FMaterialRenderProxy * __thiscall
FMaterialInstanceResource::GetFallback(FMaterialInstanceResource *this,Type param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  EMaterialDomain EVar1;
  FCachedSystemScalabilityCVars *pFVar2;
  FMaterialResource *pFVar3;
  longlong *plVar4;
  UMaterial *pUVar5;
  FMaterialRenderProxy *pFVar6;
  EShaderPlatform EVar7;
  
  if (this->Parent != (UMaterialInterface *)0x0) {
    if (this->Owner->bHasStaticPermutationResource == 0) {
      plVar4 = (longlong *)(**(code **)(this->Parent->_padding_ + 0x310))();
                    /* WARNING: Could not recover jumptable at 0x000147f3faf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pFVar6 = (FMaterialRenderProxy *)
               (**(code **)(*plVar4 + 0x38))(plVar4,param_1,*(code **)(*plVar4 + 0x38));
      return pFVar6;
    }
    pFVar2 = GetCachedScalabilityCVars();
    if (param_1 == Num) {
      EVar7 = SP_NumPlatforms;
    }
    else {
      EVar7 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
    }
    pFVar3 = FindMaterialResource
                       (&this->Owner->StaticPermutationMaterialResources,EVar7,
                        pFVar2->MaterialQualityLevel,true);
    if (pFVar3 != (FMaterialResource *)0x0) {
      EVar1 = (**(code **)(pFVar3->_padding_ + 0x40))(pFVar3);
      goto LAB_147f3fafc;
    }
  }
  EVar1 = MD_Surface;
LAB_147f3fafc:
  pUVar5 = UMaterial::GetDefaultMaterial(EVar1);
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar5->_padding_ + 0x310);
                    /* WARNING: Could not recover jumptable at 0x000147f3fb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar6 = (FMaterialRenderProxy *)(*UNRECOVERED_JUMPTABLE)(pUVar5,UNRECOVERED_JUMPTABLE);
  return pFVar6;
}

// GetFriendlyName @ 147f3fc70

FString * __thiscall
FMaterialInstanceResource::GetFriendlyName
          (FMaterialInstanceResource *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this->Owner->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMaterialInterface @ 147f3ffe0

UMaterialInterface * __thiscall
FMaterialInstanceResource::GetMaterialInterface(FMaterialInstanceResource *this)

{
  return (UMaterialInterface *)this->Owner;
}

// GetMaterialNoFallback @ 147f40120

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FMaterial * __thiscall
FMaterialInstanceResource::GetMaterialNoFallback(FMaterialInstanceResource *this,Type param_1)

{
  FCachedSystemScalabilityCVars *pFVar1;
  FMaterialResource *this_00;
  FMaterialShaderMap *pFVar2;
  longlong *plVar3;
  FMaterial *pFVar4;
  FMaterialResource *pFVar5;
  EShaderPlatform EVar6;
  
  if (this->Parent != (UMaterialInterface *)0x0) {
    if (this->Owner->bHasStaticPermutationResource == 0) {
      plVar3 = (longlong *)(**(code **)(this->Parent->_padding_ + 0x310))();
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f401d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pFVar4 = (FMaterial *)
                 (**(code **)(*plVar3 + 0x30))(plVar3,param_1,*(code **)(*plVar3 + 0x30));
        return pFVar4;
      }
    }
    else {
      pFVar1 = GetCachedScalabilityCVars();
      if (param_1 == Num) {
        EVar6 = SP_NumPlatforms;
      }
      else {
        EVar6 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
      }
      this_00 = FindMaterialResource
                          (&this->Owner->StaticPermutationMaterialResources,EVar6,
                           pFVar1->MaterialQualityLevel,true);
      if (this_00 != (FMaterialResource *)0x0) {
        pFVar2 = FMaterial::GetRenderingThreadShaderMap((FMaterial *)this_00);
        pFVar5 = (FMaterialResource *)0x0;
        if (pFVar2 != (FMaterialShaderMap *)0x0) {
          pFVar5 = this_00;
        }
        return (FMaterial *)pFVar5;
      }
    }
  }
  return (FMaterial *)0x0;
}

// GetParameterValue @ 147f41300

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __thiscall
FMaterialInstanceResource::GetParameterValue
          (FMaterialInstanceResource *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FMaterialParameterValue *param_3,
          FMaterialRenderContext *param_4)

{
  int iVar1;
  USubsurfaceProfile *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  FName FVar8;
  USubsurfaceProfile *pUVar9;
  USpecularProfile *pUVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  undefined1 local_228 [24];
  double dStack_210;
  undefined1 local_208;
  undefined7 uStack_207;
  USpecularProfile *local_200;
  USpecularProfile *local_1f8;
  undefined8 local_1e8;
  uint local_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  undefined8 local_1c8;
  uint local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198;
  undefined7 uStack_197;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  undefined1 local_170 [24];
  TArrayView<int_const_,int> local_158 [2];
  FLinearColor_u_0 local_138;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined1 auStack_11c [20];
  FLinearColor_u_0 aFStack_108 [2];
  FLinearColor_u_0 local_e8;
  ESubsurfaceImplementationTechniqueHint local_d8;
  undefined7 uStack_d7;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  double local_c0;
  FLinearColor_u_0 FStack_b8;
  FScriptContainerElement local_a8;
  undefined7 uStack_a7;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  double local_70;
  double dStack_68;
  undefined1 local_60;
  uint7 uStack_5f;
  double local_58;
  double dStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38;
  undefined7 uStack_37;
  
  pUVar9 = (USubsurfaceProfile *)0x0;
  if (param_1 != Scalar) {
    if (param_1 < NumRuntime) goto LAB_147f4149d;
switchD_147f414b2_caseD_5:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2513137771804098926>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                       ,0x16e,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    goto LAB_147f4163d;
  }
  FVar8 = SubsurfaceProfile::GetSubsurfaceProfileParameterName();
  local_1e8._0_4_ = (param_2->Name).ComparisonIndex;
  local_1e8._4_4_ = (param_2->Name).DisplayIndex;
  local_1e0 = (param_2->Name).Number;
  if (((int)*(undefined8 *)FVar8 == (undefined4)local_1e8) &&
     ((uint)((ulonglong)*(undefined8 *)FVar8 >> 0x20) == local_1e0)) {
    if (((param_2->Association).Value != '\x02') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParameterInfo.Association == EMaterialParameterAssociation::GlobalParameter"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                           ,300,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = Substrate::IsSubstrateEnabled();
    pUVar2 = (USubsurfaceProfile *)this->_padding_;
    if (bVar4) {
      if ((int)this->_padding_ != 0) {
        pUVar9 = FMaterialRenderProxy::GetSubsurfaceProfileRT((FMaterialRenderProxy *)this,0);
      }
      local_128 = 0;
      if (pUVar2 != (USubsurfaceProfile *)0x0) {
        pUVar9 = pUVar2;
      }
      fVar15 = SubsurfaceProfile::GetSubsurfaceProfileId(pUVar9);
      (param_3->field0_0x0).Float[0] = fVar15;
      (param_3->field0_0x0).Float[1] = (float)local_158[1].DataPtr._4_4_;
      (param_3->field0_0x0).Float[2] = (float)local_158[1].ArrayNum;
      (param_3->field0_0x0).Float[3] = (float)local_158[1]._12_4_;
      (param_3->field0_0x0).Double[2] = (double)local_138._0_8_;
      (param_3->field0_0x0).Double[3] = (double)local_138._8_8_;
      *(ulonglong *)&param_3->Type = CONCAT71(uStack_127,local_128);
      return true;
    }
    aFStack_108[0]._8_1_ = 0;
    fVar15 = SubsurfaceProfile::GetSubsurfaceProfileId(pUVar2);
    (param_3->field0_0x0).Float[0] = fVar15;
    (param_3->field0_0x0).Float[1] = (float)auStack_11c._0_4_;
    (param_3->field0_0x0).Float[2] = (float)auStack_11c._4_4_;
    (param_3->field0_0x0).Float[3] = (float)auStack_11c._8_4_;
    (param_3->field0_0x0).Double[2] = (double)auStack_11c._12_8_;
    (param_3->field0_0x0).Double[3] = (double)aFStack_108[0]._0_8_;
    *(ulonglong *)&param_3->Type = CONCAT71(aFStack_108[0]._9_7_,aFStack_108[0]._8_1_);
    return true;
  }
  uVar7 = (uint)this->_padding_;
  if (uVar7 == 0) {
    uVar7 = (uint)this->_padding_;
    if (uVar7 != 0) {
      local_200 = (USpecularProfile *)this->_padding_;
      do {
        uVar14 = (uint)pUVar9;
        FMaterialRenderProxy::GetSpecularProfileRT((FMaterialRenderProxy *)this,uVar14);
        FVar8 = SpecularProfile::GetSpecularProfileParameterName
                          ((USpecularProfile *)(local_170 + 8));
        local_1c8._0_4_ = (param_2->Name).ComparisonIndex;
        local_1c8._4_4_ = (param_2->Name).DisplayIndex;
        local_1c0 = (param_2->Name).Number;
        if (((int)*(undefined8 *)FVar8 == (undefined4)local_1c8) &&
           ((uint)((ulonglong)*(undefined8 *)FVar8 >> 0x20) == local_1c0)) {
          if (((param_2->Association).Value != '\x02') &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ParameterInfo.Association == EMaterialParameterAssociation::GlobalParameter"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                                 ,0x159,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pUVar10 = local_200;
          if (local_200 == (USpecularProfile *)0x0) {
            pUVar10 = FMaterialRenderProxy::GetSpecularProfileRT
                                ((FMaterialRenderProxy *)this,uVar14);
          }
          FStack_b8._8_1_ = 0;
          fVar15 = SpecularProfile::GetSpecularProfileId(pUVar10);
          (param_3->field0_0x0).Float[0] = fVar15;
          (param_3->field0_0x0).Float[1] = fStack_cc;
          (param_3->field0_0x0).Float[2] = fStack_c8;
          (param_3->field0_0x0).Float[3] = fStack_c4;
          (param_3->field0_0x0).Double[2] = local_c0;
          (param_3->field0_0x0).Double[3] = (double)FStack_b8._0_8_;
          *(ulonglong *)&param_3->Type = CONCAT71(FStack_b8._9_7_,FStack_b8._8_1_);
          return true;
        }
        pUVar9 = (USubsurfaceProfile *)(ulonglong)(uVar14 + 1);
      } while (uVar14 + 1 < uVar7);
    }
  }
  else {
    local_1f8 = (USpecularProfile *)this->_padding_;
    do {
      local_200 = (USpecularProfile *)
                  FMaterialRenderProxy::GetSubsurfaceProfileRT
                            ((FMaterialRenderProxy *)this,(uint)pUVar9);
      FVar8 = SubsurfaceProfile::CreateSubsurfaceProfileParameterName
                        ((USubsurfaceProfile *)local_170);
      local_1d8._0_4_ = (param_2->Name).ComparisonIndex;
      local_1d8._4_4_ = (param_2->Name).DisplayIndex;
      local_1d0 = (param_2->Name).Number;
      if (((int)*(undefined8 *)FVar8 == (undefined4)local_1d8) &&
         ((uint)((ulonglong)*(undefined8 *)FVar8 >> 0x20) == local_1d0)) {
        if (((param_2->Association).Value != '\x02') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ParameterInfo.Association == EMaterialParameterAssociation::GlobalParameter"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                               ,0x149,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        local_d8 = SIH_AFIS;
        pUVar10 = local_200;
        if (local_1f8 != (USpecularProfile *)0x0) {
          pUVar10 = local_1f8;
        }
        fVar15 = SubsurfaceProfile::GetSubsurfaceProfileId((USubsurfaceProfile *)pUVar10);
        (param_3->field0_0x0).Float[0] = fVar15;
        (param_3->field0_0x0).Float[1] = (float)aFStack_108[1]._4_4_;
        (param_3->field0_0x0).Float[2] = (float)aFStack_108[1]._8_4_;
        (param_3->field0_0x0).Float[3] = (float)aFStack_108[1]._12_4_;
        (param_3->field0_0x0).Double[2] = (double)local_e8._0_8_;
        (param_3->field0_0x0).Double[3] = (double)local_e8._8_8_;
        *(ulonglong *)&param_3->Type = CONCAT71(uStack_d7,local_d8);
        return true;
      }
      uVar14 = (uint)pUVar9 + 1;
      pUVar9 = (USubsurfaceProfile *)(ulonglong)uVar14;
    } while (uVar14 < uVar7);
  }
LAB_147f4149d:
  uVar7 = 0;
  uVar14 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case Scalar:
    uVar14 = RenderThread_FindParameterByNameInternal<float>(this,param_2);
    if (uVar14 == 0xffffffff) break;
    uVar6 = uVar7;
    if ((int)uVar14 < (this->ScalarParameterArray).Array.ArrayNum) {
      uVar6 = ~uVar14 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((int)uVar14 < (this->ScalarParameterArray).Array.ArrayNum) {
      uVar7 = ~uVar14 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_60 = 0;
    bVar4 = true;
    local_80 = *(float *)((this->ScalarParameterArray).Array.AllocatorInstance.Data +
                         (longlong)(int)uVar14 * 0x14 + 0x10);
    (param_3->field0_0x0).Float[0] = local_80;
    (param_3->field0_0x0).Float[1] = fStack_7c;
    (param_3->field0_0x0).Float[2] = fStack_78;
    (param_3->field0_0x0).Float[3] = fStack_74;
    (param_3->field0_0x0).Double[2] = local_70;
    (param_3->field0_0x0).Double[3] = dStack_68;
    *(ulonglong *)&param_3->Type = (ulonglong)uStack_5f << 8;
    goto LAB_147f41efa;
  case Vector:
    uVar14 = RenderThread_FindParameterByNameInternal<FLinearColor>(this,param_2);
    if (uVar14 != 0xffffffff) {
      uVar6 = uVar7;
      if ((int)uVar14 < (this->VectorParameterArray).Array.ArrayNum) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((int)uVar14 < (this->VectorParameterArray).Array.ArrayNum) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      bVar4 = true;
      local_198 = 1;
      pFVar12 = (this->VectorParameterArray).Array.AllocatorInstance.Data +
                (longlong)(int)uVar14 * 0x20 + 0x10;
      local_1b8 = *(double *)pFVar12;
      dStack_1b0 = *(double *)(pFVar12 + 8);
      (param_3->field0_0x0).Double[0] = local_1b8;
      (param_3->field0_0x0).Double[1] = dStack_1b0;
      (param_3->field0_0x0).Double[2] = local_1a8;
      (param_3->field0_0x0).Double[3] = dStack_1a0;
      *(ulonglong *)&param_3->Type = CONCAT71(uStack_197,1);
      goto LAB_147f41efa;
    }
    break;
  case DoubleVector:
    uVar14 = RenderThread_FindParameterByNameInternal<UE::Math::TVector4<double>_>(this,param_2);
    lVar13 = (longlong)(int)uVar14;
    if (uVar14 != 0xffffffff) {
      uVar6 = uVar7;
      if ((int)uVar14 < (this->DoubleVectorParameterArray).Array.ArrayNum) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((int)uVar14 < (this->DoubleVectorParameterArray).Array.ArrayNum) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar12 = (this->DoubleVectorParameterArray).Array.AllocatorInstance.Data;
      local_38 = 2;
      bVar4 = true;
      local_58 = *(double *)(pFVar12 + lVar13 * 0x30 + 0x10);
      dStack_50 = *(double *)(pFVar12 + lVar13 * 0x30 + 0x10 + 8);
      local_48 = *(float *)(pFVar12 + lVar13 * 0x30 + 0x20);
      fStack_44 = *(float *)(pFVar12 + lVar13 * 0x30 + 0x20 + 4);
      fStack_40 = (float)*(undefined8 *)(pFVar12 + lVar13 * 0x30 + 0x28);
      fStack_3c = (float)((ulonglong)*(undefined8 *)(pFVar12 + lVar13 * 0x30 + 0x28) >> 0x20);
      (param_3->field0_0x0).Double[0] = local_58;
      (param_3->field0_0x0).Double[1] = dStack_50;
      (param_3->field0_0x0).Float[4] = local_48;
      (param_3->field0_0x0).Float[5] = fStack_44;
      (param_3->field0_0x0).Float[6] = fStack_40;
      (param_3->field0_0x0).Float[7] = fStack_3c;
      *(ulonglong *)&param_3->Type = CONCAT71(uStack_37,2);
      goto LAB_147f41efa;
    }
    break;
  case Texture:
    uVar14 = RenderThread_FindParameterByNameInternal<UTexture_const_*>(this,param_2);
    if (uVar14 != 0xffffffff) {
      uVar6 = uVar7;
      if ((int)uVar14 < (this->TextureParameterArray).Array.ArrayNum) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar13 = (longlong)(int)uVar14 * 3;
      if (*(longlong *)
           ((this->TextureParameterArray).Array.AllocatorInstance.Data +
           (longlong)(int)uVar14 * 0x18 + 0x10) != 0) {
        if ((int)uVar14 < (this->TextureParameterArray).Array.ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar12 = (this->TextureParameterArray).Array.AllocatorInstance.Data;
        local_208 = 3;
LAB_147f41ecc:
        bVar4 = true;
        (param_3->field0_0x0).Double[0] = *(double *)(pFVar12 + lVar13 * 8 + 0x10);
        (param_3->field0_0x0).Double[1] = (double)CONCAT44(local_228._12_4_,local_228._8_4_);
        (param_3->field0_0x0).Double[2] = (double)CONCAT71(local_228._17_7_,local_228[0x10]);
        (param_3->field0_0x0).Double[3] = dStack_210;
        *(ulonglong *)&param_3->Type = CONCAT71(uStack_207,local_208);
        goto LAB_147f41efa;
      }
    }
    break;
  case TextureCollection:
    uVar7 = RenderThread_FindParameterByNameInternal<UTextureCollection_const_*>(this,param_2);
    if (uVar7 != 0xffffffff) {
      uVar6 = uVar14;
      if ((int)uVar7 < (this->TextureCollectionParameterArray).Array.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar13 = (longlong)(int)uVar7 * 3;
      if (*(longlong *)
           ((this->TextureCollectionParameterArray).Array.AllocatorInstance.Data +
           (longlong)(int)uVar7 * 0x18 + 0x10) != 0) {
        if ((int)uVar7 < (this->TextureCollectionParameterArray).Array.ArrayNum) {
          uVar14 = ~uVar7 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar12 = (this->TextureCollectionParameterArray).Array.AllocatorInstance.Data;
        local_208 = 4;
        goto LAB_147f41ecc;
      }
    }
    break;
  case Font:
    goto switchD_147f414b2_caseD_5;
  case RuntimeVirtualTexture:
    uVar7 = RenderThread_FindParameterByNameInternal<URuntimeVirtualTexture_const_*>(this,param_2);
    if (uVar7 != 0xffffffff) {
      uVar6 = uVar14;
      if ((int)uVar7 < (this->RuntimeVirtualTextureParameterArray).Array.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar13 = (longlong)(int)uVar7 * 3;
      if (*(longlong *)
           ((this->RuntimeVirtualTextureParameterArray).Array.AllocatorInstance.Data +
           (longlong)(int)uVar7 * 0x18 + 0x10) != 0) {
        if ((int)uVar7 < (this->RuntimeVirtualTextureParameterArray).Array.ArrayNum) {
          uVar14 = ~uVar7 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar12 = (this->RuntimeVirtualTextureParameterArray).Array.AllocatorInstance.Data;
        local_208 = 6;
        goto LAB_147f41ecc;
      }
    }
    break;
  case SparseVolumeTexture:
    uVar7 = RenderThread_FindParameterByNameInternal<USparseVolumeTexture_const_*>(this,param_2);
    if (uVar7 != 0xffffffff) {
      uVar6 = uVar14;
      if ((int)uVar7 < (this->SparseVolumeTextureParameterArray).Array.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar13 = (longlong)(int)uVar7 * 3;
      if (*(longlong *)
           ((this->SparseVolumeTextureParameterArray).Array.AllocatorInstance.Data +
           (longlong)(int)uVar7 * 0x18 + 0x10) != 0) {
        if ((int)uVar7 < (this->SparseVolumeTextureParameterArray).Array.ArrayNum) {
          uVar14 = ~uVar7 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar12 = (this->SparseVolumeTextureParameterArray).Array.AllocatorInstance.Data;
        local_208 = 7;
        goto LAB_147f41ecc;
      }
    }
    break;
  case StaticSwitch:
    uVar7 = RenderThread_FindParameterByNameInternal<bool>(this,param_2);
    if (uVar7 != 0xffffffff) {
      uVar14 = 0;
      if ((int)uVar7 < (this->StaticSwitchParameterArray).Array.ArrayNum) {
        uVar14 = ~uVar7 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar14 = 0;
      if ((int)uVar7 < (this->StaticSwitchParameterArray).Array.ArrayNum) {
        uVar14 = ~uVar7 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_88 = 8;
      bVar4 = true;
      local_a8 = (this->StaticSwitchParameterArray).Array.AllocatorInstance.Data
                 [(longlong)(int)uVar7 * 0x14 + 0x10];
      FVar8._1_7_ = uStack_a7;
      FVar8.ComparisonIndex.Value._0_1_ = local_a8;
      (param_3->field0_0x0).EnumEntry = FVar8;
      (param_3->field0_0x0).Double[1] = dStack_a0;
      (param_3->field0_0x0).Double[2] = local_98;
      (param_3->field0_0x0).Double[3] = dStack_90;
      *(ulonglong *)&param_3->Type = CONCAT71(uStack_87,8);
      goto LAB_147f41efa;
    }
    break;
  case ParameterCollection:
    uVar7 = RenderThread_FindParameterByNameInternal<UMaterialParameterCollection_const_*>
                      (this,param_2);
    if (uVar7 != 0xffffffff) {
      uVar6 = uVar14;
      if ((int)uVar7 < (this->ParameterCollectionParameterArray).Array.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar13 = (longlong)(int)uVar7 * 3;
      if (*(longlong *)
           ((this->ParameterCollectionParameterArray).Array.AllocatorInstance.Data +
           (longlong)(int)uVar7 * 0x18 + 0x10) != 0) {
        if ((int)uVar7 < (this->ParameterCollectionParameterArray).Array.ArrayNum) {
          uVar14 = ~uVar7 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar12 = (this->ParameterCollectionParameterArray).Array.AllocatorInstance.Data;
        local_208 = 9;
        goto LAB_147f41ecc;
      }
    }
  }
  bVar4 = false;
LAB_147f41efa:
  if (bVar4 != false) {
    return bVar4;
  }
LAB_147f4163d:
  uVar5 = 0;
  if (this->Parent != (UMaterialInterface *)0x0) {
    local_188 = (this->ParentLayerIndexRemap).AllocatorInstance.Data;
    iVar1 = (this->ParentLayerIndexRemap).ArrayNum;
    local_228._0_4_ = 0;
    local_228._4_4_ = 0;
    local_228._8_4_ = 0;
    local_228._12_4_ = -1;
    local_228[0x10] = '\x02';
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_158[0]._8_8_ = CONCAT44(uStack_17c,iVar1);
    local_158[0].DataPtr = (int *)local_188;
    iStack_180 = iVar1;
    bVar4 = FMemoryImageMaterialParameterInfo::RemapLayerIndex
                      (param_2,local_158,(FMemoryImageMaterialParameterInfo *)local_228);
    if (bVar4) {
      plVar11 = (longlong *)(**(code **)(this->Parent->_padding_ + 0x310))();
      uVar5 = (**(code **)(*plVar11 + 0x48))(plVar11,param_1,local_228,param_3,param_4);
    }
  }
  return (bool)uVar5;
}

// GetUserSceneTextureOverride @ 147f46b80

bool __thiscall
FMaterialInstanceResource::GetUserSceneTextureOverride
          (FMaterialInstanceResource *this,FName *param_1)

{
  int iVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FName *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->UserSceneTextureOverrides).ArrayNum;
  pFVar4 = (FName *)(this->UserSceneTextureOverrides).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->UserSceneTextureOverrides).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FUserSceneTextureOverride_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if ((*pFVar4 == *param_1) && (pFVar4[1] != (FName)0x0)) {
      *param_1 = pFVar4[1];
      return true;
    }
    pFVar4 = pFVar4 + 2;
  }
  if (this->Parent != (UMaterialInterface *)0x0) {
    plVar3 = (longlong *)(**(code **)(this->Parent->_padding_ + 0x310))();
    uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,param_1);
    return (bool)uVar2;
  }
  return false;
}

// InitMIParameters @ 147f498a0

void __thiscall
FMaterialInstanceResource::InitMIParameters
          (FMaterialInstanceResource *this,FMaterialInstanceParameterSet *param_1)

{
  TArray<THashedMaterialParameterMap<float>::TNamedParameter,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<THashedMaterialParameterMap<FLinearColor>::TNamedParameter,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<THashedMaterialParameterMap<UE::Math::TVector4<double>_>::TNamedParameter,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<THashedMaterialParameterMap<UTexture_const_*>::TNamedParameter,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TArray<THashedMaterialParameterMap<UTextureCollection_const_*>::TNamedParameter,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TArray<THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::TNamedParameter,TSizedDefaultAllocator<32>_>
  *pTVar6;
  TArray<THashedMaterialParameterMap<USparseVolumeTexture_const_*>::TNamedParameter,TSizedDefaultAllocator<32>_>
  *pTVar7;
  int *piVar8;
  int *piVar9;
  THashedMaterialParameterMap<bool> *this_00;
  THashedMaterialParameterMap<float> *this_01;
  THashedMaterialParameterMap<FLinearColor> *this_02;
  THashedMaterialParameterMap<UE::Math::TVector4<double>_> *this_03;
  THashedMaterialParameterMap<UTexture_const_*> *this_04;
  THashedMaterialParameterMap<UTextureCollection_const_*> *this_05;
  THashedMaterialParameterMap<URuntimeVirtualTexture_const_*> *this_06;
  THashedMaterialParameterMap<USparseVolumeTexture_const_*> *this_07;
  THashedMaterialParameterMap<UMaterialParameterCollection_const_*> *this_08;
  TArray<THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::TNamedParameter,TSizedDefaultAllocator<32>_>
  *pTVar10;
  TArray<FUserSceneTextureOverride,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FUserSceneTextureOverride,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  code *pcVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  FIdentityFunctor local_res8;
  
  FMaterialRenderProxy::InvalidateUniformExpressionCache((FMaterialRenderProxy *)this,false);
  pTVar1 = &param_1->ScalarParameters;
  AlgoImpl::
  IntroSortInternal<THashedMaterialParameterMap<float>::TNamedParameter,int,FIdentityFunctor,TDereferenceWrapper<THashedMaterialParameterMap<float>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<float>::TNamedParameter_const_&,THashedMaterialParameterMap<float>::TNamedParameter_const_&)>_>
            ((TNamedParameter *)(pTVar1->AllocatorInstance).Data,
             (param_1->ScalarParameters).ArrayNum,local_res8,
             (TDereferenceWrapper<THashedMaterialParameterMap<float>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<float>::TNamedParameter_const_&,THashedMaterialParameterMap<float>::TNamedParameter_const_&)>
              )0x147f29a60);
  pTVar2 = &param_1->VectorParameters;
  AlgoImpl::
  IntroSortInternal<THashedMaterialParameterMap<FLinearColor>::TNamedParameter,int,FIdentityFunctor,TDereferenceWrapper<THashedMaterialParameterMap<FLinearColor>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<FLinearColor>::TNamedParameter_const_&,THashedMaterialParameterMap<FLinearColor>::TNamedParameter_const_&)>_>
            ((TNamedParameter *)(pTVar2->AllocatorInstance).Data,
             (param_1->VectorParameters).ArrayNum,local_res8,
             (TDereferenceWrapper<THashedMaterialParameterMap<FLinearColor>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<FLinearColor>::TNamedParameter_const_&,THashedMaterialParameterMap<FLinearColor>::TNamedParameter_const_&)>
              )0x147f29c20);
  pTVar3 = &param_1->DoubleVectorParameters;
  AlgoImpl::
  IntroSortInternal<THashedMaterialParameterMap<UE::Math::TVector4<double>_>::TNamedParameter,int,FIdentityFunctor,TDereferenceWrapper<THashedMaterialParameterMap<UE::Math::TVector4<double>_>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<UE::Math::TVector4<double>_>::TNamedParameter_const_&,THashedMaterialParameterMap<UE::Math::TVector4<double>_>::TNamedParameter_const_&)>_>
            ((TNamedParameter *)(pTVar3->AllocatorInstance).Data,
             (param_1->DoubleVectorParameters).ArrayNum,local_res8,
             (TDereferenceWrapper<THashedMaterialParameterMap<UE::Math::TVector4<double>_>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<UE::Math::TVector4<double>_>::TNamedParameter_const_&,THashedMaterialParameterMap<UE::Math::TVector4<double>_>::TNamedParameter_const_&)>
              )0x147f29be0);
  pTVar4 = &param_1->TextureParameters;
  AlgoImpl::
  IntroSortInternal<THashedMaterialParameterMap<UTexture_const_*>::TNamedParameter,int,FIdentityFunctor,TDereferenceWrapper<THashedMaterialParameterMap<UTexture_const_*>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<UTexture_const_*>::TNamedParameter_const_&,THashedMaterialParameterMap<UTexture_const_*>::TNamedParameter_const_&)>_>
            ((TNamedParameter *)(pTVar4->AllocatorInstance).Data,
             (param_1->TextureParameters).ArrayNum,local_res8,
             (TDereferenceWrapper<THashedMaterialParameterMap<UTexture_const_*>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<UTexture_const_*>::TNamedParameter_const_&,THashedMaterialParameterMap<UTexture_const_*>::TNamedParameter_const_&)>
              )0x147f29b60);
  AlgoImpl::
  IntroSortInternal<THashedMaterialParameterMap<UTextureCollection_const_*>::TNamedParameter,int,FIdentityFunctor,TDereferenceWrapper<THashedMaterialParameterMap<UTextureCollection_const_*>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<UTextureCollection_const_*>::TNamedParameter_const_&,THashedMaterialParameterMap<UTextureCollection_const_*>::TNamedParameter_const_&)>_>
            ((TNamedParameter *)(param_1->TextureCollectionParameters).AllocatorInstance.Data,
             (param_1->TextureCollectionParameters).ArrayNum,local_res8,
             (TDereferenceWrapper<THashedMaterialParameterMap<UTextureCollection_const_*>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<UTextureCollection_const_*>::TNamedParameter_const_&,THashedMaterialParameterMap<UTextureCollection_const_*>::TNamedParameter_const_&)>
              )0x147f29ba0);
  AlgoImpl::
  IntroSortInternal<THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::TNamedParameter,int,FIdentityFunctor,TDereferenceWrapper<THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::TNamedParameter_const_&,THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::TNamedParameter_const_&)>_>
            ((TNamedParameter *)(param_1->RuntimeVirtualTextureParameters).AllocatorInstance.Data,
             (param_1->RuntimeVirtualTextureParameters).ArrayNum,local_res8,
             (TDereferenceWrapper<THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::TNamedParameter_const_&,THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::TNamedParameter_const_&)>
              )0x147f29ae0);
  AlgoImpl::
  IntroSortInternal<THashedMaterialParameterMap<USparseVolumeTexture_const_*>::TNamedParameter,int,FIdentityFunctor,TDereferenceWrapper<THashedMaterialParameterMap<USparseVolumeTexture_const_*>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<USparseVolumeTexture_const_*>::TNamedParameter_const_&,THashedMaterialParameterMap<USparseVolumeTexture_const_*>::TNamedParameter_const_&)>_>
            ((TNamedParameter *)(param_1->SparseVolumeTextureParameters).AllocatorInstance.Data,
             (param_1->SparseVolumeTextureParameters).ArrayNum,local_res8,
             (TDereferenceWrapper<THashedMaterialParameterMap<USparseVolumeTexture_const_*>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<USparseVolumeTexture_const_*>::TNamedParameter_const_&,THashedMaterialParameterMap<USparseVolumeTexture_const_*>::TNamedParameter_const_&)>
              )0x147f29b20);
  AlgoImpl::
  IntroSortInternal<THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::TNamedParameter,int,FIdentityFunctor,TDereferenceWrapper<THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::TNamedParameter_const_&,THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::TNamedParameter_const_&)>_>
            ((TNamedParameter *)(param_1->ParameterCollectionParameters).AllocatorInstance.Data,
             (param_1->ParameterCollectionParameters).ArrayNum,local_res8,
             (TDereferenceWrapper<THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::TNamedParameter,bool___cdecl(THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::TNamedParameter_const_&,THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::TNamedParameter_const_&)>
              )0x147f29aa0);
  this_00 = &this->StaticSwitchParameterArray;
  iVar19 = 0;
  if ((FMaterialInstanceParameterSet *)this_00 != param_1) {
    pFVar14 = (this_00->Array).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (this_00->Array).AllocatorInstance.Data =
         (param_1->StaticSwitchParameters).AllocatorInstance.Data;
    (param_1->StaticSwitchParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->StaticSwitchParameterArray).Array.ArrayNum = (param_1->StaticSwitchParameters).ArrayNum;
    (this->StaticSwitchParameterArray).Array.ArrayMax = (param_1->StaticSwitchParameters).ArrayMax;
    (param_1->StaticSwitchParameters).ArrayNum = 0;
    (param_1->StaticSwitchParameters).ArrayMax = 0;
  }
  this_01 = &this->ScalarParameterArray;
  if (this_01 != (THashedMaterialParameterMap<float> *)pTVar1) {
    pFVar14 = (this_01->Array).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (this->ScalarParameterArray).Array.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ScalarParameterArray).Array.ArrayNum = (param_1->ScalarParameters).ArrayNum;
    (this->ScalarParameterArray).Array.ArrayMax = (param_1->ScalarParameters).ArrayMax;
    (param_1->ScalarParameters).ArrayNum = 0;
    (param_1->ScalarParameters).ArrayMax = 0;
  }
  this_02 = &this->VectorParameterArray;
  if (this_02 != (THashedMaterialParameterMap<FLinearColor> *)pTVar2) {
    pFVar14 = (this_02->Array).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (this_02->Array).AllocatorInstance.Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->VectorParameterArray).Array.ArrayNum = (param_1->VectorParameters).ArrayNum;
    (this->VectorParameterArray).Array.ArrayMax = (param_1->VectorParameters).ArrayMax;
    (param_1->VectorParameters).ArrayNum = 0;
    (param_1->VectorParameters).ArrayMax = 0;
  }
  this_03 = &this->DoubleVectorParameterArray;
  if (this_03 != (THashedMaterialParameterMap<UE::Math::TVector4<double>_> *)pTVar3) {
    pFVar14 = (this_03->Array).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (this_03->Array).AllocatorInstance.Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DoubleVectorParameterArray).Array.ArrayNum = (param_1->DoubleVectorParameters).ArrayNum;
    (this->DoubleVectorParameterArray).Array.ArrayMax = (param_1->DoubleVectorParameters).ArrayMax;
    (param_1->DoubleVectorParameters).ArrayNum = 0;
    (param_1->DoubleVectorParameters).ArrayMax = 0;
  }
  this_04 = &this->TextureParameterArray;
  if (this_04 != (THashedMaterialParameterMap<UTexture_const_*> *)pTVar4) {
    pFVar14 = (this_04->Array).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (this_04->Array).AllocatorInstance.Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TextureParameterArray).Array.ArrayNum = (param_1->TextureParameters).ArrayNum;
    (this->TextureParameterArray).Array.ArrayMax = (param_1->TextureParameters).ArrayMax;
    (param_1->TextureParameters).ArrayNum = 0;
    (param_1->TextureParameters).ArrayMax = 0;
  }
  this_05 = &this->TextureCollectionParameterArray;
  pTVar5 = &param_1->TextureCollectionParameters;
  if (this_05 != (THashedMaterialParameterMap<UTextureCollection_const_*> *)pTVar5) {
    pFVar14 = (this_05->Array).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (this_05->Array).AllocatorInstance.Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TextureCollectionParameterArray).Array.ArrayNum =
         (param_1->TextureCollectionParameters).ArrayNum;
    (this->TextureCollectionParameterArray).Array.ArrayMax =
         (param_1->TextureCollectionParameters).ArrayMax;
    (param_1->TextureCollectionParameters).ArrayNum = 0;
    (param_1->TextureCollectionParameters).ArrayMax = 0;
  }
  this_06 = &this->RuntimeVirtualTextureParameterArray;
  pTVar6 = &param_1->RuntimeVirtualTextureParameters;
  if (this_06 != (THashedMaterialParameterMap<URuntimeVirtualTexture_const_*> *)pTVar6) {
    pFVar14 = (this_06->Array).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (this_06->Array).AllocatorInstance.Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RuntimeVirtualTextureParameterArray).Array.ArrayNum =
         (param_1->RuntimeVirtualTextureParameters).ArrayNum;
    (this->RuntimeVirtualTextureParameterArray).Array.ArrayMax =
         (param_1->RuntimeVirtualTextureParameters).ArrayMax;
    (param_1->RuntimeVirtualTextureParameters).ArrayNum = 0;
    (param_1->RuntimeVirtualTextureParameters).ArrayMax = 0;
  }
  this_07 = &this->SparseVolumeTextureParameterArray;
  pTVar7 = &param_1->SparseVolumeTextureParameters;
  if (this_07 != (THashedMaterialParameterMap<USparseVolumeTexture_const_*> *)pTVar7) {
    pFVar14 = (this_07->Array).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (this_07->Array).AllocatorInstance.Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SparseVolumeTextureParameterArray).Array.ArrayNum =
         (param_1->SparseVolumeTextureParameters).ArrayNum;
    (this->SparseVolumeTextureParameterArray).Array.ArrayMax =
         (param_1->SparseVolumeTextureParameters).ArrayMax;
    (param_1->SparseVolumeTextureParameters).ArrayNum = 0;
    (param_1->SparseVolumeTextureParameters).ArrayMax = 0;
  }
  this_08 = &this->ParameterCollectionParameterArray;
  pTVar10 = &param_1->ParameterCollectionParameters;
  if (this_08 != (THashedMaterialParameterMap<UMaterialParameterCollection_const_*> *)pTVar10) {
    pFVar14 = (this_08->Array).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (this_08->Array).AllocatorInstance.Data = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ParameterCollectionParameterArray).Array.ArrayNum =
         (param_1->ParameterCollectionParameters).ArrayNum;
    (this->ParameterCollectionParameterArray).Array.ArrayMax =
         (param_1->ParameterCollectionParameters).ArrayMax;
    (param_1->ParameterCollectionParameters).ArrayNum = 0;
    (param_1->ParameterCollectionParameters).ArrayMax = 0;
  }
  pTVar11 = &param_1->UserSceneTextureOverrides;
  pTVar12 = &this->UserSceneTextureOverrides;
  if (pTVar12 != pTVar11) {
    pFVar14 = (pTVar12->AllocatorInstance).Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UserSceneTextureOverrides).ArrayNum = (param_1->UserSceneTextureOverrides).ArrayNum;
    (this->UserSceneTextureOverrides).ArrayMax = (param_1->UserSceneTextureOverrides).ArrayMax;
    (param_1->UserSceneTextureOverrides).ArrayNum = 0;
    (param_1->UserSceneTextureOverrides).ArrayMax = 0;
  }
  this->PostProcessBlendableOverrides = param_1->PostProcessBlendableOverrides;
  uVar21 = 1;
  uVar20 = (this->StaticSwitchParameterArray).Array.ArrayNum;
  if (3 < uVar20) {
    uVar13 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar15 & 0x1f);
  }
  piVar8 = &(this->StaticSwitchParameterArray).HashTable.ArrayNum;
  if (uVar20 == 0) {
    piVar9 = &(this->StaticSwitchParameterArray).HashTable.ArrayMax;
    *piVar8 = 0;
    if (*piVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&(this->StaticSwitchParameterArray).HashTable.AllocatorInstance,0,piVar9);
    }
  }
  else {
    iVar18 = *piVar8;
    if (iVar18 < (int)uVar21) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar21 - iVar18,&(this->StaticSwitchParameterArray).HashTable.AllocatorInstance
                 ,piVar8,&(this->StaticSwitchParameterArray).HashTable.ArrayMax);
    }
    else {
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
      }
      if ((int)uVar21 < iVar18) {
        uVar20 = iVar18 - uVar21;
        if (((int)(uVar21 | uVar20) < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        if (uVar20 != 0) {
          pFVar14 = (this->StaticSwitchParameterArray).HashTable.AllocatorInstance.Data +
                    (longlong)(int)uVar21 * 2;
          iVar18 = (*piVar8 - uVar20) - uVar21;
          if (iVar18 != 0) {
            memmove(pFVar14,pFVar14 + (longlong)(int)uVar20 * 2,(longlong)iVar18 * 2);
          }
          *piVar8 = *piVar8 - uVar20;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,&(this->StaticSwitchParameterArray).HashTable.AllocatorInstance,*piVar8,
                     &(this->StaticSwitchParameterArray).HashTable.ArrayMax);
        }
      }
    }
    memset((this->StaticSwitchParameterArray).HashTable.AllocatorInstance.Data,0,
           (ulonglong)(uint)((this->StaticSwitchParameterArray).HashTable.ArrayNum * 2));
    if (0 < (this->StaticSwitchParameterArray).Array.ArrayNum) {
      do {
        THashedMaterialParameterMap<bool>::HashAddOneItem(this_00,iVar19);
        iVar19 = iVar19 + 1;
      } while (iVar19 < (this->StaticSwitchParameterArray).Array.ArrayNum);
    }
  }
  THashedMaterialParameterMap<float>::HashAddAllItems(this_01,0);
  THashedMaterialParameterMap<FLinearColor>::HashAddAllItems(this_02,0);
  THashedMaterialParameterMap<UE::Math::TVector4<double>_>::HashAddAllItems(this_03,0);
  THashedMaterialParameterMap<UTexture_const_*>::HashAddAllItems(this_04,0);
  THashedMaterialParameterMap<UTextureCollection_const_*>::HashAddAllItems(this_05,0);
  THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::HashAddAllItems(this_06,0);
  THashedMaterialParameterMap<USparseVolumeTexture_const_*>::HashAddAllItems(this_07,0);
  THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::HashAddAllItems(this_08,0);
  return;
}

// RenderThread_ClearParameters @ 147f4eb40

void __thiscall
FMaterialInstanceResource::RenderThread_ClearParameters(FMaterialInstanceResource *this)

{
  int *piVar1;
  
  FMaterialRenderProxy::InvalidateUniformExpressionCache((FMaterialRenderProxy *)this,false);
  piVar1 = &(this->VectorParameterArray).Array.ArrayMax;
  (this->VectorParameterArray).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)&this->VectorParameterArray,0,piVar1);
  }
  piVar1 = &(this->VectorParameterArray).HashTable.ArrayMax;
  (this->VectorParameterArray).HashTable.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->VectorParameterArray).HashTable.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DoubleVectorParameterArray).Array.ArrayMax;
  (this->DoubleVectorParameterArray).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,(ForAnyElementType *)&this->DoubleVectorParameterArray,0,piVar1);
  }
  piVar1 = &(this->DoubleVectorParameterArray).HashTable.ArrayMax;
  (this->DoubleVectorParameterArray).HashTable.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->DoubleVectorParameterArray).HashTable.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ScalarParameterArray).Array.ArrayMax;
  (this->ScalarParameterArray).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)&this->ScalarParameterArray,0,piVar1);
  }
  piVar1 = &(this->ScalarParameterArray).HashTable.ArrayMax;
  (this->ScalarParameterArray).HashTable.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->ScalarParameterArray).HashTable.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TextureParameterArray).Array.ArrayMax;
  (this->TextureParameterArray).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->TextureParameterArray,0,piVar1);
  }
  piVar1 = &(this->TextureParameterArray).HashTable.ArrayMax;
  (this->TextureParameterArray).HashTable.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->TextureParameterArray).HashTable.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TextureCollectionParameterArray).Array.ArrayMax;
  (this->TextureCollectionParameterArray).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->TextureCollectionParameterArray,0,piVar1);
  }
  piVar1 = &(this->TextureCollectionParameterArray).HashTable.ArrayMax;
  (this->TextureCollectionParameterArray).HashTable.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->TextureCollectionParameterArray).HashTable.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->RuntimeVirtualTextureParameterArray).Array.ArrayMax;
  (this->RuntimeVirtualTextureParameterArray).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->RuntimeVirtualTextureParameterArray,0,piVar1);
  }
  piVar1 = &(this->RuntimeVirtualTextureParameterArray).HashTable.ArrayMax;
  (this->RuntimeVirtualTextureParameterArray).HashTable.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->RuntimeVirtualTextureParameterArray).HashTable.AllocatorInstance,0,
               piVar1);
  }
  piVar1 = &(this->SparseVolumeTextureParameterArray).Array.ArrayMax;
  (this->SparseVolumeTextureParameterArray).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->SparseVolumeTextureParameterArray,0,piVar1);
  }
  piVar1 = &(this->SparseVolumeTextureParameterArray).HashTable.ArrayMax;
  (this->SparseVolumeTextureParameterArray).HashTable.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->SparseVolumeTextureParameterArray).HashTable.AllocatorInstance,0,piVar1
              );
  }
  piVar1 = &(this->ParameterCollectionParameterArray).Array.ArrayMax;
  (this->ParameterCollectionParameterArray).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->ParameterCollectionParameterArray,0,piVar1);
  }
  piVar1 = &(this->ParameterCollectionParameterArray).HashTable.ArrayMax;
  (this->ParameterCollectionParameterArray).HashTable.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->ParameterCollectionParameterArray).HashTable.AllocatorInstance,0,piVar1
              );
  }
  piVar1 = &(this->UserSceneTextureOverrides).ArrayMax;
  (this->UserSceneTextureOverrides).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->UserSceneTextureOverrides).AllocatorInstance,0,piVar1);
  }
  return;
}

// StartCacheUniformExpressions @ 147f52a90

void __thiscall
FMaterialInstanceResource::StartCacheUniformExpressions(FMaterialInstanceResource *this)

{
  UMaterialInstance *pUVar1;
  
  pUVar1 = this->Owner;
  pUVar1->bCachingUniformExpressions = true;
  FODSCManager::RegisterMaterialInstance(pUVar1);
  return;
}

