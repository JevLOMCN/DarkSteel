// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 146

// ChildrenSparse_Find<8> @ 14f3ab680

int * __cdecl
oo2::SuffixTrie2::ChildrenSparse_Find<8>(ChildrenSparseN<8> *param_1,int param_2,uchar param_3)

{
  undefined8 uVar1;
  int iVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined8 *)param_1->select;
  auVar4[0] = -((uchar)uVar1 == param_3);
  auVar4[1] = -((uchar)((ulonglong)uVar1 >> 8) == param_3);
  auVar4[2] = -((uchar)((ulonglong)uVar1 >> 0x10) == param_3);
  auVar4[3] = -((uchar)((ulonglong)uVar1 >> 0x18) == param_3);
  auVar4[4] = -((uchar)((ulonglong)uVar1 >> 0x20) == param_3);
  auVar4[5] = -((uchar)((ulonglong)uVar1 >> 0x28) == param_3);
  auVar4[6] = -((uchar)((ulonglong)uVar1 >> 0x30) == param_3);
  auVar4[7] = -((uchar)((ulonglong)uVar1 >> 0x38) == param_3);
  auVar4[8] = -(param_3 == '\0');
  auVar4[9] = -(param_3 == '\0');
  auVar4[10] = -(param_3 == '\0');
  auVar4[0xb] = -(param_3 == '\0');
  auVar4[0xc] = -(param_3 == '\0');
  auVar4[0xd] = -(param_3 == '\0');
  auVar4[0xe] = -(param_3 == '\0');
  auVar4[0xf] = -(param_3 == '\0');
  uVar3 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf;
  if (uVar3 != 0) {
    iVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    if (iVar2 < param_2) {
      return param_1->nodes + iVar2;
    }
  }
  return (int *)0x0;
}

// ChildrenSparse_Find<8> @ 14f3ab6c0

int * __cdecl
oo2::SuffixTrie2::ChildrenSparse_Find<8>(ChildrenSparseN<8> *param_1,int param_2,uchar param_3)

{
  undefined8 uVar1;
  int iVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined8 *)param_1->select;
  auVar4[0] = -((uchar)uVar1 == param_3);
  auVar4[1] = -((uchar)((ulonglong)uVar1 >> 8) == param_3);
  auVar4[2] = -((uchar)((ulonglong)uVar1 >> 0x10) == param_3);
  auVar4[3] = -((uchar)((ulonglong)uVar1 >> 0x18) == param_3);
  auVar4[4] = -((uchar)((ulonglong)uVar1 >> 0x20) == param_3);
  auVar4[5] = -((uchar)((ulonglong)uVar1 >> 0x28) == param_3);
  auVar4[6] = -((uchar)((ulonglong)uVar1 >> 0x30) == param_3);
  auVar4[7] = -((uchar)((ulonglong)uVar1 >> 0x38) == param_3);
  auVar4[8] = -(param_3 == '\0');
  auVar4[9] = -(param_3 == '\0');
  auVar4[10] = -(param_3 == '\0');
  auVar4[0xb] = -(param_3 == '\0');
  auVar4[0xc] = -(param_3 == '\0');
  auVar4[0xd] = -(param_3 == '\0');
  auVar4[0xe] = -(param_3 == '\0');
  auVar4[0xf] = -(param_3 == '\0');
  uVar3 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf;
  if (uVar3 != 0) {
    iVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    if (iVar2 < param_2) {
      return param_1->nodes + iVar2;
    }
  }
  return (int *)0x0;
}

// ChildrenSparse_Find<16> @ 14f3ab700

int * __cdecl
oo2::SuffixTrie2::ChildrenSparse_Find<16>(ChildrenSparseN<16> *param_1,int param_2,uchar param_3)

{
  int iVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  
  auVar3[0] = -(param_3 == param_1->select[0]);
  auVar3[1] = -(param_3 == param_1->select[1]);
  auVar3[2] = -(param_3 == param_1->select[2]);
  auVar3[3] = -(param_3 == param_1->select[3]);
  auVar3[4] = -(param_3 == param_1->select[4]);
  auVar3[5] = -(param_3 == param_1->select[5]);
  auVar3[6] = -(param_3 == param_1->select[6]);
  auVar3[7] = -(param_3 == param_1->select[7]);
  auVar3[8] = -(param_3 == param_1->select[8]);
  auVar3[9] = -(param_3 == param_1->select[9]);
  auVar3[10] = -(param_3 == param_1->select[10]);
  auVar3[0xb] = -(param_3 == param_1->select[0xb]);
  auVar3[0xc] = -(param_3 == param_1->select[0xc]);
  auVar3[0xd] = -(param_3 == param_1->select[0xd]);
  auVar3[0xe] = -(param_3 == param_1->select[0xe]);
  auVar3[0xf] = -(param_3 == param_1->select[0xf]);
  uVar2 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf;
  if (uVar2 != 0) {
    iVar1 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    if (iVar1 < param_2) {
      return param_1->nodes + iVar1;
    }
  }
  return (int *)0x0;
}

// ChildrenSparse_Find<16> @ 14f3ab740

int * __cdecl
oo2::SuffixTrie2::ChildrenSparse_Find<16>(ChildrenSparseN<16> *param_1,int param_2,uchar param_3)

{
  int iVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  
  auVar3[0] = -(param_3 == param_1->select[0]);
  auVar3[1] = -(param_3 == param_1->select[1]);
  auVar3[2] = -(param_3 == param_1->select[2]);
  auVar3[3] = -(param_3 == param_1->select[3]);
  auVar3[4] = -(param_3 == param_1->select[4]);
  auVar3[5] = -(param_3 == param_1->select[5]);
  auVar3[6] = -(param_3 == param_1->select[6]);
  auVar3[7] = -(param_3 == param_1->select[7]);
  auVar3[8] = -(param_3 == param_1->select[8]);
  auVar3[9] = -(param_3 == param_1->select[9]);
  auVar3[10] = -(param_3 == param_1->select[10]);
  auVar3[0xb] = -(param_3 == param_1->select[0xb]);
  auVar3[0xc] = -(param_3 == param_1->select[0xc]);
  auVar3[0xd] = -(param_3 == param_1->select[0xd]);
  auVar3[0xe] = -(param_3 == param_1->select[0xe]);
  auVar3[0xf] = -(param_3 == param_1->select[0xf]);
  uVar2 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf;
  if (uVar2 != 0) {
    iVar1 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    if (iVar1 < param_2) {
      return param_1->nodes + iVar1;
    }
  }
  return (int *)0x0;
}

// ChildrenSparse_PreInit<8> @ 14f3ab780

void __cdecl oo2::SuffixTrie2::ChildrenSparse_PreInit<8>(ChildrenSparseN<8> *param_1)

{
  param_1->select[0] = '\0';
  param_1->select[1] = '\0';
  param_1->select[2] = '\0';
  param_1->select[3] = '\0';
  param_1->select[4] = '\0';
  param_1->select[5] = '\0';
  param_1->select[6] = '\0';
  param_1->select[7] = '\0';
  return;
}

// ChildrenSparse_PreInit<16> @ 14f3ab790

void __cdecl oo2::SuffixTrie2::ChildrenSparse_PreInit<16>(ChildrenSparseN<16> *param_1)

{
  param_1->select[0] = '\0';
  param_1->select[1] = '\0';
  param_1->select[2] = '\0';
  param_1->select[3] = '\0';
  param_1->select[4] = '\0';
  param_1->select[5] = '\0';
  param_1->select[6] = '\0';
  param_1->select[7] = '\0';
  param_1->select[8] = '\0';
  param_1->select[9] = '\0';
  param_1->select[10] = '\0';
  param_1->select[0xb] = '\0';
  param_1->select[0xc] = '\0';
  param_1->select[0xd] = '\0';
  param_1->select[0xe] = '\0';
  param_1->select[0xf] = '\0';
  return;
}

// OodleDeleteVirtual<oo2::SuffixTrie2::SuffixTrie2MatchFinder> @ 14f3ab7a0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __cdecl
oo2::OodleDeleteVirtual<oo2::SuffixTrie2::SuffixTrie2MatchFinder>(SuffixTrie2MatchFinder *param_1)

{
  (**(code **)param_1->_padding_)(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00014f3ab7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// construct<oo2::SuffixTrie2::ChildrenSparseN<8>_> @ 14f3ab7d0

ChildrenSparseN<8> * __cdecl
oo2::construct<oo2::SuffixTrie2::ChildrenSparseN<8>_>(ChildrenSparseN<8> *param_1)

{
  if (param_1 != (ChildrenSparseN<8> *)0x0) {
    param_1->select[0] = '\0';
    param_1->select[1] = '\0';
    param_1->select[2] = '\0';
    param_1->select[3] = '\0';
    param_1->select[4] = '\0';
    param_1->select[5] = '\0';
    param_1->select[6] = '\0';
    param_1->select[7] = '\0';
    param_1->nodes[0] = 0;
    param_1->nodes[1] = 0;
    param_1->nodes[2] = 0;
    param_1->nodes[3] = 0;
    param_1->nodes[4] = 0;
    param_1->nodes[5] = 0;
    param_1->nodes[6] = 0;
    param_1->nodes[7] = 0;
  }
  return param_1;
}

// construct<oo2::SuffixTrie2::ChildrenSparseN<16>_> @ 14f3ab7f0

ChildrenSparseN<16> * __cdecl
oo2::construct<oo2::SuffixTrie2::ChildrenSparseN<16>_>(ChildrenSparseN<16> *param_1)

{
  if (param_1 != (ChildrenSparseN<16> *)0x0) {
    param_1->select[0] = '\0';
    param_1->select[1] = '\0';
    param_1->select[2] = '\0';
    param_1->select[3] = '\0';
    param_1->select[4] = '\0';
    param_1->select[5] = '\0';
    param_1->select[6] = '\0';
    param_1->select[7] = '\0';
    param_1->select[8] = '\0';
    param_1->select[9] = '\0';
    param_1->select[10] = '\0';
    param_1->select[0xb] = '\0';
    param_1->select[0xc] = '\0';
    param_1->select[0xd] = '\0';
    param_1->select[0xe] = '\0';
    param_1->select[0xf] = '\0';
    param_1->nodes[0] = 0;
    param_1->nodes[1] = 0;
    param_1->nodes[2] = 0;
    param_1->nodes[3] = 0;
    param_1->nodes[4] = 0;
    param_1->nodes[5] = 0;
    param_1->nodes[6] = 0;
    param_1->nodes[7] = 0;
    param_1->nodes[8] = 0;
    param_1->nodes[9] = 0;
    param_1->nodes[10] = 0;
    param_1->nodes[0xb] = 0;
    param_1->nodes[0xc] = 0;
    param_1->nodes[0xd] = 0;
    param_1->nodes[0xe] = 0;
    param_1->nodes[0xf] = 0;
  }
  return param_1;
}

// construct<oo2::SuffixTrie2::ChildrenFull256> @ 14f3ab820

ChildrenFull256 * __cdecl
oo2::construct<oo2::SuffixTrie2::ChildrenFull256>(ChildrenFull256 *param_1)

{
  if (param_1 != (ChildrenFull256 *)0x0) {
    memset(param_1,0,0x400);
  }
  return param_1;
}

// construct<oo2::SuffixTrie2::ChildrenSparseI> @ 14f3ab860

ChildrenSparseI * __cdecl
oo2::construct<oo2::SuffixTrie2::ChildrenSparseI>(ChildrenSparseI *param_1)

{
  if (param_1 != (ChildrenSparseI *)0x0) {
    rrMemSetZero(param_1,0x100);
  }
  return param_1;
}

// construct<oo2::UnpackedMatchPair,int_&,int> @ 14f3ab8a0

UnpackedMatchPair * __cdecl
oo2::construct<oo2::UnpackedMatchPair,int_&,int>
          (UnpackedMatchPair *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_1 != (UnpackedMatchPair *)0x0) {
    iVar1 = *param_3;
    param_1->length = *param_2;
    param_1->offset = iVar1;
  }
  return param_1;
}

// construct<oo2::SuffixTrie2::SuffixTrie2MatchFinder,unsigned_char_const_*_&,int_&,int_&,oo2::LRMSet_*_&,enum_oo2::OodleLZ_Jobify_&,void_*_&,int,oo2::rrArenaAllocator_*_&> @ 14f3ab8c0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixTrie2MatchFinder * __cdecl
oo2::
construct<oo2::SuffixTrie2::SuffixTrie2MatchFinder,unsigned_char_const_*_&,int_&,int_&,oo2::LRMSet_*_&,enum_oo2::OodleLZ_Jobify_&,void_*_&,int,oo2::rrArenaAllocator_*_&>
          (SuffixTrie2MatchFinder *param_1,uchar **param_2,int *param_3,int *param_4,
          LRMSet **param_5,OodleLZ_Jobify *param_6,void **param_7,int *param_8,
          rrArenaAllocator **param_9)

{
  if (param_1 != (SuffixTrie2MatchFinder *)0x0) {
    SuffixTrie2::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder
              (param_1,*param_2,*param_3,*param_4,*param_5,*param_6,*param_7,*param_8,*param_9);
  }
  return param_1;
}

// destruct<oo2::SuffixTrie2::ChildrenSparseN<8>_> @ 14f3ab970

ChildrenSparseN<8> * __cdecl
oo2::destruct<oo2::SuffixTrie2::ChildrenSparseN<8>_>(ChildrenSparseN<8> *param_1)

{
  return param_1;
}

// destruct<oo2::SuffixTrie2::ChildrenSparseN<16>_> @ 14f3ab980

ChildrenSparseN<16> * __cdecl
oo2::destruct<oo2::SuffixTrie2::ChildrenSparseN<16>_>(ChildrenSparseN<16> *param_1)

{
  return param_1;
}

// destruct<oo2::SuffixTrie2::ChildrenSparseI> @ 14f3ab990

ChildrenSparseI * __cdecl oo2::destruct<oo2::SuffixTrie2::ChildrenSparseI>(ChildrenSparseI *param_1)

{
  return param_1;
}

// destruct<oo2::UnpackedMatchPair> @ 14f3ab9a0

UnpackedMatchPair * __cdecl oo2::destruct<oo2::UnpackedMatchPair>(UnpackedMatchPair *param_1)

{
  return param_1;
}

// destruct<oo2::UnpackedMatchPair> @ 14f3ab9b0

UnpackedMatchPair * __cdecl
oo2::destruct<oo2::UnpackedMatchPair>(UnpackedMatchPair *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct_virtual<oo2::SuffixTrie2::SuffixTrie2MatchFinder> @ 14f3ab9c0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixTrie2MatchFinder * __cdecl
oo2::destruct_virtual<oo2::SuffixTrie2::SuffixTrie2MatchFinder>(SuffixTrie2MatchFinder *param_1)

{
  (**(code **)param_1->_padding_)(param_1,0);
  return param_1;
}

// emplace_back<int_&,int> @ 14f3ab9e0

void __thiscall
oo2::vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::
emplace_back<int_&,int>
          (vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this,
          int *param_1,int *param_2)

{
  ulong64 uVar1;
  int iVar2;
  ulong64 uVar3;
  UnpackedMatchPair *pUVar4;
  int *piVar5;
  
  uVar3 = *(ulong64 *)&this->field_0x10;
  uVar1 = uVar3 + 1;
  if (*(ulonglong *)&this->field_0x8 < uVar1) {
    pUVar4 = vector_storage<oo2::UnpackedMatchPair>::makefit1
                       ((vector_storage<oo2::UnpackedMatchPair> *)this,uVar1,uVar3);
    piVar5 = (int *)(*(longlong *)this + uVar3 * 8);
    if (piVar5 != (int *)0x0) {
      iVar2 = *param_2;
      *piVar5 = *param_1;
      piVar5[1] = iVar2;
    }
    *(ulong64 *)&this->field_0x10 = uVar1;
    if (pUVar4 != (UnpackedMatchPair *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pUVar4);
    }
  }
  else {
    *(ulong64 *)&this->field_0x10 = uVar1;
    piVar5 = (int *)(*(longlong *)this + uVar3 * 8);
    if (piVar5 != (int *)0x0) {
      iVar2 = *param_2;
      *piVar5 = *param_1;
      piVar5[1] = iVar2;
    }
  }
  return;
}

// extend_construct_in_place<int_&,int> @ 14f3abaa0

void __thiscall
oo2::vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::
extend_construct_in_place<int_&,int>
          (vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this,
          int *param_1,int *param_2)

{
  ulong64 uVar1;
  int iVar2;
  ulong64 uVar3;
  UnpackedMatchPair *pUVar4;
  int *piVar5;
  
  uVar3 = this->m_size;
  uVar1 = uVar3 + 1;
  if ((ulonglong)this->_padding_ < uVar1) {
    pUVar4 = vector_storage<oo2::UnpackedMatchPair>::makefit1
                       ((vector_storage<oo2::UnpackedMatchPair> *)this,uVar1,uVar3);
    piVar5 = (int *)(this->_padding_ + uVar3 * 8);
    if (piVar5 != (int *)0x0) {
      iVar2 = *param_2;
      *piVar5 = *param_1;
      piVar5[1] = iVar2;
    }
    this->m_size = uVar1;
    if (pUVar4 != (UnpackedMatchPair *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(pUVar4);
    }
  }
  else {
    this->m_size = uVar1;
    piVar5 = (int *)(this->_padding_ + uVar3 * 8);
    if (piVar5 != (int *)0x0) {
      iVar2 = *param_2;
      *piVar5 = *param_1;
      piVar5[1] = iVar2;
    }
  }
  return;
}

// forward<int_&> @ 14f3abb50

int * __cdecl oo2::forward<int_&>(int *param_1)

{
  return param_1;
}

// forward<oo2::LRMSet_*_&> @ 14f3abb60

LRMSet ** __cdecl oo2::forward<oo2::LRMSet_*_&>(LRMSet **param_1)

{
  return param_1;
}

// forward<oo2::rrArenaAllocator_*_&> @ 14f3abb70

rrArenaAllocator ** __cdecl oo2::forward<oo2::rrArenaAllocator_*_&>(rrArenaAllocator **param_1)

{
  return param_1;
}

// forward<void_*_&> @ 14f3abb80

void ** __cdecl oo2::forward<void_*_&>(void **param_1)

{
  return param_1;
}

// forward<unsigned_char_const_*_&> @ 14f3abb90

uchar ** __cdecl oo2::forward<unsigned_char_const_*_&>(uchar **param_1)

{
  return param_1;
}

// forward<enum_oo2::OodleLZ_Jobify_&> @ 14f3abba0

OodleLZ_Jobify * __cdecl oo2::forward<enum_oo2::OodleLZ_Jobify_&>(OodleLZ_Jobify *param_1)

{
  return param_1;
}

// forward<int> @ 14f3abbb0

int * __cdecl oo2::forward<int>(int *param_1)

{
  return param_1;
}

// move<oo2::UnpackedMatchPair_&> @ 14f3abbc0

UnpackedMatchPair * __cdecl oo2::move<oo2::UnpackedMatchPair_&>(UnpackedMatchPair *param_1)

{
  return param_1;
}

// move_construct<oo2::UnpackedMatchPair> @ 14f3abbd0

void __cdecl
oo2::move_construct<oo2::UnpackedMatchPair>(UnpackedMatchPair *param_1,UnpackedMatchPair *param_2)

{
  if (param_1 != (UnpackedMatchPair *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<oo2::UnpackedMatchPair> @ 14f3abbf0

void __cdecl
oo2::move_construct<oo2::UnpackedMatchPair>
          (UnpackedMatchPair *param_1,UnpackedMatchPair *param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (UnpackedMatchPair *)0x0) {
        *param_1 = *(UnpackedMatchPair *)(lVar1 + (longlong)param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// rrAlignUpPointer<void> @ 14f3abc20

void * __cdecl oo2::rrAlignUpPointer<void>(void *param_1,long64 param_2)

{
  return (void *)((longlong)param_1 + param_2 + -1 & ~(param_2 - 1U));
}

// rrArenaArray<int> @ 14f3abc40

rrArenaArray<int> * __thiscall oo2::rrArenaArray<int>::rrArenaArray<int>(rrArenaArray<int> *this)

{
  this->m_ptr = (int *)0x0;
  this->m_alloc = (void *)0x0;
  return this;
}

// rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_> @ 14f3abc60

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_> * __thiscall
oo2::rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_>::
rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_>
          (rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_> *this)

{
  this->m_ptr = (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)0x0;
  this->m_alloc = (void *)0x0;
  return this;
}

// rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000> @ 14f3abc80

rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000> * __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::
rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000> *this)

{
  this->m_next = 0x1995;
  this->m_chunkList = (Chunk *)0x0;
  this->m_freeList = (FreeList *)0x0;
  this->m_scratch = (rrArenaAllocator *)0x0;
  return this;
}

// rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000> @ 14f3abca0

rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000> * __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::
rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000> *this)

{
  this->m_next = 0xcca;
  this->m_chunkList = (Chunk *)0x0;
  this->m_freeList = (FreeList *)0x0;
  this->m_scratch = (rrArenaAllocator *)0x0;
  return this;
}

// rrPool<oo2::SuffixTrie2::ChildrenFull256,262000> @ 14f3abcc0

rrPool<oo2::SuffixTrie2::ChildrenFull256,262000> * __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>::
rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>
          (rrPool<oo2::SuffixTrie2::ChildrenFull256,262000> *this)

{
  this->m_next = 0xff;
  this->m_chunkList = (Chunk *)0x0;
  this->m_freeList = (FreeList *)0x0;
  this->m_scratch = (rrArenaAllocator *)0x0;
  return this;
}

// rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000> @ 14f3abce0

rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000> * __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::
rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>
          (rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000> *this)

{
  this->m_next = 0x248;
  this->m_chunkList = (Chunk *)0x0;
  this->m_freeList = (FreeList *)0x0;
  this->m_scratch = (rrArenaAllocator *)0x0;
  return this;
}

// vector<oo2::UnpackedMatchPair> @ 14f3abd00

vector<oo2::UnpackedMatchPair> * __thiscall
oo2::vector<oo2::UnpackedMatchPair>::vector<oo2::UnpackedMatchPair>
          (vector<oo2::UnpackedMatchPair> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> @ 14f3abd20

vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> * __thiscall
oo2::vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::
vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>
          (vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> @ 14f3abd40

vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> * __thiscall
oo2::vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::
vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>
          (vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_storage<oo2::UnpackedMatchPair> @ 14f3abd60

vector_storage<oo2::UnpackedMatchPair> * __thiscall
oo2::vector_storage<oo2::UnpackedMatchPair>::vector_storage<oo2::UnpackedMatchPair>
          (vector_storage<oo2::UnpackedMatchPair> *this)

{
  this->m_begin = (UnpackedMatchPair *)0x0;
  this->m_capacity = 0;
  return this;
}

// ChildrenSparseI @ 14f3abd80

ChildrenSparseI * __thiscall
oo2::SuffixTrie2::ChildrenSparseI::ChildrenSparseI(ChildrenSparseI *this)

{
  rrMemSetZero(this,0x100);
  return this;
}

// SuffixTrie2MatchFinder @ 14f3abdc0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixTrie2MatchFinder * __thiscall
oo2::SuffixTrie2::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder
          (SuffixTrie2MatchFinder *this,uchar *param_1,int param_2,int param_3,LRMSet *param_4,
          OodleLZ_Jobify param_5,void *param_6,int param_7,rrArenaAllocator *param_8)

{
  uchar *puVar1;
  ulonglong *puVar2;
  int *_Dst;
  rrArenaArray<oo2::SuffixTrie2::SuffixNode> *prVar3;
  rrArenaArray<oo2::SuffixTrie2::SuffixNode> *_Dst_00;
  sbyte sVar4;
  ulonglong *puVar5;
  rrArenaArray<oo2::SuffixTrie2::SuffixNode> *prVar6;
  ulonglong uVar7;
  size_t _Size;
  longlong lVar8;
  SuffixNode *_Size_00;
  ulonglong uVar9;
  
  this->_padding_ = (longlong)&___7SuffixTrie2MatchFinder_SuffixTrie2_oo2__6B_;
  (this->ChildrenSparse1_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenSparse1_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenSparse1_pool).m_next = 0x1995;
  (this->ChildrenSparse1_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenSparse2_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenSparse2_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenSparse2_pool).m_next = 0xcca;
  (this->ChildrenSparse2_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenSparseI_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenSparseI_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenSparseI_pool).m_next = 0x248;
  (this->ChildrenSparseI_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenFull256_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenFull256_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenFull256_pool).m_next = 0xff;
  (this->ChildrenFull256_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->vfirstbytes).m_ptr = (int *)0x0;
  (this->vfirstbytes).m_alloc = (void *)0x0;
  (this->node_chunks).m_ptr = (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)0x0;
  (this->node_chunks).m_alloc = (void *)0x0;
  *(undefined8 *)&this->lrm_matches = 0;
  *(undefined8 *)&(this->lrm_matches).field_0x8 = 0;
  *(undefined8 *)&(this->lrm_matches).field_0x10 = 0;
  puVar1 = param_1 + -1;
  this->m_ubuf = puVar1;
  this->m_size = param_2 + 1;
  this->scratch_arena = param_8;
  rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::AddScratch
            (&this->ChildrenSparse1_pool,param_8);
  rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::AddScratch
            (&this->ChildrenSparse2_pool,param_8);
  rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::AddScratch(&this->ChildrenSparseI_pool,param_8);
  rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>::AddScratch(&this->ChildrenFull256_pool,param_8);
  this->num_firstbytes = param_7;
  sVar4 = 0x18;
  if (param_7 == 2) {
    sVar4 = 0x10;
  }
  this->firstbytes_mask = (1 << sVar4) + -1;
  _Size = (longlong)(1 << sVar4) * 4;
  if (param_8 == (rrArenaAllocator *)0x0) {
LAB_14f3abf92:
    _Dst = (*g_fp_OodleCore_Plugin_MallocAligned)(_Size,0x10);
    if (_Dst == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(_Size);
    }
  }
  else {
    uVar7 = _Size + 0xf & 0xfffffffffffffff0;
    uVar9 = (ulonglong)(-(uint)(param_8->m_unorderedStart != 0) & 0x10);
    _Dst = (int *)param_8->m_cur;
    if (param_8->m_size + param_8->m_base < (longlong)_Dst + uVar7 + uVar9) {
      (this->vfirstbytes).m_alloc = (void *)0x0;
      goto LAB_14f3abf92;
    }
    puVar5 = (ulonglong *)((longlong)_Dst + uVar7);
    param_8->m_cur = (ulong64)puVar5;
    if (param_8->m_unorderedStart != 0) {
      *puVar5 = uVar7;
      puVar5[1] = 0;
      param_8->m_cur = param_8->m_cur + uVar9;
      puVar5 = (ulonglong *)param_8->m_cur;
    }
    puVar2 = (ulonglong *)param_8->m_cur_max;
    if ((ulonglong *)param_8->m_cur_max <= puVar5) {
      puVar2 = puVar5;
    }
    param_8->m_cur_max = (ulong64)puVar2;
    (this->vfirstbytes).m_alloc = _Dst;
    if (_Dst == (int *)0x0) goto LAB_14f3abf92;
  }
  (this->vfirstbytes).m_ptr = _Dst;
  memset(_Dst,0,_Size);
  lVar8 = (longlong)(param_2 + 0x4000 >> 0xe);
  _Size_00 = (SuffixNode *)(lVar8 * 0x10);
  if (param_8 != (rrArenaAllocator *)0x0) {
    uVar7 = (ulonglong)(-(uint)(param_8->m_unorderedStart != 0) & 0x10);
    _Dst_00 = (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)param_8->m_cur;
    if (param_8->m_size + param_8->m_base < (longlong)&_Dst_00[lVar8].m_ptr + uVar7) {
      (this->node_chunks).m_alloc = (void *)0x0;
    }
    else {
      prVar6 = _Dst_00 + lVar8;
      param_8->m_cur = (ulong64)prVar6;
      if (param_8->m_unorderedStart != 0) {
        prVar6->m_ptr = _Size_00;
        prVar6->m_alloc = (void *)0x0;
        param_8->m_cur = param_8->m_cur + uVar7;
        prVar6 = (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)param_8->m_cur;
      }
      prVar3 = (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)param_8->m_cur_max;
      if ((rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)param_8->m_cur_max <= prVar6) {
        prVar3 = prVar6;
      }
      param_8->m_cur_max = (ulong64)prVar3;
      (this->node_chunks).m_alloc = _Dst_00;
      if (_Dst_00 != (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)0x0) goto LAB_14f3ac06f;
    }
  }
  _Dst_00 = (*g_fp_OodleCore_Plugin_MallocAligned)((long64)_Size_00,0x10);
  if (_Dst_00 == (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed((long64)_Size_00);
  }
LAB_14f3ac06f:
  (this->node_chunks).m_ptr = _Dst_00;
  memset(_Dst_00,0,(size_t)_Size_00);
  this->lastml = 0;
  this->follownode = 0;
  this->node_to_update_follow = 0;
  this->maxml_offs = 0;
  this->maxml_pos = 0;
  this->pos = 1;
  this->nextnode = 1;
  AllocNodeChunk(this,1);
  this->has_lrm = param_4 != (LRMSet *)0x0;
  this->run_lrm_as_job = param_5 != OodleLZ_Jobify_Disable;
  LRMScannerWindowed_Init
            (&this->scanner,param_4,puVar1 + (param_3 + 1),puVar1 + (param_2 + 1),0x7fffffff);
  this->jobifyUserPtr = param_6;
  ProcessChunk(this,param_3,(UnpackedMatchPair *)0x0,0);
  return this;
}

// UnpackedMatchPair @ 14f3ac160

UnpackedMatchPair * __thiscall
oo2::UnpackedMatchPair::UnpackedMatchPair(UnpackedMatchPair *this,int param_1,int param_2)

{
  this->length = param_1;
  this->offset = param_2;
  return this;
}

// ~rrArenaArray<int> @ 14f3ac170

void __thiscall oo2::rrArenaArray<int>::~rrArenaArray<int>(rrArenaArray<int> *this)

{
  return;
}

// ~rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_> @ 14f3ac180

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2::rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_>::
~rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_>
          (rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_> *this)

{
  return;
}

// ~rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000> @ 14f3ac1a0

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::
~rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000> *this)

{
  FreeAllChunks(this,false);
  return;
}

// ~rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000> @ 14f3ac1c0

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::
~rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000> *this)

{
  FreeAllChunks(this,false);
  return;
}

// ~rrPool<oo2::SuffixTrie2::ChildrenFull256,262000> @ 14f3ac1e0

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>::
~rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>
          (rrPool<oo2::SuffixTrie2::ChildrenFull256,262000> *this)

{
  FreeAllChunks(this,false);
  return;
}

// ~rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000> @ 14f3ac200

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::
~rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>
          (rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000> *this)

{
  FreeAllChunks(this,false);
  return;
}

// ~vector<oo2::UnpackedMatchPair> @ 14f3ac220

void __thiscall
oo2::vector<oo2::UnpackedMatchPair>::~vector<oo2::UnpackedMatchPair>
          (vector<oo2::UnpackedMatchPair> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> @ 14f3ac280

void __thiscall
oo2::vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::
~vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>
          (vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> @ 14f3ac2e0

void __thiscall
oo2::vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::
~vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>
          (vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_storage<oo2::UnpackedMatchPair> @ 14f3ac340

void __thiscall
oo2::vector_storage<oo2::UnpackedMatchPair>::~vector_storage<oo2::UnpackedMatchPair>
          (vector_storage<oo2::UnpackedMatchPair> *this)

{
  if (this->m_begin != (UnpackedMatchPair *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (UnpackedMatchPair *)0x0;
  return;
}

// ~SuffixTrie2MatchFinder @ 14f3ac380

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2::SuffixTrie2::SuffixTrie2MatchFinder::~SuffixTrie2MatchFinder(SuffixTrie2MatchFinder *this)

{
  rrArenaAllocator *prVar1;
  rrArenaArray<oo2::SuffixTrie2::SuffixNode> *prVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  this->_padding_ = (longlong)&___7SuffixTrie2MatchFinder_SuffixTrie2_oo2__6B_;
  iVar5 = this->m_size + 0x3fff >> 0xe;
  lVar7 = 0;
  lVar6 = (longlong)iVar5;
  if (0 < iVar5) {
    do {
      puVar8 = (undefined8 *)((longlong)&((this->node_chunks).m_ptr)->m_ptr + lVar7);
      prVar1 = this->scratch_arena;
      if ((void *)*puVar8 != (void *)0x0) {
        if ((prVar1 == (rrArenaAllocator *)0x0) || ((void *)puVar8[1] == (void *)0x0)) {
          (*g_fp_OodleCore_Plugin_Free)((void *)*puVar8);
        }
        else {
          if (prVar1->m_unorderedStart != 0) {
            rrArenaAllocator::Free(prVar1,(void *)puVar8[1],0x80040);
          }
          puVar8[1] = 0;
        }
        *puVar8 = 0;
      }
      lVar7 = lVar7 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  prVar1 = this->scratch_arena;
  prVar2 = (this->node_chunks).m_ptr;
  if (prVar2 != (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)0x0) {
    if ((prVar1 == (rrArenaAllocator *)0x0) ||
       (pvVar3 = (this->node_chunks).m_alloc, pvVar3 == (void *)0x0)) {
      (*g_fp_OodleCore_Plugin_Free)(prVar2);
    }
    else {
      if (prVar1->m_unorderedStart != 0) {
        rrArenaAllocator::Free(prVar1,pvVar3,(longlong)iVar5 << 4);
      }
      (this->node_chunks).m_alloc = (void *)0x0;
    }
    (this->node_chunks).m_ptr = (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)0x0;
  }
  prVar1 = this->scratch_arena;
  piVar4 = (this->vfirstbytes).m_ptr;
  if (piVar4 != (int *)0x0) {
    if ((prVar1 == (rrArenaAllocator *)0x0) ||
       (pvVar3 = (this->vfirstbytes).m_alloc, pvVar3 == (void *)0x0)) {
      (*g_fp_OodleCore_Plugin_Free)(piVar4);
    }
    else {
      if (prVar1->m_unorderedStart != 0) {
        rrArenaAllocator::Free(prVar1,pvVar3,(longlong)(this->firstbytes_mask + 1) * 4);
      }
      (this->vfirstbytes).m_alloc = (void *)0x0;
    }
    (this->vfirstbytes).m_ptr = (int *)0x0;
  }
  if (this->scratch_arena != (rrArenaAllocator *)0x0) {
    rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::FreeAllChunks
              (&this->ChildrenSparse1_pool,true);
    rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::FreeAllChunks
              (&this->ChildrenSparse2_pool,true);
    rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::FreeAllChunks
              (&this->ChildrenSparseI_pool,true);
    rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>::FreeAllChunks
              (&this->ChildrenFull256_pool,true);
  }
  *(undefined8 *)&(this->lrm_matches).field_0x10 = 0;
  if (*(void **)&this->lrm_matches != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(*(void **)&this->lrm_matches);
  }
  *(undefined8 *)&this->lrm_matches = 0;
  *(undefined8 *)&(this->lrm_matches).field_0x8 = 0;
  rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>::FreeAllChunks(&this->ChildrenFull256_pool,false)
  ;
  rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::FreeAllChunks(&this->ChildrenSparseI_pool,false)
  ;
  rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::FreeAllChunks
            (&this->ChildrenSparse2_pool,false);
  rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::FreeAllChunks
            (&this->ChildrenSparse1_pool,false);
  this->_padding_ = (longlong)&___7IncrementalMatchFinder_oo2__6B_;
  return;
}

// operator[] @ 14f3ac5a0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

rrArenaArray<oo2::SuffixTrie2::SuffixNode> * __thiscall
oo2::rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_>::operator[]
          (rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_> *this,long64 param_1)

{
  return this->m_ptr + param_1;
}

// operator[] @ 14f3ac5c0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode * __thiscall
oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>::operator[]
          (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *this,long64 param_1)

{
  return this->m_ptr + param_1;
}

// operator[] @ 14f3ac5e0

UnpackedMatchPair * __thiscall
oo2::vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::operator[]
          (vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this,
          ulong64 param_1)

{
  return (UnpackedMatchPair *)(*(longlong *)this + param_1 * 8);
}

// `scalar_deleting_destructor' @ 14f3ac600

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void * __thiscall
oo2::SuffixTrie2::SuffixTrie2MatchFinder::_scalar_deleting_destructor_
          (SuffixTrie2MatchFinder *this,uint param_1)

{
  ~SuffixTrie2MatchFinder(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// AddChunk @ 14f3ac640

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::AddChunk
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000> *this)

{
  rrArenaAllocator *prVar1;
  Chunk *pCVar2;
  int *piVar3;
  Chunk *pCVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  
  prVar1 = this->m_scratch;
  iVar6 = 0;
  if (prVar1 != (rrArenaAllocator *)0x0) {
    pCVar4 = (Chunk *)prVar1->m_cur;
    uVar7 = (ulonglong)(-(uint)(prVar1->m_unorderedStart != 0) & 0x10);
    if (pCVar4[1].items[0].select + (uVar7 - 4) <= (undefined1 *)(prVar1->m_size + prVar1->m_base))
    {
      piVar5 = &pCVar4[1].from_arena;
      prVar1->m_cur = (ulong64)piVar5;
      if (prVar1->m_unorderedStart != 0) {
        pCVar4[1].from_arena = 0x3ff60;
        pCVar4[1].items[0].select[0] = '\0';
        pCVar4[1].items[0].select[1] = '\0';
        pCVar4[1].items[0].select[2] = '\0';
        pCVar4[1].items[0].select[3] = '\0';
        *(undefined8 *)(pCVar4[1].items[0].select + 4) = 0;
        prVar1->m_cur = prVar1->m_cur + uVar7;
        piVar5 = (int *)prVar1->m_cur;
      }
      piVar3 = (int *)prVar1->m_cur_max;
      if ((int *)prVar1->m_cur_max <= piVar5) {
        piVar3 = piVar5;
      }
      prVar1->m_cur_max = (ulong64)piVar3;
      if (pCVar4 != (Chunk *)0x0) {
        iVar6 = 1;
        goto LAB_14f3ac6ef;
      }
    }
  }
  pCVar4 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x3ff58,0x10);
  if (pCVar4 == (Chunk *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x3ff58);
  }
LAB_14f3ac6ef:
  pCVar2 = this->m_chunkList;
  this->m_next = 0;
  pCVar4->from_arena = iVar6;
  pCVar4->next = pCVar2;
  this->m_chunkList = pCVar4;
  return;
}

// AddChunk @ 14f3ac720

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::AddChunk
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000> *this)

{
  rrArenaAllocator *prVar1;
  Chunk *pCVar2;
  Chunk *pCVar3;
  Chunk *pCVar4;
  int iVar5;
  ulonglong uVar6;
  
  prVar1 = this->m_scratch;
  iVar5 = 0;
  if (prVar1 != (rrArenaAllocator *)0x0) {
    pCVar3 = (Chunk *)prVar1->m_cur;
    uVar6 = (ulonglong)(-(uint)(prVar1->m_unorderedStart != 0) & 0x10);
    if (pCVar3[1].items[0].select + (uVar6 - 0xc) <= (undefined1 *)(prVar1->m_size + prVar1->m_base)
       ) {
      pCVar4 = pCVar3 + 1;
      prVar1->m_cur = (ulong64)pCVar4;
      if (prVar1->m_unorderedStart != 0) {
        pCVar4->next = (Chunk *)0x3ff30;
        pCVar3[1].from_arena = 0;
        pCVar3[1].items[0].select[0] = '\0';
        pCVar3[1].items[0].select[1] = '\0';
        pCVar3[1].items[0].select[2] = '\0';
        pCVar3[1].items[0].select[3] = '\0';
        prVar1->m_cur = prVar1->m_cur + uVar6;
        pCVar4 = (Chunk *)prVar1->m_cur;
      }
      pCVar2 = (Chunk *)prVar1->m_cur_max;
      if ((Chunk *)prVar1->m_cur_max <= pCVar4) {
        pCVar2 = pCVar4;
      }
      prVar1->m_cur_max = (ulong64)pCVar2;
      if (pCVar3 != (Chunk *)0x0) {
        iVar5 = 1;
        goto LAB_14f3ac7cf;
      }
    }
  }
  pCVar3 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x3ff30,0x10);
  if (pCVar3 == (Chunk *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x3ff30);
  }
LAB_14f3ac7cf:
  pCVar4 = this->m_chunkList;
  this->m_next = 0;
  pCVar3->from_arena = iVar5;
  pCVar3->next = pCVar4;
  this->m_chunkList = pCVar3;
  return;
}

// AddChunk @ 14f3ac800

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>::AddChunk
          (rrPool<oo2::SuffixTrie2::ChildrenFull256,262000> *this)

{
  rrArenaAllocator *prVar1;
  Chunk *pCVar2;
  Chunk *pCVar3;
  Chunk *pCVar4;
  int iVar5;
  ulonglong uVar6;
  
  prVar1 = this->m_scratch;
  iVar5 = 0;
  if (prVar1 != (rrArenaAllocator *)0x0) {
    pCVar3 = (Chunk *)prVar1->m_cur;
    uVar6 = (ulonglong)(-(uint)(prVar1->m_unorderedStart != 0) & 0x10);
    if ((longlong)pCVar3[1].items[0].nodes + (uVar6 - 0xc) <= prVar1->m_size + prVar1->m_base) {
      pCVar4 = pCVar3 + 1;
      prVar1->m_cur = (ulong64)pCVar4;
      if (prVar1->m_unorderedStart != 0) {
        pCVar4->next = (Chunk *)0x3fc10;
        pCVar3[1].from_arena = 0;
        pCVar3[1].items[0].nodes[0] = 0;
        prVar1->m_cur = prVar1->m_cur + uVar6;
        pCVar4 = (Chunk *)prVar1->m_cur;
      }
      pCVar2 = (Chunk *)prVar1->m_cur_max;
      if ((Chunk *)prVar1->m_cur_max <= pCVar4) {
        pCVar2 = pCVar4;
      }
      prVar1->m_cur_max = (ulong64)pCVar2;
      if (pCVar3 != (Chunk *)0x0) {
        iVar5 = 1;
        goto LAB_14f3ac8af;
      }
    }
  }
  pCVar3 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x3fc10,0x10);
  if (pCVar3 == (Chunk *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x3fc10);
  }
LAB_14f3ac8af:
  pCVar4 = this->m_chunkList;
  this->m_next = 0;
  pCVar3->from_arena = iVar5;
  pCVar3->next = pCVar4;
  this->m_chunkList = pCVar3;
  return;
}

// AddChunk @ 14f3ac8e0

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::AddChunk
          (rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000> *this)

{
  rrArenaAllocator *prVar1;
  Chunk *pCVar2;
  Chunk *pCVar3;
  Chunk *pCVar4;
  int iVar5;
  ulonglong uVar6;
  
  prVar1 = this->m_scratch;
  iVar5 = 0;
  if (prVar1 != (rrArenaAllocator *)0x0) {
    pCVar3 = (Chunk *)prVar1->m_cur;
    uVar6 = (ulonglong)(-(uint)(prVar1->m_unorderedStart != 0) & 0x10);
    if (pCVar3[1].items[0].sel2ind + (uVar6 - 0xc) <=
        (undefined1 *)(prVar1->m_size + prVar1->m_base)) {
      pCVar4 = pCVar3 + 1;
      prVar1->m_cur = (ulong64)pCVar4;
      if (prVar1->m_unorderedStart != 0) {
        pCVar4->next = (Chunk *)0x3fe10;
        pCVar3[1].from_arena = 0;
        pCVar3[1].items[0].sel2ind[0] = '\0';
        pCVar3[1].items[0].sel2ind[1] = '\0';
        pCVar3[1].items[0].sel2ind[2] = '\0';
        pCVar3[1].items[0].sel2ind[3] = '\0';
        prVar1->m_cur = prVar1->m_cur + uVar6;
        pCVar4 = (Chunk *)prVar1->m_cur;
      }
      pCVar2 = (Chunk *)prVar1->m_cur_max;
      if ((Chunk *)prVar1->m_cur_max <= pCVar4) {
        pCVar2 = pCVar4;
      }
      prVar1->m_cur_max = (ulong64)pCVar2;
      if (pCVar3 != (Chunk *)0x0) {
        iVar5 = 1;
        goto LAB_14f3ac98f;
      }
    }
  }
  pCVar3 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x3fe10,0x10);
  if (pCVar3 == (Chunk *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x3fe10);
  }
LAB_14f3ac98f:
  pCVar4 = this->m_chunkList;
  this->m_next = 0;
  pCVar3->from_arena = iVar5;
  pCVar3->next = pCVar4;
  this->m_chunkList = pCVar3;
  return;
}

// AddScratch @ 14f3ac9c0

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::AddScratch
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000> *this,rrArenaAllocator *param_1)

{
  this->m_scratch = param_1;
  return;
}

// AddScratch @ 14f3ac9d0

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::AddScratch
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000> *this,rrArenaAllocator *param_1)

{
  this->m_scratch = param_1;
  return;
}

// AddScratch @ 14f3ac9e0

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>::AddScratch
          (rrPool<oo2::SuffixTrie2::ChildrenFull256,262000> *this,rrArenaAllocator *param_1)

{
  this->m_scratch = param_1;
  return;
}

// AddScratch @ 14f3ac9f0

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::AddScratch
          (rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000> *this,rrArenaAllocator *param_1)

{
  this->m_scratch = param_1;
  return;
}

// Alloc @ 14f3aca00

ChildrenSparseN<8> * __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::Alloc
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000> *this)

{
  ChildrenSparseN<8> *pCVar1;
  int iVar2;
  
  pCVar1 = (ChildrenSparseN<8> *)this->m_freeList;
  if (pCVar1 == (ChildrenSparseN<8> *)0x0) {
    iVar2 = this->m_next;
    if (iVar2 == 0x1995) {
      AddChunk(this);
      iVar2 = this->m_next;
    }
    this->m_next = iVar2 + 1;
    pCVar1 = this->m_chunkList->items + iVar2;
    if (pCVar1 == (ChildrenSparseN<8> *)0x0) {
      return (ChildrenSparseN<8> *)0x0;
    }
  }
  else {
    this->m_freeList = *(FreeList **)pCVar1->select;
  }
  pCVar1->select[0] = '\0';
  pCVar1->select[1] = '\0';
  pCVar1->select[2] = '\0';
  pCVar1->select[3] = '\0';
  pCVar1->select[4] = '\0';
  pCVar1->select[5] = '\0';
  pCVar1->select[6] = '\0';
  pCVar1->select[7] = '\0';
  pCVar1->nodes[0] = 0;
  pCVar1->nodes[1] = 0;
  pCVar1->nodes[2] = 0;
  pCVar1->nodes[3] = 0;
  pCVar1->nodes[4] = 0;
  pCVar1->nodes[5] = 0;
  pCVar1->nodes[6] = 0;
  pCVar1->nodes[7] = 0;
  return pCVar1;
}

// Alloc @ 14f3aca80

ChildrenSparseN<16> * __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::Alloc
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000> *this)

{
  ChildrenSparseN<16> *pCVar1;
  int iVar2;
  
  pCVar1 = (ChildrenSparseN<16> *)this->m_freeList;
  if (pCVar1 == (ChildrenSparseN<16> *)0x0) {
    iVar2 = this->m_next;
    if (iVar2 == 0xcca) {
      AddChunk(this);
      iVar2 = this->m_next;
    }
    pCVar1 = this->m_chunkList->items + iVar2;
    this->m_next = iVar2 + 1;
    if (pCVar1 == (ChildrenSparseN<16> *)0x0) {
      return (ChildrenSparseN<16> *)0x0;
    }
  }
  else {
    this->m_freeList = *(FreeList **)pCVar1->select;
  }
  pCVar1->select[0] = '\0';
  pCVar1->select[1] = '\0';
  pCVar1->select[2] = '\0';
  pCVar1->select[3] = '\0';
  pCVar1->select[4] = '\0';
  pCVar1->select[5] = '\0';
  pCVar1->select[6] = '\0';
  pCVar1->select[7] = '\0';
  pCVar1->select[8] = '\0';
  pCVar1->select[9] = '\0';
  pCVar1->select[10] = '\0';
  pCVar1->select[0xb] = '\0';
  pCVar1->select[0xc] = '\0';
  pCVar1->select[0xd] = '\0';
  pCVar1->select[0xe] = '\0';
  pCVar1->select[0xf] = '\0';
  pCVar1->nodes[0] = 0;
  pCVar1->nodes[1] = 0;
  pCVar1->nodes[2] = 0;
  pCVar1->nodes[3] = 0;
  pCVar1->nodes[4] = 0;
  pCVar1->nodes[5] = 0;
  pCVar1->nodes[6] = 0;
  pCVar1->nodes[7] = 0;
  pCVar1->nodes[8] = 0;
  pCVar1->nodes[9] = 0;
  pCVar1->nodes[10] = 0;
  pCVar1->nodes[0xb] = 0;
  pCVar1->nodes[0xc] = 0;
  pCVar1->nodes[0xd] = 0;
  pCVar1->nodes[0xe] = 0;
  pCVar1->nodes[0xf] = 0;
  return pCVar1;
}

// Alloc @ 14f3acaf0

ChildrenFull256 * __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>::Alloc
          (rrPool<oo2::SuffixTrie2::ChildrenFull256,262000> *this)

{
  int iVar1;
  ChildrenFull256 *_Dst;
  
  _Dst = (ChildrenFull256 *)this->m_freeList;
  if (_Dst == (ChildrenFull256 *)0x0) {
    iVar1 = this->m_next;
    if (iVar1 == 0xff) {
      AddChunk(this);
      iVar1 = this->m_next;
    }
    _Dst = this->m_chunkList->items + iVar1;
    this->m_next = iVar1 + 1;
    if (_Dst == (ChildrenFull256 *)0x0) {
      return (ChildrenFull256 *)0x0;
    }
  }
  else {
    this->m_freeList = *(FreeList **)_Dst->nodes;
  }
  memset(_Dst,0,0x400);
  return _Dst;
}

// Alloc @ 14f3acb60

ChildrenSparseI * __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::Alloc
          (rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000> *this)

{
  ChildrenSparseI *pCVar1;
  int iVar2;
  
  pCVar1 = (ChildrenSparseI *)this->m_freeList;
  if (pCVar1 != (ChildrenSparseI *)0x0) {
    this->m_freeList = *(FreeList **)pCVar1->sel2ind;
    rrMemSetZero(pCVar1,0x100);
    return pCVar1;
  }
  iVar2 = this->m_next;
  if (iVar2 == 0x248) {
    AddChunk(this);
    iVar2 = this->m_next;
  }
  pCVar1 = this->m_chunkList->items + iVar2;
  this->m_next = iVar2 + 1;
  if (pCVar1 != (ChildrenSparseI *)0x0) {
    rrMemSetZero(pCVar1,0x100);
  }
  return pCVar1;
}

// AllocNodeChunk @ 14f3acc20

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2::SuffixTrie2::SuffixTrie2MatchFinder::AllocNodeChunk(SuffixTrie2MatchFinder *this,int param_1)

{
  rrArenaAllocator *prVar1;
  void *pvVar2;
  undefined8 *puVar3;
  SuffixNode *pSVar4;
  undefined8 *puVar5;
  rrArenaArray<oo2::SuffixTrie2::SuffixNode> *prVar6;
  ulonglong uVar7;
  
  prVar1 = this->scratch_arena;
  prVar6 = (this->node_chunks).m_ptr + ((longlong)param_1 >> 0xe);
  if (prVar1 != (rrArenaAllocator *)0x0) {
    pvVar2 = (void *)prVar1->m_cur;
    uVar7 = (ulonglong)(-(uint)(prVar1->m_unorderedStart != 0) & 0x10);
    if (prVar1->m_size + prVar1->m_base < (longlong)pvVar2 + uVar7 + 0x80040) {
      prVar6->m_alloc = (void *)0x0;
    }
    else {
      puVar5 = (undefined8 *)((longlong)pvVar2 + 0x80040);
      prVar1->m_cur = (ulong64)puVar5;
      if (prVar1->m_unorderedStart != 0) {
        *puVar5 = 0x80040;
        *(undefined8 *)((longlong)pvVar2 + 0x80048) = 0;
        prVar1->m_cur = prVar1->m_cur + uVar7;
        puVar5 = (undefined8 *)prVar1->m_cur;
      }
      puVar3 = (undefined8 *)prVar1->m_cur_max;
      if ((undefined8 *)prVar1->m_cur_max <= puVar5) {
        puVar3 = puVar5;
      }
      prVar1->m_cur_max = (ulong64)puVar3;
      prVar6->m_alloc = pvVar2;
      if (pvVar2 != (void *)0x0) {
        prVar6->m_ptr = (SuffixNode *)((longlong)pvVar2 + 0x3fU & 0xffffffffffffffc0);
        return;
      }
    }
  }
  pSVar4 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x80000,0x40);
  if (pSVar4 == (SuffixNode *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x80000);
  }
  prVar6->m_ptr = pSVar4;
  return;
}

// Allocate @ 14f3acd20

void __thiscall
oo2::rrArenaArray<int>::Allocate
          (rrArenaArray<int> *this,rrArenaAllocator *param_1,long64 param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar1 = param_2 * 4;
  lVar7 = (longlong)param_3;
  if (param_1 != (rrArenaAllocator *)0x0) {
    piVar5 = (int *)param_1->m_cur;
    uVar8 = lVar1 + 0xf + lVar7 & 0xfffffffffffffff0;
    uVar6 = (ulonglong)(-(uint)(param_1->m_unorderedStart != 0) & 0x10);
    if (param_1->m_size + param_1->m_base < (longlong)piVar5 + uVar8 + uVar6) {
      this->m_alloc = (void *)0x0;
    }
    else {
      puVar3 = (ulonglong *)((longlong)piVar5 + uVar8);
      param_1->m_cur = (ulong64)puVar3;
      if (param_1->m_unorderedStart != 0) {
        *puVar3 = uVar8;
        puVar3[1] = 0;
        param_1->m_cur = param_1->m_cur + uVar6;
        puVar3 = (ulonglong *)param_1->m_cur;
      }
      puVar2 = (ulonglong *)param_1->m_cur_max;
      if ((ulonglong *)param_1->m_cur_max <= puVar3) {
        puVar2 = puVar3;
      }
      param_1->m_cur_max = (ulong64)puVar2;
      this->m_alloc = piVar5;
      if (piVar5 != (int *)0x0) {
        if (param_3 != 0) {
          piVar5 = (int *)((longlong)piVar5 + lVar7 + -1 & -lVar7);
        }
        this->m_ptr = piVar5;
        return;
      }
    }
  }
  iVar4 = 0x10;
  if (param_3 != 0) {
    iVar4 = param_3;
  }
  piVar5 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar1,iVar4);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar1);
  }
  this->m_ptr = piVar5;
  return;
}

// Allocate @ 14f3ace20

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2::rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_>::Allocate
          (rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_> *this,
          rrArenaAllocator *param_1,long64 param_2,int param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  rrArenaArray<oo2::SuffixTrie2::SuffixNode> *prVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar6 = param_2 * 0x10;
  lVar7 = (longlong)param_3;
  if (param_1 != (rrArenaAllocator *)0x0) {
    prVar4 = (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)param_1->m_cur;
    uVar8 = lVar7 + 0xf + lVar6 & 0xfffffffffffffff0;
    uVar5 = (ulonglong)(-(uint)(param_1->m_unorderedStart != 0) & 0x10);
    if (param_1->m_size + param_1->m_base < (longlong)&prVar4->m_ptr + uVar8 + uVar5) {
      this->m_alloc = (void *)0x0;
    }
    else {
      puVar2 = (ulonglong *)((longlong)&prVar4->m_ptr + uVar8);
      param_1->m_cur = (ulong64)puVar2;
      if (param_1->m_unorderedStart != 0) {
        *puVar2 = uVar8;
        puVar2[1] = 0;
        param_1->m_cur = param_1->m_cur + uVar5;
        puVar2 = (ulonglong *)param_1->m_cur;
      }
      puVar1 = (ulonglong *)param_1->m_cur_max;
      if ((ulonglong *)param_1->m_cur_max <= puVar2) {
        puVar1 = puVar2;
      }
      param_1->m_cur_max = (ulong64)puVar1;
      this->m_alloc = prVar4;
      if (prVar4 != (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)0x0) {
        if (param_3 != 0) {
          prVar4 = (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)
                   ((longlong)prVar4 + lVar7 + -1 & -lVar7);
        }
        this->m_ptr = prVar4;
        return;
      }
    }
  }
  iVar3 = 0x10;
  if (param_3 != 0) {
    iVar3 = param_3;
  }
  prVar4 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar6,iVar3);
  if (prVar4 == (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar6);
  }
  this->m_ptr = prVar4;
  return;
}

// Allocate @ 14f3acf20

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>::Allocate
          (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *this,rrArenaAllocator *param_1,long64 param_2
          ,int param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  SuffixNode *pSVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar6 = param_2 * 0x20;
  lVar7 = (longlong)param_3;
  if (param_1 != (rrArenaAllocator *)0x0) {
    pSVar4 = (SuffixNode *)param_1->m_cur;
    uVar8 = lVar7 + 0xf + lVar6 & 0xfffffffffffffff0;
    uVar5 = (ulonglong)(-(uint)(param_1->m_unorderedStart != 0) & 0x10);
    if (param_1->m_size + param_1->m_base < (longlong)&pSVar4->pos + uVar8 + uVar5) {
      this->m_alloc = (void *)0x0;
    }
    else {
      puVar2 = (ulonglong *)((longlong)&pSVar4->pos + uVar8);
      param_1->m_cur = (ulong64)puVar2;
      if (param_1->m_unorderedStart != 0) {
        *puVar2 = uVar8;
        puVar2[1] = 0;
        param_1->m_cur = param_1->m_cur + uVar5;
        puVar2 = (ulonglong *)param_1->m_cur;
      }
      puVar1 = (ulonglong *)param_1->m_cur_max;
      if ((ulonglong *)param_1->m_cur_max <= puVar2) {
        puVar1 = puVar2;
      }
      param_1->m_cur_max = (ulong64)puVar1;
      this->m_alloc = pSVar4;
      if (pSVar4 != (SuffixNode *)0x0) {
        if (param_3 != 0) {
          pSVar4 = (SuffixNode *)((longlong)pSVar4 + lVar7 + -1 & -lVar7);
        }
        this->m_ptr = pSVar4;
        return;
      }
    }
  }
  iVar3 = 0x10;
  if (param_3 != 0) {
    iVar3 = param_3;
  }
  pSVar4 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar6,iVar3);
  if (pSVar4 == (SuffixNode *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar6);
  }
  this->m_ptr = pSVar4;
  return;
}

// Free @ 14f3ad020

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::Free
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000> *this,ChildrenSparseN<8> *param_1)

{
  *(FreeList **)param_1->select = this->m_freeList;
  this->m_freeList = (FreeList *)param_1;
  return;
}

// Free @ 14f3ad040

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::Free
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000> *this,ChildrenSparseN<16> *param_1)

{
  *(FreeList **)param_1->select = this->m_freeList;
  this->m_freeList = (FreeList *)param_1;
  return;
}

// Free @ 14f3ad060

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::Free
          (rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000> *this,ChildrenSparseI *param_1)

{
  *(FreeList **)param_1->sel2ind = this->m_freeList;
  this->m_freeList = (FreeList *)param_1;
  return;
}

// FreeAllChunks @ 14f3ad080

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::FreeAllChunks
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000> *this,bool param_1)

{
  int *piVar1;
  Chunk *pCVar2;
  rrArenaAllocator *prVar3;
  longlong lVar4;
  Chunk *pCVar5;
  undefined1 *puVar6;
  
  pCVar2 = this->m_chunkList;
joined_r0x00014f3ad096:
  pCVar5 = pCVar2;
  if (pCVar5 == (Chunk *)0x0) {
    this->m_chunkList = (Chunk *)0x0;
    this->m_freeList = (FreeList *)0x0;
    this->m_next = 0x1995;
    return;
  }
  pCVar2 = pCVar5->next;
  if (pCVar5->from_arena != 0) goto code_r0x00014f3ad0ae;
  goto LAB_14f3ad13a;
code_r0x00014f3ad0ae:
  if (param_1) {
    prVar3 = this->m_scratch;
    if ((Chunk *)prVar3->m_unorderedStart == (Chunk *)0x0) {
      if (&pCVar5[1].from_arena == (int *)prVar3->m_cur) {
        prVar3->m_cur = (ulong64)((undefined1 *)prVar3->m_cur + -0x3ff60);
        goto joined_r0x00014f3ad096;
      }
    }
    else if (((Chunk *)prVar3->m_unorderedStart <= pCVar5) &&
            (pCVar5 < (Chunk *)(prVar3->m_size + prVar3->m_base))) {
      piVar1 = &pCVar5[1].from_arena;
      *(undefined8 *)(pCVar5[1].items[0].select + 4) = 1;
      if (pCVar5[1].items[0].nodes + 1 == (int *)prVar3->m_cur) {
        puVar6 = (undefined1 *)prVar3->m_cur;
        while ((puVar6 != (undefined1 *)prVar3->m_unorderedStart && (*(longlong *)(piVar1 + 2) == 1)
               )) {
          lVar4 = *(longlong *)piVar1;
          prVar3->m_cur = (ulong64)(puVar6 + (-0x10 - lVar4));
          piVar1 = (int *)(puVar6 + (-0x20 - lVar4));
          puVar6 = puVar6 + (-0x10 - lVar4);
        }
      }
      goto joined_r0x00014f3ad096;
    }
LAB_14f3ad13a:
    (*g_fp_OodleCore_Plugin_Free)(pCVar5);
  }
  goto joined_r0x00014f3ad096;
}

// FreeAllChunks @ 14f3ad180

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::FreeAllChunks
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000> *this,bool param_1)

{
  Chunk *pCVar1;
  Chunk *pCVar2;
  rrArenaAllocator *prVar3;
  longlong lVar4;
  Chunk *pCVar5;
  undefined1 *puVar6;
  
  pCVar2 = this->m_chunkList;
joined_r0x00014f3ad196:
  pCVar5 = pCVar2;
  if (pCVar5 == (Chunk *)0x0) {
    this->m_chunkList = (Chunk *)0x0;
    this->m_freeList = (FreeList *)0x0;
    this->m_next = 0xcca;
    return;
  }
  pCVar2 = pCVar5->next;
  if (pCVar5->from_arena != 0) goto code_r0x00014f3ad1ae;
  goto LAB_14f3ad23a;
code_r0x00014f3ad1ae:
  if (param_1) {
    prVar3 = this->m_scratch;
    if ((Chunk *)prVar3->m_unorderedStart == (Chunk *)0x0) {
      if (pCVar5 + 1 == (Chunk *)prVar3->m_cur) {
        prVar3->m_cur = (ulong64)((Chunk *)prVar3->m_cur + -1);
        goto joined_r0x00014f3ad196;
      }
    }
    else if (((Chunk *)prVar3->m_unorderedStart <= pCVar5) &&
            (pCVar5 < (Chunk *)(prVar3->m_size + prVar3->m_base))) {
      pCVar1 = pCVar5 + 1;
      pCVar5[1].from_arena = 1;
      pCVar5[1].items[0].select[0] = '\0';
      pCVar5[1].items[0].select[1] = '\0';
      pCVar5[1].items[0].select[2] = '\0';
      pCVar5[1].items[0].select[3] = '\0';
      if (pCVar5[1].items[0].select + 4 == (undefined1 *)prVar3->m_cur) {
        puVar6 = (undefined1 *)prVar3->m_cur;
        while ((puVar6 != (undefined1 *)prVar3->m_unorderedStart &&
               (lVar4._0_4_ = pCVar1->from_arena, lVar4._4_1_ = pCVar1->items[0].select[0],
               lVar4._5_1_ = pCVar1->items[0].select[1], lVar4._6_1_ = pCVar1->items[0].select[2],
               lVar4._7_1_ = pCVar1->items[0].select[3], lVar4 == 1))) {
          pCVar5 = pCVar1->next;
          prVar3->m_cur = (ulong64)(puVar6 + (-0x10 - (longlong)pCVar5));
          pCVar1 = (Chunk *)(puVar6 + (-0x20 - (longlong)pCVar5));
          puVar6 = puVar6 + (-0x10 - (longlong)pCVar5);
        }
      }
      goto joined_r0x00014f3ad196;
    }
LAB_14f3ad23a:
    (*g_fp_OodleCore_Plugin_Free)(pCVar5);
  }
  goto joined_r0x00014f3ad196;
}

// FreeAllChunks @ 14f3ad280

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>::FreeAllChunks
          (rrPool<oo2::SuffixTrie2::ChildrenFull256,262000> *this,bool param_1)

{
  Chunk *pCVar1;
  Chunk *pCVar2;
  rrArenaAllocator *prVar3;
  longlong lVar4;
  Chunk *pCVar5;
  undefined1 *puVar6;
  
  pCVar2 = this->m_chunkList;
joined_r0x00014f3ad296:
  pCVar5 = pCVar2;
  if (pCVar5 == (Chunk *)0x0) {
    this->m_chunkList = (Chunk *)0x0;
    this->m_freeList = (FreeList *)0x0;
    this->m_next = 0xff;
    return;
  }
  pCVar2 = pCVar5->next;
  if (pCVar5->from_arena != 0) goto code_r0x00014f3ad2ae;
  goto LAB_14f3ad33a;
code_r0x00014f3ad2ae:
  if (param_1) {
    prVar3 = this->m_scratch;
    if ((Chunk *)prVar3->m_unorderedStart == (Chunk *)0x0) {
      if (pCVar5 + 1 == (Chunk *)prVar3->m_cur) {
        prVar3->m_cur = (ulong64)((Chunk *)prVar3->m_cur + -1);
        goto joined_r0x00014f3ad296;
      }
    }
    else if (((Chunk *)prVar3->m_unorderedStart <= pCVar5) &&
            (pCVar5 < (Chunk *)(prVar3->m_size + prVar3->m_base))) {
      pCVar1 = pCVar5 + 1;
      pCVar5[1].from_arena = 1;
      pCVar5[1].items[0].nodes[0] = 0;
      if (pCVar5[1].items[0].nodes + 1 == (int *)prVar3->m_cur) {
        puVar6 = (undefined1 *)prVar3->m_cur;
        while ((puVar6 != (undefined1 *)prVar3->m_unorderedStart &&
               (lVar4._0_4_ = pCVar1->from_arena, lVar4._4_4_ = pCVar1->items[0].nodes[0],
               lVar4 == 1))) {
          pCVar5 = pCVar1->next;
          prVar3->m_cur = (ulong64)(puVar6 + (-0x10 - (longlong)pCVar5));
          pCVar1 = (Chunk *)(puVar6 + (-0x20 - (longlong)pCVar5));
          puVar6 = puVar6 + (-0x10 - (longlong)pCVar5);
        }
      }
      goto joined_r0x00014f3ad296;
    }
LAB_14f3ad33a:
    (*g_fp_OodleCore_Plugin_Free)(pCVar5);
  }
  goto joined_r0x00014f3ad296;
}

// FreeAllChunks @ 14f3ad380

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::FreeAllChunks
          (rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000> *this,bool param_1)

{
  Chunk *pCVar1;
  Chunk *pCVar2;
  rrArenaAllocator *prVar3;
  longlong lVar4;
  Chunk *pCVar5;
  undefined1 *puVar6;
  
  pCVar2 = this->m_chunkList;
joined_r0x00014f3ad396:
  pCVar5 = pCVar2;
  if (pCVar5 == (Chunk *)0x0) {
    this->m_chunkList = (Chunk *)0x0;
    this->m_freeList = (FreeList *)0x0;
    this->m_next = 0x248;
    return;
  }
  pCVar2 = pCVar5->next;
  if (pCVar5->from_arena != 0) goto code_r0x00014f3ad3ae;
  goto LAB_14f3ad43a;
code_r0x00014f3ad3ae:
  if (param_1) {
    prVar3 = this->m_scratch;
    if ((Chunk *)prVar3->m_unorderedStart == (Chunk *)0x0) {
      if (pCVar5 + 1 == (Chunk *)prVar3->m_cur) {
        prVar3->m_cur = (ulong64)((Chunk *)prVar3->m_cur + -1);
        goto joined_r0x00014f3ad396;
      }
    }
    else if (((Chunk *)prVar3->m_unorderedStart <= pCVar5) &&
            (pCVar5 < (Chunk *)(prVar3->m_size + prVar3->m_base))) {
      pCVar1 = pCVar5 + 1;
      pCVar5[1].from_arena = 1;
      pCVar5[1].items[0].sel2ind[0] = '\0';
      pCVar5[1].items[0].sel2ind[1] = '\0';
      pCVar5[1].items[0].sel2ind[2] = '\0';
      pCVar5[1].items[0].sel2ind[3] = '\0';
      if (pCVar5[1].items[0].sel2ind + 4 == (undefined1 *)prVar3->m_cur) {
        puVar6 = (undefined1 *)prVar3->m_cur;
        while ((puVar6 != (undefined1 *)prVar3->m_unorderedStart &&
               (lVar4._0_4_ = pCVar1->from_arena, lVar4._4_1_ = pCVar1->items[0].sel2ind[0],
               lVar4._5_1_ = pCVar1->items[0].sel2ind[1], lVar4._6_1_ = pCVar1->items[0].sel2ind[2],
               lVar4._7_1_ = pCVar1->items[0].sel2ind[3], lVar4 == 1))) {
          pCVar5 = pCVar1->next;
          prVar3->m_cur = (ulong64)(puVar6 + (-0x10 - (longlong)pCVar5));
          pCVar1 = (Chunk *)(puVar6 + (-0x20 - (longlong)pCVar5));
          puVar6 = puVar6 + (-0x10 - (longlong)pCVar5);
        }
      }
      goto joined_r0x00014f3ad396;
    }
LAB_14f3ad43a:
    (*g_fp_OodleCore_Plugin_Free)(pCVar5);
  }
  goto joined_r0x00014f3ad396;
}

// FreeAllFromArena @ 14f3ad480

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::FreeAllFromArena
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000> *this)

{
  FreeAllChunks(this,true);
  return;
}

// FreeAllFromArena @ 14f3ad490

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::FreeAllFromArena
          (rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000> *this)

{
  FreeAllChunks(this,true);
  return;
}

// FreeAllFromArena @ 14f3ad4a0

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>::FreeAllFromArena
          (rrPool<oo2::SuffixTrie2::ChildrenFull256,262000> *this)

{
  FreeAllChunks(this,true);
  return;
}

// FreeAllFromArena @ 14f3ad4b0

void __thiscall
oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::FreeAllFromArena
          (rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000> *this)

{
  FreeAllChunks(this,true);
  return;
}

// LRMJob @ 14f3ad4c0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2::SuffixTrie2::SuffixTrie2MatchFinder::LRMJob
          (SuffixTrie2MatchFinder *this,int param_1,int param_2)

{
  ulonglong uVar1;
  vector<oo2::UnpackedMatchPair> *this_00;
  int *piVar2;
  int iVar3;
  uchar *puVar4;
  ulong64 uVar5;
  int iVar6;
  int iVar7;
  UnpackedMatchPair *pUVar8;
  uchar *puVar9;
  ulonglong uVar10;
  ulong64 local_res8;
  int local_res20 [2];
  
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    local_res8 = 0xffffffffffffffff;
  }
  else {
    local_res8 = (*fp_ThreadProfiler_Push)("ST2_LRMJob",0);
  }
  puVar4 = this->m_ubuf;
  iVar3 = this->m_size;
  this_00 = &this->lrm_matches;
  uVar10 = (ulonglong)(param_2 - param_1);
  if ((*(ulonglong *)&(this->lrm_matches).field_0x8 < uVar10) &&
     (pUVar8 = vector_storage<oo2::UnpackedMatchPair>::makefit1
                         ((vector_storage<oo2::UnpackedMatchPair> *)this_00,uVar10,
                          *(ulong64 *)&(this->lrm_matches).field_0x10),
     pUVar8 != (UnpackedMatchPair *)0x0)) {
    (*g_fp_OodleCore_Plugin_Free)(pUVar8);
  }
  *(undefined8 *)&(this->lrm_matches).field_0x10 = 0;
  if (param_1 < param_2) {
    puVar9 = puVar4 + param_1;
    do {
      iVar7 = LRMScannerWindowed_FindMatchAndRoll
                        (&this->scanner,puVar9,puVar4 + iVar3,(long64 *)local_res20);
      iVar6 = local_res20[0];
      uVar5 = *(ulong64 *)&(this->lrm_matches).field_0x10;
      uVar1 = uVar5 + 1;
      if (*(ulonglong *)&(this->lrm_matches).field_0x8 < uVar1) {
        pUVar8 = vector_storage<oo2::UnpackedMatchPair>::makefit1
                           ((vector_storage<oo2::UnpackedMatchPair> *)this_00,uVar1,uVar5);
        piVar2 = (int *)(*(longlong *)&this_00->field_0x0 + uVar5 * 8);
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar7;
          piVar2[1] = iVar6;
        }
        *(ulonglong *)&(this->lrm_matches).field_0x10 = uVar1;
        if (pUVar8 != (UnpackedMatchPair *)0x0) {
          (*g_fp_OodleCore_Plugin_Free)(pUVar8);
        }
      }
      else {
        *(ulonglong *)&(this->lrm_matches).field_0x10 = uVar1;
        piVar2 = (int *)(*(longlong *)&this_00->field_0x0 + uVar5 * 8);
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar7;
          piVar2[1] = local_res20[0];
        }
      }
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(local_res8);
  }
  return;
}

// LRMJobShim @ 14f3ad680

void __cdecl oo2::SuffixTrie2::SuffixTrie2MatchFinder::LRMJobShim(void *param_1)

{
  ulonglong uVar1;
  vector_storage<oo2::UnpackedMatchPair> *this;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  UnpackedMatchPair *pUVar6;
  UnpackedMatchPair *pUVar7;
  longlong lVar8;
  ulong64 uVar9;
  uchar *puVar10;
  ulonglong uVar11;
  int local_res8 [2];
  ulong64 local_res10;
  LRMScannerWindowed *local_res18;
  ulong64 local_res20;
  
  lVar3 = *(longlong *)param_1;
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = *(int *)((longlong)param_1 + 8);
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    local_res10 = 0xffffffffffffffff;
  }
  else {
    local_res10 = (*fp_ThreadProfiler_Push)("ST2_LRMJob",0);
  }
  uVar9 = local_res10;
  lVar4 = *(longlong *)(lVar3 + 8);
  local_res8[0] = *(int *)(lVar3 + 0x10);
  this = (vector_storage<oo2::UnpackedMatchPair> *)(lVar3 + 0x2b8);
  uVar11 = (ulonglong)(iVar2 - iVar5);
  local_res20 = local_res10;
  if ((*(ulonglong *)(lVar3 + 0x2c0) < uVar11) &&
     (pUVar6 = vector_storage<oo2::UnpackedMatchPair>::makefit1
                         (this,uVar11,*(ulong64 *)(lVar3 + 0x2c8)),
     pUVar6 != (UnpackedMatchPair *)0x0)) {
    (*g_fp_OodleCore_Plugin_Free)(pUVar6);
  }
  *(undefined8 *)(lVar3 + 0x2c8) = 0;
  if (iVar5 < iVar2) {
    lVar8 = (longlong)local_res8[0];
    local_res18 = (LRMScannerWindowed *)(lVar3 + 0xe0);
    puVar10 = (uchar *)(iVar5 + lVar4);
    do {
      iVar5 = LRMScannerWindowed_FindMatchAndRoll
                        (local_res18,puVar10,(uchar *)(lVar8 + lVar4),(long64 *)local_res8);
      iVar2 = local_res8[0];
      uVar9 = *(ulong64 *)(lVar3 + 0x2c8);
      uVar1 = uVar9 + 1;
      if (*(ulonglong *)(lVar3 + 0x2c0) < uVar1) {
        pUVar7 = vector_storage<oo2::UnpackedMatchPair>::makefit1(this,uVar1,uVar9);
        pUVar6 = this->m_begin + uVar9;
        if (pUVar6 != (UnpackedMatchPair *)0x0) {
          pUVar6->length = iVar5;
          pUVar6->offset = iVar2;
        }
        *(ulonglong *)(lVar3 + 0x2c8) = uVar1;
        if (pUVar7 != (UnpackedMatchPair *)0x0) {
          (*g_fp_OodleCore_Plugin_Free)(pUVar7);
        }
      }
      else {
        *(ulonglong *)(lVar3 + 0x2c8) = uVar1;
        pUVar6 = this->m_begin + uVar9;
        if (pUVar6 != (UnpackedMatchPair *)0x0) {
          pUVar6->length = iVar5;
          pUVar6->offset = local_res8[0];
        }
      }
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
      uVar9 = local_res10;
    } while (uVar11 != 0);
  }
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar9);
  }
  return;
}

// OodleFree @ 14f3ad830

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3ad830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleFreeSized @ 14f3ad840

void __cdecl oo2::OodleFreeSized(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3ad840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleJob_Wait @ 14f3ad850

void __cdecl oo2::OodleJob_Wait(ulong64 param_1,void *param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3ad855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleCore_Plugin_WaitJob)(param_1,param_2);
    return;
  }
  return;
}

// OodleMalloc @ 14f3ad880

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

// OodleMallocAligned @ 14f3ad8d0

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

// ProcessChunk @ 14f3ad920

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

int __thiscall
oo2::SuffixTrie2::SuffixTrie2MatchFinder::ProcessChunk
          (SuffixTrie2MatchFinder *this,int param_1,UnpackedMatchPair *param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  Children CVar3;
  byte bVar4;
  undefined1 uVar5;
  uchar uVar6;
  int iVar7;
  uchar *puVar8;
  rrArenaArray<oo2::SuffixTrie2::SuffixNode> *prVar9;
  code *pcVar10;
  ushort uVar11;
  bool bVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  ChildrenSparseN<16> *pCVar16;
  ChildrenSparseI *pCVar17;
  longlong lVar18;
  ChildrenSparseN<8> *pCVar19;
  Children *pCVar20;
  UnpackedMatchPair *pUVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  Children *pCVar25;
  char *pcVar26;
  uint uVar27;
  longlong lVar29;
  int iVar30;
  OodleJob OVar31;
  UnpackedMatchPair *_Src;
  int *piVar32;
  SuffixNode *pSVar33;
  int iVar34;
  int iVar35;
  longlong lVar36;
  uint3 *puVar37;
  uint uVar38;
  uchar *puVar39;
  longlong lVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint local_res8;
  uint local_b8;
  int local_ac;
  int local_a8;
  uint local_94;
  OodleJob local_80;
  int local_78;
  int local_74;
  int *local_70;
  longlong local_68;
  SuffixTrie2MatchFinder *local_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  ulonglong uVar28;
  
  local_50 = 0xfffffffffffffffe;
  puVar8 = this->m_ubuf;
  iVar34 = this->m_size;
  local_70 = (this->vfirstbytes).m_ptr;
  prVar9 = (this->node_chunks).m_ptr;
  iVar7 = this->pos;
  local_74 = iVar7 + param_1;
  local_a8 = local_74;
  if (iVar34 + -4 <= local_74) {
    local_a8 = iVar34 + -4;
  }
  if (iVar34 <= local_74) {
    local_74 = iVar34;
  }
  local_78 = iVar7;
  if (this->num_firstbytes == 3) {
    local_78 = local_a8 + -6;
  }
  iVar23 = iVar7;
  if (local_a8 <= iVar7) goto LAB_14f3ae6e9;
  iVar35 = this->maxml_offs;
  if (iVar35 != 0) {
    if (param_2 != (UnpackedMatchPair *)0x0) {
      uVar24 = (ulonglong)(uint)(local_a8 - iVar7);
      if (0 < local_a8 - iVar7) {
        pUVar21 = param_2 + 1;
        do {
          pUVar21[-1].length = iVar34;
          pUVar21[-1].offset = iVar35;
          pUVar21->length = 0;
          pUVar21 = pUVar21 + param_3;
          iVar34 = iVar34 + -1;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      this->pos = local_a8;
      iVar23 = local_a8;
    }
    goto LAB_14f3ae6e9;
  }
  local_80.handle = 0;
  if ((param_2 == (UnpackedMatchPair *)0x0) || (this->has_lrm == false)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
    local_60 = this;
    local_58 = iVar7;
    local_54 = local_a8;
    OodleJob::run(&local_80,LRMJobShim,&local_60,this->jobifyUserPtr,this->run_lrm_as_job,0,0);
  }
  this->pos = iVar7;
  do {
    puVar37 = (uint3 *)(puVar8 + iVar23);
    iVar14 = this->lastml + -1;
    iVar35 = 0;
    if (-1 < iVar14) {
      iVar35 = iVar14;
    }
    local_b8 = 0;
    local_94 = 0;
    local_res8 = 0;
    local_ac = 0x7fffffff;
    uVar22 = this->node_to_update_follow;
    if (uVar22 != 0) {
      uVar22 = prVar9[(longlong)(int)uVar22 >> 0xe].m_ptr[uVar22 & 0x3fff].follow;
      if (uVar22 == 0) {
        local_ac = 0;
      }
      else {
        local_ac = prVar9[(longlong)(int)uVar22 >> 0xe].m_ptr[uVar22 & 0x3fff].depth;
      }
    }
    lVar40 = (longlong)(iVar34 - iVar23);
    uVar22 = this->follownode;
    uVar24 = (ulonglong)(int)uVar22;
    if (0 < (int)uVar22) {
      iVar14 = prVar9[(longlong)uVar24 >> 0xe].m_ptr[uVar22 & 0x3fff].depth;
LAB_14f3add01:
      local_res8 = uVar22;
      uVar27 = (uint)uVar24;
      if (local_ac < iVar14) {
        uVar22 = this->node_to_update_follow & 0x3fff;
        if (iVar14 < prVar9[(longlong)this->node_to_update_follow >> 0xe].m_ptr[uVar22].depth) {
          prVar9[(longlong)this->node_to_update_follow >> 0xe].m_ptr[uVar22].follow = uVar27;
          local_ac = iVar14;
        }
        else {
          local_ac = 0x7fffffff;
        }
      }
      uVar22 = local_res8;
      if (iVar34 - iVar23 <= iVar14) goto LAB_14f3ae68a;
      CVar3 = *(Children *)((longlong)iVar14 + (longlong)puVar37);
      uVar24 = (ulonglong)(byte)CVar3;
      local_68 = (longlong)(int)uVar27 >> 0xe;
      uVar38 = uVar27 & 0x3fff;
      pSVar33 = prVar9[local_68].m_ptr;
      uVar22 = uVar27;
      if (pSVar33[uVar38].follow == 0) {
        uVar22 = local_b8;
        local_94 = uVar27;
      }
      bVar4 = *(byte *)((longlong)&pSVar33[uVar38].field4_0x10 + 0xc);
      uVar27 = bVar4 + 1;
      uVar28 = (ulonglong)uVar27;
      local_b8 = uVar22;
      if (uVar27 < 4) {
        iVar15 = 0;
        pCVar25 = (Children *)((longlong)&pSVar33[uVar38].field4_0x10 + 0xd);
        while( true ) {
          if ((int)uVar27 <= iVar15) {
            if (uVar27 < 3) {
              *(Children *)((longlong)&pSVar33[uVar38].field4_0x10 + uVar28 + 0xd) = CVar3;
              pSVar33[uVar38].field4_0x10.nodes[uVar28] = -this->pos;
            }
            else {
              pCVar19 = rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::Alloc
                                  (&this->ChildrenSparse1_pool);
              pCVar19->select[0] = '\0';
              pCVar19->select[1] = '\0';
              pCVar19->select[2] = '\0';
              pCVar19->select[3] = '\0';
              pCVar19->select[4] = '\0';
              pCVar19->select[5] = '\0';
              pCVar19->select[6] = '\0';
              pCVar19->select[7] = '\0';
              pCVar19->select[0] = *(uchar *)((longlong)&pSVar33[uVar38].field4_0x10 + 0xd);
              pCVar19->nodes[0] = pSVar33[uVar38].field4_0x10.nodes[0];
              pCVar19->select[1] = *(uchar *)((longlong)&pSVar33[uVar38].field4_0x10 + 0xe);
              pCVar19->nodes[1] = pSVar33[uVar38].field4_0x10.nodes[1];
              pCVar19->select[2] = *(uchar *)((longlong)&pSVar33[uVar38].field4_0x10 + 0xf);
              pCVar19->nodes[2] = pSVar33[uVar38].field4_0x10.nodes[2];
              *(Children *)(pCVar19->select + 3) = CVar3;
              pCVar19->nodes[3] = -this->pos;
              pSVar33[uVar38].field4_0x10.children = (Children *)pCVar19;
            }
            goto LAB_14f3ae355;
          }
          if (*pCVar25 == CVar3) break;
          iVar15 = iVar15 + 1;
          pCVar25 = pCVar25 + 1;
        }
        pCVar20 = (Children *)((longlong)&pSVar33[uVar38].field4_0x10 + (longlong)iVar15 * 4);
      }
      else {
        pCVar25 = pSVar33[uVar38].field4_0x10.children;
        if (uVar27 < 9) {
          pCVar20 = (Children *)0x0;
          uVar2 = *(undefined8 *)&pCVar25->field_0x0;
          auVar41[0] = -(SUB81(uVar2,0) == CVar3);
          auVar41[1] = -(SUB81((ulonglong)uVar2 >> 8,0) == CVar3);
          auVar41[2] = -(SUB81((ulonglong)uVar2 >> 0x10,0) == CVar3);
          auVar41[3] = -(SUB81((ulonglong)uVar2 >> 0x18,0) == CVar3);
          auVar41[4] = -(SUB81((ulonglong)uVar2 >> 0x20,0) == CVar3);
          auVar41[5] = -(SUB81((ulonglong)uVar2 >> 0x28,0) == CVar3);
          auVar41[6] = -(SUB81((ulonglong)uVar2 >> 0x30,0) == CVar3);
          auVar41[7] = -(SUB81((ulonglong)uVar2 >> 0x38,0) == CVar3);
          auVar41[8] = -(CVar3 == (Children)0x0);
          auVar41[9] = -(CVar3 == (Children)0x0);
          auVar41[10] = -(CVar3 == (Children)0x0);
          auVar41[0xb] = -(CVar3 == (Children)0x0);
          auVar41[0xc] = -(CVar3 == (Children)0x0);
          auVar41[0xd] = -(CVar3 == (Children)0x0);
          auVar41[0xe] = -(CVar3 == (Children)0x0);
          auVar41[0xf] = -(CVar3 == (Children)0x0);
          uVar11 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar41[0xf] >> 7) << 0xf;
          if (uVar11 != 0) {
            iVar15 = 0;
            if (uVar11 != 0) {
              for (; (uVar11 >> iVar15 & 1) == 0; iVar15 = iVar15 + 1) {
              }
            }
            if (iVar15 < (int)uVar27) {
              pCVar20 = pCVar25 + (longlong)iVar15 * 4 + 8;
            }
          }
          if (pCVar20 != (Children *)0x0) goto LAB_14f3adfea;
          if (uVar27 != 8) {
            pCVar25[(longlong)(int)(uint)bVar4 + 1] = CVar3;
            *(int *)(pCVar25 + (longlong)(int)(uint)bVar4 * 4 + 0xc) = -this->pos;
            goto LAB_14f3ae355;
          }
          pCVar16 = rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::Alloc
                              (&this->ChildrenSparse2_pool);
          pCVar16->select[0] = '\0';
          pCVar16->select[1] = '\0';
          pCVar16->select[2] = '\0';
          pCVar16->select[3] = '\0';
          pCVar16->select[4] = '\0';
          pCVar16->select[5] = '\0';
          pCVar16->select[6] = '\0';
          pCVar16->select[7] = '\0';
          pCVar16->select[8] = '\0';
          pCVar16->select[9] = '\0';
          pCVar16->select[10] = '\0';
          pCVar16->select[0xb] = '\0';
          pCVar16->select[0xc] = '\0';
          pCVar16->select[0xd] = '\0';
          pCVar16->select[0xe] = '\0';
          pCVar16->select[0xf] = '\0';
          pCVar16->select[0] = pCVar25->field_0x0;
          pCVar16->nodes[0] = *(int *)&pCVar25[8].field_0x0;
          *(Children *)(pCVar16->select + 1) = pCVar25[1];
          pCVar16->nodes[1] = *(int *)(pCVar25 + 0xc);
          *(Children *)(pCVar16->select + 2) = pCVar25[2];
          pCVar16->nodes[2] = *(int *)&pCVar25[0x10].field_0x0;
          *(Children *)(pCVar16->select + 3) = pCVar25[3];
          pCVar16->nodes[3] = *(int *)(pCVar25 + 0x14);
          *(Children *)(pCVar16->select + 4) = pCVar25[4];
          pCVar16->nodes[4] = *(int *)&pCVar25[0x18].field_0x0;
          *(Children *)(pCVar16->select + 5) = pCVar25[5];
          pCVar16->nodes[5] = *(int *)(pCVar25 + 0x1c);
          *(Children *)(pCVar16->select + 6) = pCVar25[6];
          pCVar16->nodes[6] = *(int *)&pCVar25[0x20].field_0x0;
          *(Children *)(pCVar16->select + 7) = pCVar25[7];
          pCVar16->nodes[7] = *(int *)(pCVar25 + 0x24);
          *(Children *)(pCVar16->select + 8) = CVar3;
          pCVar16->nodes[8] = -this->pos;
          pcVar26 = (char *)((longlong)&pSVar33[uVar38].field4_0x10 + 0xc);
          *pcVar26 = *pcVar26 + '\x01';
          pSVar33[uVar38].field4_0x10.children = (Children *)pCVar16;
          *(FreeList **)&pCVar25->field_0x0 = (this->ChildrenSparse1_pool).m_freeList;
          (this->ChildrenSparse1_pool).m_freeList = (FreeList *)pCVar25;
          goto LAB_14f3ae35b;
        }
        if (uVar27 < 0x11) {
          pCVar20 = (Children *)0x0;
          auVar42[0] = -(CVar3 == (Children)pCVar25->field_0x0);
          auVar42[1] = -(CVar3 == pCVar25[1]);
          auVar42[2] = -(CVar3 == pCVar25[2]);
          auVar42[3] = -(CVar3 == pCVar25[3]);
          auVar42[4] = -(CVar3 == pCVar25[4]);
          auVar42[5] = -(CVar3 == pCVar25[5]);
          auVar42[6] = -(CVar3 == pCVar25[6]);
          auVar42[7] = -(CVar3 == pCVar25[7]);
          auVar42[8] = -(CVar3 == (Children)pCVar25[8].field_0x0);
          auVar42[9] = -(CVar3 == pCVar25[9]);
          auVar42[10] = -(CVar3 == pCVar25[10]);
          auVar42[0xb] = -(CVar3 == pCVar25[0xb]);
          auVar42[0xc] = -(CVar3 == pCVar25[0xc]);
          auVar42[0xd] = -(CVar3 == pCVar25[0xd]);
          auVar42[0xe] = -(CVar3 == pCVar25[0xe]);
          auVar42[0xf] = -(CVar3 == pCVar25[0xf]);
          uVar11 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar42[0xf] >> 7) << 0xf;
          if (uVar11 != 0) {
            iVar15 = 0;
            if (uVar11 != 0) {
              for (; (uVar11 >> iVar15 & 1) == 0; iVar15 = iVar15 + 1) {
              }
            }
            if (iVar15 < (int)uVar27) {
              pCVar20 = pCVar25 + (longlong)iVar15 * 4 + 0x10;
            }
          }
          if (pCVar20 != (Children *)0x0) goto LAB_14f3adfea;
          if (uVar27 != 0x10) {
            pCVar25[(ulonglong)bVar4 + 1] = CVar3;
            *(int *)(pCVar25 + (ulonglong)bVar4 * 4 + 0x14) = -this->pos;
            goto LAB_14f3ae355;
          }
          pCVar17 = rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::Alloc
                              (&this->ChildrenSparseI_pool);
          iVar23 = this->pos;
          pCVar17->sel2ind[uVar24] = '\x01';
          piVar32 = pCVar17->nodes;
          *piVar32 = -iVar23;
          pCVar20 = pCVar25;
          iVar23 = 0;
          do {
            puVar13 = &pCVar20->field_0x0;
            iVar35 = *(int *)(pCVar25 + (-0xf0 - (longlong)pCVar17) + (longlong)piVar32);
            iVar15 = iVar23 + 1;
            piVar32 = piVar32 + 1;
            pCVar20 = pCVar20 + 1;
            pCVar17->sel2ind[(byte)*puVar13] = (char)iVar23 + '\x02';
            *piVar32 = iVar35;
            iVar23 = iVar15;
          } while (iVar15 != 0x10);
          pcVar26 = (char *)((longlong)&pSVar33[uVar38].field4_0x10 + 0xc);
          *pcVar26 = *pcVar26 + '\x01';
          pSVar33[uVar38].field4_0x10.children = (Children *)pCVar17;
          *(FreeList **)&pCVar25->field_0x0 = (this->ChildrenSparse2_pool).m_freeList;
          (this->ChildrenSparse2_pool).m_freeList = (FreeList *)pCVar25;
LAB_14f3ae35b:
          if (0 < (int)local_94) {
            uVar22 = local_94;
          }
          this->node_to_update_follow = uVar22;
          puVar39 = puVar8 + prVar9[local_68].m_ptr[uVar38].pos;
          goto LAB_14f3ae399;
        }
        if (0x30 < uVar27) {
          pCVar20 = pCVar25 + uVar24 * 4;
          if (*(uint *)pCVar20 != 0) goto LAB_14f3adfea;
          *(int *)pCVar20 = -this->pos;
LAB_14f3ae355:
          pcVar26 = (char *)((longlong)&pSVar33[uVar38].field4_0x10 + 0xc);
          *pcVar26 = *pcVar26 + '\x01';
          goto LAB_14f3ae35b;
        }
        if (pCVar25[uVar24] == (Children)0x0) {
          if (uVar27 == 0x30) {
            pCVar20 = (Children *)
                      rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>::Alloc
                                (&this->ChildrenFull256_pool);
            memset(pCVar20,0,0x400);
            lVar40 = 0;
            do {
              if (pCVar25[lVar40] != (Children)0x0) {
                *(undefined4 *)(pCVar20 + lVar40 * 4) =
                     *(undefined4 *)(pCVar25 + (ulonglong)(byte)pCVar25[lVar40] * 4 + 0xfc);
              }
              lVar40 = lVar40 + 1;
            } while (lVar40 < 0x100);
            *(int *)(pCVar20 + uVar24 * 4) = -this->pos;
            pcVar26 = (char *)((longlong)&pSVar33[uVar38].field4_0x10 + 0xc);
            *pcVar26 = *pcVar26 + '\x01';
            pSVar33[uVar38].field4_0x10.children = pCVar20;
            *(FreeList **)&pCVar25->field_0x0 = (this->ChildrenSparseI_pool).m_freeList;
            (this->ChildrenSparseI_pool).m_freeList = (FreeList *)pCVar25;
            goto LAB_14f3ae35b;
          }
          pCVar25[uVar24] = (Children)((char)uVar27 + '\x01');
          *(int *)(pCVar25 + (uVar28 & 0xff) * 4 + 0x100) = -this->pos;
          goto LAB_14f3ae355;
        }
        pCVar20 = pCVar25 + (ulonglong)(byte)pCVar25[uVar24] * 4 + 0xfc;
      }
LAB_14f3adfea:
      uVar22 = *(uint *)pCVar20;
      lVar36 = (longlong)(int)uVar22;
      iVar15 = iVar14 + 1;
      if (-1 < (int)uVar22) goto code_r0x00014f3ae009;
      *(int *)pCVar20 = this->nextnode;
      goto LAB_14f3ae244;
    }
    puVar1 = (uint *)(local_70 + ((uint)*puVar37 & this->firstbytes_mask));
    uVar22 = *puVar1;
    uVar24 = (ulonglong)(int)uVar22;
    if (uVar22 == 0) {
      *puVar1 = -iVar23;
      this->lastml = 0;
      this->follownode = 0;
      if (param_2 != (UnpackedMatchPair *)0x0) {
        param_2[(this->pos - iVar7) * param_3].length = 0;
      }
    }
    else {
      iVar15 = this->num_firstbytes;
      if (-1 < (int)uVar22) {
        iVar14 = prVar9[(longlong)uVar24 >> 0xe].m_ptr[uVar22 & 0x3fff].depth;
        lVar36 = (longlong)iVar14;
        iVar30 = iVar35;
        if (iVar35 < iVar15) {
          iVar30 = iVar15;
        }
        if (iVar30 < iVar14) {
          lVar29 = (longlong)iVar30;
          iVar14 = iVar30;
          if (lVar29 < lVar36) {
LAB_14f3adcd0:
            if (lVar29 != lVar40) {
              if (*(char *)(lVar29 + (longlong)puVar37) ==
                  ((char *)(lVar29 + (longlong)puVar37))
                  [(longlong)
                   (puVar8 + ((longlong)prVar9[(longlong)uVar24 >> 0xe].m_ptr[uVar22 & 0x3fff].pos -
                             (longlong)puVar37))]) goto code_r0x00014f3adce6;
              *puVar1 = this->nextnode;
LAB_14f3ae1f0:
              puVar39 = puVar8 + prVar9[uVar22 >> 0xe].m_ptr[uVar22 & 0x3fff].pos;
              prVar9[uVar22 >> 0xe].m_ptr[uVar22 & 0x3fff].parent = this->nextnode;
              goto LAB_14f3ae287;
            }
            lVar36 = (longlong)(int)uVar22;
            goto LAB_14f3ae532;
          }
LAB_14f3adcf0:
          uVar24 = (ulonglong)uVar22;
        }
        goto LAB_14f3add01;
      }
      *puVar1 = this->nextnode;
LAB_14f3ae244:
      puVar39 = puVar8 + -(longlong)(int)uVar22;
      iVar14 = iVar35;
      if (iVar35 < iVar15) {
        iVar14 = iVar15;
      }
      pcVar26 = (char *)((longlong)iVar14 + (longlong)puVar37);
      while( true ) {
        if ((longlong)pcVar26 - (longlong)puVar37 == lVar40) goto LAB_14f3ae68a;
        if (*pcVar26 != pcVar26[(longlong)puVar39 - (longlong)puVar37]) break;
        iVar14 = iVar14 + 1;
        pcVar26 = pcVar26 + 1;
      }
LAB_14f3ae287:
      uVar27 = this->nextnode;
      this->nextnode = uVar27 + 1;
      if (((longlong)(int)uVar27 & 0x3fffU) == 0) {
        AllocNodeChunk(this,uVar27);
      }
      pSVar33 = prVar9[(longlong)(int)uVar27 >> 0xe].m_ptr + (uVar27 & 0x3fff);
      pSVar33->depth = iVar14;
      pSVar33->follow = 0;
      pSVar33->pos = this->pos;
      pSVar33->parent = local_res8;
      uVar5 = *(undefined1 *)((longlong)iVar14 + (longlong)puVar37);
      iVar23 = this->pos;
      uVar6 = puVar39[iVar14];
      *(undefined1 *)((longlong)&pSVar33->field4_0x10 + 0xc) = 1;
      *(undefined1 *)((longlong)&pSVar33->field4_0x10 + 0xd) = uVar5;
      (pSVar33->field4_0x10).nodes[0] = -iVar23;
      *(uchar *)((longlong)&pSVar33->field4_0x10 + 0xe) = uVar6;
      (pSVar33->field4_0x10).nodes[1] = uVar22;
      if (local_ac < iVar14) {
        uVar22 = this->node_to_update_follow & 0x3fff;
        if (iVar14 < prVar9[(longlong)this->node_to_update_follow >> 0xe].m_ptr[uVar22].depth) {
          prVar9[(longlong)this->node_to_update_follow >> 0xe].m_ptr[uVar22].follow = uVar27;
        }
      }
      this->node_to_update_follow = uVar27;
LAB_14f3ae399:
      iVar23 = 0;
      if (local_b8 != 0) {
        iVar23 = prVar9[(longlong)(int)local_b8 >> 0xe].m_ptr[local_b8 & 0x3fff].follow;
      }
      this->follownode = iVar23;
      this->lastml = iVar14;
      if (param_2 == (UnpackedMatchPair *)0x0) {
        iVar23 = 0;
        for (; local_res8 != 0; local_res8 = pSVar33[local_res8 & 0x3fff].parent) {
          pSVar33 = prVar9[(longlong)(int)local_res8 >> 0xe].m_ptr;
          iVar23 = iVar23 + 1;
          if (0x10 < iVar23) break;
          pSVar33[local_res8 & 0x3fff].pos = this->pos;
        }
      }
      else {
        pUVar21 = param_2 + (this->pos - iVar7) * param_3;
        iVar23 = (int)puVar37 - (int)puVar39;
        lVar40 = 1;
        pUVar21->length = iVar14;
        pUVar21->offset = iVar23;
        iVar23 = this->pos - iVar23;
        iVar35 = 0x10;
        while (local_res8 != 0) {
          pSVar33 = prVar9[(longlong)(int)local_res8 >> 0xe].m_ptr + (local_res8 & 0x3fff);
          iVar14 = pSVar33->pos;
          if ((iVar23 < iVar14) && (lVar40 < param_3)) {
            iVar23 = this->pos;
            if (pSVar33->depth < 3) goto LAB_14f3ae496;
            pUVar21[lVar40].length = pSVar33->depth;
            pUVar21[lVar40].offset = iVar23 - iVar14;
            lVar40 = lVar40 + 1;
            iVar23 = pSVar33->pos;
          }
          iVar35 = iVar35 + -1;
          if (iVar35 < 0) break;
          pSVar33->pos = this->pos;
          local_res8 = pSVar33->parent;
        }
        if (lVar40 < param_3) {
LAB_14f3ae496:
          pUVar21[lVar40].length = 0;
        }
      }
    }
    iVar23 = this->pos + 1;
    this->pos = iVar23;
  } while (iVar23 < local_a8);
  goto LAB_14f3ae5cd;
code_r0x00014f3adce6:
  iVar14 = iVar14 + 1;
  lVar29 = lVar29 + 1;
  if (lVar36 <= lVar29) goto LAB_14f3adcf0;
  goto LAB_14f3adcd0;
code_r0x00014f3ae009:
  iVar14 = prVar9[lVar36 >> 0xe].m_ptr[uVar22 & 0x3fff].depth;
  lVar29 = (longlong)iVar14;
  iVar30 = iVar35;
  if (iVar35 < iVar15) {
    iVar30 = iVar15;
  }
  if (iVar30 < iVar14) {
    lVar18 = (longlong)iVar30;
    iVar14 = iVar30;
    if (lVar18 < lVar29) {
      do {
        if (lVar18 == lVar40) goto LAB_14f3ae532;
        if (*(char *)(lVar18 + (longlong)puVar37) !=
            ((char *)(lVar18 + (longlong)puVar37))
            [(longlong)
             (puVar8 + ((longlong)prVar9[lVar36 >> 0xe].m_ptr[uVar22 & 0x3fff].pos -
                       (longlong)puVar37))]) {
          *(int *)pCVar20 = this->nextnode;
          goto LAB_14f3ae1f0;
        }
        iVar14 = iVar14 + 1;
        lVar18 = lVar18 + 1;
      } while (lVar18 < lVar29);
    }
    uVar24 = (ulonglong)uVar22;
  }
  else {
    uVar24 = (ulonglong)uVar22;
  }
  goto LAB_14f3add01;
LAB_14f3ae68a:
  local_res8 = uVar22;
  lVar36 = (longlong)(int)local_res8;
  if ((int)local_res8 < 0) {
    iVar34 = -local_res8;
  }
  else {
LAB_14f3ae532:
    iVar34 = prVar9[lVar36 >> 0xe].m_ptr[(uint)lVar36 & 0x3fff].pos;
  }
  iVar23 = (int)puVar37 - ((int)puVar8 + iVar34);
  this->maxml_offs = iVar23;
  iVar34 = this->pos;
  this->maxml_pos = iVar34;
  if (param_2 != (UnpackedMatchPair *)0x0) {
    uVar24 = (ulonglong)(uint)(local_a8 - iVar34);
    iVar35 = this->m_size;
    if (0 < local_a8 - iVar34) {
      pUVar21 = param_2 + (longlong)((iVar34 - iVar7) * param_3) + 1;
      do {
        pUVar21[-1].length = iVar35;
        pUVar21[-1].offset = iVar23;
        pUVar21->length = 0;
        pUVar21 = pUVar21 + param_3;
        iVar35 = iVar35 + -1;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  this->pos = local_a8;
LAB_14f3ae5cd:
  OVar31.handle = local_80.handle;
  if (bVar12) {
    if (local_80.handle != 0) {
      (*g_fp_OodleCore_Plugin_WaitJob)(local_80.handle,this->jobifyUserPtr);
      local_80.handle = 0;
    }
    OVar31.handle = local_80.handle;
    if (this->maxml_offs != 0) {
      local_a8 = this->maxml_pos;
    }
    pUVar21 = *(UnpackedMatchPair **)&this->lrm_matches;
    if (iVar7 < local_a8) {
      uVar24 = (ulonglong)(uint)(local_a8 - iVar7);
      _Src = param_2;
      do {
        if (_Src->length < pUVar21->length) {
          memmove(_Src + 1,_Src,(longlong)(param_3 + -1) << 3);
          *_Src = *pUVar21;
        }
        pUVar21 = pUVar21 + 1;
        _Src = _Src + param_3;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  if ((OVar31.handle != 0) &&
     (iVar34 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\oodlejob.h",0x9e,
                                  "oo2::OodleJob::~OodleJob","handle == 0"), iVar34 != 0)) {
    pcVar10 = (code *)swi(3);
    iVar34 = (*pcVar10)();
    return iVar34;
  }
  iVar23 = this->pos;
LAB_14f3ae6e9:
  if (iVar23 != local_74) {
    if ((param_2 != (UnpackedMatchPair *)0x0) &&
       (pUVar21 = param_2 + (iVar23 - iVar7) * param_3, iVar23 < local_74)) {
      do {
        pUVar21->length = 0;
        pUVar21 = pUVar21 + param_3;
        iVar23 = iVar23 + 1;
      } while (iVar23 < local_74);
    }
    this->pos = local_74;
  }
  return local_74 - iVar7;
}

// RR_GET16_NATIVE @ 14f3ae760

ushort __cdecl oo2::RR_GET16_NATIVE(void *param_1)

{
  return *(ushort *)param_1;
}

// Release @ 14f3ae780

void __thiscall
oo2::rrArenaArray<int>::Release
          (rrArenaArray<int> *this,rrArenaAllocator *param_1,long64 param_2,int param_3)

{
  if (this->m_ptr != (int *)0x0) {
    if ((param_1 != (rrArenaAllocator *)0x0) && (this->m_alloc != (void *)0x0)) {
      if (param_1->m_unorderedStart != 0) {
        rrArenaAllocator::Free(param_1,this->m_alloc,(longlong)param_3 + param_2 * 4);
      }
      this->m_alloc = (void *)0x0;
      this->m_ptr = (int *)0x0;
      return;
    }
    (*g_fp_OodleCore_Plugin_Free)(this->m_ptr);
    this->m_ptr = (int *)0x0;
  }
  return;
}

// Release @ 14f3ae800

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2::rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_>::Release
          (rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_> *this,
          rrArenaAllocator *param_1,long64 param_2,int param_3)

{
  if (this->m_ptr != (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)0x0) {
    if ((param_1 != (rrArenaAllocator *)0x0) && (this->m_alloc != (void *)0x0)) {
      if (param_1->m_unorderedStart != 0) {
        rrArenaAllocator::Free(param_1,this->m_alloc,param_2 * 0x10 + (longlong)param_3);
      }
      this->m_alloc = (void *)0x0;
      this->m_ptr = (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)0x0;
      return;
    }
    (*g_fp_OodleCore_Plugin_Free)(this->m_ptr);
    this->m_ptr = (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *)0x0;
  }
  return;
}

// Release @ 14f3ae880

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>::Release
          (rrArenaArray<oo2::SuffixTrie2::SuffixNode> *this,rrArenaAllocator *param_1,long64 param_2
          ,int param_3)

{
  if (this->m_ptr != (SuffixNode *)0x0) {
    if ((param_1 != (rrArenaAllocator *)0x0) && (this->m_alloc != (void *)0x0)) {
      if (param_1->m_unorderedStart != 0) {
        rrArenaAllocator::Free(param_1,this->m_alloc,param_2 * 0x20 + (longlong)param_3);
      }
      this->m_alloc = (void *)0x0;
      this->m_ptr = (SuffixNode *)0x0;
      return;
    }
    (*g_fp_OodleCore_Plugin_Free)(this->m_ptr);
    this->m_ptr = (SuffixNode *)0x0;
  }
  return;
}

// Release @ 14f3ae900

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall oo2::SuffixTrie2::SuffixTrie2MatchFinder::Release(SuffixTrie2MatchFinder *this)

{
  rrArenaAllocator *this_00;
  
  this_00 = this->scratch_arena;
  (**(code **)this->_padding_)(this,0);
  if (this_00 != (rrArenaAllocator *)0x0) {
    rrArenaAllocator::Free(this_00,this,0x2d8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f3ae952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(this);
  return;
}

// ReportMaxLenMatch @ 14f3ae960

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2::SuffixTrie2::SuffixTrie2MatchFinder::ReportMaxLenMatch
          (SuffixTrie2MatchFinder *this,UnpackedMatchPair *param_1,int param_2,int param_3)

{
  int iVar1;
  UnpackedMatchPair *pUVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = this->m_size;
  iVar1 = this->maxml_offs;
  if (0 < param_3) {
    pUVar2 = param_1 + 1;
    uVar3 = (ulonglong)(uint)param_3;
    do {
      pUVar2[-1].length = iVar4;
      iVar4 = iVar4 + -1;
      pUVar2[-1].offset = iVar1;
      pUVar2->length = 0;
      pUVar2 = pUVar2 + param_2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// S32_checkA @ 14f3ae9a0

int __cdecl oo2::S32_checkA(long64 param_1)

{
  return (int)param_1;
}

// SuffixTrie_CreateMatchFinder @ 14f3ae9c0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

IncrementalMatchFinder * __cdecl
oo2::SuffixTrie_CreateMatchFinder
          (uchar *param_1,long64 param_2,long64 param_3,LRMSet *param_4,OodleLZ_Jobify param_5,
          void *param_6,rrArenaAllocator *param_7)

{
  code *pcVar1;
  int iVar2;
  IncrementalMatchFinder *pIVar3;
  SuffixTrie2MatchFinder *this;
  
  if ((0x7ffffffd < param_2 - 1U) &&
     (iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\suffixtrie.cpp",0xa1,
                                 "oo2::SuffixTrie_CreateMatchFinder",
                                 "sizeA > 0 && sizeA < RR_S32_MAX"), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IncrementalMatchFinder *)(*pcVar1)();
    return pIVar3;
  }
  if (param_7 == (rrArenaAllocator *)0x0) {
    this = (*g_fp_OodleCore_Plugin_MallocAligned)(0x2d8,0x10);
    if (this == (SuffixTrie2MatchFinder *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(0x2d8);
    }
  }
  else {
    this = rrArenaAllocator::Alloc(param_7,0x2d8,0);
  }
  if (this != (SuffixTrie2MatchFinder *)0x0) {
    SuffixTrie2::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder
              (this,param_1,(int)param_2,(int)param_3,param_4,param_5,param_6,
               (0x800000 < (int)param_2) + 2,param_7);
  }
  return (IncrementalMatchFinder *)this;
}

// ThreadProfiler_Pop @ 14f3aeb00

void __cdecl oo2::ThreadProfiler_Pop(ulong64 param_1)

{
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3aeb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ThreadProfiler_Pop)(param_1);
    return;
  }
  return;
}

// ThreadProfiler_Push @ 14f3aeb20

ulong64 __cdecl oo2::ThreadProfiler_Push(char *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  if (fp_ThreadProfiler_Push != (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3aeb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*fp_ThreadProfiler_Push)(param_1,param_2);
    return uVar1;
  }
  return 0xffffffffffffffff;
}

// Zero @ 14f3aeb40

void __thiscall oo2::rrArenaArray<int>::Zero(rrArenaArray<int> *this,long64 param_1)

{
  memset(this->m_ptr,0,param_1 * 4);
  return;
}

// Zero @ 14f3aeb60

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2::rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_>::Zero
          (rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_> *this,long64 param_1)

{
  memset(this->m_ptr,0,param_1 << 4);
  return;
}

// at @ 14f3aeb80

UnpackedMatchPair * __thiscall
oo2::vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::at
          (vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this,
          ulong64 param_1)

{
  return (UnpackedMatchPair *)(*(longlong *)this + param_1 * 8);
}

// begin @ 14f3aeb90

UnpackedMatchPair * __thiscall
oo2::vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::begin
          (vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this)

{
  return (UnpackedMatchPair *)this->_padding_;
}

// begin @ 14f3aeba0

UnpackedMatchPair * __thiscall
oo2::vector_storage<oo2::UnpackedMatchPair>::begin(vector_storage<oo2::UnpackedMatchPair> *this)

{
  return this->m_begin;
}

// capacity @ 14f3aebb0

ulong64 __thiscall
oo2::vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::capacity
          (vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this)

{
  return this->_padding_;
}

// capacity @ 14f3aebc0

ulong64 __thiscall
oo2::vector_storage<oo2::UnpackedMatchPair>::capacity(vector_storage<oo2::UnpackedMatchPair> *this)

{
  return this->m_capacity;
}

// clear @ 14f3aebd0

void __thiscall
oo2::vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::clear
          (vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}

// data @ 14f3aebe0

int * __thiscall oo2::rrArenaArray<int>::data(rrArenaArray<int> *this)

{
  return this->m_ptr;
}

// data @ 14f3aebf0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

rrArenaArray<oo2::SuffixTrie2::SuffixNode> * __thiscall
oo2::rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_>::data
          (rrArenaArray<oo2::rrArenaArray<oo2::SuffixTrie2::SuffixNode>_> *this)

{
  return this->m_ptr;
}

// init @ 14f3aec00

void __thiscall
oo2::vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::init
          (vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14f3aec10

void __thiscall
oo2::vector_storage<oo2::UnpackedMatchPair>::init(vector_storage<oo2::UnpackedMatchPair> *this)

{
  this->m_begin = (UnpackedMatchPair *)0x0;
  this->m_capacity = 0;
  return;
}

// makefit1 @ 14f3aec20

UnpackedMatchPair * __thiscall
oo2::vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::makefit1
          (vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this,
          ulong64 param_1)

{
  UnpackedMatchPair *pUVar1;
  
  pUVar1 = vector_storage<oo2::UnpackedMatchPair>::makefit1
                     ((vector_storage<oo2::UnpackedMatchPair> *)this,param_1,this->m_size);
  return pUVar1;
}

// makefit1 @ 14f3aec40

UnpackedMatchPair * __thiscall
oo2::vector_storage<oo2::UnpackedMatchPair>::makefit1
          (vector_storage<oo2::UnpackedMatchPair> *this,ulong64 param_1,ulong64 param_2)

{
  UnpackedMatchPair *pUVar1;
  ulonglong uVar2;
  UnpackedMatchPair *pUVar3;
  UnpackedMatchPair *pUVar4;
  ulonglong uVar5;
  
  pUVar1 = this->m_begin;
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
    if (uVar5 < 0x200) goto LAB_14f3aecc3;
    uVar5 = uVar5 + 0xfff;
    uVar2 = 0x1ffffffffffffe00;
  }
  else {
    uVar5 = uVar5 + 0xffff;
    uVar2 = 0x1fffffffffffe000;
  }
  param_1 = uVar5 >> 3 & uVar2;
LAB_14f3aecc3:
  pUVar3 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1 * 8,0x10);
  if (pUVar3 == (UnpackedMatchPair *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1 * 8);
  }
  if (param_2 != 0) {
    pUVar4 = pUVar3;
    do {
      if (pUVar4 != (UnpackedMatchPair *)0x0) {
        *pUVar4 = *(UnpackedMatchPair *)(((longlong)pUVar1 - (longlong)pUVar3) + (longlong)pUVar4);
      }
      pUVar4 = pUVar4 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = pUVar3;
  this->m_capacity = param_1;
  return pUVar1;
}

// makefit2 @ 14f3aed60

void __thiscall
oo2::vector_storage<oo2::UnpackedMatchPair>::makefit2
          (vector_storage<oo2::UnpackedMatchPair> *this,UnpackedMatchPair *param_1,ulong64 param_2,
          ulong64 param_3)

{
  if (param_1 != (UnpackedMatchPair *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3aed68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleCore_Plugin_Free)(param_1);
    return;
  }
  return;
}

// needmakefit @ 14f3aed80

bool __thiscall
oo2::vector_storage<oo2::UnpackedMatchPair>::needmakefit
          (vector_storage<oo2::UnpackedMatchPair> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// read_firstbytes @ 14f3aed90

int __cdecl oo2::SuffixTrie2::read_firstbytes(uchar *param_1)

{
  return (uint)*(uint3 *)param_1;
}

// release @ 14f3aedc0

void __thiscall
oo2::vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::release
          (vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f3aee00

void __thiscall
oo2::vector_storage<oo2::UnpackedMatchPair>::release(vector_storage<oo2::UnpackedMatchPair> *this)

{
  if (this->m_begin != (UnpackedMatchPair *)0x0) {
    (*g_fp_OodleCore_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (UnpackedMatchPair *)0x0;
  return;
}

// reserve @ 14f3aee40

void __thiscall
oo2::vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::reserve
          (vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this,
          ulong64 param_1)

{
  UnpackedMatchPair *pUVar1;
  
  if ((ulonglong)this->_padding_ < param_1) {
    pUVar1 = vector_storage<oo2::UnpackedMatchPair>::makefit1
                       ((vector_storage<oo2::UnpackedMatchPair> *)this,param_1,this->m_size);
    if (pUVar1 != (UnpackedMatchPair *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3aee60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleCore_Plugin_Free)(pUVar1);
      return;
    }
  }
  return;
}

// reserve @ 14f3aee80

void __thiscall
oo2::vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::reserve
          (vector_flex<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this,
          ulong64 param_1)

{
  UnpackedMatchPair *pUVar1;
  
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    pUVar1 = vector_storage<oo2::UnpackedMatchPair>::makefit1
                       ((vector_storage<oo2::UnpackedMatchPair> *)this,param_1,
                        *(ulong64 *)&this->field_0x10);
    if (pUVar1 != (UnpackedMatchPair *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3aeea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleCore_Plugin_Free)(pUVar1);
      return;
    }
  }
  return;
}

// rrAlignUp64 @ 14f3aeec0

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3aeee0

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3aef00

ulong64 __cdecl oo2::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrCtz32 @ 14f3aef20

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

// rrPtrDiff32 @ 14f3aef30

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// shrink @ 14f3aef40

void __thiscall
oo2::vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_>::shrink
          (vector_base<oo2::UnpackedMatchPair,oo2::vector_storage<oo2::UnpackedMatchPair>_> *this,
          ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// dtor$0 @ 150284f60

void `oo2::construct<oo2::SuffixTrie2::ChildrenSparseI>'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x48),eRRPlacementNew,*(void **)(param_2 + 0x40));
  return;
}

// dtor$0 @ 150284fa0

void `oo2::
     construct<oo2::SuffixTrie2::SuffixTrie2MatchFinder,unsigned_char_const_*_&,int_&,int_&,oo2::LRMSet_*_&,enum_oo2::OodleLZ_Jobify_&,void_*_&,int,oo2::rrArenaAllocator_*_&>'
     ::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x58),eRRPlacementNew,*(void **)(param_2 + 0x70));
  return;
}

// dtor$0 @ 150284fe0

void `oo2::SuffixTrie2::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::IncrementalMatchFinder::~IncrementalMatchFinder(*(IncrementalMatchFinder **)(param_2 + 0x80))
  ;
  return;
}

// dtor$1 @ 150285000

void `oo2::SuffixTrie2::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>::
  ~rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000>
            ((rrPool<oo2::SuffixTrie2::ChildrenSparseN<8>,262000> *)
             (*(longlong *)(param_2 + 0x80) + 0x18));
  return;
}

// dtor$2 @ 150285020

void `oo2::SuffixTrie2::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder'::__l1::dtor_2
               (undefined8 param_1,longlong param_2)

{
  oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>::
  ~rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000>
            ((rrPool<oo2::SuffixTrie2::ChildrenSparseN<16>,262000> *)
             (*(longlong *)(param_2 + 0x80) + 0x38));
  return;
}

// dtor$3 @ 150285040

void `oo2::SuffixTrie2::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder'::__l1::dtor_3
               (undefined8 param_1,longlong param_2)

{
  oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::
  ~rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>
            ((rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000> *)
             (*(longlong *)(param_2 + 0x80) + 0x58));
  return;
}

// dtor$4 @ 150285060

void `oo2::SuffixTrie2::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder'::__l1::dtor_4
               (undefined8 param_1,longlong param_2)

{
  oo2::rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>::
  ~rrPool<oo2::SuffixTrie2::ChildrenFull256,262000>
            ((rrPool<oo2::SuffixTrie2::ChildrenFull256,262000> *)
             (*(longlong *)(param_2 + 0x80) + 0x78));
  return;
}

// dtor$5 @ 150285080

void `oo2::SuffixTrie2::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder'::__l1::dtor_5
               (undefined8 param_1,longlong param_2)

{
  oo2::vector<oo2::UnpackedMatchPair>::~vector<oo2::UnpackedMatchPair>
            ((vector<oo2::UnpackedMatchPair> *)(*(longlong *)(param_2 + 0x80) + 0x2b8));
  return;
}

// dtor$0 @ 1502850a0

void `oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::Alloc'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x48),eRRPlacementNew,*(void **)(param_2 + 0x40));
  return;
}

// dtor$1 @ 1502850e0

void `oo2::rrPool<oo2::SuffixTrie2::ChildrenSparseI,262000>::Alloc'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x48),eRRPlacementNew,*(void **)(param_2 + 0x40));
  return;
}

// dtor$0 @ 150285120

void `oo2::SuffixTrie2::SuffixTrie2MatchFinder::LRMJob'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x30));
  return;
}

// dtor$0 @ 150285140

void `oo2::SuffixTrie2::SuffixTrie2MatchFinder::LRMJobShim'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x98));
  return;
}

// dtor$0 @ 150285160

void `oo2::SuffixTrie2::SuffixTrie2MatchFinder::ProcessChunk'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::OodleJob::~OodleJob((OodleJob *)(param_2 + 0x78));
  return;
}

// dtor$0 @ 150285180

void `oo2::SuffixTrie_CreateMatchFinder'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x88),eRRPlacementNew,*(void **)(param_2 + 0xb0));
  return;
}

