// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 16

// FRowHandleArrayView @ 142c98440

FRowHandleArrayView * __thiscall
UE::Editor::DataStorage::FRowHandleArrayView::FRowHandleArrayView
          (FRowHandleArrayView *this,ulong64 *param_1,int param_2,EFlags param_3)

{
  this->Rows = param_1;
  this->bIsSorted = (bool)((byte)param_3 & 1);
  this->bIsUnique = (bool)((byte)(param_3 >> 1) & 1);
  this->RowCount = param_2;
  return this;
}

// FRowHandleArrayView @ 142c98470

FRowHandleArrayView * __thiscall
UE::Editor::DataStorage::FRowHandleArrayView::FRowHandleArrayView
          (FRowHandleArrayView *this,TArrayView<unsigned___int64_const_,int> *param_1,EFlags param_2
          )

{
  this->Rows = param_1->DataPtr;
  this->RowCount = param_1->ArrayNum;
  this->bIsSorted = (bool)((byte)param_2 & 1);
  this->bIsUnique = (bool)((byte)(param_2 >> 1) & 1);
  return this;
}

// FRowHandleArrayView @ 142c984a0

FRowHandleArrayView * __thiscall
UE::Editor::DataStorage::FRowHandleArrayView::FRowHandleArrayView
          (FRowHandleArrayView *this,initializer_list<unsigned___int64> *param_1,EFlags param_2)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  
  puVar1 = param_1->_First;
  puVar2 = param_1->_Last;
  this->Rows = puVar1;
  this->bIsSorted = (bool)((byte)param_2 & 1);
  this->bIsUnique = (bool)((byte)(param_2 >> 1) & 1);
  this->RowCount = (int)((longlong)puVar2 - (longlong)puVar1 >> 3);
  return this;
}

// operator[] @ 142c9c710

ulong64 __thiscall
UE::Editor::DataStorage::FRowHandleArrayView::operator[](FRowHandleArrayView *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if ((this->RowCount <= (int)param_1) || (this->RowCount < 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<int32>(Index) < RowCount && RowCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRowHandleArrayView.cpp"
                       ,0x2a,L"Index (%u) out of bounds (%i).");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return this->Rows[param_1];
}

// operator_TArrayView<unsigned___int64_const_,int> @ 142c9c770

TArrayView<unsigned___int64_const_,int> * __thiscall
UE::Editor::DataStorage::FRowHandleArrayView::operator_TArrayView<unsigned___int64_const_,int>
          (FRowHandleArrayView *this,TArrayView<unsigned___int64_const_,int> *__return_storage_ptr__
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned___int64_const_,int> *pTVar4;
  
  __return_storage_ptr__->DataPtr = this->Rows;
  iVar1 = this->RowCount;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned___int64_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// Contains @ 142ca86f0

bool __thiscall
UE::Editor::DataStorage::FRowHandleArrayView::Contains(FRowHandleArrayView *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  ulong64 *puVar8;
  int iVar9;
  uint uVar10;
  
  puVar8 = this->Rows;
  uVar3 = this->RowCount;
  if (this->bIsSorted == false) {
    puVar2 = puVar8 + (int)uVar3;
    while( true ) {
      if (puVar8 == puVar2) {
        return false;
      }
      if (*puVar8 == param_1) break;
      puVar8 = puVar8 + 1;
    }
    return true;
  }
  if (((int)uVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  iVar9 = 0;
  uVar10 = uVar3;
  if (0 < (int)uVar3) {
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (puVar8[iVar1] < param_1) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if (((int)uVar3 <= iVar9) || (param_1 < puVar8[iVar9])) {
    iVar9 = -1;
  }
  return iVar9 != -1;
}

// First @ 142cac420

ulong64 * __thiscall UE::Editor::DataStorage::FRowHandleArrayView::First(FRowHandleArrayView *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 *puVar3;
  
  if (0 < this->RowCount) {
    return this->Rows;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RowCount > 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRowHandleArrayView.cpp"
                     ,0x35,
                     L"Attempting to get the first element from an empty row handle array view.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    puVar3 = (ulong64 *)(*pcVar1)();
    return puVar3;
  }
  return this->Rows;
}

// GetData @ 142cacff0

ulong64 * __thiscall
UE::Editor::DataStorage::FRowHandleArrayView::GetData(FRowHandleArrayView *this)

{
  return this->Rows;
}

// IsEmpty @ 142cafae0

bool __thiscall UE::Editor::DataStorage::FRowHandleArrayView::IsEmpty(FRowHandleArrayView *this)

{
  if ((this->Rows != (ulong64 *)0x0) && (0 < this->RowCount)) {
    return false;
  }
  return true;
}

// IsSorted @ 142cafdf0

bool __thiscall UE::Editor::DataStorage::FRowHandleArrayView::IsSorted(FRowHandleArrayView *this)

{
  return this->bIsSorted;
}

// IsUnique @ 142cafe10

bool __thiscall UE::Editor::DataStorage::FRowHandleArrayView::IsUnique(FRowHandleArrayView *this)

{
  return this->bIsUnique;
}

// Last @ 142cafe60

ulong64 * __thiscall UE::Editor::DataStorage::FRowHandleArrayView::Last(FRowHandleArrayView *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 *puVar3;
  
  if (this->RowCount < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RowCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRowHandleArrayView.cpp"
                       ,0x3b,
                       L"Attempting to get the last element from an empty row handle array view.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (ulong64 *)(*pcVar1)();
      return puVar3;
    }
  }
  return this->Rows + (this->RowCount + -1);
}

// Num @ 142cb2030

int __thiscall UE::Editor::DataStorage::FRowHandleArrayView::Num(FRowHandleArrayView *this)

{
  return this->RowCount;
}

// NumBytes @ 142cb2040

int __thiscall UE::Editor::DataStorage::FRowHandleArrayView::NumBytes(FRowHandleArrayView *this)

{
  return this->RowCount << 3;
}

// begin @ 142cc4400

ulong64 * __thiscall UE::Editor::DataStorage::FRowHandleArrayView::begin(FRowHandleArrayView *this)

{
  return this->Rows;
}

// end @ 142cc4410

ulong64 * __thiscall UE::Editor::DataStorage::FRowHandleArrayView::end(FRowHandleArrayView *this)

{
  return this->Rows + this->RowCount;
}

