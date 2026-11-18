// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 95

// FUN_14fa7cd70 @ 14fa7cd70

void FUN_14fa7cd70(void *param_1,int param_2,EpsCopyOutputStream *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  puVar1 = param_3[1].end_;
  uVar2 = param_2 * 4;
  if ((longlong)param_3->end_ - (longlong)puVar1 < (longlong)(int)uVar2) {
    puVar1 = google::protobuf::io::EpsCopyOutputStream::WriteRawFallback
                       (param_3,param_1,uVar2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)uVar2);
    puVar1 = puVar1 + (int)uVar2;
  }
  param_3[1].end_ = puVar1;
  return;
}

// FUN_14fa7cde0 @ 14fa7cde0

void FUN_14fa7cde0(void *param_1,int param_2,EpsCopyOutputStream *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  puVar1 = param_3[1].end_;
  uVar2 = param_2 * 4;
  if ((longlong)param_3->end_ - (longlong)puVar1 < (longlong)(int)uVar2) {
    puVar1 = google::protobuf::io::EpsCopyOutputStream::WriteRawFallback
                       (param_3,param_1,uVar2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)uVar2);
    puVar1 = puVar1 + (int)uVar2;
  }
  param_3[1].end_ = puVar1;
  return;
}

// FUN_14fa7ce50 @ 14fa7ce50

void FUN_14fa7ce50(void *param_1,int param_2,EpsCopyOutputStream *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  puVar1 = param_3[1].end_;
  uVar2 = param_2 * 4;
  if ((longlong)param_3->end_ - (longlong)puVar1 < (longlong)(int)uVar2) {
    puVar1 = google::protobuf::io::EpsCopyOutputStream::WriteRawFallback
                       (param_3,param_1,uVar2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)uVar2);
    puVar1 = puVar1 + (int)uVar2;
  }
  param_3[1].end_ = puVar1;
  return;
}

// FUN_14fa7cec0 @ 14fa7cec0

void FUN_14fa7cec0(void *param_1,int param_2,EpsCopyOutputStream *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  puVar1 = param_3[1].end_;
  uVar2 = param_2 * 8;
  if ((longlong)param_3->end_ - (longlong)puVar1 < (longlong)(int)uVar2) {
    puVar1 = google::protobuf::io::EpsCopyOutputStream::WriteRawFallback
                       (param_3,param_1,uVar2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)uVar2);
    puVar1 = puVar1 + (int)uVar2;
  }
  param_3[1].end_ = puVar1;
  return;
}

// FUN_14fa7cf30 @ 14fa7cf30

void FUN_14fa7cf30(void *param_1,int param_2,EpsCopyOutputStream *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  puVar1 = param_3[1].end_;
  uVar2 = param_2 * 8;
  if ((longlong)param_3->end_ - (longlong)puVar1 < (longlong)(int)uVar2) {
    puVar1 = google::protobuf::io::EpsCopyOutputStream::WriteRawFallback
                       (param_3,param_1,uVar2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)uVar2);
    puVar1 = puVar1 + (int)uVar2;
  }
  param_3[1].end_ = puVar1;
  return;
}

// FUN_14fa7cfa0 @ 14fa7cfa0

void FUN_14fa7cfa0(void *param_1,int param_2,EpsCopyOutputStream *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  puVar1 = param_3[1].end_;
  uVar2 = param_2 * 8;
  if ((longlong)param_3->end_ - (longlong)puVar1 < (longlong)(int)uVar2) {
    puVar1 = google::protobuf::io::EpsCopyOutputStream::WriteRawFallback
                       (param_3,param_1,uVar2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)uVar2);
    puVar1 = puVar1 + (int)uVar2;
  }
  param_3[1].end_ = puVar1;
  return;
}

// FUN_14fa7d010 @ 14fa7d010

void FUN_14fa7d010(void *param_1,uint param_2,EpsCopyOutputStream *param_3)

{
  uchar *puVar1;
  
  puVar1 = param_3[1].end_;
  if ((longlong)param_3->end_ - (longlong)puVar1 < (longlong)(int)param_2) {
    puVar1 = google::protobuf::io::EpsCopyOutputStream::WriteRawFallback
                       (param_3,param_1,param_2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)param_2);
    puVar1 = puVar1 + (int)param_2;
  }
  param_3[1].end_ = puVar1;
  return;
}

// EnumSize @ 14fa7d080

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::EnumSize(class google::protobuf::RepeatedField<int>
   const & __ptr64) */

__uint64 __cdecl google::protobuf::internal::WireFormatLite::EnumSize(RepeatedField<int> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  __uint64 _Var8;
  __uint64 _Var9;
  byte bVar10;
  
  uVar2 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  _Var8 = 0;
  bVar10 = ~((byte)uVar2 >> 2) & 1;
  if (bVar10 == 0) {
    uVar4 = *piVar1;
  }
  else {
    uVar4 = (uint)uVar2 & 3;
  }
  _Var9 = _Var8;
  if (0 < (int)uVar4) {
    do {
      piVar6 = (int *)(uVar2 & 0xfffffffffffffff8);
      if (bVar10 != 0) {
        piVar6 = piVar1;
      }
      uVar7 = (longlong)piVar6[_Var8] | 1;
      if (__isa_available < 5) {
        lVar3 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar5 = 0x3f - (int)lVar3;
      }
      else {
        iVar5 = (int)LZCOUNT(uVar7);
      }
      _Var8 = _Var8 + 1;
      _Var9 = _Var9 + (iVar5 * -9 + 0x280U >> 6);
    } while ((longlong)_Var8 < (longlong)(int)uVar4);
  }
  return _Var9;
}

// EnumSizeWithPackedTagSize @ 14fa7d120

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::EnumSizeWithPackedTagSize(class
   google::protobuf::RepeatedField<int> const & __ptr64,unsigned __int64,class
   google::protobuf::internal::CachedSize const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::EnumSizeWithPackedTagSize
          (RepeatedField<int> *param_1,__uint64 param_2,CachedSize *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  
  uVar5 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  uVar3 = (uint)uVar5 & 3;
  bVar9 = ~((byte)uVar5 >> 2) & 1;
  uVar6 = uVar3;
  if (bVar9 == 0) {
    uVar6 = *piVar1;
  }
  if (uVar6 != 0) {
    lVar8 = 0;
    if (bVar9 == 0) {
      uVar3 = *piVar1;
    }
    lVar10 = lVar8;
    if (0 < (int)uVar3) {
      do {
        piVar4 = piVar1;
        if (bVar9 == 0) {
          piVar4 = (int *)(uVar5 & 0xfffffffffffffff8);
        }
        uVar7 = (longlong)piVar4[lVar10] | 1;
        if (__isa_available < 5) {
          lVar2 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar11 = 0x3f - (int)lVar2;
        }
        else {
          iVar11 = (int)LZCOUNT(uVar7);
        }
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + (ulonglong)(iVar11 * -9 + 0x280U >> 6);
      } while (lVar10 < (int)uVar3);
    }
    uVar5 = (longlong)(int)SUB84(lVar8,0) | 1;
    param_3->atom_ = SUB84(lVar8,0);
    if (__isa_available < 5) {
      lVar10 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar11 = 0x3f - (int)lVar10;
    }
    else {
      iVar11 = (int)LZCOUNT(uVar5);
    }
    return (ulonglong)(iVar11 * -9 + 0x280U >> 6) + lVar8 + param_2;
  }
  if (param_3->atom_ != (atomic<int>)0x0) {
    param_3->atom_ = (atomic<int>)0x0;
  }
  return 0;
}

// Int32Size @ 14fa7d240

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::Int32Size(class google::protobuf::RepeatedField<int>
   const & __ptr64) */

__uint64 __cdecl google::protobuf::internal::WireFormatLite::Int32Size(RepeatedField<int> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  __uint64 _Var8;
  __uint64 _Var9;
  byte bVar10;
  
  uVar2 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  _Var8 = 0;
  bVar10 = ~((byte)uVar2 >> 2) & 1;
  if (bVar10 == 0) {
    uVar4 = *piVar1;
  }
  else {
    uVar4 = (uint)uVar2 & 3;
  }
  _Var9 = _Var8;
  if (0 < (int)uVar4) {
    do {
      piVar6 = (int *)(uVar2 & 0xfffffffffffffff8);
      if (bVar10 != 0) {
        piVar6 = piVar1;
      }
      uVar7 = (longlong)piVar6[_Var8] | 1;
      if (__isa_available < 5) {
        lVar3 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar5 = 0x3f - (int)lVar3;
      }
      else {
        iVar5 = (int)LZCOUNT(uVar7);
      }
      _Var8 = _Var8 + 1;
      _Var9 = _Var9 + (iVar5 * -9 + 0x280U >> 6);
    } while ((longlong)_Var8 < (longlong)(int)uVar4);
  }
  return _Var9;
}

// Int32SizeWithPackedTagSize @ 14fa7d2e0

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize(class
   google::protobuf::RepeatedField<int> const & __ptr64,unsigned __int64,class
   google::protobuf::internal::CachedSize const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
          (RepeatedField<int> *param_1,__uint64 param_2,CachedSize *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  
  uVar5 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  uVar3 = (uint)uVar5 & 3;
  bVar9 = ~((byte)uVar5 >> 2) & 1;
  uVar6 = uVar3;
  if (bVar9 == 0) {
    uVar6 = *piVar1;
  }
  if (uVar6 != 0) {
    lVar8 = 0;
    if (bVar9 == 0) {
      uVar3 = *piVar1;
    }
    lVar10 = lVar8;
    if (0 < (int)uVar3) {
      do {
        piVar4 = piVar1;
        if (bVar9 == 0) {
          piVar4 = (int *)(uVar5 & 0xfffffffffffffff8);
        }
        uVar7 = (longlong)piVar4[lVar10] | 1;
        if (__isa_available < 5) {
          lVar2 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar11 = 0x3f - (int)lVar2;
        }
        else {
          iVar11 = (int)LZCOUNT(uVar7);
        }
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + (ulonglong)(iVar11 * -9 + 0x280U >> 6);
      } while (lVar10 < (int)uVar3);
    }
    uVar5 = (longlong)(int)SUB84(lVar8,0) | 1;
    param_3->atom_ = SUB84(lVar8,0);
    if (__isa_available < 5) {
      lVar10 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar11 = 0x3f - (int)lVar10;
    }
    else {
      iVar11 = (int)LZCOUNT(uVar5);
    }
    return (ulonglong)(iVar11 * -9 + 0x280U >> 6) + lVar8 + param_2;
  }
  if (param_3->atom_ != (atomic<int>)0x0) {
    param_3->atom_ = (atomic<int>)0x0;
  }
  return 0;
}

// Int64Size @ 14fa7d400

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::Int64Size(class
   google::protobuf::RepeatedField<__int64> const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::Int64Size(RepeatedField<__int64> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  __uint64 _Var8;
  __uint64 _Var9;
  byte bVar10;
  
  uVar2 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  _Var8 = 0;
  bVar10 = ~((byte)uVar2 >> 2) & 1;
  if (bVar10 == 0) {
    uVar4 = *piVar1;
  }
  else {
    uVar4 = (uint)uVar2 & 3;
  }
  _Var9 = _Var8;
  if (0 < (int)uVar4) {
    do {
      piVar6 = (int *)(uVar2 & 0xfffffffffffffff8);
      if (bVar10 != 0) {
        piVar6 = piVar1;
      }
      uVar7 = *(ulonglong *)(piVar6 + _Var8 * 2) | 1;
      if (__isa_available < 5) {
        lVar3 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar5 = 0x3f - (int)lVar3;
      }
      else {
        iVar5 = (int)LZCOUNT(uVar7);
      }
      _Var8 = _Var8 + 1;
      _Var9 = _Var9 + (iVar5 * -9 + 0x280U >> 6);
    } while ((longlong)_Var8 < (longlong)(int)uVar4);
  }
  return _Var9;
}

// Int64SizeWithPackedTagSize @ 14fa7d4a0

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::Int64SizeWithPackedTagSize(class
   google::protobuf::RepeatedField<__int64> const & __ptr64,unsigned __int64,class
   google::protobuf::internal::CachedSize const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::Int64SizeWithPackedTagSize
          (RepeatedField<__int64> *param_1,__uint64 param_2,CachedSize *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  
  uVar5 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  uVar3 = (uint)uVar5 & 3;
  bVar9 = ~((byte)uVar5 >> 2) & 1;
  uVar6 = uVar3;
  if (bVar9 == 0) {
    uVar6 = *piVar1;
  }
  if (uVar6 != 0) {
    lVar8 = 0;
    if (bVar9 == 0) {
      uVar3 = *piVar1;
    }
    lVar10 = lVar8;
    if (0 < (int)uVar3) {
      do {
        piVar4 = piVar1;
        if (bVar9 == 0) {
          piVar4 = (int *)(uVar5 & 0xfffffffffffffff8);
        }
        uVar7 = *(ulonglong *)(piVar4 + lVar10 * 2) | 1;
        if (__isa_available < 5) {
          lVar2 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar11 = 0x3f - (int)lVar2;
        }
        else {
          iVar11 = (int)LZCOUNT(uVar7);
        }
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + (ulonglong)(iVar11 * -9 + 0x280U >> 6);
      } while (lVar10 < (int)uVar3);
    }
    uVar5 = (longlong)(int)SUB84(lVar8,0) | 1;
    param_3->atom_ = SUB84(lVar8,0);
    if (__isa_available < 5) {
      lVar10 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar11 = 0x3f - (int)lVar10;
    }
    else {
      iVar11 = (int)LZCOUNT(uVar5);
    }
    return (ulonglong)(iVar11 * -9 + 0x280U >> 6) + lVar8 + param_2;
  }
  if (param_3->atom_ != (atomic<int>)0x0) {
    param_3->atom_ = (atomic<int>)0x0;
  }
  return 0;
}

// InternalWriteGroup @ 14fa7d5c0

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::InternalWriteGroup(int,class
   google::protobuf::MessageLite const & __ptr64,unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::InternalWriteGroup
          (int param_1,MessageLite *param_2,uchar *param_3,EpsCopyOutputStream *param_4)

{
  byte *pbVar1;
  uint uVar2;
  
  if (param_4->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,param_3);
  }
  for (uVar2 = param_1 * 8 | 3; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *param_3 = (byte)uVar2 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar2;
  pbVar1 = (byte *)(**(code **)(param_2->_padding_ + 0x20))(param_2,param_3 + 1,param_4);
  if (param_4->end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_4,pbVar1);
  }
  for (uVar2 = param_1 * 8 | 4; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar1 = (byte)uVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar2;
  return pbVar1 + 1;
}

// InternalWriteMessage @ 14fa7d690

/* public: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::WireFormatLite::InternalWriteMessage(int,class
   google::protobuf::MessageLite const & __ptr64,int,unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64) */

uchar * __cdecl
google::protobuf::internal::WireFormatLite::InternalWriteMessage
          (int param_1,MessageLite *param_2,int param_3,uchar *param_4,EpsCopyOutputStream *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uchar *puVar3;
  byte bVar4;
  
  uVar1 = (ulonglong)(uint)param_3;
  if (param_5->end_ <= param_4) {
    param_4 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_5,param_4);
  }
  for (uVar2 = param_1 * 8 | 2; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *param_4 = (byte)uVar2 | 0x80;
    param_4 = param_4 + 1;
  }
  *param_4 = (byte)uVar2;
  while( true ) {
    param_4 = param_4 + 1;
    bVar4 = (byte)uVar1;
    if ((uint)param_3 < 0x80) break;
    uVar1 = uVar1 >> 7;
    *param_4 = bVar4 | 0x80;
    param_3 = (int)uVar1;
  }
  *param_4 = bVar4;
                    /* WARNING: Could not recover jumptable at 0x00014fa7d748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (uchar *)(**(code **)(param_2->_padding_ + 0x20))(param_2,param_4 + 1,param_5);
  return puVar3;
}

// PrintUTF8ErrorLog @ 14fa7d760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl google::protobuf::internal::PrintUTF8ErrorLog(class
   std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> >,char const * __ptr64,bool) */

void __cdecl
google::protobuf::internal::PrintUTF8ErrorLog
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2,char *param_3,bool param_4)

{
  void *pvVar1;
  _Bxty *p_Var2;
  LogMessage *this;
  void *pvVar3;
  undefined8 uVar4;
  char ****ppppcVar5;
  ulong64 uVar6;
  uint uVar7;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  uint local_188;
  char *local_180;
  undefined8 uStack_178;
  char *local_170;
  undefined8 uStack_168;
  _Bxty local_160;
  char *local_150;
  ulonglong uStack_148;
  _Bxty local_138;
  char *local_128;
  ulonglong uStack_120;
  char ***local_118;
  undefined8 uStack_110;
  ulong64 local_108;
  ulonglong local_100;
  _Bxty local_f8;
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined1 local_d8 [24];
  char *pcStack_c0;
  char *local_b8;
  char acStack_b0 [8];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char *local_98;
  undefined8 uStack_90;
  char ***local_88;
  ulong64 uStack_80;
  AlphaNum local_78;
  AlphaNum local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  uVar7 = 0;
  local_188 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0xf;
  local_118 = (char ***)0x0;
  local_160._8_8_ = 0;
  local_150 = (char *)0x0;
  uStack_148 = 0xf;
  local_160._Ptr = (char *)0x0;
  if (param_2->_Mysize != 0) {
    if (param_1->_Mysize != 0) {
      local_170 = ".";
      uStack_168 = 1;
      local_180 = " \'";
      uStack_178 = 2;
      local_d8._0_8_ = " \'";
      local_d8._8_8_ = 2;
      local_d8._16_8_ = param_1->_Mydata;
      pcStack_c0 = (char *)param_1->_Mysize;
      local_b8 = ".";
      acStack_b0[0] = '\x01';
      acStack_b0[1] = '\0';
      acStack_b0[2] = '\0';
      acStack_b0[3] = '\0';
      acStack_b0[4] = '\0';
      acStack_b0[5] = '\0';
      acStack_b0[6] = '\0';
      acStack_b0[7] = '\0';
      local_a8 = *(undefined4 *)&param_2->_Mydata;
      uStack_a4 = *(undefined4 *)((longlong)&param_2->_Mydata + 4);
      uStack_a0 = (undefined4)param_2->_Mysize;
      uStack_9c = *(undefined4 *)((longlong)&param_2->_Mysize + 4);
      local_98 = "\'";
      uStack_90 = 1;
      local_198 = local_d8;
      uStack_190 = &local_88;
      absl::lts_20240722::strings_internal::CatPieces(&local_138,&local_198);
      uVar7 = 4;
      if (0xf < uStack_148) {
        uVar6 = uStack_148 + 1;
        uVar4 = local_160._Ptr;
        if (0xfff < uVar6) {
          uVar6 = uStack_148 + 0x28;
          uVar4 = *(undefined8 *)(local_160._Ptr + -8);
          if ((char *)0x1f < local_160._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete((void *)uVar4,uVar6);
      }
      local_160._Ptr = local_138._Ptr;
      local_160._8_8_ = local_138._8_8_;
      local_150 = local_128;
      uStack_148 = uStack_120;
      goto LAB_14fa7d9ea;
    }
    local_78.piece_._Mydata = "\'";
    local_78.piece_._Mysize = 1;
    local_48.piece_._Mydata = param_2->_Mydata;
    local_48.piece_._Mysize = param_2->_Mysize;
    local_198 = " \'";
    uStack_190 = (char ****)0x2;
    local_d8._0_8_ = " \'";
    local_d8._8_8_ = 2;
    p_Var2 = (_Bxty *)absl::lts_20240722::StrCat
                                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_138,(AlphaNum *)local_d8,&local_48,&local_78);
    if (&local_160 != p_Var2) {
      if (0xf < uStack_148) {
        uVar6 = uStack_148 + 1;
        uVar4 = local_160._Ptr;
        if (0xfff < uVar6) {
          uVar6 = uStack_148 + 0x28;
          uVar4 = *(undefined8 *)(local_160._Ptr + -8);
          if ((char *)0x1f < local_160._Ptr + (-8 - uVar4)) goto LAB_14fa7d9d4;
        }
        ::operator_delete((void *)uVar4,uVar6);
      }
      local_160._Ptr = p_Var2->_Ptr;
      local_160._8_8_ = *(undefined8 *)((longlong)p_Var2 + 8);
      local_150 = p_Var2[1]._Ptr;
      uStack_148 = *(ulong64 *)((longlong)p_Var2 + 0x18);
      p_Var2[1]._Ptr = (char *)0x0;
      *(ulong64 *)((longlong)p_Var2 + 0x18) = 0xf;
      p_Var2->_Buf[0] = '\0';
    }
    if (0xf < uStack_120) {
      uVar6 = uStack_120 + 1;
      uVar4 = local_138._Ptr;
      if (0xfff < uVar6) {
        uVar6 = uStack_120 + 0x28;
        uVar4 = *(undefined8 *)(local_138._Ptr + -8);
        if ((char *)0x1f < local_138._Ptr + (-8 - uVar4)) {
LAB_14fa7d9d4:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete((void *)uVar4,uVar6);
    }
  }
LAB_14fa7d9ea:
  if (param_3 == (char *)0x0) {
    local_198 = (char *)0x0;
    uStack_190 = (char ****)0x0;
  }
  else {
    uStack_190 = (char ****)0xffffffffffffffff;
    do {
      uStack_190 = (char ****)((longlong)uStack_190 + 1);
      local_198 = param_3;
    } while (param_3[(longlong)uStack_190] != '\0');
  }
  local_180 = " contains invalid UTF-8 data when ";
  uStack_178 = 0x22;
  local_d8._16_8_ = &local_160;
  if (0xf < uStack_148) {
    local_d8._16_8_ = local_160._Ptr;
  }
  local_170 = "String field";
  uStack_168 = 0xc;
  local_d8._0_8_ = "String field";
  local_d8._8_8_ = 0xc;
  local_b8 = " contains invalid UTF-8 data when ";
  acStack_b0[0] = '\"';
  acStack_b0[1] = '\0';
  acStack_b0[2] = '\0';
  acStack_b0[3] = '\0';
  acStack_b0[4] = '\0';
  acStack_b0[5] = '\0';
  acStack_b0[6] = '\0';
  acStack_b0[7] = '\0';
  local_a8 = (undefined4)local_198;
  uStack_a4 = local_198._4_4_;
  uStack_a0 = (undefined4)uStack_190;
  uStack_9c = uStack_190._4_4_;
  local_98 = " a protocol buffer. Use the \'bytes\' type if you intend to send raw bytes. ";
  uStack_90 = 0x4a;
  local_88 = (char ***)&local_118;
  if (0xf < local_100) {
    local_88 = local_118;
  }
  local_78.piece_._Mysize = local_108;
  uStack_80 = local_108;
  local_138._Ptr = local_d8;
  local_138._8_8_ = &local_78;
  pcStack_c0 = local_150;
  local_78.piece_._Mydata = (char *)local_88;
  absl::lts_20240722::strings_internal::CatPieces(&local_f8,&local_138);
  this = (LogMessage *)
         absl::lts_20240722::log_internal::LogMessage::LogMessage
                   ((LogMessage *)&local_138,
                    "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format_lite.cc"
                    ,0x261,(ErrorTag)0x0);
  local_188 = uVar7 | 3;
  absl::lts_20240722::log_internal::LogMessage::operator<<
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_f8);
  absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)&local_138);
  if (0xf < uStack_e0) {
    uVar6 = uStack_e0 + 1;
    pvVar1 = (void *)CONCAT71(local_f8._1_7_,local_f8._Buf[0]);
    pvVar3 = pvVar1;
    if (0xfff < uVar6) {
      uVar6 = uStack_e0 + 0x28;
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar6);
  }
  local_e8 = ___xmm_000000000000000f0000000000000000;
  uStack_e0 = _UNK_15076add8;
  local_f8._Buf[0] = '\0';
  if (0xf < uStack_148) {
    uVar6 = uStack_148 + 1;
    uVar4 = local_160._Ptr;
    if (0xfff < uVar6) {
      uVar6 = uStack_148 + 0x28;
      uVar4 = *(undefined8 *)(local_160._Ptr + -8);
      if ((char *)0x1f < local_160._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar4,uVar6);
  }
  local_150 = (char *)0x0;
  uStack_148 = 0xf;
  local_160._Ptr = local_160._Ptr & 0xffffffffffffff00;
  if (0xf < local_100) {
    uVar6 = local_100 + 1;
    ppppcVar5 = (char ****)local_118;
    if (0xfff < uVar6) {
      uVar6 = local_100 + 0x28;
      ppppcVar5 = (char ****)local_118[-1];
      if (0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)ppppcVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(ppppcVar5,uVar6);
  }
  return;
}

// ReadBytes @ 14fa7dc30

/* WARNING: Type propagation algorithm not settling */
/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::ReadBytes(class
   google::protobuf::io::CodedInputStream * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64 * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadBytes
          (CodedInputStream *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> **param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  __int64 _Var5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  uint uVar7;
  uint uVar8;
  
  pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  uVar7 = 0;
  pbVar4 = *param_2;
  if (*param_2 == &fixed_address_empty_string.value_) {
    pbVar4 = ::operator_new(0x20);
    if (pbVar4 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      (pbVar4->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + 8) = 0;
      (pbVar4->_Mypair)._Myval2._Mysize = 0;
      (pbVar4->_Mypair)._Myval2._Myres = 0xf;
      (pbVar4->_Mypair)._Myval2._Bx._Buf[0] = '\0';
      pbVar6 = pbVar4;
    }
    *param_2 = pbVar6;
    pbVar4 = pbVar6;
  }
  pbVar2 = param_1->buffer_;
  if (pbVar2 < param_1->buffer_end_) {
    bVar1 = *pbVar2;
    uVar7 = (uint)bVar1;
    uVar8 = (uint)bVar1;
    if (bVar1 < 0x80) {
      param_1->buffer_ = pbVar2 + 1;
      goto LAB_14fa7dcb9;
    }
  }
  _Var5 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar7);
  uVar8 = (uint)_Var5;
  if (_Var5 < 0) {
    return false;
  }
LAB_14fa7dcb9:
  bVar3 = io::CodedInputStream::ReadString(param_1,pbVar4,uVar8);
  if (!bVar3) {
    return false;
  }
  return true;
}

// ReadBytes @ 14fa7dcf0

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::ReadBytes(class
   google::protobuf::io::CodedInputStream * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadBytes
          (CodedInputStream *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  __int64 _Var4;
  uint uVar5;
  uint uVar6;
  
  pbVar2 = param_1->buffer_;
  uVar5 = 0;
  if (pbVar2 < param_1->buffer_end_) {
    bVar1 = *pbVar2;
    uVar5 = (uint)bVar1;
    uVar6 = (uint)bVar1;
    if (bVar1 < 0x80) {
      param_1->buffer_ = pbVar2 + 1;
      goto LAB_14fa7dd38;
    }
  }
  _Var4 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar5);
  uVar6 = (uint)_Var4;
  if (_Var4 < 0) {
    return false;
  }
LAB_14fa7dd38:
  bVar3 = io::CodedInputStream::ReadString(param_1,param_2,uVar6);
  if (!bVar3) {
    return false;
  }
  return true;
}

// FUN_14fa7dd70 @ 14fa7dd70

undefined8
FUN_14fa7dd70(CodedInputStream *param_1,
             basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  __int64 _Var4;
  uint uVar5;
  uint uVar6;
  
  pbVar2 = param_1->buffer_;
  uVar5 = 0;
  if (pbVar2 < param_1->buffer_end_) {
    bVar1 = *pbVar2;
    uVar5 = (uint)bVar1;
    uVar6 = (uint)bVar1;
    if (bVar1 < 0x80) {
      param_1->buffer_ = pbVar2 + 1;
      goto LAB_14fa7ddb8;
    }
  }
  _Var4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,uVar5);
  uVar6 = (uint)_Var4;
  if (_Var4 < 0) {
    return 0;
  }
LAB_14fa7ddb8:
  bVar3 = google::protobuf::io::CodedInputStream::ReadString(param_1,param_2,uVar6);
  if (!bVar3) {
    return 0;
  }
  return 1;
}

// ReadPackedEnumPreserveUnknowns @ 14fa7ddf0

/* public: static bool __cdecl
   google::protobuf::internal::WireFormatLite::ReadPackedEnumPreserveUnknowns(class
   google::protobuf::io::CodedInputStream * __ptr64,int,bool (__cdecl*)(int),class
   google::protobuf::io::CodedOutputStream * __ptr64,class google::protobuf::RepeatedField<int> *
   __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::ReadPackedEnumPreserveUnknowns
          (CodedInputStream *param_1,int param_2,_func_bool_int *param_3,CodedOutputStream *param_4,
          RepeatedField<int> *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  __int64 _Var4;
  ulonglong uVar5;
  byte *pbVar6;
  int *piVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  pbVar6 = param_1->buffer_;
  uVar9 = 0;
  if (pbVar6 < param_1->buffer_end_) {
    bVar8 = *pbVar6;
    uVar10 = (uint)bVar8;
    uVar9 = (uint)bVar8;
    if (bVar8 < 0x80) {
      param_1->buffer_ = pbVar6 + 1;
      goto LAB_14fa7de53;
    }
  }
  _Var4 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar9);
  uVar10 = (uint)_Var4;
  if (_Var4 < 0) {
    return false;
  }
LAB_14fa7de53:
  iVar2 = io::CodedInputStream::PushLimit(param_1,uVar10);
  iVar3 = io::CodedInputStream::BytesUntilLimit(param_1);
  do {
    if (iVar3 < 1) {
      io::CodedInputStream::PopLimit(param_1,iVar2);
      return true;
    }
    pbVar6 = param_1->buffer_;
    uVar9 = 0;
    if (pbVar6 < param_1->buffer_end_) {
      bVar8 = *pbVar6;
      uVar5 = (ulonglong)bVar8;
      uVar9 = (uint)bVar8;
      if (0x7f < bVar8) goto LAB_14fa7de8e;
      param_1->buffer_ = pbVar6 + 1;
    }
    else {
LAB_14fa7de8e:
      uVar5 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar9);
      if ((longlong)uVar5 < 0) {
        return false;
      }
    }
    uVar9 = (uint)uVar5;
    if ((param_3 == (_func_bool_int *)0x0) || (bVar1 = (*param_3)(uVar9), bVar1)) {
      uVar5 = (param_5->soo_rep_).field0_0x0.long_rep.elements_int;
      piVar7 = &(param_5->soo_rep_).field0_0x0.long_rep.size;
      bVar1 = (bool)(~((byte)uVar5 >> 2) & 1);
      if (bVar1 == false) {
        uVar10 = *piVar7;
        uVar12 = (param_5->soo_rep_).field0_0x0.long_rep.capacity;
        piVar7 = (int *)(uVar5 & 0xfffffffffffffff8);
      }
      else {
        uVar12 = 2;
        uVar10 = (uint)uVar5 & 3;
      }
      if (uVar10 == uVar12) {
        RepeatedField<int>::Grow(param_5,bVar1,uVar10,uVar10 + 1);
        piVar7 = (int *)((param_5->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
LAB_14fa7dfaa:
        uVar12 = (param_5->soo_rep_).field0_0x0.long_rep.size;
        (param_5->soo_rep_).field0_0x0.long_rep.size = uVar10 + 1;
      }
      else {
        if (bVar1 == false) goto LAB_14fa7dfaa;
        uVar12 = (uint)uVar5 & 3;
        (param_5->soo_rep_).field0_0x0.long_rep.elements_int =
             uVar5 & 0xfffffffffffffff8 | (longlong)(int)(uVar10 + 1);
      }
      piVar7[(int)uVar12] = uVar9;
    }
    else {
      pbVar6 = param_4->cur_;
      uVar10 = param_2 * 8;
      uVar11 = (ulonglong)uVar10;
      if ((param_4->impl_).end_ <= pbVar6) {
        pbVar6 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_4->impl_,pbVar6);
      }
      param_4->cur_ = pbVar6;
      while (bVar8 = (byte)uVar11, 0x7f < uVar10) {
        uVar11 = uVar11 >> 7;
        *pbVar6 = bVar8 | 0x80;
        pbVar6 = pbVar6 + 1;
        uVar10 = (uint)uVar11;
      }
      *pbVar6 = bVar8;
      pbVar6 = pbVar6 + 1;
      param_4->cur_ = pbVar6;
      if ((param_4->impl_).end_ <= pbVar6) {
        pbVar6 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_4->impl_,pbVar6);
      }
      param_4->cur_ = pbVar6;
      while (bVar8 = (byte)uVar5, 0x7f < uVar9) {
        uVar5 = uVar5 >> 7 & 0x1ffffff;
        *pbVar6 = bVar8 | 0x80;
        pbVar6 = pbVar6 + 1;
        uVar9 = (uint)uVar5;
      }
      *pbVar6 = bVar8;
      param_4->cur_ = pbVar6 + 1;
    }
    iVar3 = io::CodedInputStream::BytesUntilLimit(param_1);
  } while( true );
}

// SInt32Size @ 14fa7e020

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::SInt32Size(class google::protobuf::RepeatedField<int>
   const & __ptr64) */

__uint64 __cdecl google::protobuf::internal::WireFormatLite::SInt32Size(RepeatedField<int> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  __uint64 _Var7;
  __uint64 _Var8;
  byte bVar9;
  
  uVar2 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  _Var7 = 0;
  bVar9 = ~((byte)uVar2 >> 2) & 1;
  if (bVar9 == 0) {
    uVar3 = *piVar1;
  }
  else {
    uVar3 = (uint)uVar2 & 3;
  }
  _Var8 = _Var7;
  if (0 < (int)uVar3) {
    do {
      piVar5 = (int *)(uVar2 & 0xfffffffffffffff8);
      if (bVar9 != 0) {
        piVar5 = piVar1;
      }
      uVar6 = piVar5[_Var7] >> 0x1f ^ piVar5[_Var7] * 2 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar6);
      }
      _Var7 = _Var7 + 1;
      _Var8 = _Var8 + (iVar4 * -9 + 0x160U >> 6);
    } while ((longlong)_Var7 < (longlong)(int)uVar3);
  }
  return _Var8;
}

// SInt32SizeWithPackedTagSize @ 14fa7e0d0

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::SInt32SizeWithPackedTagSize(class
   google::protobuf::RepeatedField<int> const & __ptr64,unsigned __int64,class
   google::protobuf::internal::CachedSize const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::SInt32SizeWithPackedTagSize
          (RepeatedField<int> *param_1,__uint64 param_2,CachedSize *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  
  uVar4 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  uVar2 = (uint)uVar4 & 3;
  bVar9 = ~((byte)uVar4 >> 2) & 1;
  uVar5 = uVar2;
  if (bVar9 == 0) {
    uVar5 = *piVar1;
  }
  if (uVar5 != 0) {
    lVar7 = 0;
    if (bVar9 == 0) {
      uVar2 = *piVar1;
    }
    lVar8 = lVar7;
    if (0 < (int)uVar2) {
      do {
        piVar3 = piVar1;
        if (bVar9 == 0) {
          piVar3 = (int *)(uVar4 & 0xfffffffffffffff8);
        }
        uVar5 = piVar3[lVar8] >> 0x1f ^ piVar3[lVar8] * 2 | 1;
        if (__isa_available < 5) {
          iVar6 = 0x1f;
          if (uVar5 != 0) {
            for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          iVar6 = 0x1f - iVar6;
        }
        else {
          iVar6 = LZCOUNT(uVar5);
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + (ulonglong)(iVar6 * -9 + 0x160U >> 6);
      } while (lVar8 < (int)uVar2);
    }
    uVar4 = (longlong)(int)SUB84(lVar7,0) | 1;
    param_3->atom_ = SUB84(lVar7,0);
    if (__isa_available < 5) {
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = 0x3f - (int)lVar8;
    }
    else {
      iVar6 = (int)LZCOUNT(uVar4);
    }
    return (ulonglong)(iVar6 * -9 + 0x280U >> 6) + lVar7 + param_2;
  }
  if (param_3->atom_ != (atomic<int>)0x0) {
    param_3->atom_ = (atomic<int>)0x0;
  }
  return 0;
}

// SInt64Size @ 14fa7e1f0

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::SInt64Size(class
   google::protobuf::RepeatedField<__int64> const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::SInt64Size(RepeatedField<__int64> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  __uint64 _Var8;
  __uint64 _Var9;
  byte bVar10;
  
  uVar2 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  _Var8 = 0;
  bVar10 = ~((byte)uVar2 >> 2) & 1;
  if (bVar10 == 0) {
    uVar4 = *piVar1;
  }
  else {
    uVar4 = (uint)uVar2 & 3;
  }
  _Var9 = _Var8;
  if (0 < (int)uVar4) {
    do {
      piVar7 = (int *)(uVar2 & 0xfffffffffffffff8);
      if (bVar10 != 0) {
        piVar7 = piVar1;
      }
      uVar6 = *(longlong *)(piVar7 + _Var8 * 2) >> 0x3f ^ *(longlong *)(piVar7 + _Var8 * 2) * 2 | 1;
      if (__isa_available < 5) {
        lVar3 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar5 = 0x3f - (int)lVar3;
      }
      else {
        iVar5 = (int)LZCOUNT(uVar6);
      }
      _Var8 = _Var8 + 1;
      _Var9 = _Var9 + (iVar5 * -9 + 0x280U >> 6);
    } while ((longlong)_Var8 < (longlong)(int)uVar4);
  }
  return _Var9;
}

// SInt64SizeWithPackedTagSize @ 14fa7e2a0

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::SInt64SizeWithPackedTagSize(class
   google::protobuf::RepeatedField<__int64> const & __ptr64,unsigned __int64,class
   google::protobuf::internal::CachedSize const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::SInt64SizeWithPackedTagSize
          (RepeatedField<__int64> *param_1,__uint64 param_2,CachedSize *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  byte bVar11;
  
  uVar5 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  uVar3 = (uint)uVar5 & 3;
  bVar11 = ~((byte)uVar5 >> 2) & 1;
  uVar6 = uVar3;
  if (bVar11 == 0) {
    uVar6 = *piVar1;
  }
  if (uVar6 != 0) {
    lVar8 = 0;
    if (bVar11 == 0) {
      uVar3 = *piVar1;
    }
    lVar9 = lVar8;
    if (0 < (int)uVar3) {
      do {
        piVar4 = piVar1;
        if (bVar11 == 0) {
          piVar4 = (int *)(uVar5 & 0xfffffffffffffff8);
        }
        uVar7 = *(longlong *)(piVar4 + lVar9 * 2) >> 0x3f ^ *(longlong *)(piVar4 + lVar9 * 2) * 2 |
                1;
        if (__isa_available < 5) {
          lVar2 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar10 = 0x3f - (int)lVar2;
        }
        else {
          iVar10 = (int)LZCOUNT(uVar7);
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + (ulonglong)(iVar10 * -9 + 0x280U >> 6);
      } while (lVar9 < (int)uVar3);
    }
    uVar5 = (longlong)(int)SUB84(lVar8,0) | 1;
    param_3->atom_ = SUB84(lVar8,0);
    if (__isa_available < 5) {
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar10 = 0x3f - (int)lVar9;
    }
    else {
      iVar10 = (int)LZCOUNT(uVar5);
    }
    return (ulonglong)(iVar10 * -9 + 0x280U >> 6) + lVar8 + param_2;
  }
  if (param_3->atom_ != (atomic<int>)0x0) {
    param_3->atom_ = (atomic<int>)0x0;
  }
  return 0;
}

// SetNonZero @ 14fa7e3d0

/* public: void __cdecl google::protobuf::internal::CachedSize::SetNonZero(int)const __ptr64 */

void __thiscall google::protobuf::internal::CachedSize::SetNonZero(CachedSize *this,int param_1)

{
  this->atom_ = (atomic<int>)param_1;
  return;
}

// SkipField @ 14fa7e3e0

/* public: virtual bool __cdecl
   google::protobuf::internal::CodedOutputStreamFieldSkipper::SkipField(class
   google::protobuf::io::CodedInputStream * __ptr64,unsigned int) __ptr64 */

bool __thiscall
google::protobuf::internal::CodedOutputStreamFieldSkipper::SkipField
          (CodedOutputStreamFieldSkipper *this,CodedInputStream *param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = WireFormatLite::SkipField(param_1,param_2,*(CodedOutputStream **)(this + 8));
  return bVar1;
}

// SkipField @ 14fa7e400

/* public: virtual bool __cdecl google::protobuf::internal::FieldSkipper::SkipField(class
   google::protobuf::io::CodedInputStream * __ptr64,unsigned int) __ptr64 */

bool __thiscall
google::protobuf::internal::FieldSkipper::SkipField
          (FieldSkipper *this,CodedInputStream *param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = WireFormatLite::SkipField(param_1,param_2);
  return bVar1;
}

// SkipField @ 14fa7e420

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::SkipField(class
   google::protobuf::io::CodedInputStream * __ptr64,unsigned int) */

bool __cdecl
google::protobuf::internal::WireFormatLite::SkipField(CodedInputStream *param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  bool bVar3;
  __int64 _Var4;
  uint uVar5;
  int iVar6;
  uint local_res10 [2];
  __uint64 local_res18 [2];
  pair<unsigned___int64,bool> local_18;
  
  if (7 < param_2) {
    switch(param_2 & 7) {
    case 0:
      pbVar2 = param_1->buffer_;
      if ((pbVar2 < param_1->buffer_end_) && (*pbVar2 < 0x80)) {
        param_1->buffer_ = pbVar2 + 1;
        return true;
      }
      io::CodedInputStream::ReadVarint64Fallback(param_1,&local_18);
      break;
    case 1:
      if (7 < *(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_) {
        param_1->buffer_ = param_1->buffer_ + 8;
        return true;
      }
      local_18.second = io::CodedInputStream::ReadLittleEndian64Fallback(param_1,local_res18);
      break;
    case 2:
      pbVar2 = param_1->buffer_;
      uVar5 = 0;
      if ((pbVar2 < param_1->buffer_end_) && (uVar5 = (uint)*pbVar2, *pbVar2 < 0x80)) {
        param_1->buffer_ = pbVar2 + 1;
      }
      else {
        _Var4 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar5);
        uVar5 = (uint)_Var4;
        if (_Var4 < 0) {
          return false;
        }
      }
      if ((int)uVar5 < 0) {
        return false;
      }
      iVar6 = *(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_;
      if ((int)uVar5 <= iVar6) {
        param_1->buffer_ = param_1->buffer_ + (int)uVar5;
        return true;
      }
      local_18.second = io::CodedInputStream::SkipFallback(param_1,uVar5,iVar6);
      break;
    case 3:
      piVar1 = &param_1->recursion_budget_;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        return false;
      }
      bVar3 = SkipMessage(param_1);
      if (bVar3) {
        if (param_1->recursion_budget_ < param_1->recursion_limit_) {
          param_1->recursion_budget_ = param_1->recursion_budget_ + 1;
        }
        if (param_1->last_tag_ == (param_2 & 0xfffffffc | 4)) {
          return true;
        }
        return false;
      }
      return false;
    default:
      goto switchD_14fa7e45a_caseD_4;
    case 5:
      if (3 < *(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_) {
        param_1->buffer_ = param_1->buffer_ + 4;
        return true;
      }
      local_18.second = io::CodedInputStream::ReadLittleEndian32Fallback(param_1,local_res10);
    }
    if (local_18.second != false) {
      return true;
    }
  }
switchD_14fa7e45a_caseD_4:
  return false;
}

// SkipField @ 14fa7e5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::SkipField(class
   google::protobuf::io::CodedInputStream * __ptr64,unsigned int,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::SkipField
          (CodedInputStream *param_1,uint param_2,CodedOutputStream *param_3)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  ulonglong uVar5;
  uchar *puVar6;
  int iVar7;
  undefined8 uVar8;
  ulong64 uVar9;
  uint uVar10;
  undefined1 auStack_68 [40];
  _Bxty local_40;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_2 < 8) {
    return false;
  }
  switch(param_2 & 7) {
  case 0:
    pbVar3 = param_1->buffer_;
    if ((pbVar3 < param_1->buffer_end_) && (bVar2 = *pbVar3, bVar2 < 0x80)) {
      param_1->buffer_ = pbVar3 + 1;
      local_40._Ptr = (char *)(ulonglong)bVar2;
    }
    else {
      io::CodedInputStream::ReadVarint64Fallback(param_1,(pair<unsigned___int64,bool> *)&local_40);
      if (local_40._Buf[8] == '\0') {
        return false;
      }
    }
    io::CodedOutputStream::WriteVarint32(param_3,param_2);
    io::CodedOutputStream::WriteVarint64(param_3,(__uint64)local_40._Ptr);
    return true;
  case 1:
    if (*(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_ < 8) {
      bVar4 = io::CodedInputStream::ReadLittleEndian64Fallback(param_1,(__uint64 *)local_40._Buf);
      if (!bVar4) {
        return false;
      }
    }
    else {
      local_40._Ptr = (char *)*(undefined8 *)param_1->buffer_;
      param_1->buffer_ = (uchar *)((longlong)param_1->buffer_ + 8);
    }
    io::CodedOutputStream::WriteVarint32(param_3,param_2);
    io::CodedOutputStream::WriteLittleEndian64(param_3,(__uint64)local_40._Ptr);
    return true;
  case 2:
    uVar10 = 0;
    pbVar3 = param_1->buffer_;
    if (pbVar3 < param_1->buffer_end_) {
      bVar2 = *pbVar3;
      uVar5 = (ulonglong)bVar2;
      uVar10 = (uint)bVar2;
      if (bVar2 < 0x80) {
        param_1->buffer_ = pbVar3 + 1;
        goto LAB_14fa7e6ef;
      }
    }
    uVar5 = io::CodedInputStream::ReadVarint32Fallback(param_1,uVar10);
    if (-1 < (longlong)uVar5) {
LAB_14fa7e6ef:
      io::CodedOutputStream::WriteVarint32(param_3,param_2);
      io::CodedOutputStream::WriteVarint32(param_3,(uint)uVar5);
      local_40._8_8_ = 0;
      local_30 = 0;
      local_28 = 0xf;
      local_40._Ptr = (char *)0x0;
      bVar4 = io::CodedInputStream::ReadString
                        (param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_40,(uint)uVar5);
      if (bVar4) {
        uVar8 = &local_40;
        if (0xf < local_28) {
          uVar8 = local_40._Ptr;
        }
        puVar6 = param_3->cur_;
        iVar7 = (int)local_30;
        if ((longlong)(param_3->impl_).end_ - (longlong)puVar6 < (longlong)iVar7) {
          puVar6 = io::EpsCopyOutputStream::WriteRawFallback
                             (&param_3->impl_,(void *)uVar8,iVar7,puVar6);
        }
        else {
          memcpy(puVar6,(void *)uVar8,local_30 & 0xffffffff);
          puVar6 = puVar6 + iVar7;
        }
        param_3->cur_ = puVar6;
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (0xf < local_28) {
        uVar9 = local_28 + 1;
        uVar8 = local_40._Ptr;
        if (0xfff < uVar9) {
          uVar9 = local_28 + 0x28;
          uVar8 = *(undefined8 *)(local_40._Ptr + -8);
          if ((char *)0x1f < local_40._Ptr + (-8 - uVar8)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete((void *)uVar8,uVar9);
        return bVar4;
      }
      return bVar4;
    }
    break;
  case 3:
    io::CodedOutputStream::WriteVarint32(param_3,param_2);
    piVar1 = &param_1->recursion_budget_;
    *piVar1 = *piVar1 + -1;
    if ((-1 < *piVar1) && (bVar4 = SkipMessage(param_1,param_3), bVar4)) {
      if (param_1->recursion_budget_ < param_1->recursion_limit_) {
        param_1->recursion_budget_ = param_1->recursion_budget_ + 1;
      }
      if (param_1->last_tag_ == (param_2 & 0xfffffffc | 4)) {
        return true;
      }
    }
    break;
  case 5:
    if (*(int *)&param_1->buffer_end_ - *(int *)&param_1->buffer_ < 4) {
      bVar4 = io::CodedInputStream::ReadLittleEndian32Fallback(param_1,(uint *)local_40._Buf);
      if (!bVar4) {
        return false;
      }
    }
    else {
      local_40._0_4_ = *(undefined4 *)param_1->buffer_;
      param_1->buffer_ = param_1->buffer_ + 4;
    }
    io::CodedOutputStream::WriteVarint32(param_3,param_2);
    io::CodedOutputStream::WriteLittleEndian32(param_3,local_40._0_4_);
    return true;
  }
  return false;
}

// SkipMessage @ 14fa7e890

/* public: virtual bool __cdecl
   google::protobuf::internal::CodedOutputStreamFieldSkipper::SkipMessage(class
   google::protobuf::io::CodedInputStream * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::CodedOutputStreamFieldSkipper::SkipMessage
          (CodedOutputStreamFieldSkipper *this,CodedInputStream *param_1)

{
  bool bVar1;
  
  bVar1 = WireFormatLite::SkipMessage(param_1,*(CodedOutputStream **)(this + 8));
  return bVar1;
}

// SkipMessage @ 14fa7e8b0

/* public: virtual bool __cdecl google::protobuf::internal::FieldSkipper::SkipMessage(class
   google::protobuf::io::CodedInputStream * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::FieldSkipper::SkipMessage(FieldSkipper *this,CodedInputStream *param_1)

{
  bool bVar1;
  
  bVar1 = WireFormatLite::SkipMessage(param_1);
  return bVar1;
}

// SkipMessage @ 14fa7e8c0

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::SkipMessage(class
   google::protobuf::io::CodedInputStream * __ptr64) */

bool __cdecl google::protobuf::internal::WireFormatLite::SkipMessage(CodedInputStream *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  
  while( true ) {
    pbVar1 = param_1->buffer_;
    uVar3 = 0;
    if ((pbVar1 < param_1->buffer_end_) && (uVar3 = (uint)*pbVar1, *pbVar1 < 0x80)) {
      param_1->buffer_ = pbVar1 + 1;
    }
    else {
      uVar3 = io::CodedInputStream::ReadTagFallback(param_1,uVar3);
    }
    param_1->last_tag_ = uVar3;
    if ((uVar3 == 0) || (((byte)uVar3 & 7) == 4)) break;
    bVar2 = SkipField(param_1,uVar3);
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

// SkipMessage @ 14fa7e930

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::SkipMessage(class
   google::protobuf::io::CodedInputStream * __ptr64,class google::protobuf::io::CodedOutputStream *
   __ptr64) */

bool __cdecl
google::protobuf::internal::WireFormatLite::SkipMessage
          (CodedInputStream *param_1,CodedOutputStream *param_2)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  
  do {
    pbVar1 = param_1->buffer_;
    uVar3 = 0;
    if ((pbVar1 < param_1->buffer_end_) && (uVar3 = (uint)*pbVar1, *pbVar1 < 0x80)) {
      param_1->buffer_ = pbVar1 + 1;
    }
    else {
      uVar3 = io::CodedInputStream::ReadTagFallback(param_1,uVar3);
    }
    param_1->last_tag_ = uVar3;
    if (uVar3 == 0) {
      return true;
    }
    if (((byte)uVar3 & 7) == 4) {
      io::CodedOutputStream::WriteVarint32(param_2,uVar3);
      return true;
    }
    bVar2 = SkipField(param_1,uVar3,param_2);
  } while (bVar2);
  return false;
}

// SkipUnknownEnum @ 14fa7e9b0

/* public: virtual void __cdecl
   google::protobuf::internal::CodedOutputStreamFieldSkipper::SkipUnknownEnum(int,int) __ptr64 */

void __thiscall
google::protobuf::internal::CodedOutputStreamFieldSkipper::SkipUnknownEnum
          (CodedOutputStreamFieldSkipper *this,int param_1,int param_2)

{
  EpsCopyOutputStream *pEVar1;
  byte *pbVar2;
  ulonglong uVar3;
  
  pEVar1 = *(EpsCopyOutputStream **)(this + 8);
  uVar3 = (ulonglong)param_2;
  pbVar2 = pEVar1[1].end_;
  if (pEVar1->end_ <= pbVar2) {
    pbVar2 = io::EpsCopyOutputStream::EnsureSpaceFallback(pEVar1,pbVar2);
  }
  for (; 0x7f < (uint)param_1; param_1 = (uint)param_1 >> 7) {
    *pbVar2 = (byte)param_1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)param_1;
  pEVar1[1].end_ = pbVar2 + 1;
  pEVar1 = *(EpsCopyOutputStream **)(this + 8);
  pbVar2 = pEVar1[1].end_;
  if (pEVar1->end_ <= pbVar2) {
    pbVar2 = io::EpsCopyOutputStream::EnsureSpaceFallback(pEVar1,pbVar2);
  }
  for (; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *pbVar2 = (byte)uVar3 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar3;
  pEVar1[1].end_ = pbVar2 + 1;
  return;
}

// SkipUnknownEnum @ 14fa7ea80

/* public: virtual void __cdecl google::protobuf::internal::FieldSkipper::SkipUnknownEnum(int,int)
   __ptr64 */

void __thiscall
google::protobuf::internal::FieldSkipper::SkipUnknownEnum
          (FieldSkipper *this,int param_1,int param_2)

{
  return;
}

// UInt32Size @ 14fa7ea90

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::UInt32Size(class
   google::protobuf::RepeatedField<unsigned int> const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::UInt32Size(RepeatedField<unsigned_int> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  __uint64 _Var7;
  __uint64 _Var8;
  byte bVar9;
  
  uVar2 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  _Var7 = 0;
  bVar9 = ~((byte)uVar2 >> 2) & 1;
  if (bVar9 == 0) {
    uVar3 = *piVar1;
  }
  else {
    uVar3 = (uint)uVar2 & 3;
  }
  _Var8 = _Var7;
  if (0 < (int)uVar3) {
    do {
      piVar4 = (int *)(uVar2 & 0xfffffffffffffff8);
      if (bVar9 != 0) {
        piVar4 = piVar1;
      }
      uVar5 = piVar4[_Var7] | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar5);
      }
      _Var7 = _Var7 + 1;
      _Var8 = _Var8 + (iVar6 * -9 + 0x160U >> 6);
    } while ((longlong)_Var7 < (longlong)(int)uVar3);
  }
  return _Var8;
}

// UInt32SizeWithPackedTagSize @ 14fa7eb30

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::UInt32SizeWithPackedTagSize(class
   google::protobuf::RepeatedField<unsigned int> const & __ptr64,unsigned __int64,class
   google::protobuf::internal::CachedSize const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::UInt32SizeWithPackedTagSize
          (RepeatedField<unsigned_int> *param_1,__uint64 param_2,CachedSize *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  
  uVar4 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  uVar2 = (uint)uVar4 & 3;
  bVar9 = ~((byte)uVar4 >> 2) & 1;
  uVar5 = uVar2;
  if (bVar9 == 0) {
    uVar5 = *piVar1;
  }
  if (uVar5 != 0) {
    lVar7 = 0;
    if (bVar9 == 0) {
      uVar2 = *piVar1;
    }
    lVar8 = lVar7;
    if (0 < (int)uVar2) {
      do {
        piVar3 = piVar1;
        if (bVar9 == 0) {
          piVar3 = (int *)(uVar4 & 0xfffffffffffffff8);
        }
        uVar5 = piVar3[lVar8] | 1;
        if (__isa_available < 5) {
          iVar6 = 0x1f;
          if (uVar5 != 0) {
            for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          iVar6 = 0x1f - iVar6;
        }
        else {
          iVar6 = LZCOUNT(uVar5);
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + (ulonglong)(iVar6 * -9 + 0x160U >> 6);
      } while (lVar8 < (int)uVar2);
    }
    uVar4 = (longlong)(int)SUB84(lVar7,0) | 1;
    param_3->atom_ = SUB84(lVar7,0);
    if (__isa_available < 5) {
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = 0x3f - (int)lVar8;
    }
    else {
      iVar6 = (int)LZCOUNT(uVar4);
    }
    return (ulonglong)(iVar6 * -9 + 0x280U >> 6) + lVar7 + param_2;
  }
  if (param_3->atom_ != (atomic<int>)0x0) {
    param_3->atom_ = (atomic<int>)0x0;
  }
  return 0;
}

// UInt64Size @ 14fa7ec40

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::UInt64Size(class
   google::protobuf::RepeatedField<unsigned __int64> const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::UInt64Size(RepeatedField<unsigned___int64> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  __uint64 _Var8;
  __uint64 _Var9;
  byte bVar10;
  
  uVar2 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  _Var8 = 0;
  bVar10 = ~((byte)uVar2 >> 2) & 1;
  if (bVar10 == 0) {
    uVar4 = *piVar1;
  }
  else {
    uVar4 = (uint)uVar2 & 3;
  }
  _Var9 = _Var8;
  if (0 < (int)uVar4) {
    do {
      piVar6 = (int *)(uVar2 & 0xfffffffffffffff8);
      if (bVar10 != 0) {
        piVar6 = piVar1;
      }
      uVar7 = *(ulonglong *)(piVar6 + _Var8 * 2) | 1;
      if (__isa_available < 5) {
        lVar3 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar5 = 0x3f - (int)lVar3;
      }
      else {
        iVar5 = (int)LZCOUNT(uVar7);
      }
      _Var8 = _Var8 + 1;
      _Var9 = _Var9 + (iVar5 * -9 + 0x280U >> 6);
    } while ((longlong)_Var8 < (longlong)(int)uVar4);
  }
  return _Var9;
}

// UInt64SizeWithPackedTagSize @ 14fa7ece0

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::UInt64SizeWithPackedTagSize(class
   google::protobuf::RepeatedField<unsigned __int64> const & __ptr64,unsigned __int64,class
   google::protobuf::internal::CachedSize const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::UInt64SizeWithPackedTagSize
          (RepeatedField<unsigned___int64> *param_1,__uint64 param_2,CachedSize *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  
  uVar5 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  piVar1 = &(param_1->soo_rep_).field0_0x0.long_rep.size;
  uVar3 = (uint)uVar5 & 3;
  bVar9 = ~((byte)uVar5 >> 2) & 1;
  uVar6 = uVar3;
  if (bVar9 == 0) {
    uVar6 = *piVar1;
  }
  if (uVar6 != 0) {
    lVar8 = 0;
    if (bVar9 == 0) {
      uVar3 = *piVar1;
    }
    lVar10 = lVar8;
    if (0 < (int)uVar3) {
      do {
        piVar4 = piVar1;
        if (bVar9 == 0) {
          piVar4 = (int *)(uVar5 & 0xfffffffffffffff8);
        }
        uVar7 = *(ulonglong *)(piVar4 + lVar10 * 2) | 1;
        if (__isa_available < 5) {
          lVar2 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar11 = 0x3f - (int)lVar2;
        }
        else {
          iVar11 = (int)LZCOUNT(uVar7);
        }
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + (ulonglong)(iVar11 * -9 + 0x280U >> 6);
      } while (lVar10 < (int)uVar3);
    }
    uVar5 = (longlong)(int)SUB84(lVar8,0) | 1;
    param_3->atom_ = SUB84(lVar8,0);
    if (__isa_available < 5) {
      lVar10 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar11 = 0x3f - (int)lVar10;
    }
    else {
      iVar11 = (int)LZCOUNT(uVar5);
    }
    return (ulonglong)(iVar11 * -9 + 0x280U >> 6) + lVar8 + param_2;
  }
  if (param_3->atom_ != (atomic<int>)0x0) {
    param_3->atom_ = (atomic<int>)0x0;
  }
  return 0;
}

// VerifyUtf8String @ 14fa7ee00

/* public: static bool __cdecl google::protobuf::internal::WireFormatLite::VerifyUtf8String(char
   const * __ptr64,int,enum google::protobuf::internal::WireFormatLite::Operation,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

bool __cdecl
google::protobuf::internal::WireFormatLite::VerifyUtf8String
          (char *param_1,int param_2,Operation param_3,
          basic_string_view<char,std::char_traits<char>_> *param_4)

{
  bool bVar1;
  char *pcVar2;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_28._Mysize = (ulong64)param_2;
  local_28._Mydata = param_1;
  bVar1 = utf8_range::IsStructurallyValid(&local_28);
  if (!bVar1) {
    pcVar2 = (char *)0x0;
    if (param_3 == PARSE) {
      pcVar2 = "parsing";
    }
    else if (param_3 == SERIALIZE) {
      pcVar2 = "serializing";
    }
    local_18._Mydata = param_4->_Mydata;
    local_18._Mysize = param_4->_Mysize;
    local_28._Mydata = "";
    local_28._Mysize = 0;
    PrintUTF8ErrorLog(&local_28,&local_18,pcVar2,false);
    return false;
  }
  return true;
}

// WriteBool @ 14fa7eeb0

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteBool(int,bool,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteBool
          (int param_1,bool param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  uVar4 = param_1 * 8;
  uVar5 = (ulonglong)uVar4;
  while (bVar2 = (byte)uVar5, 0x7f < uVar4) {
    uVar5 = uVar5 >> 7;
    *pbVar1 = bVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
    uVar4 = (uint)uVar5;
  }
  *pbVar1 = bVar2;
  pbVar1 = pbVar1 + 1;
  param_3->cur_ = pbVar1;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  bVar3 = param_2;
  if (0x7f < param_2) {
    bVar3 = false;
    *pbVar1 = param_2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = bVar3;
  param_3->cur_ = pbVar1 + 1;
  return;
}

// WriteBoolArray @ 14fa7ef70

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteBoolArray(bool const
   * __ptr64,int,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteBoolArray
          (bool *param_1,int param_2,CodedOutputStream *param_3)

{
  uchar *puVar1;
  
  puVar1 = param_3->cur_;
  if ((longlong)(param_3->impl_).end_ - (longlong)puVar1 < (longlong)param_2) {
    puVar1 = io::EpsCopyOutputStream::WriteRawFallback(&param_3->impl_,param_1,param_2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)(uint)param_2);
    puVar1 = puVar1 + param_2;
  }
  param_3->cur_ = puVar1;
  return;
}

// WriteBoolNoTag @ 14fa7efe0

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteBoolNoTag(bool,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteBoolNoTag(bool param_1,CodedOutputStream *param_2)

{
  bool bVar1;
  byte *pbVar2;
  
  pbVar2 = param_2->cur_;
  if ((param_2->impl_).end_ <= pbVar2) {
    pbVar2 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,pbVar2);
  }
  bVar1 = param_1;
  if (0x7f < param_1) {
    bVar1 = false;
    *pbVar2 = param_1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = bVar1;
  param_2->cur_ = pbVar2 + 1;
  return;
}

// WriteBytes @ 14fa7f050

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteBytes(int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteBytes
          (int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          CodedOutputStream *param_3)

{
  uchar **ppuVar1;
  ulonglong uVar2;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var3;
  byte *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  uint uVar6;
  int iVar7;
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessageFatal local_28;
  
  pbVar4 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar4) {
    pbVar4 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar4);
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *pbVar4 = (byte)uVar6 | 0x80;
    pbVar4 = pbVar4 + 1;
  }
  *pbVar4 = (byte)uVar6;
  ppuVar1 = &param_3->cur_;
  *ppuVar1 = pbVar4 + 1;
  uVar2 = (param_2->_Mypair)._Myval2._Mysize;
  if ((0x7fffffff < uVar2) &&
     (pbVar5 = absl::lts_20240722::log_internal::
               MakeCheckOpString<unsigned___int64,unsigned___int64>
                         (uVar2,0x7fffffff,"value.size() <= kInt32MaxSize"),
     pbVar5 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_38._Mydata = (char *)pbVar5;
    if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
      local_38._Mydata = (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    local_38._Mysize = (pbVar5->_Mypair)._Myval2._Mysize;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              (&local_28,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format_lite.cc"
               ,0x1ed,&local_38);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_28);
  }
  pbVar4 = *ppuVar1;
  uVar6 = (uint)(param_2->_Mypair)._Myval2._Mysize;
  if ((param_3->impl_).end_ <= pbVar4) {
    pbVar4 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar4);
  }
  *ppuVar1 = pbVar4;
  for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *pbVar4 = (byte)uVar6 | 0x80;
    pbVar4 = pbVar4 + 1;
  }
  p_Var3 = &param_2->_Mypair;
  *pbVar4 = (byte)uVar6;
  pbVar4 = pbVar4 + 1;
  param_3->cur_ = pbVar4;
  if (0xf < (param_2->_Mypair)._Myval2._Myres) {
    param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar2 = (p_Var3->_Myval2)._Mysize;
  iVar7 = (int)uVar2;
  if ((longlong)(param_3->impl_).end_ - (longlong)pbVar4 < (longlong)iVar7) {
    pbVar4 = io::EpsCopyOutputStream::WriteRawFallback(&param_3->impl_,param_2,iVar7,pbVar4);
  }
  else {
    memcpy(pbVar4,param_2,uVar2 & 0xffffffff);
    pbVar4 = pbVar4 + iVar7;
  }
  param_3->cur_ = pbVar4;
  return;
}

// WriteBytesMaybeAliased @ 14fa7f200

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased
          (int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          CodedOutputStream *param_3)

{
  uchar **ppuVar1;
  ulonglong uVar2;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var3;
  byte *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  uint uVar6;
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessageFatal local_28;
  
  pbVar4 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar4) {
    pbVar4 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar4);
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *pbVar4 = (byte)uVar6 | 0x80;
    pbVar4 = pbVar4 + 1;
  }
  *pbVar4 = (byte)uVar6;
  ppuVar1 = &param_3->cur_;
  *ppuVar1 = pbVar4 + 1;
  uVar2 = (param_2->_Mypair)._Myval2._Mysize;
  if ((0x7fffffff < uVar2) &&
     (pbVar5 = absl::lts_20240722::log_internal::
               MakeCheckOpString<unsigned___int64,unsigned___int64>
                         (uVar2,0x7fffffff,"value.size() <= kInt32MaxSize"),
     pbVar5 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_38._Mydata = (char *)pbVar5;
    if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
      local_38._Mydata = (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    local_38._Mysize = (pbVar5->_Mypair)._Myval2._Mysize;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              (&local_28,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format_lite.cc"
               ,0x1f5,&local_38);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_28);
  }
  pbVar4 = *ppuVar1;
  uVar6 = (uint)(param_2->_Mypair)._Myval2._Mysize;
  if ((param_3->impl_).end_ <= pbVar4) {
    pbVar4 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar4);
  }
  *ppuVar1 = pbVar4;
  for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *pbVar4 = (byte)uVar6 | 0x80;
    pbVar4 = pbVar4 + 1;
  }
  *pbVar4 = (byte)uVar6;
  param_3->cur_ = pbVar4 + 1;
  p_Var3 = &param_2->_Mypair;
  if (0xf < (param_2->_Mypair)._Myval2._Myres) {
    param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  io::CodedOutputStream::WriteRawMaybeAliased(param_3,param_2,(int)(p_Var3->_Myval2)._Mysize);
  return;
}

// WriteDouble @ 14fa7f370

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteDouble(int,double,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteDouble
          (int param_1,double param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  uint uVar2;
  double *pdVar3;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (uVar2 = param_1 * 8 | 1; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar1 = (byte)uVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar2;
  pdVar3 = (double *)(pbVar1 + 1);
  param_3->cur_ = (uchar *)pdVar3;
  if ((param_3->impl_).end_ <= pdVar3) {
    pdVar3 = (double *)io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,(uchar *)pdVar3)
    ;
  }
  *pdVar3 = param_2;
  param_3->cur_ = (uchar *)(pdVar3 + 1);
  return;
}

// WriteDoubleArray @ 14fa7f400

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteDoubleArray(double
   const * __ptr64,int,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteDoubleArray
          (double *param_1,int param_2,CodedOutputStream *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  puVar1 = param_3->cur_;
  uVar2 = param_2 * 8;
  if ((longlong)(param_3->impl_).end_ - (longlong)puVar1 < (longlong)(int)uVar2) {
    puVar1 = io::EpsCopyOutputStream::WriteRawFallback(&param_3->impl_,param_1,uVar2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)uVar2);
    puVar1 = puVar1 + (int)uVar2;
  }
  param_3->cur_ = puVar1;
  return;
}

// WriteDoubleNoTag @ 14fa7f470

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteDoubleNoTag(double,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteDoubleNoTag
          (double param_1,CodedOutputStream *param_2)

{
  double *pdVar1;
  
  pdVar1 = (double *)param_2->cur_;
  if ((param_2->impl_).end_ <= pdVar1) {
    pdVar1 = (double *)io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,(uchar *)pdVar1)
    ;
  }
  *pdVar1 = param_1;
  param_2->cur_ = (uchar *)(pdVar1 + 1);
  return;
}

// WriteEnum @ 14fa7f4c0

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteEnum(int,int,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteEnum
          (int param_1,int param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  uVar3 = param_1 * 8;
  uVar4 = (ulonglong)uVar3;
  while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
    uVar4 = uVar4 >> 7;
    *pbVar1 = bVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
    uVar3 = (uint)uVar4;
  }
  *pbVar1 = bVar2;
  pbVar1 = pbVar1 + 1;
  param_3->cur_ = pbVar1;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
    *pbVar1 = (byte)uVar5 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar5;
  param_3->cur_ = pbVar1 + 1;
  return;
}

// WriteEnumNoTag @ 14fa7f580

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteEnumNoTag(int,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteEnumNoTag(int param_1,CodedOutputStream *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = param_2->cur_;
  uVar2 = (ulonglong)param_1;
  if ((param_2->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,pbVar1);
  }
  for (; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar1 = (byte)uVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar2;
  param_2->cur_ = pbVar1 + 1;
  return;
}

// WriteFixed32 @ 14fa7f600

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteFixed32(int,unsigned
   int,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteFixed32
          (int param_1,uint param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (uVar3 = param_1 * 8 | 5; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *pbVar1 = (byte)uVar3 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  puVar2 = (uint *)(pbVar1 + 1);
  *pbVar1 = (byte)uVar3;
  param_3->cur_ = (uchar *)puVar2;
  if ((param_3->impl_).end_ <= puVar2) {
    puVar2 = (uint *)io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,(uchar *)puVar2);
  }
  *puVar2 = param_2;
  param_3->cur_ = (uchar *)(puVar2 + 1);
  return;
}

// WriteFixed32Array @ 14fa7f6a0

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteFixed32Array(unsigned int const *
   __ptr64,int,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteFixed32Array
          (uint *param_1,int param_2,CodedOutputStream *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  puVar1 = param_3->cur_;
  uVar2 = param_2 * 4;
  if ((longlong)(param_3->impl_).end_ - (longlong)puVar1 < (longlong)(int)uVar2) {
    puVar1 = io::EpsCopyOutputStream::WriteRawFallback(&param_3->impl_,param_1,uVar2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)uVar2);
    puVar1 = puVar1 + (int)uVar2;
  }
  param_3->cur_ = puVar1;
  return;
}

// WriteFixed32NoTag @ 14fa7f710

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteFixed32NoTag(unsigned int,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteFixed32NoTag
          (uint param_1,CodedOutputStream *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)param_2->cur_;
  if ((param_2->impl_).end_ <= puVar1) {
    puVar1 = (uint *)io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,(uchar *)puVar1);
  }
  *puVar1 = param_1;
  param_2->cur_ = (uchar *)(puVar1 + 1);
  return;
}

// WriteFixed64 @ 14fa7f750

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteFixed64(int,unsigned
   __int64,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteFixed64
          (int param_1,__uint64 param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  __uint64 *p_Var2;
  uint uVar3;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (uVar3 = param_1 * 8 | 1; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *pbVar1 = (byte)uVar3 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  p_Var2 = (__uint64 *)(pbVar1 + 1);
  *pbVar1 = (byte)uVar3;
  param_3->cur_ = (uchar *)p_Var2;
  if ((param_3->impl_).end_ <= p_Var2) {
    p_Var2 = (__uint64 *)
             io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,(uchar *)p_Var2);
  }
  *p_Var2 = param_2;
  param_3->cur_ = (uchar *)(p_Var2 + 1);
  return;
}

// WriteFixed64Array @ 14fa7f7f0

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteFixed64Array(unsigned __int64 const *
   __ptr64,int,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteFixed64Array
          (__uint64 *param_1,int param_2,CodedOutputStream *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  puVar1 = param_3->cur_;
  uVar2 = param_2 * 8;
  if ((longlong)(param_3->impl_).end_ - (longlong)puVar1 < (longlong)(int)uVar2) {
    puVar1 = io::EpsCopyOutputStream::WriteRawFallback(&param_3->impl_,param_1,uVar2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)uVar2);
    puVar1 = puVar1 + (int)uVar2;
  }
  param_3->cur_ = puVar1;
  return;
}

// WriteFixed64NoTag @ 14fa7f860

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteFixed64NoTag(unsigned __int64,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteFixed64NoTag
          (__uint64 param_1,CodedOutputStream *param_2)

{
  __uint64 *p_Var1;
  
  p_Var1 = (__uint64 *)param_2->cur_;
  if ((param_2->impl_).end_ <= p_Var1) {
    p_Var1 = (__uint64 *)
             io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,(uchar *)p_Var1);
  }
  *p_Var1 = param_1;
  param_2->cur_ = (uchar *)(p_Var1 + 1);
  return;
}

// WriteFloat @ 14fa7f8a0

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteFloat(int,float,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteFloat
          (int param_1,float param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  uint uVar2;
  float *pfVar3;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (uVar2 = param_1 * 8 | 5; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar1 = (byte)uVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar2;
  pfVar3 = (float *)(pbVar1 + 1);
  param_3->cur_ = (uchar *)pfVar3;
  if ((param_3->impl_).end_ <= pfVar3) {
    pfVar3 = (float *)io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,(uchar *)pfVar3);
  }
  *pfVar3 = param_2;
  param_3->cur_ = (uchar *)(pfVar3 + 1);
  return;
}

// WriteFloatArray @ 14fa7f930

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteFloatArray(float
   const * __ptr64,int,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteFloatArray
          (float *param_1,int param_2,CodedOutputStream *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  puVar1 = param_3->cur_;
  uVar2 = param_2 * 4;
  if ((longlong)(param_3->impl_).end_ - (longlong)puVar1 < (longlong)(int)uVar2) {
    puVar1 = io::EpsCopyOutputStream::WriteRawFallback(&param_3->impl_,param_1,uVar2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)uVar2);
    puVar1 = puVar1 + (int)uVar2;
  }
  param_3->cur_ = puVar1;
  return;
}

// WriteFloatNoTag @ 14fa7f9a0

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteFloatNoTag(float,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteFloatNoTag
          (float param_1,CodedOutputStream *param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)param_2->cur_;
  if ((param_2->impl_).end_ <= pfVar1) {
    pfVar1 = (float *)io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,(uchar *)pfVar1);
  }
  *pfVar1 = param_1;
  param_2->cur_ = (uchar *)(pfVar1 + 1);
  return;
}

// WriteGroup @ 14fa7f9f0

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteGroup(int,class
   google::protobuf::MessageLite const & __ptr64,class google::protobuf::io::CodedOutputStream *
   __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteGroup
          (int param_1,MessageLite *param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (uVar2 = param_1 * 8 | 3; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar1 = (byte)uVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar2;
  param_3->cur_ = pbVar1 + 1;
  pbVar1 = (byte *)(**(code **)(param_2->_padding_ + 0x20))(param_2,pbVar1 + 1,param_3);
  param_3->cur_ = pbVar1;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (uVar2 = param_1 * 8 | 4; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar1 = (byte)uVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar2;
  param_3->cur_ = pbVar1 + 1;
  return;
}

// WriteGroupMaybeToArray @ 14fa7fac0

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteGroupMaybeToArray(int,class
   google::protobuf::MessageLite const & __ptr64,class google::protobuf::io::CodedOutputStream *
   __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteGroupMaybeToArray
          (int param_1,MessageLite *param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (uVar2 = param_1 * 8 | 3; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar1 = (byte)uVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar2;
  param_3->cur_ = pbVar1 + 1;
  MessageLite::GetCachedSize(param_2);
  pbVar1 = (byte *)(**(code **)(param_2->_padding_ + 0x20))(param_2,param_3->cur_,param_3);
  param_3->cur_ = pbVar1;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (uVar2 = param_1 * 8 | 4; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar1 = (byte)uVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar2;
  param_3->cur_ = pbVar1 + 1;
  return;
}

// WriteInt32 @ 14fa7fba0

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteInt32(int,int,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteInt32
          (int param_1,int param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  uVar3 = param_1 * 8;
  uVar4 = (ulonglong)uVar3;
  while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
    uVar4 = uVar4 >> 7;
    *pbVar1 = bVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
    uVar3 = (uint)uVar4;
  }
  *pbVar1 = bVar2;
  pbVar1 = pbVar1 + 1;
  param_3->cur_ = pbVar1;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
    *pbVar1 = (byte)uVar5 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar5;
  param_3->cur_ = pbVar1 + 1;
  return;
}

// WriteInt32NoTag @ 14fa7fc60

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteInt32NoTag(int,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteInt32NoTag(int param_1,CodedOutputStream *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = param_2->cur_;
  uVar2 = (ulonglong)param_1;
  if ((param_2->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,pbVar1);
  }
  for (; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar1 = (byte)uVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar2;
  param_2->cur_ = pbVar1 + 1;
  return;
}

// WriteInt64 @ 14fa7fce0

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteInt64(int,__int64,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteInt64
          (int param_1,__int64 param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  uVar3 = param_1 * 8;
  uVar4 = (ulonglong)uVar3;
  while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
    uVar4 = uVar4 >> 7;
    *pbVar1 = bVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
    uVar3 = (uint)uVar4;
  }
  *pbVar1 = bVar2;
  pbVar1 = pbVar1 + 1;
  param_3->cur_ = pbVar1;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (; 0x7f < (ulonglong)param_2; param_2 = (ulonglong)param_2 >> 7) {
    *pbVar1 = (byte)param_2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_2;
  param_3->cur_ = pbVar1 + 1;
  return;
}

// WriteInt64NoTag @ 14fa7fda0

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteInt64NoTag(__int64,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteInt64NoTag
          (__int64 param_1,CodedOutputStream *param_2)

{
  byte *pbVar1;
  
  pbVar1 = param_2->cur_;
  if ((param_2->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,pbVar1);
  }
  for (; 0x7f < (ulonglong)param_1; param_1 = (ulonglong)param_1 >> 7) {
    *pbVar1 = (byte)param_1 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_1;
  param_2->cur_ = pbVar1 + 1;
  return;
}

// WriteLittleEndian32 @ 14fa7fe10

/* public: void __cdecl google::protobuf::io::CodedOutputStream::WriteLittleEndian32(unsigned int)
   __ptr64 */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteLittleEndian32(CodedOutputStream *this,uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)this->cur_;
  if ((this->impl_).end_ <= puVar1) {
    puVar1 = (uint *)EpsCopyOutputStream::EnsureSpaceFallback(&this->impl_,(uchar *)puVar1);
  }
  *puVar1 = param_1;
  this->cur_ = (uchar *)(puVar1 + 1);
  return;
}

// WriteLittleEndian64 @ 14fa7fe50

/* public: void __cdecl google::protobuf::io::CodedOutputStream::WriteLittleEndian64(unsigned
   __int64) __ptr64 */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteLittleEndian64
          (CodedOutputStream *this,__uint64 param_1)

{
  __uint64 *p_Var1;
  
  p_Var1 = (__uint64 *)this->cur_;
  if ((this->impl_).end_ <= p_Var1) {
    p_Var1 = (__uint64 *)EpsCopyOutputStream::EnsureSpaceFallback(&this->impl_,(uchar *)p_Var1);
  }
  *p_Var1 = param_1;
  this->cur_ = (uchar *)(p_Var1 + 1);
  return;
}

// WriteMessage @ 14fa7fe90

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteMessage(int,class
   google::protobuf::MessageLite const & __ptr64,class google::protobuf::io::CodedOutputStream *
   __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteMessage
          (int param_1,MessageLite *param_2,CodedOutputStream *param_3)

{
  uint uVar1;
  byte *pbVar2;
  uchar *puVar3;
  
  pbVar2 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar2) {
    pbVar2 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar2);
  }
  for (uVar1 = param_1 * 8 | 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  param_3->cur_ = pbVar2 + 1;
  uVar1 = MessageLite::GetCachedSize(param_2);
  pbVar2 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar2) {
    pbVar2 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar2);
  }
  for (; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  param_3->cur_ = pbVar2 + 1;
  puVar3 = (uchar *)(**(code **)(param_2->_padding_ + 0x20))(param_2,pbVar2 + 1,param_3);
  param_3->cur_ = puVar3;
  return;
}

// WriteMessageMaybeToArray @ 14fa7ff70

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,class
   google::protobuf::MessageLite const & __ptr64,class google::protobuf::io::CodedOutputStream *
   __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray
          (int param_1,MessageLite *param_2,CodedOutputStream *param_3)

{
  uint uVar1;
  byte *pbVar2;
  uchar *puVar3;
  
  pbVar2 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar2) {
    pbVar2 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar2);
  }
  for (uVar1 = param_1 * 8 | 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  param_3->cur_ = pbVar2 + 1;
  uVar1 = MessageLite::GetCachedSize(param_2);
  pbVar2 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar2) {
    pbVar2 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar2);
  }
  for (; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  param_3->cur_ = pbVar2 + 1;
  puVar3 = (uchar *)(**(code **)(param_2->_padding_ + 0x20))(param_2,pbVar2 + 1,param_3);
  param_3->cur_ = puVar3;
  return;
}

// WriteRaw @ 14fa80050

/* public: void __cdecl google::protobuf::io::CodedOutputStream::WriteRaw(void const * __ptr64,int)
   __ptr64 */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteRaw(CodedOutputStream *this,void *param_1,int param_2)

{
  uchar *puVar1;
  
  puVar1 = this->cur_;
  if ((longlong)(this->impl_).end_ - (longlong)puVar1 < (longlong)param_2) {
    puVar1 = EpsCopyOutputStream::WriteRawFallback(&this->impl_,param_1,param_2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)(uint)param_2);
    puVar1 = puVar1 + param_2;
  }
  this->cur_ = puVar1;
  return;
}

// WriteRawMaybeAliased @ 14fa800b0

/* public: void __cdecl google::protobuf::io::CodedOutputStream::WriteRawMaybeAliased(void const *
   __ptr64,int) __ptr64 */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteRawMaybeAliased
          (CodedOutputStream *this,void *param_1,int param_2)

{
  uchar *puVar1;
  
  puVar1 = this->cur_;
  if ((this->impl_).aliasing_enabled_ != false) {
    puVar1 = EpsCopyOutputStream::WriteAliasedRaw(&this->impl_,param_1,param_2,puVar1);
    this->cur_ = puVar1;
    return;
  }
  if ((longlong)(this->impl_).end_ - (longlong)puVar1 < (longlong)param_2) {
    puVar1 = EpsCopyOutputStream::WriteRawFallback(&this->impl_,param_1,param_2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)(uint)param_2);
    puVar1 = puVar1 + param_2;
  }
  this->cur_ = puVar1;
  return;
}

// WriteSFixed32 @ 14fa80130

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteSFixed32(int,int,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteSFixed32
          (int param_1,int param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (uVar3 = param_1 * 8 | 5; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *pbVar1 = (byte)uVar3 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  pbVar2 = pbVar1 + 1;
  *pbVar1 = (byte)uVar3;
  param_3->cur_ = pbVar2;
  if ((param_3->impl_).end_ <= pbVar2) {
    pbVar2 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar2);
  }
  *(int *)pbVar2 = param_2;
  param_3->cur_ = pbVar2 + 4;
  return;
}

// WriteSFixed32Array @ 14fa801d0

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteSFixed32Array(int
   const * __ptr64,int,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteSFixed32Array
          (int *param_1,int param_2,CodedOutputStream *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  puVar1 = param_3->cur_;
  uVar2 = param_2 * 4;
  if ((longlong)(param_3->impl_).end_ - (longlong)puVar1 < (longlong)(int)uVar2) {
    puVar1 = io::EpsCopyOutputStream::WriteRawFallback(&param_3->impl_,param_1,uVar2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)uVar2);
    puVar1 = puVar1 + (int)uVar2;
  }
  param_3->cur_ = puVar1;
  return;
}

// WriteSFixed32NoTag @ 14fa80240

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteSFixed32NoTag(int,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteSFixed32NoTag
          (int param_1,CodedOutputStream *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_2->cur_;
  if ((param_2->impl_).end_ <= piVar1) {
    piVar1 = (int *)io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,(uchar *)piVar1);
  }
  *piVar1 = param_1;
  param_2->cur_ = (uchar *)(piVar1 + 1);
  return;
}

// WriteSFixed64 @ 14fa80280

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteSFixed64(int,__int64,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteSFixed64
          (int param_1,__int64 param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (uVar3 = param_1 * 8 | 1; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *pbVar1 = (byte)uVar3 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  pbVar2 = pbVar1 + 1;
  *pbVar1 = (byte)uVar3;
  param_3->cur_ = pbVar2;
  if ((param_3->impl_).end_ <= pbVar2) {
    pbVar2 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar2);
  }
  *(__int64 *)pbVar2 = param_2;
  param_3->cur_ = pbVar2 + 8;
  return;
}

// WriteSFixed64Array @ 14fa80320

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteSFixed64Array(__int64 const * __ptr64,int,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteSFixed64Array
          (__int64 *param_1,int param_2,CodedOutputStream *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  puVar1 = param_3->cur_;
  uVar2 = param_2 * 8;
  if ((longlong)(param_3->impl_).end_ - (longlong)puVar1 < (longlong)(int)uVar2) {
    puVar1 = io::EpsCopyOutputStream::WriteRawFallback(&param_3->impl_,param_1,uVar2,puVar1);
  }
  else {
    memcpy(puVar1,param_1,(ulonglong)uVar2);
    puVar1 = puVar1 + (int)uVar2;
  }
  param_3->cur_ = puVar1;
  return;
}

// WriteSFixed64NoTag @ 14fa80390

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteSFixed64NoTag(__int64,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteSFixed64NoTag
          (__int64 param_1,CodedOutputStream *param_2)

{
  __int64 *p_Var1;
  
  p_Var1 = (__int64 *)param_2->cur_;
  if ((param_2->impl_).end_ <= p_Var1) {
    p_Var1 = (__int64 *)
             io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,(uchar *)p_Var1);
  }
  *p_Var1 = param_1;
  param_2->cur_ = (uchar *)(p_Var1 + 1);
  return;
}

// WriteSInt32 @ 14fa803d0

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteSInt32(int,int,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteSInt32
          (int param_1,int param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  uVar3 = param_1 * 8;
  uVar4 = (ulonglong)uVar3;
  while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
    uVar4 = uVar4 >> 7;
    *pbVar1 = bVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
    uVar3 = (uint)uVar4;
  }
  *pbVar1 = bVar2;
  pbVar1 = pbVar1 + 1;
  param_3->cur_ = pbVar1;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (uVar3 = param_2 >> 0x1f ^ param_2 * 2; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *pbVar1 = (byte)uVar3 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar3;
  param_3->cur_ = pbVar1 + 1;
  return;
}

// WriteSInt32NoTag @ 14fa80490

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteSInt32NoTag(int,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteSInt32NoTag(int param_1,CodedOutputStream *param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = param_2->cur_;
  if ((param_2->impl_).end_ <= pbVar2) {
    pbVar2 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,pbVar2);
  }
  for (uVar1 = param_1 >> 0x1f ^ param_1 * 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  param_2->cur_ = pbVar2 + 1;
  return;
}

// WriteSInt64 @ 14fa80510

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteSInt64(int,__int64,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteSInt64
          (int param_1,__int64 param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  uVar3 = param_1 * 8;
  uVar4 = (ulonglong)uVar3;
  while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
    uVar4 = uVar4 >> 7;
    *pbVar1 = bVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
    uVar3 = (uint)uVar4;
  }
  *pbVar1 = bVar2;
  pbVar1 = pbVar1 + 1;
  param_3->cur_ = pbVar1;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (uVar4 = param_2 >> 0x3f ^ param_2 * 2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
    *pbVar1 = (byte)uVar4 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar4;
  param_3->cur_ = pbVar1 + 1;
  return;
}

// WriteSInt64NoTag @ 14fa805e0

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteSInt64NoTag(__int64,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteSInt64NoTag
          (__int64 param_1,CodedOutputStream *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = param_2->cur_;
  if ((param_2->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,pbVar1);
  }
  for (uVar2 = param_1 >> 0x3f ^ param_1 * 2; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar1 = (byte)uVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar2;
  param_2->cur_ = pbVar1 + 1;
  return;
}

// WriteString @ 14fa80660

/* public: void __cdecl google::protobuf::io::CodedOutputStream::WriteString(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteString
          (CodedOutputStream *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = (uint)param_1->_Mysize;
  puVar2 = this->cur_;
  if ((longlong)(this->impl_).end_ - (longlong)puVar2 < (longlong)(int)uVar1) {
    puVar2 = EpsCopyOutputStream::WriteRawFallback(&this->impl_,param_1->_Mydata,uVar1,puVar2);
  }
  else {
    memcpy(puVar2,param_1->_Mydata,(ulonglong)uVar1);
    puVar2 = puVar2 + (int)uVar1;
  }
  this->cur_ = puVar2;
  return;
}

// WriteString @ 14fa806d0

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteString(int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteString
          (int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          CodedOutputStream *param_3)

{
  uchar **ppuVar1;
  ulonglong uVar2;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var3;
  byte *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  uint uVar6;
  int iVar7;
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessageFatal local_28;
  
  pbVar4 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar4) {
    pbVar4 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar4);
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *pbVar4 = (byte)uVar6 | 0x80;
    pbVar4 = pbVar4 + 1;
  }
  *pbVar4 = (byte)uVar6;
  ppuVar1 = &param_3->cur_;
  *ppuVar1 = pbVar4 + 1;
  uVar2 = (param_2->_Mypair)._Myval2._Mysize;
  if ((0x7fffffff < uVar2) &&
     (pbVar5 = absl::lts_20240722::log_internal::
               MakeCheckOpString<unsigned___int64,unsigned___int64>
                         (uVar2,0x7fffffff,"value.size() <= kInt32MaxSize"),
     pbVar5 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_38._Mydata = (char *)pbVar5;
    if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
      local_38._Mydata = (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    local_38._Mysize = (pbVar5->_Mypair)._Myval2._Mysize;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              (&local_28,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format_lite.cc"
               ,0x1dd,&local_38);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_28);
  }
  pbVar4 = *ppuVar1;
  uVar6 = (uint)(param_2->_Mypair)._Myval2._Mysize;
  if ((param_3->impl_).end_ <= pbVar4) {
    pbVar4 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar4);
  }
  *ppuVar1 = pbVar4;
  for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *pbVar4 = (byte)uVar6 | 0x80;
    pbVar4 = pbVar4 + 1;
  }
  p_Var3 = &param_2->_Mypair;
  *pbVar4 = (byte)uVar6;
  pbVar4 = pbVar4 + 1;
  param_3->cur_ = pbVar4;
  if (0xf < (param_2->_Mypair)._Myval2._Myres) {
    param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar2 = (p_Var3->_Myval2)._Mysize;
  iVar7 = (int)uVar2;
  if ((longlong)(param_3->impl_).end_ - (longlong)pbVar4 < (longlong)iVar7) {
    pbVar4 = io::EpsCopyOutputStream::WriteRawFallback(&param_3->impl_,param_2,iVar7,pbVar4);
  }
  else {
    memcpy(pbVar4,param_2,uVar2 & 0xffffffff);
    pbVar4 = pbVar4 + iVar7;
  }
  param_3->cur_ = pbVar4;
  return;
}

// WriteStringMaybeAliased @ 14fa80880

/* public: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased
          (int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          CodedOutputStream *param_3)

{
  uchar **ppuVar1;
  ulonglong uVar2;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var3;
  byte *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  uint uVar6;
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessageFatal local_28;
  
  pbVar4 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar4) {
    pbVar4 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar4);
  }
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *pbVar4 = (byte)uVar6 | 0x80;
    pbVar4 = pbVar4 + 1;
  }
  *pbVar4 = (byte)uVar6;
  ppuVar1 = &param_3->cur_;
  *ppuVar1 = pbVar4 + 1;
  uVar2 = (param_2->_Mypair)._Myval2._Mysize;
  if ((0x7fffffff < uVar2) &&
     (pbVar5 = absl::lts_20240722::log_internal::
               MakeCheckOpString<unsigned___int64,unsigned___int64>
                         (uVar2,0x7fffffff,"value.size() <= kInt32MaxSize"),
     pbVar5 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_38._Mydata = (char *)pbVar5;
    if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
      local_38._Mydata = (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    local_38._Mysize = (pbVar5->_Mypair)._Myval2._Mysize;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              (&local_28,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\wire_format_lite.cc"
               ,0x1e6,&local_38);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_28);
  }
  pbVar4 = *ppuVar1;
  uVar6 = (uint)(param_2->_Mypair)._Myval2._Mysize;
  if ((param_3->impl_).end_ <= pbVar4) {
    pbVar4 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar4);
  }
  *ppuVar1 = pbVar4;
  for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *pbVar4 = (byte)uVar6 | 0x80;
    pbVar4 = pbVar4 + 1;
  }
  *pbVar4 = (byte)uVar6;
  param_3->cur_ = pbVar4 + 1;
  p_Var3 = &param_2->_Mypair;
  if (0xf < (param_2->_Mypair)._Myval2._Myres) {
    param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  io::CodedOutputStream::WriteRawMaybeAliased(param_3,param_2,(int)(p_Var3->_Myval2)._Mysize);
  return;
}

// WriteSubMessageMaybeToArray @ 14fa809f0

/* private: static void __cdecl
   google::protobuf::internal::WireFormatLite::WriteSubMessageMaybeToArray(int,class
   google::protobuf::MessageLite const & __ptr64,class google::protobuf::io::CodedOutputStream *
   __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteSubMessageMaybeToArray
          (int param_1,MessageLite *param_2,CodedOutputStream *param_3)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(**(code **)(param_2->_padding_ + 0x20))(param_2,param_3->cur_);
  param_3->cur_ = puVar1;
  return;
}

// WriteTag @ 14fa80a20

/* public: void __cdecl google::protobuf::io::CodedOutputStream::WriteTag(unsigned int) __ptr64 */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteTag(CodedOutputStream *this,uint param_1)

{
  byte *pbVar1;
  
  pbVar1 = this->cur_;
  if ((this->impl_).end_ <= pbVar1) {
    pbVar1 = EpsCopyOutputStream::EnsureSpaceFallback(&this->impl_,pbVar1);
  }
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *pbVar1 = (byte)param_1 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_1;
  this->cur_ = pbVar1 + 1;
  return;
}

// WriteTag @ 14fa80a80

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteTag(int,enum
   google::protobuf::internal::WireFormatLite::WireType,class
   google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteTag
          (int param_1,WireType param_2,CodedOutputStream *param_3)

{
  WireType WVar1;
  byte *pbVar2;
  
  pbVar2 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar2) {
    pbVar2 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar2);
  }
  for (WVar1 = param_1 * 8 | param_2; 0x7f < WVar1; WVar1 = WVar1 >> 7) {
    *pbVar2 = (byte)WVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)WVar1;
  param_3->cur_ = pbVar2 + 1;
  return;
}

// WriteUInt32 @ 14fa80b00

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteUInt32(int,unsigned
   int,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteUInt32
          (int param_1,uint param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  uVar3 = param_1 * 8;
  uVar4 = (ulonglong)uVar3;
  while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
    uVar4 = uVar4 >> 7;
    *pbVar1 = bVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
    uVar3 = (uint)uVar4;
  }
  *pbVar1 = bVar2;
  pbVar1 = pbVar1 + 1;
  param_3->cur_ = pbVar1;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (; 0x7f < param_2; param_2 = param_2 >> 7) {
    *pbVar1 = (byte)param_2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_2;
  param_3->cur_ = pbVar1 + 1;
  return;
}

// WriteUInt32NoTag @ 14fa80bc0

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(unsigned
   int,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteUInt32NoTag
          (uint param_1,CodedOutputStream *param_2)

{
  byte *pbVar1;
  
  pbVar1 = param_2->cur_;
  if ((param_2->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,pbVar1);
  }
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *pbVar1 = (byte)param_1 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_1;
  param_2->cur_ = pbVar1 + 1;
  return;
}

// WriteUInt64 @ 14fa80c20

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteUInt64(int,unsigned
   __int64,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteUInt64
          (int param_1,__uint64 param_2,CodedOutputStream *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  pbVar1 = param_3->cur_;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  uVar3 = param_1 * 8;
  uVar4 = (ulonglong)uVar3;
  while (bVar2 = (byte)uVar4, 0x7f < uVar3) {
    uVar4 = uVar4 >> 7;
    *pbVar1 = bVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
    uVar3 = (uint)uVar4;
  }
  *pbVar1 = bVar2;
  pbVar1 = pbVar1 + 1;
  param_3->cur_ = pbVar1;
  if ((param_3->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_3->impl_,pbVar1);
  }
  for (; 0x7f < param_2; param_2 = param_2 >> 7) {
    *pbVar1 = (byte)param_2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_2;
  param_3->cur_ = pbVar1 + 1;
  return;
}

// WriteUInt64NoTag @ 14fa80ce0

/* public: static void __cdecl google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(unsigned
   __int64,class google::protobuf::io::CodedOutputStream * __ptr64) */

void __cdecl
google::protobuf::internal::WireFormatLite::WriteUInt64NoTag
          (__uint64 param_1,CodedOutputStream *param_2)

{
  byte *pbVar1;
  
  pbVar1 = param_2->cur_;
  if ((param_2->impl_).end_ <= pbVar1) {
    pbVar1 = io::EpsCopyOutputStream::EnsureSpaceFallback(&param_2->impl_,pbVar1);
  }
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *pbVar1 = (byte)param_1 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_1;
  param_2->cur_ = pbVar1 + 1;
  return;
}

// WriteVarint32 @ 14fa80d50

/* public: void __cdecl google::protobuf::io::CodedOutputStream::WriteVarint32(unsigned int) __ptr64
    */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteVarint32(CodedOutputStream *this,uint param_1)

{
  byte *pbVar1;
  
  pbVar1 = this->cur_;
  if ((this->impl_).end_ <= pbVar1) {
    pbVar1 = EpsCopyOutputStream::EnsureSpaceFallback(&this->impl_,pbVar1);
  }
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *pbVar1 = (byte)param_1 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_1;
  this->cur_ = pbVar1 + 1;
  return;
}

// WriteVarint32SignExtended @ 14fa80db0

/* public: void __cdecl google::protobuf::io::CodedOutputStream::WriteVarint32SignExtended(int)
   __ptr64 */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteVarint32SignExtended
          (CodedOutputStream *this,int param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = this->cur_;
  uVar2 = (ulonglong)param_1;
  if ((this->impl_).end_ <= pbVar1) {
    pbVar1 = EpsCopyOutputStream::EnsureSpaceFallback(&this->impl_,pbVar1);
  }
  for (; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar1 = (byte)uVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar2;
  this->cur_ = pbVar1 + 1;
  return;
}

// WriteVarint64 @ 14fa80e20

/* public: void __cdecl google::protobuf::io::CodedOutputStream::WriteVarint64(unsigned __int64)
   __ptr64 */

void __thiscall
google::protobuf::io::CodedOutputStream::WriteVarint64(CodedOutputStream *this,__uint64 param_1)

{
  byte *pbVar1;
  
  pbVar1 = this->cur_;
  if ((this->impl_).end_ <= pbVar1) {
    pbVar1 = EpsCopyOutputStream::EnsureSpaceFallback(&this->impl_,pbVar1);
  }
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *pbVar1 = (byte)param_1 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)param_1;
  this->cur_ = pbVar1 + 1;
  return;
}

// FUN_15029f9a0 @ 15029f9a0

void FUN_15029f9a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    absl::lts_20240722::log_internal::LogMessage::~LogMessage((LogMessage *)(param_2 + 0x80));
  }
  return;
}

