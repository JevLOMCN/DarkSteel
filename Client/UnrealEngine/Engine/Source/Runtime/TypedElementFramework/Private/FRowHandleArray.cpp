// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 30

// FRowHandleArray @ 142c983b0

FRowHandleArray * __thiscall
UE::Editor::DataStorage::FRowHandleArray::FRowHandleArray
          (FRowHandleArray *this,FRowHandleArrayView *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1->RowCount;
  piVar1 = &(this->Rows).ArrayNum;
  piVar2 = &(this->Rows).ArrayMax;
  (this->Rows).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  this->bIsSorted = param_1->bIsSorted;
  this->bIsUnique = param_1->bIsUnique;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar3,(ForAnyElementType *)this,piVar1,piVar2);
  memcpy((this->Rows).AllocatorInstance.Data,param_1->Rows,(longlong)(iVar3 * 8));
  return this;
}

// operator= @ 142c9c100

FRowHandleArray * __thiscall
UE::Editor::DataStorage::FRowHandleArray::operator=(FRowHandleArray *this,FRowHandleArray *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->Rows).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Rows).AllocatorInstance.Data = (param_1->Rows).AllocatorInstance.Data;
    (param_1->Rows).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Rows).ArrayNum = (param_1->Rows).ArrayNum;
    (this->Rows).ArrayMax = (param_1->Rows).ArrayMax;
    (param_1->Rows).ArrayNum = 0;
    (param_1->Rows).ArrayMax = 0;
  }
  this->bIsSorted = param_1->bIsSorted;
  this->bIsUnique = param_1->bIsUnique;
  return this;
}

// Add @ 142ca2820

void __thiscall
UE::Editor::DataStorage::FRowHandleArray::Add(FRowHandleArray *this,ulong64 param_1,EFlags param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  ulong64 local_res10;
  
  piVar7 = &(this->Rows).ArrayNum;
  local_res10 = param_1;
  if (this->bIsSorted == false) {
LAB_142ca28b3:
    bVar4 = false;
  }
  else {
    iVar6 = *piVar7;
    if (iVar6 != 0) {
      uVar5 = 0;
      if ((int)(iVar6 - 1U) < iVar6) {
        uVar5 = ~(iVar6 - 1U) >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_res10 <
          *(ulonglong *)((this->Rows).AllocatorInstance.Data + (longlong)*piVar7 * 8 + -8))
      goto LAB_142ca28b3;
    }
    bVar4 = true;
  }
  this->bIsSorted = bVar4;
  if (this->bIsUnique != false) {
    if (bVar4 != false) {
      iVar6 = *piVar7;
      if (iVar6 != 0) {
        uVar5 = 0;
        if ((int)(iVar6 - 1U) < iVar6) {
          uVar5 = ~(iVar6 - 1U) >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_res10 <=
            *(ulonglong *)((this->Rows).AllocatorInstance.Data + (longlong)*piVar7 * 8 + -8))
        goto LAB_142ca293e;
      }
      bVar4 = true;
      goto LAB_142ca2946;
    }
    if ((param_2 & IsUnique) != None) {
      bVar4 = true;
      goto LAB_142ca2946;
    }
  }
LAB_142ca293e:
  bVar4 = false;
LAB_142ca2946:
  piVar7 = &(this->Rows).ArrayNum;
  this->bIsUnique = bVar4;
  pFVar2 = (this->Rows).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)(this->Rows).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *piVar7;
  piVar1 = &(this->Rows).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
    *piVar7 = iVar6;
  }
  *piVar7 = iVar6 + 1;
  *(ulong64 *)((this->Rows).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res10;
  return;
}

// Append @ 142ca5b00

void __thiscall
UE::Editor::DataStorage::FRowHandleArray::Append
          (FRowHandleArray *this,TArrayView<unsigned___int64_const_,int> *param_1,EFlags param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  if (param_1->ArrayNum != 0) {
    iVar2 = (this->Rows).ArrayNum;
    piVar1 = &(this->Rows).ArrayNum;
    if (iVar2 == 0) {
      this->bIsSorted = (bool)((byte)param_2 & 1);
      bVar6 = (bool)((byte)(param_2 >> 1) & 1);
    }
    else {
      bVar9 = false;
      uVar7 = 0;
      if ((int)(iVar2 - 1U) < iVar2) {
        uVar7 = ~(iVar2 - 1U) >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar3 = *(ulonglong *)((this->Rows).AllocatorInstance.Data + (longlong)*piVar1 * 8 + -8);
      uVar4 = *param_1->DataPtr;
      if (((this->bIsSorted == false) || ((param_2 & IsSorted) == None)) || (uVar4 < uVar3)) {
        this->bIsSorted = false;
        bVar6 = bVar9;
      }
      else {
        this->bIsSorted = true;
        bVar6 = false;
        if (((this->bIsUnique != false) && (bVar6 = bVar9, (param_2 & IsUnique) != None)) &&
           (uVar3 < uVar4)) {
          bVar6 = true;
        }
      }
    }
    this->bIsUnique = bVar6;
    iVar2 = param_1->ArrayNum;
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,(ForAnyElementType *)this,piVar1,&(this->Rows).ArrayMax);
    memcpy((this->Rows).AllocatorInstance.Data + (longlong)iVar8 * 8,param_1->DataPtr,
           (longlong)iVar2 << 3);
  }
  return;
}

// Append @ 142ca5c40

void __thiscall
UE::Editor::DataStorage::FRowHandleArray::Append(FRowHandleArray *this,FRowHandleArrayView *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1->Rows == (ulong64 *)0x0) {
    return;
  }
  if (param_1->RowCount < 1) {
    return;
  }
  iVar2 = (this->Rows).ArrayNum;
  piVar1 = &(this->Rows).ArrayNum;
  if (iVar2 == 0) {
    this->bIsSorted = param_1->bIsSorted;
    bVar6 = param_1->bIsUnique;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar7 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar3 = *(ulonglong *)((this->Rows).AllocatorInstance.Data + (longlong)*piVar1 * 8 + -8);
    if ((param_1->RowCount < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RowCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRowHandleArrayView.cpp"
                           ,0x35,
                           L"Attempting to get the first element from an empty row handle array view."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *param_1->Rows;
    if (((this->bIsSorted == false) || (param_1->bIsSorted == false)) || (uVar4 < uVar3)) {
      this->bIsSorted = false;
    }
    else {
      this->bIsSorted = true;
      if (((this->bIsUnique != false) && (param_1->bIsUnique != false)) && (uVar3 < uVar4)) {
        bVar6 = true;
        goto LAB_142ca5d43;
      }
    }
    bVar6 = false;
  }
LAB_142ca5d43:
  this->bIsUnique = bVar6;
  iVar2 = param_1->RowCount;
  iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar2,(ForAnyElementType *)this,piVar1,&(this->Rows).ArrayMax);
  memcpy((this->Rows).AllocatorInstance.Data + (longlong)iVar8 * 8,param_1->Rows,
         (longlong)(iVar2 * 8));
  return;
}

// Contains @ 142ca8660

bool __thiscall
UE::Editor::DataStorage::FRowHandleArray::Contains(FRowHandleArray *this,ulong64 param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  pFVar2 = (this->Rows).AllocatorInstance.Data;
  uVar3 = 0;
  iVar5 = 0;
  uVar1 = (this->Rows).ArrayNum;
  if (this->bIsSorted == false) {
    uVar4 = uVar3;
    if (0 < (int)uVar1) {
      do {
        iVar5 = (int)uVar3;
        if (*(ulong64 *)(pFVar2 + uVar4 * 8) == param_1) goto LAB_142ca86d5;
        uVar3 = (ulonglong)(iVar5 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)(int)uVar1);
    }
  }
  else {
    uVar6 = uVar1;
    if (0 < (int)uVar1) {
      do {
        uVar7 = uVar6 >> 1;
        iVar5 = uVar7 + (int)uVar3;
        if (*(ulonglong *)(pFVar2 + (longlong)iVar5 * 8) < param_1) {
          uVar3 = (ulonglong)(iVar5 + (uVar6 & 1));
        }
        iVar5 = (int)uVar3;
        uVar6 = uVar7;
      } while (uVar7 != 0);
    }
    if ((iVar5 < (int)uVar1) && (*(ulonglong *)(pFVar2 + (longlong)iVar5 * 8) <= param_1))
    goto LAB_142ca86d5;
  }
  iVar5 = -1;
LAB_142ca86d5:
  return (bool)((byte)((uint)iVar5 >> 0x1f) ^ 1);
}

// Empty @ 142cab360

void __thiscall UE::Editor::DataStorage::FRowHandleArray::Empty(FRowHandleArray *this,int param_1)

{
  int *piVar1;
  
  if (-1 < param_1) {
    piVar1 = &(this->Rows).ArrayMax;
    (this->Rows).ArrayNum = 0;
    if (*piVar1 != param_1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 142cabf70

int __thiscall UE::Editor::DataStorage::FRowHandleArray::Find(FRowHandleArray *this,ulong64 param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  pFVar2 = (this->Rows).AllocatorInstance.Data;
  uVar3 = 0;
  iVar5 = 0;
  uVar1 = (this->Rows).ArrayNum;
  if (this->bIsSorted == false) {
    uVar4 = uVar3;
    if (0 < (int)uVar1) {
      do {
        if (*(ulong64 *)(pFVar2 + uVar4 * 8) == param_1) {
          return (int)uVar3;
        }
        uVar3 = (ulonglong)((int)uVar3 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)(int)uVar1);
    }
  }
  else {
    uVar6 = uVar1;
    if (0 < (int)uVar1) {
      do {
        uVar7 = uVar6 >> 1;
        iVar5 = uVar7 + (int)uVar3;
        if (*(ulonglong *)(pFVar2 + (longlong)iVar5 * 8) < param_1) {
          uVar3 = (ulonglong)(iVar5 + (uVar6 & 1));
        }
        iVar5 = (int)uVar3;
        uVar6 = uVar7;
      } while (uVar7 != 0);
    }
    if (iVar5 < (int)uVar1) {
      if (*(ulonglong *)(pFVar2 + (longlong)iVar5 * 8) <= param_1) {
        return iVar5;
      }
      return -1;
    }
  }
  return -1;
}

// GetMutableRows @ 142cae450

TArrayView<unsigned___int64,int> * __thiscall
UE::Editor::DataStorage::FRowHandleArray::GetMutableRows
          (FRowHandleArray *this,TArrayView<unsigned___int64,int> *__return_storage_ptr__,
          EFlags param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned___int64,int> *pTVar4;
  
  if ((this->bIsSorted == false) || ((param_1 & IsSorted) == None)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bIsSorted = bVar3;
  if ((this->bIsUnique == false) || ((param_1 & IsUnique) == None)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bIsUnique = bVar3;
  iVar1 = (this->Rows).ArrayNum;
  __return_storage_ptr__->DataPtr = (ulong64 *)(this->Rows).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned___int64,int> *)(*pcVar2)();
      return pTVar4;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetRows @ 142caec50

FRowHandleArrayView * __thiscall
UE::Editor::DataStorage::FRowHandleArray::GetRows
          (FRowHandleArray *this,FRowHandleArrayView *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRowHandleArrayView *pFVar7;
  
  bVar1 = this->bIsUnique;
  iVar3 = (this->Rows).ArrayNum;
  pFVar4 = (this->Rows).AllocatorInstance.Data;
  bVar2 = this->bIsSorted;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FRowHandleArrayView *)(*pcVar5)();
      return pFVar7;
    }
  }
  __return_storage_ptr__->Rows = (ulong64 *)pFVar4;
  __return_storage_ptr__->bIsUnique = SUB41((-(uint)(bVar1 != false) & 2) >> 1,0);
  __return_storage_ptr__->RowCount = iVar3;
  __return_storage_ptr__->bIsSorted = bVar2 != false;
  return __return_storage_ptr__;
}

// InvertOrder @ 142caf910

void __thiscall UE::Editor::DataStorage::FRowHandleArray::InvertOrder(FRowHandleArray *this)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  
  iVar1 = (this->Rows).ArrayNum;
  if (iVar1 != 0) {
    pFVar3 = (this->Rows).AllocatorInstance.Data;
    pFVar5 = pFVar3 + ((longlong)iVar1 + -1) * 8;
    if (pFVar3 < pFVar5) {
      do {
        pFVar6 = pFVar5 + -8;
        pFVar4 = pFVar3 + 8;
        uVar2 = *(undefined8 *)pFVar3;
        *(undefined8 *)pFVar3 = *(undefined8 *)pFVar5;
        *(undefined8 *)pFVar5 = uVar2;
        pFVar3 = pFVar4;
        pFVar5 = pFVar6;
      } while (pFVar4 < pFVar6);
    }
    this->bIsSorted = false;
  }
  return;
}

// IsEmpty @ 142cafad0

bool __thiscall UE::Editor::DataStorage::FRowHandleArray::IsEmpty(FRowHandleArray *this)

{
  return (this->Rows).ArrayNum == 0;
}

// IsSame @ 142cafb50

bool __thiscall
UE::Editor::DataStorage::FRowHandleArray::IsSame(FRowHandleArray *this,FRowHandleArray *param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  FRowHandleArrayView *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  FRowHandleArrayView local_38;
  
  if (this == param_1) {
    return true;
  }
  iVar5 = (this->Rows).ArrayNum;
  if (iVar5 == (param_1->Rows).ArrayNum) {
    if (this->bIsSorted != false) {
      if (param_1->bIsSorted != false) {
        pFVar7 = GetRows(param_1,&local_38);
        iVar5 = memcmp((this->Rows).AllocatorInstance.Data,pFVar7->Rows,(longlong)iVar5 << 3);
        return iVar5 == 0;
      }
      GetRows(param_1,&local_38);
      puVar1 = local_38.Rows + local_38.RowCount;
      if (local_38.Rows != puVar1) {
        iVar5 = (this->Rows).ArrayNum;
        iVar12 = 0;
        pFVar3 = (this->Rows).AllocatorInstance.Data;
        uVar11 = *local_38.Rows;
        iVar10 = iVar5;
        if (iVar5 < 1) {
          return false;
        }
        while( true ) {
          do {
            iVar6 = iVar10 / 2;
            if (*(ulonglong *)(pFVar3 + (longlong)(iVar6 + iVar12) * 8) < uVar11) {
              iVar12 = iVar6 + iVar12 + iVar10 % 2;
            }
            iVar10 = iVar6;
          } while (0 < iVar6);
          if (iVar5 <= iVar12) {
            return false;
          }
          if (uVar11 < *(ulonglong *)(pFVar3 + (longlong)iVar12 * 8)) {
            return false;
          }
          if (iVar12 < 0) {
            return false;
          }
          local_38.Rows = local_38.Rows + 1;
          if (local_38.Rows == puVar1) break;
          uVar11 = *local_38.Rows;
          iVar12 = 0;
          iVar10 = iVar5;
        }
      }
      return true;
    }
    if (param_1->bIsSorted == false) {
      GetRows(param_1,&local_38);
      puVar1 = local_38.Rows + local_38.RowCount;
      if (local_38.Rows == puVar1) {
        return true;
      }
      lVar15 = (longlong)(this->Rows).ArrayNum;
      iVar5 = 0;
      lVar8 = 0;
      uVar11 = *local_38.Rows;
      if (0 < lVar15) {
        do {
          while (*(ulonglong *)((this->Rows).AllocatorInstance.Data + lVar8 * 8) == uVar11) {
            if (iVar5 < 0) {
              return false;
            }
            local_38.Rows = local_38.Rows + 1;
            if (local_38.Rows == puVar1) {
              return true;
            }
            uVar11 = *local_38.Rows;
            iVar5 = 0;
            lVar8 = 0;
          }
          iVar5 = iVar5 + 1;
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar15);
      }
    }
    else {
      pFVar9 = (this->Rows).AllocatorInstance.Data;
      pFVar3 = pFVar9 + (longlong)iVar5 * 8;
      while( true ) {
        if ((this->Rows).ArrayNum != iVar5) {
          `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar9 == pFVar3) {
          return true;
        }
        uVar2 = (param_1->Rows).ArrayNum;
        iVar12 = 0;
        pFVar4 = (param_1->Rows).AllocatorInstance.Data;
        uVar13 = uVar2;
        iVar10 = 0;
        if (0 < (int)uVar2) {
          do {
            uVar14 = uVar13 >> 1;
            iVar12 = iVar10;
            if (*(ulonglong *)(pFVar4 + (longlong)(int)(uVar14 + iVar10) * 8) < *(ulonglong *)pFVar9
               ) {
              iVar12 = uVar14 + iVar10 + (uVar13 & 1);
            }
            uVar13 = uVar14;
            iVar10 = iVar12;
          } while (uVar14 != 0);
        }
        if ((((int)uVar2 <= iVar12) ||
            (*(ulonglong *)pFVar9 < *(ulonglong *)(pFVar4 + (longlong)iVar12 * 8))) || (iVar12 < 0))
        break;
        pFVar9 = pFVar9 + 8;
      }
    }
  }
  return false;
}

// IsSorted @ 142cafde0

bool __thiscall UE::Editor::DataStorage::FRowHandleArray::IsSorted(FRowHandleArray *this)

{
  return this->bIsSorted;
}

// IsUnique @ 142cafe00

bool __thiscall UE::Editor::DataStorage::FRowHandleArray::IsUnique(FRowHandleArray *this)

{
  return this->bIsUnique;
}

// MakeUnique @ 142cb0710

void __thiscall UE::Editor::DataStorage::FRowHandleArray::MakeUnique(FRowHandleArray *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  
  if (this->bIsUnique != false) {
    return;
  }
  Sort(this);
  pFVar9 = (this->Rows).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(this->Rows).ArrayNum * 8;
  pFVar12 = pFVar2;
  if ((pFVar9 != pFVar2) && (pFVar9 + 8 != pFVar2)) {
    pFVar7 = pFVar9 + 8;
    lVar13 = *(longlong *)pFVar9;
    do {
      pFVar8 = pFVar7;
      pFVar7 = pFVar8 + 8;
      if (lVar13 == *(longlong *)pFVar8) goto joined_r0x000142cb081a;
      pFVar9 = pFVar8;
      lVar13 = *(longlong *)pFVar8;
    } while (pFVar7 != pFVar2);
  }
LAB_142cb0771:
  uVar11 = (uint)((longlong)pFVar12 - (longlong)(this->Rows).AllocatorInstance.Data >> 3);
  uVar10 = (uint)((longlong)pFVar2 - (longlong)pFVar12 >> 3);
  uVar5 = 0;
  if ((int)(uVar11 + uVar10) <= (this->Rows).ArrayNum) {
    uVar5 = ~(uVar11 | uVar10) >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar10 != 0) {
    pFVar2 = (this->Rows).AllocatorInstance.Data + (longlong)(int)uVar11 * 8;
    iVar6 = ((this->Rows).ArrayNum - uVar11) - uVar10;
    if (iVar6 != 0) {
      memmove(pFVar2,pFVar2 + (longlong)(int)uVar10 * 8,(longlong)iVar6 << 3);
    }
    piVar1 = &(this->Rows).ArrayNum;
    *piVar1 = *piVar1 - uVar10;
  }
  this->bIsUnique = true;
  return;
joined_r0x000142cb081a:
  for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
    if (*(longlong *)pFVar9 != *(longlong *)pFVar7) {
      pFVar9 = pFVar9 + 8;
      *(longlong *)pFVar9 = *(longlong *)pFVar7;
    }
  }
  pFVar12 = pFVar9 + 8;
  goto LAB_142cb0771;
}

// Num @ 142cb2020

int __thiscall UE::Editor::DataStorage::FRowHandleArray::Num(FRowHandleArray *this)

{
  return (this->Rows).ArrayNum;
}

// ReduceToDuplicates @ 142cb40b0

void __thiscall UE::Editor::DataStorage::FRowHandleArray::ReduceToDuplicates(FRowHandleArray *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  TRadixSortKeyCastUint64<unsigned___int64> local_res8 [8];
  ForAnyElementType local_28;
  int local_20 [2];
  
  if ((this->bIsUnique == false) && (iVar6 = (this->Rows).ArrayNum, 1 < iVar6)) {
    if (this->bIsSorted == false) {
      pFVar7 = (this->Rows).AllocatorInstance.Data;
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20[0] = 0;
      local_20[1] = 0;
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar6,&local_28,local_20,local_20 + 1);
      RadixSort64<1,unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_>
                ((ulong64 *)pFVar7,(ulong64 *)local_28.Data,iVar6,local_res8);
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
      this->bIsSorted = true;
    }
    pFVar8 = (this->Rows).AllocatorInstance.Data;
    lVar13 = -1;
    pFVar7 = pFVar8 + 8;
    pFVar2 = pFVar8 + (longlong)(this->Rows).ArrayNum * 8;
    pFVar10 = pFVar8;
    if (pFVar7 != pFVar2) {
      do {
        lVar3 = *(longlong *)pFVar7;
        if ((*(longlong *)pFVar8 == lVar3) && (lVar13 != lVar3)) {
          *(longlong *)pFVar10 = lVar3;
          pFVar10 = pFVar10 + 8;
          lVar13 = lVar3;
        }
        pFVar8 = pFVar8 + 8;
        pFVar7 = pFVar7 + 8;
      } while (pFVar7 != pFVar2);
      if (pFVar8 != pFVar10) {
        uVar9 = (uint)((longlong)pFVar10 - (longlong)(this->Rows).AllocatorInstance.Data >> 3);
        uVar12 = (uint)((longlong)pFVar2 - (longlong)pFVar10 >> 3);
        uVar11 = 0;
        if ((int)(uVar9 + uVar12) <= (this->Rows).ArrayNum) {
          uVar11 = ~(uVar9 | uVar12) >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar12 != 0) {
          pFVar7 = (this->Rows).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
          iVar6 = ((this->Rows).ArrayNum - uVar9) - uVar12;
          if (iVar6 != 0) {
            memmove(pFVar7,pFVar7 + (longlong)(int)uVar12 * 8,(longlong)iVar6 << 3);
          }
          piVar1 = &(this->Rows).ArrayNum;
          *piVar1 = *piVar1 - uVar12;
        }
      }
    }
    this->bIsUnique = true;
    return;
  }
  (this->Rows).ArrayNum = 0;
  if ((this->Rows).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->Rows).ArrayMax);
  }
  this->bIsSorted = true;
  this->bIsUnique = true;
  return;
}

// Remove @ 142cb6710

void __thiscall
UE::Editor::DataStorage::FRowHandleArray::Remove
          (FRowHandleArray *this,TArrayView<unsigned___int64_const_,int> *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong *puVar13;
  uint uVar14;
  
  puVar13 = param_1->DataPtr;
  puVar2 = puVar13 + param_1->ArrayNum;
  if (this->bIsSorted == false) {
    for (; puVar13 != puVar2; puVar13 = puVar13 + 1) {
      pFVar4 = (this->Rows).AllocatorInstance.Data;
      for (pFVar12 = pFVar4; pFVar12 != pFVar4 + (longlong)(this->Rows).ArrayNum * 8;
          pFVar12 = pFVar12 + 8) {
        if (*(ulonglong *)pFVar12 == *puVar13) {
          uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar4 >> 3);
          if (uVar11 != 0xffffffff) {
            uVar7 = 0;
            if ((int)(uVar11 + 1) <= (this->Rows).ArrayNum) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar3 = (this->Rows).ArrayNum;
            pFVar4 = (this->Rows).AllocatorInstance.Data;
            iVar8 = iVar3 + ~uVar11;
            if (1 < iVar8) {
              iVar8 = 1;
            }
            if (iVar8 != 0) {
              memmove(pFVar4 + (longlong)(int)uVar11 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,
                      (longlong)iVar8 << 3);
            }
            piVar1 = &(this->Rows).ArrayNum;
            *piVar1 = *piVar1 + -1;
          }
          break;
        }
      }
    }
  }
  else {
    for (; puVar13 != puVar2; puVar13 = puVar13 + 1) {
      uVar11 = (this->Rows).ArrayNum;
      uVar10 = 0;
      uVar9 = 0;
      pFVar4 = (this->Rows).AllocatorInstance.Data;
      uVar7 = uVar11;
      if (0 < (int)uVar11) {
        do {
          uVar14 = uVar7 >> 1;
          uVar9 = uVar10;
          if (*(ulonglong *)(pFVar4 + (longlong)(int)(uVar14 + uVar10) * 8) < *puVar13) {
            uVar9 = uVar14 + uVar10 + (uVar7 & 1);
          }
          uVar7 = uVar14;
          uVar10 = uVar9;
        } while (uVar14 != 0);
      }
      if ((((int)uVar9 < (int)uVar11) &&
          (*(ulonglong *)(pFVar4 + (longlong)(int)uVar9 * 8) <= *puVar13)) && (-1 < (int)uVar9)) {
        if (((int)uVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->Rows).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
        iVar8 = (this->Rows).ArrayNum + ~uVar9;
        if (iVar8 != 0) {
          memmove(pFVar4,pFVar4 + 8,(longlong)iVar8 << 3);
        }
        piVar1 = &(this->Rows).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
    }
  }
  return;
}

// Remove @ 142cb6920

void __thiscall
UE::Editor::DataStorage::FRowHandleArray::Remove(FRowHandleArray *this,FRowHandleArrayView *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ulong64 *puVar14;
  TLess<void> local_res8;
  undefined4 uStack_2c;
  TArrayView<unsigned___int64_const_,int> local_28;
  
  if ((((this->bIsSorted == false) || (param_1->bIsSorted == false)) ||
      (puVar14 = param_1->Rows, puVar14 == (ulong64 *)0x0)) || (param_1->RowCount < 1)) {
    puVar14 = param_1->Rows;
    iVar8 = param_1->RowCount;
    if ((iVar8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar8;
    local_28.DataPtr = puVar14;
    Remove(this,&local_28);
    return;
  }
  puVar2 = puVar14 + param_1->RowCount;
  while( true ) {
    iVar8 = Algo::
            BinarySearch<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,unsigned___int64,TLess<void>_>
                      (&this->Rows,puVar14,local_res8);
    puVar14 = puVar14 + 1;
    if (-1 < iVar8) break;
    if (puVar2 <= puVar14) {
      return;
    }
  }
  pFVar3 = (this->Rows).AllocatorInstance.Data;
  uVar13 = 1;
  pFVar12 = pFVar3 + (longlong)iVar8 * 8;
  pFVar10 = pFVar12 + 8;
  pFVar3 = pFVar3 + (longlong)(this->Rows).ArrayNum * 8;
  if (pFVar10 < pFVar3) {
    do {
      uVar4 = *puVar14;
      uVar5 = *(ulonglong *)pFVar10;
      if (uVar4 < uVar5) {
        do {
          uVar4 = puVar14[1];
          puVar14 = puVar14 + 1;
        } while (uVar4 < uVar5);
        if (puVar14 == puVar2) break;
      }
      if (uVar4 == uVar5) {
        puVar14 = puVar14 + 1;
        uVar13 = uVar13 + 1;
        if (puVar14 == puVar2) {
          pFVar10 = pFVar10 + 8;
          break;
        }
      }
      else {
        *(ulonglong *)pFVar12 = uVar5;
        pFVar12 = pFVar12 + 8;
      }
      pFVar10 = pFVar10 + 8;
    } while (pFVar10 < pFVar3);
    for (; pFVar10 < pFVar3; pFVar10 = pFVar10 + 8) {
      *(ulonglong *)pFVar12 = *(ulonglong *)pFVar10;
      pFVar12 = pFVar12 + 8;
    }
  }
  uVar11 = (uint)((longlong)pFVar12 - (longlong)(this->Rows).AllocatorInstance.Data >> 3);
  uVar9 = 0;
  if ((int)(uVar11 + uVar13) <= (this->Rows).ArrayNum) {
    uVar9 = ~(uVar11 | uVar13) >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar13 != 0) {
    pFVar10 = (this->Rows).AllocatorInstance.Data + (longlong)(int)uVar11 * 8;
    iVar8 = ((this->Rows).ArrayNum - uVar11) - uVar13;
    if (iVar8 != 0) {
      memmove(pFVar10,pFVar10 + (longlong)(int)uVar13 * 8,(longlong)iVar8 << 3);
    }
    piVar1 = &(this->Rows).ArrayNum;
    *piVar1 = *piVar1 - uVar13;
  }
  return;
}

// Remove @ 142cb6b50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Editor::DataStorage::FRowHandleArray::Remove(FRowHandleArray *this,ulong64 param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong64 local_res10 [3];
  
  local_res10[0] = param_1;
  if (this->bIsSorted != false) {
    uVar5 = (this->Rows).ArrayNum;
    iVar4 = 0;
    pFVar2 = (this->Rows).AllocatorInstance.Data;
    if (0 < (int)uVar5) {
      do {
        iVar1 = (uVar5 >> 1) + iVar4;
        if (*(ulonglong *)(pFVar2 + (longlong)iVar1 * 8) < param_1) {
          iVar4 = iVar1 + (uVar5 & 1);
        }
        uVar3 = uVar5 >> 1;
        uVar5 = uVar5 >> 1;
      } while (uVar3 != 0);
    }
    if (((iVar4 < (this->Rows).ArrayNum) &&
        (*(ulonglong *)(pFVar2 + (longlong)iVar4 * 8) <= param_1)) && (-1 < iVar4)) {
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::RemoveAt(&this->Rows,iVar4,No);
    }
    return;
  }
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::RemoveSingleSwap(&this->Rows,local_res10,No)
  ;
  return;
}

// Reserve @ 142cb8f90

void __thiscall UE::Editor::DataStorage::FRowHandleArray::Reserve(FRowHandleArray *this,int param_1)

{
  if (-1 < param_1) {
    if ((this->Rows).ArrayMax < param_1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,(this->Rows).ArrayNum,&(this->Rows).ArrayMax)
      ;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 142cb94e0

void __thiscall UE::Editor::DataStorage::FRowHandleArray::Reset(FRowHandleArray *this,int param_1)

{
  if (-1 < param_1) {
    (this->Rows).ArrayNum = 0;
    if ((this->Rows).ArrayMax < param_1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,&(this->Rows).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Shrink @ 142cbb4e0

void __thiscall UE::Editor::DataStorage::FRowHandleArray::Shrink(FRowHandleArray *this)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->Rows).ArrayNum;
  piVar1 = &(this->Rows).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,(ForAnyElementType *)this,iVar2,piVar1);
  }
  return;
}

// Sort @ 142cbb520

void __thiscall
UE::Editor::DataStorage::FRowHandleArray::Sort
          (FRowHandleArray *this,TArrayView<unsigned___int64,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRadixSortKeyCastUint64<unsigned___int64> local_res8 [8];
  
  if (this->bIsSorted == false) {
    if (param_1->ArrayNum < (this->Rows).ArrayNum) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Rows.Num() <= ScratchBuffer.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRowHandleArray.cpp"
                         ,0xe7,
                         L"The scratch buffer used for sorting a row handle array needs to contain at least %i entries."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    RadixSort64<0,unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_>
              ((ulong64 *)(this->Rows).AllocatorInstance.Data,param_1->DataPtr,(this->Rows).ArrayNum
               ,local_res8);
    this->bIsSorted = true;
  }
  return;
}

// Sort @ 142cbb5a0

void __thiscall UE::Editor::DataStorage::FRowHandleArray::Sort(FRowHandleArray *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TRadixSortKeyCastUint64<unsigned___int64> local_res8 [8];
  ForAnyElementType local_18;
  int local_10 [2];
  
  if (this->bIsSorted == false) {
    iVar1 = (this->Rows).ArrayNum;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10[0] = 0;
    local_10[1] = 0;
    pFVar2 = (this->Rows).AllocatorInstance.Data;
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,&local_18,local_10,local_10 + 1);
    RadixSort64<1,unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_>
              ((ulong64 *)pFVar2,(ulong64 *)local_18.Data,iVar1,local_res8);
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
    this->bIsSorted = true;
  }
  return;
}

// SortedMerge @ 142cbb630

void __thiscall
UE::Editor::DataStorage::FRowHandleArray::SortedMerge
          (FRowHandleArray *this,FRowHandleArray *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FRowHandleArrayView *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FRowHandleArrayView local_58;
  FRowHandleArrayView local_48;
  FRowHandleArrayView local_38;
  
  piVar1 = &(this->Rows).ArrayNum;
  if ((this->Rows).ArrayNum == 0) {
    if (this != param_1) {
      pFVar4 = (this->Rows).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (this->Rows).AllocatorInstance.Data = (param_1->Rows).AllocatorInstance.Data;
      (param_1->Rows).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *piVar1 = (param_1->Rows).ArrayNum;
      (this->Rows).ArrayMax = (param_1->Rows).ArrayMax;
      (param_1->Rows).ArrayNum = 0;
      (param_1->Rows).ArrayMax = 0;
    }
    this->bIsSorted = param_1->bIsSorted;
    this->bIsUnique = param_1->bIsUnique;
    return;
  }
  Sort(this);
  piVar2 = &(param_1->Rows).ArrayNum;
  if ((param_1->Rows).ArrayNum == 0) {
    return;
  }
  Sort(param_1);
  pFVar4 = (param_1->Rows).AllocatorInstance.Data;
  uVar13 = 0;
  uVar12 = *piVar1 - 1;
  uVar11 = uVar13;
  if ((int)uVar12 < *piVar1) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = *piVar1;
  pFVar5 = (this->Rows).AllocatorInstance.Data;
  if (*(ulonglong *)(pFVar5 + ((longlong)iVar9 + -1) * 8) <= *(ulonglong *)pFVar4) {
    if ((this->bIsUnique != false) && (param_1->bIsUnique != false)) {
      pFVar4 = (param_1->Rows).AllocatorInstance.Data;
      if ((int)(iVar9 - 1U) < iVar9) {
        uVar13 = ~(iVar9 - 1U) >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(ulonglong *)((this->Rows).AllocatorInstance.Data + (longlong)*piVar1 * 8 + -8) <
          *(ulonglong *)pFVar4) {
        bVar7 = true;
        goto LAB_142cbb799;
      }
    }
    bVar7 = false;
LAB_142cbb799:
    this->bIsUnique = bVar7;
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,*piVar2,(ForAnyElementType *)this,piVar1,&(this->Rows).ArrayMax);
    memcpy((this->Rows).AllocatorInstance.Data + (longlong)iVar9 * 8,
           (param_1->Rows).AllocatorInstance.Data,(longlong)*piVar2 << 3);
    return;
  }
  uVar12 = *piVar2 - 1;
  uVar11 = uVar13;
  if ((int)uVar12 < *piVar2) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = *piVar2;
  pFVar4 = (param_1->Rows).AllocatorInstance.Data;
  if (*(ulonglong *)pFVar5 < *(ulonglong *)(pFVar4 + ((longlong)iVar9 + -1) * 8)) {
    if (iVar9 < *piVar1) {
      bVar7 = param_1->bIsUnique;
      bVar3 = param_1->bIsSorted;
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_58.bIsSorted = bVar3 != false;
      local_58.RowCount = iVar9;
      local_58.bIsUnique = SUB41((-(uint)(bVar7 != false) & 2) >> 1,0);
      local_58.Rows = (ulong64 *)pFVar4;
      SortedMergeInternal(this,&local_58);
      return;
    }
    pFVar10 = GetRows(this,&local_38);
    local_48.Rows = pFVar10->Rows;
    local_48.RowCount = pFVar10->RowCount;
    local_48.bIsSorted = pFVar10->bIsSorted;
    local_48.bIsUnique = pFVar10->bIsUnique;
    local_48._14_2_ = *(undefined2 *)&pFVar10->field_0xe;
    SortedMergeInternal(param_1,&local_48);
    goto LAB_142cbb987;
  }
  if ((this->bIsUnique == false) || (param_1->bIsUnique == false)) {
LAB_142cbb8a8:
    bVar7 = false;
  }
  else {
    pFVar4 = (this->Rows).AllocatorInstance.Data;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar13 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(ulonglong *)pFVar4 <=
        *(ulonglong *)((param_1->Rows).AllocatorInstance.Data + (longlong)*piVar2 * 8 + -8))
    goto LAB_142cbb8a8;
    bVar7 = true;
  }
  param_1->bIsUnique = bVar7;
  iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,*piVar1,(ForAnyElementType *)param_1,piVar2,&(param_1->Rows).ArrayMax);
  memcpy((param_1->Rows).AllocatorInstance.Data + (longlong)iVar9 * 8,
         (this->Rows).AllocatorInstance.Data,(longlong)*piVar1 << 3);
LAB_142cbb987:
  operator=(this,param_1);
  return;
}

// SortedMerge @ 142cbb9c0

void __thiscall
UE::Editor::DataStorage::FRowHandleArray::SortedMerge
          (FRowHandleArray *this,FRowHandleArray *param_1)

{
  bool bVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FRowHandleArrayView local_18;
  
  if (param_1->bIsSorted == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AddedRows.IsSorted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRowHandleArray.cpp"
                       ,0x14d,L"Row handle array provided for sorted merge was not sorted.");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = param_1->bIsUnique;
  pFVar3 = (param_1->Rows).AllocatorInstance.Data;
  bVar1 = param_1->bIsSorted;
  iVar2 = (param_1->Rows).ArrayNum;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18.bIsSorted = bVar1 != false;
  local_18.RowCount = iVar2;
  local_18.bIsUnique = SUB41((-(uint)(bVar5 != false) & 2) >> 1,0);
  local_18.Rows = (ulong64 *)pFVar3;
  SortedMerge(this,&local_18);
  return;
}

// SortedMerge @ 142cbbaa0

void __thiscall
UE::Editor::DataStorage::FRowHandleArray::SortedMerge
          (FRowHandleArray *this,FRowHandleArrayView *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulong64 *puVar7;
  uint uVar8;
  uint uVar9;
  ulong64 *_Src;
  FRowHandleArrayView local_28;
  
  piVar1 = &(this->Rows).ArrayNum;
  if ((this->Rows).ArrayNum == 0) {
    iVar2 = param_1->RowCount;
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,(ForAnyElementType *)this,piVar1,&(this->Rows).ArrayMax);
    memcpy((this->Rows).AllocatorInstance.Data,param_1->Rows,(longlong)(iVar2 * 8));
    return;
  }
  Sort(this);
  if (param_1->Rows == (ulong64 *)0x0) {
    return;
  }
  if (param_1->RowCount < 1) {
    return;
  }
  if ((this->bIsSorted == false) || (param_1->bIsSorted == false)) {
LAB_142cbbca2:
    local_28.Rows = param_1->Rows;
    local_28.RowCount = param_1->RowCount;
    local_28.bIsSorted = param_1->bIsSorted;
    local_28.bIsUnique = param_1->bIsUnique;
    local_28._14_2_ = *(undefined2 *)&param_1->field_0xe;
    SortedMergeInternal(this,&local_28);
    return;
  }
  uVar9 = *piVar1 - 1;
  uVar8 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = *piVar1;
  _Src = param_1->Rows;
  pFVar3 = (this->Rows).AllocatorInstance.Data;
  if (*_Src < *(ulonglong *)(pFVar3 + ((longlong)iVar2 + -1) * 8)) {
    puVar7 = FRowHandleArrayView::Last(param_1);
    if (*puVar7 <= *(ulonglong *)pFVar3) {
      if (((this->bIsUnique == false) || (param_1->bIsUnique == false)) ||
         (pFVar3 = (this->Rows).AllocatorInstance.Data, puVar7 = FRowHandleArrayView::Last(param_1),
         *(ulonglong *)pFVar3 <= *puVar7)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      iVar2 = param_1->RowCount;
      this->bIsUnique = bVar5;
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::Insert(&this->Rows,_Src,iVar2,0);
      return;
    }
    goto LAB_142cbbca2;
  }
  if ((this->bIsUnique != false) && (param_1->bIsUnique != false)) {
    uVar8 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar8 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    _Src = param_1->Rows;
    if (*(ulonglong *)((this->Rows).AllocatorInstance.Data + (longlong)*piVar1 * 8 + -8) < *_Src) {
      bVar5 = true;
      goto LAB_142cbbc12;
    }
  }
  bVar5 = false;
LAB_142cbbc12:
  iVar2 = param_1->RowCount;
  this->bIsUnique = bVar5;
  iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar2,(ForAnyElementType *)this,piVar1,&(this->Rows).ArrayMax);
  memcpy((this->Rows).AllocatorInstance.Data + (longlong)iVar6 * 8,_Src,(longlong)(iVar2 * 8));
  return;
}

// SortedMergeInternal @ 142cbbce0

void __thiscall
UE::Editor::DataStorage::FRowHandleArray::SortedMergeInternal
          (FRowHandleArray *this,FRowHandleArrayView *param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ForAnyElementType _Dst;
  ulonglong uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *_Src;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  ForAnyElementType local_38;
  int local_30 [2];
  
  iVar4 = param_1->RowCount;
  piVar1 = &(this->Rows).ArrayNum;
  _Src = (FScriptContainerElement *)param_1->Rows;
  piVar2 = &(this->Rows).ArrayMax;
  lVar12 = (longlong)iVar4 * 8;
  pFVar13 = _Src + (longlong)iVar4 * 8;
  iVar18 = *piVar1 + iVar4;
  if (iVar18 <= *piVar2) {
    pFVar10 = (this->Rows).AllocatorInstance.Data;
    pFVar13 = pFVar13 + -8;
    pFVar3 = _Src + -8;
    pFVar15 = pFVar10 + ((longlong)*piVar1 + -1) * 8;
    pFVar10 = pFVar10 + -8;
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,(ForAnyElementType *)this,piVar1,piVar2);
    uVar14 = (longlong)pFVar15 - (longlong)pFVar10;
    pFVar11 = (this->Rows).AllocatorInstance.Data + (longlong)*piVar1 * 8 + -8;
    if (0x3f < (longlong)(uVar14 & 0xfffffffffffffff8)) {
      uVar8 = (longlong)pFVar13 - (longlong)pFVar3;
      do {
        if ((longlong)(uVar8 & 0xfffffffffffffff8) < 0x40) break;
        uVar9 = *(ulonglong *)pFVar13;
        uVar5 = *(ulonglong *)pFVar15;
        if (uVar9 < uVar5) {
          pFVar15 = pFVar15 + -8;
          uVar14 = uVar14 - 8;
          uVar6 = uVar5;
        }
        else {
          pFVar13 = pFVar13 + -8;
          uVar6 = uVar9;
        }
        *(ulonglong *)pFVar11 = uVar6;
        if (uVar5 <= uVar9) {
          uVar8 = uVar8 - 8;
        }
        uVar9 = *(ulonglong *)pFVar13;
        uVar5 = *(ulonglong *)pFVar15;
        if (uVar9 < uVar5) {
          pFVar15 = pFVar15 + -8;
          uVar14 = uVar14 - 8;
          uVar9 = uVar5;
        }
        else {
          pFVar13 = pFVar13 + -8;
          uVar8 = uVar8 - 8;
        }
        *(ulonglong *)(pFVar11 + -8) = uVar9;
        uVar5 = *(ulonglong *)pFVar13;
        uVar6 = *(ulonglong *)pFVar15;
        uVar9 = uVar8 - 8;
        if (uVar5 < uVar6) {
          pFVar15 = pFVar15 + -8;
          uVar9 = uVar8;
          uVar8 = uVar6;
        }
        else {
          pFVar13 = pFVar13 + -8;
          uVar8 = uVar5;
        }
        *(ulonglong *)(pFVar11 + -0x10) = uVar8;
        uVar17 = uVar14 - 8;
        if (uVar6 <= uVar5) {
          uVar17 = uVar14;
        }
        uVar14 = *(ulonglong *)pFVar13;
        uVar8 = *(ulonglong *)pFVar15;
        if (uVar14 < uVar8) {
          pFVar15 = pFVar15 + -8;
          uVar17 = uVar17 - 8;
          uVar14 = uVar8;
        }
        else {
          pFVar13 = pFVar13 + -8;
          uVar9 = uVar9 - 8;
        }
        *(ulonglong *)(pFVar11 + -0x18) = uVar14;
        uVar14 = *(ulonglong *)pFVar13;
        uVar8 = *(ulonglong *)pFVar15;
        if (uVar14 < uVar8) {
          pFVar15 = pFVar15 + -8;
          uVar17 = uVar17 - 8;
          uVar5 = uVar8;
        }
        else {
          pFVar13 = pFVar13 + -8;
          uVar5 = uVar14;
        }
        *(ulonglong *)(pFVar11 + -0x20) = uVar5;
        if (uVar8 <= uVar14) {
          uVar9 = uVar9 - 8;
        }
        uVar14 = *(ulonglong *)pFVar13;
        uVar8 = *(ulonglong *)pFVar15;
        if (uVar14 < uVar8) {
          pFVar15 = pFVar15 + -8;
          uVar17 = uVar17 - 8;
          uVar14 = uVar8;
        }
        else {
          pFVar13 = pFVar13 + -8;
          uVar9 = uVar9 - 8;
        }
        *(ulonglong *)(pFVar11 + -0x28) = uVar14;
        uVar14 = *(ulonglong *)pFVar13;
        uVar5 = *(ulonglong *)pFVar15;
        if (uVar14 < uVar5) {
          pFVar15 = pFVar15 + -8;
          uVar17 = uVar17 - 8;
          uVar8 = uVar5;
        }
        else {
          pFVar13 = pFVar13 + -8;
          uVar8 = uVar14;
        }
        *(ulonglong *)(pFVar11 + -0x30) = uVar8;
        uVar8 = uVar9;
        if (uVar5 <= uVar14) {
          uVar8 = uVar9 - 8;
        }
        uVar9 = *(ulonglong *)pFVar13;
        uVar14 = *(ulonglong *)pFVar15;
        if (uVar9 < uVar14) {
          pFVar15 = pFVar15 + -8;
          uVar9 = uVar14;
          uVar14 = uVar17 - 8;
        }
        else {
          pFVar13 = pFVar13 + -8;
          uVar8 = uVar8 - 8;
          uVar14 = uVar17;
        }
        *(ulonglong *)(pFVar11 + -0x38) = uVar9;
        pFVar11 = pFVar11 + -0x40;
      } while (0x3f < (longlong)(uVar14 & 0xfffffffffffffff8));
    }
    do {
      if (pFVar15 == pFVar10) {
        if (pFVar13 != pFVar3) {
          memcpy((this->Rows).AllocatorInstance.Data,_Src,
                 (longlong)pFVar13 - (longlong)pFVar3 & 0xfffffffffffffff8);
        }
LAB_142cbc1e7:
        this->bIsUnique = false;
        return;
      }
      if (pFVar13 == pFVar3) goto LAB_142cbc1e7;
      uVar14 = *(ulonglong *)pFVar13;
      uVar8 = *(ulonglong *)pFVar15;
      if (uVar14 < uVar8) {
        pFVar15 = pFVar15 + -8;
        uVar14 = uVar8;
      }
      else {
        pFVar13 = pFVar13 + -8;
      }
      *(ulonglong *)pFVar11 = uVar14;
      pFVar11 = pFVar11 + -8;
    } while( true );
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar18,&local_38,local_30,local_30 + 1);
  lVar7 = (longlong)*piVar1;
  pFVar10 = (this->Rows).AllocatorInstance.Data;
  lVar16 = lVar7 * 8;
  pFVar3 = pFVar10 + lVar7 * 8;
  _Dst.Data = local_38.Data;
  if (7 < lVar7) {
    do {
      if (lVar12 < 0x40) break;
      uVar14 = *(ulonglong *)_Src;
      uVar8 = *(ulonglong *)pFVar10;
      if (uVar8 < uVar14) {
        pFVar10 = pFVar10 + 8;
      }
      else {
        _Src = _Src + 8;
      }
      lVar7 = lVar16 + -8;
      uVar9 = uVar8;
      if (uVar14 <= uVar8) {
        lVar7 = lVar16;
        uVar9 = uVar14;
      }
      *(ulonglong *)_Dst.Data = uVar9;
      if (uVar14 <= uVar8) {
        lVar12 = lVar12 + -8;
      }
      uVar14 = *(ulonglong *)_Src;
      uVar8 = *(ulonglong *)pFVar10;
      if (uVar8 < uVar14) {
        pFVar10 = pFVar10 + 8;
        lVar7 = lVar7 + -8;
        uVar14 = uVar8;
      }
      else {
        _Src = _Src + 8;
        lVar12 = lVar12 + -8;
      }
      *(ulonglong *)(_Dst.Data + 8) = uVar14;
      uVar14 = *(ulonglong *)_Src;
      uVar8 = *(ulonglong *)pFVar10;
      if (uVar8 < uVar14) {
        pFVar10 = pFVar10 + 8;
      }
      else {
        _Src = _Src + 8;
      }
      uVar9 = uVar8;
      if (uVar14 <= uVar8) {
        lVar12 = lVar12 + -8;
        uVar9 = uVar14;
      }
      *(ulonglong *)(_Dst.Data + 0x10) = uVar9;
      lVar16 = lVar7 + -8;
      if (uVar14 <= uVar8) {
        lVar16 = lVar7;
      }
      uVar14 = *(ulonglong *)_Src;
      uVar8 = *(ulonglong *)pFVar10;
      if (uVar8 < uVar14) {
        pFVar10 = pFVar10 + 8;
        lVar16 = lVar16 + -8;
        uVar14 = uVar8;
      }
      else {
        _Src = _Src + 8;
        lVar12 = lVar12 + -8;
      }
      *(ulonglong *)(_Dst.Data + 0x18) = uVar14;
      uVar14 = *(ulonglong *)_Src;
      uVar8 = *(ulonglong *)pFVar10;
      if (uVar8 < uVar14) {
        pFVar10 = pFVar10 + 8;
      }
      else {
        _Src = _Src + 8;
      }
      lVar7 = lVar16 + -8;
      uVar9 = uVar8;
      if (uVar14 <= uVar8) {
        lVar7 = lVar16;
        uVar9 = uVar14;
      }
      *(ulonglong *)(_Dst.Data + 0x20) = uVar9;
      if (uVar14 <= uVar8) {
        lVar12 = lVar12 + -8;
      }
      uVar14 = *(ulonglong *)_Src;
      uVar8 = *(ulonglong *)pFVar10;
      if (uVar8 < uVar14) {
        pFVar10 = pFVar10 + 8;
        lVar7 = lVar7 + -8;
        uVar14 = uVar8;
      }
      else {
        _Src = _Src + 8;
        lVar12 = lVar12 + -8;
      }
      *(ulonglong *)(_Dst.Data + 0x28) = uVar14;
      uVar14 = *(ulonglong *)_Src;
      uVar8 = *(ulonglong *)pFVar10;
      if (uVar8 < uVar14) {
        pFVar10 = pFVar10 + 8;
      }
      else {
        _Src = _Src + 8;
      }
      lVar16 = lVar7 + -8;
      uVar9 = uVar8;
      if (uVar14 <= uVar8) {
        lVar16 = lVar7;
        uVar9 = uVar14;
      }
      *(ulonglong *)(_Dst.Data + 0x30) = uVar9;
      if (uVar14 <= uVar8) {
        lVar12 = lVar12 + -8;
      }
      uVar14 = *(ulonglong *)_Src;
      uVar8 = *(ulonglong *)pFVar10;
      if (uVar8 < uVar14) {
        pFVar10 = pFVar10 + 8;
        lVar16 = lVar16 + -8;
        uVar14 = uVar8;
      }
      else {
        _Src = _Src + 8;
        lVar12 = lVar12 + -8;
      }
      *(ulonglong *)(_Dst.Data + 0x38) = uVar14;
      _Dst.Data = _Dst.Data + 0x40;
    } while (0x3f < lVar16);
  }
  do {
    if (pFVar10 == pFVar3) {
      if (_Src != pFVar13) {
        uVar14 = (longlong)pFVar13 - (longlong)_Src;
        pFVar10 = _Src;
LAB_142cbbf53:
        memcpy(_Dst.Data,pFVar10,uVar14 & 0xfffffffffffffff8);
      }
      if (this != (FRowHandleArray *)&local_38) {
        pFVar13 = (this->Rows).AllocatorInstance.Data;
        if (pFVar13 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar13);
        }
        (this->Rows).AllocatorInstance.Data = local_38.Data;
        *piVar1 = local_30[0];
        *piVar2 = local_30[1];
        local_30[0] = 0;
        local_30[1] = 0;
        local_38.Data = (FScriptContainerElement *)0x0;
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      this->bIsUnique = false;
      return;
    }
    if (_Src == pFVar13) {
      uVar14 = (longlong)pFVar3 - (longlong)pFVar10;
      goto LAB_142cbbf53;
    }
    uVar14 = *(ulonglong *)_Src;
    uVar8 = *(ulonglong *)pFVar10;
    if (uVar8 < uVar14) {
      pFVar10 = pFVar10 + 8;
      uVar14 = uVar8;
    }
    else {
      _Src = _Src + 8;
    }
    *(ulonglong *)_Dst.Data = uVar14;
    _Dst.Data = _Dst.Data + 8;
  } while( true );
}

