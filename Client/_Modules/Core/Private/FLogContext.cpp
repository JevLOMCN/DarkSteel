// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FLogContext @ 1417a30e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FLogContext * __thiscall
UE::Logging::Private::FLogContext::FLogContext(FLogContext *this,FLogField *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  FLogContext *pFVar6;
  FBufferOwner *_Str;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *pvVar12;
  ECbFieldError EVar13;
  undefined2 uVar14;
  FUniqueBuffer FVar15;
  FUniqueBuffer FVar16;
  int iVar17;
  FLogContext **ppFVar18;
  size_t sVar19;
  FCbFieldIterator *pFVar20;
  FBufferOwner *pFVar21;
  FCbFieldView *pFVar22;
  FSharedBuffer FVar23;
  FBufferOwner *pFVar24;
  FBufferOwner *pFVar25;
  uint uVar26;
  undefined1 auStack_1c8 [32];
  FUniqueBuffer local_1a8 [2];
  undefined1 local_198 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_188 [2];
  FCbWriter local_178 [7];
  ulonglong local_48;
  
  pvVar12 = ThreadLocalStoragePointer;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar24 = (FBufferOwner *)0x0;
  uVar26 = 0;
  *(undefined4 *)&(this->Field).field_0x4 = 0;
  *(undefined8 *)&(this->Field).field_0x8 = 0;
  *(undefined8 *)&(this->Field).field_0x10 = 0;
  *(undefined2 *)&this->Field = 0;
  this->Next = (FLogContext *)0x0;
  lVar5 = *(longlong *)((longlong)pvVar12 + (ulonglong)_tls_index * 8);
  pFVar6 = *(FLogContext **)(lVar5 + 0xa68);
  this->Prev = pFVar6;
  this->bDisabledByNewerContext = false;
  this->bDisabledOlderContext = false;
  if (pFVar6 == (FLogContext *)0x0) {
    ppFVar18 = (FLogContext **)(lVar5 + 0xa60);
  }
  else {
    ppFVar18 = &pFVar6->Next;
  }
  *ppFVar18 = this;
  *(FLogContext **)(lVar5 + 0xa68) = this;
  _Str = (FBufferOwner *)param_1->Name;
  local_198._0_8_ = _Str;
  if (_Str != (FBufferOwner *)0x0) {
    sVar19 = strlen((char *)_Str);
    uVar26 = (uint)sVar19;
  }
  local_198._8_4_ = uVar26;
  FCbWriter::FCbWriter(local_178,0x100);
  FCbWriter::SetName(local_178,(TStringView<char8_t> *)local_198);
  if (param_1->WriteValue == (_func___cdecl_void_FCbWriter_ptr_void_ptr *)0x0) {
    FCbWriter::AddNull(local_178);
  }
  else {
    (*param_1->WriteValue)(local_178,param_1->Value);
  }
  pFVar20 = FCbWriter::Save(local_178,(FCbFieldIterator *)local_198);
  uVar9 = *(undefined4 *)&pFVar20->field_0x4;
  uVar10 = *(undefined4 *)&pFVar20->field_0x8;
  uVar11 = *(undefined4 *)&pFVar20->field_0xc;
  *(undefined4 *)&this->Field = *(undefined4 *)pFVar20;
  *(undefined4 *)&(this->Field).field_0x4 = uVar9;
  *(undefined4 *)&(this->Field).field_0x8 = uVar10;
  *(undefined4 *)&(this->Field).field_0xc = uVar11;
  plVar7 = *(longlong **)&(this->Field).field_0x10;
  uVar8 = *(undefined8 *)&pFVar20->field_0x10;
  *(undefined8 *)&pFVar20->field_0x10 = 0;
  *(undefined8 *)&(this->Field).field_0x10 = uVar8;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 3;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar5 & 0x3fffffff) == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      plVar7[1] = 0;
      plVar7[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar7 + 3);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar3 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar7)(plVar7,1);
      }
    }
  }
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_188);
  lVar5 = *(longlong *)&(this->Field).field_0x10;
  if ((lVar5 == 0) || ((*(ulonglong *)(lVar5 + 0x18) >> 0x3c & 1) == 0)) {
    FCbFieldView::GetSize((FCbFieldView *)this);
    FUniqueBuffer::Alloc((ulong64)local_1a8);
    FVar15.Owner.Owner = local_1a8[0].Owner.Owner;
    pFVar21 = pFVar24;
    pFVar25 = pFVar24;
    if (local_1a8[0].Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_1a8[0].Owner.Owner + 0x18) >>
           0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_1a8[0].Owner.Owner + 8))(local_1a8[0].Owner.Owner);
      }
      FVar16.Owner.Owner = local_1a8[0].Owner.Owner;
      pFVar25 = *(FBufferOwner **)((longlong)FVar15.Owner.Owner + 0x10);
      if (local_1a8[0].Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_1a8[0].Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_1a8[0].Owner.Owner + 8))(local_1a8[0].Owner.Owner);
        }
        pFVar21 = *(void **)((longlong)FVar16.Owner.Owner + 8);
      }
    }
    local_198._0_8_ = pFVar21;
    local_198._8_8_ = pFVar25;
    FCbFieldView::CopyTo((FCbFieldView *)this,(TMemoryView<void> *)local_198);
    if (local_1a8[0].Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_1a8[0].Owner.Owner + 0x18) >>
           0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_1a8[0].Owner.Owner + 8))(local_1a8[0].Owner.Owner);
      }
      pFVar24 = *(void **)((longlong)local_1a8[0].Owner.Owner + 8);
    }
    pFVar22 = FCbFieldView::FCbFieldView((FCbFieldView *)local_198,pFVar24,HasFieldType);
    EVar13 = pFVar22->Error;
    uVar14 = *(undefined2 *)&pFVar22->field_0x2;
    uVar4 = pFVar22->NameLen;
    pvVar12 = pFVar22->Value;
    (this->Field).field_0x0 = pFVar22->TypeWithFlags;
    (this->Field).field_0x1 = EVar13;
    *(undefined2 *)&(this->Field).field_0x2 = uVar14;
    *(uint *)&(this->Field).field_0x4 = uVar4;
    *(void **)&(this->Field).field_0x8 = pvVar12;
    FVar23 = FUniqueBuffer::MoveToShared(local_1a8);
    plVar7 = *(longlong **)&(this->Field).field_0x10;
    uVar8 = *(undefined8 *)FVar23.Owner.Owner;
    *(undefined8 *)FVar23.Owner.Owner = 0;
    *(undefined8 *)&(this->Field).field_0x10 = uVar8;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 3;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar5 & 0x3fffffff) == 1) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        plVar7[1] = 0;
        plVar7[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar7 + 3);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if (((uint)(uVar3 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)*plVar7)(plVar7,1);
        }
      }
    }
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_198);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1a8[0].Owner);
  }
  for (pFVar6 = this->Prev; pFVar6 != (FLogContext *)0x0; pFVar6 = pFVar6->Prev) {
    uVar4 = *(uint *)&(pFVar6->Field).field_0x4;
    if (((uVar4 == uVar26) &&
        (((uVar4 == 0 || (uVar26 == 0)) ||
         (iVar17 = strncmp((char *)(*(longlong *)&(pFVar6->Field).field_0x8 - (ulonglong)uVar4),
                           (char *)_Str,(longlong)(int)uVar26), iVar17 == 0)))) && (uVar4 == uVar26)
       ) {
      pFVar6->bDisabledByNewerContext = true;
      this->bDisabledOlderContext = true;
    }
  }
  FCbWriter::~FCbWriter(local_178);
  return this;
}

// ~FLogContext @ 1417a75e0

void __thiscall UE::Logging::Private::FLogContext::~FLogContext(FLogContext *this)

{
  uint uVar1;
  uint uVar2;
  FLogContext *pFVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  FLogContext **ppFVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)_tls_index;
  if (this->Prev == (FLogContext *)0x0) {
    ppFVar7 = (FLogContext **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0xa60);
  }
  else {
    ppFVar7 = &this->Prev->Next;
  }
  *ppFVar7 = this->Next;
  if (this->Next == (FLogContext *)0x0) {
    ppFVar7 = (FLogContext **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0xa68);
  }
  else {
    ppFVar7 = &this->Next->Prev;
  }
  *ppFVar7 = this->Prev;
  if (this->bDisabledOlderContext != false) {
    uVar1 = *(uint *)&(this->Field).field_0x4;
    lVar4 = *(longlong *)&(this->Field).field_0x8;
    for (pFVar3 = this->Prev; pFVar3 != (FLogContext *)0x0; pFVar3 = pFVar3->Prev) {
      uVar2 = *(uint *)&(pFVar3->Field).field_0x4;
      if (uVar2 == uVar1) {
        if ((uVar2 != 0) && (uVar1 != 0)) {
          uVar5 = uVar1;
          if ((int)uVar2 < (int)uVar1) {
            uVar5 = uVar2;
          }
          iVar6 = strncmp((char *)(*(longlong *)&(pFVar3->Field).field_0x8 - (ulonglong)uVar2),
                          (char *)(lVar4 - (ulonglong)uVar1),(longlong)(int)uVar5);
          if (iVar6 != 0) goto LAB_1417a76a6;
        }
        if (uVar2 == uVar1) {
          pFVar3->bDisabledByNewerContext = false;
        }
      }
LAB_1417a76a6:
    }
  }
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&(this->Field).field_0x10);
  return;
}

