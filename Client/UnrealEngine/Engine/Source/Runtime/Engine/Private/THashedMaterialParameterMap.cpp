// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// HashAddAllItems @ 147f47570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
THashedMaterialParameterMap<float>::HashAddAllItems
          (THashedMaterialParameterMap<float> *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_1 < 1) {
    uVar3 = (this->Array).ArrayNum;
    param_1 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      param_1 = 1 << ((byte)lVar4 & 0x1f);
    }
  }
  if ((this->Array).ArrayNum == 0) {
    piVar1 = &(this->HashTable).ArrayMax;
    (this->HashTable).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&(this->HashTable).AllocatorInstance,0,piVar1);
    }
  }
  else {
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->HashTable,param_1,Default);
    memset((this->HashTable).AllocatorInstance.Data,0,
           (ulonglong)(uint)((this->HashTable).ArrayNum * 2));
    iVar5 = 0;
    if (0 < (this->Array).ArrayNum) {
      do {
        HashAddOneItem(this,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (this->Array).ArrayNum);
    }
  }
  return;
}

// HashAddAllItems @ 147f47630

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::HashAddAllItems
          (THashedMaterialParameterMap<UMaterialParameterCollection_const_*> *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_1 < 1) {
    uVar3 = (this->Array).ArrayNum;
    param_1 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      param_1 = 1 << ((byte)lVar4 & 0x1f);
    }
  }
  if ((this->Array).ArrayNum == 0) {
    piVar1 = &(this->HashTable).ArrayMax;
    (this->HashTable).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&(this->HashTable).AllocatorInstance,0,piVar1);
    }
  }
  else {
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->HashTable,param_1,Default);
    memset((this->HashTable).AllocatorInstance.Data,0,
           (ulonglong)(uint)((this->HashTable).ArrayNum * 2));
    iVar5 = 0;
    if (0 < (this->Array).ArrayNum) {
      do {
        HashAddOneItem(this,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (this->Array).ArrayNum);
    }
  }
  return;
}

// HashAddAllItems @ 147f476f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::HashAddAllItems
          (THashedMaterialParameterMap<URuntimeVirtualTexture_const_*> *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_1 < 1) {
    uVar3 = (this->Array).ArrayNum;
    param_1 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      param_1 = 1 << ((byte)lVar4 & 0x1f);
    }
  }
  if ((this->Array).ArrayNum == 0) {
    piVar1 = &(this->HashTable).ArrayMax;
    (this->HashTable).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&(this->HashTable).AllocatorInstance,0,piVar1);
    }
  }
  else {
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->HashTable,param_1,Default);
    memset((this->HashTable).AllocatorInstance.Data,0,
           (ulonglong)(uint)((this->HashTable).ArrayNum * 2));
    iVar5 = 0;
    if (0 < (this->Array).ArrayNum) {
      do {
        HashAddOneItem(this,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (this->Array).ArrayNum);
    }
  }
  return;
}

// HashAddAllItems @ 147f477b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
THashedMaterialParameterMap<USparseVolumeTexture_const_*>::HashAddAllItems
          (THashedMaterialParameterMap<USparseVolumeTexture_const_*> *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_1 < 1) {
    uVar3 = (this->Array).ArrayNum;
    param_1 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      param_1 = 1 << ((byte)lVar4 & 0x1f);
    }
  }
  if ((this->Array).ArrayNum == 0) {
    piVar1 = &(this->HashTable).ArrayMax;
    (this->HashTable).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&(this->HashTable).AllocatorInstance,0,piVar1);
    }
  }
  else {
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->HashTable,param_1,Default);
    memset((this->HashTable).AllocatorInstance.Data,0,
           (ulonglong)(uint)((this->HashTable).ArrayNum * 2));
    iVar5 = 0;
    if (0 < (this->Array).ArrayNum) {
      do {
        HashAddOneItem(this,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (this->Array).ArrayNum);
    }
  }
  return;
}

// HashAddAllItems @ 147f47870

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
THashedMaterialParameterMap<UTexture_const_*>::HashAddAllItems
          (THashedMaterialParameterMap<UTexture_const_*> *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_1 < 1) {
    uVar3 = (this->Array).ArrayNum;
    param_1 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      param_1 = 1 << ((byte)lVar4 & 0x1f);
    }
  }
  if ((this->Array).ArrayNum == 0) {
    piVar1 = &(this->HashTable).ArrayMax;
    (this->HashTable).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&(this->HashTable).AllocatorInstance,0,piVar1);
    }
  }
  else {
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->HashTable,param_1,Default);
    memset((this->HashTable).AllocatorInstance.Data,0,
           (ulonglong)(uint)((this->HashTable).ArrayNum * 2));
    iVar5 = 0;
    if (0 < (this->Array).ArrayNum) {
      do {
        HashAddOneItem(this,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (this->Array).ArrayNum);
    }
  }
  return;
}

// HashAddAllItems @ 147f47930

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
THashedMaterialParameterMap<UTextureCollection_const_*>::HashAddAllItems
          (THashedMaterialParameterMap<UTextureCollection_const_*> *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_1 < 1) {
    uVar3 = (this->Array).ArrayNum;
    param_1 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      param_1 = 1 << ((byte)lVar4 & 0x1f);
    }
  }
  if ((this->Array).ArrayNum == 0) {
    piVar1 = &(this->HashTable).ArrayMax;
    (this->HashTable).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&(this->HashTable).AllocatorInstance,0,piVar1);
    }
  }
  else {
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->HashTable,param_1,Default);
    memset((this->HashTable).AllocatorInstance.Data,0,
           (ulonglong)(uint)((this->HashTable).ArrayNum * 2));
    iVar5 = 0;
    if (0 < (this->Array).ArrayNum) {
      do {
        HashAddOneItem(this,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (this->Array).ArrayNum);
    }
  }
  return;
}

// HashAddAllItems @ 147f479f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
THashedMaterialParameterMap<UE::Math::TVector4<double>_>::HashAddAllItems
          (THashedMaterialParameterMap<UE::Math::TVector4<double>_> *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_1 < 1) {
    uVar3 = (this->Array).ArrayNum;
    param_1 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      param_1 = 1 << ((byte)lVar4 & 0x1f);
    }
  }
  if ((this->Array).ArrayNum == 0) {
    piVar1 = &(this->HashTable).ArrayMax;
    (this->HashTable).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&(this->HashTable).AllocatorInstance,0,piVar1);
    }
  }
  else {
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->HashTable,param_1,Default);
    memset((this->HashTable).AllocatorInstance.Data,0,
           (ulonglong)(uint)((this->HashTable).ArrayNum * 2));
    iVar5 = 0;
    if (0 < (this->Array).ArrayNum) {
      do {
        HashAddOneItem(this,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (this->Array).ArrayNum);
    }
  }
  return;
}

// HashAddAllItems @ 147f47ab0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
THashedMaterialParameterMap<FLinearColor>::HashAddAllItems
          (THashedMaterialParameterMap<FLinearColor> *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_1 < 1) {
    uVar3 = (this->Array).ArrayNum;
    param_1 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      param_1 = 1 << ((byte)lVar4 & 0x1f);
    }
  }
  if ((this->Array).ArrayNum == 0) {
    piVar1 = &(this->HashTable).ArrayMax;
    (this->HashTable).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&(this->HashTable).AllocatorInstance,0,piVar1);
    }
  }
  else {
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->HashTable,param_1,Default);
    memset((this->HashTable).AllocatorInstance.Data,0,
           (ulonglong)(uint)((this->HashTable).ArrayNum * 2));
    iVar5 = 0;
    if (0 < (this->Array).ArrayNum) {
      do {
        HashAddOneItem(this,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (this->Array).ArrayNum);
    }
  }
  return;
}

// HashAddOneItem @ 147f47b70

void __thiscall
THashedMaterialParameterMap<float>::HashAddOneItem
          (THashedMaterialParameterMap<float> *this,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FNameEntryId local_28;
  
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar1 = (longlong)param_1 * 0x14;
  pFVar2 = (this->Array).AllocatorInstance.Data + lVar1 + 0xe;
  *(ushort *)pFVar2 = *(ushort *)pFVar2 & 0xc000;
  if (((this->HashTable).ArrayNum == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HashTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x97,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  iVar4 = *(int *)(pFVar2 + lVar1 + 8);
  local_28.Value = (uint)*(undefined8 *)(pFVar2 + lVar1);
  uVar9 = ::GetTypeHash(local_28);
  iVar5 = (this->HashTable).ArrayNum;
  iVar4 = uVar9 + iVar4;
  uVar9 = iVar4 + ~(iVar4 * 0x8000);
  uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
  uVar9 = (int)uVar9 >> 6 ^ uVar9;
  uVar9 = uVar9 + ~(uVar9 << 0xb);
  uVar10 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar5 - 1U;
  uVar9 = 0;
  if ((int)uVar10 < iVar5) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2);
  if (uVar3 == 0) {
    uVar9 = 0;
    if ((int)uVar10 < (this->HashTable).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) =
         (ushort)param_1 + 1;
  }
  else {
    uVar9 = uVar3 - 1;
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar3 * 0x14 + -6);
    while ((uVar3 & 0x3fff) != 0) {
      uVar9 = uVar3 & 0x3fff;
      if (((this->Array).ArrayNum <= (int)uVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar9 * 0x14 + 0xe);
    }
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->Array).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)(int)uVar9 * 0x14 + 0xe;
    *(ushort *)pFVar2 =
         *(ushort *)pFVar2 ^
         (*(ushort *)(pFVar6 + (longlong)(int)uVar9 * 0x14 + 0xe) ^ (ushort)param_1) & 0x3fff;
  }
  return;
}

// HashAddOneItem @ 147f47eb0

void __thiscall
THashedMaterialParameterMap<UMaterialParameterCollection_const_*>::HashAddOneItem
          (THashedMaterialParameterMap<UMaterialParameterCollection_const_*> *this,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FNameEntryId local_28;
  
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar1 = (longlong)param_1 * 0x18;
  pFVar2 = (this->Array).AllocatorInstance.Data + lVar1 + 0xe;
  *(ushort *)pFVar2 = *(ushort *)pFVar2 & 0xc000;
  if (((this->HashTable).ArrayNum == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HashTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x97,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  iVar4 = *(int *)(pFVar2 + lVar1 + 8);
  local_28.Value = (uint)*(undefined8 *)(pFVar2 + lVar1);
  uVar9 = ::GetTypeHash(local_28);
  iVar5 = (this->HashTable).ArrayNum;
  iVar4 = uVar9 + iVar4;
  uVar9 = iVar4 + ~(iVar4 * 0x8000);
  uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
  uVar9 = (int)uVar9 >> 6 ^ uVar9;
  uVar9 = uVar9 + ~(uVar9 << 0xb);
  uVar10 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar5 - 1U;
  uVar9 = 0;
  if ((int)uVar10 < iVar5) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2);
  if (uVar3 == 0) {
    uVar9 = 0;
    if ((int)uVar10 < (this->HashTable).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) =
         (ushort)param_1 + 1;
  }
  else {
    uVar9 = uVar3 - 1;
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar3 * 0x18 + -10);
    while ((uVar3 & 0x3fff) != 0) {
      uVar9 = uVar3 & 0x3fff;
      if (((this->Array).ArrayNum <= (int)uVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar9 * 0x18 + 0xe);
    }
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->Array).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)(int)uVar9 * 0x18 + 0xe;
    *(ushort *)pFVar2 =
         *(ushort *)pFVar2 ^
         (*(ushort *)(pFVar6 + (longlong)(int)uVar9 * 0x18 + 0xe) ^ (ushort)param_1) & 0x3fff;
  }
  return;
}

// HashAddOneItem @ 147f481f0

void __thiscall
THashedMaterialParameterMap<URuntimeVirtualTexture_const_*>::HashAddOneItem
          (THashedMaterialParameterMap<URuntimeVirtualTexture_const_*> *this,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FNameEntryId local_28;
  
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar1 = (longlong)param_1 * 0x18;
  pFVar2 = (this->Array).AllocatorInstance.Data + lVar1 + 0xe;
  *(ushort *)pFVar2 = *(ushort *)pFVar2 & 0xc000;
  if (((this->HashTable).ArrayNum == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HashTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x97,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  iVar4 = *(int *)(pFVar2 + lVar1 + 8);
  local_28.Value = (uint)*(undefined8 *)(pFVar2 + lVar1);
  uVar9 = ::GetTypeHash(local_28);
  iVar5 = (this->HashTable).ArrayNum;
  iVar4 = uVar9 + iVar4;
  uVar9 = iVar4 + ~(iVar4 * 0x8000);
  uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
  uVar9 = (int)uVar9 >> 6 ^ uVar9;
  uVar9 = uVar9 + ~(uVar9 << 0xb);
  uVar10 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar5 - 1U;
  uVar9 = 0;
  if ((int)uVar10 < iVar5) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2);
  if (uVar3 == 0) {
    uVar9 = 0;
    if ((int)uVar10 < (this->HashTable).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) =
         (ushort)param_1 + 1;
  }
  else {
    uVar9 = uVar3 - 1;
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar3 * 0x18 + -10);
    while ((uVar3 & 0x3fff) != 0) {
      uVar9 = uVar3 & 0x3fff;
      if (((this->Array).ArrayNum <= (int)uVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar9 * 0x18 + 0xe);
    }
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->Array).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)(int)uVar9 * 0x18 + 0xe;
    *(ushort *)pFVar2 =
         *(ushort *)pFVar2 ^
         (*(ushort *)(pFVar6 + (longlong)(int)uVar9 * 0x18 + 0xe) ^ (ushort)param_1) & 0x3fff;
  }
  return;
}

// HashAddOneItem @ 147f48530

void __thiscall
THashedMaterialParameterMap<USparseVolumeTexture_const_*>::HashAddOneItem
          (THashedMaterialParameterMap<USparseVolumeTexture_const_*> *this,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FNameEntryId local_28;
  
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar1 = (longlong)param_1 * 0x18;
  pFVar2 = (this->Array).AllocatorInstance.Data + lVar1 + 0xe;
  *(ushort *)pFVar2 = *(ushort *)pFVar2 & 0xc000;
  if (((this->HashTable).ArrayNum == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HashTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x97,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  iVar4 = *(int *)(pFVar2 + lVar1 + 8);
  local_28.Value = (uint)*(undefined8 *)(pFVar2 + lVar1);
  uVar9 = ::GetTypeHash(local_28);
  iVar5 = (this->HashTable).ArrayNum;
  iVar4 = uVar9 + iVar4;
  uVar9 = iVar4 + ~(iVar4 * 0x8000);
  uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
  uVar9 = (int)uVar9 >> 6 ^ uVar9;
  uVar9 = uVar9 + ~(uVar9 << 0xb);
  uVar10 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar5 - 1U;
  uVar9 = 0;
  if ((int)uVar10 < iVar5) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2);
  if (uVar3 == 0) {
    uVar9 = 0;
    if ((int)uVar10 < (this->HashTable).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) =
         (ushort)param_1 + 1;
  }
  else {
    uVar9 = uVar3 - 1;
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar3 * 0x18 + -10);
    while ((uVar3 & 0x3fff) != 0) {
      uVar9 = uVar3 & 0x3fff;
      if (((this->Array).ArrayNum <= (int)uVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar9 * 0x18 + 0xe);
    }
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->Array).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)(int)uVar9 * 0x18 + 0xe;
    *(ushort *)pFVar2 =
         *(ushort *)pFVar2 ^
         (*(ushort *)(pFVar6 + (longlong)(int)uVar9 * 0x18 + 0xe) ^ (ushort)param_1) & 0x3fff;
  }
  return;
}

// HashAddOneItem @ 147f48870

void __thiscall
THashedMaterialParameterMap<UTexture_const_*>::HashAddOneItem
          (THashedMaterialParameterMap<UTexture_const_*> *this,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FNameEntryId local_28;
  
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar1 = (longlong)param_1 * 0x18;
  pFVar2 = (this->Array).AllocatorInstance.Data + lVar1 + 0xe;
  *(ushort *)pFVar2 = *(ushort *)pFVar2 & 0xc000;
  if (((this->HashTable).ArrayNum == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HashTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x97,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  iVar4 = *(int *)(pFVar2 + lVar1 + 8);
  local_28.Value = (uint)*(undefined8 *)(pFVar2 + lVar1);
  uVar9 = ::GetTypeHash(local_28);
  iVar5 = (this->HashTable).ArrayNum;
  iVar4 = uVar9 + iVar4;
  uVar9 = iVar4 + ~(iVar4 * 0x8000);
  uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
  uVar9 = (int)uVar9 >> 6 ^ uVar9;
  uVar9 = uVar9 + ~(uVar9 << 0xb);
  uVar10 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar5 - 1U;
  uVar9 = 0;
  if ((int)uVar10 < iVar5) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2);
  if (uVar3 == 0) {
    uVar9 = 0;
    if ((int)uVar10 < (this->HashTable).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) =
         (ushort)param_1 + 1;
  }
  else {
    uVar9 = uVar3 - 1;
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar3 * 0x18 + -10);
    while ((uVar3 & 0x3fff) != 0) {
      uVar9 = uVar3 & 0x3fff;
      if (((this->Array).ArrayNum <= (int)uVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar9 * 0x18 + 0xe);
    }
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->Array).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)(int)uVar9 * 0x18 + 0xe;
    *(ushort *)pFVar2 =
         *(ushort *)pFVar2 ^
         (*(ushort *)(pFVar6 + (longlong)(int)uVar9 * 0x18 + 0xe) ^ (ushort)param_1) & 0x3fff;
  }
  return;
}

// HashAddOneItem @ 147f48bb0

void __thiscall
THashedMaterialParameterMap<UTextureCollection_const_*>::HashAddOneItem
          (THashedMaterialParameterMap<UTextureCollection_const_*> *this,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FNameEntryId local_28;
  
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar1 = (longlong)param_1 * 0x18;
  pFVar2 = (this->Array).AllocatorInstance.Data + lVar1 + 0xe;
  *(ushort *)pFVar2 = *(ushort *)pFVar2 & 0xc000;
  if (((this->HashTable).ArrayNum == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HashTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x97,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  iVar4 = *(int *)(pFVar2 + lVar1 + 8);
  local_28.Value = (uint)*(undefined8 *)(pFVar2 + lVar1);
  uVar9 = ::GetTypeHash(local_28);
  iVar5 = (this->HashTable).ArrayNum;
  iVar4 = uVar9 + iVar4;
  uVar9 = iVar4 + ~(iVar4 * 0x8000);
  uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
  uVar9 = (int)uVar9 >> 6 ^ uVar9;
  uVar9 = uVar9 + ~(uVar9 << 0xb);
  uVar10 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar5 - 1U;
  uVar9 = 0;
  if ((int)uVar10 < iVar5) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2);
  if (uVar3 == 0) {
    uVar9 = 0;
    if ((int)uVar10 < (this->HashTable).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) =
         (ushort)param_1 + 1;
  }
  else {
    uVar9 = uVar3 - 1;
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar3 * 0x18 + -10);
    while ((uVar3 & 0x3fff) != 0) {
      uVar9 = uVar3 & 0x3fff;
      if (((this->Array).ArrayNum <= (int)uVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar9 * 0x18 + 0xe);
    }
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->Array).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)(int)uVar9 * 0x18 + 0xe;
    *(ushort *)pFVar2 =
         *(ushort *)pFVar2 ^
         (*(ushort *)(pFVar6 + (longlong)(int)uVar9 * 0x18 + 0xe) ^ (ushort)param_1) & 0x3fff;
  }
  return;
}

// HashAddOneItem @ 147f48ef0

void __thiscall
THashedMaterialParameterMap<UE::Math::TVector4<double>_>::HashAddOneItem
          (THashedMaterialParameterMap<UE::Math::TVector4<double>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FNameEntryId local_28;
  
  uVar8 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar10 = (longlong)param_1 * 0x30;
  pFVar1 = (this->Array).AllocatorInstance.Data + lVar10 + 0xe;
  *(ushort *)pFVar1 = *(ushort *)pFVar1 & 0xc000;
  if (((this->HashTable).ArrayNum == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HashTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x97,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar1 = (this->Array).AllocatorInstance.Data;
  iVar3 = *(int *)(pFVar1 + lVar10 + 8);
  local_28.Value = (uint)*(undefined8 *)(pFVar1 + lVar10);
  uVar8 = ::GetTypeHash(local_28);
  iVar4 = (this->HashTable).ArrayNum;
  iVar3 = uVar8 + iVar3;
  uVar8 = iVar3 + ~(iVar3 * 0x8000);
  uVar8 = ((int)uVar8 >> 10 ^ uVar8) * 9;
  uVar8 = (int)uVar8 >> 6 ^ uVar8;
  uVar8 = uVar8 + ~(uVar8 << 0xb);
  uVar9 = ((int)uVar8 >> 0x10 ^ uVar8) & iVar4 - 1U;
  uVar8 = 0;
  if ((int)uVar9 < iVar4) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar2 = *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar9 * 2);
  if (uVar2 == 0) {
    uVar8 = 0;
    if ((int)uVar9 < (this->HashTable).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) =
         (ushort)param_1 + 1;
  }
  else {
    uVar8 = uVar2 - 1;
    uVar9 = 0;
    if ((int)uVar8 < (this->Array).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar2 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar2 * 0x30 + -0x22);
    while ((uVar2 & 0x3fff) != 0) {
      uVar8 = uVar2 & 0x3fff;
      if (((this->Array).ArrayNum <= (int)uVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar2 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar8 * 0x30 + 0xe);
    }
    uVar9 = 0;
    if ((int)uVar8 < (this->Array).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->Array).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)(int)uVar8 * 0x30 + 0xe;
    *(ushort *)pFVar1 =
         *(ushort *)pFVar1 ^
         (*(ushort *)(pFVar5 + (longlong)(int)uVar8 * 0x30 + 0xe) ^ (ushort)param_1) & 0x3fff;
  }
  return;
}

// HashAddOneItem @ 147f49230

void __thiscall
THashedMaterialParameterMap<FLinearColor>::HashAddOneItem
          (THashedMaterialParameterMap<FLinearColor> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FNameEntryId local_28;
  
  uVar8 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar10 = (longlong)param_1 * 0x20;
  pFVar1 = (this->Array).AllocatorInstance.Data + lVar10 + 0xe;
  *(ushort *)pFVar1 = *(ushort *)pFVar1 & 0xc000;
  if (((this->HashTable).ArrayNum == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HashTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x97,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar1 = (this->Array).AllocatorInstance.Data;
  iVar3 = *(int *)(pFVar1 + lVar10 + 8);
  local_28.Value = (uint)*(undefined8 *)(pFVar1 + lVar10);
  uVar8 = ::GetTypeHash(local_28);
  iVar4 = (this->HashTable).ArrayNum;
  iVar3 = uVar8 + iVar3;
  uVar8 = iVar3 + ~(iVar3 * 0x8000);
  uVar8 = ((int)uVar8 >> 10 ^ uVar8) * 9;
  uVar8 = (int)uVar8 >> 6 ^ uVar8;
  uVar8 = uVar8 + ~(uVar8 << 0xb);
  uVar9 = ((int)uVar8 >> 0x10 ^ uVar8) & iVar4 - 1U;
  uVar8 = 0;
  if ((int)uVar9 < iVar4) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar2 = *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar9 * 2);
  if (uVar2 == 0) {
    uVar8 = 0;
    if ((int)uVar9 < (this->HashTable).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) =
         (ushort)param_1 + 1;
  }
  else {
    uVar8 = uVar2 - 1;
    uVar9 = 0;
    if ((int)uVar8 < (this->Array).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar2 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar2 * 0x20 + -0x12);
    while ((uVar2 & 0x3fff) != 0) {
      uVar8 = uVar2 & 0x3fff;
      if (((this->Array).ArrayNum <= (int)uVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar2 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar8 * 0x20 + 0xe);
    }
    uVar9 = 0;
    if ((int)uVar8 < (this->Array).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->Array).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)(int)uVar8 * 0x20 + 0xe;
    *(ushort *)pFVar1 =
         *(ushort *)pFVar1 ^
         (*(ushort *)(pFVar5 + (longlong)(int)uVar8 * 0x20 + 0xe) ^ (ushort)param_1) & 0x3fff;
  }
  return;
}

// HashAddOneItem @ 147f49560

void __thiscall
THashedMaterialParameterMap<bool>::HashAddOneItem
          (THashedMaterialParameterMap<bool> *this,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FNameEntryId local_28;
  
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar1 = (longlong)param_1 * 0x14;
  pFVar2 = (this->Array).AllocatorInstance.Data + lVar1 + 0xe;
  *(ushort *)pFVar2 = *(ushort *)pFVar2 & 0xc000;
  if (((this->HashTable).ArrayNum == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HashTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                         ,0x97,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  iVar4 = *(int *)(pFVar2 + lVar1 + 8);
  local_28.Value = (uint)*(undefined8 *)(pFVar2 + lVar1);
  uVar9 = ::GetTypeHash(local_28);
  iVar5 = (this->HashTable).ArrayNum;
  iVar4 = uVar9 + iVar4;
  uVar9 = iVar4 + ~(iVar4 * 0x8000);
  uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
  uVar9 = (int)uVar9 >> 6 ^ uVar9;
  uVar9 = uVar9 + ~(uVar9 << 0xb);
  uVar10 = ((int)uVar9 >> 0x10 ^ uVar9) & iVar5 - 1U;
  uVar9 = 0;
  if ((int)uVar10 < iVar5) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2);
  if (uVar3 == 0) {
    uVar9 = 0;
    if ((int)uVar10 < (this->HashTable).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(ushort *)((this->HashTable).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) =
         (ushort)param_1 + 1;
  }
  else {
    uVar9 = uVar3 - 1;
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar3 * 0x14 + -6);
    while ((uVar3 & 0x3fff) != 0) {
      uVar9 = uVar3 & 0x3fff;
      if (((this->Array).ArrayNum <= (int)uVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(ushort *)((this->Array).AllocatorInstance.Data + (ulonglong)uVar9 * 0x14 + 0xe);
    }
    uVar10 = 0;
    if ((int)uVar9 < (this->Array).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->Array).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)(int)uVar9 * 0x14 + 0xe;
    *(ushort *)pFVar2 =
         *(ushort *)pFVar2 ^
         (*(ushort *)(pFVar6 + (longlong)(int)uVar9 * 0x14 + 0xe) ^ (ushort)param_1) & 0x3fff;
  }
  return;
}

