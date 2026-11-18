// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 15

// GetInternalIndexArray<2> @ 144263310

TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Net::Private::FNetDependencyData::GetInternalIndexArray<2>
          (FNetDependencyData *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->DependencyInfos).field_0x8 != *(int *)&(this->DependencyInfos).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DependencyInfos).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DependencyInfos).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->DependencyInfos).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28;
        if (*(uint *)(*(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28) == param_1) {
          lVar3 = lVar1 + 4;
          if (lVar1 == 0) {
            lVar3 = 0;
          }
          if (lVar3 == 0) {
            return (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                   0x0;
          }
          if (*(int *)(lVar3 + 8) == -1) {
            return (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                   0x0;
          }
          return (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                 ((longlong)*(int *)(lVar3 + 8) * 0x30 + *(longlong *)&this->DependentObjectsStorage
                 );
        }
        iVar2 = *(int *)(lVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// GetInternalIndexArray<0> @ 144263390

TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Net::Private::FNetDependencyData::GetInternalIndexArray<0>
          (FNetDependencyData *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->DependencyInfos).field_0x8 != *(int *)&(this->DependencyInfos).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DependencyInfos).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DependencyInfos).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->DependencyInfos).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28;
        if (*(uint *)(*(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28) == param_1) {
          piVar3 = (int *)(lVar1 + 4);
          if (lVar1 == 0) {
            piVar3 = (int *)0x0;
          }
          if (piVar3 == (int *)0x0) {
            return (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                   0x0;
          }
          if (*piVar3 == -1) {
            return (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                   0x0;
          }
          return (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                 ((longlong)*piVar3 * 0x30 + *(longlong *)&this->DependentObjectsStorage);
        }
        iVar2 = *(int *)(lVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// FNetDependencyData @ 144266910

FNetDependencyData * __thiscall
UE::Net::Private::FNetDependencyData::FNetDependencyData(FNetDependencyData *this)

{
  *(undefined8 *)&this->DependencyInfos = 0;
  *(undefined8 *)&(this->DependencyInfos).field_0x8 = 0;
  *(undefined8 *)&(this->DependencyInfos).field_0x20 = 0;
  *(undefined4 *)&(this->DependencyInfos).field_0x28 = 0;
  *(undefined4 *)&(this->DependencyInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->DependencyInfos).field_0x34 = 0;
  *(undefined4 *)&(this->DependencyInfos).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DependencyInfos).field_0x40 = 0;
  *(undefined4 *)&(this->DependencyInfos).field_0x48 = 0;
  *(undefined8 *)&this->DependentObjectsStorage = 0;
  *(undefined8 *)&(this->DependentObjectsStorage).field_0x8 = 0;
  *(undefined8 *)&(this->DependentObjectsStorage).field_0x20 = 0;
  *(undefined4 *)&(this->DependentObjectsStorage).field_0x28 = 0;
  *(undefined4 *)&(this->DependentObjectsStorage).field_0x2c = 0x80;
  *(undefined4 *)&(this->DependentObjectsStorage).field_0x34 = 0;
  *(undefined4 *)&(this->DependentObjectsStorage).field_0x30 = 0xffffffff;
  *(undefined8 *)&this->SubObjectConditionalsStorage = 0;
  *(undefined8 *)&(this->SubObjectConditionalsStorage).field_0x8 = 0;
  *(undefined8 *)&(this->SubObjectConditionalsStorage).field_0x20 = 0;
  *(undefined4 *)&(this->SubObjectConditionalsStorage).field_0x28 = 0;
  *(undefined4 *)&(this->SubObjectConditionalsStorage).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjectConditionalsStorage).field_0x34 = 0;
  *(undefined4 *)&(this->SubObjectConditionalsStorage).field_0x30 = 0xffffffff;
  *(undefined8 *)&this->DependentObjectInfosStorage = 0;
  *(undefined8 *)&(this->DependentObjectInfosStorage).field_0x8 = 0;
  *(undefined8 *)&(this->DependentObjectInfosStorage).field_0x20 = 0;
  *(undefined4 *)&(this->DependentObjectInfosStorage).field_0x28 = 0;
  *(undefined4 *)&(this->DependentObjectInfosStorage).field_0x2c = 0x80;
  *(undefined4 *)&(this->DependentObjectInfosStorage).field_0x34 = 0;
  *(undefined4 *)&(this->DependentObjectInfosStorage).field_0x30 = 0xffffffff;
  *(undefined8 *)&this->CreationDependencyInfosStorage = 0;
  *(undefined8 *)&(this->CreationDependencyInfosStorage).field_0x8 = 0;
  *(undefined8 *)&(this->CreationDependencyInfosStorage).field_0x20 = 0;
  *(undefined4 *)&(this->CreationDependencyInfosStorage).field_0x28 = 0;
  *(undefined4 *)&(this->CreationDependencyInfosStorage).field_0x2c = 0x80;
  *(undefined4 *)&(this->CreationDependencyInfosStorage).field_0x34 = 0;
  *(undefined4 *)&(this->CreationDependencyInfosStorage).field_0x30 = 0xffffffff;
  return this;
}

// FreeCreationDependencyInfoArray @ 144278ef0

void __thiscall
UE::Net::Private::FNetDependencyData::FreeCreationDependencyInfoArray
          (FNetDependencyData *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->DependencyInfos).field_0x8 != *(int *)&(this->DependencyInfos).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DependencyInfos).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DependencyInfos).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->DependencyInfos).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      while (lVar1 = *(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28,
            *(uint *)(*(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28) != param_1) {
        iVar2 = *(int *)(lVar1 + 0x20);
        if (iVar2 == -1) {
          return;
        }
      }
      lVar3 = lVar1 + 4;
      if (lVar1 == 0) {
        lVar3 = 0;
      }
      if ((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 0x18), iVar2 != -1)) {
        TSparseArray<TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
        ::DestroyElements(&this->CreationDependencyInfosStorage,iVar2,1);
        TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)
                   &this->CreationDependencyInfosStorage,iVar2,1);
        *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
      }
    }
  }
  return;
}

// FreeStoredDependencyDataForObject @ 144278fc0

void __thiscall
UE::Net::Private::FNetDependencyData::FreeStoredDependencyDataForObject
          (FNetDependencyData *this,uint param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined1 *puVar10;
  uint uVar11;
  int *piVar12;
  undefined1 *puVar13;
  int *piVar14;
  uint local_res8 [2];
  uint local_res10;
  longlong local_res18;
  int *local_res20;
  
  if (*(int *)&(this->DependencyInfos).field_0x8 != *(int *)&(this->DependencyInfos).field_0x34) {
    puVar13 = *(undefined1 **)&(this->DependencyInfos).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->DependencyInfos).field_0x38;
    }
    iVar6 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(this->DependencyInfos).field_0x48 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      while (lVar1 = *(longlong *)&this->DependencyInfos + (longlong)iVar6 * 0x28,
            *(uint *)(*(longlong *)&this->DependencyInfos + (longlong)iVar6 * 0x28) != param_1) {
        iVar6 = *(int *)(lVar1 + 0x20);
        if (iVar6 == -1) {
          return;
        }
      }
      piVar12 = (int *)(lVar1 + 4);
      if (lVar1 == 0) {
        piVar12 = (int *)0x0;
      }
      if (piVar12 != (int *)0x0) {
        piVar9 = piVar12 + 4;
        piVar14 = piVar12;
        local_res10 = param_1;
        local_res20 = piVar9;
        if (piVar12 != piVar9) {
          do {
            iVar6 = *piVar14;
            if (iVar6 != -1) {
              TSparseArray<TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
              ::DestroyElements(&this->DependentObjectsStorage,iVar6,1);
              lVar1 = *(longlong *)&this->DependentObjectsStorage;
              puVar13 = &(this->DependentObjectsStorage).field_0x10;
              bVar4 = (byte)iVar6 & 0x1f;
              uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
              if (((iVar6 < 0) || (*(int *)&(this->DependentObjectsStorage).field_0x28 <= iVar6)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              puVar2 = *(undefined1 **)&(this->DependentObjectsStorage).field_0x20;
              puVar10 = puVar13;
              if (puVar2 != (undefined1 *)0x0) {
                puVar10 = puVar2;
              }
              iVar7 = iVar6;
              if (iVar6 < 0) {
                iVar7 = iVar6 + 0x1f;
              }
              local_res18 = (longlong)(iVar7 >> 5) * 4;
              if (((*(uint *)(puVar10 + local_res18) & uVar11) == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("AllocationFlags[Index]",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                     ,0xc5,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(int *)&(this->DependentObjectsStorage).field_0x34 != 0) {
                *(int *)(lVar1 + (longlong)*(int *)&(this->DependentObjectsStorage).field_0x30 *
                                 0x30) = iVar6;
              }
              *(undefined4 *)(lVar1 + (longlong)iVar6 * 0x30) = 0xffffffff;
              if (*(int *)&(this->DependentObjectsStorage).field_0x34 < 1) {
                uVar8 = 0xffffffff;
              }
              else {
                uVar8 = *(undefined4 *)&(this->DependentObjectsStorage).field_0x30;
              }
              *(undefined4 *)(lVar1 + 4 + (longlong)iVar6 * 0x30) = uVar8;
              puVar2 = &(this->DependentObjectsStorage).field_0x34;
              *(int *)puVar2 = *(int *)puVar2 + 1;
              *(int *)&(this->DependentObjectsStorage).field_0x30 = iVar6;
              if (((iVar6 < 0) || (*(int *)&(this->DependentObjectsStorage).field_0x28 <= iVar6)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              puVar2 = *(undefined1 **)&(this->DependentObjectsStorage).field_0x20;
              if (puVar2 != (undefined1 *)0x0) {
                puVar13 = puVar2;
              }
              *(uint *)(puVar13 + local_res18) = *(uint *)(puVar13 + local_res18) & ~uVar11;
              piVar9 = local_res20;
            }
            piVar14 = piVar14 + 1;
          } while (piVar14 != piVar9);
        }
        uVar11 = local_res10;
        iVar6 = *piVar9;
        if (iVar6 != -1) {
          TSparseArray<TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
          ::DestroyElements(&this->SubObjectConditionalsStorage,iVar6,1);
          TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                    ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)
                     &this->SubObjectConditionalsStorage,iVar6,1);
        }
        if (piVar12[5] != -1) {
          TSparseArray<TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
          ::RemoveAt(&this->DependentObjectInfosStorage,piVar12[5],1);
        }
        iVar6 = piVar12[6];
        if (iVar6 != -1) {
          TSparseArray<TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
          ::DestroyElements(&this->CreationDependencyInfosStorage,iVar6,1);
          TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                    ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)
                     &this->CreationDependencyInfosStorage,iVar6,1);
        }
        if (*(int *)&(this->DependencyInfos).field_0x8 !=
            *(int *)&(this->DependencyInfos).field_0x34) {
          local_res8[0] = uVar11;
          TSet<TTuple<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>,FDefaultSetAllocator>
                      *)this,uVar11,local_res8);
        }
      }
    }
  }
  return;
}

// GetCreationDependencyInfoArray @ 14427a000

TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Net::Private::FNetDependencyData::GetCreationDependencyInfoArray
          (FNetDependencyData *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->DependencyInfos).field_0x8 != *(int *)&(this->DependencyInfos).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DependencyInfos).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DependencyInfos).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->DependencyInfos).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28;
        if (*(uint *)(*(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28) == param_1) {
          lVar3 = lVar1 + 4;
          if (lVar1 == 0) {
            lVar3 = 0;
          }
          if (lVar3 == 0) {
            return (TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                   0x0;
          }
          if (*(int *)(lVar3 + 0x18) == -1) {
            return (TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                   0x0;
          }
          return (TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                 (*(longlong *)&this->CreationDependencyInfosStorage +
                 (longlong)*(int *)(lVar3 + 0x18) * 0x18);
        }
        iVar2 = *(int *)(lVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return (TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// GetDependentObjectInfoArray @ 14427a0e0

TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
UE::Net::Private::FNetDependencyData::GetDependentObjectInfoArray
          (FNetDependencyData *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->DependencyInfos).field_0x8 != *(int *)&(this->DependencyInfos).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DependencyInfos).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DependencyInfos).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->DependencyInfos).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28;
        if (*(uint *)(*(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28) == param_1) {
          lVar3 = lVar1 + 4;
          if (lVar1 == 0) {
            lVar3 = 0;
          }
          if (lVar3 == 0) {
            return (TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0;
          }
          if (*(int *)(lVar3 + 0x14) == -1) {
            return (TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0;
          }
          return (TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                  *)((longlong)*(int *)(lVar3 + 0x14) * 0x50 +
                    *(longlong *)&this->DependentObjectInfosStorage);
        }
        iVar2 = *(int *)(lVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return (TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
}

// GetInternalChildSubObjectAndConditionalArrays @ 14427a740

bool __thiscall
UE::Net::Private::FNetDependencyData::GetInternalChildSubObjectAndConditionalArrays
          (FNetDependencyData *this,uint param_1,
          TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **param_2,
          TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **param_3)

{
  longlong lVar1;
  int iVar2;
  TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->DependencyInfos).field_0x8 != *(int *)&(this->DependencyInfos).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DependencyInfos).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DependencyInfos).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->DependencyInfos).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28;
        if (*(uint *)(*(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28) == param_1) {
          pTVar4 = (TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                   0x0;
          pTVar3 = (TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                   (lVar1 + 4);
          if (lVar1 == 0) {
            pTVar3 = pTVar4;
          }
          if (pTVar3 == (TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                         *)0x0) {
            return false;
          }
          iVar2 = *(int *)((pTVar3->AllocatorInstance).InlineData + 4);
          if (iVar2 == -1) {
            return false;
          }
          *param_2 = (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)iVar2 * 0x30 + *(longlong *)&this->DependentObjectsStorage);
          if (pTVar3->ArrayNum != -1) {
            pTVar4 = (TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *
                     )(*(longlong *)&this->SubObjectConditionalsStorage +
                      (longlong)pTVar3->ArrayNum * 0x18);
          }
          *param_3 = pTVar4;
          return true;
        }
        iVar2 = *(int *)(lVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// GetOrCreateCacheEntry @ 14427b360

FDependencyInfo * __thiscall
UE::Net::Private::FNetDependencyData::GetOrCreateCacheEntry(FNetDependencyData *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  FDependencyInfo *pFVar3;
  undefined1 *puVar4;
  TKeyInitializer<unsigned_int_const_&> local_res8;
  uint local_res10 [2];
  uint *local_res18 [2];
  
  if (*(int *)&(this->DependencyInfos).field_0x8 != *(int *)&(this->DependencyInfos).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DependencyInfos).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DependencyInfos).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->DependencyInfos).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28;
        if (*(uint *)(*(longlong *)&this->DependencyInfos + (longlong)iVar2 * 0x28) == param_1) {
          pFVar3 = (FDependencyInfo *)(lVar1 + 4);
          if (lVar1 == 0) {
            pFVar3 = (FDependencyInfo *)0x0;
          }
          if (pFVar3 != (FDependencyInfo *)0x0) {
            return pFVar3;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res18[0] = local_res10;
  local_res10[0] = param_1;
  TSet<TTuple<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)local_res18);
  lVar1 = *(longlong *)&this->DependencyInfos + (longlong)(int)local_res8.Key * 0x28;
  pFVar3 = (FDependencyInfo *)(lVar1 + 4);
  pFVar3->ArrayIndices[0] = 0xffffffff;
  pFVar3->ArrayIndices[1] = 0xffffffff;
  *(undefined8 *)(lVar1 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x14) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x1c) = 0xffffffff;
  return pFVar3;
}

// GetOrCreateCreationDependencyInfoArray @ 14427b430

TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Net::Private::FNetDependencyData::GetOrCreateCreationDependencyInfoArray
          (FNetDependencyData *this,uint param_1)

{
  FDependencyInfo *pFVar1;
  FSparseArrayAllocationInfo local_18;
  
  pFVar1 = GetOrCreateCacheEntry(this,param_1);
  if (pFVar1->CreationDependencyArrayIndex == 0xffffffff) {
    TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::AddUninitialized
              ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)
               &this->CreationDependencyInfosStorage,&local_18);
    pFVar1->CreationDependencyArrayIndex = local_18.Index;
    (local_18.Pointer)->SecondaryData = (ForElementType<unsigned_int>)0x0;
    *(int *)((longlong)local_18.Pointer + 0x10) = 0;
    *(int *)((longlong)local_18.Pointer + 0x14) = 2;
    return local_18.Pointer;
  }
  return (TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
         (*(longlong *)&this->CreationDependencyInfosStorage +
         (longlong)(int)pFVar1->CreationDependencyArrayIndex * 0x18);
}

// GetOrCreateDependentObjectInfoArray @ 14427b4b0

TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
UE::Net::Private::FNetDependencyData::GetOrCreateDependentObjectInfoArray
          (FNetDependencyData *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FDependencyInfo *pFVar4;
  TSparseArray<TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
  *this_00;
  FSparseArrayAllocationInfo local_18;
  
  pFVar4 = GetOrCreateCacheEntry(this,param_1);
  this_00 = &this->DependentObjectInfosStorage;
  if (pFVar4->DependentObjectsInfoArrayIndex == 0xffffffff) {
    iVar1 = *(int *)&(this->DependentObjectInfosStorage).field_0x34;
    if (iVar1 == 0) {
      iVar3 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x50,8,1,(ForAnyElementType *)this_00,
                         (int *)&(this->DependentObjectInfosStorage).field_0x8,
                         (int *)&(this->DependentObjectInfosStorage).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->DependentObjectInfosStorage).field_0x10,false);
    }
    else {
      iVar3 = *(int *)&(this->DependentObjectInfosStorage).field_0x30;
      iVar1 = iVar1 + -1;
      iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar3 * 0x50);
      *(int *)&(this->DependentObjectInfosStorage).field_0x30 = iVar2;
      *(int *)&(this->DependentObjectInfosStorage).field_0x34 = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x50) = 0xffffffff;
      }
    }
    TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
              ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)this_00,&local_18,iVar3);
    pFVar4->DependentObjectsInfoArrayIndex = local_18.Index;
    (local_18.Pointer)->SecondaryData = (ForElementType<UE::Net::Private::FDependentObjectInfo>)0x0;
    *(int *)((longlong)local_18.Pointer + 0x48) = 0;
    *(int *)((longlong)local_18.Pointer + 0x4c) = 8;
    return local_18.Pointer;
  }
  return (TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *)((longlong)(int)pFVar4->DependentObjectsInfoArrayIndex * 0x50 +
            *(longlong *)&this_00->field_0x0);
}

// GetOrCreateInternalChildSubObjectsArray @ 14427b5b0

TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Net::Private::FNetDependencyData::GetOrCreateInternalChildSubObjectsArray
          (FNetDependencyData *this,uint param_1,
          TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **param_2)

{
  FDependencyInfo *pFVar1;
  TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FSparseArrayAllocationInfo local_18;
  
  pFVar1 = GetOrCreateCacheEntry(this,param_1);
  if (pFVar1->ArrayIndices[1] == 0xffffffff) {
    TSparseArrayBase<48,8,FDefaultSparseArrayAllocator>::AddUninitialized
              ((TSparseArrayBase<48,8,FDefaultSparseArrayAllocator> *)&this->DependentObjectsStorage
               ,&local_18);
    pFVar1->ArrayIndices[1] = local_18.Index;
    (local_18.Pointer)->SecondaryData = (ForElementType<unsigned_int>)0x0;
    *(int *)((longlong)local_18.Pointer + 0x28) = 0;
    *(int *)((longlong)local_18.Pointer + 0x2c) = 8;
    *param_2 = (TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0;
    return local_18.Pointer;
  }
  if (pFVar1->SubObjectConditionalArrayIndex == 0xffffffff) {
    pTVar2 = (TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar2 = (TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)&this->SubObjectConditionalsStorage +
             (longlong)(int)pFVar1->SubObjectConditionalArrayIndex * 0x18);
  }
  *param_2 = pTVar2;
  return (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
         ((longlong)(int)pFVar1->ArrayIndices[1] * 0x30 +
         *(longlong *)&this->DependentObjectsStorage);
}

// GetOrCreateInternalIndexArray @ 14427b660

TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Net::Private::FNetDependencyData::GetOrCreateInternalIndexArray
          (FNetDependencyData *this,uint param_1,EArrayType param_2)

{
  uint uVar1;
  FDependencyInfo *pFVar2;
  FSparseArrayAllocationInfo local_18;
  
  pFVar2 = GetOrCreateCacheEntry(this,param_1);
  uVar1 = pFVar2->ArrayIndices[(int)param_2];
  if (uVar1 == 0xffffffff) {
    TSparseArrayBase<48,8,FDefaultSparseArrayAllocator>::AddUninitialized
              ((TSparseArrayBase<48,8,FDefaultSparseArrayAllocator> *)&this->DependentObjectsStorage
               ,&local_18);
    pFVar2->ArrayIndices[(int)param_2] = local_18.Index;
    (local_18.Pointer)->SecondaryData = (ForElementType<unsigned_int>)0x0;
    *(int *)((longlong)local_18.Pointer + 0x28) = 0;
    *(int *)((longlong)local_18.Pointer + 0x2c) = 8;
    return local_18.Pointer;
  }
  return (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
         ((longlong)(int)uVar1 * 0x30 + *(longlong *)&this->DependentObjectsStorage);
}

// GetOrCreateSubObjectConditionalsArray @ 14427ba70

TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Net::Private::FNetDependencyData::GetOrCreateSubObjectConditionalsArray
          (FNetDependencyData *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDependencyInfo *pFVar5;
  TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForElementType<signed_char> FVar7;
  FSparseArrayAllocationInfo local_18;
  
  pFVar5 = GetOrCreateCacheEntry(this,param_1);
  if ((pFVar5->ArrayIndices[1] == 0xffffffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry.ArrayIndices[EArrayType::ChildSubObjects] != FDependencyInfo::InvalidCacheIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetDependencyData.cpp"
                         ,0x52,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar2)();
    return pTVar6;
  }
  if (pFVar5->SubObjectConditionalArrayIndex != 0xffffffff) {
    return (TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
           (*(longlong *)&this->SubObjectConditionalsStorage +
           (longlong)(int)pFVar5->SubObjectConditionalArrayIndex * 0x18);
  }
  TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::AddUninitialized
            ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)
             &this->SubObjectConditionalsStorage,&local_18);
  pFVar5->SubObjectConditionalArrayIndex = local_18.Index;
  *(ForElementType<signed_char> *)((longlong)local_18.Pointer + 8) =
       (ForElementType<signed_char>)0x0;
  *(int *)((longlong)local_18.Pointer + 0x10) = 0;
  *(int *)((longlong)local_18.Pointer + 0x14) = 8;
  uVar1 = *(uint *)(*(longlong *)&this->DependentObjectsStorage + 0x28 +
                   (longlong)(int)pFVar5->ArrayIndices[1] * 0x30);
  if ((int)uVar1 < 1) {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
  }
  else {
    iVar4 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<signed_char>_>
                      (1,1,uVar1,local_18.Pointer,(int *)((longlong)local_18.Pointer + 0x10),
                       (int *)((longlong)local_18.Pointer + 0x14));
    FVar7 = *(ForElementType<signed_char> *)((longlong)local_18.Pointer + 8);
    if (*(ForElementType<signed_char> *)((longlong)local_18.Pointer + 8) ==
        (ForElementType<signed_char>)0x0) {
      FVar7 = (ForElementType<signed_char>)local_18.Pointer;
    }
    memset((void *)((longlong)FVar7 + (longlong)iVar4),0,(longlong)(int)uVar1);
  }
  return (TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
         (ForElementType<signed_char>)local_18.Pointer;
}

// ~FNetDependencyData @ 1442f81e0

void __thiscall UE::Net::Private::FNetDependencyData::~FNetDependencyData(FNetDependencyData *this)

{
  undefined1 *puVar1;
  TSparseArray<TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
  *this_00;
  TSparseArray<TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
  *this_01;
  TSparseArray<TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
  *this_02;
  int iVar2;
  void *pvVar3;
  
  this_00 = &this->CreationDependencyInfosStorage;
  TSparseArray<TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
  ::DestroyElements(this_00,0,*(int *)&(this->CreationDependencyInfosStorage).field_0x8);
  puVar1 = &(this->CreationDependencyInfosStorage).field_0xc;
  *(undefined4 *)&(this->CreationDependencyInfosStorage).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CreationDependencyInfosStorage).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CreationDependencyInfosStorage).field_0x34 = 0;
  iVar2 = *(int *)&(this->CreationDependencyInfosStorage).field_0x2c;
  *(undefined4 *)&(this->CreationDependencyInfosStorage).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CreationDependencyInfosStorage).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->CreationDependencyInfosStorage).field_0x10,0);
  }
  pvVar3 = *(void **)&(this->CreationDependencyInfosStorage).field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (*(void **)this_00 != (void *)0x0) {
    FMemory::Free(*(void **)this_00);
  }
  this_01 = &this->DependentObjectInfosStorage;
  TSparseArray<TArray<UE::Net::Private::FDependentObjectInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
  ::DestroyElements(this_01,0,*(int *)&(this->DependentObjectInfosStorage).field_0x8);
  puVar1 = &(this->DependentObjectInfosStorage).field_0xc;
  *(undefined4 *)&(this->DependentObjectInfosStorage).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->DependentObjectInfosStorage).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DependentObjectInfosStorage).field_0x34 = 0;
  iVar2 = *(int *)&(this->DependentObjectInfosStorage).field_0x2c;
  *(undefined4 *)&(this->DependentObjectInfosStorage).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->DependentObjectInfosStorage).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->DependentObjectInfosStorage).field_0x10,0);
  }
  pvVar3 = *(void **)&(this->DependentObjectInfosStorage).field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (*(void **)this_01 != (void *)0x0) {
    FMemory::Free(*(void **)this_01);
  }
  this_02 = &this->SubObjectConditionalsStorage;
  TSparseArray<TArray<signed_char,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
  ::DestroyElements(this_02,0,*(int *)&(this->SubObjectConditionalsStorage).field_0x8);
  puVar1 = &(this->SubObjectConditionalsStorage).field_0xc;
  *(undefined4 *)&(this->SubObjectConditionalsStorage).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SubObjectConditionalsStorage).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubObjectConditionalsStorage).field_0x34 = 0;
  iVar2 = *(int *)&(this->SubObjectConditionalsStorage).field_0x2c;
  *(undefined4 *)&(this->SubObjectConditionalsStorage).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SubObjectConditionalsStorage).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SubObjectConditionalsStorage).field_0x10,0);
  }
  pvVar3 = *(void **)&(this->SubObjectConditionalsStorage).field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (*(void **)this_02 != (void *)0x0) {
    FMemory::Free(*(void **)this_02);
  }
  TSparseArray<TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSparseArrayAllocator>
  ::DestroyElements(&this->DependentObjectsStorage,0,
                    *(int *)&(this->DependentObjectsStorage).field_0x8);
  puVar1 = &(this->DependentObjectsStorage).field_0xc;
  *(undefined4 *)&(this->DependentObjectsStorage).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)&this->DependentObjectsStorage,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->DependentObjectsStorage).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DependentObjectsStorage).field_0x34 = 0;
  iVar2 = *(int *)&(this->DependentObjectsStorage).field_0x2c;
  *(undefined4 *)&(this->DependentObjectsStorage).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->DependentObjectsStorage).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DependentObjectsStorage).field_0x10,0
              );
  }
  pvVar3 = *(void **)&(this->DependentObjectsStorage).field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (*(void **)&this->DependentObjectsStorage != (void *)0x0) {
    FMemory::Free(*(void **)&this->DependentObjectsStorage);
  }
  *(undefined4 *)&(this->DependencyInfos).field_0x48 = 0;
  pvVar3 = *(void **)&(this->DependencyInfos).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

