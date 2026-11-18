// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2net_win64
// Functions: 206

// ByteCopy<oo2net::LRMEntry_*,oo2net::LRMEntry_*> @ 14ff629a0

void __cdecl
oo2net::ByteCopy<oo2net::LRMEntry_*,oo2net::LRMEntry_*>(LRMEntry **param_1,LRMEntry **param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<oo2net::LRMEntry,oo2net::LRMEntry> @ 14ff629b0

void __cdecl
oo2net::ByteCopy<oo2net::LRMEntry,oo2net::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<unsigned___int64,unsigned___int64> @ 14ff629c0

void __cdecl oo2net::ByteCopy<unsigned___int64,unsigned___int64>(ulong64 *param_1,ulong64 *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteSwap<oo2net::LRMEntry_*> @ 14ff629d0

void __cdecl oo2net::ByteSwap<oo2net::LRMEntry_*>(LRMEntry **param_1,LRMEntry **param_2)

{
  LRMEntry *pLVar1;
  
  pLVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pLVar1;
  return;
}

// ByteSwap<oo2net::LRMEntry> @ 14ff629f0

void __cdecl oo2net::ByteSwap<oo2net::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2)

{
  LRMEntry LVar1;
  
  LVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = LVar1;
  return;
}

// ByteSwap<unsigned___int64> @ 14ff62a10

void __cdecl oo2net::ByteSwap<unsigned___int64>(ulong64 *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// OodleDelete<oo2net::LRM> @ 14ff62a40

void __cdecl oo2net::OodleDelete<oo2net::LRM>(LRM *param_1)

{
  if (param_1->bloom_filter != (uint *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(param_1->bloom_filter);
    param_1->bloom_filter = (uint *)0x0;
  }
  *(undefined8 *)&(param_1->jumpIn).field_0x10 = 0;
  if (*(void **)&param_1->jumpIn != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&param_1->jumpIn);
  }
  *(undefined8 *)&param_1->jumpIn = 0;
  *(undefined8 *)&(param_1->jumpIn).field_0x8 = 0;
  *(undefined8 *)&(param_1->entries).field_0x10 = 0;
  if (*(void **)&param_1->entries != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&param_1->entries);
  }
  *(undefined8 *)&param_1->entries = 0;
  *(undefined8 *)&(param_1->entries).field_0x8 = 0;
                    /* WARNING: Could not recover jumptable at 0x00014ff62ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// OodleDelete<oo2net::LRMCascade> @ 14ff62ad0

void __cdecl oo2net::OodleDelete<oo2net::LRMCascade>(LRMCascade *param_1)

{
  _eh_vector_destructor_iterator_(param_1,0x18,8,vector<oo2net::LRM_*>::~vector<oo2net::LRM_*>);
                    /* WARNING: Could not recover jumptable at 0x00014ff62b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// assign<oo2net::LRMEntry_const_*> @ 14ff62b20

void __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::
assign<oo2net::LRMEntry_const_*>
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          LRMEntry *param_1,LRMEntry *param_2)

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
    pLVar1 = vector_storage<oo2net::LRMEntry>::makefit1
                       ((vector_storage<oo2net::LRMEntry> *)this,uVar5,0);
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
                    /* WARNING: Could not recover jumptable at 0x00014ff62c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(pLVar1);
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

// assignv<oo2net::vector<oo2net::LRMEntry>_> @ 14ff62c60

void __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::
assignv<oo2net::vector<oo2net::LRMEntry>_>
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          vector<oo2net::LRMEntry> *param_1)

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
    pLVar2 = vector_storage<oo2net::LRMEntry>::makefit1
                       ((vector_storage<oo2net::LRMEntry> *)this,uVar6,0);
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
                    /* WARNING: Could not recover jumptable at 0x00014ff62d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(pLVar2);
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

// construct<oo2net::LRM_*,oo2net::LRM_*_const_&> @ 14ff62da0

LRM ** __cdecl oo2net::construct<oo2net::LRM_*,oo2net::LRM_*_const_&>(LRM **param_1,LRM **param_2)

{
  if (param_1 != (LRM **)0x0) {
    *param_1 = *param_2;
  }
  return param_1;
}

// construct<oo2net::LRMEntry,oo2net::LRMEntry_const_&> @ 14ff62dc0

LRMEntry * __cdecl
oo2net::construct<oo2net::LRMEntry,oo2net::LRMEntry_const_&>(LRMEntry *param_1,LRMEntry *param_2)

{
  if (param_1 != (LRMEntry *)0x0) {
    *param_1 = *param_2;
  }
  return param_1;
}

// copy<oo2net::LRMEntry> @ 14ff62de0

void __cdecl oo2net::copy<oo2net::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2,ulong64 param_3)

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

// copy_construct<oo2net::LRM_*> @ 14ff62e10

void __cdecl oo2net::copy_construct<oo2net::LRM_*>(LRM **param_1,LRM **param_2)

{
  if (param_1 != (LRM **)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// copy_construct<oo2net::LRMEntry> @ 14ff62e30

void __cdecl oo2net::copy_construct<oo2net::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2)

{
  if (param_1 != (LRMEntry *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// copy_construct<oo2net::LRMEntry> @ 14ff62e50

void __cdecl
oo2net::copy_construct<oo2net::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2,ulong64 param_3)

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

// copy_construct_identical<oo2net::LRM_*> @ 14ff62e80

void __cdecl
oo2net::copy_construct_identical<oo2net::LRM_*>(LRM **param_1,LRM **param_2,ulong64 param_3)

{
  for (; param_3 != 0; param_3 = param_3 - 1) {
    if (param_1 != (LRM **)0x0) {
      *param_1 = *param_2;
    }
    param_1 = param_1 + 1;
  }
  return;
}

// default_construct<int> @ 14ff62eb0

int * __cdecl oo2net::default_construct<int>(int *param_1,ulong64 param_2)

{
  return param_1;
}

// default_construct<oo2net::LRMEntry> @ 14ff62ec0

LRMEntry * __cdecl oo2net::default_construct<oo2net::LRMEntry>(LRMEntry *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<int> @ 14ff62ed0

int * __cdecl oo2net::destruct<int>(int *param_1)

{
  return param_1;
}

// destruct<int> @ 14ff62ee0

int * __cdecl oo2net::destruct<int>(int *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2net::LRM_*> @ 14ff62ef0

LRM ** __cdecl oo2net::destruct<oo2net::LRM_*>(LRM **param_1)

{
  return param_1;
}

// destruct<oo2net::LRM_*> @ 14ff62f00

LRM ** __cdecl oo2net::destruct<oo2net::LRM_*>(LRM **param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2net::LRM> @ 14ff62f20

LRM * __cdecl oo2net::destruct<oo2net::LRM>(LRM *param_1)

{
  if (param_1->bloom_filter != (uint *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(param_1->bloom_filter);
    param_1->bloom_filter = (uint *)0x0;
  }
  *(undefined8 *)&(param_1->jumpIn).field_0x10 = 0;
  if (*(void **)&param_1->jumpIn != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&param_1->jumpIn);
  }
  *(undefined8 *)&param_1->jumpIn = 0;
  *(undefined8 *)&(param_1->jumpIn).field_0x8 = 0;
  *(undefined8 *)&(param_1->entries).field_0x10 = 0;
  if (*(void **)&param_1->entries != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&param_1->entries);
  }
  *(undefined8 *)&param_1->entries = 0;
  *(undefined8 *)&(param_1->entries).field_0x8 = 0;
  return param_1;
}

// destruct<oo2net::LRMCascade> @ 14ff62fb0

LRMCascade * __cdecl oo2net::destruct<oo2net::LRMCascade>(LRMCascade *param_1)

{
  _eh_vector_destructor_iterator_(param_1,0x18,8,vector<oo2net::LRM_*>::~vector<oo2net::LRM_*>);
  return param_1;
}

// destruct<oo2net::LRMEntry> @ 14ff62ff0

LRMEntry * __cdecl oo2net::destruct<oo2net::LRMEntry>(LRMEntry *param_1)

{
  return param_1;
}

// destruct<oo2net::LRMEntry> @ 14ff63000

LRMEntry * __cdecl oo2net::destruct<oo2net::LRMEntry>(LRMEntry *param_1,ulong64 param_2)

{
  return param_1;
}

// extend_construct_in_place<oo2net::LRM_*_const_&> @ 14ff63020

void __thiscall
oo2net::vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::
extend_construct_in_place<oo2net::LRM_*_const_&>
          (vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this,LRM **param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  LRM **ppLVar3;
  undefined8 *puVar4;
  
  uVar2 = this->m_size;
  uVar1 = uVar2 + 1;
  if ((ulonglong)this->_padding_ < uVar1) {
    ppLVar3 = vector_storage<oo2net::LRM_*>::makefit1
                        ((vector_storage<oo2net::LRM_*> *)this,uVar1,uVar2);
    puVar4 = (undefined8 *)(this->_padding_ + uVar2 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *param_1;
    }
    this->m_size = uVar1;
    if (ppLVar3 != (LRM **)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(ppLVar3);
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

// extend_construct_in_place<oo2net::LRMEntry_const_&> @ 14ff630c0

void __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::
extend_construct_in_place<oo2net::LRMEntry_const_&>
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          LRMEntry *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  LRMEntry *pLVar3;
  LRMEntry *pLVar4;
  
  uVar2 = this->m_size;
  uVar1 = uVar2 + 1;
  if ((ulonglong)this->_padding_ < uVar1) {
    pLVar3 = vector_storage<oo2net::LRMEntry>::makefit1
                       ((vector_storage<oo2net::LRMEntry> *)this,uVar1,uVar2);
    pLVar4 = (LRMEntry *)(this->_padding_ + uVar2 * 8);
    if (pLVar4 != (LRMEntry *)0x0) {
      *pLVar4 = *param_1;
    }
    this->m_size = uVar1;
    if (pLVar3 != (LRMEntry *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(pLVar3);
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

// forward<oo2net::LRM_*_const_&> @ 14ff63150

LRM ** __cdecl oo2net::forward<oo2net::LRM_*_const_&>(LRM **param_1)

{
  return param_1;
}

// forward<oo2net::LRMEntry_const_&> @ 14ff63160

LRMEntry * __cdecl oo2net::forward<oo2net::LRMEntry_const_&>(LRMEntry *param_1)

{
  return param_1;
}

// move<int_&> @ 14ff63170

int * __cdecl oo2net::move<int_&>(int *param_1)

{
  return param_1;
}

// move<oo2net::LRM_*_&> @ 14ff63180

LRM ** __cdecl oo2net::move<oo2net::LRM_*_&>(LRM **param_1)

{
  return param_1;
}

// move<oo2net::LRMEntry_&> @ 14ff63190

LRMEntry * __cdecl oo2net::move<oo2net::LRMEntry_&>(LRMEntry *param_1)

{
  return param_1;
}

// move<oo2net::LRMEntry> @ 14ff631a0

void __cdecl oo2net::move<oo2net::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2,ulong64 param_3)

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

// move_construct<int> @ 14ff63200

void __cdecl oo2net::move_construct<int>(int *param_1,int *param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<int> @ 14ff63210

void __cdecl oo2net::move_construct<int>(int *param_1,int *param_2,ulong64 param_3)

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

// move_construct<oo2net::LRM_*> @ 14ff63240

void __cdecl oo2net::move_construct<oo2net::LRM_*>(LRM **param_1,LRM **param_2)

{
  if (param_1 != (LRM **)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<oo2net::LRM_*> @ 14ff63260

void __cdecl oo2net::move_construct<oo2net::LRM_*>(LRM **param_1,LRM **param_2,ulong64 param_3)

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

// move_construct<oo2net::LRMEntry> @ 14ff63290

void __cdecl oo2net::move_construct<oo2net::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2)

{
  if (param_1 != (LRMEntry *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<oo2net::LRMEntry> @ 14ff632b0

void __cdecl
oo2net::move_construct<oo2net::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2,ulong64 param_3)

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

// stdsort<oo2net::LRMEntry_*,oo2net::stdless<oo2net::LRMEntry>_> @ 14ff632e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2net::stdsort<oo2net::LRMEntry_*,oo2net::stdless<oo2net::LRMEntry>_>
          (LRMEntry *param_1,LRMEntry *param_2,stdless<oo2net::LRMEntry> param_3)

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
LAB_14ff63390:
    do {
      if (1 < uVar14) {
        if (uVar14 == 2) {
          if (pLVar13->hash < param_1->hash) {
            LVar3 = *param_1;
            *param_1 = *pLVar13;
LAB_14ff6360e:
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
                goto code_r0x00014ff63420;
              }
              LVar3 = *pLVar5;
              *pLVar5 = *param_1;
              *param_1 = LVar3;
              LVar3 = *pLVar5;
              *pLVar5 = *pLVar13;
            }
            else {
LAB_14ff63411:
              LVar3 = *param_1;
              *param_1 = *pLVar13;
            }
LAB_14ff6341a:
            *pLVar13 = LVar3;
          }
          else if (uVar1 < uVar2) {
            if (uVar6 < uVar1) {
              LVar3 = *pLVar5;
              *pLVar5 = *pLVar13;
              goto LAB_14ff6341a;
            }
            LVar3 = *param_1;
            *param_1 = *pLVar5;
            *pLVar5 = LVar3;
            goto LAB_14ff63411;
          }
code_r0x00014ff63420:
          if (4 < uVar14) {
            if (puVar17 == local_48) {
LAB_14ff63525:
              uVar7 = uVar7 - 1;
              pLVar5 = pLVar5 + -1;
              uVar12 = uVar7 * 2 + 1;
              pLVar10 = pLVar5;
LAB_14ff63540:
              pLVar9 = param_1 + uVar12;
              pLVar11 = pLVar9 + 1;
              if ((pLVar11 <= pLVar13) && (pLVar9->hash < pLVar11->hash)) {
                uVar12 = uVar12 + 1;
                pLVar9 = pLVar11;
              }
              if (pLVar10->hash < pLVar9->hash) goto code_r0x00014ff6355f;
              goto LAB_14ff6357b;
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
            goto LAB_14ff63390;
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
                goto LAB_14ff6360e;
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
LAB_14ff63611:
      uVar14 = puVar17[-1];
      param_1 = (LRMEntry *)puVar17[-3];
      pLVar13 = (LRMEntry *)puVar17[-2];
      puVar17 = puVar17 + -3;
    } while (uVar14 != 0);
  }
  return;
code_r0x00014ff6355f:
  LVar3 = *pLVar10;
  uVar12 = uVar12 * 2 + 1;
  *pLVar10 = *pLVar9;
  *pLVar9 = LVar3;
  pLVar10 = pLVar9;
  if (uVar14 <= uVar12) {
LAB_14ff6357b:
    if (uVar7 == 0) {
      uVar14 = uVar14 - 1;
      LVar3 = *param_1;
      uVar12 = 1;
      *param_1 = *pLVar13;
      *pLVar13 = LVar3;
      pLVar13 = pLVar13 + -1;
      pLVar10 = param_1;
      if (uVar14 < 2) goto LAB_14ff63611;
      goto LAB_14ff63540;
    }
    goto LAB_14ff63525;
  }
  goto LAB_14ff63540;
}

// stdsort<oo2net::LRMEntry> @ 14ff63690

void __cdecl oo2net::stdsort<oo2net::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2)

{
  undefined1 local_res18;
  
  stdsort<oo2net::LRMEntry_*,oo2net::stdless<oo2net::LRMEntry>_>(param_1,param_2,local_res18);
  return;
}

// swap3<oo2net::LRMEntry> @ 14ff636b0

void __cdecl oo2net::swap3<oo2net::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2,LRMEntry *param_3)

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

// swap<oo2net::LRMEntry_*> @ 14ff636d0

void __cdecl oo2net::swap<oo2net::LRMEntry_*>(LRMEntry **param_1,LRMEntry **param_2)

{
  LRMEntry *pLVar1;
  
  pLVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pLVar1;
  return;
}

// swap<oo2net::LRMEntry> @ 14ff636f0

void __cdecl oo2net::swap<oo2net::LRMEntry>(LRMEntry *param_1,LRMEntry *param_2)

{
  LRMEntry LVar1;
  
  LVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = LVar1;
  return;
}

// swap<unsigned___int64> @ 14ff63710

void __cdecl oo2net::swap<unsigned___int64>(ulong64 *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// vector<oo2net::LRM_*> @ 14ff63730

vector<oo2net::LRM_*> * __thiscall
oo2net::vector<oo2net::LRM_*>::vector<oo2net::LRM_*>(vector<oo2net::LRM_*> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector<oo2net::LRMEntry> @ 14ff63750

vector<oo2net::LRMEntry> * __thiscall
oo2net::vector<oo2net::LRMEntry>::vector<oo2net::LRMEntry>(vector<oo2net::LRMEntry> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> @ 14ff63770

vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> * __thiscall
oo2net::vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::
vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>
          (vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> @ 14ff637a0

vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> * __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::
vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *param_1)

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
    pLVar2 = vector_storage<oo2net::LRMEntry>::makefit1
                       ((vector_storage<oo2net::LRMEntry> *)this,uVar1,0);
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
      (*g_fp_OodleNet_Plugin_Free)(pLVar2);
    }
  }
  return this;
}

// vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> @ 14ff63850

vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> * __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::
vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> @ 14ff63870

vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> * __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::
vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> @ 14ff63890

vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> * __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::
vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *param_1)

{
  vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::
  vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>
            ((vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *)this,
             (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *)param_1);
  return this;
}

// vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> @ 14ff638b0

vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> * __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::
vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_storage<oo2net::LRM_*> @ 14ff638d0

vector_storage<oo2net::LRM_*> * __thiscall
oo2net::vector_storage<oo2net::LRM_*>::vector_storage<oo2net::LRM_*>
          (vector_storage<oo2net::LRM_*> *this)

{
  this->m_begin = (LRM **)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage<oo2net::LRMEntry> @ 14ff638f0

vector_storage<oo2net::LRMEntry> * __thiscall
oo2net::vector_storage<oo2net::LRMEntry>::vector_storage<oo2net::LRMEntry>
          (vector_storage<oo2net::LRMEntry> *this)

{
  this->m_begin = (LRMEntry *)0x0;
  this->m_capacity = 0;
  return this;
}

// LRM @ 14ff63910

LRM * __thiscall oo2net::LRM::LRM(LRM *this)

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

// LRMCascade @ 14ff63960

LRMCascade * __thiscall oo2net::LRMCascade::LRMCascade(LRMCascade *this)

{
  _eh_vector_constructor_iterator_
            (this,0x18,8,vector<oo2net::LRM_*>::vector<oo2net::LRM_*>,
             vector<oo2net::LRM_*>::~vector<oo2net::LRM_*>);
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

// ~vector<oo2net::LRM_*> @ 14ff639e0

void __thiscall oo2net::vector<oo2net::LRM_*>::~vector<oo2net::LRM_*>(vector<oo2net::LRM_*> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector<oo2net::LRMEntry> @ 14ff63a40

void __thiscall
oo2net::vector<oo2net::LRMEntry>::~vector<oo2net::LRMEntry>(vector<oo2net::LRMEntry> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> @ 14ff63aa0

void __thiscall
oo2net::vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::
~vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>
          (vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> @ 14ff63b00

void __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::
~vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> @ 14ff63b60

void __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::
~vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> @ 14ff63bc0

void __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::
~vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_storage<oo2net::LRM_*> @ 14ff63c20

void __thiscall
oo2net::vector_storage<oo2net::LRM_*>::~vector_storage<oo2net::LRM_*>
          (vector_storage<oo2net::LRM_*> *this)

{
  if (this->m_begin != (LRM **)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (LRM **)0x0;
  return;
}

// ~vector_storage<oo2net::LRMEntry> @ 14ff63c60

void __thiscall
oo2net::vector_storage<oo2net::LRMEntry>::~vector_storage<oo2net::LRMEntry>
          (vector_storage<oo2net::LRMEntry> *this)

{
  if (this->m_begin != (LRMEntry *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (LRMEntry *)0x0;
  return;
}

// ~LRM @ 14ff63ca0

void __thiscall oo2net::LRM::~LRM(LRM *this)

{
  if (this->bloom_filter != (uint *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->bloom_filter);
    this->bloom_filter = (uint *)0x0;
  }
  *(undefined8 *)&(this->jumpIn).field_0x10 = 0;
  if (*(void **)&this->jumpIn != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&this->jumpIn);
  }
  *(undefined8 *)&this->jumpIn = 0;
  *(undefined8 *)&(this->jumpIn).field_0x8 = 0;
  *(undefined8 *)&(this->entries).field_0x10 = 0;
  if (*(void **)&this->entries != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&this->entries);
  }
  *(undefined8 *)&this->entries = 0;
  *(undefined8 *)&(this->entries).field_0x8 = 0;
  return;
}

// ~LRMCascade @ 14ff63d20

void __thiscall oo2net::LRMCascade::~LRMCascade(LRMCascade *this)

{
  _eh_vector_destructor_iterator_(this,0x18,8,vector<oo2net::LRM_*>::~vector<oo2net::LRM_*>);
  return;
}

// operator[] @ 14ff63d60

LRM ** __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::operator[]
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this,ulong64 param_1)

{
  return (LRM **)(*(longlong *)this + param_1 * 8);
}

// operator[] @ 14ff63d70

LRM ** __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::operator[]
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this,ulong64 param_1)

{
  return (LRM **)(*(longlong *)this + param_1 * 8);
}

// operator< @ 14ff63d80

bool __thiscall oo2net::LRMEntry::operator<(LRMEntry *this,LRMEntry *param_1)

{
  return this->hash < param_1->hash;
}

// operator() @ 14ff63d90

bool __thiscall
oo2net::stdless<oo2net::LRMEntry>::operator()
          (stdless<oo2net::LRMEntry> *this,LRMEntry *param_1,LRMEntry *param_2)

{
  return param_1->hash < param_2->hash;
}

// operator() @ 14ff63da0

void __thiscall
oo2net::swap_functor<oo2net::LRMEntry_*>::operator()
          (swap_functor<oo2net::LRMEntry_*> *this,LRMEntry **param_1,LRMEntry **param_2)

{
  LRMEntry *pLVar1;
  
  pLVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pLVar1;
  return;
}

// operator() @ 14ff63dc0

void __thiscall
oo2net::swap_functor<oo2net::LRMEntry>::operator()
          (swap_functor<oo2net::LRMEntry> *this,LRMEntry *param_1,LRMEntry *param_2)

{
  LRMEntry LVar1;
  
  LVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = LVar1;
  return;
}

// operator() @ 14ff63de0

void __thiscall
oo2net::swap_functor<unsigned___int64>::operator()
          (swap_functor<unsigned___int64> *this,ulong64 *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// FreeBloom @ 14ff63e00

void __thiscall oo2net::LRM::FreeBloom(LRM *this)

{
  if (this->bloom_filter != (uint *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->bloom_filter);
    this->bloom_filter = (uint *)0x0;
  }
  return;
}

// GetNumBytesZeroNeverAllR @ 14ff63e30

int __cdecl oo2net::GetNumBytesZeroNeverAllR(ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (uint)(uVar1 >> 3) & 0x1fffffff;
}

// LRMScannerWindowed_FindMatchAndRoll @ 14ff63e40

int __cdecl
oo2net::LRMScannerWindowed_FindMatchAndRoll
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

// LRMScannerWindowed_Init @ 14ff63f40

void __cdecl
oo2net::LRMScannerWindowed_Init
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
    if (param_2 != (LRMSet *)0x0) goto LAB_14ff6401b;
  }
  else {
    param_1->_padding_ = (longlong)param_2;
    lVar6 = **(longlong **)&param_2->lrms;
    if (lVar6 == 0) {
      iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x4e1,
                                 "oo2net::LRMScanner_Init","lrmfirst != NULL");
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
LAB_14ff6401b:
    lVar6 = *(longlong *)&(param_2->lrms).field_0x10;
    if (lVar6 != 0) {
      puVar4 = *(uchar **)(*(longlong *)(*(longlong *)&param_2->lrms + -8 + lVar6 * 8) + 0x38);
      goto LAB_14ff64036;
    }
  }
  puVar4 = (uchar *)0x0;
LAB_14ff64036:
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

// LRMScanner_FindMatch @ 14ff640a0

int __cdecl
oo2net::LRMScanner_FindMatch(LRMScanner *param_1,uchar *param_2,uchar *param_3,long64 *param_4)

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

// LRMScanner_FindMatchAndRoll @ 14ff64160

int __cdecl
oo2net::LRMScanner_FindMatchAndRoll
          (LRMScanner *param_1,uchar *param_2,uchar *param_3,long64 *param_4)

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

// LRMScanner_Init @ 14ff64240

void __cdecl
oo2net::LRMScanner_Init
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
                                   "oo2net::LRMScanner_Init","lrmfirst != NULL"), iVar3 != 0)) {
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

// LRMScanner_Roll @ 14ff64300

void __cdecl oo2net::LRMScanner_Roll(LRMScanner *param_1,uchar *param_2)

{
  param_1->lrm_hash =
       (param_1->lrm_hash - (uint)*param_2 * param_1->lrm_hashMulEnd) * 0x2c2c57ed +
       (uint)param_2[param_1->lrm_hashLength];
  return;
}

// LRMSet_CheckWholeMatchQuantum @ 14ff64340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2net::LRMSet_CheckWholeMatchQuantum(LRMSet *param_1,uchar *param_2,long64 param_3,int param_4)

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
                                   "oo2net::LRMSet_CheckWholeMatchQuantum","curPtr >= lrmset_end"),
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
                                   "oo2net::LRMScanner_Init","lrmfirst != NULL"), iVar4 != 0)) {
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
      goto LAB_14ff6449f;
    }
  }
  local_228.lrm_window_base = (byte *)0x0;
LAB_14ff6449f:
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

// LRMSet_FindMatch @ 14ff64780

int __cdecl
oo2net::LRMSet_FindMatch
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
          goto LAB_14ff649e2;
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
LAB_14ff64970:
              uVar8 = *(ulonglong *)((lVar11 - (longlong)param_3) + (longlong)puVar5) ^ *puVar5;
              if (uVar8 == 0) goto code_r0x00014ff6497d;
              uVar9 = 0;
              if (uVar8 != 0) {
                for (; (uVar8 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
              pcVar10 = (char *)(((uVar9 >> 3) - (longlong)param_3) + (longlong)puVar5);
              goto LAB_14ff649a5;
            }
LAB_14ff64986:
            pcVar10 = (char *)((longlong)puVar5 - (longlong)param_3);
            for (; (puVar5 < param_4 &&
                   ((char)*puVar5 == *(char *)((longlong)puVar5 + (lVar11 - (longlong)param_3))));
                puVar5 = (ulonglong *)((longlong)puVar5 + 1)) {
              pcVar10 = pcVar10 + 1;
            }
LAB_14ff649a5:
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
LAB_14ff649e2:
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
code_r0x00014ff6497d:
  puVar5 = puVar5 + 1;
  if (param_4 + -8 < puVar5) goto LAB_14ff64986;
  goto LAB_14ff64970;
}

// LRMSet_GetBasePtr @ 14ff64a80

uchar * __cdecl oo2net::LRMSet_GetBasePtr(LRMSet *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(param_1->lrms).field_0x10;
  if (lVar1 == 0) {
    return (uchar *)0x0;
  }
  return *(uchar **)(*(longlong *)(*(longlong *)&param_1->lrms + -8 + lVar1 * 8) + 0x38);
}

// LRMSet_GetEndPtr @ 14ff64aa0

uchar * __cdecl oo2net::LRMSet_GetEndPtr(LRMSet *param_1)

{
  if (*(longlong *)&(param_1->lrms).field_0x10 == 0) {
    return (uchar *)0x0;
  }
  return (uchar *)(*(longlong *)(**(longlong **)&param_1->lrms + 0x48) +
                  *(longlong *)(**(longlong **)&param_1->lrms + 0x38));
}

// LRM_AllocCascade @ 14ff64ac0

LRMCascade * __cdecl oo2net::LRM_AllocCascade(void)

{
  LRMCascade *_Dst;
  
  _Dst = (*g_fp_OodleNet_Plugin_MallocAligned)(0xf8,0x10);
  if (_Dst == (LRMCascade *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0xf8);
  }
  if (_Dst != (LRMCascade *)0x0) {
    memset(_Dst,0,0xf8);
    _eh_vector_constructor_iterator_
              (_Dst,0x18,8,vector<oo2net::LRM_*>::vector<oo2net::LRM_*>,
               vector<oo2net::LRM_*>::~vector<oo2net::LRM_*>);
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

// LRM_CascadeFillUntil @ 14ff64ba0

void __cdecl oo2net::LRM_CascadeFillUntil(LRMCascade *param_1,int param_2)

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
    pLVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(0x70,0x10);
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
      pLVar4 = (*g_fp_OodleNet_Plugin_MallocAligned)(0x70,0x10);
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
        (*g_fp_OodleNet_Plugin_Free)(pLVar3->bloom_filter);
        pLVar3->bloom_filter = (uint *)0x0;
      }
      *(undefined8 *)&(pLVar3->jumpIn).field_0x10 = 0;
      if (*(void **)&pLVar3->jumpIn != (void *)0x0) {
        (*g_fp_OodleNet_Plugin_Free)(*(void **)&pLVar3->jumpIn);
      }
      *(undefined8 *)&pLVar3->jumpIn = 0;
      *(undefined8 *)&(pLVar3->jumpIn).field_0x8 = 0;
      *(undefined8 *)&(pLVar3->entries).field_0x10 = 0;
      if (*(void **)&pLVar3->entries != (void *)0x0) {
        (*g_fp_OodleNet_Plugin_Free)(*(void **)&pLVar3->entries);
      }
      *(undefined8 *)&pLVar3->entries = 0;
      *(undefined8 *)&(pLVar3->entries).field_0x8 = 0;
      (*g_fp_OodleNet_Plugin_Free)(pLVar3);
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

// LRM_CascadeGetChunkIndex @ 14ff64e20

int __cdecl oo2net::LRM_CascadeGetChunkIndex(LRMCascade *param_1,uchar *param_2)

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

// LRM_CascadeGetChunkIndex_Align @ 14ff64e60

int __cdecl
oo2net::LRM_CascadeGetChunkIndex_Align(LRMCascade *param_1,uchar *param_2,uchar *param_3)

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

// LRM_CascadeGetSet @ 14ff64ed0

void __cdecl oo2net::LRM_CascadeGetSet(LRMCascade *param_1,LRMSet *param_2,uchar *param_3)

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

// LRM_CascadeGetSetByChunkIndex @ 14ff64f20

void __cdecl oo2net::LRM_CascadeGetSetByChunkIndex(LRMCascade *param_1,LRMSet *param_2,int param_3)

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
                                   "oo2net::LRM_CascadeGetSetByChunkIndex","! casc->lrms[0].empty()"
                                  ), iVar6 != 0)) {
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
          ppLVar7 = vector_storage<oo2net::LRM_*>::makefit1
                              ((vector_storage<oo2net::LRM_*> *)param_2,uVar1,uVar2);
          puVar8 = (undefined8 *)(*(longlong *)&param_2->lrms + uVar2 * 8);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = uVar3;
          }
          *(ulonglong *)&(param_2->lrms).field_0x10 = uVar1;
          if (ppLVar7 != (LRM **)0x0) {
            (*g_fp_OodleNet_Plugin_Free)(ppLVar7);
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
          ppLVar7 = vector_storage<oo2net::LRM_*>::makefit1
                              ((vector_storage<oo2net::LRM_*> *)param_2,uVar1,uVar2);
          puVar8 = (undefined8 *)(*(longlong *)&param_2->lrms + uVar2 * 8);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = uVar3;
          }
          *(ulonglong *)&(param_2->lrms).field_0x10 = uVar1;
          if (ppLVar7 != (LRM **)0x0) {
            (*g_fp_OodleNet_Plugin_Free)(ppLVar7);
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

// LRM_CascadeGetSet_Align @ 14ff650a0

void __cdecl
oo2net::LRM_CascadeGetSet_Align(LRMCascade *param_1,LRMSet *param_2,uchar *param_3,uchar *param_4)

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

// LRM_CascadeGetSet_Align_UpdateIncremental @ 14ff65120

void __cdecl
oo2net::LRM_CascadeGetSet_Align_UpdateIncremental
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

// LRM_CascadeGetSet_UpdateIncremental @ 14ff651c0

void __cdecl
oo2net::LRM_CascadeGetSet_UpdateIncremental(LRMCascade *param_1,LRMSet *param_2,uchar *param_3)

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

// LRM_Create @ 14ff65240

LRM * __cdecl oo2net::LRM_Create(uchar *param_1,long64 param_2,int param_3,int param_4,int param_5)

{
  LRM *pLVar1;
  
  pLVar1 = (*g_fp_OodleNet_Plugin_MallocAligned)(0x70,0x10);
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

// LRM_CreateCascade @ 14ff65320

LRMCascade * __cdecl
oo2net::LRM_CreateCascade
          (uchar *param_1,long64 param_2,int param_3,int param_4,int param_5,long64 param_6,
          int param_7)

{
  bool bVar1;
  LRMCascade *pLVar2;
  
  pLVar2 = LRM_AllocCascade();
  LRM_FillCascadeSetup(pLVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  do {
    bVar1 = LRM_FillCascadeIncrement(pLVar2);
  } while (bVar1);
  return pLVar2;
}

// LRM_CreateCascadeIncremental @ 14ff653c0

LRMCascade * __cdecl
oo2net::LRM_CreateCascadeIncremental
          (uchar *param_1,long64 param_2,int param_3,int param_4,int param_5,long64 param_6,
          int param_7)

{
  LRMCascade *pLVar1;
  
  pLVar1 = LRM_AllocCascade();
  LRM_FillCascadeSetup(pLVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return pLVar1;
}

// LRM_CreateMerge @ 14ff65460

LRM * __cdecl oo2net::LRM_CreateMerge(LRM *param_1,LRM *param_2,int param_3)

{
  LRM *pLVar1;
  
  pLVar1 = (*g_fp_OodleNet_Plugin_MallocAligned)(0x70,0x10);
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

// LRM_DeDupe @ 14ff65520

void __cdecl oo2net::LRM_DeDupe(LRM *param_1)

{
  vector<oo2net::LRMEntry> *this;
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
  vector_storage<oo2net::LRMEntry> local_20;
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
         (pLVar6 = vector_storage<oo2net::LRMEntry>::makefit1
                             ((vector_storage<oo2net::LRMEntry> *)this,uVar12,uVar4),
         pLVar6 != (LRMEntry *)0x0)) {
        (*g_fp_OodleNet_Plugin_Free)(pLVar6);
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
        pLVar7 = vector_storage<oo2net::LRMEntry>::makefit1(&local_20,uVar12,0);
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
          (*g_fp_OodleNet_Plugin_Free)(pLVar7);
        }
      }
      *(ulong64 *)&(param_1->entries).field_0x10 = uVar12;
      pvVar5 = *(void **)&this->field_0x0;
      *(LRMEntry **)&this->field_0x0 = pLVar17;
      *(ulong64 *)&(param_1->entries).field_0x8 = local_20.m_capacity;
      if (pvVar5 != (void *)0x0) {
        (*g_fp_OodleNet_Plugin_Free)(pvVar5);
      }
    }
  }
  return;
}

// LRM_Destroy @ 14ff65760

void __cdecl oo2net::LRM_Destroy(LRM *param_1)

{
  if (param_1->bloom_filter != (uint *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(param_1->bloom_filter);
    param_1->bloom_filter = (uint *)0x0;
  }
  *(undefined8 *)&(param_1->jumpIn).field_0x10 = 0;
  if (*(void **)&param_1->jumpIn != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&param_1->jumpIn);
  }
  *(undefined8 *)&param_1->jumpIn = 0;
  *(undefined8 *)&(param_1->jumpIn).field_0x8 = 0;
  *(undefined8 *)&(param_1->entries).field_0x10 = 0;
  if (*(void **)&param_1->entries != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&param_1->entries);
  }
  *(undefined8 *)&param_1->entries = 0;
  *(undefined8 *)&(param_1->entries).field_0x8 = 0;
                    /* WARNING: Could not recover jumptable at 0x00014ff657e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// LRM_DestroyCascade @ 14ff65800

void __cdecl oo2net::LRM_DestroyCascade(LRMCascade *param_1)

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
            (*g_fp_OodleNet_Plugin_Free)(*(void **)((longlong)pvVar1 + 0x28));
            *(undefined8 *)((longlong)pvVar1 + 0x28) = 0;
          }
          *(undefined8 *)((longlong)pvVar1 + 0x60) = 0;
          if (*(void **)((longlong)pvVar1 + 0x50) != (void *)0x0) {
            (*g_fp_OodleNet_Plugin_Free)(*(void **)((longlong)pvVar1 + 0x50));
          }
          *(undefined8 *)((longlong)pvVar1 + 0x50) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x58) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
          if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
            (*g_fp_OodleNet_Plugin_Free)(*(void **)((longlong)pvVar1 + 8));
          }
          *(undefined8 *)((longlong)pvVar1 + 8) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
          (*g_fp_OodleNet_Plugin_Free)(pvVar1);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *plVar3);
    }
    plVar3 = plVar3 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  _eh_vector_destructor_iterator_(param_1,0x18,8,vector<oo2net::LRM_*>::~vector<oo2net::LRM_*>);
                    /* WARNING: Could not recover jumptable at 0x00014ff658ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// LRM_Fill @ 14ff65900

LRM * __cdecl
oo2net::LRM_Fill(LRM *param_1,uchar *param_2,long64 param_3,int param_4,int param_5,int param_6)

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
  LRMEntry *pLVar12;
  longlong lVar13;
  LRMEntry local_res10;
  
  if ((param_3 < param_6) &&
     (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x173,
                                 "oo2net::LRM_Fill","bufSize >= hash_length"), iVar4 != 0)) {
    pcVar3 = (code *)swi(3);
    pLVar6 = (LRM *)(*pcVar3)();
    return pLVar6;
  }
  if ((param_6 < 8) &&
     (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x174,
                                 "oo2net::LRM_Fill","hash_length >= LRM_MIN_MATCH_LEN"), iVar4 != 0)
     ) {
    pcVar3 = (code *)swi(3);
    pLVar6 = (LRM *)(*pcVar3)();
    return pLVar6;
  }
  if ((0x40000000 < param_3) &&
     (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x178,
                                 "oo2net::LRM_Fill","bufSize <= (1<<30)"), iVar4 != 0)) {
    pcVar3 = (code *)swi(3);
    pLVar6 = (LRM *)(*pcVar3)();
    return pLVar6;
  }
  lVar13 = param_3 - param_6;
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
  uVar2 = *(ulonglong *)&(param_1->entries).field_0x10;
  uVar7 = lVar13 / (longlong)param_4 + 2;
  if (uVar7 < uVar2) {
    *(ulonglong *)&(param_1->entries).field_0x10 = uVar7;
  }
  else {
    if ((*(ulonglong *)&(param_1->entries).field_0x8 < uVar7) &&
       (pLVar8 = vector_storage<oo2net::LRMEntry>::makefit1
                           ((vector_storage<oo2net::LRMEntry> *)&param_1->entries,uVar7,uVar2),
       pLVar8 != (LRMEntry *)0x0)) {
      (*g_fp_OodleNet_Plugin_Free)(pLVar8);
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
  pLVar12 = pLVar8;
  if (-1 < lVar13) {
    do {
      uVar5 = LRM_InitialHash(param_2 + (longlong)&pLVar9->hash,param_6);
      if (uVar5 != uVar10) {
        pLVar11 = (LRMEntry *)(ulonglong)((int)pLVar11 + 1);
        pLVar12->hash = uVar5;
        pLVar12->pos32 = (uint)pLVar9;
        pLVar12 = pLVar12 + 1;
        uVar10 = uVar5;
      }
      iVar4 = (int)pLVar11;
      pLVar9 = (LRMEntry *)((longlong)&pLVar9->hash + (longlong)param_4);
    } while ((longlong)pLVar9 <= lVar13);
    uVar7 = *(ulonglong *)&(param_1->entries).field_0x10;
  }
  uVar2 = (longlong)iVar4 + 1;
  if (uVar2 < uVar7) {
    *(ulonglong *)&(param_1->entries).field_0x10 = uVar2;
  }
  else {
    if ((*(ulonglong *)&(param_1->entries).field_0x8 < uVar2) &&
       (pLVar9 = vector_storage<oo2net::LRMEntry>::makefit1
                           ((vector_storage<oo2net::LRMEntry> *)&param_1->entries,uVar2,uVar7),
       pLVar9 != (LRMEntry *)0x0)) {
      (*g_fp_OodleNet_Plugin_Free)(pLVar9);
    }
    puVar1 = &(param_1->entries).field_0x10;
    *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar2 - uVar7);
  }
  pLVar9 = pLVar8 + iVar4;
  stdsort<oo2net::LRMEntry_*,oo2net::stdless<oo2net::LRMEntry>_>(pLVar8,pLVar9,param_6._0_1_);
  local_res10.pos32 = pLVar9[-1].pos32;
  local_res10.hash = 0xffffffff;
  *pLVar9 = local_res10;
  LRM_DeDupe(param_1);
  LRM_MakeJump(param_1,param_5);
  return param_1;
}

// LRM_FillCascade @ 14ff65b60

void __cdecl
oo2net::LRM_FillCascade
          (LRMCascade *param_1,uchar *param_2,long64 param_3,int param_4,int param_5,int param_6,
          long64 param_7,int param_8)

{
  bool bVar1;
  
  LRM_FillCascadeSetup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  do {
    bVar1 = LRM_FillCascadeIncrement(param_1);
  } while (bVar1);
  return;
}

// LRM_FillCascadeIncrement @ 14ff65bc0

bool __cdecl oo2net::LRM_FillCascadeIncrement(LRMCascade *param_1)

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
  pLVar4 = (*g_fp_OodleNet_Plugin_MallocAligned)(0x70,0x10);
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
      pLVar5 = (*g_fp_OodleNet_Plugin_MallocAligned)(0x70,0x10);
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

// LRM_FillCascadeSetup @ 14ff65de0

void __cdecl
oo2net::LRM_FillCascadeSetup
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
      ppLVar1 = vector_storage<oo2net::LRM_*>::makefit1
                          ((vector_storage<oo2net::LRM_*> *)this,uVar7,0);
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
        (*g_fp_OodleNet_Plugin_Free)(ppLVar1);
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

// LRM_FillMerge @ 14ff65f40

LRM * __cdecl oo2net::LRM_FillMerge(LRM *param_1,LRM *param_2,LRM *param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  uchar *puVar4;
  LRMEntry *pLVar5;
  longlong lVar6;
  ulong64 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  bool bVar27;
  ulonglong uVar15;
  
  param_1->hash_length = param_2->hash_length;
  param_1->hash_mul_end = param_2->hash_mul_end;
  puVar4 = param_2->chunkBasePtr;
  lVar25 = (longlong)param_3->chunkBasePtr - (longlong)puVar4;
  param_1->chunkBasePtr = puVar4;
  lVar18 = param_3->bufSize + lVar25;
  param_1->bufSize = lVar18;
  if (lVar18 < 0x80000000) {
    uVar11 = 0;
    param_1->matchBasePtr = puVar4;
    uVar14 = uVar11;
    if (*(longlong *)&(param_2->entries).field_0x10 != 0) {
      uVar14 = *(ulonglong *)&param_2->entries;
    }
    iVar24 = *(int *)&(param_2->entries).field_0x10;
    uVar17 = uVar11;
    if (*(longlong *)&(param_3->entries).field_0x10 != 0) {
      uVar17 = *(ulonglong *)&param_3->entries;
    }
    uVar21 = *(ulonglong *)&(param_1->entries).field_0x10;
    iVar23 = *(int *)&(param_3->entries).field_0x10 + -1;
    uVar9 = (ulonglong)(iVar24 + iVar23);
    if (uVar9 < uVar21) {
      *(ulonglong *)&(param_1->entries).field_0x10 = uVar9;
    }
    else {
      if ((*(ulonglong *)&(param_1->entries).field_0x8 < uVar9) &&
         (pLVar5 = vector_storage<oo2net::LRMEntry>::makefit1
                             ((vector_storage<oo2net::LRMEntry> *)&param_1->entries,uVar9,uVar21),
         pLVar5 != (LRMEntry *)0x0)) {
        (*g_fp_OodleNet_Plugin_Free)(pLVar5);
      }
      puVar1 = &(param_1->entries).field_0x10;
      *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar9 - uVar21);
      uVar9 = *(ulonglong *)&(param_1->entries).field_0x10;
    }
    uVar21 = uVar11;
    if (uVar9 != 0) {
      uVar21 = *(ulonglong *)&param_1->entries;
    }
    lVar18 = (longlong)iVar24 + -1;
    lVar22 = (longlong)iVar23;
    uVar9 = uVar11;
    uVar15 = uVar11;
    uVar16 = uVar11;
    uVar19 = uVar11;
    uVar26 = uVar11;
    do {
      uVar3 = *(uint *)(uVar17 + uVar19 * 8);
      uVar13 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar13;
      lVar6 = uVar9 * 8;
      iVar24 = (int)lVar25;
      if (uVar3 < *(uint *)(uVar14 + uVar11 * 8)) {
        *(uint *)(uVar21 + lVar6) = uVar3;
        uVar26 = (ulonglong)((int)uVar26 + 1);
        lVar2 = uVar19 * 8;
        uVar19 = uVar19 + 1;
        *(int *)(lVar6 + 4 + uVar21) = *(int *)(uVar17 + 4 + lVar2) + iVar24;
        bVar27 = SBORROW8(uVar19,lVar22);
        lVar6 = uVar19 - lVar22;
      }
      else {
        lVar2 = uVar11 * 8;
        uVar16 = (ulonglong)((int)uVar16 + 1);
        uVar11 = uVar11 + 1;
        *(undefined8 *)(uVar21 + lVar6) = *(undefined8 *)(uVar14 + lVar2);
        bVar27 = SBORROW8(uVar11,lVar18);
        lVar6 = uVar11 - lVar18;
      }
      uVar9 = uVar9 + 1;
    } while (bVar27 != lVar6 < 0);
    lVar25 = (longlong)(int)uVar26;
    if (lVar25 < lVar22) {
      lVar6 = (longlong)(int)uVar13;
      uVar13 = uVar13 + (iVar23 - (int)uVar26);
      puVar20 = (undefined4 *)(uVar21 + lVar6 * 8);
      do {
        *puVar20 = *(undefined4 *)(uVar17 + lVar25 * 8);
        lVar6 = lVar25 * 8;
        lVar25 = lVar25 + 1;
        puVar20[1] = *(int *)(uVar17 + 4 + lVar6) + iVar24;
        puVar20 = puVar20 + 2;
      } while (lVar25 < lVar22);
    }
    lVar25 = (longlong)(int)uVar16;
    if (lVar25 < lVar18) {
      puVar12 = (undefined8 *)(uVar21 + (longlong)(int)uVar13 * 8);
      uVar13 = uVar13 + ((int)lVar18 - (int)uVar16);
      do {
        lVar22 = lVar25 * 8;
        lVar25 = lVar25 + 1;
        *puVar12 = *(undefined8 *)(uVar14 + lVar22);
        puVar12 = puVar12 + 1;
      } while (lVar25 < lVar18);
    }
    uVar11 = *(ulonglong *)&(param_1->entries).field_0x10;
    uVar7 = (ulong64)(int)uVar13;
    if (uVar7 < uVar11) {
      *(ulong64 *)&(param_1->entries).field_0x10 = uVar7;
    }
    else {
      if ((*(ulonglong *)&(param_1->entries).field_0x8 < uVar7) &&
         (pLVar5 = vector_storage<oo2net::LRMEntry>::makefit1
                             ((vector_storage<oo2net::LRMEntry> *)&param_1->entries,uVar7,uVar11),
         pLVar5 != (LRMEntry *)0x0)) {
        (*g_fp_OodleNet_Plugin_Free)(pLVar5);
      }
      puVar1 = &(param_1->entries).field_0x10;
      *(ulong64 *)puVar1 = *(longlong *)puVar1 + (uVar7 - uVar11);
      uVar7 = *(ulong64 *)&(param_1->entries).field_0x10;
    }
    uVar11 = uVar7 + 1;
    if (*(ulonglong *)&(param_1->entries).field_0x8 < uVar11) {
      pLVar5 = vector_storage<oo2net::LRMEntry>::makefit1
                         ((vector_storage<oo2net::LRMEntry> *)&param_1->entries,uVar11,uVar7);
      puVar12 = (undefined8 *)(*(longlong *)&param_1->entries + uVar7 * 8);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = *(undefined8 *)(uVar14 + lVar18 * 8);
      }
      *(ulonglong *)&(param_1->entries).field_0x10 = uVar11;
      if (pLVar5 != (LRMEntry *)0x0) {
        (*g_fp_OodleNet_Plugin_Free)(pLVar5);
      }
    }
    else {
      *(ulonglong *)&(param_1->entries).field_0x10 = uVar11;
      puVar12 = (undefined8 *)(*(longlong *)&param_1->entries + uVar7 * 8);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = *(undefined8 *)(uVar14 + lVar18 * 8);
      }
    }
    LRM_DeDupe(param_1);
    LRM_MakeJump(param_1,param_4);
  }
  else {
    param_1->matchBasePtr = param_3->matchBasePtr;
    puVar12 = *(undefined8 **)&param_3->entries;
    uVar14 = (*(longlong *)&(param_3->entries).field_0x10 << 3) >> 3;
    if (*(ulonglong *)&(param_1->entries).field_0x10 < uVar14) {
      *(undefined8 *)&(param_1->entries).field_0x10 = 0;
      if (*(ulonglong *)&(param_1->entries).field_0x8 < uVar14) {
        pLVar5 = vector_storage<oo2net::LRMEntry>::makefit1
                           ((vector_storage<oo2net::LRMEntry> *)&param_1->entries,uVar14,0);
        puVar8 = *(undefined8 **)&param_1->entries;
        *(ulonglong *)&(param_1->entries).field_0x10 = uVar14;
        if (uVar14 != 0) {
          lVar18 = (longlong)puVar12 - (longlong)puVar8;
          do {
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = *(undefined8 *)(lVar18 + (longlong)puVar8);
            }
            puVar8 = puVar8 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        if (pLVar5 != (LRMEntry *)0x0) {
          (*g_fp_OodleNet_Plugin_Free)(pLVar5);
          LRM_MakeJump(param_1,param_4);
          return param_1;
        }
      }
      else {
        puVar8 = *(undefined8 **)&param_1->entries;
        *(ulonglong *)&(param_1->entries).field_0x10 = uVar14;
        if (uVar14 != 0) {
          lVar18 = (longlong)puVar12 - (longlong)puVar8;
          do {
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = *(undefined8 *)(lVar18 + (longlong)puVar8);
            }
            puVar8 = puVar8 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      LRM_MakeJump(param_1,param_4);
    }
    else {
      puVar8 = *(undefined8 **)&param_1->entries;
      if (puVar8 != puVar12) {
        if (puVar12 < puVar8) {
          lVar18 = uVar14 - 1;
          if (-1 < lVar18) {
            puVar10 = puVar8 + lVar18;
            do {
              lVar18 = lVar18 + -1;
              *puVar10 = *(undefined8 *)(((longlong)puVar12 - (longlong)puVar8) + (longlong)puVar10)
              ;
              puVar10 = puVar10 + -1;
            } while (-1 < lVar18);
            *(ulonglong *)&(param_1->entries).field_0x10 = uVar14;
            LRM_MakeJump(param_1,param_4);
            return param_1;
          }
        }
        else if (uVar14 != 0) {
          lVar18 = (longlong)puVar12 - (longlong)puVar8;
          uVar11 = uVar14;
          do {
            *puVar8 = *(undefined8 *)((longlong)puVar8 + lVar18);
            puVar8 = puVar8 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      *(ulonglong *)&(param_1->entries).field_0x10 = uVar14;
      LRM_MakeJump(param_1,param_4);
    }
  }
  return param_1;
}

// LRM_FillMergeSeveral @ 14ff66320

LRM * __cdecl
oo2net::LRM_FillMergeSeveral(LRM **param_1,LRM **param_2,long64 param_3,long64 param_4,int param_5)

{
  LRM **ppLVar1;
  long64 lVar2;
  
  if (param_3 < param_3 + param_4) {
    ppLVar1 = param_2 + param_3 * 2 + 1;
    lVar2 = param_3;
    do {
      LRM_FillMerge(param_1[lVar2],ppLVar1[-1],*ppLVar1,param_5);
      LRM_Destroy(*ppLVar1);
      lVar2 = lVar2 + 1;
      *ppLVar1 = (LRM *)0x0;
      ppLVar1 = ppLVar1 + 2;
    } while (lVar2 < param_3 + param_4);
    return param_1[param_3];
  }
  return param_1[param_3];
}

// LRM_FillSeveral @ 14ff663e0

LRM * __cdecl
oo2net::LRM_FillSeveral
          (LRM **param_1,uchar *param_2,uchar *param_3,long64 param_4,int param_5,int param_6,
          int param_7)

{
  vector<oo2net::LRMEntry> *this;
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  LRM *pLVar6;
  ulonglong uVar7;
  LRMEntry *pLVar8;
  LRMEntry *pLVar9;
  longlong lVar10;
  uint uVar11;
  LRM **ppLVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  LRMEntry local_res10;
  stdless<oo2net::LRMEntry> local_res18;
  
  if (param_3 <= param_2) {
    return *param_1;
  }
  local_res18 = SUB81(param_3,0);
  ppLVar12 = param_1;
  while( true ) {
    pLVar6 = *ppLVar12;
    lVar10 = (longlong)param_3 - (longlong)param_2;
    if (param_2 + param_4 <= param_3) {
      lVar10 = param_4;
    }
    if ((lVar10 < param_7) &&
       (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x173,
                                   "oo2net::LRM_Fill","bufSize >= hash_length"), iVar4 != 0)) {
      pcVar3 = (code *)swi(3);
      pLVar6 = (LRM *)(*pcVar3)();
      return pLVar6;
    }
    if ((param_7 < 8) &&
       (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x174,
                                   "oo2net::LRM_Fill","hash_length >= LRM_MIN_MATCH_LEN"),
       iVar4 != 0)) {
      pcVar3 = (code *)swi(3);
      pLVar6 = (LRM *)(*pcVar3)();
      return pLVar6;
    }
    if ((0x40000000 < lVar10) &&
       (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x178,
                                   "oo2net::LRM_Fill","bufSize <= (1<<30)"), iVar4 != 0)) break;
    pLVar6->chunkBasePtr = param_2;
    lVar15 = lVar10 - param_7;
    pLVar6->matchBasePtr = param_2;
    pLVar6->bufSize = lVar10;
    pLVar6->hash_length = param_7;
    uVar11 = 1;
    iVar4 = param_7;
    while (iVar4 = iVar4 + -1, 0 < iVar4) {
      uVar11 = uVar11 * 0x2c2c57ed;
    }
    this = &pLVar6->entries;
    pLVar6->hash_mul_end = uVar11;
    uVar2 = *(ulonglong *)&(pLVar6->entries).field_0x10;
    uVar7 = lVar15 / (longlong)param_5 + 2;
    if (uVar7 < uVar2) {
      *(ulonglong *)&(pLVar6->entries).field_0x10 = uVar7;
    }
    else {
      if ((*(ulonglong *)&(pLVar6->entries).field_0x8 < uVar7) &&
         (pLVar8 = vector_storage<oo2net::LRMEntry>::makefit1
                             ((vector_storage<oo2net::LRMEntry> *)this,uVar7,uVar2),
         pLVar8 != (LRMEntry *)0x0)) {
        (*g_fp_OodleNet_Plugin_Free)(pLVar8);
      }
      puVar1 = &(pLVar6->entries).field_0x10;
      *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar7 - uVar2);
      uVar7 = *(ulonglong *)&(pLVar6->entries).field_0x10;
    }
    if (uVar7 == 0) {
      pLVar8 = (LRMEntry *)0x0;
    }
    else {
      pLVar8 = *(LRMEntry **)&this->field_0x0;
    }
    lVar13 = 0;
    lVar14 = 0;
    uVar11 = 0xffffffff;
    if (-1 < lVar15) {
      do {
        uVar5 = LRM_InitialHash(param_2 + lVar14,param_7);
        if (uVar5 != uVar11) {
          pLVar8[lVar13].hash = uVar5;
          pLVar8[lVar13].pos32 = (uint)lVar14;
          lVar13 = lVar13 + 1;
          uVar11 = uVar5;
        }
        lVar14 = lVar14 + param_5;
      } while (lVar14 <= lVar15);
      uVar7 = *(ulonglong *)&(pLVar6->entries).field_0x10;
    }
    uVar2 = lVar13 + 1;
    if (uVar2 < uVar7) {
      *(ulonglong *)&(pLVar6->entries).field_0x10 = uVar2;
    }
    else {
      if ((*(ulonglong *)&(pLVar6->entries).field_0x8 < uVar2) &&
         (pLVar9 = vector_storage<oo2net::LRMEntry>::makefit1
                             ((vector_storage<oo2net::LRMEntry> *)this,uVar2,uVar7),
         pLVar9 != (LRMEntry *)0x0)) {
        (*g_fp_OodleNet_Plugin_Free)(pLVar9);
      }
      puVar1 = &(pLVar6->entries).field_0x10;
      *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar2 - uVar7);
    }
    pLVar9 = pLVar8 + lVar13;
    stdsort<oo2net::LRMEntry_*,oo2net::stdless<oo2net::LRMEntry>_>(pLVar8,pLVar9,local_res18);
    local_res10.pos32 = pLVar9[-1].pos32;
    local_res10.hash = 0xffffffff;
    *pLVar9 = local_res10;
    LRM_DeDupe(pLVar6);
    LRM_MakeJump(pLVar6,param_6);
    ppLVar12 = ppLVar12 + 1;
    param_2 = param_2 + lVar10;
    param_4 = lVar10;
    if (param_3 <= param_2) {
      return *param_1;
    }
  }
  pcVar3 = (code *)swi(3);
  pLVar6 = (LRM *)(*pcVar3)();
  return pLVar6;
}

// LRM_FindMatch @ 14ff66700

int __cdecl
oo2net::LRM_FindMatch
          (LRM *param_1,uint param_2,uchar *param_3,uchar *param_4,long64 *param_5,long64 param_6)

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
LAB_14ff66890:
            uVar12 = *(ulonglong *)(((longlong)puVar15 - (longlong)param_3) + (longlong)puVar4) ^
                     *puVar4;
            if (uVar12 == 0) goto code_r0x00014ff66899;
            uVar8 = 0;
            if (uVar12 != 0) {
              for (; (uVar12 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            pcVar9 = (char *)(((uVar8 >> 3) - (longlong)param_3) + (longlong)puVar4);
            goto LAB_14ff668c5;
          }
LAB_14ff668a5:
          pcVar9 = (char *)((longlong)puVar4 - (longlong)param_3);
          for (; (puVar4 < param_4 &&
                 ((char)*puVar4 ==
                  *(char *)((longlong)puVar4 + ((longlong)puVar15 - (longlong)param_3))));
              puVar4 = (ulonglong *)((longlong)puVar4 + 1)) {
            pcVar9 = pcVar9 + 1;
          }
LAB_14ff668c5:
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
code_r0x00014ff66899:
  puVar4 = puVar4 + 1;
  if (param_4 + -8 < puVar4) goto LAB_14ff668a5;
  goto LAB_14ff66890;
}

// LRM_GetCascadeChunkSize @ 14ff66950

long64 __cdecl oo2net::LRM_GetCascadeChunkSize(LRMCascade *param_1)

{
  return param_1->chunkSize;
}

// LRM_GetHashLength @ 14ff66960

int __cdecl oo2net::LRM_GetHashLength(LRM *param_1)

{
  return param_1->hash_length;
}

// LRM_GetHashMulEnd @ 14ff66970

uint __cdecl oo2net::LRM_GetHashMulEnd(LRM *param_1)

{
  return param_1->hash_mul_end;
}

// LRM_InitialHash4 @ 14ff66980

uint __cdecl oo2net::LRM_InitialHash4(uchar *param_1)

{
  return (uint)param_1[2] * 0x2c2c57ed + (uint)param_1[1] * -0x30550e97 +
         (uint)*param_1 * -0x1ca7d2cb + (uint)param_1[3];
}

// LRM_InitialHash @ 14ff669c0

uint __cdecl oo2net::LRM_InitialHash(uchar *param_1,int param_2)

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

// LRM_InitialHash @ 14ff66a60

uint __cdecl oo2net::LRM_InitialHash(LRM *param_1,uchar *param_2)

{
  uint uVar1;
  
  uVar1 = LRM_InitialHash(param_2,param_1->hash_length);
  return uVar1;
}

// LRM_MakeJump @ 14ff66a80

void __cdecl oo2net::LRM_MakeJump(LRM *param_1,int param_2)

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
        (*g_fp_OodleNet_Plugin_Free)(piVar7);
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
    vector_flex<int,oo2net::vector_storage<int>_>::resize
              ((vector_flex<int,oo2net::vector_storage<int>_> *)&param_1->jumpIn,
               (longlong)(iVar12 + 1));
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
    (*g_fp_OodleNet_Plugin_Free)(param_1->bloom_filter);
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
                                   "oo2net::LRM_MakeJump","bloom_size_log2 > 0"), iVar4 != 0)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = (ulonglong)(uint)((1 << ((byte)iVar12 & 0x1f)) << 4) << 2;
    uVar9 = 0x40;
    if (0x40 < uVar6) {
      uVar9 = uVar6;
    }
    puVar8 = (*g_fp_OodleNet_Plugin_MallocAligned)(uVar9,0x40);
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

// LRM_RollHash @ 14ff66d40

uint __cdecl oo2net::LRM_RollHash(uint param_1,uint param_2,uchar param_3,uchar param_4)

{
  return (param_1 - param_4 * param_2) * 0x2c2c57ed + (uint)param_3;
}

// LRM_RollHashPtr @ 14ff66d60

uint __cdecl oo2net::LRM_RollHashPtr(uint param_1,uint param_2,uchar *param_3,int param_4)

{
  return (param_1 - *param_3 * param_2) * 0x2c2c57ed + (uint)param_3[param_4];
}

// LRM_RollHashPtr @ 14ff66d80

uint __cdecl oo2net::LRM_RollHashPtr(LRM *param_1,uint param_2,uchar *param_3)

{
  return (param_2 - (uint)*param_3 * param_1->hash_mul_end) * 0x2c2c57ed +
         (uint)param_3[param_1->hash_length];
}

// MakeMulEnd @ 14ff66db0

uint __cdecl oo2net::MakeMulEnd(int param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  while (param_1 = param_1 + -1, 0 < param_1) {
    uVar1 = uVar1 * 0x2c2c57ed;
  }
  return uVar1;
}

// OodleFree @ 14ff66de0

void __cdecl oo2net::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff66de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// OodleFreeSized @ 14ff66df0

void __cdecl oo2net::OodleFreeSized(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff66df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// OodleMalloc @ 14ff66e00

void * __cdecl oo2net::OodleMalloc(long64 param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1,0x10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// OodleMallocAligned @ 14ff66e50

void * __cdecl oo2net::OodleMallocAligned(long64 param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// S32_checkA @ 14ff66e90

int __cdecl oo2net::S32_checkA(long64 param_1)

{
  return (int)param_1;
}

// assign_construct @ 14ff66ea0

void __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::assign_construct
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          LRMEntry *param_1,LRMEntry *param_2)

{
  LRMEntry *pLVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (longlong)param_2 - (longlong)param_1 >> 3;
  if ((ulonglong)this->_padding_ < uVar3) {
    pLVar1 = vector_storage<oo2net::LRMEntry>::makefit1
                       ((vector_storage<oo2net::LRMEntry> *)this,uVar3,this->m_size);
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
                    /* WARNING: Could not recover jumptable at 0x00014ff66f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(pLVar1);
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

// at @ 14ff66f60

LRM ** __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::at
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this,ulong64 param_1)

{
  return (LRM **)(*(longlong *)this + param_1 * 8);
}

// at @ 14ff66f70

LRM ** __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::at
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this,ulong64 param_1)

{
  return (LRM **)(*(longlong *)this + param_1 * 8);
}

// at @ 14ff66f80

LRMEntry * __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::at
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          ulong64 param_1)

{
  return (LRMEntry *)(*(longlong *)this + param_1 * 8);
}

// at @ 14ff66f90

LRMEntry * __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::at
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          ulong64 param_1)

{
  return (LRMEntry *)(*(longlong *)this + param_1 * 8);
}

// back @ 14ff66fa0

LRM ** __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::back
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  return (LRM **)(*(longlong *)this + *(longlong *)&this->field_0x10 * 8 + -8);
}

// begin @ 14ff66fc0

LRM ** __thiscall
oo2net::vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::begin
          (vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  return (LRM **)this->_padding_;
}

// begin @ 14ff66fd0

LRM ** __thiscall
oo2net::vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::begin
          (vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  return (LRM **)this->_padding_;
}

// begin @ 14ff66fe0

LRMEntry * __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::begin
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  return (LRMEntry *)this->_padding_;
}

// begin @ 14ff66ff0

LRMEntry * __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::begin
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  return (LRMEntry *)this->_padding_;
}

// begin @ 14ff67000

LRMEntry * __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::begin
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  return *(LRMEntry **)this;
}

// begin @ 14ff67010

LRMEntry * __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::begin
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  return *(LRMEntry **)this;
}

// begin @ 14ff67020

LRM ** __thiscall oo2net::vector_storage<oo2net::LRM_*>::begin(vector_storage<oo2net::LRM_*> *this)

{
  return this->m_begin;
}

// begin @ 14ff67030

LRM ** __thiscall oo2net::vector_storage<oo2net::LRM_*>::begin(vector_storage<oo2net::LRM_*> *this)

{
  return this->m_begin;
}

// begin @ 14ff67040

LRMEntry * __thiscall
oo2net::vector_storage<oo2net::LRMEntry>::begin(vector_storage<oo2net::LRMEntry> *this)

{
  return this->m_begin;
}

// begin @ 14ff67050

LRMEntry * __thiscall
oo2net::vector_storage<oo2net::LRMEntry>::begin(vector_storage<oo2net::LRMEntry> *this)

{
  return this->m_begin;
}

// bloom_insert @ 14ff67060

void __cdecl oo2net::bloom_insert(uint *param_1,int param_2,uint param_3)

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

// bloom_maybe_contains @ 14ff670f0

bool __cdecl oo2net::bloom_maybe_contains(uint *param_1,int param_2,uint param_3)

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

// capacity @ 14ff67180

ulong64 __thiscall
oo2net::vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::capacity
          (vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  return this->_padding_;
}

// capacity @ 14ff67190

ulong64 __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::capacity
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  return this->_padding_;
}

// capacity @ 14ff671a0

ulong64 __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::capacity
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  return *(ulong64 *)&this->field_0x8;
}

// capacity @ 14ff671b0

ulong64 __thiscall
oo2net::vector_storage<oo2net::LRM_*>::capacity(vector_storage<oo2net::LRM_*> *this)

{
  return this->m_capacity;
}

// capacity @ 14ff671c0

ulong64 __thiscall
oo2net::vector_storage<oo2net::LRMEntry>::capacity(vector_storage<oo2net::LRMEntry> *this)

{
  return this->m_capacity;
}

// clear @ 14ff671d0

void __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::clear
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}

// data @ 14ff671e0

LRMEntry * __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::data
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (LRMEntry *)0x0;
  }
  return *(LRMEntry **)this;
}

// data @ 14ff67200

LRMEntry * __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::data
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (LRMEntry *)0x0;
  }
  return *(LRMEntry **)this;
}

// empty @ 14ff67220

bool __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::empty
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// empty @ 14ff67230

bool __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::empty
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// end @ 14ff67240

LRMEntry * __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::end
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  return (LRMEntry *)(this->_padding_ + this->m_size * 8);
}

// end @ 14ff67260

LRMEntry * __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::end
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  return (LRMEntry *)(*(longlong *)this + *(longlong *)&this->field_0x10 * 8);
}

// extend_copy @ 14ff67280

void __thiscall
oo2net::vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::extend_copy
          (vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this,LRM **param_1,
          ulong64 param_2)

{
  LRM **ppLVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  
  uVar3 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar3 + param_2) {
    ppLVar1 = vector_storage<oo2net::LRM_*>::makefit1
                        ((vector_storage<oo2net::LRM_*> *)this,uVar3 + param_2,uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x00014ff67300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(ppLVar1);
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

// extend_copy @ 14ff67360

void __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::extend_copy
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          LRMEntry *param_1,ulong64 param_2)

{
  LRMEntry *pLVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  
  uVar3 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar3 + param_2) {
    pLVar1 = vector_storage<oo2net::LRMEntry>::makefit1
                       ((vector_storage<oo2net::LRMEntry> *)this,uVar3 + param_2,uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x00014ff673e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(pLVar1);
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

// extend_default @ 14ff67440

void __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::extend_default
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          ulong64 param_1)

{
  LRMEntry *pLVar1;
  ulong64 uVar2;
  
  uVar2 = param_1 + this->m_size;
  if ((ulonglong)this->_padding_ < uVar2) {
    pLVar1 = vector_storage<oo2net::LRMEntry>::makefit1
                       ((vector_storage<oo2net::LRMEntry> *)this,uVar2,this->m_size);
    if (pLVar1 != (LRMEntry *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(pLVar1);
    }
    this->m_size = this->m_size + param_1;
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// getmatchlen_mml1_forceinline @ 14ff674a0

long64 __cdecl oo2net::getmatchlen_mml1_forceinline(uchar *param_1,uchar *param_2,uchar *param_3)

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

// havematch_better @ 14ff67500

bool __cdecl
oo2net::havematch_better
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,long64 *param_5)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  if ((param_4 < (longlong)param_3 - (longlong)param_1) && (param_1[param_4] == param_2[param_4])) {
    puVar2 = (ulonglong *)param_1;
    if (param_1 <= param_3 + -8) {
LAB_14ff67530:
      uVar3 = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2) ^ *puVar2;
      if (uVar3 == 0) goto code_r0x00014ff67539;
      uVar1 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      pcVar4 = (char *)(((uVar1 >> 3) - (longlong)param_1) + (longlong)puVar2);
      goto LAB_14ff67565;
    }
LAB_14ff67545:
    pcVar4 = (char *)((longlong)puVar2 - (longlong)param_1);
    for (; (puVar2 < param_3 &&
           ((char)*puVar2 == *(char *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1))))
        ; puVar2 = (ulonglong *)((longlong)puVar2 + 1)) {
      pcVar4 = pcVar4 + 1;
    }
LAB_14ff67565:
    if (param_4 < (longlong)pcVar4) {
      *param_5 = (long64)pcVar4;
      return true;
    }
  }
  return false;
code_r0x00014ff67539:
  puVar2 = puVar2 + 1;
  if (param_3 + -8 < puVar2) goto LAB_14ff67545;
  goto LAB_14ff67530;
}

// init @ 14ff67590

void __thiscall
oo2net::vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::init
          (vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14ff675a0

void __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::init
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14ff675b0

void __thiscall oo2net::vector_storage<oo2net::LRM_*>::init(vector_storage<oo2net::LRM_*> *this)

{
  this->m_begin = (LRM **)0x0;
  this->m_capacity = 0;
  return;
}

// init @ 14ff675c0

void __thiscall
oo2net::vector_storage<oo2net::LRMEntry>::init(vector_storage<oo2net::LRMEntry> *this)

{
  this->m_begin = (LRMEntry *)0x0;
  this->m_capacity = 0;
  return;
}

// intpow @ 14ff675d0

uint __cdecl oo2net::intpow(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  for (; 0 < param_2; param_2 = param_2 + -1) {
    uVar1 = uVar1 * param_1;
  }
  return uVar1;
}

// makefit1 @ 14ff675f0

LRM ** __thiscall
oo2net::vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::makefit1
          (vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this,ulong64 param_1)

{
  LRM **ppLVar1;
  
  ppLVar1 = vector_storage<oo2net::LRM_*>::makefit1
                      ((vector_storage<oo2net::LRM_*> *)this,param_1,this->m_size);
  return ppLVar1;
}

// makefit1 @ 14ff67600

LRMEntry * __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::makefit1
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          ulong64 param_1)

{
  LRMEntry *pLVar1;
  
  pLVar1 = vector_storage<oo2net::LRMEntry>::makefit1
                     ((vector_storage<oo2net::LRMEntry> *)this,param_1,this->m_size);
  return pLVar1;
}

// makefit1 @ 14ff67620

LRM ** __thiscall
oo2net::vector_storage<oo2net::LRM_*>::makefit1
          (vector_storage<oo2net::LRM_*> *this,ulong64 param_1,ulong64 param_2)

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
    if (uVar5 < 0x200) goto LAB_14ff676a3;
    uVar5 = uVar5 + 0xfff;
    uVar2 = 0x1ffffffffffffe00;
  }
  else {
    uVar5 = uVar5 + 0xffff;
    uVar2 = 0x1fffffffffffe000;
  }
  param_1 = uVar5 >> 3 & uVar2;
LAB_14ff676a3:
  ppLVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1 * 8,0x10);
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

// makefit1 @ 14ff67740

LRMEntry * __thiscall
oo2net::vector_storage<oo2net::LRMEntry>::makefit1
          (vector_storage<oo2net::LRMEntry> *this,ulong64 param_1,ulong64 param_2)

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
    if (uVar5 < 0x200) goto LAB_14ff677c3;
    uVar5 = uVar5 + 0xfff;
    uVar2 = 0x1ffffffffffffe00;
  }
  else {
    uVar5 = uVar5 + 0xffff;
    uVar2 = 0x1fffffffffffe000;
  }
  param_1 = uVar5 >> 3 & uVar2;
LAB_14ff677c3:
  pLVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1 * 8,0x10);
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

// makefit2 @ 14ff67860

void __thiscall
oo2net::vector_storage<oo2net::LRM_*>::makefit2
          (vector_storage<oo2net::LRM_*> *this,LRM **param_1,ulong64 param_2,ulong64 param_3)

{
  if (param_1 != (LRM **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff67868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_Free)(param_1);
    return;
  }
  return;
}

// makefit2 @ 14ff67880

void __thiscall
oo2net::vector_storage<oo2net::LRMEntry>::makefit2
          (vector_storage<oo2net::LRMEntry> *this,LRMEntry *param_1,ulong64 param_2,ulong64 param_3)

{
  if (param_1 != (LRMEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff67888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_Free)(param_1);
    return;
  }
  return;
}

// needmakefit @ 14ff678a0

bool __thiscall
oo2net::vector_storage<oo2net::LRM_*>::needmakefit
          (vector_storage<oo2net::LRM_*> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// needmakefit @ 14ff678b0

bool __thiscall
oo2net::vector_storage<oo2net::LRMEntry>::needmakefit
          (vector_storage<oo2net::LRMEntry> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// push_back @ 14ff678c0

void __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::push_back
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this,LRM **param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  LRM **ppLVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ulong64 *)&this->field_0x10;
  uVar1 = uVar2 + 1;
  if (*(ulonglong *)&this->field_0x8 < uVar1) {
    ppLVar3 = vector_storage<oo2net::LRM_*>::makefit1
                        ((vector_storage<oo2net::LRM_*> *)this,uVar1,uVar2);
    puVar4 = (undefined8 *)(*(longlong *)this + uVar2 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *param_1;
    }
    *(ulong64 *)&this->field_0x10 = uVar1;
    if (ppLVar3 != (LRM **)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(ppLVar3);
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

// push_back @ 14ff67960

void __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::push_back
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          LRMEntry *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  LRMEntry *pLVar3;
  LRMEntry *pLVar4;
  
  uVar2 = *(ulong64 *)&this->field_0x10;
  uVar1 = uVar2 + 1;
  if (*(ulonglong *)&this->field_0x8 < uVar1) {
    pLVar3 = vector_storage<oo2net::LRMEntry>::makefit1
                       ((vector_storage<oo2net::LRMEntry> *)this,uVar1,uVar2);
    pLVar4 = (LRMEntry *)(*(longlong *)this + uVar2 * 8);
    if (pLVar4 != (LRMEntry *)0x0) {
      *pLVar4 = *param_1;
    }
    *(ulong64 *)&this->field_0x10 = uVar1;
    if (pLVar3 != (LRMEntry *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(pLVar3);
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

// release @ 14ff67a00

void __thiscall
oo2net::vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::release
          (vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14ff67a40

void __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::release
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14ff67a80

void __thiscall oo2net::vector_storage<oo2net::LRM_*>::release(vector_storage<oo2net::LRM_*> *this)

{
  if (this->m_begin != (LRM **)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (LRM **)0x0;
  return;
}

// release @ 14ff67ac0

void __thiscall
oo2net::vector_storage<oo2net::LRMEntry>::release(vector_storage<oo2net::LRMEntry> *this)

{
  if (this->m_begin != (LRMEntry *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (LRMEntry *)0x0;
  return;
}

// resize @ 14ff67b00

void __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::resize
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this,ulong64 param_1,
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
    ppLVar1 = vector_storage<oo2net::LRM_*>::makefit1
                        ((vector_storage<oo2net::LRM_*> *)this,uVar4 + lVar6,uVar4);
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
                    /* WARNING: Could not recover jumptable at 0x00014ff67ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(ppLVar1);
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

// resize @ 14ff67c00

void __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::resize
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          ulong64 param_1)

{
  ulonglong uVar1;
  LRMEntry *pLVar2;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    pLVar2 = vector_storage<oo2net::LRMEntry>::makefit1
                       ((vector_storage<oo2net::LRMEntry> *)this,param_1,uVar1);
    if (pLVar2 != (LRMEntry *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(pLVar2);
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// rrClz32 @ 14ff67c60

uint __cdecl oo2net::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}

// rrCtz64 @ 14ff67c80

uint __cdecl oo2net::rrCtz64(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return (uint)lVar1;
}

// rrCtzBytes64 @ 14ff67c90

uint __cdecl oo2net::rrCtzBytes64(ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (uint)(uVar1 >> 3) & 0x1fffffff;
}

// rrPrintf_nop @ 14ff67ca0

void __cdecl oo2net::rrPrintf_nop(void)

{
  return;
}

// rrPtrDiff32 @ 14ff67cb0

int __cdecl oo2net::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14ff67cc0

long64 __cdecl oo2net::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// shrink @ 14ff67cd0

void __thiscall
oo2net::vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::shrink
          (vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14ff67ce0

void __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::shrink
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// size32 @ 14ff67cf0

int __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::size32
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  return *(int *)&this->field_0x10;
}

// size @ 14ff67d00

ulong64 __thiscall
oo2net::vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::size
          (vector_base<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  return this->m_size;
}

// size @ 14ff67d10

ulong64 __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::size
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  return this->m_size;
}

// size @ 14ff67d20

ulong64 __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::size
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size @ 14ff67d30

ulong64 __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::size
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// sizea @ 14ff67d40

long64 __thiscall
oo2net::vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_>::sizea
          (vector_flex<oo2net::LRM_*,oo2net::vector_storage<oo2net::LRM_*>_> *this)

{
  return *(long64 *)&this->field_0x10;
}

// swap @ 14ff67d60

void __thiscall
oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::swap
          (vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *param_1)

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

// swap @ 14ff67da0

void __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::swap
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this,
          vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *param_1)

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

// swap @ 14ff67de0

void __thiscall
oo2net::vector_storage<oo2net::LRMEntry>::swap
          (vector_storage<oo2net::LRMEntry> *this,vector_storage<oo2net::LRMEntry> *param_1,
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

// tighten @ 14ff67e20

void __thiscall
oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::tighten
          (vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_> *this)

{
  void *pvVar1;
  LRMEntry *pLVar2;
  LRMEntry *pLVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulong64 uVar6;
  LRMEntry *pLVar7;
  vector_storage<oo2net::LRMEntry> local_20;
  ulong64 local_10;
  
  uVar6 = *(ulong64 *)&this->field_0x10;
  if (*(ulong64 *)&this->field_0x8 != uVar6) {
    pLVar7 = (LRMEntry *)0x0;
    local_20.m_begin = (LRMEntry *)0x0;
    local_20.m_capacity = 0;
    local_10 = 0;
    lVar5 = *(longlong *)this;
    if (uVar6 != 0) {
      pLVar2 = vector_storage<oo2net::LRMEntry>::makefit1(&local_20,uVar6,0);
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
        (*g_fp_OodleNet_Plugin_Free)(pLVar2);
      }
    }
    *(ulong64 *)&this->field_0x10 = uVar6;
    pvVar1 = *(void **)this;
    *(LRMEntry **)this = pLVar7;
    *(ulong64 *)&this->field_0x8 = local_20.m_capacity;
    if (pvVar1 != (void *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(pvVar1);
    }
  }
  return;
}

// dtor$0 @ 150325fc0

void `oo2net::vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::
     vector_base<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2net::vector_storage<oo2net::LRMEntry>::~vector_storage<oo2net::LRMEntry>
            (*(vector_storage<oo2net::LRMEntry> **)(param_2 + 0x40));
  return;
}

// dtor$0 @ 150325fe0

void `oo2net::LRM_AllocCascade'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x58),eRRPlacementNew,*(void **)(param_2 + 0x50));
  return;
}

// dtor$2 @ 150326020

void `oo2net::LRM_DeDupe'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  oo2net::vector_storage<oo2net::LRMEntry>::~vector_storage<oo2net::LRMEntry>
            ((vector_storage<oo2net::LRMEntry> *)(param_2 + 0x28));
  return;
}

// dtor$2 @ 150326040

void `oo2net::vector_flex<oo2net::LRMEntry,oo2net::vector_storage<oo2net::LRMEntry>_>::tighten'::
     __l1::dtor_2(undefined8 param_1,longlong param_2)

{
  oo2net::vector_storage<oo2net::LRMEntry>::~vector_storage<oo2net::LRMEntry>
            ((vector_storage<oo2net::LRMEntry> *)(param_2 + 0x28));
  return;
}

