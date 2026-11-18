// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 247

// ByteCopy<oo2::LRMEntry_*,oo2::LRMEntry_*> @ 14f38c770

void __cdecl oo2::ByteCopy<oo2::LRMEntry_*,oo2::LRMEntry_*>(LRMEntry **param_1,LRMEntry **param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<oo2::LRMEntry,oo2::LRMEntry> @ 14f38c780

void __cdecl oo2::ByteCopy<oo2::LRMEntry,oo2::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<oo2::Bytes<8>,oo2::Bytes<8>_> @ 14f38c790

void __cdecl oo2::ByteCopy<oo2::Bytes<8>,oo2::Bytes<8>_>(Bytes<8> *param_1,Bytes<8> *param_2)

{
  *(undefined8 *)param_1->bytes = *(undefined8 *)param_2->bytes;
  return;
}

// ByteCopy<unsigned___int64,unsigned___int64> @ 14f38c7a0

void __cdecl oo2::ByteCopy<unsigned___int64,unsigned___int64>(ulong64 *param_1,ulong64 *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteSwap<oo2::LRMEntry_*> @ 14f38c7b0

void __cdecl oo2::ByteSwap<oo2::LRMEntry_*>(LRMEntry **param_1,LRMEntry **param_2)

{
  LRMEntry *pLVar1;
  
  pLVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pLVar1;
  return;
}

// ByteSwap<oo2::LRMEntry> @ 14f38c7d0

void __cdecl oo2::ByteSwap<oo2::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2)

{
  LRMEntry LVar1;
  
  LVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = LVar1;
  return;
}

// ByteSwap<unsigned___int64> @ 14f38c7f0

void __cdecl oo2::ByteSwap<unsigned___int64>(ulong64 *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// OodleDelete<oo2::LRM> @ 14f38c820

void __cdecl oo2::OodleDelete<oo2::LRM>(LRM *param_1)

{
  if (param_1->bloom_filter != (uint *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(param_1->bloom_filter);
    param_1->bloom_filter = (uint *)0x0;
  }
  *(undefined8 *)&(param_1->jumpIn).field_0x10 = 0;
  if (*(void **)&param_1->jumpIn != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)&param_1->jumpIn);
  }
  *(undefined8 *)&param_1->jumpIn = 0;
  *(undefined8 *)&(param_1->jumpIn).field_0x8 = 0;
  *(undefined8 *)&(param_1->entries).field_0x10 = 0;
  if (*(void **)&param_1->entries != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)&param_1->entries);
  }
  *(undefined8 *)&param_1->entries = 0;
  *(undefined8 *)&(param_1->entries).field_0x8 = 0;
                    /* WARNING: Could not recover jumptable at 0x00014f38c8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleDelete<oo2::LRMCascade> @ 14f38c8b0

void __cdecl oo2::OodleDelete<oo2::LRMCascade>(LRMCascade *param_1)

{
  _eh_vector_destructor_iterator_(param_1,0x18,8,vector<oo2::LRM_*>::~vector<oo2::LRM_*>);
                    /* WARNING: Could not recover jumptable at 0x00014f38c8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// assign<oo2::LRMEntry_const_*> @ 14f38c900

void __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::assign<oo2::LRMEntry_const_*>
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,LRMEntry *param_1,
          LRMEntry *param_2)

{
  LRMEntry *pLVar1;
  LRMEntry *pLVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
  if (uVar5 <= *(ulonglong *)&this->field_0x10) {
    pLVar1 = *(LRMEntry **)this;
    if (pLVar1 != param_1) {
      if (param_1 < pLVar1) {
        lVar6 = uVar5 - 1;
        if (-1 < lVar6) {
          pLVar2 = pLVar1 + lVar6;
          do {
            lVar6 = lVar6 + -1;
            *pLVar2 = *(LRMEntry *)(((longlong)param_1 - (longlong)pLVar1) + (longlong)pLVar2);
            pLVar2 = pLVar2 + -1;
          } while (-1 < lVar6);
          *(ulonglong *)&this->field_0x10 = uVar5;
          return;
        }
      }
      else if (uVar5 != 0) {
        lVar6 = (longlong)param_1 - (longlong)pLVar1;
        uVar3 = uVar5;
        do {
          *pLVar1 = *(LRMEntry *)((longlong)pLVar1 + lVar6);
          pLVar1 = pLVar1 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    *(ulonglong *)&this->field_0x10 = uVar5;
    return;
  }
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(ulonglong *)&this->field_0x8 < uVar5) {
    pLVar1 = vector_storage<oo2::LRMEntry>::makefit1((vector_storage<oo2::LRMEntry> *)this,uVar5,0);
    puVar4 = *(undefined8 **)this;
    *(ulonglong *)&this->field_0x10 = uVar5;
    if (uVar5 != 0) {
      lVar6 = (longlong)param_1 - (longlong)puVar4;
      do {
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = *(undefined8 *)(lVar6 + (longlong)puVar4);
        }
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (pLVar1 != (LRMEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f38c9f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleCore_Plugin_Free)(pLVar1);
      return;
    }
  }
  else {
    *(ulonglong *)&this->field_0x10 = uVar5;
    puVar4 = *(undefined8 **)this;
    if (uVar5 != 0) {
      lVar6 = (longlong)param_1 - (longlong)puVar4;
      do {
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = *(undefined8 *)(lVar6 + (longlong)puVar4);
        }
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}

// assignv<oo2::vector<oo2::LRMEntry>_> @ 14f38ca40

void __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::
assignv<oo2::vector<oo2::LRMEntry>_>
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,
          vector<oo2::LRMEntry> *param_1)

{
  undefined8 *puVar1;
  LRMEntry *pLVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  puVar1 = *(undefined8 **)param_1;
  uVar6 = (*(longlong *)&param_1->field_0x10 << 3) >> 3;
  if (uVar6 <= *(ulonglong *)&this->field_0x10) {
    puVar5 = *(undefined8 **)this;
    if (puVar5 != puVar1) {
      if (puVar1 < puVar5) {
        lVar7 = uVar6 - 1;
        if (-1 < lVar7) {
          puVar3 = puVar5 + lVar7;
          do {
            lVar7 = lVar7 + -1;
            *puVar3 = *(undefined8 *)(((longlong)puVar1 - (longlong)puVar5) + (longlong)puVar3);
            puVar3 = puVar3 + -1;
          } while (-1 < lVar7);
          *(ulonglong *)&this->field_0x10 = uVar6;
          return;
        }
      }
      else if (uVar6 != 0) {
        lVar7 = (longlong)puVar1 - (longlong)puVar5;
        uVar4 = uVar6;
        do {
          *puVar5 = *(undefined8 *)((longlong)puVar5 + lVar7);
          puVar5 = puVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    *(ulonglong *)&this->field_0x10 = uVar6;
    return;
  }
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(ulonglong *)&this->field_0x8 < uVar6) {
    pLVar2 = vector_storage<oo2::LRMEntry>::makefit1((vector_storage<oo2::LRMEntry> *)this,uVar6,0);
    puVar5 = *(undefined8 **)this;
    *(ulonglong *)&this->field_0x10 = uVar6;
    if (uVar6 != 0) {
      lVar7 = (longlong)puVar1 - (longlong)puVar5;
      do {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = *(undefined8 *)(lVar7 + (longlong)puVar5);
        }
        puVar5 = puVar5 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (pLVar2 != (LRMEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f38cb37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleCore_Plugin_Free)(pLVar2);
      return;
    }
  }
  else {
    *(ulonglong *)&this->field_0x10 = uVar6;
    puVar5 = *(undefined8 **)this;
    if (uVar6 != 0) {
      lVar7 = (longlong)puVar1 - (longlong)puVar5;
      do {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = *(undefined8 *)(lVar7 + (longlong)puVar5);
        }
        puVar5 = puVar5 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}

// construct<oo2::LRM_*,oo2::LRM_*_const_&> @ 14f38cb80

LRM ** __cdecl oo2::construct<oo2::LRM_*,oo2::LRM_*_const_&>(LRM **param_1,LRM **param_2)

{
  if (param_1 != (LRM **)0x0) {
    *param_1 = *param_2;
  }
  return param_1;
}

// construct<oo2::LRMEntry,oo2::LRMEntry_const_&> @ 14f38cba0

LRMEntry * __cdecl
oo2::construct<oo2::LRMEntry,oo2::LRMEntry_const_&>(LRMEntry *param_1,LRMEntry *param_2)

{
  if (param_1 != (LRMEntry *)0x0) {
    *param_1 = *param_2;
  }
  return param_1;
}

// copy<oo2::LRMEntry> @ 14f38cbc0

void __cdecl oo2::copy<oo2::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *param_1 = *(LRMEntry *)(lVar1 + (longlong)param_1);
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// copy_construct<oo2::LRM_*> @ 14f38cbf0

void __cdecl oo2::copy_construct<oo2::LRM_*>(LRM **param_1,LRM **param_2)

{
  if (param_1 != (LRM **)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// copy_construct<oo2::LRMEntry> @ 14f38cc10

void __cdecl oo2::copy_construct<oo2::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2)

{
  if (param_1 != (LRMEntry *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// copy_construct<oo2::LRMEntry> @ 14f38cc30

void __cdecl oo2::copy_construct<oo2::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (LRMEntry *)0x0) {
        *param_1 = *(LRMEntry *)(lVar1 + (longlong)param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// copy_construct_identical<oo2::LRM_*> @ 14f38cc60

void __cdecl oo2::copy_construct_identical<oo2::LRM_*>(LRM **param_1,LRM **param_2,ulong64 param_3)

{
  for (; param_3 != 0; param_3 = param_3 - 1) {
    if (param_1 != (LRM **)0x0) {
      *param_1 = *param_2;
    }
    param_1 = param_1 + 1;
  }
  return;
}

// default_construct<int> @ 14f38cc90

int * __cdecl oo2::default_construct<int>(int *param_1,ulong64 param_2)

{
  return param_1;
}

// default_construct<oo2::LRMEntry> @ 14f38cca0

LRMEntry * __cdecl oo2::default_construct<oo2::LRMEntry>(LRMEntry *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<int> @ 14f38ccb0

int * __cdecl oo2::destruct<int>(int *param_1)

{
  return param_1;
}

// destruct<int> @ 14f38ccc0

int * __cdecl oo2::destruct<int>(int *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2::LRM_*> @ 14f38ccd0

LRM ** __cdecl oo2::destruct<oo2::LRM_*>(LRM **param_1)

{
  return param_1;
}

// destruct<oo2::LRM_*> @ 14f38cce0

LRM ** __cdecl oo2::destruct<oo2::LRM_*>(LRM **param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2::LRM> @ 14f38cd00

LRM * __cdecl oo2::destruct<oo2::LRM>(LRM *param_1)

{
  if (param_1->bloom_filter != (uint *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(param_1->bloom_filter);
    param_1->bloom_filter = (uint *)0x0;
  }
  *(undefined8 *)&(param_1->jumpIn).field_0x10 = 0;
  if (*(void **)&param_1->jumpIn != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)&param_1->jumpIn);
  }
  *(undefined8 *)&param_1->jumpIn = 0;
  *(undefined8 *)&(param_1->jumpIn).field_0x8 = 0;
  *(undefined8 *)&(param_1->entries).field_0x10 = 0;
  if (*(void **)&param_1->entries != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)&param_1->entries);
  }
  *(undefined8 *)&param_1->entries = 0;
  *(undefined8 *)&(param_1->entries).field_0x8 = 0;
  return param_1;
}

// destruct<oo2::LRMCascade> @ 14f38cd90

LRMCascade * __cdecl oo2::destruct<oo2::LRMCascade>(LRMCascade *param_1)

{
  _eh_vector_destructor_iterator_(param_1,0x18,8,vector<oo2::LRM_*>::~vector<oo2::LRM_*>);
  return param_1;
}

// destruct<oo2::LRMEntry> @ 14f38cdd0

LRMEntry * __cdecl oo2::destruct<oo2::LRMEntry>(LRMEntry *param_1)

{
  return param_1;
}

// destruct<oo2::LRMEntry> @ 14f38cde0

LRMEntry * __cdecl oo2::destruct<oo2::LRMEntry>(LRMEntry *param_1,ulong64 param_2)

{
  return param_1;
}

// extend_construct_in_place<oo2::LRM_*_const_&> @ 14f38ce00

void __thiscall
oo2::vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::
extend_construct_in_place<oo2::LRM_*_const_&>
          (vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this,LRM **param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  LRM **ppLVar3;
  undefined8 *puVar4;
  
  uVar2 = this->m_size;
  uVar1 = uVar2 + 1;
  if ((ulonglong)this->_padding_ < uVar1) {
    ppLVar3 = vector_storage<oo2::LRM_*>::makefit1((vector_storage<oo2::LRM_*> *)this,uVar1,uVar2);
    puVar4 = (undefined8 *)(this->_padding_ + uVar2 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *param_1;
    }
    this->m_size = uVar1;
    if (ppLVar3 != (LRM **)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(ppLVar3);
    }
  }
  else {
    this->m_size = uVar1;
    puVar4 = (undefined8 *)(this->_padding_ + uVar2 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *param_1;
    }
  }
  return;
}

// extend_construct_in_place<oo2::LRMEntry_const_&> @ 14f38cea0

void __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::
extend_construct_in_place<oo2::LRMEntry_const_&>
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,LRMEntry *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  LRMEntry *pLVar3;
  LRMEntry *pLVar4;
  
  uVar2 = this->m_size;
  uVar1 = uVar2 + 1;
  if ((ulonglong)this->_padding_ < uVar1) {
    pLVar3 = vector_storage<oo2::LRMEntry>::makefit1
                       ((vector_storage<oo2::LRMEntry> *)this,uVar1,uVar2);
    pLVar4 = (LRMEntry *)(this->_padding_ + uVar2 * 8);
    if (pLVar4 != (LRMEntry *)0x0) {
      *pLVar4 = *param_1;
    }
    this->m_size = uVar1;
    if (pLVar3 != (LRMEntry *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pLVar3);
    }
  }
  else {
    this->m_size = uVar1;
    pLVar3 = (LRMEntry *)(this->_padding_ + uVar2 * 8);
    if (pLVar3 != (LRMEntry *)0x0) {
      *pLVar3 = *param_1;
    }
  }
  return;
}

// forward<oo2::LRM_*_const_&> @ 14f38cf30

LRM ** __cdecl oo2::forward<oo2::LRM_*_const_&>(LRM **param_1)

{
  return param_1;
}

// forward<oo2::LRMEntry_const_&> @ 14f38cf40

LRMEntry * __cdecl oo2::forward<oo2::LRMEntry_const_&>(LRMEntry *param_1)

{
  return param_1;
}

// move<int_&> @ 14f38cf50

int * __cdecl oo2::move<int_&>(int *param_1)

{
  return param_1;
}

// move<oo2::LRM_*_&> @ 14f38cf60

LRM ** __cdecl oo2::move<oo2::LRM_*_&>(LRM **param_1)

{
  return param_1;
}

// move<oo2::LRMEntry_&> @ 14f38cf70

LRMEntry * __cdecl oo2::move<oo2::LRMEntry_&>(LRMEntry *param_1)

{
  return param_1;
}

// move<oo2::LRMEntry> @ 14f38cf80

void __cdecl oo2::move<oo2::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2,ulong64 param_3)

{
  LRMEntry *pLVar1;
  longlong lVar2;
  
  if (param_2 < param_1) {
    lVar2 = param_3 - 1;
    if (-1 < lVar2) {
      pLVar1 = param_1 + lVar2;
      do {
        lVar2 = lVar2 + -1;
        *pLVar1 = *(LRMEntry *)(((longlong)param_2 - (longlong)param_1) + (longlong)pLVar1);
        pLVar1 = pLVar1 + -1;
      } while (-1 < lVar2);
      return;
    }
  }
  else if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *param_1 = *(LRMEntry *)((longlong)param_1 + lVar2);
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// move_construct<int> @ 14f38cfe0

void __cdecl oo2::move_construct<int>(int *param_1,int *param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<int> @ 14f38cff0

void __cdecl oo2::move_construct<int>(int *param_1,int *param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (int *)0x0) {
        *param_1 = *(int *)(lVar1 + (longlong)param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// move_construct<oo2::LRM_*> @ 14f38d020

void __cdecl oo2::move_construct<oo2::LRM_*>(LRM **param_1,LRM **param_2)

{
  if (param_1 != (LRM **)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<oo2::LRM_*> @ 14f38d040

void __cdecl oo2::move_construct<oo2::LRM_*>(LRM **param_1,LRM **param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (LRM **)0x0) {
        *param_1 = *(LRM **)(lVar1 + (longlong)param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// move_construct<oo2::LRMEntry> @ 14f38d070

void __cdecl oo2::move_construct<oo2::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2)

{
  if (param_1 != (LRMEntry *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<oo2::LRMEntry> @ 14f38d090

void __cdecl oo2::move_construct<oo2::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (LRMEntry *)0x0) {
        *param_1 = *(LRMEntry *)(lVar1 + (longlong)param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// stdsort<oo2::LRMEntry_*,oo2::stdless<oo2::LRMEntry>_> @ 14f38d0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::stdsort<oo2::LRMEntry_*,oo2::stdless<oo2::LRMEntry>_>
          (LRMEntry *param_1,LRMEntry *param_2,stdless<oo2::LRMEntry> param_3)

{
  uint uVar1;
  uint uVar2;
  LRMEntry LVar3;
  longlong lVar4;
  LRMEntry *pLVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  LRMEntry *pLVar9;
  LRMEntry *pLVar10;
  LRMEntry *pLVar11;
  ulonglong uVar12;
  LRMEntry *pLVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  undefined1 auStack_648 [1536];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_648;
  uVar14 = (ulonglong)(int)((longlong)param_2 - (longlong)param_1 >> 3);
  pLVar13 = param_1 + (uVar14 - 1);
  uVar7 = uVar14;
  puVar17 = local_48;
  if (1 < uVar14) {
    do {
      puVar16 = puVar17;
      puVar17 = puVar16 + -3;
      uVar7 = (uVar7 >> 2) + (uVar7 >> 1);
    } while (uVar7 != 0);
    puVar16[-4] = 0;
LAB_14f38d170:
    do {
      if (1 < uVar14) {
        if (uVar14 == 2) {
          if (pLVar13->hash < param_1->hash) {
            LVar3 = *param_1;
            *param_1 = *pLVar13;
LAB_14f38d3ee:
            *pLVar13 = LVar3;
          }
        }
        else {
          uVar6 = param_1->hash;
          uVar1 = pLVar13->hash;
          uVar7 = uVar14 >> 1;
          uVar2 = param_1[uVar7].hash;
          pLVar5 = param_1 + uVar7;
          if (uVar2 < uVar6) {
            if (uVar2 < uVar1) {
              if (uVar6 < uVar1) {
                LVar3 = *param_1;
                *param_1 = *pLVar5;
                *pLVar5 = LVar3;
                goto code_r0x00014f38d200;
              }
              LVar3 = *pLVar5;
              *pLVar5 = *param_1;
              *param_1 = LVar3;
              LVar3 = *pLVar5;
              *pLVar5 = *pLVar13;
            }
            else {
LAB_14f38d1f1:
              LVar3 = *param_1;
              *param_1 = *pLVar13;
            }
LAB_14f38d1fa:
            *pLVar13 = LVar3;
          }
          else if (uVar1 < uVar2) {
            if (uVar6 < uVar1) {
              LVar3 = *pLVar5;
              *pLVar5 = *pLVar13;
              goto LAB_14f38d1fa;
            }
            LVar3 = *param_1;
            *param_1 = *pLVar5;
            *pLVar5 = LVar3;
            goto LAB_14f38d1f1;
          }
code_r0x00014f38d200:
          if (4 < uVar14) {
            if (puVar17 == local_48) {
LAB_14f38d305:
              uVar7 = uVar7 - 1;
              pLVar5 = pLVar5 + -1;
              uVar12 = uVar7 * 2 + 1;
              pLVar10 = pLVar5;
LAB_14f38d320:
              pLVar9 = param_1 + uVar12;
              pLVar11 = pLVar9 + 1;
              if ((pLVar11 <= pLVar13) && (pLVar9->hash < pLVar11->hash)) {
                uVar12 = uVar12 + 1;
                pLVar9 = pLVar11;
              }
              if (pLVar10->hash < pLVar9->hash) goto code_r0x00014f38d33f;
              goto LAB_14f38d35b;
            }
            LVar3 = *pLVar5;
            *pLVar5 = *param_1;
            *param_1 = LVar3;
            pLVar5 = param_1;
            pLVar10 = pLVar13;
            while( true ) {
              do {
                pLVar10 = pLVar10 + -1;
              } while (param_1->hash < pLVar10->hash);
              pLVar11 = pLVar5;
              if (pLVar10 <= pLVar5) break;
              do {
                pLVar5 = pLVar11;
                pLVar11 = pLVar5 + 1;
              } while (pLVar11->hash < param_1->hash);
              if (pLVar10 <= pLVar11) break;
              LVar3 = *pLVar11;
              *pLVar11 = *pLVar10;
              *pLVar10 = LVar3;
              pLVar5 = pLVar11;
            }
            LVar3 = *param_1;
            *param_1 = *pLVar5;
            *pLVar5 = LVar3;
            pLVar10 = pLVar5;
            do {
              pLVar10 = pLVar10 + 1;
              uVar6 = LVar3.hash;
              if (pLVar13 <= pLVar10) break;
              uVar6 = pLVar5->hash;
              LVar3.pos32 = 0;
              LVar3.hash = uVar6;
            } while (pLVar10->hash <= uVar6);
            do {
              pLVar5 = pLVar5 + -1;
              if (pLVar5 <= param_1) break;
            } while (uVar6 <= pLVar5->hash);
            lVar8 = (longlong)pLVar13 - (longlong)pLVar10 >> 3;
            lVar15 = (longlong)pLVar5 - (longlong)param_1 >> 3;
            uVar14 = lVar8 + 1;
            uVar7 = lVar15 + 1;
            pLVar11 = pLVar5;
            pLVar9 = param_1;
            if (uVar7 > uVar14) {
              pLVar11 = pLVar13;
              pLVar9 = pLVar10;
              pLVar10 = param_1;
              pLVar13 = pLVar5;
            }
            *puVar17 = (ulonglong)pLVar9;
            lVar4 = lVar8;
            if (uVar7 <= uVar14) {
              lVar4 = lVar15;
            }
            puVar17[1] = (ulonglong)pLVar11;
            puVar17[2] = lVar4 + 1;
            if (uVar7 <= uVar14) {
              lVar15 = lVar8;
            }
            uVar14 = lVar15 + 1;
            param_1 = pLVar10;
            puVar17 = puVar17 + 3;
            goto LAB_14f38d170;
          }
          if (uVar14 != 3) {
            uVar6 = param_1[1].hash;
            if (pLVar5->hash < uVar6) {
              if (pLVar13->hash <= uVar6) {
                LVar3 = *pLVar5;
                *pLVar5 = param_1[1];
                param_1[1] = LVar3;
                LVar3 = *pLVar5;
                *pLVar5 = *pLVar13;
                goto LAB_14f38d3ee;
              }
              LVar3 = param_1[1];
              param_1[1] = *pLVar5;
              *pLVar5 = LVar3;
            }
            else if (uVar6 < param_1->hash) {
              LVar3 = *param_1;
              *param_1 = param_1[1];
              param_1[1] = LVar3;
            }
          }
        }
      }
LAB_14f38d3f1:
      uVar14 = puVar17[-1];
      param_1 = (LRMEntry *)puVar17[-3];
      pLVar13 = (LRMEntry *)puVar17[-2];
      puVar17 = puVar17 + -3;
    } while (uVar14 != 0);
  }
  return;
code_r0x00014f38d33f:
  LVar3 = *pLVar10;
  uVar12 = uVar12 * 2 + 1;
  *pLVar10 = *pLVar9;
  *pLVar9 = LVar3;
  pLVar10 = pLVar9;
  if (uVar14 <= uVar12) {
LAB_14f38d35b:
    if (uVar7 == 0) {
      uVar14 = uVar14 - 1;
      LVar3 = *param_1;
      uVar12 = 1;
      *param_1 = *pLVar13;
      *pLVar13 = LVar3;
      pLVar13 = pLVar13 + -1;
      pLVar10 = param_1;
      if (uVar14 < 2) goto LAB_14f38d3f1;
      goto LAB_14f38d320;
    }
    goto LAB_14f38d305;
  }
  goto LAB_14f38d320;
}

// stdsort<oo2::LRMEntry> @ 14f38d470

void __cdecl oo2::stdsort<oo2::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2)

{
  undefined1 local_res18;
  
  stdsort<oo2::LRMEntry_*,oo2::stdless<oo2::LRMEntry>_>(param_1,param_2,local_res18);
  return;
}

// swap3<oo2::LRMEntry> @ 14f38d490

void __cdecl oo2::swap3<oo2::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2,LRMEntry *param_3)

{
  LRMEntry LVar1;
  
  LVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = LVar1;
  LVar1 = *param_1;
  *param_1 = *param_3;
  *param_3 = LVar1;
  return;
}

// swap<oo2::LRMEntry_*> @ 14f38d4b0

void __cdecl oo2::swap<oo2::LRMEntry_*>(LRMEntry **param_1,LRMEntry **param_2)

{
  LRMEntry *pLVar1;
  
  pLVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pLVar1;
  return;
}

// swap<oo2::LRMEntry> @ 14f38d4d0

void __cdecl oo2::swap<oo2::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2)

{
  LRMEntry LVar1;
  
  LVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = LVar1;
  return;
}

// swap<unsigned___int64> @ 14f38d4f0

void __cdecl oo2::swap<unsigned___int64>(ulong64 *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// vector<int> @ 14f38d510

vector<int> * __thiscall oo2::vector<int>::vector<int>(vector<int> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector<oo2::LRM_*> @ 14f38d530

vector<oo2::LRM_*> * __thiscall
oo2::vector<oo2::LRM_*>::vector<oo2::LRM_*>(vector<oo2::LRM_*> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector<oo2::LRMEntry> @ 14f38d550

vector<oo2::LRMEntry> * __thiscall
oo2::vector<oo2::LRMEntry>::vector<oo2::LRMEntry>(vector<oo2::LRMEntry> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_base<int,oo2::vector_storage<int>_> @ 14f38d570

vector_base<int,oo2::vector_storage<int>_> * __thiscall
oo2::vector_base<int,oo2::vector_storage<int>_>::vector_base<int,oo2::vector_storage<int>_>
          (vector_base<int,oo2::vector_storage<int>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> @ 14f38d590

vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> * __thiscall
oo2::vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::
vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>
          (vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> @ 14f38d5c0

vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> * __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::
vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,
          vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *param_1)

{
  ulong64 uVar1;
  LRMEntry *pLVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong lVar5;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  uVar1 = param_1->m_size;
  lVar5 = param_1->_padding_;
  if (uVar1 == 0) {
    this->m_size = 0;
  }
  else {
    pLVar2 = vector_storage<oo2::LRMEntry>::makefit1((vector_storage<oo2::LRMEntry> *)this,uVar1,0);
    puVar3 = (undefined8 *)(this->_padding_ + this->m_size * 8);
    lVar5 = lVar5 - (longlong)puVar3;
    uVar4 = uVar1;
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *(undefined8 *)(lVar5 + (longlong)puVar3);
      }
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    this->m_size = this->m_size + uVar1;
    if (pLVar2 != (LRMEntry *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pLVar2);
    }
  }
  return this;
}

// vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> @ 14f38d670

vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> * __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::
vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_flex<int,oo2::vector_storage<int>_> @ 14f38d690

vector_flex<int,oo2::vector_storage<int>_> * __thiscall
oo2::vector_flex<int,oo2::vector_storage<int>_>::vector_flex<int,oo2::vector_storage<int>_>
          (vector_flex<int,oo2::vector_storage<int>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> @ 14f38d6b0

vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> * __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::
vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> @ 14f38d6d0

vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> * __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::
vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,
          vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *param_1)

{
  vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::
  vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>
            ((vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *)this,
             (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *)param_1);
  return this;
}

// vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> @ 14f38d6f0

vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> * __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::
vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_storage<int> @ 14f38d710

vector_storage<int> * __thiscall
oo2::vector_storage<int>::vector_storage<int>(vector_storage<int> *this)

{
  this->m_begin = (int *)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage<oo2::LRM_*> @ 14f38d730

vector_storage<oo2::LRM_*> * __thiscall
oo2::vector_storage<oo2::LRM_*>::vector_storage<oo2::LRM_*>(vector_storage<oo2::LRM_*> *this)

{
  this->m_begin = (LRM **)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage<oo2::LRMEntry> @ 14f38d750

vector_storage<oo2::LRMEntry> * __thiscall
oo2::vector_storage<oo2::LRMEntry>::vector_storage<oo2::LRMEntry>
          (vector_storage<oo2::LRMEntry> *this)

{
  this->m_begin = (LRMEntry *)0x0;
  this->m_capacity = 0;
  return this;
}

// LRM @ 14f38d770

LRM * __thiscall oo2::LRM::LRM(LRM *this)

{
  this->creation = 0;
  *(undefined8 *)&this->entries = 0;
  *(undefined8 *)&(this->entries).field_0x8 = 0;
  *(undefined8 *)&(this->entries).field_0x10 = 0;
  this->bloom_row_shift = 0;
  this->bloom_filter = (uint *)0x0;
  this->hash_length = 0;
  this->hash_mul_end = 0;
  this->chunkBasePtr = (uchar *)0x0;
  this->matchBasePtr = (uchar *)0x0;
  this->bufSize = 0;
  *(undefined8 *)&this->jumpIn = 0;
  *(undefined8 *)&(this->jumpIn).field_0x8 = 0;
  *(undefined8 *)&(this->jumpIn).field_0x10 = 0;
  this->jumpInShift = 0;
  return this;
}

// LRMCascade @ 14f38d7c0

LRMCascade * __thiscall oo2::LRMCascade::LRMCascade(LRMCascade *this)

{
  _eh_vector_constructor_iterator_
            (this,0x18,8,vector<oo2::LRM_*>::vector<oo2::LRM_*>,
             vector<oo2::LRM_*>::~vector<oo2::LRM_*>);
  this->chunkSize = 0;
  this->buffer = (uchar *)0x0;
  this->bufSize = 0;
  this->step = 0;
  this->jumpBits_0 = 0;
  this->jumpBits_inc = 0;
  this->hash_length = 0;
  this->numChunks = 0;
  this->nextChunk = 0;
  return this;
}

// ~vector<int> @ 14f38d840

void __thiscall oo2::vector<int>::~vector<int>(vector<int> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector<oo2::LRM_*> @ 14f38d8a0

void __thiscall oo2::vector<oo2::LRM_*>::~vector<oo2::LRM_*>(vector<oo2::LRM_*> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector<oo2::LRMEntry> @ 14f38d900

void __thiscall oo2::vector<oo2::LRMEntry>::~vector<oo2::LRMEntry>(vector<oo2::LRMEntry> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_base<int,oo2::vector_storage<int>_> @ 14f38d960

void __thiscall
oo2::vector_base<int,oo2::vector_storage<int>_>::~vector_base<int,oo2::vector_storage<int>_>
          (vector_base<int,oo2::vector_storage<int>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> @ 14f38d9c0

void __thiscall
oo2::vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::
~vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>
          (vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> @ 14f38da20

void __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::
~vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_flex<int,oo2::vector_storage<int>_> @ 14f38da80

void __thiscall
oo2::vector_flex<int,oo2::vector_storage<int>_>::~vector_flex<int,oo2::vector_storage<int>_>
          (vector_flex<int,oo2::vector_storage<int>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> @ 14f38dae0

void __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::
~vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> @ 14f38db40

void __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::
~vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_storage<int> @ 14f38dba0

void __thiscall oo2::vector_storage<int>::~vector_storage<int>(vector_storage<int> *this)

{
  if (this->m_begin != (int *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (int *)0x0;
  return;
}

// ~vector_storage<oo2::LRM_*> @ 14f38dbe0

void __thiscall
oo2::vector_storage<oo2::LRM_*>::~vector_storage<oo2::LRM_*>(vector_storage<oo2::LRM_*> *this)

{
  if (this->m_begin != (LRM **)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (LRM **)0x0;
  return;
}

// ~vector_storage<oo2::LRMEntry> @ 14f38dc20

void __thiscall
oo2::vector_storage<oo2::LRMEntry>::~vector_storage<oo2::LRMEntry>
          (vector_storage<oo2::LRMEntry> *this)

{
  if (this->m_begin != (LRMEntry *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (LRMEntry *)0x0;
  return;
}

// ~LRM @ 14f38dc60

void __thiscall oo2::LRM::~LRM(LRM *this)

{
  if (this->bloom_filter != (uint *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(this->bloom_filter);
    this->bloom_filter = (uint *)0x0;
  }
  *(undefined8 *)&(this->jumpIn).field_0x10 = 0;
  if (*(void **)&this->jumpIn != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)&this->jumpIn);
  }
  *(undefined8 *)&this->jumpIn = 0;
  *(undefined8 *)&(this->jumpIn).field_0x8 = 0;
  *(undefined8 *)&(this->entries).field_0x10 = 0;
  if (*(void **)&this->entries != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)&this->entries);
  }
  *(undefined8 *)&this->entries = 0;
  *(undefined8 *)&(this->entries).field_0x8 = 0;
  return;
}

// ~LRMCascade @ 14f38dce0

void __thiscall oo2::LRMCascade::~LRMCascade(LRMCascade *this)

{
  _eh_vector_destructor_iterator_(this,0x18,8,vector<oo2::LRM_*>::~vector<oo2::LRM_*>);
  return;
}

// operator[] @ 14f38dd20

int * __thiscall
oo2::vector_flex<int,oo2::vector_storage<int>_>::operator[]
          (vector_flex<int,oo2::vector_storage<int>_> *this,ulong64 param_1)

{
  return (int *)(*(longlong *)this + param_1 * 4);
}

// operator[] @ 14f38dd30

int * __thiscall
oo2::vector_flex<int,oo2::vector_storage<int>_>::operator[]
          (vector_flex<int,oo2::vector_storage<int>_> *this,ulong64 param_1)

{
  return (int *)(*(longlong *)this + param_1 * 4);
}

// operator[] @ 14f38dd40

LRM ** __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::operator[]
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this,ulong64 param_1)

{
  return (LRM **)(*(longlong *)this + param_1 * 8);
}

// operator[] @ 14f38dd50

LRM ** __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::operator[]
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this,ulong64 param_1)

{
  return (LRM **)(*(longlong *)this + param_1 * 8);
}

// operator< @ 14f38dd60

bool __thiscall oo2::LRMEntry::operator<(LRMEntry *this,LRMEntry *param_1)

{
  return this->hash < param_1->hash;
}

// operator() @ 14f38dd70

bool __thiscall
oo2::stdless<oo2::LRMEntry>::operator()
          (stdless<oo2::LRMEntry> *this,LRMEntry *param_1,LRMEntry *param_2)

{
  return param_1->hash < param_2->hash;
}

// operator() @ 14f38dd80

void __thiscall
oo2::swap_functor<oo2::LRMEntry_*>::operator()
          (swap_functor<oo2::LRMEntry_*> *this,LRMEntry **param_1,LRMEntry **param_2)

{
  LRMEntry *pLVar1;
  
  pLVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pLVar1;
  return;
}

// operator() @ 14f38dda0

void __thiscall
oo2::swap_functor<oo2::LRMEntry>::operator()
          (swap_functor<oo2::LRMEntry> *this,LRMEntry *param_1,LRMEntry *param_2)

{
  LRMEntry LVar1;
  
  LVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = LVar1;
  return;
}

// operator() @ 14f38ddc0

void __thiscall
oo2::swap_functor<unsigned___int64>::operator()
          (swap_functor<unsigned___int64> *this,ulong64 *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// FreeBloom @ 14f38dde0

void __thiscall oo2::LRM::FreeBloom(LRM *this)

{
  if (this->bloom_filter != (uint *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(this->bloom_filter);
    this->bloom_filter = (uint *)0x0;
  }
  return;
}

// GetNumBytesZeroNeverAllR @ 14f38de10

int __cdecl oo2::GetNumBytesZeroNeverAllR(ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (uint)(uVar1 >> 3) & 0x1fffffff;
}

// LRMScannerWindowed_FindMatchAndRoll @ 14f38de20

int __cdecl
oo2::LRMScannerWindowed_FindMatchAndRoll
          (LRMScannerWindowed *param_1,uchar *param_2,uchar *param_3,long64 *param_4)

{
  int iVar1;
  longlong lVar2;
  uchar *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uchar *puVar7;
  int iVar8;
  
  param_1->lrm_last_ptr = param_1->lrm_last_ptr + 1;
  uVar4 = (int)param_2 - *(int *)&param_1->lrm_base_ptr & 0x1f;
  iVar1 = param_1->window_len[uVar4];
  *param_4 = param_1->window_off[uVar4];
  iVar5 = LRMScanner_FindMatchAndRoll
                    ((LRMScanner *)param_1,param_2 + 0x20,param_3,param_1->window_off + uVar4);
  param_1->window_len[uVar4] = iVar5;
  if (0 < iVar5) {
    puVar7 = param_2 + 0x1f;
    lVar2 = param_1->window_off[uVar4];
    iVar5 = 1;
    puVar3 = param_1->lrm_window_base;
    do {
      if (param_2 + 0x20 + (-(longlong)iVar5 - lVar2) < puVar3) {
        return iVar1;
      }
      if (*puVar7 != puVar7[-lVar2]) {
        return iVar1;
      }
      iVar8 = param_1->window_len[uVar4] + iVar5;
      uVar6 = uVar4 - iVar5 & 0x1f;
      if (param_1->window_len[uVar6] < iVar8) {
        param_1->window_len[uVar6] = iVar8;
        param_1->window_off[uVar6] = param_1->window_off[uVar4];
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + -1;
    } while (iVar5 < 0x20);
  }
  return iVar1;
}

// LRMScannerWindowed_Init @ 14f38df20

void __cdecl
oo2::LRMScannerWindowed_Init
          (LRMScannerWindowed *param_1,LRMSet *param_2,uchar *param_3,uchar *param_4,long64 param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  long64 *plVar5;
  longlong lVar6;
  long64 *plVar7;
  int *piVar8;
  
  rrMemSetZero(param_1,0x38);
  if ((param_2 == (LRMSet *)0x0) || (*(longlong *)&(param_2->lrms).field_0x10 == 0)) {
    param_1->lrm_base_ptr = param_3;
    param_1->_padding_ = 0;
    param_1->lrm_last_ptr = param_3;
    if (param_2 != (LRMSet *)0x0) goto LAB_14f38dffb;
  }
  else {
    param_1->_padding_ = (longlong)param_2;
    lVar6 = **(longlong **)&param_2->lrms;
    if (lVar6 == 0) {
      iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x4e1,
                                 "oo2::LRMScanner_Init","lrmfirst != NULL");
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = *(undefined4 *)(lVar6 + 0x34);
    iVar2 = *(int *)(lVar6 + 0x30);
    *(int *)&param_1->_padding_ = iVar2;
    param_1->_padding_ = (longlong)(param_4 + -(longlong)iVar2);
    param_1->_padding_ = param_5;
    if (param_3 < param_4 + -(longlong)iVar2) {
      uVar3 = LRM_InitialHash(param_3,iVar2);
      *(uint *)&param_1->_padding_ = uVar3;
      param_1->lrm_base_ptr = param_3;
      param_1->lrm_last_ptr = param_3;
    }
    else {
      param_1->_padding_ = 0;
      param_1->lrm_base_ptr = param_3;
      param_1->lrm_last_ptr = param_3;
    }
LAB_14f38dffb:
    lVar6 = *(longlong *)&(param_2->lrms).field_0x10;
    if (lVar6 != 0) {
      puVar4 = *(uchar **)(*(longlong *)(*(longlong *)&param_2->lrms + -8 + lVar6 * 8) + 0x38);
      goto LAB_14f38e016;
    }
  }
  puVar4 = (uchar *)0x0;
LAB_14f38e016:
  plVar5 = param_1->window_off;
  param_1->lrm_window_base = puVar4;
  piVar8 = param_1->window_len;
  lVar6 = 0x20;
  plVar7 = plVar5;
  do {
    *plVar7 = 0;
    iVar2 = LRMScanner_FindMatchAndRoll((LRMScanner *)param_1,param_3,param_4,plVar5);
    plVar5 = plVar5 + 1;
    *piVar8 = iVar2;
    param_3 = param_3 + 1;
    plVar7 = plVar7 + 1;
    piVar8 = piVar8 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

// LRMScanner_FindMatch @ 14f38e080

int __cdecl
oo2::LRMScanner_FindMatch(LRMScanner *param_1,uchar *param_2,uchar *param_3,long64 *param_4)

{
  uchar *puVar1;
  int iVar2;
  
  if (param_1->lrm_end_ptr < param_2) {
    return 0;
  }
  puVar1 = param_1->lrm_last_ml_plus_ptr;
  if (param_2 + 0x100 <= puVar1) {
    *param_4 = param_1->lrm_last_off;
    return (int)puVar1 - (int)param_2;
  }
  iVar2 = LRMSet_FindMatch(param_1->lrmset,param_1->lrm_hash,param_2,param_3,param_4,
                           param_1->matchOffsetLimit);
  if (0 < iVar2) {
    param_1->lrm_last_ml_plus_ptr = param_2 + iVar2;
    param_1->lrm_last_off = *param_4;
  }
  return iVar2;
}

// LRMScanner_FindMatchAndRoll @ 14f38e140

int __cdecl
oo2::LRMScanner_FindMatchAndRoll(LRMScanner *param_1,uchar *param_2,uchar *param_3,long64 *param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1->lrm_end_ptr < param_2) {
    return 0;
  }
  if (param_1->lrm_last_ml_plus_ptr < param_2 + 0x100) {
    iVar1 = LRMSet_FindMatch(param_1->lrmset,param_1->lrm_hash,param_2,param_3,param_4,
                             param_1->matchOffsetLimit);
    lVar2 = (longlong)iVar1;
    if (param_2 + lVar2 < param_1->lrm_last_ml_plus_ptr) {
      lVar2 = (longlong)param_1->lrm_last_ml_plus_ptr - (longlong)param_2;
      *param_4 = param_1->lrm_last_off;
    }
    param_1->lrm_last_ml_plus_ptr = param_2 + lVar2;
    param_1->lrm_last_off = *param_4;
  }
  else {
    lVar2 = (longlong)param_1->lrm_last_ml_plus_ptr - (longlong)param_2;
    *param_4 = param_1->lrm_last_off;
  }
  if (param_2 < param_1->lrm_end_ptr) {
    param_1->lrm_hash =
         (param_1->lrm_hash - (uint)*param_2 * param_1->lrm_hashMulEnd) * 0x2c2c57ed +
         (uint)param_2[param_1->lrm_hashLength];
  }
  return (int)lVar2;
}

// LRMScanner_Init @ 14f38e220

void __cdecl
oo2::LRMScanner_Init
          (LRMScanner *param_1,LRMSet *param_2,uchar *param_3,uchar *param_4,long64 param_5)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  rrMemSetZero(param_1,0x38);
  if ((param_2 != (LRMSet *)0x0) && (*(longlong *)&(param_2->lrms).field_0x10 != 0)) {
    param_1->lrmset = param_2;
    lVar1 = **(longlong **)&param_2->lrms;
    if ((lVar1 == 0) &&
       (iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x4e1,
                                   "oo2::LRMScanner_Init","lrmfirst != NULL"), iVar3 != 0)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_1->lrm_hashMulEnd = *(uint *)(lVar1 + 0x34);
    iVar3 = *(int *)(lVar1 + 0x30);
    param_1->lrm_hashLength = iVar3;
    param_1->lrm_end_ptr = param_4 + -(longlong)iVar3;
    param_1->matchOffsetLimit = param_5;
    if (param_3 < param_4 + -(longlong)iVar3) {
      uVar4 = LRM_InitialHash(param_3,iVar3);
      param_1->lrm_hash = uVar4;
      return;
    }
  }
  param_1->lrm_end_ptr = (uchar *)0x0;
  return;
}

// LRMScanner_Roll @ 14f38e2e0

void __cdecl oo2::LRMScanner_Roll(LRMScanner *param_1,uchar *param_2)

{
  param_1->lrm_hash =
       (param_1->lrm_hash - (uint)*param_2 * param_1->lrm_hashMulEnd) * 0x2c2c57ed +
       (uint)param_2[param_1->lrm_hashLength];
  return;
}

// LRMSet_CheckWholeMatchQuantum @ 14f38e320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::LRMSet_CheckWholeMatchQuantum(LRMSet *param_1,uchar *param_2,long64 param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  code *pcVar3;
  int iVar4;
  long64 lVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long64 *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int *piVar13;
  longlong lVar14;
  undefined1 auStackY_268 [32];
  longlong local_230;
  LRMScannerWindowed local_228;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pbVar1 = param_2 + param_3;
  if (*(longlong *)&(param_1->lrms).field_0x10 == 0) {
    pbVar7 = (byte *)0x0;
  }
  else {
    pbVar7 = (byte *)(*(longlong *)(**(longlong **)&param_1->lrms + 0x48) +
                     *(longlong *)(**(longlong **)&param_1->lrms + 0x38));
    if ((pbVar1 < pbVar7) &&
       (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x5a9,
                                   "oo2::LRMSet_CheckWholeMatchQuantum","curPtr >= lrmset_end"),
       iVar4 != 0)) {
      pcVar3 = (code *)swi(3);
      lVar5 = (*pcVar3)();
      return lVar5;
    }
  }
  pbVar2 = pbVar1 + param_4;
  if (param_2 < pbVar1 + -0x10) {
    param_2 = pbVar1 + -0x10;
  }
  if (pbVar7 < param_2) {
    pbVar7 = param_2;
  }
  rrMemSetZero(&local_228,0x38);
  if (*(longlong *)&(param_1->lrms).field_0x10 == 0) {
    local_228._padding_ = 0;
  }
  else {
    lVar14 = **(longlong **)&param_1->lrms;
    local_228._padding_ = (longlong)param_1;
    if ((lVar14 == 0) &&
       (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x4e1,
                                   "oo2::LRMScanner_Init","lrmfirst != NULL"), iVar4 != 0)) {
      pcVar3 = (code *)swi(3);
      lVar5 = (*pcVar3)();
      return lVar5;
    }
    local_228._padding_._4_4_ = *(int *)(lVar14 + 0x34);
    local_228._padding_._0_4_ = *(int *)(lVar14 + 0x30);
    local_228._padding_ = (longlong)(pbVar2 + -(longlong)(int)local_228._padding_);
    local_228._padding_ = 0x7fffffff;
    if (pbVar7 < (ulonglong)local_228._padding_) {
      local_228._padding_._0_4_ = LRM_InitialHash(pbVar7,(int)local_228._padding_);
    }
    else {
      local_228._padding_ = 0;
    }
    lVar14 = *(longlong *)&(param_1->lrms).field_0x10;
    if (lVar14 != 0) {
      local_228.lrm_window_base =
           *(uchar **)(*(longlong *)(*(longlong *)&param_1->lrms + -8 + lVar14 * 8) + 0x38);
      goto LAB_14f38e47f;
    }
  }
  local_228.lrm_window_base = (byte *)0x0;
LAB_14f38e47f:
  piVar13 = local_228.window_len;
  plVar9 = local_228.window_off;
  lVar14 = 0x20;
  pbVar8 = pbVar7;
  local_228.lrm_base_ptr = pbVar7;
  local_228.lrm_last_ptr = pbVar7;
  do {
    *plVar9 = 0;
    if ((ulonglong)local_228._padding_ < pbVar8) {
      iVar4 = 0;
    }
    else {
      if ((ulonglong)local_228._padding_ < pbVar8 + 0x100) {
        iVar4 = LRMSet_FindMatch((LRMSet *)local_228._padding_,(uint)local_228._padding_,pbVar8,
                                 pbVar2,plVar9,local_228._padding_);
        lVar10 = (longlong)iVar4;
        if (pbVar8 + lVar10 < (ulonglong)local_228._padding_) {
          lVar10 = local_228._padding_ - (longlong)pbVar8;
          *plVar9 = local_228._padding_;
        }
        local_228._padding_ = (longlong)(pbVar8 + lVar10);
        local_228._padding_ = *plVar9;
      }
      else {
        lVar10 = local_228._padding_ - (longlong)pbVar8;
        *plVar9 = local_228._padding_;
      }
      iVar4 = (int)lVar10;
      if (pbVar8 < (ulonglong)local_228._padding_) {
        local_228._padding_._0_4_ =
             ((uint)local_228._padding_ - (uint)*pbVar8 * local_228._padding_._4_4_) * 0x2c2c57ed +
             (uint)pbVar8[(int)local_228._padding_];
      }
    }
    *piVar13 = iVar4;
    pbVar8 = pbVar8 + 1;
    piVar13 = piVar13 + 1;
    plVar9 = plVar9 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (pbVar7 < pbVar1) {
    pbVar7 = pbVar7 + 0x20;
    do {
      local_228.lrm_last_ptr = local_228.lrm_last_ptr + 1;
      uVar12 = (int)pbVar7 - (int)local_228.lrm_base_ptr & 0x1f;
      piVar13 = local_228.window_len + uVar12;
      plVar9 = local_228.window_off + uVar12;
      if ((ulonglong)local_228._padding_ < pbVar7) {
        *piVar13 = 0;
      }
      else {
        if ((ulonglong)local_228._padding_ < pbVar7 + 0x100) {
          iVar4 = LRMSet_FindMatch((LRMSet *)local_228._padding_,(uint)local_228._padding_,pbVar7,
                                   pbVar2,plVar9,local_228._padding_);
          lVar14 = (longlong)iVar4;
          if (pbVar7 + lVar14 < (ulonglong)local_228._padding_) {
            lVar14 = local_228._padding_ - (longlong)pbVar7;
            *plVar9 = local_228._padding_;
          }
          local_228._padding_ = (longlong)(pbVar7 + lVar14);
          local_228._padding_ = *plVar9;
        }
        else {
          lVar14 = local_228._padding_ - (longlong)pbVar7;
          *plVar9 = local_228._padding_;
        }
        if (pbVar7 < (ulonglong)local_228._padding_) {
          local_228._padding_._0_4_ =
               ((uint)local_228._padding_ - (uint)*pbVar7 * local_228._padding_._4_4_) * 0x2c2c57ed
               + (uint)pbVar7[(int)local_228._padding_];
        }
        *piVar13 = (int)lVar14;
        if (0 < (int)lVar14) {
          lVar14 = *plVar9;
          iVar4 = 1;
          pbVar8 = pbVar7;
          do {
            pbVar8 = pbVar8 + -1;
            if ((pbVar7 + (-(longlong)iVar4 - lVar14) < local_228.lrm_window_base) ||
               (*pbVar8 != pbVar8[-lVar14])) break;
            uVar6 = uVar12 - iVar4 & 0x1f;
            if (local_228.window_len[uVar6] < *piVar13 + iVar4) {
              local_228.window_len[uVar6] = *piVar13 + iVar4;
              local_228.window_off[uVar6] = *plVar9;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x20);
        }
      }
      pbVar8 = pbVar7 + -0x1f;
      pbVar7 = pbVar7 + 1;
    } while (pbVar8 < pbVar1);
  }
  uVar12 = LRMScannerWindowed_FindMatchAndRoll(&local_228,pbVar1,pbVar2,&local_230);
  uVar11 = (ulonglong)(int)uVar12;
  if (0 < (int)uVar12) {
    if ((longlong)uVar11 < (longlong)param_4) {
      pbVar7 = pbVar1 + uVar11;
      do {
        uVar12 = (uint)uVar11;
        if (*pbVar7 != pbVar7[-local_230]) break;
        pbVar7 = pbVar7 + 1;
        uVar12 = uVar12 + 1;
        uVar11 = (ulonglong)uVar12;
      } while ((longlong)pbVar7 - (longlong)pbVar1 < (longlong)param_4);
    }
    if (param_4 <= (int)uVar12) {
      return local_230;
    }
  }
  return 0;
}

// LRMSet_FindMatch @ 14f38e760

int __cdecl
oo2::LRMSet_FindMatch
          (LRMSet *param_1,uint param_2,uchar *param_3,uchar *param_4,long64 *param_5,long64 param_6
          )

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong lVar11;
  long64 *plVar12;
  long64 *plVar13;
  uint *puVar14;
  char *pcVar15;
  int iVar16;
  int local_res8;
  long64 *local_40;
  longlong local_30;
  
  local_30 = *(longlong *)&(param_1->lrms).field_0x10;
  local_res8 = 0;
  local_40 = (long64 *)0x0;
  if (local_30 < 1) {
    *param_5 = 0;
    return 0;
  }
  plVar4 = *(longlong **)&param_1->lrms;
  plVar13 = param_5;
  do {
    lVar1 = *plVar4;
    if ((longlong)param_4 - (longlong)param_3 < 8) {
      iVar16 = 0;
    }
    else {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        lVar11 = *(longlong *)(lVar1 + 0x28) +
                 (ulonglong)((param_2 >> ((byte)*(undefined4 *)(lVar1 + 0x20) & 0x1f)) << 4) * 4;
        uVar2 = param_2 * -0x24d264a7;
        uVar7 = (uVar2 >> 0x17) + uVar2;
        uVar6 = uVar7 + (uVar2 >> 0x17) & 0x1ff;
        if ((*(uint *)(lVar11 + (ulonglong)(uVar6 >> 5) * 4) >> ((byte)uVar6 & 0x1f) &
             *(uint *)(lVar11 + (ulonglong)((uVar2 & 0x1ff) >> 5) * 4) >> ((byte)uVar2 & 0x1f) &
             *(uint *)(lVar11 + (ulonglong)((uVar7 & 0x1ff) >> 5) * 4) >> ((byte)uVar7 & 0x1f) & 1)
            == 0) {
          iVar16 = 0;
          goto LAB_14f38e9c2;
        }
      }
      uVar8 = (ulonglong)(param_2 >> ((byte)*(undefined4 *)(lVar1 + 0x68) & 0x3f));
      iVar3 = *(int *)(*(longlong *)(lVar1 + 0x50) + uVar8 * 4);
      if (*(longlong *)(lVar1 + 0x18) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(lVar1 + 8);
      }
      puVar14 = (uint *)(lVar11 + (longlong)iVar3 * 8);
      iVar16 = 0;
      uVar7 = *puVar14;
      if (uVar7 <= param_2) {
        iVar3 = *(int *)(*(longlong *)(lVar1 + 0x50) + uVar8 * 4 + 4) - iVar3;
        uVar8 = (ulonglong)iVar3;
        if (iVar3 != 0) {
          uVar9 = uVar8 >> 1;
          if (uVar9 != 0) {
            do {
              if (puVar14[uVar9 * 2] < param_2) {
                puVar14 = puVar14 + uVar9 * 2;
              }
              uVar8 = uVar8 - uVar9;
              uVar9 = uVar8 >> 1;
            } while (uVar9 != 0);
            uVar7 = *puVar14;
          }
          puVar14 = (uint *)((longlong)puVar14 + (ulonglong)(-(uint)(uVar7 < param_2) & 8));
          uVar7 = *puVar14;
        }
        pcVar15 = &DAT_00000007;
        iVar16 = 0;
        plVar13 = (long64 *)param_6;
        while (uVar7 == param_2) {
          lVar11 = (ulonglong)puVar14[1] + *(longlong *)(lVar1 + 0x40);
          if (((longlong)pcVar15 < (longlong)param_4 - (longlong)param_3) &&
             (pcVar15[(longlong)param_3] == pcVar15[lVar11])) {
            puVar5 = (ulonglong *)param_3;
            if (param_3 <= param_4 + -8) {
LAB_14f38e950:
              uVar8 = *(ulonglong *)((lVar11 - (longlong)param_3) + (longlong)puVar5) ^ *puVar5;
              if (uVar8 == 0) goto code_r0x00014f38e95d;
              uVar9 = 0;
              if (uVar8 != 0) {
                for (; (uVar8 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
              pcVar10 = (char *)(((uVar9 >> 3) - (longlong)param_3) + (longlong)puVar5);
              goto LAB_14f38e985;
            }
LAB_14f38e966:
            pcVar10 = (char *)((longlong)puVar5 - (longlong)param_3);
            for (; (puVar5 < param_4 &&
                   ((char)*puVar5 == *(char *)((longlong)puVar5 + (lVar11 - (longlong)param_3))));
                puVar5 = (ulonglong *)((longlong)puVar5 + 1)) {
              pcVar10 = pcVar10 + 1;
            }
LAB_14f38e985:
            if ((longlong)pcVar15 < (longlong)pcVar10) {
              pcVar15 = pcVar10 + -1;
              plVar12 = (long64 *)(param_3 + -lVar11);
              if (((longlong)plVar12 < (longlong)plVar13) &&
                 (iVar16 = (int)pcVar10, plVar13 = plVar12, 0xff < iVar16)) break;
            }
          }
          puVar14 = puVar14 + 2;
          uVar7 = *puVar14;
        }
      }
    }
LAB_14f38e9c2:
    plVar12 = plVar13;
    if (iVar16 <= local_res8) {
      iVar16 = local_res8;
      plVar12 = local_40;
    }
    plVar4 = plVar4 + 1;
    local_30 = local_30 + -1;
    local_res8 = iVar16;
    local_40 = plVar12;
    if (local_30 == 0) {
      *param_5 = (long64)plVar12;
      return iVar16;
    }
  } while( true );
code_r0x00014f38e95d:
  puVar5 = puVar5 + 1;
  if (param_4 + -8 < puVar5) goto LAB_14f38e966;
  goto LAB_14f38e950;
}

// LRMSet_GetBasePtr @ 14f38ea60

uchar * __cdecl oo2::LRMSet_GetBasePtr(LRMSet *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(param_1->lrms).field_0x10;
  if (lVar1 == 0) {
    return (uchar *)0x0;
  }
  return *(uchar **)(*(longlong *)(*(longlong *)&param_1->lrms + -8 + lVar1 * 8) + 0x38);
}

// LRMSet_GetEndPtr @ 14f38ea80

uchar * __cdecl oo2::LRMSet_GetEndPtr(LRMSet *param_1)

{
  if (*(longlong *)&(param_1->lrms).field_0x10 == 0) {
    return (uchar *)0x0;
  }
  return (uchar *)(*(longlong *)(**(longlong **)&param_1->lrms + 0x48) +
                  *(longlong *)(**(longlong **)&param_1->lrms + 0x38));
}

// LRM_AllocCascade @ 14f38eaa0

LRMCascade * __cdecl oo2::LRM_AllocCascade(void)

{
  LRMCascade *_Dst;
  
  _Dst = (*g_fp_OodleCore_Plugin_MallocAligned)(0xf8,0x10);
  if (_Dst == (LRMCascade *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0xf8);
  }
  if (_Dst != (LRMCascade *)0x0) {
    memset(_Dst,0,0xf8);
    _eh_vector_constructor_iterator_
              (_Dst,0x18,8,vector<oo2::LRM_*>::vector<oo2::LRM_*>,
               vector<oo2::LRM_*>::~vector<oo2::LRM_*>);
    _Dst->chunkSize = 0;
    _Dst->buffer = (uchar *)0x0;
    _Dst->bufSize = 0;
    _Dst->step = 0;
    _Dst->jumpBits_0 = 0;
    _Dst->jumpBits_inc = 0;
    _Dst->hash_length = 0;
    _Dst->numChunks = 0;
    _Dst->nextChunk = 0;
    return _Dst;
  }
  return (LRMCascade *)0x0;
}

// LRM_CascadeFillUntil @ 14f38eb80

void __cdecl oo2::LRM_CascadeFillUntil(LRMCascade *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  LRM *pLVar3;
  LRM *pLVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  LRMCascade *pLVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar1 = param_1->nextChunk;
  do {
    if (((longlong)param_2 <= (longlong)uVar1) || (uVar8 = 0, param_1->numChunks <= (longlong)uVar1)
       ) {
      return;
    }
    param_1->nextChunk = uVar1 + 1;
    lVar2 = param_1->chunkSize;
    pLVar3 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x70,0x10);
    if (pLVar3 == (LRM *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(0x70);
    }
    pLVar3->creation = 0;
    *(undefined8 *)&pLVar3->entries = 0;
    *(undefined8 *)&(pLVar3->entries).field_0x8 = 0;
    *(undefined8 *)&(pLVar3->entries).field_0x10 = 0;
    pLVar3->bloom_row_shift = 0;
    pLVar3->bloom_filter = (uint *)0x0;
    pLVar3->hash_length = 0;
    pLVar3->hash_mul_end = 0;
    pLVar3->chunkBasePtr = (uchar *)0x0;
    pLVar3->matchBasePtr = (uchar *)0x0;
    pLVar3->bufSize = 0;
    *(undefined8 *)&pLVar3->jumpIn = 0;
    *(undefined8 *)&(pLVar3->jumpIn).field_0x8 = 0;
    *(undefined8 *)&(pLVar3->jumpIn).field_0x10 = 0;
    pLVar3->jumpInShift = 0;
    LRM_Fill(pLVar3,param_1->buffer + uVar1 * lVar2,param_1->chunkSize,param_1->step,
             param_1->jumpBits_0,param_1->hash_length);
    pLVar7 = param_1;
    uVar6 = uVar8;
    uVar5 = uVar1;
    while ((uVar5 & 1) != 0) {
      uVar9 = (int)uVar6 + 1;
      if (7 < (int)uVar9) break;
      pLVar4 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x70,0x10);
      if (pLVar4 == (LRM *)0x0) {
                    /* WARNING: Subroutine does not return */
        Oodle_Core_Malloc_Failed(0x70);
      }
      pLVar4->creation = 0;
      *(undefined8 *)&pLVar4->entries = 0;
      *(undefined8 *)&(pLVar4->entries).field_0x8 = 0;
      *(undefined8 *)&(pLVar4->entries).field_0x10 = 0;
      pLVar4->bloom_row_shift = 0;
      pLVar4->bloom_filter = (uint *)0x0;
      pLVar4->hash_length = 0;
      pLVar4->hash_mul_end = 0;
      pLVar4->chunkBasePtr = (uchar *)0x0;
      pLVar4->matchBasePtr = (uchar *)0x0;
      pLVar4->bufSize = 0;
      *(undefined8 *)&pLVar4->jumpIn = 0;
      *(undefined8 *)&(pLVar4->jumpIn).field_0x8 = 0;
      *(undefined8 *)&(pLVar4->jumpIn).field_0x10 = 0;
      pLVar4->jumpInShift = 0;
      LRM_FillMerge(pLVar4,*(LRM **)(*(longlong *)pLVar7->lrms + -8 +
                                    ((longlong)uVar1 >> ((byte)uVar6 & 0x3f)) * 8),pLVar3,
                    (int)uVar6 * param_1->jumpBits_inc + param_1->jumpBits_0);
      if (pLVar3->bloom_filter != (uint *)0x0) {
        (*g_fp_OodleCore_Plugin_Free)(pLVar3->bloom_filter);
        pLVar3->bloom_filter = (uint *)0x0;
      }
      *(undefined8 *)&(pLVar3->jumpIn).field_0x10 = 0;
      if (*(void **)&pLVar3->jumpIn != (void *)0x0) {
        (*g_fp_OodleCore_Plugin_Free)(*(void **)&pLVar3->jumpIn);
      }
      *(undefined8 *)&pLVar3->jumpIn = 0;
      *(undefined8 *)&(pLVar3->jumpIn).field_0x8 = 0;
      *(undefined8 *)&(pLVar3->entries).field_0x10 = 0;
      if (*(void **)&pLVar3->entries != (void *)0x0) {
        (*g_fp_OodleCore_Plugin_Free)(*(void **)&pLVar3->entries);
      }
      *(undefined8 *)&pLVar3->entries = 0;
      *(undefined8 *)&(pLVar3->entries).field_0x8 = 0;
      (*g_fp_OodleCore_Plugin_Free)(pLVar3);
      uVar6 = (ulonglong)uVar9;
      uVar8 = uVar8 + 1;
      pLVar7 = (LRMCascade *)(pLVar7->lrms + 1);
      pLVar3 = pLVar4;
      uVar5 = (longlong)uVar1 >> ((byte)uVar9 & 0x3f);
    }
    *(LRM **)(*(longlong *)(param_1->lrms + uVar8) + ((longlong)uVar1 >> ((byte)uVar6 & 0x3f)) * 8)
         = pLVar3;
    uVar1 = param_1->nextChunk;
  } while( true );
}

// LRM_CascadeGetChunkIndex @ 14f38ee00

int __cdecl oo2::LRM_CascadeGetChunkIndex(LRMCascade *param_1,uchar *param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2 - (longlong)param_1->buffer;
  if (lVar1 < 1) {
    return 0;
  }
  if (param_1->bufSize <= lVar1) {
    lVar1 = param_1->bufSize;
  }
  return (int)(lVar1 / param_1->chunkSize);
}

// LRM_CascadeGetChunkIndex_Align @ 14f38ee40

int __cdecl oo2::LRM_CascadeGetChunkIndex_Align(LRMCascade *param_1,uchar *param_2,uchar *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_2 - (longlong)param_1->buffer;
  if (lVar4 < 1) {
    return 0;
  }
  lVar1 = param_1->chunkSize;
  lVar5 = (longlong)param_3 - (longlong)param_1->buffer;
  lVar2 = (lVar1 + -1 + lVar4) / lVar1;
  lVar3 = lVar1 * lVar2;
  if ((lVar3 - lVar5 != 0 && lVar5 <= lVar3) ||
     (lVar3 - param_1->bufSize != 0 && param_1->bufSize <= lVar3)) {
    if (param_1->bufSize <= lVar4) {
      lVar4 = param_1->bufSize;
    }
    lVar2 = lVar4 / lVar1;
  }
  return (int)lVar2;
}

// LRM_CascadeGetSet @ 14f38eeb0

void __cdecl oo2::LRM_CascadeGetSet(LRMCascade *param_1,LRMSet *param_2,uchar *param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1->buffer;
  if (lVar1 < 1) {
    LRM_CascadeGetSetByChunkIndex(param_1,param_2,0);
    return;
  }
  if (param_1->bufSize <= lVar1) {
    lVar1 = param_1->bufSize;
  }
  LRM_CascadeGetSetByChunkIndex(param_1,param_2,(int)(lVar1 / param_1->chunkSize));
  return;
}

// LRM_CascadeGetSetByChunkIndex @ 14f38ef00

void __cdecl oo2::LRM_CascadeGetSetByChunkIndex(LRMCascade *param_1,LRMSet *param_2,int param_3)

{
  ulonglong uVar1;
  ulong64 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  LRM **ppLVar7;
  undefined8 *puVar8;
  longlong lVar9;
  LRMCascade *pLVar10;
  
  if (param_3 != 0) {
    if ((*(longlong *)&param_1->lrms[0].field_0x10 == 0) &&
       (iVar6 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x450,
                                   "oo2::LRM_CascadeGetSetByChunkIndex","! casc->lrms[0].empty()"),
       iVar6 != 0)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar9 = 0;
    pLVar10 = param_1;
    do {
      if (param_3 == 0) {
        return;
      }
      if ((param_3 & 1U) != 0) {
        uVar2 = *(ulong64 *)&(param_2->lrms).field_0x10;
        uVar1 = uVar2 + 1;
        uVar3 = *(undefined8 *)(*(longlong *)pLVar10->lrms + -8 + (longlong)param_3 * 8);
        if (*(ulonglong *)&(param_2->lrms).field_0x8 < uVar1) {
          ppLVar7 = vector_storage<oo2::LRM_*>::makefit1
                              ((vector_storage<oo2::LRM_*> *)param_2,uVar1,uVar2);
          puVar8 = (undefined8 *)(*(longlong *)&param_2->lrms + uVar2 * 8);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = uVar3;
          }
          *(ulonglong *)&(param_2->lrms).field_0x10 = uVar1;
          if (ppLVar7 != (LRM **)0x0) {
            (*g_fp_OodleCore_Plugin_Free)(ppLVar7);
          }
        }
        else {
          lVar4 = *(longlong *)&param_2->lrms;
          *(ulonglong *)&(param_2->lrms).field_0x10 = uVar1;
          puVar8 = (undefined8 *)(lVar4 + uVar2 * 8);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = uVar3;
          }
        }
      }
      param_3 = param_3 >> 1;
      lVar9 = lVar9 + 1;
      pLVar10 = (LRMCascade *)(pLVar10->lrms + 1);
    } while (lVar9 < 8);
    if ((param_3 != 0) && (iVar6 = param_3 * 2 + -3, lVar9 = (longlong)iVar6, -1 < iVar6)) {
      do {
        uVar2 = *(ulong64 *)&(param_2->lrms).field_0x10;
        uVar1 = uVar2 + 1;
        uVar3 = *(undefined8 *)(*(longlong *)(param_1->lrms + 7) + lVar9 * 8);
        if (*(ulonglong *)&(param_2->lrms).field_0x8 < uVar1) {
          ppLVar7 = vector_storage<oo2::LRM_*>::makefit1
                              ((vector_storage<oo2::LRM_*> *)param_2,uVar1,uVar2);
          puVar8 = (undefined8 *)(*(longlong *)&param_2->lrms + uVar2 * 8);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = uVar3;
          }
          *(ulonglong *)&(param_2->lrms).field_0x10 = uVar1;
          if (ppLVar7 != (LRM **)0x0) {
            (*g_fp_OodleCore_Plugin_Free)(ppLVar7);
          }
        }
        else {
          lVar4 = *(longlong *)&param_2->lrms;
          *(ulonglong *)&(param_2->lrms).field_0x10 = uVar1;
          puVar8 = (undefined8 *)(lVar4 + uVar2 * 8);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = uVar3;
          }
        }
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
  }
  return;
}

// LRM_CascadeGetSet_Align @ 14f38f080

void __cdecl
oo2::LRM_CascadeGetSet_Align(LRMCascade *param_1,LRMSet *param_2,uchar *param_3,uchar *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_3 - (longlong)param_1->buffer;
  if (lVar4 < 1) {
    LRM_CascadeGetSetByChunkIndex(param_1,param_2,0);
    return;
  }
  lVar1 = param_1->chunkSize;
  lVar5 = (longlong)param_4 - (longlong)param_1->buffer;
  lVar2 = (lVar1 + -1 + lVar4) / lVar1;
  lVar3 = lVar1 * lVar2;
  if ((lVar3 - lVar5 != 0 && lVar5 <= lVar3) ||
     (lVar3 - param_1->bufSize != 0 && param_1->bufSize <= lVar3)) {
    if (param_1->bufSize <= lVar4) {
      lVar4 = param_1->bufSize;
    }
    lVar2 = lVar4 / lVar1;
  }
  LRM_CascadeGetSetByChunkIndex(param_1,param_2,(int)lVar2);
  return;
}

// LRM_CascadeGetSet_Align_UpdateIncremental @ 14f38f100

void __cdecl
oo2::LRM_CascadeGetSet_Align_UpdateIncremental
          (LRMCascade *param_1,LRMSet *param_2,uchar *param_3,uchar *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_3 - (longlong)param_1->buffer;
  if (lVar4 < 1) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1->chunkSize;
    lVar5 = (longlong)param_4 - (longlong)param_1->buffer;
    uVar2 = (lVar1 + -1 + lVar4) / lVar1;
    lVar3 = lVar1 * uVar2;
    if ((lVar3 - lVar5 != 0 && lVar5 <= lVar3) ||
       (lVar3 - param_1->bufSize != 0 && param_1->bufSize <= lVar3)) {
      if (param_1->bufSize <= lVar4) {
        lVar4 = param_1->bufSize;
      }
      uVar2 = lVar4 / lVar1 & 0xffffffff;
    }
  }
  LRM_CascadeFillUntil(param_1,(int)uVar2);
  LRM_CascadeGetSetByChunkIndex(param_1,param_2,(int)uVar2);
  return;
}

// LRM_CascadeGetSet_UpdateIncremental @ 14f38f1a0

void __cdecl
oo2::LRM_CascadeGetSet_UpdateIncremental(LRMCascade *param_1,LRMSet *param_2,uchar *param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3 - (longlong)param_1->buffer;
  if (lVar2 < 1) {
    iVar1 = 0;
  }
  else {
    if (param_1->bufSize <= lVar2) {
      lVar2 = param_1->bufSize;
    }
    iVar1 = (int)(lVar2 / param_1->chunkSize);
  }
  LRM_CascadeFillUntil(param_1,iVar1);
  LRM_CascadeGetSetByChunkIndex(param_1,param_2,iVar1);
  return;
}

// LRM_Create @ 14f38f220

LRM * __cdecl oo2::LRM_Create(uchar *param_1,long64 param_2,int param_3,int param_4,int param_5)

{
  LRM *pLVar1;
  
  pLVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x70,0x10);
  if (pLVar1 == (LRM *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x70);
  }
  pLVar1->creation = 0;
  *(undefined8 *)&pLVar1->entries = 0;
  *(undefined8 *)&(pLVar1->entries).field_0x8 = 0;
  *(undefined8 *)&(pLVar1->entries).field_0x10 = 0;
  pLVar1->bloom_row_shift = 0;
  pLVar1->bloom_filter = (uint *)0x0;
  pLVar1->hash_length = 0;
  pLVar1->hash_mul_end = 0;
  pLVar1->chunkBasePtr = (uchar *)0x0;
  pLVar1->matchBasePtr = (uchar *)0x0;
  pLVar1->bufSize = 0;
  *(undefined8 *)&pLVar1->jumpIn = 0;
  *(undefined8 *)&(pLVar1->jumpIn).field_0x8 = 0;
  *(undefined8 *)&(pLVar1->jumpIn).field_0x10 = 0;
  pLVar1->jumpInShift = 0;
  LRM_Fill(pLVar1,param_1,param_2,param_3,param_4,param_5);
  return pLVar1;
}

// LRM_CreateCascade @ 14f38f300

LRMCascade * __cdecl
oo2::LRM_CreateCascade
          (uchar *param_1,long64 param_2,int param_3,int param_4,int param_5,long64 param_6,
          int param_7)

{
  bool bVar1;
  LRMCascade *pLVar2;
  ulong64 uVar3;
  
  pLVar2 = LRM_AllocCascade();
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = (*fp_ThreadProfiler_Push)("oo2::LRM_FillCascade",0);
  }
  LRM_FillCascadeSetup(pLVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  do {
    bVar1 = LRM_FillCascadeIncrement(pLVar2);
  } while (bVar1);
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar3);
  }
  return pLVar2;
}

// LRM_CreateCascadeIncremental @ 14f38f400

LRMCascade * __cdecl
oo2::LRM_CreateCascadeIncremental
          (uchar *param_1,long64 param_2,int param_3,int param_4,int param_5,long64 param_6,
          int param_7)

{
  LRMCascade *pLVar1;
  
  pLVar1 = LRM_AllocCascade();
  LRM_FillCascadeSetup(pLVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return pLVar1;
}

// LRM_CreateMerge @ 14f38f4a0

LRM * __cdecl oo2::LRM_CreateMerge(LRM *param_1,LRM *param_2,int param_3)

{
  LRM *pLVar1;
  
  pLVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x70,0x10);
  if (pLVar1 == (LRM *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x70);
  }
  pLVar1->creation = 0;
  *(undefined8 *)&pLVar1->entries = 0;
  *(undefined8 *)&(pLVar1->entries).field_0x8 = 0;
  *(undefined8 *)&(pLVar1->entries).field_0x10 = 0;
  pLVar1->bloom_row_shift = 0;
  pLVar1->bloom_filter = (uint *)0x0;
  pLVar1->hash_length = 0;
  pLVar1->hash_mul_end = 0;
  pLVar1->chunkBasePtr = (uchar *)0x0;
  pLVar1->matchBasePtr = (uchar *)0x0;
  pLVar1->bufSize = 0;
  *(undefined8 *)&pLVar1->jumpIn = 0;
  *(undefined8 *)&(pLVar1->jumpIn).field_0x8 = 0;
  *(undefined8 *)&(pLVar1->jumpIn).field_0x10 = 0;
  pLVar1->jumpInShift = 0;
  LRM_FillMerge(pLVar1,param_1,param_2,param_3);
  return pLVar1;
}

// LRM_DeDupe @ 14f38f560

void __cdecl oo2::LRM_DeDupe(LRM *param_1)

{
  vector<oo2::LRMEntry> *this;
  undefined1 *puVar1;
  uint uVar2;
  LRMEntry LVar3;
  ulonglong uVar4;
  void *pvVar5;
  LRMEntry *pLVar6;
  LRMEntry *pLVar7;
  longlong lVar8;
  int iVar9;
  ulong64 uVar10;
  longlong lVar11;
  ulong64 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  LRMEntry *pLVar17;
  vector_storage<oo2::LRMEntry> local_20;
  ulong64 local_10;
  
  this = &param_1->entries;
  pLVar17 = (LRMEntry *)0x0;
  pLVar6 = pLVar17;
  if (*(longlong *)&(param_1->entries).field_0x10 != 0) {
    pLVar6 = *(LRMEntry **)&this->field_0x0;
  }
  iVar13 = (int)*(undefined8 *)&(param_1->entries).field_0x10;
  if (0x20 < iVar13) {
    iVar9 = 1;
    lVar11 = (longlong)iVar13;
    if (1 < lVar11) {
      lVar8 = 1;
      do {
        if (pLVar6[lVar8].hash == pLVar6[lVar8 + -1].hash) break;
        iVar9 = iVar9 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar11);
      if (iVar9 == iVar13) {
        return;
      }
    }
    iVar16 = iVar9 + -1;
    lVar15 = (longlong)iVar16;
    lVar8 = (longlong)iVar9;
    pLVar7 = pLVar6 + lVar15;
    do {
      uVar2 = pLVar7->hash;
      iVar14 = iVar13;
      if (iVar9 + 0x10 <= iVar13) {
        iVar14 = iVar9 + 0x10;
      }
      for (; (iVar9 < iVar14 && (pLVar6[lVar8].hash == uVar2)); lVar8 = lVar8 + 1) {
        iVar16 = iVar16 + 1;
        lVar15 = lVar15 + 1;
        pLVar6[lVar15] = pLVar6[lVar8];
        iVar9 = iVar9 + 1;
      }
      for (; (lVar8 < lVar11 && (pLVar6[lVar8].hash == uVar2)); lVar8 = lVar8 + 1) {
        iVar9 = iVar9 + 1;
      }
      if (iVar9 == iVar13) break;
      lVar15 = lVar15 + 1;
      LVar3 = pLVar6[lVar8];
      pLVar7 = pLVar6 + lVar15;
      *pLVar7 = LVar3;
      while( true ) {
        lVar8 = lVar8 + 1;
        iVar9 = iVar9 + 1;
        iVar16 = iVar16 + 1;
        if ((lVar11 <= lVar8) || (pLVar6[lVar8].hash == LVar3.hash)) break;
        lVar15 = lVar15 + 1;
        LVar3 = pLVar6[lVar8];
        pLVar7 = pLVar6 + lVar15;
        *pLVar7 = LVar3;
      }
    } while (iVar9 != iVar13);
    uVar12 = (ulong64)(iVar16 + 1);
    uVar4 = *(ulonglong *)&(param_1->entries).field_0x10;
    if (uVar12 < uVar4) {
      *(ulong64 *)&(param_1->entries).field_0x10 = uVar12;
    }
    else {
      if ((*(ulonglong *)&(param_1->entries).field_0x8 < uVar12) &&
         (pLVar6 = vector_storage<oo2::LRMEntry>::makefit1
                             ((vector_storage<oo2::LRMEntry> *)this,uVar12,uVar4),
         pLVar6 != (LRMEntry *)0x0)) {
        (*g_fp_OodleCore_Plugin_Free)(pLVar6);
      }
      puVar1 = &(param_1->entries).field_0x10;
      *(ulong64 *)puVar1 = *(longlong *)puVar1 + (uVar12 - uVar4);
      uVar12 = *(ulong64 *)&(param_1->entries).field_0x10;
    }
    if (*(ulong64 *)&(param_1->entries).field_0x8 != uVar12) {
      local_20.m_begin = (LRMEntry *)0x0;
      local_20.m_capacity = 0;
      local_10 = 0;
      lVar11 = *(longlong *)&this->field_0x0;
      if (uVar12 != 0) {
        pLVar7 = vector_storage<oo2::LRMEntry>::makefit1(&local_20,uVar12,0);
        pLVar17 = local_20.m_begin;
        pLVar6 = local_20.m_begin + local_10;
        lVar11 = lVar11 - (longlong)pLVar6;
        uVar10 = uVar12;
        do {
          if (pLVar6 != (LRMEntry *)0x0) {
            *pLVar6 = *(LRMEntry *)(lVar11 + (longlong)pLVar6);
          }
          pLVar6 = pLVar6 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        uVar12 = uVar12 + local_10;
        local_10 = uVar12;
        if (pLVar7 != (LRMEntry *)0x0) {
          (*g_fp_OodleCore_Plugin_Free)(pLVar7);
        }
      }
      *(ulong64 *)&(param_1->entries).field_0x10 = uVar12;
      pvVar5 = *(void **)&this->field_0x0;
      *(LRMEntry **)&this->field_0x0 = pLVar17;
      *(ulong64 *)&(param_1->entries).field_0x8 = local_20.m_capacity;
      if (pvVar5 != (void *)0x0) {
        (*g_fp_OodleCore_Plugin_Free)(pvVar5);
      }
    }
  }
  return;
}

// LRM_Destroy @ 14f38f7a0

void __cdecl oo2::LRM_Destroy(LRM *param_1)

{
  if (param_1->bloom_filter != (uint *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(param_1->bloom_filter);
    param_1->bloom_filter = (uint *)0x0;
  }
  *(undefined8 *)&(param_1->jumpIn).field_0x10 = 0;
  if (*(void **)&param_1->jumpIn != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)&param_1->jumpIn);
  }
  *(undefined8 *)&param_1->jumpIn = 0;
  *(undefined8 *)&(param_1->jumpIn).field_0x8 = 0;
  *(undefined8 *)&(param_1->entries).field_0x10 = 0;
  if (*(void **)&param_1->entries != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)&param_1->entries);
  }
  *(undefined8 *)&param_1->entries = 0;
  *(undefined8 *)&(param_1->entries).field_0x8 = 0;
                    /* WARNING: Could not recover jumptable at 0x00014f38f820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// LRM_DestroyCascade @ 14f38f840

void __cdecl oo2::LRM_DestroyCascade(LRMCascade *param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)&param_1->lrms[0].field_0x10;
  lVar2 = 8;
  do {
    lVar4 = 0;
    if (0 < *plVar3) {
      do {
        pvVar1 = *(void **)(plVar3[-2] + lVar4 * 8);
        if (pvVar1 != (void *)0x0) {
          if (*(void **)((longlong)pvVar1 + 0x28) != (void *)0x0) {
            (*g_fp_OodleCore_Plugin_Free)(*(void **)((longlong)pvVar1 + 0x28));
            *(undefined8 *)((longlong)pvVar1 + 0x28) = 0;
          }
          *(undefined8 *)((longlong)pvVar1 + 0x60) = 0;
          if (*(void **)((longlong)pvVar1 + 0x50) != (void *)0x0) {
            (*g_fp_OodleCore_Plugin_Free)(*(void **)((longlong)pvVar1 + 0x50));
          }
          *(undefined8 *)((longlong)pvVar1 + 0x50) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x58) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
          if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
            (*g_fp_OodleCore_Plugin_Free)(*(void **)((longlong)pvVar1 + 8));
          }
          *(undefined8 *)((longlong)pvVar1 + 8) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
          (*g_fp_OodleCore_Plugin_Free)(pvVar1);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *plVar3);
    }
    plVar3 = plVar3 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  _eh_vector_destructor_iterator_(param_1,0x18,8,vector<oo2::LRM_*>::~vector<oo2::LRM_*>);
                    /* WARNING: Could not recover jumptable at 0x00014f38f92e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// LRM_Fill @ 14f38f940

LRM * __cdecl
oo2::LRM_Fill(LRM *param_1,uchar *param_2,long64 param_3,int param_4,int param_5,int param_6)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  LRM *pLVar6;
  ulonglong uVar7;
  LRMEntry *pLVar8;
  LRMEntry *pLVar9;
  uint uVar10;
  LRMEntry *pLVar11;
  longlong lVar12;
  LRMEntry *pLVar13;
  LRMEntry local_res10;
  ulong64 local_res18;
  
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    local_res18 = 0xffffffffffffffff;
  }
  else {
    local_res18 = (*fp_ThreadProfiler_Push)("oo2::LRM_Fill",0);
  }
  if ((param_3 < param_6) &&
     (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x173,
                                 "oo2::LRM_Fill","bufSize >= hash_length"), iVar4 != 0)) {
    pcVar3 = (code *)swi(3);
    pLVar6 = (LRM *)(*pcVar3)();
    return pLVar6;
  }
  if ((param_6 < 8) &&
     (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x174,
                                 "oo2::LRM_Fill","hash_length >= LRM_MIN_MATCH_LEN"), iVar4 != 0)) {
    pcVar3 = (code *)swi(3);
    pLVar6 = (LRM *)(*pcVar3)();
    return pLVar6;
  }
  if ((0x40000000 < param_3) &&
     (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x178,
                                 "oo2::LRM_Fill","bufSize <= (1<<30)"), iVar4 != 0)) {
    pcVar3 = (code *)swi(3);
    pLVar6 = (LRM *)(*pcVar3)();
    return pLVar6;
  }
  lVar12 = param_3 - param_6;
  param_1->chunkBasePtr = param_2;
  param_1->matchBasePtr = param_2;
  param_1->bufSize = param_3;
  param_1->hash_length = param_6;
  uVar10 = 1;
  iVar4 = param_6;
  while (iVar4 = iVar4 + -1, 0 < iVar4) {
    uVar10 = uVar10 * 0x2c2c57ed;
  }
  param_1->hash_mul_end = uVar10;
  uVar7 = lVar12 / (longlong)param_4 + 2;
  uVar2 = *(ulonglong *)&(param_1->entries).field_0x10;
  if (uVar7 < uVar2) {
    *(ulonglong *)&(param_1->entries).field_0x10 = uVar7;
  }
  else {
    if ((*(ulonglong *)&(param_1->entries).field_0x8 < uVar7) &&
       (pLVar8 = vector_storage<oo2::LRMEntry>::makefit1
                           ((vector_storage<oo2::LRMEntry> *)&param_1->entries,uVar7,uVar2),
       pLVar8 != (LRMEntry *)0x0)) {
      (*g_fp_OodleCore_Plugin_Free)(pLVar8);
    }
    puVar1 = &(param_1->entries).field_0x10;
    *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar7 - uVar2);
    uVar7 = *(ulonglong *)&(param_1->entries).field_0x10;
  }
  pLVar9 = (LRMEntry *)0x0;
  iVar4 = 0;
  pLVar8 = pLVar9;
  if (uVar7 != 0) {
    pLVar8 = *(LRMEntry **)&(param_1->entries).field_0x0;
  }
  uVar10 = 0xffffffff;
  pLVar11 = pLVar9;
  pLVar13 = pLVar8;
  if (-1 < lVar12) {
    do {
      uVar5 = LRM_InitialHash(param_2 + (longlong)&pLVar11->hash,param_6);
      if (uVar5 != uVar10) {
        pLVar13->hash = uVar5;
        pLVar13->pos32 = (uint)pLVar11;
        pLVar9 = (LRMEntry *)(ulonglong)((int)pLVar9 + 1);
        pLVar13 = pLVar13 + 1;
        uVar10 = uVar5;
      }
      iVar4 = (int)pLVar9;
      pLVar11 = (LRMEntry *)((longlong)&pLVar11->hash + (longlong)param_4);
    } while ((longlong)pLVar11 <= lVar12);
    uVar7 = *(ulonglong *)&(param_1->entries).field_0x10;
  }
  uVar2 = (longlong)iVar4 + 1;
  if (uVar2 < uVar7) {
    *(ulonglong *)&(param_1->entries).field_0x10 = uVar2;
  }
  else {
    if ((*(ulonglong *)&(param_1->entries).field_0x8 < uVar2) &&
       (pLVar9 = vector_storage<oo2::LRMEntry>::makefit1
                           ((vector_storage<oo2::LRMEntry> *)&param_1->entries,uVar2,uVar7),
       pLVar9 != (LRMEntry *)0x0)) {
      (*g_fp_OodleCore_Plugin_Free)(pLVar9);
    }
    puVar1 = &(param_1->entries).field_0x10;
    *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar2 - uVar7);
  }
  pLVar9 = pLVar8 + iVar4;
  stdsort<oo2::LRMEntry_*,oo2::stdless<oo2::LRMEntry>_>(pLVar8,pLVar9,param_6._0_1_);
  local_res10.pos32 = pLVar9[-1].pos32;
  local_res10.hash = 0xffffffff;
  *pLVar9 = local_res10;
  LRM_DeDupe(param_1);
  LRM_MakeJump(param_1,param_5);
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(local_res18);
  }
  return param_1;
}

// LRM_FillCascade @ 14f38fc00

void __cdecl
oo2::LRM_FillCascade
          (LRMCascade *param_1,uchar *param_2,long64 param_3,int param_4,int param_5,int param_6,
          long64 param_7,int param_8)

{
  bool bVar1;
  ulong64 uVar2;
  
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = (*fp_ThreadProfiler_Push)("oo2::LRM_FillCascade",0);
  }
  LRM_FillCascadeSetup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  do {
    bVar1 = LRM_FillCascadeIncrement(param_1);
  } while (bVar1);
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar2);
  }
  return;
}

// LRM_FillCascadeIncrement @ 14f38fce0

bool __cdecl oo2::LRM_FillCascadeIncrement(LRMCascade *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  LRM *pLVar4;
  LRM *pLVar5;
  ulonglong uVar6;
  LRMCascade *pLVar7;
  int iVar8;
  
  uVar1 = param_1->nextChunk;
  if (param_1->numChunks <= (longlong)uVar1) {
    return false;
  }
  param_1->nextChunk = uVar1 + 1;
  lVar2 = param_1->chunkSize;
  pLVar4 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x70,0x10);
  if (pLVar4 != (LRM *)0x0) {
    pLVar4->creation = 0;
    *(undefined8 *)&pLVar4->entries = 0;
    *(undefined8 *)&(pLVar4->entries).field_0x8 = 0;
    *(undefined8 *)&(pLVar4->entries).field_0x10 = 0;
    pLVar4->bloom_row_shift = 0;
    pLVar4->bloom_filter = (uint *)0x0;
    pLVar4->hash_length = 0;
    pLVar4->hash_mul_end = 0;
    pLVar4->chunkBasePtr = (uchar *)0x0;
    pLVar4->matchBasePtr = (uchar *)0x0;
    pLVar4->bufSize = 0;
    *(undefined8 *)&pLVar4->jumpIn = 0;
    *(undefined8 *)&(pLVar4->jumpIn).field_0x8 = 0;
    *(undefined8 *)&(pLVar4->jumpIn).field_0x10 = 0;
    pLVar4->jumpInShift = 0;
    LRM_Fill(pLVar4,param_1->buffer + uVar1 * lVar2,param_1->chunkSize,param_1->step,
             param_1->jumpBits_0,param_1->hash_length);
    pLVar7 = param_1;
    iVar3 = 0;
    uVar6 = uVar1;
    while (((uVar6 & 1) != 0 && (iVar8 = iVar3 + 1, iVar8 < 8))) {
      pLVar5 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x70,0x10);
      if (pLVar5 == (LRM *)0x0) {
                    /* WARNING: Subroutine does not return */
        Oodle_Core_Malloc_Failed(0x70);
      }
      pLVar5->creation = 0;
      *(undefined8 *)&pLVar5->entries = 0;
      *(undefined8 *)&(pLVar5->entries).field_0x8 = 0;
      *(undefined8 *)&(pLVar5->entries).field_0x10 = 0;
      pLVar5->bloom_row_shift = 0;
      pLVar5->bloom_filter = (uint *)0x0;
      pLVar5->hash_length = 0;
      pLVar5->hash_mul_end = 0;
      pLVar5->chunkBasePtr = (uchar *)0x0;
      pLVar5->matchBasePtr = (uchar *)0x0;
      pLVar5->bufSize = 0;
      *(undefined8 *)&pLVar5->jumpIn = 0;
      *(undefined8 *)&(pLVar5->jumpIn).field_0x8 = 0;
      *(undefined8 *)&(pLVar5->jumpIn).field_0x10 = 0;
      pLVar5->jumpInShift = 0;
      LRM_FillMerge(pLVar5,*(LRM **)(*(longlong *)pLVar7->lrms + -8 +
                                    ((longlong)uVar1 >> ((byte)iVar3 & 0x3f)) * 8),pLVar4,
                    iVar3 * param_1->jumpBits_inc + param_1->jumpBits_0);
      LRM_Destroy(pLVar4);
      uVar6 = (longlong)uVar1 >> ((byte)iVar8 & 0x3f);
      pLVar7 = (LRMCascade *)(pLVar7->lrms + 1);
      pLVar4 = pLVar5;
      iVar3 = iVar8;
    }
    *(LRM **)(*(longlong *)(param_1->lrms + iVar3) + ((longlong)uVar1 >> ((byte)iVar3 & 0x3f)) * 8)
         = pLVar4;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  Oodle_Core_Malloc_Failed(0x70);
}

// LRM_FillCascadeSetup @ 14f38ff00

void __cdecl
oo2::LRM_FillCascadeSetup
          (LRMCascade *param_1,uchar *param_2,long64 param_3,int param_4,int param_5,int param_6,
          long64 param_7,int param_8)

{
  LRM **ppLVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  LRMCascade *this;
  uint uVar5;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar6;
  
  param_1->buffer = param_2;
  param_1->bufSize = param_3;
  param_1->chunkSize = (longlong)(int)param_7;
  param_1->numChunks = param_3 / (longlong)(int)param_7;
  param_1->nextChunk = 0;
  this = param_1;
  uVar6 = 0;
  do {
    *(undefined8 *)&this->lrms[0].field_0x10 = 0;
    uVar7 = param_1->numChunks >> ((byte)uVar6 & 0x3f);
    if (*(ulonglong *)&this->lrms[0].field_0x8 < uVar7) {
      ppLVar1 = vector_storage<oo2::LRM_*>::makefit1((vector_storage<oo2::LRM_*> *)this,uVar7,0);
      lVar8 = *(longlong *)&this->lrms[0].field_0x10;
      puVar2 = (undefined8 *)(*(longlong *)this->lrms + lVar8 * 8);
      uVar3 = uVar7;
      if (uVar7 != 0) {
        do {
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
          }
          puVar2 = puVar2 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        lVar8 = *(longlong *)&this->lrms[0].field_0x10;
      }
      *(ulonglong *)&this->lrms[0].field_0x10 = lVar8 + uVar7;
      if (ppLVar1 != (LRM **)0x0) {
        (*g_fp_OodleCore_Plugin_Free)(ppLVar1);
      }
    }
    else {
      puVar2 = *(undefined8 **)this->lrms;
      uVar3 = 0;
      uVar4 = uVar7;
      if (uVar7 != 0) {
        do {
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
          }
          puVar2 = puVar2 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        uVar3 = *(ulonglong *)&this->lrms[0].field_0x10;
      }
      *(ulonglong *)&this->lrms[0].field_0x10 = uVar3 + uVar7;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    this = (LRMCascade *)(this->lrms + 1);
  } while ((int)uVar5 < 8);
  param_1->jumpBits_0 = param_5;
  param_1->jumpBits_inc = param_6;
  param_1->hash_length = param_8;
  param_1->step = param_4;
  return;
}

// LRM_FillMerge @ 14f390060

LRM * __cdecl oo2::LRM_FillMerge(LRM *param_1,LRM *param_2,LRM *param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  uchar *puVar4;
  ulong64 uVar5;
  LRMEntry *pLVar6;
  ulong64 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 *puVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  bool bVar27;
  ulonglong uVar18;
  
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar5 = (*fp_ThreadProfiler_Push)("oo2::LRM_FillMerge",0);
  }
  param_1->hash_length = param_2->hash_length;
  param_1->hash_mul_end = param_2->hash_mul_end;
  puVar4 = param_2->chunkBasePtr;
  lVar24 = (longlong)param_3->chunkBasePtr - (longlong)puVar4;
  param_1->chunkBasePtr = puVar4;
  lVar8 = param_3->bufSize + lVar24;
  param_1->bufSize = lVar8;
  if (lVar8 < 0x80000000) {
    param_1->matchBasePtr = puVar4;
    uVar12 = 0;
    uVar17 = uVar12;
    if (*(longlong *)&(param_2->entries).field_0x10 != 0) {
      uVar17 = *(ulonglong *)&param_2->entries;
    }
    uVar15 = uVar12;
    if (*(longlong *)&(param_3->entries).field_0x10 != 0) {
      uVar15 = *(ulonglong *)&param_3->entries;
    }
    iVar20 = (int)*(undefined8 *)&(param_3->entries).field_0x10 + -1;
    iVar23 = (int)*(undefined8 *)&(param_2->entries).field_0x10;
    uVar10 = (ulonglong)(iVar23 + iVar20);
    uVar22 = *(ulonglong *)&(param_1->entries).field_0x10;
    if (uVar10 < uVar22) {
      *(ulonglong *)&(param_1->entries).field_0x10 = uVar10;
    }
    else {
      if ((*(ulonglong *)&(param_1->entries).field_0x8 < uVar10) &&
         (pLVar6 = vector_storage<oo2::LRMEntry>::makefit1
                             ((vector_storage<oo2::LRMEntry> *)&param_1->entries,uVar10,uVar22),
         pLVar6 != (LRMEntry *)0x0)) {
        (*g_fp_OodleCore_Plugin_Free)(pLVar6);
      }
      puVar1 = &(param_1->entries).field_0x10;
      *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar10 - uVar22);
      uVar10 = *(ulonglong *)&(param_1->entries).field_0x10;
    }
    uVar22 = uVar12;
    if (uVar10 != 0) {
      uVar22 = *(ulonglong *)&param_1->entries;
    }
    lVar25 = (longlong)iVar23 + -1;
    lVar8 = (longlong)iVar20;
    uVar10 = uVar12;
    uVar14 = uVar12;
    uVar18 = uVar12;
    uVar21 = uVar12;
    uVar26 = uVar12;
    do {
      uVar3 = *(uint *)(uVar15 + uVar21 * 8);
      uVar16 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar16;
      lVar2 = uVar10 * 8;
      iVar23 = (int)lVar24;
      if (uVar3 < *(uint *)(uVar17 + uVar12 * 8)) {
        *(uint *)(uVar22 + lVar2) = uVar3;
        *(int *)(lVar2 + 4 + uVar22) = *(int *)(uVar15 + 4 + uVar21 * 8) + iVar23;
        uVar26 = (ulonglong)((int)uVar26 + 1);
        uVar21 = uVar21 + 1;
        bVar27 = SBORROW8(uVar21,lVar8);
        lVar2 = uVar21 - lVar8;
      }
      else {
        *(undefined8 *)(uVar22 + lVar2) = *(undefined8 *)(uVar17 + uVar12 * 8);
        uVar14 = (ulonglong)((int)uVar14 + 1);
        uVar12 = uVar12 + 1;
        bVar27 = SBORROW8(uVar12,lVar25);
        lVar2 = uVar12 - lVar25;
      }
      uVar10 = uVar10 + 1;
    } while (bVar27 != lVar2 < 0);
    lVar24 = (longlong)(int)uVar26;
    if (lVar24 < lVar8) {
      puVar19 = (undefined4 *)(uVar22 + (longlong)(int)uVar16 * 8);
      uVar16 = uVar16 + (iVar20 - (int)uVar26);
      do {
        *puVar19 = *(undefined4 *)(uVar15 + lVar24 * 8);
        puVar19[1] = *(int *)(uVar15 + 4 + lVar24 * 8) + iVar23;
        lVar24 = lVar24 + 1;
        puVar19 = puVar19 + 2;
      } while (lVar24 < lVar8);
    }
    lVar8 = (longlong)(int)uVar14;
    if (lVar8 < lVar25) {
      puVar13 = (undefined8 *)(uVar22 + (longlong)(int)uVar16 * 8);
      uVar16 = uVar16 + ((int)lVar25 - (int)uVar14);
      do {
        *puVar13 = *(undefined8 *)(uVar17 + lVar8 * 8);
        lVar8 = lVar8 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar8 < lVar25);
    }
    uVar7 = (ulong64)(int)uVar16;
    uVar12 = *(ulonglong *)&(param_1->entries).field_0x10;
    if (uVar7 < uVar12) {
      *(ulong64 *)&(param_1->entries).field_0x10 = uVar7;
    }
    else {
      if ((*(ulonglong *)&(param_1->entries).field_0x8 < uVar7) &&
         (pLVar6 = vector_storage<oo2::LRMEntry>::makefit1
                             ((vector_storage<oo2::LRMEntry> *)&param_1->entries,uVar7,uVar12),
         pLVar6 != (LRMEntry *)0x0)) {
        (*g_fp_OodleCore_Plugin_Free)(pLVar6);
      }
      puVar1 = &(param_1->entries).field_0x10;
      *(ulong64 *)puVar1 = *(longlong *)puVar1 + (uVar7 - uVar12);
      uVar7 = *(ulong64 *)&(param_1->entries).field_0x10;
    }
    uVar12 = uVar7 + 1;
    if (*(ulonglong *)&(param_1->entries).field_0x8 < uVar12) {
      pLVar6 = vector_storage<oo2::LRMEntry>::makefit1
                         ((vector_storage<oo2::LRMEntry> *)&param_1->entries,uVar12,uVar7);
      puVar13 = (undefined8 *)(*(longlong *)&param_1->entries + uVar7 * 8);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = *(undefined8 *)(uVar17 + lVar25 * 8);
      }
      *(ulonglong *)&(param_1->entries).field_0x10 = uVar12;
      if (pLVar6 != (LRMEntry *)0x0) {
        (*g_fp_OodleCore_Plugin_Free)(pLVar6);
      }
    }
    else {
      *(ulonglong *)&(param_1->entries).field_0x10 = uVar12;
      puVar13 = (undefined8 *)(*(longlong *)&param_1->entries + uVar7 * 8);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = *(undefined8 *)(uVar17 + lVar25 * 8);
      }
    }
    LRM_DeDupe(param_1);
  }
  else {
    param_1->matchBasePtr = param_3->matchBasePtr;
    puVar13 = *(undefined8 **)&param_3->entries;
    uVar17 = (*(longlong *)&(param_3->entries).field_0x10 << 3) >> 3;
    if (*(ulonglong *)&(param_1->entries).field_0x10 < uVar17) {
      *(undefined8 *)&(param_1->entries).field_0x10 = 0;
      if (*(ulonglong *)&(param_1->entries).field_0x8 < uVar17) {
        pLVar6 = vector_storage<oo2::LRMEntry>::makefit1
                           ((vector_storage<oo2::LRMEntry> *)&param_1->entries,uVar17,0);
        *(ulonglong *)&(param_1->entries).field_0x10 = uVar17;
        puVar9 = *(undefined8 **)&param_1->entries;
        if (uVar17 != 0) {
          lVar8 = (longlong)puVar13 - (longlong)puVar9;
          do {
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = *(undefined8 *)(lVar8 + (longlong)puVar9);
            }
            puVar9 = puVar9 + 1;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        if (pLVar6 != (LRMEntry *)0x0) {
          (*g_fp_OodleCore_Plugin_Free)(pLVar6);
        }
      }
      else {
        *(ulonglong *)&(param_1->entries).field_0x10 = uVar17;
        puVar9 = *(undefined8 **)&param_1->entries;
        if (uVar17 != 0) {
          lVar8 = (longlong)puVar13 - (longlong)puVar9;
          do {
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = *(undefined8 *)(lVar8 + (longlong)puVar9);
            }
            puVar9 = puVar9 + 1;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
    }
    else {
      puVar9 = *(undefined8 **)&param_1->entries;
      if (puVar9 != puVar13) {
        if (puVar13 < puVar9) {
          lVar8 = uVar17 - 1;
          if (-1 < lVar8) {
            puVar11 = puVar9 + lVar8;
            do {
              *puVar11 = *(undefined8 *)(((longlong)puVar13 - (longlong)puVar9) + (longlong)puVar11)
              ;
              puVar11 = puVar11 + -1;
              lVar8 = lVar8 + -1;
            } while (-1 < lVar8);
            *(ulonglong *)&(param_1->entries).field_0x10 = uVar17;
            goto LAB_14f39045e;
          }
        }
        else if (uVar17 != 0) {
          lVar8 = (longlong)puVar13 - (longlong)puVar9;
          uVar12 = uVar17;
          do {
            *puVar9 = *(undefined8 *)((longlong)puVar9 + lVar8);
            puVar9 = puVar9 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      *(ulonglong *)&(param_1->entries).field_0x10 = uVar17;
    }
  }
LAB_14f39045e:
  LRM_MakeJump(param_1,param_4);
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar5);
  }
  return param_1;
}

// LRM_FillMergeSeveral @ 14f3904a0

LRM * __cdecl
oo2::LRM_FillMergeSeveral(LRM **param_1,LRM **param_2,long64 param_3,long64 param_4,int param_5)

{
  LRM *pLVar1;
  ulong64 uVar2;
  long64 lVar3;
  LRM **ppLVar4;
  
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = (*fp_ThreadProfiler_Push)("oo2::LRM_FillMergeSeveral",0);
  }
  if (param_3 < param_3 + param_4) {
    ppLVar4 = param_2 + param_3 * 2 + 1;
    lVar3 = param_3;
    do {
      LRM_FillMerge(param_1[lVar3],ppLVar4[-1],*ppLVar4,param_5);
      LRM_Destroy(*ppLVar4);
      *ppLVar4 = (LRM *)0x0;
      lVar3 = lVar3 + 1;
      ppLVar4 = ppLVar4 + 2;
    } while (lVar3 < param_3 + param_4);
  }
  pLVar1 = param_1[param_3];
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar2);
  }
  return pLVar1;
}

// LRM_FillSeveral @ 14f3905a0

LRM * __cdecl
oo2::LRM_FillSeveral
          (LRM **param_1,uchar *param_2,uchar *param_3,long64 param_4,int param_5,int param_6,
          int param_7)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  LRMEntry LVar4;
  int iVar5;
  uint uVar6;
  LRM *pLVar7;
  ulonglong uVar8;
  LRMEntry *pLVar9;
  LRMEntry *pLVar10;
  longlong lVar11;
  uint uVar12;
  LRM **ppLVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  vector<oo2::LRMEntry> *this;
  stdless<oo2::LRMEntry> local_res10;
  LRMEntry local_78;
  
  if (param_2 < param_3) {
    local_res10 = SUB81(param_2,0);
    ppLVar13 = param_1;
    do {
      lVar11 = (longlong)param_3 - (longlong)param_2;
      if (param_2 + param_4 <= param_3) {
        lVar11 = param_4;
      }
      pLVar7 = *ppLVar13;
      if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
        local_78.hash = 0xffffffff;
        local_78.pos32 = 0xffffffff;
      }
      else {
        local_78 = (LRMEntry)(*fp_ThreadProfiler_Push)("oo2::LRM_Fill",0);
      }
      LVar4 = local_78;
      if ((lVar11 < param_7) &&
         (iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x173
                                     ,"oo2::LRM_Fill","bufSize >= hash_length"), iVar5 != 0)) {
        pcVar3 = (code *)swi(3);
        pLVar7 = (LRM *)(*pcVar3)();
        return pLVar7;
      }
      if ((param_7 < 8) &&
         (iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x174
                                     ,"oo2::LRM_Fill","hash_length >= LRM_MIN_MATCH_LEN"),
         iVar5 != 0)) {
        pcVar3 = (code *)swi(3);
        pLVar7 = (LRM *)(*pcVar3)();
        return pLVar7;
      }
      if ((0x40000000 < lVar11) &&
         (iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x178
                                     ,"oo2::LRM_Fill","bufSize <= (1<<30)"), iVar5 != 0)) {
        pcVar3 = (code *)swi(3);
        pLVar7 = (LRM *)(*pcVar3)();
        return pLVar7;
      }
      lVar16 = lVar11 - param_7;
      pLVar7->chunkBasePtr = param_2;
      pLVar7->matchBasePtr = param_2;
      pLVar7->bufSize = lVar11;
      pLVar7->hash_length = param_7;
      uVar12 = 1;
      iVar5 = param_7;
      while (iVar5 = iVar5 + -1, 0 < iVar5) {
        uVar12 = uVar12 * 0x2c2c57ed;
      }
      pLVar7->hash_mul_end = uVar12;
      this = &pLVar7->entries;
      uVar8 = lVar16 / (longlong)param_5 + 2;
      uVar2 = *(ulonglong *)&(pLVar7->entries).field_0x10;
      if (uVar8 < uVar2) {
        *(ulonglong *)&(pLVar7->entries).field_0x10 = uVar8;
      }
      else {
        if ((*(ulonglong *)&(pLVar7->entries).field_0x8 < uVar8) &&
           (pLVar9 = vector_storage<oo2::LRMEntry>::makefit1
                               ((vector_storage<oo2::LRMEntry> *)this,uVar8,uVar2),
           pLVar9 != (LRMEntry *)0x0)) {
          (*g_fp_OodleCore_Plugin_Free)(pLVar9);
        }
        puVar1 = &(pLVar7->entries).field_0x10;
        *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar8 - uVar2);
        uVar8 = *(ulonglong *)&(pLVar7->entries).field_0x10;
      }
      if (uVar8 == 0) {
        pLVar9 = (LRMEntry *)0x0;
      }
      else {
        pLVar9 = *(LRMEntry **)&this->field_0x0;
      }
      lVar14 = 0;
      lVar15 = 0;
      uVar12 = 0xffffffff;
      if (-1 < lVar16) {
        do {
          uVar6 = LRM_InitialHash(param_2 + lVar15,param_7);
          if (uVar6 != uVar12) {
            pLVar9[lVar14].hash = uVar6;
            pLVar9[lVar14].pos32 = (uint)lVar15;
            lVar14 = lVar14 + 1;
            uVar12 = uVar6;
          }
          lVar15 = lVar15 + param_5;
        } while (lVar15 <= lVar16);
        uVar8 = *(ulonglong *)&(pLVar7->entries).field_0x10;
        local_res10 = SUB81(param_2,0);
      }
      uVar2 = lVar14 + 1;
      if (uVar2 < uVar8) {
        *(ulonglong *)&(pLVar7->entries).field_0x10 = uVar2;
      }
      else {
        if ((*(ulonglong *)&(pLVar7->entries).field_0x8 < uVar2) &&
           (pLVar10 = vector_storage<oo2::LRMEntry>::makefit1
                                ((vector_storage<oo2::LRMEntry> *)this,uVar2,uVar8),
           pLVar10 != (LRMEntry *)0x0)) {
          (*g_fp_OodleCore_Plugin_Free)(pLVar10);
        }
        puVar1 = &(pLVar7->entries).field_0x10;
        *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar2 - uVar8);
      }
      pLVar10 = pLVar9 + lVar14;
      stdsort<oo2::LRMEntry_*,oo2::stdless<oo2::LRMEntry>_>(pLVar9,pLVar10,local_res10);
      local_78.pos32 = pLVar10[-1].pos32;
      local_78.hash = 0xffffffff;
      *pLVar10 = local_78;
      LRM_DeDupe(pLVar7);
      LRM_MakeJump(pLVar7,param_6);
      if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
        (*fp_ThreadProfiler_Pop)((ulong64)LVar4);
      }
      param_2 = param_2 + lVar11;
      ppLVar13 = ppLVar13 + 1;
      param_4 = lVar11;
    } while (param_2 < param_3);
    pLVar7 = *param_1;
  }
  else {
    pLVar7 = *param_1;
  }
  return pLVar7;
}

// LRM_FindMatch @ 14f390900

int __cdecl
oo2::LRM_FindMatch(LRM *param_1,uint param_2,uchar *param_3,uchar *param_4,long64 *param_5,
                  long64 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar12;
  uint *puVar13;
  char *pcVar14;
  uchar *puVar15;
  ulonglong uVar11;
  
  if (7 < (longlong)param_4 - (longlong)param_3) {
    puVar13 = param_1->bloom_filter;
    if (puVar13 != (uint *)0x0) {
      uVar1 = (param_2 >> ((byte)param_1->bloom_row_shift & 0x1f)) << 4;
      uVar2 = param_2 * -0x24d264a7;
      uVar7 = (uVar2 >> 0x17) + uVar2;
      uVar6 = uVar7 + (uVar2 >> 0x17) & 0x1ff;
      if ((puVar13[(ulonglong)uVar1 + (ulonglong)(uVar6 >> 5)] >> ((byte)uVar6 & 0x1f) &
           puVar13[(ulonglong)uVar1 + (ulonglong)((uVar2 & 0x1ff) >> 5)] >> ((byte)uVar2 & 0x1f) &
           puVar13[(ulonglong)uVar1 + (ulonglong)((uVar7 & 0x1ff) >> 5)] >> ((byte)uVar7 & 0x1f) & 1
          ) == 0) {
        return 0;
      }
    }
    uVar11 = 0;
    iVar10 = 0;
    uVar8 = (ulonglong)(param_2 >> ((byte)param_1->jumpInShift & 0x3f));
    iVar3 = *(int *)(*(longlong *)&param_1->jumpIn + uVar8 * 4);
    uVar12 = uVar11;
    if (*(longlong *)&(param_1->entries).field_0x10 != 0) {
      uVar12 = *(ulonglong *)&param_1->entries;
    }
    puVar13 = (uint *)(uVar12 + (longlong)iVar3 * 8);
    uVar7 = *(uint *)(uVar12 + (longlong)iVar3 * 8);
    if (uVar7 <= param_2) {
      iVar3 = *(int *)(*(longlong *)&param_1->jumpIn + uVar8 * 4 + 4) - iVar3;
      uVar12 = (ulonglong)iVar3;
      if (iVar3 != 0) {
        uVar8 = uVar12 >> 1;
        if (uVar8 != 0) {
          do {
            if (puVar13[uVar8 * 2] < param_2) {
              puVar13 = puVar13 + uVar8 * 2;
            }
            uVar12 = uVar12 - uVar8;
            uVar8 = uVar12 >> 1;
          } while (uVar8 != 0);
          uVar7 = *puVar13;
        }
        puVar13 = (uint *)((longlong)puVar13 + (ulonglong)(-(uint)(uVar7 < param_2) & 8));
        uVar7 = *puVar13;
      }
      pcVar14 = &DAT_00000007;
      do {
        if (uVar7 != param_2) {
          *param_5 = param_6;
          return iVar10;
        }
        puVar15 = param_1->matchBasePtr + puVar13[1];
        if (((longlong)pcVar14 < (longlong)param_4 - (longlong)param_3) &&
           (pcVar14[(longlong)param_3] == puVar15[(longlong)pcVar14])) {
          puVar4 = (ulonglong *)param_3;
          if (param_3 <= param_4 + -8) {
LAB_14f390a90:
            uVar12 = *(ulonglong *)(((longlong)puVar15 - (longlong)param_3) + (longlong)puVar4) ^
                     *puVar4;
            if (uVar12 == 0) goto code_r0x00014f390a99;
            uVar8 = 0;
            if (uVar12 != 0) {
              for (; (uVar12 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            pcVar9 = (char *)(((uVar8 >> 3) - (longlong)param_3) + (longlong)puVar4);
            goto LAB_14f390ac5;
          }
LAB_14f390aa5:
          pcVar9 = (char *)((longlong)puVar4 - (longlong)param_3);
          for (; (puVar4 < param_4 &&
                 ((char)*puVar4 ==
                  *(char *)((longlong)puVar4 + ((longlong)puVar15 - (longlong)param_3))));
              puVar4 = (ulonglong *)((longlong)puVar4 + 1)) {
            pcVar9 = pcVar9 + 1;
          }
LAB_14f390ac5:
          if ((longlong)pcVar14 < (longlong)pcVar9) {
            pcVar14 = pcVar9 + -1;
            lVar5 = (longlong)param_3 - (longlong)puVar15;
            if (lVar5 < param_6) {
              uVar11 = (ulonglong)pcVar9 & 0xffffffff;
              param_6 = lVar5;
              if (0xff < (int)pcVar9) {
                *param_5 = lVar5;
                return (int)pcVar9;
              }
            }
          }
        }
        iVar10 = (int)uVar11;
        puVar13 = puVar13 + 2;
        uVar7 = *puVar13;
      } while( true );
    }
  }
  return 0;
code_r0x00014f390a99:
  puVar4 = puVar4 + 1;
  if (param_4 + -8 < puVar4) goto LAB_14f390aa5;
  goto LAB_14f390a90;
}

// LRM_GetCascadeChunkSize @ 14f390b50

long64 __cdecl oo2::LRM_GetCascadeChunkSize(LRMCascade *param_1)

{
  return param_1->chunkSize;
}

// LRM_GetHashLength @ 14f390b60

int __cdecl oo2::LRM_GetHashLength(LRM *param_1)

{
  return param_1->hash_length;
}

// LRM_GetHashMulEnd @ 14f390b70

uint __cdecl oo2::LRM_GetHashMulEnd(LRM *param_1)

{
  return param_1->hash_mul_end;
}

// LRM_InitialHash4 @ 14f390b80

uint __cdecl oo2::LRM_InitialHash4(uchar *param_1)

{
  return (uint)param_1[2] * 0x2c2c57ed + (uint)param_1[1] * -0x30550e97 +
         (uint)*param_1 * -0x1ca7d2cb + (uint)param_1[3];
}

// LRM_InitialHash @ 14f390bc0

uint __cdecl oo2::LRM_InitialHash(uchar *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar1 = 0;
  if (param_2 != 8) {
    uVar3 = uVar2;
    if (0 < param_2) {
      do {
        uVar4 = uVar3 + 1;
        uVar1 = (int)uVar2 * 0x2c2c57ed + (uint)param_1[uVar3];
        uVar2 = (ulonglong)uVar1;
        uVar3 = uVar4;
      } while ((longlong)uVar4 < (longlong)param_2);
    }
    return uVar1;
  }
  return (uint)param_1[7] +
         (uint)param_1[6] * 0x2c2c57ed + (uint)param_1[5] * -0x30550e97 +
         (uint)*param_1 * -0x6bbc3e7b + (uint)param_1[2] * 0x21eb6fbd +
         (uint)param_1[4] * -0x1ca7d2cb + (uint)param_1[1] * 0x1a6bacf9 +
         (uint)param_1[3] * 0x511add11;
}

// LRM_InitialHash @ 14f390c60

uint __cdecl oo2::LRM_InitialHash(LRM *param_1,uchar *param_2)

{
  uint uVar1;
  
  uVar1 = LRM_InitialHash(param_2,param_1->hash_length);
  return uVar1;
}

// LRM_MakeJump @ 14f390c80

void __cdecl oo2::LRM_MakeJump(LRM *param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  uVar17 = 0;
  uVar13 = uVar17;
  if (*(longlong *)&(param_1->entries).field_0x10 != 0) {
    uVar13 = *(ulonglong *)&param_1->entries;
  }
  uVar18 = *(int *)&(param_1->entries).field_0x10 - 1;
  lVar11 = (longlong)(int)uVar18;
  if ((param_2 < 1) || ((int)uVar18 < 5)) {
    param_1->jumpInShift = 0x20;
    uVar9 = *(ulonglong *)&(param_1->jumpIn).field_0x10;
    if (uVar9 < 3) {
      if ((*(ulonglong *)&(param_1->jumpIn).field_0x8 < 2) &&
         (piVar7 = vector_storage<int>::makefit1((vector_storage<int> *)&param_1->jumpIn,2,uVar9),
         piVar7 != (int *)0x0)) {
        (*g_fp_OodleCore_Plugin_Free)(piVar7);
      }
      puVar1 = &(param_1->jumpIn).field_0x10;
      *(ulonglong *)puVar1 = *(longlong *)puVar1 + (2 - uVar9);
    }
    else {
      *(undefined8 *)&(param_1->jumpIn).field_0x10 = 2;
    }
    **(undefined4 **)&param_1->jumpIn = 0;
    *(uint *)(*(longlong *)&param_1->jumpIn + 4) = uVar18;
  }
  else {
    param_1->jumpInShift = 0x20 - param_2;
    iVar12 = 1 << ((byte)param_2 & 0x1f);
    vector_flex<int,oo2::vector_storage<int>_>::resize
              ((vector_flex<int,oo2::vector_storage<int>_> *)&param_1->jumpIn,(longlong)(iVar12 + 1)
              );
    uVar9 = uVar17;
    if (*(longlong *)&(param_1->jumpIn).field_0x10 != 0) {
      uVar9 = *(ulonglong *)&param_1->jumpIn;
    }
    uVar6 = uVar17;
    uVar10 = uVar17;
    uVar15 = uVar17;
    uVar16 = uVar17;
    if (0 < iVar12) {
      do {
        for (; ((longlong)uVar6 < lVar11 &&
               (*(uint *)(uVar13 + uVar6 * 8) <
                (uint)((int)uVar16 << ((byte)(0x20 - param_2) & 0x1f)))); uVar6 = uVar6 + 1) {
          uVar10 = (ulonglong)((int)uVar10 + 1);
        }
        *(int *)(uVar9 + uVar15 * 4) = (int)uVar10;
        uVar15 = uVar15 + 1;
        uVar16 = (ulonglong)((int)uVar16 + 1);
      } while ((longlong)uVar15 < (longlong)iVar12);
    }
    *(uint *)(*(longlong *)&param_1->jumpIn + (longlong)iVar12 * 4) = uVar18;
  }
  if (param_1->bloom_filter != (uint *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(param_1->bloom_filter);
    param_1->bloom_filter = (uint *)0x0;
  }
  if (0x1000 < (int)uVar18) {
    iVar12 = 0x1f;
    if (uVar18 != 0) {
      for (; uVar18 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar12 = iVar12 + -6;
    if ((iVar12 < 1) &&
       (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x108,
                                   "oo2::LRM_MakeJump","bloom_size_log2 > 0"), iVar4 != 0)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = (ulonglong)(uint)((1 << ((byte)iVar12 & 0x1f)) << 4) << 2;
    uVar9 = 0x40;
    if (0x40 < uVar6) {
      uVar9 = uVar6;
    }
    puVar8 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar9,0x40);
    if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(uVar9);
    }
    param_1->bloom_filter = puVar8;
    param_1->bloom_row_shift = 0x20 - iVar12;
    memset(puVar8,0,uVar6);
    if (0 < lVar11) {
      do {
        uVar14 = *(int *)(uVar13 + uVar17 * 8) * -0x24d264a7;
        lVar2 = uVar17 * 8;
        uVar17 = uVar17 + 1;
        uVar5 = (*(uint *)(uVar13 + lVar2) >> ((byte)(0x20 - iVar12) & 0x1f)) << 4;
        puVar8 = param_1->bloom_filter;
        uVar9 = (ulonglong)((uVar14 & 0x1ff) >> 5);
        uVar18 = (uVar14 >> 0x17) + uVar14;
        puVar8[uVar5 + uVar9] = puVar8[uVar5 + uVar9] | 1 << (uVar14 & 0x1f);
        uVar14 = uVar18 + (uVar14 >> 0x17);
        puVar8[(ulonglong)uVar5 + (ulonglong)((uVar18 & 0x1ff) >> 5)] =
             puVar8[(ulonglong)uVar5 + (ulonglong)((uVar18 & 0x1ff) >> 5)] | 1 << (uVar18 & 0x1f);
        uVar9 = (ulonglong)((uVar14 & 0x1ff) >> 5);
        puVar8[uVar5 + uVar9] = puVar8[uVar5 + uVar9] | 1 << (uVar14 & 0x1f);
      } while ((longlong)uVar17 < lVar11);
    }
  }
  return;
}

// LRM_RollHash @ 14f390f40

uint __cdecl oo2::LRM_RollHash(uint param_1,uint param_2,uchar param_3,uchar param_4)

{
  return (param_1 - param_4 * param_2) * 0x2c2c57ed + (uint)param_3;
}

// LRM_RollHashPtr @ 14f390f60

uint __cdecl oo2::LRM_RollHashPtr(uint param_1,uint param_2,uchar *param_3,int param_4)

{
  return (param_1 - *param_3 * param_2) * 0x2c2c57ed + (uint)param_3[param_4];
}

// LRM_RollHashPtr @ 14f390f80

uint __cdecl oo2::LRM_RollHashPtr(LRM *param_1,uint param_2,uchar *param_3)

{
  return (param_2 - (uint)*param_3 * param_1->hash_mul_end) * 0x2c2c57ed +
         (uint)param_3[param_1->hash_length];
}

// MakeMulEnd @ 14f390fb0

uint __cdecl oo2::MakeMulEnd(int param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  while (param_1 = param_1 + -1, 0 < param_1) {
    uVar1 = uVar1 * 0x2c2c57ed;
  }
  return uVar1;
}

// OodleFree @ 14f390fe0

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f390fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleFreeSized @ 14f390ff0

void __cdecl oo2::OodleFreeSized(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f390ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMalloc @ 14f391000

void * __cdecl oo2::OodleMalloc(long64 param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,0x10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// OodleMallocAligned @ 14f391050

void * __cdecl oo2::OodleMallocAligned(long64 param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// S32_checkA @ 14f391090

int __cdecl oo2::S32_checkA(long64 param_1)

{
  return (int)param_1;
}

// ThreadProfiler_Pop @ 14f3910a0

void __cdecl oo2::ThreadProfiler_Pop(ulong64 param_1)

{
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3910ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ThreadProfiler_Pop)(param_1);
    return;
  }
  return;
}

// ThreadProfiler_Push @ 14f3910c0

ulong64 __cdecl oo2::ThreadProfiler_Push(char *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  if (fp_ThreadProfiler_Push != (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3910cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*fp_ThreadProfiler_Push)(param_1,param_2);
    return uVar1;
  }
  return 0xffffffffffffffff;
}

// assign_construct @ 14f3910e0

void __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::assign_construct
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,LRMEntry *param_1,
          LRMEntry *param_2)

{
  LRMEntry *pLVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (longlong)param_2 - (longlong)param_1 >> 3;
  if ((ulonglong)this->_padding_ < uVar3) {
    pLVar1 = vector_storage<oo2::LRMEntry>::makefit1
                       ((vector_storage<oo2::LRMEntry> *)this,uVar3,this->m_size);
    puVar2 = (undefined8 *)this->_padding_;
    this->m_size = uVar3;
    if (uVar3 != 0) {
      lVar4 = (longlong)param_1 - (longlong)puVar2;
      do {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = *(undefined8 *)(lVar4 + (longlong)puVar2);
        }
        puVar2 = puVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (pLVar1 != (LRMEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f391157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleCore_Plugin_Free)(pLVar1);
      return;
    }
  }
  else {
    puVar2 = (undefined8 *)this->_padding_;
    this->m_size = uVar3;
    if (uVar3 != 0) {
      lVar4 = (longlong)param_1 - (longlong)puVar2;
      do {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = *(undefined8 *)(lVar4 + (longlong)puVar2);
        }
        puVar2 = puVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

// at @ 14f3911a0

int * __thiscall
oo2::vector_flex<int,oo2::vector_storage<int>_>::at
          (vector_flex<int,oo2::vector_storage<int>_> *this,ulong64 param_1)

{
  return (int *)(*(longlong *)this + param_1 * 4);
}

// at @ 14f3911b0

int * __thiscall
oo2::vector_flex<int,oo2::vector_storage<int>_>::at
          (vector_flex<int,oo2::vector_storage<int>_> *this,ulong64 param_1)

{
  return (int *)(*(longlong *)this + param_1 * 4);
}

// at @ 14f3911c0

LRM ** __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::at
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this,ulong64 param_1)

{
  return (LRM **)(*(longlong *)this + param_1 * 8);
}

// at @ 14f3911d0

LRM ** __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::at
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this,ulong64 param_1)

{
  return (LRM **)(*(longlong *)this + param_1 * 8);
}

// at @ 14f3911e0

LRMEntry * __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::at
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,ulong64 param_1)

{
  return (LRMEntry *)(*(longlong *)this + param_1 * 8);
}

// at @ 14f3911f0

LRMEntry * __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::at
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,ulong64 param_1)

{
  return (LRMEntry *)(*(longlong *)this + param_1 * 8);
}

// back @ 14f391200

LRM ** __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::back
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  return (LRM **)(*(longlong *)this + *(longlong *)&this->field_0x10 * 8 + -8);
}

// begin @ 14f391220

int * __thiscall
oo2::vector_base<int,oo2::vector_storage<int>_>::begin
          (vector_base<int,oo2::vector_storage<int>_> *this)

{
  return (int *)this->_padding_;
}

// begin @ 14f391230

int * __thiscall
oo2::vector_base<int,oo2::vector_storage<int>_>::begin
          (vector_base<int,oo2::vector_storage<int>_> *this)

{
  return (int *)this->_padding_;
}

// begin @ 14f391240

LRM ** __thiscall
oo2::vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::begin
          (vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  return (LRM **)this->_padding_;
}

// begin @ 14f391250

LRM ** __thiscall
oo2::vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::begin
          (vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  return (LRM **)this->_padding_;
}

// begin @ 14f391260

LRMEntry * __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::begin
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  return (LRMEntry *)this->_padding_;
}

// begin @ 14f391270

LRMEntry * __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::begin
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  return (LRMEntry *)this->_padding_;
}

// begin @ 14f391280

LRMEntry * __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::begin
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  return *(LRMEntry **)this;
}

// begin @ 14f391290

LRMEntry * __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::begin
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  return *(LRMEntry **)this;
}

// begin @ 14f3912a0

int * __thiscall oo2::vector_storage<int>::begin(vector_storage<int> *this)

{
  return this->m_begin;
}

// begin @ 14f3912b0

int * __thiscall oo2::vector_storage<int>::begin(vector_storage<int> *this)

{
  return this->m_begin;
}

// begin @ 14f3912c0

LRM ** __thiscall oo2::vector_storage<oo2::LRM_*>::begin(vector_storage<oo2::LRM_*> *this)

{
  return this->m_begin;
}

// begin @ 14f3912d0

LRM ** __thiscall oo2::vector_storage<oo2::LRM_*>::begin(vector_storage<oo2::LRM_*> *this)

{
  return this->m_begin;
}

// begin @ 14f3912e0

LRMEntry * __thiscall oo2::vector_storage<oo2::LRMEntry>::begin(vector_storage<oo2::LRMEntry> *this)

{
  return this->m_begin;
}

// begin @ 14f3912f0

LRMEntry * __thiscall oo2::vector_storage<oo2::LRMEntry>::begin(vector_storage<oo2::LRMEntry> *this)

{
  return this->m_begin;
}

// bloom_insert @ 14f391300

void __cdecl oo2::bloom_insert(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = (param_3 >> ((byte)param_2 & 0x1f)) << 4;
  uVar4 = param_3 * -0x24d264a7;
  uVar3 = (ulonglong)((uVar4 & 0x1ff) >> 5);
  uVar1 = (uVar4 >> 0x17) + uVar4;
  param_1[uVar2 + uVar3] = param_1[uVar2 + uVar3] | 1 << (uVar4 & 0x1f);
  uVar4 = uVar1 + (uVar4 >> 0x17);
  param_1[(ulonglong)uVar2 + (ulonglong)((uVar1 & 0x1ff) >> 5)] =
       param_1[(ulonglong)uVar2 + (ulonglong)((uVar1 & 0x1ff) >> 5)] | 1 << (uVar1 & 0x1f);
  uVar3 = (ulonglong)((uVar4 & 0x1ff) >> 5);
  param_1[uVar2 + uVar3] = param_1[uVar2 + uVar3] | 1 << (uVar4 & 0x1f);
  return;
}

// bloom_maybe_contains @ 14f391390

bool __cdecl oo2::bloom_maybe_contains(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (param_3 >> ((byte)param_2 & 0x1f)) << 4;
  uVar3 = param_3 * -0x24d264a7;
  uVar1 = (uVar3 >> 0x17) + uVar3;
  uVar4 = uVar1 + (uVar3 >> 0x17) & 0x1ff;
  return (bool)((byte)(param_1[(ulonglong)uVar2 + (ulonglong)(uVar4 >> 5)] >> ((byte)uVar4 & 0x1f))
                & (byte)(param_1[(ulonglong)uVar2 + (ulonglong)((uVar3 & 0x1ff) >> 5)] >>
                        ((byte)uVar3 & 0x1f)) &
                (byte)(param_1[(ulonglong)uVar2 + (ulonglong)((uVar1 & 0x1ff) >> 5)] >>
                      ((byte)uVar1 & 0x1f)) & 1);
}

// capacity @ 14f391420

ulong64 __thiscall
oo2::vector_base<int,oo2::vector_storage<int>_>::capacity
          (vector_base<int,oo2::vector_storage<int>_> *this)

{
  return this->_padding_;
}

// capacity @ 14f391430

ulong64 __thiscall
oo2::vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::capacity
          (vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  return this->_padding_;
}

// capacity @ 14f391440

ulong64 __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::capacity
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  return this->_padding_;
}

// capacity @ 14f391450

ulong64 __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::capacity
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  return *(ulong64 *)&this->field_0x8;
}

// capacity @ 14f391460

ulong64 __thiscall oo2::vector_storage<int>::capacity(vector_storage<int> *this)

{
  return this->m_capacity;
}

// capacity @ 14f391470

ulong64 __thiscall oo2::vector_storage<oo2::LRM_*>::capacity(vector_storage<oo2::LRM_*> *this)

{
  return this->m_capacity;
}

// capacity @ 14f391480

ulong64 __thiscall oo2::vector_storage<oo2::LRMEntry>::capacity(vector_storage<oo2::LRMEntry> *this)

{
  return this->m_capacity;
}

// clear @ 14f391490

void __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::clear
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}

// data @ 14f3914a0

int * __thiscall
oo2::vector_flex<int,oo2::vector_storage<int>_>::data
          (vector_flex<int,oo2::vector_storage<int>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (int *)0x0;
  }
  return *(int **)this;
}

// data @ 14f3914c0

LRMEntry * __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::data
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (LRMEntry *)0x0;
  }
  return *(LRMEntry **)this;
}

// data @ 14f3914e0

LRMEntry * __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::data
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (LRMEntry *)0x0;
  }
  return *(LRMEntry **)this;
}

// empty @ 14f391500

bool __thiscall
oo2::vector_flex<int,oo2::vector_storage<int>_>::empty
          (vector_flex<int,oo2::vector_storage<int>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// empty @ 14f391510

bool __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::empty
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// empty @ 14f391520

bool __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::empty
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// end @ 14f391530

LRMEntry * __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::end
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  return (LRMEntry *)(this->_padding_ + this->m_size * 8);
}

// end @ 14f391550

LRMEntry * __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::end
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  return (LRMEntry *)(*(longlong *)this + *(longlong *)&this->field_0x10 * 8);
}

// extend_copy @ 14f391580

void __thiscall
oo2::vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::extend_copy
          (vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this,LRM **param_1,
          ulong64 param_2)

{
  LRM **ppLVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  
  uVar3 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar3 + param_2) {
    ppLVar1 = vector_storage<oo2::LRM_*>::makefit1
                        ((vector_storage<oo2::LRM_*> *)this,uVar3 + param_2,uVar3);
    uVar3 = this->m_size;
    puVar2 = (undefined8 *)(this->_padding_ + uVar3 * 8);
    uVar4 = param_2;
    if (param_2 != 0) {
      do {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = *param_1;
        }
        puVar2 = puVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar3 = this->m_size;
    }
    this->m_size = uVar3 + param_2;
    if (ppLVar1 != (LRM **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f391600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleCore_Plugin_Free)(ppLVar1);
      return;
    }
  }
  else {
    puVar2 = (undefined8 *)(this->_padding_ + uVar3 * 8);
    uVar4 = param_2;
    if (param_2 != 0) {
      do {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = *param_1;
        }
        puVar2 = puVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar3 = this->m_size;
    }
    this->m_size = uVar3 + param_2;
  }
  return;
}

// extend_copy @ 14f391660

void __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::extend_copy
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,LRMEntry *param_1,
          ulong64 param_2)

{
  LRMEntry *pLVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  
  uVar3 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar3 + param_2) {
    pLVar1 = vector_storage<oo2::LRMEntry>::makefit1
                       ((vector_storage<oo2::LRMEntry> *)this,uVar3 + param_2,uVar3);
    uVar3 = this->m_size;
    puVar2 = (undefined8 *)(this->_padding_ + uVar3 * 8);
    if (param_2 != 0) {
      lVar4 = (longlong)param_1 - (longlong)puVar2;
      uVar3 = param_2;
      do {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = *(undefined8 *)(lVar4 + (longlong)puVar2);
        }
        puVar2 = puVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar3 = this->m_size;
    }
    this->m_size = uVar3 + param_2;
    if (pLVar1 != (LRMEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3916e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleCore_Plugin_Free)(pLVar1);
      return;
    }
  }
  else {
    puVar2 = (undefined8 *)(this->_padding_ + uVar3 * 8);
    if (param_2 != 0) {
      lVar4 = (longlong)param_1 - (longlong)puVar2;
      uVar3 = param_2;
      do {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = *(undefined8 *)(lVar4 + (longlong)puVar2);
        }
        puVar2 = puVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar3 = this->m_size;
    }
    this->m_size = uVar3 + param_2;
  }
  return;
}

// extend_default @ 14f391740

void __thiscall
oo2::vector_base<int,oo2::vector_storage<int>_>::extend_default
          (vector_base<int,oo2::vector_storage<int>_> *this,ulong64 param_1)

{
  int *piVar1;
  ulong64 uVar2;
  
  uVar2 = param_1 + this->m_size;
  if ((ulonglong)this->_padding_ < uVar2) {
    piVar1 = vector_storage<int>::makefit1((vector_storage<int> *)this,uVar2,this->m_size);
    if (piVar1 != (int *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(piVar1);
    }
    this->m_size = this->m_size + param_1;
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// extend_default @ 14f3917a0

void __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::extend_default
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,ulong64 param_1)

{
  LRMEntry *pLVar1;
  ulong64 uVar2;
  
  uVar2 = param_1 + this->m_size;
  if ((ulonglong)this->_padding_ < uVar2) {
    pLVar1 = vector_storage<oo2::LRMEntry>::makefit1
                       ((vector_storage<oo2::LRMEntry> *)this,uVar2,this->m_size);
    if (pLVar1 != (LRMEntry *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pLVar1);
    }
    this->m_size = this->m_size + param_1;
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// getmatchlen_mml1_forceinline @ 14f391800

long64 __cdecl oo2::getmatchlen_mml1_forceinline(uchar *param_1,uchar *param_2,uchar *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  puVar2 = (ulonglong *)param_1;
  while( true ) {
    if (param_3 + -8 < puVar2) {
      lVar4 = (longlong)puVar2 - (longlong)param_1;
      for (; (puVar2 < param_3 &&
             ((char)*puVar2 == *(char *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1))
             )); puVar2 = (ulonglong *)((longlong)puVar2 + 1)) {
        lVar4 = lVar4 + 1;
      }
      return lVar4;
    }
    uVar3 = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2) ^ *puVar2;
    if (uVar3 != 0) break;
    puVar2 = puVar2 + 1;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (long64)((longlong)puVar2 + ((uVar1 >> 3) - (longlong)param_1));
}

// havematch_better @ 14f391860

bool __cdecl
oo2::havematch_better(uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,long64 *param_5)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  if ((param_4 < (longlong)param_3 - (longlong)param_1) && (param_1[param_4] == param_2[param_4])) {
    puVar2 = (ulonglong *)param_1;
    if (param_1 <= param_3 + -8) {
LAB_14f391890:
      uVar3 = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2) ^ *puVar2;
      if (uVar3 == 0) goto code_r0x00014f391899;
      uVar1 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      pcVar4 = (char *)(((uVar1 >> 3) - (longlong)param_1) + (longlong)puVar2);
      goto LAB_14f3918c5;
    }
LAB_14f3918a5:
    pcVar4 = (char *)((longlong)puVar2 - (longlong)param_1);
    for (; (puVar2 < param_3 &&
           ((char)*puVar2 == *(char *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1))))
        ; puVar2 = (ulonglong *)((longlong)puVar2 + 1)) {
      pcVar4 = pcVar4 + 1;
    }
LAB_14f3918c5:
    if (param_4 < (longlong)pcVar4) {
      *param_5 = (long64)pcVar4;
      return true;
    }
  }
  return false;
code_r0x00014f391899:
  puVar2 = puVar2 + 1;
  if (param_3 + -8 < puVar2) goto LAB_14f3918a5;
  goto LAB_14f391890;
}

// init @ 14f3918f0

void __thiscall
oo2::vector_base<int,oo2::vector_storage<int>_>::init
          (vector_base<int,oo2::vector_storage<int>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14f391900

void __thiscall
oo2::vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::init
          (vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14f391910

void __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::init
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14f391920

void __thiscall oo2::vector_storage<int>::init(vector_storage<int> *this)

{
  this->m_begin = (int *)0x0;
  this->m_capacity = 0;
  return;
}

// init @ 14f391930

void __thiscall oo2::vector_storage<oo2::LRM_*>::init(vector_storage<oo2::LRM_*> *this)

{
  this->m_begin = (LRM **)0x0;
  this->m_capacity = 0;
  return;
}

// init @ 14f391940

void __thiscall oo2::vector_storage<oo2::LRMEntry>::init(vector_storage<oo2::LRMEntry> *this)

{
  this->m_begin = (LRMEntry *)0x0;
  this->m_capacity = 0;
  return;
}

// intpow @ 14f391950

uint __cdecl oo2::intpow(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  for (; 0 < param_2; param_2 = param_2 + -1) {
    uVar1 = uVar1 * param_1;
  }
  return uVar1;
}

// makefit1 @ 14f391970

int * __thiscall
oo2::vector_base<int,oo2::vector_storage<int>_>::makefit1
          (vector_base<int,oo2::vector_storage<int>_> *this,ulong64 param_1)

{
  int *piVar1;
  
  piVar1 = vector_storage<int>::makefit1((vector_storage<int> *)this,param_1,this->m_size);
  return piVar1;
}

// makefit1 @ 14f391980

LRM ** __thiscall
oo2::vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::makefit1
          (vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this,ulong64 param_1)

{
  LRM **ppLVar1;
  
  ppLVar1 = vector_storage<oo2::LRM_*>::makefit1
                      ((vector_storage<oo2::LRM_*> *)this,param_1,this->m_size);
  return ppLVar1;
}

// makefit1 @ 14f391990

LRMEntry * __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::makefit1
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,ulong64 param_1)

{
  LRMEntry *pLVar1;
  
  pLVar1 = vector_storage<oo2::LRMEntry>::makefit1
                     ((vector_storage<oo2::LRMEntry> *)this,param_1,this->m_size);
  return pLVar1;
}

// makefit1 @ 14f3919a0

int * __thiscall
oo2::vector_storage<int>::makefit1(vector_storage<int> *this,ulong64 param_1,ulong64 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  
  piVar1 = this->m_begin;
  uVar5 = this->m_capacity + 0x800000;
  uVar2 = this->m_capacity * 2;
  if (uVar5 <= uVar2) {
    uVar2 = uVar5;
  }
  if (param_1 < uVar2) {
    param_1 = uVar2;
  }
  uVar5 = param_1 * 4;
  if (uVar5 < 0x10001) {
    if (uVar5 < 0x200) goto LAB_14f391a23;
    uVar5 = uVar5 + 0xfff;
    uVar2 = 0x3ffffffffffffc00;
  }
  else {
    uVar5 = uVar5 + 0xffff;
    uVar2 = 0x3fffffffffffc000;
  }
  param_1 = uVar5 >> 2 & uVar2;
LAB_14f391a23:
  piVar3 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1 * 4,0x10);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1 * 4);
  }
  if (param_2 != 0) {
    piVar4 = piVar3;
    do {
      if (piVar4 != (int *)0x0) {
        *piVar4 = *(int *)(((longlong)piVar1 - (longlong)piVar3) + (longlong)piVar4);
      }
      piVar4 = piVar4 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = piVar3;
  this->m_capacity = param_1;
  return piVar1;
}

// makefit1 @ 14f391ac0

LRM ** __thiscall
oo2::vector_storage<oo2::LRM_*>::makefit1
          (vector_storage<oo2::LRM_*> *this,ulong64 param_1,ulong64 param_2)

{
  LRM **ppLVar1;
  ulonglong uVar2;
  LRM **ppLVar3;
  LRM **ppLVar4;
  ulonglong uVar5;
  
  ppLVar1 = this->m_begin;
  uVar5 = this->m_capacity + 0x400000;
  uVar2 = this->m_capacity * 2;
  if (uVar5 <= uVar2) {
    uVar2 = uVar5;
  }
  if (param_1 < uVar2) {
    param_1 = uVar2;
  }
  uVar5 = param_1 * 8;
  if (uVar5 < 0x10001) {
    if (uVar5 < 0x200) goto LAB_14f391b43;
    uVar5 = uVar5 + 0xfff;
    uVar2 = 0x1ffffffffffffe00;
  }
  else {
    uVar5 = uVar5 + 0xffff;
    uVar2 = 0x1fffffffffffe000;
  }
  param_1 = uVar5 >> 3 & uVar2;
LAB_14f391b43:
  ppLVar3 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1 * 8,0x10);
  if (ppLVar3 == (LRM **)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1 * 8);
  }
  if (param_2 != 0) {
    ppLVar4 = ppLVar3;
    do {
      if (ppLVar4 != (LRM **)0x0) {
        *ppLVar4 = *(LRM **)(((longlong)ppLVar1 - (longlong)ppLVar3) + (longlong)ppLVar4);
      }
      ppLVar4 = ppLVar4 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = ppLVar3;
  this->m_capacity = param_1;
  return ppLVar1;
}

// makefit1 @ 14f391be0

LRMEntry * __thiscall
oo2::vector_storage<oo2::LRMEntry>::makefit1
          (vector_storage<oo2::LRMEntry> *this,ulong64 param_1,ulong64 param_2)

{
  LRMEntry *pLVar1;
  ulonglong uVar2;
  LRMEntry *pLVar3;
  LRMEntry *pLVar4;
  ulonglong uVar5;
  
  pLVar1 = this->m_begin;
  uVar5 = this->m_capacity + 0x400000;
  uVar2 = this->m_capacity * 2;
  if (uVar5 <= uVar2) {
    uVar2 = uVar5;
  }
  if (param_1 < uVar2) {
    param_1 = uVar2;
  }
  uVar5 = param_1 * 8;
  if (uVar5 < 0x10001) {
    if (uVar5 < 0x200) goto LAB_14f391c63;
    uVar5 = uVar5 + 0xfff;
    uVar2 = 0x1ffffffffffffe00;
  }
  else {
    uVar5 = uVar5 + 0xffff;
    uVar2 = 0x1fffffffffffe000;
  }
  param_1 = uVar5 >> 3 & uVar2;
LAB_14f391c63:
  pLVar3 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1 * 8,0x10);
  if (pLVar3 == (LRMEntry *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1 * 8);
  }
  if (param_2 != 0) {
    pLVar4 = pLVar3;
    do {
      if (pLVar4 != (LRMEntry *)0x0) {
        *pLVar4 = *(LRMEntry *)(((longlong)pLVar1 - (longlong)pLVar3) + (longlong)pLVar4);
      }
      pLVar4 = pLVar4 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = pLVar3;
  this->m_capacity = param_1;
  return pLVar1;
}

// makefit2 @ 14f391d00

void __thiscall
oo2::vector_storage<int>::makefit2
          (vector_storage<int> *this,int *param_1,ulong64 param_2,ulong64 param_3)

{
  if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f391d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleCore_Plugin_Free)(param_1);
    return;
  }
  return;
}

// makefit2 @ 14f391d20

void __thiscall
oo2::vector_storage<oo2::LRM_*>::makefit2
          (vector_storage<oo2::LRM_*> *this,LRM **param_1,ulong64 param_2,ulong64 param_3)

{
  if (param_1 != (LRM **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f391d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleCore_Plugin_Free)(param_1);
    return;
  }
  return;
}

// makefit2 @ 14f391d40

void __thiscall
oo2::vector_storage<oo2::LRMEntry>::makefit2
          (vector_storage<oo2::LRMEntry> *this,LRMEntry *param_1,ulong64 param_2,ulong64 param_3)

{
  if (param_1 != (LRMEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f391d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleCore_Plugin_Free)(param_1);
    return;
  }
  return;
}

// needmakefit @ 14f391d60

bool __thiscall oo2::vector_storage<int>::needmakefit(vector_storage<int> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// needmakefit @ 14f391d70

bool __thiscall
oo2::vector_storage<oo2::LRM_*>::needmakefit(vector_storage<oo2::LRM_*> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// needmakefit @ 14f391d80

bool __thiscall
oo2::vector_storage<oo2::LRMEntry>::needmakefit(vector_storage<oo2::LRMEntry> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// push_back @ 14f391da0

void __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::push_back
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this,LRM **param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  LRM **ppLVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ulong64 *)&this->field_0x10;
  uVar1 = uVar2 + 1;
  if (*(ulonglong *)&this->field_0x8 < uVar1) {
    ppLVar3 = vector_storage<oo2::LRM_*>::makefit1((vector_storage<oo2::LRM_*> *)this,uVar1,uVar2);
    puVar4 = (undefined8 *)(*(longlong *)this + uVar2 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *param_1;
    }
    *(ulong64 *)&this->field_0x10 = uVar1;
    if (ppLVar3 != (LRM **)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(ppLVar3);
    }
  }
  else {
    *(ulong64 *)&this->field_0x10 = uVar1;
    puVar4 = (undefined8 *)(*(longlong *)this + uVar2 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *param_1;
    }
  }
  return;
}

// push_back @ 14f391e40

void __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::push_back
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,LRMEntry *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  LRMEntry *pLVar3;
  LRMEntry *pLVar4;
  
  uVar2 = *(ulong64 *)&this->field_0x10;
  uVar1 = uVar2 + 1;
  if (*(ulonglong *)&this->field_0x8 < uVar1) {
    pLVar3 = vector_storage<oo2::LRMEntry>::makefit1
                       ((vector_storage<oo2::LRMEntry> *)this,uVar1,uVar2);
    pLVar4 = (LRMEntry *)(*(longlong *)this + uVar2 * 8);
    if (pLVar4 != (LRMEntry *)0x0) {
      *pLVar4 = *param_1;
    }
    *(ulong64 *)&this->field_0x10 = uVar1;
    if (pLVar3 != (LRMEntry *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pLVar3);
    }
  }
  else {
    *(ulong64 *)&this->field_0x10 = uVar1;
    pLVar3 = (LRMEntry *)(*(longlong *)this + uVar2 * 8);
    if (pLVar3 != (LRMEntry *)0x0) {
      *pLVar3 = *param_1;
    }
  }
  return;
}

// release @ 14f391ee0

void __thiscall
oo2::vector_base<int,oo2::vector_storage<int>_>::release
          (vector_base<int,oo2::vector_storage<int>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f391f20

void __thiscall
oo2::vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::release
          (vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f391f60

void __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::release
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f391fa0

void __thiscall oo2::vector_storage<int>::release(vector_storage<int> *this)

{
  if (this->m_begin != (int *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (int *)0x0;
  return;
}

// release @ 14f391fe0

void __thiscall oo2::vector_storage<oo2::LRM_*>::release(vector_storage<oo2::LRM_*> *this)

{
  if (this->m_begin != (LRM **)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (LRM **)0x0;
  return;
}

// release @ 14f392020

void __thiscall oo2::vector_storage<oo2::LRMEntry>::release(vector_storage<oo2::LRMEntry> *this)

{
  if (this->m_begin != (LRMEntry *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (LRMEntry *)0x0;
  return;
}

// resize @ 14f392060

void __thiscall
oo2::vector_flex<int,oo2::vector_storage<int>_>::resize
          (vector_flex<int,oo2::vector_storage<int>_> *this,ulong64 param_1)

{
  ulonglong uVar1;
  int *piVar2;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    piVar2 = vector_storage<int>::makefit1((vector_storage<int> *)this,param_1,uVar1);
    if (piVar2 != (int *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(piVar2);
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// resize @ 14f3920c0

void __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::resize
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this,ulong64 param_1,
          LRM **param_2)

{
  LRM **ppLVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar4) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  lVar6 = param_1 - uVar4;
  if (*(ulonglong *)&this->field_0x8 < uVar4 + lVar6) {
    ppLVar1 = vector_storage<oo2::LRM_*>::makefit1
                        ((vector_storage<oo2::LRM_*> *)this,uVar4 + lVar6,uVar4);
    lVar5 = *(longlong *)&this->field_0x10;
    puVar2 = (undefined8 *)(*(longlong *)this + lVar5 * 8);
    lVar3 = lVar6;
    if (lVar6 != 0) {
      do {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = *param_2;
        }
        puVar2 = puVar2 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar5 = *(longlong *)&this->field_0x10;
    }
    *(longlong *)&this->field_0x10 = lVar5 + lVar6;
    if (ppLVar1 != (LRM **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f392160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleCore_Plugin_Free)(ppLVar1);
      return;
    }
  }
  else {
    puVar2 = (undefined8 *)(*(longlong *)this + uVar4 * 8);
    lVar5 = lVar6;
    if (lVar6 != 0) {
      do {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = *param_2;
        }
        puVar2 = puVar2 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar4 = *(ulonglong *)&this->field_0x10;
    }
    *(ulonglong *)&this->field_0x10 = uVar4 + lVar6;
  }
  return;
}

// resize @ 14f3921c0

void __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::resize
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,ulong64 param_1)

{
  ulonglong uVar1;
  LRMEntry *pLVar2;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    pLVar2 = vector_storage<oo2::LRMEntry>::makefit1
                       ((vector_storage<oo2::LRMEntry> *)this,param_1,uVar1);
    if (pLVar2 != (LRMEntry *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pLVar2);
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// rrClz32 @ 14f392220

uint __cdecl oo2::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}

// rrCtz64 @ 14f392240

uint __cdecl oo2::rrCtz64(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return (uint)lVar1;
}

// rrCtzBytes64 @ 14f392250

uint __cdecl oo2::rrCtzBytes64(ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (uint)(uVar1 >> 3) & 0x1fffffff;
}

// rrPrintf_nop @ 14f392260

void __cdecl oo2::rrPrintf_nop(void)

{
  return;
}

// rrPtrDiff32 @ 14f392270

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14f392280

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// shrink @ 14f392290

void __thiscall
oo2::vector_base<int,oo2::vector_storage<int>_>::shrink
          (vector_base<int,oo2::vector_storage<int>_> *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14f3922a0

void __thiscall
oo2::vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::shrink
          (vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14f3922b0

void __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::shrink
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// size32 @ 14f3922c0

int __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::size32
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  return *(int *)&this->field_0x10;
}

// size @ 14f3922d0

ulong64 __thiscall
oo2::vector_base<int,oo2::vector_storage<int>_>::size
          (vector_base<int,oo2::vector_storage<int>_> *this)

{
  return this->m_size;
}

// size @ 14f3922e0

ulong64 __thiscall
oo2::vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::size
          (vector_base<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  return this->m_size;
}

// size @ 14f3922f0

ulong64 __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::size
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  return this->m_size;
}

// size @ 14f392300

ulong64 __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::size
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size @ 14f392310

ulong64 __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::size
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// sizea @ 14f392320

long64 __thiscall
oo2::vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_>::sizea
          (vector_flex<oo2::LRM_*,oo2::vector_storage<oo2::LRM_*>_> *this)

{
  return *(long64 *)&this->field_0x10;
}

// swap @ 14f392340

void __thiscall
oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::swap
          (vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,
          vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *param_1)

{
  ulong64 uVar1;
  longlong lVar2;
  
  uVar1 = this->m_size;
  this->m_size = param_1->m_size;
  param_1->m_size = uVar1;
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  return;
}

// swap @ 14f392380

void __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::swap
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this,
          vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&this->field_0x10;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = uVar1;
  uVar1 = *(undefined8 *)this;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = uVar1;
  uVar1 = *(undefined8 *)&this->field_0x8;
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = uVar1;
  return;
}

// swap @ 14f3923c0

void __thiscall
oo2::vector_storage<oo2::LRMEntry>::swap
          (vector_storage<oo2::LRMEntry> *this,vector_storage<oo2::LRMEntry> *param_1,
          ulong64 param_2)

{
  LRMEntry *pLVar1;
  ulong64 uVar2;
  
  pLVar1 = this->m_begin;
  this->m_begin = param_1->m_begin;
  param_1->m_begin = pLVar1;
  uVar2 = this->m_capacity;
  this->m_capacity = param_1->m_capacity;
  param_1->m_capacity = uVar2;
  return;
}

// tighten @ 14f392400

void __thiscall
oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::tighten
          (vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_> *this)

{
  void *pvVar1;
  LRMEntry *pLVar2;
  LRMEntry *pLVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulong64 uVar6;
  LRMEntry *pLVar7;
  vector_storage<oo2::LRMEntry> local_20;
  ulong64 local_10;
  
  uVar6 = *(ulong64 *)&this->field_0x10;
  if (*(ulong64 *)&this->field_0x8 != uVar6) {
    pLVar7 = (LRMEntry *)0x0;
    local_20.m_begin = (LRMEntry *)0x0;
    local_20.m_capacity = 0;
    local_10 = 0;
    lVar5 = *(longlong *)this;
    if (uVar6 != 0) {
      pLVar2 = vector_storage<oo2::LRMEntry>::makefit1(&local_20,uVar6,0);
      pLVar7 = local_20.m_begin;
      pLVar3 = local_20.m_begin + local_10;
      lVar5 = lVar5 - (longlong)pLVar3;
      uVar4 = uVar6;
      do {
        if (pLVar3 != (LRMEntry *)0x0) {
          *pLVar3 = *(LRMEntry *)(lVar5 + (longlong)pLVar3);
        }
        pLVar3 = pLVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar6 = uVar6 + local_10;
      local_10 = uVar6;
      if (pLVar2 != (LRMEntry *)0x0) {
        (*g_fp_OodleCore_Plugin_Free)(pLVar2);
      }
    }
    *(ulong64 *)&this->field_0x10 = uVar6;
    pvVar1 = *(void **)this;
    *(LRMEntry **)this = pLVar7;
    *(ulong64 *)&this->field_0x8 = local_20.m_capacity;
    if (pvVar1 != (void *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pvVar1);
    }
  }
  return;
}

// dtor$0 @ 150284ac0

void `oo2::vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::
     vector_base<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::vector_storage<oo2::LRMEntry>::~vector_storage<oo2::LRMEntry>
            (*(vector_storage<oo2::LRMEntry> **)(param_2 + 0x40));
  return;
}

// dtor$0 @ 150284ae0

void `oo2::LRM_AllocCascade'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x58),eRRPlacementNew,*(void **)(param_2 + 0x50));
  return;
}

// dtor$0 @ 150284b20

void `oo2::LRM_CreateCascade'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x48));
  return;
}

// dtor$2 @ 150284b40

void `oo2::LRM_DeDupe'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  oo2::vector_storage<oo2::LRMEntry>::~vector_storage<oo2::LRMEntry>
            ((vector_storage<oo2::LRMEntry> *)(param_2 + 0x28));
  return;
}

// dtor$0 @ 150284b60

void `oo2::LRM_Fill'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x38));
  return;
}

// dtor$0 @ 150284b80

void `oo2::LRM_FillCascade'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x48));
  return;
}

// dtor$0 @ 150284ba0

void `oo2::LRM_FillMerge'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x28));
  return;
}

// dtor$0 @ 150284bc0

void `oo2::LRM_FillMergeSeveral'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x60));
  return;
}

// dtor$0 @ 150284be0

void `oo2::LRM_FillSeveral'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x48));
  return;
}

// dtor$2 @ 150284c00

void `oo2::vector_flex<oo2::LRMEntry,oo2::vector_storage<oo2::LRMEntry>_>::tighten'::__l1::dtor_2
               (undefined8 param_1,longlong param_2)

{
  oo2::vector_storage<oo2::LRMEntry>::~vector_storage<oo2::LRMEntry>
            ((vector_storage<oo2::LRMEntry> *)(param_2 + 0x28));
  return;
}

