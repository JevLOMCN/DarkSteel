// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 346

// ByteCopy<oo2::rrArenaAllocator_*,oo2::rrArenaAllocator_*> @ 14f3b0030

void __cdecl
oo2::ByteCopy<oo2::rrArenaAllocator_*,oo2::rrArenaAllocator_*>
          (rrArenaAllocator **param_1,rrArenaAllocator **param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<void_*,void_*> @ 14f3b0040

void __cdecl oo2::ByteCopy<void_*,void_*>(void **param_1,void **param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<oo2::index_and_count,oo2::index_and_count> @ 14f3b0050

void __cdecl
oo2::ByteCopy<oo2::index_and_count,oo2::index_and_count>
          (index_and_count *param_1,index_and_count *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<oo2::indexed_interval,oo2::indexed_interval> @ 14f3b0060

void __cdecl
oo2::ByteCopy<oo2::indexed_interval,oo2::indexed_interval>
          (indexed_interval *param_1,indexed_interval *param_2)

{
  int iVar1;
  
  iVar1 = param_2->len;
  param_1->start = param_2->start;
  param_1->len = iVar1;
  param_1->histo = param_2->histo;
  return;
}

// ByteCopy<oo2::slide_candidate,oo2::slide_candidate> @ 14f3b0080

void __cdecl
oo2::ByteCopy<oo2::slide_candidate,oo2::slide_candidate>
          (slide_candidate *param_1,slide_candidate *param_2)

{
  ulong64 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = param_2->which;
  iVar3 = param_2->right;
  uVar4 = *(undefined4 *)&param_2->field_0xc;
  param_1->gain = param_2->gain;
  param_1->which = iVar2;
  param_1->right = iVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  uVar1 = param_2->key2;
  param_1->key1 = param_2->key1;
  param_1->key2 = uVar1;
  return;
}

// ByteCopy<oo2::Bytes<32>,oo2::Bytes<32>_> @ 14f3b00a0

void __cdecl oo2::ByteCopy<oo2::Bytes<32>,oo2::Bytes<32>_>(Bytes<32> *param_1,Bytes<32> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2->bytes + 8);
  *(undefined8 *)param_1->bytes = *(undefined8 *)param_2->bytes;
  *(undefined8 *)(param_1->bytes + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2->bytes + 0x18);
  *(undefined8 *)(param_1->bytes + 0x10) = *(undefined8 *)(param_2->bytes + 0x10);
  *(undefined8 *)(param_1->bytes + 0x18) = uVar1;
  return;
}

// ByteCopy<__int64,__int64> @ 14f3b00c0

void __cdecl oo2::ByteCopy<__int64,__int64>(long64 *param_1,long64 *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteSwap<oo2::rrArenaAllocator_*> @ 14f3b00d0

void __cdecl
oo2::ByteSwap<oo2::rrArenaAllocator_*>(rrArenaAllocator **param_1,rrArenaAllocator **param_2)

{
  rrArenaAllocator *prVar1;
  
  prVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = prVar1;
  return;
}

// ByteSwap<void_*> @ 14f3b00f0

void __cdecl oo2::ByteSwap<void_*>(void **param_1,void **param_2)

{
  void *pvVar1;
  
  pvVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pvVar1;
  return;
}

// ByteSwap<oo2::index_and_count> @ 14f3b0110

void __cdecl oo2::ByteSwap<oo2::index_and_count>(index_and_count *param_1,index_and_count *param_2)

{
  index_and_count iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// ByteSwap<oo2::indexed_interval> @ 14f3b0130

void __cdecl
oo2::ByteSwap<oo2::indexed_interval>(indexed_interval *param_1,indexed_interval *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2->len;
  iVar3 = param_1->start;
  iVar4 = param_1->len;
  iVar1 = param_1->histo;
  param_1->start = param_2->start;
  param_1->len = iVar2;
  param_1->histo = param_2->histo;
  param_2->start = iVar3;
  param_2->len = iVar4;
  param_2->histo = iVar1;
  return;
}

// ByteSwap<oo2::slide_candidate> @ 14f3b0160

void __cdecl oo2::ByteSwap<oo2::slide_candidate>(slide_candidate *param_1,slide_candidate *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  
  iVar4 = param_2->which;
  iVar5 = param_2->right;
  uVar6 = *(undefined4 *)&param_2->field_0xc;
  iVar7 = param_1->gain;
  iVar8 = param_1->which;
  iVar9 = param_1->right;
  uVar10 = *(undefined4 *)&param_1->field_0xc;
  uVar1 = param_1->key1;
  uVar2 = param_1->key2;
  param_1->gain = param_2->gain;
  param_1->which = iVar4;
  param_1->right = iVar5;
  *(undefined4 *)&param_1->field_0xc = uVar6;
  uVar3 = param_2->key2;
  param_1->key1 = param_2->key1;
  param_1->key2 = uVar3;
  param_2->gain = iVar7;
  param_2->which = iVar8;
  param_2->right = iVar9;
  *(undefined4 *)&param_2->field_0xc = uVar10;
  param_2->key1 = uVar1;
  param_2->key2 = uVar2;
  return;
}

// ByteSwap<__int64> @ 14f3b0190

void __cdecl oo2::ByteSwap<__int64>(long64 *param_1,long64 *param_2)

{
  long64 lVar1;
  
  lVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = lVar1;
  return;
}

// adjust_heap<oo2::slide_candidate,oo2::stdless<oo2::slide_candidate>_> @ 14f3b01b0

void __cdecl
oo2::adjust_heap<oo2::slide_candidate,oo2::stdless<oo2::slide_candidate>_>
          (slide_candidate *param_1,long64 param_2,long64 param_3,
          stdless<oo2::slide_candidate> param_4)

{
  slide_candidate *psVar1;
  longlong lVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  slide_candidate *psVar14;
  
  while( true ) {
    lVar2 = param_2 * 2;
    lVar13 = lVar2 + 1;
    if (param_3 <= lVar13) {
      return;
    }
    if (lVar2 + 2 < param_3) {
      lVar13 = lVar13 + (ulonglong)(param_1[lVar13].gain < param_1[lVar2 + 2].gain);
    }
    psVar14 = param_1 + lVar13;
    if (psVar14->gain < param_1[param_2].gain) break;
    psVar1 = param_1 + param_2;
    iVar9 = psVar1->gain;
    iVar10 = psVar1->which;
    iVar11 = psVar1->right;
    uVar12 = *(undefined4 *)&psVar1->field_0xc;
    uVar3 = param_1[param_2].key1;
    uVar4 = (&param_1[param_2].key1)[1];
    iVar6 = psVar14->which;
    iVar7 = psVar14->right;
    uVar8 = *(undefined4 *)&psVar14->field_0xc;
    psVar1 = param_1 + param_2;
    psVar1->gain = psVar14->gain;
    psVar1->which = iVar6;
    psVar1->right = iVar7;
    *(undefined4 *)&psVar1->field_0xc = uVar8;
    uVar5 = psVar14->key2;
    param_1[param_2].key1 = psVar14->key1;
    (&param_1[param_2].key1)[1] = uVar5;
    psVar14->gain = iVar9;
    psVar14->which = iVar10;
    psVar14->right = iVar11;
    *(undefined4 *)&psVar14->field_0xc = uVar12;
    psVar14->key1 = uVar3;
    psVar14->key2 = uVar4;
    param_2 = lVar13;
  }
  return;
}

// check_value_cast<int,__int64> @ 14f3b0250

int __cdecl oo2::check_value_cast<int,__int64>(long64 *param_1)

{
  return (int)*param_1;
}

// construct<unsigned_char,unsigned_char> @ 14f3b0260

uchar * __cdecl oo2::construct<unsigned_char,unsigned_char>(uchar *param_1,uchar *param_2)

{
  if (param_1 != (uchar *)0x0) {
    *param_1 = *param_2;
  }
  return param_1;
}

// construct<oo2::entropyset> @ 14f3b0280

entropyset * __cdecl oo2::construct<oo2::entropyset>(entropyset *param_1)

{
  if (param_1 != (entropyset *)0x0) {
    memset(param_1,0,0x408);
  }
  return param_1;
}

// construct<oo2::entropyset_codelens_U16_256> @ 14f3b02b0

entropyset_codelens_U16_256 * __cdecl
oo2::construct<oo2::entropyset_codelens_U16_256>(entropyset_codelens_U16_256 *param_1)

{
  if (param_1 != (entropyset_codelens_U16_256 *)0x0) {
    memset(param_1,0,0x200);
  }
  return param_1;
}

// construct<oo2::indexed_interval> @ 14f3b02e0

indexed_interval * __cdecl oo2::construct<oo2::indexed_interval>(indexed_interval *param_1)

{
  if (param_1 != (indexed_interval *)0x0) {
    param_1->start = 0;
    param_1->len = 0;
    param_1->histo = 0;
  }
  return param_1;
}

// copy<unsigned_char> @ 14f3b0300

void __cdecl oo2::copy<unsigned_char>(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *param_1 = param_1[lVar1];
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// copy_construct<unsigned_char> @ 14f3b0330

void __cdecl oo2::copy_construct<unsigned_char>(uchar *param_1,uchar *param_2)

{
  if (param_1 != (uchar *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// copy_construct<unsigned_char> @ 14f3b0350

void __cdecl oo2::copy_construct<unsigned_char>(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (uchar *)0x0) {
        *param_1 = param_1[lVar1];
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// default_construct<unsigned_char> @ 14f3b0380

uchar * __cdecl oo2::default_construct<unsigned_char>(uchar *param_1,ulong64 param_2)

{
  return param_1;
}

// default_construct<unsigned_short> @ 14f3b0390

ushort * __cdecl oo2::default_construct<unsigned_short>(ushort *param_1,ulong64 param_2)

{
  return param_1;
}

// default_construct<oo2::entropyset> @ 14f3b03a0

entropyset * __cdecl oo2::default_construct<oo2::entropyset>(entropyset *param_1,ulong64 param_2)

{
  return param_1;
}

// default_construct<oo2::entropyset_codelens_U16_256> @ 14f3b03b0

entropyset_codelens_U16_256 * __cdecl
oo2::default_construct<oo2::entropyset_codelens_U16_256>
          (entropyset_codelens_U16_256 *param_1,ulong64 param_2)

{
  return param_1;
}

// default_construct<unsigned___int64> @ 14f3b03c0

ulong64 * __cdecl oo2::default_construct<unsigned___int64>(ulong64 *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<unsigned_char> @ 14f3b03d0

uchar * __cdecl oo2::destruct<unsigned_char>(uchar *param_1)

{
  return param_1;
}

// destruct<unsigned_char> @ 14f3b03e0

uchar * __cdecl oo2::destruct<unsigned_char>(uchar *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<unsigned_short> @ 14f3b03f0

ushort * __cdecl oo2::destruct<unsigned_short>(ushort *param_1)

{
  return param_1;
}

// destruct<unsigned_short> @ 14f3b0400

ushort * __cdecl oo2::destruct<unsigned_short>(ushort *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2::entropyset> @ 14f3b0410

entropyset * __cdecl oo2::destruct<oo2::entropyset>(entropyset *param_1)

{
  return param_1;
}

// destruct<oo2::entropyset> @ 14f3b0420

entropyset * __cdecl oo2::destruct<oo2::entropyset>(entropyset *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2::entropyset_codelens_U16_256> @ 14f3b0430

entropyset_codelens_U16_256 * __cdecl
oo2::destruct<oo2::entropyset_codelens_U16_256>(entropyset_codelens_U16_256 *param_1)

{
  return param_1;
}

// destruct<oo2::entropyset_codelens_U16_256> @ 14f3b0440

entropyset_codelens_U16_256 * __cdecl
oo2::destruct<oo2::entropyset_codelens_U16_256>
          (entropyset_codelens_U16_256 *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2::indexed_interval> @ 14f3b0450

indexed_interval * __cdecl oo2::destruct<oo2::indexed_interval>(indexed_interval *param_1)

{
  return param_1;
}

// destruct<oo2::indexed_interval> @ 14f3b0460

indexed_interval * __cdecl
oo2::destruct<oo2::indexed_interval>(indexed_interval *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<unsigned___int64> @ 14f3b0470

ulong64 * __cdecl oo2::destruct<unsigned___int64>(ulong64 *param_1)

{
  return param_1;
}

// destruct<unsigned___int64> @ 14f3b0480

ulong64 * __cdecl oo2::destruct<unsigned___int64>(ulong64 *param_1,ulong64 param_2)

{
  return param_1;
}

// extend_construct_in_place<> @ 14f3b0490

void __thiscall
oo2::vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::
extend_construct_in_place<>
          (vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  ulong64 uVar1;
  code *pcVar2;
  int iVar3;
  void *_Dst;
  
  uVar1 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar1 + 1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::entropyset>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->m_size = this->m_size + 1;
  _Dst = (void *)(uVar1 * 0x408 + this->_padding_);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x408);
  }
  return;
}

// extend_construct_in_place<> @ 14f3b0500

void __thiscall
oo2::
vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::extend_construct_in_place<>
          (vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
           *this)

{
  ulong64 uVar1;
  code *pcVar2;
  int iVar3;
  void *_Dst;
  
  uVar1 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar1 + 1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::entropyset_codelens_U16_256>::needmakefit"
                               ,"newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->m_size = this->m_size + 1;
  _Dst = (void *)(uVar1 * 0x200 + this->_padding_);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x200);
  }
  return;
}

// extend_construct_in_place<> @ 14f3b0580

void __thiscall
oo2::vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::
extend_construct_in_place<>
          (vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  code *pcVar3;
  int iVar4;
  
  uVar2 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar2 + 1) {
    iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::indexed_interval>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar4 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->m_size = this->m_size + 1;
  puVar1 = (undefined8 *)(this->_padding_ + uVar2 * 0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
  }
  return;
}

// extend_construct_in_place<unsigned_char> @ 14f3b0600

void __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::
extend_construct_in_place<unsigned_char>
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this,uchar *param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  int iVar3;
  uchar *puVar4;
  
  uVar1 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar1 + 1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<unsigned char>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->m_size = this->m_size + 1;
  puVar4 = (uchar *)(this->_padding_ + uVar1);
  if (puVar4 != (uchar *)0x0) {
    *puVar4 = *param_1;
  }
  return;
}

// forward<unsigned_char> @ 14f3b0680

uchar * __cdecl oo2::forward<unsigned_char>(uchar *param_1)

{
  return param_1;
}

// make_heap<oo2::slide_candidate> @ 14f3b06a0

void __cdecl oo2::make_heap<oo2::slide_candidate>(slide_candidate *param_1,slide_candidate *param_2)

{
  slide_candidate *psVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  slide_candidate *psVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar17 = (longlong)param_2 - (longlong)param_1 >> 5;
  lVar15 = (longlong)param_2 - (longlong)param_1 >> 6;
  if (0 < lVar15) {
    lVar16 = lVar15 * 2 + 1;
    do {
      lVar15 = lVar15 + -1;
      lVar16 = lVar16 + -2;
      lVar5 = lVar15;
      for (lVar13 = lVar16; lVar13 < lVar17; lVar13 = lVar13 * 2 + 1) {
        if (lVar13 + 1 < lVar17) {
          lVar13 = lVar13 + (ulonglong)(param_1[lVar13].gain < param_1[lVar13 + 1].gain);
        }
        psVar14 = param_1 + lVar13;
        if (psVar14->gain < param_1[lVar5].gain) break;
        psVar1 = param_1 + lVar5;
        iVar9 = psVar1->gain;
        iVar10 = psVar1->which;
        iVar11 = psVar1->right;
        uVar12 = *(undefined4 *)&psVar1->field_0xc;
        uVar2 = param_1[lVar5].key1;
        uVar3 = (&param_1[lVar5].key1)[1];
        iVar6 = psVar14->which;
        iVar7 = psVar14->right;
        uVar8 = *(undefined4 *)&psVar14->field_0xc;
        psVar1 = param_1 + lVar5;
        psVar1->gain = psVar14->gain;
        psVar1->which = iVar6;
        psVar1->right = iVar7;
        *(undefined4 *)&psVar1->field_0xc = uVar8;
        uVar4 = psVar14->key2;
        param_1[lVar5].key1 = psVar14->key1;
        (&param_1[lVar5].key1)[1] = uVar4;
        psVar14->gain = iVar9;
        psVar14->which = iVar10;
        psVar14->right = iVar11;
        *(undefined4 *)&psVar14->field_0xc = uVar12;
        psVar14->key1 = uVar2;
        psVar14->key2 = uVar3;
        lVar5 = lVar13;
      }
    } while (0 < lVar15);
  }
  return;
}

// make_heap<oo2::slide_candidate,oo2::stdless<oo2::slide_candidate>_> @ 14f3b0780

void __cdecl
oo2::make_heap<oo2::slide_candidate,oo2::stdless<oo2::slide_candidate>_>
          (slide_candidate *param_1,slide_candidate *param_2,stdless<oo2::slide_candidate> param_3)

{
  slide_candidate *psVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  slide_candidate *psVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar17 = (longlong)param_2 - (longlong)param_1 >> 5;
  lVar15 = (longlong)param_2 - (longlong)param_1 >> 6;
  if (0 < lVar15) {
    lVar16 = lVar15 * 2 + 1;
    do {
      lVar15 = lVar15 + -1;
      lVar16 = lVar16 + -2;
      lVar5 = lVar15;
      for (lVar13 = lVar16; lVar13 < lVar17; lVar13 = lVar13 * 2 + 1) {
        if (lVar13 + 1 < lVar17) {
          lVar13 = lVar13 + (ulonglong)(param_1[lVar13].gain < param_1[lVar13 + 1].gain);
        }
        psVar14 = param_1 + lVar13;
        if (psVar14->gain < param_1[lVar5].gain) break;
        psVar1 = param_1 + lVar5;
        iVar9 = psVar1->gain;
        iVar10 = psVar1->which;
        iVar11 = psVar1->right;
        uVar12 = *(undefined4 *)&psVar1->field_0xc;
        uVar2 = param_1[lVar5].key1;
        uVar3 = (&param_1[lVar5].key1)[1];
        iVar6 = psVar14->which;
        iVar7 = psVar14->right;
        uVar8 = *(undefined4 *)&psVar14->field_0xc;
        psVar1 = param_1 + lVar5;
        psVar1->gain = psVar14->gain;
        psVar1->which = iVar6;
        psVar1->right = iVar7;
        *(undefined4 *)&psVar1->field_0xc = uVar8;
        uVar4 = psVar14->key2;
        param_1[lVar5].key1 = psVar14->key1;
        (&param_1[lVar5].key1)[1] = uVar4;
        psVar14->gain = iVar9;
        psVar14->which = iVar10;
        psVar14->right = iVar11;
        *(undefined4 *)&psVar14->field_0xc = uVar12;
        psVar14->key1 = uVar2;
        psVar14->key2 = uVar3;
        lVar5 = lVar13;
      }
    } while (0 < lVar15);
  }
  return;
}

// move<unsigned_char_&> @ 14f3b0850

uchar * __cdecl oo2::move<unsigned_char_&>(uchar *param_1)

{
  return param_1;
}

// move<unsigned_char> @ 14f3b0860

void __cdecl oo2::move<unsigned_char>(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  uchar *puVar1;
  longlong lVar2;
  
  if (param_2 < param_1) {
    lVar2 = param_3 - 1;
    if (-1 < lVar2) {
      puVar1 = param_1 + lVar2;
      do {
        lVar2 = lVar2 + -1;
        *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
        puVar1 = puVar1 + -1;
      } while (-1 < lVar2);
      return;
    }
  }
  else if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *param_1 = param_1[lVar2];
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// popped_heap<oo2::slide_candidate> @ 14f3b08c0

void __cdecl
oo2::popped_heap<oo2::slide_candidate>(slide_candidate *param_1,slide_candidate *param_2)

{
  slide_candidate *psVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  slide_candidate *psVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar13 = 0;
  lVar12 = 1;
  lVar16 = (longlong)param_2 - (longlong)param_1 >> 5;
  lVar15 = lVar13;
  if (1 < lVar16) {
    do {
      lVar13 = lVar12;
      if ((lVar12 + 1 < lVar16) && (param_1[lVar12].gain < param_1[lVar12 + 1].gain)) {
        lVar13 = lVar12 + 1;
      }
      psVar14 = param_1 + lVar13;
      iVar5 = psVar14->which;
      iVar6 = psVar14->right;
      uVar7 = *(undefined4 *)&psVar14->field_0xc;
      psVar1 = param_1 + lVar15;
      psVar1->gain = psVar14->gain;
      psVar1->which = iVar5;
      psVar1->right = iVar6;
      *(undefined4 *)&psVar1->field_0xc = uVar7;
      uVar2 = (&param_1[lVar13].key1)[1];
      param_1[lVar15].key1 = param_1[lVar13].key1;
      (&param_1[lVar15].key1)[1] = uVar2;
      lVar12 = lVar13 * 2 + 1;
      lVar15 = lVar13;
    } while (lVar12 < lVar16);
  }
  lVar16 = lVar16 + -1;
  if (lVar13 < lVar16) {
    psVar14 = param_1 + lVar16;
    iVar5 = psVar14->which;
    iVar6 = psVar14->right;
    uVar7 = *(undefined4 *)&psVar14->field_0xc;
    psVar1 = param_1 + lVar13;
    psVar1->gain = psVar14->gain;
    psVar1->which = iVar5;
    psVar1->right = iVar6;
    *(undefined4 *)&psVar1->field_0xc = uVar7;
    uVar2 = (&param_1[lVar16].key1)[1];
    param_1[lVar13].key1 = param_1[lVar16].key1;
    (&param_1[lVar13].key1)[1] = uVar2;
    while (0 < lVar13) {
      lVar12 = lVar13 + -1 >> 1;
      psVar14 = param_1 + lVar12;
      if (param_1[lVar13].gain <= psVar14->gain) {
        return;
      }
      psVar1 = param_1 + lVar13;
      iVar5 = psVar1->which;
      iVar6 = psVar1->right;
      uVar7 = *(undefined4 *)&psVar1->field_0xc;
      iVar8 = psVar14->gain;
      iVar9 = psVar14->which;
      iVar10 = psVar14->right;
      uVar11 = *(undefined4 *)&psVar14->field_0xc;
      uVar2 = psVar14->key1;
      uVar3 = psVar14->key2;
      psVar14->gain = psVar1->gain;
      psVar14->which = iVar5;
      psVar14->right = iVar6;
      *(undefined4 *)&psVar14->field_0xc = uVar7;
      uVar4 = (&param_1[lVar13].key1)[1];
      psVar14->key1 = param_1[lVar13].key1;
      psVar14->key2 = uVar4;
      psVar14 = param_1 + lVar13;
      psVar14->gain = iVar8;
      psVar14->which = iVar9;
      psVar14->right = iVar10;
      *(undefined4 *)&psVar14->field_0xc = uVar11;
      param_1[lVar13].key1 = uVar2;
      (&param_1[lVar13].key1)[1] = uVar3;
      lVar13 = lVar12;
    }
  }
  return;
}

// popped_heap<oo2::slide_candidate,oo2::stdless<oo2::slide_candidate>_> @ 14f3b09b0

void __cdecl
oo2::popped_heap<oo2::slide_candidate,oo2::stdless<oo2::slide_candidate>_>
          (slide_candidate *param_1,slide_candidate *param_2,stdless<oo2::slide_candidate> param_3)

{
  slide_candidate *psVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  slide_candidate *psVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar13 = 0;
  lVar12 = 1;
  lVar16 = (longlong)param_2 - (longlong)param_1 >> 5;
  lVar15 = lVar13;
  if (1 < lVar16) {
    do {
      lVar13 = lVar12;
      if ((lVar12 + 1 < lVar16) && (param_1[lVar12].gain < param_1[lVar12 + 1].gain)) {
        lVar13 = lVar12 + 1;
      }
      psVar14 = param_1 + lVar13;
      iVar5 = psVar14->which;
      iVar6 = psVar14->right;
      uVar7 = *(undefined4 *)&psVar14->field_0xc;
      psVar1 = param_1 + lVar15;
      psVar1->gain = psVar14->gain;
      psVar1->which = iVar5;
      psVar1->right = iVar6;
      *(undefined4 *)&psVar1->field_0xc = uVar7;
      uVar2 = (&param_1[lVar13].key1)[1];
      param_1[lVar15].key1 = param_1[lVar13].key1;
      (&param_1[lVar15].key1)[1] = uVar2;
      lVar12 = lVar13 * 2 + 1;
      lVar15 = lVar13;
    } while (lVar12 < lVar16);
  }
  lVar16 = lVar16 + -1;
  if (lVar13 < lVar16) {
    psVar14 = param_1 + lVar16;
    iVar5 = psVar14->which;
    iVar6 = psVar14->right;
    uVar7 = *(undefined4 *)&psVar14->field_0xc;
    psVar1 = param_1 + lVar13;
    psVar1->gain = psVar14->gain;
    psVar1->which = iVar5;
    psVar1->right = iVar6;
    *(undefined4 *)&psVar1->field_0xc = uVar7;
    uVar2 = (&param_1[lVar16].key1)[1];
    param_1[lVar13].key1 = param_1[lVar16].key1;
    (&param_1[lVar13].key1)[1] = uVar2;
    while (0 < lVar13) {
      lVar12 = lVar13 + -1 >> 1;
      psVar14 = param_1 + lVar12;
      if (param_1[lVar13].gain <= psVar14->gain) {
        return;
      }
      psVar1 = param_1 + lVar13;
      iVar5 = psVar1->which;
      iVar6 = psVar1->right;
      uVar7 = *(undefined4 *)&psVar1->field_0xc;
      iVar8 = psVar14->gain;
      iVar9 = psVar14->which;
      iVar10 = psVar14->right;
      uVar11 = *(undefined4 *)&psVar14->field_0xc;
      uVar2 = psVar14->key1;
      uVar3 = psVar14->key2;
      psVar14->gain = psVar1->gain;
      psVar14->which = iVar5;
      psVar14->right = iVar6;
      *(undefined4 *)&psVar14->field_0xc = uVar7;
      uVar4 = (&param_1[lVar13].key1)[1];
      psVar14->key1 = param_1[lVar13].key1;
      psVar14->key2 = uVar4;
      psVar14 = param_1 + lVar13;
      psVar14->gain = iVar8;
      psVar14->which = iVar9;
      psVar14->right = iVar10;
      *(undefined4 *)&psVar14->field_0xc = uVar11;
      param_1[lVar13].key1 = uVar2;
      (&param_1[lVar13].key1)[1] = uVar3;
      lVar13 = lVar12;
    }
  }
  return;
}

// promote_heap<oo2::slide_candidate,oo2::stdless<oo2::slide_candidate>_> @ 14f3b0aa0

void __cdecl
oo2::promote_heap<oo2::slide_candidate,oo2::stdless<oo2::slide_candidate>_>
          (slide_candidate *param_1,slide_candidate *param_2,slide_candidate *param_3,
          stdless<oo2::slide_candidate> param_4)

{
  slide_candidate *psVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  slide_candidate *psVar13;
  longlong lVar14;
  
  lVar5 = (longlong)param_3 - (longlong)param_1 >> 5;
  while( true ) {
    if (lVar5 < 1) {
      return;
    }
    lVar14 = lVar5 + -1 >> 1;
    psVar13 = param_1 + lVar14;
    if (param_1[lVar5].gain <= psVar13->gain) break;
    psVar1 = param_1 + lVar5;
    iVar6 = psVar1->which;
    iVar7 = psVar1->right;
    uVar8 = *(undefined4 *)&psVar1->field_0xc;
    iVar9 = psVar13->gain;
    iVar10 = psVar13->which;
    iVar11 = psVar13->right;
    uVar12 = *(undefined4 *)&psVar13->field_0xc;
    uVar2 = psVar13->key1;
    uVar3 = psVar13->key2;
    psVar13->gain = psVar1->gain;
    psVar13->which = iVar6;
    psVar13->right = iVar7;
    *(undefined4 *)&psVar13->field_0xc = uVar8;
    uVar4 = (&param_1[lVar5].key1)[1];
    psVar13->key1 = param_1[lVar5].key1;
    psVar13->key2 = uVar4;
    psVar13 = param_1 + lVar5;
    psVar13->gain = iVar9;
    psVar13->which = iVar10;
    psVar13->right = iVar11;
    *(undefined4 *)&psVar13->field_0xc = uVar12;
    param_1[lVar5].key1 = uVar2;
    (&param_1[lVar5].key1)[1] = uVar3;
    lVar5 = lVar14;
  }
  return;
}

// push_heap<oo2::slide_candidate> @ 14f3b0b00

void __cdecl oo2::push_heap<oo2::slide_candidate>(slide_candidate *param_1,slide_candidate *param_2)

{
  slide_candidate *psVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  slide_candidate *psVar13;
  longlong lVar14;
  
  lVar5 = (longlong)param_2 + (-0x20 - (longlong)param_1) >> 5;
  while( true ) {
    if (lVar5 < 1) {
      return;
    }
    lVar14 = lVar5 + -1 >> 1;
    psVar13 = param_1 + lVar14;
    if (param_1[lVar5].gain <= psVar13->gain) break;
    psVar1 = param_1 + lVar5;
    iVar6 = psVar1->which;
    iVar7 = psVar1->right;
    uVar8 = *(undefined4 *)&psVar1->field_0xc;
    iVar9 = psVar13->gain;
    iVar10 = psVar13->which;
    iVar11 = psVar13->right;
    uVar12 = *(undefined4 *)&psVar13->field_0xc;
    uVar2 = psVar13->key1;
    uVar3 = psVar13->key2;
    psVar13->gain = psVar1->gain;
    psVar13->which = iVar6;
    psVar13->right = iVar7;
    *(undefined4 *)&psVar13->field_0xc = uVar8;
    uVar4 = (&param_1[lVar5].key1)[1];
    psVar13->key1 = param_1[lVar5].key1;
    psVar13->key2 = uVar4;
    psVar13 = param_1 + lVar5;
    psVar13->gain = iVar9;
    psVar13->which = iVar10;
    psVar13->right = iVar11;
    *(undefined4 *)&psVar13->field_0xc = uVar12;
    param_1[lVar5].key1 = uVar2;
    (&param_1[lVar5].key1)[1] = uVar3;
    lVar5 = lVar14;
  }
  return;
}

// push_heap<oo2::slide_candidate,oo2::stdless<oo2::slide_candidate>_> @ 14f3b0b80

void __cdecl
oo2::push_heap<oo2::slide_candidate,oo2::stdless<oo2::slide_candidate>_>
          (slide_candidate *param_1,slide_candidate *param_2,stdless<oo2::slide_candidate> param_3)

{
  slide_candidate *psVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  slide_candidate *psVar13;
  longlong lVar14;
  
  lVar5 = (longlong)param_2 + (-0x20 - (longlong)param_1) >> 5;
  while( true ) {
    if (lVar5 < 1) {
      return;
    }
    lVar14 = lVar5 + -1 >> 1;
    psVar13 = param_1 + lVar14;
    if (param_1[lVar5].gain <= psVar13->gain) break;
    psVar1 = param_1 + lVar5;
    iVar6 = psVar1->which;
    iVar7 = psVar1->right;
    uVar8 = *(undefined4 *)&psVar1->field_0xc;
    iVar9 = psVar13->gain;
    iVar10 = psVar13->which;
    iVar11 = psVar13->right;
    uVar12 = *(undefined4 *)&psVar13->field_0xc;
    uVar2 = psVar13->key1;
    uVar3 = psVar13->key2;
    psVar13->gain = psVar1->gain;
    psVar13->which = iVar6;
    psVar13->right = iVar7;
    *(undefined4 *)&psVar13->field_0xc = uVar8;
    uVar4 = (&param_1[lVar5].key1)[1];
    psVar13->key1 = param_1[lVar5].key1;
    psVar13->key2 = uVar4;
    psVar13 = param_1 + lVar5;
    psVar13->gain = iVar9;
    psVar13->which = iVar10;
    psVar13->right = iVar11;
    *(undefined4 *)&psVar13->field_0xc = uVar12;
    param_1[lVar5].key1 = uVar2;
    (&param_1[lVar5].key1)[1] = uVar3;
    lVar5 = lVar14;
  }
  return;
}

// reverse<oo2::indexed_interval_*> @ 14f3b0bf0

void __cdecl
oo2::reverse<oo2::indexed_interval_*>(indexed_interval *param_1,indexed_interval *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  indexed_interval *piVar5;
  
  piVar5 = param_2 + -1;
  if (param_1 < piVar5) {
    do {
      iVar2 = piVar5->len;
      iVar3 = param_1->start;
      iVar4 = param_1->len;
      iVar1 = param_1->histo;
      param_1->start = piVar5->start;
      param_1->len = iVar2;
      param_1->histo = piVar5->histo;
      param_1 = param_1 + 1;
      piVar5->start = iVar3;
      piVar5->len = iVar4;
      piVar5->histo = iVar1;
      piVar5 = piVar5 + -1;
    } while (param_1 < piVar5);
  }
  return;
}

// rrAlignDownPointer<unsigned_char> @ 14f3b0c40

uchar * __cdecl oo2::rrAlignDownPointer<unsigned_char>(uchar *param_1,long64 param_2)

{
  return (uchar *)(~(param_2 - 1U) & (ulonglong)param_1);
}

// rrAlignUpPointer<unsigned_char> @ 14f3b0c60

uchar * __cdecl oo2::rrAlignUpPointer<unsigned_char>(uchar *param_1,long64 param_2)

{
  return (uchar *)((ulonglong)(param_1 + param_2 + -1) & ~(param_2 - 1U));
}

// stdsort<oo2::index_and_count_*,oo2::stdgreater<oo2::index_and_count>_> @ 14f3b0c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::stdsort<oo2::index_and_count_*,oo2::stdgreater<oo2::index_and_count>_>
          (index_and_count *param_1,index_and_count *param_2,
          stdgreater<oo2::index_and_count> param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  index_and_count iVar5;
  index_and_count *piVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  index_and_count *piVar10;
  index_and_count *piVar11;
  index_and_count *piVar12;
  ulonglong uVar13;
  index_and_count *piVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  undefined1 auStack_648 [1536];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_648;
  uVar15 = (ulonglong)(int)((longlong)param_2 - (longlong)param_1 >> 3);
  piVar14 = param_1 + (uVar15 - 1);
  uVar8 = uVar15;
  puVar18 = local_48;
  if (1 < uVar15) {
    do {
      puVar17 = puVar18;
      puVar18 = puVar17 + -3;
      uVar8 = (uVar8 >> 2) + (uVar8 >> 1);
    } while (uVar8 != 0);
    puVar17[-4] = 0;
LAB_14f3b0d30:
    do {
      if (1 < uVar15) {
        if (uVar15 == 2) {
          if (param_1->count < piVar14->count) {
            iVar5 = *param_1;
            *param_1 = *piVar14;
LAB_14f3b0fc0:
            *piVar14 = iVar5;
          }
        }
        else {
          iVar1 = param_1->count;
          iVar2 = piVar14->count;
          uVar8 = uVar15 >> 1;
          iVar3 = param_1[uVar8].count;
          piVar6 = param_1 + uVar8;
          if (iVar1 < iVar3) {
            if (iVar2 < iVar3) {
              if (iVar2 < iVar1) {
                iVar5 = *param_1;
                *param_1 = *piVar6;
                *piVar6 = iVar5;
                goto LAB_14f3b0dc0;
              }
              iVar5 = *piVar6;
              *piVar6 = *param_1;
              *param_1 = iVar5;
              iVar5 = *piVar6;
              *piVar6 = *piVar14;
            }
            else {
LAB_14f3b0db4:
              iVar5 = *param_1;
              *param_1 = *piVar14;
            }
LAB_14f3b0dbd:
            *piVar14 = iVar5;
          }
          else if (iVar3 < iVar2) {
            if (iVar2 < iVar1) {
              iVar5 = *piVar6;
              *piVar6 = *piVar14;
              goto LAB_14f3b0dbd;
            }
            iVar5 = *param_1;
            *param_1 = *piVar6;
            *piVar6 = iVar5;
            goto LAB_14f3b0db4;
          }
LAB_14f3b0dc0:
          if (4 < uVar15) {
            if (puVar18 == local_48) {
LAB_14f3b0ee0:
              uVar8 = uVar8 - 1;
              piVar6 = piVar6 + -1;
              uVar13 = uVar8 * 2 + 1;
              piVar11 = piVar6;
LAB_14f3b0ef2:
              piVar10 = param_1 + uVar13;
              if ((piVar10 + 1 <= piVar14) && (piVar10[1].count < piVar10->count)) {
                uVar13 = uVar13 + 1;
                piVar10 = piVar10 + 1;
              }
              if (piVar10->count < piVar11->count) goto code_r0x00014f3b0f15;
              goto LAB_14f3b0f31;
            }
            iVar5 = *piVar6;
            *piVar6 = *param_1;
            *param_1 = iVar5;
            piVar6 = param_1;
            piVar11 = piVar14;
            while( true ) {
              piVar10 = piVar11;
              do {
                piVar11 = piVar10 + -1;
                piVar12 = piVar10 + -1;
                piVar10 = piVar11;
              } while (piVar12->count < param_1->count);
              piVar10 = piVar6;
              if (piVar11 <= piVar6) break;
              do {
                piVar6 = piVar10;
                piVar10 = piVar6 + 1;
              } while (param_1->count < piVar6[1].count);
              if (piVar11 <= piVar10) break;
              iVar5 = *piVar10;
              *piVar10 = *piVar11;
              *piVar11 = iVar5;
              piVar6 = piVar10;
            }
            iVar5 = *param_1;
            *param_1 = *piVar6;
            *piVar6 = iVar5;
            uVar15 = (ulonglong)iVar5 >> 0x20;
            piVar11 = piVar6;
            do {
              piVar10 = piVar11 + 1;
              uVar7 = (uint)uVar15;
              if (piVar14 <= piVar10) break;
              uVar7 = piVar6->count;
              uVar15 = (ulonglong)uVar7;
              piVar12 = piVar11 + 1;
              piVar11 = piVar10;
            } while ((int)uVar7 <= piVar12->count);
            do {
              piVar11 = piVar6 + -1;
              if (piVar11 <= param_1) break;
              piVar12 = piVar6 + -1;
              piVar6 = piVar11;
            } while (piVar12->count <= (int)uVar7);
            lVar9 = (longlong)piVar14 - (longlong)piVar10 >> 3;
            lVar16 = (longlong)piVar11 - (longlong)param_1 >> 3;
            uVar15 = lVar9 + 1;
            uVar8 = lVar16 + 1;
            piVar6 = piVar11;
            piVar12 = param_1;
            if (uVar8 > uVar15) {
              piVar6 = piVar14;
              piVar12 = piVar10;
              piVar10 = param_1;
              piVar14 = piVar11;
            }
            *puVar18 = (ulonglong)piVar12;
            lVar4 = lVar9;
            if (uVar8 <= uVar15) {
              lVar4 = lVar16;
            }
            puVar18[1] = (ulonglong)piVar6;
            puVar18[2] = lVar4 + 1;
            if (uVar8 <= uVar15) {
              lVar16 = lVar9;
            }
            uVar15 = lVar16 + 1;
            param_1 = piVar10;
            puVar18 = puVar18 + 3;
            goto LAB_14f3b0d30;
          }
          if (uVar15 != 3) {
            iVar1 = param_1[1].count;
            if (iVar1 < piVar6->count) {
              if (iVar1 <= piVar14->count) {
                iVar5 = *piVar6;
                *piVar6 = param_1[1];
                param_1[1] = iVar5;
                iVar5 = *piVar6;
                *piVar6 = *piVar14;
                goto LAB_14f3b0fc0;
              }
              iVar5 = param_1[1];
              param_1[1] = *piVar6;
              *piVar6 = iVar5;
            }
            else if (param_1->count < iVar1) {
              iVar5 = *param_1;
              *param_1 = param_1[1];
              param_1[1] = iVar5;
            }
          }
        }
      }
LAB_14f3b0fc3:
      uVar15 = puVar18[-1];
      param_1 = (index_and_count *)puVar18[-3];
      piVar14 = (index_and_count *)puVar18[-2];
      puVar18 = puVar18 + -3;
    } while (uVar15 != 0);
  }
  return;
code_r0x00014f3b0f15:
  iVar5 = *piVar11;
  uVar13 = uVar13 * 2 + 1;
  *piVar11 = *piVar10;
  *piVar10 = iVar5;
  piVar11 = piVar10;
  if (uVar15 <= uVar13) {
LAB_14f3b0f31:
    if (uVar8 == 0) {
      uVar15 = uVar15 - 1;
      iVar5 = *param_1;
      uVar13 = 1;
      *param_1 = *piVar14;
      *piVar14 = iVar5;
      piVar14 = piVar14 + -1;
      piVar11 = param_1;
      if (uVar15 < 2) goto LAB_14f3b0fc3;
      goto LAB_14f3b0ef2;
    }
    goto LAB_14f3b0ee0;
  }
  goto LAB_14f3b0ef2;
}

// swap3<oo2::index_and_count> @ 14f3b1040

void __cdecl
oo2::swap3<oo2::index_and_count>
          (index_and_count *param_1,index_and_count *param_2,index_and_count *param_3)

{
  index_and_count iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  iVar1 = *param_1;
  *param_1 = *param_3;
  *param_3 = iVar1;
  return;
}

// swap<oo2::rrArenaAllocator_*> @ 14f3b1060

void __cdecl
oo2::swap<oo2::rrArenaAllocator_*>(rrArenaAllocator **param_1,rrArenaAllocator **param_2)

{
  rrArenaAllocator *prVar1;
  
  prVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = prVar1;
  return;
}

// swap<void_*> @ 14f3b1080

void __cdecl oo2::swap<void_*>(void **param_1,void **param_2)

{
  void *pvVar1;
  
  pvVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pvVar1;
  return;
}

// swap<oo2::index_and_count> @ 14f3b10a0

void __cdecl oo2::swap<oo2::index_and_count>(index_and_count *param_1,index_and_count *param_2)

{
  index_and_count iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// swap<oo2::indexed_interval> @ 14f3b10c0

void __cdecl oo2::swap<oo2::indexed_interval>(indexed_interval *param_1,indexed_interval *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2->len;
  iVar3 = param_1->start;
  iVar4 = param_1->len;
  iVar1 = param_1->histo;
  param_1->start = param_2->start;
  param_1->len = iVar2;
  param_1->histo = param_2->histo;
  param_2->start = iVar3;
  param_2->len = iVar4;
  param_2->histo = iVar1;
  return;
}

// swap<oo2::slide_candidate> @ 14f3b10f0

void __cdecl oo2::swap<oo2::slide_candidate>(slide_candidate *param_1,slide_candidate *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  
  iVar4 = param_2->which;
  iVar5 = param_2->right;
  uVar6 = *(undefined4 *)&param_2->field_0xc;
  iVar7 = param_1->gain;
  iVar8 = param_1->which;
  iVar9 = param_1->right;
  uVar10 = *(undefined4 *)&param_1->field_0xc;
  uVar1 = param_1->key1;
  uVar2 = param_1->key2;
  param_1->gain = param_2->gain;
  param_1->which = iVar4;
  param_1->right = iVar5;
  *(undefined4 *)&param_1->field_0xc = uVar6;
  uVar3 = param_2->key2;
  param_1->key1 = param_2->key1;
  param_1->key2 = uVar3;
  param_2->gain = iVar7;
  param_2->which = iVar8;
  param_2->right = iVar9;
  *(undefined4 *)&param_2->field_0xc = uVar10;
  param_2->key1 = uVar1;
  param_2->key2 = uVar2;
  return;
}

// swap<__int64> @ 14f3b1120

void __cdecl oo2::swap<__int64>(long64 *param_1,long64 *param_2)

{
  long64 lVar1;
  
  lVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = lVar1;
  return;
}

// swap<unsigned___int64> @ 14f3b1140

void __cdecl oo2::swap<unsigned___int64>(ulong64 *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// vector_a<unsigned_char> @ 14f3b1160

vector_a<unsigned_char> * __thiscall
oo2::vector_a<unsigned_char>::vector_a<unsigned_char>(vector_a<unsigned_char> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_a<unsigned_short> @ 14f3b1180

vector_a<unsigned_short> * __thiscall
oo2::vector_a<unsigned_short>::vector_a<unsigned_short>(vector_a<unsigned_short> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_a<oo2::entropyset> @ 14f3b11a0

vector_a<oo2::entropyset> * __thiscall
oo2::vector_a<oo2::entropyset>::vector_a<oo2::entropyset>(vector_a<oo2::entropyset> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_a<oo2::entropyset_codelens_U16_256> @ 14f3b11c0

vector_a<oo2::entropyset_codelens_U16_256> * __thiscall
oo2::vector_a<oo2::entropyset_codelens_U16_256>::vector_a<oo2::entropyset_codelens_U16_256>
          (vector_a<oo2::entropyset_codelens_U16_256> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_a<oo2::indexed_interval> @ 14f3b11e0

vector_a<oo2::indexed_interval> * __thiscall
oo2::vector_a<oo2::indexed_interval>::vector_a<oo2::indexed_interval>
          (vector_a<oo2::indexed_interval> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_a<unsigned___int64> @ 14f3b1200

vector_a<unsigned___int64> * __thiscall
oo2::vector_a<unsigned___int64>::vector_a<unsigned___int64>(vector_a<unsigned___int64> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> @ 14f3b1220

vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> * __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::
vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> @ 14f3b1240

vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> * __thiscall
oo2::vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::
vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_>
          (vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> @ 14f3b1260

vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> * __thiscall
oo2::vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::
vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>
          (vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_> @ 14f3b1280

vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
* __thiscall
oo2::
vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::
vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
          (vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
           *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> @ 14f3b12a0

vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> * __thiscall
oo2::vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::
vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>
          (vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> @ 14f3b12c0

vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> * __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::
vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>
          (vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> @ 14f3b12e0

vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> * __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::
vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_> @ 14f3b1300

vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_> * __thiscall
oo2::vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::
vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_>
          (vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> @ 14f3b1320

vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> * __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::
vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_> @ 14f3b1340

vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
* __thiscall
oo2::
vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::
vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
          (vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> @ 14f3b1360

vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> * __thiscall
oo2::vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::
vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>
          (vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> @ 14f3b1380

vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> * __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::
vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>
          (vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_storage_a<unsigned_char> @ 14f3b13a0

vector_storage_a<unsigned_char> * __thiscall
oo2::vector_storage_a<unsigned_char>::vector_storage_a<unsigned_char>
          (vector_storage_a<unsigned_char> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage_a<unsigned_short> @ 14f3b13c0

vector_storage_a<unsigned_short> * __thiscall
oo2::vector_storage_a<unsigned_short>::vector_storage_a<unsigned_short>
          (vector_storage_a<unsigned_short> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage_a<oo2::entropyset> @ 14f3b13e0

vector_storage_a<oo2::entropyset> * __thiscall
oo2::vector_storage_a<oo2::entropyset>::vector_storage_a<oo2::entropyset>
          (vector_storage_a<oo2::entropyset> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage_a<oo2::entropyset_codelens_U16_256> @ 14f3b1400

vector_storage_a<oo2::entropyset_codelens_U16_256> * __thiscall
oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>::
vector_storage_a<oo2::entropyset_codelens_U16_256>
          (vector_storage_a<oo2::entropyset_codelens_U16_256> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage_a<oo2::indexed_interval> @ 14f3b1420

vector_storage_a<oo2::indexed_interval> * __thiscall
oo2::vector_storage_a<oo2::indexed_interval>::vector_storage_a<oo2::indexed_interval>
          (vector_storage_a<oo2::indexed_interval> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage_a<unsigned___int64> @ 14f3b1440

vector_storage_a<unsigned___int64> * __thiscall
oo2::vector_storage_a<unsigned___int64>::vector_storage_a<unsigned___int64>
          (vector_storage_a<unsigned___int64> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return this;
}

// ~vector_a<unsigned_char> @ 14f3b1460

void __thiscall
oo2::vector_a<unsigned_char>::~vector_a<unsigned_char>(vector_a<unsigned_char> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_a<unsigned_short> @ 14f3b1480

void __thiscall
oo2::vector_a<unsigned_short>::~vector_a<unsigned_short>(vector_a<unsigned_short> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_a<oo2::entropyset> @ 14f3b14a0

void __thiscall
oo2::vector_a<oo2::entropyset>::~vector_a<oo2::entropyset>(vector_a<oo2::entropyset> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_a<oo2::entropyset_codelens_U16_256> @ 14f3b14c0

void __thiscall
oo2::vector_a<oo2::entropyset_codelens_U16_256>::~vector_a<oo2::entropyset_codelens_U16_256>
          (vector_a<oo2::entropyset_codelens_U16_256> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_a<oo2::indexed_interval> @ 14f3b14e0

void __thiscall
oo2::vector_a<oo2::indexed_interval>::~vector_a<oo2::indexed_interval>
          (vector_a<oo2::indexed_interval> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_a<unsigned___int64> @ 14f3b1500

void __thiscall
oo2::vector_a<unsigned___int64>::~vector_a<unsigned___int64>(vector_a<unsigned___int64> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> @ 14f3b1520

void __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::
~vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> @ 14f3b1540

void __thiscall
oo2::vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::
~vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_>
          (vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> @ 14f3b1560

void __thiscall
oo2::vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::
~vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>
          (vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_> @ 14f3b1580

void __thiscall
oo2::
vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::
~vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
          (vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
           *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> @ 14f3b15a0

void __thiscall
oo2::vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::
~vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>
          (vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> @ 14f3b15c0

void __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::
~vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>
          (vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> @ 14f3b15e0

void __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::
~vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_> @ 14f3b1600

void __thiscall
oo2::vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::
~vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_>
          (vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> @ 14f3b1620

void __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::
~vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_> @ 14f3b1640

void __thiscall
oo2::
vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::
~vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
          (vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
           *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> @ 14f3b1660

void __thiscall
oo2::vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::
~vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>
          (vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> @ 14f3b1680

void __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::
~vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>
          (vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_storage_a<unsigned_char> @ 14f3b16a0

void __thiscall
oo2::vector_storage_a<unsigned_char>::~vector_storage_a<unsigned_char>
          (vector_storage_a<unsigned_char> *this)

{
  return;
}

// ~vector_storage_a<unsigned_short> @ 14f3b16b0

void __thiscall
oo2::vector_storage_a<unsigned_short>::~vector_storage_a<unsigned_short>
          (vector_storage_a<unsigned_short> *this)

{
  return;
}

// ~vector_storage_a<oo2::entropyset> @ 14f3b16c0

void __thiscall
oo2::vector_storage_a<oo2::entropyset>::~vector_storage_a<oo2::entropyset>
          (vector_storage_a<oo2::entropyset> *this)

{
  return;
}

// ~vector_storage_a<oo2::entropyset_codelens_U16_256> @ 14f3b16d0

void __thiscall
oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>::
~vector_storage_a<oo2::entropyset_codelens_U16_256>
          (vector_storage_a<oo2::entropyset_codelens_U16_256> *this)

{
  return;
}

// ~vector_storage_a<oo2::indexed_interval> @ 14f3b16e0

void __thiscall
oo2::vector_storage_a<oo2::indexed_interval>::~vector_storage_a<oo2::indexed_interval>
          (vector_storage_a<oo2::indexed_interval> *this)

{
  return;
}

// ~vector_storage_a<unsigned___int64> @ 14f3b16f0

void __thiscall
oo2::vector_storage_a<unsigned___int64>::~vector_storage_a<unsigned___int64>
          (vector_storage_a<unsigned___int64> *this)

{
  return;
}

// operator[] @ 14f3b1700

entropyset * __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::operator[]
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this,
          ulong64 param_1)

{
  return (entropyset *)(param_1 * 0x408 + *(longlong *)this);
}

// operator[] @ 14f3b1720

entropyset_codelens_U16_256 * __thiscall
oo2::
vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::operator[](vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
             *this,ulong64 param_1)

{
  return (entropyset_codelens_U16_256 *)(param_1 * 0x200 + *(longlong *)this);
}

// operator[] @ 14f3b1740

indexed_interval * __thiscall
oo2::vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::operator[]
          (vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this,
          ulong64 param_1)

{
  return (indexed_interval *)(*(longlong *)this + param_1 * 0xc);
}

// operator< @ 14f3b1760

bool __cdecl oo2::operator<(slide_candidate *param_1,slide_candidate *param_2)

{
  return param_1->gain < param_2->gain;
}

// operator> @ 14f3b1770

bool __thiscall oo2::index_and_count::operator>(index_and_count *this,index_and_count *param_1)

{
  return param_1->count < this->count;
}

// operator() @ 14f3b1780

bool __thiscall
oo2::stdgreater<oo2::index_and_count>::operator()
          (stdgreater<oo2::index_and_count> *this,index_and_count *param_1,index_and_count *param_2)

{
  return param_2->count < param_1->count;
}

// operator() @ 14f3b17a0

bool __thiscall
oo2::stdless<oo2::slide_candidate>::operator()
          (stdless<oo2::slide_candidate> *this,slide_candidate *param_1,slide_candidate *param_2)

{
  return param_1->gain < param_2->gain;
}

// operator() @ 14f3b17b0

void __thiscall
oo2::swap_functor<oo2::rrArenaAllocator_*>::operator()
          (swap_functor<oo2::rrArenaAllocator_*> *this,rrArenaAllocator **param_1,
          rrArenaAllocator **param_2)

{
  rrArenaAllocator *prVar1;
  
  prVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = prVar1;
  return;
}

// operator() @ 14f3b17d0

void __thiscall
oo2::swap_functor<void_*>::operator()(swap_functor<void_*> *this,void **param_1,void **param_2)

{
  void *pvVar1;
  
  pvVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pvVar1;
  return;
}

// operator() @ 14f3b17f0

void __thiscall
oo2::swap_functor<oo2::index_and_count>::operator()
          (swap_functor<oo2::index_and_count> *this,index_and_count *param_1,
          index_and_count *param_2)

{
  index_and_count iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// operator() @ 14f3b1810

void __thiscall
oo2::swap_functor<oo2::indexed_interval>::operator()
          (swap_functor<oo2::indexed_interval> *this,indexed_interval *param_1,
          indexed_interval *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2->len;
  iVar3 = param_1->start;
  iVar4 = param_1->len;
  iVar1 = param_1->histo;
  param_1->start = param_2->start;
  param_1->len = iVar2;
  param_1->histo = param_2->histo;
  param_2->start = iVar3;
  param_2->len = iVar4;
  param_2->histo = iVar1;
  return;
}

// operator() @ 14f3b1840

void __thiscall
oo2::swap_functor<oo2::slide_candidate>::operator()
          (swap_functor<oo2::slide_candidate> *this,slide_candidate *param_1,
          slide_candidate *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  
  iVar4 = param_2->which;
  iVar5 = param_2->right;
  uVar6 = *(undefined4 *)&param_2->field_0xc;
  iVar7 = param_1->gain;
  iVar8 = param_1->which;
  iVar9 = param_1->right;
  uVar10 = *(undefined4 *)&param_1->field_0xc;
  uVar1 = param_1->key1;
  uVar2 = param_1->key2;
  param_1->gain = param_2->gain;
  param_1->which = iVar4;
  param_1->right = iVar5;
  *(undefined4 *)&param_1->field_0xc = uVar6;
  uVar3 = param_2->key2;
  param_1->key1 = param_2->key1;
  param_1->key2 = uVar3;
  param_2->gain = iVar7;
  param_2->which = iVar8;
  param_2->right = iVar9;
  *(undefined4 *)&param_2->field_0xc = uVar10;
  param_2->key1 = uVar1;
  param_2->key2 = uVar2;
  return;
}

// operator() @ 14f3b1870

void __thiscall
oo2::swap_functor<__int64>::operator()(swap_functor<__int64> *this,long64 *param_1,long64 *param_2)

{
  long64 lVar1;
  
  lVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = lVar1;
  return;
}

// OodleFree @ 14f3b1890

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3b1890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMallocAligned @ 14f3b18a0

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

// RR_GET16_NATIVE @ 14f3b18e0

ushort __cdecl oo2::RR_GET16_NATIVE(void *param_1)

{
  return *(ushort *)param_1;
}

// RR_GET32_NATIVE @ 14f3b18f0

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f3b1900

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT16_NATIVE @ 14f3b1910

void __cdecl oo2::RR_PUT16_NATIVE(void *param_1,ushort param_2)

{
  *(ushort *)param_1 = param_2;
  return;
}

// RR_PUT32_NATIVE @ 14f3b1920

void __cdecl oo2::RR_PUT32_NATIVE(void *param_1,uint param_2)

{
  *(uint *)param_1 = param_2;
  return;
}

// RR_PUT64_NATIVE @ 14f3b1930

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// S16_check @ 14f3b1940

short __cdecl oo2::S16_check(uint param_1)

{
  return (short)param_1;
}

// SloppyMemset_Impl @ 14f3b1960

void __cdecl oo2::SloppyMemset_Impl(void *param_1,__m128i *param_2,long64 param_3,long64 param_4)

{
  long64 lVar1;
  long64 lVar2;
  long64 *plVar3;
  
  lVar1 = param_2->m128i_i64[0];
  lVar2 = param_2->m128i_i64[1];
  *(long64 *)param_1 = lVar1;
  *(long64 *)((longlong)param_1 + 8) = lVar2;
  if (0x10 < param_3) {
    plVar3 = (long64 *)((longlong)param_1 + 0x10U & 0xfffffffffffffff0);
    do {
      *plVar3 = lVar1;
      plVar3[1] = lVar2;
      plVar3 = plVar3 + 2;
    } while (plVar3 < (long64 *)((longlong)param_1 + param_3));
  }
  return;
}

// U16_checkA @ 14f3b19a0

ushort __cdecl oo2::U16_checkA(long64 param_1)

{
  return (ushort)param_1;
}

// U8_check @ 14f3b19b0

uchar __cdecl oo2::U8_check(int param_1)

{
  return (uchar)param_1;
}

// add_slides @ 14f3b19c0

int __cdecl
oo2::add_slides(int param_1,long64 param_2,Histo256 *param_3,int *param_4,int *param_5,
               slide_candidate *param_6,int *param_7,uchar *param_8,int param_9,int param_10)

{
  longlong lVar1;
  ulong64 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  slide_candidate *psVar6;
  slide_candidate *psVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar5 = 0;
  lVar10 = (longlong)param_9;
  lVar9 = (longlong)param_1;
  iVar8 = 0;
  if (0 < param_1) {
    lVar1 = lVar9 + -1;
    iVar8 = iVar5;
    if ((param_9 * 2 <= param_4[lVar1]) && (param_10 < 1)) {
      iVar5 = entropysets_codelen_delta
                        (param_8 + (param_5[lVar9] - lVar10),lVar10,param_3 + lVar9,
                         (longlong)param_4[lVar9],param_3 + lVar1,(longlong)param_4[lVar1]);
      if (iVar5 < 0) {
        psVar6 = param_6 + *param_7;
        psVar6->gain = -iVar5;
        psVar6->right = 0;
        iVar8 = 1;
        psVar6->which = param_1;
        psVar6->key1 = (longlong)param_5[lVar9] << 0x20 | (longlong)param_4[lVar9];
        psVar6->key2 = (longlong)param_5[lVar1] << 0x20 | (longlong)param_4[lVar1];
        *param_7 = *param_7 + 1;
      }
    }
  }
  if (lVar9 < param_2 + -1) {
    lVar1 = lVar9 + 1;
    if ((param_9 * 2 <= param_4[lVar1]) && (-1 < param_10)) {
      iVar5 = entropysets_codelen_delta
                        (param_8 + (longlong)param_5[lVar9] + (longlong)param_4[lVar9],lVar10,
                         param_3 + lVar9,(longlong)param_4[lVar9],param_3 + lVar1,
                         (longlong)param_4[lVar1]);
      if (iVar5 < 0) {
        psVar7 = param_6 + *param_7;
        psVar7->gain = -iVar5;
        psVar7->which = param_1;
        psVar7->right = 1;
        psVar7->key1 = (longlong)param_5[lVar9] << 0x20 | (longlong)param_4[lVar9];
        psVar7->key2 = (longlong)param_5[lVar1] << 0x20 | (longlong)param_4[lVar1];
        iVar8 = *param_7;
        iVar5 = psVar7->which;
        iVar3 = psVar7->right;
        uVar4 = *(undefined4 *)&psVar7->field_0xc;
        psVar6 = param_6 + iVar8;
        psVar6->gain = psVar7->gain;
        psVar6->which = iVar5;
        psVar6->right = iVar3;
        *(undefined4 *)&psVar6->field_0xc = uVar4;
        uVar2 = psVar7->key2;
        param_6[iVar8].key1 = psVar7->key1;
        (&param_6[iVar8].key1)[1] = uVar2;
        *param_7 = *param_7 + 1;
        iVar8 = 1;
      }
    }
  }
  return iVar8;
}

// append @ 14f3b1c00

void __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::append
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this,uchar *param_1,
          uchar *param_2)

{
  vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::insert
            ((vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *)this,
             *(ulong64 *)&this->field_0x10,param_1,param_2);
  return;
}

// at @ 14f3b1c20

uchar * __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::at
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this,ulong64 param_1)

{
  return (uchar *)(*(longlong *)this + param_1);
}

// at @ 14f3b1c30

ushort * __thiscall
oo2::vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::at
          (vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this,ulong64 param_1)

{
  return (ushort *)(*(longlong *)this + param_1 * 2);
}

// at @ 14f3b1c40

entropyset * __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::at
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this,
          ulong64 param_1)

{
  return (entropyset *)(param_1 * 0x408 + *(longlong *)this);
}

// at @ 14f3b1c60

entropyset_codelens_U16_256 * __thiscall
oo2::
vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::at(vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
     *this,ulong64 param_1)

{
  return (entropyset_codelens_U16_256 *)(param_1 * 0x200 + *(longlong *)this);
}

// at @ 14f3b1c80

indexed_interval * __thiscall
oo2::vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::at
          (vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this,
          ulong64 param_1)

{
  return (indexed_interval *)(*(longlong *)this + param_1 * 0xc);
}

// at @ 14f3b1ca0

ulong64 * __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::at
          (vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this,
          ulong64 param_1)

{
  return (ulong64 *)(*(longlong *)this + param_1 * 8);
}

// back @ 14f3b1cb0

entropyset * __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::back
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  return (entropyset *)(*(longlong *)this + -0x408 + *(longlong *)&this->field_0x10 * 0x408);
}

// back @ 14f3b1cd0

entropyset_codelens_U16_256 * __thiscall
oo2::
vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::back(vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
       *this)

{
  return (entropyset_codelens_U16_256 *)
         (*(longlong *)this + -0x200 + *(longlong *)&this->field_0x10 * 0x200);
}

// back @ 14f3b1cf0

indexed_interval * __thiscall
oo2::vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::back
          (vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  return (indexed_interval *)(*(longlong *)this + *(longlong *)&this->field_0x10 * 0xc + -0xc);
}

// begin @ 14f3b1d10

uchar * __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::begin
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  return (uchar *)this->_padding_;
}

// begin @ 14f3b1d20

ushort * __thiscall
oo2::vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::begin
          (vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this)

{
  return (ushort *)this->_padding_;
}

// begin @ 14f3b1d30

entropyset * __thiscall
oo2::vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::begin
          (vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  return (entropyset *)this->_padding_;
}

// begin @ 14f3b1d40

entropyset_codelens_U16_256 * __thiscall
oo2::
vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::begin(vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
        *this)

{
  return (entropyset_codelens_U16_256 *)this->_padding_;
}

// begin @ 14f3b1d50

indexed_interval * __thiscall
oo2::vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::begin
          (vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  return (indexed_interval *)this->_padding_;
}

// begin @ 14f3b1d60

ulong64 * __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::begin
          (vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this)

{
  return (ulong64 *)this->_padding_;
}

// begin @ 14f3b1d70

uchar * __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::begin
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  return *(uchar **)this;
}

// begin @ 14f3b1d80

indexed_interval * __thiscall
oo2::vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::begin
          (vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  return *(indexed_interval **)this;
}

// begin @ 14f3b1d90

uchar * __thiscall
oo2::vector_storage_a<unsigned_char>::begin(vector_storage_a<unsigned_char> *this)

{
  return this->m_data;
}

// begin @ 14f3b1da0

ushort * __thiscall
oo2::vector_storage_a<unsigned_short>::begin(vector_storage_a<unsigned_short> *this)

{
  return this->m_data;
}

// begin @ 14f3b1db0

entropyset * __thiscall
oo2::vector_storage_a<oo2::entropyset>::begin(vector_storage_a<oo2::entropyset> *this)

{
  return this->m_data;
}

// begin @ 14f3b1dc0

entropyset_codelens_U16_256 * __thiscall
oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>::begin
          (vector_storage_a<oo2::entropyset_codelens_U16_256> *this)

{
  return this->m_data;
}

// begin @ 14f3b1dd0

indexed_interval * __thiscall
oo2::vector_storage_a<oo2::indexed_interval>::begin(vector_storage_a<oo2::indexed_interval> *this)

{
  return this->m_data;
}

// begin @ 14f3b1de0

ulong64 * __thiscall
oo2::vector_storage_a<unsigned___int64>::begin(vector_storage_a<unsigned___int64> *this)

{
  return this->m_data;
}

// capacity @ 14f3b1df0

ulong64 __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::capacity
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  return this->_padding_;
}

// capacity @ 14f3b1e00

ulong64 __thiscall
oo2::vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::capacity
          (vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this)

{
  return this->_padding_;
}

// capacity @ 14f3b1e10

ulong64 __thiscall
oo2::vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::capacity
          (vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  return this->_padding_;
}

// capacity @ 14f3b1e20

ulong64 __thiscall
oo2::
vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::capacity(vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
           *this)

{
  return this->_padding_;
}

// capacity @ 14f3b1e30

ulong64 __thiscall
oo2::vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::capacity
          (vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  return this->_padding_;
}

// capacity @ 14f3b1e40

ulong64 __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::capacity
          (vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this)

{
  return this->_padding_;
}

// capacity @ 14f3b1e50

ulong64 __thiscall
oo2::vector_storage_a<unsigned_char>::capacity(vector_storage_a<unsigned_char> *this)

{
  return this->m_capacity;
}

// capacity @ 14f3b1e60

ulong64 __thiscall
oo2::vector_storage_a<unsigned_short>::capacity(vector_storage_a<unsigned_short> *this)

{
  return this->m_capacity;
}

// capacity @ 14f3b1e70

ulong64 __thiscall
oo2::vector_storage_a<oo2::entropyset>::capacity(vector_storage_a<oo2::entropyset> *this)

{
  return this->m_capacity;
}

// capacity @ 14f3b1e80

ulong64 __thiscall
oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>::capacity
          (vector_storage_a<oo2::entropyset_codelens_U16_256> *this)

{
  return this->m_capacity;
}

// capacity @ 14f3b1e90

ulong64 __thiscall
oo2::vector_storage_a<oo2::indexed_interval>::capacity
          (vector_storage_a<oo2::indexed_interval> *this)

{
  return this->m_capacity;
}

// capacity @ 14f3b1ea0

ulong64 __thiscall
oo2::vector_storage_a<unsigned___int64>::capacity(vector_storage_a<unsigned___int64> *this)

{
  return this->m_capacity;
}

// clear @ 14f3b1eb0

void __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::clear
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}

// clear @ 14f3b1ec0

void __thiscall
oo2::
vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::clear(vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
        *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}

// data @ 14f3b1ed0

uchar * __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::data
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (uchar *)0x0;
  }
  return *(uchar **)this;
}

// data @ 14f3b1ef0

ushort * __thiscall
oo2::vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::data
          (vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (ushort *)0x0;
  }
  return *(ushort **)this;
}

// data @ 14f3b1f10

entropyset * __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::data
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (entropyset *)0x0;
  }
  return *(entropyset **)this;
}

// data @ 14f3b1f30

ulong64 * __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::data
          (vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (ulong64 *)0x0;
  }
  return *(ulong64 **)this;
}

// do_greedy_single_byte_slides @ 14f3b1f60

void __cdecl
oo2::do_greedy_single_byte_slides
          (uchar *param_1,uchar *param_2,Histo256 *param_3,int *param_4,int *param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (1 < param_6) {
    lVar9 = 0x100;
    lVar7 = (longlong)param_4 + (-4 - (longlong)param_5);
    lVar10 = (longlong)param_5 - (longlong)param_4;
    uVar11 = (ulonglong)(param_6 - 1);
    do {
      param_4 = param_4 + 1;
      piVar1 = (int *)(lVar10 + (longlong)param_4);
      iVar2 = *(int *)((longlong)piVar1 + lVar7);
      pbVar8 = param_1 + *(int *)(lVar10 + (longlong)param_4);
      lVar4 = 0;
      lVar5 = 0;
      if (iVar2 < 1) {
        iVar3 = *param_4;
      }
      else {
        iVar3 = *param_4;
        lVar4 = (ulonglong)param_3->counts[(ulonglong)pbVar8[-1] + lVar9] * (longlong)iVar2 -
                (ulonglong)param_3[-1].counts[(ulonglong)pbVar8[-1] + lVar9] * (longlong)iVar3;
      }
      if (0 < iVar3) {
        lVar5 = (ulonglong)param_3[-1].counts[(ulonglong)*pbVar8 + lVar9] * (longlong)iVar3 -
                (ulonglong)param_3->counts[(ulonglong)*pbVar8 + lVar9] * (longlong)iVar2;
      }
      if ((lVar4 < 1) || (lVar4 <= lVar5)) {
        if (0 < lVar5) {
          uVar6 = (ulonglong)*pbVar8;
          do {
            pbVar8 = pbVar8 + 1;
            param_3[-1].counts[uVar6 + lVar9] = param_3[-1].counts[uVar6 + lVar9] + 1;
            param_3->counts[uVar6 + lVar9] = param_3->counts[uVar6 + lVar9] - 1;
            *param_4 = *param_4 + -1;
            *(int *)((longlong)piVar1 + lVar7) = *(int *)((longlong)piVar1 + lVar7) + 1;
            *piVar1 = *piVar1 + 1;
            if (*param_4 == 0) break;
            uVar6 = (ulonglong)*pbVar8;
          } while (0 < (longlong)
                       ((ulonglong)param_3[-1].counts[uVar6 + lVar9] * (longlong)*param_4 -
                       (ulonglong)param_3->counts[uVar6 + lVar9] *
                       (longlong)*(int *)((longlong)piVar1 + lVar7)));
        }
      }
      else {
        uVar6 = (ulonglong)pbVar8[-1];
        pbVar8 = pbVar8 + -1;
        do {
          pbVar8 = pbVar8 + -1;
          param_3->counts[uVar6 + lVar9] = param_3->counts[uVar6 + lVar9] + 1;
          param_3[-1].counts[uVar6 + lVar9] = param_3[-1].counts[uVar6 + lVar9] - 1;
          *(int *)((longlong)piVar1 + lVar7) = *(int *)((longlong)piVar1 + lVar7) + -1;
          *param_4 = *param_4 + 1;
          *piVar1 = *piVar1 + -1;
          if (*(int *)((longlong)piVar1 + lVar7) == 0) break;
          uVar6 = (ulonglong)*pbVar8;
        } while (0 < (longlong)
                     ((ulonglong)param_3->counts[uVar6 + lVar9] *
                      (longlong)*(int *)((longlong)piVar1 + lVar7) -
                     (ulonglong)param_3[-1].counts[uVar6 + lVar9] * (longlong)*param_4));
      }
      lVar9 = lVar9 + 0x100;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}

// empty @ 14f3b2170

bool __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::empty
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// empty @ 14f3b2180

bool __thiscall
oo2::vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::empty
          (vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// empty @ 14f3b2190

bool __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::empty
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// empty @ 14f3b21a0

bool __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::empty
          (vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// encoder_max_num_arrays @ 14f3b21b0

int __cdecl oo2::encoder_max_num_arrays(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1 << ((byte)param_1 & 0x1f);
  iVar2 = 0x20;
  if (iVar1 < 0x20) {
    iVar2 = iVar1;
  }
  iVar1 = 8;
  if (8 < iVar2) {
    iVar1 = iVar2;
  }
  if (param_1 == 9) {
    iVar1 = 0x3e;
  }
  return iVar1;
}

// end @ 14f3b21e0

uchar * __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::end
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  return (uchar *)(this->m_size + this->_padding_);
}

// end @ 14f3b2200

indexed_interval * __thiscall
oo2::vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::end
          (vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  return (indexed_interval *)(this->_padding_ + this->m_size * 0xc);
}

// end @ 14f3b2220

uchar * __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::end
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  return (uchar *)(*(longlong *)&this->field_0x10 + *(longlong *)this);
}

// end @ 14f3b2240

indexed_interval * __thiscall
oo2::vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::end
          (vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  return (indexed_interval *)(*(longlong *)this + *(longlong *)&this->field_0x10 * 0xc);
}

// extend_default @ 14f3b2260

void __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::extend_default
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this,ulong64 param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (this->m_size + param_1 <= (ulonglong)this->_padding_) {
    this->m_size = this->m_size + param_1;
    return;
  }
  iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                             "oo2::vector_storage_a<unsigned char>::needmakefit",
                             "newsize <= m_capacity");
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// extend_default @ 14f3b22e0

void __thiscall
oo2::vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::extend_default
          (vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this,ulong64 param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (this->m_size + param_1 <= (ulonglong)this->_padding_) {
    this->m_size = this->m_size + param_1;
    return;
  }
  iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                             "oo2::vector_storage_a<unsigned short>::needmakefit",
                             "newsize <= m_capacity");
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// extend_default @ 14f3b2360

void __thiscall
oo2::vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::extend_default
          (vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this,
          ulong64 param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (this->m_size + param_1 <= (ulonglong)this->_padding_) {
    this->m_size = this->m_size + param_1;
    return;
  }
  iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                             "oo2::vector_storage_a<struct oo2::entropyset>::needmakefit",
                             "newsize <= m_capacity");
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// extend_default @ 14f3b23e0

void __thiscall
oo2::
vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::extend_default(vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
                 *this,ulong64 param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (this->m_size + param_1 <= (ulonglong)this->_padding_) {
    this->m_size = this->m_size + param_1;
    return;
  }
  iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                             "oo2::vector_storage_a<struct oo2::entropyset_codelens_U16_256>::needmakefit"
                             ,"newsize <= m_capacity");
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// extend_default @ 14f3b2460

void __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::extend_default
          (vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this,
          ulong64 param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (this->m_size + param_1 <= (ulonglong)this->_padding_) {
    this->m_size = this->m_size + param_1;
    return;
  }
  iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                             "oo2::vector_storage_a<unsigned __int64>::needmakefit",
                             "newsize <= m_capacity");
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// init @ 14f3b24d0

void __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::init
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14f3b24e0

void __thiscall
oo2::vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::init
          (vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14f3b24f0

void __thiscall
oo2::vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::init
          (vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14f3b2500

void __thiscall
oo2::
vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::init(vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
       *this)

{
  this->m_size = 0;
  return;
}

// init @ 14f3b2510

void __thiscall
oo2::vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::init
          (vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14f3b2520

void __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::init
          (vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this)

{
  this->m_size = 0;
  return;
}

// insert @ 14f3b2540

void __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::insert
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this,ulong64 param_1,
          uchar *param_2,uchar *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  int iVar4;
  uchar *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  
  uVar2 = this->m_size;
  lVar8 = (longlong)param_3 - (longlong)param_2;
  uVar1 = lVar8 + param_1;
  if (((ulonglong)this->_padding_ < uVar2 + lVar8) &&
     (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                                 "oo2::vector_storage_a<unsigned char>::needmakefit",
                                 "newsize <= m_capacity"), iVar4 != 0)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar10 = this->_padding_;
  this->m_size = this->m_size + lVar8;
  puVar5 = (uchar *)(uVar2 + lVar10);
  if (uVar2 < uVar1) {
    lVar8 = uVar2 - param_1;
    lVar9 = uVar1 - uVar2;
    if (lVar9 != 0) {
      lVar12 = lVar8 - (longlong)puVar5;
      lVar10 = lVar9;
      do {
        if (puVar5 != (uchar *)0x0) {
          *puVar5 = (param_2 + lVar12)[(longlong)puVar5];
        }
        puVar5 = puVar5 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = this->_padding_;
    }
    puVar6 = (undefined1 *)(lVar10 + lVar9 + uVar2);
    if (lVar8 != 0) {
      lVar9 = (lVar10 + param_1) - (longlong)puVar6;
      lVar10 = lVar8;
      do {
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = puVar6[lVar9];
        }
        puVar6 = puVar6 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      puVar6 = (undefined1 *)(this->_padding_ + param_1);
      lVar10 = (longlong)param_2 - (longlong)puVar6;
      do {
        *puVar6 = puVar6[lVar10];
        puVar6 = puVar6 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  else {
    if (lVar8 != 0) {
      lVar9 = ((lVar10 - lVar8) + uVar2) - (longlong)puVar5;
      lVar10 = lVar8;
      do {
        if (puVar5 != (uchar *)0x0) {
          *puVar5 = puVar5[lVar9];
        }
        puVar5 = puVar5 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = this->_padding_;
    }
    puVar7 = (undefined1 *)(lVar10 + param_1);
    lVar10 = uVar2 - uVar1;
    puVar6 = puVar7 + lVar8;
    if (puVar7 < puVar6) {
      lVar10 = lVar10 + -1;
      if (-1 < lVar10) {
        puVar11 = puVar6 + lVar10;
        do {
          lVar10 = lVar10 + -1;
          *puVar11 = puVar11[(longlong)puVar7 - (longlong)puVar6];
          puVar11 = puVar11 + -1;
        } while (-1 < lVar10);
      }
    }
    else if (lVar10 != 0) {
      lVar9 = (longlong)puVar7 - (longlong)puVar6;
      do {
        *puVar6 = puVar6[lVar9];
        puVar6 = puVar6 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (lVar8 != 0) {
      lVar10 = (longlong)param_2 - (longlong)puVar7;
      do {
        *puVar7 = puVar7[lVar10];
        puVar7 = puVar7 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}

// insert @ 14f3b2710

uchar * __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::insert
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this,uchar *param_1,
          uchar *param_2,uchar *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)this;
  vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::insert
            ((vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *)this,
             (longlong)param_1 - lVar1,param_2,param_3);
  return (uchar *)(*(longlong *)this + ((longlong)param_1 - lVar1));
}

// makefit1 @ 14f3b2750

uchar * __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::makefit1
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this,ulong64 param_1)

{
  return (uchar *)0x0;
}

// makefit1 @ 14f3b2760

ushort * __thiscall
oo2::vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::makefit1
          (vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this,ulong64 param_1)

{
  return (ushort *)0x0;
}

// makefit1 @ 14f3b2770

entropyset * __thiscall
oo2::vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::makefit1
          (vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this,
          ulong64 param_1)

{
  return (entropyset *)0x0;
}

// makefit1 @ 14f3b2780

entropyset_codelens_U16_256 * __thiscall
oo2::
vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::makefit1(vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
           *this,ulong64 param_1)

{
  return (entropyset_codelens_U16_256 *)0x0;
}

// makefit1 @ 14f3b2790

indexed_interval * __thiscall
oo2::vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::makefit1
          (vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this,
          ulong64 param_1)

{
  return (indexed_interval *)0x0;
}

// makefit1 @ 14f3b27a0

ulong64 * __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::makefit1
          (vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this,
          ulong64 param_1)

{
  return (ulong64 *)0x0;
}

// makefit1 @ 14f3b27b0

uchar * __thiscall
oo2::vector_storage_a<unsigned_char>::makefit1
          (vector_storage_a<unsigned_char> *this,ulong64 param_1,ulong64 param_2)

{
  return (uchar *)0x0;
}

// makefit1 @ 14f3b27c0

ushort * __thiscall
oo2::vector_storage_a<unsigned_short>::makefit1
          (vector_storage_a<unsigned_short> *this,ulong64 param_1,ulong64 param_2)

{
  return (ushort *)0x0;
}

// makefit1 @ 14f3b27d0

entropyset * __thiscall
oo2::vector_storage_a<oo2::entropyset>::makefit1
          (vector_storage_a<oo2::entropyset> *this,ulong64 param_1,ulong64 param_2)

{
  return (entropyset *)0x0;
}

// makefit1 @ 14f3b27e0

entropyset_codelens_U16_256 * __thiscall
oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>::makefit1
          (vector_storage_a<oo2::entropyset_codelens_U16_256> *this,ulong64 param_1,ulong64 param_2)

{
  return (entropyset_codelens_U16_256 *)0x0;
}

// makefit1 @ 14f3b27f0

indexed_interval * __thiscall
oo2::vector_storage_a<oo2::indexed_interval>::makefit1
          (vector_storage_a<oo2::indexed_interval> *this,ulong64 param_1,ulong64 param_2)

{
  return (indexed_interval *)0x0;
}

// makefit1 @ 14f3b2800

ulong64 * __thiscall
oo2::vector_storage_a<unsigned___int64>::makefit1
          (vector_storage_a<unsigned___int64> *this,ulong64 param_1,ulong64 param_2)

{
  return (ulong64 *)0x0;
}

// makefit2 @ 14f3b2810

void __thiscall
oo2::vector_storage_a<unsigned_char>::makefit2
          (vector_storage_a<unsigned_char> *this,uchar *param_1,ulong64 param_2,ulong64 param_3)

{
  return;
}

// makefit2 @ 14f3b2820

void __thiscall
oo2::vector_storage_a<unsigned_short>::makefit2
          (vector_storage_a<unsigned_short> *this,ushort *param_1,ulong64 param_2,ulong64 param_3)

{
  return;
}

// makefit2 @ 14f3b2830

void __thiscall
oo2::vector_storage_a<oo2::entropyset>::makefit2
          (vector_storage_a<oo2::entropyset> *this,entropyset *param_1,ulong64 param_2,
          ulong64 param_3)

{
  return;
}

// makefit2 @ 14f3b2840

void __thiscall
oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>::makefit2
          (vector_storage_a<oo2::entropyset_codelens_U16_256> *this,
          entropyset_codelens_U16_256 *param_1,ulong64 param_2,ulong64 param_3)

{
  return;
}

// makefit2 @ 14f3b2850

void __thiscall
oo2::vector_storage_a<oo2::indexed_interval>::makefit2
          (vector_storage_a<oo2::indexed_interval> *this,indexed_interval *param_1,ulong64 param_2,
          ulong64 param_3)

{
  return;
}

// makefit2 @ 14f3b2860

void __thiscall
oo2::vector_storage_a<unsigned___int64>::makefit2
          (vector_storage_a<unsigned___int64> *this,ulong64 *param_1,ulong64 param_2,ulong64 param_3
          )

{
  return;
}

// memset_zero @ 14f3b2870

void __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::memset_zero
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    memset((void *)0x0,0,0);
    return;
  }
  memset(*(void **)this,0,*(longlong *)&this->field_0x10 * 0x408);
  return;
}

// needmakefit @ 14f3b28a0

bool __thiscall
oo2::vector_storage_a<unsigned_char>::needmakefit
          (vector_storage_a<unsigned_char> *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (this->m_capacity < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<unsigned char>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  return false;
}

// needmakefit @ 14f3b28e0

bool __thiscall
oo2::vector_storage_a<unsigned_short>::needmakefit
          (vector_storage_a<unsigned_short> *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (this->m_capacity < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<unsigned short>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  return false;
}

// needmakefit @ 14f3b2920

bool __thiscall
oo2::vector_storage_a<oo2::entropyset>::needmakefit
          (vector_storage_a<oo2::entropyset> *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (this->m_capacity < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::entropyset>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  return false;
}

// needmakefit @ 14f3b2960

bool __thiscall
oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>::needmakefit
          (vector_storage_a<oo2::entropyset_codelens_U16_256> *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (this->m_capacity < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::entropyset_codelens_U16_256>::needmakefit"
                               ,"newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  return false;
}

// needmakefit @ 14f3b29a0

bool __thiscall
oo2::vector_storage_a<oo2::indexed_interval>::needmakefit
          (vector_storage_a<oo2::indexed_interval> *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (this->m_capacity < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::indexed_interval>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  return false;
}

// needmakefit @ 14f3b29e0

bool __thiscall
oo2::vector_storage_a<unsigned___int64>::needmakefit
          (vector_storage_a<unsigned___int64> *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (this->m_capacity < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<unsigned __int64>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  return false;
}

// newLZ_get_array @ 14f3b2a20

long64 __cdecl
oo2::newLZ_get_array
          (uchar **param_1,uchar *param_2,uchar *param_3,long64 *param_4,long64 param_5,bool param_6
          ,uchar *param_7,uchar *param_8)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  long64 lVar4;
  uint uVar5;
  longlong lVar6;
  size_t _Size;
  uchar *_Src;
  int iVar7;
  char *pcVar8;
  
  lVar6 = (longlong)param_3 - (longlong)param_2;
  if (lVar6 < 2) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f3b2b40;
    pcVar8 = "OODLE ERROR : corruption : 2 <= rrPtrDiff( from_end - from_ptr )\n";
    iVar7 = 0x35;
  }
  else {
    bVar1 = *param_2;
    bVar3 = bVar1 >> 4;
    uVar5 = (uint)bVar3;
    if (0x7f < bVar1) {
      uVar5 = uVar5 & 7;
      if ((bVar3 & 7) != 0) {
LAB_14f3b2b94:
        lVar4 = newLZ_get_array_comp(uVar5,param_1,param_2,param_3,param_4,param_5,param_7,param_8);
        return lVar4;
      }
      _Src = param_2 + 2;
      _Size = (size_t)((ushort)(*(ushort *)param_2 >> 8 | *(ushort *)param_2 << 8) & 0xfff);
      if (param_5 < (longlong)_Size) {
        return -1;
      }
      if (param_3 < _Src + _Size) {
        return -1;
      }
LAB_14f3b2ab8:
      if (!param_6) {
        *param_1 = _Src;
        *param_4 = _Size;
        return (long64)(_Src + (_Size - (longlong)param_2));
      }
      memmove(*param_1,_Src,_Size);
      *param_4 = _Size;
      return (long64)(_Src + (_Size - (longlong)param_2));
    }
    if (3 < lVar6) {
      if (bVar3 != 0) goto LAB_14f3b2b94;
      uVar5 = *(uint *)param_2;
      _Src = param_2 + 3;
      uVar2 = (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8;
      _Size = (size_t)((uVar2 | uVar5 << 0x18 & 0x3ffff00) >> 8);
      if (0x3ffff < (uVar2 | uVar5 << 0x18) >> 8) {
        return -1;
      }
      if (param_5 < (longlong)_Size) {
        return -1;
      }
      if ((longlong)param_3 - (longlong)_Src < (longlong)_Size) {
        return -1;
      }
      goto LAB_14f3b2ab8;
    }
    if (lVar6 != 3) {
      return -1;
    }
    if (CONCAT21(CONCAT11(bVar1,param_2[1]),param_2[2]) == 0) {
      *param_1 = (uchar *)0x0;
      *param_4 = 0;
      return (long64)&DAT_00000003;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f3b2b40;
    pcVar8 = "OODLE ERROR : corruption : header == 0\n";
    iVar7 = 0x78;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.inl",iVar7,pcVar8);
code_r0x00014f3b2b40:
  ooLogErrorPost();
  return -1;
}

// newLZ_get_array_split @ 14f3b2c00

long64 __cdecl
oo2::newLZ_get_array_split
          (uchar *param_1,long64 param_2,uchar *param_3,long64 param_4,uchar *param_5,uchar *param_6
          )

{
  uchar *puVar1;
  byte bVar2;
  long64 lVar3;
  uchar *puVar4;
  longlong lVar5;
  uchar *local_res10;
  longlong local_48;
  long64 local_40;
  uchar *local_38 [2];
  
  if (5 < param_2) {
    bVar2 = *param_1;
    if (1 < (bVar2 & 0x7f)) {
      puVar1 = param_3 + param_4;
      if ((bVar2 & 0x80) == 0) {
        lVar5 = 0;
        puVar4 = param_1 + 1;
        if ((bVar2 & 0x7f) != 0) {
          do {
            local_res10 = param_3;
            lVar3 = newLZ_get_array(&local_res10,puVar4,param_1 + param_2,&local_48,
                                    (longlong)puVar1 - (longlong)param_3,true,param_5,param_6);
            if (lVar3 < 0) {
              return -1;
            }
            puVar4 = puVar4 + lVar3;
            param_3 = local_res10 + local_48;
            lVar5 = lVar5 + 1;
          } while (lVar5 < (longlong)(ulonglong)(bVar2 & 0x7f));
        }
        if (param_3 == puVar1) {
          return (longlong)puVar4 - (longlong)param_1;
        }
      }
      else {
        lVar3 = newLZ_get_multiarray
                          (param_1,param_1 + param_2,param_3,puVar1,local_38,&local_48,1,&local_40,
                           true,param_5,param_6);
        if ((-1 < lVar3) && (local_48 == param_4)) {
          return lVar3;
        }
      }
    }
  }
  return -1;
}

// newLZ_get_multiarray @ 14f3b2d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::newLZ_get_multiarray
          (uchar *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar **param_5,
          long64 *param_6,long64 param_7,long64 *param_8,bool param_9,uchar *param_10,
          uchar *param_11)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  ulonglong *puVar7;
  void *_Src;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  int extraout_EAX;
  long64 lVar20;
  long64 lVar21;
  byte *pbVar22;
  uint uVar23;
  byte *pbVar24;
  ulonglong uVar25;
  longlong lVar26;
  char *pcVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  byte *pbVar31;
  uint *puVar32;
  ushort *puVar33;
  byte *pbVar34;
  ulonglong uVar35;
  long64 *plVar36;
  longlong lVar37;
  byte *pbVar38;
  longlong lVar39;
  char *pcVar40;
  uint uVar41;
  ulonglong uVar42;
  int iVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong *puVar48;
  ulonglong *puVar49;
  ulonglong *puVar50;
  ulonglong uVar51;
  bool bVar52;
  undefined1 auVar53 [16];
  undefined1 auStackY_5d8 [32];
  ulonglong local_590;
  ulonglong *local_588;
  byte *local_580;
  byte *local_578;
  ulonglong *local_570;
  longlong local_568;
  byte *local_560;
  ulonglong *local_558;
  ulonglong *local_550;
  long64 *local_548;
  longlong local_540;
  ulonglong *local_538;
  uint local_530;
  ulonglong *local_528;
  byte *local_520;
  byte *local_518;
  ulonglong local_510;
  long64 *local_508;
  ulonglong local_500;
  uchar **local_4f8;
  ulonglong local_4f0;
  uchar *local_4e8;
  uint *local_4e0;
  ulonglong *local_4d8;
  ulonglong *local_4d0;
  longlong local_4c8;
  uchar *local_4c0;
  byte *local_4b8;
  longlong local_4b0;
  ulonglong local_4a8;
  ulonglong local_498 [64];
  longlong local_298 [64];
  undefined8 local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  ulonglong auStack_80 [8];
  
  auStack_80[5] = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  local_508 = param_6;
  local_548 = param_8;
  local_4f8 = param_5;
  local_560 = param_11;
  if ((longlong)param_2 - (longlong)param_1 < 4) {
    return -1;
  }
  bVar2 = *param_1;
  puVar32 = (uint *)(param_1 + 1);
  uVar41 = (uint)bVar2;
  if (uVar41 < 0x80) {
    return -1;
  }
  uVar25 = (ulonglong)(uVar41 & 0x3f);
  local_530 = (uint)param_7;
  if ((bVar2 & 0x3f) != 0) {
    local_530 = uVar41 & 0x3f;
  }
  if (param_3 == param_10) {
    param_10 = param_10 + (longlong)(param_11 + (-0xc000 - (longlong)param_10)) / 2;
    param_4 = param_10;
  }
  puVar49 = (ulonglong *)param_3;
  local_538 = (ulonglong *)param_4;
  if ((bVar2 & 0x3f) != 0) {
    local_538 = (ulonglong *)param_11;
    puVar49 = (ulonglong *)param_10;
  }
  pbVar22 = (byte *)0x0;
  local_578 = (byte *)0x0;
  local_4e8 = param_3;
  local_4d0 = (ulonglong *)param_4;
  local_4c0 = param_1;
  rrPrintfKill("multiarray%s %d->%d : {\n");
  iVar43 = (int)uVar25;
  local_4c8 = (longlong)extraout_EAX;
  local_558 = (ulonglong *)0x0;
  pbVar38 = pbVar22;
  if (0 < local_4c8) {
    do {
      if (((int)uVar25 == 0) && (param_9)) {
        bVar52 = true;
      }
      else {
        bVar52 = false;
      }
      lVar37 = (longlong)local_538 - (longlong)puVar49;
      lVar26 = (longlong)param_2 - (longlong)puVar32;
      local_528 = puVar49;
      if (lVar26 < 2) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3b30eb;
        pcVar40 = "OODLE ERROR : corruption : 2 <= rrPtrDiff( from_end - from_ptr )\n";
        iVar43 = 0x35;
LAB_14f3b30e0:
        pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_arrays.inl";
        goto LAB_14f3b30e7;
      }
      bVar2 = (byte)*puVar32;
      bVar3 = bVar2 >> 4;
      uVar23 = (uint)bVar3;
      if (bVar2 < 0x80) {
        if (3 < lVar26) {
          if (bVar3 != 0) goto LAB_14f3b3015;
          uVar23 = *puVar32;
          puVar50 = (ulonglong *)((longlong)puVar32 + 3);
          uVar6 = (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8;
          uVar30 = (uVar6 | uVar23 << 0x18 & 0x3ffff00) >> 8;
          uVar25 = (ulonglong)uVar30;
          if (0x3ffff < (uVar6 | uVar23 << 0x18) >> 8) {
            return -1;
          }
          if (lVar37 < (longlong)uVar25) {
            return -1;
          }
          if ((longlong)param_2 - (longlong)puVar50 < (longlong)uVar25) {
            return -1;
          }
          local_528 = puVar50;
          if (bVar52) {
            local_528 = puVar49;
            memmove(puVar49,puVar50,(ulonglong)uVar30);
          }
          lVar26 = uVar25 + 3;
          local_500 = uVar25;
          goto LAB_14f3b3043;
        }
        if (lVar26 != 3) {
          return -1;
        }
        if (CONCAT21(CONCAT11(bVar2,*(byte *)((longlong)puVar32 + 1)),
                     *(byte *)((longlong)puVar32 + 2)) != 0) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            pcVar40 = "OODLE ERROR : corruption : header == 0\n";
            iVar43 = 0x78;
            goto LAB_14f3b30e0;
          }
          goto LAB_14f3b30eb;
        }
        local_528 = (ulonglong *)0x0;
        local_500 = 0;
        lVar26 = 3;
      }
      else {
        uVar23 = uVar23 & 7;
        if ((bVar3 & 7) == 0) {
          puVar50 = (ulonglong *)((longlong)puVar32 + 2);
          uVar23 = (ushort)((ushort)*puVar32 >> 8 | (ushort)*puVar32 << 8) & 0xfff;
          uVar25 = (ulonglong)uVar23;
          if (lVar37 < (longlong)uVar25) {
            return -1;
          }
          if (param_2 < (byte *)(uVar25 + (longlong)puVar50)) {
            return -1;
          }
          local_528 = puVar50;
          if (bVar52) {
            local_528 = puVar49;
            memmove(puVar49,puVar50,(ulonglong)uVar23);
          }
          lVar26 = uVar25 + 2;
          local_500 = uVar25;
        }
        else {
LAB_14f3b3015:
          lVar26 = newLZ_get_array_comp
                             (uVar23,(uchar **)&local_528,(uchar *)puVar32,param_2,
                              (long64 *)&local_500,lVar37,param_10,param_11);
        }
LAB_14f3b3043:
        if (lVar26 < 0) {
          return -1;
        }
        uVar25 = (ulonglong)uVar41 & 0x3f;
      }
      puVar49 = (ulonglong *)((longlong)puVar49 + local_500);
      local_298[(longlong)local_558] = (longlong)local_528;
      local_498[(longlong)local_558] = local_500;
      iVar43 = (int)uVar25;
      if (iVar43 != 0) {
        param_10 = (uchar *)((longlong)param_10 + local_500);
      }
      local_558 = (ulonglong *)((longlong)local_558 + 1);
      local_578 = local_578 + local_500;
      puVar32 = (uint *)((longlong)puVar32 + lVar26);
      param_11 = local_560;
      pbVar38 = local_578;
      param_5 = local_4f8;
    } while ((longlong)local_558 < local_4c8);
  }
  *local_548 = (long64)pbVar38;
  if (iVar43 == 0) {
    if (0 < param_7) {
      lVar26 = (longlong)local_298 - (longlong)param_5;
      lVar37 = (longlong)local_498 - (longlong)param_5;
      lVar39 = (longlong)local_508 - (longlong)param_5;
      do {
        *param_5 = *(uchar **)(lVar26 + (longlong)param_5);
        *(undefined8 *)(lVar39 + (longlong)param_5) = *(undefined8 *)(lVar37 + (longlong)param_5);
        param_5 = param_5 + 1;
        param_7 = param_7 + -1;
      } while (param_7 != 0);
    }
    return (longlong)puVar32 - (longlong)local_4c0;
  }
  if ((longlong)param_2 - (longlong)puVar32 < 3) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3b30eb;
    pcVar40 = "OODLE ERROR : corruption : rrPtrDiff(comp_end - comp_ptr) >= 3\n";
    iVar43 = 0x171;
    pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
  }
  else {
    local_548 = (long64 *)(ulonglong)((ushort)*puVar32 & 0x8000);
    local_550 = (ulonglong *)(ulonglong)((ushort)*puVar32 & 0x3fff);
    puVar33 = (ushort *)((longlong)puVar32 + 2);
    lVar20 = newLZ_get_arraylens((uchar *)puVar33,param_2,(long64 *)&local_580,(long64)pbVar38);
    pbVar38 = local_560;
    if (lVar20 < 1) {
      return -1;
    }
    pbVar31 = local_580 + -param_7;
    if ((longlong)pbVar31 < 1) {
      return -1;
    }
    if ((longlong)local_560 - (longlong)param_10 < (longlong)local_580) {
      return -1;
    }
    local_520 = (byte *)((longlong)param_10 + (longlong)local_580);
    if ((longlong)local_560 - (longlong)local_520 < (longlong)local_580) {
      return -1;
    }
    pbVar34 = local_520 + (longlong)local_580;
    local_570 = (ulonglong *)param_10;
    local_518 = pbVar31;
    if (local_548 == (long64 *)0x0) {
      lVar20 = newLZ_get_array(&local_520,(uchar *)puVar33,param_2,(long64 *)&local_578,
                               (long64)local_580,false,pbVar34,local_560);
      if (lVar20 < 0) {
        return -1;
      }
      if (local_578 != local_580) {
        return -1;
      }
      lVar21 = newLZ_get_array((uchar **)&local_570,(byte *)((longlong)puVar33 + lVar20),param_2,
                               (long64 *)&local_578,(long64)pbVar31,false,pbVar34,pbVar38);
      if (lVar21 < 0) {
        return -1;
      }
      if (local_578 != pbVar31) {
        return -1;
      }
      local_538 = (ulonglong *)((byte *)((longlong)puVar33 + lVar20) + lVar21);
      pbVar24 = pbVar22;
      if (0xf < (longlong)pbVar31) {
        lVar26 = 0x10;
        do {
          pbVar1 = (byte *)((longlong)local_570 + lVar26 + -0x10);
          bVar2 = *pbVar1;
          bVar3 = pbVar1[1];
          bVar4 = pbVar1[2];
          bVar5 = pbVar1[3];
          bVar8 = pbVar1[4];
          bVar9 = pbVar1[5];
          bVar10 = pbVar1[6];
          bVar11 = pbVar1[7];
          bVar12 = pbVar1[8];
          bVar13 = pbVar1[9];
          bVar14 = pbVar1[10];
          bVar15 = pbVar1[0xb];
          bVar16 = pbVar1[0xc];
          bVar17 = pbVar1[0xd];
          bVar18 = pbVar1[0xe];
          bVar19 = pbVar1[0xf];
          auVar53[0] = -((byte)((bVar2 < __xmm_11111111111111111111111111111111) *
                                __xmm_11111111111111111111111111111111 |
                               (bVar2 >= __xmm_11111111111111111111111111111111) * bVar2) == bVar2);
          auVar53[1] = -((byte)((bVar3 < UNK_1531dfbb1) * UNK_1531dfbb1 |
                               (bVar3 >= UNK_1531dfbb1) * bVar3) == bVar3);
          auVar53[2] = -((byte)((bVar4 < UNK_1531dfbb2) * UNK_1531dfbb2 |
                               (bVar4 >= UNK_1531dfbb2) * bVar4) == bVar4);
          auVar53[3] = -((byte)((bVar5 < UNK_1531dfbb3) * UNK_1531dfbb3 |
                               (bVar5 >= UNK_1531dfbb3) * bVar5) == bVar5);
          auVar53[4] = -((byte)((bVar8 < UNK_1531dfbb4) * UNK_1531dfbb4 |
                               (bVar8 >= UNK_1531dfbb4) * bVar8) == bVar8);
          auVar53[5] = -((byte)((bVar9 < UNK_1531dfbb5) * UNK_1531dfbb5 |
                               (bVar9 >= UNK_1531dfbb5) * bVar9) == bVar9);
          auVar53[6] = -((byte)((bVar10 < UNK_1531dfbb6) * UNK_1531dfbb6 |
                               (bVar10 >= UNK_1531dfbb6) * bVar10) == bVar10);
          auVar53[7] = -((byte)((bVar11 < UNK_1531dfbb7) * UNK_1531dfbb7 |
                               (bVar11 >= UNK_1531dfbb7) * bVar11) == bVar11);
          auVar53[8] = -((byte)((bVar12 < UNK_1531dfbb8) * UNK_1531dfbb8 |
                               (bVar12 >= UNK_1531dfbb8) * bVar12) == bVar12);
          auVar53[9] = -((byte)((bVar13 < UNK_1531dfbb9) * UNK_1531dfbb9 |
                               (bVar13 >= UNK_1531dfbb9) * bVar13) == bVar13);
          auVar53[10] = -((byte)((bVar14 < UNK_1531dfbba) * UNK_1531dfbba |
                                (bVar14 >= UNK_1531dfbba) * bVar14) == bVar14);
          auVar53[0xb] = -((byte)((bVar15 < UNK_1531dfbbb) * UNK_1531dfbbb |
                                 (bVar15 >= UNK_1531dfbbb) * bVar15) == bVar15);
          auVar53[0xc] = -((byte)((bVar16 < UNK_1531dfbbc) * UNK_1531dfbbc |
                                 (bVar16 >= UNK_1531dfbbc) * bVar16) == bVar16);
          auVar53[0xd] = -((byte)((bVar17 < UNK_1531dfbbd) * UNK_1531dfbbd |
                                 (bVar17 >= UNK_1531dfbbd) * bVar17) == bVar17);
          auVar53[0xe] = -((byte)((bVar18 < UNK_1531dfbbe) * UNK_1531dfbbe |
                                 (bVar18 >= UNK_1531dfbbe) * bVar18) == bVar18);
          auVar53[0xf] = -((byte)((bVar19 < UNK_1531dfbbf) * UNK_1531dfbbf |
                                 (bVar19 >= UNK_1531dfbbf) * bVar19) == bVar19);
          if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar53 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar53 >> 0x2f,0) & 1) != 0) || (SUB161(auVar53 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar53 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar53 >> 0x47,0) & 1) != 0) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') goto LAB_14f3b3370;
          pbVar24 = pbVar24 + 0x10;
          lVar26 = lVar26 + 0x10;
        } while (lVar26 <= (longlong)pbVar31);
        if ((longlong)pbVar31 <= (longlong)pbVar24) goto LAB_14f3b3492;
      }
      do {
        if (0x10 < pbVar24[(longlong)local_570]) goto LAB_14f3b3370;
        pbVar24 = pbVar24 + 1;
      } while ((longlong)pbVar24 < (longlong)pbVar31);
    }
    else {
      local_578 = local_520;
      lVar20 = newLZ_get_array(&local_578,(uchar *)puVar33,param_2,(long64 *)&local_4b8,
                               (long64)local_580,false,pbVar34,local_560);
      if (lVar20 < 0) {
        return -1;
      }
      if (local_4b8 != local_580) {
        return -1;
      }
      local_538 = (ulonglong *)((longlong)puVar33 + lVar20);
      pbVar31 = pbVar22;
      if (3 < (longlong)local_580) {
        iVar43 = 4;
        pbVar24 = pbVar22;
        do {
          iVar43 = iVar43 + 4;
          pbVar31 = (byte *)(ulonglong)((int)pbVar31 + 4);
          uVar41 = *(uint *)(pbVar24 + (longlong)local_578);
          *(uint *)(pbVar24 + (longlong)local_570) = uVar41 >> 4 & 0xf0f0f0f;
          *(uint *)(pbVar24 + (longlong)local_520) = uVar41 & 0xf0f0f0f;
          pbVar24 = pbVar24 + 4;
        } while ((longlong)iVar43 <= (longlong)local_580);
      }
      lVar37 = (longlong)(int)pbVar31;
      lVar26 = lVar37;
      while (lVar37 < (longlong)local_580) {
        uVar41 = (int)pbVar31 + 1;
        pbVar31 = (byte *)(ulonglong)uVar41;
        bVar2 = local_578[lVar26];
        *(byte *)(lVar26 + (longlong)local_570) = bVar2 >> 4;
        local_520[lVar26] = bVar2 & 0xf;
        lVar26 = lVar26 + 1;
        lVar37 = (longlong)(int)uVar41;
      }
      local_518 = local_580;
      pbVar31 = local_580;
    }
LAB_14f3b3492:
    if ((longlong)pbVar38 - (longlong)pbVar34 < 4) {
      return -1;
    }
    local_510 = (ulonglong)(pbVar34 + 3) & 0xfffffffffffffffc;
    if ((longlong)((longlong)pbVar38 - local_510) < (longlong)pbVar31 * 4) {
      return -1;
    }
    if ((longlong)param_2 - (longlong)local_538 < (longlong)local_550) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3b30eb;
      pcVar40 = "OODLE ERROR : corruption : rrPtrDiff(comp_end - comp_ptr) >= varbits_complen\n";
      iVar43 = 0x247;
      pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
    }
    else {
      local_568 = 0x3f;
      bVar52 = false;
      puVar50 = (ulonglong *)((longlong)local_550 + (longlong)local_538);
      local_590 = 0;
      local_540 = 0x3f;
      local_588 = (ulonglong *)0x0;
      puVar49 = local_538;
      local_558 = puVar50;
      if (5 < (longlong)pbVar31) {
        local_4e0 = (uint *)(local_510 + 8);
        do {
          if (puVar50 <= puVar49 + 2) {
            if (bVar52) {
              if (puVar50 < puVar49 + -2) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
                pcVar40 = "OODLE ERROR : corruption : b >= f-16\n";
                iVar43 = 0x266;
                pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
                goto LAB_14f3b30e7;
              }
              if (puVar50 < &uStack_90) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
                pcVar40 = "OODLE ERROR : corruption : b >= safe_space+(8)\n";
                iVar43 = 0x266;
                pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
                goto LAB_14f3b30e7;
              }
              if (auStack_80 + 4 < puVar49) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
                pcVar40 = "OODLE ERROR : corruption : f <= safe_space + sizeof(safe_space) -(8)\n";
                iVar43 = 0x266;
                pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
                goto LAB_14f3b30e7;
              }
            }
            else {
              bVar52 = true;
              if (puVar50 < puVar49) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
                pcVar40 = "OODLE ERROR : corruption : b >= f\n";
                iVar43 = 0x266;
                pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
                goto LAB_14f3b30e7;
              }
              local_98 = 0;
              uStack_90 = 0;
              lVar26 = 0x18;
              if ((longlong)puVar49 - (longlong)local_538 < 0x18) {
                lVar26 = (longlong)puVar49 - (longlong)local_538;
              }
              local_88 = 0;
              auStack_80[0] = 0;
              lVar37 = 0x18;
              if ((longlong)local_558 - (longlong)puVar50 < 0x18) {
                lVar37 = (longlong)local_558 - (longlong)puVar50;
              }
              auStack_80[1] = 0;
              auStack_80[2] = 0;
              auStack_80[3] = 0;
              auStack_80[4] = 0;
              memcpy((void *)((longlong)auStack_80 - lVar26),(void *)((longlong)puVar49 - lVar26),
                     (size_t)((longlong)puVar50 + ((lVar37 + lVar26) - (longlong)puVar49)));
              puVar50 = (ulonglong *)
                        ((longlong)puVar50 + ((longlong)auStack_80 - (longlong)puVar49));
              puVar49 = auStack_80;
            }
          }
          uVar25 = *puVar49;
          puVar49 = (ulonglong *)((longlong)puVar49 + (local_568 >> 3));
          puVar48 = puVar50 + -1;
          local_4b0 = local_540 >> 3;
          puVar50 = (ulonglong *)((longlong)puVar50 - local_4b0);
          bVar2 = *(byte *)((longlong)((longlong)local_588 + 2) + (longlong)local_570);
          bVar3 = *(byte *)((longlong)((longlong)local_588 + 4) + (longlong)local_570);
          uVar42 = c_rrBitMask64[(ulonglong)bVar2 + 1];
          uVar46 = local_590 | *puVar48 >> (0x3fU - (char)local_540 & 0x3f) | 1;
          bVar4 = ((byte *)((longlong)local_588 + 3))[(longlong)local_570];
          uVar44 = (ulonglong)pbVar22 |
                   (uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 |
                    (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
                    (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 |
                    (uVar25 & 0xff00) << 0x28 | uVar25 << 0x38) >> (0x3fU - (char)local_568 & 0x3f)
                   | 1;
          bVar5 = *(byte *)((longlong)local_588 + (longlong)local_570);
          uVar25 = c_rrBitMask64
                   [(ulonglong)((byte *)((longlong)local_588 + 1))[(longlong)local_570] + 1];
          local_4f0 = uVar44 << (bVar5 & 0x3f) | uVar44 >> 0x40 - (bVar5 & 0x3f);
          bVar8 = ((byte *)((longlong)local_588 + 1))[(longlong)local_570] & 0x3f;
          uVar47 = uVar46 << bVar8 | uVar46 >> 0x40 - bVar8;
          local_4a8 = c_rrBitMask64[(ulonglong)bVar5 + 1];
          uVar44 = c_rrBitMask64[(ulonglong)bVar4 + 1];
          uVar46 = ~local_4a8 & local_4f0 | 1;
          uVar51 = uVar46 << (bVar2 & 0x3f) | uVar46 >> 0x40 - (bVar2 & 0x3f);
          uVar46 = ~uVar25 & uVar47 | 1;
          uVar35 = uVar46 << (bVar4 & 0x3f) | uVar46 >> 0x40 - (bVar4 & 0x3f);
          uVar46 = ~uVar42 & uVar51 | 1;
          uVar45 = uVar46 << (bVar3 & 0x3f) | uVar46 >> 0x40 - (bVar3 & 0x3f);
          uVar46 = c_rrBitMask64[(ulonglong)bVar3 + 1];
          local_568 = local_568 +
                      (ulonglong)bVar3 + (local_568 >> 3) * -8 + (ulonglong)bVar2 + (ulonglong)bVar5
          ;
          pbVar22 = (byte *)(~uVar46 & uVar45);
          uVar28 = ~uVar44 & uVar35 | 1;
          bVar2 = ((byte *)((longlong)local_588 + 5))[(longlong)local_570];
          uVar29 = uVar28 << (bVar2 & 0x3f) | uVar28 >> 0x40 - (bVar2 & 0x3f);
          puVar48 = (ulonglong *)((longlong)local_588 + 6);
          local_540 = local_540 +
                      (ulonglong)bVar2 + local_4b0 * -8 + (ulonglong)bVar4 +
                      (ulonglong)((byte *)((longlong)local_588 + 1))[(longlong)local_570];
          uVar28 = c_rrBitMask64[(ulonglong)bVar2 + 1];
          local_590 = ~uVar28 & uVar29;
          puVar33 = (ushort *)((longlong)local_588 + 0xc);
          local_4e0[-2] = (uint)local_4a8 & (uint)local_4f0;
          *local_4e0 = (uint)uVar51 & (uint)uVar42;
          local_4e0[1] = (uint)uVar35 & (uint)uVar44;
          local_4e0[2] = (uint)uVar45 & (uint)uVar46;
          local_4e0[-1] = (uint)uVar47 & (uint)uVar25;
          local_4e0[3] = (uint)uVar29 & (uint)uVar28;
          local_4e0 = local_4e0 + 6;
          pbVar31 = local_518;
          param_3 = local_4e8;
          local_588 = puVar48;
          local_560 = pbVar22;
          local_550 = puVar50;
          local_4d8 = puVar49;
        } while ((longlong)puVar33 <= (longlong)local_518);
      }
      puVar48 = local_538;
      uVar25 = 0;
      local_550 = (ulonglong *)((longlong)local_588 + 2);
      if ((longlong)local_550 <= (longlong)pbVar31) {
        do {
          if (puVar50 <= puVar49 + 2) {
            if (bVar52) {
              if (puVar50 < puVar49 + -2) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
                pcVar40 = "OODLE ERROR : corruption : b >= f-16\n";
                iVar43 = 0x28c;
                pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
                goto LAB_14f3b30e7;
              }
              if (puVar50 < &uStack_90) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
                pcVar40 = "OODLE ERROR : corruption : b >= safe_space+(8)\n";
                iVar43 = 0x28c;
                pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
                goto LAB_14f3b30e7;
              }
              if (auStack_80 + 4 < puVar49) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
                pcVar40 = "OODLE ERROR : corruption : f <= safe_space + sizeof(safe_space) -(8)\n";
                iVar43 = 0x28c;
                pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
                goto LAB_14f3b30e7;
              }
            }
            else {
              bVar52 = true;
              if (puVar50 < puVar49) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
                pcVar40 = "OODLE ERROR : corruption : b >= f\n";
                iVar43 = 0x28c;
                pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
                goto LAB_14f3b30e7;
              }
              lVar37 = (longlong)puVar49 - (longlong)puVar48;
              local_98 = 0;
              uStack_90 = 0;
              lVar26 = 0x18;
              if (lVar37 < 0x18) {
                lVar26 = lVar37;
              }
              local_88 = 0;
              auStack_80[0] = 0;
              lVar37 = 0x18;
              if ((longlong)local_558 - (longlong)puVar50 < 0x18) {
                lVar37 = (longlong)local_558 - (longlong)puVar50;
              }
              auStack_80[1] = 0;
              auStack_80[2] = 0;
              auStack_80[3] = 0;
              auStack_80[4] = 0;
              memcpy((void *)((longlong)auStack_80 - lVar26),(void *)((longlong)puVar49 - lVar26),
                     (size_t)((longlong)puVar50 + ((lVar37 + lVar26) - (longlong)puVar49)));
              puVar50 = (ulonglong *)
                        ((longlong)puVar50 + ((longlong)auStack_80 - (longlong)puVar49));
              puVar49 = auStack_80;
              pbVar31 = local_518;
            }
          }
          uVar42 = *puVar49;
          puVar7 = puVar50 + -1;
          puVar49 = (ulonglong *)((longlong)puVar49 + (local_568 >> 3));
          uVar42 = (uVar42 >> 0x38 | (uVar42 & 0xff000000000000) >> 0x28 |
                    (uVar42 & 0xff0000000000) >> 0x18 | (uVar42 & 0xff00000000) >> 8 |
                    (uVar42 & 0xff000000) << 8 | (uVar42 & 0xff0000) << 0x18 |
                    (uVar42 & 0xff00) << 0x28 | uVar42 << 0x38) >> (0x3fU - (char)local_568 & 0x3f)
                   | (ulonglong)pbVar22 | 1;
          puVar50 = (ulonglong *)((longlong)puVar50 - (local_540 >> 3));
          bVar2 = *(byte *)((longlong)local_588 + (longlong)local_570);
          bVar3 = ((byte *)((longlong)local_588 + 1))[(longlong)local_570];
          uVar46 = uVar42 << (bVar2 & 0x3f) | uVar42 >> 0x40 - (bVar2 & 0x3f);
          local_568 = local_568 + (ulonglong)bVar2 + (local_568 >> 3) * -8;
          uVar42 = local_590 | *puVar7 >> (0x3fU - (char)local_540 & 0x3f) | 1;
          uVar44 = uVar42 << (bVar3 & 0x3f) | uVar42 >> 0x40 - (bVar3 & 0x3f);
          pbVar22 = (byte *)(~c_rrBitMask64[(ulonglong)bVar2 + 1] & uVar46);
          local_540 = local_540 + (ulonglong)bVar3 + (local_540 >> 3) * -8;
          uVar42 = c_rrBitMask64[(ulonglong)bVar3 + 1];
          local_590 = ~uVar42 & uVar44;
          puVar7 = local_550;
          *(uint *)(local_510 + (longlong)local_588 * 4) =
               (uint)c_rrBitMask64[(ulonglong)bVar2 + 1] & (uint)uVar46;
          *(uint *)(local_510 + 4 + (longlong)local_588 * 4) = (uint)uVar42 & (uint)uVar44;
          local_588 = local_550;
          local_550 = (ulonglong *)((longlong)local_550 + 2);
        } while ((longlong)local_550 <= (longlong)pbVar31);
      }
      if ((longlong)local_588 < (longlong)pbVar31) {
        if (puVar50 <= puVar49 + 2) {
          if (bVar52) {
            if (puVar50 < puVar49 + -2) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
              pcVar40 = "OODLE ERROR : corruption : b >= f-16\n";
              iVar43 = 0x2a2;
              pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
            }
            else if (puVar50 < &uStack_90) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
              pcVar40 = "OODLE ERROR : corruption : b >= safe_space+(8)\n";
              iVar43 = 0x2a2;
              pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
            }
            else {
              if (puVar49 <= auStack_80 + 4) goto LAB_14f3b3cbb;
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
              pcVar40 = "OODLE ERROR : corruption : f <= safe_space + sizeof(safe_space) -(8)\n";
              iVar43 = 0x2a2;
              pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
            }
          }
          else {
            if (puVar49 <= puVar50) {
              lVar37 = (longlong)puVar49 - (longlong)puVar48;
              local_98 = 0;
              uStack_90 = 0;
              lVar26 = 0x18;
              if (lVar37 < 0x18) {
                lVar26 = lVar37;
              }
              local_88 = 0;
              auStack_80[0] = 0;
              lVar37 = 0x18;
              if ((longlong)local_558 - (longlong)puVar50 < 0x18) {
                lVar37 = (longlong)local_558 - (longlong)puVar50;
              }
              auStack_80[1] = 0;
              auStack_80[2] = 0;
              auStack_80[3] = 0;
              auStack_80[4] = 0;
              memcpy((void *)((longlong)auStack_80 - lVar26),(void *)((longlong)puVar49 - lVar26),
                     (size_t)((longlong)puVar50 + ((lVar37 + lVar26) - (longlong)puVar49)));
              puVar49 = auStack_80;
              goto LAB_14f3b3cbb;
            }
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f3b30eb;
            pcVar40 = "OODLE ERROR : corruption : b >= f\n";
            iVar43 = 0x2a2;
            pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
          }
          goto LAB_14f3b30e7;
        }
LAB_14f3b3cbb:
        uVar42 = *puVar49;
        uVar42 = (uVar42 >> 0x38 | (uVar42 & 0xff000000000000) >> 0x28 |
                  (uVar42 & 0xff0000000000) >> 0x18 | (uVar42 & 0xff00000000) >> 8 |
                  (uVar42 & 0xff000000) << 8 | (uVar42 & 0xff0000) << 0x18 |
                  (uVar42 & 0xff00) << 0x28 | uVar42 << 0x38) >> (0x3fU - (char)local_568 & 0x3f) |
                 (ulonglong)pbVar22 | 1;
        bVar2 = *(byte *)((longlong)local_588 + (longlong)local_570) & 0x3f;
        *(uint *)(local_510 + (longlong)local_588 * 4) =
             ((uint)(uVar42 << bVar2) | (uint)(uVar42 >> 0x40 - bVar2)) &
             (uint)c_rrBitMask64
                   [(ulonglong)*(byte *)((longlong)local_588 + (longlong)local_570) + 1];
      }
      bVar52 = local_548 != (long64 *)0x0;
      uVar41 = 0;
      if ((local_520 + -1)[(longlong)local_580] == 0) {
        local_548 = (long64 *)0x0;
        pbVar38 = local_580;
        uVar23 = uVar41;
        if (0 < param_7) {
          plVar36 = (long64 *)((longlong)local_508 - (longlong)local_4f8);
          pbVar22 = local_520;
          uVar44 = local_510;
          uVar42 = uVar25;
          uVar46 = uVar25;
          uVar28 = uVar25;
          local_508 = plVar36;
          local_4f0 = (ulonglong)bVar52;
          do {
            uVar23 = (uint)uVar28;
            uVar41 = (uint)uVar25;
            *local_4f8 = param_3;
            if ((longlong)pbVar38 <= (longlong)(int)uVar41) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
              pcVar40 = "OODLE ERROR : corruption : indi < num_indices\n";
              iVar43 = 0x2d0;
              pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
              goto LAB_14f3b30e7;
            }
            bVar2 = pbVar22[uVar42];
            while( true ) {
              uVar42 = uVar42 + 1;
              uVar41 = uVar41 + 1;
              if (bVar2 == 0) break;
              uVar25 = (ulonglong)bVar2;
              if ((int)local_530 < (int)(uint)bVar2) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
                pcVar40 = "OODLE ERROR : corruption : interval source > num_entropy_arrays\n";
                iVar43 = 0x2e3;
                pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
                goto LAB_14f3b30e7;
              }
              if ((longlong)pbVar31 <= (longlong)(int)uVar28) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
                pcVar40 = "OODLE ERROR : corruption : leni < num_lens\n";
                iVar43 = 0x2e8;
                pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
                goto LAB_14f3b30e7;
              }
              uVar6 = *(uint *)(uVar44 + uVar46 * 4);
              uVar29 = (ulonglong)uVar6;
              local_4e8 = (uchar *)(uVar25 * 8 + -8);
              uVar44 = local_498[uVar25 - 1];
              uVar23 = (int)uVar28 + 1;
              uVar28 = (ulonglong)uVar23;
              uVar46 = uVar46 + 1;
              if (((longlong)uVar44 < (longlong)uVar29) ||
                 ((longlong)local_4d0 - (longlong)param_3 < (longlong)uVar29)) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
                pcVar40 = "OODLE ERROR : corruption : interval cur_len too large\n";
                iVar43 = 0x2f2;
                pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
                goto LAB_14f3b30e7;
              }
              _Src = (void *)local_298[uVar25 - 1];
              memcpy(param_3,_Src,(ulonglong)uVar6);
              param_3 = param_3 + uVar29;
              *(ulonglong *)((longlong)local_298 + (longlong)local_4e8) = uVar29 + (longlong)_Src;
              *(ulonglong *)((longlong)local_498 + (longlong)local_4e8) = uVar44 - uVar29;
              bVar2 = local_520[uVar42];
              pbVar31 = local_518;
              plVar36 = local_508;
              pbVar38 = local_580;
              pbVar22 = local_520;
              uVar44 = local_510;
            }
            uVar25 = (ulonglong)uVar41;
            local_548 = (long64 *)((longlong)local_548 + 1);
            uVar23 = uVar23 + bVar52;
            uVar28 = (ulonglong)uVar23;
            uVar46 = uVar46 + local_4f0;
            *(longlong *)((longlong)local_4f8 + (longlong)plVar36) =
                 (longlong)param_3 - (longlong)*local_4f8;
            local_4f8 = local_4f8 + 1;
          } while ((longlong)local_548 < param_7);
        }
        lVar26 = 0;
        if ((byte *)(longlong)(int)uVar41 == pbVar38) {
          if ((byte *)(longlong)(int)uVar23 == pbVar31) {
            if (0 < local_4c8) {
              do {
                if (local_498[lVar26] != 0) {
                  ooLogErrorPre();
                  if (g_fp_OodleCore_Plugin_Printf ==
                      (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3b30eb;
                  pcVar40 = "OODLE ERROR : corruption : entropy_array_lens[i] == 0\n";
                  iVar43 = 800;
                  pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
                  goto LAB_14f3b30e7;
                }
                lVar26 = lVar26 + 1;
              } while (lVar26 < local_4c8);
            }
            return (longlong)local_558 - (longlong)local_4c0;
          }
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3b30eb;
          pcVar40 = "OODLE ERROR : corruption : leni == num_lens\n";
          iVar43 = 0x303;
          pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
        }
        else {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3b30eb;
          pcVar40 = "OODLE ERROR : corruption : indi == num_indices\n";
          iVar43 = 0x302;
          pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
        }
      }
      else {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3b30eb;
        pcVar40 = "OODLE ERROR : corruption : interval_indices[num_indices-1] == 0\n";
        iVar43 = 0x2c3;
        pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
      }
    }
  }
LAB_14f3b30e7:
  (*g_fp_OodleCore_Plugin_Printf)(0,pcVar27,iVar43,pcVar40);
LAB_14f3b30eb:
  ooLogErrorPost();
  return -1;
LAB_14f3b3370:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
  goto LAB_14f3b30eb;
  pcVar40 = "OODLE ERROR : corruption : interval_lenlog2 > 16\n";
  iVar43 = 0x1ca;
  pcVar27 = "v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp";
  goto LAB_14f3b30e7;
}

// newLZ_put_array_comp_header @ 14f3b40e0

uchar * __cdecl
oo2::newLZ_put_array_comp_header(uchar *param_1,int param_2,long64 param_3,long64 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = param_4 + -0x40000 + ((longlong)param_2 * 0x40000 + param_3) * 0x40000;
  *param_1 = (uchar)((ulonglong)lVar2 >> 0x20);
  uVar1 = (uint)lVar2;
  *(uint *)(param_1 + 1) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return (uchar *)(param_4 + 4 + (longlong)(param_1 + 1));
}

// newLZ_put_array_split2_hinted @ 14f3b4120

long64 __cdecl
oo2::newLZ_put_array_split2_hinted
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,uint param_5,float param_6,
          OodleSpeedFit *param_7,float *param_8,rrArenaAllocator *param_9,int param_10,
          uint *param_11,long64 param_12)

{
  float fVar1;
  long64 lVar2;
  long64 lVar3;
  uint uVar4;
  uchar *puVar5;
  float fVar6;
  float local_68 [2];
  uchar *local_60;
  
  lVar3 = param_12;
  fVar1 = __real_53800000;
  if (((param_12 != 0) && (param_12 != param_4)) && (0x20 < param_4)) {
    local_68[0] = 1.0737418e+09;
    param_12._0_4_ = 1.0737418e+09;
    param_1[5] = '\x02';
    puVar5 = param_1 + 6;
    lVar2 = newLZ_put_array_small_allowed
                      (puVar5,param_2,param_3,lVar3,param_5 & 0xffffffef,param_6,param_7,local_68,
                       fVar1,param_9,param_10,(uint *)0x0);
    lVar3 = newLZ_put_array_small_allowed
                      (puVar5 + lVar2,param_2,param_3 + lVar3,param_4 - lVar3,param_5 & 0xffffffef,
                       param_6,param_7,(float *)&param_12,fVar1,param_9,param_10,(uint *)0x0);
    local_60 = puVar5 + lVar2 + (lVar3 - (longlong)param_1);
    fVar6 = (float)param_12 + local_68[0] + __real_40c00000;
    *param_1 = (uchar)((ulonglong)(local_60 + param_4 * 0x40000 + 0x4ffffbfffb) >> 0x20);
    uVar4 = (uint)(local_60 + param_4 * 0x40000 + 0x4ffffbfffb);
    *(uint *)(param_1 + 1) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    *param_8 = fVar6;
    puVar5 = (uchar *)newLZ_put_array(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                      param_8,fVar1,param_9,param_10,param_11);
    if (((longlong)puVar5 < 1) && (puVar5 = local_60, param_11 != (uint *)0x0)) {
      CountHistoArrayU8(param_3,param_4,param_11,0x100,false);
      puVar5 = local_60;
    }
    return (long64)puVar5;
  }
  lVar3 = newLZ_put_array(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          __real_53800000,param_9,param_10,param_11);
  return lVar3;
}

// newLZ_put_array_sub_split @ 14f3b4420

long64 __cdecl
oo2::newLZ_put_array_sub_split
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,uint *param_5,
          rrArenaAllocator *param_6,int param_7,uint param_8,float param_9,OodleSpeedFit *param_10,
          float param_11,float *param_12)

{
  long64 lVar1;
  long64 lVar2;
  uchar *local_res18;
  long64 local_res20;
  float local_68 [12];
  
  if (0x5f < param_4) {
    local_res18 = param_3;
    local_res20 = param_4;
    if (param_4 < 0x600) {
      lVar1 = newLZ_put_array_sub_split_2
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12);
    }
    else {
      lVar1 = newLZ_put_array_sub_split_N
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12);
    }
    if ((param_8 & 0x20) != 0) {
      if (*param_12 <= param_11) {
        param_11 = *param_12;
      }
      local_68[0] = param_11 - __real_40a00000;
      lVar2 = newLZ_put_multiarray_indexed_sub
                        (param_1,param_2,&local_res18,&local_res20,1,param_8,param_9,param_10,
                         local_68,param_6,param_7);
      if (0 < lVar2) {
        *param_12 = local_68[0] + __real_40a00000;
        lVar1 = lVar2;
      }
    }
    return lVar1;
  }
  return -1;
}

// newLZ_put_array_sub_split_2 @ 14f3b4600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::newLZ_put_array_sub_split_2
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,uint *param_5,
          rrArenaAllocator *param_6,int param_7,uint param_8,float param_9,OodleSpeedFit *param_10,
          float param_11,float *param_12)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  rrArenaAllocator *prVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 *_Src;
  long64 lVar9;
  long64 lVar10;
  uint *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  long64 lVar15;
  uchar *puVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_1168 [32];
  undefined8 local_1108;
  float local_1100;
  float local_10fc;
  OodleSpeedFit *local_10f8;
  Histo256 *local_10f0;
  long64 local_10e8;
  uchar *local_10e0;
  rrArenaAllocator *local_10d8;
  uchar *local_10d0;
  uchar *local_10c8;
  float *local_10c0;
  rrArenaAllocator *local_10b8;
  undefined1 *local_10b0;
  long64 local_10a8;
  undefined8 local_10a0;
  Histo256 local_1098;
  Histo256 local_c98;
  Histo256 local_898;
  Histo256 local_498;
  ulonglong local_98;
  
  local_10a0 = 0xfffffffffffffffe;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1168;
  local_10f0 = (Histo256 *)param_5;
  local_10d8 = param_6;
  local_10f8 = param_10;
  local_10c0 = param_12;
  local_10e8 = param_4;
  local_10e0 = param_3;
  local_10d0 = param_1;
  local_10c8 = param_2;
  fVar19 = histo_estimate_J((Histo256 *)param_5,param_4,param_9,param_10);
  fVar22 = __real_40c00000;
  uVar5 = (uint)(param_4 + 0x80 + (ulonglong)(byte)(param_4 + 0x80 >> 0x3f) >> 8);
  uVar17 = 8;
  if ((int)uVar5 < 8) {
    uVar17 = uVar5;
  }
  uVar5 = 1;
  if (1 < (int)uVar17) {
    uVar5 = uVar17;
  }
  local_1108 = (longlong)(int)(uVar5 + 1);
  uVar18 = (ulonglong)uVar5;
  lVar15 = param_4;
  lVar14 = 0;
  do {
    lVar7 = lVar15 / local_1108;
    CountHistoArrayU8(param_3,lVar7,local_1098.counts,0x100,false);
    histo_sub(&local_c98,local_10f0,&local_1098);
    fVar20 = histo_estimate_J(&local_1098,lVar7,param_9,local_10f8);
    fVar21 = histo_estimate_J(&local_c98,param_4 - lVar7,param_9,local_10f8);
    fVar21 = fVar21 + fVar20 + fVar22;
    fVar20 = fVar19;
    if (fVar21 < fVar19) {
      puVar11 = local_1098.counts;
      lVar13 = 8;
      puVar8 = local_898.counts;
      do {
        uVar3 = *(undefined8 *)(puVar11 + 2);
        *(undefined8 *)puVar8 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar8 + 2) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 6);
        *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar11 + 4);
        *(undefined8 *)(puVar8 + 6) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 10);
        *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar11 + 8);
        *(undefined8 *)(puVar8 + 10) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0xe);
        *(undefined8 *)(puVar8 + 0xc) = *(undefined8 *)(puVar11 + 0xc);
        *(undefined8 *)(puVar8 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x12);
        *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(puVar11 + 0x10);
        *(undefined8 *)(puVar8 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x16);
        *(undefined8 *)(puVar8 + 0x14) = *(undefined8 *)(puVar11 + 0x14);
        *(undefined8 *)(puVar8 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x1a);
        *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(puVar11 + 0x18);
        *(undefined8 *)(puVar8 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x1e);
        *(undefined8 *)(puVar8 + 0x1c) = *(undefined8 *)(puVar11 + 0x1c);
        *(undefined8 *)(puVar8 + 0x1e) = uVar3;
        puVar11 = puVar11 + 0x20;
        lVar13 = lVar13 + -1;
        puVar8 = puVar8 + 0x20;
      } while (lVar13 != 0);
      puVar11 = local_c98.counts;
      lVar13 = 8;
      puVar8 = local_498.counts;
      do {
        uVar3 = *(undefined8 *)(puVar11 + 2);
        *(undefined8 *)puVar8 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar8 + 2) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 6);
        *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar11 + 4);
        *(undefined8 *)(puVar8 + 6) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 10);
        *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar11 + 8);
        *(undefined8 *)(puVar8 + 10) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0xe);
        *(undefined8 *)(puVar8 + 0xc) = *(undefined8 *)(puVar11 + 0xc);
        *(undefined8 *)(puVar8 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x12);
        *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(puVar11 + 0x10);
        *(undefined8 *)(puVar8 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x16);
        *(undefined8 *)(puVar8 + 0x14) = *(undefined8 *)(puVar11 + 0x14);
        *(undefined8 *)(puVar8 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x1a);
        *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(puVar11 + 0x18);
        *(undefined8 *)(puVar8 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x1e);
        *(undefined8 *)(puVar8 + 0x1c) = *(undefined8 *)(puVar11 + 0x1c);
        *(undefined8 *)(puVar8 + 0x1e) = uVar3;
        puVar11 = puVar11 + 0x20;
        lVar13 = lVar13 + -1;
        puVar8 = puVar8 + 0x20;
        fVar20 = fVar21;
      } while (lVar13 != 0);
    }
    if (fVar19 <= fVar21) {
      lVar7 = lVar14;
    }
    lVar15 = lVar15 + param_4;
    uVar18 = uVar18 - 1;
    lVar14 = lVar7;
    fVar19 = fVar20;
  } while (uVar18 != 0);
  if (lVar7 == 0) {
    return -1;
  }
  lVar14 = param_4 - lVar7;
  uVar17 = 0x40;
  do {
    lVar13 = (longlong)(int)(uVar17 * 2);
    if (lVar13 <= lVar14) {
      uVar18 = (ulonglong)uVar17;
      do {
        puVar16 = param_3 + lVar7;
        iVar6 = entropysets_codelen_delta(puVar16,uVar18,&local_898,lVar7,&local_498,lVar14);
        if (0 < iVar6) break;
        lVar7 = lVar7 + uVar18;
        lVar14 = lVar14 - uVar18;
        histo_slide(puVar16,uVar18,&local_498,&local_898);
      } while (lVar13 <= lVar14);
    }
    if (lVar13 <= lVar7) {
      uVar18 = (ulonglong)uVar17;
      puVar16 = param_3 + (lVar7 - uVar18);
      do {
        iVar6 = entropysets_codelen_delta(puVar16,uVar18,&local_498,lVar14,&local_898,lVar7);
        param_3 = local_10e0;
        if (0 < iVar6) break;
        lVar14 = lVar14 + uVar18;
        lVar7 = lVar7 - uVar18;
        histo_slide(puVar16,uVar18,&local_898,&local_498);
        param_3 = local_10e0;
        puVar16 = puVar16 + -uVar18;
      } while (lVar13 <= lVar7);
    }
    lVar15 = local_10e8;
    uVar17 = uVar17 >> 2;
  } while (0xf < uVar17);
  local_1108._0_4_ = (int)lVar7;
  local_1108._4_4_ = (int)lVar14;
  local_10f0 = (Histo256 *)(lVar7 << 0x20);
  do_greedy_single_byte_slides
            (param_3,param_3 + local_10e8,&local_898,(int *)&local_1108,(int *)&local_10f0,2);
  prVar4 = local_10d8;
  lVar7 = (longlong)(int)local_1108;
  lVar14 = (longlong)local_1108._4_4_;
  if (lVar7 < 0x20) {
    return -1;
  }
  if (lVar14 < 0x20) {
    return -1;
  }
  local_10b8 = local_10d8;
  local_10a8 = lVar15;
  if (local_10d8 == (rrArenaAllocator *)0x0) {
    _Src = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar15,0x10);
    if (_Src == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(lVar15);
    }
  }
  else {
    _Src = rrArenaAllocator::Alloc(local_10d8,lVar15,0);
  }
  local_10b0 = _Src;
  if ((_Src == (undefined1 *)0x0) &&
     (iVar6 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                 "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar6 != 0)) {
    pcVar2 = (code *)swi(3);
    lVar15 = (*pcVar2)();
    return lVar15;
  }
  *_Src = 2;
  fVar19 = __real_53800000;
  puVar16 = _Src + 1;
  local_1100 = 1.0737418e+09;
  lVar9 = newLZ_put_array_small_allowed
                    (puVar16,_Src + lVar15,param_3,lVar7,param_8 & 0xffffffef,param_9,local_10f8,
                     &local_1100,__real_53800000,prVar4,param_7,(uint *)0x0);
  lVar15 = local_10e8;
  if (-1 < lVar9) {
    local_10fc = 1.0737418e+09;
    lVar10 = newLZ_put_array_small_allowed
                       (puVar16 + lVar9,_Src + local_10e8,param_3 + lVar7,lVar14,
                        param_8 & 0xffffffef,param_9,local_10f8,&local_10fc,fVar19,prVar4,param_7,
                        (uint *)0x0);
    if (((-1 < lVar10) && (fVar22 = local_1100 + fVar22 + local_10fc, fVar22 < param_11)) &&
       (puVar16 = puVar16 + lVar9 + (lVar10 - (longlong)_Src),
       local_10d0 + (longlong)puVar16 <= local_10c8)) {
      *local_10c0 = fVar22;
      memcpy(local_10d0,_Src,(size_t)puVar16);
      goto LAB_14f3b4ba0;
    }
  }
  puVar16 = (uchar *)0xffffffffffffffff;
LAB_14f3b4ba0:
  if (prVar4 != (rrArenaAllocator *)0x0) {
    uVar18 = lVar15 + 0xfU & 0xfffffffffffffff0;
    if ((undefined1 *)prVar4->m_unorderedStart == (undefined1 *)0x0) {
      if (_Src + uVar18 == (undefined1 *)prVar4->m_cur) {
        prVar4->m_cur = (longlong)prVar4->m_cur - uVar18;
        return (long64)puVar16;
      }
    }
    else if (((undefined1 *)prVar4->m_unorderedStart <= _Src) &&
            (_Src < (undefined1 *)(prVar4->m_size + prVar4->m_base))) {
      plVar12 = (longlong *)(_Src + uVar18);
      plVar12[1] = 1;
      plVar1 = (longlong *)prVar4->m_cur;
      if (plVar12 + 2 != plVar1) {
        return (long64)puVar16;
      }
      while( true ) {
        if (plVar1 == (longlong *)prVar4->m_unorderedStart) {
          return (long64)puVar16;
        }
        if (plVar12[1] != 1) break;
        prVar4->m_cur = prVar4->m_cur + (-0x10 - *plVar12);
        plVar1 = (longlong *)prVar4->m_cur;
        plVar12 = plVar1 + -2;
      }
      return (long64)puVar16;
    }
  }
  (*g_fp_OodleCore_Plugin_Free)(_Src);
  return (long64)puVar16;
}

// newLZ_put_array_sub_split_N @ 14f3b4ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::newLZ_put_array_sub_split_N
          (uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,uint *param_5,
          rrArenaAllocator *param_6,int param_7,uint param_8,float param_9,OodleSpeedFit *param_10,
          float param_11,float *param_12)

{
  slide_candidate *psVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  long64 lVar19;
  slide_candidate *psVar20;
  uint *puVar21;
  undefined1 *_Src;
  float fVar22;
  float *pfVar23;
  uint *puVar24;
  longlong *plVar25;
  int iVar26;
  slide_candidate *psVar27;
  rrArenaAllocator *prVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  float *pfVar32;
  longlong lVar33;
  uint *puVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  uint uVar38;
  uchar *puVar39;
  size_t _Size;
  longlong lVar40;
  bool bVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStackY_1538 [32];
  uint local_14d8;
  int local_14d4;
  float local_14d0;
  int local_14cc;
  uchar *local_14c8;
  longlong local_14c0;
  longlong local_14b8;
  uint *local_14b0;
  uint *local_14a8;
  int local_14a0;
  int local_149c;
  float local_1498;
  OodleSpeedFit *local_1490;
  rrArenaAllocator *local_1488;
  int local_1480;
  slide_candidate *local_1478;
  long64 local_1470;
  uint *local_1468;
  size_t local_1460;
  uint *local_1458;
  longlong local_1450;
  longlong local_1448;
  rrArenaAllocator *local_1440;
  uint *local_1438;
  longlong local_1430;
  undefined8 local_1428;
  undefined8 uStack_1420;
  ulonglong local_1418;
  ulonglong uStack_1410;
  uchar *local_1408;
  uchar *local_1400;
  float *local_13f8;
  longlong local_13f0;
  rrArenaAllocator *local_13e8;
  slide_candidate *local_13e0;
  longlong local_13d8;
  rrArenaAllocator *local_13d0;
  undefined1 *local_13c8;
  longlong local_13c0;
  undefined8 local_13b8;
  ulonglong local_13a0;
  ulonglong uStack_1398;
  Histo256 local_1388;
  Histo256 local_f88;
  Histo256 local_b88;
  int local_788 [64];
  int local_688 [64];
  float afStack_588 [60];
  float afStack_498 [2];
  undefined8 uStack_490;
  float local_488 [2];
  undefined8 uStack_480;
  ulonglong local_98;
  
  local_13b8 = 0xfffffffffffffffe;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1538;
  local_1488 = param_6;
  local_1490 = param_10;
  local_13f8 = param_12;
  uVar10._4_4_ = (int)param_4;
  iVar15 = uVar10._4_4_ + 0x100;
  iVar16 = (int)(iVar15 + (iVar15 >> 0x1f & 0x1ffU)) >> 9;
  iVar26 = 1 << ((byte)param_7 & 0x1f);
  iVar15 = 0x20;
  if (iVar26 < 0x20) {
    iVar15 = iVar26;
  }
  iVar26 = 8;
  if (8 < iVar15) {
    iVar26 = iVar15;
  }
  if (param_7 == 9) {
    iVar26 = 0x3e;
  }
  if (iVar16 < iVar26) {
    iVar26 = iVar16;
  }
  iVar15 = 3;
  if (3 < iVar26) {
    iVar15 = iVar26;
  }
  local_14b8 = (longlong)iVar15;
  lVar40 = local_14b8 << 10;
  local_1440 = param_6;
  local_14c8 = param_3;
  local_149c = iVar15;
  local_1470 = param_4;
  local_1448 = lVar40;
  local_1430 = lVar40;
  local_1408 = param_1;
  local_1400 = param_2;
  if (param_6 == (rrArenaAllocator *)0x0) {
    puVar18 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar40,0x10);
    if (puVar18 == (uint *)0x0) {
      local_1468 = puVar18;
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(lVar40);
    }
  }
  else {
    puVar18 = rrArenaAllocator::Alloc(param_6,lVar40,0);
  }
  local_1468 = puVar18;
  local_1438 = puVar18;
  if ((puVar18 == (uint *)0x0) &&
     (iVar16 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                  "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar16 != 0)) {
    pcVar3 = (code *)swi(3);
    lVar19 = (*pcVar3)();
    return lVar19;
  }
  uVar35 = param_4 & 0xffffffff;
  uVar38 = 0;
  local_14b0 = puVar18;
  if (0 < iVar15) {
    lVar40 = 0;
    iVar16 = 0;
    do {
      local_688[lVar40] = iVar16;
      iVar29 = (int)((longlong)((ulonglong)(uint)(uVar10._4_4_ >> 0x1f) << 0x20 | uVar35) /
                    (longlong)iVar15);
      iVar26 = (int)param_4;
      if (uVar38 != iVar15 - 1U) {
        iVar26 = iVar29;
      }
      local_788[lVar40] = iVar26;
      CountHistoArrayU8(local_14c8 + iVar16,(longlong)iVar26,puVar18 + (ulonglong)uVar38 * 0x100,
                        0x100,false);
      uVar38 = uVar38 + 1;
      iVar16 = iVar16 + iVar29;
      param_4 = (long64)(uint)((int)param_4 - iVar29);
      lVar40 = lVar40 + 1;
    } while (lVar40 < local_14b8);
    local_1448 = local_1430;
    local_1468 = local_1438;
    param_6 = local_1488;
  }
  uVar10._4_4_ = local_149c;
  local_1458 = (uint *)(longlong)(local_149c * 3);
  lVar40 = (longlong)local_1458 << 5;
  local_13f0 = lVar40;
  local_13e8 = param_6;
  local_13d8 = lVar40;
  if (param_6 == (rrArenaAllocator *)0x0) {
    psVar20 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar40,0x10);
    if (psVar20 == (slide_candidate *)0x0) {
      local_1478 = psVar20;
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(lVar40);
    }
  }
  else {
    psVar20 = rrArenaAllocator::Alloc(param_6,lVar40,0);
  }
  local_1478 = psVar20;
  local_13e0 = psVar20;
  if ((psVar20 == (slide_candidate *)0x0) &&
     (iVar15 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                  "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar15 != 0)) {
    pcVar3 = (code *)swi(3);
    lVar19 = (*pcVar3)();
    return lVar19;
  }
  uVar35 = 0x40;
  local_14d8 = 0x40;
  local_14d0 = (float)(uVar10._4_4_ * 2);
  local_1460 = 0xffffffffffffffff;
  fVar22 = local_14d0;
  do {
    lVar40 = local_14b8;
    local_14d4 = 0;
    iVar15 = 0;
    if (0 < uVar10._4_4_) {
      do {
        add_slides(iVar15,lVar40,(Histo256 *)puVar18,local_788,local_688,psVar20,&local_14d4,
                   local_14c8,(int)uVar35,0);
        iVar15 = iVar15 + 1;
        fVar22 = local_14d0;
      } while (iVar15 < uVar10._4_4_);
    }
    iVar15 = local_14d4;
    make_heap<oo2::slide_candidate>(psVar20,psVar20 + local_14d4);
    local_1498 = fVar22;
    if (0 < iVar15) {
      do {
        uVar10._0_4_ = psVar20->gain;
        uVar10._4_4_ = psVar20->which;
        uStack_1420 = *(undefined8 *)&psVar20->right;
        local_1418 = psVar20->key1;
        uStack_1410 = psVar20->key2;
        lVar33 = ((longlong)iVar15 << 5) >> 5;
        lVar31 = 0;
        lVar40 = 1;
        lVar36 = lVar31;
        if (1 < lVar33) {
          do {
            lVar36 = lVar40;
            if ((lVar40 + 1 < lVar33) && (psVar20[lVar40].gain < psVar20[lVar40 + 1].gain)) {
              lVar36 = lVar40 + 1;
            }
            psVar27 = psVar20 + lVar36;
            iVar16 = psVar27->which;
            iVar26 = psVar27->right;
            uVar12 = *(undefined4 *)&psVar27->field_0xc;
            psVar1 = psVar20 + lVar31;
            psVar1->gain = psVar27->gain;
            psVar1->which = iVar16;
            psVar1->right = iVar26;
            *(undefined4 *)&psVar1->field_0xc = uVar12;
            uVar7 = (&psVar20[lVar36].key1)[1];
            psVar20[lVar31].key1 = psVar20[lVar36].key1;
            (&psVar20[lVar31].key1)[1] = uVar7;
            lVar40 = lVar36 * 2 + 1;
            lVar31 = lVar36;
          } while (lVar40 < lVar33);
        }
        lVar33 = lVar33 + -1;
        if (lVar36 < lVar33) {
          psVar27 = psVar20 + lVar33;
          iVar16 = psVar27->which;
          iVar26 = psVar27->right;
          uVar12 = *(undefined4 *)&psVar27->field_0xc;
          psVar1 = psVar20 + lVar36;
          psVar1->gain = psVar27->gain;
          psVar1->which = iVar16;
          psVar1->right = iVar26;
          *(undefined4 *)&psVar1->field_0xc = uVar12;
          uVar7 = (&psVar20[lVar33].key1)[1];
          psVar20[lVar36].key1 = psVar20[lVar33].key1;
          (&psVar20[lVar36].key1)[1] = uVar7;
          while ((0 < lVar36 &&
                 (lVar40 = lVar36 + -1 >> 1, psVar20[lVar40].gain < psVar20[lVar36].gain))) {
            psVar27 = psVar20 + lVar40;
            iVar29 = psVar27->gain;
            iVar17 = psVar27->which;
            iVar13 = psVar27->right;
            uVar14 = *(undefined4 *)&psVar27->field_0xc;
            uVar7 = psVar20[lVar40].key1;
            uVar8 = (&psVar20[lVar40].key1)[1];
            psVar27 = psVar20 + lVar36;
            iVar16 = psVar27->which;
            iVar26 = psVar27->right;
            uVar12 = *(undefined4 *)&psVar27->field_0xc;
            psVar1 = psVar20 + lVar40;
            psVar1->gain = psVar27->gain;
            psVar1->which = iVar16;
            psVar1->right = iVar26;
            *(undefined4 *)&psVar1->field_0xc = uVar12;
            uVar9 = (&psVar20[lVar36].key1)[1];
            psVar20[lVar40].key1 = psVar20[lVar36].key1;
            (&psVar20[lVar40].key1)[1] = uVar9;
            psVar27 = psVar20 + lVar36;
            psVar27->gain = iVar29;
            psVar27->which = iVar17;
            psVar27->right = iVar13;
            *(undefined4 *)&psVar27->field_0xc = uVar14;
            psVar20[lVar36].key1 = uVar7;
            (&psVar20[lVar36].key1)[1] = uVar8;
            lVar36 = lVar40;
          }
        }
        iVar16 = iVar15 + -1;
        local_1480 = -1;
        if ((int)uStack_1420 != 0) {
          local_1480 = 1;
        }
        lVar40 = (longlong)uVar10._4_4_;
        iVar26 = local_688[lVar40];
        lVar36 = (longlong)iVar26;
        iVar29 = local_788[lVar40];
        local_14d4 = iVar16;
        local_14a0 = iVar26;
        local_1450 = lVar40;
        local_1428 = uVar10;
        if (local_1418 == (lVar36 << 0x20 | (longlong)iVar29)) {
          iVar17 = local_1480 + uVar10._4_4_;
          local_14c0 = CONCAT44(local_14c0._4_4_,iVar17);
          if (uStack_1410 == ((longlong)local_688[iVar17] << 0x20 | (longlong)local_788[iVar17])) {
            local_14a8 = local_14b0 + lVar40 * 0x100;
            local_14cc = local_14d8 + iVar29;
            if ((int)uStack_1420 == 0) {
              histo_slide(local_14c8 + (lVar36 - uVar35),uVar35,
                          (Histo256 *)(local_14b0 + (lVar40 + -1) * 0x100),(Histo256 *)local_14a8);
              local_788[lVar40] = local_14cc;
              iVar26 = iVar26 - local_14d8;
              local_688[lVar40] = iVar26;
              local_b88.counts[lVar40 + 0xff] = local_b88.counts[lVar40 + 0xff] - local_14d8;
              local_14a0 = iVar26;
            }
            else {
              histo_slide(local_14c8 + iVar29 + lVar36,uVar35,
                          (Histo256 *)(local_14b0 + (lVar40 + 1) * 0x100),(Histo256 *)local_14a8);
              local_788[lVar40] = local_14cc;
              local_688[lVar40 + 1] = local_688[lVar40 + 1] + local_14d8;
              local_788[lVar40 + 1] = local_788[lVar40 + 1] - local_14d8;
            }
            fVar22 = (float)((int)local_1498 + -1);
            bVar41 = local_1498 == 0.0;
            local_1498 = fVar22;
            if (bVar41) break;
            if ((longlong)local_1458 <= (longlong)(iVar15 + 3)) {
              lVar36 = (longlong)(iVar15 + -2);
              if (-1 < iVar15 + -2) {
                iVar15 = iVar15 + -2;
                psVar27 = psVar20 + lVar36;
                do {
                  uVar10._4_4_ = psVar27->which;
                  local_13a0 = psVar27->key1;
                  uStack_1398 = psVar27->key2;
                  iVar29 = -1;
                  if (psVar27->right != 0) {
                    iVar29 = 1;
                  }
                  if ((local_13a0 !=
                       ((longlong)local_688[uVar10._4_4_] << 0x20 |
                       (longlong)local_788[uVar10._4_4_])) ||
                     (uStack_1398 !=
                      ((longlong)local_688[iVar29 + uVar10._4_4_] << 0x20 |
                      (longlong)local_788[iVar29 + uVar10._4_4_]))) {
                    psVar1 = psVar20 + iVar15;
                    uVar10._4_4_ = psVar1->which;
                    iVar29 = psVar1->right;
                    uVar12 = *(undefined4 *)&psVar1->field_0xc;
                    psVar27->gain = psVar1->gain;
                    psVar27->which = uVar10._4_4_;
                    psVar27->right = iVar29;
                    *(undefined4 *)&psVar27->field_0xc = uVar12;
                    uVar7 = (&psVar20[iVar15].key1)[1];
                    psVar27->key1 = psVar20[iVar15].key1;
                    psVar27->key2 = uVar7;
                    iVar16 = iVar16 + -1;
                    iVar15 = iVar15 + -1;
                  }
                  psVar27 = psVar27 + -1;
                  lVar36 = lVar36 + -1;
                } while (-1 < lVar36);
                uVar10._4_4_ = local_1428._4_4_;
                local_14d4 = iVar16;
              }
              make_heap<oo2::slide_candidate>(psVar20,psVar20 + iVar16);
            }
            iVar15 = iVar26;
            iVar29 = iVar16;
            if (0 < uVar10._4_4_) {
              lVar36 = lVar40 + -1;
              uVar10._4_4_ = local_788[lVar36];
              if ((int)(local_14d8 * 2) <= uVar10._4_4_) {
                uVar37 = (ulonglong)local_14cc;
                iVar17 = entropysets_codelen_delta
                                   (local_14c8 + ((longlong)iVar26 - uVar35),(ulonglong)local_14d8,
                                    (Histo256 *)local_14a8,uVar37,
                                    (Histo256 *)(local_14b0 + lVar36 * 0x100),(longlong)uVar10._4_4_
                                   );
                lVar40 = local_1450;
                iVar15 = local_14a0;
                if (iVar17 < 0) {
                  psVar27 = psVar20 + iVar16;
                  psVar27->gain = -iVar17;
                  psVar27->which = local_1428._4_4_;
                  psVar27->right = 0;
                  psVar27->key1 = (longlong)iVar26 << 0x20 | uVar37;
                  psVar27->key2 = (longlong)local_688[lVar36] << 0x20 | (longlong)uVar10._4_4_;
                  iVar29 = iVar16 + 1;
                  local_14d4 = iVar29;
                }
              }
            }
            if (lVar40 < local_14b8 + -1) {
              lVar40 = lVar40 + 1;
              uVar10._4_4_ = local_788[lVar40];
              if ((int)(local_14d8 * 2) <= uVar10._4_4_) {
                uVar35 = (ulonglong)local_14cc;
                iVar26 = entropysets_codelen_delta
                                   (local_14c8 + uVar35 + (longlong)iVar15,(ulonglong)local_14d8,
                                    (Histo256 *)local_14a8,uVar35,
                                    (Histo256 *)(local_14b0 + lVar40 * 0x100),(longlong)uVar10._4_4_
                                   );
                if (iVar26 < 0) {
                  psVar20[iVar29].gain = -iVar26;
                  psVar20[iVar29].which = local_1428._4_4_;
                  psVar20[iVar29].right = 1;
                  psVar20[iVar29].key1 = (longlong)iVar15 << 0x20 | uVar35;
                  psVar20[iVar29].key2 =
                       (longlong)local_688[lVar40] << 0x20 | (longlong)uVar10._4_4_;
                  psVar27 = psVar20 + iVar29;
                  uVar10._4_4_ = psVar27->which;
                  iVar15 = psVar27->right;
                  uVar12 = *(undefined4 *)&psVar27->field_0xc;
                  psVar1 = psVar20 + iVar29;
                  psVar1->gain = psVar27->gain;
                  psVar1->which = uVar10._4_4_;
                  psVar1->right = iVar15;
                  *(undefined4 *)&psVar1->field_0xc = uVar12;
                  uVar7 = (&psVar20[iVar29].key1)[1];
                  psVar20[iVar29].key1 = psVar20[iVar29].key1;
                  (&psVar20[iVar29].key1)[1] = uVar7;
                  local_14d4 = iVar29 + 1;
                }
              }
            }
            uVar35 = (ulonglong)local_14d8;
            add_slides((int)local_14c0,local_14b8,(Histo256 *)local_14b0,local_788,local_688,psVar20
                       ,&local_14d4,local_14c8,local_14d8,local_1480);
            if (iVar16 < local_14d4) {
              lVar40 = (longlong)iVar16 * 0x20 + -0x20;
              uVar37 = (ulonglong)(uint)(local_14d4 - iVar16);
              do {
                lVar40 = lVar40 + 0x20;
                lVar36 = lVar40 >> 5;
                while ((0 < lVar36 &&
                       (lVar31 = lVar36 + -1 >> 1, psVar20[lVar31].gain < psVar20[lVar36].gain))) {
                  psVar27 = psVar20 + lVar31;
                  iVar16 = psVar27->gain;
                  iVar26 = psVar27->which;
                  iVar29 = psVar27->right;
                  uVar14 = *(undefined4 *)&psVar27->field_0xc;
                  uVar7 = psVar20[lVar31].key1;
                  uVar8 = (&psVar20[lVar31].key1)[1];
                  psVar27 = psVar20 + lVar36;
                  uVar10._4_4_ = psVar27->which;
                  iVar15 = psVar27->right;
                  uVar12 = *(undefined4 *)&psVar27->field_0xc;
                  psVar1 = psVar20 + lVar31;
                  psVar1->gain = psVar27->gain;
                  psVar1->which = uVar10._4_4_;
                  psVar1->right = iVar15;
                  *(undefined4 *)&psVar1->field_0xc = uVar12;
                  uVar9 = (&psVar20[lVar36].key1)[1];
                  psVar20[lVar31].key1 = psVar20[lVar36].key1;
                  (&psVar20[lVar31].key1)[1] = uVar9;
                  psVar27 = psVar20 + lVar36;
                  psVar27->gain = iVar16;
                  psVar27->which = iVar26;
                  psVar27->right = iVar29;
                  *(undefined4 *)&psVar27->field_0xc = uVar14;
                  psVar20[lVar36].key1 = uVar7;
                  (&psVar20[lVar36].key1)[1] = uVar8;
                  lVar36 = lVar31;
                }
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
            }
          }
        }
        iVar15 = local_14d4;
      } while (0 < local_14d4);
      uVar35 = (ulonglong)local_14d8;
      puVar18 = local_14b0;
      uVar10._4_4_ = local_149c;
      fVar22 = local_14d0;
    }
    uVar35 = uVar35 >> 2;
    local_14d8 = (uint)uVar35;
  } while (0xf < local_14d8);
  do_greedy_single_byte_slides
            (local_14c8,local_14c8 + (int)local_1470,(Histo256 *)puVar18,local_788,local_688,
             uVar10._4_4_);
  puVar18 = local_14b0;
  lVar40 = 0;
  fVar22 = 0.0;
  uVar10._4_4_ = -1;
  iVar15 = 0;
  if (0 < local_14b8) {
    local_14c0 = -4;
    lVar31 = 0;
    local_14a8 = (uint *)local_14b8;
    lVar36 = -1;
    do {
      iVar16 = *(int *)((longlong)local_788 + lVar31);
      lVar33 = lVar36;
      iVar26 = uVar10._4_4_;
      lVar30 = local_14c0;
      if (iVar16 != 0) {
        local_1458 = puVar18 + (longlong)iVar15 * 0x100;
        fVar42 = histo_estimate_J((Histo256 *)local_1458,(longlong)iVar16,param_9,local_1490);
        *(float *)((longlong)afStack_588 + lVar31) = fVar42;
        iVar26 = iVar15;
        lVar30 = lVar31;
        if (-1 < uVar10._4_4_) {
          histo_add(&local_1388,(Histo256 *)local_1458,
                    (Histo256 *)(puVar18 + (longlong)uVar10._4_4_ * 0x100));
          fVar43 = histo_estimate_J(&local_1388,
                                    (longlong)(*(int *)((longlong)local_788 + local_14c0) + iVar16),
                                    param_9,local_1490);
          fVar42 = (fVar42 + *(float *)((longlong)afStack_588 + local_14c0)) - fVar43;
          if (0.0 < fVar42) {
            local_488[lVar40 * 4] = fVar42;
            local_488[lVar40 * 4 + 1] = fVar43;
            *(int *)(&uStack_480 + lVar40 * 2) = uVar10._4_4_;
            *(int *)((longlong)&uStack_480 + lVar40 * 0x10 + 4) = iVar15;
            lVar33 = lVar40;
            if (fVar42 <= fVar22) {
              lVar33 = lVar36;
              fVar42 = fVar22;
            }
            fVar22 = fVar42;
            lVar40 = lVar40 + 1;
          }
        }
      }
      local_14c0 = lVar30;
      uVar10._4_4_ = iVar26;
      puVar34 = local_14b0;
      iVar15 = iVar15 + 1;
      lVar31 = lVar31 + 4;
      local_14a8 = (uint *)((longlong)local_14a8 + -1);
      lVar36 = lVar33;
    } while (local_14a8 != (uint *)0x0);
    if (lVar40 < 1) {
      local_14a8 = (uint *)0x0;
      psVar20 = local_1478;
      goto LAB_14f3b5b73;
    }
    do {
      fVar22 = local_488[lVar33 * 4 + 1];
      fVar42 = *(float *)(&uStack_480 + lVar33 * 2);
      fVar43 = *(float *)((longlong)&uStack_480 + lVar33 * 0x10 + 4);
      uVar10 = (&uStack_490)[lVar40 * 2];
      *(undefined8 *)(local_488 + lVar33 * 4) = *(undefined8 *)(afStack_498 + lVar40 * 4);
      (&uStack_480)[lVar33 * 2] = uVar10;
      lVar40 = lVar40 + -1;
      fVar45 = 0.0;
      lVar36 = -1;
      lVar33 = (longlong)(int)fVar42;
      local_14a8 = puVar34 + lVar33 * 0x100;
      lVar31 = (longlong)(int)fVar43;
      local_14c0 = lVar33;
      histo_add((Histo256 *)local_14a8,(Histo256 *)local_14a8,(Histo256 *)(puVar34 + lVar31 * 0x100)
               );
      local_788[lVar33] = local_788[lVar33] + local_788[lVar31];
      afStack_588[lVar33] = fVar22;
      local_688[lVar31] = 0;
      local_788[lVar31] = 0;
      afStack_588[lVar31] = 0.0;
      uVar10._4_4_ = (int)lVar40 + -1;
      lVar31 = (longlong)uVar10._4_4_;
      if (-1 < uVar10._4_4_) {
        if (2 < lVar31) {
          lVar33 = lVar31 + -2;
          pfVar32 = afStack_498 + lVar40 * 4;
          pfVar23 = afStack_498 + lVar31 * 4;
          do {
            if ((pfVar23[7] == fVar42) || (pfVar23[6] == fVar43)) {
              uVar10 = *(undefined8 *)(pfVar32 + 2);
              *(undefined8 *)(pfVar23 + 4) = *(undefined8 *)pfVar32;
              *(undefined8 *)(pfVar23 + 6) = uVar10;
              lVar40 = lVar40 + -1;
              pfVar32 = pfVar32 + -4;
              lVar30 = lVar31;
              if (lVar36 != lVar40) {
                lVar30 = lVar36;
              }
            }
            else {
              lVar30 = lVar36;
              if (fVar45 < pfVar23[4]) {
                lVar30 = lVar31;
                fVar45 = pfVar23[4];
              }
            }
            if ((pfVar23[3] == fVar42) || (pfVar23[2] == fVar43)) {
              uVar10 = *(undefined8 *)(pfVar32 + 2);
              *(undefined8 *)pfVar23 = *(undefined8 *)pfVar32;
              *(undefined8 *)(pfVar23 + 2) = uVar10;
              lVar40 = lVar40 + -1;
              pfVar32 = pfVar32 + -4;
              lVar36 = lVar33 + 1;
              if (lVar30 != lVar40) {
                lVar36 = lVar30;
              }
            }
            else {
              lVar36 = lVar30;
              if (fVar45 < *pfVar23) {
                lVar36 = lVar33 + 1;
                fVar45 = *pfVar23;
              }
            }
            if ((pfVar23[-1] == fVar42) || (pfVar23[-2] == fVar43)) {
              uVar10 = *(undefined8 *)(pfVar32 + 2);
              *(undefined8 *)(pfVar23 + -4) = *(undefined8 *)pfVar32;
              *(undefined8 *)(pfVar23 + -2) = uVar10;
              lVar40 = lVar40 + -1;
              pfVar32 = pfVar32 + -4;
              lVar30 = lVar33;
              if (lVar36 != lVar40) {
                lVar30 = lVar36;
              }
            }
            else {
              lVar30 = lVar36;
              if (fVar45 < pfVar23[-4]) {
                lVar30 = lVar33;
                fVar45 = pfVar23[-4];
              }
            }
            if ((pfVar23[-5] == fVar42) || (pfVar23[-6] == fVar43)) {
              fVar22 = pfVar32[1];
              fVar44 = pfVar32[2];
              fVar6 = pfVar32[3];
              pfVar23[-8] = *pfVar32;
              pfVar23[-7] = fVar22;
              pfVar23[-6] = fVar44;
              pfVar23[-5] = fVar6;
              lVar40 = lVar40 + -1;
              pfVar32 = pfVar32 + -4;
              lVar36 = lVar33 + -1;
              if (lVar30 != lVar40) {
                lVar36 = lVar30;
              }
            }
            else {
              lVar36 = lVar30;
              if (fVar45 < pfVar23[-8]) {
                lVar36 = lVar33 + -1;
                fVar45 = pfVar23[-8];
              }
            }
            lVar31 = lVar31 + -4;
            pfVar23 = pfVar23 + -0x10;
            lVar33 = lVar33 + -4;
          } while (2 < lVar31);
          if (lVar31 < 0) goto LAB_14f3b59a5;
        }
        lVar33 = lVar40 + -1;
        pfVar23 = local_488 + lVar31 * 4;
        pfVar32 = afStack_498 + lVar40 * 4;
        lVar30 = lVar36;
        do {
          if ((pfVar23[3] == fVar42) || (pfVar23[2] == fVar43)) {
            fVar22 = pfVar32[1];
            fVar44 = pfVar32[2];
            fVar6 = pfVar32[3];
            *pfVar23 = *pfVar32;
            pfVar23[1] = fVar22;
            pfVar23[2] = fVar44;
            pfVar23[3] = fVar6;
            lVar36 = lVar31;
            if (lVar30 != lVar33) {
              lVar36 = lVar30;
            }
            lVar40 = lVar40 + -1;
            pfVar32 = pfVar32 + -4;
            lVar33 = lVar33 + -1;
          }
          else {
            lVar36 = lVar30;
            if (fVar45 < *pfVar23) {
              lVar36 = lVar31;
              fVar45 = *pfVar23;
            }
          }
          pfVar23 = pfVar23 + -4;
          lVar31 = lVar31 + -1;
          lVar30 = lVar36;
        } while (-1 < lVar31);
      }
LAB_14f3b59a5:
      uVar10._4_4_ = (int)fVar42 + -1;
      lVar31 = (longlong)uVar10._4_4_;
      lVar33 = lVar36;
      if (-1 < uVar10._4_4_) {
        do {
          if (local_788[lVar31] != 0) break;
          uVar10._4_4_ = uVar10._4_4_ + -1;
          lVar31 = lVar31 + -1;
        } while (-1 < lVar31);
        if (-1 < uVar10._4_4_) {
          lVar31 = (longlong)uVar10._4_4_;
          histo_add(&local_f88,(Histo256 *)local_14a8,(Histo256 *)(puVar34 + lVar31 * 0x100));
          fVar44 = histo_estimate_J(&local_f88,(longlong)(local_788[lVar31] + local_788[local_14c0])
                                    ,param_9,local_1490);
          fVar22 = (afStack_588[lVar31] + afStack_588[local_14c0]) - fVar44;
          if (0.0 < fVar22) {
            local_488[lVar40 * 4] = fVar22;
            local_488[lVar40 * 4 + 1] = fVar44;
            *(int *)(&uStack_480 + lVar40 * 2) = uVar10._4_4_;
            *(float *)((longlong)&uStack_480 + lVar40 * 0x10 + 4) = fVar42;
            lVar33 = lVar40;
            if (fVar22 <= fVar45) {
              lVar33 = lVar36;
              fVar22 = fVar45;
            }
            fVar45 = fVar22;
            lVar40 = lVar40 + 1;
          }
        }
      }
      uVar10._4_4_ = (int)fVar43 + 1;
      for (lVar36 = (longlong)uVar10._4_4_; (lVar36 < local_14b8 && (local_788[lVar36] == 0));
          lVar36 = lVar36 + 1) {
        uVar10._4_4_ = uVar10._4_4_ + 1;
      }
      if (uVar10._4_4_ < local_149c) {
        lVar31 = (longlong)uVar10._4_4_;
        histo_add(&local_b88,(Histo256 *)local_14a8,(Histo256 *)(puVar34 + lVar31 * 0x100));
        lVar36 = local_14c0;
        fVar22 = histo_estimate_J(&local_b88,(longlong)(local_788[lVar31] + local_788[local_14c0]),
                                  param_9,local_1490);
        fVar43 = (afStack_588[lVar31] + afStack_588[lVar36]) - fVar22;
        if (0.0 < fVar43) {
          local_488[lVar40 * 4] = fVar43;
          local_488[lVar40 * 4 + 1] = fVar22;
          *(float *)(&uStack_480 + lVar40 * 2) = fVar42;
          *(int *)((longlong)&uStack_480 + lVar40 * 0x10 + 4) = uVar10._4_4_;
          if (fVar45 < fVar43) {
            lVar33 = lVar40;
          }
          lVar40 = lVar40 + 1;
        }
      }
      psVar20 = local_1478;
    } while (0 < lVar40);
LAB_14f3b5b7f:
    lVar36 = 0;
    uVar10._4_4_ = 0;
    lVar40 = 0;
    puVar18 = local_14b0;
    puVar34 = local_14b0;
    do {
      iVar15 = local_788[lVar40];
      if (iVar15 != 0) {
        if (lVar40 != uVar10._4_4_) {
          lVar31 = 8;
          puVar21 = puVar18;
          puVar24 = puVar34;
          do {
            uVar11 = *(undefined8 *)(puVar24 + 2);
            *(undefined8 *)puVar21 = *(undefined8 *)puVar24;
            *(undefined8 *)(puVar21 + 2) = uVar11;
            uVar11 = *(undefined8 *)(puVar24 + 6);
            *(undefined8 *)(puVar21 + 4) = *(undefined8 *)(puVar24 + 4);
            *(undefined8 *)(puVar21 + 6) = uVar11;
            uVar11 = *(undefined8 *)(puVar24 + 10);
            *(undefined8 *)(puVar21 + 8) = *(undefined8 *)(puVar24 + 8);
            *(undefined8 *)(puVar21 + 10) = uVar11;
            uVar11 = *(undefined8 *)(puVar24 + 0xe);
            *(undefined8 *)(puVar21 + 0xc) = *(undefined8 *)(puVar24 + 0xc);
            *(undefined8 *)(puVar21 + 0xe) = uVar11;
            uVar11 = *(undefined8 *)(puVar24 + 0x12);
            *(undefined8 *)(puVar21 + 0x10) = *(undefined8 *)(puVar24 + 0x10);
            *(undefined8 *)(puVar21 + 0x12) = uVar11;
            uVar11 = *(undefined8 *)(puVar24 + 0x16);
            *(undefined8 *)(puVar21 + 0x14) = *(undefined8 *)(puVar24 + 0x14);
            *(undefined8 *)(puVar21 + 0x16) = uVar11;
            uVar38 = puVar24[0x19];
            uVar4 = puVar24[0x1a];
            uVar5 = puVar24[0x1b];
            puVar21[0x18] = puVar24[0x18];
            puVar21[0x19] = uVar38;
            puVar21[0x1a] = uVar4;
            puVar21[0x1b] = uVar5;
            uVar11 = *(undefined8 *)(puVar24 + 0x1e);
            *(undefined8 *)(puVar21 + 0x1c) = *(undefined8 *)(puVar24 + 0x1c);
            *(undefined8 *)(puVar21 + 0x1e) = uVar11;
            puVar24 = puVar24 + 0x20;
            lVar31 = lVar31 + -1;
            puVar21 = puVar21 + 0x20;
          } while (lVar31 != 0);
          *(int *)((longlong)local_788 + lVar36) = iVar15;
          *(int *)((longlong)local_688 + lVar36) = local_688[lVar40];
        }
        uVar10._4_4_ = uVar10._4_4_ + 1;
        puVar18 = puVar18 + 0x100;
        lVar36 = lVar36 + 4;
      }
      lVar40 = lVar40 + 1;
      puVar34 = puVar34 + 0x100;
    } while (lVar40 < local_14b8);
    prVar28 = local_1488;
    if (uVar10._4_4_ != 1) goto LAB_14f3b5c51;
    goto LAB_14f3b5ea0;
  }
LAB_14f3b5b73:
  uVar10._4_4_ = 0;
  if (0 < local_14b8) goto LAB_14f3b5b7f;
LAB_14f3b5c51:
  iVar15 = 0;
  lVar36 = (longlong)uVar10._4_4_;
  lVar40 = 0;
  if (0 < uVar10._4_4_) {
    do {
      uVar10._4_4_ = iVar15 + 1;
      if (local_788[lVar40] == 0) {
        uVar10._4_4_ = iVar15;
      }
      iVar15 = uVar10._4_4_;
      lVar40 = lVar40 + 1;
    } while (lVar40 < lVar36);
    prVar28 = local_1488;
    if (iVar15 == 1) goto LAB_14f3b5ea0;
  }
  local_13d0 = local_1488;
  lVar40 = (longlong)(int)local_1470;
  local_13c0 = lVar40;
  if (local_1488 == (rrArenaAllocator *)0x0) {
    _Src = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar40,0x10);
    if (_Src == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(lVar40);
    }
  }
  else {
    _Src = rrArenaAllocator::Alloc(local_1488,lVar40,0);
  }
  local_13c8 = _Src;
  if ((_Src == (undefined1 *)0x0) &&
     (uVar10._4_4_ = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",
                                        0x19a,"oo2::rrScopeArenaAlloc::rrScopeArenaAlloc",
                                        "m_ptr != NULL"), uVar10._4_4_ != 0)) {
    pcVar3 = (code *)swi(3);
    lVar19 = (*pcVar3)();
    return lVar19;
  }
  *_Src = (char)iVar15;
  fVar22 = __real_53800000;
  puVar39 = _Src + 1;
  lVar31 = 0;
  fVar42 = __real_40c00000;
  if (0 < lVar36) {
    do {
      if (local_788[lVar31] != 0) {
        local_14d0 = 1.0737418e+09;
        lVar19 = newLZ_put_array_small_allowed
                           (puVar39,_Src + lVar40,local_14c8 + local_688[lVar31],
                            (longlong)local_788[lVar31],param_8 & 0xffffffef,param_9,local_1490,
                            &local_14d0,fVar22,local_1488,param_7,(uint *)0x0);
        if (lVar19 < 0) goto LAB_14f3b5df2;
        puVar39 = puVar39 + lVar19;
        fVar42 = fVar42 + local_14d0;
      }
      lVar31 = lVar31 + 1;
    } while (lVar31 < lVar36);
  }
  if ((param_11 <= fVar42) ||
     (_Size = (longlong)puVar39 - (longlong)_Src, local_1400 < local_1408 + _Size)) {
LAB_14f3b5df2:
    local_1460 = 0xffffffffffffffff;
  }
  else {
    *local_13f8 = fVar42;
    memcpy(local_1408,_Src,_Size);
    local_1460 = _Size;
  }
  prVar28 = local_1488;
  if (local_1488 == (rrArenaAllocator *)0x0) {
LAB_14f3b5e92:
    (*g_fp_OodleCore_Plugin_Free)(_Src);
  }
  else {
    uVar35 = (longlong)(int)local_1470 + 0xfU & 0xfffffffffffffff0;
    if ((undefined1 *)local_1488->m_unorderedStart == (undefined1 *)0x0) {
      if (_Src + uVar35 != (undefined1 *)local_1488->m_cur) goto LAB_14f3b5e92;
      local_1488->m_cur = (longlong)local_1488->m_cur - uVar35;
    }
    else {
      if ((_Src < (undefined1 *)local_1488->m_unorderedStart) ||
         ((undefined1 *)(local_1488->m_size + local_1488->m_base) <= _Src)) goto LAB_14f3b5e92;
      plVar25 = (longlong *)(_Src + uVar35);
      plVar25[1] = 1;
      plVar2 = (longlong *)local_1488->m_cur;
      if (plVar25 + 2 == plVar2) {
        while ((plVar2 != (longlong *)local_1488->m_unorderedStart && (plVar25[1] == 1))) {
          local_1488->m_cur = local_1488->m_cur + (-0x10 - *plVar25);
          plVar2 = (longlong *)local_1488->m_cur;
          plVar25 = plVar2 + -2;
        }
      }
    }
  }
LAB_14f3b5ea0:
  if (psVar20 == (slide_candidate *)0x0) goto LAB_14f3b5f4b;
  if (prVar28 != (rrArenaAllocator *)0x0) {
    uVar35 = local_13f0 + 0xfU & 0xfffffffffffffff0;
    if ((slide_candidate *)prVar28->m_unorderedStart == (slide_candidate *)0x0) {
      if ((longlong)&psVar20->gain + uVar35 == prVar28->m_cur) {
        prVar28->m_cur = prVar28->m_cur - uVar35;
        goto LAB_14f3b5f4b;
      }
    }
    else if (((slide_candidate *)prVar28->m_unorderedStart <= psVar20) &&
            (psVar20 < (slide_candidate *)(prVar28->m_size + prVar28->m_base))) {
      plVar25 = (longlong *)((longlong)&psVar20->gain + uVar35);
      plVar25[1] = 1;
      plVar2 = (longlong *)prVar28->m_cur;
      if (plVar25 + 2 == plVar2) {
        while ((plVar2 != (longlong *)prVar28->m_unorderedStart && (plVar25[1] == 1))) {
          prVar28->m_cur = prVar28->m_cur + (-0x10 - *plVar25);
          plVar2 = (longlong *)prVar28->m_cur;
          plVar25 = plVar2 + -2;
        }
      }
      goto LAB_14f3b5f4b;
    }
  }
  (*g_fp_OodleCore_Plugin_Free)(psVar20);
LAB_14f3b5f4b:
  if (local_1468 == (uint *)0x0) {
    return local_1460;
  }
  if (local_1440 != (rrArenaAllocator *)0x0) {
    uVar35 = local_1448 + 0xfU & 0xfffffffffffffff0;
    if ((Histo256 *)local_1440->m_unorderedStart == (Histo256 *)0x0) {
      if (uVar35 + (longlong)local_1468 == local_1440->m_cur) {
        local_1440->m_cur = local_1440->m_cur - uVar35;
        return local_1460;
      }
    }
    else if (((Histo256 *)local_1440->m_unorderedStart <= local_1468) &&
            (local_1468 < (Histo256 *)(local_1440->m_size + local_1440->m_base))) {
      plVar25 = (longlong *)(uVar35 + (longlong)local_1468);
      plVar25[1] = 1;
      plVar2 = (longlong *)local_1440->m_cur;
      if (plVar25 + 2 != plVar2) {
        return local_1460;
      }
      while( true ) {
        if (plVar2 == (longlong *)local_1440->m_unorderedStart) {
          return local_1460;
        }
        if (plVar25[1] != 1) break;
        local_1440->m_cur = local_1440->m_cur + (-0x10 - *plVar25);
        plVar2 = (longlong *)local_1440->m_cur;
        plVar25 = plVar2 + -2;
      }
      return local_1460;
    }
  }
  (*g_fp_OodleCore_Plugin_Free)(local_1468);
  return local_1460;
}

// newLZ_put_multiarray_identity @ 14f3b6060

long64 __cdecl
oo2::newLZ_put_multiarray_identity
          (uchar *param_1,uchar *param_2,uchar **param_3,long64 *param_4,long64 param_5,uint param_6
          ,float param_7,OodleSpeedFit *param_8,float *param_9,rrArenaAllocator *param_10,
          int param_11)

{
  float fVar1;
  long64 lVar2;
  uchar *puVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float local_res8 [2];
  
  fVar6 = __real_3f800000;
  if (param_1 < param_2) {
    puVar3 = param_1 + 1;
    lVar4 = 0;
    *param_1 = 0x80;
    fVar1 = __real_53800000;
    if (0 < param_5) {
      lVar5 = (longlong)param_4 - (longlong)param_3;
      do {
        local_res8[0] = 1.0737418e+09;
        lVar2 = newLZ_put_array_small_allowed
                          (puVar3,param_2,*param_3,*(long64 *)(lVar5 + (longlong)param_3),param_6,
                           param_7,param_8,local_res8,fVar1,param_10,param_11,(uint *)0x0);
        if (lVar2 < 0) goto LAB_14f3b618f;
        fVar6 = fVar6 + local_res8[0];
        puVar3 = puVar3 + lVar2;
        lVar4 = lVar4 + 1;
        param_3 = param_3 + 1;
      } while (lVar4 < param_5);
    }
    lVar2 = (longlong)puVar3 - (longlong)param_1;
    *param_9 = fVar6;
  }
  else {
LAB_14f3b618f:
    lVar2 = -1;
  }
  return lVar2;
}

// newLZ_put_multiarray_indexed @ 14f3b61e0

long64 __cdecl
oo2::newLZ_put_multiarray_indexed
          (uchar *param_1,uchar *param_2,uchar **param_3,long64 *param_4,long64 param_5,uint param_6
          ,float param_7,OodleSpeedFit *param_8,float *param_9,rrArenaAllocator *param_10,
          int param_11)

{
  uint uVar1;
  float fVar2;
  long64 lVar3;
  long64 lVar4;
  uchar *puVar5;
  uchar **ppuVar6;
  longlong lVar7;
  float fVar8;
  float local_res8 [2];
  
  fVar8 = __real_3f800000;
  uVar1 = param_6 & 0xffffffdf;
  if (7 < param_11) {
    uVar1 = param_6;
  }
  if (param_1 < param_2) {
    puVar5 = param_1 + 1;
    lVar7 = 0;
    *param_1 = 0x80;
    fVar2 = __real_53800000;
    if (0 < param_5) {
      ppuVar6 = param_3;
      do {
        local_res8[0] = 1.0737418e+09;
        lVar4 = newLZ_put_array_small_allowed
                          (puVar5,param_2,*ppuVar6,
                           *(long64 *)(((longlong)param_4 - (longlong)param_3) + (longlong)ppuVar6),
                           uVar1,param_7,param_8,local_res8,fVar2,param_10,param_11,(uint *)0x0);
        if (lVar4 < 0) {
          lVar4 = -1;
          goto LAB_14f3b6365;
        }
        fVar8 = fVar8 + local_res8[0];
        puVar5 = puVar5 + lVar4;
        lVar7 = lVar7 + 1;
        ppuVar6 = ppuVar6 + 1;
      } while (lVar7 < param_5);
    }
    lVar4 = (longlong)puVar5 - (longlong)param_1;
    *param_9 = fVar8;
  }
  else {
    lVar4 = -1;
  }
LAB_14f3b6365:
  if (((param_6 & 0x20) == 0) ||
     (lVar3 = newLZ_put_multiarray_indexed_sub
                        (param_1,param_2,param_3,param_4,param_5,uVar1,param_7,param_8,param_9,
                         param_10,param_11), lVar3 < 1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}

// newLZ_put_multiarray_indexed_sub @ 14f3b6400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f3b73c9) */
/* WARNING: Removing unreachable block (ram,0x00014f3b73d6) */
/* WARNING: Removing unreachable block (ram,0x00014f3b744e) */
/* WARNING: Removing unreachable block (ram,0x00014f3b745b) */
/* WARNING: Removing unreachable block (ram,0x00014f3b73e7) */
/* WARNING: Removing unreachable block (ram,0x00014f3b73f0) */
/* WARNING: Removing unreachable block (ram,0x00014f3b746b) */
/* WARNING: Removing unreachable block (ram,0x00014f3b73fc) */
/* WARNING: Removing unreachable block (ram,0x00014f3b7414) */
/* WARNING: Removing unreachable block (ram,0x00014f3b7420) */
/* WARNING: Removing unreachable block (ram,0x00014f3b7427) */
/* WARNING: Removing unreachable block (ram,0x00014f3b7445) */
/* WARNING: Removing unreachable block (ram,0x00014f3b7474) */
/* WARNING: Removing unreachable block (ram,0x00014f3b7489) */
/* WARNING: Removing unreachable block (ram,0x00014f3b7492) */
/* WARNING: Removing unreachable block (ram,0x00014f3b74fb) */
/* WARNING: Removing unreachable block (ram,0x00014f3b7508) */
/* WARNING: Removing unreachable block (ram,0x00014f3b74a5) */
/* WARNING: Removing unreachable block (ram,0x00014f3b74aa) */
/* WARNING: Removing unreachable block (ram,0x00014f3b7511) */
/* WARNING: Removing unreachable block (ram,0x00014f3b74b6) */
/* WARNING: Removing unreachable block (ram,0x00014f3b74ce) */
/* WARNING: Removing unreachable block (ram,0x00014f3b74d7) */
/* WARNING: Removing unreachable block (ram,0x00014f3b74de) */
/* WARNING: Removing unreachable block (ram,0x00014f3b74f9) */
/* WARNING: Removing unreachable block (ram,0x00014f3b751a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long64 __cdecl
oo2::newLZ_put_multiarray_indexed_sub
          (uchar *param_1,uchar *param_2,uchar **param_3,long64 *param_4,long64 param_5,uint param_6
          ,float param_7,OodleSpeedFit *param_8,float *param_9,rrArenaAllocator *param_10,
          int param_11)

{
  ulong64 *puVar1;
  ushort *puVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  index_and_count iVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  rrArenaAllocator *prVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  void *pvVar15;
  long64 lVar16;
  undefined1 *puVar17;
  rrArenaAllocator *prVar18;
  uchar *puVar19;
  index_and_count *piVar20;
  undefined8 *puVar21;
  ushort *puVar22;
  _func___cdecl_uint_Histo256_ptr_long64 *p_Var23;
  rrArenaAllocator *prVar24;
  index_and_count *piVar25;
  uchar **ppuVar26;
  ushort uVar27;
  uint uVar28;
  ulonglong uVar29;
  uchar *puVar30;
  index_and_count *piVar31;
  int *piVar32;
  ushort uVar33;
  rrArenaAllocator *prVar34;
  undefined8 *puVar35;
  longlong lVar36;
  byte bVar37;
  longlong lVar38;
  rrArenaAllocator *prVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong *plVar42;
  rrArenaAllocator *prVar43;
  size_t _Size;
  uint *puVar44;
  Histo256 *pHVar45;
  byte *pbVar46;
  rrArenaAllocator *prVar47;
  undefined1 uVar48;
  ulonglong uVar49;
  undefined8 uVar50;
  uint uVar51;
  rrArenaAllocator *prVar52;
  ulonglong *puVar53;
  ulonglong *puVar54;
  longlong lVar55;
  ulonglong uVar56;
  undefined1 *puVar57;
  byte *pbVar58;
  rrArenaAllocator *prVar59;
  uint uVar60;
  longlong lVar61;
  float fVar62;
  float fVar63;
  undefined1 auStackY_c78 [32];
  stdgreater<oo2::index_and_count> local_c18;
  float local_c14;
  float local_c10 [2];
  rrArenaAllocator *local_c08;
  ulonglong *local_c00;
  rrArenaAllocator *local_bf8;
  ulonglong *local_bf0;
  undefined1 *local_be8;
  rrArenaAllocator *local_be0;
  rrArenaAllocator *local_bd8;
  rrArenaAllocator *local_bd0;
  float local_bc8 [2];
  rrArenaAllocator *local_bc0;
  rrArenaAllocator *local_bb8;
  rrArenaAllocator *local_bb0;
  rrArenaAllocator *local_ba8;
  rrArenaAllocator *local_ba0;
  undefined8 local_b98;
  rrArenaAllocator *local_b90;
  ulonglong *local_b88;
  rrArenaAllocator *local_b80;
  rrArenaAllocator *local_b78;
  rrArenaAllocator *local_b70;
  undefined1 *local_b68;
  rrArenaAllocator *local_b60;
  rrArenaAllocator *local_b58;
  rrArenaAllocator *local_b50;
  rrArenaAllocator *local_b48;
  longlong *local_b40;
  OodleSpeedFit *local_b38;
  ulonglong *local_b30;
  rrArenaAllocator *local_b28;
  vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> local_b20;
  rrArenaAllocator *local_b08;
  rrArenaAllocator *local_b00;
  undefined1 *local_af8;
  undefined1 *local_af0;
  undefined1 *local_ae8;
  uchar **local_ae0;
  rrScopeArenaAlloc local_ad8;
  rrArenaAllocator *local_ac0;
  float *local_ab8;
  byte *local_ab0;
  rrArenaAllocator *local_aa8;
  rrArenaAllocator *local_aa0;
  ulonglong *local_a98;
  rrScopeArenaAlloc local_a90;
  uchar *local_a78;
  uchar *local_a70;
  rrScopeArenaAlloc local_a68;
  rrScopeArenaAlloc local_a50;
  undefined8 local_a38;
  longlong local_a28 [2];
  longlong local_a18 [44];
  int aiStack_8b4 [3];
  index_and_count local_8a8 [130];
  ushort local_498 [520];
  ulonglong local_88;
  
  local_a38 = 0xfffffffffffffffe;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_c78;
  local_b38 = param_8;
  local_ab8 = param_9;
  local_bc0 = param_10;
  fVar12 = (float)(1 << ((byte)param_11 & 0x1f));
  fVar63 = 4.48416e-44;
  if ((int)fVar12 < 0x20) {
    fVar63 = fVar12;
  }
  local_bc8[0] = 1.12104e-44;
  if (8 < (int)fVar63) {
    local_bc8[0] = fVar63;
  }
  if (param_11 == 9) {
    local_bc8[0] = 8.68805e-44;
  }
  prVar47 = (rrArenaAllocator *)0x0;
  prVar39 = prVar47;
  prVar18 = prVar47;
  local_ac0 = prVar47;
  if (0 < param_5) {
    do {
      local_b90 = (rrArenaAllocator *)param_4[(longlong)prVar39];
      local_ac0 = (rrArenaAllocator *)((longlong)&local_b90->m_base + (longlong)&local_ac0->m_base);
      if ((longlong)local_b90 < (longlong)prVar18) {
        local_b90 = prVar18;
      }
      prVar39 = (rrArenaAllocator *)((longlong)&prVar39->m_base + 1);
      prVar18 = local_b90;
    } while ((longlong)prVar39 < param_5);
    if ((0x5f < (longlong)local_ac0) && (0x1f < (longlong)local_b90)) {
      iVar14 = (int)local_bc8[0] * 2;
      puVar30 = (uchar *)((longlong)&local_ac0->m_base +
                         SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)local_ac0),8));
      fVar12 = (float)((int)((longlong)puVar30 >> 6) - (int)((longlong)puVar30 >> 0x3f));
      fVar63 = 8.96831e-44;
      if (0x40 < (int)fVar12) {
        fVar63 = fVar12;
      }
      local_b98 = (uchar *)CONCAT44(local_b98._4_4_,fVar63);
      local_b00 = (rrArenaAllocator *)0x0;
      local_af8 = (undefined1 *)0x0;
      local_af0 = (undefined1 *)0x0;
      lVar38 = (longlong)(iVar14 + 1) * 0x200;
      local_a50.m_pAlloc = param_10;
      local_ae0 = param_3;
      local_a98 = (ulonglong *)param_4;
      local_a78 = param_1;
      local_a70 = param_2;
      local_a50.m_size = lVar38;
      if (param_10 == (rrArenaAllocator *)0x0) {
        pvVar15 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar38,0x10);
        if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          Oodle_Core_Malloc_Failed(lVar38);
        }
      }
      else {
        pvVar15 = rrArenaAllocator::Alloc(param_10,lVar38,0);
      }
      local_a50.m_ptr = pvVar15;
      if ((pvVar15 == (void *)0x0) &&
         (iVar13 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                      "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
         iVar13 != 0)) {
        pcVar5 = (code *)swi(3);
        lVar16 = (*pcVar5)();
        return lVar16;
      }
      local_bd8 = (rrArenaAllocator *)((longlong)pvVar15 + 0xfU & 0xfffffffffffffff0);
      local_af8 = (undefined1 *)
                  ((ulonglong)((longlong)pvVar15 + (lVar38 - (longlong)local_bd8)) >> 9);
      local_bf8 = (rrArenaAllocator *)0x0;
      local_bf0 = (ulonglong *)0x0;
      local_be8 = (undefined1 *)0x0;
      local_ad8.m_pAlloc = (rrArenaAllocator *)0x0;
      local_ad8.m_ptr = (rrArenaAllocator *)0x0;
      local_b48 = (rrArenaAllocator *)0x0;
      local_ad8.m_size = 0;
      local_bb0 = (rrArenaAllocator *)0x0;
      local_ba8 = (rrArenaAllocator *)0x0;
      local_ba0 = (rrArenaAllocator *)0x0;
      prVar39 = (rrArenaAllocator *)((longlong)iVar14 * 0x408);
      local_b80 = param_10;
      local_b70 = prVar39;
      local_b00 = local_bd8;
      local_ae8 = local_af8;
      local_aa8 = prVar39;
      if (param_10 == (rrArenaAllocator *)0x0) {
        puVar17 = (*g_fp_OodleCore_Plugin_MallocAligned)((long64)prVar39,0x10);
        if (puVar17 == (undefined1 *)0x0) {
          local_b68 = puVar17;
                    /* WARNING: Subroutine does not return */
          Oodle_Core_Malloc_Failed((long64)prVar39);
        }
      }
      else {
        puVar17 = rrArenaAllocator::Alloc(param_10,(long64)prVar39,0);
      }
      local_b78 = (rrArenaAllocator *)puVar17;
      local_b68 = puVar17;
      if ((puVar17 == (undefined1 *)0x0) &&
         (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                      "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
         iVar14 != 0)) {
        pcVar5 = (code *)swi(3);
        lVar16 = (*pcVar5)();
        return lVar16;
      }
      local_be0 = (rrArenaAllocator *)((ulonglong)(puVar17 + 0xf) & 0xfffffffffffffff0);
      local_ba8 = (rrArenaAllocator *)
                  ((ulonglong)((longlong)(puVar17 + (longlong)prVar39) - (longlong)local_be0) /
                  0x408);
      local_c14 = 0.0;
      local_c10[0] = 0.0;
      local_ab0 = (byte *)0xffffffffffffffff;
      local_bb8 = local_ad8.m_ptr;
      local_b28 = local_ad8.m_pAlloc;
      prVar39 = prVar47;
      prVar18 = prVar47;
      local_bb0 = local_be0;
      local_b30 = (ulonglong *)local_ba8;
      do {
        if ((int)prVar39 == 1) {
          prVar39 = (rrArenaAllocator *)((longlong)(int)prVar47 * 0x408);
          if (local_bb8 != (rrArenaAllocator *)0x0) {
            if (local_b28 == (rrArenaAllocator *)0x0) {
LAB_14f3b6851:
              (*g_fp_OodleCore_Plugin_Free)(local_bb8);
            }
            else {
              uVar29 = (ulonglong)((longlong)&prVar18->m_cur + 7U) & 0xfffffffffffffff0;
              if ((rrArenaAllocator *)local_b28->m_unorderedStart == (rrArenaAllocator *)0x0) {
                if ((uchar *)((longlong)&local_bb8->m_base + uVar29) != (uchar *)local_b28->m_cur)
                goto LAB_14f3b6851;
                local_b28->m_cur = (longlong)local_b28->m_cur - uVar29;
              }
              else {
                if ((local_bb8 < (rrArenaAllocator *)local_b28->m_unorderedStart) ||
                   ((rrArenaAllocator *)(local_b28->m_size + local_b28->m_base) <= local_bb8))
                goto LAB_14f3b6851;
                plVar42 = (longlong *)((longlong)&local_bb8->m_base + uVar29);
                plVar42[1] = 1;
                plVar4 = (longlong *)local_b28->m_cur;
                if (plVar42 + 2 == plVar4) {
                  while ((plVar4 != (longlong *)local_b28->m_unorderedStart && (plVar42[1] == 1))) {
                    local_b28->m_cur = local_b28->m_cur + (-0x10 - *plVar42);
                    plVar4 = (longlong *)local_b28->m_cur;
                    plVar42 = plVar4 + -2;
                  }
                }
                prVar47 = (rrArenaAllocator *)(ulonglong)(uint)local_c14;
              }
            }
            local_ad8.m_ptr = (rrArenaAllocator *)0x0;
          }
          local_b48 = prVar39;
          local_b28 = param_10;
          local_ad8.m_pAlloc = param_10;
          local_ad8.m_size = (long64)prVar39;
          if (param_10 == (rrArenaAllocator *)0x0) {
            prVar18 = (*g_fp_OodleCore_Plugin_MallocAligned)((long64)prVar39,0x10);
            if (prVar18 == (rrArenaAllocator *)0x0) {
              local_bb8 = prVar18;
                    /* WARNING: Subroutine does not return */
              Oodle_Core_Malloc_Failed((long64)prVar39);
            }
          }
          else {
            prVar18 = rrArenaAllocator::Alloc(param_10,(long64)prVar39,0);
          }
          local_bb8 = prVar18;
          local_ad8.m_ptr = prVar18;
          if ((prVar18 == (rrArenaAllocator *)0x0) &&
             (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",
                                          0x1bc,"oo2::rrScopeArenaAlloc::Alloc","m_ptr != NULL"),
             iVar14 != 0)) {
            pcVar5 = (code *)swi(3);
            lVar16 = (*pcVar5)();
            return lVar16;
          }
          local_bf8 = (rrArenaAllocator *)
                      ((ulonglong)((longlong)&prVar18->m_cur + 7U) & 0xfffffffffffffff0);
          local_bf0 = (ulonglong *)
                      ((ulonglong)
                       ((longlong)((longlong)prVar18 + (longlong)prVar39) - (longlong)local_bf8) /
                      0x408);
          prVar39 = (rrArenaAllocator *)(ulonglong)(uint)local_c10[0];
        }
        uVar29 = 0xf309cc5e;
        local_b08 = (rrArenaAllocator *)((longlong)local_a98 - (longlong)local_ae0);
        local_bd0 = (rrArenaAllocator *)local_ae0;
        local_c08 = (rrArenaAllocator *)param_5;
        do {
          lVar38 = *(longlong *)((longlong)&local_b08->m_base + (longlong)local_bd0);
          if (0xf < lVar38) {
            puVar54 = *(ulonglong **)local_bd0;
            pbVar58 = (byte *)(lVar38 + (longlong)puVar54);
            local_b40 = (longlong *)(longlong)(int)fVar63;
            local_c00 = (ulonglong *)CONCAT44(local_c00._4_4_,(int)fVar63 / 2);
            plVar42 = local_b40;
            iVar14 = (int)fVar63 / 2;
            local_b88 = puVar54;
            while( true ) {
              puVar17 = local_be8;
              lVar38 = uVar29 * (longlong)plVar42;
              uVar51 = (int)uVar29 * 0x10dcd + 0x3039;
              uVar29 = (ulonglong)uVar51;
              uVar28 = (int)((ulonglong)lVar38 >> 0x20) + iVar14;
              uVar60 = (int)pbVar58 - (int)puVar54;
              if ((int)uVar28 < (int)uVar60) {
                uVar60 = uVar28;
              }
              if ((int)uVar60 < 0x10) break;
              uVar28 = 0x100;
              if ((int)uVar60 < 0x100) {
                uVar28 = uVar60;
              }
              lVar38 = (longlong)(int)(uVar28 - 0x40) * uVar29;
              uVar29 = (ulonglong)(uVar51 * 0x10dcd + 0x3039);
              uVar28 = (int)((ulonglong)lVar38 >> 0x20) + 0x40;
              if ((int)uVar60 < 0x40) {
                uVar28 = uVar60;
              }
              if ((int)prVar39 == 0) {
                local_c14 = (float)((int)prVar47 + 1);
                prVar47 = (rrArenaAllocator *)(ulonglong)(uint)local_c14;
                puVar54 = (ulonglong *)((longlong)puVar54 + (longlong)(int)uVar60);
                iVar14 = (int)local_c00;
              }
              else {
                if ((local_bf0 < (longlong)local_be8 + 1U) &&
                   (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                                ,0x3f,
                                                "oo2::vector_storage_a<struct oo2::entropyset>::needmakefit"
                                                ,"newsize <= m_capacity"), iVar14 != 0)) {
                  pcVar5 = (code *)swi(3);
                  lVar16 = (*pcVar5)();
                  return lVar16;
                }
                local_be8 = (undefined1 *)((longlong)local_be8 + 1);
                pvVar15 = (void *)((longlong)puVar17 * 0x408 + (longlong)local_bf8);
                if (pvVar15 != (void *)0x0) {
                  memset(pvVar15,0,0x408);
                }
                puVar44 = (uint *)((longlong)local_bf8 + (longlong)local_be8 * 0x408 + -0x408);
                lVar38 = (longlong)(int)uVar28;
                CountHistoArrayU8_Simple((uchar *)puVar54,lVar38,puVar44,0x100,false);
                puVar44[0x100] = uVar28;
                iVar13 = -1;
                iVar14 = iVar13;
                if (local_b88 < puVar54) {
                  iVar14 = puVar44[*(byte *)((longlong)puVar54 + -1)] -
                           puVar44[*(byte *)(lVar38 + -1 + (longlong)puVar54)];
                }
                pbVar46 = (byte *)(lVar38 + (longlong)puVar54);
                if (pbVar46 < pbVar58) {
                  iVar13 = puVar44[*pbVar46] - puVar44[(byte)*puVar54];
                }
                puVar53 = puVar54;
                if (iVar13 < iVar14) {
                  for (; local_b88 < puVar53; puVar53 = (ulonglong *)((longlong)puVar53 + -1)) {
                    pbVar46 = pbVar46 + -1;
                    if ((int)(puVar44[pbVar46[-lVar38]] - puVar44[*pbVar46]) < 1) break;
                    puVar44[pbVar46[-lVar38]] = puVar44[pbVar46[-lVar38]] + 1;
                    puVar44[*pbVar46] = puVar44[*pbVar46] - 1;
                  }
                }
                else {
                  while (pbVar46 < pbVar58) {
                    if ((int)(puVar44[*pbVar46] - puVar44[(byte)*puVar53]) < 0) break;
                    puVar44[*pbVar46] = puVar44[*pbVar46] + 1;
                    puVar44[(byte)*puVar53] = puVar44[(byte)*puVar53] - 1;
                    pbVar46 = (byte *)((longlong)puVar53 + 1 + lVar38);
                    puVar53 = (ulonglong *)((longlong)puVar53 + 1);
                  }
                }
                if (puVar53 < puVar54) {
                  puVar53 = puVar54;
                }
                prVar47 = (rrArenaAllocator *)(ulonglong)(uint)local_c14;
                prVar39 = (rrArenaAllocator *)(ulonglong)(uint)local_c10[0];
                puVar54 = (ulonglong *)((longlong)puVar53 + (longlong)(int)uVar60);
                plVar42 = local_b40;
                iVar14 = (int)local_c00;
              }
            }
            fVar63 = (float)local_b98;
          }
          prVar18 = local_ba0;
          local_bd0 = (rrArenaAllocator *)((longlong)local_bd0 + 8);
          local_c08 = (rrArenaAllocator *)((longlong)local_c08 + -1);
        } while (local_c08 != (rrArenaAllocator *)0x0);
        local_c10[0] = (float)((int)prVar39 + 1);
        prVar39 = (rrArenaAllocator *)(ulonglong)(uint)local_c10[0];
        if (1 < (int)local_c10[0]) goto code_r0x00014f3b6b77;
        local_c08 = (rrArenaAllocator *)0x0;
        prVar18 = local_b48;
        param_10 = local_bc0;
      } while( true );
    }
  }
  return -1;
LAB_14f3b8165:
  if (local_c08 == (rrArenaAllocator *)0x0) goto LAB_14f3b820c;
  if (prVar18 == (rrArenaAllocator *)0x0) {
LAB_14f3b8202:
    (*g_fp_OodleCore_Plugin_Free)(local_c08);
  }
  else {
    uVar29 = (ulonglong)((longlong)local_b88 + 0xf) & 0xfffffffffffffff0;
    if ((rrArenaAllocator *)prVar18->m_unorderedStart == (rrArenaAllocator *)0x0) {
      if ((uchar *)((longlong)&local_c08->m_base + uVar29) != (uchar *)prVar18->m_cur)
      goto LAB_14f3b8202;
      prVar18->m_cur = (longlong)prVar18->m_cur - uVar29;
    }
    else {
      if ((local_c08 < (rrArenaAllocator *)prVar18->m_unorderedStart) ||
         ((rrArenaAllocator *)(prVar18->m_size + prVar18->m_base) <= local_c08)) goto LAB_14f3b8202;
      plVar42 = (longlong *)((longlong)&local_c08->m_base + uVar29);
      plVar42[1] = 1;
      plVar4 = (longlong *)prVar18->m_cur;
      if (plVar42 + 2 == plVar4) {
        while ((plVar4 != (longlong *)prVar18->m_unorderedStart && (plVar42[1] == 1))) {
          prVar18->m_cur = prVar18->m_cur + (-0x10 - *plVar42);
          plVar4 = (longlong *)prVar18->m_cur;
          plVar42 = plVar4 + -2;
        }
      }
    }
  }
LAB_14f3b820c:
  if (local_bd0 == (rrArenaAllocator *)0x0) goto LAB_14f3b82bc;
  if (prVar18 == (rrArenaAllocator *)0x0) {
LAB_14f3b82b2:
    (*g_fp_OodleCore_Plugin_Free)(local_bd0);
  }
  else {
    uVar29 = (longlong)local_b90 * 9 + 0xfU & 0xfffffffffffffff0;
    if ((rrArenaAllocator *)prVar18->m_unorderedStart == (rrArenaAllocator *)0x0) {
      if ((uchar *)((longlong)&local_bd0->m_base + uVar29) != (uchar *)prVar18->m_cur)
      goto LAB_14f3b82b2;
      prVar18->m_cur = (longlong)prVar18->m_cur - uVar29;
    }
    else {
      if ((local_bd0 < (rrArenaAllocator *)prVar18->m_unorderedStart) ||
         ((rrArenaAllocator *)(prVar18->m_size + prVar18->m_base) <= local_bd0)) goto LAB_14f3b82b2;
      plVar42 = (longlong *)((longlong)&local_bd0->m_base + uVar29);
      plVar42[1] = 1;
      plVar4 = (longlong *)prVar18->m_cur;
      if (plVar42 + 2 == plVar4) {
        while ((plVar4 != (longlong *)prVar18->m_unorderedStart && (plVar42[1] == 1))) {
          prVar18->m_cur = prVar18->m_cur + (-0x10 - *plVar42);
          plVar4 = (longlong *)prVar18->m_cur;
          plVar42 = plVar4 + -2;
        }
      }
    }
  }
  goto LAB_14f3b82bc;
code_r0x00014f3b6b77:
  if (local_ba0 < 2) {
    lVar38 = 1 - (longlong)local_ba0;
    if ((local_b30 < (ulonglong *)((longlong)local_ba0 + lVar38)) &&
       (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f
                                    ,"oo2::vector_storage_a<struct oo2::entropyset>::needmakefit",
                                    "newsize <= m_capacity"), iVar14 != 0)) {
      pcVar5 = (code *)swi(3);
      lVar16 = (*pcVar5)();
      return lVar16;
    }
    prVar18 = (rrArenaAllocator *)((longlong)prVar18 + lVar38);
  }
  else {
    prVar18 = (rrArenaAllocator *)&DAT_00000001;
  }
  puVar17 = local_af0;
  prVar39 = local_be0;
  uVar9 = _UNK_15289b288;
  uVar50 = ___xmm_0000000a0000000a0000000a0000000a;
  puVar30 = (uchar *)((longlong)local_be0 + (longlong)prVar18 * 0x408 + -8);
  *(undefined8 *)((longlong)local_be0 + (longlong)prVar18 * 0x408 + -0x408) =
       ___xmm_0000000a0000000a0000000a0000000a;
  *(undefined8 *)((longlong)local_be0 + (longlong)prVar18 * 0x408 + -0x400) = uVar9;
  puVar19 = (uchar *)((ulonglong)((longlong)local_be0 + (longlong)prVar18 * 0x408 + -0x3f8) &
                     0xfffffffffffffff0);
  do {
    *(undefined8 *)puVar19 = uVar50;
    *(undefined8 *)(puVar19 + 8) = uVar9;
    puVar19 = puVar19 + 0x10;
  } while (puVar19 < puVar30);
  uVar29 = 0xa00;
  puVar30[0] = '\0';
  puVar30[1] = '\n';
  puVar30[2] = '\0';
  puVar30[3] = '\0';
  local_ba0 = prVar18;
  if (local_af0 < 2) {
    lVar38 = 1 - (longlong)local_af0;
    if ((local_ae8 < (undefined1 *)((longlong)local_af0 + lVar38)) &&
       (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f
                                    ,
                                    "oo2::vector_storage_a<struct oo2::entropyset_codelens_U16_256>::needmakefit"
                                    ,"newsize <= m_capacity"), iVar14 != 0)) {
      pcVar5 = (code *)swi(3);
      lVar16 = (*pcVar5)();
      return lVar16;
    }
    local_af0 = (undefined1 *)((longlong)puVar17 + lVar38);
    uVar29 = (ulonglong)*(uint *)((longlong)prVar39 + (longlong)prVar18 * 0x408 + -8);
  }
  else {
    local_af0 = (undefined1 *)0x1;
  }
  prVar47 = local_bd8;
  entropysets_histo_to_codelens
            ((Histo256 *)((longlong)prVar39 + (longlong)prVar18 * 0x408 + -0x408),uVar29,
             (entropyset_codelens_U16_256 *)
             ((longlong)local_bd8 + (longlong)local_af0 * 0x200 + -0x200));
  lVar38 = (longlong)(int)local_be8;
  puVar54 = (ulonglong *)((longlong)((int)local_be8 * 3) << 2);
  local_b20._padding_ = (longlong)local_bc0;
  local_c00 = puVar54;
  local_b20.m_size = (ulong64)puVar54;
  if (local_bc0 == (rrArenaAllocator *)0x0) {
    prVar39 = (*g_fp_OodleCore_Plugin_MallocAligned)((long64)puVar54,0x10);
    if (prVar39 == (rrArenaAllocator *)0x0) {
      local_c08 = prVar39;
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed((long64)puVar54);
    }
  }
  else {
    prVar39 = rrArenaAllocator::Alloc(local_bc0,(long64)puVar54,0);
  }
  local_c08 = prVar39;
  local_b20._padding_ = (longlong)prVar39;
  if ((prVar39 == (rrArenaAllocator *)0x0) &&
     (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                  "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar14 != 0)) {
    pcVar5 = (code *)swi(3);
    lVar16 = (*pcVar5)();
    return lVar16;
  }
  prVar24 = (rrArenaAllocator *)((longlong)&prVar39->m_base + lVar38 * 4);
  local_b98 = (uchar *)((longlong)&prVar24->m_base + lVar38 * 4);
  lVar38 = 0;
  prVar52 = local_c08;
  local_bd0 = prVar24;
  if (0 < (longlong)local_be8) {
    lVar40 = 0;
    lVar55 = (longlong)prVar39 - (longlong)prVar24;
    lVar61 = (longlong)local_b98 - (longlong)prVar24;
    do {
      puVar30 = (uchar *)(lVar55 + (longlong)prVar24);
      puVar30[0] = 0xff;
      puVar30[1] = 0xff;
      puVar30[2] = 0xff;
      puVar30[3] = '\x7f';
      *(undefined4 *)&prVar24->m_base = 0;
      iVar14 = entropysets_self_codelen
                         ((Histo256 *)((longlong)local_bf8 + lVar40),
                          (ulonglong)((Histo256 *)((longlong)local_bf8 + lVar40))[1].counts[0]);
      *(int *)(lVar61 + (longlong)prVar24) = iVar14;
      lVar38 = lVar38 + 1;
      lVar40 = lVar40 + 0x408;
      prVar24 = (rrArenaAllocator *)((longlong)&prVar24->m_base + 4);
      puVar54 = local_c00;
      prVar47 = local_bd8;
      prVar18 = local_ba0;
      prVar52 = local_c08;
    } while (lVar38 < (longlong)local_be8);
  }
  while (local_c08 = prVar52, local_be8 != (undefined1 *)0x0) {
    uVar29 = 0;
    puVar54 = local_c00;
    if ((int)local_bc8[0] * 2 <= (int)prVar18) break;
    iVar14 = (int)prVar18 + -1;
    prVar39 = prVar52;
    prVar18 = local_ba0;
    if ((longlong)local_be8 < 1) break;
    local_b88 = (ulonglong *)(local_b98 + -(longlong)local_bd0);
    local_b08 = (rrArenaAllocator *)((longlong)local_bd0 - (longlong)prVar52);
    uVar41 = uVar29;
    uVar49 = uVar29;
    uVar56 = uVar29;
    do {
      iVar13 = entropysets_cross_codelen
                         ((Histo256 *)((longlong)local_bf8 + uVar56),
                          ((Histo256 *)((longlong)local_bf8 + uVar56))[1].counts[0],
                          (entropyset_codelens_U16_256 *)
                          ((longlong)iVar14 * 0x200 + (longlong)prVar47));
      prVar24 = local_ba0;
      piVar32 = (int *)((longlong)&prVar52->m_base + (longlong)&local_b08->m_base);
      iVar13 = iVar13 - *(int *)((longlong)piVar32 + (longlong)local_b88);
      uVar60 = (uint)prVar52->m_base;
      if (iVar13 < (int)uVar60) {
        *(int *)&prVar52->m_base = iVar13;
        *piVar32 = iVar14;
        uVar60 = (uint)prVar52->m_base;
      }
      uVar28 = (uint)uVar29;
      iVar13 = (int)uVar41;
      if ((int)uVar60 <= (int)uVar28) {
        iVar13 = (int)uVar49;
      }
      uVar49 = (ulonglong)iVar13;
      if ((int)uVar60 <= (int)uVar28) {
        uVar60 = uVar28;
      }
      uVar29 = (ulonglong)uVar60;
      uVar41 = uVar41 + 1;
      uVar56 = uVar56 + 0x408;
      prVar52 = (rrArenaAllocator *)((longlong)&prVar52->m_base + 4);
    } while ((longlong)uVar41 < (longlong)local_be8);
    prVar39 = local_c08;
    puVar54 = local_c00;
    prVar18 = local_ba0;
    if ((int)uVar60 < 0x2001) break;
    if ((local_b30 < (ulonglong *)((longlong)local_ba0 + 1)) &&
       (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f
                                    ,"oo2::vector_storage_a<struct oo2::entropyset>::needmakefit",
                                    "newsize <= m_capacity"), iVar14 != 0)) {
      pcVar5 = (code *)swi(3);
      lVar16 = (*pcVar5)();
      return lVar16;
    }
    prVar39 = local_be0;
    prVar18 = (rrArenaAllocator *)((longlong)prVar24 + 1);
    puVar30 = (uchar *)((longlong)prVar24 * 0x408 + (longlong)local_be0);
    local_ba0 = prVar18;
    if (puVar30 != (uchar *)0x0) {
      memset(puVar30,0,0x408);
    }
    puVar17 = local_af0;
    piVar20 = (index_and_count *)((longlong)local_bf8 + uVar49 * 0x408);
    lVar38 = 8;
    piVar31 = local_8a8;
    do {
      iVar6 = piVar20[1];
      *piVar31 = *piVar20;
      piVar31[1] = iVar6;
      iVar6 = piVar20[3];
      piVar31[2] = piVar20[2];
      piVar31[3] = iVar6;
      iVar6 = piVar20[5];
      piVar31[4] = piVar20[4];
      piVar31[5] = iVar6;
      iVar6 = piVar20[7];
      piVar31[6] = piVar20[6];
      piVar31[7] = iVar6;
      iVar6 = piVar20[9];
      piVar31[8] = piVar20[8];
      piVar31[9] = iVar6;
      iVar6 = piVar20[0xb];
      piVar31[10] = piVar20[10];
      piVar31[0xb] = iVar6;
      iVar6 = piVar20[0xd];
      piVar31[0xc] = piVar20[0xc];
      piVar31[0xd] = iVar6;
      piVar25 = piVar31 + 0x10;
      iVar6 = piVar20[0xf];
      piVar31[0xe] = piVar20[0xe];
      piVar31[0xf] = iVar6;
      piVar20 = piVar20 + 0x10;
      lVar38 = lVar38 + -1;
      piVar31 = piVar25;
    } while (lVar38 != 0);
    *piVar25 = *piVar20;
    piVar20 = local_8a8;
    lVar38 = 8;
    piVar31 = (index_and_count *)((longlong)prVar39 + (longlong)prVar18 * 0x408 + -0x408);
    do {
      iVar6 = piVar20[1];
      *piVar31 = *piVar20;
      piVar31[1] = iVar6;
      iVar6 = piVar20[3];
      piVar31[2] = piVar20[2];
      piVar31[3] = iVar6;
      iVar6 = piVar20[5];
      piVar31[4] = piVar20[4];
      piVar31[5] = iVar6;
      iVar6 = piVar20[7];
      piVar31[6] = piVar20[6];
      piVar31[7] = iVar6;
      iVar6 = piVar20[9];
      piVar31[8] = piVar20[8];
      piVar31[9] = iVar6;
      iVar6 = piVar20[0xb];
      piVar31[10] = piVar20[10];
      piVar31[0xb] = iVar6;
      iVar6 = piVar20[0xd];
      piVar31[0xc] = piVar20[0xc];
      piVar31[0xd] = iVar6;
      piVar25 = piVar31 + 0x10;
      iVar6 = piVar20[0xf];
      piVar31[0xe] = piVar20[0xe];
      piVar31[0xf] = iVar6;
      piVar20 = piVar20 + 0x10;
      lVar38 = lVar38 + -1;
      piVar31 = piVar25;
    } while (lVar38 != 0);
    *piVar25 = *piVar20;
    if ((local_ae8 < (undefined1 *)((longlong)local_af0 + 1)) &&
       (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f
                                    ,
                                    "oo2::vector_storage_a<struct oo2::entropyset_codelens_U16_256>::needmakefit"
                                    ,"newsize <= m_capacity"), iVar14 != 0)) {
      pcVar5 = (code *)swi(3);
      lVar16 = (*pcVar5)();
      return lVar16;
    }
    lVar38 = (longlong)puVar17 + 1;
    puVar30 = (uchar *)((longlong)puVar17 * 0x200 + (longlong)local_bd8);
    local_af0 = (undefined1 *)lVar38;
    if (puVar30 != (uchar *)0x0) {
      memset(puVar30,0,0x200);
    }
    prVar47 = local_bd8;
    entropysets_histo_to_codelens
              ((Histo256 *)((longlong)prVar39 + (longlong)prVar18 * 0x408 + -0x408),
               (ulonglong)*(uint *)((longlong)prVar18 * 0x408 + -8 + (longlong)prVar39),
               (entropyset_codelens_U16_256 *)((longlong)local_bd8 + lVar38 * 0x200 + -0x200));
    lVar40 = (longlong)local_be8 + -1;
    puVar21 = (undefined8 *)(lVar40 * 0x408 + (longlong)local_bf8);
    lVar38 = 8;
    puVar22 = local_498;
    do {
      uVar50 = puVar21[1];
      *(undefined8 *)puVar22 = *puVar21;
      *(undefined8 *)(puVar22 + 4) = uVar50;
      uVar50 = puVar21[3];
      *(undefined8 *)(puVar22 + 8) = puVar21[2];
      *(undefined8 *)(puVar22 + 0xc) = uVar50;
      uVar50 = puVar21[5];
      *(undefined8 *)(puVar22 + 0x10) = puVar21[4];
      *(undefined8 *)(puVar22 + 0x14) = uVar50;
      uVar50 = puVar21[7];
      *(undefined8 *)(puVar22 + 0x18) = puVar21[6];
      *(undefined8 *)(puVar22 + 0x1c) = uVar50;
      uVar50 = puVar21[9];
      *(undefined8 *)(puVar22 + 0x20) = puVar21[8];
      *(undefined8 *)(puVar22 + 0x24) = uVar50;
      uVar50 = puVar21[0xb];
      *(undefined8 *)(puVar22 + 0x28) = puVar21[10];
      *(undefined8 *)(puVar22 + 0x2c) = uVar50;
      uVar50 = puVar21[0xd];
      *(undefined8 *)(puVar22 + 0x30) = puVar21[0xc];
      *(undefined8 *)(puVar22 + 0x34) = uVar50;
      puVar2 = puVar22 + 0x40;
      uVar50 = puVar21[0xf];
      *(undefined8 *)(puVar22 + 0x38) = puVar21[0xe];
      *(undefined8 *)(puVar22 + 0x3c) = uVar50;
      puVar21 = puVar21 + 0x10;
      lVar38 = lVar38 + -1;
      puVar22 = puVar2;
    } while (lVar38 != 0);
    *(undefined8 *)puVar2 = *puVar21;
    puVar22 = local_498;
    lVar38 = 8;
    puVar21 = (undefined8 *)(uVar49 * 0x408 + (longlong)local_bf8);
    do {
      uVar50 = *(undefined8 *)(puVar22 + 4);
      *puVar21 = *(undefined8 *)puVar22;
      puVar21[1] = uVar50;
      uVar50 = *(undefined8 *)(puVar22 + 0xc);
      puVar21[2] = *(undefined8 *)(puVar22 + 8);
      puVar21[3] = uVar50;
      uVar50 = *(undefined8 *)(puVar22 + 0x14);
      puVar21[4] = *(undefined8 *)(puVar22 + 0x10);
      puVar21[5] = uVar50;
      uVar50 = *(undefined8 *)(puVar22 + 0x1c);
      puVar21[6] = *(undefined8 *)(puVar22 + 0x18);
      puVar21[7] = uVar50;
      uVar50 = *(undefined8 *)(puVar22 + 0x24);
      puVar21[8] = *(undefined8 *)(puVar22 + 0x20);
      puVar21[9] = uVar50;
      uVar50 = *(undefined8 *)(puVar22 + 0x2c);
      puVar21[10] = *(undefined8 *)(puVar22 + 0x28);
      puVar21[0xb] = uVar50;
      uVar50 = *(undefined8 *)(puVar22 + 0x34);
      puVar21[0xc] = *(undefined8 *)(puVar22 + 0x30);
      puVar21[0xd] = uVar50;
      puVar35 = puVar21 + 0x10;
      uVar50 = *(undefined8 *)(puVar22 + 0x3c);
      puVar21[0xe] = *(undefined8 *)(puVar22 + 0x38);
      puVar21[0xf] = uVar50;
      puVar22 = puVar22 + 0x40;
      lVar38 = lVar38 + -1;
      puVar21 = puVar35;
    } while (lVar38 != 0);
    *puVar35 = *(undefined8 *)puVar22;
    local_be8 = (undefined1 *)((longlong)local_be8 + -1);
    *(undefined4 *)(local_b98 + uVar49 * 4) = *(undefined4 *)(local_b98 + lVar40 * 4);
    *(undefined4 *)((longlong)&local_c08->m_base + uVar49 * 4) =
         *(undefined4 *)((longlong)local_c08 + lVar40 * 4);
    *(undefined4 *)((longlong)&local_bd0->m_base + uVar49 * 4) =
         *(undefined4 *)((longlong)local_bd0 + lVar40 * 4);
    prVar39 = local_c08;
    puVar54 = local_c00;
    prVar52 = local_c08;
  }
  prVar24 = local_bd0;
  prVar47 = local_be0;
  lVar40 = 0;
  lVar38 = lVar40;
  if (0 < (longlong)local_be8) {
    do {
      pHVar45 = (Histo256 *)
                ((longlong)*(int *)((longlong)&prVar24->m_base + lVar38 * 4) * 0x408 +
                (longlong)prVar47);
      histo_add(pHVar45,pHVar45,(Histo256 *)((longlong)local_bf8 + lVar40));
      pHVar45[1].counts[0] = pHVar45[1].counts[0] + *(int *)(lVar40 + 0x400 + (longlong)local_bf8);
      lVar38 = lVar38 + 1;
      lVar40 = lVar40 + 0x408;
      puVar54 = local_c00;
    } while (lVar38 < (longlong)local_be8);
  }
  prVar52 = local_b28;
  prVar24 = local_b48;
  prVar47 = local_bb8;
  local_bf8 = local_be0;
  local_bf0 = local_b30;
  local_b80 = local_b28;
  local_ad8.m_pAlloc = local_bc0;
  local_b78 = local_bb8;
  local_ad8.m_ptr = local_b68;
  local_b70 = local_b48;
  local_ad8.m_size = (long64)local_aa8;
  local_ba0 = (rrArenaAllocator *)0x0;
  local_bb0 = (rrArenaAllocator *)0x0;
  local_ba8 = (rrArenaAllocator *)0x0;
  local_be8 = (undefined1 *)prVar18;
  if (prVar39 != (rrArenaAllocator *)0x0) {
    if (local_bc0 == (rrArenaAllocator *)0x0) {
LAB_14f3b72fd:
      (*g_fp_OodleCore_Plugin_Free)(prVar39);
    }
    else {
      uVar29 = (ulonglong)((longlong)puVar54 + 0xfU) & 0xfffffffffffffff0;
      if ((rrArenaAllocator *)local_bc0->m_unorderedStart == (rrArenaAllocator *)0x0) {
        if ((uchar *)((longlong)&prVar39->m_base + uVar29) != (uchar *)local_bc0->m_cur)
        goto LAB_14f3b72fd;
        local_bc0->m_cur = (longlong)local_bc0->m_cur - uVar29;
      }
      else {
        if ((prVar39 < (rrArenaAllocator *)local_bc0->m_unorderedStart) ||
           ((rrArenaAllocator *)(local_bc0->m_size + local_bc0->m_base) <= prVar39))
        goto LAB_14f3b72fd;
        plVar42 = (longlong *)((longlong)&prVar39->m_base + uVar29);
        plVar42[1] = 1;
        plVar4 = (longlong *)local_bc0->m_cur;
        if (plVar42 + 2 == plVar4) {
          while ((plVar4 != (longlong *)local_bc0->m_unorderedStart && (plVar42[1] == 1))) {
            local_bc0->m_cur = local_bc0->m_cur + (-0x10 - *plVar42);
            plVar4 = (longlong *)local_bc0->m_cur;
            plVar42 = plVar4 + -2;
          }
        }
      }
    }
    local_b20._padding_ = 0;
  }
  if (prVar47 != (rrArenaAllocator *)0x0) {
    if (prVar52 == (rrArenaAllocator *)0x0) {
LAB_14f3b73a2:
      (*g_fp_OodleCore_Plugin_Free)(prVar47);
    }
    else {
      uVar29 = (ulonglong)((longlong)&prVar24->m_cur + 7U) & 0xfffffffffffffff0;
      if ((rrArenaAllocator *)prVar52->m_unorderedStart == (rrArenaAllocator *)0x0) {
        if ((uchar *)((longlong)&prVar47->m_base + uVar29) != (uchar *)prVar52->m_cur)
        goto LAB_14f3b73a2;
        prVar52->m_cur = (longlong)prVar52->m_cur - uVar29;
      }
      else {
        if ((prVar47 < (rrArenaAllocator *)prVar52->m_unorderedStart) ||
           ((rrArenaAllocator *)(prVar52->m_size + prVar52->m_base) <= prVar47)) goto LAB_14f3b73a2;
        plVar42 = (longlong *)((longlong)&prVar47->m_base + uVar29);
        plVar42[1] = 1;
        plVar4 = (longlong *)prVar52->m_cur;
        if (plVar42 + 2 == plVar4) {
          while ((plVar4 != (longlong *)prVar52->m_unorderedStart && (plVar42[1] == 1))) {
            prVar52->m_cur = prVar52->m_cur + (-0x10 - *plVar42);
            plVar4 = (longlong *)prVar52->m_cur;
            plVar42 = plVar4 + -2;
          }
        }
      }
    }
    local_b78 = (rrArenaAllocator *)0x0;
  }
  fVar12 = local_bc8[0];
  fVar63 = __real_40000000;
  prVar39 = (rrArenaAllocator *)0x0;
  local_af0 = (undefined1 *)0x0;
  local_bb0 = prVar39;
  local_ba8 = prVar39;
  local_ba0 = prVar39;
  if ((int)local_be8 != 0) {
    prVar18 = local_bc0;
    if ((int)local_bc8[0] < (int)local_be8) {
      p_Var23 = entropysets_order0_codelen_bits_cpudetect();
      prVar18 = local_bc0;
      merge_entropysets((vector_a<oo2::entropyset> *)&local_bf8,fVar63,0.0,(int)fVar12,p_Var23,
                        local_bc0);
    }
    if ((int)local_be8 != 1) {
      _eh_vector_constructor_iterator_
                (local_a28,0x18,0x10,
                 vector_a<oo2::indexed_interval>::vector_a<oo2::indexed_interval>,
                 vector_a<oo2::indexed_interval>::~vector_a<oo2::indexed_interval>);
      lVar38 = ((longlong)((longlong)&local_ac0->m_base + param_5) * 3 & 0x3fffffffffffffffU) << 1;
      local_a68.m_pAlloc = prVar18;
      local_a68.m_ptr = prVar39;
      local_a68.m_size = lVar38;
      if (prVar18 == (rrArenaAllocator *)0x0) {
        pvVar15 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar38,0x10);
        if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          Oodle_Core_Malloc_Failed(lVar38);
        }
      }
      else {
        pvVar15 = rrArenaAllocator::Alloc(prVar18,lVar38,0);
      }
      local_a68.m_ptr = pvVar15;
      if ((pvVar15 == (void *)0x0) &&
         (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x1bc,
                                      "oo2::rrScopeArenaAlloc::Alloc","m_ptr != NULL"), iVar14 != 0)
         ) {
        pcVar5 = (code *)swi(3);
        lVar16 = (*pcVar5)();
        return lVar16;
      }
      prVar47 = local_b90;
      prVar18 = local_bc0;
      plVar42 = local_a28;
      prVar24 = prVar39;
      do {
        if (local_a98[(longlong)prVar24] != 0) {
          uVar29 = ((longlong)(local_a98[(longlong)prVar24] + 1) / 2) * 0xc;
          *plVar42 = (longlong)pvVar15;
          plVar42[1] = uVar29 / 0xc;
          pvVar15 = (void *)((longlong)pvVar15 + uVar29);
        }
        prVar24 = (rrArenaAllocator *)((longlong)&prVar24->m_base + 1);
        plVar42 = plVar42 + 3;
      } while ((longlong)prVar24 < param_5);
      fVar12 = (float)((int)(longlong)
                            (param_7 * __real_425c0000 * __real_41000000 * __real_43800000) + 0xf00)
      ;
      local_c10[0] = 3.58718e-41;
      if ((uint)fVar12 < 0x63ff) {
        local_c10[0] = fVar12;
      }
      lVar38 = (longlong)local_b90 * 9;
      local_a90.m_pAlloc = local_bc0;
      local_b60 = prVar39;
      local_b58 = prVar39;
      local_b50 = prVar39;
      local_a90.m_size = lVar38;
      if (local_bc0 == (rrArenaAllocator *)0x0) {
        local_bb0 = prVar39;
        local_ba8 = prVar39;
        local_ba0 = prVar39;
        prVar24 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar38,0x10);
        if (prVar24 == (rrArenaAllocator *)0x0) {
          local_bd0 = prVar24;
                    /* WARNING: Subroutine does not return */
          Oodle_Core_Malloc_Failed(lVar38);
        }
      }
      else {
        local_bb0 = prVar39;
        local_ba8 = prVar39;
        local_ba0 = prVar39;
        prVar24 = rrArenaAllocator::Alloc(local_bc0,lVar38,0);
      }
      local_bd0 = prVar24;
      local_a90.m_ptr = prVar24;
      if ((prVar24 == (rrArenaAllocator *)0x0) &&
         (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                      "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
         iVar14 != 0)) {
        pcVar5 = (code *)swi(3);
        lVar16 = (*pcVar5)();
        return lVar16;
      }
      local_ba8 = (rrArenaAllocator *)((ulonglong)prVar47 & 0x1fffffffffffffff);
      local_b60 = (rrArenaAllocator *)(&prVar24->m_base + (longlong)prVar47);
      local_b58 = prVar47;
      local_b20._padding_ = 0;
      uVar29 = (ulonglong)(int)((int)local_bc8[0] + 8U & 0xfffffff8);
      puVar54 = (ulonglong *)(uVar29 << 9);
      local_b20._padding_ = (longlong)prVar18;
      local_bb0 = prVar24;
      local_b88 = puVar54;
      local_b80 = prVar39;
      local_b78 = prVar39;
      local_b70 = prVar39;
      local_b20.m_size = (ulong64)puVar54;
      local_b08 = local_ba8;
      if (prVar18 == (rrArenaAllocator *)0x0) {
        prVar18 = (*g_fp_OodleCore_Plugin_MallocAligned)((long64)puVar54,0x10);
        if (prVar18 == (rrArenaAllocator *)0x0) {
          local_c08 = prVar18;
                    /* WARNING: Subroutine does not return */
          Oodle_Core_Malloc_Failed((long64)puVar54);
        }
      }
      else {
        prVar18 = rrArenaAllocator::Alloc(prVar18,(long64)puVar54,0);
      }
      local_c08 = prVar18;
      local_b20._padding_ = (longlong)prVar18;
      if ((prVar18 == (rrArenaAllocator *)0x0) &&
         (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x1bc,
                                      "oo2::rrScopeArenaAlloc::Alloc","m_ptr != NULL"), iVar14 != 0)
         ) {
        pcVar5 = (code *)swi(3);
        lVar16 = (*pcVar5)();
        return lVar16;
      }
      local_b78 = (rrArenaAllocator *)((uVar29 & 0x7fffffffffffff) << 8);
      local_c00 = (ulonglong *)((ulonglong)local_c00 & 0xffffffff00000000);
      prVar47 = prVar39;
      puVar17 = (undefined1 *)0x0;
      local_b80 = prVar18;
      local_aa8 = local_b78;
      while( true ) {
        puVar57 = local_be8;
        if (puVar17 <= local_be8) {
          lVar38 = (longlong)local_be8 - (longlong)puVar17;
          if ((local_ae8 < puVar17 + lVar38) &&
             (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                          ,0x3f,
                                          "oo2::vector_storage_a<struct oo2::entropyset_codelens_U16_256>::needmakefit"
                                          ,"newsize <= m_capacity"), iVar14 != 0)) {
            pcVar5 = (code *)swi(3);
            lVar16 = (*pcVar5)();
            return lVar16;
          }
          puVar57 = puVar17 + lVar38;
        }
        prVar24 = local_bd8;
        puVar17 = local_be8 + -1;
        local_af0 = puVar57;
        if (-1 < (longlong)puVar17) {
          lVar38 = (longlong)puVar17 * 0x408;
          piVar20 = (index_and_count *)((longlong)puVar17 * 0x200 + (longlong)local_bd8);
          do {
            pHVar45 = (Histo256 *)((longlong)&local_bf8->m_base + lVar38);
            entropysets_histo_to_codelens
                      (pHVar45,(ulonglong)pHVar45[1].counts[0],
                       (entropyset_codelens_U16_256 *)piVar20);
            pHVar45 = (Histo256 *)((longlong)&local_bf8->m_base + lVar38);
            uVar60 = entropysets_cross_codelen
                               (pHVar45,pHVar45[1].counts[0],(entropyset_codelens_U16_256 *)piVar20)
            ;
            if ((uint)(*(int *)((longlong)&local_bf8[0x15].m_cur_max + lVar38) * 0x7f3) <= uVar60) {
              piVar31 = (index_and_count *)((longlong)prVar24 + (longlong)puVar57 * 0x200 + -0x200);
              lVar40 = 4;
              piVar25 = local_8a8;
              do {
                iVar6 = piVar31[1];
                *piVar25 = *piVar31;
                piVar25[1] = iVar6;
                iVar6 = piVar31[3];
                piVar25[2] = piVar31[2];
                piVar25[3] = iVar6;
                iVar6 = piVar31[5];
                piVar25[4] = piVar31[4];
                piVar25[5] = iVar6;
                iVar6 = piVar31[7];
                piVar25[6] = piVar31[6];
                piVar25[7] = iVar6;
                iVar6 = piVar31[9];
                piVar25[8] = piVar31[8];
                piVar25[9] = iVar6;
                iVar6 = piVar31[0xb];
                piVar25[10] = piVar31[10];
                piVar25[0xb] = iVar6;
                iVar6 = piVar31[0xd];
                piVar25[0xc] = piVar31[0xc];
                piVar25[0xd] = iVar6;
                iVar6 = piVar31[0xf];
                piVar25[0xe] = piVar31[0xe];
                piVar25[0xf] = iVar6;
                piVar31 = piVar31 + 0x10;
                lVar40 = lVar40 + -1;
                piVar25 = piVar25 + 0x10;
              } while (lVar40 != 0);
              piVar31 = local_8a8;
              lVar40 = 4;
              piVar25 = piVar20;
              do {
                iVar6 = piVar31[1];
                *piVar25 = *piVar31;
                piVar25[1] = iVar6;
                iVar6 = piVar31[3];
                piVar25[2] = piVar31[2];
                piVar25[3] = iVar6;
                iVar6 = piVar31[5];
                piVar25[4] = piVar31[4];
                piVar25[5] = iVar6;
                iVar6 = piVar31[7];
                piVar25[6] = piVar31[6];
                piVar25[7] = iVar6;
                iVar6 = piVar31[9];
                piVar25[8] = piVar31[8];
                piVar25[9] = iVar6;
                iVar6 = piVar31[0xb];
                piVar25[10] = piVar31[10];
                piVar25[0xb] = iVar6;
                iVar6 = piVar31[0xd];
                piVar25[0xc] = piVar31[0xc];
                piVar25[0xd] = iVar6;
                iVar6 = piVar31[0xf];
                piVar25[0xe] = piVar31[0xe];
                piVar25[0xf] = iVar6;
                piVar31 = piVar31 + 0x10;
                lVar40 = lVar40 + -1;
                piVar25 = piVar25 + 0x10;
              } while (lVar40 != 0);
              puVar57 = puVar57 + -1;
              local_af0 = puVar57;
            }
            lVar38 = lVar38 + -0x408;
            piVar20 = piVar20 + -0x40;
            puVar17 = puVar17 + -1;
            prVar18 = local_c08;
          } while (-1 < (longlong)puVar17);
        }
        puVar17 = puVar57;
        if (puVar57 < (undefined1 *)0x3f) {
          if ((local_ae8 < puVar57 + 1) &&
             (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                          ,0x3f,
                                          "oo2::vector_storage_a<struct oo2::entropyset_codelens_U16_256>::needmakefit"
                                          ,"newsize <= m_capacity"), iVar14 != 0)) {
            pcVar5 = (code *)swi(3);
            lVar16 = (*pcVar5)();
            return lVar16;
          }
          puVar17 = puVar57 + 1;
          puVar30 = (uchar *)((longlong)puVar57 * 0x200 + (longlong)prVar24);
          local_af0 = puVar17;
          if (puVar30 != (uchar *)0x0) {
            memset(puVar30,0,0x200);
          }
          uVar9 = _UNK_1531dfba8;
          uVar50 = ___xmm_07f307f307f307f307f307f307f307f3;
          puVar19 = (uchar *)((longlong)puVar17 * 0x200 + (longlong)prVar24);
          *(undefined8 *)(puVar19 + -0x200) = ___xmm_07f307f307f307f307f307f307f307f3;
          *(undefined8 *)(puVar19 + -0x1f8) = uVar9;
          puVar30 = (uchar *)((ulonglong)(puVar19 + -0x1f0) & 0xfffffffffffffff0);
          do {
            *(undefined8 *)puVar30 = uVar50;
            *(undefined8 *)(puVar30 + 8) = uVar9;
            puVar30 = puVar30 + 0x10;
          } while (puVar30 < puVar19);
        }
        iVar14 = (int)puVar17;
        puVar17 = (undefined1 *)(longlong)iVar14;
        local_bb8 = (rrArenaAllocator *)CONCAT44(local_bb8._4_4_,iVar14);
        uVar60 = iVar14 + 7U & 0xfffffff8;
        local_b98 = (uchar *)(CONCAT44(local_b98._4_4_,iVar14 + 7U) & 0xfffffffffffffff8);
        prVar24 = (rrArenaAllocator *)(longlong)(int)(uVar60 << 8);
        if (prVar47 <= prVar24) {
          if ((local_aa8 <
               (rrArenaAllocator *)((longlong)prVar47 + ((longlong)prVar24 - (longlong)prVar47))) &&
             (iVar13 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                          ,0x3f,"oo2::vector_storage_a<unsigned short>::needmakefit"
                                          ,"newsize <= m_capacity"), iVar13 != 0)) {
            pcVar5 = (code *)swi(3);
            lVar16 = (*pcVar5)();
            return lVar16;
          }
          prVar24 = (rrArenaAllocator *)
                    ((longlong)prVar47 + ((longlong)prVar24 - (longlong)prVar47));
        }
        if (prVar24 == (rrArenaAllocator *)0x0) {
          prVar18 = (rrArenaAllocator *)0x0;
        }
        lVar38 = 0x100;
        prVar47 = prVar18;
        prVar52 = local_bd8;
        do {
          lVar40 = 0;
          prVar34 = prVar52;
          if (0 < (longlong)puVar17) {
            do {
              *(short *)((longlong)&prVar47->m_base + lVar40 * 2) = (short)prVar34->m_base;
              lVar40 = lVar40 + 1;
              prVar34 = (rrArenaAllocator *)&prVar34[10].m_unorderedStart;
            } while (lVar40 < (longlong)puVar17);
          }
          if (iVar14 < (int)uVar60) {
            puVar30 = (uchar *)((longlong)&prVar47->m_base + (longlong)puVar17 * 2);
            for (lVar40 = (longlong)(int)(uVar60 - iVar14); lVar40 != 0; lVar40 = lVar40 + -1) {
              puVar30[0] = '\0';
              puVar30[1] = '\x0e';
              puVar30 = puVar30 + 2;
            }
          }
          prVar47 = (rrArenaAllocator *)((longlong)&prVar47->m_base + (longlong)(int)uVar60 * 2);
          prVar52 = (rrArenaAllocator *)((longlong)&prVar52->m_base + 2);
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
        local_af0 = (undefined1 *)0x0;
        local_b70 = prVar24;
        local_b68 = puVar17;
        local_b48 = prVar18;
        if (local_be8 <= puVar17) {
          lVar38 = (longlong)puVar17 - (longlong)local_be8;
          if ((local_bf0 < local_be8 + lVar38) &&
             (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                          ,0x3f,
                                          "oo2::vector_storage_a<struct oo2::entropyset>::needmakefit"
                                          ,"newsize <= m_capacity"), iVar14 != 0)) {
            pcVar5 = (code *)swi(3);
            lVar16 = (*pcVar5)();
            return lVar16;
          }
          puVar17 = local_be8 + lVar38;
        }
        prVar18 = local_bf8;
        if (puVar17 == (undefined1 *)0x0) {
          prVar18 = (rrArenaAllocator *)0x0;
        }
        local_be8 = puVar17;
        memset(prVar18,0,(longlong)puVar17 * 0x408);
        local_c14 = 0.0;
        plVar42 = local_a28;
        prVar18 = (rrArenaAllocator *)((longlong)local_ae0 - (longlong)local_a98);
        local_b40 = (longlong *)param_5;
        local_b30 = local_a98;
        local_be0 = prVar18;
        do {
          pbVar58 = *(byte **)((longlong)&prVar18->m_base + (longlong)local_b30);
          prVar47 = (rrArenaAllocator *)*local_b30;
          if (prVar47 != (rrArenaAllocator *)0x0) {
            prVar18 = prVar47;
            if (prVar39 <= prVar47) {
              if ((local_b08 <
                   (rrArenaAllocator *)((longlong)prVar39 + ((longlong)prVar47 - (longlong)prVar39))
                  ) && (iVar14 = rrDisplayAssertion(
                                                  "v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                                  ,0x3f,
                                                  "oo2::vector_storage_a<unsigned __int64>::needmakefit"
                                                  ,"newsize <= m_capacity"), iVar14 != 0)) {
                pcVar5 = (code *)swi(3);
                lVar16 = (*pcVar5)();
                return lVar16;
              }
              prVar18 = (rrArenaAllocator *)
                        ((longlong)prVar39 + ((longlong)prVar47 - (longlong)prVar39));
            }
            prVar39 = prVar47;
            local_ba0 = prVar18;
            if (local_b50 <= prVar47) {
              lVar38 = (longlong)prVar47 - (longlong)local_b50;
              if ((local_b90 < (rrArenaAllocator *)(lVar38 + (longlong)local_b50)) &&
                 (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                              ,0x3f,
                                              "oo2::vector_storage_a<unsigned char>::needmakefit",
                                              "newsize <= m_capacity"), iVar14 != 0)) {
                pcVar5 = (code *)swi(3);
                lVar16 = (*pcVar5)();
                return lVar16;
              }
              prVar39 = (rrArenaAllocator *)((longlong)local_b50 + lVar38);
            }
            prVar24 = local_bd0;
            if (prVar18 == (rrArenaAllocator *)0x0) {
              prVar24 = (rrArenaAllocator *)0x0;
            }
            prVar52 = local_b60;
            if (prVar39 == (rrArenaAllocator *)0x0) {
              prVar52 = (rrArenaAllocator *)0x0;
            }
            uVar27 = 0x7fff;
            bVar37 = *pbVar58;
            iVar14 = -1;
            uVar48 = 0xff;
            iVar13 = 0;
            if (0 < (int)(uint)local_bb8) {
              puVar22 = local_498;
              uVar33 = uVar27;
              do {
                uVar27 = *(ushort *)
                          ((longlong)local_b48 +
                           ((longlong)(int)((uint)bVar37 * (int)(float)local_b98) * 2 -
                           (longlong)local_498) + (longlong)puVar22);
                *puVar22 = uVar27;
                iVar11 = iVar13;
                if (uVar33 <= uVar27) {
                  uVar27 = uVar33;
                  iVar11 = iVar14;
                }
                iVar14 = iVar11;
                uVar48 = (undefined1)iVar14;
                iVar13 = iVar13 + 1;
                puVar22 = puVar22 + 1;
                uVar33 = uVar27;
              } while (iVar13 < (int)(uint)local_bb8);
            }
            if ((int)(uint)local_bb8 < (int)(float)local_b98) {
              puVar22 = local_498 + (longlong)local_b68;
              for (lVar38 = (longlong)(int)((int)(float)local_b98 - (uint)local_bb8); lVar38 != 0;
                  lVar38 = lVar38 + -1) {
                *puVar22 = 0xe00;
                puVar22 = puVar22 + 1;
              }
            }
            prVar24->m_base = 0;
            *(undefined1 *)&prVar52->m_base = uVar48;
            local_b50 = prVar39;
            local_b28 = prVar24;
            local_aa0 = prVar52;
            if (((byte)g_rrCPUx86_feature_flags & 8) == 0) {
              newlz_multiarrays_trellis_core_sse2
                        (&prVar24->m_base,(uchar *)prVar52,pbVar58 + 1,pbVar58,
                         pbVar58 + (longlong)&prVar47->m_base,local_498,(ushort *)local_b48,
                         (uint)local_bb8,(int)(float)local_b98,uVar27,SUB42(local_c10[0],0));
            }
            else {
              newlz_multiarrays_trellis_core_sse4
                        (&prVar24->m_base,(uchar *)prVar52,pbVar58 + 1,pbVar58,
                         pbVar58 + (longlong)&prVar47->m_base,local_498,(ushort *)local_b48,
                         (uint)local_bb8,(int)(float)local_b98,uVar27,SUB42(local_c10[0],0));
            }
            local_c14 = (float)((int)local_c14 + 1);
            if ((int)local_c00 == 2) {
              prVar39 = (rrArenaAllocator *)&prVar47[-1].field_0x2f;
              bVar37 = *(byte *)((longlong)&prVar52->m_base + (longlong)prVar39);
              uVar60 = (uint)bVar37;
              uVar29 = 1L << (bVar37 & 0x3f);
              if (-1 < (longlong)prVar39) {
                pbVar58 = &prVar52[-1].field_0x2f + (longlong)prVar39;
                prVar18 = local_b28;
                fVar12 = local_c14;
                do {
                  if (((&prVar18->m_base)[(longlong)prVar39] & uVar29) != 0) {
                    lVar38 = plVar42[2];
                    if (((ulonglong)plVar42[1] < lVar38 + 1U) &&
                       (iVar14 = rrDisplayAssertion(
                                                  "v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                                  ,0x3f,
                                                  "oo2::vector_storage_a<struct oo2::indexed_interval>::needmakefit"
                                                  ,"newsize <= m_capacity"), fVar12 = local_c14,
                       iVar14 != 0)) {
                      pcVar5 = (code *)swi(3);
                      lVar16 = (*pcVar5)();
                      return lVar16;
                    }
                    lVar40 = *plVar42;
                    plVar42[2] = plVar42[2] + 1;
                    lVar55 = plVar42[2];
                    puVar21 = (undefined8 *)(lVar40 + lVar38 * 0xc);
                    if (puVar21 != (undefined8 *)0x0) {
                      *puVar21 = 0;
                      *(undefined4 *)(puVar21 + 1) = 0;
                      lVar55 = plVar42[2];
                      lVar40 = *plVar42;
                    }
                    *(int *)(lVar40 + -0xc + lVar55 * 0xc) = (int)prVar39;
                    *(int *)(*plVar42 + -8 + plVar42[2] * 0xc) = (int)prVar47 - (int)prVar39;
                    *(uint *)(*plVar42 + -4 + plVar42[2] * 0xc) = uVar60;
                    uVar60 = (uint)*pbVar58;
                    uVar29 = 1L << (*pbVar58 & 0x3f);
                    local_c14 = (float)((int)fVar12 + 1);
                    prVar18 = local_b28;
                    prVar47 = prVar39;
                    fVar12 = local_c14;
                  }
                  pbVar58 = pbVar58 + -1;
                  prVar39 = (rrArenaAllocator *)&prVar39[-1].field_0x2f;
                  prVar52 = local_aa0;
                } while (-1 < (longlong)prVar39);
              }
              lVar38 = plVar42[2];
              if (((ulonglong)plVar42[1] < lVar38 + 1U) &&
                 (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                              ,0x3f,
                                              "oo2::vector_storage_a<struct oo2::indexed_interval>::needmakefit"
                                              ,"newsize <= m_capacity"), iVar14 != 0)) {
                pcVar5 = (code *)swi(3);
                lVar16 = (*pcVar5)();
                return lVar16;
              }
              lVar40 = *plVar42;
              plVar42[2] = plVar42[2] + 1;
              lVar55 = plVar42[2];
              puVar21 = (undefined8 *)(lVar40 + lVar38 * 0xc);
              if (puVar21 != (undefined8 *)0x0) {
                *puVar21 = 0;
                *(undefined4 *)(puVar21 + 1) = 0;
                lVar55 = plVar42[2];
                lVar40 = *plVar42;
              }
              *(undefined4 *)(lVar40 + -0xc + lVar55 * 0xc) = 0;
              *(int *)(*plVar42 + -8 + plVar42[2] * 0xc) = (int)prVar47;
              *(uint *)(*plVar42 + -4 + plVar42[2] * 0xc) =
                   (uint)(byte)(&prVar47[-1].field_0x2f)[(longlong)prVar52];
              puVar35 = (undefined8 *)*plVar42;
              puVar21 = (undefined8 *)((longlong)puVar35 + (plVar42[2] + -1) * 0xc);
              prVar18 = local_be0;
              prVar39 = local_ba0;
              if (puVar35 < puVar21) {
                do {
                  uVar50 = *puVar35;
                  uVar3 = *(undefined4 *)(puVar35 + 1);
                  *puVar35 = *puVar21;
                  *(undefined4 *)(puVar35 + 1) = *(undefined4 *)(puVar21 + 1);
                  *puVar21 = uVar50;
                  *(undefined4 *)(puVar21 + 1) = uVar3;
                  puVar35 = (undefined8 *)((longlong)puVar35 + 0xc);
                  puVar21 = (undefined8 *)((longlong)puVar21 - 0xc);
                } while (puVar35 < puVar21);
              }
            }
            else {
              lVar38 = (longlong)(int)prVar47 + -1;
              uVar60 = (uint)*(byte *)(lVar38 + (longlong)prVar52);
              uVar29 = 1L << (*(byte *)(lVar38 + (longlong)prVar52) & 0x3f);
              prVar18 = local_be0;
              prVar39 = local_ba0;
              if (-1 < lVar38) {
                pbVar46 = pbVar58 + lVar38;
                do {
                  piVar32 = (int *)((longlong)local_bf8 +
                                   ((longlong)(int)uVar60 * 0x102 + (ulonglong)*pbVar46) * 4);
                  *piVar32 = *piVar32 + 1;
                  piVar32 = (int *)((longlong)(int)uVar60 * 0x408 + 0x400 + (longlong)local_bf8);
                  *piVar32 = *piVar32 + 1;
                  if (((&prVar24->m_base)[lVar38] & uVar29) != 0) {
                    uVar60 = (uint)pbVar46[(longlong)prVar52 + (-1 - (longlong)pbVar58)];
                    uVar29 = 1L << (pbVar46[(longlong)prVar52 + (-1 - (longlong)pbVar58)] & 0x3f);
                    local_c14 = (float)((int)local_c14 + 1);
                  }
                  pbVar46 = pbVar46 + -1;
                  lVar38 = lVar38 + -1;
                } while (-1 < lVar38);
              }
            }
          }
          prVar47 = local_bc0;
          iVar14 = 0;
          local_b30 = local_b30 + 1;
          plVar42 = plVar42 + 3;
          local_b40 = (longlong *)((longlong)local_b40 + -1);
        } while (local_b40 != (longlong *)0x0);
        iVar13 = (int)local_c00;
        if ((int)local_c00 == 2) break;
        remove_unused_entropysets((vector_a<oo2::entropyset> *)&local_bf8);
        prVar18 = local_bc0;
        if (((int)local_be8 == 1) ||
           (merge_entropysets_for_entropy_arrays
                      ((vector_a<oo2::entropyset> *)&local_bf8,param_7,local_b38,(int)local_bc8[0],
                       local_bc0), (int)local_be8 == 1)) goto LAB_14f3b8165;
        if (4000 < (int)local_c14) {
          uVar60 = ((uint)local_c10[0] & 0xffff) * 2;
          if (uVar60 < 0x63ff) {
            local_c10[0] = (float)CONCAT22(local_c10[0]._2_2_,(short)uVar60);
            iVar13 = iVar13 + -1;
          }
          else {
            local_c10[0] = (float)CONCAT22(local_c10[0]._2_2_,0x63ff);
          }
        }
        local_c00 = (ulonglong *)CONCAT44(local_c00._4_4_,iVar13 + 1);
        prVar18 = local_c08;
        prVar47 = local_b70;
        puVar17 = local_af0;
      }
      if (local_c08 == (rrArenaAllocator *)0x0) goto LAB_14f3b83aa;
      if (local_bc0 == (rrArenaAllocator *)0x0) {
LAB_14f3b839d:
        (*g_fp_OodleCore_Plugin_Free)(local_c08);
        goto LAB_14f3b83a6;
      }
      uVar29 = (ulonglong)((longlong)local_b88 + 0xf) & 0xfffffffffffffff0;
      if ((rrArenaAllocator *)local_bc0->m_unorderedStart == (rrArenaAllocator *)0x0) {
        if ((uchar *)((longlong)&local_c08->m_base + uVar29) == (uchar *)local_bc0->m_cur) {
          local_bc0->m_cur = (longlong)local_bc0->m_cur - uVar29;
          goto LAB_14f3b83a6;
        }
        goto LAB_14f3b839d;
      }
      if ((local_c08 < (rrArenaAllocator *)local_bc0->m_unorderedStart) ||
         ((rrArenaAllocator *)(local_bc0->m_size + local_bc0->m_base) <= local_c08))
      goto LAB_14f3b839d;
      plVar42 = (longlong *)((longlong)&local_c08->m_base + uVar29);
      plVar42[1] = 1;
      plVar4 = (longlong *)local_bc0->m_cur;
      if (plVar42 + 2 == plVar4) {
        while ((plVar4 != (longlong *)local_bc0->m_unorderedStart && (plVar42[1] == 1))) {
          local_bc0->m_cur = local_bc0->m_cur + (-0x10 - *plVar42);
          plVar4 = (longlong *)local_bc0->m_cur;
          plVar42 = plVar4 + -2;
        }
      }
LAB_14f3b83a6:
      local_b20._padding_ = 0;
LAB_14f3b83aa:
      local_b70 = (rrArenaAllocator *)0x0;
      local_b80 = (rrArenaAllocator *)0x0;
      local_b78 = (rrArenaAllocator *)0x0;
      if (local_bd0 != (rrArenaAllocator *)0x0) {
        if (prVar47 == (rrArenaAllocator *)0x0) {
LAB_14f3b845f:
          (*g_fp_OodleCore_Plugin_Free)(local_bd0);
        }
        else {
          uVar29 = (longlong)local_b90 * 9 + 0xfU & 0xfffffffffffffff0;
          if ((rrArenaAllocator *)prVar47->m_unorderedStart == (rrArenaAllocator *)0x0) {
            if ((uchar *)((longlong)&local_bd0->m_base + uVar29) != (uchar *)prVar47->m_cur)
            goto LAB_14f3b845f;
            prVar47->m_cur = (longlong)prVar47->m_cur - uVar29;
          }
          else {
            if ((local_bd0 < (rrArenaAllocator *)prVar47->m_unorderedStart) ||
               ((rrArenaAllocator *)(prVar47->m_size + prVar47->m_base) <= local_bd0))
            goto LAB_14f3b845f;
            plVar42 = (longlong *)((longlong)&local_bd0->m_base + uVar29);
            plVar42[1] = 1;
            plVar4 = (longlong *)prVar47->m_cur;
            if (plVar42 + 2 == plVar4) {
              while ((plVar4 != (longlong *)prVar47->m_unorderedStart && (plVar42[1] == 1))) {
                prVar47->m_cur = prVar47->m_cur + (-0x10 - *plVar42);
                plVar4 = (longlong *)prVar47->m_cur;
                plVar42 = plVar4 + -2;
              }
            }
          }
        }
        local_a90.m_ptr = (rrArenaAllocator *)0x0;
      }
      local_b50 = (rrArenaAllocator *)0x0;
      local_b60 = (rrArenaAllocator *)0x0;
      local_b58 = (rrArenaAllocator *)0x0;
      local_ba0 = (rrArenaAllocator *)0x0;
      local_bb0 = (rrArenaAllocator *)0x0;
      local_ba8 = (rrArenaAllocator *)0x0;
      rrMemSetZero(local_8a8,0x1f8);
      uVar60 = (uint)local_bb8;
      uVar29 = (ulonglong)(int)(uint)local_bb8;
      if (0 < (int)(uint)local_bb8) {
        piVar20 = local_8a8;
        iVar13 = iVar14;
        do {
          piVar20->index = iVar13;
          iVar13 = iVar13 + 1;
          piVar20 = piVar20 + 1;
        } while (iVar13 < (int)(uint)local_bb8);
      }
      plVar42 = local_a28;
      lVar16 = param_5;
      do {
        lVar38 = plVar42[2];
        iVar14 = iVar14 + (int)lVar38;
        if (0 < lVar38) {
          piVar32 = (int *)(*plVar42 + 8);
          do {
            local_8a8[*piVar32].count = local_8a8[*piVar32].count + 1;
            piVar32 = piVar32 + 3;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
        }
        plVar42 = plVar42 + 3;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      stdsort<oo2::index_and_count_*,oo2::stdgreater<oo2::index_and_count>_>
                (local_8a8,local_8a8 + uVar29,local_c18);
      prVar39 = local_ac0;
      iVar13 = 0;
      if (0 < (int)uVar60) {
        piVar20 = local_8a8;
        do {
          *(int *)(local_498 + (longlong)piVar20->index * 2) = iVar13;
          iVar13 = iVar13 + 1;
          piVar20 = piVar20 + 1;
        } while (iVar13 < (int)uVar60);
      }
      if (local_8a8[uVar29 - 1].count == 0) {
        do {
          iVar13 = (int)uVar29;
          uVar60 = iVar13 - 1;
          uVar29 = (ulonglong)uVar60;
        } while (aiStack_8b4[(longlong)iVar13 * 2] == 0);
        local_bb8 = (rrArenaAllocator *)CONCAT44(local_bb8._4_4_,uVar60);
      }
      if (uVar60 == 1) {
LAB_14f3b82bc:
        pbVar58 = (byte *)0xffffffffffffffff;
      }
      else {
        iVar13 = iVar14 + (int)param_5;
        local_c00 = (ulonglong *)CONCAT44(local_c00._4_4_,iVar13);
        if (0xbfff < iVar13 * 6) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp",0xf28,
                       "OODLE ERROR : WARNING: Too many indices for decoder scratch!\n");
          }
          ooLogErrorPost();
          goto LAB_14f3b82bc;
        }
        puVar1 = &local_ac0->m_unorderedStart;
        local_c08 = (rrArenaAllocator *)(longlong)iVar14;
        rrScopeArenaAlloc::rrScopeArenaAlloc
                  (&local_a90,
                   (long64)((longlong)puVar1 +
                           (longlong)
                           ((longlong)&local_ac0->m_base +
                           (longlong)((longlong)&local_c08->m_base + (longlong)(iVar13 * 2)))),
                   prVar47,(void **)0x0);
        prVar18 = (rrArenaAllocator *)((longlong)puVar1 + (longlong)local_a90.m_ptr);
        *(uchar *)local_a90.m_ptr = (char)uVar60 + 0x80;
        fVar12 = __real_53800000;
        local_b90 = (rrArenaAllocator *)((longlong)local_a90.m_ptr + 1);
        lVar38 = 0;
        local_b20.m_size = 0;
        local_b20._padding_ = (longlong)prVar39;
        local_bd0 = (rrArenaAllocator *)((longlong)&prVar39->m_base + (longlong)&prVar18->m_base);
        uVar28 = param_6 & 0xffffffef;
        fVar62 = __real_3f800000;
        local_be0 = prVar18;
        local_b20._padding_ = (longlong)prVar18;
        if (0 < (int)uVar60) {
          do {
            puVar54 = (ulonglong *)0x0;
            local_b20.m_size = 0;
            plVar42 = local_a18;
            ppuVar26 = local_ae0;
            puVar53 = puVar54;
            do {
              lVar55 = 0;
              puVar30 = ppuVar26[(longlong)puVar53];
              lVar40 = lVar55;
              if (0 < *plVar42) {
                do {
                  lVar61 = plVar42[-2];
                  if (*(int *)(local_498 + (longlong)*(int *)(lVar61 + 8 + lVar40) * 2) == lVar38) {
                    vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::insert
                              (&local_b20,(ulong64)puVar54,puVar30 + *(int *)(lVar61 + lVar40),
                               puVar30 + *(int *)(lVar61 + lVar40) + *(int *)(lVar61 + 4 + lVar40));
                    puVar54 = (ulonglong *)local_b20.m_size;
                    prVar18 = (rrArenaAllocator *)local_b20._padding_;
                  }
                  lVar55 = lVar55 + 1;
                  ppuVar26 = local_ae0;
                  lVar40 = lVar40 + 0xc;
                } while (lVar55 < *plVar42);
              }
              prVar39 = local_b90;
              puVar53 = (ulonglong *)((longlong)puVar53 + 1);
              plVar42 = plVar42 + 3;
            } while ((longlong)puVar53 < param_5);
            prVar47 = prVar18;
            if (puVar54 == (ulonglong *)0x0) {
              prVar47 = (rrArenaAllocator *)0x0;
            }
            local_b98 = (uchar *)CONCAT44(local_b98._4_4_,0x4e800000);
            lVar16 = newLZ_put_array_small_allowed
                               ((uchar *)local_b90,(uchar *)local_be0,(uchar *)prVar47,
                                (longlong)(int)puVar54,uVar28,param_7,local_b38,(float *)&local_b98,
                                fVar12,local_bc0,param_11,(uint *)0x0);
            if (lVar16 < 0) goto LAB_14f3b8f53;
            local_b90 = (rrArenaAllocator *)((longlong)&prVar39->m_base + lVar16);
            fVar62 = fVar62 + (float)local_b98;
            if (*local_ab8 <= fVar62) goto LAB_14f3b8f53;
            lVar38 = lVar38 + 1;
          } while (lVar38 < (int)(uint)local_bb8);
        }
        prVar34 = (rrArenaAllocator *)0x0;
        local_b70 = (rrArenaAllocator *)0x0;
        local_b50 = (rrArenaAllocator *)0x0;
        local_ba0 = (rrArenaAllocator *)0x0;
        prVar47 = (rrArenaAllocator *)(longlong)(int)local_c00;
        prVar24 = (rrArenaAllocator *)((longlong)&prVar47->m_base + (longlong)&local_bd0->m_base);
        local_b60 = (rrArenaAllocator *)((longlong)&prVar47->m_base + (longlong)&prVar24->m_base);
        local_b58 = local_c08;
        local_c00 = (ulonglong *)((ulonglong)local_c00 & 0xffffffff00000000);
        local_b40 = local_a28;
        local_b68 = (undefined1 *)param_5;
        prVar39 = local_bd0;
        prVar18 = prVar34;
        local_bd8 = prVar47;
        prVar52 = local_b60;
        local_bb0 = local_bd0;
        local_ba8 = prVar47;
        local_b90 = (rrArenaAllocator *)((longlong)&local_b90->m_base + 2);
        local_b80 = prVar24;
        local_b78 = prVar47;
        local_aa0 = local_b90;
        do {
          local_bd0 = prVar52;
          lVar38 = 0;
          local_b88 = (ulonglong *)0x0;
          prVar52 = prVar18;
          if (0 < local_b40[2]) {
            do {
              plVar42 = local_b40;
              prVar39 = local_ba0;
              bVar37 = (char)*(undefined4 *)
                              (local_498 + (longlong)*(int *)(*local_b40 + 8 + lVar38) * 2) + 1;
              if ((prVar47 < (rrArenaAllocator *)((longlong)&prVar52->m_base + 1U)) &&
                 (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                              ,0x3f,
                                              "oo2::vector_storage_a<unsigned char>::needmakefit",
                                              "newsize <= m_capacity"), iVar14 != 0)) {
                pcVar5 = (code *)swi(3);
                lVar16 = (*pcVar5)();
                return lVar16;
              }
              prVar47 = local_b50;
              prVar18 = (rrArenaAllocator *)((longlong)&prVar52->m_base + 1);
              pbVar58 = (byte *)((longlong)&prVar52->m_base + (longlong)&local_b80->m_base);
              if (pbVar58 != (byte *)0x0) {
                *pbVar58 = bVar37;
              }
              uVar60 = *(uint *)(*plVar42 + 4 + lVar38);
              uVar51 = 0x1f;
              if (uVar60 != 0) {
                for (; uVar60 >> uVar51 == 0; uVar51 = uVar51 - 1) {
                }
              }
              if (uVar60 == 0) {
                uVar51 = 0xffffffff;
              }
              local_b70 = prVar18;
              if ((local_c08 < (rrArenaAllocator *)((longlong)&local_b50->m_base + 1U)) &&
                 (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                              ,0x3f,
                                              "oo2::vector_storage_a<unsigned char>::needmakefit",
                                              "newsize <= m_capacity"), iVar14 != 0)) {
                pcVar5 = (code *)swi(3);
                lVar16 = (*pcVar5)();
                return lVar16;
              }
              local_b50 = (rrArenaAllocator *)((longlong)&local_b50->m_base + 1);
              puVar30 = (uchar *)((longlong)&prVar47->m_base + (longlong)&local_bd0->m_base);
              if (puVar30 != (uchar *)0x0) {
                *puVar30 = (uchar)uVar51;
              }
              if ((int)prVar34 < (int)uVar51) {
                prVar34 = (rrArenaAllocator *)(ulonglong)uVar51;
              }
              local_c00 = (ulonglong *)CONCAT44(local_c00._4_4_,(int)local_c00 + uVar51);
              if ((local_bd8 < (rrArenaAllocator *)((longlong)&prVar39->m_base + 1U)) &&
                 (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                              ,0x3f,
                                              "oo2::vector_storage_a<unsigned char>::needmakefit",
                                              "newsize <= m_capacity"), iVar14 != 0)) {
                pcVar5 = (code *)swi(3);
                lVar16 = (*pcVar5)();
                return lVar16;
              }
              local_ba0 = (rrArenaAllocator *)((longlong)&prVar39->m_base + 1);
              pbVar58 = (byte *)((longlong)&prVar39->m_base + (longlong)&local_bb0->m_base);
              if (pbVar58 != (byte *)0x0) {
                *pbVar58 = (uchar)uVar51 << 4 | bVar37;
              }
              local_b88 = (ulonglong *)((longlong)local_b88 + 1);
              lVar38 = lVar38 + 0xc;
              prVar39 = local_bb0;
              prVar52 = prVar18;
              prVar47 = local_bd8;
              prVar24 = local_b80;
            } while ((longlong)local_b88 < local_b40[2]);
          }
          plVar42 = local_b40;
          prVar52 = local_ba0;
          if ((prVar47 < (rrArenaAllocator *)((longlong)&prVar18->m_base + 1U)) &&
             (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                          ,0x3f,"oo2::vector_storage_a<unsigned char>::needmakefit",
                                          "newsize <= m_capacity"), prVar47 = local_bd8, iVar14 != 0
             )) {
            pcVar5 = (code *)swi(3);
            lVar16 = (*pcVar5)();
            return lVar16;
          }
          prVar43 = (rrArenaAllocator *)((longlong)&prVar18->m_base + 1);
          puVar30 = (uchar *)((longlong)&prVar24->m_base + (longlong)&prVar18->m_base);
          if (puVar30 != (uchar *)0x0) {
            *puVar30 = '\0';
          }
          local_b70 = prVar43;
          if ((prVar47 < (rrArenaAllocator *)((longlong)&prVar52->m_base + 1U)) &&
             (iVar14 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                          ,0x3f,"oo2::vector_storage_a<unsigned char>::needmakefit",
                                          "newsize <= m_capacity"), prVar47 = local_bd8, iVar14 != 0
             )) {
            pcVar5 = (code *)swi(3);
            lVar16 = (*pcVar5)();
            return lVar16;
          }
          prVar10 = local_b90;
          prVar59 = (rrArenaAllocator *)((longlong)&prVar52->m_base + 1);
          puVar30 = (uchar *)((longlong)&prVar39->m_base + (longlong)&prVar52->m_base);
          if (puVar30 != (uchar *)0x0) {
            *puVar30 = '\0';
          }
          local_b40 = plVar42 + 3;
          local_b68 = local_b68 + -1;
          prVar18 = prVar43;
          prVar52 = local_bd0;
          local_ba0 = prVar59;
        } while (local_b68 != (undefined1 *)0x0);
        lVar38 = ((longlong)
                  ((ulonglong)((uint)((longlong)(int)local_c00 + 7 >> 0x3f) & 7) +
                  (longlong)(int)local_c00 + 7) >> 3) + 0x10;
        bVar7 = false;
        bVar8 = false;
        local_c10[0] = 1.0737418e+09;
        prVar39 = local_b80;
        if (prVar43 == (rrArenaAllocator *)0x0) {
          prVar39 = (rrArenaAllocator *)0x0;
        }
        lVar16 = newLZ_put_array_small_allowed
                           ((uchar *)local_b90,(uchar *)local_be0,(uchar *)prVar39,(long64)prVar47,
                            uVar28,param_7,local_b38,local_c10,fVar12,local_bc0,param_11,(uint *)0x0
                           );
        if (lVar16 < 1) {
LAB_14f3b8f45:
          local_ab0 = (byte *)0xffffffffffffffff;
        }
        else {
          puVar30 = (uchar *)((longlong)&prVar10->m_base + lVar16);
          local_bc8[0] = 1.0737418e+09;
          prVar39 = local_bd0;
          if (local_b50 == (rrArenaAllocator *)0x0) {
            prVar39 = (rrArenaAllocator *)0x0;
          }
          lVar16 = newLZ_put_array_small_allowed
                             (puVar30,(uchar *)local_be0,(uchar *)prVar39,(long64)local_c08,uVar28,
                              param_7,local_b38,local_bc8,fVar12,local_bc0,param_11,(uint *)0x0);
          prVar39 = local_be0;
          if (lVar16 < 1) goto LAB_14f3b8f45;
          puVar54 = (ulonglong *)(puVar30 + lVar16);
          local_c14 = local_bc8[0] + local_c10[0];
          local_c00 = puVar54;
          if (((int)(uint)local_bb8 < 0x10) && ((int)prVar34 < 0x10)) {
            prVar18 = local_bb0;
            if (prVar59 == (rrArenaAllocator *)0x0) {
              prVar18 = (rrArenaAllocator *)0x0;
            }
            lVar16 = newLZ_put_array_small_allowed
                               ((uchar *)prVar10,(uchar *)local_be0,(uchar *)prVar18,
                                (long64)local_bd8,uVar28,param_7,local_b38,&local_c14,fVar12,
                                local_bc0,param_11,(uint *)0x0);
            if (0 < lVar16) {
              puVar54 = (ulonglong *)((longlong)&prVar10->m_base + lVar16);
              bVar7 = true;
              bVar8 = true;
              local_c00 = puVar54;
            }
          }
          puVar53 = local_c00;
          fVar63 = fVar62 + fVar63 + local_c14;
          if ((*local_ab8 <= (float)lVar38 + fVar63) ||
             ((longlong)prVar39 - (longlong)puVar54 < lVar38)) goto LAB_14f3b8f45;
          uVar49 = 0;
          lVar38 = 0x3f;
          lVar40 = 0x3f;
          plVar42 = local_a18;
          uVar29 = uVar49;
          uVar41 = uVar49;
          do {
            uVar60 = (uint)uVar41;
            lVar61 = 0;
            lVar55 = lVar61;
            if (0 < *plVar42) {
              do {
                uVar60 = *(uint *)(plVar42[-2] + 4 + lVar55);
                iVar14 = 0x1f;
                if (uVar60 != 0) {
                  for (; uVar60 >> iVar14 == 0; iVar14 = iVar14 + -1) {
                  }
                }
                if (uVar60 == 0) {
                  iVar14 = -1;
                }
                bVar37 = (byte)iVar14;
                uVar56 = (ulonglong)((1 << (bVar37 & 0x1f)) - 1U & uVar60);
                if ((uint)uVar41 == 0) {
                  uVar29 = uVar29 << (bVar37 & 0x3f) | uVar56;
                  lVar38 = lVar38 - iVar14;
                  lVar36 = 0x3f - lVar38 >> 3;
                  uVar56 = uVar29 << ((char)lVar38 + 1U & 0x3f);
                  *puVar54 = uVar56 >> 0x38 | (uVar56 & 0xff000000000000) >> 0x28 |
                             (uVar56 & 0xff0000000000) >> 0x18 | (uVar56 & 0xff00000000) >> 8 |
                             (uVar56 & 0xff000000) << 8 | (uVar56 & 0xff0000) << 0x18 |
                             (uVar56 & 0xff00) << 0x28 | uVar56 << 0x38;
                  puVar54 = (ulonglong *)((longlong)puVar54 + lVar36);
                  lVar38 = lVar38 + lVar36 * 8;
                }
                else {
                  uVar49 = uVar49 << (bVar37 & 0x3f) | uVar56;
                  lVar40 = lVar40 - iVar14;
                  lVar36 = 0x3f - lVar40 >> 3;
                  *(ulonglong *)&prVar39[-1].m_allowFallback = uVar49 << ((char)lVar40 + 1U & 0x3f);
                  prVar39 = (rrArenaAllocator *)((longlong)prVar39 - lVar36);
                  lVar40 = lVar40 + lVar36 * 8;
                }
                uVar60 = (uint)uVar41 ^ 1;
                uVar41 = (ulonglong)uVar60;
                lVar61 = lVar61 + 1;
                lVar55 = lVar55 + 0xc;
                bVar7 = bVar8;
              } while (lVar61 < *plVar42);
            }
            plVar42 = plVar42 + 3;
            uVar28 = uVar60 ^ 1;
            if (!bVar7) {
              uVar28 = uVar60;
            }
            uVar41 = (ulonglong)uVar28;
            param_5 = param_5 + -1;
          } while (param_5 != 0);
          lVar55 = 0x3f - lVar38 >> 3;
          uVar41 = uVar29 << ((char)lVar38 + 1U & 0x3f);
          *puVar54 = uVar41 >> 0x38 | (uVar41 & 0xff000000000000) >> 0x28 |
                     (uVar41 & 0xff0000000000) >> 0x18 | (uVar41 & 0xff00000000) >> 8 |
                     (uVar41 & 0xff000000) << 8 | (uVar41 & 0xff0000) << 0x18 |
                     (uVar41 & 0xff00) << 0x28 | uVar41 << 0x38;
          pbVar58 = (byte *)((longlong)puVar54 + lVar55);
          lVar38 = lVar38 + lVar55 * 8;
          lVar55 = lVar38;
          if (lVar38 != 0x3f && -1 < 0x3f - lVar38) {
            uVar60 = (int)lVar38 + 1U & 7;
            uVar41 = (ulonglong)uVar60;
            lVar55 = lVar38 - uVar41;
            if (uVar41 == 0) {
              lVar55 = lVar38;
            }
            uVar56 = uVar29 << (sbyte)uVar60;
            if (uVar41 == 0) {
              uVar56 = uVar29;
            }
            lVar38 = 0x3f - lVar55;
            if (7 < lVar38) {
              puVar44 = (uint *)((longlong)c_rrBitMask64 + lVar55 * -4 + 0x5c);
              do {
                *pbVar58 = (byte)(uVar56 >> ((char)lVar38 - 8U & 0x3f));
                pbVar58 = pbVar58 + 1;
                lVar55 = lVar55 + 8;
                puVar44 = puVar44 + -8;
                lVar38 = lVar38 + -8;
                uVar56 = uVar56 & *puVar44;
                bVar7 = bVar8;
              } while (7 < lVar38);
            }
          }
          lVar38 = 0x3f - lVar40 >> 3;
          *(ulonglong *)&prVar39[-1].m_allowFallback = uVar49 << ((char)lVar40 + 1U & 0x3f);
          puVar17 = (undefined1 *)((longlong)prVar39 - lVar38);
          lVar40 = lVar40 + lVar38 * 8;
          if (lVar40 != 0x3f && -1 < 0x3f - lVar40) {
            uVar60 = (int)lVar40 + 1U & 7;
            uVar29 = (ulonglong)uVar60;
            lVar38 = lVar40 - uVar29;
            if (uVar29 == 0) {
              lVar38 = lVar40;
            }
            uVar41 = uVar49 << (sbyte)uVar60;
            if (uVar29 == 0) {
              uVar41 = uVar49;
            }
            lVar40 = 0x3f - lVar38;
            if (7 < lVar40) {
              puVar44 = (uint *)((longlong)c_rrBitMask64 + lVar38 * -4 + 0x5c);
              do {
                puVar17 = puVar17 + -1;
                lVar40 = lVar40 + -8;
                *puVar17 = (char)(uVar41 >> ((byte)lVar40 & 0x3f));
                puVar44 = puVar44 + -8;
                uVar41 = uVar41 & *puVar44;
              } while (7 < lVar40);
            }
          }
          _Size = (longlong)local_be0 - (longlong)puVar17;
          memmove(pbVar58 + ((longlong)
                             ((0x46 - lVar55) + (ulonglong)((uint)(0x46 - lVar55 >> 0x3f) & 7)) >> 3
                            ),puVar17,_Size);
          pbVar58 = pbVar58 + ((longlong)
                               ((0x46 - lVar55) + (ulonglong)((uint)(0x46 - lVar55 >> 0x3f) & 7)) >>
                              3) + (_Size - (longlong)puVar53);
          uVar27 = (ushort)pbVar58 | 0x8000;
          if (!bVar7) {
            uVar27 = (ushort)pbVar58;
          }
          *(ushort *)&local_aa0->m_base = uVar27;
          fVar12 = (*local_b38->get_multiarrays)((long64)local_c08,(long64)local_ac0);
          fVar63 = fVar12 * param_7 + (float)(longlong)pbVar58 + fVar63;
          pbVar58 = (byte *)((longlong)puVar53 + ((longlong)pbVar58 - (longlong)local_a90.m_ptr));
          if (*local_ab8 <= fVar63) goto LAB_14f3b8f45;
          if ((longlong)local_a70 - (longlong)local_a78 < (longlong)pbVar58) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            {
              (*g_fp_OodleCore_Plugin_Printf)
                        (0,"v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp",0x10df,
                         "OODLE ERROR : not enough comp space");
            }
            ooLogErrorPost();
            goto LAB_14f3b8f45;
          }
          *local_ab8 = fVar63;
          memcpy(local_a78,local_a90.m_ptr,(size_t)pbVar58);
          local_ab0 = pbVar58;
        }
LAB_14f3b8f53:
        rrScopeArenaAlloc::Release(&local_a90);
        pbVar58 = local_ab0;
      }
      rrScopeArenaAlloc::Release(&local_a68);
      _eh_vector_destructor_iterator_
                (local_a28,0x18,0x10,
                 vector_a<oo2::indexed_interval>::~vector_a<oo2::indexed_interval>);
      goto LAB_14f3b8f8b;
    }
  }
  pbVar58 = (byte *)0xffffffffffffffff;
LAB_14f3b8f8b:
  uVar50 = 0;
  rrScopeArenaAlloc::Release(&local_ad8);
  local_bf8 = (rrArenaAllocator *)uVar50;
  local_bf0 = (ulonglong *)uVar50;
  local_be8 = (undefined1 *)uVar50;
  rrScopeArenaAlloc::Release(&local_a50);
  return (long64)pbVar58;
}

// newlz_multiarrays_trellis_core @ 14f3b9020

void __cdecl
oo2::newlz_multiarrays_trellis_core
          (ulong64 *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5,
          ushort *param_6,ushort *param_7,int param_8,int param_9,ushort param_10,ushort param_11)

{
  if (((byte)g_rrCPUx86_feature_flags & 8) != 0) {
    newlz_multiarrays_trellis_core_sse4
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11);
    return;
  }
  newlz_multiarrays_trellis_core_sse2
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11);
  return;
}

// newlz_multiarrays_trellis_core_generic @ 14f3b90a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::newlz_multiarrays_trellis_core_generic
          (ulong64 *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5,
          ushort *param_6,ushort *param_7,int param_8,int param_9,ushort param_10,ushort param_11)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  uchar uVar7;
  ushort uVar8;
  ushort *puVar10;
  int iVar11;
  undefined1 auStack_118 [32];
  ulong64 *local_f8;
  uchar *local_f0;
  uchar *local_e8;
  ushort local_d8 [64];
  ulonglong local_58;
  int iVar9;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_e8 = param_4;
  local_f0 = param_2;
  local_f8 = param_1;
  if (0 < param_8) {
    memcpy(local_d8,param_6,(longlong)param_8 * 2);
  }
  while (param_3 < param_5) {
    uVar4 = 0;
    lVar5 = (longlong)param_3 - (longlong)local_e8;
    iVar11 = 0;
    bVar1 = *param_3;
    param_3 = param_3 + 1;
    uVar8 = 0x7fff;
    iVar9 = -1;
    uVar7 = 0xff;
    if (0 < param_8) {
      puVar10 = local_d8;
      do {
        uVar3 = *puVar10 - param_10;
        uVar6 = param_11;
        if (uVar3 < param_11) {
          uVar6 = uVar3;
        }
        uVar6 = uVar6 + *(short *)((longlong)param_7 +
                                   ((ulonglong)((uint)bVar1 * param_9) * 2 - (longlong)local_d8) +
                                   -2 + (longlong)(puVar10 + 1));
        *puVar10 = uVar6;
        uVar4 = uVar4 | (ulonglong)(param_11 < uVar3) << ((byte)iVar11 & 0x3f);
        iVar2 = iVar11;
        if (uVar8 <= uVar6) {
          uVar6 = uVar8;
          iVar2 = iVar9;
        }
        iVar9 = iVar2;
        uVar8 = uVar6;
        uVar7 = (uchar)iVar9;
        iVar11 = iVar11 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar11 < param_8);
    }
    local_f8[lVar5] = uVar4;
    local_f0[lVar5] = uVar7;
    param_10 = uVar8;
  }
  return;
}

// newlz_multiarrays_trellis_core_sse2 @ 14f3b9280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
oo2::newlz_multiarrays_trellis_core_sse2
          (ulong64 *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5,
          ushort *param_6,ushort *param_7,int param_8,int param_9,ushort param_10,ushort param_11)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort *puVar8;
  ulong64 *puVar9;
  ushort uVar10;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ushort uVar22;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM1 [16];
  ushort uVar23;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ushort uVar32;
  ushort uVar33;
  ushort uVar43;
  undefined1 auVar35 [12];
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ushort uVar44;
  undefined1 auVar37 [16];
  ushort uVar45;
  undefined1 auVar39 [16];
  short sVar46;
  ushort uVar47;
  short sVar48;
  ushort uVar49;
  short sVar50;
  ushort uVar51;
  short sVar52;
  ushort uVar53;
  short sVar54;
  ushort uVar55;
  short sVar56;
  ushort uVar57;
  short sVar58;
  ushort uVar59;
  short sVar60;
  ushort uVar61;
  undefined1 auVar34 [12];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  
  uVar45 = _UNK_151e391ee;
  uVar44 = _UNK_151e391ec;
  uVar43 = _UNK_151e391ea;
  uVar42 = _UNK_151e391e8;
  uVar41 = _UNK_151e391e6;
  uVar40 = _UNK_151e391e4;
  uVar33 = _UNK_151e391e2;
  uVar61 = ___xmm_7fff7fff7fff7fff7fff7fff7fff7fff;
  uVar47 = param_10;
  uVar49 = param_10;
  uVar51 = param_10;
  uVar53 = param_10;
  uVar55 = param_10;
  uVar57 = param_10;
  uVar59 = param_10;
  if (param_8 < 9) {
    uVar47 = *param_6;
    uVar49 = param_6[1];
    uVar51 = param_6[2];
    uVar53 = param_6[3];
    uVar55 = param_6[4];
    uVar57 = param_6[5];
    uVar59 = param_6[6];
    uVar61 = param_6[7];
    if (param_3 < param_5) {
      puVar9 = param_1 + ((longlong)param_3 - (longlong)param_4);
      uVar33 = param_10;
      uVar40 = param_10;
      uVar41 = param_10;
      uVar42 = param_10;
      uVar43 = param_10;
      uVar44 = param_10;
      uVar45 = param_10;
      do {
        sVar46 = uVar47 - param_10;
        sVar48 = uVar49 - uVar33;
        sVar50 = uVar51 - uVar40;
        sVar52 = uVar53 - uVar41;
        sVar54 = uVar55 - uVar42;
        sVar56 = uVar57 - uVar43;
        sVar58 = uVar59 - uVar44;
        sVar60 = uVar61 - uVar45;
        auVar24._0_2_ = -(ushort)((short)param_11 < sVar46);
        auVar24._2_2_ = -(ushort)((short)param_11 < sVar48);
        auVar24._4_2_ = -(ushort)((short)param_11 < sVar50);
        auVar24._6_2_ = -(ushort)((short)param_11 < sVar52);
        auVar24._8_2_ = -(ushort)((short)param_11 < sVar54);
        auVar24._10_2_ = -(ushort)((short)param_11 < sVar56);
        auVar24._12_2_ = -(ushort)((short)param_11 < sVar58);
        auVar24._14_2_ = -(ushort)((short)param_11 < sVar60);
        auVar25 = packsswb(auVar24,ZEXT816(0));
        puVar8 = param_7 + (ulonglong)*param_3 * 8;
        uVar47 = (((short)param_11 < sVar46) * param_11 |
                 (ushort)((short)param_11 >= sVar46) * sVar46) + *puVar8;
        uVar49 = (((short)param_11 < sVar48) * param_11 |
                 (ushort)((short)param_11 >= sVar48) * sVar48) + puVar8[1];
        uVar51 = (((short)param_11 < sVar50) * param_11 |
                 (ushort)((short)param_11 >= sVar50) * sVar50) + puVar8[2];
        uVar53 = (((short)param_11 < sVar52) * param_11 |
                 (ushort)((short)param_11 >= sVar52) * sVar52) + puVar8[3];
        uVar55 = (((short)param_11 < sVar54) * param_11 |
                 (ushort)((short)param_11 >= sVar54) * sVar54) + puVar8[4];
        uVar57 = (((short)param_11 < sVar56) * param_11 |
                 (ushort)((short)param_11 >= sVar56) * sVar56) + puVar8[5];
        uVar59 = (((short)param_11 < sVar58) * param_11 |
                 (ushort)((short)param_11 >= sVar58) * sVar58) + puVar8[6];
        uVar61 = (((short)param_11 < sVar60) * param_11 |
                 (ushort)((short)param_11 >= sVar60) * sVar60) + puVar8[7];
        uVar33 = ((short)uVar55 < (short)uVar47) * uVar55 |
                 ((short)uVar55 >= (short)uVar47) * uVar47;
        uVar40 = ((short)uVar57 < (short)uVar49) * uVar57 |
                 ((short)uVar57 >= (short)uVar49) * uVar49;
        uVar41 = ((short)uVar59 < (short)uVar51) * uVar59 |
                 ((short)uVar59 >= (short)uVar51) * uVar51;
        uVar42 = ((short)uVar61 < (short)uVar53) * uVar61 |
                 ((short)uVar61 >= (short)uVar53) * uVar53;
        auVar34._0_8_ = CONCAT26(uVar42,CONCAT24(uVar41,CONCAT22(uVar40,uVar33)));
        auVar34._8_2_ =
             ((short)uVar47 < (short)uVar55) * uVar47 | ((short)uVar47 >= (short)uVar55) * uVar55;
        auVar34._10_2_ =
             ((short)uVar49 < (short)uVar57) * uVar49 | ((short)uVar49 >= (short)uVar57) * uVar57;
        auVar36._12_2_ =
             ((short)uVar51 < (short)uVar59) * uVar51 | ((short)uVar51 >= (short)uVar59) * uVar59;
        auVar36._0_12_ = auVar34;
        auVar36._14_2_ =
             ((short)uVar53 < (short)uVar61) * uVar53 | ((short)uVar53 >= (short)uVar61) * uVar61;
        auVar11._4_4_ = CONCAT22(uVar40,uVar33);
        auVar11._0_4_ = (int)((ulonglong)auVar34._0_8_ >> 0x20);
        auVar11._8_4_ = auVar36._12_4_;
        auVar11._12_4_ = auVar34._8_4_;
        auVar37._0_2_ =
             ((short)uVar41 < (short)uVar33) * uVar41 | ((short)uVar41 >= (short)uVar33) * uVar33;
        auVar37._2_2_ =
             ((short)uVar42 < (short)uVar40) * uVar42 | ((short)uVar42 >= (short)uVar40) * uVar40;
        auVar37._4_2_ =
             ((short)uVar33 < (short)uVar41) * uVar33 | ((short)uVar33 >= (short)uVar41) * uVar41;
        auVar37._6_2_ =
             ((short)uVar40 < (short)uVar42) * uVar40 | ((short)uVar40 >= (short)uVar42) * uVar42;
        auVar37._8_2_ =
             ((short)auVar36._12_2_ < (short)auVar34._8_2_) * auVar36._12_2_ |
             ((short)auVar36._12_2_ >= (short)auVar34._8_2_) * auVar34._8_2_;
        auVar37._10_2_ =
             ((short)auVar36._14_2_ < (short)auVar34._10_2_) * auVar36._14_2_ |
             ((short)auVar36._14_2_ >= (short)auVar34._10_2_) * auVar34._10_2_;
        auVar37._12_2_ =
             ((short)auVar34._8_2_ < (short)auVar36._12_2_) * auVar34._8_2_ |
             ((short)auVar34._8_2_ >= (short)auVar36._12_2_) * auVar36._12_2_;
        auVar37._14_2_ =
             ((short)auVar34._10_2_ < (short)auVar36._14_2_) * auVar34._10_2_ |
             ((short)auVar34._10_2_ >= (short)auVar36._14_2_) * auVar36._14_2_;
        auVar12 = pshufhw(auVar11,auVar37,0xb1);
        in_XMM1 = pshuflw(in_XMM1,auVar12,0xb1);
        sVar46 = in_XMM1._0_2_;
        param_10 = (ushort)(sVar46 < (short)auVar37._0_2_) * sVar46 |
                   (sVar46 >= (short)auVar37._0_2_) * auVar37._0_2_;
        sVar46 = in_XMM1._2_2_;
        uVar33 = (ushort)(sVar46 < (short)auVar37._2_2_) * sVar46 |
                 (sVar46 >= (short)auVar37._2_2_) * auVar37._2_2_;
        sVar46 = in_XMM1._4_2_;
        uVar40 = (ushort)(sVar46 < (short)auVar37._4_2_) * sVar46 |
                 (sVar46 >= (short)auVar37._4_2_) * auVar37._4_2_;
        sVar46 = in_XMM1._6_2_;
        uVar41 = (ushort)(sVar46 < (short)auVar37._6_2_) * sVar46 |
                 (sVar46 >= (short)auVar37._6_2_) * auVar37._6_2_;
        sVar46 = in_XMM1._8_2_;
        uVar42 = (ushort)(sVar46 < (short)auVar37._8_2_) * sVar46 |
                 (sVar46 >= (short)auVar37._8_2_) * auVar37._8_2_;
        sVar46 = in_XMM1._10_2_;
        uVar43 = (ushort)(sVar46 < (short)auVar37._10_2_) * sVar46 |
                 (sVar46 >= (short)auVar37._10_2_) * auVar37._10_2_;
        sVar46 = in_XMM1._12_2_;
        uVar44 = (ushort)(sVar46 < (short)auVar37._12_2_) * sVar46 |
                 (sVar46 >= (short)auVar37._12_2_) * auVar37._12_2_;
        sVar46 = in_XMM1._14_2_;
        uVar45 = (ushort)(sVar46 < (short)auVar37._14_2_) * sVar46 |
                 (sVar46 >= (short)auVar37._14_2_) * auVar37._14_2_;
        auVar13._0_2_ = -(ushort)(param_10 == uVar47);
        auVar13._2_2_ = -(ushort)(uVar33 == uVar49);
        auVar13._4_2_ = -(ushort)(uVar40 == uVar51);
        auVar13._6_2_ = -(ushort)(uVar41 == uVar53);
        auVar13._8_2_ = -(ushort)(uVar42 == uVar55);
        auVar13._10_2_ = -(ushort)(uVar43 == uVar57);
        auVar13._12_2_ = -(ushort)(uVar44 == uVar59);
        auVar13._14_2_ = -(ushort)(uVar45 == uVar61);
        uVar23 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                 (ushort)((byte)(auVar13._14_2_ >> 7) & 1) << 0xe | auVar13._14_2_ & 0x8000;
        iVar5 = 0;
        if (uVar23 != 0) {
          for (; (uVar23 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
          }
        }
        *puVar9 = (longlong)
                  (int)(uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
        param_3[(longlong)param_2 - (longlong)param_4] = (byte)(iVar5 >> 1);
        param_3 = param_3 + 1;
        puVar9 = puVar9 + 1;
      } while (param_3 < param_5);
      return;
    }
  }
  else {
    while (param_3 < param_5) {
      bVar2 = *param_3;
      lVar7 = (longlong)param_3 - (longlong)param_4;
      param_3 = param_3 + 1;
      uVar6 = 0;
      iVar5 = 0;
      uVar23 = uVar61;
      uVar26 = uVar33;
      uVar27 = uVar40;
      uVar28 = uVar41;
      uVar29 = uVar42;
      uVar30 = uVar43;
      uVar31 = uVar44;
      uVar32 = uVar45;
      if (0 < param_9) {
        puVar8 = param_6;
        do {
          sVar46 = *puVar8 - param_10;
          sVar48 = puVar8[1] - uVar47;
          sVar50 = puVar8[2] - uVar49;
          sVar52 = puVar8[3] - uVar51;
          sVar54 = puVar8[4] - uVar53;
          sVar56 = puVar8[5] - uVar55;
          sVar58 = puVar8[6] - uVar57;
          sVar60 = puVar8[7] - uVar59;
          auVar12._0_2_ = -(ushort)((short)param_11 < sVar46);
          auVar12._2_2_ = -(ushort)((short)param_11 < sVar48);
          auVar12._4_2_ = -(ushort)((short)param_11 < sVar50);
          auVar12._6_2_ = -(ushort)((short)param_11 < sVar52);
          auVar12._8_2_ = -(ushort)((short)param_11 < sVar54);
          auVar12._10_2_ = -(ushort)((short)param_11 < sVar56);
          auVar12._12_2_ = -(ushort)((short)param_11 < sVar58);
          auVar12._14_2_ = -(ushort)((short)param_11 < sVar60);
          in_XMM1 = packsswb(auVar12,ZEXT816(0));
          psVar1 = (short *)((longlong)param_7 +
                             ((ulonglong)((uint)bVar2 * param_9) * 2 - (longlong)param_6) + -0x10 +
                            (longlong)(puVar8 + 8));
          uVar10 = (((short)param_11 < sVar46) * param_11 |
                   (ushort)((short)param_11 >= sVar46) * sVar46) + *psVar1;
          uVar16 = (((short)param_11 < sVar48) * param_11 |
                   (ushort)((short)param_11 >= sVar48) * sVar48) + psVar1[1];
          uVar17 = (((short)param_11 < sVar50) * param_11 |
                   (ushort)((short)param_11 >= sVar50) * sVar50) + psVar1[2];
          uVar18 = (((short)param_11 < sVar52) * param_11 |
                   (ushort)((short)param_11 >= sVar52) * sVar52) + psVar1[3];
          uVar19 = (((short)param_11 < sVar54) * param_11 |
                   (ushort)((short)param_11 >= sVar54) * sVar54) + psVar1[4];
          uVar20 = (((short)param_11 < sVar56) * param_11 |
                   (ushort)((short)param_11 >= sVar56) * sVar56) + psVar1[5];
          uVar21 = (((short)param_11 < sVar58) * param_11 |
                   (ushort)((short)param_11 >= sVar58) * sVar58) + psVar1[6];
          uVar22 = (((short)param_11 < sVar60) * param_11 |
                   (ushort)((short)param_11 >= sVar60) * sVar60) + psVar1[7];
          uVar23 = ((short)uVar10 < (short)uVar23) * uVar10 |
                   ((short)uVar10 >= (short)uVar23) * uVar23;
          uVar26 = ((short)uVar16 < (short)uVar26) * uVar16 |
                   ((short)uVar16 >= (short)uVar26) * uVar26;
          uVar27 = ((short)uVar17 < (short)uVar27) * uVar17 |
                   ((short)uVar17 >= (short)uVar27) * uVar27;
          uVar28 = ((short)uVar18 < (short)uVar28) * uVar18 |
                   ((short)uVar18 >= (short)uVar28) * uVar28;
          uVar29 = ((short)uVar19 < (short)uVar29) * uVar19 |
                   ((short)uVar19 >= (short)uVar29) * uVar29;
          uVar30 = ((short)uVar20 < (short)uVar30) * uVar20 |
                   ((short)uVar20 >= (short)uVar30) * uVar30;
          uVar31 = ((short)uVar21 < (short)uVar31) * uVar21 |
                   ((short)uVar21 >= (short)uVar31) * uVar31;
          uVar32 = ((short)uVar22 < (short)uVar32) * uVar22 |
                   ((short)uVar22 >= (short)uVar32) * uVar32;
          *puVar8 = uVar10;
          puVar8[1] = uVar16;
          puVar8[2] = uVar17;
          puVar8[3] = uVar18;
          puVar8[4] = uVar19;
          puVar8[5] = uVar20;
          puVar8[6] = uVar21;
          puVar8[7] = uVar22;
          bVar4 = (byte)iVar5;
          iVar5 = iVar5 + 8;
          uVar6 = uVar6 | (longlong)
                          (int)(uint)(ushort)((ushort)(SUB161(in_XMM1 >> 7,0) & 1) |
                                              (ushort)(SUB161(in_XMM1 >> 0xf,0) & 1) << 1 |
                                              (ushort)(SUB161(in_XMM1 >> 0x17,0) & 1) << 2 |
                                              (ushort)(SUB161(in_XMM1 >> 0x1f,0) & 1) << 3 |
                                              (ushort)(SUB161(in_XMM1 >> 0x27,0) & 1) << 4 |
                                              (ushort)(SUB161(in_XMM1 >> 0x2f,0) & 1) << 5 |
                                              (ushort)(SUB161(in_XMM1 >> 0x37,0) & 1) << 6 |
                                              (ushort)(SUB161(in_XMM1 >> 0x3f,0) & 1) << 7 |
                                              (ushort)(SUB161(in_XMM1 >> 0x47,0) & 1) << 8 |
                                              (ushort)(SUB161(in_XMM1 >> 0x4f,0) & 1) << 9 |
                                              (ushort)(SUB161(in_XMM1 >> 0x57,0) & 1) << 10 |
                                              (ushort)(SUB161(in_XMM1 >> 0x5f,0) & 1) << 0xb |
                                              (ushort)(SUB161(in_XMM1 >> 0x67,0) & 1) << 0xc |
                                              (ushort)(SUB161(in_XMM1 >> 0x6f,0) & 1) << 0xd |
                                              (ushort)(SUB161(in_XMM1 >> 0x77,0) & 1) << 0xe |
                                             (ushort)(byte)(in_XMM1[0xf] >> 7) << 0xf) <<
                          (bVar4 & 0x3f);
          puVar8 = puVar8 + 8;
        } while (iVar5 < param_9);
      }
      uVar47 = ((short)uVar29 < (short)uVar23) * uVar29 | ((short)uVar29 >= (short)uVar23) * uVar23;
      uVar49 = ((short)uVar30 < (short)uVar26) * uVar30 | ((short)uVar30 >= (short)uVar26) * uVar26;
      uVar51 = ((short)uVar31 < (short)uVar27) * uVar31 | ((short)uVar31 >= (short)uVar27) * uVar27;
      uVar53 = ((short)uVar32 < (short)uVar28) * uVar32 | ((short)uVar32 >= (short)uVar28) * uVar28;
      auVar35._0_8_ = CONCAT26(uVar53,CONCAT24(uVar51,CONCAT22(uVar49,uVar47)));
      auVar35._8_2_ =
           ((short)uVar23 < (short)uVar29) * uVar23 | ((short)uVar23 >= (short)uVar29) * uVar29;
      auVar35._10_2_ =
           ((short)uVar26 < (short)uVar30) * uVar26 | ((short)uVar26 >= (short)uVar30) * uVar30;
      auVar38._12_2_ =
           ((short)uVar27 < (short)uVar31) * uVar27 | ((short)uVar27 >= (short)uVar31) * uVar31;
      auVar38._0_12_ = auVar35;
      auVar38._14_2_ =
           ((short)uVar28 < (short)uVar32) * uVar28 | ((short)uVar28 >= (short)uVar32) * uVar32;
      iVar5 = 0;
      auVar25._4_4_ = CONCAT22(uVar49,uVar47);
      auVar25._0_4_ = (int)((ulonglong)auVar35._0_8_ >> 0x20);
      auVar25._8_4_ = auVar38._12_4_;
      auVar25._12_4_ = auVar35._8_4_;
      auVar39._0_2_ =
           ((short)uVar51 < (short)uVar47) * uVar51 | ((short)uVar51 >= (short)uVar47) * uVar47;
      auVar39._2_2_ =
           ((short)uVar53 < (short)uVar49) * uVar53 | ((short)uVar53 >= (short)uVar49) * uVar49;
      auVar39._4_2_ =
           ((short)uVar47 < (short)uVar51) * uVar47 | ((short)uVar47 >= (short)uVar51) * uVar51;
      auVar39._6_2_ =
           ((short)uVar49 < (short)uVar53) * uVar49 | ((short)uVar49 >= (short)uVar53) * uVar53;
      auVar39._8_2_ =
           ((short)auVar38._12_2_ < (short)auVar35._8_2_) * auVar38._12_2_ |
           ((short)auVar38._12_2_ >= (short)auVar35._8_2_) * auVar35._8_2_;
      auVar39._10_2_ =
           ((short)auVar38._14_2_ < (short)auVar35._10_2_) * auVar38._14_2_ |
           ((short)auVar38._14_2_ >= (short)auVar35._10_2_) * auVar35._10_2_;
      auVar39._12_2_ =
           ((short)auVar35._8_2_ < (short)auVar38._12_2_) * auVar35._8_2_ |
           ((short)auVar35._8_2_ >= (short)auVar38._12_2_) * auVar38._12_2_;
      auVar39._14_2_ =
           ((short)auVar35._10_2_ < (short)auVar38._14_2_) * auVar35._10_2_ |
           ((short)auVar35._10_2_ >= (short)auVar38._14_2_) * auVar38._14_2_;
      auVar12 = pshufhw(auVar25,auVar39,0xb1);
      in_XMM1 = pshuflw(in_XMM1,auVar12,0xb1);
      sVar46 = in_XMM1._0_2_;
      param_10 = (ushort)(sVar46 < (short)auVar39._0_2_) * sVar46 |
                 (sVar46 >= (short)auVar39._0_2_) * auVar39._0_2_;
      sVar46 = in_XMM1._2_2_;
      uVar47 = (ushort)(sVar46 < (short)auVar39._2_2_) * sVar46 |
               (sVar46 >= (short)auVar39._2_2_) * auVar39._2_2_;
      sVar46 = in_XMM1._4_2_;
      uVar49 = (ushort)(sVar46 < (short)auVar39._4_2_) * sVar46 |
               (sVar46 >= (short)auVar39._4_2_) * auVar39._4_2_;
      sVar46 = in_XMM1._6_2_;
      uVar51 = (ushort)(sVar46 < (short)auVar39._6_2_) * sVar46 |
               (sVar46 >= (short)auVar39._6_2_) * auVar39._6_2_;
      sVar46 = in_XMM1._8_2_;
      uVar53 = (ushort)(sVar46 < (short)auVar39._8_2_) * sVar46 |
               (sVar46 >= (short)auVar39._8_2_) * auVar39._8_2_;
      sVar46 = in_XMM1._10_2_;
      uVar55 = (ushort)(sVar46 < (short)auVar39._10_2_) * sVar46 |
               (sVar46 >= (short)auVar39._10_2_) * auVar39._10_2_;
      sVar46 = in_XMM1._12_2_;
      uVar57 = (ushort)(sVar46 < (short)auVar39._12_2_) * sVar46 |
               (sVar46 >= (short)auVar39._12_2_) * auVar39._12_2_;
      sVar46 = in_XMM1._14_2_;
      uVar59 = (ushort)(sVar46 < (short)auVar39._14_2_) * sVar46 |
               (sVar46 >= (short)auVar39._14_2_) * auVar39._14_2_;
      auVar14._0_2_ = -(ushort)(*param_6 == param_10);
      auVar14._2_2_ = -(ushort)(param_6[1] == uVar47);
      auVar14._4_2_ = -(ushort)(param_6[2] == uVar49);
      auVar14._6_2_ = -(ushort)(param_6[3] == uVar51);
      auVar14._8_2_ = -(ushort)(param_6[4] == uVar53);
      auVar14._10_2_ = -(ushort)(param_6[5] == uVar55);
      auVar14._12_2_ = -(ushort)(param_6[6] == uVar57);
      auVar14._14_2_ = -(ushort)(param_6[7] == uVar59);
      uVar23 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
               (ushort)((byte)(auVar14._14_2_ >> 7) & 1) << 0xe | auVar14._14_2_ & 0x8000;
      while (uVar23 == 0) {
        iVar5 = iVar5 + 8;
        puVar8 = param_6 + iVar5;
        auVar15._0_2_ = -(ushort)(*puVar8 == param_10);
        auVar15._2_2_ = -(ushort)(puVar8[1] == uVar47);
        auVar15._4_2_ = -(ushort)(puVar8[2] == uVar49);
        auVar15._6_2_ = -(ushort)(puVar8[3] == uVar51);
        auVar15._8_2_ = -(ushort)(puVar8[4] == uVar53);
        auVar15._10_2_ = -(ushort)(puVar8[5] == uVar55);
        auVar15._12_2_ = -(ushort)(puVar8[6] == uVar57);
        auVar15._14_2_ = -(ushort)(puVar8[7] == uVar59);
        uVar23 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                 (ushort)((byte)(auVar15._14_2_ >> 7) & 1) << 0xe | auVar15._14_2_ & 0x8000;
      }
      iVar3 = 0;
      if (uVar23 != 0) {
        for (; (uVar23 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
        }
      }
      param_1[lVar7] = uVar6;
      param_2[lVar7] = (char)(iVar3 >> 1) + (char)iVar5;
    }
  }
  return;
}

// pop_back @ 14f3b94e0

void __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::pop_back
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  *(longlong *)&this->field_0x10 = *(longlong *)&this->field_0x10 + -1;
  return;
}

// pop_back @ 14f3b94f0

void __thiscall
oo2::
vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::pop_back(vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
           *this)

{
  *(longlong *)&this->field_0x10 = *(longlong *)&this->field_0x10 + -1;
  return;
}

// provide_arena @ 14f3b9500

void __thiscall
oo2::vector_a<unsigned_char>::provide_arena
          (vector_a<unsigned_char> *this,void *param_1,ulong64 param_2)

{
  *(void **)this = param_1;
  *(ulong64 *)&this->field_0x8 = param_2;
  return;
}

// provide_arena @ 14f3b9510

void __thiscall
oo2::vector_a<unsigned_short>::provide_arena
          (vector_a<unsigned_short> *this,void *param_1,ulong64 param_2)

{
  *(ulong64 *)&this->field_0x8 = param_2 >> 1;
  *(void **)this = param_1;
  return;
}

// provide_arena @ 14f3b9530

void __thiscall
oo2::vector_a<oo2::entropyset>::provide_arena
          (vector_a<oo2::entropyset> *this,void *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  
  uVar1 = (longlong)param_1 + 0xfU & 0xfffffffffffffff0;
  *(ulonglong *)this = uVar1;
  *(ulonglong *)&this->field_0x8 = ((longlong)param_1 + (param_2 - uVar1)) / 0x408;
  return;
}

// provide_arena @ 14f3b9560

void __thiscall
oo2::vector_a<oo2::entropyset_codelens_U16_256>::provide_arena
          (vector_a<oo2::entropyset_codelens_U16_256> *this,void *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  
  uVar1 = (longlong)param_1 + 0xfU & 0xfffffffffffffff0;
  *(ulonglong *)this = uVar1;
  *(ulong64 *)&this->field_0x8 = (longlong)param_1 + (param_2 - uVar1) >> 9;
  return;
}

// provide_arena @ 14f3b9590

void __thiscall
oo2::vector_a<oo2::indexed_interval>::provide_arena
          (vector_a<oo2::indexed_interval> *this,void *param_1,ulong64 param_2)

{
  *(void **)this = param_1;
  *(ulonglong *)&this->field_0x8 = param_2 / 0xc;
  return;
}

// provide_arena @ 14f3b95b0

void __thiscall
oo2::vector_a<unsigned___int64>::provide_arena
          (vector_a<unsigned___int64> *this,void *param_1,ulong64 param_2)

{
  *(ulong64 *)&this->field_0x8 = param_2 >> 3;
  *(void **)this = param_1;
  return;
}

// provide_arena @ 14f3b95d0

void __thiscall
oo2::vector_storage_a<unsigned_char>::provide_arena
          (vector_storage_a<unsigned_char> *this,void *param_1,ulong64 param_2)

{
  this->m_data = param_1;
  this->m_capacity = param_2;
  return;
}

// provide_arena @ 14f3b95e0

void __thiscall
oo2::vector_storage_a<unsigned_short>::provide_arena
          (vector_storage_a<unsigned_short> *this,void *param_1,ulong64 param_2)

{
  this->m_capacity = param_2 >> 1;
  this->m_data = param_1;
  return;
}

// provide_arena @ 14f3b9600

void __thiscall
oo2::vector_storage_a<oo2::entropyset>::provide_arena
          (vector_storage_a<oo2::entropyset> *this,void *param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)((longlong)param_1 + 0xfU & 0xfffffffffffffff0);
  this->m_data = pvVar1;
  this->m_capacity = ((longlong)param_1 + (param_2 - (longlong)pvVar1)) / 0x408;
  return;
}

// provide_arena @ 14f3b9630

void __thiscall
oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>::provide_arena
          (vector_storage_a<oo2::entropyset_codelens_U16_256> *this,void *param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)((longlong)param_1 + 0xfU & 0xfffffffffffffff0);
  this->m_data = pvVar1;
  this->m_capacity = (longlong)param_1 + (param_2 - (longlong)pvVar1) >> 9;
  return;
}

// provide_arena @ 14f3b9660

void __thiscall
oo2::vector_storage_a<oo2::indexed_interval>::provide_arena
          (vector_storage_a<oo2::indexed_interval> *this,void *param_1,ulong64 param_2)

{
  this->m_data = param_1;
  this->m_capacity = param_2 / 0xc;
  return;
}

// provide_arena @ 14f3b9680

void __thiscall
oo2::vector_storage_a<unsigned___int64>::provide_arena
          (vector_storage_a<unsigned___int64> *this,void *param_1,ulong64 param_2)

{
  this->m_capacity = param_2 >> 3;
  this->m_data = param_1;
  return;
}

// push_back @ 14f3b96a0

void __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::push_back
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this,uchar *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  uchar *puVar4;
  
  lVar1 = *(longlong *)&this->field_0x10;
  if (*(ulonglong *)&this->field_0x8 < lVar1 + 1U) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<unsigned char>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(longlong *)&this->field_0x10 = *(longlong *)&this->field_0x10 + 1;
  puVar4 = (uchar *)(*(longlong *)this + lVar1);
  if (puVar4 != (uchar *)0x0) {
    *puVar4 = *param_1;
  }
  return;
}

// push_back @ 14f3b9720

void __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::push_back
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *(longlong *)&this->field_0x10;
  if (*(ulonglong *)&this->field_0x8 < lVar1 + 1U) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::entropyset>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(longlong *)&this->field_0x10 = *(longlong *)&this->field_0x10 + 1;
  _Dst = (void *)(lVar1 * 0x408 + *(longlong *)this);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x408);
  }
  return;
}

// push_back @ 14f3b9790

void __thiscall
oo2::
vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::push_back(vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
            *this)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *(longlong *)&this->field_0x10;
  if (*(ulonglong *)&this->field_0x8 < lVar1 + 1U) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::entropyset_codelens_U16_256>::needmakefit"
                               ,"newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(longlong *)&this->field_0x10 = *(longlong *)&this->field_0x10 + 1;
  _Dst = (void *)(lVar1 * 0x200 + *(longlong *)this);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x200);
  }
  return;
}

// push_back @ 14f3b9800

void __thiscall
oo2::vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::push_back
          (vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  
  lVar2 = *(longlong *)&this->field_0x10;
  if (*(ulonglong *)&this->field_0x8 < lVar2 + 1U) {
    iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::indexed_interval>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar4 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(longlong *)&this->field_0x10 = *(longlong *)&this->field_0x10 + 1;
  puVar1 = (undefined8 *)(*(longlong *)this + lVar2 * 0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
  }
  return;
}

// release @ 14f3b9870

void __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::release
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f3b9890

void __thiscall
oo2::vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::release
          (vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f3b98b0

void __thiscall
oo2::vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::release
          (vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f3b98d0

void __thiscall
oo2::
vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::release(vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
          *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f3b98f0

void __thiscall
oo2::vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::release
          (vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f3b9910

void __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::release
          (vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f3b9930

void __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::release
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// release @ 14f3b9950

void __thiscall oo2::vector_storage_a<unsigned_char>::release(vector_storage_a<unsigned_char> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return;
}

// release @ 14f3b9960

void __thiscall
oo2::vector_storage_a<unsigned_short>::release(vector_storage_a<unsigned_short> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return;
}

// release @ 14f3b9970

void __thiscall
oo2::vector_storage_a<oo2::entropyset>::release(vector_storage_a<oo2::entropyset> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return;
}

// release @ 14f3b9980

void __thiscall
oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>::release
          (vector_storage_a<oo2::entropyset_codelens_U16_256> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return;
}

// release @ 14f3b9990

void __thiscall
oo2::vector_storage_a<oo2::indexed_interval>::release(vector_storage_a<oo2::indexed_interval> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return;
}

// release @ 14f3b99a0

void __thiscall
oo2::vector_storage_a<unsigned___int64>::release(vector_storage_a<unsigned___int64> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return;
}

// resize @ 14f3b99c0

void __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::resize
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this,ulong64 param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<unsigned char>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// resize @ 14f3b9a40

void __thiscall
oo2::vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::resize
          (vector_flex<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this,ulong64 param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<unsigned short>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// resize @ 14f3b9ac0

void __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::resize
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this,
          ulong64 param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::entropyset>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// resize @ 14f3b9b40

void __thiscall
oo2::
vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::resize(vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
         *this,ulong64 param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::entropyset_codelens_U16_256>::needmakefit"
                               ,"newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// resize @ 14f3b9bc0

void __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::resize
          (vector_flex<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this,
          ulong64 param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<unsigned __int64>::needmakefit",
                               "newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// rrAlignDown64 @ 14f3b9c30

ulong64 __cdecl oo2::rrAlignDown64(ulong64 param_1,long64 param_2)

{
  return ~(param_2 - 1U) & param_1;
}

// rrAlignDownA @ 14f3b9c50

ulong64 __cdecl oo2::rrAlignDownA(ulong64 param_1,long64 param_2)

{
  return ~(param_2 - 1U) & param_1;
}

// rrAlignUp64 @ 14f3b9c70

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3b9c90

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3b9cb0

ulong64 __cdecl oo2::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrCPUx86_feature_present @ 14f3b9cd0

int __cdecl oo2::rrCPUx86_feature_present(uint param_1)

{
  return g_rrCPUx86_feature_flags & param_1;
}

// rrClz32 @ 14f3b9ce0

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

// rrCtz32 @ 14f3b9d00

uint __cdecl oo2::rrCtz32(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return uVar1;
}

// rrGetBitLevel_V @ 14f3b9d10

uint __cdecl oo2::rrGetBitLevel_V(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 != 0) {
    return iVar1 + 1;
  }
  return 0;
}

// rrPrintfKill @ 14f3b9d40

void __cdecl oo2::rrPrintfKill(char *param_1)

{
  return;
}

// rrPrintf_nop @ 14f3b9d60

void __cdecl oo2::rrPrintf_nop(void)

{
  return;
}

// rrPtrDiff32 @ 14f3b9d70

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14f3b9d80

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrsimd_has_sse4 @ 14f3b9d90

int __cdecl oo2::rrsimd_has_sse4(void)

{
  return g_rrCPUx86_feature_flags & 8;
}

// shrink @ 14f3b9da0

void __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::shrink
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14f3b9db0

void __thiscall
oo2::vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::shrink
          (vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14f3b9dc0

void __thiscall
oo2::vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::shrink
          (vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this,
          ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14f3b9dd0

void __thiscall
oo2::
vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::shrink(vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
         *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14f3b9de0

void __thiscall
oo2::vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::shrink
          (vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this,
          ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14f3b9df0

void __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::shrink
          (vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this,
          ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// simd_cmpgt_u8 @ 14f3b9e00

int __cdecl oo2::simd_cmpgt_u8(uchar *param_1,long64 param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  
  bVar18 = (char)param_3 + 1;
  lVar19 = 0;
  if (0xf < param_2) {
    lVar20 = 0x10;
    do {
      pbVar1 = param_1 + lVar20 + -0x10;
      bVar2 = *pbVar1;
      bVar3 = pbVar1[1];
      bVar4 = pbVar1[2];
      bVar5 = pbVar1[3];
      bVar6 = pbVar1[4];
      bVar7 = pbVar1[5];
      bVar8 = pbVar1[6];
      bVar9 = pbVar1[7];
      bVar10 = pbVar1[8];
      bVar11 = pbVar1[9];
      bVar12 = pbVar1[10];
      bVar13 = pbVar1[0xb];
      bVar14 = pbVar1[0xc];
      bVar15 = pbVar1[0xd];
      bVar16 = pbVar1[0xe];
      bVar17 = pbVar1[0xf];
      auVar21[0] = -((byte)((bVar2 < bVar18) * bVar18 | (bVar2 >= bVar18) * bVar2) == bVar2);
      auVar21[1] = -((byte)((bVar3 < bVar18) * bVar18 | (bVar3 >= bVar18) * bVar3) == bVar3);
      auVar21[2] = -((byte)((bVar4 < bVar18) * bVar18 | (bVar4 >= bVar18) * bVar4) == bVar4);
      auVar21[3] = -((byte)((bVar5 < bVar18) * bVar18 | (bVar5 >= bVar18) * bVar5) == bVar5);
      auVar21[4] = -((byte)((bVar6 < bVar18) * bVar18 | (bVar6 >= bVar18) * bVar6) == bVar6);
      auVar21[5] = -((byte)((bVar7 < bVar18) * bVar18 | (bVar7 >= bVar18) * bVar7) == bVar7);
      auVar21[6] = -((byte)((bVar8 < bVar18) * bVar18 | (bVar8 >= bVar18) * bVar8) == bVar8);
      auVar21[7] = -((byte)((bVar9 < bVar18) * bVar18 | (bVar9 >= bVar18) * bVar9) == bVar9);
      auVar21[8] = -((byte)((bVar10 < bVar18) * bVar18 | (bVar10 >= bVar18) * bVar10) == bVar10);
      auVar21[9] = -((byte)((bVar11 < bVar18) * bVar18 | (bVar11 >= bVar18) * bVar11) == bVar11);
      auVar21[10] = -((byte)((bVar12 < bVar18) * bVar18 | (bVar12 >= bVar18) * bVar12) == bVar12);
      auVar21[0xb] = -((byte)((bVar13 < bVar18) * bVar18 | (bVar13 >= bVar18) * bVar13) == bVar13);
      auVar21[0xc] = -((byte)((bVar14 < bVar18) * bVar18 | (bVar14 >= bVar18) * bVar14) == bVar14);
      auVar21[0xd] = -((byte)((bVar15 < bVar18) * bVar18 | (bVar15 >= bVar18) * bVar15) == bVar15);
      auVar21[0xe] = -((byte)((bVar16 < bVar18) * bVar18 | (bVar16 >= bVar18) * bVar16) == bVar16);
      auVar21[0xf] = -((byte)((bVar17 < bVar18) * bVar18 | (bVar17 >= bVar18) * bVar17) == bVar17);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') {
        return 1;
      }
      lVar19 = lVar19 + 0x10;
      lVar20 = lVar20 + 0x10;
    } while (lVar20 <= param_2);
  }
  while( true ) {
    if (param_2 <= lVar19) {
      return 0;
    }
    if (param_3 < (int)(uint)param_1[lVar19]) break;
    lVar19 = lVar19 + 1;
  }
  return 1;
}

// size32 @ 14f3b9e90

int __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::size32
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  return *(int *)&this->field_0x10;
}

// size32 @ 14f3b9ea0

int __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::size32
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  return *(int *)&this->field_0x10;
}

// size32 @ 14f3b9eb0

int __thiscall
oo2::
vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::size32(vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
         *this)

{
  return *(int *)&this->field_0x10;
}

// size32 @ 14f3b9ec0

int __thiscall
oo2::vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::size32
          (vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  return *(int *)&this->field_0x10;
}

// size @ 14f3b9ed0

ulong64 __thiscall
oo2::vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::size
          (vector_base<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  return this->m_size;
}

// size @ 14f3b9ee0

ulong64 __thiscall
oo2::vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_>::size
          (vector_base<unsigned_short,oo2::vector_storage_a<unsigned_short>_> *this)

{
  return this->m_size;
}

// size @ 14f3b9ef0

ulong64 __thiscall
oo2::vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::size
          (vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  return this->m_size;
}

// size @ 14f3b9f00

ulong64 __thiscall
oo2::
vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::size(vector_base<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
       *this)

{
  return this->m_size;
}

// size @ 14f3b9f10

ulong64 __thiscall
oo2::vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::size
          (vector_base<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  return this->m_size;
}

// size @ 14f3b9f20

ulong64 __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_>::size
          (vector_base<unsigned___int64,oo2::vector_storage_a<unsigned___int64>_> *this)

{
  return this->m_size;
}

// size @ 14f3b9f30

ulong64 __thiscall
oo2::vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_>::size
          (vector_flex<unsigned_char,oo2::vector_storage_a<unsigned_char>_> *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size @ 14f3b9f40

ulong64 __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::size
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size @ 14f3b9f50

ulong64 __thiscall
oo2::
vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
::size(vector_flex<oo2::entropyset_codelens_U16_256,oo2::vector_storage_a<oo2::entropyset_codelens_U16_256>_>
       *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size @ 14f3b9f60

ulong64 __thiscall
oo2::vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::size
          (vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size_bytes @ 14f3b9f70

ulong64 __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::size_bytes
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  return *(longlong *)&this->field_0x10 * 0x408;
}

// sizea @ 14f3b9f80

long64 __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::sizea
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this)

{
  return *(long64 *)&this->field_0x10;
}

// sizea @ 14f3b9f90

long64 __thiscall
oo2::vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_>::sizea
          (vector_flex<oo2::indexed_interval,oo2::vector_storage_a<oo2::indexed_interval>_> *this)

{
  return *(long64 *)&this->field_0x10;
}

// slide_array_key @ 14f3b9fa0

ulong64 __cdecl oo2::slide_array_key(int param_1,int param_2)

{
  return (longlong)param_1 << 0x20 | (longlong)param_2;
}

// slide_to_purify @ 14f3b9fc0

uchar * __cdecl
oo2::slide_to_purify(Histo256 *param_1,uchar *param_2,long64 param_3,uchar *param_4,uchar *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar3 = -1;
  iVar5 = -1;
  if (param_4 < param_2) {
    iVar5 = param_1->counts[param_2[-1]] - param_1->counts[param_2[param_3 + -1]];
  }
  pbVar4 = param_2 + param_3;
  if (pbVar4 < param_5) {
    iVar3 = param_1->counts[*pbVar4] - param_1->counts[*param_2];
  }
  if (iVar3 < iVar5) {
    if (param_4 < param_2) {
      while( true ) {
        pbVar4 = pbVar4 + -1;
        if ((int)(param_1->counts[pbVar4[-param_3]] - param_1->counts[*pbVar4]) < 1) break;
        param_2 = param_2 + -1;
        param_1->counts[pbVar4[-param_3]] = param_1->counts[pbVar4[-param_3]] + 1;
        param_1->counts[*pbVar4] = param_1->counts[*pbVar4] - 1;
        if (param_2 <= param_4) {
          return param_2;
        }
      }
    }
  }
  else {
    while (pbVar4 < param_5) {
      uVar2 = param_1->counts[*pbVar4];
      if ((int)(uVar2 - param_1->counts[*param_2]) < 0) {
        return param_2;
      }
      param_1->counts[*pbVar4] = uVar2 + 1;
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      param_1->counts[bVar1] = param_1->counts[bVar1] - 1;
      pbVar4 = param_2 + param_3;
    }
  }
  return param_2;
}

// swap @ 14f3ba0e0

void __thiscall
oo2::vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::swap
          (vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this,
          vector_base<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *param_1)

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

// swap @ 14f3ba120

void __thiscall
oo2::vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_>::swap
          (vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *this,
          vector_flex<oo2::entropyset,oo2::vector_storage_a<oo2::entropyset>_> *param_1)

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

// swap @ 14f3ba160

void __thiscall
oo2::vector_storage_a<oo2::entropyset>::swap
          (vector_storage_a<oo2::entropyset> *this,vector_storage_a<oo2::entropyset> *param_1,
          ulong64 param_2)

{
  void *pvVar1;
  ulong64 uVar2;
  
  pvVar1 = this->m_data;
  this->m_data = param_1->m_data;
  param_1->m_data = pvVar1;
  uVar2 = this->m_capacity;
  this->m_capacity = param_1->m_capacity;
  param_1->m_capacity = uVar2;
  return;
}

// swap @ 14f3ba1a0

void __thiscall oo2::rrScopeArenaAlloc::swap(rrScopeArenaAlloc *this,rrScopeArenaAlloc *param_1)

{
  rrArenaAllocator *prVar1;
  void *pvVar2;
  long64 lVar3;
  
  prVar1 = this->m_pAlloc;
  this->m_pAlloc = param_1->m_pAlloc;
  param_1->m_pAlloc = prVar1;
  pvVar2 = this->m_ptr;
  this->m_ptr = param_1->m_ptr;
  param_1->m_ptr = pvVar2;
  lVar3 = this->m_size;
  this->m_size = param_1->m_size;
  param_1->m_size = lVar3;
  return;
}

// dtor$0 @ 1502851c0

void `oo2::newLZ_put_array_sub_split_2'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0xb0));
  return;
}

// dtor$0 @ 1502851e0

void `oo2::newLZ_put_array_sub_split_N'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0xf8));
  return;
}

// dtor$1 @ 150285200

void `oo2::newLZ_put_array_sub_split_N'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x150));
  return;
}

// dtor$2 @ 150285220

void `oo2::newLZ_put_array_sub_split_N'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x168));
  return;
}

// dtor$0 @ 150285240

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<oo2::entropyset_codelens_U16_256>::~vector_a<oo2::entropyset_codelens_U16_256>
            ((vector_a<oo2::entropyset_codelens_U16_256> *)(param_2 + 0x178));
  return;
}

// dtor$1 @ 150285260

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x228));
  return;
}

// dtor$2 @ 150285280

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<oo2::entropyset>::~vector_a<oo2::entropyset>
            ((vector_a<oo2::entropyset> *)(param_2 + 0x80));
  return;
}

// dtor$3 @ 1502852a0

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x1a0));
  return;
}

// dtor$4 @ 1502852c0

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_4(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<oo2::entropyset>::~vector_a<oo2::entropyset>
            ((vector_a<oo2::entropyset> *)(param_2 + 200));
  return;
}

// dtor$5 @ 1502852e0

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_5(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0xf8));
  return;
}

// dtor$6 @ 150285300

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_6(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x158));
  return;
}

// dtor$7 @ 150285320

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_7(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(param_2 + 0x250),0x18,0x10,
             oo2::vector_a<oo2::indexed_interval>::~vector_a<oo2::indexed_interval>);
  return;
}

// dtor$8 @ 150285360

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_8(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x210));
  return;
}

// dtor$9 @ 150285380

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_9(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<unsigned___int64>::~vector_a<unsigned___int64>
            ((vector_a<unsigned___int64> *)(param_2 + 200));
  return;
}

// dtor$10 @ 1502853a0

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_10(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<unsigned_char>::~vector_a<unsigned_char>
            ((vector_a<unsigned_char> *)(param_2 + 0x118));
  return;
}

// dtor$11 @ 1502853c0

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_11(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x1e8));
  return;
}

// dtor$12 @ 1502853e0

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_12(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<unsigned_short>::~vector_a<unsigned_short>
            ((vector_a<unsigned_short> *)(param_2 + 0xf8));
  return;
}

// dtor$13 @ 150285400

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_13(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x158));
  return;
}

// dtor$14 @ 150285420

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_14(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x1e8));
  return;
}

// dtor$15 @ 150285440

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_15(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<unsigned_char>::~vector_a<unsigned_char>
            ((vector_a<unsigned_char> *)(param_2 + 0x158));
  return;
}

// dtor$16 @ 150285460

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_16(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<unsigned_char>::~vector_a<unsigned_char>
            ((vector_a<unsigned_char> *)(param_2 + 0xf8));
  return;
}

// dtor$17 @ 150285480

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_17(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<unsigned_char>::~vector_a<unsigned_char>
            ((vector_a<unsigned_char> *)(param_2 + 0x118));
  return;
}

// dtor$18 @ 1502854a0

void `oo2::newLZ_put_multiarray_indexed_sub'::__l1::dtor_18(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<unsigned_char>::~vector_a<unsigned_char>((vector_a<unsigned_char> *)(param_2 + 200))
  ;
  return;
}

