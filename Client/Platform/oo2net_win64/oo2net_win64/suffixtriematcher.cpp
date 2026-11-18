// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2net_win64
// Functions: 318

// ChildrenSparse_Find<8> @ 14ff58b40

int * __cdecl
oo2net::SuffixTrieForMatcher::ChildrenSparse_Find<8>
          (ChildrenSparseN<8> *param_1,int param_2,uchar param_3)

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

// ChildrenSparse_Find<8> @ 14ff58b80

int * __cdecl
oo2net::SuffixTrieForMatcher::ChildrenSparse_Find<8>
          (ChildrenSparseN<8> *param_1,int param_2,uchar param_3)

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

// ChildrenSparse_Find<16> @ 14ff58bc0

int * __cdecl
oo2net::SuffixTrieForMatcher::ChildrenSparse_Find<16>
          (ChildrenSparseN<16> *param_1,int param_2,uchar param_3)

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

// ChildrenSparse_Find<16> @ 14ff58c00

int * __cdecl
oo2net::SuffixTrieForMatcher::ChildrenSparse_Find<16>
          (ChildrenSparseN<16> *param_1,int param_2,uchar param_3)

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

// ChildrenSparse_PreInit<8> @ 14ff58c40

void __cdecl oo2net::SuffixTrieForMatcher::ChildrenSparse_PreInit<8>(ChildrenSparseN<8> *param_1)

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

// ChildrenSparse_PreInit<16> @ 14ff58c50

void __cdecl oo2net::SuffixTrieForMatcher::ChildrenSparse_PreInit<16>(ChildrenSparseN<16> *param_1)

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

// ChildrenSparse_Sort<8> @ 14ff58c60

void __cdecl
oo2net::SuffixTrieForMatcher::ChildrenSparse_Sort<8>(ChildrenSparseN<8> *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  ChildrenSparseN<8> *pCVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  
  lVar4 = (longlong)param_2;
  if (0 < param_2) {
    piVar9 = param_1->nodes;
    lVar5 = 1 - (longlong)param_1;
    lVar6 = lVar4;
    do {
      lVar8 = lVar5 + (longlong)param_1;
      if (lVar8 < lVar4) {
        lVar8 = lVar4 - lVar8;
        pCVar3 = param_1;
        piVar7 = piVar9;
        do {
          piVar7 = piVar7 + 1;
          pCVar3 = (ChildrenSparseN<8> *)(pCVar3->select + 1);
          bVar1 = param_1->select[0];
          if (pCVar3->select[0] < bVar1) {
            param_1->select[0] = pCVar3->select[0];
            pCVar3->select[0] = bVar1;
            iVar2 = *piVar9;
            *piVar9 = *piVar7;
            *piVar7 = iVar2;
          }
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      param_1 = (ChildrenSparseN<8> *)(param_1->select + 1);
      piVar9 = piVar9 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// ChildrenSparse_Sort<16> @ 14ff58cf0

void __cdecl
oo2net::SuffixTrieForMatcher::ChildrenSparse_Sort<16>(ChildrenSparseN<16> *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  ChildrenSparseN<16> *pCVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  
  lVar4 = (longlong)param_2;
  if (0 < param_2) {
    piVar9 = param_1->nodes;
    lVar5 = 1 - (longlong)param_1;
    lVar6 = lVar4;
    do {
      lVar8 = lVar5 + (longlong)param_1;
      if (lVar8 < lVar4) {
        lVar8 = lVar4 - lVar8;
        pCVar3 = param_1;
        piVar7 = piVar9;
        do {
          piVar7 = piVar7 + 1;
          pCVar3 = (ChildrenSparseN<16> *)(pCVar3->select + 1);
          bVar1 = param_1->select[0];
          if (pCVar3->select[0] < bVar1) {
            param_1->select[0] = pCVar3->select[0];
            pCVar3->select[0] = bVar1;
            iVar2 = *piVar9;
            *piVar9 = *piVar7;
            *piVar7 = iVar2;
          }
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      param_1 = (ChildrenSparseN<16> *)(param_1->select + 1);
      piVar9 = piVar9 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// OodleDelete<oo2net::SuffixTrieMatcher> @ 14ff58d80

void __cdecl oo2net::OodleDelete<oo2net::SuffixTrieMatcher>(SuffixTrieMatcher *param_1)

{
  SuffixTrieForMatcher::SuffixTrieObject::~SuffixTrieObject((SuffixTrieObject *)param_1);
                    /* WARNING: Could not recover jumptable at 0x00014ff58d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// OodleDeleteVirtual<oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder> @ 14ff58dc0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __cdecl
oo2net::OodleDeleteVirtual<oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder>
          (SuffixTrie2MatchFinder *param_1)

{
  (**(code **)param_1->_padding_)(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00014ff58dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// check_value_cast<int,unsigned___int64> @ 14ff58df0

int __cdecl oo2net::check_value_cast<int,unsigned___int64>(ulong64 *param_1)

{
  return (int)*param_1;
}

// construct<int,int_const_&> @ 14ff58e00

int * __cdecl oo2net::construct<int,int_const_&>(int *param_1,int *param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_2;
  }
  return param_1;
}

// construct<int,int> @ 14ff58e20

int * __cdecl oo2net::construct<int,int>(int *param_1,int *param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_2;
  }
  return param_1;
}

// construct<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>_> @ 14ff58e40

ChildrenSparseN<8> * __cdecl
oo2net::construct<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>_>(ChildrenSparseN<8> *param_1)

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

// construct<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>_> @ 14ff58e60

ChildrenSparseN<16> * __cdecl
oo2net::construct<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>_>(ChildrenSparseN<16> *param_1)

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

// construct<oo2net::SuffixTrieForMatcher::ChildrenFull256> @ 14ff58e90

ChildrenFull256 * __cdecl
oo2net::construct<oo2net::SuffixTrieForMatcher::ChildrenFull256>(ChildrenFull256 *param_1)

{
  if (param_1 != (ChildrenFull256 *)0x0) {
    memset(param_1,0,0x400);
  }
  return param_1;
}

// construct<oo2net::SuffixTrieForMatcher::ChildrenSparseI> @ 14ff58ec0

ChildrenSparseI * __cdecl
oo2net::construct<oo2net::SuffixTrieForMatcher::ChildrenSparseI>(ChildrenSparseI *param_1)

{
  if (param_1 != (ChildrenSparseI *)0x0) {
    rrMemSetZero(param_1,0x100);
  }
  return param_1;
}

// construct<oo2net::SuffixTrieMatch> @ 14ff58f00

SuffixTrieMatch * __cdecl oo2net::construct<oo2net::SuffixTrieMatch>(SuffixTrieMatch *param_1)

{
  if (param_1 != (SuffixTrieMatch *)0x0) {
    param_1->ptr = (uchar *)0x0;
    param_1->length = 0;
    param_1->count = 0;
    *(undefined8 *)&param_1->suffix_index = 0;
  }
  return param_1;
}

// construct<oo2net::UnpackedMatchPair,int_&,int> @ 14ff58f20

UnpackedMatchPair * __cdecl
oo2net::construct<oo2net::UnpackedMatchPair,int_&,int>
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

// copy_construct<int> @ 14ff58f40

void __cdecl oo2net::copy_construct<int>(int *param_1,int *param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// copy_construct<oo2net::SuffixTrieForMatcher::SuffixNode_*> @ 14ff58f50

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __cdecl
oo2net::copy_construct<oo2net::SuffixTrieForMatcher::SuffixNode_*>
          (SuffixNode **param_1,SuffixNode **param_2)

{
  if (param_1 != (SuffixNode **)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// copy_construct_identical<int> @ 14ff58f70

void __cdecl oo2net::copy_construct_identical<int>(int *param_1,int *param_2,ulong64 param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = *param_2;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *param_1 = iVar1;
      param_1 = param_1 + 1;
    }
  }
  return;
}

// copy_construct_identical<oo2net::SuffixTrieForMatcher::SuffixNode_*> @ 14ff58fa0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __cdecl
oo2net::copy_construct_identical<oo2net::SuffixTrieForMatcher::SuffixNode_*>
          (SuffixNode **param_1,SuffixNode **param_2,ulong64 param_3)

{
  for (; param_3 != 0; param_3 = param_3 - 1) {
    if (param_1 != (SuffixNode **)0x0) {
      *param_1 = *param_2;
    }
    param_1 = param_1 + 1;
  }
  return;
}

// default_construct<int> @ 14ff58fd0

int * __cdecl oo2net::default_construct<int>(int *param_1,ulong64 param_2)

{
  return param_1;
}

// default_construct<oo2net::BitFlags256> @ 14ff58fe0

BitFlags256 * __cdecl
oo2net::default_construct<oo2net::BitFlags256>(BitFlags256 *param_1,ulong64 param_2)

{
  return param_1;
}

// default_construct<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> @ 14ff58ff0

SuffixIndex * __cdecl
oo2net::default_construct<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>
          (SuffixIndex *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<int> @ 14ff59000

int * __cdecl oo2net::destruct<int>(int *param_1)

{
  return param_1;
}

// destruct<int> @ 14ff59010

int * __cdecl oo2net::destruct<int>(int *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2net::SuffixTrieForMatcher::SuffixNode_*> @ 14ff59020

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __cdecl
oo2net::destruct<oo2net::SuffixTrieForMatcher::SuffixNode_*>(SuffixNode **param_1)

{
  return param_1;
}

// destruct<oo2net::SuffixTrieForMatcher::SuffixNode_*> @ 14ff59030

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __cdecl
oo2net::destruct<oo2net::SuffixTrieForMatcher::SuffixNode_*>(SuffixNode **param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>_> @ 14ff59040

ChildrenSparseN<8> * __cdecl
oo2net::destruct<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>_>(ChildrenSparseN<8> *param_1)

{
  return param_1;
}

// destruct<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>_> @ 14ff59050

ChildrenSparseN<16> * __cdecl
oo2net::destruct<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>_>(ChildrenSparseN<16> *param_1)

{
  return param_1;
}

// destruct<oo2net::BitFlags256> @ 14ff59060

BitFlags256 * __cdecl oo2net::destruct<oo2net::BitFlags256>(BitFlags256 *param_1)

{
  return param_1;
}

// destruct<oo2net::BitFlags256> @ 14ff59070

BitFlags256 * __cdecl oo2net::destruct<oo2net::BitFlags256>(BitFlags256 *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2net::SuffixTrieForMatcher::ChildrenSparseI> @ 14ff59080

ChildrenSparseI * __cdecl
oo2net::destruct<oo2net::SuffixTrieForMatcher::ChildrenSparseI>(ChildrenSparseI *param_1)

{
  return param_1;
}

// destruct<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> @ 14ff59090

SuffixIndex * __cdecl
oo2net::destruct<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>(SuffixIndex *param_1)

{
  return param_1;
}

// destruct<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> @ 14ff590a0

SuffixIndex * __cdecl
oo2net::destruct<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>
          (SuffixIndex *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2net::SuffixTrieMatch> @ 14ff590b0

SuffixTrieMatch * __cdecl oo2net::destruct<oo2net::SuffixTrieMatch>(SuffixTrieMatch *param_1)

{
  return param_1;
}

// destruct<oo2net::SuffixTrieMatch> @ 14ff590c0

SuffixTrieMatch * __cdecl
oo2net::destruct<oo2net::SuffixTrieMatch>(SuffixTrieMatch *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2net::SuffixTrieMatcher> @ 14ff590d0

SuffixTrieMatcher * __cdecl oo2net::destruct<oo2net::SuffixTrieMatcher>(SuffixTrieMatcher *param_1)

{
  SuffixTrieForMatcher::SuffixTrieObject::~SuffixTrieObject((SuffixTrieObject *)param_1);
  return param_1;
}

// destruct<oo2net::UnpackedMatchPair> @ 14ff590f0

UnpackedMatchPair * __cdecl oo2net::destruct<oo2net::UnpackedMatchPair>(UnpackedMatchPair *param_1)

{
  return param_1;
}

// destruct<oo2net::UnpackedMatchPair> @ 14ff59100

UnpackedMatchPair * __cdecl
oo2net::destruct<oo2net::UnpackedMatchPair>(UnpackedMatchPair *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct_virtual<oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder> @ 14ff59120

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixTrie2MatchFinder * __cdecl
oo2net::destruct_virtual<oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder>
          (SuffixTrie2MatchFinder *param_1)

{
  (**(code **)param_1->_padding_)(param_1,0);
  return param_1;
}

// emplace_back<int_&,int> @ 14ff59140

void __thiscall
oo2net::vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
emplace_back<int_&,int>
          (vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
           *this,int *param_1,int *param_2)

{
  ulong64 uVar1;
  int iVar2;
  ulong64 uVar3;
  UnpackedMatchPair *pUVar4;
  int *piVar5;
  
  uVar3 = *(ulong64 *)&this->field_0x10;
  uVar1 = uVar3 + 1;
  if (*(ulonglong *)&this->field_0x8 < uVar1) {
    pUVar4 = vector_storage<oo2net::UnpackedMatchPair>::makefit1
                       ((vector_storage<oo2net::UnpackedMatchPair> *)this,uVar1,uVar3);
    piVar5 = (int *)(*(longlong *)this + uVar3 * 8);
    if (piVar5 != (int *)0x0) {
      iVar2 = *param_2;
      *piVar5 = *param_1;
      piVar5[1] = iVar2;
    }
    *(ulong64 *)&this->field_0x10 = uVar1;
    if (pUVar4 != (UnpackedMatchPair *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(pUVar4);
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

// extend_construct_in_place<> @ 14ff59200

void __thiscall
oo2net::vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::
extend_construct_in_place<>
          (vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  SuffixTrieMatch *pSVar3;
  undefined8 *puVar4;
  
  uVar2 = this->m_size;
  uVar1 = uVar2 + 1;
  if ((ulonglong)this->_padding_ < uVar1) {
    pSVar3 = vector_storage<oo2net::SuffixTrieMatch>::makefit1
                       ((vector_storage<oo2net::SuffixTrieMatch> *)this,uVar1,uVar2);
    puVar4 = (undefined8 *)(this->_padding_ + uVar2 * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
    this->m_size = uVar1;
    if (pSVar3 != (SuffixTrieMatch *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff59263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(pSVar3);
      return;
    }
  }
  else {
    this->m_size = uVar1;
    puVar4 = (undefined8 *)(this->_padding_ + uVar2 * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
  }
  return;
}

// extend_construct_in_place<int_&,int> @ 14ff592a0

void __thiscall
oo2net::vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
extend_construct_in_place<int_&,int>
          (vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
           *this,int *param_1,int *param_2)

{
  ulong64 uVar1;
  int iVar2;
  ulong64 uVar3;
  UnpackedMatchPair *pUVar4;
  int *piVar5;
  
  uVar3 = this->m_size;
  uVar1 = uVar3 + 1;
  if ((ulonglong)this->_padding_ < uVar1) {
    pUVar4 = vector_storage<oo2net::UnpackedMatchPair>::makefit1
                       ((vector_storage<oo2net::UnpackedMatchPair> *)this,uVar1,uVar3);
    piVar5 = (int *)(this->_padding_ + uVar3 * 8);
    if (piVar5 != (int *)0x0) {
      iVar2 = *param_2;
      *piVar5 = *param_1;
      piVar5[1] = iVar2;
    }
    this->m_size = uVar1;
    if (pUVar4 != (UnpackedMatchPair *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(pUVar4);
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

// extend_construct_in_place<int_const_&> @ 14ff59360

void __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::extend_construct_in_place<int_const_&>
          (vector_base<int,oo2net::vector_storage<int>_> *this,int *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  int *piVar3;
  int *piVar4;
  
  uVar2 = this->m_size;
  uVar1 = uVar2 + 1;
  if ((ulonglong)this->_padding_ < uVar1) {
    piVar3 = vector_storage<int>::makefit1((vector_storage<int> *)this,uVar1,uVar2);
    piVar4 = (int *)(this->_padding_ + uVar2 * 4);
    if (piVar4 != (int *)0x0) {
      *piVar4 = *param_1;
    }
    this->m_size = uVar1;
    if (piVar3 != (int *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(piVar3);
    }
  }
  else {
    this->m_size = uVar1;
    piVar3 = (int *)(this->_padding_ + uVar2 * 4);
    if (piVar3 != (int *)0x0) {
      *piVar3 = *param_1;
    }
  }
  return;
}

// extend_construct_in_place<int> @ 14ff59400

void __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::extend_construct_in_place<int>
          (vector_base<int,oo2net::vector_storage<int>_> *this,int *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  int *piVar3;
  int *piVar4;
  
  uVar2 = this->m_size;
  uVar1 = uVar2 + 1;
  if ((ulonglong)this->_padding_ < uVar1) {
    piVar3 = vector_storage<int>::makefit1((vector_storage<int> *)this,uVar1,uVar2);
    piVar4 = (int *)(this->_padding_ + uVar2 * 4);
    if (piVar4 != (int *)0x0) {
      *piVar4 = *param_1;
    }
    this->m_size = uVar1;
    if (piVar3 != (int *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(piVar3);
    }
  }
  else {
    this->m_size = uVar1;
    piVar3 = (int *)(this->_padding_ + uVar2 * 4);
    if (piVar3 != (int *)0x0) {
      *piVar3 = *param_1;
    }
  }
  return;
}

// forward<int_&> @ 14ff59490

int * __cdecl oo2net::forward<int_&>(int *param_1)

{
  return param_1;
}

// forward<int_const_&> @ 14ff594a0

int * __cdecl oo2net::forward<int_const_&>(int *param_1)

{
  return param_1;
}

// forward<int> @ 14ff594b0

int * __cdecl oo2net::forward<int>(int *param_1)

{
  return param_1;
}

// move<int_&> @ 14ff594c0

int * __cdecl oo2net::move<int_&>(int *param_1)

{
  return param_1;
}

// move<oo2net::SuffixTrieForMatcher::SuffixNode_*_&> @ 14ff594d0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __cdecl
oo2net::move<oo2net::SuffixTrieForMatcher::SuffixNode_*_&>(SuffixNode **param_1)

{
  return param_1;
}

// move<oo2net::BitFlags256_&> @ 14ff594e0

BitFlags256 * __cdecl oo2net::move<oo2net::BitFlags256_&>(BitFlags256 *param_1)

{
  return param_1;
}

// move<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex_&> @ 14ff594f0

SuffixIndex * __cdecl
oo2net::move<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex_&>(SuffixIndex *param_1)

{
  return param_1;
}

// move<oo2net::SuffixTrieMatch_&> @ 14ff59500

SuffixTrieMatch * __cdecl oo2net::move<oo2net::SuffixTrieMatch_&>(SuffixTrieMatch *param_1)

{
  return param_1;
}

// move<oo2net::UnpackedMatchPair_&> @ 14ff59510

UnpackedMatchPair * __cdecl oo2net::move<oo2net::UnpackedMatchPair_&>(UnpackedMatchPair *param_1)

{
  return param_1;
}

// move_construct<int> @ 14ff59520

void __cdecl oo2net::move_construct<int>(int *param_1,int *param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<int> @ 14ff59530

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

// move_construct<oo2net::SuffixTrieForMatcher::SuffixNode_*> @ 14ff59560

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __cdecl
oo2net::move_construct<oo2net::SuffixTrieForMatcher::SuffixNode_*>
          (SuffixNode **param_1,SuffixNode **param_2)

{
  if (param_1 != (SuffixNode **)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<oo2net::SuffixTrieForMatcher::SuffixNode_*> @ 14ff59580

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __cdecl
oo2net::move_construct<oo2net::SuffixTrieForMatcher::SuffixNode_*>
          (SuffixNode **param_1,SuffixNode **param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (SuffixNode **)0x0) {
        *param_1 = *(SuffixNode **)(lVar1 + (longlong)param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// move_construct<oo2net::BitFlags256> @ 14ff595b0

void __cdecl oo2net::move_construct<oo2net::BitFlags256>(BitFlags256 *param_1,BitFlags256 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (BitFlags256 *)0x0) {
    uVar1 = *(undefined8 *)(param_2->words + 2);
    *(undefined8 *)param_1->words = *(undefined8 *)param_2->words;
    *(undefined8 *)(param_1->words + 2) = uVar1;
    uVar1 = *(undefined8 *)(param_2->words + 6);
    *(undefined8 *)(param_1->words + 4) = *(undefined8 *)(param_2->words + 4);
    *(undefined8 *)(param_1->words + 6) = uVar1;
  }
  return;
}

// move_construct<oo2net::BitFlags256> @ 14ff595d0

void __cdecl
oo2net::move_construct<oo2net::BitFlags256>
          (BitFlags256 *param_1,BitFlags256 *param_2,ulong64 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (BitFlags256 *)0x0) {
        puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
        uVar2 = puVar1[1];
        *(undefined8 *)param_1->words = *puVar1;
        *(undefined8 *)(param_1->words + 2) = uVar2;
        puVar1 = (undefined8 *)(lVar3 + 0x10 + (longlong)param_1);
        uVar2 = puVar1[1];
        *(undefined8 *)(param_1->words + 4) = *puVar1;
        *(undefined8 *)(param_1->words + 6) = uVar2;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// move_construct<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> @ 14ff59600

void __cdecl
oo2net::move_construct<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>
          (SuffixIndex *param_1,SuffixIndex *param_2)

{
  if (param_1 != (SuffixIndex *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> @ 14ff59620

void __cdecl
oo2net::move_construct<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>
          (SuffixIndex *param_1,SuffixIndex *param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (SuffixIndex *)0x0) {
        *param_1 = *(SuffixIndex *)(lVar1 + (longlong)param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// move_construct<oo2net::SuffixTrieMatch> @ 14ff59650

void __cdecl
oo2net::move_construct<oo2net::SuffixTrieMatch>(SuffixTrieMatch *param_1,SuffixTrieMatch *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != (SuffixTrieMatch *)0x0) {
    iVar1 = param_2->length;
    iVar2 = param_2->count;
    param_1->ptr = param_2->ptr;
    param_1->length = iVar1;
    param_1->count = iVar2;
    uVar3 = *(undefined4 *)&param_2->field_0x14;
    param_1->suffix_index = param_2->suffix_index;
    *(undefined4 *)&param_1->field_0x14 = uVar3;
  }
  return;
}

// move_construct<oo2net::SuffixTrieMatch> @ 14ff59670

void __cdecl
oo2net::move_construct<oo2net::SuffixTrieMatch>
          (SuffixTrieMatch *param_1,SuffixTrieMatch *param_2,ulong64 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (SuffixTrieMatch *)0x0) {
        puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
        uVar2 = puVar1[1];
        param_1->ptr = (uchar *)*puVar1;
        param_1->length = (int)uVar2;
        param_1->count = (int)((ulonglong)uVar2 >> 0x20);
        *(undefined8 *)&param_1->suffix_index = *(undefined8 *)(lVar3 + 0x10 + (longlong)param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// move_construct<oo2net::UnpackedMatchPair> @ 14ff596a0

void __cdecl
oo2net::move_construct<oo2net::UnpackedMatchPair>
          (UnpackedMatchPair *param_1,UnpackedMatchPair *param_2)

{
  if (param_1 != (UnpackedMatchPair *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<oo2net::UnpackedMatchPair> @ 14ff596c0

void __cdecl
oo2net::move_construct<oo2net::UnpackedMatchPair>
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

// rrAlignUpPointer<void> @ 14ff596f0

void * __cdecl oo2net::rrAlignUpPointer<void>(void *param_1,long64 param_2)

{
  return (void *)((longlong)param_1 + param_2 + -1 & ~(param_2 - 1U));
}

// swap<unsigned_char> @ 14ff59710

void __cdecl oo2net::swap<unsigned_char>(uchar *param_1,uchar *param_2)

{
  uchar uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// swap<int> @ 14ff59730

void __cdecl oo2net::swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// rrArenaArray<int> @ 14ff59750

rrArenaArray<int> * __thiscall oo2net::rrArenaArray<int>::rrArenaArray<int>(rrArenaArray<int> *this)

{
  this->m_ptr = (int *)0x0;
  this->m_alloc = (void *)0x0;
  return this;
}

// rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_> @ 14ff59770

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_> * __thiscall
oo2net::rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_>::
rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_>
          (rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_> *this)

{
  this->m_ptr = (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)0x0;
  this->m_alloc = (void *)0x0;
  return this;
}

// rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> @ 14ff59790

rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> * __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::
rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> *this)

{
  this->m_next = 0x6657;
  this->m_chunkList = (Chunk *)0x0;
  this->m_freeList = (FreeList *)0x0;
  this->m_scratch = (rrArenaAllocator *)0x0;
  return this;
}

// rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> @ 14ff597b0

rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> * __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::
rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> *this)

{
  this->m_next = 0x332b;
  this->m_chunkList = (Chunk *)0x0;
  this->m_freeList = (FreeList *)0x0;
  this->m_scratch = (rrArenaAllocator *)0x0;
  return this;
}

// rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000> @ 14ff597d0

rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000> * __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::
rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000> *this)

{
  this->m_next = 0x3ff;
  this->m_chunkList = (Chunk *)0x0;
  this->m_freeList = (FreeList *)0x0;
  this->m_scratch = (rrArenaAllocator *)0x0;
  return this;
}

// rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> @ 14ff597f0

rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> * __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::
rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> *this)

{
  this->m_next = 0x923;
  this->m_chunkList = (Chunk *)0x0;
  this->m_freeList = (FreeList *)0x0;
  this->m_scratch = (rrArenaAllocator *)0x0;
  return this;
}

// vector<oo2net::SuffixTrieForMatcher::SuffixNode_*> @ 14ff59810

vector<oo2net::SuffixTrieForMatcher::SuffixNode_*> * __thiscall
oo2net::vector<oo2net::SuffixTrieForMatcher::SuffixNode_*>::
vector<oo2net::SuffixTrieForMatcher::SuffixNode_*>
          (vector<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> @ 14ff59830

vector<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> * __thiscall
oo2net::vector<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::
vector<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>
          (vector<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector<oo2net::UnpackedMatchPair> @ 14ff59850

vector<oo2net::UnpackedMatchPair> * __thiscall
oo2net::vector<oo2net::UnpackedMatchPair>::vector<oo2net::UnpackedMatchPair>
          (vector<oo2net::UnpackedMatchPair> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_> @ 14ff59870

vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
* __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::
vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
          (vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
           *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_> @ 14ff59890

vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
* __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::
vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
          (vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
           *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_> @ 14ff598b0

vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_> *
__thiscall
oo2net::vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
          (vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
           *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_> @ 14ff598d0

vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
* __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
          (vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_> @ 14ff598f0

vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
* __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
          (vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_> @ 14ff59910

vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_> *
__thiscall
oo2net::vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
          (vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> @ 14ff59930

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> * __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::
vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this)

{
  this->m_begin = (SuffixNode **)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> @ 14ff59950

vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> * __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::
vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this)

{
  this->m_begin = (SuffixIndex *)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage<oo2net::UnpackedMatchPair> @ 14ff59970

vector_storage<oo2net::UnpackedMatchPair> * __thiscall
oo2net::vector_storage<oo2net::UnpackedMatchPair>::vector_storage<oo2net::UnpackedMatchPair>
          (vector_storage<oo2net::UnpackedMatchPair> *this)

{
  this->m_begin = (UnpackedMatchPair *)0x0;
  this->m_capacity = 0;
  return this;
}

// ChildrenSparseI @ 14ff599a0

ChildrenSparseI * __thiscall
oo2net::SuffixTrieForMatcher::ChildrenSparseI::ChildrenSparseI(ChildrenSparseI *this)

{
  rrMemSetZero(this,0x100);
  return this;
}

// IncrementalMatchFinder @ 14ff599d0

IncrementalMatchFinder * __thiscall
oo2net::IncrementalMatchFinder::IncrementalMatchFinder(IncrementalMatchFinder *this)

{
  *this = (IncrementalMatchFinder)&___7IncrementalMatchFinder_oo2net__6B_;
  return this;
}

// OodleJob @ 14ff599f0

OodleJob * __thiscall oo2net::OodleJob::OodleJob(OodleJob *this)

{
  this->handle = 0;
  return this;
}

// SuffixTrie2MatchFinder @ 14ff59a20

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixTrie2MatchFinder * __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder
          (SuffixTrie2MatchFinder *this,uchar *param_1,int param_2,int param_3,LRMSet *param_4,
          OodleLZ_Jobify param_5,void *param_6,int param_7,rrArenaAllocator *param_8)

{
  uchar *puVar1;
  ulonglong *puVar2;
  int *_Dst;
  rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *prVar3;
  rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *_Dst_00;
  sbyte sVar4;
  ulonglong *puVar5;
  rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *prVar6;
  ulonglong uVar7;
  size_t _Size;
  longlong lVar8;
  SuffixNode *_Size_00;
  ulonglong uVar9;
  
  this->_padding_ = (longlong)&___7SuffixTrie2MatchFinder_SuffixTrieForMatcher_oo2net__6B_;
  (this->ChildrenSparse1_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenSparse1_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenSparse1_pool).m_next = 0x6657;
  (this->ChildrenSparse1_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenSparse2_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenSparse2_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenSparse2_pool).m_next = 0x332b;
  (this->ChildrenSparse2_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenSparseI_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenSparseI_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenSparseI_pool).m_next = 0x923;
  (this->ChildrenSparseI_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenFull256_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenFull256_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenFull256_pool).m_next = 0x3ff;
  (this->ChildrenFull256_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->vfirstbytes).m_ptr = (int *)0x0;
  (this->vfirstbytes).m_alloc = (void *)0x0;
  (this->node_chunks).m_ptr = (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)0x0;
  (this->node_chunks).m_alloc = (void *)0x0;
  *(undefined8 *)&this->lrm_matches = 0;
  *(undefined8 *)&(this->lrm_matches).field_0x8 = 0;
  *(undefined8 *)&(this->lrm_matches).field_0x10 = 0;
  puVar1 = param_1 + -1;
  this->m_ubuf = puVar1;
  this->m_size = param_2 + 1;
  this->scratch_arena = param_8;
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::AddScratch
            (&this->ChildrenSparse1_pool,param_8);
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::AddScratch
            (&this->ChildrenSparse2_pool,param_8);
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::AddScratch
            (&this->ChildrenSparseI_pool,param_8);
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::AddScratch
            (&this->ChildrenFull256_pool,param_8);
  this->num_firstbytes = param_7;
  sVar4 = 0x18;
  if (param_7 == 2) {
    sVar4 = 0x10;
  }
  this->firstbytes_mask = (1 << sVar4) + -1;
  _Size = (longlong)(1 << sVar4) * 4;
  if (param_8 == (rrArenaAllocator *)0x0) {
LAB_14ff59bf2:
    _Dst = (*g_fp_OodleNet_Plugin_MallocAligned)(_Size,0x10);
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
      goto LAB_14ff59bf2;
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
    if (_Dst == (int *)0x0) goto LAB_14ff59bf2;
  }
  (this->vfirstbytes).m_ptr = _Dst;
  memset(_Dst,0,_Size);
  lVar8 = (longlong)(param_2 + 0x4000 >> 0xe);
  _Size_00 = (SuffixNode *)(lVar8 * 0x10);
  if (param_8 != (rrArenaAllocator *)0x0) {
    uVar7 = (ulonglong)(-(uint)(param_8->m_unorderedStart != 0) & 0x10);
    _Dst_00 = (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)param_8->m_cur;
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
        prVar6 = (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)param_8->m_cur;
      }
      prVar3 = (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)param_8->m_cur_max;
      if ((rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)param_8->m_cur_max <= prVar6) {
        prVar3 = prVar6;
      }
      param_8->m_cur_max = (ulong64)prVar3;
      (this->node_chunks).m_alloc = _Dst_00;
      if (_Dst_00 != (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)0x0)
      goto LAB_14ff59ccf;
    }
  }
  _Dst_00 = (*g_fp_OodleNet_Plugin_MallocAligned)((long64)_Size_00,0x10);
  if (_Dst_00 == (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed((long64)_Size_00);
  }
LAB_14ff59ccf:
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

// SuffixTrieMatcher @ 14ff59dc0

SuffixTrieMatcher * __thiscall oo2net::SuffixTrieMatcher::SuffixTrieMatcher(SuffixTrieMatcher *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x38 = 0x6657;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined4 *)&this->field_0x58 = 0x332b;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined4 *)&this->field_0x78 = 0x923;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined4 *)&this->field_0x98 = 0x3ff;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  return this;
}

// SuffixTrieObject @ 14ff59e80

SuffixTrieObject * __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixTrieObject(SuffixTrieObject *this)

{
  this->m_ubuf = (uchar *)0x0;
  this->m_ubufsize = 0;
  *(undefined8 *)&this->vfirstbytes = 0;
  *(undefined8 *)&(this->vfirstbytes).field_0x8 = 0;
  *(undefined8 *)&(this->vfirstbytes).field_0x10 = 0;
  (this->ChildrenSparse1_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenSparse1_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenSparse1_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenSparse1_pool).m_next = 0x6657;
  (this->ChildrenSparse2_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenSparse2_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenSparse2_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenSparse2_pool).m_next = 0x332b;
  (this->ChildrenSparseI_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenSparseI_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenSparseI_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenSparseI_pool).m_next = 0x923;
  (this->ChildrenFull256_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenFull256_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenFull256_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenFull256_pool).m_next = 0x3ff;
  *(undefined8 *)&this->node_chunks = 0;
  *(undefined8 *)&(this->node_chunks).field_0x8 = 0;
  *(undefined8 *)&(this->node_chunks).field_0x10 = 0;
  *(undefined8 *)&this->vsuffixindices = 0;
  *(undefined8 *)&(this->vsuffixindices).field_0x8 = 0;
  *(undefined8 *)&(this->vsuffixindices).field_0x10 = 0;
  *(undefined8 *)&this->vleaf_to_suffix = 0;
  *(undefined8 *)&(this->vleaf_to_suffix).field_0x8 = 0;
  *(undefined8 *)&(this->vleaf_to_suffix).field_0x10 = 0;
  return this;
}

// UnpackedMatchPair @ 14ff59f40

UnpackedMatchPair * __thiscall
oo2net::UnpackedMatchPair::UnpackedMatchPair(UnpackedMatchPair *this,int param_1,int param_2)

{
  this->length = param_1;
  this->offset = param_2;
  return this;
}

// ~rrArenaArray<int> @ 14ff59f50

void __thiscall oo2net::rrArenaArray<int>::~rrArenaArray<int>(rrArenaArray<int> *this)

{
  return;
}

// ~rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_> @ 14ff59f60

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_>::
~rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_>
          (rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_> *this)

{
  return;
}

// ~rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> @ 14ff59f80

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::
~rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> *this)

{
  FreeAllChunks(this,false);
  return;
}

// ~rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> @ 14ff59fa0

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::
~rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> *this)

{
  FreeAllChunks(this,false);
  return;
}

// ~rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000> @ 14ff59fc0

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::
~rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000> *this)

{
  FreeAllChunks(this,false);
  return;
}

// ~rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> @ 14ff59fe0

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::
~rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> *this)

{
  FreeAllChunks(this,false);
  return;
}

// ~vector<oo2net::SuffixTrieForMatcher::SuffixNode_*> @ 14ff5a000

void __thiscall
oo2net::vector<oo2net::SuffixTrieForMatcher::SuffixNode_*>::
~vector<oo2net::SuffixTrieForMatcher::SuffixNode_*>
          (vector<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> @ 14ff5a060

void __thiscall
oo2net::vector<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::
~vector<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>
          (vector<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector<oo2net::UnpackedMatchPair> @ 14ff5a0c0

void __thiscall
oo2net::vector<oo2net::UnpackedMatchPair>::~vector<oo2net::UnpackedMatchPair>
          (vector<oo2net::UnpackedMatchPair> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_> @ 14ff5a120

void __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::
~vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
          (vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
           *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_> @ 14ff5a180

void __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::
~vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
          (vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
           *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_> @ 14ff5a1e0

void __thiscall
oo2net::vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
~vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
          (vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
           *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_> @ 14ff5a240

void __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::
~vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
          (vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
           *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_> @ 14ff5a2a0

void __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::
~vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
          (vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
           *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_> @ 14ff5a300

void __thiscall
oo2net::vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
~vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
          (vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
           *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  if (*(void **)this != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> @ 14ff5a360

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::
~vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this)

{
  if (this->m_begin != (SuffixNode **)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (SuffixNode **)0x0;
  return;
}

// ~vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> @ 14ff5a3a0

void __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::
~vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this)

{
  if (this->m_begin != (SuffixIndex *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (SuffixIndex *)0x0;
  return;
}

// ~vector_storage<oo2net::UnpackedMatchPair> @ 14ff5a3e0

void __thiscall
oo2net::vector_storage<oo2net::UnpackedMatchPair>::~vector_storage<oo2net::UnpackedMatchPair>
          (vector_storage<oo2net::UnpackedMatchPair> *this)

{
  if (this->m_begin != (UnpackedMatchPair *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (UnpackedMatchPair *)0x0;
  return;
}

// ~IncrementalMatchFinder @ 14ff5a420

void __thiscall
oo2net::IncrementalMatchFinder::~IncrementalMatchFinder(IncrementalMatchFinder *this)

{
  *this = (IncrementalMatchFinder)&___7IncrementalMatchFinder_oo2net__6B_;
  return;
}

// ~OodleJob @ 14ff5a440

void __thiscall oo2net::OodleJob::~OodleJob(OodleJob *this)

{
  code *pcVar1;
  int iVar2;
  
  if (this->handle != 0) {
    iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\oodlejob.h",0x9e,
                               "oo2net::OodleJob::~OodleJob","handle == 0");
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~SuffixTrie2MatchFinder @ 14ff5a4a0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::~SuffixTrie2MatchFinder
          (SuffixTrie2MatchFinder *this)

{
  rrArenaAllocator *prVar1;
  rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *prVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  this->_padding_ = (longlong)&___7SuffixTrie2MatchFinder_SuffixTrieForMatcher_oo2net__6B_;
  iVar5 = this->m_size + 0x3fff >> 0xe;
  lVar7 = 0;
  lVar6 = (longlong)iVar5;
  if (0 < iVar5) {
    do {
      puVar8 = (undefined8 *)((longlong)&((this->node_chunks).m_ptr)->m_ptr + lVar7);
      prVar1 = this->scratch_arena;
      if ((void *)*puVar8 != (void *)0x0) {
        if ((prVar1 == (rrArenaAllocator *)0x0) || ((void *)puVar8[1] == (void *)0x0)) {
          (*g_fp_OodleNet_Plugin_Free)((void *)*puVar8);
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
  if (prVar2 != (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)0x0) {
    if ((prVar1 == (rrArenaAllocator *)0x0) ||
       (pvVar3 = (this->node_chunks).m_alloc, pvVar3 == (void *)0x0)) {
      (*g_fp_OodleNet_Plugin_Free)(prVar2);
    }
    else {
      if (prVar1->m_unorderedStart != 0) {
        rrArenaAllocator::Free(prVar1,pvVar3,(longlong)iVar5 << 4);
      }
      (this->node_chunks).m_alloc = (void *)0x0;
    }
    (this->node_chunks).m_ptr = (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)0x0;
  }
  prVar1 = this->scratch_arena;
  piVar4 = (this->vfirstbytes).m_ptr;
  if (piVar4 != (int *)0x0) {
    if ((prVar1 == (rrArenaAllocator *)0x0) ||
       (pvVar3 = (this->vfirstbytes).m_alloc, pvVar3 == (void *)0x0)) {
      (*g_fp_OodleNet_Plugin_Free)(piVar4);
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
    rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::FreeAllChunks
              (&this->ChildrenSparse1_pool,true);
    rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::FreeAllChunks
              (&this->ChildrenSparse2_pool,true);
    rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::FreeAllChunks
              (&this->ChildrenSparseI_pool,true);
    rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::FreeAllChunks
              (&this->ChildrenFull256_pool,true);
  }
  *(undefined8 *)&(this->lrm_matches).field_0x10 = 0;
  if (*(void **)&this->lrm_matches != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&this->lrm_matches);
  }
  *(undefined8 *)&this->lrm_matches = 0;
  *(undefined8 *)&(this->lrm_matches).field_0x8 = 0;
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::FreeAllChunks
            (&this->ChildrenFull256_pool,false);
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::FreeAllChunks
            (&this->ChildrenSparseI_pool,false);
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::FreeAllChunks
            (&this->ChildrenSparse2_pool,false);
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::FreeAllChunks
            (&this->ChildrenSparse1_pool,false);
  this->_padding_ = (longlong)&___7IncrementalMatchFinder_oo2net__6B_;
  return;
}

// ~SuffixTrieMatcher @ 14ff5a6c0

void __thiscall oo2net::SuffixTrieMatcher::~SuffixTrieMatcher(SuffixTrieMatcher *this)

{
  void *pvVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(longlong *)&this->field_0xb8 != 0) {
    do {
      pvVar1 = *(void **)(*(longlong *)&this->field_0xa8 + uVar2 * 8);
      if (pvVar1 != (void *)0x0) {
        (*g_fp_OodleNet_Plugin_Free)(pvVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulonglong *)&this->field_0xb8);
  }
  *(undefined8 *)&this->field_0xe8 = 0;
  if (*(void **)&this->field_0xd8 != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&this->field_0xd8);
  }
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&this->field_0xc0);
  }
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&this->field_0xa8);
  }
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::FreeAllChunks
            ((rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000> *)&this->field_0x88,
             false);
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::FreeAllChunks
            ((rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> *)&this->field_0x68,
             false);
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::FreeAllChunks
            ((rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> *)&this->field_0x48,
             false);
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::FreeAllChunks
            ((rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> *)&this->field_0x28,
             false);
  *(undefined8 *)&this->field_0x20 = 0;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&this->field_0x10);
  }
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  return;
}

// ~SuffixTrieObject @ 14ff5a6e0

void __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrieObject::~SuffixTrieObject(SuffixTrieObject *this)

{
  void *pvVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(longlong *)&(this->node_chunks).field_0x10 != 0) {
    do {
      pvVar1 = *(void **)(*(longlong *)&this->node_chunks + uVar2 * 8);
      if (pvVar1 != (void *)0x0) {
        (*g_fp_OodleNet_Plugin_Free)(pvVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulonglong *)&(this->node_chunks).field_0x10);
  }
  *(undefined8 *)&(this->vleaf_to_suffix).field_0x10 = 0;
  if (*(void **)&this->vleaf_to_suffix != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&this->vleaf_to_suffix);
  }
  *(undefined8 *)&this->vleaf_to_suffix = 0;
  *(undefined8 *)&(this->vleaf_to_suffix).field_0x8 = 0;
  *(undefined8 *)&(this->vsuffixindices).field_0x10 = 0;
  if (*(void **)&this->vsuffixindices != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&this->vsuffixindices);
  }
  *(undefined8 *)&this->vsuffixindices = 0;
  *(undefined8 *)&(this->vsuffixindices).field_0x8 = 0;
  *(undefined8 *)&(this->node_chunks).field_0x10 = 0;
  if (*(void **)&this->node_chunks != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&this->node_chunks);
  }
  *(undefined8 *)&this->node_chunks = 0;
  *(undefined8 *)&(this->node_chunks).field_0x8 = 0;
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::FreeAllChunks
            (&this->ChildrenFull256_pool,false);
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::FreeAllChunks
            (&this->ChildrenSparseI_pool,false);
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::FreeAllChunks
            (&this->ChildrenSparse2_pool,false);
  rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::FreeAllChunks
            (&this->ChildrenSparse1_pool,false);
  *(undefined8 *)&(this->vfirstbytes).field_0x10 = 0;
  if (*(void **)&this->vfirstbytes != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(*(void **)&this->vfirstbytes);
  }
  *(undefined8 *)&this->vfirstbytes = 0;
  *(undefined8 *)&(this->vfirstbytes).field_0x8 = 0;
  return;
}

// operator[] @ 14ff5a820

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> * __thiscall
oo2net::rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_>::operator[]
          (rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_> *this,
          long64 param_1)

{
  return this->m_ptr + param_1;
}

// operator[] @ 14ff5a840

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode * __thiscall
oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>::operator[]
          (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *this,long64 param_1)

{
  return this->m_ptr + param_1;
}

// operator[] @ 14ff5a860

int * __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::operator[]
          (vector_flex<int,oo2net::vector_storage<int>_> *this,ulong64 param_1)

{
  return (int *)(*(longlong *)this + param_1 * 4);
}

// operator[] @ 14ff5a870

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::operator[](vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
             *this,ulong64 param_1)

{
  return (SuffixNode **)(*(longlong *)this + param_1 * 8);
}

// operator[] @ 14ff5a880

BitFlags256 * __thiscall
oo2net::vector_flex<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_>::operator[]
          (vector_flex<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_> *this,
          ulong64 param_1)

{
  return (BitFlags256 *)(param_1 * 0x20 + *(longlong *)this);
}

// operator[] @ 14ff5a8a0

SuffixIndex * __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::operator[](vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
             *this,ulong64 param_1)

{
  return (SuffixIndex *)(*(longlong *)this + param_1 * 8);
}

// operator[] @ 14ff5a8b0

UnpackedMatchPair * __thiscall
oo2net::vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
operator[](vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
           *this,ulong64 param_1)

{
  return (UnpackedMatchPair *)(*(longlong *)this + param_1 * 8);
}

// `scalar_deleting_destructor' @ 14ff5a8c0

void * __thiscall
oo2net::IncrementalMatchFinder::_scalar_deleting_destructor_
          (IncrementalMatchFinder *this,uint param_1)

{
  *this = (IncrementalMatchFinder)&___7IncrementalMatchFinder_oo2net__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ff5a900

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void * __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::_scalar_deleting_destructor_
          (SuffixTrie2MatchFinder *this,uint param_1)

{
  ~SuffixTrie2MatchFinder(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// AddChunk @ 14ff5a940

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::AddChunk
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> *this)

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
        pCVar4[1].from_arena = 0xffdb0;
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
        goto LAB_14ff5a9ef;
      }
    }
  }
  pCVar4 = (*g_fp_OodleNet_Plugin_MallocAligned)(0xffda8,0x10);
  if (pCVar4 == (Chunk *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0xffda8);
  }
LAB_14ff5a9ef:
  pCVar2 = this->m_chunkList;
  this->m_next = 0;
  pCVar4->from_arena = iVar6;
  pCVar4->next = pCVar2;
  this->m_chunkList = pCVar4;
  return;
}

// AddChunk @ 14ff5aa20

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::AddChunk
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> *this)

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
        pCVar4->next = (Chunk *)0xffd80;
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
        goto LAB_14ff5aacf;
      }
    }
  }
  pCVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(0xffd80,0x10);
  if (pCVar3 == (Chunk *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0xffd80);
  }
LAB_14ff5aacf:
  pCVar4 = this->m_chunkList;
  this->m_next = 0;
  pCVar3->from_arena = iVar5;
  pCVar3->next = pCVar4;
  this->m_chunkList = pCVar3;
  return;
}

// AddChunk @ 14ff5ab00

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::AddChunk
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000> *this)

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
        pCVar4->next = (Chunk *)0xffc10;
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
        goto LAB_14ff5abaf;
      }
    }
  }
  pCVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(0xffc10,0x10);
  if (pCVar3 == (Chunk *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0xffc10);
  }
LAB_14ff5abaf:
  pCVar4 = this->m_chunkList;
  this->m_next = 0;
  pCVar3->from_arena = iVar5;
  pCVar3->next = pCVar4;
  this->m_chunkList = pCVar3;
  return;
}

// AddChunk @ 14ff5abe0

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::AddChunk
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> *this)

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
        pCVar4->next = (Chunk *)0xffd50;
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
        goto LAB_14ff5ac8f;
      }
    }
  }
  pCVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(0xffd50,0x10);
  if (pCVar3 == (Chunk *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0xffd50);
  }
LAB_14ff5ac8f:
  pCVar4 = this->m_chunkList;
  this->m_next = 0;
  pCVar3->from_arena = iVar5;
  pCVar3->next = pCVar4;
  this->m_chunkList = pCVar3;
  return;
}

// AddScratch @ 14ff5acc0

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::AddScratch
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> *this,
          rrArenaAllocator *param_1)

{
  this->m_scratch = param_1;
  return;
}

// AddScratch @ 14ff5acd0

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::AddScratch
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> *this,
          rrArenaAllocator *param_1)

{
  this->m_scratch = param_1;
  return;
}

// AddScratch @ 14ff5ace0

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::AddScratch
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000> *this,
          rrArenaAllocator *param_1)

{
  this->m_scratch = param_1;
  return;
}

// AddScratch @ 14ff5acf0

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::AddScratch
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> *this,
          rrArenaAllocator *param_1)

{
  this->m_scratch = param_1;
  return;
}

// Alloc @ 14ff5ad00

ChildrenSparseN<8> * __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::Alloc
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> *this)

{
  ChildrenSparseN<8> *pCVar1;
  int iVar2;
  
  pCVar1 = (ChildrenSparseN<8> *)this->m_freeList;
  if (pCVar1 == (ChildrenSparseN<8> *)0x0) {
    iVar2 = this->m_next;
    if (iVar2 == 0x6657) {
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

// Alloc @ 14ff5ad80

ChildrenSparseN<16> * __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::Alloc
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> *this)

{
  ChildrenSparseN<16> *pCVar1;
  int iVar2;
  
  pCVar1 = (ChildrenSparseN<16> *)this->m_freeList;
  if (pCVar1 == (ChildrenSparseN<16> *)0x0) {
    iVar2 = this->m_next;
    if (iVar2 == 0x332b) {
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

// Alloc @ 14ff5adf0

ChildrenFull256 * __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::Alloc
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000> *this)

{
  int iVar1;
  ChildrenFull256 *_Dst;
  
  _Dst = (ChildrenFull256 *)this->m_freeList;
  if (_Dst == (ChildrenFull256 *)0x0) {
    iVar1 = this->m_next;
    if (iVar1 == 0x3ff) {
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

// Alloc @ 14ff5ae60

ChildrenSparseI * __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::Alloc
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> *this)

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
  if (iVar2 == 0x923) {
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

// Alloc @ 14ff5af20

void * __thiscall oo2net::rrArenaAllocator::Alloc(rrArenaAllocator *this,long64 param_1,int param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  uVar5 = param_1 + 0xfU & 0xfffffffffffffff0;
  pvVar1 = (void *)this->m_cur;
  uVar2 = (ulonglong)(-(uint)(this->m_unorderedStart != 0) & 0x10);
  if ((longlong)pvVar1 + uVar5 + uVar2 <= this->m_size + this->m_base) {
    puVar4 = (ulonglong *)((longlong)pvVar1 + uVar5);
    this->m_cur = (ulong64)puVar4;
    if (this->m_unorderedStart != 0) {
      *puVar4 = uVar5;
      puVar4[1] = 0;
      this->m_cur = this->m_cur + uVar2;
      puVar4 = (ulonglong *)this->m_cur;
    }
    puVar3 = (ulonglong *)this->m_cur_max;
    if ((ulonglong *)this->m_cur_max <= puVar4) {
      puVar3 = puVar4;
    }
    this->m_cur_max = (ulong64)puVar3;
    return pvVar1;
  }
  if ((param_2 == 0) && (this->m_allowFallback != 0)) {
    pvVar1 = (*g_fp_OodleNet_Plugin_MallocAligned)(uVar5,0x10);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(uVar5);
    }
    return pvVar1;
  }
  return (void *)0x0;
}

// AllocNodeChunk @ 14ff5b000

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::AllocNodeChunk
          (SuffixTrie2MatchFinder *this,int param_1)

{
  rrArenaAllocator *prVar1;
  void *pvVar2;
  undefined8 *puVar3;
  SuffixNode *pSVar4;
  undefined8 *puVar5;
  rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *prVar6;
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
  pSVar4 = (*g_fp_OodleNet_Plugin_MallocAligned)(0x80000,0x40);
  if (pSVar4 == (SuffixNode *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x80000);
  }
  prVar6->m_ptr = pSVar4;
  return;
}

// AllocNodeChunk @ 14ff5b100

void __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrieObject::AllocNodeChunk(SuffixTrieObject *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleNet_Plugin_MallocAligned)(0x200000,0x40);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x200000);
  }
  *(void **)(*(longlong *)&this->node_chunks + (longlong)(param_1 >> 0x10) * 8) = pvVar1;
  return;
}

// Allocate @ 14ff5b160

void __thiscall
oo2net::rrArenaArray<int>::Allocate
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
  piVar5 = (*g_fp_OodleNet_Plugin_MallocAligned)(lVar1,iVar4);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar1);
  }
  this->m_ptr = piVar5;
  return;
}

// Allocate @ 14ff5b260

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_>::Allocate
          (rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_> *this,
          rrArenaAllocator *param_1,long64 param_2,int param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *prVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar6 = param_2 * 0x10;
  lVar7 = (longlong)param_3;
  if (param_1 != (rrArenaAllocator *)0x0) {
    prVar4 = (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)param_1->m_cur;
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
      if (prVar4 != (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)0x0) {
        if (param_3 != 0) {
          prVar4 = (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)
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
  prVar4 = (*g_fp_OodleNet_Plugin_MallocAligned)(lVar6,iVar3);
  if (prVar4 == (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar6);
  }
  this->m_ptr = prVar4;
  return;
}

// Allocate @ 14ff5b360

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>::Allocate
          (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *this,rrArenaAllocator *param_1,
          long64 param_2,int param_3)

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
  pSVar4 = (*g_fp_OodleNet_Plugin_MallocAligned)(lVar6,iVar3);
  if (pSVar4 == (SuffixNode *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar6);
  }
  this->m_ptr = pSVar4;
  return;
}

// Build @ 14ff5b460

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrieObject::Build
          (SuffixTrieObject *this,uchar *param_1,int param_2,SuffixTrieSortData *param_3)

{
  uchar *puVar1;
  vector<int> *this_00;
  vector<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this_01;
  uchar *puVar2;
  FreeList *pFVar3;
  byte bVar4;
  byte bVar5;
  uchar uVar6;
  uchar uVar7;
  int iVar8;
  FreeList *pFVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  SuffixNode **ppSVar13;
  void *pvVar14;
  ChildrenSparseN<16> *pCVar15;
  ChildrenSparseI *pCVar16;
  ChildrenSparseN<8> *pCVar17;
  ChildrenFull256 *_Dst;
  undefined8 *puVar18;
  longlong lVar19;
  byte *pbVar20;
  uchar *puVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  uchar *puVar29;
  int iVar30;
  uint *puVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  longlong lVar36;
  uint uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int local_a8;
  uint local_a4;
  uint local_9c;
  int local_94;
  ulonglong local_80;
  longlong local_68;
  longlong local_60;
  
  lVar26 = 0;
  puVar1 = param_1 + -1;
  this->m_ubufsize = param_2 + 1;
  this_00 = &this->vfirstbytes;
  this->m_ubuf = puVar1;
  uVar35 = *(ulonglong *)&(this->vfirstbytes).field_0x10;
  if (uVar35 < 0x10001) {
    lVar36 = 0x10000 - uVar35;
    if (*(ulonglong *)&(this->vfirstbytes).field_0x8 < lVar36 + uVar35) {
      piVar23 = vector_storage<int>::makefit1((vector_storage<int> *)this_00,lVar36 + uVar35,uVar35)
      ;
      lVar28 = *(longlong *)&(this->vfirstbytes).field_0x10;
      if (lVar36 != 0) {
        memset((void *)(*(longlong *)&this_00->field_0x0 + lVar28 * 4),0,lVar36 * 4);
        lVar28 = *(longlong *)&(this->vfirstbytes).field_0x10;
      }
      lVar28 = lVar28 + lVar36;
      *(longlong *)&(this->vfirstbytes).field_0x10 = lVar28;
      if (piVar23 != (int *)0x0) {
        (*g_fp_OodleNet_Plugin_Free)(piVar23);
        lVar28 = *(longlong *)&(this->vfirstbytes).field_0x10;
      }
    }
    else {
      if (lVar36 != 0) {
        memset((void *)(*(longlong *)&this_00->field_0x0 + uVar35 * 4),0,lVar36 * 4);
        uVar35 = *(ulonglong *)&(this->vfirstbytes).field_0x10;
      }
      lVar28 = uVar35 + lVar36;
      *(longlong *)&(this->vfirstbytes).field_0x10 = lVar28;
    }
    if (lVar28 == 0) {
      local_68 = 0;
      goto LAB_14ff5b4bf;
    }
  }
  else {
    *(undefined8 *)&(this->vfirstbytes).field_0x10 = 0x10000;
  }
  local_68 = *(longlong *)&this_00->field_0x0;
LAB_14ff5b4bf:
  this_01 = &this->node_chunks;
  uVar35 = *(ulonglong *)&(this->node_chunks).field_0x10;
  uVar25 = (ulonglong)(param_2 + 0x10000 >> 0x10);
  if (uVar25 < uVar35) {
    *(ulonglong *)&(this->node_chunks).field_0x10 = uVar25;
  }
  else {
    lVar36 = uVar25 - uVar35;
    if (*(ulonglong *)&(this->node_chunks).field_0x8 < uVar35 + lVar36) {
      ppSVar13 = vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::makefit1
                           ((vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *)this_01,
                            uVar35 + lVar36,uVar35);
      lVar28 = *(longlong *)&(this->node_chunks).field_0x10;
      puVar18 = (undefined8 *)(*(longlong *)&this_01->field_0x0 + lVar28 * 8);
      lVar19 = lVar36;
      if (lVar36 != 0) {
        do {
          if (puVar18 != (undefined8 *)0x0) {
            *puVar18 = 0;
          }
          puVar18 = puVar18 + 1;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar28 = *(longlong *)&(this->node_chunks).field_0x10;
      }
      *(longlong *)&(this->node_chunks).field_0x10 = lVar28 + lVar36;
      if (ppSVar13 != (SuffixNode **)0x0) {
        (*g_fp_OodleNet_Plugin_Free)(ppSVar13);
      }
    }
    else {
      puVar18 = (undefined8 *)(*(longlong *)&this_01->field_0x0 + uVar35 * 8);
      lVar28 = lVar36;
      if (lVar36 != 0) {
        do {
          if (puVar18 != (undefined8 *)0x0) {
            *puVar18 = 0;
          }
          puVar18 = puVar18 + 1;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        uVar35 = *(ulonglong *)&(this->node_chunks).field_0x10;
      }
      *(ulonglong *)&(this->node_chunks).field_0x10 = uVar35 + lVar36;
    }
  }
  local_80 = 1;
  pvVar14 = (*g_fp_OodleNet_Plugin_MallocAligned)(0x200000,0x40);
  if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x200000);
  }
  **(undefined8 **)&this_01->field_0x0 = pvVar14;
  if (*(longlong *)&(this->node_chunks).field_0x10 != 0) {
    lVar26 = *(longlong *)&this_01->field_0x0;
  }
  uVar22 = 0;
  local_9c = 0;
  iVar24 = 0;
  local_a8 = 1;
  uVar35 = 0;
  if (1 < param_2 + -2) {
    local_60 = 1;
    do {
      puVar2 = puVar1 + local_60;
      local_94 = 0x7fffffff;
      iVar30 = ((param_2 + 1) - local_a8) + -1;
      iVar32 = 0;
      if (-1 < iVar24 + -1) {
        iVar32 = iVar24 + -1;
      }
      uVar37 = 0;
      uVar25 = 0;
      uVar34 = 0;
      local_a4 = 0;
      if (uVar22 != 0) {
        iVar24 = *(int *)(*(longlong *)(lVar26 + ((longlong)(int)uVar22 >> 0x10) * 8) + 8 +
                         (ulonglong)(ushort)uVar22 * 0x20);
        if (iVar24 == 0) {
          local_94 = 0;
        }
        else {
          local_94 = *(int *)(*(longlong *)(lVar26 + ((longlong)iVar24 >> 0x10) * 8) + 0xc +
                             ((longlong)iVar24 & 0xffffU) * 0x20);
        }
      }
      lVar36 = (longlong)iVar30;
      uVar11 = (uint)local_80;
      if (0 < (int)uVar35) {
        iVar24 = *(int *)(*(longlong *)(lVar26 + ((longlong)(int)uVar35 >> 0x10) * 8) + 0xc +
                         (uVar35 & 0xffff) * 0x20);
LAB_14ff5b822:
        uVar33 = (uint)uVar25;
        uVar34 = (uint)uVar35;
        if (local_94 < iVar24) {
          lVar19 = (ulonglong)(ushort)uVar22 * 0x20;
          lVar28 = *(longlong *)(lVar26 + ((longlong)(int)uVar22 >> 0x10) * 8);
          if (iVar24 < *(int *)(lVar28 + 0xc + lVar19)) {
            *(uint *)(lVar28 + 8 + lVar19) = uVar34;
            local_94 = iVar24;
          }
          else {
            local_94 = 0x7fffffff;
          }
        }
        if (iVar30 <= iVar24) goto LAB_14ff5be81;
        bVar4 = puVar2[iVar24];
        uVar27 = (ulonglong)bVar4;
        lVar28 = (uVar35 & 0xffff) * 0x20 +
                 *(longlong *)(lVar26 + ((longlong)(int)uVar34 >> 0x10) * 8);
        bVar5 = *(byte *)(lVar28 + 0x1c);
        uVar22 = uVar34;
        if (*(int *)(lVar28 + 8) == 0) {
          uVar25 = uVar35 & 0xffffffff;
          uVar22 = uVar37;
        }
        uVar37 = uVar22;
        uVar33 = (uint)uVar25;
        uVar22 = bVar5 + 1;
        uVar35 = (ulonglong)uVar22;
        if (uVar22 < 4) {
          iVar12 = 0;
          pbVar20 = (byte *)(lVar28 + 0x1d);
          while( true ) {
            if ((int)uVar22 <= iVar12) {
              if (uVar22 < 3) {
                *(byte *)(uVar35 + 0x1d + lVar28) = bVar4;
                *(int *)(lVar28 + 0x10 + uVar35 * 4) = -local_a8;
              }
              else {
                pCVar17 = rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::Alloc
                                    (&this->ChildrenSparse1_pool);
                pCVar17->select[0] = '\0';
                pCVar17->select[1] = '\0';
                pCVar17->select[2] = '\0';
                pCVar17->select[3] = '\0';
                pCVar17->select[4] = '\0';
                pCVar17->select[5] = '\0';
                pCVar17->select[6] = '\0';
                pCVar17->select[7] = '\0';
                pCVar17->select[0] = *(uchar *)(lVar28 + 0x1d);
                pCVar17->nodes[0] = *(int *)(lVar28 + 0x10);
                pCVar17->select[1] = *(uchar *)(lVar28 + 0x1e);
                pCVar17->nodes[1] = *(int *)(lVar28 + 0x14);
                pCVar17->select[2] = *(uchar *)(lVar28 + 0x1f);
                pCVar17->nodes[2] = *(int *)(lVar28 + 0x18);
                pCVar17->select[3] = bVar4;
                pCVar17->nodes[3] = -local_a8;
                *(ChildrenSparseN<8> **)(lVar28 + 0x10) = pCVar17;
              }
              goto LAB_14ff5be7e;
            }
            if (*pbVar20 == bVar4) break;
            iVar12 = iVar12 + 1;
            pbVar20 = pbVar20 + 1;
          }
          puVar31 = (uint *)(lVar28 + ((longlong)iVar12 + 4) * 4);
        }
        else {
          pFVar9 = *(FreeList **)(lVar28 + 0x10);
          if (uVar22 < 9) {
            pFVar3 = pFVar9->next;
            puVar31 = (uint *)0x0;
            auVar38[0] = -((byte)pFVar3 == bVar4);
            auVar38[1] = -((byte)((ulonglong)pFVar3 >> 8) == bVar4);
            auVar38[2] = -((byte)((ulonglong)pFVar3 >> 0x10) == bVar4);
            auVar38[3] = -((byte)((ulonglong)pFVar3 >> 0x18) == bVar4);
            auVar38[4] = -((byte)((ulonglong)pFVar3 >> 0x20) == bVar4);
            auVar38[5] = -((byte)((ulonglong)pFVar3 >> 0x28) == bVar4);
            auVar38[6] = -((byte)((ulonglong)pFVar3 >> 0x30) == bVar4);
            auVar38[7] = -((byte)((ulonglong)pFVar3 >> 0x38) == bVar4);
            auVar38[8] = -(bVar4 == 0);
            auVar38[9] = -(bVar4 == 0);
            auVar38[10] = -(bVar4 == 0);
            auVar38[0xb] = -(bVar4 == 0);
            auVar38[0xc] = -(bVar4 == 0);
            auVar38[0xd] = -(bVar4 == 0);
            auVar38[0xe] = -(bVar4 == 0);
            auVar38[0xf] = -(bVar4 == 0);
            uVar10 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar38[0xf] >> 7) << 0xf;
            if (uVar10 != 0) {
              iVar12 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
                }
              }
              if (iVar12 < (int)uVar22) {
                puVar31 = (uint *)((longlong)&pFVar9[1].next + (longlong)iVar12 * 4);
              }
            }
            if (puVar31 != (uint *)0x0) goto LAB_14ff5bb0d;
            if (uVar22 != 8) {
              *(byte *)((longlong)&pFVar9->next + (longlong)(int)(uint)bVar5 + 1) = bVar4;
              *(int *)((longlong)&pFVar9[1].next + (longlong)(int)(uint)bVar5 * 4 + 4) = -local_a8;
              goto LAB_14ff5be7e;
            }
            pCVar15 = rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::Alloc
                                (&this->ChildrenSparse2_pool);
            pCVar15->select[0] = '\0';
            pCVar15->select[1] = '\0';
            pCVar15->select[2] = '\0';
            pCVar15->select[3] = '\0';
            pCVar15->select[4] = '\0';
            pCVar15->select[5] = '\0';
            pCVar15->select[6] = '\0';
            pCVar15->select[7] = '\0';
            pCVar15->select[8] = '\0';
            pCVar15->select[9] = '\0';
            pCVar15->select[10] = '\0';
            pCVar15->select[0xb] = '\0';
            pCVar15->select[0xc] = '\0';
            pCVar15->select[0xd] = '\0';
            pCVar15->select[0xe] = '\0';
            pCVar15->select[0xf] = '\0';
            pCVar15->select[0] = *(uchar *)&pFVar9->next;
            pCVar15->nodes[0] = *(int *)&pFVar9[1].next;
            pCVar15->select[1] = *(uchar *)((longlong)&pFVar9->next + 1);
            pCVar15->nodes[1] = *(int *)((longlong)&pFVar9[1].next + 4);
            pCVar15->select[2] = *(uchar *)((longlong)&pFVar9->next + 2);
            pCVar15->nodes[2] = *(int *)&pFVar9[2].next;
            pCVar15->select[3] = *(uchar *)((longlong)&pFVar9->next + 3);
            pCVar15->nodes[3] = *(int *)((longlong)&pFVar9[2].next + 4);
            pCVar15->select[4] = *(uchar *)((longlong)&pFVar9->next + 4);
            pCVar15->nodes[4] = *(int *)&pFVar9[3].next;
            pCVar15->select[5] = *(uchar *)((longlong)&pFVar9->next + 5);
            pCVar15->nodes[5] = *(int *)((longlong)&pFVar9[3].next + 4);
            pCVar15->select[6] = *(uchar *)((longlong)&pFVar9->next + 6);
            pCVar15->nodes[6] = *(int *)&pFVar9[4].next;
            pCVar15->select[7] = *(uchar *)((longlong)&pFVar9->next + 7);
            pCVar15->nodes[7] = *(int *)((longlong)&pFVar9[4].next + 4);
            pCVar15->select[8] = bVar4;
            pCVar15->nodes[8] = -local_a8;
            *(char *)(lVar28 + 0x1c) = *(char *)(lVar28 + 0x1c) + '\x01';
            *(ChildrenSparseN<16> **)(lVar28 + 0x10) = pCVar15;
            pFVar9->next = (this->ChildrenSparse1_pool).m_freeList;
            (this->ChildrenSparse1_pool).m_freeList = pFVar9;
            goto LAB_14ff5be81;
          }
          if (uVar22 < 0x11) {
            puVar31 = (uint *)0x0;
            auVar39[0] = -(bVar4 == *(byte *)&pFVar9->next);
            auVar39[1] = -(bVar4 == *(byte *)((longlong)&pFVar9->next + 1));
            auVar39[2] = -(bVar4 == *(byte *)((longlong)&pFVar9->next + 2));
            auVar39[3] = -(bVar4 == *(byte *)((longlong)&pFVar9->next + 3));
            auVar39[4] = -(bVar4 == *(byte *)((longlong)&pFVar9->next + 4));
            auVar39[5] = -(bVar4 == *(byte *)((longlong)&pFVar9->next + 5));
            auVar39[6] = -(bVar4 == *(byte *)((longlong)&pFVar9->next + 6));
            auVar39[7] = -(bVar4 == *(byte *)((longlong)&pFVar9->next + 7));
            auVar39[8] = -(bVar4 == *(byte *)&pFVar9[1].next);
            auVar39[9] = -(bVar4 == *(byte *)((longlong)&pFVar9[1].next + 1));
            auVar39[10] = -(bVar4 == *(byte *)((longlong)&pFVar9[1].next + 2));
            auVar39[0xb] = -(bVar4 == *(byte *)((longlong)&pFVar9[1].next + 3));
            auVar39[0xc] = -(bVar4 == *(byte *)((longlong)&pFVar9[1].next + 4));
            auVar39[0xd] = -(bVar4 == *(byte *)((longlong)&pFVar9[1].next + 5));
            auVar39[0xe] = -(bVar4 == *(byte *)((longlong)&pFVar9[1].next + 6));
            auVar39[0xf] = -(bVar4 == *(byte *)((longlong)&pFVar9[1].next + 7));
            uVar10 = (ushort)(SUB161(auVar39 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar39[0xf] >> 7) << 0xf;
            if (uVar10 != 0) {
              iVar12 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
                }
              }
              if (iVar12 < (int)uVar22) {
                puVar31 = (uint *)((longlong)&pFVar9[2].next + (longlong)iVar12 * 4);
              }
            }
            if (puVar31 != (uint *)0x0) goto LAB_14ff5bb0d;
            if (uVar22 != 0x10) {
              *(byte *)((longlong)&pFVar9->next + (ulonglong)bVar5 + 1) = bVar4;
              *(int *)((longlong)&pFVar9[2].next + (ulonglong)bVar5 * 4 + 4) = -local_a8;
              goto LAB_14ff5be7e;
            }
            pCVar16 = rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::Alloc
                                (&this->ChildrenSparseI_pool);
            lVar36 = 0;
            piVar23 = pCVar16->nodes;
            pCVar16->sel2ind[uVar27] = '\x01';
            *piVar23 = -local_a8;
            iVar32 = 0;
            do {
              pbVar20 = (byte *)((longlong)&pFVar9->next + lVar36);
              iVar12 = iVar32 + 1;
              iVar30 = *(int *)((longlong)pFVar9 + (-0xf0 - (longlong)pCVar16) + (longlong)piVar23);
              piVar23 = piVar23 + 1;
              lVar36 = lVar36 + 1;
              pCVar16->sel2ind[*pbVar20] = (char)iVar32 + '\x02';
              *piVar23 = iVar30;
              iVar32 = iVar12;
            } while (iVar12 != 0x10);
            *(char *)(lVar28 + 0x1c) = *(char *)(lVar28 + 0x1c) + '\x01';
            *(ChildrenSparseI **)(lVar28 + 0x10) = pCVar16;
            pFVar9->next = (FreeList *)(this->ChildrenSparse2_pool).m_freeList;
            (this->ChildrenSparse2_pool).m_freeList = (FreeList *)pFVar9;
LAB_14ff5be81:
            uVar22 = uVar33;
            local_a4 = uVar37;
            if ((int)uVar33 < 1) {
              uVar22 = uVar37;
            }
            goto LAB_14ff5be95;
          }
          if (0x30 < uVar22) {
            puVar31 = (uint *)((longlong)&pFVar9->next + uVar27 * 4);
            if (*(int *)((longlong)&pFVar9->next + uVar27 * 4) != 0) goto LAB_14ff5bb0d;
            *puVar31 = -local_a8;
LAB_14ff5be7e:
            *(char *)(lVar28 + 0x1c) = *(char *)(lVar28 + 0x1c) + '\x01';
            goto LAB_14ff5be81;
          }
          bVar4 = *(byte *)((longlong)&pFVar9->next + uVar27);
          if (bVar4 == 0) {
            if (uVar22 == 0x30) {
              _Dst = rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::Alloc
                               (&this->ChildrenFull256_pool);
              memset(_Dst,0,0x400);
              lVar36 = 0;
              do {
                bVar4 = *(byte *)((longlong)&pFVar9->next + lVar36);
                if (bVar4 != 0) {
                  _Dst->nodes[lVar36] =
                       *(int *)((longlong)&pFVar9[0x1f].next + (ulonglong)bVar4 * 4 + 4);
                }
                lVar36 = lVar36 + 1;
              } while (lVar36 < 0x100);
              _Dst->nodes[uVar27] = -local_a8;
              *(char *)(lVar28 + 0x1c) = *(char *)(lVar28 + 0x1c) + '\x01';
              *(ChildrenFull256 **)(lVar28 + 0x10) = _Dst;
              pFVar9->next = (FreeList *)(this->ChildrenSparseI_pool).m_freeList;
              (this->ChildrenSparseI_pool).m_freeList = (FreeList *)pFVar9;
              goto LAB_14ff5be81;
            }
            *(char *)((longlong)&pFVar9->next + uVar27) = (char)uVar22 + '\x01';
            *(int *)((longlong)&pFVar9[0x20].next + (uVar35 & 0xff) * 4) = -local_a8;
            goto LAB_14ff5be7e;
          }
          puVar31 = (uint *)((longlong)&pFVar9[0x1f].next + (ulonglong)bVar4 * 4 + 4);
        }
LAB_14ff5bb0d:
        uVar33 = *puVar31;
        iVar12 = iVar24 + 1;
        local_a4 = uVar37;
        if (-1 < (int)uVar33) goto code_r0x00014ff5bb28;
        *puVar31 = uVar11;
        goto LAB_14ff5bd55;
      }
      uVar33 = *(uint *)(local_68 + (ulonglong)CONCAT11(*puVar2,puVar2[1]) * 4);
      uVar35 = (ulonglong)(int)uVar33;
      puVar31 = (uint *)(local_68 + (ulonglong)CONCAT11(*puVar2,puVar2[1]) * 4);
      if (uVar33 == 0) {
        *puVar31 = -local_a8;
        iVar24 = 0;
      }
      else {
        iVar12 = 2;
        if (-1 < (int)uVar33) {
          piVar23 = (int *)((uVar35 & 0xffff) * 0x20 +
                           *(longlong *)(lVar26 + ((longlong)uVar35 >> 0x10) * 8));
          iVar12 = iVar32;
          if (iVar32 < 2) {
            iVar12 = 2;
          }
          iVar8 = piVar23[3];
          uVar22 = local_9c;
          iVar24 = iVar8;
          if (iVar12 < iVar8) {
            lVar28 = (longlong)iVar12;
            iVar24 = iVar12;
            if (lVar28 < iVar8) {
LAB_14ff5b7f0:
              if ((lVar28 < lVar36) &&
                 (puVar2[lVar28] ==
                  (puVar2 + lVar28)[(longlong)(puVar1 + ((longlong)*piVar23 - (longlong)puVar2))]))
              goto code_r0x00014ff5b804;
              *puVar31 = uVar11;
LAB_14ff5bd18:
              uVar33 = (uint)uVar35;
              lVar28 = (uVar35 & 0xffff) * 0x20;
              lVar36 = *(longlong *)(lVar26 + ((uVar35 & 0xffffffff) >> 0x10) * 8);
              puVar29 = puVar1 + *(int *)(lVar36 + lVar28);
              *(uint *)(lVar36 + 4 + lVar28) = uVar11;
              goto LAB_14ff5bd98;
            }
          }
          goto LAB_14ff5b822;
        }
        *puVar31 = uVar11;
LAB_14ff5bd55:
        puVar29 = puVar1 + -(longlong)(int)uVar33;
        iVar24 = iVar32;
        if (iVar32 < iVar12) {
          iVar24 = iVar12;
        }
        if (iVar24 < lVar36) {
          puVar21 = puVar29 + iVar24;
          do {
            if (puVar21[(longlong)puVar2 - (longlong)puVar29] != *puVar21) break;
            puVar21 = puVar21 + 1;
            iVar24 = iVar24 + 1;
          } while ((longlong)puVar21 - (longlong)puVar29 < lVar36);
        }
LAB_14ff5bd98:
        uVar35 = (ulonglong)(uVar11 + 1);
        if ((short)local_80 == 0) {
          pvVar14 = (*g_fp_OodleNet_Plugin_MallocAligned)(0x200000,0x40);
          if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            Oodle_Core_Malloc_Failed(0x200000);
          }
          *(void **)(*(longlong *)&this_01->field_0x0 + (longlong)((int)uVar11 >> 0x10) * 8) =
               pvVar14;
        }
        piVar23 = (int *)((local_80 & 0xffff) * 0x20 +
                         *(longlong *)(lVar26 + ((longlong)(int)uVar11 >> 0x10) * 8));
        piVar23[3] = iVar24;
        piVar23[2] = 0;
        *piVar23 = local_a8;
        piVar23[1] = uVar34;
        uVar6 = puVar2[iVar24];
        uVar7 = puVar29[iVar24];
        *(undefined1 *)(piVar23 + 7) = 1;
        *(uchar *)((longlong)piVar23 + 0x1d) = uVar6;
        piVar23[4] = -local_a8;
        *(uchar *)((longlong)piVar23 + 0x1e) = uVar7;
        piVar23[5] = uVar33;
        uVar22 = uVar11;
        local_80 = uVar35;
        if (local_94 < iVar24) {
          lVar28 = (ulonglong)(ushort)local_9c * 0x20;
          lVar36 = *(longlong *)(lVar26 + ((longlong)(int)local_9c >> 0x10) * 8);
          if (iVar24 < *(int *)(lVar36 + 0xc + lVar28)) {
            *(uint *)(lVar36 + 8 + lVar28) = uVar11;
          }
        }
LAB_14ff5be95:
        local_9c = uVar22;
        if (local_a4 == 0) {
          uVar35 = 0;
        }
        else {
          uVar35 = (ulonglong)
                   *(uint *)(*(longlong *)(lVar26 + ((longlong)(int)local_a4 >> 0x10) * 8) + 8 +
                            (ulonglong)(ushort)local_a4 * 0x20);
        }
      }
      local_a8 = local_a8 + 1;
      local_60 = local_60 + 1;
    } while (local_a8 < param_2 + -2);
  }
  CountChildren(this,param_3);
  return;
code_r0x00014ff5b804:
  iVar24 = iVar24 + 1;
  lVar28 = lVar28 + 1;
  if (iVar8 <= lVar28) goto LAB_14ff5b822;
  goto LAB_14ff5b7f0;
code_r0x00014ff5bb28:
  piVar23 = (int *)(((longlong)(int)uVar33 & 0xffffU) * 0x20 +
                   *(longlong *)(lVar26 + ((longlong)(int)uVar33 >> 0x10) * 8));
  iVar24 = iVar32;
  if (iVar32 < iVar12) {
    iVar24 = iVar12;
  }
  iVar12 = piVar23[3];
  if (iVar24 < iVar12) {
    for (lVar28 = (longlong)iVar24; lVar28 < iVar12; lVar28 = lVar28 + 1) {
      if ((lVar36 <= lVar28) || (puVar2[lVar28] != puVar1[lVar28 + *piVar23])) {
        uVar35 = (ulonglong)uVar33;
        *puVar31 = uVar11;
        goto LAB_14ff5bd18;
      }
      iVar24 = iVar24 + 1;
    }
    uVar35 = (ulonglong)uVar33;
    uVar22 = local_9c;
  }
  else {
    uVar35 = (ulonglong)uVar33;
    uVar22 = local_9c;
    iVar24 = iVar12;
  }
  goto LAB_14ff5b822;
}

// ChildrenSparseI_Sort @ 14ff5bf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2net::SuffixTrieForMatcher::ChildrenSparseI_Sort(ChildrenSparseI *param_1,int param_2)

{
  byte bVar1;
  ChildrenSparseI *pCVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_f8 [28];
  int iStack_dc;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (0 < param_2) {
    memcpy(local_d8,param_1->nodes,(longlong)param_2 << 2);
  }
  iVar5 = 0;
  lVar4 = 0x100;
  pCVar2 = param_1;
  do {
    bVar1 = pCVar2->sel2ind[0];
    if (bVar1 != 0) {
      pCVar2->sel2ind[0] = (char)iVar5 + '\x01';
      lVar3 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      param_1->nodes[lVar3] = (&iStack_dc)[bVar1];
    }
    pCVar2 = (ChildrenSparseI *)(pCVar2->sel2ind + 1);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

// CountChildren @ 14ff5bfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrieObject::CountChildren
          (SuffixTrieObject *this,SuffixTrieSortData *param_1)

{
  undefined1 *puVar1;
  vector<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this_00;
  undefined8 *puVar2;
  uint *puVar3;
  byte bVar4;
  undefined4 uVar5;
  ChildrenSparseN<16> *pCVar6;
  SuffixTrieSortData *pSVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  SuffixIndex *pSVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  BitFlags256 *pBVar17;
  void *_Dst;
  vector<int> *pvVar18;
  ulonglong uVar19;
  byte *pbVar20;
  ulong64 uVar21;
  void *pvVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uchar *puVar28;
  byte *pbVar29;
  ChildrenSparseN<16> *pCVar30;
  ulonglong uVar31;
  byte *pbVar32;
  longlong lVar33;
  uchar *puVar34;
  longlong lVar35;
  byte *pbVar36;
  int iVar37;
  undefined4 *puVar38;
  byte *pbVar39;
  undefined1 auStack_198 [32];
  vector_storage<int> local_178;
  ulonglong local_168;
  uint local_160;
  ulonglong local_158;
  vector<int> *local_150;
  SuffixTrieSortData *local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  SuffixTrieObject *local_128;
  void *local_120;
  undefined8 local_118;
  undefined4 uStack_10c;
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_118 = 0xfffffffffffffffe;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  this_00 = &this->vsuffixindices;
  uVar12 = (ulonglong)this->m_ubufsize;
  uVar24 = *(ulonglong *)&(this->vsuffixindices).field_0x10;
  local_148 = param_1;
  local_128 = this;
  if (uVar12 < uVar24) {
    *(ulonglong *)&(this->vsuffixindices).field_0x10 = uVar12;
  }
  else {
    if ((*(ulonglong *)&(this->vsuffixindices).field_0x8 < uVar12) &&
       (pSVar13 = vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::
                  makefit1((vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>
                            *)this_00,uVar12,uVar24), pSVar13 != (SuffixIndex *)0x0)) {
      (*g_fp_OodleNet_Plugin_Free)(pSVar13);
    }
    puVar1 = &(this->vsuffixindices).field_0x10;
    *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar12 - uVar24);
    uVar12 = *(ulonglong *)&(this->vsuffixindices).field_0x10;
  }
  pvVar22 = (void *)0x0;
  _Dst = pvVar22;
  if (uVar12 != 0) {
    _Dst = *(void **)&this_00->field_0x0;
  }
  memset(_Dst,0,uVar12 * 8);
  if (*(longlong *)&(this->vsuffixindices).field_0x10 == 0) {
    local_140 = 0;
  }
  else {
    local_140 = *(longlong *)&this_00->field_0x0;
  }
  lVar23 = *(longlong *)&(this->vfirstbytes).field_0x10;
  if (lVar23 != 0) {
    pvVar22 = *(void **)&this->vfirstbytes;
  }
  if (*(longlong *)&(this->node_chunks).field_0x10 == 0) {
    local_138 = 0;
  }
  else {
    local_138 = *(longlong *)&this->node_chunks;
  }
  local_178.m_begin = (int *)0x0;
  local_178.m_capacity = 0;
  local_168 = 0;
  iVar8 = (int)(this->m_ubufsize + (this->m_ubufsize >> 0x1f & 0xfU)) >> 4;
  local_120 = pvVar22;
  if ((iVar8 != 0) &&
     (piVar14 = vector_storage<int>::makefit1(&local_178,(longlong)iVar8,0), piVar14 != (int *)0x0))
  {
    (*g_fp_OodleNet_Plugin_Free)(piVar14);
  }
  iVar8 = (int)lVar23;
  pvVar18 = (vector<int> *)(longlong)iVar8;
  local_158 = 0;
  uVar12 = local_168;
  uVar24 = local_168;
  piVar14 = local_178.m_begin;
  local_150 = pvVar18;
  if (0 < iVar8) {
    do {
      iVar8 = *(int *)((longlong)pvVar22 + local_158 * 4);
      uVar24 = uVar12;
      if (0 < iVar8) {
        uVar24 = uVar12 + 1;
        if (local_178.m_capacity < uVar24) {
          piVar15 = vector_storage<int>::makefit1(&local_178,uVar24,uVar12);
          piVar14 = local_178.m_begin;
          if (local_178.m_begin + uVar12 != (int *)0x0) {
            local_178.m_begin[uVar12] = iVar8;
          }
          pvVar18 = local_150;
          local_168 = uVar24;
          if (piVar15 != (int *)0x0) {
            (*g_fp_OodleNet_Plugin_Free)(piVar15);
            pvVar18 = local_150;
          }
        }
        else {
          local_168 = uVar24;
          if (piVar14 + uVar12 != (int *)0x0) {
            piVar14[uVar12] = iVar8;
          }
        }
        if (uVar24 != 0) {
          do {
            uVar12 = 0;
            uVar9 = piVar14[uVar24 - 1];
            uVar21 = uVar24 - 1;
            iVar8 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
            lVar23 = (longlong)iVar8;
            puVar38 = (undefined4 *)
                      ((ulonglong)(ushort)iVar8 * 0x20 +
                      *(longlong *)(local_138 + (lVar23 >> 0x10) * 8));
            local_168 = uVar21;
            if ((int)uVar9 < 1) {
              uVar9 = 0;
              uVar25 = 0;
              uVar10 = *(byte *)(puVar38 + 7) + 1;
              uVar26 = 0;
              uVar11 = uVar25;
              if (uVar10 < 4) {
                uVar24 = (ulonglong)uVar10;
                if (uVar10 != 0) {
                  piVar15 = puVar38 + 4;
                  uVar31 = uVar12;
                  do {
                    iVar27 = *piVar15;
                    uVar9 = uVar26;
                    if (iVar27 != 0) {
                      if (iVar27 < 0) {
                        uVar9 = 1;
                      }
                      else {
                        uVar9 = *(uint *)(local_140 + 4 + (longlong)iVar27 * 8);
                        uVar11 = uVar9;
                        if ((int)uVar9 <= (int)(uint)uVar31) {
                          uVar11 = (uint)uVar31;
                          iVar27 = iVar8;
                        }
                        iVar8 = iVar27;
                        uVar31 = (ulonglong)uVar11;
                      }
                    }
                    uVar11 = (uint)uVar31;
                    uVar9 = (int)uVar12 + uVar9;
                    uVar12 = (ulonglong)uVar9;
                    piVar15 = piVar15 + 1;
                    uVar24 = uVar24 - 1;
                  } while (uVar24 != 0);
                }
              }
              else {
                lVar33 = *(longlong *)(puVar38 + 4);
                if (uVar10 < 9) {
                  uVar24 = (ulonglong)uVar10;
                  if (uVar10 != 0) {
                    piVar15 = (int *)(lVar33 + 8);
                    uVar31 = uVar12;
                    do {
                      iVar27 = *piVar15;
                      uVar9 = uVar26;
                      if (iVar27 != 0) {
                        if (iVar27 < 0) {
                          uVar9 = 1;
                        }
                        else {
                          uVar9 = *(uint *)(local_140 + 4 + (longlong)iVar27 * 8);
                          uVar11 = uVar9;
                          if ((int)uVar9 <= (int)(uint)uVar31) {
                            uVar11 = (uint)uVar31;
                            iVar27 = iVar8;
                          }
                          iVar8 = iVar27;
                          uVar31 = (ulonglong)uVar11;
                        }
                      }
                      uVar11 = (uint)uVar31;
                      uVar9 = (int)uVar12 + uVar9;
                      uVar12 = (ulonglong)uVar9;
                      piVar15 = piVar15 + 1;
                      uVar24 = uVar24 - 1;
                    } while (uVar24 != 0);
                  }
                }
                else if (uVar10 < 0x11) {
                  uVar24 = (ulonglong)uVar10;
                  if (uVar10 != 0) {
                    piVar15 = (int *)(lVar33 + 0x10);
                    uVar31 = uVar12;
                    do {
                      iVar27 = *piVar15;
                      uVar9 = uVar26;
                      if (iVar27 != 0) {
                        if (iVar27 < 0) {
                          uVar9 = 1;
                        }
                        else {
                          uVar9 = *(uint *)(local_140 + 4 + (longlong)iVar27 * 8);
                          uVar11 = uVar9;
                          if ((int)uVar9 <= (int)(uint)uVar31) {
                            uVar11 = (uint)uVar31;
                            iVar27 = iVar8;
                          }
                          iVar8 = iVar27;
                          uVar31 = (ulonglong)uVar11;
                        }
                      }
                      uVar11 = (uint)uVar31;
                      uVar9 = (int)uVar12 + uVar9;
                      uVar12 = (ulonglong)uVar9;
                      piVar15 = piVar15 + 1;
                      uVar24 = uVar24 - 1;
                    } while (uVar24 != 0);
                  }
                }
                else {
                  uVar24 = uVar12;
                  uVar31 = uVar12;
                  if (uVar10 < 0x31) {
                    lVar35 = (ulonglong)*(byte *)(puVar38 + 7) + 1;
                    if (lVar35 != 0) {
                      piVar15 = (int *)(lVar33 + 0x100);
                      do {
                        iVar27 = *piVar15;
                        uVar9 = uVar26;
                        if (iVar27 != 0) {
                          if (iVar27 < 0) {
                            uVar9 = 1;
                          }
                          else {
                            uVar9 = *(uint *)(local_140 + 4 + (longlong)iVar27 * 8);
                            uVar11 = uVar9;
                            if ((int)uVar9 <= (int)(uint)uVar24) {
                              uVar11 = (uint)uVar24;
                              iVar27 = iVar8;
                            }
                            iVar8 = iVar27;
                            uVar24 = (ulonglong)uVar11;
                          }
                        }
                        uVar11 = (uint)uVar24;
                        uVar9 = (int)uVar12 + uVar9;
                        uVar12 = (ulonglong)uVar9;
                        piVar15 = piVar15 + 1;
                        lVar35 = lVar35 + -1;
                      } while (lVar35 != 0);
                    }
                  }
                  else {
                    do {
                      iVar27 = *(int *)(lVar33 + uVar31 * 4);
                      uVar9 = uVar25;
                      if (iVar27 != 0) {
                        if (iVar27 < 0) {
                          uVar9 = 1;
                        }
                        else {
                          uVar9 = *(uint *)(local_140 + 4 + (longlong)iVar27 * 8);
                          uVar11 = uVar9;
                          if ((int)uVar9 <= (int)(uint)uVar24) {
                            uVar11 = (uint)uVar24;
                            iVar27 = iVar8;
                          }
                          iVar8 = iVar27;
                          uVar24 = (ulonglong)uVar11;
                        }
                      }
                      uVar11 = (uint)uVar24;
                      uVar9 = (int)uVar12 + uVar9;
                      uVar12 = (ulonglong)uVar9;
                      uVar31 = uVar31 + 1;
                      piVar14 = local_178.m_begin;
                    } while ((longlong)uVar31 < 0x100);
                  }
                }
              }
              *(uint *)(local_140 + 4 + lVar23 * 8) = uVar9;
              uVar24 = uVar21;
              if (0 < (int)uVar11) {
                *puVar38 = *(undefined4 *)
                            ((ulonglong)(ushort)iVar8 * 0x20 +
                            *(longlong *)(local_138 + ((longlong)iVar8 >> 0x10) * 8));
              }
            }
            else {
              if (local_178.m_capacity < uVar24) {
                piVar14 = vector_storage<int>::makefit1(&local_178,uVar24,uVar21);
                if (local_178.m_begin + uVar21 != (int *)0x0) {
                  local_178.m_begin[uVar21] = -iVar8;
                }
                local_168 = uVar24;
                if (piVar14 != (int *)0x0) {
                  (*g_fp_OodleNet_Plugin_Free)(piVar14);
                }
              }
              else {
                local_168 = uVar24;
                if (piVar14 + uVar21 != (int *)0x0) {
                  piVar14[uVar21] = -iVar8;
                }
              }
              uVar9 = *(byte *)(puVar38 + 7) + 1;
              uVar31 = (ulonglong)uVar9;
              piVar14 = local_178.m_begin;
              if (uVar9 < 4) {
                if (uVar9 == 2) {
                  bVar4 = *(byte *)((longlong)puVar38 + 0x1d);
                  if (*(byte *)((longlong)puVar38 + 0x1e) < bVar4) {
                    *(byte *)((longlong)puVar38 + 0x1d) = *(byte *)((longlong)puVar38 + 0x1e);
                    *(byte *)((longlong)puVar38 + 0x1e) = bVar4;
                    uVar5 = puVar38[4];
                    puVar38[4] = puVar38[5];
                    puVar38[5] = uVar5;
                  }
                }
                if (uVar31 != 0) {
                  piVar15 = puVar38 + 4;
                  piVar16 = local_178.m_begin;
                  uVar19 = uVar24;
                  do {
                    iVar8 = *piVar15;
                    uVar24 = uVar19;
                    if (0 < iVar8) {
                      uVar24 = uVar19 + 1;
                      if (local_178.m_capacity < uVar24) {
                        piVar14 = vector_storage<int>::makefit1(&local_178,uVar24,uVar19);
                        if (local_178.m_begin + uVar19 != (int *)0x0) {
                          local_178.m_begin[uVar19] = iVar8;
                        }
                        piVar16 = local_178.m_begin;
                        local_168 = uVar24;
                        if (piVar14 != (int *)0x0) {
                          (*g_fp_OodleNet_Plugin_Free)(piVar14);
                          piVar16 = local_178.m_begin;
                        }
                      }
                      else {
                        local_168 = uVar24;
                        if (piVar16 + uVar19 != (int *)0x0) {
                          piVar16[uVar19] = iVar8;
                        }
                      }
                    }
                    uVar12 = uVar12 + 1;
                    piVar15 = piVar15 + 1;
                    uVar19 = uVar24;
                    piVar14 = local_178.m_begin;
                  } while ((longlong)uVar12 < (longlong)uVar31);
                }
              }
              else {
                pCVar6 = *(ChildrenSparseN<16> **)(puVar38 + 4);
                if (uVar9 < 9) {
                  if (uVar9 != 0) {
                    puVar34 = pCVar6->select + 8;
                    pCVar30 = pCVar6;
                    do {
                      lVar23 = (1 - (longlong)pCVar6) + (longlong)pCVar30;
                      if (lVar23 < (longlong)uVar31) {
                        pbVar39 = (byte *)(lVar23 + (longlong)pCVar6);
                        puVar28 = puVar34;
                        do {
                          puVar28 = puVar28 + 4;
                          bVar4 = pCVar30->select[0];
                          if (*pbVar39 < bVar4) {
                            pCVar30->select[0] = *pbVar39;
                            *pbVar39 = bVar4;
                            uVar5 = *(undefined4 *)puVar34;
                            *(undefined4 *)puVar34 = *(undefined4 *)puVar28;
                            *(undefined4 *)puVar28 = uVar5;
                          }
                          pbVar39 = pbVar39 + 1;
                        } while ((longlong)pbVar39 - (longlong)pCVar6 < (longlong)uVar31);
                      }
                      pCVar30 = (ChildrenSparseN<16> *)(pCVar30->select + 1);
                      puVar34 = puVar34 + 4;
                    } while ((longlong)pCVar30 - (longlong)pCVar6 < (longlong)uVar31);
                    puVar34 = pCVar6->select + 8;
                    lVar23 = 0;
                    uVar12 = uVar24;
                    do {
                      iVar8 = *(int *)puVar34;
                      uVar24 = uVar12;
                      if (0 < iVar8) {
                        uVar24 = uVar12 + 1;
                        if (local_178.m_capacity < uVar24) {
                          piVar14 = vector_storage<int>::makefit1(&local_178,uVar24,uVar12);
                          if (local_178.m_begin + uVar12 != (int *)0x0) {
                            local_178.m_begin[uVar12] = iVar8;
                          }
                          local_168 = uVar24;
                          if (piVar14 != (int *)0x0) {
                            (*g_fp_OodleNet_Plugin_Free)(piVar14);
                          }
                        }
                        else {
                          local_168 = uVar24;
                          if (local_178.m_begin + uVar12 != (int *)0x0) {
                            local_178.m_begin[uVar12] = iVar8;
                          }
                        }
                      }
                      lVar23 = lVar23 + 1;
                      puVar34 = puVar34 + 4;
                      uVar12 = uVar24;
                      piVar14 = local_178.m_begin;
                    } while (lVar23 < (longlong)uVar31);
                  }
                }
                else if (uVar9 < 0x11) {
                  ChildrenSparse_Sort<16>(pCVar6,uVar9);
                  lVar23 = 0;
                  piVar14 = local_178.m_begin;
                  if (uVar31 != 0) {
                    piVar15 = pCVar6->nodes;
                    uVar12 = uVar24;
                    do {
                      iVar8 = *piVar15;
                      uVar24 = uVar12;
                      if (0 < iVar8) {
                        uVar24 = uVar12 + 1;
                        if (local_178.m_capacity < uVar24) {
                          piVar14 = vector_storage<int>::makefit1(&local_178,uVar24,uVar12);
                          if (local_178.m_begin + uVar12 != (int *)0x0) {
                            local_178.m_begin[uVar12] = iVar8;
                          }
                          local_168 = uVar24;
                          if (piVar14 != (int *)0x0) {
                            (*g_fp_OodleNet_Plugin_Free)(piVar14);
                          }
                        }
                        else {
                          local_168 = uVar24;
                          if (local_178.m_begin + uVar12 != (int *)0x0) {
                            local_178.m_begin[uVar12] = iVar8;
                          }
                        }
                      }
                      lVar23 = lVar23 + 1;
                      piVar15 = piVar15 + 1;
                      uVar12 = uVar24;
                      piVar14 = local_178.m_begin;
                    } while (lVar23 < (longlong)uVar31);
                  }
                }
                else if (uVar9 < 0x31) {
                  lVar23 = 0;
                  if (uVar9 != 0) {
                    piVar16 = pCVar6[3].nodes;
                    piVar15 = local_178.m_begin;
                    uVar12 = uVar24;
                    do {
                      iVar8 = *piVar16;
                      uVar24 = uVar12;
                      if (0 < iVar8) {
                        uVar24 = uVar12 + 1;
                        if (local_178.m_capacity < uVar24) {
                          piVar14 = vector_storage<int>::makefit1(&local_178,uVar24,uVar12);
                          if (local_178.m_begin + uVar12 != (int *)0x0) {
                            local_178.m_begin[uVar12] = iVar8;
                          }
                          piVar15 = local_178.m_begin;
                          local_168 = uVar24;
                          if (piVar14 != (int *)0x0) {
                            (*g_fp_OodleNet_Plugin_Free)(piVar14);
                            piVar15 = local_178.m_begin;
                          }
                        }
                        else {
                          local_168 = uVar24;
                          if (piVar15 + uVar12 != (int *)0x0) {
                            piVar15[uVar12] = iVar8;
                          }
                        }
                      }
                      lVar23 = lVar23 + 1;
                      piVar16 = piVar16 + 1;
                      uVar12 = uVar24;
                      piVar14 = local_178.m_begin;
                    } while (lVar23 < (longlong)uVar31);
                  }
                }
                else {
                  lVar23 = 0;
                  do {
                    iVar8 = *(int *)(pCVar6->select + lVar23 * 4);
                    piVar14 = local_178.m_begin;
                    if (0 < iVar8) {
                      uVar12 = uVar24 + 1;
                      if (local_178.m_capacity < uVar12) {
                        piVar15 = vector_storage<int>::makefit1(&local_178,uVar12,uVar24);
                        piVar14 = local_178.m_begin;
                        if (local_178.m_begin + uVar24 != (int *)0x0) {
                          local_178.m_begin[uVar24] = iVar8;
                        }
                        uVar24 = uVar12;
                        local_168 = uVar12;
                        if (piVar15 != (int *)0x0) {
                          (*g_fp_OodleNet_Plugin_Free)(piVar15);
                        }
                      }
                      else {
                        piVar15 = local_178.m_begin + uVar24;
                        uVar24 = uVar12;
                        local_168 = uVar12;
                        if (piVar15 != (int *)0x0) {
                          *piVar15 = iVar8;
                        }
                      }
                    }
                    lVar23 = lVar23 + 1;
                  } while (lVar23 < 0x100);
                }
              }
            }
          } while (uVar24 != 0);
          uVar24 = 0;
          pvVar18 = local_150;
        }
      }
      local_158 = local_158 + 1;
      uVar12 = uVar24;
      pvVar22 = local_120;
      this = local_128;
      param_1 = local_148;
    } while ((longlong)local_158 < (longlong)pvVar18);
  }
  uVar12 = 0;
  if (param_1 != (SuffixTrieSortData *)0x0) {
    uVar19 = (ulonglong)(this->m_ubufsize + 1);
    uVar31 = *(ulonglong *)&(this->vleaf_to_suffix).field_0x10;
    if (uVar19 < uVar31) {
      *(ulonglong *)&(this->vleaf_to_suffix).field_0x10 = uVar19;
    }
    else {
      if ((*(ulonglong *)&(this->vleaf_to_suffix).field_0x8 < uVar19) &&
         (piVar15 = vector_storage<int>::makefit1
                              ((vector_storage<int> *)&this->vleaf_to_suffix,uVar19,uVar31),
         piVar15 != (int *)0x0)) {
        (*g_fp_OodleNet_Plugin_Free)(piVar15);
      }
      puVar1 = &(this->vleaf_to_suffix).field_0x10;
      *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar19 - uVar31);
    }
    uVar19 = (ulonglong)(this->m_ubufsize + 1);
    uVar31 = *(ulonglong *)&(param_1->vsort).field_0x10;
    if (uVar19 < uVar31) {
      *(ulonglong *)&(param_1->vsort).field_0x10 = uVar19;
    }
    else {
      if ((*(ulonglong *)&(param_1->vsort).field_0x8 < uVar19) &&
         (piVar15 = vector_storage<int>::makefit1
                              ((vector_storage<int> *)&param_1->vsort,uVar19,uVar31),
         piVar15 != (int *)0x0)) {
        (*g_fp_OodleNet_Plugin_Free)(piVar15);
      }
      puVar1 = &(param_1->vsort).field_0x10;
      *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar19 - uVar31);
    }
  }
  iVar8 = 0;
  local_160 = 0;
  local_130 = 0;
  if (0 < (longlong)local_150) {
    local_158 = 0;
    pvVar18 = local_150;
    uVar31 = uVar12;
    do {
      iVar8 = *(int *)((longlong)local_120 + local_130 * 4);
      if (iVar8 < 1) {
        if (iVar8 < 0) {
          if (param_1 != (SuffixTrieSortData *)0x0) {
            *(int *)(*(longlong *)&param_1->vsort + uVar12 * 4) = -iVar8;
            *(int *)(*(longlong *)&local_128->vleaf_to_suffix + (longlong)-iVar8 * 4) = (int)uVar31;
            pvVar18 = local_150;
          }
          local_160 = (int)uVar31 + 1;
          uVar31 = (ulonglong)local_160;
          uVar12 = uVar12 + 1;
          local_158 = uVar12;
        }
      }
      else {
        uVar19 = uVar24 + 1;
        if (local_178.m_capacity < uVar19) {
          piVar15 = vector_storage<int>::makefit1(&local_178,uVar19,uVar24);
          piVar14 = local_178.m_begin;
          if (local_178.m_begin + uVar24 != (int *)0x0) {
            local_178.m_begin[uVar24] = iVar8;
          }
          pvVar18 = local_150;
          uVar12 = local_158;
          local_168 = uVar19;
          param_1 = local_148;
          if (piVar15 != (int *)0x0) {
            (*g_fp_OodleNet_Plugin_Free)(piVar15);
            pvVar18 = local_150;
            uVar12 = local_158;
            param_1 = local_148;
          }
        }
        else {
          local_168 = uVar19;
          param_1 = local_148;
          if (piVar14 + uVar24 != (int *)0x0) {
            piVar14[uVar24] = iVar8;
          }
        }
        while (local_148 = param_1, uVar19 != 0) {
          iVar27 = 0;
          iVar8 = piVar14[uVar19 - 1];
          uVar19 = uVar19 - 1;
          iVar37 = (int)uVar31;
          local_168 = uVar19;
          if (iVar8 < 0) {
            if (param_1 != (SuffixTrieSortData *)0x0) {
              *(int *)(*(longlong *)&param_1->vsort + uVar12 * 4) = -iVar8;
              *(int *)(*(longlong *)&local_128->vleaf_to_suffix + (longlong)-iVar8 * 4) = iVar37;
            }
            local_160 = iVar37 + 1;
            local_158 = uVar12 + 1;
          }
          else {
            lVar23 = (ulonglong)(ushort)iVar8 * 0x20 +
                     *(longlong *)(local_138 + ((longlong)iVar8 >> 0x10) * 8);
            *(int *)(local_140 + (longlong)iVar8 * 8) = iVar37;
            bVar4 = *(byte *)(lVar23 + 0x1c);
            uVar24 = (ulonglong)bVar4;
            uVar9 = bVar4 + 1;
            if (uVar9 < 4) {
              lVar33 = (longlong)(int)(uint)bVar4;
              piVar15 = (int *)(lVar23 + (lVar33 + 4) * 4);
              uVar24 = uVar19;
              do {
                iVar8 = *piVar15;
                uVar19 = uVar24 + 1;
                if (local_178.m_capacity < uVar19) {
                  piVar16 = vector_storage<int>::makefit1(&local_178,uVar19,uVar24);
                  piVar14 = local_178.m_begin;
                  if (local_178.m_begin + uVar24 != (int *)0x0) {
                    local_178.m_begin[uVar24] = iVar8;
                  }
                  local_168 = uVar19;
                  if (piVar16 != (int *)0x0) {
                    (*g_fp_OodleNet_Plugin_Free)(piVar16);
                  }
                }
                else {
                  local_168 = uVar19;
                  if (piVar14 + uVar24 != (int *)0x0) {
                    piVar14[uVar24] = iVar8;
                  }
                }
                piVar15 = piVar15 + -1;
                lVar33 = lVar33 + -1;
                uVar24 = uVar19;
              } while (-1 < lVar33);
            }
            else {
              pbVar39 = *(byte **)(lVar23 + 0x10);
              if (uVar9 < 9) {
                pbVar39 = pbVar39 + (uVar24 + 2) * 4;
                uVar12 = uVar19;
                do {
                  iVar8 = *(int *)pbVar39;
                  uVar19 = uVar12 + 1;
                  if (local_178.m_capacity < uVar19) {
                    piVar15 = vector_storage<int>::makefit1(&local_178,uVar19,uVar12);
                    piVar14 = local_178.m_begin;
                    if (local_178.m_begin + uVar12 != (int *)0x0) {
                      local_178.m_begin[uVar12] = iVar8;
                    }
                    local_168 = uVar19;
                    if (piVar15 != (int *)0x0) {
                      (*g_fp_OodleNet_Plugin_Free)(piVar15);
                    }
                  }
                  else {
                    local_168 = uVar19;
                    if (piVar14 + uVar12 != (int *)0x0) {
                      piVar14[uVar12] = iVar8;
                    }
                  }
                  pbVar39 = pbVar39 + -4;
                  uVar24 = uVar24 - 1;
                  uVar12 = uVar19;
                } while (-1 < (longlong)uVar24);
              }
              else {
                uVar12 = (ulonglong)uVar9;
                if (uVar9 < 0x11) {
                  if (uVar9 != 0) {
                    pbVar36 = pbVar39 + 0x10;
                    lVar23 = -(longlong)pbVar39;
                    pbVar32 = pbVar39;
                    do {
                      if ((longlong)(pbVar32 + lVar23 + 1) < (longlong)uVar12) {
                        pbVar20 = pbVar32 + lVar23 + 1 + (longlong)pbVar39;
                        pbVar29 = pbVar36;
                        do {
                          pbVar29 = pbVar29 + 4;
                          bVar4 = *pbVar32;
                          if (*pbVar20 < bVar4) {
                            *pbVar32 = *pbVar20;
                            *pbVar20 = bVar4;
                            uVar5 = *(undefined4 *)pbVar36;
                            *(undefined4 *)pbVar36 = *(undefined4 *)pbVar29;
                            *(undefined4 *)pbVar29 = uVar5;
                          }
                          pbVar20 = pbVar20 + 1;
                        } while ((longlong)pbVar20 + lVar23 < (longlong)uVar12);
                      }
                      pbVar32 = pbVar32 + 1;
                      pbVar36 = pbVar36 + 4;
                    } while ((longlong)pbVar32 + lVar23 < (longlong)uVar12);
                  }
                  pbVar39 = pbVar39 + (uVar24 + 4) * 4;
                  uVar12 = uVar19;
                  do {
                    iVar8 = *(int *)pbVar39;
                    uVar19 = uVar12 + 1;
                    if (local_178.m_capacity < uVar19) {
                      piVar15 = vector_storage<int>::makefit1(&local_178,uVar19,uVar12);
                      piVar14 = local_178.m_begin;
                      if (local_178.m_begin + uVar12 != (int *)0x0) {
                        local_178.m_begin[uVar12] = iVar8;
                      }
                      local_168 = uVar19;
                      if (piVar15 != (int *)0x0) {
                        (*g_fp_OodleNet_Plugin_Free)(piVar15);
                      }
                    }
                    else {
                      local_168 = uVar19;
                      if (piVar14 + uVar12 != (int *)0x0) {
                        piVar14[uVar12] = iVar8;
                      }
                    }
                    pbVar39 = pbVar39 + -4;
                    uVar24 = uVar24 - 1;
                    uVar12 = uVar19;
                  } while (-1 < (longlong)uVar24);
                }
                else if (uVar9 < 0x31) {
                  if (uVar9 != 0) {
                    memcpy(local_108,pbVar39 + 0x100,uVar12 << 2);
                  }
                  lVar23 = 0x100;
                  pbVar36 = pbVar39;
                  do {
                    bVar4 = *pbVar36;
                    if (bVar4 != 0) {
                      *pbVar36 = (char)iVar27 + 1;
                      *(undefined4 *)(pbVar39 + (longlong)iVar27 * 4 + 0x100) = (&uStack_10c)[bVar4]
                      ;
                      iVar27 = iVar27 + 1;
                    }
                    pbVar36 = pbVar36 + 1;
                    lVar23 = lVar23 + -1;
                  } while (lVar23 != 0);
                  pbVar39 = pbVar39 + (uVar24 + 0x40) * 4;
                  uVar12 = uVar19;
                  do {
                    iVar8 = *(int *)pbVar39;
                    uVar19 = uVar12 + 1;
                    if (local_178.m_capacity < uVar19) {
                      piVar15 = vector_storage<int>::makefit1(&local_178,uVar19,uVar12);
                      piVar14 = local_178.m_begin;
                      if (local_178.m_begin + uVar12 != (int *)0x0) {
                        local_178.m_begin[uVar12] = iVar8;
                      }
                      local_168 = uVar19;
                      if (piVar15 != (int *)0x0) {
                        (*g_fp_OodleNet_Plugin_Free)(piVar15);
                      }
                    }
                    else {
                      local_168 = uVar19;
                      if (piVar14 + uVar12 != (int *)0x0) {
                        piVar14[uVar12] = iVar8;
                      }
                    }
                    pbVar39 = pbVar39 + -4;
                    uVar24 = uVar24 - 1;
                    uVar12 = uVar19;
                  } while (-1 < (longlong)uVar24);
                }
                else {
                  lVar23 = 0xff;
                  uVar24 = uVar19;
                  do {
                    iVar8 = *(int *)(pbVar39 + lVar23 * 4);
                    uVar19 = uVar24;
                    if (iVar8 != 0) {
                      uVar19 = uVar24 + 1;
                      if (local_178.m_capacity < uVar19) {
                        piVar15 = vector_storage<int>::makefit1(&local_178,uVar19,uVar24);
                        piVar14 = local_178.m_begin;
                        if (local_178.m_begin + uVar24 != (int *)0x0) {
                          local_178.m_begin[uVar24] = iVar8;
                        }
                        local_168 = uVar19;
                        if (piVar15 != (int *)0x0) {
                          (*g_fp_OodleNet_Plugin_Free)(piVar15);
                        }
                      }
                      else {
                        local_168 = uVar19;
                        if (piVar14 + uVar24 != (int *)0x0) {
                          piVar14[uVar24] = iVar8;
                        }
                      }
                    }
                    lVar23 = lVar23 + -1;
                    uVar24 = uVar19;
                  } while (-1 < lVar23);
                }
              }
            }
          }
          uVar31 = (ulonglong)local_160;
          pvVar18 = local_150;
          uVar12 = local_158;
          param_1 = local_148;
        }
        uVar24 = 0;
      }
      iVar8 = (int)uVar31;
      local_130 = local_130 + 1;
    } while (local_130 < (longlong)pvVar18);
  }
  if (param_1 != (SuffixTrieSortData *)0x0) {
    uVar12 = (ulonglong)iVar8;
    uVar24 = *(ulonglong *)&(param_1->vsort).field_0x10;
    if (uVar12 < uVar24) {
      *(ulonglong *)&(param_1->vsort).field_0x10 = uVar12;
    }
    else {
      if ((*(ulonglong *)&(param_1->vsort).field_0x8 < uVar12) &&
         (piVar14 = vector_storage<int>::makefit1
                              ((vector_storage<int> *)&param_1->vsort,uVar12,uVar24),
         piVar14 != (int *)0x0)) {
        (*g_fp_OodleNet_Plugin_Free)(piVar14);
      }
      puVar1 = &(param_1->vsort).field_0x10;
      *(ulonglong *)puVar1 = *(longlong *)puVar1 + (uVar12 - uVar24);
    }
    param_1->count = iVar8;
    pvVar18 = &param_1->o0_cumcounts;
    uVar24 = *(ulonglong *)&(param_1->o0_cumcounts).field_0x10;
    local_150 = pvVar18;
    if (uVar24 < 0x102) {
      if ((*(ulonglong *)&(param_1->o0_cumcounts).field_0x8 < 0x101) &&
         (piVar14 = vector_storage<int>::makefit1((vector_storage<int> *)pvVar18,0x101,uVar24),
         piVar14 != (int *)0x0)) {
        (*g_fp_OodleNet_Plugin_Free)(piVar14);
      }
      puVar1 = &(param_1->o0_cumcounts).field_0x10;
      *(ulonglong *)puVar1 = *(longlong *)puVar1 + (0x101 - uVar24);
    }
    else {
      *(undefined8 *)&(param_1->o0_cumcounts).field_0x10 = 0x101;
    }
    pSVar7 = local_148;
    uVar24 = *(ulonglong *)&(local_148->o0_excludes).field_0x10;
    if (uVar24 < 0x101) {
      if ((*(ulonglong *)&(local_148->o0_excludes).field_0x8 < 0x100) &&
         (pBVar17 = vector_storage<oo2net::BitFlags256>::makefit1
                              ((vector_storage<oo2net::BitFlags256> *)&local_148->o0_excludes,0x100,
                               uVar24), pBVar17 != (BitFlags256 *)0x0)) {
        (*g_fp_OodleNet_Plugin_Free)(pBVar17);
      }
      puVar1 = &(pSVar7->o0_excludes).field_0x10;
      *(ulonglong *)puVar1 = *(longlong *)puVar1 + (0x100 - uVar24);
    }
    else {
      *(undefined8 *)&(local_148->o0_excludes).field_0x10 = 0x100;
    }
    local_130 = 0;
    uVar12 = 0;
    lVar23 = 0x100;
    uVar24 = uVar12;
    do {
      uVar9 = (int)uVar24 << 8;
      lVar33 = *(longlong *)&pSVar7->o0_excludes;
      puVar2 = (undefined8 *)(uVar12 + lVar33);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(uVar12 + 0x10 + lVar33);
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar8 = -1;
      for (lVar33 = (longlong)(int)uVar9; lVar33 < lVar23; lVar33 = lVar33 + 1) {
        iVar27 = *(int *)((longlong)local_120 + lVar33 * 4);
        if (iVar27 != 0) {
          if (iVar8 < 0) {
            if (iVar27 < 0) {
              iVar8 = *(int *)(*(longlong *)&local_128->vleaf_to_suffix + (longlong)-iVar27 * 4);
            }
            else {
              iVar8 = *(int *)(local_140 + (longlong)iVar27 * 8);
            }
          }
          puVar3 = (uint *)(*(longlong *)&pSVar7->o0_excludes + uVar12 +
                           (ulonglong)((uVar9 & 0xff) >> 5) * 4);
          *puVar3 = *puVar3 | 1 << (uVar9 & 0x1f);
        }
        uVar9 = uVar9 + 1;
        pvVar18 = local_150;
      }
      *(int *)(local_130 + *(longlong *)&pvVar18->field_0x0) = iVar8;
      uVar9 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar9;
      lVar23 = lVar23 + 0x100;
      uVar12 = uVar12 + 0x20;
      local_130 = local_130 + 4;
    } while ((int)uVar9 < 0x100);
    *(uint *)(*(longlong *)&pvVar18->field_0x0 + 0x400) = local_160;
    lVar23 = 0x3fc;
    do {
      lVar33 = *(longlong *)&pvVar18->field_0x0;
      if (*(int *)(lVar33 + lVar23) == -1) {
        *(undefined4 *)(lVar33 + lVar23) = *(undefined4 *)(lVar33 + 4 + lVar23);
      }
      lVar23 = lVar23 + -4;
      piVar14 = local_178.m_begin;
    } while (-1 < lVar23);
  }
  if (piVar14 != (int *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(piVar14);
  }
  return;
}

// Free @ 14ff5d050

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::Free
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> *this,
          ChildrenSparseN<8> *param_1)

{
  *(FreeList **)param_1->select = this->m_freeList;
  this->m_freeList = (FreeList *)param_1;
  return;
}

// Free @ 14ff5d070

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::Free
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> *this,
          ChildrenSparseN<16> *param_1)

{
  *(FreeList **)param_1->select = this->m_freeList;
  this->m_freeList = (FreeList *)param_1;
  return;
}

// Free @ 14ff5d090

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::Free
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> *this,
          ChildrenSparseI *param_1)

{
  *(FreeList **)param_1->sel2ind = this->m_freeList;
  this->m_freeList = (FreeList *)param_1;
  return;
}

// Free @ 14ff5d0c0

void __thiscall oo2net::rrArenaAllocator::Free(rrArenaAllocator *this,void *param_1,long64 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = param_2 + 0xfU & 0xfffffffffffffff0;
  if ((void *)this->m_unorderedStart == (void *)0x0) {
    if ((longlong)param_1 + uVar5 == this->m_cur) {
      this->m_cur = this->m_cur - uVar5;
      return;
    }
  }
  else if (((void *)this->m_unorderedStart <= param_1) &&
          (param_1 < (void *)(this->m_size + this->m_base))) {
    plVar4 = (longlong *)((longlong)param_1 + uVar5);
    plVar4[1] = 1;
    plVar2 = (longlong *)this->m_cur;
    if ((plVar4 + 2 == plVar2) && (plVar2 != (longlong *)this->m_unorderedStart)) {
      while (plVar4[1] == 1) {
        lVar1 = *plVar4;
        plVar3 = (longlong *)((longlong)plVar2 + (-0x10 - lVar1));
        this->m_cur = (ulong64)plVar3;
        plVar4 = (longlong *)((longlong)plVar2 + (-0x20 - lVar1));
        plVar2 = plVar3;
        if (plVar3 == (longlong *)this->m_unorderedStart) {
          return;
        }
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014ff5d140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// FreeAllChunks @ 14ff5d160

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::FreeAllChunks
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> *this,bool param_1)

{
  int *piVar1;
  Chunk *pCVar2;
  rrArenaAllocator *prVar3;
  longlong lVar4;
  Chunk *pCVar5;
  undefined1 *puVar6;
  
  pCVar2 = this->m_chunkList;
joined_r0x00014ff5d176:
  pCVar5 = pCVar2;
  if (pCVar5 == (Chunk *)0x0) {
    this->m_chunkList = (Chunk *)0x0;
    this->m_freeList = (FreeList *)0x0;
    this->m_next = 0x6657;
    return;
  }
  pCVar2 = pCVar5->next;
  if (pCVar5->from_arena != 0) goto code_r0x00014ff5d18e;
  goto LAB_14ff5d21a;
code_r0x00014ff5d18e:
  if (param_1) {
    prVar3 = this->m_scratch;
    if ((Chunk *)prVar3->m_unorderedStart == (Chunk *)0x0) {
      if (&pCVar5[1].from_arena == (int *)prVar3->m_cur) {
        prVar3->m_cur = (ulong64)((undefined1 *)prVar3->m_cur + -0xffdb0);
        goto joined_r0x00014ff5d176;
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
      goto joined_r0x00014ff5d176;
    }
LAB_14ff5d21a:
    (*g_fp_OodleNet_Plugin_Free)(pCVar5);
  }
  goto joined_r0x00014ff5d176;
}

// FreeAllChunks @ 14ff5d260

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::FreeAllChunks
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> *this,bool param_1)

{
  Chunk *pCVar1;
  Chunk *pCVar2;
  rrArenaAllocator *prVar3;
  longlong lVar4;
  Chunk *pCVar5;
  undefined1 *puVar6;
  
  pCVar2 = this->m_chunkList;
joined_r0x00014ff5d276:
  pCVar5 = pCVar2;
  if (pCVar5 == (Chunk *)0x0) {
    this->m_chunkList = (Chunk *)0x0;
    this->m_freeList = (FreeList *)0x0;
    this->m_next = 0x332b;
    return;
  }
  pCVar2 = pCVar5->next;
  if (pCVar5->from_arena != 0) goto code_r0x00014ff5d28e;
  goto LAB_14ff5d31a;
code_r0x00014ff5d28e:
  if (param_1) {
    prVar3 = this->m_scratch;
    if ((Chunk *)prVar3->m_unorderedStart == (Chunk *)0x0) {
      if (pCVar5 + 1 == (Chunk *)prVar3->m_cur) {
        prVar3->m_cur = (ulong64)((Chunk *)prVar3->m_cur + -1);
        goto joined_r0x00014ff5d276;
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
      goto joined_r0x00014ff5d276;
    }
LAB_14ff5d31a:
    (*g_fp_OodleNet_Plugin_Free)(pCVar5);
  }
  goto joined_r0x00014ff5d276;
}

// FreeAllChunks @ 14ff5d360

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::FreeAllChunks
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000> *this,bool param_1)

{
  Chunk *pCVar1;
  Chunk *pCVar2;
  rrArenaAllocator *prVar3;
  longlong lVar4;
  Chunk *pCVar5;
  undefined1 *puVar6;
  
  pCVar2 = this->m_chunkList;
joined_r0x00014ff5d376:
  pCVar5 = pCVar2;
  if (pCVar5 == (Chunk *)0x0) {
    this->m_chunkList = (Chunk *)0x0;
    this->m_freeList = (FreeList *)0x0;
    this->m_next = 0x3ff;
    return;
  }
  pCVar2 = pCVar5->next;
  if (pCVar5->from_arena != 0) goto code_r0x00014ff5d38e;
  goto LAB_14ff5d41a;
code_r0x00014ff5d38e:
  if (param_1) {
    prVar3 = this->m_scratch;
    if ((Chunk *)prVar3->m_unorderedStart == (Chunk *)0x0) {
      if (pCVar5 + 1 == (Chunk *)prVar3->m_cur) {
        prVar3->m_cur = (ulong64)((Chunk *)prVar3->m_cur + -1);
        goto joined_r0x00014ff5d376;
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
      goto joined_r0x00014ff5d376;
    }
LAB_14ff5d41a:
    (*g_fp_OodleNet_Plugin_Free)(pCVar5);
  }
  goto joined_r0x00014ff5d376;
}

// FreeAllChunks @ 14ff5d460

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::FreeAllChunks
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> *this,bool param_1)

{
  Chunk *pCVar1;
  Chunk *pCVar2;
  rrArenaAllocator *prVar3;
  longlong lVar4;
  Chunk *pCVar5;
  undefined1 *puVar6;
  
  pCVar2 = this->m_chunkList;
joined_r0x00014ff5d476:
  pCVar5 = pCVar2;
  if (pCVar5 == (Chunk *)0x0) {
    this->m_chunkList = (Chunk *)0x0;
    this->m_freeList = (FreeList *)0x0;
    this->m_next = 0x923;
    return;
  }
  pCVar2 = pCVar5->next;
  if (pCVar5->from_arena != 0) goto code_r0x00014ff5d48e;
  goto LAB_14ff5d51a;
code_r0x00014ff5d48e:
  if (param_1) {
    prVar3 = this->m_scratch;
    if ((Chunk *)prVar3->m_unorderedStart == (Chunk *)0x0) {
      if (pCVar5 + 1 == (Chunk *)prVar3->m_cur) {
        prVar3->m_cur = (ulong64)((Chunk *)prVar3->m_cur + -1);
        goto joined_r0x00014ff5d476;
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
      goto joined_r0x00014ff5d476;
    }
LAB_14ff5d51a:
    (*g_fp_OodleNet_Plugin_Free)(pCVar5);
  }
  goto joined_r0x00014ff5d476;
}

// FreeAllFromArena @ 14ff5d560

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::FreeAllFromArena
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> *this)

{
  FreeAllChunks(this,true);
  return;
}

// FreeAllFromArena @ 14ff5d570

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::FreeAllFromArena
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> *this)

{
  FreeAllChunks(this,true);
  return;
}

// FreeAllFromArena @ 14ff5d580

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::FreeAllFromArena
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000> *this)

{
  FreeAllChunks(this,true);
  return;
}

// FreeAllFromArena @ 14ff5d590

void __thiscall
oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::FreeAllFromArena
          (rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> *this)

{
  FreeAllChunks(this,true);
  return;
}

// GetChildCount @ 14ff5d5a0

int __cdecl
oo2net::SuffixTrieForMatcher::SuffixTrieObject::GetChildCount(SuffixIndex *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0) {
    return 1;
  }
  return param_1[param_2].count;
}

// LRMJob @ 14ff5d5c0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::LRMJob
          (SuffixTrie2MatchFinder *this,int param_1,int param_2)

{
  ulonglong uVar1;
  vector<oo2net::UnpackedMatchPair> *this_00;
  int *piVar2;
  int iVar3;
  uchar *puVar4;
  ulong64 uVar5;
  int iVar6;
  int iVar7;
  UnpackedMatchPair *pUVar8;
  ulonglong uVar9;
  uchar *puVar10;
  int local_res8 [2];
  
  puVar4 = this->m_ubuf;
  this_00 = &this->lrm_matches;
  iVar3 = this->m_size;
  uVar9 = (ulonglong)(param_2 - param_1);
  if ((*(ulonglong *)&(this->lrm_matches).field_0x8 < uVar9) &&
     (pUVar8 = vector_storage<oo2net::UnpackedMatchPair>::makefit1
                         ((vector_storage<oo2net::UnpackedMatchPair> *)this_00,uVar9,
                          *(ulong64 *)&(this->lrm_matches).field_0x10),
     pUVar8 != (UnpackedMatchPair *)0x0)) {
    (*g_fp_OodleNet_Plugin_Free)(pUVar8);
  }
  *(undefined8 *)&(this->lrm_matches).field_0x10 = 0;
  if (param_1 < param_2) {
    puVar10 = puVar4 + param_1;
    do {
      iVar7 = LRMScannerWindowed_FindMatchAndRoll
                        (&this->scanner,puVar10,puVar4 + iVar3,(long64 *)local_res8);
      iVar6 = local_res8[0];
      uVar5 = *(ulong64 *)&(this->lrm_matches).field_0x10;
      uVar1 = uVar5 + 1;
      if (*(ulonglong *)&(this->lrm_matches).field_0x8 < uVar1) {
        pUVar8 = vector_storage<oo2net::UnpackedMatchPair>::makefit1
                           ((vector_storage<oo2net::UnpackedMatchPair> *)this_00,uVar1,uVar5);
        piVar2 = (int *)(*(longlong *)&this_00->field_0x0 + uVar5 * 8);
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar7;
          piVar2[1] = iVar6;
        }
        *(ulonglong *)&(this->lrm_matches).field_0x10 = uVar1;
        if (pUVar8 != (UnpackedMatchPair *)0x0) {
          (*g_fp_OodleNet_Plugin_Free)(pUVar8);
        }
      }
      else {
        *(ulonglong *)&(this->lrm_matches).field_0x10 = uVar1;
        piVar2 = (int *)(*(longlong *)&this_00->field_0x0 + uVar5 * 8);
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar7;
          piVar2[1] = local_res8[0];
        }
      }
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

// LRMJobShim @ 14ff5d700

void __cdecl oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::LRMJobShim(void *param_1)

{
  ulonglong uVar1;
  vector_storage<oo2net::UnpackedMatchPair> *this;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulong64 uVar6;
  int iVar7;
  UnpackedMatchPair *pUVar8;
  UnpackedMatchPair *pUVar9;
  ulonglong uVar10;
  uchar *puVar11;
  int local_res8 [2];
  LRMScannerWindowed *local_res10;
  
  lVar4 = *(longlong *)param_1;
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  iVar7 = *(int *)((longlong)param_1 + 8);
  lVar5 = *(longlong *)(lVar4 + 8);
  this = (vector_storage<oo2net::UnpackedMatchPair> *)(lVar4 + 0x2b8);
  iVar3 = *(int *)(lVar4 + 0x10);
  uVar10 = (ulonglong)(iVar2 - iVar7);
  if ((*(ulonglong *)(lVar4 + 0x2c0) < uVar10) &&
     (pUVar8 = vector_storage<oo2net::UnpackedMatchPair>::makefit1
                         (this,uVar10,*(ulong64 *)(lVar4 + 0x2c8)),
     pUVar8 != (UnpackedMatchPair *)0x0)) {
    (*g_fp_OodleNet_Plugin_Free)(pUVar8);
  }
  *(undefined8 *)(lVar4 + 0x2c8) = 0;
  if (iVar7 < iVar2) {
    local_res10 = (LRMScannerWindowed *)(lVar4 + 0xe0);
    puVar11 = (uchar *)(iVar7 + lVar5);
    do {
      iVar7 = LRMScannerWindowed_FindMatchAndRoll
                        (local_res10,puVar11,(uchar *)(iVar3 + lVar5),(long64 *)local_res8);
      iVar2 = local_res8[0];
      uVar6 = *(ulong64 *)(lVar4 + 0x2c8);
      uVar1 = uVar6 + 1;
      if (*(ulonglong *)(lVar4 + 0x2c0) < uVar1) {
        pUVar9 = vector_storage<oo2net::UnpackedMatchPair>::makefit1(this,uVar1,uVar6);
        pUVar8 = this->m_begin + uVar6;
        if (pUVar8 != (UnpackedMatchPair *)0x0) {
          pUVar8->length = iVar7;
          pUVar8->offset = iVar2;
        }
        *(ulonglong *)(lVar4 + 0x2c8) = uVar1;
        if (pUVar9 != (UnpackedMatchPair *)0x0) {
          (*g_fp_OodleNet_Plugin_Free)(pUVar9);
        }
      }
      else {
        pUVar8 = this->m_begin;
        *(ulonglong *)(lVar4 + 0x2c8) = uVar1;
        pUVar8 = pUVar8 + uVar6;
        if (pUVar8 != (UnpackedMatchPair *)0x0) {
          pUVar8->length = iVar7;
          pUVar8->offset = local_res8[0];
        }
      }
      puVar11 = puVar11 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

// Lookup @ 14ff5d840

bool __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrieObject::Lookup
          (SuffixTrieObject *this,uchar *param_1,int param_2,LookupResult *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  ushort uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uchar *puVar9;
  int *piVar10;
  uchar *puVar11;
  longlong lVar12;
  uchar *puVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  uint *puVar18;
  uint *puVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  puVar13 = this->m_ubuf;
  puVar18 = (uint *)0x0;
  iVar17 = 0;
  puVar9 = puVar13 + this->m_ubufsize;
  puVar7 = puVar18;
  if (*(longlong *)&(this->vfirstbytes).field_0x10 != 0) {
    puVar7 = *(uint **)&this->vfirstbytes;
  }
  puVar19 = puVar18;
  if (*(longlong *)&(this->node_chunks).field_0x10 != 0) {
    puVar19 = *(uint **)&this->node_chunks;
  }
  uVar14 = puVar7[CONCAT11(*param_1,param_1[1])];
  uVar20 = (ulonglong)(int)uVar14;
  if (uVar14 == 0) {
    return false;
  }
  iVar6 = 2;
  if ((int)uVar14 < 0) {
LAB_14ff5db37:
    puVar13 = puVar13 + -(longlong)(int)uVar14;
    if (iVar6 < param_2) {
      puVar11 = param_1 + iVar6;
      do {
        if ((puVar9 <= puVar13 + iVar6) ||
           (*puVar11 != puVar11[(longlong)puVar13 - (longlong)param_1])) break;
        iVar6 = iVar6 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar6 < param_2);
    }
  }
  else {
    piVar10 = (int *)((uVar20 & 0xffff) * 0x20 +
                     *(longlong *)(puVar19 + ((longlong)uVar20 >> 0x10) * 2));
    iVar3 = *piVar10;
    lVar15 = (longlong)piVar10[3];
    if (2 < lVar15) {
      puVar11 = param_1 + 2;
      do {
        if (((param_2 <= iVar6) || (puVar9 <= puVar13 + (longlong)iVar6 + (longlong)iVar3)) ||
           (*puVar11 != puVar11[(longlong)(puVar13 + ((longlong)iVar3 - (longlong)param_1))]))
        goto LAB_14ff5db0f;
        puVar11 = puVar11 + 1;
        iVar6 = iVar6 + 1;
      } while ((longlong)puVar11 - (longlong)param_1 < lVar15);
    }
    if (iVar6 < param_2) {
      lVar15 = (longlong)iVar6;
      do {
        bVar2 = param_1[lVar15];
        uVar16 = (ulonglong)bVar2;
        lVar12 = (uVar20 & 0xffff) * 0x20 +
                 *(longlong *)(puVar19 + ((uVar20 & 0xffffffff) >> 0x10) * 2);
        uVar14 = *(byte *)(lVar12 + 0x1c) + 1;
        puVar7 = puVar18;
        puVar8 = puVar18;
        if (uVar14 < 4) {
          while( true ) {
            if ((longlong)(ulonglong)uVar14 <= (longlong)puVar7) goto LAB_14ff5dadb;
            if (*(byte *)(lVar12 + 0x1d + (longlong)puVar7) == bVar2) break;
            puVar7 = (uint *)((longlong)puVar7 + 1);
            puVar8 = (uint *)(ulonglong)((int)puVar8 + 1);
          }
          puVar7 = (uint *)(lVar12 + ((longlong)(int)puVar8 + 4) * 4);
        }
        else {
          pbVar4 = *(byte **)(lVar12 + 0x10);
          if (uVar14 < 9) {
            uVar1 = *(undefined8 *)pbVar4;
            auVar22[0] = -((byte)uVar1 == bVar2);
            auVar22[1] = -((byte)((ulonglong)uVar1 >> 8) == bVar2);
            auVar22[2] = -((byte)((ulonglong)uVar1 >> 0x10) == bVar2);
            auVar22[3] = -((byte)((ulonglong)uVar1 >> 0x18) == bVar2);
            auVar22[4] = -((byte)((ulonglong)uVar1 >> 0x20) == bVar2);
            auVar22[5] = -((byte)((ulonglong)uVar1 >> 0x28) == bVar2);
            auVar22[6] = -((byte)((ulonglong)uVar1 >> 0x30) == bVar2);
            auVar22[7] = -((byte)((ulonglong)uVar1 >> 0x38) == bVar2);
            auVar22[8] = -(bVar2 == 0);
            auVar22[9] = -(bVar2 == 0);
            auVar22[10] = -(bVar2 == 0);
            auVar22[0xb] = -(bVar2 == 0);
            auVar22[0xc] = -(bVar2 == 0);
            auVar22[0xd] = -(bVar2 == 0);
            auVar22[0xe] = -(bVar2 == 0);
            auVar22[0xf] = -(bVar2 == 0);
            uVar5 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar22[0xf] >> 7) << 0xf;
            if (uVar5 != 0) {
              iVar17 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> iVar17 & 1) == 0; iVar17 = iVar17 + 1) {
                }
              }
              if (iVar17 < (int)uVar14) {
                puVar7 = (uint *)(pbVar4 + ((longlong)iVar17 + 2) * 4);
              }
            }
            bVar21 = puVar7 == (uint *)0x0;
          }
          else if (uVar14 < 0x11) {
            auVar23[0] = -(bVar2 == *pbVar4);
            auVar23[1] = -(bVar2 == pbVar4[1]);
            auVar23[2] = -(bVar2 == pbVar4[2]);
            auVar23[3] = -(bVar2 == pbVar4[3]);
            auVar23[4] = -(bVar2 == pbVar4[4]);
            auVar23[5] = -(bVar2 == pbVar4[5]);
            auVar23[6] = -(bVar2 == pbVar4[6]);
            auVar23[7] = -(bVar2 == pbVar4[7]);
            auVar23[8] = -(bVar2 == pbVar4[8]);
            auVar23[9] = -(bVar2 == pbVar4[9]);
            auVar23[10] = -(bVar2 == pbVar4[10]);
            auVar23[0xb] = -(bVar2 == pbVar4[0xb]);
            auVar23[0xc] = -(bVar2 == pbVar4[0xc]);
            auVar23[0xd] = -(bVar2 == pbVar4[0xd]);
            auVar23[0xe] = -(bVar2 == pbVar4[0xe]);
            auVar23[0xf] = -(bVar2 == pbVar4[0xf]);
            uVar5 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar23[0xf] >> 7) << 0xf;
            if (uVar5 != 0) {
              iVar17 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> iVar17 & 1) == 0; iVar17 = iVar17 + 1) {
                }
              }
              if (iVar17 < (int)uVar14) {
                puVar7 = (uint *)(pbVar4 + ((longlong)iVar17 + 4) * 4);
              }
            }
            bVar21 = puVar7 == (uint *)0x0;
          }
          else {
            if (uVar14 < 0x31) {
              if (pbVar4[uVar16] != 0) {
                puVar7 = (uint *)(pbVar4 + ((ulonglong)pbVar4[uVar16] + 0x3f) * 4);
                goto LAB_14ff5da5c;
              }
              break;
            }
            bVar21 = *(int *)(pbVar4 + uVar16 * 4) == 0;
            puVar7 = (uint *)(pbVar4 + uVar16 * 4);
          }
          if (bVar21) break;
        }
LAB_14ff5da5c:
        uVar14 = *puVar7;
        iVar6 = iVar6 + 1;
        iVar17 = (int)uVar20;
        if ((int)uVar14 < 0) goto LAB_14ff5db37;
        lVar15 = lVar15 + 1;
        piVar10 = (int *)((ulonglong)(ushort)uVar14 * 0x20 +
                         *(longlong *)(puVar19 + ((longlong)(int)uVar14 >> 0x10) * 2));
        iVar3 = *piVar10;
        lVar12 = (longlong)piVar10[3];
        if (lVar15 < lVar12) {
          puVar11 = param_1 + lVar15;
          do {
            if (((param_2 <= iVar6) || (puVar9 <= puVar13 + (longlong)iVar6 + (longlong)iVar3)) ||
               (*puVar11 != puVar11[(longlong)(puVar13 + ((longlong)iVar3 - (longlong)param_1))])) {
              uVar20 = (ulonglong)uVar14;
              goto LAB_14ff5db0f;
            }
            iVar6 = iVar6 + 1;
            lVar15 = lVar15 + 1;
            puVar11 = puVar11 + 1;
          } while (lVar15 < lVar12);
        }
        uVar20 = (ulonglong)uVar14;
      } while (iVar6 < param_2);
    }
LAB_14ff5dadb:
    uVar14 = (uint)uVar20;
    lVar15 = (uVar20 & 0xffff) * 0x20;
    iVar17 = *(int *)(*(longlong *)(puVar19 + ((longlong)(int)uVar14 >> 0x10) * 2) + 4 + lVar15);
    puVar13 = puVar13 + *(int *)(*(longlong *)(puVar19 + ((longlong)(int)uVar14 >> 0x10) * 2) +
                                lVar15);
  }
LAB_14ff5db6e:
  param_3->length = iVar6;
  param_3->node = uVar14;
  param_3->parent = iVar17;
  param_3->ptr = puVar13;
  return true;
LAB_14ff5db0f:
  uVar14 = (uint)uVar20;
  puVar13 = puVar13 + *(int *)(*(longlong *)(puVar19 + ((uVar20 & 0xffffffff) >> 0x10) * 2) +
                              (uVar20 & 0xffff) * 0x20);
  goto LAB_14ff5db6e;
}

// LookupMatches @ 14ff5dba0

void __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrieObject::LookupMatches
          (SuffixTrieObject *this,uchar *param_1,int param_2,
          vector<oo2net::SuffixTrieMatch> *param_3)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  ulong64 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  SuffixTrieMatch *pSVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  LookupResult local_40;
  
  bVar6 = Lookup(this,param_1,param_2,&local_40);
  if (bVar6) {
    puVar3 = this->m_ubuf;
    vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::push_back
              ((vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
                *)param_3);
    lVar14 = *(longlong *)param_3 + *(longlong *)&param_3->field_0x10 * 0x18;
    *(int *)(lVar14 + -0x10) = local_40.length;
    *(uchar **)(lVar14 + -0x18) = local_40.ptr;
    if (*(longlong *)&(this->vsuffixindices).field_0x10 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(longlong *)&this->vsuffixindices;
    }
    uVar7 = 0;
    if (local_40.node != 0) {
      if (local_40.node < 0) {
        uVar7 = 1;
      }
      else {
        uVar7 = *(undefined4 *)(lVar11 + 4 + (longlong)local_40.node * 8);
      }
    }
    *(undefined4 *)(lVar14 + -0xc) = uVar7;
    iVar5 = local_40.parent;
    if (*(longlong *)&(this->node_chunks).field_0x10 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = *(longlong *)&this->node_chunks;
    }
    while (iVar5 != 0) {
      uVar4 = *(ulong64 *)&param_3->field_0x10;
      uVar15 = (ulonglong)iVar5;
      piVar12 = (int *)((uVar15 & 0xffff) * 0x20 +
                       *(longlong *)(lVar14 + ((longlong)uVar15 >> 0x10) * 8));
      iVar1 = piVar12[3];
      iVar2 = *piVar12;
      uVar13 = uVar4 + 1;
      if (*(ulonglong *)&param_3->field_0x8 < uVar13) {
        pSVar8 = vector_storage<oo2net::SuffixTrieMatch>::makefit1
                           ((vector_storage<oo2net::SuffixTrieMatch> *)param_3,uVar13,uVar4);
        puVar10 = (undefined8 *)(*(longlong *)param_3 + uVar4 * 0x18);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        *(ulonglong *)&param_3->field_0x10 = uVar13;
        if (pSVar8 != (SuffixTrieMatch *)0x0) {
          (*g_fp_OodleNet_Plugin_Free)(pSVar8);
LAB_14ff5dd00:
          uVar13 = *(ulonglong *)&param_3->field_0x10;
        }
      }
      else {
        *(ulonglong *)&param_3->field_0x10 = uVar13;
        puVar10 = (undefined8 *)(*(longlong *)param_3 + uVar4 * 0x18);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          goto LAB_14ff5dd00;
        }
      }
      lVar11 = *(longlong *)param_3;
      *(uchar **)(lVar11 + -0x18 + uVar13 * 0x18) = puVar3 + iVar2;
      lVar11 = lVar11 + uVar13 * 0x18;
      *(int *)(lVar11 + -0x10) = iVar1;
      if (*(longlong *)&(this->vsuffixindices).field_0x10 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)&this->vsuffixindices;
      }
      if (iVar5 == 0) {
        uVar7 = 0;
      }
      else if (iVar5 < 0) {
        uVar7 = 1;
      }
      else {
        uVar7 = *(undefined4 *)(lVar9 + 4 + uVar15 * 8);
      }
      *(undefined4 *)(lVar11 + -0xc) = uVar7;
      iVar5 = piVar12[1];
    }
    lVar14 = (longlong)(*(int *)&param_3->field_0x10 + -1);
    if (0 < lVar14) {
      lVar11 = lVar14 * 0x18;
      do {
        lVar11 = lVar11 + -0x18;
        piVar12 = (int *)(*(longlong *)param_3 + 0x24 + lVar11);
        *piVar12 = *piVar12 - *(int *)(*(longlong *)param_3 + 0xc + lVar11);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  return;
}

// LookupSuffix @ 14ff5dde0

bool __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrieObject::LookupSuffix
          (SuffixTrieObject *this,uchar *param_1,int param_2,SuffixTrieMatch *param_3,
          BitFlags256 *param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  LookupResult local_28;
  
  bVar3 = Lookup(this,param_1,param_2,&local_28);
  if (!bVar3) {
    return false;
  }
  if (*(longlong *)&(this->node_chunks).field_0x10 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)&this->node_chunks;
  }
  uVar6 = (ulonglong)local_28.node;
  param_3->ptr = local_28.ptr;
  param_3->length = local_28.length;
  if (local_28.node < 1) {
    param_3->count = 1;
    param_3->suffix_index =
         *(int *)(*(longlong *)&this->vleaf_to_suffix + (longlong)-local_28.node * 4);
    if (param_4 == (BitFlags256 *)0x0) {
      return true;
    }
    param_4->words[0] = 0;
    param_4->words[1] = 0;
    param_4->words[2] = 0;
    param_4->words[3] = 0;
    param_4->words[4] = 0;
    param_4->words[5] = 0;
    param_4->words[6] = 0;
    param_4->words[7] = 0;
    if (this->m_ubuf + this->m_ubufsize <= local_28.ptr + local_28.length) {
      return true;
    }
    bVar1 = local_28.ptr[local_28.length];
  }
  else {
    lVar8 = *(longlong *)&this->vsuffixindices;
    param_3->count = *(int *)(lVar8 + 4 + uVar6 * 8);
    param_3->suffix_index = *(int *)(lVar8 + uVar6 * 8);
    if (param_4 == (BitFlags256 *)0x0) {
      return true;
    }
    param_4->words[0] = 0;
    param_4->words[1] = 0;
    param_4->words[2] = 0;
    param_4->words[3] = 0;
    param_4->words[4] = 0;
    param_4->words[5] = 0;
    param_4->words[6] = 0;
    param_4->words[7] = 0;
    if (this->m_ubuf + this->m_ubufsize <= local_28.ptr + local_28.length) {
      return true;
    }
    lVar7 = (uVar6 & 0xffff) * 0x20 + *(longlong *)(lVar7 + ((longlong)uVar6 >> 0x10) * 8);
    if (*(int *)(lVar7 + 0xc) == local_28.length) {
      bVar1 = *(byte *)(lVar7 + 0x1c);
      uVar6 = (ulonglong)bVar1;
      uVar4 = bVar1 + 1;
      if (uVar4 < 4) {
        lVar8 = (longlong)(int)(uint)bVar1;
        pbVar9 = (byte *)(lVar7 + 0x1d + lVar8);
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + -1;
          bVar2 = bVar1 >> 5;
          lVar8 = lVar8 + -1;
          param_4->words[bVar2] = param_4->words[bVar2] | 1 << (bVar1 & 0x1f);
        } while (-1 < lVar8);
        return true;
      }
      lVar7 = *(longlong *)(lVar7 + 0x10);
      if (uVar4 < 9) {
        do {
          pbVar9 = (byte *)(uVar6 + lVar7);
          bVar1 = *pbVar9 >> 5;
          uVar6 = uVar6 - 1;
          param_4->words[bVar1] = param_4->words[bVar1] | 1 << (*pbVar9 & 0x1f);
        } while (-1 < (longlong)uVar6);
        return true;
      }
      if (uVar4 < 0x11) {
        do {
          pbVar9 = (byte *)(uVar6 + lVar7);
          bVar1 = *pbVar9 >> 5;
          uVar6 = uVar6 - 1;
          param_4->words[bVar1] = param_4->words[bVar1] | 1 << (*pbVar9 & 0x1f);
        } while (-1 < (longlong)uVar6);
        return true;
      }
      lVar8 = 0xff;
      if (uVar4 < 0x31) {
        do {
          if (*(char *)(lVar8 + lVar7) != '\0') {
            uVar5 = (uint)lVar8;
            uVar4 = uVar5;
            if ((int)uVar5 < 0) {
              uVar4 = uVar5 + 0x1f;
            }
            param_4->words[(int)uVar4 >> 5] = param_4->words[(int)uVar4 >> 5] | 1 << (uVar5 & 0x1f);
          }
          lVar8 = lVar8 + -1;
        } while (-1 < lVar8);
        return true;
      }
      do {
        if (*(int *)(lVar7 + lVar8 * 4) != 0) {
          uVar5 = (uint)lVar8;
          uVar4 = uVar5;
          if ((int)uVar5 < 0) {
            uVar4 = uVar5 + 0x1f;
          }
          param_4->words[(int)uVar4 >> 5] = param_4->words[(int)uVar4 >> 5] | 1 << (uVar5 & 0x1f);
        }
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
      return true;
    }
    bVar1 = local_28.ptr[local_28.length];
  }
  param_4->words[bVar1 >> 5] = param_4->words[bVar1 >> 5] | 1 << (bVar1 & 0x1f);
  return true;
}

// OodleFree @ 14ff5e080

void __cdecl oo2net::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff5e080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// OodleFreeSized @ 14ff5e090

void __cdecl oo2net::OodleFreeSized(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff5e090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// OodleJob_Wait @ 14ff5e0a0

void __cdecl oo2net::OodleJob_Wait(ulong64 param_1,void *param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff5e0a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_WaitJob)(param_1,param_2);
    return;
  }
  return;
}

// OodleMalloc @ 14ff5e0c0

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

// OodleMallocAligned @ 14ff5e110

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

// ProcessChildCount @ 14ff5e160

int __cdecl
oo2net::SuffixTrieForMatcher::SuffixTrieObject::ProcessChildCount
          (int *param_1,int *param_2,SuffixIndex *param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 < 0) {
    return 1;
  }
  iVar1 = param_3[param_4].count;
  if (*param_2 < iVar1) {
    *param_2 = iVar1;
    *param_1 = param_4;
  }
  return iVar1;
}

// ProcessChunk @ 14ff5e1a0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

int __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::ProcessChunk
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
  rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *prVar9;
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
  if (local_a8 <= iVar7) goto LAB_14ff5ef69;
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
    goto LAB_14ff5ef69;
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
LAB_14ff5e581:
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
      if (iVar34 - iVar23 <= iVar14) goto LAB_14ff5ef0a;
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
              pCVar19 = rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::Alloc
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
            goto LAB_14ff5ebd5;
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
          if (pCVar20 != (Children *)0x0) goto LAB_14ff5e86a;
          if (uVar27 != 8) {
            pCVar25[(longlong)(int)(uint)bVar4 + 1] = CVar3;
            *(int *)(pCVar25 + (longlong)(int)(uint)bVar4 * 4 + 0xc) = -this->pos;
            goto LAB_14ff5ebd5;
          }
          pCVar16 = rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::Alloc
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
          goto LAB_14ff5ebdb;
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
          if (pCVar20 != (Children *)0x0) goto LAB_14ff5e86a;
          if (uVar27 != 0x10) {
            pCVar25[(ulonglong)bVar4 + 1] = CVar3;
            *(int *)(pCVar25 + (ulonglong)bVar4 * 4 + 0x14) = -this->pos;
            goto LAB_14ff5ebd5;
          }
          pCVar17 = rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::Alloc
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
LAB_14ff5ebdb:
          if (0 < (int)local_94) {
            uVar22 = local_94;
          }
          this->node_to_update_follow = uVar22;
          puVar39 = puVar8 + prVar9[local_68].m_ptr[uVar38].pos;
          goto LAB_14ff5ec19;
        }
        if (0x30 < uVar27) {
          pCVar20 = pCVar25 + uVar24 * 4;
          if (*(uint *)pCVar20 != 0) goto LAB_14ff5e86a;
          *(int *)pCVar20 = -this->pos;
LAB_14ff5ebd5:
          pcVar26 = (char *)((longlong)&pSVar33[uVar38].field4_0x10 + 0xc);
          *pcVar26 = *pcVar26 + '\x01';
          goto LAB_14ff5ebdb;
        }
        if (pCVar25[uVar24] == (Children)0x0) {
          if (uVar27 == 0x30) {
            pCVar20 = (Children *)
                      rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::Alloc
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
            goto LAB_14ff5ebdb;
          }
          pCVar25[uVar24] = (Children)((char)uVar27 + '\x01');
          *(int *)(pCVar25 + (uVar28 & 0xff) * 4 + 0x100) = -this->pos;
          goto LAB_14ff5ebd5;
        }
        pCVar20 = pCVar25 + (ulonglong)(byte)pCVar25[uVar24] * 4 + 0xfc;
      }
LAB_14ff5e86a:
      uVar22 = *(uint *)pCVar20;
      lVar36 = (longlong)(int)uVar22;
      iVar15 = iVar14 + 1;
      if (-1 < (int)uVar22) goto code_r0x00014ff5e889;
      *(int *)pCVar20 = this->nextnode;
      goto LAB_14ff5eac4;
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
LAB_14ff5e550:
            if (lVar29 != lVar40) {
              if (*(char *)(lVar29 + (longlong)puVar37) ==
                  ((char *)(lVar29 + (longlong)puVar37))
                  [(longlong)
                   (puVar8 + ((longlong)prVar9[(longlong)uVar24 >> 0xe].m_ptr[uVar22 & 0x3fff].pos -
                             (longlong)puVar37))]) goto code_r0x00014ff5e566;
              *puVar1 = this->nextnode;
LAB_14ff5ea70:
              puVar39 = puVar8 + prVar9[uVar22 >> 0xe].m_ptr[uVar22 & 0x3fff].pos;
              prVar9[uVar22 >> 0xe].m_ptr[uVar22 & 0x3fff].parent = this->nextnode;
              goto LAB_14ff5eb07;
            }
            lVar36 = (longlong)(int)uVar22;
            goto LAB_14ff5edb2;
          }
LAB_14ff5e570:
          uVar24 = (ulonglong)uVar22;
        }
        goto LAB_14ff5e581;
      }
      *puVar1 = this->nextnode;
LAB_14ff5eac4:
      puVar39 = puVar8 + -(longlong)(int)uVar22;
      iVar14 = iVar35;
      if (iVar35 < iVar15) {
        iVar14 = iVar15;
      }
      pcVar26 = (char *)((longlong)iVar14 + (longlong)puVar37);
      while( true ) {
        if ((longlong)pcVar26 - (longlong)puVar37 == lVar40) goto LAB_14ff5ef0a;
        if (*pcVar26 != pcVar26[(longlong)puVar39 - (longlong)puVar37]) break;
        iVar14 = iVar14 + 1;
        pcVar26 = pcVar26 + 1;
      }
LAB_14ff5eb07:
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
LAB_14ff5ec19:
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
          if (0x20 < iVar23) break;
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
        iVar35 = 0x20;
        while (local_res8 != 0) {
          pSVar33 = prVar9[(longlong)(int)local_res8 >> 0xe].m_ptr + (local_res8 & 0x3fff);
          iVar14 = pSVar33->pos;
          if ((iVar23 < iVar14) && (lVar40 < param_3)) {
            iVar23 = this->pos;
            if (pSVar33->depth < 3) goto LAB_14ff5ed16;
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
LAB_14ff5ed16:
          pUVar21[lVar40].length = 0;
        }
      }
    }
    iVar23 = this->pos + 1;
    this->pos = iVar23;
  } while (iVar23 < local_a8);
  goto LAB_14ff5ee4d;
code_r0x00014ff5e566:
  iVar14 = iVar14 + 1;
  lVar29 = lVar29 + 1;
  if (lVar36 <= lVar29) goto LAB_14ff5e570;
  goto LAB_14ff5e550;
code_r0x00014ff5e889:
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
        if (lVar18 == lVar40) goto LAB_14ff5edb2;
        if (*(char *)(lVar18 + (longlong)puVar37) !=
            ((char *)(lVar18 + (longlong)puVar37))
            [(longlong)
             (puVar8 + ((longlong)prVar9[lVar36 >> 0xe].m_ptr[uVar22 & 0x3fff].pos -
                       (longlong)puVar37))]) {
          *(int *)pCVar20 = this->nextnode;
          goto LAB_14ff5ea70;
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
  goto LAB_14ff5e581;
LAB_14ff5ef0a:
  local_res8 = uVar22;
  lVar36 = (longlong)(int)local_res8;
  if ((int)local_res8 < 0) {
    iVar34 = -local_res8;
  }
  else {
LAB_14ff5edb2:
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
LAB_14ff5ee4d:
  OVar31.handle = local_80.handle;
  if (bVar12) {
    if (local_80.handle != 0) {
      (*g_fp_OodleNet_Plugin_WaitJob)(local_80.handle,this->jobifyUserPtr);
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
                                  "oo2net::OodleJob::~OodleJob","handle == 0"), iVar34 != 0)) {
    pcVar10 = (code *)swi(3);
    iVar34 = (*pcVar10)();
    return iVar34;
  }
  iVar23 = this->pos;
LAB_14ff5ef69:
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

// RR_GET16_NATIVE @ 14ff5efe0

ushort __cdecl oo2net::RR_GET16_NATIVE(void *param_1)

{
  return *(ushort *)param_1;
}

// Release @ 14ff5f000

void __thiscall
oo2net::rrArenaArray<int>::Release
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
    (*g_fp_OodleNet_Plugin_Free)(this->m_ptr);
    this->m_ptr = (int *)0x0;
  }
  return;
}

// Release @ 14ff5f080

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_>::Release
          (rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_> *this,
          rrArenaAllocator *param_1,long64 param_2,int param_3)

{
  if (this->m_ptr != (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)0x0) {
    if ((param_1 != (rrArenaAllocator *)0x0) && (this->m_alloc != (void *)0x0)) {
      if (param_1->m_unorderedStart != 0) {
        rrArenaAllocator::Free(param_1,this->m_alloc,param_2 * 0x10 + (longlong)param_3);
      }
      this->m_alloc = (void *)0x0;
      this->m_ptr = (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)0x0;
      return;
    }
    (*g_fp_OodleNet_Plugin_Free)(this->m_ptr);
    this->m_ptr = (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *)0x0;
  }
  return;
}

// Release @ 14ff5f100

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>::Release
          (rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> *this,rrArenaAllocator *param_1,
          long64 param_2,int param_3)

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
    (*g_fp_OodleNet_Plugin_Free)(this->m_ptr);
    this->m_ptr = (SuffixNode *)0x0;
  }
  return;
}

// Release @ 14ff5f180

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::Release(SuffixTrie2MatchFinder *this)

{
  rrArenaAllocator *this_00;
  
  this_00 = this->scratch_arena;
  (**(code **)this->_padding_)(this,0);
  if (this_00 != (rrArenaAllocator *)0x0) {
    rrArenaAllocator::Free(this_00,this,0x2d8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014ff5f1d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(this);
  return;
}

// ReportMaxLenMatch @ 14ff5f1e0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::ReportMaxLenMatch
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

// S32_checkA @ 14ff5f220

int __cdecl oo2net::S32_checkA(long64 param_1)

{
  return (int)param_1;
}

// SuffixTrieMatcher_Create @ 14ff5f240

SuffixTrieMatcher * __cdecl
oo2net::SuffixTrieMatcher_Create(uchar *param_1,long64 param_2,SuffixTrieSortData *param_3)

{
  SuffixTrieObject *this;
  
  this = (*g_fp_OodleNet_Plugin_MallocAligned)(0xf0,0x10);
  if (this == (SuffixTrieObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0xf0);
  }
  memset(this,0,0xf0);
  *(undefined8 *)&(this->vfirstbytes).field_0x8 = 0;
  *(undefined8 *)&(this->vfirstbytes).field_0x10 = 0;
  (this->ChildrenSparse1_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenSparse1_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenSparse1_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenSparse1_pool).m_next = 0x6657;
  (this->ChildrenSparse2_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenSparse2_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenSparse2_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenSparse2_pool).m_next = 0x332b;
  (this->ChildrenSparseI_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenSparseI_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenSparseI_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenSparseI_pool).m_next = 0x923;
  (this->ChildrenFull256_pool).m_chunkList = (Chunk *)0x0;
  (this->ChildrenFull256_pool).m_freeList = (FreeList *)0x0;
  (this->ChildrenFull256_pool).m_scratch = (rrArenaAllocator *)0x0;
  (this->ChildrenFull256_pool).m_next = 0x3ff;
  *(undefined8 *)&this->node_chunks = 0;
  *(undefined8 *)&(this->node_chunks).field_0x8 = 0;
  *(undefined8 *)&(this->node_chunks).field_0x10 = 0;
  *(undefined8 *)&this->vsuffixindices = 0;
  *(undefined8 *)&(this->vsuffixindices).field_0x8 = 0;
  *(undefined8 *)&(this->vsuffixindices).field_0x10 = 0;
  *(undefined8 *)&this->vleaf_to_suffix = 0;
  *(undefined8 *)&(this->vleaf_to_suffix).field_0x8 = 0;
  *(undefined8 *)&(this->vleaf_to_suffix).field_0x10 = 0;
  SuffixTrieForMatcher::SuffixTrieObject::Build(this,param_1,(int)param_2,param_3);
  return (SuffixTrieMatcher *)this;
}

// SuffixTrieMatcher_Destroy @ 14ff5f370

void __cdecl oo2net::SuffixTrieMatcher_Destroy(SuffixTrieMatcher *param_1)

{
  SuffixTrieForMatcher::SuffixTrieObject::~SuffixTrieObject((SuffixTrieObject *)param_1);
                    /* WARNING: Could not recover jumptable at 0x00014ff5f386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleNet_Plugin_Free)(param_1);
  return;
}

// SuffixTrieMatcher_LookupMatches @ 14ff5f3a0

int __cdecl
oo2net::SuffixTrieMatcher_LookupMatches
          (SuffixTrieMatcher *param_1,uchar *param_2,int param_3,
          vector<oo2net::SuffixTrieMatch> *param_4)

{
  *(undefined8 *)&param_4->field_0x10 = 0;
  SuffixTrieForMatcher::SuffixTrieObject::LookupMatches
            ((SuffixTrieObject *)param_1,param_2,param_3,param_4);
  return *(int *)&param_4->field_0x10;
}

// SuffixTrieMatcher_LookupSuffix @ 14ff5f3d0

bool __cdecl
oo2net::SuffixTrieMatcher_LookupSuffix
          (SuffixTrieMatcher *param_1,uchar *param_2,int param_3,SuffixTrieMatch *param_4,
          BitFlags256 *param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  LookupResult LStack_28;
  
  bVar3 = SuffixTrieForMatcher::SuffixTrieObject::Lookup
                    ((SuffixTrieObject *)param_1,param_2,param_3,&LStack_28);
  if (!bVar3) {
    return false;
  }
  if (*(longlong *)&param_1->field_0xb8 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)&param_1->field_0xa8;
  }
  uVar6 = (ulonglong)LStack_28.node;
  param_4->ptr = LStack_28.ptr;
  param_4->length = LStack_28.length;
  if (LStack_28.node < 1) {
    param_4->count = 1;
    param_4->suffix_index =
         *(int *)(*(longlong *)&param_1->field_0xd8 + (longlong)-LStack_28.node * 4);
    if (param_5 == (BitFlags256 *)0x0) {
      return true;
    }
    param_5->words[0] = 0;
    param_5->words[1] = 0;
    param_5->words[2] = 0;
    param_5->words[3] = 0;
    param_5->words[4] = 0;
    param_5->words[5] = 0;
    param_5->words[6] = 0;
    param_5->words[7] = 0;
    if ((byte *)((longlong)*(int *)&param_1->field_0x8 + *(longlong *)param_1) <=
        LStack_28.ptr + LStack_28.length) {
      return true;
    }
    bVar1 = LStack_28.ptr[LStack_28.length];
  }
  else {
    lVar8 = *(longlong *)&param_1->field_0xc0;
    param_4->count = *(int *)(lVar8 + 4 + uVar6 * 8);
    param_4->suffix_index = *(int *)(lVar8 + uVar6 * 8);
    if (param_5 == (BitFlags256 *)0x0) {
      return true;
    }
    param_5->words[0] = 0;
    param_5->words[1] = 0;
    param_5->words[2] = 0;
    param_5->words[3] = 0;
    param_5->words[4] = 0;
    param_5->words[5] = 0;
    param_5->words[6] = 0;
    param_5->words[7] = 0;
    if ((byte *)((longlong)*(int *)&param_1->field_0x8 + *(longlong *)param_1) <=
        LStack_28.ptr + LStack_28.length) {
      return true;
    }
    lVar7 = (uVar6 & 0xffff) * 0x20 + *(longlong *)(lVar7 + ((longlong)uVar6 >> 0x10) * 8);
    if (*(int *)(lVar7 + 0xc) == LStack_28.length) {
      bVar1 = *(byte *)(lVar7 + 0x1c);
      uVar6 = (ulonglong)bVar1;
      uVar4 = bVar1 + 1;
      if (uVar4 < 4) {
        lVar8 = (longlong)(int)(uint)bVar1;
        pbVar9 = (byte *)(lVar7 + 0x1d + lVar8);
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + -1;
          bVar2 = bVar1 >> 5;
          lVar8 = lVar8 + -1;
          param_5->words[bVar2] = param_5->words[bVar2] | 1 << (bVar1 & 0x1f);
        } while (-1 < lVar8);
        return true;
      }
      lVar7 = *(longlong *)(lVar7 + 0x10);
      if (uVar4 < 9) {
        do {
          pbVar9 = (byte *)(uVar6 + lVar7);
          bVar1 = *pbVar9 >> 5;
          uVar6 = uVar6 - 1;
          param_5->words[bVar1] = param_5->words[bVar1] | 1 << (*pbVar9 & 0x1f);
        } while (-1 < (longlong)uVar6);
        return true;
      }
      if (uVar4 < 0x11) {
        do {
          pbVar9 = (byte *)(uVar6 + lVar7);
          bVar1 = *pbVar9 >> 5;
          uVar6 = uVar6 - 1;
          param_5->words[bVar1] = param_5->words[bVar1] | 1 << (*pbVar9 & 0x1f);
        } while (-1 < (longlong)uVar6);
        return true;
      }
      lVar8 = 0xff;
      if (uVar4 < 0x31) {
        do {
          if (*(char *)(lVar8 + lVar7) != '\0') {
            uVar5 = (uint)lVar8;
            uVar4 = uVar5;
            if ((int)uVar5 < 0) {
              uVar4 = uVar5 + 0x1f;
            }
            param_5->words[(int)uVar4 >> 5] = param_5->words[(int)uVar4 >> 5] | 1 << (uVar5 & 0x1f);
          }
          lVar8 = lVar8 + -1;
        } while (-1 < lVar8);
        return true;
      }
      do {
        if (*(int *)(lVar7 + lVar8 * 4) != 0) {
          uVar5 = (uint)lVar8;
          uVar4 = uVar5;
          if ((int)uVar5 < 0) {
            uVar4 = uVar5 + 0x1f;
          }
          param_5->words[(int)uVar4 >> 5] = param_5->words[(int)uVar4 >> 5] | 1 << (uVar5 & 0x1f);
        }
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
      return true;
    }
    bVar1 = LStack_28.ptr[LStack_28.length];
  }
  param_5->words[bVar1 >> 5] = param_5->words[bVar1 >> 5] | 1 << (bVar1 & 0x1f);
  return true;
}

// Zero @ 14ff5f3e0

void __thiscall oo2net::rrArenaArray<int>::Zero(rrArenaArray<int> *this,long64 param_1)

{
  memset(this->m_ptr,0,param_1 * 4);
  return;
}

// Zero @ 14ff5f400

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_>::Zero
          (rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_> *this,
          long64 param_1)

{
  memset(this->m_ptr,0,param_1 << 4);
  return;
}

// at @ 14ff5f420

int * __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::at
          (vector_flex<int,oo2net::vector_storage<int>_> *this,ulong64 param_1)

{
  return (int *)(*(longlong *)this + param_1 * 4);
}

// at @ 14ff5f430

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::at(vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
     *this,ulong64 param_1)

{
  return (SuffixNode **)(*(longlong *)this + param_1 * 8);
}

// at @ 14ff5f440

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::at(vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
     *this,ulong64 param_1)

{
  return (SuffixNode **)(*(longlong *)this + param_1 * 8);
}

// at @ 14ff5f450

BitFlags256 * __thiscall
oo2net::vector_flex<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_>::at
          (vector_flex<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_> *this,
          ulong64 param_1)

{
  return (BitFlags256 *)(param_1 * 0x20 + *(longlong *)this);
}

// at @ 14ff5f470

SuffixIndex * __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::at(vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
     *this,ulong64 param_1)

{
  return (SuffixIndex *)(*(longlong *)this + param_1 * 8);
}

// at @ 14ff5f480

SuffixIndex * __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::at(vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
     *this,ulong64 param_1)

{
  return (SuffixIndex *)(*(longlong *)this + param_1 * 8);
}

// at @ 14ff5f490

UnpackedMatchPair * __thiscall
oo2net::vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
at(vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_> *this,
  ulong64 param_1)

{
  return (UnpackedMatchPair *)(*(longlong *)this + param_1 * 8);
}

// back @ 14ff5f4a0

int * __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::back
          (vector_flex<int,oo2net::vector_storage<int>_> *this)

{
  return (int *)(*(longlong *)this + *(longlong *)&this->field_0x10 * 4 + -4);
}

// back @ 14ff5f4c0

SuffixTrieMatch * __thiscall
oo2net::vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::back
          (vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this)

{
  return (SuffixTrieMatch *)(*(longlong *)this + *(longlong *)&this->field_0x10 * 0x18 + -0x18);
}

// begin @ 14ff5f4e0

int * __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::begin
          (vector_base<int,oo2net::vector_storage<int>_> *this)

{
  return (int *)this->_padding_;
}

// begin @ 14ff5f4f0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::begin(vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
        *this)

{
  return (SuffixNode **)this->_padding_;
}

// begin @ 14ff5f500

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::begin(vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
        *this)

{
  return (SuffixNode **)this->_padding_;
}

// begin @ 14ff5f510

BitFlags256 * __thiscall
oo2net::vector_base<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_>::begin
          (vector_base<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_> *this)

{
  return (BitFlags256 *)this->_padding_;
}

// begin @ 14ff5f520

SuffixIndex * __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::begin(vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
        *this)

{
  return (SuffixIndex *)this->_padding_;
}

// begin @ 14ff5f530

SuffixIndex * __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::begin(vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
        *this)

{
  return (SuffixIndex *)this->_padding_;
}

// begin @ 14ff5f540

UnpackedMatchPair * __thiscall
oo2net::vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
begin(vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
      *this)

{
  return (UnpackedMatchPair *)this->_padding_;
}

// begin @ 14ff5f550

int * __thiscall oo2net::vector_storage<int>::begin(vector_storage<int> *this)

{
  return this->m_begin;
}

// begin @ 14ff5f560

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::begin
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this)

{
  return this->m_begin;
}

// begin @ 14ff5f570

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::begin
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this)

{
  return this->m_begin;
}

// begin @ 14ff5f580

BitFlags256 * __thiscall
oo2net::vector_storage<oo2net::BitFlags256>::begin(vector_storage<oo2net::BitFlags256> *this)

{
  return this->m_begin;
}

// begin @ 14ff5f590

SuffixIndex * __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::begin
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this)

{
  return this->m_begin;
}

// begin @ 14ff5f5a0

SuffixIndex * __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::begin
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this)

{
  return this->m_begin;
}

// begin @ 14ff5f5b0

UnpackedMatchPair * __thiscall
oo2net::vector_storage<oo2net::UnpackedMatchPair>::begin
          (vector_storage<oo2net::UnpackedMatchPair> *this)

{
  return this->m_begin;
}

// capacity @ 14ff5f5c0

ulong64 __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::capacity(vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
           *this)

{
  return this->_padding_;
}

// capacity @ 14ff5f5d0

ulong64 __thiscall
oo2net::vector_base<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_>::capacity
          (vector_base<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_> *this)

{
  return this->_padding_;
}

// capacity @ 14ff5f5e0

ulong64 __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::capacity(vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
           *this)

{
  return this->_padding_;
}

// capacity @ 14ff5f5f0

ulong64 __thiscall
oo2net::vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::
capacity(vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_> *this
        )

{
  return this->_padding_;
}

// capacity @ 14ff5f600

ulong64 __thiscall
oo2net::vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
capacity(vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
         *this)

{
  return this->_padding_;
}

// capacity @ 14ff5f610

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

ulong64 __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::capacity
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this)

{
  return this->m_capacity;
}

// capacity @ 14ff5f620

ulong64 __thiscall
oo2net::vector_storage<oo2net::BitFlags256>::capacity(vector_storage<oo2net::BitFlags256> *this)

{
  return this->m_capacity;
}

// capacity @ 14ff5f630

ulong64 __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::capacity
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this)

{
  return this->m_capacity;
}

// capacity @ 14ff5f640

ulong64 __thiscall
oo2net::vector_storage<oo2net::SuffixTrieMatch>::capacity
          (vector_storage<oo2net::SuffixTrieMatch> *this)

{
  return this->m_capacity;
}

// capacity @ 14ff5f650

ulong64 __thiscall
oo2net::vector_storage<oo2net::UnpackedMatchPair>::capacity
          (vector_storage<oo2net::UnpackedMatchPair> *this)

{
  return this->m_capacity;
}

// clear @ 14ff5f660

void __thiscall
oo2net::vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::clear
          (vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}

// clear @ 14ff5f670

void __thiscall
oo2net::vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
clear(vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
      *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}

// data @ 14ff5f680

int * __thiscall oo2net::rrArenaArray<int>::data(rrArenaArray<int> *this)

{
  return this->m_ptr;
}

// data @ 14ff5f690

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode> * __thiscall
oo2net::rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_>::data
          (rrArenaArray<oo2net::rrArenaArray<oo2net::SuffixTrieForMatcher::SuffixNode>_> *this)

{
  return this->m_ptr;
}

// data @ 14ff5f6a0

int * __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::data
          (vector_flex<int,oo2net::vector_storage<int>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (int *)0x0;
  }
  return *(int **)this;
}

// data @ 14ff5f6c0

int * __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::data
          (vector_flex<int,oo2net::vector_storage<int>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (int *)0x0;
  }
  return *(int **)this;
}

// data @ 14ff5f6e0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::data(vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
       *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (SuffixNode **)0x0;
  }
  return *(SuffixNode ***)this;
}

// data @ 14ff5f700

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::data(vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
       *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (SuffixNode **)0x0;
  }
  return *(SuffixNode ***)this;
}

// data @ 14ff5f720

SuffixIndex * __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::data(vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
       *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (SuffixIndex *)0x0;
  }
  return *(SuffixIndex **)this;
}

// data @ 14ff5f740

SuffixIndex * __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::data(vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
       *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (SuffixIndex *)0x0;
  }
  return *(SuffixIndex **)this;
}

// empty @ 14ff5f760

bool __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::empty
          (vector_flex<int,oo2net::vector_storage<int>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// empty @ 14ff5f770

bool __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::empty(vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
        *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// empty @ 14ff5f780

bool __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::empty(vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
        *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// extend_copy @ 14ff5f7a0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::extend_copy(vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
              *this,SuffixNode **param_1,ulong64 param_2)

{
  SuffixNode **ppSVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  
  uVar3 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar3 + param_2) {
    ppSVar1 = vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::makefit1
                        ((vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *)this,
                         uVar3 + param_2,uVar3);
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
    if (ppSVar1 != (SuffixNode **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff5f820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(ppSVar1);
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

// extend_default @ 14ff5f880

void __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::extend_default
          (vector_base<int,oo2net::vector_storage<int>_> *this,ulong64 param_1)

{
  int *piVar1;
  ulong64 uVar2;
  
  uVar2 = param_1 + this->m_size;
  if ((ulonglong)this->_padding_ < uVar2) {
    piVar1 = vector_storage<int>::makefit1((vector_storage<int> *)this,uVar2,this->m_size);
    if (piVar1 != (int *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(piVar1);
    }
    this->m_size = this->m_size + param_1;
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// extend_default @ 14ff5f8e0

void __thiscall
oo2net::vector_base<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_>::
extend_default(vector_base<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_> *this,
              ulong64 param_1)

{
  BitFlags256 *pBVar1;
  ulong64 uVar2;
  
  uVar2 = param_1 + this->m_size;
  if ((ulonglong)this->_padding_ < uVar2) {
    pBVar1 = vector_storage<oo2net::BitFlags256>::makefit1
                       ((vector_storage<oo2net::BitFlags256> *)this,uVar2,this->m_size);
    if (pBVar1 != (BitFlags256 *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(pBVar1);
    }
    this->m_size = this->m_size + param_1;
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// extend_default @ 14ff5f940

void __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::extend_default(vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
                 *this,ulong64 param_1)

{
  SuffixIndex *pSVar1;
  ulong64 uVar2;
  
  uVar2 = param_1 + this->m_size;
  if ((ulonglong)this->_padding_ < uVar2) {
    pSVar1 = vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::makefit1
                       ((vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>
                         *)this,uVar2,this->m_size);
    if (pSVar1 != (SuffixIndex *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(pSVar1);
    }
    this->m_size = this->m_size + param_1;
    return;
  }
  this->m_size = this->m_size + param_1;
  return;
}

// init @ 14ff5f9a0

void __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::init(vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
       *this)

{
  this->m_size = 0;
  return;
}

// init @ 14ff5f9b0

void __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::init(vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
       *this)

{
  this->m_size = 0;
  return;
}

// init @ 14ff5f9c0

void __thiscall
oo2net::vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
init(vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_> *this
    )

{
  this->m_size = 0;
  return;
}

// init @ 14ff5f9d0

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::init
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this)

{
  this->m_begin = (SuffixNode **)0x0;
  this->m_capacity = 0;
  return;
}

// init @ 14ff5f9e0

void __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::init
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this)

{
  this->m_begin = (SuffixIndex *)0x0;
  this->m_capacity = 0;
  return;
}

// init @ 14ff5f9f0

void __thiscall
oo2net::vector_storage<oo2net::UnpackedMatchPair>::init
          (vector_storage<oo2net::UnpackedMatchPair> *this)

{
  this->m_begin = (UnpackedMatchPair *)0x0;
  this->m_capacity = 0;
  return;
}

// init @ 14ff5fa00

void __thiscall oo2net::BitFlags256::init(BitFlags256 *this)

{
  this->words[0] = 0;
  this->words[1] = 0;
  this->words[2] = 0;
  this->words[3] = 0;
  this->words[4] = 0;
  this->words[5] = 0;
  this->words[6] = 0;
  this->words[7] = 0;
  return;
}

// makefit1 @ 14ff5fa20

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::makefit1(vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
           *this,ulong64 param_1)

{
  SuffixNode **ppSVar1;
  
  ppSVar1 = vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::makefit1
                      ((vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *)this,param_1,
                       this->m_size);
  return ppSVar1;
}

// makefit1 @ 14ff5fa30

BitFlags256 * __thiscall
oo2net::vector_base<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_>::makefit1
          (vector_base<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_> *this,
          ulong64 param_1)

{
  BitFlags256 *pBVar1;
  
  pBVar1 = vector_storage<oo2net::BitFlags256>::makefit1
                     ((vector_storage<oo2net::BitFlags256> *)this,param_1,this->m_size);
  return pBVar1;
}

// makefit1 @ 14ff5fa40

SuffixIndex * __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::makefit1(vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
           *this,ulong64 param_1)

{
  SuffixIndex *pSVar1;
  
  pSVar1 = vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::makefit1
                     ((vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *
                      )this,param_1,this->m_size);
  return pSVar1;
}

// makefit1 @ 14ff5fa50

SuffixTrieMatch * __thiscall
oo2net::vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::
makefit1(vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_> *this
        ,ulong64 param_1)

{
  SuffixTrieMatch *pSVar1;
  
  pSVar1 = vector_storage<oo2net::SuffixTrieMatch>::makefit1
                     ((vector_storage<oo2net::SuffixTrieMatch> *)this,param_1,this->m_size);
  return pSVar1;
}

// makefit1 @ 14ff5fa60

UnpackedMatchPair * __thiscall
oo2net::vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
makefit1(vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
         *this,ulong64 param_1)

{
  UnpackedMatchPair *pUVar1;
  
  pUVar1 = vector_storage<oo2net::UnpackedMatchPair>::makefit1
                     ((vector_storage<oo2net::UnpackedMatchPair> *)this,param_1,this->m_size);
  return pUVar1;
}

// makefit1 @ 14ff5fa80

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

SuffixNode ** __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::makefit1
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this,ulong64 param_1,
          ulong64 param_2)

{
  SuffixNode **ppSVar1;
  ulonglong uVar2;
  SuffixNode **ppSVar3;
  SuffixNode **ppSVar4;
  ulonglong uVar5;
  
  ppSVar1 = this->m_begin;
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
    if (uVar5 < 0x200) goto LAB_14ff5fb03;
    uVar5 = uVar5 + 0xfff;
    uVar2 = 0x1ffffffffffffe00;
  }
  else {
    uVar5 = uVar5 + 0xffff;
    uVar2 = 0x1fffffffffffe000;
  }
  param_1 = uVar5 >> 3 & uVar2;
LAB_14ff5fb03:
  ppSVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1 * 8,0x10);
  if (ppSVar3 == (SuffixNode **)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1 * 8);
  }
  if (param_2 != 0) {
    ppSVar4 = ppSVar3;
    do {
      if (ppSVar4 != (SuffixNode **)0x0) {
        *ppSVar4 = *(SuffixNode **)(((longlong)ppSVar1 - (longlong)ppSVar3) + (longlong)ppSVar4);
      }
      ppSVar4 = ppSVar4 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = ppSVar3;
  this->m_capacity = param_1;
  return ppSVar1;
}

// makefit1 @ 14ff5fba0

BitFlags256 * __thiscall
oo2net::vector_storage<oo2net::BitFlags256>::makefit1
          (vector_storage<oo2net::BitFlags256> *this,ulong64 param_1,ulong64 param_2)

{
  undefined8 *puVar1;
  BitFlags256 *pBVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  BitFlags256 *pBVar6;
  BitFlags256 *pBVar7;
  longlong lVar8;
  
  pBVar2 = this->m_begin;
  uVar4 = this->m_capacity + 0x100000;
  uVar5 = this->m_capacity * 2;
  if (uVar4 <= uVar5) {
    uVar5 = uVar4;
  }
  if (param_1 < uVar5) {
    param_1 = uVar5;
  }
  uVar4 = param_1 * 0x20;
  if (uVar4 < 0x10001) {
    if (uVar4 < 0x200) goto LAB_14ff5fc22;
    uVar4 = uVar4 + 0xfff;
    uVar5 = 0x7ffffffffffff80;
  }
  else {
    uVar4 = uVar4 + 0xffff;
    uVar5 = 0x7fffffffffff800;
  }
  param_1 = uVar4 >> 5 & uVar5;
LAB_14ff5fc22:
  pBVar6 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1 << 5,0x10);
  if (pBVar6 == (BitFlags256 *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1 << 5);
  }
  if (param_2 != 0) {
    lVar8 = (longlong)pBVar2 - (longlong)pBVar6;
    pBVar7 = pBVar6;
    do {
      if (pBVar7 != (BitFlags256 *)0x0) {
        puVar1 = (undefined8 *)(lVar8 + (longlong)pBVar7);
        uVar3 = puVar1[1];
        *(undefined8 *)pBVar7->words = *puVar1;
        *(undefined8 *)(pBVar7->words + 2) = uVar3;
        puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)pBVar7);
        uVar3 = puVar1[1];
        *(undefined8 *)(pBVar7->words + 4) = *puVar1;
        *(undefined8 *)(pBVar7->words + 6) = uVar3;
      }
      pBVar7 = pBVar7 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = pBVar6;
  this->m_capacity = param_1;
  return pBVar2;
}

// makefit1 @ 14ff5fce0

SuffixIndex * __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::makefit1
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this,
          ulong64 param_1,ulong64 param_2)

{
  SuffixIndex *pSVar1;
  ulonglong uVar2;
  SuffixIndex *pSVar3;
  SuffixIndex *pSVar4;
  ulonglong uVar5;
  
  pSVar1 = this->m_begin;
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
    if (uVar5 < 0x200) goto LAB_14ff5fd63;
    uVar5 = uVar5 + 0xfff;
    uVar2 = 0x1ffffffffffffe00;
  }
  else {
    uVar5 = uVar5 + 0xffff;
    uVar2 = 0x1fffffffffffe000;
  }
  param_1 = uVar5 >> 3 & uVar2;
LAB_14ff5fd63:
  pSVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1 * 8,0x10);
  if (pSVar3 == (SuffixIndex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1 * 8);
  }
  if (param_2 != 0) {
    pSVar4 = pSVar3;
    do {
      if (pSVar4 != (SuffixIndex *)0x0) {
        *pSVar4 = *(SuffixIndex *)(((longlong)pSVar1 - (longlong)pSVar3) + (longlong)pSVar4);
      }
      pSVar4 = pSVar4 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = pSVar3;
  this->m_capacity = param_1;
  return pSVar1;
}

// makefit1 @ 14ff5fe00

SuffixTrieMatch * __thiscall
oo2net::vector_storage<oo2net::SuffixTrieMatch>::makefit1
          (vector_storage<oo2net::SuffixTrieMatch> *this,ulong64 param_1,ulong64 param_2)

{
  undefined8 *puVar1;
  SuffixTrieMatch *pSVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  SuffixTrieMatch *pSVar5;
  ulonglong uVar6;
  SuffixTrieMatch *pSVar7;
  longlong lVar8;
  
  pSVar2 = this->m_begin;
  uVar6 = this->m_capacity + 0x155556;
  uVar4 = this->m_capacity * 2;
  if (uVar6 <= uVar4) {
    uVar4 = uVar6;
  }
  if (param_1 < uVar4) {
    param_1 = uVar4;
  }
  uVar6 = param_1 * 0x18;
  if (uVar6 < 0x10001) {
    if (uVar6 < 0x200) goto LAB_14ff5fe8d;
    uVar6 = uVar6 + 0xfff & 0xfffffffffffff000;
  }
  else {
    uVar6 = uVar6 + 0xffff & 0xffffffffffff0000;
  }
  param_1 = uVar6 / 0x18;
LAB_14ff5fe8d:
  pSVar5 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1 * 0x18,0x10);
  if (pSVar5 == (SuffixTrieMatch *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1 * 0x18);
  }
  if (param_2 != 0) {
    lVar8 = (longlong)pSVar2 - (longlong)pSVar5;
    pSVar7 = pSVar5;
    do {
      if (pSVar7 != (SuffixTrieMatch *)0x0) {
        puVar1 = (undefined8 *)(lVar8 + (longlong)pSVar7);
        uVar3 = puVar1[1];
        pSVar7->ptr = (uchar *)*puVar1;
        pSVar7->length = (int)uVar3;
        pSVar7->count = (int)((ulonglong)uVar3 >> 0x20);
        *(undefined8 *)&pSVar7->suffix_index = *(undefined8 *)(lVar8 + 0x10 + (longlong)pSVar7);
      }
      pSVar7 = pSVar7 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = pSVar5;
  this->m_capacity = param_1;
  return pSVar2;
}

// makefit1 @ 14ff5ff40

UnpackedMatchPair * __thiscall
oo2net::vector_storage<oo2net::UnpackedMatchPair>::makefit1
          (vector_storage<oo2net::UnpackedMatchPair> *this,ulong64 param_1,ulong64 param_2)

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
    if (uVar5 < 0x200) goto LAB_14ff5ffc3;
    uVar5 = uVar5 + 0xfff;
    uVar2 = 0x1ffffffffffffe00;
  }
  else {
    uVar5 = uVar5 + 0xffff;
    uVar2 = 0x1fffffffffffe000;
  }
  param_1 = uVar5 >> 3 & uVar2;
LAB_14ff5ffc3:
  pUVar3 = (*g_fp_OodleNet_Plugin_MallocAligned)(param_1 * 8,0x10);
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

// makefit2 @ 14ff60060

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::makefit2
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this,SuffixNode **param_1,
          ulong64 param_2,ulong64 param_3)

{
  if (param_1 != (SuffixNode **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff60068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_Free)(param_1);
    return;
  }
  return;
}

// makefit2 @ 14ff60080

void __thiscall
oo2net::vector_storage<oo2net::BitFlags256>::makefit2
          (vector_storage<oo2net::BitFlags256> *this,BitFlags256 *param_1,ulong64 param_2,
          ulong64 param_3)

{
  if (param_1 != (BitFlags256 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff60088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_Free)(param_1);
    return;
  }
  return;
}

// makefit2 @ 14ff600a0

void __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::makefit2
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this,
          SuffixIndex *param_1,ulong64 param_2,ulong64 param_3)

{
  if (param_1 != (SuffixIndex *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff600a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_Free)(param_1);
    return;
  }
  return;
}

// makefit2 @ 14ff600c0

void __thiscall
oo2net::vector_storage<oo2net::SuffixTrieMatch>::makefit2
          (vector_storage<oo2net::SuffixTrieMatch> *this,SuffixTrieMatch *param_1,ulong64 param_2,
          ulong64 param_3)

{
  if (param_1 != (SuffixTrieMatch *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff600c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_Free)(param_1);
    return;
  }
  return;
}

// makefit2 @ 14ff600e0

void __thiscall
oo2net::vector_storage<oo2net::UnpackedMatchPair>::makefit2
          (vector_storage<oo2net::UnpackedMatchPair> *this,UnpackedMatchPair *param_1,
          ulong64 param_2,ulong64 param_3)

{
  if (param_1 != (UnpackedMatchPair *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff600e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleNet_Plugin_Free)(param_1);
    return;
  }
  return;
}

// memset_zero @ 14ff60100

void __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::memset_zero(vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
              *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    memset((void *)0x0,0,0);
    return;
  }
  memset(*(void **)this,0,*(longlong *)&this->field_0x10 * 8);
  return;
}

// needmakefit @ 14ff60140

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

bool __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::needmakefit
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// needmakefit @ 14ff60150

bool __thiscall
oo2net::vector_storage<oo2net::BitFlags256>::needmakefit
          (vector_storage<oo2net::BitFlags256> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// needmakefit @ 14ff60160

bool __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::needmakefit
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this,
          ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// needmakefit @ 14ff60170

bool __thiscall
oo2net::vector_storage<oo2net::SuffixTrieMatch>::needmakefit
          (vector_storage<oo2net::SuffixTrieMatch> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// needmakefit @ 14ff60180

bool __thiscall
oo2net::vector_storage<oo2net::UnpackedMatchPair>::needmakefit
          (vector_storage<oo2net::UnpackedMatchPair> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// pop_back @ 14ff60190

void __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::pop_back
          (vector_flex<int,oo2net::vector_storage<int>_> *this)

{
  *(longlong *)&this->field_0x10 = *(longlong *)&this->field_0x10 + -1;
  return;
}

// push_back @ 14ff601a0

void __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::push_back
          (vector_flex<int,oo2net::vector_storage<int>_> *this,int *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  int *piVar3;
  int *piVar4;
  
  uVar2 = *(ulong64 *)&this->field_0x10;
  uVar1 = uVar2 + 1;
  if (*(ulonglong *)&this->field_0x8 < uVar1) {
    piVar3 = vector_storage<int>::makefit1((vector_storage<int> *)this,uVar1,uVar2);
    piVar4 = (int *)(*(longlong *)this + uVar2 * 4);
    if (piVar4 != (int *)0x0) {
      *piVar4 = *param_1;
    }
    *(ulong64 *)&this->field_0x10 = uVar1;
    if (piVar3 != (int *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(piVar3);
    }
  }
  else {
    *(ulong64 *)&this->field_0x10 = uVar1;
    piVar3 = (int *)(*(longlong *)this + uVar2 * 4);
    if (piVar3 != (int *)0x0) {
      *piVar3 = *param_1;
    }
  }
  return;
}

// push_back @ 14ff60240

void __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::push_back
          (vector_flex<int,oo2net::vector_storage<int>_> *this,int *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  int *piVar3;
  int *piVar4;
  
  uVar2 = *(ulong64 *)&this->field_0x10;
  uVar1 = uVar2 + 1;
  if (*(ulonglong *)&this->field_0x8 < uVar1) {
    piVar3 = vector_storage<int>::makefit1((vector_storage<int> *)this,uVar1,uVar2);
    piVar4 = (int *)(*(longlong *)this + uVar2 * 4);
    if (piVar4 != (int *)0x0) {
      *piVar4 = *param_1;
    }
    *(ulong64 *)&this->field_0x10 = uVar1;
    if (piVar3 != (int *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(piVar3);
    }
  }
  else {
    *(ulong64 *)&this->field_0x10 = uVar1;
    piVar3 = (int *)(*(longlong *)this + uVar2 * 4);
    if (piVar3 != (int *)0x0) {
      *piVar3 = *param_1;
    }
  }
  return;
}

// push_back @ 14ff602e0

void __thiscall
oo2net::vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::
push_back(vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
          *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  SuffixTrieMatch *pSVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ulong64 *)&this->field_0x10;
  uVar1 = uVar2 + 1;
  if (*(ulonglong *)&this->field_0x8 < uVar1) {
    pSVar3 = vector_storage<oo2net::SuffixTrieMatch>::makefit1
                       ((vector_storage<oo2net::SuffixTrieMatch> *)this,uVar1,uVar2);
    puVar4 = (undefined8 *)(*(longlong *)this + uVar2 * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
    *(ulong64 *)&this->field_0x10 = uVar1;
    if (pSVar3 != (SuffixTrieMatch *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff60343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(pSVar3);
      return;
    }
  }
  else {
    *(ulong64 *)&this->field_0x10 = uVar1;
    puVar4 = (undefined8 *)(*(longlong *)this + uVar2 * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
  }
  return;
}

// read_firstbytes @ 14ff60380

int __cdecl oo2net::SuffixTrieForMatcher::read_firstbytes(uchar *param_1)

{
  return (uint)*(uint3 *)param_1;
}

// release @ 14ff603a0

void __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::release(vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
          *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14ff603e0

void __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::release(vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
          *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14ff60420

void __thiscall
oo2net::vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
release(vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
        *this)

{
  this->m_size = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)((void *)this->_padding_);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14ff60460

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::release
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *this)

{
  if (this->m_begin != (SuffixNode **)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (SuffixNode **)0x0;
  return;
}

// release @ 14ff604a0

void __thiscall
oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::release
          (vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex> *this)

{
  if (this->m_begin != (SuffixIndex *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (SuffixIndex *)0x0;
  return;
}

// release @ 14ff604e0

void __thiscall
oo2net::vector_storage<oo2net::UnpackedMatchPair>::release
          (vector_storage<oo2net::UnpackedMatchPair> *this)

{
  if (this->m_begin != (UnpackedMatchPair *)0x0) {
    (*g_fp_OodleNet_Plugin_Free)(this->m_begin);
  }
  this->m_capacity = 0;
  this->m_begin = (UnpackedMatchPair *)0x0;
  return;
}

// reserve @ 14ff60520

void __thiscall
oo2net::vector_base<int,oo2net::vector_storage<int>_>::reserve
          (vector_base<int,oo2net::vector_storage<int>_> *this,ulong64 param_1)

{
  int *piVar1;
  
  if ((ulonglong)this->_padding_ < param_1) {
    piVar1 = vector_storage<int>::makefit1((vector_storage<int> *)this,param_1,this->m_size);
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff60540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(piVar1);
      return;
    }
  }
  return;
}

// reserve @ 14ff60560

void __thiscall
oo2net::vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
reserve(vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
        *this,ulong64 param_1)

{
  UnpackedMatchPair *pUVar1;
  
  if ((ulonglong)this->_padding_ < param_1) {
    pUVar1 = vector_storage<oo2net::UnpackedMatchPair>::makefit1
                       ((vector_storage<oo2net::UnpackedMatchPair> *)this,param_1,this->m_size);
    if (pUVar1 != (UnpackedMatchPair *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff60580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(pUVar1);
      return;
    }
  }
  return;
}

// reserve @ 14ff605a0

void __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::reserve
          (vector_flex<int,oo2net::vector_storage<int>_> *this,ulong64 param_1)

{
  int *piVar1;
  
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    piVar1 = vector_storage<int>::makefit1
                       ((vector_storage<int> *)this,param_1,*(ulong64 *)&this->field_0x10);
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff605c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(piVar1);
      return;
    }
  }
  return;
}

// reserve @ 14ff605e0

void __thiscall
oo2net::vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
reserve(vector_flex<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
        *this,ulong64 param_1)

{
  UnpackedMatchPair *pUVar1;
  
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    pUVar1 = vector_storage<oo2net::UnpackedMatchPair>::makefit1
                       ((vector_storage<oo2net::UnpackedMatchPair> *)this,param_1,
                        *(ulong64 *)&this->field_0x10);
    if (pUVar1 != (UnpackedMatchPair *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff60600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(pUVar1);
      return;
    }
  }
  return;
}

// resize @ 14ff60620

void __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::resize
          (vector_flex<int,oo2net::vector_storage<int>_> *this,ulong64 param_1)

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
      (*g_fp_OodleNet_Plugin_Free)(piVar2);
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// resize @ 14ff60680

/* WARNING: Struct "SuffixNode": ignoring multiple overlapping fields */

void __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::resize(vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
         *this,ulong64 param_1,SuffixNode **param_2)

{
  SuffixNode **ppSVar1;
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
    ppSVar1 = vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>::makefit1
                        ((vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*> *)this,
                         uVar4 + lVar6,uVar4);
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
    if (ppSVar1 != (SuffixNode **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff60720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_fp_OodleNet_Plugin_Free)(ppSVar1);
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

// resize @ 14ff60780

void __thiscall
oo2net::vector_flex<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_>::resize
          (vector_flex<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_> *this,
          ulong64 param_1)

{
  ulonglong uVar1;
  BitFlags256 *pBVar2;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    pBVar2 = vector_storage<oo2net::BitFlags256>::makefit1
                       ((vector_storage<oo2net::BitFlags256> *)this,param_1,uVar1);
    if (pBVar2 != (BitFlags256 *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(pBVar2);
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// resize @ 14ff607e0

void __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::resize(vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
         *this,ulong64 param_1)

{
  ulonglong uVar1;
  SuffixIndex *pSVar2;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  if (*(ulonglong *)&this->field_0x8 < param_1) {
    pSVar2 = vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>::makefit1
                       ((vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>
                         *)this,param_1,uVar1);
    if (pSVar2 != (SuffixIndex *)0x0) {
      (*g_fp_OodleNet_Plugin_Free)(pSVar2);
    }
  }
  *(ulong64 *)&this->field_0x10 = *(longlong *)&this->field_0x10 + (param_1 - uVar1);
  return;
}

// rrAlignUp64 @ 14ff60840

ulong64 __cdecl oo2net::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14ff60860

long64 __cdecl oo2net::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14ff60880

ulong64 __cdecl oo2net::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrCtz32 @ 14ff608a0

uint __cdecl oo2net::rrCtz32(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return uVar1;
}

// rrPtrDiff32 @ 14ff608b0

int __cdecl oo2net::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// set @ 14ff608c0

void __thiscall oo2net::BitFlags256::set(BitFlags256 *this,int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  this->words[iVar1] = this->words[iVar1] | 1 << (param_1 & 0x1fU);
  return;
}

// shrink @ 14ff608f0

void __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::shrink(vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
         *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14ff60900

void __thiscall
oo2net::vector_base<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_>::shrink
          (vector_base<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_> *this,
          ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14ff60910

void __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::shrink(vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
         *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14ff60920

void __thiscall
oo2net::vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>::
shrink(vector_base<oo2net::UnpackedMatchPair,oo2net::vector_storage<oo2net::UnpackedMatchPair>_>
       *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// size32 @ 14ff60930

int __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::size32
          (vector_flex<int,oo2net::vector_storage<int>_> *this)

{
  return *(int *)&this->field_0x10;
}

// size32 @ 14ff60940

int __thiscall
oo2net::vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::
size32(vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_> *this)

{
  return *(int *)&this->field_0x10;
}

// size @ 14ff60950

ulong64 __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::size(vector_base<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
       *this)

{
  return this->m_size;
}

// size @ 14ff60960

ulong64 __thiscall
oo2net::vector_base<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_>::size
          (vector_base<oo2net::BitFlags256,oo2net::vector_storage<oo2net::BitFlags256>_> *this)

{
  return this->m_size;
}

// size @ 14ff60970

ulong64 __thiscall
oo2net::
vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::size(vector_base<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
       *this)

{
  return this->m_size;
}

// size @ 14ff60980

ulong64 __thiscall
oo2net::vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::size
          (vector_base<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this)

{
  return this->m_size;
}

// size @ 14ff60990

ulong64 __thiscall
oo2net::vector_flex<int,oo2net::vector_storage<int>_>::size
          (vector_flex<int,oo2net::vector_storage<int>_> *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size @ 14ff609a0

ulong64 __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
::size(vector_flex<oo2net::SuffixTrieForMatcher::SuffixNode_*,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixNode_*>_>
       *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size @ 14ff609b0

ulong64 __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::size(vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
       *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size @ 14ff609c0

ulong64 __thiscall
oo2net::vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>::size
          (vector_flex<oo2net::SuffixTrieMatch,oo2net::vector_storage<oo2net::SuffixTrieMatch>_>
           *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size_bytes @ 14ff609d0

ulong64 __thiscall
oo2net::
vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
::size_bytes(vector_flex<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex,oo2net::vector_storage<oo2net::SuffixTrieForMatcher::SuffixTrieObject::SuffixIndex>_>
             *this)

{
  return *(longlong *)&this->field_0x10 << 3;
}

// wait @ 14ff609e0

void __thiscall oo2net::OodleJob::wait(OodleJob *this,void *param_1)

{
  if (this->handle != 0) {
    (*g_fp_OodleNet_Plugin_WaitJob)(this->handle,param_1);
    this->handle = 0;
  }
  return;
}

// dtor$0 @ 150325e00

void `oo2net::construct<oo2net::SuffixTrieForMatcher::ChildrenSparseI>'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x48),eRRPlacementNew,*(void **)(param_2 + 0x40));
  return;
}

// dtor$0 @ 150325e40

void `oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2net::IncrementalMatchFinder::~IncrementalMatchFinder
            (*(IncrementalMatchFinder **)(param_2 + 0x80));
  return;
}

// dtor$1 @ 150325e60

void `oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>::
  ~rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000>
            ((rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<8>,1048000> *)
             (*(longlong *)(param_2 + 0x80) + 0x18));
  return;
}

// dtor$2 @ 150325e80

void `oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder'::__l1::dtor_2
               (undefined8 param_1,longlong param_2)

{
  oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>::
  ~rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000>
            ((rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseN<16>,1048000> *)
             (*(longlong *)(param_2 + 0x80) + 0x38));
  return;
}

// dtor$3 @ 150325ea0

void `oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder'::__l1::dtor_3
               (undefined8 param_1,longlong param_2)

{
  oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::
  ~rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>
            ((rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000> *)
             (*(longlong *)(param_2 + 0x80) + 0x58));
  return;
}

// dtor$4 @ 150325ec0

void `oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder'::__l1::dtor_4
               (undefined8 param_1,longlong param_2)

{
  oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>::
  ~rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000>
            ((rrPool<oo2net::SuffixTrieForMatcher::ChildrenFull256,1048000> *)
             (*(longlong *)(param_2 + 0x80) + 0x78));
  return;
}

// dtor$5 @ 150325ee0

void `oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::SuffixTrie2MatchFinder'::__l1::dtor_5
               (undefined8 param_1,longlong param_2)

{
  oo2net::vector<oo2net::UnpackedMatchPair>::~vector<oo2net::UnpackedMatchPair>
            ((vector<oo2net::UnpackedMatchPair> *)(*(longlong *)(param_2 + 0x80) + 0x2b8));
  return;
}

// dtor$0 @ 150325f00

void `oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::Alloc'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x48),eRRPlacementNew,*(void **)(param_2 + 0x40));
  return;
}

// dtor$1 @ 150325f40

void `oo2net::rrPool<oo2net::SuffixTrieForMatcher::ChildrenSparseI,1048000>::Alloc'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x48),eRRPlacementNew,*(void **)(param_2 + 0x40));
  return;
}

// dtor$0 @ 150325f80

void `oo2net::SuffixTrieForMatcher::SuffixTrieObject::CountChildren'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2net::vector<int>::~vector<int>((vector<int> *)(param_2 + 0x20));
  return;
}

// dtor$0 @ 150325fa0

void `oo2net::SuffixTrieForMatcher::SuffixTrie2MatchFinder::ProcessChunk'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2net::OodleJob::~OodleJob((OodleJob *)(param_2 + 0x78));
  return;
}

