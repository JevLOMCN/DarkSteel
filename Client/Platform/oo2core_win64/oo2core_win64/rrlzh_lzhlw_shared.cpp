// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 40

// rrAlignUpPointer<void> @ 14f32fb30

void * __cdecl oo2::rrAlignUpPointer<void>(void *param_1,long64 param_2)

{
  return (void *)((longlong)param_1 + param_2 + -1 & ~(param_2 - 1U));
}

// rrScopeArenaAlloc @ 14f32fb60

rrScopeArenaAlloc * __thiscall
oo2::rrScopeArenaAlloc::rrScopeArenaAlloc
          (rrScopeArenaAlloc *this,long64 param_1,rrArenaAllocator *param_2,void **param_3)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  ulonglong *puVar4;
  void *pvVar5;
  rrScopeArenaAlloc *prVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  
  pvVar5 = (void *)0x0;
  this->m_pAlloc = param_2;
  this->m_ptr = (void *)0x0;
  this->m_size = param_1;
  if (param_2 != (rrArenaAllocator *)0x0) {
    pvVar1 = (void *)param_2->m_cur;
    param_1 = param_1 + 0xfU & 0xfffffffffffffff0;
    uVar8 = (ulonglong)(-(uint)(param_2->m_unorderedStart != 0) & 0x10);
    if ((longlong)pvVar1 + param_1 + uVar8 <= param_2->m_size + param_2->m_base) {
      puVar7 = (ulonglong *)((longlong)pvVar1 + param_1);
      param_2->m_cur = (ulong64)puVar7;
      if (param_2->m_unorderedStart != 0) {
        *puVar7 = param_1;
        puVar7[1] = 0;
        param_2->m_cur = param_2->m_cur + uVar8;
        puVar7 = (ulonglong *)param_2->m_cur;
      }
      puVar4 = (ulonglong *)param_2->m_cur_max;
      if ((ulonglong *)param_2->m_cur_max <= puVar7) {
        puVar4 = puVar7;
      }
      param_2->m_cur_max = (ulong64)puVar4;
      pvVar5 = pvVar1;
      goto LAB_14f32fc1e;
    }
    if (param_2->m_allowFallback == 0) goto LAB_14f32fc1e;
  }
  pvVar5 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,0x10);
  if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
LAB_14f32fc1e:
  this->m_ptr = pvVar5;
  if ((pvVar5 == (void *)0x0) &&
     (iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                 "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar3 != 0)) {
    pcVar2 = (code *)swi(3);
    prVar6 = (rrScopeArenaAlloc *)(*pcVar2)();
    return prVar6;
  }
  if (param_3 != (void **)0x0) {
    *param_3 = this->m_ptr;
  }
  return this;
}

// ~rrScopeArenaAlloc @ 14f32fc80

void __thiscall oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc(rrScopeArenaAlloc *this)

{
  void *pvVar1;
  rrArenaAllocator *prVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  pvVar1 = this->m_ptr;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  prVar2 = this->m_pAlloc;
  if (prVar2 != (rrArenaAllocator *)0x0) {
    uVar7 = this->m_size + 0xfU & 0xfffffffffffffff0;
    if ((void *)prVar2->m_unorderedStart == (void *)0x0) {
      if ((longlong)pvVar1 + uVar7 == prVar2->m_cur) {
        prVar2->m_cur = prVar2->m_cur - uVar7;
        this->m_ptr = (void *)0x0;
        return;
      }
    }
    else if (((void *)prVar2->m_unorderedStart <= pvVar1) &&
            (pvVar1 < (void *)(prVar2->m_size + prVar2->m_base))) {
      plVar6 = (longlong *)((longlong)pvVar1 + uVar7);
      plVar6[1] = 1;
      plVar4 = (longlong *)prVar2->m_cur;
      if ((plVar6 + 2 == plVar4) && (plVar4 != (longlong *)prVar2->m_unorderedStart)) {
        while (plVar6[1] == 1) {
          lVar3 = *plVar6;
          plVar5 = (longlong *)((longlong)plVar4 + (-0x10 - lVar3));
          prVar2->m_cur = (ulong64)plVar5;
          plVar6 = (longlong *)((longlong)plVar4 + (-0x20 - lVar3));
          plVar4 = plVar5;
          if (plVar5 == (longlong *)prVar2->m_unorderedStart) {
            this->m_ptr = (void *)0x0;
            return;
          }
        }
      }
      goto LAB_14f32fd49;
    }
  }
  (*g_fp_OodleCore_Plugin_Free)(pvVar1);
LAB_14f32fd49:
  this->m_ptr = (void *)0x0;
  return;
}

// Alloc @ 14f32fd60

void * __thiscall oo2::rrArenaAllocator::Alloc(rrArenaAllocator *this,long64 param_1,int param_2)

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
    pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar5,0x10);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(uVar5);
    }
    return pvVar1;
  }
  return (void *)0x0;
}

// CheckWholeMatchQuantum_LRM @ 14f32fe40

int __cdecl
oo2::CheckWholeMatchQuantum_LRM
          (LZQuantumHeader *param_1,uchar *param_2,long64 param_3,int param_4,LRMSet *param_5,
          long64 param_6,long64 param_7)

{
  int iVar1;
  long64 lVar2;
  
  if (7 < param_4) {
    if ((0 < param_6) &&
       (iVar1 = memcmp(param_2 + param_3,param_2 + param_3 + -param_6,(longlong)param_4), iVar1 == 0
       )) {
      param_1->compLen = 0;
      param_1->wholeMatchFlag = 1;
      param_1->wholeMatchOffset = param_6;
      return 1;
    }
    if (((param_5 != (LRMSet *)0x0) &&
        (lVar2 = LRMSet_CheckWholeMatchQuantum(param_5,param_2,param_3,param_4), lVar2 != 0)) &&
       ((param_7 == 0 || (lVar2 < param_7)))) {
      param_1->wholeMatchOffset = lVar2;
      param_1->wholeMatchFlag = 1;
      param_1->compLen = 0;
      return 1;
    }
  }
  return 0;
}

// Free @ 14f32ff20

void __thiscall oo2::rrArenaAllocator::Free(rrArenaAllocator *this,void *param_1,long64 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00014f32ffa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// LZBlockHeader_Get @ 14f32ffc0

uchar * __cdecl oo2::LZBlockHeader_Get(LZBlockHeader *param_1,uchar *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  bVar1 = *param_2;
  if ((bVar1 & 0xf) == 0xc) {
    uVar2 = (bVar1 >> 4 & 3) + 4;
    param_1->version = uVar2;
    if (uVar2 < 5) {
      param_1->chunkIsMemcpy = bVar1 >> 6 & 1;
      param_1->chunkIsReset = (uint)(bVar1 >> 7);
      bVar1 = param_2[1];
      param_1->offsetShift = 0;
      uVar2 = bVar1 & 0x7f;
      param_1->chunkHasQuantumCRCs = (uint)(bVar1 >> 7);
      param_1->decodeType = uVar2;
      if ((6 < uVar2) && (uVar2 < 10)) {
        param_1->offsetShift = uVar2 - 7;
        param_1->decodeType = 7;
        return param_2 + 2;
      }
      if (uVar2 < 0xd) {
        return param_2 + 2;
      }
    }
    return (uchar *)0x0;
  }
  uVar2 = bVar1 & 3;
  param_1->version = uVar2;
  uVar4 = (uint)(bVar1 >> 2);
  if ((bVar1 & 3) == 0) {
    param_1->offsetShift = bVar1 >> 4 & 3;
    if ((bVar1 >> 2 & 3) == 0) {
      param_1->decodeType = 7;
      param_1->chunkIsMemcpy = 1;
    }
    else if ((uVar4 & 3) == 1) {
      param_1->decodeType = 7;
      param_1->chunkIsMemcpy = 0;
    }
    else {
      if ((uVar4 & 3) != 2) {
        return (uchar *)0x0;
      }
      param_1->decodeType = 0;
    }
  }
  else {
    if (uVar2 != 1) {
      uVar3 = 0;
      param_1->offsetShift = 0;
      uVar6 = 1;
      if (uVar2 != 2) {
        if (uVar4 < 0x10) {
          param_1->chunkIsMemcpy = 1;
          param_1->chunkHasQuantumCRCs = 0;
          uVar2 = uVar4 & 7;
          param_1->decodeType = uVar2;
          param_1->chunkIsReset = (uint)(7 < uVar4);
        }
        else {
          uVar4 = uVar4 - 0x10;
          param_1->chunkIsMemcpy = 0;
          uVar2 = uVar4 >> 2;
          param_1->chunkIsReset = uVar4 & 1;
          param_1->decodeType = uVar2;
          param_1->chunkHasQuantumCRCs = uVar4 >> 1 & 1;
          if (6 < uVar2) {
            param_1->offsetShift = uVar2 - 7;
            if (3 < (int)(uVar2 - 7)) {
              return (uchar *)0x0;
            }
switchD_14f330225_caseD_7:
            param_1->decodeType = 7;
            param_1->offsetShift = 0;
            return param_2 + 1;
          }
        }
        switch(uVar2) {
        case 0:
          param_1->decodeType = 0;
          return param_2 + 1;
        case 2:
          uVar6 = 2;
        case 1:
          param_1->decodeType = uVar6;
          return param_2 + 1;
        case 3:
          param_1->decodeType = 3;
          return param_2 + 1;
        case 4:
          param_1->decodeType = 4;
          return param_2 + 1;
        case 5:
          param_1->decodeType = 5;
          return param_2 + 1;
        default:
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\rrlzh_lzhlw_shared.cpp",0x1df,
                       "OODLE ERROR : invalid V3 decodetype\n");
          }
          ooLogErrorPost();
          return param_2 + 1;
        case 7:
        case 8:
        case 9:
          goto switchD_14f330225_caseD_7;
        }
      }
      bVar7 = 0xb < uVar4;
      uVar2 = uVar6;
      if (bVar7) {
        uVar2 = uVar4 - 0xc;
        uVar3 = uVar2 >> 1 & 1;
        uVar4 = uVar2 >> 2;
        uVar2 = uVar2 & 1;
      }
      param_1->chunkIsMemcpy = (uint)!bVar7;
      param_1->chunkIsReset = uVar2;
      param_1->chunkHasQuantumCRCs = uVar3;
      if (3 < uVar4) {
        if (uVar4 == 4) {
          uVar6 = 0;
        }
        else if (uVar4 != 5) {
          if (uVar4 == 6) {
            param_1->decodeType = 2;
            return param_2 + 1;
          }
          if (uVar4 != 7) {
            return (uchar *)0x0;
          }
          param_1->decodeType = 3;
          return param_2 + 1;
        }
        param_1->decodeType = uVar6;
        return param_2 + 1;
      }
      param_1->offsetShift = uVar4;
      param_1->decodeType = 7;
      return param_2 + 1;
    }
    uVar4 = uVar4 & 7;
    if (uVar4 < 4) {
      iVar5 = 7;
    }
    else {
      if (uVar4 == 4) {
        iVar5 = 0;
      }
      else {
        if (uVar4 != 5) {
          return (uchar *)0x0;
        }
        iVar5 = 1;
      }
      uVar4 = 0;
    }
    param_1->decodeType = iVar5;
    param_1->offsetShift = uVar4;
    param_1->chunkIsMemcpy = bVar1 >> 5 & 1;
  }
  param_1->chunkIsReset = bVar1 >> 6 & 1;
  param_1->chunkHasQuantumCRCs = (uint)(bVar1 >> 7);
  return param_2 + 1;
}

// LZBlockHeader_Put @ 14f330340

uchar * __cdecl oo2::LZBlockHeader_Put(LZBlockHeader *param_1,uchar *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0xc;
  if (param_1->chunkIsMemcpy != 0) {
    bVar1 = 0x4c;
  }
  *param_2 = -(param_1->chunkIsReset != 0) & 0x80U | bVar1;
  iVar2 = param_1->decodeType;
  if (iVar2 == 7) {
    iVar2 = param_1->offsetShift + 7;
  }
  param_2[1] = -(param_1->chunkHasQuantumCRCs != 0) & 0x80U | (byte)iVar2;
  return param_2 + 2;
}

// LZLargeQuantumHeader_Get @ 14f3303a0

int __cdecl
oo2::LZLargeQuantumHeader_Get
          (uchar *param_1,uchar *param_2,LZQuantumHeader *param_3,int param_4,int param_5)

{
  byte bVar1;
  uint3 uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  if (param_1 + 0x10 <= param_2) {
    param_2 = param_1 + 0x10;
  }
  rrMemSetZero(param_3,0x20);
  if (param_2 < param_1 + 3) {
    return -1;
  }
  pbVar4 = param_1 + 3;
  uVar3 = CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]) & 0x3ffff;
  uVar2 = (uint3)(*param_1 >> 2);
  uVar5 = (uint)uVar2;
  if (uVar3 == 0x3ffff) {
    if (uVar2 == 0) {
      param_3->compLen = 0;
      param_3->wholeMatchFlag = 1;
      pbVar4 = rrGetVariableModPow2SeriesWBA(pbVar4,param_2,&param_3->wholeMatchOffset,0xf,7);
      if (pbVar4 == (byte *)0x0) {
        return -1;
      }
      param_3->wholeMatchOffset = param_3->wholeMatchOffset + 1;
      if (param_3->wholeMatchOffset < 2) {
        return -1;
      }
      goto LAB_14f33052e;
    }
    if (uVar5 == 1) {
      if (param_2 < param_1 + 4) {
        return -1;
      }
      bVar1 = *pbVar4;
      param_3->compLen = 0;
      param_3->crc = (uint)bVar1;
      return (int)(param_1 + 4) - (int)param_1;
    }
    if (uVar5 != 2) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\rrlzh_lzhlw_shared.cpp",0x363,
                   "OODLE ERROR : invalid QH ; unused special value\n");
      }
      ooLogErrorPost();
      return -1;
    }
    param_3->compLen = param_5;
  }
  else {
    param_3->compLen = uVar3 + 1;
    param_3->huffFlag = uVar5 & 1;
    param_3->extraFlag = uVar5 & 2;
  }
  if (param_4 != 0) {
    if (param_2 < param_1 + 6) {
      return -1;
    }
    bVar1 = *pbVar4;
    param_3->crc = (uint)bVar1 << 0x10;
    uVar3 = (uint)param_1[4] << 8 | (uint)bVar1 << 0x10;
    param_3->crc = uVar3;
    pbVar4 = param_1 + 6;
    param_3->crc = param_1[5] | uVar3;
  }
LAB_14f33052e:
  return (int)pbVar4 - (int)param_1;
}

// LZLargeQuantumHeader_Put @ 14f330540

int __cdecl
oo2::LZLargeQuantumHeader_Put(uchar *param_1,LZQuantumHeader *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = param_1 + 1;
  iVar5 = (int)param_1;
  if (param_2->wholeMatchFlag != 0) {
    *param_1 = '\x03';
    puVar3[0] = 0xff;
    puVar3[1] = 0xff;
    puVar3 = rrPutVariableModPow2SeriesWBA(param_1 + 3,param_2->wholeMatchOffset + -1,0xf,7);
    return (int)puVar3 - iVar5;
  }
  iVar6 = param_2->compLen;
  if (iVar6 == 0) {
    *param_1 = '\a';
    puVar3[0] = 0xff;
    puVar3[1] = 0xff;
    param_1[3] = (uchar)param_2->crc;
  }
  else {
    if (iVar6 < param_4) {
      iVar1 = param_2->extraFlag;
      iVar2 = param_2->huffFlag;
      iVar6 = iVar6 + -1;
      param_1[2] = (uchar)iVar6;
      *param_1 = (byte)(-(uint)(iVar1 != 0) >> 0x10) & 8 | (byte)(-(uint)(iVar2 != 0) >> 0x10) & 4 |
                 (byte)((uint)iVar6 >> 0x10);
      *puVar3 = (uchar)((uint)iVar6 >> 8);
      iVar6 = iVar5 + 3;
      if (param_3 == 0) goto LAB_14f33062e;
      uVar4 = param_2->crc;
    }
    else {
      *param_1 = '\v';
      puVar3[0] = 0xff;
      puVar3[1] = 0xff;
      iVar6 = iVar5 + 3;
      if (param_3 == 0) goto LAB_14f33062e;
      uVar4 = param_2->crc;
    }
    puVar3 = param_1 + 3;
    *puVar3 = (uchar)(uVar4 >> 0x10);
    param_1[5] = (uchar)uVar4;
    param_1[4] = (uchar)(uVar4 >> 8);
  }
  iVar6 = (int)puVar3 + 3;
LAB_14f33062e:
  return iVar6 - iVar5;
}

// LZQuantumHeader_ComputeCRC @ 14f330650

uint __cdecl oo2::LZQuantumHeader_ComputeCRC(uchar *param_1,long64 param_2)

{
  ulong64 uVar1;
  
  uVar1 = rrBigHash64_SIMD(param_1,param_2);
  return (uint)uVar1 & 0xffffff;
}

// LZQuantumHeader_Get @ 14f330680

int __cdecl
oo2::LZQuantumHeader_Get
          (uchar *param_1,uchar *param_2,LZQuantumHeader *param_3,int param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (param_1 + 0x10 <= param_2) {
    param_2 = param_1 + 0x10;
  }
  rrMemSetZero(param_3,0x20);
  if (param_2 < param_1 + 2) {
    return -1;
  }
  bVar1 = *param_1;
  pbVar3 = param_1 + 2;
  uVar2 = CONCAT11(bVar1,param_1[1]) & 0x3fff;
  uVar4 = (uint)(bVar1 >> 6);
  if (uVar2 == 0x3fff) {
    if (uVar4 == 0) {
      param_3->compLen = 0;
      param_3->wholeMatchFlag = 1;
      pbVar3 = rrGetVariableModPow2SeriesWBA(pbVar3,param_2,&param_3->wholeMatchOffset,0xf,7);
      if (pbVar3 == (byte *)0x0) {
        return -1;
      }
      param_3->wholeMatchOffset = param_3->wholeMatchOffset + 1;
      if (param_3->wholeMatchOffset < 2) {
        return -1;
      }
      goto LAB_14f3307fb;
    }
    if (uVar4 == 1) {
      if (param_2 < param_1 + 3) {
        return -1;
      }
      bVar1 = *pbVar3;
      param_3->compLen = 0;
      param_3->crc = (uint)bVar1;
      return (int)(param_1 + 3) - (int)param_1;
    }
    if (uVar4 != 2) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\rrlzh_lzhlw_shared.cpp",0x2a5,
                   "OODLE ERROR : invalid QH ; unused special value\n");
      }
      ooLogErrorPost();
      return -1;
    }
  }
  else {
    param_5 = uVar2 + 1;
    param_3->huffFlag = uVar4 & 1;
    param_3->extraFlag = (uint)(bVar1 >> 7);
  }
  param_3->compLen = param_5;
  if (param_4 != 0) {
    if (param_2 < param_1 + 5) {
      return -1;
    }
    bVar1 = *pbVar3;
    param_3->crc = (uint)bVar1 << 0x10;
    uVar4 = (uint)param_1[3] << 8 | (uint)bVar1 << 0x10;
    param_3->crc = uVar4;
    pbVar3 = param_1 + 5;
    param_3->crc = param_1[4] | uVar4;
  }
LAB_14f3307fb:
  return (int)pbVar3 - (int)param_1;
}

// LZQuantumHeader_Put @ 14f330820

int __cdecl
oo2::LZQuantumHeader_Put(uchar *param_1,LZQuantumHeader *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  
  iVar6 = (int)param_1;
  if (param_2->wholeMatchFlag != 0) {
    param_1[0] = '?';
    param_1[1] = 0xff;
    puVar3 = rrPutVariableModPow2SeriesWBA(param_1 + 2,param_2->wholeMatchOffset + -1,0xf,7);
    return (int)puVar3 - iVar6;
  }
  iVar4 = param_2->compLen;
  if (iVar4 == 0) {
    param_1[0] = '\x7f';
    param_1[1] = 0xff;
    param_1[2] = (uchar)param_2->crc;
    return 3;
  }
  if (iVar4 < param_4) {
    iVar1 = param_2->huffFlag;
    iVar2 = param_2->extraFlag;
    sVar7 = (short)iVar4 + -1;
    iVar4 = iVar6 + 2;
    param_1[1] = (uchar)sVar7;
    *param_1 = (byte)((ushort)-(ushort)(iVar1 != 0) >> 8) & 0x40 |
               (byte)((ushort)-(ushort)(iVar2 != 0) >> 8) & 0x80 | (byte)((ushort)sVar7 >> 8);
    if (param_3 == 0) goto LAB_14f3308f0;
    uVar5 = param_2->crc;
  }
  else {
    param_1[0] = 0xbf;
    param_1[1] = 0xff;
    iVar4 = iVar6 + 2;
    if (param_3 == 0) goto LAB_14f3308f0;
    uVar5 = param_2->crc;
  }
  param_1[2] = (uchar)(uVar5 >> 0x10);
  param_1[4] = (uchar)uVar5;
  param_1[3] = (uchar)(uVar5 >> 8);
  iVar4 = iVar6 + 5;
LAB_14f3308f0:
  return iVar4 - iVar6;
}

// LZQuantumHeader_PutExpanded @ 14f330900

int __cdecl
oo2::LZQuantumHeader_PutExpanded(uchar *param_1,uchar *param_2,long64 param_3,int param_4)

{
  int iVar1;
  ulong64 uVar2;
  LZQuantumHeader local_28;
  
  local_28.wholeMatchFlag = 0;
  local_28._12_4_ = 0;
  local_28._0_8_ = param_3 & 0xffffffff;
  local_28.wholeMatchOffset = 0;
  local_28.huffFlag = 0;
  local_28.extraFlag = 0;
  if (param_4 != 0) {
    uVar2 = rrBigHash64_SIMD(param_2,param_3);
    local_28._0_8_ = CONCAT44((int)uVar2,local_28.compLen) & 0xffffffffffffff;
  }
  iVar1 = LZQuantumHeader_Put(param_1,&local_28,param_4,(int)param_3);
  return iVar1;
}

// LZQuantumHeader_PutMemset @ 14f330980

/* WARNING: Removing unreachable block (ram,0x00014f3309ee) */
/* WARNING: Removing unreachable block (ram,0x00014f3309f3) */
/* WARNING: Removing unreachable block (ram,0x00014f330a04) */
/* WARNING: Removing unreachable block (ram,0x00014f3309a4) */

int __cdecl oo2::LZQuantumHeader_PutMemset(uchar *param_1,uchar *param_2,long64 param_3)

{
  uchar uVar1;
  
  uVar1 = *param_2;
  param_1[0] = '\x7f';
  param_1[1] = 0xff;
  param_1[2] = uVar1;
  return 3;
}

// LZQuantumHeader_PutWholeMatch @ 14f330a60

int __cdecl oo2::LZQuantumHeader_PutWholeMatch(uchar *param_1,long64 param_2,long64 param_3)

{
  uchar *puVar1;
  
  param_1[0] = '?';
  param_1[1] = 0xff;
  puVar1 = rrPutVariableModPow2SeriesWBA(param_1 + 2,param_2 + -1,0xf,7);
  return (int)puVar1 - (int)param_1;
}

// MemsetQuantum_Test @ 14f330aa0

int __cdecl oo2::MemsetQuantum_Test(uchar *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = rrIsMemset(param_1,(longlong)param_2);
  return iVar1;
}

// OodleFree @ 14f330ab0

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f330ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMallocAligned @ 14f330ac0

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

// RR_GET32_NATIVE @ 14f330b00

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f330b10

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT32_NATIVE @ 14f330b20

void __cdecl oo2::RR_PUT32_NATIVE(void *param_1,uint param_2)

{
  *(uint *)param_1 = param_2;
  return;
}

// RR_PUT64_NATIVE @ 14f330b30

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// Release @ 14f330b40

void __thiscall oo2::rrScopeArenaAlloc::Release(rrScopeArenaAlloc *this)

{
  void *pvVar1;
  rrArenaAllocator *prVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  pvVar1 = this->m_ptr;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  prVar2 = this->m_pAlloc;
  if (prVar2 != (rrArenaAllocator *)0x0) {
    uVar7 = this->m_size + 0xfU & 0xfffffffffffffff0;
    if ((void *)prVar2->m_unorderedStart == (void *)0x0) {
      if ((longlong)pvVar1 + uVar7 == prVar2->m_cur) {
        prVar2->m_cur = prVar2->m_cur - uVar7;
        this->m_ptr = (void *)0x0;
        return;
      }
    }
    else if (((void *)prVar2->m_unorderedStart <= pvVar1) &&
            (pvVar1 < (void *)(prVar2->m_size + prVar2->m_base))) {
      plVar6 = (longlong *)((longlong)pvVar1 + uVar7);
      plVar6[1] = 1;
      plVar4 = (longlong *)prVar2->m_cur;
      if ((plVar6 + 2 == plVar4) && (plVar4 != (longlong *)prVar2->m_unorderedStart)) {
        while (plVar6[1] == 1) {
          lVar3 = *plVar6;
          plVar5 = (longlong *)((longlong)plVar4 + (-0x10 - lVar3));
          prVar2->m_cur = (ulong64)plVar5;
          plVar6 = (longlong *)((longlong)plVar4 + (-0x20 - lVar3));
          plVar4 = plVar5;
          if (plVar5 == (longlong *)prVar2->m_unorderedStart) {
            this->m_ptr = (void *)0x0;
            return;
          }
        }
      }
      goto LAB_14f330c06;
    }
  }
  (*g_fp_OodleCore_Plugin_Free)(pvVar1);
LAB_14f330c06:
  this->m_ptr = (void *)0x0;
  return;
}

// U8_check @ 14f330c20

uchar __cdecl oo2::U8_check(uint param_1)

{
  return (uchar)param_1;
}

// lz_copygeneric @ 14f330c40

void __cdecl oo2::lz_copygeneric(uchar *param_1,long64 param_2,long64 param_3)

{
  int iVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      do {
        *param_1 = param_1[-param_2];
        param_1 = param_1 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return;
    }
  }
  else {
    puVar3 = param_1 + -param_2;
    if (param_2 < 8) {
      *param_1 = *puVar3;
      param_1[1] = puVar3[1];
      param_1[2] = puVar3[2];
      param_1[3] = puVar3[3];
      iVar1 = c_overlap_offset_step1add[param_2];
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar3 + iVar1);
      puVar3 = puVar3 + iVar1 + -(longlong)c_overlap_offset_step2sub[param_2];
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)puVar3;
    }
    puVar2 = param_1 + 8;
    do {
      puVar3 = puVar3 + 8;
      *(undefined8 *)puVar2 = *(undefined8 *)puVar3;
      puVar2 = puVar2 + 8;
    } while (puVar2 < param_1 + param_3 + -7);
    for (; puVar2 < param_1 + param_3; puVar2 = puVar2 + 1) {
      *puVar2 = puVar2[-param_2];
    }
  }
  return;
}

// lz_copywordsteptoend_mayoverlap_overrunok @ 14f330d20

uchar * __cdecl
oo2::lz_copywordsteptoend_mayoverlap_overrunok(uchar *param_1,long64 param_2,long64 param_3)

{
  int iVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  puVar3 = param_1 + -param_2;
  if (param_2 < 8) {
    *param_1 = *puVar3;
    param_1[1] = puVar3[1];
    param_1[2] = puVar3[2];
    param_1[3] = puVar3[3];
    iVar1 = c_overlap_offset_step1add[param_2];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar3 + iVar1);
    puVar3 = puVar3 + iVar1 + -(longlong)c_overlap_offset_step2sub[param_2];
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)puVar3;
  }
  puVar2 = param_1 + 8;
  do {
    puVar3 = puVar3 + 8;
    *(undefined8 *)puVar2 = *(undefined8 *)puVar3;
    puVar2 = puVar2 + 8;
  } while (puVar2 < param_1 + param_3);
  return puVar2;
}

// rrAlignUp64 @ 14f330da0

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f330dc0

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f330de0

ulong64 __cdecl oo2::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrGetBytes_U16 @ 14f330e00

uchar * __cdecl oo2::rrGetBytes_U16(uchar *param_1,ushort *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  *param_2 = (ushort)bVar1 << 8;
  *param_2 = CONCAT11(bVar1,param_1[1]);
  return param_1 + 2;
}

// rrGetBytes_U24 @ 14f330e30

uchar * __cdecl oo2::rrGetBytes_U24(uchar *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  *param_2 = (uint)bVar1 << 0x10;
  uVar2 = (uint)param_1[1] << 8 | (uint)bVar1 << 0x10;
  *param_2 = uVar2;
  *param_2 = param_1[2] | uVar2;
  return param_1 + 3;
}

// rrHuffman_ComputeTransmissionCost @ 14f330e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl
oo2::rrHuffman_ComputeTransmissionCost(uint *param_1,int param_2,rrArenaAllocator *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  void *pvVar7;
  uint uVar8;
  ulonglong *puVar9;
  uint *puVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auStackY_4c8 [32];
  _rrVarBits_ local_498;
  rrHuffman *local_478;
  rrArenaAllocator *local_470;
  void *local_468;
  ulonglong local_460;
  undefined8 local_458;
  ulonglong local_448 [128];
  ulonglong local_48;
  
  local_458 = 0xfffffffffffffffe;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  uVar18 = (ulonglong)param_2;
  uVar4 = rrSumOfHistogram(param_1,param_2);
  if (uVar4 < 2) {
    return 1;
  }
  iVar5 = rrHuffman_MemorySizeNeeded(param_2,0);
  uVar16 = (ulonglong)(iVar5 + 0x10);
  local_470 = param_3;
  local_460 = uVar16;
  if (param_3 == (rrArenaAllocator *)0x0) {
    pvVar7 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar16,0x10);
    uVar17 = uVar16;
joined_r0x00014f330f8a:
    if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(uVar17);
    }
  }
  else {
    uVar17 = uVar16 + 0xf & 0xfffffffffffffff0;
    uVar13 = (ulonglong)(-(uint)(param_3->m_unorderedStart != 0) & 0x10);
    pvVar7 = (void *)param_3->m_cur;
    if (param_3->m_size + param_3->m_base < (longlong)pvVar7 + uVar17 + uVar13) {
      if (param_3->m_allowFallback != 0) {
        pvVar7 = (*g_fp_OodleCore_Plugin_MallocAligned)(uVar17,0x10);
        goto joined_r0x00014f330f8a;
      }
      pvVar7 = (void *)0x0;
    }
    else {
      puVar9 = (ulonglong *)((longlong)pvVar7 + uVar17);
      param_3->m_cur = (ulong64)puVar9;
      if (param_3->m_unorderedStart != 0) {
        *puVar9 = uVar17;
        puVar9[1] = 0;
        param_3->m_cur = param_3->m_cur + uVar13;
        puVar9 = (ulonglong *)param_3->m_cur;
      }
      puVar6 = (ulonglong *)param_3->m_cur_max;
      if ((ulonglong *)param_3->m_cur_max <= puVar9) {
        puVar6 = puVar9;
      }
      param_3->m_cur_max = (ulong64)puVar6;
    }
  }
  local_468 = pvVar7;
  if ((pvVar7 == (void *)0x0) &&
     (iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                 "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar5 != 0)) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  local_478 = rrHuffman_Create(param_2,0,(void *)((longlong)pvVar7 + 0xfU & 0xfffffffffffffff0));
  rrHuffman_BuildCodeLens(local_478,param_1,uVar4,0x10,(rrArenaAllocator *)0x0,0);
  puVar1 = (uint *)local_478->codeLenTable;
  iVar15 = 0;
  iVar5 = iVar15;
  uVar4 = 0;
  if (((0 < param_2) && (iVar5 = 0, uVar4 = 0, 7 < (uint)param_2)) && (1 < __isa_available)) {
    iVar5 = 0;
    iVar20 = 0;
    iVar21 = 0;
    iVar22 = 0;
    puVar10 = puVar1;
    pauVar14 = (undefined1 (*) [16])param_1;
    auVar23 = ZEXT816(0);
    do {
      auVar19 = pmovzxbd(in_XMM2,ZEXT416(*puVar10));
      auVar19 = pmulld(auVar19,*pauVar14);
      iVar5 = iVar5 + auVar19._0_4_;
      iVar20 = iVar20 + auVar19._4_4_;
      iVar21 = iVar21 + auVar19._8_4_;
      iVar22 = iVar22 + auVar19._12_4_;
      auVar19 = pmovzxbd(auVar19,ZEXT416(puVar10[1]));
      auVar19 = pmulld(auVar19,pauVar14[1]);
      in_XMM2._0_4_ = auVar19._0_4_ + auVar23._0_4_;
      in_XMM2._4_4_ = auVar19._4_4_ + auVar23._4_4_;
      in_XMM2._8_4_ = auVar19._8_4_ + auVar23._8_4_;
      in_XMM2._12_4_ = auVar19._12_4_ + auVar23._12_4_;
      iVar15 = iVar15 + 8;
      pauVar14 = pauVar14 + 2;
      puVar10 = puVar10 + 2;
      auVar23 = in_XMM2;
    } while ((longlong)puVar10 - (longlong)puVar1 < (longlong)(uVar18 & 0xfffffffffffffff8));
    uVar4 = iVar5 + in_XMM2._0_4_ + iVar21 + in_XMM2._8_4_ +
            iVar20 + in_XMM2._4_4_ + iVar22 + in_XMM2._12_4_;
    iVar5 = iVar15;
  }
  iVar15 = 0;
  iVar20 = 0;
  lVar11 = (longlong)iVar5;
  if ((longlong)uVar18 <= lVar11) goto LAB_14f33110a;
  if ((longlong)(uVar18 - lVar11) < 2) {
LAB_14f3310f7:
    uVar4 = uVar4 + (uint)*(byte *)(lVar11 + (longlong)puVar1) * param_1[lVar11];
  }
  else {
    do {
      iVar15 = iVar15 + (uint)*(byte *)(lVar11 + (longlong)puVar1) * param_1[lVar11];
      iVar20 = iVar20 + (uint)*(byte *)(lVar11 + 1 + (longlong)puVar1) * param_1[lVar11 + 1];
      lVar11 = lVar11 + 2;
    } while (lVar11 < (longlong)(uVar18 - 1));
    if (lVar11 < (longlong)uVar18) goto LAB_14f3310f7;
  }
  uVar4 = uVar4 + iVar20 + iVar15;
LAB_14f33110a:
  local_498.m_bits = 0;
  local_498.m_inv_bitlen = 0x3f;
  local_498.m_cur = (uchar *)local_448;
  rrHuffman_PackCodeLens(local_478,&local_498);
  lVar11 = 0x3f - local_498.m_inv_bitlen >> 3;
  uVar18 = local_498.m_bits << ((char)local_498.m_inv_bitlen + 1U & 0x3f);
  *(ulonglong *)local_498.m_cur =
       uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 | (uVar18 & 0xff0000000000) >> 0x18 |
       (uVar18 & 0xff00000000) >> 8 | (uVar18 & 0xff000000) << 8 | (uVar18 & 0xff0000) << 0x18 |
       (uVar18 & 0xff00) << 0x28 | uVar18 << 0x38;
  local_498.m_cur = (uchar *)((longlong)local_498.m_cur + lVar11);
  local_498.m_inv_bitlen = local_498.m_inv_bitlen + lVar11 * 8;
  if (-local_498.m_inv_bitlen != -0x3f && -1 < -local_498.m_inv_bitlen + 0x3f) {
    uVar8 = (int)local_498.m_inv_bitlen + 1U & 7;
    if (uVar8 != 0) {
      local_498.m_bits = local_498.m_bits << (sbyte)uVar8;
      local_498.m_inv_bitlen = local_498.m_inv_bitlen - (ulonglong)uVar8;
    }
    while (7 < 0x3f - local_498.m_inv_bitlen) {
      *local_498.m_cur = (uchar)(local_498.m_bits >> (0x37U - (char)local_498.m_inv_bitlen & 0x3f));
      local_498.m_cur = local_498.m_cur + 1;
      local_498.m_inv_bitlen = local_498.m_inv_bitlen + 8;
      local_498.m_bits =
           local_498.m_bits &
           *(uint *)((longlong)c_rrBitMask64 + local_498.m_inv_bitlen * -4 + 0x5c);
    }
  }
  uVar4 = ((int)((longlong)
                 ((ulonglong)((uint)(0x46 - local_498.m_inv_bitlen >> 0x3f) & 7) +
                 (0x46 - local_498.m_inv_bitlen)) >> 3) - (int)local_448) + (int)local_498.m_cur +
          (uVar4 >> 3);
  if (pvVar7 != (void *)0x0) {
    if (param_3 != (rrArenaAllocator *)0x0) {
      uVar18 = uVar16 + 0xf & 0xfffffffffffffff0;
      if ((void *)param_3->m_unorderedStart == (void *)0x0) {
        if (uVar18 + (longlong)pvVar7 == param_3->m_cur) {
          param_3->m_cur = param_3->m_cur - uVar18;
          return uVar4;
        }
      }
      else if (((void *)param_3->m_unorderedStart <= pvVar7) &&
              (pvVar7 < (void *)(param_3->m_size + param_3->m_base))) {
        plVar12 = (longlong *)(uVar18 + (longlong)pvVar7);
        plVar12[1] = 1;
        plVar2 = (longlong *)param_3->m_cur;
        if (plVar12 + 2 != plVar2) {
          return uVar4;
        }
        while( true ) {
          if (plVar2 == (longlong *)param_3->m_unorderedStart) {
            return uVar4;
          }
          if (plVar12[1] != 1) break;
          param_3->m_cur = param_3->m_cur + (-0x10 - *plVar12);
          plVar2 = (longlong *)param_3->m_cur;
          plVar12 = plVar2 + -2;
        }
        return uVar4;
      }
    }
    (*g_fp_OodleCore_Plugin_Free)(pvVar7);
    return uVar4;
  }
  return uVar4;
}

// rrLZH_CRC_Block @ 14f331310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl oo2::rrLZH_CRC_Block(uchar *param_1,long64 param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar25;
  int iVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar27;
  undefined1 auVar24 [16];
  int iVar28;
  int iVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  undefined1 auVar29 [16];
  int iVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  uint uVar43;
  int iVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  int iVar48;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar2 = (int)param_2 + 0xdeadbeef;
  iVar3 = 0x5768b525 - (int)param_2;
  auVar39._4_4_ = iVar3;
  auVar39._0_4_ = iVar3;
  auVar39._8_4_ = iVar3;
  auVar39._12_4_ = iVar3;
  auVar29 = ___xmm_206f85b3206f85b3206f85b3206f85b3;
  uVar31 = uVar2;
  uVar33 = uVar2;
  uVar35 = uVar2;
  if ((uchar *)((ulonglong)param_1 & 0xfffffffffffffff0) == param_1) {
    if (0x17f < (ulonglong)param_2) {
      uVar5 = (ulonglong)param_2 / 0x180;
      param_2 = (ulonglong)param_2 % 0x180;
      do {
        lVar4 = 8;
        do {
          auVar6 = pshuflw(in_XMM0,*(undefined1 (*) [16])param_1,0xb1);
          auVar20 = pshufhw(in_XMM5,auVar6,0xb1);
          auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])((longlong)param_1 + 0x10),0xb1);
          auVar22 = pshufhw(auVar29,auVar6,0xb1);
          auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])((longlong)param_1 + 0x20),0xb1);
          auVar6 = pshufhw(in_XMM3,auVar6,0xb1);
          param_1 = (uchar *)((longlong)param_1 + 0x30);
          auVar23 = psllw(auVar22,8);
          auVar10._0_2_ = auVar6._0_2_ >> 8;
          auVar10._2_2_ = auVar6._2_2_ >> 8;
          auVar10._4_2_ = auVar6._4_2_ >> 8;
          auVar10._6_2_ = auVar6._6_2_ >> 8;
          auVar10._8_2_ = auVar6._8_2_ >> 8;
          auVar10._10_2_ = auVar6._10_2_ >> 8;
          auVar10._12_2_ = auVar6._12_2_ >> 8;
          auVar10._14_2_ = auVar6._14_2_ >> 8;
          in_XMM2._0_2_ = auVar22._0_2_ >> 8;
          in_XMM2._2_2_ = auVar22._2_2_ >> 8;
          in_XMM2._4_2_ = auVar22._4_2_ >> 8;
          in_XMM2._6_2_ = auVar22._6_2_ >> 8;
          in_XMM2._8_2_ = auVar22._8_2_ >> 8;
          in_XMM2._10_2_ = auVar22._10_2_ >> 8;
          in_XMM2._12_2_ = auVar22._12_2_ >> 8;
          in_XMM2._14_2_ = auVar22._14_2_ >> 8;
          auVar6 = psllw(auVar6,8);
          auVar23 = auVar23 | in_XMM2;
          in_XMM5 = psllw(auVar20,8);
          in_XMM3 = auVar6 | auVar10;
          in_XMM4._0_2_ = auVar20._0_2_ >> 8;
          in_XMM4._2_2_ = auVar20._2_2_ >> 8;
          in_XMM4._4_2_ = auVar20._4_2_ >> 8;
          in_XMM4._6_2_ = auVar20._6_2_ >> 8;
          in_XMM4._8_2_ = auVar20._8_2_ >> 8;
          in_XMM4._10_2_ = auVar20._10_2_ >> 8;
          in_XMM4._12_2_ = auVar20._12_2_ >> 8;
          in_XMM4._14_2_ = auVar20._14_2_ >> 8;
          iVar3 = auVar23._0_4_ + auVar29._0_4_;
          iVar25 = auVar23._4_4_ + auVar29._4_4_;
          iVar26 = auVar23._8_4_ + auVar29._8_4_;
          iVar27 = auVar23._12_4_ + auVar29._12_4_;
          uVar36 = auVar39._0_4_ + in_XMM3._0_4_;
          uVar43 = auVar39._4_4_ + in_XMM3._4_4_;
          uVar45 = auVar39._8_4_ + in_XMM3._8_4_;
          uVar47 = auVar39._12_4_ + in_XMM3._12_4_;
          auVar29 = in_XMM5 | in_XMM4;
          iVar37 = uVar36 + iVar3;
          iVar44 = uVar43 + iVar25;
          iVar46 = uVar45 + iVar26;
          iVar48 = uVar47 + iVar27;
          uVar2 = (auVar29._0_4_ + uVar2) - uVar36 ^ (uVar36 * 0x10 | uVar36 >> 0x1c);
          uVar36 = (auVar29._4_4_ + uVar31) - uVar43 ^ (uVar43 * 0x10 | uVar43 >> 0x1c);
          uVar43 = (auVar29._8_4_ + uVar33) - uVar45 ^ (uVar45 * 0x10 | uVar45 >> 0x1c);
          uVar45 = (auVar29._12_4_ + uVar35) - uVar47 ^ (uVar47 * 0x10 | uVar47 >> 0x1c);
          iVar28 = uVar2 + iVar37;
          iVar30 = uVar36 + iVar44;
          iVar32 = uVar43 + iVar46;
          iVar34 = uVar45 + iVar48;
          uVar31 = iVar3 - uVar2 ^ (uVar2 << 6 | uVar2 >> 0x1a);
          uVar33 = iVar25 - uVar36 ^ (uVar36 << 6 | uVar36 >> 0x1a);
          uVar35 = iVar26 - uVar43 ^ (uVar43 << 6 | uVar43 >> 0x1a);
          uVar2 = iVar27 - uVar45 ^ (uVar45 << 6 | uVar45 >> 0x1a);
          iVar3 = uVar31 + iVar28;
          iVar25 = uVar33 + iVar30;
          iVar26 = uVar35 + iVar32;
          iVar27 = uVar2 + iVar34;
          uVar31 = iVar37 - uVar31 ^ (uVar31 << 8 | uVar31 >> 0x18);
          uVar33 = iVar44 - uVar33 ^ (uVar33 << 8 | uVar33 >> 0x18);
          uVar35 = iVar46 - uVar35 ^ (uVar35 << 8 | uVar35 >> 0x18);
          uVar2 = iVar48 - uVar2 ^ (uVar2 << 8 | uVar2 >> 0x18);
          iVar37 = uVar31 + iVar3;
          iVar44 = uVar33 + iVar25;
          iVar46 = uVar35 + iVar26;
          iVar48 = uVar2 + iVar27;
          uVar36 = iVar28 - uVar31 ^ (uVar31 << 0x10 | uVar31 >> 0x10);
          uVar43 = iVar30 - uVar33 ^ (uVar33 << 0x10 | uVar33 >> 0x10);
          uVar45 = iVar32 - uVar35 ^ (uVar35 << 0x10 | uVar35 >> 0x10);
          uVar47 = iVar34 - uVar2 ^ (uVar2 << 0x10 | uVar2 >> 0x10);
          uVar2 = uVar36 + iVar37;
          uVar31 = uVar43 + iVar44;
          uVar33 = uVar45 + iVar46;
          uVar35 = uVar47 + iVar48;
          uVar36 = iVar3 - uVar36 ^ (uVar36 << 0x13 | uVar36 >> 0xd);
          uVar43 = iVar25 - uVar43 ^ (uVar43 << 0x13 | uVar43 >> 0xd);
          uVar45 = iVar26 - uVar45 ^ (uVar45 << 0x13 | uVar45 >> 0xd);
          uVar47 = iVar27 - uVar47 ^ (uVar47 << 0x13 | uVar47 >> 0xd);
          in_XMM0._0_4_ = uVar36 >> 0x1c;
          in_XMM0._4_4_ = uVar43 >> 0x1c;
          in_XMM0._8_4_ = uVar45 >> 0x1c;
          in_XMM0._12_4_ = uVar47 >> 0x1c;
          auVar38._0_4_ = iVar37 - uVar36;
          auVar38._4_4_ = iVar44 - uVar43;
          auVar38._8_4_ = iVar46 - uVar45;
          auVar38._12_4_ = iVar48 - uVar47;
          auVar11._0_4_ = uVar36 << 4;
          auVar11._4_4_ = uVar43 << 4;
          auVar11._8_4_ = uVar45 << 4;
          auVar11._12_4_ = uVar47 << 4;
          auVar29._0_4_ = uVar2 + uVar36;
          auVar29._4_4_ = uVar31 + uVar43;
          auVar29._8_4_ = uVar33 + uVar45;
          auVar29._12_4_ = uVar35 + uVar47;
          in_XMM1 = auVar11 | in_XMM0;
          auVar39 = auVar38 ^ in_XMM1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (0x2f < (ulonglong)param_2) {
      uVar5 = (ulonglong)param_2 / 0x30;
      param_2 = (ulonglong)param_2 % 0x30;
      do {
        auVar6 = pshuflw(in_XMM0,*(undefined1 (*) [16])param_1,0xb1);
        auVar22 = pshufhw(auVar29,auVar6,0xb1);
        auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])((longlong)param_1 + 0x10),0xb1);
        auVar20 = pshufhw(in_XMM4,auVar6,0xb1);
        auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])((longlong)param_1 + 0x20),0xb1);
        auVar6 = pshufhw(in_XMM3,auVar6,0xb1);
        param_1 = (uchar *)((longlong)param_1 + 0x30);
        auVar23 = psllw(auVar22,8);
        auVar12._0_2_ = auVar6._0_2_ >> 8;
        auVar12._2_2_ = auVar6._2_2_ >> 8;
        auVar12._4_2_ = auVar6._4_2_ >> 8;
        auVar12._6_2_ = auVar6._6_2_ >> 8;
        auVar12._8_2_ = auVar6._8_2_ >> 8;
        auVar12._10_2_ = auVar6._10_2_ >> 8;
        auVar12._12_2_ = auVar6._12_2_ >> 8;
        auVar12._14_2_ = auVar6._14_2_ >> 8;
        auVar6 = psllw(auVar6,8);
        auVar21._0_2_ = auVar22._0_2_ >> 8;
        auVar21._2_2_ = auVar22._2_2_ >> 8;
        auVar21._4_2_ = auVar22._4_2_ >> 8;
        auVar21._6_2_ = auVar22._6_2_ >> 8;
        auVar21._8_2_ = auVar22._8_2_ >> 8;
        auVar21._10_2_ = auVar22._10_2_ >> 8;
        auVar21._12_2_ = auVar22._12_2_ >> 8;
        auVar21._14_2_ = auVar22._14_2_ >> 8;
        in_XMM3 = auVar6 | auVar12;
        in_XMM2._0_2_ = auVar20._0_2_ >> 8;
        in_XMM2._2_2_ = auVar20._2_2_ >> 8;
        in_XMM2._4_2_ = auVar20._4_2_ >> 8;
        in_XMM2._6_2_ = auVar20._6_2_ >> 8;
        in_XMM2._8_2_ = auVar20._8_2_ >> 8;
        in_XMM2._10_2_ = auVar20._10_2_ >> 8;
        in_XMM2._12_2_ = auVar20._12_2_ >> 8;
        in_XMM2._14_2_ = auVar20._14_2_ >> 8;
        uVar36 = auVar39._0_4_ + in_XMM3._0_4_;
        uVar43 = auVar39._4_4_ + in_XMM3._4_4_;
        uVar45 = auVar39._8_4_ + in_XMM3._8_4_;
        uVar47 = auVar39._12_4_ + in_XMM3._12_4_;
        auVar39 = psllw(auVar20,8);
        auVar23 = auVar23 | auVar21;
        in_XMM4 = auVar39 | in_XMM2;
        uVar2 = (auVar23._0_4_ + uVar2) - uVar36 ^ (uVar36 * 0x10 | uVar36 >> 0x1c);
        uVar31 = (auVar23._4_4_ + uVar31) - uVar43 ^ (uVar43 * 0x10 | uVar43 >> 0x1c);
        uVar33 = (auVar23._8_4_ + uVar33) - uVar45 ^ (uVar45 * 0x10 | uVar45 >> 0x1c);
        uVar35 = (auVar23._12_4_ + uVar35) - uVar47 ^ (uVar47 * 0x10 | uVar47 >> 0x1c);
        iVar28 = auVar29._0_4_ + in_XMM4._0_4_;
        iVar30 = auVar29._4_4_ + in_XMM4._4_4_;
        iVar32 = auVar29._8_4_ + in_XMM4._8_4_;
        iVar34 = auVar29._12_4_ + in_XMM4._12_4_;
        iVar37 = uVar36 + iVar28;
        iVar44 = uVar43 + iVar30;
        iVar46 = uVar45 + iVar32;
        iVar48 = uVar47 + iVar34;
        iVar3 = uVar2 + iVar37;
        iVar25 = uVar31 + iVar44;
        iVar26 = uVar33 + iVar46;
        iVar27 = uVar35 + iVar48;
        uVar2 = iVar28 - uVar2 ^ (uVar2 << 6 | uVar2 >> 0x1a);
        uVar31 = iVar30 - uVar31 ^ (uVar31 << 6 | uVar31 >> 0x1a);
        uVar33 = iVar32 - uVar33 ^ (uVar33 << 6 | uVar33 >> 0x1a);
        uVar35 = iVar34 - uVar35 ^ (uVar35 << 6 | uVar35 >> 0x1a);
        iVar28 = uVar2 + iVar3;
        iVar30 = uVar31 + iVar25;
        iVar32 = uVar33 + iVar26;
        iVar34 = uVar35 + iVar27;
        uVar2 = iVar37 - uVar2 ^ (uVar2 << 8 | uVar2 >> 0x18);
        uVar31 = iVar44 - uVar31 ^ (uVar31 << 8 | uVar31 >> 0x18);
        uVar33 = iVar46 - uVar33 ^ (uVar33 << 8 | uVar33 >> 0x18);
        uVar35 = iVar48 - uVar35 ^ (uVar35 << 8 | uVar35 >> 0x18);
        iVar37 = uVar2 + iVar28;
        iVar44 = uVar31 + iVar30;
        iVar46 = uVar33 + iVar32;
        iVar48 = uVar35 + iVar34;
        uVar36 = iVar3 - uVar2 ^ (uVar2 << 0x10 | uVar2 >> 0x10);
        uVar43 = iVar25 - uVar31 ^ (uVar31 << 0x10 | uVar31 >> 0x10);
        uVar45 = iVar26 - uVar33 ^ (uVar33 << 0x10 | uVar33 >> 0x10);
        uVar47 = iVar27 - uVar35 ^ (uVar35 << 0x10 | uVar35 >> 0x10);
        uVar2 = iVar37 + uVar36;
        uVar31 = iVar44 + uVar43;
        uVar33 = iVar46 + uVar45;
        uVar35 = iVar48 + uVar47;
        uVar36 = iVar28 - uVar36 ^ (uVar36 << 0x13 | uVar36 >> 0xd);
        uVar43 = iVar30 - uVar43 ^ (uVar43 << 0x13 | uVar43 >> 0xd);
        uVar45 = iVar32 - uVar45 ^ (uVar45 << 0x13 | uVar45 >> 0xd);
        uVar47 = iVar34 - uVar47 ^ (uVar47 << 0x13 | uVar47 >> 0xd);
        in_XMM0._0_4_ = uVar36 >> 0x1c;
        in_XMM0._4_4_ = uVar43 >> 0x1c;
        in_XMM0._8_4_ = uVar45 >> 0x1c;
        in_XMM0._12_4_ = uVar47 >> 0x1c;
        auVar40._0_4_ = iVar37 - uVar36;
        auVar40._4_4_ = iVar44 - uVar43;
        auVar40._8_4_ = iVar46 - uVar45;
        auVar40._12_4_ = iVar48 - uVar47;
        auVar13._0_4_ = uVar36 << 4;
        auVar13._4_4_ = uVar43 << 4;
        auVar13._8_4_ = uVar45 << 4;
        auVar13._12_4_ = uVar47 << 4;
        auVar29._0_4_ = uVar36 + uVar2;
        auVar29._4_4_ = uVar43 + uVar31;
        auVar29._8_4_ = uVar45 + uVar33;
        auVar29._12_4_ = uVar47 + uVar35;
        in_XMM1 = auVar13 | in_XMM0;
        auVar39 = auVar40 ^ in_XMM1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    if (0x17f < (ulonglong)param_2) {
      uVar5 = (ulonglong)param_2 / 0x180;
      param_2 = (ulonglong)param_2 % 0x180;
      do {
        lVar4 = 8;
        do {
          auVar6 = pshuflw(in_XMM1,*(undefined1 (*) [16])param_1,0xb1);
          auVar22 = pshufhw(in_XMM5,auVar6,0xb1);
          auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])((longlong)param_1 + 0x10),0xb1);
          pauVar1 = (undefined1 (*) [16])((longlong)param_1 + 0x20);
          param_1 = (uchar *)((longlong)param_1 + 0x30);
          auVar23 = pshufhw(auVar29,auVar6,0xb1);
          auVar6 = pshuflw(auVar6,*pauVar1,0xb1);
          auVar20 = pshufhw(in_XMM3,auVar6,0xb1);
          auVar24 = psllw(auVar23,8);
          auVar6._0_2_ = auVar20._0_2_ >> 8;
          auVar6._2_2_ = auVar20._2_2_ >> 8;
          auVar6._4_2_ = auVar20._4_2_ >> 8;
          auVar6._6_2_ = auVar20._6_2_ >> 8;
          auVar6._8_2_ = auVar20._8_2_ >> 8;
          auVar6._10_2_ = auVar20._10_2_ >> 8;
          auVar6._12_2_ = auVar20._12_2_ >> 8;
          auVar6._14_2_ = auVar20._14_2_ >> 8;
          in_XMM2._0_2_ = auVar23._0_2_ >> 8;
          in_XMM2._2_2_ = auVar23._2_2_ >> 8;
          in_XMM2._4_2_ = auVar23._4_2_ >> 8;
          in_XMM2._6_2_ = auVar23._6_2_ >> 8;
          in_XMM2._8_2_ = auVar23._8_2_ >> 8;
          in_XMM2._10_2_ = auVar23._10_2_ >> 8;
          in_XMM2._12_2_ = auVar23._12_2_ >> 8;
          in_XMM2._14_2_ = auVar23._14_2_ >> 8;
          auVar20 = psllw(auVar20,8);
          auVar24 = auVar24 | in_XMM2;
          in_XMM5 = psllw(auVar22,8);
          iVar3 = auVar24._0_4_ + auVar29._0_4_;
          iVar25 = auVar24._4_4_ + auVar29._4_4_;
          iVar26 = auVar24._8_4_ + auVar29._8_4_;
          iVar27 = auVar24._12_4_ + auVar29._12_4_;
          auVar23._0_2_ = auVar22._0_2_ >> 8;
          auVar23._2_2_ = auVar22._2_2_ >> 8;
          auVar23._4_2_ = auVar22._4_2_ >> 8;
          auVar23._6_2_ = auVar22._6_2_ >> 8;
          auVar23._8_2_ = auVar22._8_2_ >> 8;
          auVar23._10_2_ = auVar22._10_2_ >> 8;
          auVar23._12_2_ = auVar22._12_2_ >> 8;
          auVar23._14_2_ = auVar22._14_2_ >> 8;
          in_XMM3 = auVar20 | auVar6;
          uVar36 = auVar39._0_4_ + in_XMM3._0_4_;
          uVar43 = auVar39._4_4_ + in_XMM3._4_4_;
          uVar45 = auVar39._8_4_ + in_XMM3._8_4_;
          uVar47 = auVar39._12_4_ + in_XMM3._12_4_;
          auVar23 = in_XMM5 | auVar23;
          iVar37 = uVar36 + iVar3;
          iVar44 = uVar43 + iVar25;
          iVar46 = uVar45 + iVar26;
          iVar48 = uVar47 + iVar27;
          uVar2 = (auVar23._0_4_ + uVar2) - uVar36 ^ (uVar36 * 0x10 | uVar36 >> 0x1c);
          uVar36 = (auVar23._4_4_ + uVar31) - uVar43 ^ (uVar43 * 0x10 | uVar43 >> 0x1c);
          uVar43 = (auVar23._8_4_ + uVar33) - uVar45 ^ (uVar45 * 0x10 | uVar45 >> 0x1c);
          uVar45 = (auVar23._12_4_ + uVar35) - uVar47 ^ (uVar47 * 0x10 | uVar47 >> 0x1c);
          iVar28 = uVar2 + iVar37;
          iVar30 = uVar36 + iVar44;
          iVar32 = uVar43 + iVar46;
          iVar34 = uVar45 + iVar48;
          uVar31 = iVar3 - uVar2 ^ (uVar2 << 6 | uVar2 >> 0x1a);
          uVar33 = iVar25 - uVar36 ^ (uVar36 << 6 | uVar36 >> 0x1a);
          uVar35 = iVar26 - uVar43 ^ (uVar43 << 6 | uVar43 >> 0x1a);
          uVar2 = iVar27 - uVar45 ^ (uVar45 << 6 | uVar45 >> 0x1a);
          iVar3 = uVar31 + iVar28;
          iVar25 = uVar33 + iVar30;
          iVar26 = uVar35 + iVar32;
          iVar27 = uVar2 + iVar34;
          uVar31 = iVar37 - uVar31 ^ (uVar31 << 8 | uVar31 >> 0x18);
          uVar33 = iVar44 - uVar33 ^ (uVar33 << 8 | uVar33 >> 0x18);
          uVar35 = iVar46 - uVar35 ^ (uVar35 << 8 | uVar35 >> 0x18);
          uVar2 = iVar48 - uVar2 ^ (uVar2 << 8 | uVar2 >> 0x18);
          iVar37 = uVar31 + iVar3;
          iVar44 = uVar33 + iVar25;
          iVar46 = uVar35 + iVar26;
          iVar48 = uVar2 + iVar27;
          uVar36 = iVar28 - uVar31 ^ (uVar31 << 0x10 | uVar31 >> 0x10);
          uVar43 = iVar30 - uVar33 ^ (uVar33 << 0x10 | uVar33 >> 0x10);
          uVar45 = iVar32 - uVar35 ^ (uVar35 << 0x10 | uVar35 >> 0x10);
          uVar47 = iVar34 - uVar2 ^ (uVar2 << 0x10 | uVar2 >> 0x10);
          uVar2 = uVar36 + iVar37;
          uVar31 = uVar43 + iVar44;
          uVar33 = uVar45 + iVar46;
          uVar35 = uVar47 + iVar48;
          uVar36 = iVar3 - uVar36 ^ (uVar36 << 0x13 | uVar36 >> 0xd);
          uVar43 = iVar25 - uVar43 ^ (uVar43 << 0x13 | uVar43 >> 0xd);
          uVar45 = iVar26 - uVar45 ^ (uVar45 << 0x13 | uVar45 >> 0xd);
          uVar47 = iVar27 - uVar47 ^ (uVar47 << 0x13 | uVar47 >> 0xd);
          auVar20._0_4_ = uVar36 >> 0x1c;
          auVar20._4_4_ = uVar43 >> 0x1c;
          auVar20._8_4_ = uVar45 >> 0x1c;
          auVar20._12_4_ = uVar47 >> 0x1c;
          auVar24._0_4_ = iVar37 - uVar36;
          auVar24._4_4_ = iVar44 - uVar43;
          auVar24._8_4_ = iVar46 - uVar45;
          auVar24._12_4_ = iVar48 - uVar47;
          auVar22._0_4_ = uVar36 << 4;
          auVar22._4_4_ = uVar43 << 4;
          auVar22._8_4_ = uVar45 << 4;
          auVar22._12_4_ = uVar47 << 4;
          auVar29._0_4_ = uVar2 + uVar36;
          auVar29._4_4_ = uVar31 + uVar43;
          auVar29._8_4_ = uVar33 + uVar45;
          auVar29._12_4_ = uVar35 + uVar47;
          in_XMM1 = auVar22 | auVar20;
          auVar39 = auVar24 ^ in_XMM1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (0x2f < (ulonglong)param_2) {
      uVar5 = (ulonglong)param_2 / 0x30;
      param_2 = (ulonglong)param_2 % 0x30;
      do {
        auVar6 = pshuflw(in_XMM1,*(undefined1 (*) [16])param_1,0xb1);
        auVar20 = pshufhw(in_XMM5,auVar6,0xb1);
        auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])((longlong)param_1 + 0x10),0xb1);
        pauVar1 = (undefined1 (*) [16])((longlong)param_1 + 0x20);
        param_1 = (uchar *)((longlong)param_1 + 0x30);
        auVar22 = pshufhw(auVar29,auVar6,0xb1);
        auVar6 = pshuflw(auVar6,*pauVar1,0xb1);
        auVar6 = pshufhw(in_XMM3,auVar6,0xb1);
        auVar23 = psllw(auVar22,8);
        auVar7._0_2_ = auVar6._0_2_ >> 8;
        auVar7._2_2_ = auVar6._2_2_ >> 8;
        auVar7._4_2_ = auVar6._4_2_ >> 8;
        auVar7._6_2_ = auVar6._6_2_ >> 8;
        auVar7._8_2_ = auVar6._8_2_ >> 8;
        auVar7._10_2_ = auVar6._10_2_ >> 8;
        auVar7._12_2_ = auVar6._12_2_ >> 8;
        auVar7._14_2_ = auVar6._14_2_ >> 8;
        auVar6 = psllw(auVar6,8);
        auVar19._0_2_ = auVar20._0_2_ >> 8;
        auVar19._2_2_ = auVar20._2_2_ >> 8;
        auVar19._4_2_ = auVar20._4_2_ >> 8;
        auVar19._6_2_ = auVar20._6_2_ >> 8;
        auVar19._8_2_ = auVar20._8_2_ >> 8;
        auVar19._10_2_ = auVar20._10_2_ >> 8;
        auVar19._12_2_ = auVar20._12_2_ >> 8;
        auVar19._14_2_ = auVar20._14_2_ >> 8;
        in_XMM3 = auVar6 | auVar7;
        auVar6 = psllw(auVar20,8);
        uVar36 = auVar39._0_4_ + in_XMM3._0_4_;
        uVar43 = auVar39._4_4_ + in_XMM3._4_4_;
        uVar45 = auVar39._8_4_ + in_XMM3._8_4_;
        uVar47 = auVar39._12_4_ + in_XMM3._12_4_;
        in_XMM2._0_2_ = auVar22._0_2_ >> 8;
        in_XMM2._2_2_ = auVar22._2_2_ >> 8;
        in_XMM2._4_2_ = auVar22._4_2_ >> 8;
        in_XMM2._6_2_ = auVar22._6_2_ >> 8;
        in_XMM2._8_2_ = auVar22._8_2_ >> 8;
        in_XMM2._10_2_ = auVar22._10_2_ >> 8;
        in_XMM2._12_2_ = auVar22._12_2_ >> 8;
        in_XMM2._14_2_ = auVar22._14_2_ >> 8;
        auVar23 = auVar23 | in_XMM2;
        iVar3 = auVar23._0_4_ + auVar29._0_4_;
        iVar25 = auVar23._4_4_ + auVar29._4_4_;
        iVar26 = auVar23._8_4_ + auVar29._8_4_;
        iVar27 = auVar23._12_4_ + auVar29._12_4_;
        in_XMM5 = auVar6 | auVar19;
        iVar28 = uVar36 + iVar3;
        iVar30 = uVar43 + iVar25;
        iVar32 = uVar45 + iVar26;
        iVar34 = uVar47 + iVar27;
        uVar2 = (uVar2 + in_XMM5._0_4_) - uVar36 ^ (uVar36 * 0x10 | uVar36 >> 0x1c);
        uVar36 = (uVar31 + in_XMM5._4_4_) - uVar43 ^ (uVar43 * 0x10 | uVar43 >> 0x1c);
        uVar43 = (uVar33 + in_XMM5._8_4_) - uVar45 ^ (uVar45 * 0x10 | uVar45 >> 0x1c);
        uVar45 = (uVar35 + in_XMM5._12_4_) - uVar47 ^ (uVar47 * 0x10 | uVar47 >> 0x1c);
        iVar37 = uVar2 + iVar28;
        iVar44 = uVar36 + iVar30;
        iVar46 = uVar43 + iVar32;
        iVar48 = uVar45 + iVar34;
        uVar31 = iVar3 - uVar2 ^ (uVar2 << 6 | uVar2 >> 0x1a);
        uVar33 = iVar25 - uVar36 ^ (uVar36 << 6 | uVar36 >> 0x1a);
        uVar35 = iVar26 - uVar43 ^ (uVar43 << 6 | uVar43 >> 0x1a);
        uVar2 = iVar27 - uVar45 ^ (uVar45 << 6 | uVar45 >> 0x1a);
        iVar3 = iVar37 + uVar31;
        iVar25 = iVar44 + uVar33;
        iVar26 = iVar46 + uVar35;
        iVar27 = iVar48 + uVar2;
        uVar31 = iVar28 - uVar31 ^ (uVar31 << 8 | uVar31 >> 0x18);
        uVar33 = iVar30 - uVar33 ^ (uVar33 << 8 | uVar33 >> 0x18);
        uVar35 = iVar32 - uVar35 ^ (uVar35 << 8 | uVar35 >> 0x18);
        uVar2 = iVar34 - uVar2 ^ (uVar2 << 8 | uVar2 >> 0x18);
        iVar28 = uVar31 + iVar3;
        iVar30 = uVar33 + iVar25;
        iVar32 = uVar35 + iVar26;
        iVar34 = uVar2 + iVar27;
        uVar36 = iVar37 - uVar31 ^ (uVar31 << 0x10 | uVar31 >> 0x10);
        uVar43 = iVar44 - uVar33 ^ (uVar33 << 0x10 | uVar33 >> 0x10);
        uVar45 = iVar46 - uVar35 ^ (uVar35 << 0x10 | uVar35 >> 0x10);
        uVar47 = iVar48 - uVar2 ^ (uVar2 << 0x10 | uVar2 >> 0x10);
        uVar2 = uVar36 + iVar28;
        uVar31 = uVar43 + iVar30;
        uVar33 = uVar45 + iVar32;
        uVar35 = uVar47 + iVar34;
        uVar36 = iVar3 - uVar36 ^ (uVar36 << 0x13 | uVar36 >> 0xd);
        uVar43 = iVar25 - uVar43 ^ (uVar43 << 0x13 | uVar43 >> 0xd);
        uVar45 = iVar26 - uVar45 ^ (uVar45 << 0x13 | uVar45 >> 0xd);
        uVar47 = iVar27 - uVar47 ^ (uVar47 << 0x13 | uVar47 >> 0xd);
        auVar8._0_4_ = uVar36 >> 0x1c;
        auVar8._4_4_ = uVar43 >> 0x1c;
        auVar8._8_4_ = uVar45 >> 0x1c;
        auVar8._12_4_ = uVar47 >> 0x1c;
        auVar41._0_4_ = iVar28 - uVar36;
        auVar41._4_4_ = iVar30 - uVar43;
        auVar41._8_4_ = iVar32 - uVar45;
        auVar41._12_4_ = iVar34 - uVar47;
        auVar14._0_4_ = uVar36 << 4;
        auVar14._4_4_ = uVar43 << 4;
        auVar14._8_4_ = uVar45 << 4;
        auVar14._12_4_ = uVar47 << 4;
        auVar29._0_4_ = uVar36 + uVar2;
        auVar29._4_4_ = uVar43 + uVar31;
        auVar29._8_4_ = uVar45 + uVar33;
        auVar29._12_4_ = uVar47 + uVar35;
        in_XMM1 = auVar14 | auVar8;
        auVar39 = auVar41 ^ in_XMM1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  if (param_2 != 0) {
    rrMemSetZero(auStack_88,0x30);
    memcpy(auStack_88,param_1,param_2);
    auVar6 = pshuflw(extraout_XMM0,auStack_88,0xb1);
    auVar20 = pshuflw(in_XMM1,auStack_78,0xb1);
    auVar23 = pshufhw(in_XMM3,auVar6,0xb1);
    auVar6 = pshuflw(auVar6,auStack_68,0xb1);
    auVar22 = pshufhw(in_XMM2,auVar20,0xb1);
    auVar6 = pshufhw(auVar20,auVar6,0xb1);
    auVar16._0_2_ = auVar22._0_2_ >> 8;
    auVar16._2_2_ = auVar22._2_2_ >> 8;
    auVar16._4_2_ = auVar22._4_2_ >> 8;
    auVar16._6_2_ = auVar22._6_2_ >> 8;
    auVar16._8_2_ = auVar22._8_2_ >> 8;
    auVar16._10_2_ = auVar22._10_2_ >> 8;
    auVar16._12_2_ = auVar22._12_2_ >> 8;
    auVar16._14_2_ = auVar22._14_2_ >> 8;
    auVar15._0_2_ = auVar6._0_2_ >> 8;
    auVar15._2_2_ = auVar6._2_2_ >> 8;
    auVar15._4_2_ = auVar6._4_2_ >> 8;
    auVar15._6_2_ = auVar6._6_2_ >> 8;
    auVar15._8_2_ = auVar6._8_2_ >> 8;
    auVar15._10_2_ = auVar6._10_2_ >> 8;
    auVar15._12_2_ = auVar6._12_2_ >> 8;
    auVar15._14_2_ = auVar6._14_2_ >> 8;
    auVar20 = psllw(auVar6,8);
    auVar20 = auVar20 | auVar15;
    auVar6 = psllw(auVar22,8);
    uVar36 = auVar20._0_4_ + auVar39._0_4_;
    uVar43 = auVar20._4_4_ + auVar39._4_4_;
    uVar45 = auVar20._8_4_ + auVar39._8_4_;
    uVar47 = auVar20._12_4_ + auVar39._12_4_;
    auVar6 = auVar6 | auVar16;
    iVar3 = auVar6._0_4_ + auVar29._0_4_;
    iVar25 = auVar6._4_4_ + auVar29._4_4_;
    iVar26 = auVar6._8_4_ + auVar29._8_4_;
    iVar27 = auVar6._12_4_ + auVar29._12_4_;
    auVar29 = psllw(auVar23,8);
    auVar18._0_2_ = auVar23._0_2_ >> 8;
    auVar18._2_2_ = auVar23._2_2_ >> 8;
    auVar18._4_2_ = auVar23._4_2_ >> 8;
    auVar18._6_2_ = auVar23._6_2_ >> 8;
    auVar18._8_2_ = auVar23._8_2_ >> 8;
    auVar18._10_2_ = auVar23._10_2_ >> 8;
    auVar18._12_2_ = auVar23._12_2_ >> 8;
    auVar18._14_2_ = auVar23._14_2_ >> 8;
    auVar29 = auVar29 | auVar18;
    iVar28 = uVar36 + iVar3;
    iVar30 = uVar43 + iVar25;
    iVar32 = uVar45 + iVar26;
    iVar34 = uVar47 + iVar27;
    uVar2 = (auVar29._0_4_ + uVar2) - uVar36 ^ (uVar36 >> 0x1c | uVar36 * 0x10);
    uVar36 = (auVar29._4_4_ + uVar31) - uVar43 ^ (uVar43 >> 0x1c | uVar43 * 0x10);
    uVar43 = (auVar29._8_4_ + uVar33) - uVar45 ^ (uVar45 >> 0x1c | uVar45 * 0x10);
    uVar45 = (auVar29._12_4_ + uVar35) - uVar47 ^ (uVar47 >> 0x1c | uVar47 * 0x10);
    iVar37 = uVar2 + iVar28;
    iVar44 = uVar36 + iVar30;
    iVar46 = uVar43 + iVar32;
    iVar48 = uVar45 + iVar34;
    uVar31 = (uVar2 >> 0x1a | uVar2 << 6) ^ iVar3 - uVar2;
    uVar33 = (uVar36 >> 0x1a | uVar36 << 6) ^ iVar25 - uVar36;
    uVar35 = (uVar43 >> 0x1a | uVar43 << 6) ^ iVar26 - uVar43;
    uVar2 = (uVar45 >> 0x1a | uVar45 << 6) ^ iVar27 - uVar45;
    iVar3 = uVar31 + iVar37;
    iVar25 = uVar33 + iVar44;
    iVar26 = uVar35 + iVar46;
    iVar27 = uVar2 + iVar48;
    uVar31 = (uVar31 >> 0x18 | uVar31 << 8) ^ iVar28 - uVar31;
    uVar33 = (uVar33 >> 0x18 | uVar33 << 8) ^ iVar30 - uVar33;
    uVar35 = (uVar35 >> 0x18 | uVar35 << 8) ^ iVar32 - uVar35;
    uVar2 = (uVar2 >> 0x18 | uVar2 << 8) ^ iVar34 - uVar2;
    iVar28 = uVar31 + iVar3;
    iVar30 = uVar33 + iVar25;
    iVar32 = uVar35 + iVar26;
    iVar34 = uVar2 + iVar27;
    uVar36 = (uVar31 << 0x10 | uVar31 >> 0x10) ^ iVar37 - uVar31;
    uVar43 = (uVar33 << 0x10 | uVar33 >> 0x10) ^ iVar44 - uVar33;
    uVar45 = (uVar35 << 0x10 | uVar35 >> 0x10) ^ iVar46 - uVar35;
    uVar47 = (uVar2 << 0x10 | uVar2 >> 0x10) ^ iVar48 - uVar2;
    uVar2 = uVar36 + iVar28;
    uVar31 = uVar43 + iVar30;
    uVar33 = uVar45 + iVar32;
    uVar35 = uVar47 + iVar34;
    uVar36 = (uVar36 << 0x13 | uVar36 >> 0xd) ^ iVar3 - uVar36;
    uVar43 = (uVar43 << 0x13 | uVar43 >> 0xd) ^ iVar25 - uVar43;
    uVar45 = (uVar45 << 0x13 | uVar45 >> 0xd) ^ iVar26 - uVar45;
    uVar47 = (uVar47 << 0x13 | uVar47 >> 0xd) ^ iVar27 - uVar47;
    auVar42._0_4_ = uVar36 >> 0x1c;
    auVar42._4_4_ = uVar43 >> 0x1c;
    auVar42._8_4_ = uVar45 >> 0x1c;
    auVar42._12_4_ = uVar47 >> 0x1c;
    auVar17._0_4_ = iVar28 - uVar36;
    auVar17._4_4_ = iVar30 - uVar43;
    auVar17._8_4_ = iVar32 - uVar45;
    auVar17._12_4_ = iVar34 - uVar47;
    auVar9._0_4_ = uVar36 << 4;
    auVar9._4_4_ = uVar43 << 4;
    auVar9._8_4_ = uVar45 << 4;
    auVar9._12_4_ = uVar47 << 4;
    auVar29._0_4_ = uVar36 + uVar2;
    auVar29._4_4_ = uVar43 + uVar31;
    auVar29._8_4_ = uVar45 + uVar33;
    auVar29._12_4_ = uVar47 + uVar35;
    auVar39 = (auVar42 | auVar9) ^ auVar17;
  }
  uVar2 = (uVar33 << 4 | uVar33 >> 0x1c) ^ uVar2 - uVar33;
  iVar26 = uVar2 + uVar33 + uVar31;
  uVar2 = (uVar2 << 6 | uVar2 >> 0x1a) ^ uVar31 - uVar2;
  iVar25 = uVar2 + iVar26;
  uVar31 = (uVar2 << 8 | uVar2 >> 0x18) ^ (uVar33 + uVar31) - uVar2;
  iVar3 = uVar31 + iVar25;
  uVar31 = (uVar31 << 0x10 | uVar31 >> 0x10) ^ iVar26 - uVar31;
  iVar26 = uVar31 + iVar3;
  uVar31 = (uVar31 << 0x13 | uVar31 >> 0xd) ^ iVar25 - uVar31;
  iVar25 = uVar31 + auVar29._0_4_ + iVar26;
  uVar31 = ((uVar31 << 4 | uVar31 >> 0x1c) ^ iVar3 - uVar31) + auVar29._4_4_;
  iVar27 = uVar31 + iVar25;
  uVar31 = (uVar31 * 0x10 | uVar31 >> 0x1c) ^ (iVar26 - uVar31) + uVar35;
  iVar26 = uVar31 + iVar27;
  uVar31 = (uVar31 << 6 | uVar31 >> 0x1a) ^ iVar25 - uVar31;
  iVar3 = uVar31 + iVar26;
  uVar31 = (uVar31 << 8 | uVar31 >> 0x18) ^ iVar27 - uVar31;
  iVar25 = uVar31 + iVar3;
  uVar31 = (uVar31 << 0x10 | uVar31 >> 0x10) ^ iVar26 - uVar31;
  iVar26 = uVar31 + iVar25;
  uVar31 = (uVar31 << 0x13 | uVar31 >> 0xd) ^ iVar3 - uVar31;
  iVar3 = uVar31 + auVar29._12_4_ + iVar26;
  uVar31 = ((uVar31 << 4 | uVar31 >> 0x1c) ^ iVar25 - uVar31) + auVar39._0_4_;
  iVar25 = uVar31 + iVar3;
  uVar31 = (uVar31 * 0x10 | uVar31 >> 0x1c) ^ (iVar26 - uVar31) + auVar29._8_4_;
  iVar26 = uVar31 + iVar25;
  uVar31 = (uVar31 << 6 | uVar31 >> 0x1a) ^ iVar3 - uVar31;
  iVar3 = uVar31 + iVar26;
  uVar31 = (uVar31 << 8 | uVar31 >> 0x18) ^ iVar25 - uVar31;
  iVar25 = uVar31 + iVar3;
  uVar31 = (uVar31 << 0x10 | uVar31 >> 0x10) ^ iVar26 - uVar31;
  iVar26 = uVar31 + iVar25;
  uVar31 = (uVar31 << 0x13 | uVar31 >> 0xd) ^ iVar3 - uVar31;
  uVar35 = uVar31 + auVar39._8_4_ + iVar26;
  uVar33 = (((uVar31 << 4 | uVar31 >> 0x1c) ^ iVar25 - uVar31) + auVar39._12_4_ ^ uVar35) -
           (uVar35 * 0x4000 | uVar35 >> 0x12);
  uVar31 = (auVar39._4_4_ + iVar26 ^ uVar33) - (uVar33 * 0x800 | uVar33 >> 0x15);
  uVar35 = (uVar35 ^ uVar31) - (uVar31 * 0x2000000 | uVar31 >> 7);
  uVar33 = (uVar33 ^ uVar35) - (uVar35 * 0x10000 | uVar35 >> 0x10);
  uVar31 = (uVar33 ^ uVar31) - (uVar33 * 0x10 | uVar33 >> 0x1c);
  uVar31 = (uVar35 ^ uVar31) - (uVar31 * 0x4000 | uVar31 >> 0x12);
  return (uVar33 ^ uVar31) - (uVar31 * 0x1000000 | uVar31 >> 8);
}

// rrLZH_ComputeHuffmanTransmissionCost @ 14f331320

double __cdecl
oo2::rrLZH_ComputeHuffmanTransmissionCost
          (uint *param_1,int param_2,rrArenaAllocator *param_3,OodleLZ_CompressOptions *param_4)

{
  uint uVar1;
  
  uVar1 = rrHuffman_ComputeTransmissionCost(param_1,param_2,param_3);
  return (double)param_4->spaceSpeedTradeoffBytes + (double)uVar1;
}

// rrPtrDiff32 @ 14f331360

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPutBytes_U16 @ 14f331370

uchar * __cdecl oo2::rrPutBytes_U16(uchar *param_1,ushort param_2)

{
  *param_1 = (uchar)(param_2 >> 8);
  param_1[1] = (uchar)param_2;
  return param_1 + 2;
}

// rrPutBytes_U24 @ 14f331390

uchar * __cdecl oo2::rrPutBytes_U24(uchar *param_1,uint param_2)

{
  *param_1 = (uchar)(param_2 >> 0x10);
  param_1[1] = (uchar)(param_2 >> 8);
  param_1[2] = (uchar)param_2;
  return param_1 + 3;
}

// rrPutBytes_U8 @ 14f3313b0

uchar * __cdecl oo2::rrPutBytes_U8(uchar *param_1,uchar param_2)

{
  *param_1 = param_2;
  return param_1 + 1;
}

// dtor$0 @ 150284240

void `oo2::rrHuffman_ComputeTransmissionCost'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x58));
  return;
}

