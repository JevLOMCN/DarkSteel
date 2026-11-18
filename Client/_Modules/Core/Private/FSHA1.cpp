// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FSHA1 @ 141917a50

FSHA1 * __thiscall FSHA1::FSHA1(FSHA1 *this)

{
  this->m_state[0] = 0x67452301;
  this->m_state[1] = 0xefcdab89;
  this->m_state[2] = 0x98badcfe;
  this->m_state[3] = 0x10325476;
  this->m_state[4] = 0xc3d2e1f0;
  this->m_count = 0;
  return this;
}

// ~FSHA1 @ 14191c1a0

void __thiscall FSHA1::~FSHA1(FSHA1 *this)

{
  this->m_state[0] = 0x67452301;
  this->m_state[1] = 0xefcdab89;
  this->m_state[2] = 0x98badcfe;
  this->m_state[3] = 0x10325476;
  this->m_state[4] = 0xc3d2e1f0;
  this->m_count = 0;
  return;
}

// Final @ 14193ac30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSHA1::Final(FSHA1 *this)

{
  longlong lVar1;
  uint uVar2;
  ulong64 uVar3;
  uchar *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  size_t _Size;
  ulonglong _Size_00;
  undefined1 auStack_48 [32];
  uchar local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  puVar4 = PADDING;
  uVar3 = this->m_count;
  uVar5 = (ulonglong)((uint)uVar3 & 0x3f);
  lVar1 = uVar3 * 8;
  local_21 = (undefined1)lVar1;
  local_28 = (uchar)((ulonglong)lVar1 >> 0x38);
  local_27 = (undefined1)((ulonglong)lVar1 >> 0x30);
  local_26 = (undefined1)((ulonglong)lVar1 >> 0x28);
  local_25 = (undefined1)((ulonglong)lVar1 >> 0x20);
  local_24 = (undefined1)((ulonglong)lVar1 >> 0x18);
  local_23 = (undefined1)((ulonglong)lVar1 >> 0x10);
  local_22 = (undefined1)((ulonglong)lVar1 >> 8);
  uVar6 = 0x38 - uVar5;
  if (0x37 < uVar5) {
    uVar6 = 0x78 - uVar5;
  }
  if (uVar6 != 0) {
    _Size_00 = -uVar5 + 0x40;
    this->m_count = uVar6 + uVar3;
    if ((uVar5 != 0) && (_Size_00 <= uVar6)) {
      memcpy(this->m_buffer + uVar5,PADDING,_Size_00);
      Transform(this,this->m_buffer,0x40);
      puVar4 = (uchar *)((longlong)L"Determines whether to emit named events for exclusive stats" +
                        -uVar5);
      uVar6 = uVar6 - _Size_00;
      uVar5 = 0;
    }
    if (0x3f < uVar6) {
      Transform(this,puVar4,uVar6);
      puVar4 = puVar4 + (uVar6 & 0xffffffffffffffc0);
      uVar6 = (ulonglong)((uint)uVar6 & 0x3f);
    }
    memcpy(this->m_buffer + uVar5,puVar4,uVar6);
  }
  puVar4 = &local_28;
  _Size = 8;
  uVar6 = (ulonglong)((uint)this->m_count & 0x3f);
  this->m_count = this->m_count + 8;
  uVar5 = -uVar6 + 0x40;
  if ((uVar6 != 0) && (uVar5 < 9)) {
    memcpy(this->m_buffer + uVar6,&local_28,uVar5);
    Transform(this,this->m_buffer,0x40);
    _Size = 8 - uVar5;
    puVar4 = &stack0x00000018 + -uVar6;
    uVar6 = 0;
    if (0x3f < _Size) {
      Transform(this,puVar4,_Size);
      puVar4 = puVar4 + (_Size & 0xffffffffffffffc0);
      _Size = (size_t)((uint)_Size & 0x3f);
      uVar6 = 0;
    }
  }
  memcpy(this->m_buffer + uVar6,puVar4,_Size);
  uVar2 = this->m_state[0];
  this->m_digest[0] = (uchar)(uVar2 >> 0x18);
  this->m_digest[1] = (uchar)(uVar2 >> 0x10);
  this->m_digest[2] = (uchar)(uVar2 >> 8);
  this->m_digest[3] = (uchar)uVar2;
  uVar2 = this->m_state[1];
  this->m_digest[4] = (uchar)(uVar2 >> 0x18);
  this->m_digest[5] = (uchar)(uVar2 >> 0x10);
  this->m_digest[6] = (uchar)(uVar2 >> 8);
  this->m_digest[7] = (uchar)uVar2;
  uVar2 = this->m_state[2];
  this->m_digest[8] = (uchar)(uVar2 >> 0x18);
  this->m_digest[9] = (uchar)(uVar2 >> 0x10);
  this->m_digest[10] = (uchar)(uVar2 >> 8);
  this->m_digest[0xb] = (uchar)uVar2;
  uVar2 = this->m_state[3];
  this->m_digest[0xc] = (uchar)(uVar2 >> 0x18);
  this->m_digest[0xd] = (uchar)(uVar2 >> 0x10);
  this->m_digest[0xe] = (uchar)(uVar2 >> 8);
  this->m_digest[0xf] = (uchar)uVar2;
  uVar2 = this->m_state[4];
  this->m_digest[0x10] = (uchar)(uVar2 >> 0x18);
  this->m_digest[0x11] = (uchar)(uVar2 >> 0x10);
  this->m_digest[0x12] = (uchar)(uVar2 >> 8);
  this->m_digest[0x13] = (uchar)uVar2;
  return;
}

// GetFileSHAHash @ 141947500

bool __cdecl FSHA1::GetFileSHAHash(wchar_t *param_1,uchar *param_2,bool param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  longlong *plVar6;
  int iVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  TMap<FString,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char_*,0>_>
  *this;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,param_1);
  pFVar5 = FPaths::GetCleanFilename(&local_18,&local_38);
  pFVar5 = ::FString::ToLower(pFVar5,&local_28);
  this = &ScriptSHAHashMap;
  if (param_3) {
    this = &FullFileSHAHashMap;
  }
  iVar4 = (pFVar5->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
  iVar4 = TSet<TTuple<FString,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FString,unsigned_char_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FString,unsigned_char_*,0>,FDefaultSetAllocator>
                      *)this,uVar3,pFVar5);
  plVar6 = (longlong *)0x0;
  if (iVar4 != -1) {
    plVar6 = (longlong *)
             ((longlong)iVar4 * 0x20 +
             *(longlong *)
              &((TSet<TTuple<FString,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FString,unsigned_char_*,0>,FDefaultSetAllocator>
                 *)this)->Elements);
  }
  plVar9 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((plVar9 != (longlong *)0x0) && (param_2 != (uchar *)0x0)) {
    puVar1 = (undefined8 *)*plVar9;
    uVar2 = puVar1[1];
    *(undefined8 *)param_2 = *puVar1;
    *(undefined8 *)(param_2 + 8) = uVar2;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar1 + 2);
  }
  return plVar9 != (longlong *)0x0;
}

// GetHash @ 141947e60

void __thiscall FSHA1::GetHash(FSHA1 *this,uchar *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this->m_digest + 8);
  *(undefined8 *)param_1 = *(undefined8 *)this->m_digest;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this->m_digest + 0x10);
  return;
}

// HMACBuffer @ 14194c8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FSHA1::HMACBuffer(void *param_1,uint param_2,void *param_3,ulong64 param_4,uchar *param_5)

{
  uint *puVar1;
  ulonglong _Size;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined1 auStack_1f8 [32];
  uchar local_1d8 [8];
  uchar auStack_1d0 [8];
  uchar local_1c8 [16];
  FSHA1 local_1b8;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  uint local_ec;
  uchar local_e8 [8];
  uchar auStack_e0 [8];
  uchar local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  _Size = (ulonglong)param_2;
  if (param_2 < 0x41) {
    if (param_2 < 0x40) {
      memcpy(&local_128,param_1,_Size);
      memset((void *)((longlong)&local_128 + _Size),0,(ulonglong)(0x40 - param_2));
    }
    else {
      memcpy(&local_128,param_1,_Size);
    }
  }
  else {
    HashBuffer(param_1,_Size,(uchar *)&local_128);
    local_114 = 0;
    uStack_10c = 0;
    local_f4 = 0;
    local_104 = 0;
    uStack_fc = 0;
    local_ec = 0;
  }
  uVar26 = ___xmm_5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c ^ local_128;
  uVar27 = _UNK_1506bff84 ^ uStack_124;
  uVar28 = _UNK_1506bff88 ^ uStack_120;
  uVar29 = _UNK_1506bff8c ^ uStack_11c;
  uVar10 = ___xmm_36363636363636363636363636363636 ^ local_128;
  uVar11 = _UNK_1506bff74 ^ uStack_124;
  uVar12 = _UNK_1506bff78 ^ uStack_120;
  uVar13 = _UNK_1506bff7c ^ uStack_11c;
  uVar22 = ___xmm_5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c ^ uStack_118;
  uVar23 = _UNK_1506bff84 ^ (uint)local_114;
  uVar24 = _UNK_1506bff88 ^ local_114._4_4_;
  uVar25 = _UNK_1506bff8c ^ (uint)uStack_10c;
  uVar6 = ___xmm_36363636363636363636363636363636 ^ uStack_118;
  uVar7 = _UNK_1506bff74 ^ (uint)local_114;
  uVar8 = _UNK_1506bff78 ^ local_114._4_4_;
  uVar9 = _UNK_1506bff7c ^ (uint)uStack_10c;
  uVar14 = ___xmm_5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c ^ uStack_10c._4_4_;
  uVar15 = _UNK_1506bff84 ^ (uint)local_104;
  uVar16 = _UNK_1506bff88 ^ local_104._4_4_;
  uVar17 = _UNK_1506bff8c ^ (uint)uStack_fc;
  uVar2 = ___xmm_36363636363636363636363636363636 ^ uStack_10c._4_4_;
  uVar3 = _UNK_1506bff74 ^ (uint)local_104;
  uVar4 = _UNK_1506bff78 ^ local_104._4_4_;
  uVar5 = _UNK_1506bff7c ^ (uint)uStack_fc;
  uVar30 = ___xmm_5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c ^ uStack_fc._4_4_;
  uVar31 = _UNK_1506bff84 ^ (uint)local_f4;
  uVar32 = _UNK_1506bff88 ^ local_f4._4_4_;
  uVar33 = _UNK_1506bff8c ^ local_ec;
  uVar18 = ___xmm_36363636363636363636363636363636 ^ uStack_fc._4_4_;
  uVar19 = _UNK_1506bff74 ^ (uint)local_f4;
  uVar20 = _UNK_1506bff78 ^ local_f4._4_4_;
  uVar21 = _UNK_1506bff7c ^ local_ec;
  puVar1 = operator_new__(param_4 + 0x40);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;
  puVar1[4] = uVar6;
  puVar1[5] = uVar7;
  puVar1[6] = uVar8;
  puVar1[7] = uVar9;
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  puVar1[10] = uVar4;
  puVar1[0xb] = uVar5;
  puVar1[0xc] = uVar18;
  puVar1[0xd] = uVar19;
  puVar1[0xe] = uVar20;
  puVar1[0xf] = uVar21;
  memcpy(puVar1 + 0x10,param_3,param_4);
  HashBuffer(puVar1,param_4 + 0x40,local_1d8);
  operator_delete__(puVar1);
  local_e8[0] = local_1d8[0];
  local_e8[1] = local_1d8[1];
  local_e8[2] = local_1d8[2];
  local_e8[3] = local_1d8[3];
  local_e8[4] = local_1d8[4];
  local_e8[5] = local_1d8[5];
  local_e8[6] = local_1d8[6];
  local_e8[7] = local_1d8[7];
  auStack_e0[0] = auStack_1d0[0];
  auStack_e0[1] = auStack_1d0[1];
  auStack_e0[2] = auStack_1d0[2];
  auStack_e0[3] = auStack_1d0[3];
  auStack_e0[4] = auStack_1d0[4];
  auStack_e0[5] = auStack_1d0[5];
  auStack_e0[6] = auStack_1d0[6];
  auStack_e0[7] = auStack_1d0[7];
  local_114 = CONCAT44(uVar24,uVar23);
  uStack_10c = CONCAT44(uVar14,uVar25);
  local_104 = CONCAT44(uVar16,uVar15);
  uStack_fc = CONCAT44(uVar30,uVar17);
  local_f4 = CONCAT44(uVar32,uVar31);
  local_d8[0] = local_1c8[0];
  local_d8[1] = local_1c8[1];
  local_d8[2] = local_1c8[2];
  local_d8[3] = local_1c8[3];
  local_1b8.m_state[0] = 0x67452301;
  local_1b8.m_state[1] = 0xefcdab89;
  local_1b8.m_state[2] = 0x98badcfe;
  local_1b8.m_state[3] = 0x10325476;
  local_1b8.m_state[4] = 0xc3d2e1f0;
  local_1b8.m_count = 0x54;
  local_128 = uVar26;
  uStack_124 = uVar27;
  uStack_120 = uVar28;
  uStack_11c = uVar29;
  uStack_118 = uVar22;
  local_ec = uVar33;
  Transform(&local_1b8,(uchar *)&local_128,0x54);
  local_1b8.m_buffer[0] = local_e8[0];
  local_1b8.m_buffer[1] = local_e8[1];
  local_1b8.m_buffer[2] = local_e8[2];
  local_1b8.m_buffer[3] = local_e8[3];
  local_1b8.m_buffer[4] = local_e8[4];
  local_1b8.m_buffer[5] = local_e8[5];
  local_1b8.m_buffer[6] = local_e8[6];
  local_1b8.m_buffer[7] = local_e8[7];
  local_1b8.m_buffer[8] = auStack_e0[0];
  local_1b8.m_buffer[9] = auStack_e0[1];
  local_1b8.m_buffer[10] = auStack_e0[2];
  local_1b8.m_buffer[0xb] = auStack_e0[3];
  local_1b8.m_buffer[0xc] = auStack_e0[4];
  local_1b8.m_buffer[0xd] = auStack_e0[5];
  local_1b8.m_buffer[0xe] = auStack_e0[6];
  local_1b8.m_buffer[0xf] = auStack_e0[7];
  local_1b8.m_buffer[0x10] = local_d8[0];
  local_1b8.m_buffer[0x11] = local_d8[1];
  local_1b8.m_buffer[0x12] = local_d8[2];
  local_1b8.m_buffer[0x13] = local_d8[3];
  Final(&local_1b8);
  *(undefined8 *)param_5 = local_1b8.m_digest._0_8_;
  *(undefined8 *)(param_5 + 8) = local_1b8.m_digest._8_8_;
  *(undefined4 *)(param_5 + 0x10) = local_1b8.m_digest._16_4_;
  return;
}

// HashBuffer @ 14194d220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FSHA1::HashBuffer(void *param_1,ulong64 param_2,uchar *param_3)

{
  undefined1 auStack_d8 [32];
  FSHA1 local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.m_state[0] = 0x67452301;
  local_b8.m_state[1] = 0xefcdab89;
  local_b8.m_state[2] = 0x98badcfe;
  local_b8.m_state[3] = 0x10325476;
  local_b8.m_state[4] = 0xc3d2e1f0;
  local_b8.m_count = 0;
  if (param_2 != 0) {
    local_b8.m_count = param_2;
    if (0x3f < param_2) {
      Transform(&local_b8,param_1,param_2);
      param_1 = (void *)((longlong)param_1 + (param_2 & 0xffffffffffffffc0));
      param_2 = (ulong64)((uint)param_2 & 0x3f);
    }
    memcpy(local_b8.m_buffer,param_1,param_2);
  }
  Final(&local_b8);
  *(undefined8 *)param_3 = local_b8.m_digest._0_8_;
  *(undefined8 *)(param_3 + 8) = local_b8.m_digest._8_8_;
  *(undefined4 *)(param_3 + 0x10) = local_b8.m_digest._16_4_;
  return;
}

// InitializeFileHashesFromBuffer @ 1419506d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FSHA1::InitializeFileHashesFromBuffer(uchar *param_1,ulong64 param_2,bool param_3)

{
  uchar *_Str;
  uchar *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  uchar *puVar7;
  ulong64 uVar8;
  TMap<FString,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char_*,0>_>
  *this;
  undefined1 auStack_1a8 [32];
  uchar *local_188;
  TPairInitializer<FString_&&,unsigned_char_*_const_&> local_180;
  uchar **local_170;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  uVar8 = 0;
  bVar4 = true;
  if (param_2 != 0) {
    do {
      _Str = param_1 + uVar8;
      if (param_1[uVar8] != '\0') {
        sVar6 = strlen((char *)_Str);
        uVar8 = uVar8 + (longlong)((int)sVar6 + 1);
        iVar5 = strcmp((char *)_Str,"+++");
        if (iVar5 == 0) {
          bVar4 = false;
        }
        else {
          puVar1 = param_1 + uVar8;
          if (param_3) {
            puVar7 = FMemory::Malloc(0x14,0);
            uVar3 = *(undefined8 *)(puVar1 + 8);
            *(undefined8 *)puVar7 = *(undefined8 *)puVar1;
            *(undefined8 *)(puVar7 + 8) = uVar3;
            *(undefined4 *)(puVar7 + 0x10) = *(undefined4 *)(puVar1 + 0x10);
            puVar1 = puVar7;
          }
          local_188 = puVar1;
          local_158._padding_ = 0;
          this = &ScriptSHAHashMap;
          if (bVar4) {
            this = &FullFileSHAHashMap;
          }
          sVar6 = strlen((char *)_Str);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,(char *)_Str,(int)sVar6,Yes);
          ::FString::FString(&local_168,local_158.Ptr);
          local_180.Value = (uchar **)&local_168;
          local_170 = &local_188;
          TSet<TTuple<FString,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FString,unsigned_char_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&&,unsigned_char_*_const_&>_>
                    ((TSet<TTuple<FString,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FString,unsigned_char_*,0>,FDefaultSetAllocator>
                      *)this,&local_180,(bool *)&local_180.Value);
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
          uVar8 = uVar8 + 0x14;
        }
      }
    } while (uVar8 < param_2);
  }
  if ((uVar8 != param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset == BufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\SecureHash.cpp"
                         ,0x57a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// Reset @ 141967400

void __thiscall FSHA1::Reset(FSHA1 *this)

{
  this->m_state[0] = 0x67452301;
  this->m_state[1] = 0xefcdab89;
  this->m_state[2] = 0x98badcfe;
  this->m_state[3] = 0x10325476;
  this->m_state[4] = 0xc3d2e1f0;
  this->m_count = 0;
  return;
}

// Transform @ 141973bf0

/* WARNING: Removing unreachable block (ram,0x0001419750a2) */
/* WARNING: Removing unreachable block (ram,0x000141975092) */

void __thiscall FSHA1::Transform(FSHA1 *this,uchar *param_1,ulong64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint *local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    lVar1 = cpuid_Version_info(1);
    lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
    if (((*(uint *)(lVar1 + 0xc) >> 9 & 1) == 0) || ((*(uint *)(lVar2 + 4) & 0x20000000) == 0)) {
      bCanUse = false;
    }
    else {
      bCanUse = true;
    }
    _Init_thread_footer(&::_TSS0);
  }
  if (bCanUse != false) {
    Sha1TransformX86(this->m_state,param_1,param_2);
    return;
  }
  uVar33 = this->m_state[2];
  uVar27 = this->m_state[4];
  uVar23 = this->m_state[1];
  uVar24 = this->m_state[3];
  uVar35 = this->m_state[0];
  if (0x3f < param_2) {
    uVar22 = param_2 >> 6;
    local_48 = (uint *)param_1;
    do {
      uVar4 = *local_48;
      uVar6 = local_48[1];
      uVar7 = local_48[2];
      uVar8 = local_48[3];
      uVar9 = local_48[4];
      uVar10 = local_48[5];
      uVar11 = local_48[6];
      uVar12 = local_48[7];
      uVar13 = local_48[8];
      uVar14 = local_48[9];
      uVar15 = local_48[10];
      uVar16 = local_48[0xb];
      uVar20 = uVar23 << 0x1e | uVar23 >> 2;
      uVar17 = local_48[0xc];
      uVar18 = local_48[0xd];
      uVar21 = local_48[0xe];
      uVar32 = local_48[0xf];
      uVar3 = uVar4 << 0x18 | uVar4 >> 8;
      uVar3 = ((uVar4 << 8 | uVar4 >> 0x18) ^ uVar3) & 0xff00ff ^ uVar3;
      uVar25 = uVar27 + 0x5a827999 +
               ((uVar24 ^ uVar33) & uVar23 ^ uVar24) + (uVar35 << 5 | uVar35 >> 0x1b) + uVar3;
      uVar4 = uVar6 << 0x18 | uVar6 >> 8;
      uVar4 = ((uVar6 << 8 | uVar6 >> 0x18) ^ uVar4) & 0xff00ff ^ uVar4;
      uVar19 = uVar35 << 0x1e | uVar35 >> 2;
      uVar28 = ((uVar20 ^ uVar33) & uVar35 ^ uVar33) +
               (uVar25 * 0x20 | uVar25 >> 0x1b) + uVar4 + 0x5a827999 + uVar24;
      uVar5 = uVar7 << 0x18 | uVar7 >> 8;
      uVar26 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar5 = ((uVar7 << 8 | uVar7 >> 0x18) ^ uVar5) & 0xff00ff ^ uVar5;
      uVar30 = uVar33 + 0x5a827999 +
               ((uVar19 ^ uVar20) & uVar25 ^ uVar20) + (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar5;
      uVar6 = uVar8 << 0x18 | uVar8 >> 8;
      uVar6 = ((uVar8 << 8 | uVar8 >> 0x18) ^ uVar6) & 0xff00ff ^ uVar6;
      uVar29 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar20 = uVar20 + ((uVar26 ^ uVar19) & uVar28 ^ uVar19) +
                        (uVar30 * 0x20 | uVar30 >> 0x1b) + uVar6 + 0x5a827999;
      uVar7 = uVar9 << 0x18 | uVar9 >> 8;
      uVar25 = uVar30 * 0x40000000 | uVar30 >> 2;
      uVar7 = ((uVar9 << 8 | uVar9 >> 0x18) ^ uVar7) & 0xff00ff ^ uVar7;
      uVar19 = uVar7 + (uVar20 * 0x20 | uVar20 >> 0x1b) +
               ((uVar29 ^ uVar26) & uVar30 ^ uVar26) + 0x5a827999 + uVar19;
      uVar28 = uVar20 * 0x40000000 | uVar20 >> 2;
      uVar8 = uVar10 << 0x18 | uVar10 >> 8;
      uVar8 = ((uVar10 << 8 | uVar10 >> 0x18) ^ uVar8) & 0xff00ff ^ uVar8;
      uVar26 = uVar26 + ((uVar25 ^ uVar29) & uVar20 ^ uVar29) +
                        (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar8 + 0x5a827999;
      uVar9 = uVar11 << 0x18 | uVar11 >> 8;
      uVar9 = ((uVar11 << 8 | uVar11 >> 0x18) ^ uVar9) & 0xff00ff ^ uVar9;
      uVar31 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar29 = uVar29 + ((uVar25 ^ uVar28) & uVar19 ^ uVar25) +
                        (uVar26 * 0x20 | uVar26 >> 0x1b) + uVar9 + 0x5a827999;
      uVar10 = uVar12 << 0x18 | uVar12 >> 8;
      uVar10 = ((uVar12 << 8 | uVar12 >> 0x18) ^ uVar10) & 0xff00ff ^ uVar10;
      uVar30 = uVar26 * 0x40000000 | uVar26 >> 2;
      uVar25 = uVar10 + (uVar29 * 0x20 | uVar29 >> 0x1b) +
               ((uVar31 ^ uVar28) & uVar26 ^ uVar28) + 0x5a827999 + uVar25;
      uVar26 = uVar29 * 0x40000000 | uVar29 >> 2;
      uVar11 = uVar13 << 0x18 | uVar13 >> 8;
      uVar11 = ((uVar13 << 8 | uVar13 >> 0x18) ^ uVar11) & 0xff00ff ^ uVar11;
      uVar28 = uVar28 + ((uVar30 ^ uVar31) & uVar29 ^ uVar31) +
                        (uVar25 * 0x20 | uVar25 >> 0x1b) + uVar11 + 0x5a827999;
      uVar12 = uVar14 << 0x18 | uVar14 >> 8;
      uVar12 = ((uVar14 << 8 | uVar14 >> 0x18) ^ uVar12) & 0xff00ff ^ uVar12;
      uVar19 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar20 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar31 = uVar31 + ((uVar26 ^ uVar30) & uVar25 ^ uVar30) +
                        (uVar28 * 0x20 | uVar28 >> 0x1b) + 0x5a827999 + uVar12;
      uVar13 = uVar15 << 0x18 | uVar15 >> 8;
      uVar13 = ((uVar15 << 8 | uVar15 >> 0x18) ^ uVar13) & 0xff00ff ^ uVar13;
      uVar30 = ((uVar19 ^ uVar26) & uVar28 ^ uVar26) +
               (uVar31 * 0x20 | uVar31 >> 0x1b) + 0x5a827999 + uVar13 + uVar30;
      uVar14 = uVar16 << 0x18 | uVar16 >> 8;
      uVar14 = ((uVar16 << 8 | uVar16 >> 0x18) ^ uVar14) & 0xff00ff ^ uVar14;
      uVar25 = uVar31 * 0x40000000 | uVar31 >> 2;
      uVar26 = uVar26 + 0x5a827999 +
               ((uVar19 ^ uVar20) & uVar31 ^ uVar19) + (uVar30 * 0x20 | uVar30 >> 0x1b) + uVar14;
      uVar15 = uVar17 << 0x18 | uVar17 >> 8;
      uVar28 = uVar30 * 0x40000000 | uVar30 >> 2;
      uVar15 = ((uVar17 << 8 | uVar17 >> 0x18) ^ uVar15) & 0xff00ff ^ uVar15;
      uVar16 = uVar18 << 0x18 | uVar18 >> 8;
      uVar19 = uVar15 + (uVar26 * 0x20 | uVar26 >> 0x1b) +
               ((uVar25 ^ uVar20) & uVar30 ^ uVar20) + 0x5a827999 + uVar19;
      uVar16 = ((uVar18 << 8 | uVar18 >> 0x18) ^ uVar16) & 0xff00ff ^ uVar16;
      uVar30 = uVar26 * 0x40000000 | uVar26 >> 2;
      uVar17 = uVar21 << 0x18 | uVar21 >> 8;
      uVar20 = ((uVar28 ^ uVar25) & uVar26 ^ uVar25) +
               (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x5a827999 + uVar16 + uVar20;
      uVar26 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar17 = ((uVar21 << 8 | uVar21 >> 0x18) ^ uVar17) & 0xff00ff ^ uVar17;
      uVar18 = uVar32 << 0x18 | uVar32 >> 8;
      uVar25 = ((uVar30 ^ uVar28) & uVar19 ^ uVar28) +
               (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x5a827999 + uVar17 + uVar25;
      uVar18 = ((uVar32 << 8 | uVar32 >> 0x18) ^ uVar18) & 0xff00ff ^ uVar18;
      uVar29 = uVar20 * 0x40000000 | uVar20 >> 2;
      uVar21 = uVar28 + 0x5a827999 +
               ((uVar26 ^ uVar30) & uVar20 ^ uVar30) + (uVar25 * 0x20 | uVar25 >> 0x1b) + uVar18;
      uVar4 = uVar17 ^ uVar12 ^ uVar6 ^ uVar4;
      uVar20 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar19 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar3 = uVar16 ^ uVar11 ^ uVar5 ^ uVar3;
      uVar31 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar30 = uVar30 + ((uVar26 ^ uVar29) & uVar25 ^ uVar26) +
                        (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x5a827999 + uVar31;
      uVar3 = uVar21 * 0x40000000 | uVar21 >> 2;
      uVar4 = uVar20 ^ uVar15 ^ uVar9 ^ uVar7;
      uVar26 = uVar26 + ((uVar19 ^ uVar29) & uVar21 ^ uVar29) +
                        (uVar30 * 0x20 | uVar30 >> 0x1b) + uVar20 + 0x5a827999;
      uVar32 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar5 = uVar18 ^ uVar13 ^ uVar7 ^ uVar5;
      uVar4 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar5 = uVar30 * 0x40000000 | uVar30 >> 2;
      uVar29 = uVar29 + ((uVar3 ^ uVar19) & uVar30 ^ uVar19) +
                        (uVar26 * 0x20 | uVar26 >> 0x1b) + uVar4 + 0x5a827999;
      uVar6 = uVar31 ^ uVar14 ^ uVar8 ^ uVar6;
      uVar21 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      uVar25 = uVar26 * 0x40000000 | uVar26 >> 2;
      uVar6 = uVar19 + (uVar29 * 0x20 | uVar29 >> 0x1b) +
              ((uVar5 ^ uVar3) & uVar26 ^ uVar3) + 0x5a827999 + uVar21;
      uVar8 = uVar4 ^ uVar16 ^ uVar10 ^ uVar8;
      uVar19 = uVar32 + 0x6ed9eba1 +
               (uVar25 ^ uVar5 ^ uVar29) + (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar3;
      uVar28 = uVar29 * 0x40000000 | uVar29 >> 2;
      uVar3 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      uVar7 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar8 = uVar17 ^ uVar11 ^ uVar9 ^ uVar21;
      uVar6 = uVar5 + (uVar19 * 0x20 | uVar19 >> 0x1b) + (uVar25 ^ uVar28 ^ uVar6) + 0x6ed9eba1 +
              uVar3;
      uVar5 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      uVar9 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar10 = uVar18 ^ uVar12 ^ uVar10 ^ uVar32;
      uVar8 = uVar25 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar7 ^ uVar28 ^ uVar19) + 0x6ed9eba1 +
              uVar5;
      uVar30 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      uVar10 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar25 = uVar28 + (uVar8 * 0x20 | uVar8 >> 0x1b) + (uVar9 ^ uVar7 ^ uVar6) + 0x6ed9eba1 +
               uVar30;
      uVar6 = uVar31 ^ uVar13 ^ uVar11 ^ uVar3;
      uVar26 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      uVar19 = uVar8 * 0x40000000 | uVar8 >> 2;
      uVar6 = uVar20 ^ uVar14 ^ uVar12 ^ uVar5;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      uVar8 = uVar7 + (uVar25 * 0x20 | uVar25 >> 0x1b) + (uVar10 ^ uVar9 ^ uVar8) + 0x6ed9eba1 +
              uVar26;
      uVar9 = uVar6 + 0x6ed9eba1 +
              (uVar19 ^ uVar10 ^ uVar25) + (uVar8 * 0x20 | uVar8 >> 0x1b) + uVar9;
      uVar7 = uVar4 ^ uVar15 ^ uVar13 ^ uVar30;
      uVar25 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      uVar11 = uVar8 * 0x40000000 | uVar8 >> 2;
      uVar10 = uVar7 + 0x6ed9eba1 +
               (uVar19 ^ uVar25 ^ uVar8) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar10;
      uVar8 = uVar16 ^ uVar14 ^ uVar26 ^ uVar21;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      uVar12 = uVar9 * 0x40000000 | uVar9 >> 2;
      uVar13 = uVar8 + 0x6ed9eba1 +
               (uVar11 ^ uVar25 ^ uVar9) + (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar19;
      uVar9 = uVar17 ^ uVar15 ^ uVar6 ^ uVar32;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar19 = uVar10 * 0x40000000 | uVar10 >> 2;
      uVar15 = uVar9 + 0x6ed9eba1 +
               (uVar12 ^ uVar11 ^ uVar10) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar25;
      uVar10 = uVar18 ^ uVar16 ^ uVar7 ^ uVar3;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      uVar25 = uVar13 * 0x40000000 | uVar13 >> 2;
      uVar13 = uVar10 + 0x6ed9eba1 +
               (uVar19 ^ uVar12 ^ uVar13) + (uVar15 * 0x20 | uVar15 >> 0x1b) + uVar11;
      uVar11 = uVar31 ^ uVar17 ^ uVar8 ^ uVar5;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar14 = uVar11 + 0x6ed9eba1 +
               (uVar25 ^ uVar19 ^ uVar15) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar12;
      uVar12 = uVar20 ^ uVar18 ^ uVar9 ^ uVar30;
      uVar28 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar15 = uVar13 * 0x40000000 | uVar13 >> 2;
      uVar17 = uVar12 + 0x6ed9eba1 +
               (uVar25 ^ uVar28 ^ uVar13) + (uVar14 * 0x20 | uVar14 >> 0x1b) + uVar19;
      uVar13 = uVar4 ^ uVar31 ^ uVar10 ^ uVar26;
      uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar16 = uVar14 * 0x40000000 | uVar14 >> 2;
      uVar18 = uVar13 + 0x6ed9eba1 +
               (uVar15 ^ uVar28 ^ uVar14) + (uVar17 * 0x20 | uVar17 >> 0x1b) + uVar25;
      uVar14 = uVar20 ^ uVar11 ^ uVar6 ^ uVar21;
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar19 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar20 = uVar14 + 0x6ed9eba1 +
               (uVar16 ^ uVar15 ^ uVar17) + (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar28;
      uVar4 = uVar4 ^ uVar12 ^ uVar7 ^ uVar32;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar25 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar17 = uVar4 + 0x6ed9eba1 +
               (uVar19 ^ uVar16 ^ uVar18) + (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar15;
      uVar21 = uVar13 ^ uVar8 ^ uVar3 ^ uVar21;
      uVar15 = uVar21 << 1 | (uint)((int)uVar21 < 0);
      uVar28 = uVar20 * 0x40000000 | uVar20 >> 2;
      uVar18 = uVar15 + 0x6ed9eba1 +
               (uVar25 ^ uVar19 ^ uVar20) + (uVar17 * 0x20 | uVar17 >> 0x1b) + uVar16;
      uVar32 = uVar14 ^ uVar9 ^ uVar5 ^ uVar32;
      uVar16 = uVar32 << 1 | (uint)((int)uVar32 < 0);
      uVar21 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar3 = uVar4 ^ uVar10 ^ uVar30 ^ uVar3;
      uVar19 = uVar16 + 0x6ed9eba1 +
               (uVar25 ^ uVar28 ^ uVar17) + (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar19;
      uVar17 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar30 = uVar16 ^ uVar12 ^ uVar6 ^ uVar30;
      uVar30 = uVar30 << 1 | (uint)((int)uVar30 < 0);
      uVar32 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar25 = uVar17 + 0x6ed9eba1 +
               (uVar21 ^ uVar28 ^ uVar18) + (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar25;
      uVar5 = uVar15 ^ uVar11 ^ uVar26 ^ uVar5;
      uVar18 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar3 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar19 = uVar18 + 0x6ed9eba1 +
               (uVar32 ^ uVar21 ^ uVar19) + (uVar25 * 0x20 | uVar25 >> 0x1b) + uVar28;
      uVar5 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar20 = uVar30 + (uVar3 ^ uVar32 ^ uVar25) +
                        (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar21 + 0x6ed9eba1;
      uVar26 = uVar17 ^ uVar13 ^ uVar7 ^ uVar26;
      uVar21 = uVar26 << 1 | (uint)((int)uVar26 < 0);
      uVar6 = uVar18 ^ uVar14 ^ uVar8 ^ uVar6;
      uVar25 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar29 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      uVar6 = uVar21 + (uVar20 * 0x20 | uVar20 >> 0x1b) +
              ((uVar5 | uVar19) & uVar3 | uVar5 & uVar19) + uVar32 + -0x70e44324;
      uVar7 = uVar30 ^ uVar4 ^ uVar9 ^ uVar7;
      uVar32 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      uVar28 = uVar20 * 0x40000000 | uVar20 >> 2;
      uVar3 = uVar29 + (uVar6 * 0x20 | uVar6 >> 0x1b) +
              ((uVar25 | uVar20) & uVar5 | uVar25 & uVar20) + uVar3 + -0x70e44324;
      uVar7 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar6 = (uVar3 * 0x20 | uVar3 >> 0x1b) + uVar32 +
              ((uVar28 | uVar6) & uVar25 | uVar28 & uVar6) + uVar5 + -0x70e44324;
      uVar8 = uVar21 ^ uVar15 ^ uVar10 ^ uVar8;
      uVar34 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      uVar8 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar19 = uVar34 + (uVar6 * 0x20 | uVar6 >> 0x1b) +
               ((uVar7 | uVar3) & uVar28 | uVar7 & uVar3) + uVar25 + -0x70e44324;
      uVar9 = uVar29 ^ uVar16 ^ uVar11 ^ uVar9;
      uVar10 = uVar32 ^ uVar17 ^ uVar12 ^ uVar10;
      uVar31 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar3 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      uVar9 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar10 = uVar3 ^ uVar21 ^ uVar4 ^ uVar13;
      uVar5 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      uVar10 = uVar31 + (uVar19 * 0x20 | uVar19 >> 0x1b) +
               ((uVar6 | uVar8) & uVar7 | uVar6 & uVar8) + uVar28 + -0x70e44324;
      uVar25 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar6 = uVar3 + (uVar10 * 0x20 | uVar10 >> 0x1b) +
              ((uVar9 | uVar19) & uVar8 | uVar9 & uVar19) + uVar7 + -0x70e44324;
      uVar19 = uVar10 * 0x40000000 | uVar10 >> 2;
      uVar11 = uVar34 ^ uVar18 ^ uVar13 ^ uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar8 = uVar8 + (uVar6 * 0x20 | uVar6 >> 0x1b) +
              ((uVar10 | uVar25) & uVar9 | uVar10 & uVar25) + 0x8f1bbcdc + uVar11;
      uVar12 = uVar31 ^ uVar30 ^ uVar14 ^ uVar12;
      uVar10 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar7 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar9 = uVar9 + (uVar8 * 0x20 | uVar8 >> 0x1b) +
              ((uVar6 | uVar19) & uVar25 | uVar6 & uVar19) + 0x8f1bbcdc + uVar10;
      uVar14 = uVar11 ^ uVar29 ^ uVar15 ^ uVar14;
      uVar6 = uVar8 * 0x40000000 | uVar8 >> 2;
      uVar26 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar13 = uVar25 + (uVar9 * 0x20 | uVar9 >> 0x1b) +
               ((uVar7 | uVar8) & uVar19 | uVar7 & uVar8) + 0x8f1bbcdc + uVar5;
      uVar4 = uVar10 ^ uVar32 ^ uVar16 ^ uVar4;
      uVar12 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar8 = uVar9 * 0x40000000 | uVar9 >> 2;
      uVar14 = uVar19 + (uVar13 * 0x20 | uVar13 >> 0x1b) +
               ((uVar9 | uVar6) & uVar7 | uVar9 & uVar6) + 0x8f1bbcdc + uVar26;
      uVar9 = uVar13 * 0x40000000 | uVar13 >> 2;
      uVar15 = uVar5 ^ uVar34 ^ uVar17 ^ uVar15;
      uVar4 = uVar7 + (uVar14 * 0x20 | uVar14 >> 0x1b) +
              ((uVar13 | uVar8) & uVar6 | uVar13 & uVar8) + 0x8f1bbcdc + uVar12;
      uVar19 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      uVar15 = uVar14 * 0x40000000 | uVar14 >> 2;
      uVar7 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar6 +
              ((uVar9 | uVar14) & uVar8 | uVar9 & uVar14) + 0x8f1bbcdc + uVar19;
      uVar16 = uVar26 ^ uVar31 ^ uVar18 ^ uVar16;
      uVar25 = uVar16 << 1 | (uint)((int)uVar16 < 0);
      uVar6 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar4 = (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar8 +
              ((uVar4 | uVar15) & uVar9 | uVar4 & uVar15) + 0x8f1bbcdc + uVar25;
      uVar17 = uVar12 ^ uVar3 ^ uVar30 ^ uVar17;
      uVar8 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar13 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar9 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar9 +
              ((uVar7 | uVar6) & uVar15 | uVar7 & uVar6) + 0x8f1bbcdc + uVar8;
      uVar7 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar18 = uVar19 ^ uVar11 ^ uVar21 ^ uVar18;
      uVar30 = uVar25 ^ uVar10 ^ uVar29 ^ uVar30;
      uVar20 = uVar18 << 1 | (uint)((int)uVar18 < 0);
      uVar28 = uVar30 << 1 | (uint)((int)uVar30 < 0);
      uVar15 = (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar15 +
               ((uVar13 | uVar4) & uVar6 | uVar13 & uVar4) + 0x8f1bbcdc + uVar20;
      uVar16 = uVar9 * 0x40000000 | uVar9 >> 2;
      uVar4 = (uVar15 * 0x20 | uVar15 >> 0x1b) + uVar6 +
              ((uVar9 | uVar7) & uVar13 | uVar9 & uVar7) + 0x8f1bbcdc + uVar28;
      uVar21 = uVar8 ^ uVar5 ^ uVar32 ^ uVar21;
      uVar9 = uVar21 << 1 | (uint)((int)uVar21 < 0);
      uVar14 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar13 +
               ((uVar15 | uVar16) & uVar7 | uVar15 & uVar16) + 0x8f1bbcdc + uVar9;
      uVar18 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar29 = uVar20 ^ uVar26 ^ uVar34 ^ uVar29;
      uVar30 = uVar29 << 1 | (uint)((int)uVar29 < 0);
      uVar6 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar32 = uVar28 ^ uVar12 ^ uVar31 ^ uVar32;
      uVar34 = uVar9 ^ uVar19 ^ uVar3 ^ uVar34;
      uVar13 = uVar32 << 1 | (uint)((int)uVar32 < 0);
      uVar4 = (uVar14 * 0x20 | uVar14 >> 0x1b) + uVar7 +
              ((uVar18 | uVar4) & uVar16 | uVar18 & uVar4) + 0x8f1bbcdc + uVar30;
      uVar34 = uVar34 << 1 | (uint)((int)uVar34 < 0);
      uVar15 = uVar14 * 0x40000000 | uVar14 >> 2;
      uVar7 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar16 +
              ((uVar14 | uVar6) & uVar18 | uVar14 & uVar6) + 0x8f1bbcdc + uVar13;
      uVar3 = uVar13 ^ uVar8 ^ uVar10 ^ uVar3;
      uVar17 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar14 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar4 = (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar18 +
              ((uVar4 | uVar15) & uVar6 | uVar4 & uVar15) + 0x8f1bbcdc + uVar34;
      uVar18 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar31 = uVar30 ^ uVar25 ^ uVar11 ^ uVar31;
      uVar29 = uVar31 << 1 | (uint)((int)uVar31 < 0);
      uVar7 = uVar6 + (uVar4 * 0x20 | uVar4 >> 0x1b) +
              (uVar17 ^ uVar7 ^ uVar15) + 0xca62c1d6 + uVar29;
      uVar6 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar4 = uVar15 + (uVar7 * 0x20 | uVar7 >> 0x1b) +
              (uVar17 ^ uVar4 ^ uVar18) + 0xca62c1d6 + uVar14;
      uVar11 = uVar34 ^ uVar20 ^ uVar5 ^ uVar11;
      uVar5 = uVar14 ^ uVar9 ^ uVar12 ^ uVar5;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar16 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar15 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar10 = uVar29 ^ uVar28 ^ uVar26 ^ uVar10;
      uVar26 = uVar11 ^ uVar30 ^ uVar19 ^ uVar26;
      uVar31 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      uVar7 = uVar17 + (uVar4 * 0x20 | uVar4 >> 0x1b) +
              (uVar7 ^ uVar6 ^ uVar18) + 0xca62c1d6 + uVar11;
      uVar26 = uVar26 << 1 | (uint)((int)uVar26 < 0);
      uVar17 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar4 = (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar18 +
              (uVar16 ^ uVar4 ^ uVar6) + 0xca62c1d6 + uVar31;
      uVar12 = uVar31 ^ uVar13 ^ uVar25 ^ uVar12;
      uVar18 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar6 = uVar6 + (uVar4 * 0x20 | uVar4 >> 0x1b) +
              (uVar16 ^ uVar7 ^ uVar17) + 0xca62c1d6 + uVar15;
      uVar7 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar4 = uVar16 + (uVar6 * 0x20 | uVar6 >> 0x1b) +
              (uVar4 ^ uVar18 ^ uVar17) + 0xca62c1d6 + uVar26;
      uVar10 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar19 = uVar15 ^ uVar34 ^ uVar8 ^ uVar19;
      uVar32 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar17 +
               (uVar7 ^ uVar6 ^ uVar18) + 0xca62c1d6 + uVar12;
      uVar16 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar17 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar25 = uVar26 ^ uVar29 ^ uVar20 ^ uVar25;
      uVar21 = (uVar32 * 0x20 | uVar32 >> 0x1b) + uVar18 +
               (uVar7 ^ uVar4 ^ uVar10) + 0xca62c1d6 + uVar16;
      uVar20 = uVar16 ^ uVar11 ^ uVar9 ^ uVar20;
      uVar5 = uVar32 * 0x40000000 | uVar32 >> 2;
      uVar18 = uVar25 << 1 | (uint)((int)uVar25 < 0);
      uVar6 = uVar20 << 1 | (uint)((int)uVar20 < 0);
      uVar19 = uVar31 ^ uVar30 ^ uVar28 ^ uVar18;
      uVar8 = uVar12 ^ uVar14 ^ uVar28 ^ uVar8;
      uVar3 = (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar18 +
              (uVar32 ^ uVar17 ^ uVar10) + uVar7 + 0xca62c1d6;
      uVar4 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar32 = uVar21 * 0x40000000 | uVar21 >> 2;
      uVar7 = (uVar3 * 0x20 | uVar3 >> 0x1b) + uVar4 +
              (uVar17 ^ uVar5 ^ uVar21) + 0xca62c1d6 + uVar10;
      uVar21 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar10 = uVar6 + (uVar7 * 0x20 | uVar7 >> 0x1b) +
               (uVar32 ^ uVar5 ^ uVar3) + uVar17 + -0x359d3e2a;
      uVar3 = (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar5 +
              (uVar21 ^ uVar32 ^ uVar7) + 0xca62c1d6 + uVar19;
      uVar8 = uVar15 ^ uVar13 ^ uVar9 ^ uVar4;
      uVar9 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar7 = uVar26 ^ uVar34 ^ uVar30 ^ uVar6;
      uVar12 = uVar12 ^ uVar29 ^ uVar13 ^ uVar19;
      uVar13 = uVar10 * 0x40000000 | uVar10 >> 2;
      uVar17 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      uVar10 = (uVar3 * 0x20 | uVar3 >> 0x1b) + uVar8 +
               (uVar21 ^ uVar9 ^ uVar10) + uVar32 + 0xca62c1d6;
      uVar32 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar21 = (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar7 +
               (uVar13 ^ uVar9 ^ uVar3) + uVar21 + 0xca62c1d6;
      uVar12 = uVar10 * 0x40000000 | uVar10 >> 2;
      uVar9 = uVar9 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
              (uVar32 ^ uVar13 ^ uVar10) + uVar17 + 0xca62c1d6;
      uVar8 = uVar16 ^ uVar14 ^ uVar34 ^ uVar8;
      uVar10 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      uVar16 = uVar21 * 0x40000000 | uVar21 >> 2;
      uVar18 = uVar11 ^ uVar29 ^ uVar7 ^ uVar18;
      uVar13 = (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar10 +
               (uVar32 ^ uVar12 ^ uVar21) + uVar13 + 0xca62c1d6;
      uVar7 = uVar18 << 1 | (uint)((int)uVar18 < 0);
      uVar8 = uVar9 * 0x40000000 | uVar9 >> 2;
      uVar9 = (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar7 +
              (uVar16 ^ uVar12 ^ uVar9) + uVar32 + 0xca62c1d6;
      uVar4 = uVar31 ^ uVar14 ^ uVar17 ^ uVar4;
      uVar19 = uVar31 ^ uVar26 ^ uVar7 ^ uVar19;
      uVar14 = uVar13 * 0x40000000 | uVar13 >> 2;
      uVar27 = uVar27 + uVar14;
      uVar7 = (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar4 << 1 | (uint)((int)uVar4 < 0)) + uVar12 +
              (uVar8 ^ uVar16 ^ uVar13) + 0xca62c1d6;
      uVar6 = uVar15 ^ uVar11 ^ uVar10 ^ uVar6;
      uVar4 = (uVar8 ^ uVar14 ^ uVar9) +
              (uVar7 * 0x20 | uVar7 >> 0x1b) +
              (uVar6 << 1 | (uint)((int)uVar6 < 0)) + uVar16 + 0xca62c1d6;
      uVar6 = uVar9 * 0x40000000 | uVar9 >> 2;
      uVar24 = uVar24 + uVar6;
      local_48 = local_48 + 0x10;
      uVar33 = uVar33 + (uVar7 * 0x40000000 | uVar7 >> 2);
      uVar35 = (uVar19 << 1 | (uint)((int)uVar19 < 0)) + (uVar4 * 0x20 | uVar4 >> 0x1b) +
               -0x359d3e2a + (uVar6 ^ uVar14 ^ uVar7) + uVar8 + uVar35;
      uVar23 = uVar23 + uVar4;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  this->m_state[0] = uVar35;
  this->m_state[1] = uVar23;
  this->m_state[3] = uVar24;
  this->m_state[2] = uVar33;
  this->m_state[4] = uVar27;
  return;
}

// Update @ 14197b600

void __thiscall FSHA1::Update(FSHA1 *this,uchar *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  size_t _Size;
  
  if (param_2 != 0) {
    uVar1 = (ulonglong)((uint)this->m_count & 0x3f);
    this->m_count = this->m_count + param_2;
    _Size = 0x40 - uVar1;
    if ((uVar1 != 0) && (_Size <= param_2)) {
      memcpy(this->m_buffer + uVar1,param_1,_Size);
      Transform(this,this->m_buffer,0x40);
      param_1 = param_1 + _Size;
      param_2 = param_2 - _Size;
      uVar1 = 0;
    }
    if (0x3f < param_2) {
      Transform(this,param_1,param_2);
      param_1 = param_1 + (param_2 & 0xffffffffffffffc0);
      param_2 = (ulong64)((uint)param_2 & 0x3f);
    }
    memcpy(this->m_buffer + uVar1,param_1,param_2);
  }
  return;
}

// UpdateWithString @ 14197c2a0

void __thiscall FSHA1::UpdateWithString(FSHA1 *this,wchar_t *param_1,uint param_2)

{
  Update(this,(uchar *)param_1,(ulonglong)param_2 * 2);
  return;
}

