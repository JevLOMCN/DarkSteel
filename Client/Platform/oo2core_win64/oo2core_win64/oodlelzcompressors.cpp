// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 89

// check_value_cast<unsigned_int,__int64> @ 14f327570

uint __cdecl oo2::check_value_cast<unsigned_int,__int64>(long64 *param_1)

{
  return (uint)*param_1;
}

// rrAlignUpPointer<void> @ 14f327580

void * __cdecl oo2::rrAlignUpPointer<void>(void *param_1,long64 param_2)

{
  return (void *)((longlong)param_1 + param_2 + -1 & ~(param_2 - 1U));
}

// ThreadProfileScope @ 14f3275a0

ThreadProfileScope * __thiscall
oo2::ThreadProfileScope::ThreadProfileScope
          (ThreadProfileScope *this,char *param_1,ulong64 param_2,bool param_3)

{
  ulong64 uVar1;
  
  if ((param_3) && (fp_ThreadProfiler_Push != (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0)) {
    uVar1 = (*fp_ThreadProfiler_Push)(param_1,param_2);
    this->m_handle = uVar1;
    return this;
  }
  this->m_handle = 0xffffffffffffffff;
  return this;
}

// rrArenaAllocator @ 14f327600

rrArenaAllocator * __thiscall
oo2::rrArenaAllocator::rrArenaAllocator
          (rrArenaAllocator *this,void *param_1,long64 param_2,int param_3)

{
  ulonglong uVar1;
  
  this->m_allowFallback = param_3;
  this->m_unorderedStart = 0;
  if ((param_1 != (void *)0x0) && (0 < param_2)) {
    uVar1 = (longlong)param_1 + 0xfU & 0xfffffffffffffff0;
    this->m_base = uVar1;
    if (uVar1 < (ulonglong)((longlong)param_1 + param_2)) {
      this->m_cur_max = uVar1;
      this->m_cur = uVar1;
      this->m_size = ((longlong)param_1 + param_2) - uVar1;
      return this;
    }
  }
  this->m_base = 0;
  this->m_cur_max = 0;
  this->m_cur = 0;
  this->m_size = 0;
  return this;
}

// ~ThreadProfileScope @ 14f327660

void __thiscall oo2::ThreadProfileScope::~ThreadProfileScope(ThreadProfileScope *this)

{
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(this->m_handle);
  }
  return;
}

// ~rrArenaAllocator @ 14f327690

void __thiscall oo2::rrArenaAllocator::~rrArenaAllocator(rrArenaAllocator *this)

{
  return;
}

// GetLZMatchTableBits @ 14f3276a0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

int __cdecl
oo2::GetLZMatchTableBits
          (long64 param_1,OodleLZ_CompressionLevel param_2,OodleLZ_CompressOptions *param_3,
          int param_4,int param_5,int param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = 0x7fffffff;
  if (param_1 < 0x7fffffff) {
    lVar4 = param_1;
  }
  if (lVar4 < -0x7fffffff) {
    uVar1 = 0x80000000;
  }
  else {
    uVar1 = 0x7fffffff;
    if (param_1 < 0x7fffffff) {
      uVar1 = (uint)param_1;
    }
  }
  if ((param_3->seekChunkReset != 0) && (param_3->seekChunkLen < (int)uVar1)) {
    uVar1 = param_3->seekChunkLen;
  }
  uVar1 = rrIlog2roundf((float)uVar1);
  if ((int)param_2 < 3) {
    uVar1 = uVar1 - 1;
    uVar2 = param_5;
    if ((int)uVar1 < param_5) {
      uVar2 = uVar1;
    }
    param_6 = param_4;
    if ((param_4 < (int)uVar2) && (param_6 = param_5, (int)uVar1 < param_5)) {
      param_6 = uVar1;
    }
  }
  else {
    if ((int)uVar1 < param_7) {
      param_7 = uVar1;
    }
    if (param_6 < param_7) {
      param_6 = param_7;
    }
  }
  uVar1 = param_3->matchTableSizeLog2;
  if ((int)uVar1 < 1) {
    return param_6;
  }
  if ((int)uVar1 < 0x65) {
    if ((int)uVar1 <= param_6) {
      param_6 = uVar1;
    }
    uVar1 = 0x1a;
    if (param_6 < 0x1a) {
      uVar1 = param_6;
    }
    uVar2 = 0xc;
    if (0xc < (int)uVar1) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  iVar5 = 0x1c;
  if ((int)(uVar1 - 100) < 0x1c) {
    iVar5 = uVar1 - 100;
  }
  iVar3 = 8;
  if (8 < iVar5) {
    iVar3 = iVar5;
  }
  return iVar3;
}

// LZBlockHeader_IsReset @ 14f3277c0

int __cdecl oo2::LZBlockHeader_IsReset(long64 param_1,OodleLZ_CompressOptions *param_2)

{
  if (param_1 == 0) {
    return 1;
  }
  if (((param_1 & 0x3ffffU) == 0) && (param_2->seekChunkReset != 0)) {
    return (int)((param_1 & (longlong)param_2->seekChunkLen - 1U) == 0);
  }
  return 0;
}

// LZ_DecodeType_IsLargeQuantum @ 14f327800

int __cdecl oo2::LZ_DecodeType_IsLargeQuantum(int param_1)

{
  if (((param_1 - 6U & 0xfffffff9) == 0) && (param_1 != 8)) {
    return 1;
  }
  return 0;
}

// LogLegacyFormatError @ 14f327820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl oo2::LogLegacyFormatError(uchar *param_1,long64 param_2)

{
  uchar *puVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_48 [32];
  LZBlockHeader local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((param_2 < 1) || (*param_1 != '\0')) {
    if (1 < param_2) {
      puVar1 = LZBlockHeader_Get(&local_28,param_1);
      if ((puVar1 != (uchar *)0x0) && (local_28.version < 4)) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3278cb;
        pcVar3 = 
        "OODLE ERROR : OodleLZ_Decompress: data is either corrupted, not a valid Oodle stream, or was compressed with an unsupported legacy compressor!\n"
        ;
        iVar2 = 0x275;
        goto LAB_14f3278c0;
      }
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3278cb;
    pcVar3 = "OODLE ERROR : OodleLZ_Decompress: asked to decode legacy compressor; not supported!\n"
    ;
    iVar2 = 0x27b;
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3278cb;
    pcVar3 = 
    "OODLE ERROR : OodleLZ_Decompress: first byte is zero; this is likely not valid compressed data!\n"
    ;
    iVar2 = 0x265;
  }
LAB_14f3278c0:
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",iVar2,pcVar3);
LAB_14f3278cb:
  ooLogErrorPost();
  return;
}

// OodleFree @ 14f3278f0

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3278f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleLZDecoder_Check @ 14f327900

void __cdecl oo2::OodleLZDecoder_Check(_OodleLZDecoder *param_1)

{
  return;
}

// OodleLZDecoder_Create_Sub @ 14f327920

_OodleLZDecoder * __cdecl
oo2::OodleLZDecoder_Create_Sub
          (OodleLZ_Compressor param_1,long64 param_2,void *param_3,long64 param_4,int param_5,
          int param_6)

{
  long64 lVar1;
  _OodleLZDecoder *p_Var2;
  longlong lVar3;
  
  OodleCore_Enter();
  lVar3 = (longlong)param_5;
  if (param_3 == (void *)0x0) {
    p_Var2 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar3,0x10);
    if (p_Var2 == (_OodleLZDecoder *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(lVar3);
    }
    rrMemSetZero(p_Var2,0xa0);
    p_Var2->ownsmem = 1;
  }
  else {
    if (param_4 + -0x10 < lVar3) {
      return (_OodleLZDecoder *)0x0;
    }
    p_Var2 = (_OodleLZDecoder *)((longlong)param_3 + 0xfU & 0xfffffffffffffff0);
    rrMemSetZero(p_Var2,0xa0);
    lVar3 = param_4 + -0x10;
  }
  lVar1 = 0x3fffffffffffffff;
  if (-1 < param_2) {
    lVar1 = param_2;
  }
  p_Var2->decLen = lVar1;
  p_Var2->decPos = 0;
  p_Var2->resetPos = 0;
  p_Var2->callsWithoutProgress = 0;
  p_Var2->memorySize = (int)lVar3;
  p_Var2->check = 0xabadf00dc0cac01a;
  p_Var2->gotHeaderPos = -1;
  p_Var2->decoderSize = param_6;
  p_Var2->scratch = p_Var2 + 1;
  p_Var2->scratch_size = lVar3 - param_6;
  return p_Var2;
}

// OodleLZDecoder_MemorySizeNeeded_NoPad @ 14f327a20

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

int __cdecl
oo2::OodleLZDecoder_MemorySizeNeeded_NoPad(OodleLZ_Compressor param_1,long64 param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long64 lVar4;
  int iVar5;
  
  iVar3 = 0xa8;
  if ((param_1 == OodleLZ_Compressor_Invalid) || (0xd < (int)param_1)) {
    bVar1 = true;
    if (g_OodleLZLegacyVTable.fp_legacy_OodleLZ_Compress_Sub ==
        (_func___cdecl_long64_OodleLZ_Compressor_uchar_ptr_long64_uchar_ptr_OodleLZ_CompressionLevel_OodleLZ_CompressOptions_ptr_uchar_ptr_LRMCascade_ptr_rrArenaAllocator_ptr
         *)0x0) {
      param_1 = OodleLZ_Compressor_Hydra;
      goto LAB_14f327ac7;
    }
    param_1 = OodleLZ_Compressor_LZA;
    bVar2 = true;
  }
  else {
    bVar1 = false;
    bVar2 = false;
    if ((0x4e7U >> ((byte)param_1 & 0x1f) & 1) == 0) goto LAB_14f327ac7;
  }
  bVar1 = bVar2;
  if (g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_MemorySizeNeeded_NoPad_Compute ==
      (_func___cdecl_int_OodleLZ_Compressor *)0x0) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x126,
                 "OODLE ERROR : Legacy LZ VTable not installed");
    }
    ooLogErrorPost();
    iVar3 = -1;
  }
  else {
    iVar3 = (*g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_MemorySizeNeeded_NoPad_Compute)
                      (param_1);
    iVar3 = iVar3 + 0xa8;
  }
LAB_14f327ac7:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar3;
  }
  if ((bVar1) || ((0x3b00U >> ((byte)param_1 & 0x1f) & 1) != 0)) {
    lVar4 = 0x20000;
    if ((0 < param_2) && (param_2 < 0x20000)) {
      lVar4 = param_2;
    }
    iVar5 = (int)lVar4 * 2 + 0x20;
    if ((param_1 - OodleLZ_Compressor_Mermaid & 0xfffffffd) != 0) {
      iVar5 = iVar5 + (int)lVar4;
    }
    iVar3 = iVar5 + 0xd000 + iVar3;
  }
  return iVar3;
}

// OodleLZDecoder_MemorySizeNeeded_NoPad_Compute @ 14f327b40

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

int __cdecl oo2::OodleLZDecoder_MemorySizeNeeded_NoPad_Compute(OodleLZ_Compressor param_1)

{
  int iVar1;
  
  iVar1 = 0xa8;
  if ((0x4e7U >> ((byte)param_1 & 0x1f) & 1) != 0) {
    if (g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_MemorySizeNeeded_NoPad_Compute ==
        (_func___cdecl_int_OodleLZ_Compressor *)0x0) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x126,
                   "OODLE ERROR : Legacy LZ VTable not installed");
      }
      ooLogErrorPost();
      return -1;
    }
    iVar1 = (*g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_MemorySizeNeeded_NoPad_Compute)
                      (param_1);
    iVar1 = iVar1 + 0xa8;
  }
  return iVar1;
}

// OodleLZLegacyVTable_IsInstalled @ 14f327bb0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

bool __cdecl oo2::OodleLZLegacyVTable_IsInstalled(void)

{
  return g_OodleLZLegacyVTable.fp_legacy_OodleLZ_Compress_Sub !=
         (_func___cdecl_long64_OodleLZ_Compressor_uchar_ptr_long64_uchar_ptr_OodleLZ_CompressionLevel_OodleLZ_CompressOptions_ptr_uchar_ptr_LRMCascade_ptr_rrArenaAllocator_ptr
          *)0x0;
}

// OodleLZ_CompressMemcpy_Compressor @ 14f327be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::OodleLZ_CompressMemcpy_Compressor
          (OodleLZ_Compressor param_1,uchar *param_2,long64 param_3,uchar *param_4,uchar *param_5,
          OodleLZ_CompressOptions *param_6)

{
  code *pcVar1;
  int iVar2;
  long64 lVar3;
  uchar *_Dst;
  ulonglong uVar4;
  uchar *_Size;
  uchar *_Src;
  uchar *puVar5;
  undefined1 auStack_98 [32];
  uchar *local_78;
  LZBlockHeader local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = param_4;
  if ((ulonglong)(longlong)(int)param_1 < 0xe) {
    local_70.decodeType = s_OodleLZ_Compressor_to_DecodeType_table[(int)param_1];
  }
  else {
    iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x6bd,
                               "oo2::OodleLZ_Compressor_to_DecodeType","Invalid compressor\n");
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      lVar3 = (*pcVar1)();
      return lVar3;
    }
    local_70.decodeType = -1;
  }
  local_70.version = 4;
  local_70.offsetShift = 0;
  puVar5 = param_2;
  if (param_5 != (uchar *)0x0) {
    puVar5 = param_5;
  }
  local_70.chunkIsMemcpy = 1;
  local_70.chunkHasQuantumCRCs = 0;
  for (_Src = param_2; _Src < param_2 + param_3; _Src = _Src + (longlong)_Size) {
    _Size = &DAT_00040000;
    if ((longlong)(param_2 + (param_3 - (longlong)_Src)) < 0x40000) {
      _Size = param_2 + (param_3 - (longlong)_Src);
    }
    uVar4 = (longlong)_Src - (longlong)puVar5;
    if (uVar4 == 0) {
      local_70.chunkIsReset = 1;
    }
    else if (((uVar4 & 0x3ffff) == 0) && (param_6->seekChunkReset != 0)) {
      local_70.chunkIsReset = (int)((uVar4 & (longlong)param_6->seekChunkLen - 1U) == 0);
    }
    else {
      local_70.chunkIsReset = 0;
    }
    _Dst = LZBlockHeader_Put(&local_70,param_4);
    param_4 = _Size + (longlong)_Dst;
    memcpy(_Dst,_Src,(size_t)_Size);
  }
  return (longlong)param_4 - (longlong)local_78;
}

// OodleLZ_CompressMemcpy_DecodeType @ 14f327d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::OodleLZ_CompressMemcpy_DecodeType
          (int param_1,uchar *param_2,long64 param_3,uchar *param_4,uchar *param_5,
          OodleLZ_CompressOptions *param_6)

{
  uchar *_Dst;
  ulonglong uVar1;
  uchar *_Src;
  uchar *_Size;
  uchar *puVar2;
  undefined1 auStack_98 [32];
  uchar *local_78;
  LZBlockHeader local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar2 = param_2;
  if (param_5 != (uchar *)0x0) {
    puVar2 = param_5;
  }
  local_70.version = 4;
  local_70.offsetShift = 0;
  local_70.chunkIsMemcpy = 1;
  local_70.chunkHasQuantumCRCs = 0;
  local_70.decodeType = param_1;
  local_78 = param_4;
  for (_Src = param_2; _Src < param_2 + param_3; _Src = _Src + (longlong)_Size) {
    _Size = &DAT_00040000;
    if ((longlong)(param_2 + (param_3 - (longlong)_Src)) < 0x40000) {
      _Size = param_2 + (param_3 - (longlong)_Src);
    }
    uVar1 = (longlong)_Src - (longlong)puVar2;
    if (uVar1 == 0) {
      local_70.chunkIsReset = 1;
    }
    else if (((uVar1 & 0x3ffff) == 0) && (param_6->seekChunkReset != 0)) {
      local_70.chunkIsReset = (int)((uVar1 & (longlong)param_6->seekChunkLen - 1U) == 0);
    }
    else {
      local_70.chunkIsReset = 0;
    }
    _Dst = LZBlockHeader_Put(&local_70,param_4);
    param_4 = _Size + (longlong)_Dst;
    memcpy(_Dst,_Src,(size_t)_Size);
  }
  return (longlong)param_4 - (longlong)local_78;
}

// OodleLZ_CompressOptions_GetDefault_Or_Copy_And_Validate @ 14f327e80

OodleLZ_CompressOptions * __cdecl
oo2::OodleLZ_CompressOptions_GetDefault_Or_Copy_And_Validate
          (OodleLZ_CompressOptions *param_1,OodleLZ_CompressOptions *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_1 == (OodleLZ_CompressOptions *)0x0) {
    return &s_defaultOptions;
  }
  iVar3 = param_1->minMatchLen;
  iVar4 = param_1->seekChunkReset;
  iVar5 = param_1->seekChunkLen;
  param_2->unused_was_verbosity = param_1->unused_was_verbosity;
  param_2->minMatchLen = iVar3;
  param_2->seekChunkReset = iVar4;
  param_2->seekChunkLen = iVar5;
  iVar3 = param_1->dictionarySize;
  iVar4 = param_1->spaceSpeedTradeoffBytes;
  iVar5 = param_1->unused_was_maxHuffmansPerChunk;
  param_2->profile = param_1->profile;
  param_2->dictionarySize = iVar3;
  param_2->spaceSpeedTradeoffBytes = iVar4;
  param_2->unused_was_maxHuffmansPerChunk = iVar5;
  iVar3 = param_1->maxLocalDictionarySize;
  iVar4 = param_1->makeLongRangeMatcher;
  iVar5 = param_1->matchTableSizeLog2;
  param_2->sendQuantumCRCs = param_1->sendQuantumCRCs;
  param_2->maxLocalDictionarySize = iVar3;
  param_2->makeLongRangeMatcher = iVar4;
  param_2->matchTableSizeLog2 = iVar5;
  uVar6 = *(undefined4 *)&param_1->field_0x34;
  pvVar1 = param_1->jobifyUserPtr;
  param_2->jobify = param_1->jobify;
  *(undefined4 *)&param_2->field_0x34 = uVar6;
  param_2->jobifyUserPtr = pvVar1;
  iVar3 = param_1->farMatchOffsetLog2;
  uVar2 = *(undefined8 *)param_1->reserved;
  param_2->farMatchMinLen = param_1->farMatchMinLen;
  param_2->farMatchOffsetLog2 = iVar3;
  *(undefined8 *)param_2->reserved = uVar2;
  *(undefined8 *)(param_2->reserved + 2) = *(undefined8 *)(param_1->reserved + 2);
  OodleLZ_CompressOptions_Validate(param_2);
  return param_2;
}

// OodleLZ_Compress_Sub @ 14f327f00

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::OodleLZ_Compress_Sub
          (OodleLZ_Compressor param_1,uchar *param_2,long64 param_3,uchar *param_4,
          OodleLZ_CompressionLevel param_5,OodleLZ_CompressOptions *param_6,uchar *param_7,
          LRMCascade *param_8,rrArenaAllocator *param_9)

{
  OodleLZ_CompressionLevel OVar1;
  long64 lVar2;
  
  OVar1 = param_5;
  if ((int)param_5 < 0) {
    OVar1 = OodleLZ_CompressionLevel_SuperFast;
  }
  switch(param_1) {
  case OodleLZ_Compressor_LZH:
  case OodleLZ_Compressor_LZHLW:
  case OodleLZ_Compressor_LZNIB:
  case OodleLZ_Compressor_LZBLW:
  case OodleLZ_Compressor_LZA:
  case OodleLZ_Compressor_LZNA:
  case OodleLZ_Compressor_BitKnit:
    if (g_OodleLZLegacyVTable.fp_legacy_OodleLZ_Compress_Sub !=
        (_func___cdecl_long64_OodleLZ_Compressor_uchar_ptr_long64_uchar_ptr_OodleLZ_CompressionLevel_OodleLZ_CompressOptions_ptr_uchar_ptr_LRMCascade_ptr_rrArenaAllocator_ptr
         *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3280f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*g_OodleLZLegacyVTable.fp_legacy_OodleLZ_Compress_Sub)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      return lVar2;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb25,
                 "OODLE ERROR : Legacy LZ Vtable not installed");
    }
    break;
  case OodleLZ_Compressor_None:
    lVar2 = OodleLZ_CompressMemcpy_Compressor
                      (OodleLZ_Compressor_None,param_2,param_3,param_4,param_7,param_6);
    return lVar2;
  case OodleLZ_Compressor_LZB16:
    lVar2 = LZB_Compress(param_2,param_4,param_3,OVar1,param_6,param_7,param_8);
    return lVar2;
  case OodleLZ_Compressor_Kraken:
    lVar2 = Kraken_Compress(OodleLZ_Compressor_Kraken,param_2,param_4,param_3,param_5,param_6,
                            param_7,param_8,param_9);
    return lVar2;
  case OodleLZ_Compressor_Mermaid:
    lVar2 = Mermaid_Compress(OodleLZ_Compressor_Mermaid,param_2,param_4,param_3,param_5,param_6,
                             param_7,param_8,param_9);
    return lVar2;
  case OodleLZ_Compressor_Selkie:
    lVar2 = Mermaid_Compress(OodleLZ_Compressor_Selkie,param_2,param_4,param_3,param_5,param_6,
                             param_7,param_8,param_9);
    return lVar2;
  case OodleLZ_Compressor_Hydra:
    lVar2 = Hydra_Compress(OodleLZ_Compressor_Hydra,param_2,param_4,param_3,OVar1,param_6,param_7,
                           param_8,param_9);
    return lVar2;
  case OodleLZ_Compressor_Leviathan:
    lVar2 = Leviathan_Compress(OodleLZ_Compressor_Leviathan,param_2,param_4,param_3,OVar1,param_6,
                               param_7,param_8,param_9);
    return lVar2;
  default:
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb2b,
                 "OODLE ERROR : invalid compressor : %d\n");
    }
  }
  ooLogErrorPost();
  return -1;
}

// OodleLZ_Compressor_IsLegacy @ 14f328190

int __cdecl oo2::OodleLZ_Compressor_IsLegacy(OodleLZ_Compressor param_1)

{
  return 0x4e7U >> ((byte)param_1 & 0x1f) & 1;
}

// OodleLZ_Compressor_NeedsScratchMem @ 14f3281b0

int __cdecl oo2::OodleLZ_Compressor_NeedsScratchMem(OodleLZ_Compressor param_1)

{
  return 0x3b00U >> ((byte)param_1 & 0x1f) & 1;
}

// OodleLZ_Compressor_ScratchMemSize @ 14f3281e0

long64 __cdecl oo2::OodleLZ_Compressor_ScratchMemSize(OodleLZ_Compressor param_1,long64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x20000;
  if ((0 < param_2) && (param_2 < 0x20000)) {
    lVar2 = param_2;
  }
  lVar1 = lVar2 * 2 + 0xd020;
  if ((param_1 - OodleLZ_Compressor_Mermaid & 0xfffffffd) != 0) {
    lVar1 = lVar1 + lVar2;
  }
  return lVar1;
}

// OodleLZ_Compressor_to_DecodeType @ 14f328220

int __cdecl oo2::OodleLZ_Compressor_to_DecodeType(OodleLZ_Compressor param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((ulonglong)(longlong)(int)param_1 < 0xe) {
    return s_OodleLZ_Compressor_to_DecodeType_table[(int)param_1];
  }
  iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x6bd,
                             "oo2::OodleLZ_Compressor_to_DecodeType","Invalid compressor\n");
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  return -1;
}

// OodleLZ_DecodeType_to_Compressor @ 14f328270

OodleLZ_Compressor __cdecl oo2::OodleLZ_DecodeType_to_Compressor(int param_1)

{
  return s_OodleLZ_DecodeType_to_Compressor_table[param_1];
}

// OodleLZ_InitSeekTable @ 14f3282a0

void __cdecl
oo2::OodleLZ_InitSeekTable(OodleLZ_SeekTable *param_1,OodleLZSeekTable_Flags param_2,int param_3)

{
  rrMemSetZero(param_1,0x30);
  param_1->seekChunkCompLens = &param_1[1].compressor;
  if ((param_2 & OodleLZSeekTable_Flags_MakeRawCRCs) != OodleLZSeekTable_Flags_None) {
    param_1->rawCRCs = &param_1[1].compressor + param_3;
    return;
  }
  param_1->rawCRCs = (uint *)0x0;
  return;
}

// OodleLZ_LogBlocks @ 14f328320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl oo2::OodleLZ_LogBlocks(void *param_1,long64 param_2,long64 param_3)

{
  int iVar1;
  _func___cdecl_void_int_char_ptr_int_char_ptr *p_Var2;
  uchar *puVar3;
  long64 lVar4;
  uchar *puVar5;
  longlong lVar6;
  OodleLZ_Compressor OVar7;
  longlong lVar8;
  undefined1 auStackY_c8 [32];
  LZBlockHeader local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  lVar6 = 0;
  puVar5 = (uchar *)((longlong)param_1 + param_2);
  for (; param_1 < puVar5; param_1 = (void *)((longlong)param_1 + lVar4)) {
    iVar1 = (int)param_3 - (int)lVar6;
    if (0x40000 < param_3 - lVar6) {
      iVar1 = 0x40000;
    }
    lVar8 = (longlong)puVar5 - (longlong)param_1;
    if (lVar8 < 2) {
      OVar7 = OodleLZ_Compressor_Invalid;
    }
    else {
      puVar3 = LZBlockHeader_Get(&local_60,param_1);
      if (puVar3 == (uchar *)0x0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x6f8,
                     "OODLE ERROR : LZ corruption : invalid header..\n");
        }
        ooLogErrorPost();
        OVar7 = OodleLZ_Compressor_Invalid;
      }
      else {
        OVar7 = s_OodleLZ_DecodeType_to_Compressor_table[local_60.decodeType];
      }
    }
    lVar4 = OodleLZ_GetCompressedStepForRawStep
                      (param_1,lVar8,lVar6,(longlong)iVar1,(long64 *)0x0,(int *)0x0);
    p_Var2 = g_fp_OodleCore_Plugin_Printf;
    if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      OodleLZ_Compressor_GetName(OVar7);
      (*p_Var2)(1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xa59,
                "%3d : %7d -> %7d : %s %s\n");
    }
    lVar6 = lVar6 + iVar1;
  }
  return;
}

// OodleMalloc @ 14f328520

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

// OodleMallocAligned @ 14f328570

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

// Oodle_IsJobSystemSet @ 14f3285b0

bool __cdecl oo2::Oodle_IsJobSystemSet(void)

{
  return g_fp_OodleCore_Plugin_RunJob != OodleCore_Plugin_RunJob_Default;
}

// S32_check @ 14f3285d0

int __cdecl oo2::S32_check(long64 param_1)

{
  return (int)param_1;
}

// S32_checkA @ 14f3285e0

int __cdecl oo2::S32_checkA(long64 param_1)

{
  return (int)param_1;
}

// S32_clampA @ 14f3285f0

int __cdecl oo2::S32_clampA(long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x7fffffff;
  if (param_1 < 0x7fffffff) {
    lVar2 = param_1;
  }
  lVar1 = -0x80000000;
  if (-0x80000000 < lVar2) {
    lVar1 = lVar2;
  }
  return (int)lVar1;
}

// ThreadProfiler_Pop @ 14f328620

void __cdecl oo2::ThreadProfiler_Pop(ulong64 param_1)

{
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f32862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ThreadProfiler_Pop)(param_1);
    return;
  }
  return;
}

// ThreadProfiler_Push @ 14f328640

ulong64 __cdecl oo2::ThreadProfiler_Push(char *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  if (fp_ThreadProfiler_Push != (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f32864c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*fp_ThreadProfiler_Push)(param_1,param_2);
    return uVar1;
  }
  return 0xffffffffffffffff;
}

// U8_void @ 14f328660

uchar * __cdecl oo2::U8_void(void *param_1)

{
  return param_1;
}

// U8_void @ 14f328670

uchar * __cdecl oo2::U8_void(void *param_1)

{
  return param_1;
}

// UsageWarning_WriteCombiningCheck @ 14f328680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl oo2::UsageWarning_WriteCombiningCheck(void *param_1,long64 param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38 [4];
  undefined8 local_18;
  ulonglong local_10;
  
  if (0x3ff < param_2) {
    local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
    iVar2 = 0;
    puVar3 = local_38;
    do {
      uVar1 = oodle_x64_wc_probe(param_1);
      *puVar3 = uVar1;
      if (uVar1 < 0xc80) {
        return;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 5);
    if ((g_Oodle_UsageWarningsDisabled == false) &&
       (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
      local_48 = local_18;
      local_50 = local_38[3];
      local_58 = local_38[2];
      local_60 = local_38[1];
      local_68 = local_38[0];
      (*g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x250,
                 "OODLE USAGE WARNING : Destination buffer appears to be in uncached or write-combined memory! This is extremely slow. See \"How do I decompress to graphics memory quickly?\" in the Oodle FAQ. (Probe times %lld,%lld,%lld,%lld,%lld)\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
                );
    }
  }
  return;
}

// check_comp_buf_size @ 14f328770

bool __cdecl oo2::check_comp_buf_size(OodleLZ_Compressor param_1,void *param_2,long64 param_3)

{
  return true;
}

// check_raw_buf_size @ 14f3287d0

bool __cdecl oo2::check_raw_buf_size(void *param_1,long64 param_2)

{
  return true;
}

// legacy_OodleLZDecoder_Get @ 14f3287f0

legacy_OodleLZDecoder * __cdecl oo2::legacy_OodleLZDecoder_Get(_OodleLZDecoder *param_1)

{
  return (legacy_OodleLZDecoder *)param_1->legacy;
}

// oo64toA @ 14f328800

long64 __cdecl oo2::oo64toA(long64 param_1)

{
  return param_1;
}

// rrAlignUp32 @ 14f328810

uint __cdecl oo2::rrAlignUp32(uint param_1,long64 param_2)

{
  return (param_1 - 1) + (int)param_2 & -(int)param_2;
}

// rrAlignUp64 @ 14f328820

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUp @ 14f328840

int __cdecl oo2::rrAlignUp(int param_1,long64 param_2)

{
  return param_1 + -1 + (int)param_2 & -(int)param_2;
}

// rrAlignUpA @ 14f328850

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f328870

ulong64 __cdecl oo2::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrIlog2round @ 14f328890

uint __cdecl oo2::rrIlog2round(uint param_1)

{
  uint uVar1;
  
  uVar1 = rrIlog2roundf((float)param_1);
  return uVar1;
}

// rrIsPow2 @ 14f3288b0

int __cdecl oo2::rrIsPow2(uint param_1)

{
  return (int)((param_1 & param_1 - 1) == 0);
}

// rrPrintf_nop @ 14f3288d0

void __cdecl oo2::rrPrintf_nop(void)

{
  return;
}

// rrPtrDiff32 @ 14f3288e0

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14f3288f0

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// OodleKraken_Decode_Headerless @ 14f328900

long64 __cdecl
OodleKraken_Decode_Headerless
          (uchar *param_1,long64 param_2,uchar *param_3,long64 param_4,ulong64 param_5,int param_6,
          int param_7,int param_8,void *param_9,long64 param_10)

{
  longlong lVar1;
  void *pvVar2;
  long64 lVar3;
  
  oo2::OodleCore_Enter();
  lVar1 = 0x20000;
  if ((0 < param_2) && (param_2 < 0x20000)) {
    lVar1 = param_2;
  }
  lVar1 = (lVar1 + 0x4560) * 3;
  if (param_9 == (void *)0x0) {
    pvVar2 = (*oo2::g_fp_OodleCore_Plugin_MallocAligned)(lVar1,0x10);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      oo2::Oodle_Core_Malloc_Failed(lVar1);
    }
  }
  else {
    pvVar2 = param_9;
    if (param_10 < lVar1) {
      oo2::ooLogErrorPre();
      if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      {
        (*oo2::g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xec1,
                   "OODLE ERROR : OodleKraken_Decode_Headerless : decoder memory given, but too small!\n"
                  );
      }
      oo2::ooLogErrorPost();
      return 0;
    }
  }
  lVar3 = oo2::Kraken_Decode_Headerless
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar2,lVar1);
  if (param_9 == (void *)0x0) {
    (*oo2::g_fp_OodleCore_Plugin_Free)(pvVar2);
  }
  return lVar3;
}

// OodleLZDecoder_Create @ 14f328a80

_OodleLZDecoder * __cdecl
OodleLZDecoder_Create(OodleLZ_Compressor param_1,long64 param_2,void *param_3,long64 param_4)

{
  int iVar1;
  long64 lVar2;
  _OodleLZDecoder *p_Var3;
  longlong lVar4;
  int local_res18 [2];
  
  iVar1 = oo2::OodleLZDecoder_MemorySizeNeeded_NoPad(param_1,param_2,local_res18);
  lVar4 = (longlong)iVar1;
  oo2::OodleCore_Enter();
  if (param_3 == (void *)0x0) {
    p_Var3 = (*oo2::g_fp_OodleCore_Plugin_MallocAligned)(lVar4,0x10);
    if (p_Var3 == (_OodleLZDecoder *)0x0) {
                    /* WARNING: Subroutine does not return */
      oo2::Oodle_Core_Malloc_Failed(lVar4);
    }
    oo2::rrMemSetZero(p_Var3,0xa0);
    p_Var3->ownsmem = 1;
  }
  else {
    if (param_4 + -0x10 < lVar4) {
      return (_OodleLZDecoder *)0x0;
    }
    p_Var3 = (_OodleLZDecoder *)((longlong)param_3 + 0xfU & 0xfffffffffffffff0);
    oo2::rrMemSetZero(p_Var3,0xa0);
    lVar4 = param_4 + -0x10;
  }
  lVar2 = 0x3fffffffffffffff;
  if (-1 < param_2) {
    lVar2 = param_2;
  }
  p_Var3->decLen = lVar2;
  p_Var3->decPos = 0;
  p_Var3->resetPos = 0;
  p_Var3->callsWithoutProgress = 0;
  p_Var3->memorySize = (int)lVar4;
  p_Var3->check = 0xabadf00dc0cac01a;
  p_Var3->gotHeaderPos = -1;
  p_Var3->decoderSize = local_res18[0];
  p_Var3->scratch = p_Var3 + 1;
  p_Var3->scratch_size = lVar4 - local_res18[0];
  return p_Var3;
}

// OodleLZDecoder_DecodeSome @ 14f328ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_Decode_ThreadPhase": Some values do not have unique names */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

int __cdecl
OodleLZDecoder_DecodeSome
          (_OodleLZDecoder *param_1,OodleLZ_DecodeSome_Out *param_2,void *param_3,long64 param_4,
          long64 param_5,long64 param_6,void *param_7,long64 param_8,OodleLZ_FuzzSafe param_9,
          OodleLZ_CheckCRC param_10,OodleLZ_Verbosity param_11,OodleLZ_Decode_ThreadPhase param_12)

{
  uchar *puVar1;
  ulonglong uVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  OodleLZ_Compressor OVar10;
  uchar *_Src;
  OodleLZ_Compressor OVar11;
  size_t sVar12;
  uchar *puVar13;
  int iVar14;
  uint uVar15;
  char *pcVar17;
  int iVar18;
  uchar *_Dst;
  undefined1 auStackY_118 [32];
  uint local_a8;
  OodleLZ_Compressor local_a4;
  int local_a0;
  undefined8 local_98;
  void *local_90;
  uchar *local_88;
  uchar *local_80;
  LZQuantumHeader local_78;
  ulonglong local_58;
  ulonglong uVar16;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_90 = param_7;
  if (param_2 == (OodleLZ_DecodeSome_Out *)0x0) {
    return 0;
  }
  local_88 = param_3;
  local_80 = (uchar *)param_4;
  oo2::rrMemSetZero(param_2,0x10);
  param_1->callsWithoutProgress = param_1->callsWithoutProgress + 1;
  if (999 < param_1->callsWithoutProgress) {
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3290ee;
    pcVar17 = "OODLE ERROR : 1000 calls without progress!\n";
    iVar5 = 0x2a9;
    goto LAB_14f3290e3;
  }
  local_98 = param_1->decLen;
  uVar2 = param_1->decPos;
  lVar9 = param_5 - param_4;
  local_a8 = (uint)(param_5 < (longlong)local_98);
  lVar8 = lVar9;
  if (0x40000 < lVar9) {
    lVar8 = 0x40000;
  }
  uVar7 = (uint)param_5;
  if (lVar8 < param_6) {
    if (lVar9 < 0x40001) {
      param_6 = (long64)(uVar7 - (int)param_4);
    }
    else {
      param_6 = 0x40000;
    }
  }
  OVar10 = (OodleLZ_Compressor)param_6;
  uVar16 = uVar2;
  if (local_98 != 0x3fffffffffffffff) {
    uVar15 = (uint)uVar2 & 0x3ffff;
    uVar16 = (ulonglong)uVar15;
    if ((longlong)(0x40000 - uVar16) <= (longlong)(int)OVar10) {
      OVar10 = 0x40000 - uVar15;
    }
    if ((longlong)(local_98 - uVar2) <= (longlong)(int)OVar10) {
      OVar10 = (OodleLZ_Compressor)(local_98 - uVar2);
    }
  }
  if (OVar10 == OodleLZ_Compressor_LZH) {
    return 1;
  }
  if (param_8 == 0) {
    return 1;
  }
  puVar1 = (uchar *)(param_8 + (longlong)param_7);
  if ((uVar16 == 0) && (param_1->gotHeaderPos != uVar2)) {
    if (param_8 < 2) {
      return 1;
    }
    param_1->gotHeaderPos = uVar2;
    param_7 = oo2::LZBlockHeader_Get(&param_1->header,param_7);
    if (param_7 == (uchar *)0x0) {
      oo2::ooLogErrorPre();
      if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3290ee;
      pcVar17 = "OODLE ERROR : LZ corruption : invalid header..\n";
      iVar5 = 0x306;
    }
    else {
      local_a4 = oo2::s_OodleLZ_DecodeType_to_Compressor_table[(param_1->header).decodeType];
      uVar15 = 0x4e7 >> ((byte)local_a4 & 0x1f);
      if (((uVar15 & 1) != 0) &&
         (oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZ_Compress_Sub ==
          (_func___cdecl_long64_OodleLZ_Compressor_uchar_ptr_long64_uchar_ptr_OodleLZ_CompressionLevel_OodleLZ_CompressOptions_ptr_uchar_ptr_LRMCascade_ptr_rrArenaAllocator_ptr
           *)0x0)) {
        oo2::LogLegacyFormatError(param_7,(longlong)puVar1 - (longlong)param_7);
        return 0;
      }
      if ((param_9 == OodleLZ_FuzzSafe_Yes) && ((0x3f18U >> ((byte)local_a4 & 0x1f) & 1) == 0)) {
        oo2::ooLogErrorPre();
        if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0
           ) goto LAB_14f3290ee;
        pcVar17 = "OODLE ERROR : Requested Fuzz Safety, saw a compressor that can\'t decode Safe\n";
        iVar5 = 0x31b;
      }
      else {
        iVar5 = oo2::OodleLZDecoder_MemorySizeNeeded_NoPad
                          (local_a4,(longlong)(int)OVar10,(int *)0x0);
        if (param_1->memorySize < iVar5) {
          oo2::ooLogErrorPre();
          if (oo2::g_fp_OodleCore_Plugin_Printf ==
              (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
          pcVar17 = 
          "OODLE ERROR : Heterogenous compressor file with insufficient decoder memory size!\n";
          iVar5 = 0x324;
          goto LAB_14f3290e3;
        }
        if ((uVar15 & 1) == 0) {
LAB_14f328e83:
          if (((param_1->header).chunkIsReset != 0) &&
             (param_1->resetPos = param_1->decPos, (uVar15 & 1) != 0)) {
            if (oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_Block_Reset ==
                (_func___cdecl_void_legacy_OodleLZDecoder_ptr *)0x0) {
              oo2::ooLogErrorPre();
              if (oo2::g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
              iVar5 = 0x340;
              goto LAB_14f3290dc;
            }
            (*oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_Block_Reset)
                      ((legacy_OodleLZDecoder *)param_1->legacy);
          }
          if ((2 < (int)param_11) &&
             (oo2::g_fp_OodleCore_Plugin_Printf !=
              (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
            (*oo2::g_fp_OodleCore_Plugin_Printf)
                      (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x34e,
                       "CHUNK header @ %lld  , compressor %d=%s %s %s\n");
          }
          goto LAB_14f328f8b;
        }
        if (oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_Block_Start !=
            (_func___cdecl_void_legacy_OodleLZDecoder_ptr *)0x0) {
          (*oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_Block_Start)
                    ((legacy_OodleLZDecoder *)param_1->legacy);
          goto LAB_14f328e83;
        }
        oo2::ooLogErrorPre();
        if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0
           ) goto LAB_14f3290ee;
        iVar5 = 0x32c;
LAB_14f3290dc:
        pcVar17 = "OODLE ERROR : Legacy LZ VTable not installed";
      }
    }
    goto LAB_14f3290e3;
  }
LAB_14f328f8b:
  uVar2 = local_98;
  local_a0 = (param_1->header).decodeType;
  OVar11 = oo2::s_OodleLZ_DecodeType_to_Compressor_table[local_a0];
  local_98 = CONCAT44(local_98._4_4_,0x4e7 >> ((byte)OVar11 & 0x1f)) & 0xffffffffffffff01;
  if (((param_1->gotHeaderPos != 0) || ((param_1->header).chunkIsReset != 0)) ||
     ((uVar7 & uVar7 - 1) != 0)) {
    if (param_5 < (longlong)uVar2) {
      if ((uVar7 & uVar7 - 1) != 0) {
        oo2::ooLogErrorPre();
        if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0
           ) goto LAB_14f3290ee;
        pcVar17 = "OODLE ERROR : sliding window must be pow2!\n";
        iVar5 = 0x379;
        goto LAB_14f3290e3;
      }
      goto LAB_14f328fd0;
    }
    goto LAB_14f329110;
  }
  local_a8 = 1;
LAB_14f328fd0:
  if (OVar11 == OodleLZ_Compressor_Invalid) {
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3290ee;
    pcVar17 = "OODLE ERROR : invalid decodeType!\n";
    iVar5 = 0x37f;
  }
  else if ((0x3b00U >> ((byte)OVar11 & 0x1f) & 1) == 0) {
    if (OVar11 == OodleLZ_Compressor_LZB16) {
      if (param_5 < 0x10000) {
        oo2::ooLogErrorPre();
        if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0
           ) goto LAB_14f3290ee;
        pcVar17 = "OODLE ERROR : you didn\'t give me enough window!\n";
        iVar5 = 0x38c;
        goto LAB_14f3290e3;
      }
    }
    else {
      if (oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_CheckSlidingWindow ==
          (_func___cdecl_bool_OodleLZ_Compressor_long64 *)0x0) {
        oo2::ooLogErrorPre();
        if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0
           ) goto LAB_14f3290ee;
        iVar5 = 0x394;
        goto LAB_14f3290dc;
      }
      bVar4 = (*oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_CheckSlidingWindow)
                        (OVar11,param_5);
      if (!bVar4) {
        return 0;
      }
    }
LAB_14f329110:
    pvVar3 = local_90;
    _Dst = local_80 + (longlong)local_88;
    iVar5 = (int)param_7;
    if ((param_1->header).chunkIsMemcpy != 0) {
      sVar12 = (size_t)(int)OVar10;
      param_2->curQuantumRawLen = OVar10;
      param_2->curQuantumCompLen = OVar10;
      if ((longlong)sVar12 <= (param_8 - (longlong)param_7) + (longlong)local_90) {
        if ((2 < (int)param_11) &&
           (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0
           )) {
          (*oo2::g_fp_OodleCore_Plugin_Printf)
                    (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x3c2,
                     " decoder memcpy %d\n");
        }
        if ((param_12 & OodleLZ_Decode_ThreadPhase1) != 0) {
          memmove(_Dst,param_7,sVar12);
        }
        param_1->decPos = param_1->decPos + sVar12;
        param_1->callsWithoutProgress = 0;
        param_2->compBufUsed = (iVar5 - (int)pvVar3) + OVar10;
        param_2->decodedCount = OVar10;
        if (oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_Block_Reset ==
            (_func___cdecl_void_legacy_OodleLZDecoder_ptr *)0x0) {
          return 1;
        }
        (*oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_Block_Reset)
                  ((legacy_OodleLZDecoder *)param_1->legacy);
        return 1;
      }
      goto LAB_14f329272;
    }
    if (((local_a0 - 6U & 0xfffffff9) == 0) && (local_a0 != 8)) {
      puVar13 = _Dst + (int)OVar10;
      if (((local_a0 != 6) && (local_a0 != 0xc)) && (local_a0 != 10)) goto LAB_14f32923b;
      iVar6 = oo2::LZLargeQuantumHeader_Get
                        (param_7,puVar1,&local_78,(param_1->header).chunkHasQuantumCRCs,OVar10);
    }
    else {
      OVar11 = 0x4000;
      if ((int)OVar10 < 0x4000) {
        OVar11 = OVar10;
      }
      puVar13 = _Dst + (int)OVar11;
      OVar10 = OVar11;
LAB_14f32923b:
      iVar6 = oo2::LZQuantumHeader_Get
                        (param_7,puVar1,&local_78,(param_1->header).chunkHasQuantumCRCs,OVar10);
    }
    if (iVar6 < 1) {
      if (0xf < (longlong)puVar1 - (longlong)param_7) {
        return 0;
      }
LAB_14f329272:
      param_2->decodedCount = 0;
      param_2->compBufUsed = iVar5 - (int)local_90;
      return 1;
    }
    _Src = (uchar *)((longlong)param_7 + (longlong)iVar6);
    param_2->curQuantumRawLen = OVar10;
    param_2->curQuantumCompLen = ((int)_Src - iVar5) + local_78.compLen;
    if ((2 < (int)param_11) &&
       (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
      (*oo2::g_fp_OodleCore_Plugin_Printf)
                (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x438,
                 "QH : %d , %d , %08X\n");
    }
    if (OVar10 < (uint)local_78.compLen) {
      oo2::ooLogErrorPre();
      if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3290ee;
      pcVar17 = "OODLE ERROR : LZ corruption : qh.compLen > qh_rawLen!\n";
      iVar5 = 0x448;
    }
    else {
      lVar8 = (longlong)local_78.compLen;
      if ((longlong)puVar1 - (longlong)_Src < lVar8) {
        param_2->compBufUsed = iVar5 - (int)local_90;
        param_2->decodedCount = 0;
        return 1;
      }
      local_80 = _Src + lVar8;
      if (((param_10 == OodleLZ_CheckCRC_No) || (local_78.compLen < 1)) ||
         (((param_1->header).chunkHasQuantumCRCs == 0 ||
          (uVar7 = oo2::LZQuantumHeader_ComputeCRC(_Src,lVar8), uVar7 == local_78.crc)))) {
        iVar5 = local_a0;
        local_a4 = OodleLZ_Compressor_LZH;
        if ((local_78.huffFlag != 0) && ((char)local_98 != '\0')) {
          if (oo2::g_OodleLZLegacyVTable.fp_legacy_GotHuffFlag ==
              (_func___cdecl_bool_int_legacy_OodleLZDecoder_ptr_uchar_ptr_uchar_ptr_int_ptr *)0x0) {
            oo2::ooLogErrorPre();
            if (oo2::g_fp_OodleCore_Plugin_Printf ==
                (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
            pcVar17 = "OODLE ERROR : Legacy LZ Vtable not installed";
            iVar5 = 0x47e;
            goto LAB_14f3290e3;
          }
          bVar4 = (*oo2::g_OodleLZLegacyVTable.fp_legacy_GotHuffFlag)
                            (local_a0,(legacy_OodleLZDecoder *)param_1->legacy,_Src,puVar1,
                             (int *)&local_a4);
          if (!bVar4) {
            return 0;
          }
          _Src = _Src + (int)local_a4;
        }
        iVar6 = (int)puVar13;
        iVar18 = (int)_Dst;
        if (local_78.compLen == OVar10) {
          OVar11 = iVar6 - iVar18;
          if (OVar11 == OVar10) {
            if ((param_12 & OodleLZ_Decode_ThreadPhase1) != 0) {
              memmove(_Dst,_Src,(longlong)(int)OVar11);
            }
            param_1->decPos = param_1->decPos + (longlong)(int)OVar11;
            _Src = _Src + (int)OVar11;
            if (param_1->decPos <= param_1->decLen) goto LAB_14f329668;
            oo2::ooLogErrorPre();
            if (oo2::g_fp_OodleCore_Plugin_Printf ==
                (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
            pcVar17 = "OODLE ERROR : LZ corruption : overrun!\n";
            iVar5 = 0x4ae;
          }
          else {
            oo2::ooLogErrorPre();
            if (oo2::g_fp_OodleCore_Plugin_Printf ==
                (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
            pcVar17 = "OODLE ERROR : LZ corruption : memcpy invalid size!\n";
            iVar5 = 0x499;
          }
        }
        else {
          lVar8 = param_1->decPos;
          if (local_78.compLen == local_a4) {
            sVar12 = (size_t)(iVar6 - iVar18);
            if (param_1->decLen < (longlong)(sVar12 + lVar8)) {
              oo2::ooLogErrorPre();
              if (oo2::g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
              pcVar17 = "OODLE ERROR : LZ corruption : overrun!\n";
              iVar5 = 0x4c6;
            }
            else if (local_78.wholeMatchFlag == 0) {
              if (local_78.compLen == OodleLZ_Compressor_LZH) {
LAB_14f32964a:
                if ((param_12 & OodleLZ_Decode_ThreadPhase1) != 0) {
                  oo2::rrMemSetLarge(_Dst,local_78.crc,sVar12);
                }
                goto LAB_14f329665;
              }
              if ((char)local_98 == '\0') {
                oo2::ooLogErrorPre();
                if (oo2::g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
                pcVar17 = 
                "OODLE ERROR : LZ corruption : huffman->gotNumSymbols == 1 path is legacy only!\n";
                iVar5 = 0x512;
              }
              else {
                if (oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_GetDegenerateMemsetVal !=
                    (_func___cdecl_int_legacy_OodleLZDecoder_ptr *)0x0) {
                  local_78.crc = (*oo2::g_OodleLZLegacyVTable.
                                   fp_legacy_OodleLZDecoder_GetDegenerateMemsetVal)
                                           ((legacy_OodleLZDecoder *)param_1->legacy);
                  if ((int)local_78.crc < 0) {
                    return 0;
                  }
                  goto LAB_14f32964a;
                }
                oo2::ooLogErrorPre();
                if (oo2::g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
                pcVar17 = "OODLE ERROR : Legacy LZ Vtable not installed";
                iVar5 = 0x509;
              }
            }
            else {
              if ((param_12 & OodleLZ_Decode_ThreadPhase2) == 0) {
LAB_14f329665:
                param_1->decPos = param_1->decPos + sVar12;
LAB_14f329668:
                param_1->callsWithoutProgress = 0;
                param_2->compBufUsed = (int)_Src - (int)local_90;
                param_2->decodedCount = OVar10;
                return 1;
              }
              if (local_78.wholeMatchOffset < 2) {
                oo2::ooLogErrorPre();
                if (oo2::g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
                pcVar17 = "OODLE ERROR : corruption : matchOff > 1\n";
                iVar5 = 0x4d5;
              }
              else {
                if (local_78.wholeMatchOffset <= lVar8 - param_1->resetPos) {
                  if (local_78.wholeMatchOffset < (longlong)sVar12) {
                    oo2::lz_copygeneric(_Dst,local_78.wholeMatchOffset,sVar12);
                  }
                  else {
                    memcpy(_Dst,_Dst + -local_78.wholeMatchOffset,sVar12);
                  }
                  goto LAB_14f329665;
                }
                oo2::ooLogErrorPre();
                if (oo2::g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
                pcVar17 = "OODLE ERROR : LZ corruption : wholematch offset too large!\n";
                iVar5 = 0x4e1;
              }
            }
          }
          else {
            lVar8 = lVar8 - param_1->resetPos;
            iVar14 = (int)_Src - (int)local_90;
            if (iVar5 == 10) {
              iVar5 = oo2::Mermaid_DecodeOneQuantum
                                (_Dst,puVar13,_Src,local_78.compLen,puVar1,lVar8,param_1->scratch,
                                 param_1->scratch_size,param_12);
            }
            else if (iVar5 == 6) {
              iVar5 = oo2::Kraken_DecodeOneQuantum
                                (_Dst,puVar13,_Src,local_78.compLen,puVar1,lVar8,param_1->scratch,
                                 param_1->scratch_size,param_12);
            }
            else if (iVar5 == 0xc) {
              iVar5 = oo2::Leviathan_DecodeOneQuantum
                                (_Dst,puVar13,_Src,local_78.compLen,puVar1,lVar8,param_1->scratch,
                                 param_1->scratch_size,param_12);
            }
            else {
              if (iVar5 != 2) {
                if ((char)local_98 == '\0') {
                  oo2::ooLogErrorPre();
                  if (oo2::g_fp_OodleCore_Plugin_Printf ==
                      (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
                  pcVar17 = "OODLE ERROR : LZ corruption : DecodeOneQ invalid decodeType!\n";
                  iVar5 = 0x569;
                }
                else {
                  if (oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZ_DecodeOneQ !=
                      (_func___cdecl_int_int_legacy_OodleLZDecoder_ptr_uchar_ptr_uchar_ptr_uchar_ptr_uchar_ptr_uchar_ptr_LZBlockHeader_ptr_LZQuantumHeader_ptr_uchar_ptr_long64_bool_long64_uchar_ptr
                       *)0x0) {
                    iVar5 = (*oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZ_DecodeOneQ)
                                      (iVar5,(legacy_OodleLZDecoder *)param_1->legacy,_Dst,puVar13,
                                       _Src,local_80,puVar1,&param_1->header,&local_78,local_88,
                                       param_5,SUB41(local_a8,0),lVar8,(uchar *)0x0);
                    goto LAB_14f329893;
                  }
                  oo2::ooLogErrorPre();
                  if (oo2::g_fp_OodleCore_Plugin_Printf ==
                      (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
                  pcVar17 = "OODLE ERROR : Legacy LZ Vtable not installed";
                  iVar5 = 0x55b;
                }
                goto LAB_14f3290e3;
              }
              iVar5 = oo2::LZB_DecodeOneQuantum
                                (_Dst,puVar13,_Src,puVar1,&local_78,local_88,param_5,local_a8,
                                 _Dst + -lVar8);
            }
LAB_14f329893:
            if (iVar5 < 0) {
              oo2::ooLogErrorPre();
              if (oo2::g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
              pcVar17 = "OODLE ERROR : LZ corruption : DecodeOneQuantum fail!\n";
              iVar5 = 0x56f;
            }
            else {
              param_1->decPos = param_1->decPos + (longlong)(iVar6 - iVar18);
              if (param_1->decLen < param_1->decPos) {
                oo2::ooLogErrorPre();
                if (oo2::g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
                pcVar17 = "OODLE ERROR : LZ corruption : overrun!\n";
                iVar5 = 0x57d;
              }
              else {
                if (local_a4 + iVar5 == local_78.compLen) {
                  param_1->callsWithoutProgress = 0;
                  param_2->compBufUsed = iVar5 + iVar14;
                  param_2->decodedCount = iVar6 - iVar18;
                  return 1;
                }
                oo2::ooLogErrorPre();
                if (oo2::g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3290ee;
                pcVar17 = "OODLE ERROR : LZ corruption : not complen!\n";
                iVar5 = 0x584;
              }
            }
          }
        }
      }
      else {
        oo2::ooLogErrorPre();
        if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0
           ) goto LAB_14f3290ee;
        pcVar17 = "OODLE ERROR : LZ corruption : crc check fail.\n";
        iVar5 = 0x46e;
      }
    }
  }
  else {
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3290ee;
    pcVar17 = "OODLE ERROR : only legacy compressors do sliding window!\n";
    iVar5 = 0x385;
  }
LAB_14f3290e3:
  (*oo2::g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",iVar5,pcVar17);
LAB_14f3290ee:
  oo2::ooLogErrorPost();
  return 0;
}

// OodleLZDecoder_Destroy @ 14f329990

void __cdecl OodleLZDecoder_Destroy(_OodleLZDecoder *param_1)

{
  if (param_1->ownsmem != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f329996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*oo2::g_fp_OodleCore_Plugin_Free)(param_1);
    return;
  }
  return;
}

// OodleLZDecoder_MakeValidCircularWindowSize @ 14f3299c0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

int __cdecl OodleLZDecoder_MakeValidCircularWindowSize(OodleLZ_Compressor param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (((s_once1) && (s_once1 = false, !oo2::g_Oodle_UsageWarningsDisabled)) &&
     (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
    (*oo2::g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xd47,
               "OODLE USAGE WARNING : Circular windows are deprecated and will be removed in a future version of Oodle.\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
              );
  }
  if (param_1 == OodleLZ_Compressor_LZB16) {
    if (param_2 < 0x10000) {
      return 0x10000;
    }
    return (((uint)param_2 >> 1) + 0xfff & 0xfffff000) * 2;
  }
  if ((0x4e7U >> ((byte)param_1 & 0x1f) & 1) == 0) {
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f329acc;
    pcVar2 = "OODLE ERROR : only legacy codecs support circular window\n";
    iVar1 = 0xd61;
  }
  else {
    if (oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_MakeValidCircularWindowSize !=
        (_func___cdecl_int_OodleLZ_Compressor_int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f329aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_MakeValidCircularWindowSize)
                        (param_1,param_2);
      return iVar1;
    }
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f329acc;
    pcVar2 = "OODLE ERROR : Legacy LZ Vtable not installed";
    iVar1 = 0xd5a;
  }
  (*oo2::g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",iVar1,pcVar2);
LAB_14f329acc:
  oo2::ooLogErrorPost();
  return -1;
}

// OodleLZDecoder_MemorySizeNeeded @ 14f329af0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

int __cdecl OodleLZDecoder_MemorySizeNeeded(OodleLZ_Compressor param_1,long64 param_2)

{
  int iVar1;
  
  if (((0x4e7U >> ((byte)param_1 & 0x1f) & 1) != 0) &&
     (oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZ_Compress_Sub ==
      (_func___cdecl_long64_OodleLZ_Compressor_uchar_ptr_long64_uchar_ptr_OodleLZ_CompressionLevel_OodleLZ_CompressOptions_ptr_uchar_ptr_LRMCascade_ptr_rrArenaAllocator_ptr
       *)0x0)) {
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*oo2::g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",399,
                 "OODLE ERROR : OodleLZDecoder_MemorySizeNeeded: legacy compressors not supported!\n"
                );
    }
    oo2::ooLogErrorPost();
    return 0;
  }
  iVar1 = oo2::OodleLZDecoder_MemorySizeNeeded_NoPad(param_1,param_2,(int *)0x0);
  return iVar1 + 0x10;
}

// OodleLZDecoder_Reset @ 14f329b60

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

int __cdecl OodleLZDecoder_Reset(_OodleLZDecoder *param_1,long64 param_2,long64 param_3)

{
  if (param_3 == 0) {
    param_3 = param_1->decLen;
  }
  if ((param_2 & 0x3ffffU) == 0) {
    if ((-1 < param_2) && (param_2 <= param_3)) {
      param_1->decPos = param_2;
      param_1->resetPos = 0;
      param_1->callsWithoutProgress = 0;
      param_1->decLen = param_3;
      param_1->gotHeaderPos = -1;
      if (oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_Reset !=
          (_func___cdecl_void_legacy_OodleLZDecoder_ptr *)0x0) {
        (*oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_Reset)
                  ((legacy_OodleLZDecoder *)param_1->legacy);
      }
      return 1;
    }
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*oo2::g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x20d,
                 "OODLE ERROR : Can\'t reset out of bounds : %lld in [ %lld , %lld ] \n");
    }
  }
  else {
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*oo2::g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x207,
                 "OODLE ERROR : Can\'t reset off block boundary : %lld\n");
      oo2::ooLogErrorPost();
      return 0;
    }
  }
  oo2::ooLogErrorPost();
  return 0;
}

// OodleLZ_CheckSeekTableCRCs @ 14f329c80

int __cdecl OodleLZ_CheckSeekTableCRCs(void *param_1,long64 param_2,OodleLZ_SeekTable *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == param_3->totalRawLen) {
    if (param_3->rawCRCs != (uint *)0x0) {
      iVar3 = param_3->seekChunkLen;
      lVar4 = 0;
      lVar5 = lVar4;
      if (0 < param_2) {
        do {
          iVar1 = (int)param_2 - (int)lVar4;
          if ((longlong)iVar3 < param_2 - lVar4) {
            iVar1 = iVar3;
          }
          uVar2 = oo2::rrLZH_CRC_Block((uchar *)(lVar4 + (longlong)param_1),(longlong)iVar1);
          if (uVar2 != *(uint *)(lVar5 + (longlong)param_3->rawCRCs)) goto LAB_14f329d02;
          lVar4 = lVar4 + iVar1;
          lVar5 = lVar5 + 4;
        } while (lVar4 < param_2);
      }
    }
    iVar3 = 1;
  }
  else {
LAB_14f329d02:
    iVar3 = 0;
  }
  return iVar3;
}

// OodleLZ_Compress @ 14f329d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
OodleLZ_Compress(OodleLZ_Compressor param_1,void *param_2,long64 param_3,void *param_4,
                OodleLZ_CompressionLevel param_5,OodleLZ_CompressOptions *param_6,void *param_7,
                void *param_8,void *param_9,long64 param_10)

{
  uchar *puVar1;
  bool bVar2;
  ulong64 uVar3;
  long64 lVar4;
  long64 lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  char *pcVar9;
  uchar *puVar10;
  OodleLZ_CompressOptions *pOVar11;
  uchar *puVar12;
  uchar *puVar13;
  undefined1 auStackY_178 [32];
  uchar *local_128;
  rrArenaAllocator local_f8;
  undefined8 local_c8;
  OodleLZ_CompressOptions local_b8;
  ulonglong local_58;
  
  local_c8 = 0xfffffffffffffffe;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_128 = param_7;
  if (oo2::fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = (*oo2::fp_ThreadProfiler_Push)("oo2::OodleLZ_Compress",0);
  }
  oo2::OodleCore_Enter();
  puVar13 = (uchar *)0x0;
  if (oo2::g_Oodle_UsageWarningsDisabled == false) {
    if (((0x3b00U >> ((byte)param_1 & 0x1f) & 1) == 0) && (param_1 != OodleLZ_Compressor_None)) {
      if ((s_once1 != false) &&
         (s_once1 = false,
         oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0))
      {
        (*oo2::g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb84,
                   "OODLE USAGE WARNING : Encoding with archaic compressor (%s) is deprecated and will be removed in a future version.\n  Use one of the modern Oodle codecs (Kraken, Mermaid, Leviathan, Selkie, Hydra).\n  Check OodleLZ_Compressor_IsNewLZFamily.\n  This message is only shown once per run.\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
                  );
      }
      if (param_6 != (OodleLZ_CompressOptions *)0x0) {
        if ((((param_6->dictionarySize != 0) && ((0x3f88U >> ((byte)param_1 & 0x1f) & 1) == 0)) &&
            (s_once2 != false)) &&
           ((s_once2 = false, oo2::g_Oodle_UsageWarningsDisabled == false &&
            (oo2::g_fp_OodleCore_Plugin_Printf !=
             (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)))) {
          (*oo2::g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb8e,
                     "OODLE USAGE WARNING : Requested dictionarySize limit but compressor (%s) does not support it.\n  Use one of the modern Oodle codecs (Kraken, Mermaid, Leviathan, Selkie, Hydra).\n  Check OodleLZ_Compressor_RespectsDictionarySize.\n  This message is only shown once per run.\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
                    );
        }
LAB_14f329f10:
        if (((1 < (int)param_6->jobify) &&
            (oo2::g_fp_OodleCore_Plugin_RunJob == OodleCore_Plugin_RunJob_Default)) &&
           ((s_once3 != false &&
            ((s_once3 = false, oo2::g_Oodle_UsageWarningsDisabled == false &&
             (oo2::g_fp_OodleCore_Plugin_Printf !=
              (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)))))) {
          (*oo2::g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb99,
                     "OODLE USAGE WARNING : \'jobify\' is enabled, but no job system was installed!\n  Call OodleCore_Plugins_SetJobSystem to set up a job system first.\n  This message is only shown once per run.\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
                    );
        }
      }
    }
    else if (param_6 != (OodleLZ_CompressOptions *)0x0) goto LAB_14f329f10;
    bVar2 = oo2::check_comp_buf_size(param_1,param_4,param_3);
    if (bVar2) {
      bVar2 = oo2::check_raw_buf_size(param_2,param_3);
      if (bVar2) goto LAB_14f329fdb;
      oo2::ooLogErrorPre();
      if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      {
        pcVar9 = "OODLE ERROR : raw buf mem invalid!\n";
        iVar7 = 0xbaa;
        goto LAB_14f32a112;
      }
    }
    else {
      oo2::ooLogErrorPre();
      if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      {
        pcVar9 = "OODLE ERROR : comp buf size too small!\n";
        iVar7 = 0xba4;
LAB_14f32a112:
        (*oo2::g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",iVar7,pcVar9);
      }
    }
code_r0x00014f32a120:
    oo2::ooLogErrorPost();
    goto LAB_14f32a45e;
  }
LAB_14f329fdb:
  if (param_6 == (OodleLZ_CompressOptions *)0x0) {
    pOVar11 = &oo2::s_defaultOptions;
  }
  else {
    local_b8.unused_was_verbosity = param_6->unused_was_verbosity;
    local_b8.minMatchLen = param_6->minMatchLen;
    local_b8.seekChunkReset = param_6->seekChunkReset;
    local_b8.seekChunkLen = param_6->seekChunkLen;
    local_b8.profile = param_6->profile;
    local_b8.dictionarySize = param_6->dictionarySize;
    local_b8.spaceSpeedTradeoffBytes = param_6->spaceSpeedTradeoffBytes;
    local_b8.unused_was_maxHuffmansPerChunk = param_6->unused_was_maxHuffmansPerChunk;
    local_b8.sendQuantumCRCs = param_6->sendQuantumCRCs;
    local_b8.maxLocalDictionarySize = param_6->maxLocalDictionarySize;
    local_b8.makeLongRangeMatcher = param_6->makeLongRangeMatcher;
    local_b8.matchTableSizeLog2 = param_6->matchTableSizeLog2;
    local_b8.jobify = param_6->jobify;
    local_b8._52_4_ = *(undefined4 *)&param_6->field_0x34;
    local_b8.jobifyUserPtr = param_6->jobifyUserPtr;
    local_b8.farMatchMinLen = param_6->farMatchMinLen;
    local_b8.farMatchOffsetLog2 = param_6->farMatchOffsetLog2;
    local_b8.reserved._0_8_ = *(undefined8 *)param_6->reserved;
    local_b8.reserved._8_8_ = *(undefined8 *)(param_6->reserved + 2);
    OodleLZ_CompressOptions_Validate(&local_b8);
    pOVar11 = &local_b8;
  }
  if (param_3 < 0x19) {
    puVar13 = (uchar *)0x0;
    if (param_3 < 1) goto LAB_14f32a45e;
  }
  else if ((pOVar11->spaceSpeedTradeoffBytes < param_3) &&
          (param_5 != OodleLZ_CompressionLevel_None)) {
    if ((pOVar11->profile == OodleLZ_Profile_Reduced) && (param_1 != OodleLZ_Compressor_Kraken)) {
      oo2::ooLogErrorPre();
      if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      {
        (*oo2::g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xbf2,
                   "OODLE ERROR : Reduced profile only supports Kraken, failing compress.\n");
      }
      oo2::ooLogErrorPost();
      goto LAB_14f32a45e;
    }
    puVar10 = param_2;
    if (param_7 != (void *)0x0) {
      uVar8 = (longlong)param_2 - (longlong)param_7;
      if ((uVar8 & 0x3ffff) != 0) {
        oo2::ooLogErrorPre();
        if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0
           ) {
          pcVar9 = "OODLE ERROR : dictionary offset must be a multiple of OODLELZ_BLOCK_LEN\n";
          iVar7 = 0xc07;
          goto LAB_14f32a112;
        }
        goto code_r0x00014f32a120;
      }
      if (pOVar11->seekChunkReset == 0) {
        puVar10 = local_128;
        if (0x20000000 < (longlong)uVar8) {
          puVar10 = (uchar *)((longlong)param_2 + -0x20000000);
        }
      }
      else {
        puVar10 = (uchar *)((longlong)param_7 +
                           (uVar8 - (longlong)uVar8 % (longlong)pOVar11->seekChunkLen));
      }
    }
    local_128 = puVar10;
    if ((param_9 == (void *)0x0) || (puVar10 = puVar13, param_10 < 1)) {
      param_10 = OodleLZ_GetCompressScratchMemBound(param_1,param_5,param_3,pOVar11);
      if (param_10 == -1) {
        lVar6 = param_3 * 8 + 0x4000;
        param_10 = 0x100000;
        if (lVar6 < 0x100000) {
          param_10 = lVar6;
        }
      }
      param_9 = oo2::OodleMalloc(param_10);
      puVar10 = param_9;
    }
    puVar12 = (uchar *)((longlong)param_9 + param_10 + -1);
    *puVar12 = '\x17';
    local_f8.m_unorderedStart = 0;
    local_f8.m_allowFallback = 1;
    if (((param_9 == (uchar *)0x0) || (param_10 + -1 < 1)) ||
       (local_f8.m_base = (ulonglong)((longlong)param_9 + 0xf) & 0xfffffffffffffff0,
       puVar12 <= local_f8.m_base)) {
      local_f8.m_size = 0;
      local_f8.m_base = 0;
    }
    else {
      local_f8.m_size = (longlong)puVar12 - local_f8.m_base;
    }
    local_f8.m_cur = local_f8.m_base;
    local_f8.m_cur_max = local_f8.m_base;
    puVar12 = param_4;
    if (pOVar11->seekChunkReset == 0) {
      if ((0x3fffffff < param_3) ||
         (0x5fffffff < (param_3 - (longlong)local_128) + (longlong)param_2)) {
        puVar1 = (uchar *)(param_3 + (longlong)param_2);
        for (; param_2 < puVar1; param_2 = (void *)((longlong)param_2 + lVar4)) {
          lVar4 = (longlong)puVar1 - (longlong)param_2;
          if ((0x257fffff < lVar4) && (0x20000000 < lVar4)) {
            lVar4 = 0x20000000;
          }
          lVar6 = (longlong)param_2 - (longlong)local_128;
          if (0x20000000 < lVar6) {
            lVar6 = 0x20000000;
          }
          lVar5 = oo2::OodleLZ_Compress_Sub
                            (param_1,param_2,lVar4,puVar12,param_5,pOVar11,
                             (uchar *)((longlong)param_2 + -lVar6),param_8,&local_f8);
          if (lVar5 < 1) goto LAB_14f32a28d;
          puVar12 = puVar12 + lVar5;
        }
        goto LAB_14f32a41c;
      }
      puVar13 = (uchar *)oo2::OodleLZ_Compress_Sub
                                   (param_1,param_2,param_3,param_4,param_5,pOVar11,local_128,
                                    param_8,&local_f8);
    }
    else {
      puVar1 = (uchar *)(param_3 + (longlong)param_2);
      if (local_128 != param_2) {
        lVar6 = (longlong)pOVar11->seekChunkLen - ((longlong)param_2 - (longlong)local_128);
        if (lVar6 < param_3) {
          param_3 = lVar6;
        }
        lVar4 = oo2::OodleLZ_Compress_Sub
                          (param_1,param_2,param_3,param_4,param_5,pOVar11,local_128,
                           (LRMCascade *)0x0,&local_f8);
        if (lVar4 < 1) {
LAB_14f32a28d:
          if (puVar10 != (uchar *)0x0) {
            (*oo2::g_fp_OodleCore_Plugin_Free)(puVar10);
            puVar13 = (uchar *)0x0;
          }
          goto LAB_14f32a45e;
        }
        puVar12 = (uchar *)((longlong)param_4 + lVar4);
        param_2 = (void *)((longlong)param_2 + param_3);
      }
      for (; param_2 < puVar1; param_2 = (void *)((longlong)param_2 + lVar6)) {
        lVar6 = (longlong)puVar1 - (longlong)param_2;
        if (pOVar11->seekChunkLen <= lVar6) {
          lVar6 = (longlong)pOVar11->seekChunkLen;
        }
        lVar4 = oo2::OodleLZ_Compress_Sub
                          (param_1,param_2,lVar6,puVar12,param_5,pOVar11,param_2,(LRMCascade *)0x0,
                           &local_f8);
        if (lVar4 < 1) goto LAB_14f32a28d;
        puVar12 = puVar12 + lVar4;
      }
LAB_14f32a41c:
      puVar13 = puVar12 + -(longlong)param_4;
    }
    if (puVar10 != (uchar *)0x0) {
      (*oo2::g_fp_OodleCore_Plugin_Free)(puVar10);
    }
    goto LAB_14f32a45e;
  }
  puVar13 = (uchar *)oo2::OodleLZ_CompressMemcpy_Compressor
                               (param_1,param_2,param_3,param_4,param_7,pOVar11);
LAB_14f32a45e:
  if (oo2::fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*oo2::fp_ThreadProfiler_Pop)(uVar3);
  }
  return (long64)puVar13;
}

// OodleLZ_CompressOptions_GetDefault @ 14f32a4a0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

OodleLZ_CompressOptions * __cdecl
OodleLZ_CompressOptions_GetDefault(OodleLZ_Compressor param_1,OodleLZ_CompressionLevel param_2)

{
  return &oo2::s_defaultOptions;
}

// OodleLZ_CompressOptions_Validate @ 14f32a4c0

void __cdecl OodleLZ_CompressOptions_Validate(OodleLZ_CompressOptions *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  OodleLZ_Jobify OVar4;
  uint uVar5;
  
  uVar2 = param_1->spaceSpeedTradeoffBytes;
  param_1->unused_was_verbosity = 0;
  param_1->unused_was_maxHuffmansPerChunk = 0;
  if (uVar2 == 0) {
    uVar2 = 0x100;
  }
  else if ((int)uVar2 < 0x1000) {
    if (0x7fffffff < uVar2) {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0x1000;
  }
  param_1->spaceSpeedTradeoffBytes = uVar2;
  uVar2 = param_1->seekChunkLen;
  if (uVar2 == 0) {
    uVar2 = 0x40000;
  }
  else {
    if ((int)uVar2 < 0x20000000) {
      if ((int)uVar2 < 0x40001) {
        uVar2 = 0x40000;
      }
    }
    else {
      uVar2 = 0x20000000;
    }
    param_1->seekChunkLen = uVar2;
    uVar2 = oo2::rrNextPow2(uVar2);
  }
  param_1->seekChunkLen = uVar2;
  uVar2 = param_1->maxLocalDictionarySize;
  if ((int)uVar2 < 1) {
    param_1->maxLocalDictionarySize = 0x1000000;
    uVar2 = 0x1000000;
  }
  else if (uVar2 != 0x1000000) {
    uVar1 = oo2::rrPrevPow2(uVar2);
    if ((int)uVar1 < 0x100001) {
      param_1->maxLocalDictionarySize = 0x100000;
      uVar2 = 0x100000;
    }
    else {
      uVar2 = 0x20000000;
      if ((int)uVar1 < 0x20000000) {
        uVar2 = uVar1;
      }
      param_1->maxLocalDictionarySize = uVar2;
    }
  }
  uVar1 = param_1->dictionarySize;
  if (0 < (int)uVar1) {
    uVar5 = 0x40000000;
    if ((int)uVar1 < 0x40000000) {
      uVar5 = uVar1;
    }
    param_1->dictionarySize = uVar5;
    if ((int)uVar5 <= (int)uVar2) {
      uVar2 = oo2::rrNextPow2(uVar5);
      iVar3 = uVar2 * 2;
      if (param_1->maxLocalDictionarySize <= (int)(uVar2 * 2)) {
        iVar3 = param_1->maxLocalDictionarySize;
      }
      if (iVar3 < 0x20000000) {
        if (iVar3 < 0x100001) {
          iVar3 = 0x100000;
        }
      }
      else {
        iVar3 = 0x20000000;
      }
      param_1->maxLocalDictionarySize = iVar3;
      param_1->makeLongRangeMatcher = 0;
    }
  }
  OVar4 = param_1->jobify;
  iVar3 = 2;
  if (2 < param_1->minMatchLen) {
    iVar3 = param_1->minMatchLen;
  }
  param_1->minMatchLen = iVar3;
  if ((int)OVar4 < 3) {
    if ((int)OVar4 < 1) {
      OVar4 = OodleLZ_Jobify_Default;
    }
  }
  else {
    OVar4 = OodleLZ_Jobify_Aggressive;
  }
  param_1->jobify = OVar4;
  iVar3 = 0x1d;
  if (param_1->farMatchOffsetLog2 < 0x1d) {
    iVar3 = param_1->farMatchOffsetLog2;
  }
  param_1->farMatchOffsetLog2 = iVar3;
  oo2::rrMemSetZero(param_1->reserved,0x10);
  return;
}

// OodleLZ_CompressionLevel_GetName @ 14f32a620

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

char * __cdecl OodleLZ_CompressionLevel_GetName(OodleLZ_CompressionLevel param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + OodleLZ_CompressionLevel_Normal;
  if ((int)uVar1 < 0xe) {
    if ((int)uVar1 < 1) {
      return oo2::c_OodleLZ_CompressionLevel_Name[0];
    }
  }
  else {
    uVar1 = 0xe;
  }
  return oo2::c_OodleLZ_CompressionLevel_Name[uVar1];
}

// OodleLZ_Compressor_CanDecodeFuzzSafe @ 14f32a660

int __cdecl OodleLZ_Compressor_CanDecodeFuzzSafe(OodleLZ_Compressor param_1)

{
  return 0x3f18U >> ((byte)param_1 & 0x1f) & 1;
}

// OodleLZ_Compressor_CanDecodeThreadPhased @ 14f32a680

int __cdecl OodleLZ_Compressor_CanDecodeThreadPhased(OodleLZ_Compressor param_1)

{
  return 0x3b00U >> ((byte)param_1 & 0x1f) & 1;
}

// OodleLZ_Compressor_GetName @ 14f32a6a0

char * __cdecl OodleLZ_Compressor_GetName(OodleLZ_Compressor param_1)

{
  if (param_1 < OodleLZ_Compressor_Count) {
    return oo2::c_OodleLZ_Compressor_Names[(int)param_1];
  }
  return "invalid";
}

// OodleLZ_Compressor_IsNewLZFamily @ 14f32a6d0

int __cdecl OodleLZ_Compressor_IsNewLZFamily(OodleLZ_Compressor param_1)

{
  return 0x3b00U >> ((byte)param_1 & 0x1f) & 1;
}

// OodleLZ_Compressor_RespectsDictionarySize @ 14f32a6f0

int __cdecl OodleLZ_Compressor_RespectsDictionarySize(OodleLZ_Compressor param_1)

{
  return 0x3f88U >> ((byte)param_1 & 0x1f) & 1;
}

// OodleLZ_CreateSeekTable @ 14f32a720

OodleLZ_SeekTable * __cdecl
OodleLZ_CreateSeekTable
          (OodleLZSeekTable_Flags param_1,int param_2,void *param_3,long64 param_4,void *param_5,
          long64 param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  OodleLZ_SeekTable *pOVar4;
  longlong lVar5;
  char *pcVar6;
  
  if (param_5 == (void *)0x0) {
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f32a7a2;
    pcVar6 = "OODLE ERROR : bad parameter : compBuf != 0\n";
    iVar2 = 0x98f;
  }
  else {
    if (0 < param_6) {
      if ((param_2 < 1) && (param_2 = 0x40000, 0x3ffff < param_4)) {
        uVar3 = (ulonglong)param_4 >> 4;
        if (uVar3 < 0x20000000) {
          if (0x40000 < (uint)uVar3) {
            uVar1 = oo2::rrIlog2roundf((float)(uVar3 & 0xffffffff));
            param_2 = 1 << ((byte)uVar1 & 0x1f);
          }
        }
        else {
          param_2 = 0x20000000;
        }
      }
      iVar2 = OodleLZ_GetNumSeekChunks(param_4,param_2);
      lVar5 = (longlong)iVar2 * 4 + 0x30;
      if ((param_1 & OodleLZSeekTable_Flags_MakeRawCRCs) != OodleLZSeekTable_Flags_None) {
        lVar5 = lVar5 + (longlong)iVar2 * 4;
      }
      pOVar4 = (*oo2::g_fp_OodleCore_Plugin_MallocAligned)(lVar5,0x10);
      if (pOVar4 != (OodleLZ_SeekTable *)0x0) {
        iVar2 = OodleLZ_FillSeekTable(pOVar4,param_1,param_2,param_3,param_4,param_5,param_6);
        if (iVar2 != 0) {
          return pOVar4;
        }
        (*oo2::g_fp_OodleCore_Plugin_Free)(pOVar4);
        return (OodleLZ_SeekTable *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      oo2::Oodle_Core_Malloc_Failed(lVar5);
    }
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f32a7a2;
    pcVar6 = "OODLE ERROR : bad parameter : compLen > 0\n";
    iVar2 = 0x990;
  }
  (*oo2::g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",iVar2,pcVar6);
LAB_14f32a7a2:
  oo2::ooLogErrorPost();
  return (OodleLZ_SeekTable *)0x0;
}

// OodleLZ_Decompress @ 14f32a8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "OodleLZ_Decode_ThreadPhase": Some values do not have unique names */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
OodleLZ_Decompress(void *param_1,long64 param_2,void *param_3,long64 param_4,
                  OodleLZ_FuzzSafe param_5,OodleLZ_CheckCRC param_6,OodleLZ_Verbosity param_7,
                  void *param_8,long64 param_9,
                  _func___cdecl_OodleDecompressCallbackRet_void_ptr_uchar_ptr_long64_uchar_ptr_long64_long64_long64
                  *param_10,void *param_11,void *param_12,long64 param_13,
                  OodleLZ_Decode_ThreadPhase param_14)

{
  ulonglong uVar1;
  code *pcVar2;
  _func___cdecl_OodleDecompressCallbackRet_void_ptr_uchar_ptr_long64_uchar_ptr_long64_long64_long64
  *p_Var3;
  uchar *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  void *pvVar7;
  OodleLZ_Compressor OVar8;
  OodleDecompressCallbackRet OVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  long64 lVar12;
  ulonglong uVar13;
  _OodleLZDecoder *p_Var14;
  uchar *puVar15;
  byte bVar16;
  undefined1 *puVar17;
  ulonglong *puVar18;
  longlong lVar19;
  int iVar20;
  char *pcVar21;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_d8 [8];
  uchar *local_d0;
  undefined1 *local_c8;
  long64 local_c0;
  int local_b8 [2];
  void *local_b0;
  _func___cdecl_OodleDecompressCallbackRet_void_ptr_uchar_ptr_long64_uchar_ptr_long64_long64_long64
  *local_a8;
  uchar *local_a0;
  void *local_98;
  undefined8 local_90;
  OodleLZ_DecodeSome_Out local_88;
  ulonglong local_78 [4];
  undefined8 local_58;
  ulonglong local_50;
  
  puVar17 = auStack_138;
  local_90 = 0xfffffffffffffffe;
  local_50 = __security_cookie.value ^ (ulonglong)local_d8;
  local_b0 = param_8;
  local_a8 = param_10;
  local_98 = param_11;
  local_c8 = param_12;
  local_d0 = param_1;
  local_c0 = param_4;
  local_a0 = param_3;
  local_88._0_8_ = param_2;
  if (oo2::fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    uVar10 = (*oo2::fp_ThreadProfiler_Push)("oo2::OodleLZ_Decompress",0);
  }
  if (param_3 == (void *)0x0) {
    oo2::ooLogErrorPre();
    puVar17 = auStack_138;
    if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*oo2::g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5a9,
                 "OODLE ERROR : bad parameter : decodeTo != 0\n");
      puVar17 = auStack_138;
    }
LAB_14f32af6c:
    *(undefined8 *)(puVar17 + -8) = 0x14f32af71;
    oo2::ooLogErrorPost();
    puVar6 = puVar17;
  }
  else {
    if (local_d0 == (uchar *)0x0) {
      oo2::ooLogErrorPre();
      puVar17 = auStack_138;
      if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      {
        (*oo2::g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5aa,
                   "OODLE ERROR : bad parameter : compBuf != 0\n");
        puVar17 = auStack_138;
      }
      goto LAB_14f32af6c;
    }
    if (local_c0 < 1) {
      oo2::ooLogErrorPre();
      puVar17 = auStack_138;
      if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      {
        (*oo2::g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5ae,
                   "OODLE ERROR : OodleLZ_Decompress: asked for invalid decompressed size (<=0)\n");
        puVar17 = auStack_138;
      }
      goto LAB_14f32af6c;
    }
    if ((oo2::g_Oodle_UsageWarningsDisabled == false) && (0x3ff < local_c0)) {
      iVar20 = 0;
      puVar18 = local_78;
      do {
        uVar11 = oodle_x64_wc_probe();
        *puVar18 = uVar11;
        if (uVar11 < 0xc80) goto LAB_14f32aab9;
        iVar20 = iVar20 + 1;
        puVar18 = puVar18 + 1;
      } while (iVar20 < 5);
      if ((oo2::g_Oodle_UsageWarningsDisabled == false) &&
         (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0))
      {
        local_f8 = local_58;
        local_100 = local_78[3];
        local_108 = local_78[2];
        local_110 = local_78[1];
        local_118 = local_78[0];
        (*oo2::g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x250,
                   "OODLE USAGE WARNING : Destination buffer appears to be in uncached or write-combined memory! This is extremely slow. See \"How do I decompress to graphics memory quickly?\" in the Oodle FAQ. (Probe times %lld,%lld,%lld,%lld,%lld)\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
                  );
      }
    }
LAB_14f32aab9:
    uVar11 = 0;
    pvVar7 = param_3;
    if ((local_b0 != (void *)0x0) &&
       (uVar11 = (longlong)param_3 - (longlong)local_b0, pvVar7 = local_b0, (uVar11 & 0x3ffff) != 0)
       ) {
      oo2::ooLogErrorPre();
      puVar17 = auStack_138;
      if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      {
        (*oo2::g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5c7,
                   "OODLE ERROR : OodleLZ_Decompress: dictionary backup distance must be a multiple of OODLELZ_BLOCK_LEN\n"
                  );
        puVar17 = auStack_138;
      }
      goto LAB_14f32af6c;
    }
    local_b0 = pvVar7;
    uVar1 = local_c0 + uVar11;
    lVar19 = 0;
    if (param_9 < 1) {
      param_9 = uVar1;
    }
    OVar8 = OodleLZ_GetAllChunksCompressor(local_d0,param_2,local_c0);
    puVar6 = auStack_138;
    if (OVar8 != OodleLZ_Compressor_Invalid) {
      bVar16 = (byte)OVar8;
      if ((param_5 == OodleLZ_FuzzSafe_Yes) && ((0x3f18U >> (bVar16 & 0x1f) & 1) == 0)) {
        if (((0x4e7U >> (bVar16 & 0x1f) & 1) == 0) ||
           (oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZ_Compress_Sub !=
            (_func___cdecl_long64_OodleLZ_Compressor_uchar_ptr_long64_uchar_ptr_OodleLZ_CompressionLevel_OodleLZ_CompressOptions_ptr_uchar_ptr_LRMCascade_ptr_rrArenaAllocator_ptr
             *)0x0)) {
          oo2::ooLogErrorPre();
          puVar17 = auStack_138;
          if (oo2::g_fp_OodleCore_Plugin_Printf !=
              (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*oo2::g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5e8,
                       "OODLE ERROR : OodleLZ_Decompress: Requested Fuzz Safety, saw a compressor that can\'t decode Safe\n"
                      );
            puVar17 = auStack_138;
          }
          goto LAB_14f32af6c;
        }
        oo2::LogLegacyFormatError(local_d0,local_88._0_8_);
        puVar6 = auStack_138;
      }
      else {
        if (param_14 != OodleLZ_Decode_ThreadPhaseAll) {
          if (param_14 != 0) {
            if ((1 < param_14 - OodleLZ_Decode_ThreadPhase1) &&
               (iVar20 = oo2::rrDisplayAssertion
                                   ("v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",
                                    0x5f8,"oo2::OodleLZ_Decompress",
                                    "threadPhase == OodleLZ_Decode_ThreadPhase1 || threadPhase == OodleLZ_Decode_ThreadPhase2"
                                   ), iVar20 != 0)) {
              pcVar2 = (code *)swi(3);
              lVar12 = (*pcVar2)();
              return lVar12;
            }
            if ((0x3b00U >> (bVar16 & 0x1f) & 1) == 0) {
              oo2::ooLogErrorPre();
              puVar17 = auStack_138;
              if (oo2::g_fp_OodleCore_Plugin_Printf !=
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                (*oo2::g_fp_OodleCore_Plugin_Printf)
                          (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5fc,
                           "OODLE ERROR : OodleLZ_Decompress: asked for threaded decode but !OodleLZ_Compressor_CanDecodeThreadPhased\n"
                          );
                puVar17 = auStack_138;
              }
            }
            else {
              if ((local_c8 != (undefined1 *)0x0) && (0xda0f7 < param_13)) goto LAB_14f32abf3;
              oo2::ooLogErrorPre();
              puVar17 = auStack_138;
              if (oo2::g_fp_OodleCore_Plugin_Printf !=
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                (*oo2::g_fp_OodleCore_Plugin_Printf)
                          (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x602,
                           "OODLE ERROR : OodleLZ_Decompress: asked for threaded decode but decoderMemory < OodleLZ_ThreadPhased_BlockDecoderMemorySizeNeeded\n"
                          );
                puVar17 = auStack_138;
              }
            }
            goto LAB_14f32af6c;
          }
          param_14 = OodleLZ_Decode_ThreadPhaseAll;
        }
LAB_14f32abf3:
        if (((0x4e7U >> (bVar16 & 0x1f) & 1) == 0) ||
           (oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZ_Compress_Sub !=
            (_func___cdecl_long64_OodleLZ_Compressor_uchar_ptr_long64_uchar_ptr_OodleLZ_CompressionLevel_OodleLZ_CompressOptions_ptr_uchar_ptr_LRMCascade_ptr_rrArenaAllocator_ptr
             *)0x0)) {
          iVar20 = oo2::OodleLZDecoder_MemorySizeNeeded_NoPad(OVar8,uVar1,local_b8);
          if (local_c8 == (undefined1 *)0x0) {
            puVar17 = auStack_138;
            if (iVar20 < oo2::g_OodleLZ_Decoder_Max_Stack_Size) {
              param_13 = (long64)(iVar20 + 0x10);
              uVar13 = param_13 + 0xf;
              if (uVar13 <= (ulonglong)param_13) {
                uVar13 = 0xffffffffffffff0;
              }
              puVar17 = auStack_138 + -(uVar13 & 0xfffffffffffffff0);
              local_c8 = local_d8 + -(uVar13 & 0xfffffffffffffff0);
            }
          }
          else if (param_13 < iVar20 + 0x10) {
            oo2::ooLogErrorPre();
            puVar17 = auStack_138;
            if (oo2::g_fp_OodleCore_Plugin_Printf !=
                (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
              (*oo2::g_fp_OodleCore_Plugin_Printf)
                        (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x625,
                         "OODLE ERROR : OodleLZ_Decompress : decoder memory given, but too small!\n"
                        );
              puVar17 = auStack_138;
            }
            goto LAB_14f32af6c;
          }
          *(int *)(puVar17 + 0x28) = local_b8[0];
          *(int *)(puVar17 + 0x20) = iVar20;
          puVar6 = local_c8;
          *(undefined8 *)(puVar17 + -8) = 0x14f32ad53;
          p_Var14 = oo2::OodleLZDecoder_Create_Sub
                              (OVar8,uVar1,puVar6,param_13,*(int *)(puVar17 + 0x20),
                               *(int *)(puVar17 + 0x28));
          uVar5 = local_88._0_8_;
          p_Var14->decPos = uVar11;
          uVar13 = uVar11;
          if (0 < (longlong)uVar11) {
            p_Var14->resetPos = 0;
          }
          do {
            do {
              if ((longlong)uVar1 <= (longlong)uVar13) goto LAB_14f32af25;
              if ((longlong)uVar5 <= lVar19) {
                *(undefined8 *)(puVar17 + -8) = 0x14f32aef9;
                oo2::ooLogErrorPre();
                if (oo2::g_fp_OodleCore_Plugin_Printf !=
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                  pcVar21 = "OODLE ERROR : LZ corruption : OodleLZ_Decompress not enough comp buf\n"
                  ;
                  iVar20 = 0x63d;
LAB_14f32af12:
                  *(undefined8 *)(puVar17 + -8) = 0x14f32af1d;
                  (*oo2::g_fp_OodleCore_Plugin_Printf)
                            (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",iVar20,
                             pcVar21);
                }
code_r0x00014f32af20:
                *(undefined8 *)(puVar17 + -8) = 0x14f32af25;
                oo2::ooLogErrorPost();
                goto LAB_14f32af25;
              }
              if ((2 < (int)param_7) &&
                 (oo2::g_fp_OodleCore_Plugin_Printf !=
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
                *(int *)(puVar17 + 0x28) = (int)uVar13;
                *(int *)(puVar17 + 0x20) = (int)lVar19;
                *(undefined8 *)(puVar17 + -8) = 0x14f32adb5;
                (*oo2::g_fp_OodleCore_Plugin_Printf)
                          (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x643,
                           "OodleLZ_Decompress about to DecodeSome, starting at comp %d -> raw %d\n"
                          );
              }
              puVar15 = local_d0 + lVar19;
              *(OodleLZ_Decode_ThreadPhase *)(puVar17 + 0x58) = param_14;
              *(OodleLZ_Verbosity *)(puVar17 + 0x50) = param_7;
              *(OodleLZ_CheckCRC *)(puVar17 + 0x48) = param_6;
              *(OodleLZ_FuzzSafe *)(puVar17 + 0x40) = param_5;
              *(longlong *)(puVar17 + 0x38) = uVar5 - lVar19;
              *(uchar **)(puVar17 + 0x30) = puVar15;
              *(ulonglong *)(puVar17 + 0x28) = param_9 - uVar13;
              *(long64 *)(puVar17 + 0x20) = param_9;
              pvVar7 = local_b0;
              *(undefined8 *)(puVar17 + -8) = 0x14f32ae26;
              iVar20 = OodleLZDecoder_DecodeSome
                                 (p_Var14,&local_88,pvVar7,uVar13,*(long64 *)(puVar17 + 0x20),
                                  *(long64 *)(puVar17 + 0x28),*(void **)(puVar17 + 0x30),
                                  *(long64 *)(puVar17 + 0x38),*(OodleLZ_FuzzSafe *)(puVar17 + 0x40),
                                  *(OodleLZ_CheckCRC *)(puVar17 + 0x48),
                                  *(OodleLZ_Verbosity *)(puVar17 + 0x50),
                                  *(OodleLZ_Decode_ThreadPhase *)(puVar17 + 0x58));
              p_Var3 = local_a8;
              if (iVar20 == 0) goto LAB_14f32af25;
              if (local_88.decodedCount == 0) {
                *(undefined8 *)(puVar17 + -8) = 0x14f32aed7;
                oo2::ooLogErrorPre();
                if (oo2::g_fp_OodleCore_Plugin_Printf !=
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                  pcVar21 = 
                  "OODLE ERROR : LZ corruption : OodleLZ_Decompress : DecodeSome wanted more comp data\n"
                  ;
                  iVar20 = 0x656;
                  goto LAB_14f32af12;
                }
                goto code_r0x00014f32af20;
              }
              uVar13 = uVar13 + (longlong)local_88.decodedCount;
              lVar19 = lVar19 + local_88.compBufUsed;
            } while (local_a8 ==
                     (_func___cdecl_OodleDecompressCallbackRet_void_ptr_uchar_ptr_long64_uchar_ptr_long64_long64_long64
                      *)0x0);
            *(longlong *)(puVar17 + 0x30) = lVar19;
            *(ulonglong *)(puVar17 + 0x28) = uVar13 - uVar11;
            *(undefined8 *)(puVar17 + 0x20) = uVar5;
            pvVar7 = local_98;
            puVar4 = local_a0;
            lVar12 = local_c0;
            puVar15 = local_d0;
            *(undefined8 *)(puVar17 + -8) = 0x14f32ae75;
            OVar9 = (*p_Var3)(pvVar7,puVar4,lVar12,puVar15,*(long64 *)(puVar17 + 0x20),
                              *(long64 *)(puVar17 + 0x28),*(long64 *)(puVar17 + 0x30));
          } while (OVar9 != OodleDecompressCallbackRet_Cancel);
LAB_14f32af25:
          if (p_Var14->ownsmem != 0) {
            *(undefined8 *)(puVar17 + -8) = 0x14f32af35;
            (*oo2::g_fp_OodleCore_Plugin_Free)(p_Var14);
          }
          if (uVar13 == uVar1) goto LAB_14f32af73;
          *(undefined8 *)(puVar17 + -8) = 0x14f32af3f;
          oo2::ooLogErrorPre();
          if (oo2::g_fp_OodleCore_Plugin_Printf !=
              (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            *(int *)(puVar17 + 0x28) = (int)uVar1;
            *(int *)(puVar17 + 0x20) = (int)uVar13;
            *(undefined8 *)(puVar17 + -8) = 0x14f32af6c;
            (*oo2::g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x66e,
                       "OODLE ERROR : LZ corruption : OodleLZ_Decompress failed (%d != %d)\n");
          }
          goto LAB_14f32af6c;
        }
        oo2::LogLegacyFormatError(local_d0,local_88._0_8_);
        puVar6 = auStack_138;
      }
    }
  }
  puVar17 = puVar6;
  uVar13 = 0;
LAB_14f32af73:
  if (oo2::fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    *(undefined8 *)(puVar17 + -8) = 0x14f32af84;
    (*oo2::fp_ThreadProfiler_Pop)(uVar10);
  }
  *(undefined8 *)(puVar17 + -8) = 0x14f32af97;
  return uVar13;
}

// OodleLZ_FillSeekTable @ 14f32afc0

int __cdecl
OodleLZ_FillSeekTable
          (OodleLZ_SeekTable *param_1,OodleLZSeekTable_Flags param_2,int param_3,void *param_4,
          long64 param_5,void *param_6,long64 param_7)

{
  uint uVar1;
  int iVar2;
  OodleLZ_Compressor OVar3;
  ulonglong uVar4;
  OodleLZ_Compressor *pOVar5;
  long64 lVar6;
  longlong lVar7;
  void *pvVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  int local_res8 [2];
  
  if (param_1 == (OodleLZ_SeekTable *)0x0) {
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f32b134;
    pcVar10 = "OODLE ERROR : bad parameter : pTable != 0\n";
    iVar2 = 0x9f0;
  }
  else if (param_6 == (void *)0x0) {
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f32b134;
    pcVar10 = "OODLE ERROR : bad parameter : compBuf != 0\n";
    iVar2 = 0x9f1;
  }
  else if (param_7 < 1) {
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f32b134;
    pcVar10 = "OODLE ERROR : bad parameter : compLen > 0\n";
    iVar2 = 0x9f2;
  }
  else {
    if (param_3 < 1) {
      if (0x3ffff < param_5) {
        param_3 = 0x20000000;
        uVar4 = (ulonglong)param_5 >> 4;
        if (0x1fffffff < uVar4) goto LAB_14f32b14d;
        if (0x40000 < (uint)uVar4) {
          uVar1 = oo2::rrIlog2roundf((float)(uVar4 & 0xffffffff));
          param_3 = 1 << ((byte)uVar1 & 0x1f);
          goto LAB_14f32b14d;
        }
      }
      param_3 = 0x40000;
LAB_14f32b14d:
      iVar2 = OodleLZ_GetNumSeekChunks(param_5,param_3);
      oo2::rrMemSetZero(param_1,0x30);
      param_1->totalCompLen = param_7;
      param_1->seekChunkCompLens = &param_1[1].compressor;
      param_1->numSeekChunks = iVar2;
      param_1->seekChunkLen = param_3;
      param_1->totalRawLen = param_5;
      pOVar5 = &param_1[1].compressor + iVar2;
      if ((param_2 & OodleLZSeekTable_Flags_MakeRawCRCs) == OodleLZSeekTable_Flags_None) {
        pOVar5 = (OodleLZ_Compressor *)0x0;
      }
      param_1->rawCRCs = pOVar5;
      OVar3 = OodleLZ_GetAllChunksCompressor(param_6,param_7,param_5);
      param_1->compressor = OVar3;
      param_1->seekChunksIndependent = 1;
      lVar7 = 0;
      if (0 < param_5) {
        lVar11 = 0;
        pvVar8 = param_6;
        do {
          local_res8[0] = 0;
          iVar2 = (int)param_5 - (int)lVar7;
          if ((longlong)param_3 < param_5 - lVar7) {
            iVar2 = param_3;
          }
          lVar9 = (longlong)param_6 + (param_7 - (longlong)pvVar8);
          OodleLZ_GetFirstChunkCompressor(pvVar8,lVar9,local_res8);
          if (local_res8[0] == 0) {
            param_1->seekChunksIndependent = 0;
          }
          lVar12 = (longlong)iVar2;
          lVar6 = OodleLZ_GetCompressedStepForRawStep
                            (pvVar8,lVar9,lVar7,lVar12,(long64 *)0x0,(int *)0x0);
          *(int *)(lVar11 + (longlong)param_1->seekChunkCompLens) = (int)lVar6;
          if ((param_4 != (void *)0x0) && (param_1->rawCRCs != (uint *)0x0)) {
            uVar1 = oo2::rrLZH_CRC_Block((uchar *)(lVar7 + (longlong)param_4),lVar12);
            *(uint *)(lVar11 + (longlong)param_1->rawCRCs) = uVar1;
          }
          pvVar8 = (void *)((longlong)pvVar8 + lVar6);
          lVar7 = lVar7 + lVar12;
          lVar11 = lVar11 + 4;
        } while (lVar7 < param_5);
      }
      return 1;
    }
    if (param_3 < 0x40000) {
      oo2::ooLogErrorPre();
      if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f32b134;
      pcVar10 = "OODLE ERROR : bad parameter : seekChunkLen >= (1<<18)\n";
      iVar2 = 0x9fa;
    }
    else {
      if ((param_3 & 0x3ffffU) == 0) goto LAB_14f32b14d;
      oo2::ooLogErrorPre();
      if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f32b134;
      pcVar10 = "OODLE ERROR : bad parameter : (seekChunkLen % (1<<18) ) == 0\n";
      iVar2 = 0x9fb;
    }
  }
  (*oo2::g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",iVar2,pcVar10);
LAB_14f32b134:
  oo2::ooLogErrorPost();
  return 0;
}

// OodleLZ_FindSeekEntry @ 14f32b2e0

int __cdecl OodleLZ_FindSeekEntry(long64 param_1,OodleLZ_SeekTable *param_2)

{
  return (int)(param_1 / (longlong)param_2->seekChunkLen);
}

// OodleLZ_FreeSeekTable @ 14f32b300

void __cdecl OodleLZ_FreeSeekTable(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f32b300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*oo2::g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleLZ_GetAllChunksCompressor @ 14f32b320

OodleLZ_Compressor __cdecl
OodleLZ_GetAllChunksCompressor(void *param_1,long64 param_2,long64 param_3)

{
  OodleLZ_Compressor OVar1;
  OodleLZ_Compressor OVar2;
  long64 lVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  long64 local_res10;
  
  if ((param_2 < 1) || (param_3 < 1)) {
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f32b4e0;
    pcVar6 = "OODLE ERROR : Invalid buffer sizes passed to OodleLZ_GetAllChunksCompressor\n";
    iVar5 = 0x713;
  }
  else {
    OVar1 = OodleLZ_GetFirstChunkCompressor(param_1,param_2,(int *)0x0);
    if (OVar1 == OodleLZ_Compressor_Invalid) {
      oo2::ooLogErrorPre();
      if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f32b4e0;
      pcVar6 = "OODLE ERROR : Malformed data stream header\n";
      iVar5 = 0x71d;
    }
    else {
      if (param_3 < 0x40001) {
        return OVar1;
      }
      while( true ) {
        local_res10 = 0;
        lVar4 = 0x40000;
        if (param_3 < 0x40000) {
          lVar4 = param_3;
        }
        lVar3 = OodleLZ_GetCompressedStepForRawStep(param_1,param_2,0,lVar4,&local_res10,(int *)0x0)
        ;
        if (lVar3 == param_2) {
          return OVar1;
        }
        if (local_res10 != lVar4) {
          return OVar1;
        }
        if ((lVar3 < 1) || (param_2 <= lVar3)) {
          oo2::ooLogErrorPre();
          if (oo2::g_fp_OodleCore_Plugin_Printf !=
              (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*oo2::g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x737,
                       "OODLE ERROR : LZ corruption : insufficient comp data in OodleLZ_GetAllChunksCompressor\n"
                      );
          }
          oo2::ooLogErrorPost();
          return OVar1;
        }
        param_1 = (void *)((longlong)param_1 + lVar3);
        param_2 = param_2 - lVar3;
        param_3 = param_3 - lVar4;
        if (param_3 == 0) {
          return OVar1;
        }
        OVar2 = OodleLZ_GetFirstChunkCompressor(param_1,param_2,(int *)0x0);
        if (OVar2 == OodleLZ_Compressor_Invalid) break;
        if (OVar1 != OVar2) {
          if (((0x3b00U >> ((byte)OVar2 & 0x1f) & 1) == 0) ||
             ((0x3b00U >> ((byte)OVar1 & 0x1f) & 1) == 0)) {
            return OodleLZ_Compressor_Count;
          }
          OVar1 = OodleLZ_Compressor_Hydra;
        }
        if (param_2 < 1) {
          return OVar1;
        }
      }
      oo2::ooLogErrorPre();
      if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f32b4e0;
      pcVar6 = "OODLE ERROR : Invalid chunk compressor in OodleLZ_GetAllChunksCompressor\n";
      iVar5 = 0x749;
    }
  }
  (*oo2::g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",iVar5,pcVar6);
code_r0x00014f32b4e0:
  oo2::ooLogErrorPost();
  return OodleLZ_Compressor_Invalid;
}

// OodleLZ_GetChunkCompressor @ 14f32b510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

OodleLZ_Compressor __cdecl OodleLZ_GetChunkCompressor(void *param_1,long64 param_2,int *param_3)

{
  uchar *puVar1;
  undefined1 auStack_48 [32];
  LZBlockHeader LStack_28;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (1 < param_2) {
    puVar1 = oo2::LZBlockHeader_Get(&LStack_28,param_1);
    if (puVar1 != (uchar *)0x0) {
      if (param_3 != (int *)0x0) {
        *param_3 = LStack_28.chunkIsReset;
      }
      return oo2::s_OodleLZ_DecodeType_to_Compressor_table[LStack_28.decodeType];
    }
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*oo2::g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x6f8,
                 "OODLE ERROR : LZ corruption : invalid header..\n");
    }
    oo2::ooLogErrorPost();
  }
  return OodleLZ_Compressor_Invalid;
}

// OodleLZ_GetCompressScratchMemBound @ 14f32b520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
OodleLZ_GetCompressScratchMemBound
          (OodleLZ_Compressor param_1,OodleLZ_CompressionLevel param_2,long64 param_3,
          OodleLZ_CompressOptions *param_4)

{
  long64 lVar1;
  OodleLZ_CompressOptions *pOVar2;
  undefined1 auStackY_118 [32];
  undefined1 local_c7 [7];
  rrArenaAllocator local_c0;
  OodleLZ_CompressOptions local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (((0x3b00U >> ((byte)param_1 & 0x1f) & 1) == 0) || (4 < (int)param_2)) {
    lVar1 = -1;
  }
  else {
    if (param_4 == (OodleLZ_CompressOptions *)0x0) {
      pOVar2 = &oo2::s_defaultOptions;
    }
    else {
      local_88.unused_was_verbosity = param_4->unused_was_verbosity;
      local_88.minMatchLen = param_4->minMatchLen;
      local_88.seekChunkReset = param_4->seekChunkReset;
      local_88.seekChunkLen = param_4->seekChunkLen;
      local_88.profile = param_4->profile;
      local_88.dictionarySize = param_4->dictionarySize;
      local_88.spaceSpeedTradeoffBytes = param_4->spaceSpeedTradeoffBytes;
      local_88.unused_was_maxHuffmansPerChunk = param_4->unused_was_maxHuffmansPerChunk;
      local_88.sendQuantumCRCs = param_4->sendQuantumCRCs;
      local_88.maxLocalDictionarySize = param_4->maxLocalDictionarySize;
      local_88.makeLongRangeMatcher = param_4->makeLongRangeMatcher;
      local_88.matchTableSizeLog2 = param_4->matchTableSizeLog2;
      local_88.jobify = param_4->jobify;
      local_88._52_4_ = *(undefined4 *)&param_4->field_0x34;
      local_88.jobifyUserPtr = param_4->jobifyUserPtr;
      local_88.farMatchMinLen = param_4->farMatchMinLen;
      local_88.farMatchOffsetLog2 = param_4->farMatchOffsetLog2;
      local_88.reserved._0_8_ = *(undefined8 *)param_4->reserved;
      local_88.reserved._8_8_ = *(undefined8 *)(param_4->reserved + 2);
      OodleLZ_CompressOptions_Validate(&local_88);
      pOVar2 = &local_88;
    }
    if ((pOVar2->seekChunkReset != 0) && (pOVar2->seekChunkLen <= param_3)) {
      param_3 = (longlong)pOVar2->seekChunkLen;
    }
    if (param_3 < 1) {
      param_3 = 0x20000000;
    }
    local_c0.m_cur = (ulong64)(local_c7 + 7);
    local_c0.m_unorderedStart = 0;
    local_c0.m_allowFallback = 0;
    if (local_c0.m_cur < local_c7) {
      local_c0.m_size = (ulong64)(local_c7 + -local_c0.m_cur);
      local_c0.m_base = local_c0.m_cur;
    }
    else {
      local_c0.m_base = 0;
      local_c0.m_size = 0;
    }
    if (local_c7 <= local_c0.m_cur) {
      local_c0.m_cur = (ulong64)(undefined1 *)0x0;
    }
    local_c0.m_cur_max = local_c0.m_base;
    lVar1 = oo2::OodleLZ_Compress_Sub
                      (param_1,(uchar *)0x0,param_3,(uchar *)0x0,param_2,pOVar2,(uchar *)0x0,
                       (LRMCascade *)0x0,(rrArenaAllocator *)(local_c7 + 7));
  }
  return lVar1;
}

// OodleLZ_GetCompressScratchMemBoundEx @ 14f32b6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
OodleLZ_GetCompressScratchMemBoundEx
          (OodleLZ_Compressor param_1,OodleLZ_CompressionLevel param_2,
          OodleLZ_CompressScratchMemBoundType param_3,long64 param_4,
          OodleLZ_CompressOptions *param_5)

{
  long64 lVar1;
  OodleLZ_CompressOptions *pOVar2;
  undefined1 auStack_a8 [32];
  OodleLZ_CompressOptions local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((0x3b00U >> ((byte)param_1 & 0x1f) & 1) != 0) {
    if (param_5 == (OodleLZ_CompressOptions *)0x0) {
      pOVar2 = &oo2::s_defaultOptions;
    }
    else {
      local_88.unused_was_verbosity = param_5->unused_was_verbosity;
      local_88.minMatchLen = param_5->minMatchLen;
      local_88.seekChunkReset = param_5->seekChunkReset;
      local_88.seekChunkLen = param_5->seekChunkLen;
      local_88.profile = param_5->profile;
      local_88.dictionarySize = param_5->dictionarySize;
      local_88.spaceSpeedTradeoffBytes = param_5->spaceSpeedTradeoffBytes;
      local_88.unused_was_maxHuffmansPerChunk = param_5->unused_was_maxHuffmansPerChunk;
      local_88.sendQuantumCRCs = param_5->sendQuantumCRCs;
      local_88.maxLocalDictionarySize = param_5->maxLocalDictionarySize;
      local_88.makeLongRangeMatcher = param_5->makeLongRangeMatcher;
      local_88.matchTableSizeLog2 = param_5->matchTableSizeLog2;
      local_88.jobify = param_5->jobify;
      local_88._52_4_ = *(undefined4 *)&param_5->field_0x34;
      local_88.jobifyUserPtr = param_5->jobifyUserPtr;
      local_88.farMatchMinLen = param_5->farMatchMinLen;
      local_88.farMatchOffsetLog2 = param_5->farMatchOffsetLog2;
      local_88.reserved._0_8_ = *(undefined8 *)param_5->reserved;
      local_88.reserved._8_8_ = *(undefined8 *)(param_5->reserved + 2);
      OodleLZ_CompressOptions_Validate(&local_88);
      pOVar2 = &local_88;
    }
    lVar1 = OodleLZ_GetCompressScratchMemBound(param_1,param_2,param_4,pOVar2);
    if (lVar1 != -1) {
      return lVar1;
    }
    if (param_3 != OodleLZ_CompressScratchMemBoundType_WorstCase) {
      if ((pOVar2->seekChunkReset != 0) && (pOVar2->seekChunkLen <= param_4)) {
        param_4 = (longlong)pOVar2->seekChunkLen;
      }
      if (param_4 < 1) {
        param_4 = 0x20000000;
      }
      if ((4 < (int)param_2) && ((ulonglong)param_4 < 0x40001)) {
        return 0x2000000;
      }
    }
  }
  return -1;
}

// OodleLZ_GetCompressedBufferSizeNeeded @ 14f32b7d0

long64 __cdecl OodleLZ_GetCompressedBufferSizeNeeded(OodleLZ_Compressor param_1,long64 param_2)

{
  longlong lVar1;
  
  lVar1 = 0x18;
  if ((0x3b00U >> ((byte)param_1 & 0x1f) & 1) == 0) {
    lVar1 = 0x112;
  }
  return ((longlong)(param_2 + 0x3ffff + (ulonglong)((uint)(param_2 + 0x3ffff >> 0x3f) & 0x3ffff))
         >> 0x12) * lVar1 + param_2;
}

// OodleLZ_GetCompressedStepForRawStep @ 14f32b820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
OodleLZ_GetCompressedStepForRawStep
          (void *param_1,long64 param_2,long64 param_3,long64 param_4,long64 *param_5,int *param_6)

{
  longlong lVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  undefined1 auStackY_f8 [32];
  LZQuantumHeader local_b0;
  LZQuantumHeader local_90;
  LZBlockHeader local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((param_3 & 0x3fffU) == 0) {
    if (param_2 < 2) {
      return 0;
    }
    lVar1 = param_4 + param_3;
    puVar2 = (uchar *)(param_2 + (longlong)param_1);
    if (param_6 != (int *)0x0) {
      *param_6 = 1;
    }
    local_70.chunkIsReset = 0;
    local_70.chunkHasQuantumCRCs = 0;
    local_70.version = 0;
    local_70.decodeType = 0;
    local_70.offsetShift = 0;
    local_70.chunkIsMemcpy = 0;
    puVar5 = param_1;
    uVar9 = param_3;
joined_r0x00014f32b8e3:
    do {
      if (lVar1 <= (longlong)uVar9) {
        if (param_5 != (long64 *)0x0) {
          *param_5 = uVar9;
        }
        return (longlong)puVar5 - (longlong)param_1;
      }
      uVar7 = (uint)lVar1;
      if ((longlong)(uVar9 + 0x40000 & 0xfffffffffffc0000) < lVar1) {
        uVar7 = (uint)(uVar9 + 0x40000) & 0xfffc0000;
      }
      iVar8 = uVar7 - (int)uVar9;
      if ((uVar9 & 0x3ffff) == 0) {
        if ((longlong)puVar2 - (longlong)puVar5 < 2) {
          return 0;
        }
        lVar10 = (longlong)puVar5 - (longlong)param_1;
        puVar5 = oo2::LZBlockHeader_Get(&local_70,puVar5);
        if (puVar5 == (uchar *)0x0) {
          oo2::ooLogErrorPre();
          if (oo2::g_fp_OodleCore_Plugin_Printf ==
              (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f32bbf7;
          pcVar11 = "OODLE ERROR : corruption : compPtr != 0\n";
          iVar8 = 0x870;
        }
        else {
          if (local_70.chunkIsMemcpy != 0) {
            lVar6 = (longlong)iVar8;
            if ((longlong)puVar2 - (longlong)puVar5 < lVar6) {
LAB_14f32bc62:
              if (param_5 != (long64 *)0x0) {
                *param_5 = uVar9;
                return lVar10;
              }
              return lVar10;
            }
            uVar9 = uVar9 + lVar6;
            puVar5 = puVar5 + lVar6;
            goto joined_r0x00014f32b8e3;
          }
          if (((local_70.decodeType - 6U & 0xfffffff9) != 0) || (local_70.decodeType == 8)) {
            if (((uint)local_70.decodeType < 0xc) &&
               ((0x8bfU >> (local_70.decodeType & 0x1fU) & 1) != 0)) {
              if ((param_6 != (int *)0x0) && (local_70.chunkIsReset == 0)) goto LAB_14f32ba56;
              goto LAB_14f32ba5e;
            }
            oo2::ooLogErrorPre();
            if (oo2::g_fp_OodleCore_Plugin_Printf ==
                (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f32bc54;
            pcVar11 = "OODLE ERROR : corruption : unknown LZ code type";
            iVar8 = 0x8c7;
            goto LAB_14f32bc49;
          }
          if ((param_6 != (int *)0x0) && (local_70.chunkIsReset == 0)) {
            *param_6 = 0;
          }
          iVar3 = oo2::LZLargeQuantumHeader_Get
                            (puVar5,puVar2,&local_b0,local_70.chunkHasQuantumCRCs,iVar8);
          if (iVar3 < 1) {
            if ((longlong)puVar2 - (longlong)puVar5 < 0x10) goto LAB_14f32bc62;
            oo2::ooLogErrorPre();
            if (oo2::g_fp_OodleCore_Plugin_Printf ==
                (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f32bc54;
            pcVar11 = "OODLE ERROR : corruption : lzqhlen > 0\n";
            iVar8 = 0x8a7;
            goto LAB_14f32bc49;
          }
          if ((longlong)puVar2 - (longlong)puVar5 < (longlong)iVar3) {
            oo2::ooLogErrorPre();
            if (oo2::g_fp_OodleCore_Plugin_Printf ==
                (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f32bbf7;
            pcVar11 = "OODLE ERROR : corruption : rrPtrDiff(compEnd - compPtr) >= lzqhlen\n";
            iVar8 = 0x8ab;
          }
          else {
            if (local_b0.compLen < 0) {
              oo2::ooLogErrorPre();
              if (oo2::g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f32bc54;
              pcVar11 = "OODLE ERROR : corruption : qh.compLen >= 0\n";
              iVar8 = 0x8af;
              goto LAB_14f32bc49;
            }
            if (0x40000 < local_b0.compLen) {
              oo2::ooLogErrorPre();
              if (oo2::g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f32bc54;
              pcVar11 = "OODLE ERROR : corruption : qh.compLen <= (1<<18)\n";
              iVar8 = 0x8b0;
              goto LAB_14f32bc49;
            }
            if ((longlong)local_b0.compLen <= (longlong)puVar2 - (longlong)(puVar5 + iVar3)) {
              puVar5 = puVar5 + iVar3 + local_b0.compLen;
              uVar9 = uVar9 + (longlong)iVar8;
              goto joined_r0x00014f32b8e3;
            }
            oo2::ooLogErrorPre();
            if (oo2::g_fp_OodleCore_Plugin_Printf ==
                (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f32bbf7;
            pcVar11 = "OODLE ERROR : corruption : rrPtrDiff(compEnd - compPtr) >= qh.compLen\n";
            iVar8 = 0x8b2;
          }
        }
        (*oo2::g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",iVar8,pcVar11);
LAB_14f32bbf7:
        oo2::ooLogErrorPost();
        return 0;
      }
      if (param_6 != (int *)0x0) {
LAB_14f32ba56:
        *param_6 = 0;
      }
LAB_14f32ba5e:
      iVar3 = 0;
      if (0 < iVar8) {
        do {
          iVar12 = 0x4000;
          if (iVar8 - iVar3 < 0x4000) {
            iVar12 = iVar8 - iVar3;
          }
          iVar4 = oo2::LZQuantumHeader_Get
                            (puVar5,puVar2,&local_90,local_70.chunkHasQuantumCRCs,iVar12);
          if (iVar4 < 1) {
LAB_14f32bd0c:
            if (param_5 != (long64 *)0x0) {
              *param_5 = uVar9;
            }
            return (longlong)puVar5 - (longlong)param_1;
          }
          if ((longlong)puVar2 - (longlong)puVar5 < (longlong)(local_90.compLen + iVar4)) {
            if (param_3 < (longlong)uVar9) goto LAB_14f32bd0c;
            if ((longlong)puVar2 - (longlong)puVar5 < (longlong)(local_90.compLen + iVar4)) {
              return 0;
            }
          }
          if (local_90.compLen < 0) {
            oo2::ooLogErrorPre();
            if (oo2::g_fp_OodleCore_Plugin_Printf ==
                (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f32bc54;
            pcVar11 = "OODLE ERROR : corruption : qh.compLen >= 0\n";
            iVar8 = 0x8f6;
            goto LAB_14f32bc49;
          }
          if (0x4000 < local_90.compLen) {
            oo2::ooLogErrorPre();
            if (oo2::g_fp_OodleCore_Plugin_Printf ==
                (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f32bc54;
            pcVar11 = "OODLE ERROR : corruption : qh.compLen <= (1<<14)\n";
            iVar8 = 0x8f7;
            goto LAB_14f32bc49;
          }
          puVar5 = puVar5 + (longlong)local_90.compLen + (longlong)iVar4;
          uVar9 = uVar9 + (longlong)iVar12;
          iVar3 = iVar3 + iVar12;
          if ((lVar1 <= (longlong)uVar9) && (iVar3 < iVar8)) goto LAB_14f32bd0c;
        } while (iVar3 < iVar8);
      }
      if (puVar2 < puVar5) {
        oo2::ooLogErrorPre();
        if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0
           ) goto LAB_14f32bc54;
        pcVar11 = "OODLE ERROR : corruption : compPtr <= compEnd\n";
        iVar8 = 0x90c;
        goto LAB_14f32bc49;
      }
    } while (iVar3 == iVar8);
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f32bc54;
    pcVar11 = "OODLE ERROR : corruption : chunkGot == chunkLen\n";
    iVar8 = 0x90d;
  }
  else {
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f32bc54;
    pcVar11 = "OODLE ERROR : GetCompressedStepForRawStep : start pos not a quantum!\n";
    iVar8 = 0x832;
  }
LAB_14f32bc49:
  (*oo2::g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",iVar8,pcVar11);
LAB_14f32bc54:
  oo2::ooLogErrorPost();
  return -1;
}

// OodleLZ_GetDecodeBufferSize @ 14f32bda0

long64 __cdecl OodleLZ_GetDecodeBufferSize(OodleLZ_Compressor param_1,long64 param_2,int param_3)

{
  longlong lVar1;
  
  if ((0x3b00U >> ((byte)param_1 & 0x1f) & 1) != 0) {
    return param_2;
  }
  lVar1 = param_2 + 0x100;
  if (param_3 == 0) {
    lVar1 = param_2 + 0x10;
  }
  return lVar1;
}

// OodleLZ_GetFirstChunkCompressor @ 14f32bde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

OodleLZ_Compressor __cdecl
OodleLZ_GetFirstChunkCompressor(void *param_1,long64 param_2,int *param_3)

{
  uchar *puVar1;
  undefined1 auStack_48 [32];
  LZBlockHeader local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (1 < param_2) {
    puVar1 = oo2::LZBlockHeader_Get(&local_28,param_1);
    if (puVar1 != (uchar *)0x0) {
      if (param_3 != (int *)0x0) {
        *param_3 = local_28.chunkIsReset;
      }
      return oo2::s_OodleLZ_DecodeType_to_Compressor_table[local_28.decodeType];
    }
    oo2::ooLogErrorPre();
    if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*oo2::g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x6f8,
                 "OODLE ERROR : LZ corruption : invalid header..\n");
    }
    oo2::ooLogErrorPost();
  }
  return OodleLZ_Compressor_Invalid;
}

// OodleLZ_GetInPlaceDecodeBufferSize @ 14f32bea0

long64 __cdecl
OodleLZ_GetInPlaceDecodeBufferSize(OodleLZ_Compressor param_1,long64 param_2,long64 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0x3b00 >> ((byte)param_1 & 0x1f);
  lVar1 = param_3 + 0x3ffff;
  uVar2 = (uint)(lVar1 >> 0x3f);
  if (param_2 < 1) {
    lVar5 = 0x18;
    if ((uVar4 & 1) == 0) {
      lVar5 = 0x112;
    }
    param_2 = lVar5 * ((longlong)(lVar1 + (ulonglong)(uVar2 & 0x3ffff)) >> 0x12) + param_3;
  }
  lVar1 = ((longlong)(lVar1 + (ulonglong)(uVar2 & 0x3ffff)) >> 0x12) * 7;
  if ((uVar4 & 1) == 0) {
    lVar5 = param_3 + 0x110;
    lVar1 = lVar1 + 0x2052;
    lVar3 = param_2;
    if (lVar1 + lVar5 < lVar5 + param_2) {
      lVar3 = lVar1;
    }
    if (param_2 < lVar5 + lVar3) {
      param_2 = lVar5 + lVar3;
    }
    return param_2;
  }
  lVar1 = param_3 + 3 + lVar1;
  lVar5 = param_2 + param_3;
  if (lVar1 < param_2 + param_3) {
    lVar5 = lVar1;
  }
  if (param_2 < lVar5) {
    param_2 = lVar5;
  }
  return param_2;
}

// OodleLZ_GetNumSeekChunks @ 14f32bf60

int __cdecl OodleLZ_GetNumSeekChunks(long64 param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((param_2 < 1) && (param_2 = 0x40000, 0x3ffff < param_1)) {
    uVar2 = (ulonglong)param_1 >> 4;
    if (uVar2 < 0x20000000) {
      if (0x40000 < (uint)uVar2) {
        uVar1 = oo2::rrIlog2roundf((float)(uVar2 & 0xffffffff));
        param_2 = 1 << ((byte)uVar1 & 0x1f);
      }
    }
    else {
      param_2 = 0x20000000;
    }
  }
  return (int)((param_1 + -1 + (longlong)param_2) / (longlong)param_2);
}

// OodleLZ_GetSeekEntryPackedPos @ 14f32bfd0

long64 __cdecl OodleLZ_GetSeekEntryPackedPos(int param_1,OodleLZ_SeekTable *param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar7 = 0;
  uVar4 = 0;
  uVar9 = uVar7;
  if ((0 < param_1) && (uVar9 = 0, 3 < (uint)param_1)) {
    lVar10 = 0;
    lVar11 = 0;
    lVar5 = 0;
    lVar8 = 0;
    uVar9 = uVar7;
    uVar6 = uVar7;
    do {
      uVar1 = *(ulonglong *)(param_2->seekChunkCompLens + uVar6);
      uVar4 = (int)uVar9 + 4;
      uVar9 = (ulonglong)uVar4;
      lVar10 = lVar10 + (uVar1 & 0xffffffff);
      lVar11 = lVar11 + (uVar1 >> 0x20);
      uVar1 = *(ulonglong *)(param_2->seekChunkCompLens + uVar6 + 2);
      uVar6 = uVar6 + 4;
      lVar5 = lVar5 + (uVar1 & 0xffffffff);
      lVar8 = lVar8 + (uVar1 >> 0x20);
    } while ((longlong)uVar6 < (longlong)((longlong)param_1 & 0xfffffffffffffffcU));
    auVar3._8_4_ = (int)(lVar8 + lVar11);
    auVar3._0_8_ = lVar5 + lVar10;
    auVar3._12_4_ = (int)((ulonglong)(lVar8 + lVar11) >> 0x20);
    uVar9 = lVar5 + lVar10 + auVar3._8_8_;
  }
  lVar5 = (longlong)(int)uVar4;
  lVar8 = (longlong)param_1;
  if (lVar8 <= lVar5) {
    return uVar9;
  }
  puVar2 = param_2->seekChunkCompLens;
  uVar6 = uVar7;
  if (1 < lVar8 - lVar5) {
    do {
      uVar6 = uVar6 + puVar2[lVar5];
      uVar7 = uVar7 + puVar2[lVar5 + 1];
      lVar5 = lVar5 + 2;
    } while (lVar5 < lVar8 + -1);
    if (lVar8 <= lVar5) goto LAB_14f32c097;
  }
  uVar9 = uVar9 + puVar2[lVar5];
LAB_14f32c097:
  return uVar7 + uVar6 + uVar9;
}

// OodleLZ_GetSeekTableMemorySizeNeeded @ 14f32c0c0

long64 __cdecl OodleLZ_GetSeekTableMemorySizeNeeded(int param_1,OodleLZSeekTable_Flags param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_1 * 4 + 0x30;
  if ((param_2 & OodleLZSeekTable_Flags_MakeRawCRCs) != OodleLZSeekTable_Flags_None) {
    lVar1 = lVar1 + (longlong)param_1 * 4;
  }
  return lVar1;
}

// OodleLZ_Jobify_GetName @ 14f32c0e0

char * __cdecl OodleLZ_Jobify_GetName(OodleLZ_Jobify param_1)

{
  if (param_1 < OodleLZ_Jobify_Count) {
    return oo2::c_OodleLZ_Jobify_Names[(int)param_1];
  }
  return "invalid";
}

// OodleLZ_MakeSeekChunkLen @ 14f32c120

int __cdecl OodleLZ_MakeSeekChunkLen(long64 param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  
  if (param_1 < 0x40000) {
    return 0x40000;
  }
  if (param_2 < 2) {
    if (param_1 < 0x20000000) {
      uVar3 = oo2::rrNextPow2((uint)param_1);
      return uVar3;
    }
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (longlong)param_2;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1;
    if (SUB168(auVar2 / auVar1,0) < 0x20000000) {
      uVar3 = SUB164(auVar2 / auVar1,0);
      if (uVar3 < 0x40001) {
        return 0x40000;
      }
      uVar3 = oo2::rrIlog2roundf((float)uVar3);
      return 1 << ((byte)uVar3 & 0x1f);
    }
  }
  return 0x20000000;
}

// OodleLZ_ThreadPhased_BlockDecoderMemorySizeNeeded @ 14f32c1a0

int __cdecl OodleLZ_ThreadPhased_BlockDecoderMemorySizeNeeded(void)

{
  return 0xda0f8;
}

