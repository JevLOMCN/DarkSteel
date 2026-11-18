// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticStruct @ 147a0d500

UScriptStruct * __cdecl FKeyHandleLookupTable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKeyHandleLookupTable.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKeyHandleLookupTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKeyHandleLookupTable,(UObject *)pUVar1,
                         L"KeyHandleLookupTable");
  }
  return Z_Registration_Info_UScriptStruct_FKeyHandleLookupTable.OuterSingleton;
}

// AllocateHandle @ 147a31d40

FKeyHandle __thiscall FKeyHandleLookupTable::AllocateHandle(FKeyHandleLookupTable *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FSparseArrayAllocationInfo *pFVar5;
  undefined4 in_register_00000014;
  int *piVar6;
  int in_R8D;
  int local_res18 [4];
  int *local_28;
  int *local_20;
  FSparseArrayAllocationInfo local_18;
  
  piVar6 = (int *)CONCAT44(in_register_00000014,param_1);
  LOCK();
  UNLOCK();
  iVar3 = (int)LastKeyHandleIndex + 1;
  LastKeyHandleIndex = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
  *piVar6 = iVar3;
  local_res18[0] = in_R8D;
  if (iVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (FKeyHandle)uVar4;
    }
  }
  if (local_res18[0] < *(int *)&(this->KeyHandles).field_0x8) {
    RelocateKeyHandles(this,local_res18[0],1);
  }
  pFVar5 = TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)this,&local_18,
                      local_res18[0]);
  if (pFVar5->Pointer != (int *)0x0) {
    *(int *)pFVar5->Pointer = *piVar6;
  }
  local_20 = local_res18;
  local_28 = piVar6;
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
            ((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
              *)&this->KeyHandlesToIndices,
             (TPairInitializer<FKeyHandle_const_&,int_const_&> *)&stack0x00000008,(bool *)&local_28)
  ;
  return (FKeyHandle)param_1;
}

// DeallocateHandle @ 147a3dfb0

void __thiscall FKeyHandleLookupTable::DeallocateHandle(FKeyHandleLookupTable *this,int param_1)

{
  undefined1 *puVar1;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->KeyHandles).field_0x28)) {
    puVar1 = *(undefined1 **)&(this->KeyHandles).field_0x20;
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &(this->KeyHandles).field_0x10;
    }
    if ((*(uint *)(puVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0) {
      TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>::
      Remove((TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>
              *)&this->KeyHandlesToIndices,
             (FKeyHandle *)(*(longlong *)&this->KeyHandles + (longlong)param_1 * 8));
      TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::RemoveAt(&this->KeyHandles,param_1,1);
      RelocateKeyHandles(this,param_1 + 1,-1);
    }
  }
  return;
}

// FindOrAddKeyHandle @ 147a470d0

FKeyHandle __thiscall
FKeyHandleLookupTable::FindOrAddKeyHandle(FKeyHandleLookupTable *this,int param_1)

{
  code *pcVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FSparseArrayAllocationInfo *pFVar5;
  undefined4 in_register_00000014;
  uint in_R8D;
  undefined1 *puVar6;
  int local_res8 [2];
  uint local_res18 [4];
  int *local_28;
  uint *local_20;
  FSparseArrayAllocationInfo local_18;
  
  if ((-1 < (int)in_R8D) && ((int)in_R8D < *(int *)&(this->KeyHandles).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->KeyHandles).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->KeyHandles).field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(in_R8D + ((int)in_R8D >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (in_R8D & 0x1f) & 1) != 0) {
      *(int *)CONCAT44(in_register_00000014,param_1) =
           *(int *)(*(longlong *)&this->KeyHandles + (longlong)(int)in_R8D * 8);
      return (FKeyHandle)param_1;
    }
  }
  LOCK();
  aVar2 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
  UNLOCK();
  local_res8[0] = (int)LastKeyHandleIndex + 1;
  LastKeyHandleIndex = aVar2;
  local_res18[0] = in_R8D;
  if (local_res8[0] == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (FKeyHandle)uVar4;
    }
  }
  pFVar5 = TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)this,&local_18,
                      local_res18[0]);
  if (pFVar5->Pointer != (int *)0x0) {
    *(int *)pFVar5->Pointer = local_res8[0];
  }
  local_28 = local_res8;
  local_20 = local_res18;
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
            ((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
              *)&this->KeyHandlesToIndices,
             (TPairInitializer<FKeyHandle_const_&,int_const_&> *)(local_res18 + 2),(bool *)&local_28
            );
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FKeyHandle)param_1;
}

// GetIndex @ 147a512d0

int __thiscall FKeyHandleLookupTable::GetIndex(FKeyHandleLookupTable *this,FKeyHandle param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->KeyHandlesToIndices).field_0x8 !=
      *(int *)&(this->KeyHandlesToIndices).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyHandlesToIndices).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyHandlesToIndices).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->KeyHandlesToIndices).field_0x48 - 1U & param_1.Index
                               ) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&this->KeyHandlesToIndices);
        if (*puVar2 == param_1.Index) {
          puVar3 = puVar2 + 1;
          if (puVar2 == (uint *)0x0) {
            puVar3 = (uint *)0x0;
          }
          if (puVar3 == (uint *)0x0) {
            return -1;
          }
          return *puVar3;
        }
        uVar1 = puVar2[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// MoveHandle @ 147a65cb0

void __thiscall
FKeyHandleLookupTable::MoveHandle(FKeyHandleLookupTable *this,int param_1,int param_2)

{
  FSparseArrayAllocationInfo *pFVar1;
  undefined1 *puVar2;
  TPairInitializer<FKeyHandle_const_&,int_const_&> local_res8;
  int local_res18 [2];
  int **local_18;
  int *local_10;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->KeyHandles).field_0x28)) {
    puVar2 = *(undefined1 **)&(this->KeyHandles).field_0x20;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->KeyHandles).field_0x10;
    }
    if ((*(uint *)(puVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0) {
      local_res8.Value._0_4_ =
           *(undefined4 *)(*(longlong *)&this->KeyHandles + (longlong)param_1 * 8);
      local_res18[0] = param_2;
      TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::RemoveAt(&this->KeyHandles,param_1,1);
      RelocateKeyHandles(this,param_1,-1);
      if (local_res18[0] < *(int *)&(this->KeyHandles).field_0x8) {
        RelocateKeyHandles(this,local_res18[0],1);
      }
      pFVar1 = TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                         ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)this,
                          (FSparseArrayAllocationInfo *)&local_18,local_res18[0]);
      if (pFVar1->Pointer != (undefined4 *)0x0) {
        *(undefined4 *)pFVar1->Pointer = local_res8.Value._0_4_;
      }
      local_18 = &local_res8.Value;
      local_10 = local_res18;
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
                ((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                  *)&this->KeyHandlesToIndices,&local_res8,(bool *)&local_18);
    }
  }
  return;
}

// RelocateKeyHandles @ 147a79330

void __thiscall
FKeyHandleLookupTable::RelocateKeyHandles(FKeyHandleLookupTable *this,int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  FSparseArrayAllocationInfo *pFVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined4 local_res18 [2];
  int local_res20 [2];
  TPairInitializer<FKeyHandle_const_&,int_&&> local_68;
  undefined4 *local_58;
  int *local_50;
  FSparseArrayAllocationInfo local_48;
  
  if (param_2 != 0) {
    iVar7 = *(int *)&(this->KeyHandles).field_0x8;
    if (param_2 < 1) {
      iVar13 = 1;
    }
    else {
      iVar13 = -1;
      TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::Reserve
                ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)this,iVar7 + param_2);
      iVar1 = param_1 + -1;
      param_1 = iVar7 - 1;
      iVar7 = iVar1;
    }
    local_68.Value = (int *)(longlong)iVar7;
    piVar14 = (int *)(longlong)param_1;
    if (piVar14 != local_68.Value) {
      do {
        if (((param_1 < 0) || (*(int *)&(this->KeyHandles).field_0x28 <= param_1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar2 = *(undefined1 **)&(this->KeyHandles).field_0x20;
        puVar11 = &(this->KeyHandles).field_0x10;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        uVar12 = param_1;
        if (param_1 < 0) {
          uVar12 = param_1 + 0x1f;
        }
        if ((*(uint *)(puVar11 + (longlong)((int)uVar12 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0) {
          local_res18[0] = *(undefined4 *)(*(longlong *)&this->KeyHandles + (longlong)piVar14 * 8);
          pFVar10 = TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                              ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)this,&local_48,
                               param_1 + param_2);
          if (pFVar10->Pointer != (undefined4 *)0x0) {
            *(undefined4 *)pFVar10->Pointer = local_res18[0];
          }
          local_58 = local_res18;
          local_50 = local_res20;
          local_res20[0] = param_1 + param_2;
          TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FKeyHandle_const_&,int_&&>_>
                    ((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                      *)&this->KeyHandlesToIndices,&local_68,(bool *)&local_58);
          lVar3 = *(longlong *)&this->KeyHandles;
          bVar5 = (byte)param_1 & 0x1f;
          uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
          if (((param_1 < 0) || (*(int *)&(this->KeyHandles).field_0x28 <= param_1)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar2 = *(undefined1 **)&(this->KeyHandles).field_0x20;
          puVar11 = &(this->KeyHandles).field_0x10;
          if (puVar2 != (undefined1 *)0x0) {
            puVar11 = puVar2;
          }
          uVar8 = param_1;
          if (param_1 < 0) {
            uVar8 = param_1 + 0x1f;
          }
          if (((*(uint *)(puVar11 + (longlong)((int)uVar8 >> 5) * 4) & uVar12) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)&(this->KeyHandles).field_0x34 != 0) {
            *(int *)(lVar3 + (longlong)*(int *)&(this->KeyHandles).field_0x30 * 8) = param_1;
          }
          *(undefined4 *)(lVar3 + (longlong)piVar14 * 8) = 0xffffffff;
          if (*(int *)&(this->KeyHandles).field_0x34 < 1) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = *(undefined4 *)&(this->KeyHandles).field_0x30;
          }
          *(undefined4 *)(lVar3 + 4 + (longlong)piVar14 * 8) = uVar9;
          puVar2 = &(this->KeyHandles).field_0x34;
          *(int *)puVar2 = *(int *)puVar2 + 1;
          *(int *)&(this->KeyHandles).field_0x30 = param_1;
          if (((param_1 < 0) || (*(int *)&(this->KeyHandles).field_0x28 <= param_1)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar2 = *(undefined1 **)&(this->KeyHandles).field_0x20;
          puVar11 = &(this->KeyHandles).field_0x10;
          if (puVar2 != (undefined1 *)0x0) {
            puVar11 = puVar2;
          }
          uVar8 = param_1;
          if (param_1 < 0) {
            uVar8 = param_1 + 0x1f;
          }
          *(uint *)(puVar11 + (longlong)((int)uVar8 >> 5) * 4) =
               *(uint *)(puVar11 + (longlong)((int)uVar8 >> 5) * 4) & ~uVar12;
        }
        param_1 = param_1 + iVar13;
        piVar14 = (int *)((longlong)piVar14 + (longlong)iVar13);
      } while (piVar14 != local_68.Value);
    }
    if (param_2 < 0) {
      TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::Shrink
                ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)this);
    }
  }
  return;
}

// ReplaceHandle @ 147a7f460

void __thiscall
FKeyHandleLookupTable::ReplaceHandle(FKeyHandleLookupTable *this,int param_1,FKeyHandle param_2)

{
  int iVar1;
  undefined1 *puVar2;
  TPairInitializer<FKeyHandle_const_&,int_const_&> local_res8;
  uint local_res18 [2];
  uint *local_18;
  int **local_10;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->KeyHandles).field_0x28)) {
    puVar2 = *(undefined1 **)&(this->KeyHandles).field_0x20;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->KeyHandles).field_0x10;
    }
    if ((*(uint *)(puVar2 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (param_1 & 0x1fU) & 1) != 0) {
      if (*(int *)&(this->KeyHandlesToIndices).field_0x8 !=
          *(int *)&(this->KeyHandlesToIndices).field_0x34) {
        puVar2 = *(undefined1 **)&(this->KeyHandlesToIndices).field_0x40;
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &(this->KeyHandlesToIndices).field_0x38;
        }
        iVar1 = *(int *)(puVar2 + (ulonglong)
                                  (*(int *)&(this->KeyHandlesToIndices).field_0x48 - 1U &
                                  param_2.Index) * 4);
        if (iVar1 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this->KeyHandlesToIndices + (longlong)iVar1 * 0x10) ==
                param_2.Index) {
              return;
            }
            iVar1 = *(int *)(*(longlong *)&this->KeyHandlesToIndices + 8 + (longlong)iVar1 * 0x10);
          } while (iVar1 != -1);
        }
      }
      local_res8.Value._0_4_ = param_1;
      local_res18[0] = param_2.Index;
      TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>::
      Remove((TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>
              *)&this->KeyHandlesToIndices,
             (FKeyHandle *)(*(longlong *)&this->KeyHandles + (longlong)param_1 * 8));
      local_18 = local_res18;
      local_10 = &local_res8.Value;
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
                ((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                  *)&this->KeyHandlesToIndices,&local_res8,(bool *)&local_18);
      *(uint *)(*(longlong *)&this->KeyHandles + (longlong)(int)local_res8.Value * 8) =
           local_res18[0];
    }
  }
  return;
}

// Reset @ 147a83170

void __thiscall FKeyHandleLookupTable::Reset(FKeyHandleLookupTable *this)

{
  *(undefined4 *)&(this->KeyHandles).field_0x8 = 0;
  if (*(int *)&(this->KeyHandles).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,(int *)&(this->KeyHandles).field_0xc);
  }
  *(undefined4 *)&(this->KeyHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyHandles).field_0x34 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x28 = 0;
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Reset((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
         *)&this->KeyHandlesToIndices);
  return;
}

// Serialize @ 147a87f30

bool __thiscall FKeyHandleLookupTable::Serialize(FKeyHandleLookupTable *this,FArchive *param_1)

{
  return true;
}

