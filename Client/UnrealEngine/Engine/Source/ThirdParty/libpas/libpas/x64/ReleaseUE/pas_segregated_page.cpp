// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 16

// pas_segregated_page_lock_with_unbias_impl @ 140d671d0

bool __cdecl
pas_segregated_page_lock_with_unbias_impl
          (pas_segregated_page *param_1,pas_lock **param_2,pas_lock *param_3)

{
  pas_lock *ppVar1;
  code *pcVar2;
  ulonglong uVar3;
  PSRWLOCK SRWLock;
  
  AcquireSRWLockExclusive((PSRWLOCK)param_3);
  ppVar1 = param_1->lock_ptr;
  if ((ppVar1 == param_3) && (((ulonglong)param_1->owner & 6) == 0)) {
    uVar3 = (ulonglong)param_1->owner & 0xfffffffffffffff8;
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    SRWLock = (PSRWLOCK)(uVar3 + 0x18);
    if (SRWLock != (PSRWLOCK)param_3) {
      AcquireSRWLockExclusive(SRWLock);
      param_1->lock_ptr = (pas_lock *)SRWLock;
      ReleaseSRWLockExclusive((PSRWLOCK)param_3);
      *param_2 = (pas_lock *)SRWLock;
    }
  }
  return ppVar1 == param_3;
}

// pas_segregated_page_switch_lock_slow @ 140d67250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_lock * __cdecl
pas_segregated_page_switch_lock_slow
          (pas_segregated_page *param_1,pas_lock *param_2,pas_lock *param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  pas_lock *ppVar4;
  PSRWLOCK SRWLock;
  undefined1 auStack_58 [32];
  PSRWLOCK local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_2 == param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  do {
    while( true ) {
      SRWLock = (PSRWLOCK)param_3;
      if ((PSRWLOCK)param_2 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)param_2);
      }
      local_38 = SRWLock;
      BVar2 = TryAcquireSRWLockExclusive(SRWLock);
      if (BVar2 != '\0') break;
      bVar3 = pas_segregated_page_lock_with_unbias_impl
                        (param_1,(pas_lock **)&local_38,(pas_lock *)SRWLock);
      SRWLock = local_38;
      if (bVar3) goto LAB_140d672dd;
      param_2 = (pas_lock *)local_38;
      param_3 = (pas_lock *)param_1->lock_ptr;
    }
    param_2 = (pas_lock *)SRWLock;
    param_3 = param_1->lock_ptr;
  } while ((PSRWLOCK)param_1->lock_ptr != SRWLock);
LAB_140d672dd:
  if ((local_30 ^ (ulonglong)auStack_58) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    ppVar4 = (pas_lock *)(*pcVar1)();
    return ppVar4;
  }
  return (pas_lock *)SRWLock;
}

// pas_segregated_page_switch_lock_and_rebias_while_ineligible_impl @ 140d67310

void __cdecl
pas_segregated_page_switch_lock_and_rebias_while_ineligible_impl
          (pas_segregated_page *param_1,pas_lock **param_2,pas_thread_local_cache_node *param_3)

{
  pas_lock *SRWLock;
  pas_segregated_view_opaque *ppVar1;
  PSRWLOCK pRVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  pas_lock *ppVar5;
  pas_lock *ppVar6;
  pas_lock *SRWLock_00;
  bool bVar7;
  
  SRWLock = &param_3->page_lock;
  SRWLock_00 = param_1->lock_ptr;
  if (param_3 == (pas_thread_local_cache_node *)0x0) {
    do {
      if (*param_2 == (pas_lock *)&DAT_00000010 && *param_2 == SRWLock_00) {
        return;
      }
      pRVar2 = (PSRWLOCK)*param_2;
      if (pRVar2 != (PSRWLOCK)SRWLock_00) {
        if (pRVar2 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(pRVar2);
        }
        if (SRWLock_00 != (pas_lock *)0x0) {
          AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
        }
        *param_2 = SRWLock_00;
      }
      bVar7 = param_1->lock_ptr != SRWLock_00;
      SRWLock_00 = param_1->lock_ptr;
    } while (bVar7);
  }
  else {
    ppVar5 = *param_2;
    bVar7 = ppVar5 == SRWLock;
    if (ppVar5 != SRWLock_00 || !bVar7) {
      do {
        while (ppVar1 = param_1->owner, ((ulonglong)ppVar1 & 6) == 0) {
          if (bVar7) {
            BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
            if (BVar4 == '\0') {
              ppVar5 = *param_2;
              goto LAB_140d67421;
            }
          }
          else {
LAB_140d67421:
            if (ppVar5 == SRWLock_00) {
              BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
              if (BVar4 != '\0') goto LAB_140d67488;
              ppVar5 = *param_2;
            }
            if (ppVar5 != (pas_lock *)0x0) {
              ReleaseSRWLockExclusive((PSRWLOCK)ppVar5);
            }
            if (SRWLock == SRWLock_00) {
              AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
              *param_2 = SRWLock_00;
              ppVar6 = param_1->lock_ptr;
              if (ppVar6 == SRWLock) {
                return;
              }
              goto LAB_140d673f3;
            }
            if ((SRWLock < SRWLock_00) ||
               ((pas_lock *)(((ulonglong)ppVar1 & 0xfffffffffffffff8) + 0x18) == SRWLock_00)) {
              AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
              ppVar5 = SRWLock_00;
            }
            else {
              AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
              ppVar5 = SRWLock;
            }
            AcquireSRWLockExclusive((PSRWLOCK)ppVar5);
          }
LAB_140d67488:
          if (SRWLock_00 == SRWLock) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (param_1->lock_ptr == SRWLock_00) {
            param_1->lock_ptr = SRWLock;
            ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
            *param_2 = SRWLock;
            return;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
          *param_2 = SRWLock;
          SRWLock_00 = param_1->lock_ptr;
          bVar7 = true;
          ppVar5 = SRWLock;
          if (SRWLock == SRWLock_00) {
            return;
          }
        }
        pRVar2 = (PSRWLOCK)*param_2;
        if (pRVar2 == (PSRWLOCK)SRWLock_00) {
          ppVar6 = param_1->lock_ptr;
        }
        else {
          if (pRVar2 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(pRVar2);
          }
          if (SRWLock_00 != (pas_lock *)0x0) {
            AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
          }
          *param_2 = SRWLock_00;
          ppVar6 = param_1->lock_ptr;
        }
        if (ppVar6 == SRWLock_00) {
          return;
        }
LAB_140d673f3:
        ppVar5 = *param_2;
        bVar7 = ppVar5 == SRWLock;
        SRWLock_00 = ppVar6;
      } while (ppVar5 != ppVar6 || !bVar7);
    }
  }
  return;
}

// pas_segregated_page_construct @ 140d67500

/* WARNING: Removing unreachable block (ram,0x000140d67839) */
/* WARNING: Removing unreachable block (ram,0x000140d677f7) */
/* WARNING: Removing unreachable block (ram,0x000140d677ed) */
/* WARNING: Removing unreachable block (ram,0x000140d67810) */
/* WARNING: Removing unreachable block (ram,0x000140d6781a) */
/* WARNING: Removing unreachable block (ram,0x000140d67833) */
/* WARNING: Removing unreachable block (ram,0x000140d67856) */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
pas_segregated_page_construct
          (pas_segregated_page *param_1,pas_segregated_view_opaque *param_2,bool param_3,
          pas_segregated_page_config *param_4)

{
  ulonglong uVar1;
  pas_segregated_page_config_kind pVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  code *pcVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  char cVar17;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [11];
  undefined1 auVar52 [15];
  undefined1 auVar53 [11];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  bool bVar58;
  uchar uVar59;
  pas_lock *ppVar60;
  ulonglong _Size;
  ulonglong uVar61;
  ulonglong uVar62;
  char cVar63;
  uint uVar64;
  ulonglong uVar65;
  uint *puVar66;
  uint *puVar67;
  longlong lVar68;
  longlong lVar69;
  ulong64 uVar70;
  uchar uVar71;
  ulonglong uVar72;
  pas_segregated_size_directory *ppVar73;
  bool bVar74;
  char in_XMM1_Ba;
  char in_XMM1_Bb;
  char in_XMM1_Bc;
  char in_XMM1_Bd;
  char in_XMM1_Be;
  byte bVar75;
  char in_XMM1_Bf;
  byte bVar76;
  char in_XMM1_Bg;
  char in_XMM1_Bh;
  char cVar77;
  undefined1 in_XMM1_Bi;
  undefined1 in_XMM1_Bj;
  char cVar78;
  undefined1 in_XMM1_Bk;
  char cVar79;
  undefined1 in_XMM1_Bl;
  char cVar80;
  undefined1 in_XMM1_Bm;
  undefined1 in_XMM1_Bn;
  char cVar81;
  undefined1 in_XMM1_Bo;
  char cVar82;
  undefined1 in_XMM1_Bp;
  char cVar83;
  undefined1 auVar84 [11];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  char cVar18;
  byte bVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  undefined1 auVar85 [15];
  
  if ((param_4->base).page_config_kind != pas_page_config_kind_segregated) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  uVar72 = (param_4->base).page_size;
  uVar3 = (param_4->base).granule_size;
  pVar2 = param_4->kind;
  uVar4 = param_4->num_alloc_bits;
  uVar5 = param_4->shared_payload_offset;
  uVar6 = param_4->exclusive_payload_offset;
  uVar7 = param_4->shared_payload_size;
  uVar70 = param_4->exclusive_payload_size;
  uVar64 = (uint)param_2 & 7;
  if (uVar64 < 2) {
    bVar74 = true;
    bVar25 = true;
    uVar59 = '\x02';
    uVar71 = '\x04';
    bVar58 = false;
  }
  else {
    if (uVar64 != 3) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar59 = '\x01';
    uVar71 = '\x03';
    bVar74 = false;
    bVar25 = false;
    bVar58 = true;
  }
  if ((param_4->variant != pas_small_segregated_page_config_variant) &&
     (uVar59 = uVar71, bVar25 = bVar74,
     param_4->variant != pas_medium_segregated_page_config_variant)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  (param_1->base).page_kind = uVar59;
  if (pVar2 == pas_segregated_page_config_kind_pas_utility_small) {
    ppVar60 = (pas_lock *)0x0;
  }
  else {
    ppVar60 = pas_segregated_view_get_ownership_lock(param_2);
  }
  param_1->lock_ptr = ppVar60;
  param_1->owner = param_2;
  uVar65 = uVar4 + 0x1f;
  puVar67 = param_1->alloc_bits;
  memset(puVar67,0,uVar65 >> 3 & 0xfffffffffffffffc);
  do {
    LOCK();
    bVar74 = param_1->emptiness == param_1->emptiness;
    if (bVar74) {
      (param_1->emptiness).use_epoch = 0;
      (param_1->emptiness).num_non_empty_words_or_live_bytes = 0;
    }
    UNLOCK();
  } while (!bVar74);
  param_1->view_cache_index = 0xffffffff;
  if (bVar25) {
    if (((uint)param_2 & 7) == 5) {
      ppVar73 = (pas_segregated_size_directory *)((ulonglong)param_2 & 0xfffffffffffffff8);
    }
    else {
      ppVar73 = pas_segregated_view_get_size_directory_slow(param_2);
    }
    uVar64 = ppVar73->object_size;
    if (uVar64 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    param_1->object_size = uVar64;
    if (uVar64 != ppVar73->object_size) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar59 = pas_segregated_size_directory_view_cache_capacity(ppVar73);
    uVar64 = ppVar73->view_cache_index;
    if (uVar59 == '\0') {
      if (uVar64 != 0xffffffff) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
    }
    else {
      if (uVar64 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      param_1->view_cache_index = uVar64;
    }
  }
  else {
    param_1->object_size = 0;
  }
  param_1->is_in_use_for_allocation = false;
  param_1->is_committing_fully = false;
  if (uVar72 == uVar3) goto LAB_140d67983;
  if (uVar72 <= uVar3) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  uVar65 = uVar65 >> 5;
  if ((uVar72 | uVar3) >> 0x20 == 0) {
    _Size = (uVar72 & 0xffffffff) / (uVar3 & 0xffffffff);
    if (!param_3) goto LAB_140d6787d;
LAB_140d676e5:
    puVar66 = puVar67 + uVar65;
    uVar62 = _Size;
    if (7 < _Size) {
      if (_Size < 0x10) {
        uVar61 = 0;
      }
      else {
        uVar61 = _Size & 0xfffffffffffffff0;
        lVar68 = 0;
        iVar30 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)))
                        == CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)))
                        );
        in_XMM1_Ba = (char)iVar30;
        in_XMM1_Bb = (char)((uint)iVar30 >> 8);
        in_XMM1_Bc = (char)((uint)iVar30 >> 0x10);
        in_XMM1_Bd = (char)((uint)iVar30 >> 0x18);
        iVar30 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)))
                        == CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)))
                        );
        in_XMM1_Be = (char)iVar30;
        in_XMM1_Bf = (char)((uint)iVar30 >> 8);
        in_XMM1_Bg = (char)((uint)iVar30 >> 0x10);
        in_XMM1_Bh = (char)((uint)iVar30 >> 0x18);
        iVar30 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)))
                        == CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)))
                        );
        in_XMM1_Bi = (undefined1)iVar30;
        in_XMM1_Bj = (undefined1)((uint)iVar30 >> 8);
        in_XMM1_Bk = (undefined1)((uint)iVar30 >> 0x10);
        in_XMM1_Bl = (undefined1)((uint)iVar30 >> 0x18);
        iVar30 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)))
                        == CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)))
                        );
        in_XMM1_Bm = (undefined1)iVar30;
        in_XMM1_Bn = (undefined1)((uint)iVar30 >> 8);
        in_XMM1_Bo = (undefined1)((uint)iVar30 >> 0x10);
        in_XMM1_Bp = (undefined1)((uint)iVar30 >> 0x18);
        uVar62 = uVar61;
        do {
          lVar69 = _Size - lVar68;
          auVar86 = *(undefined1 (*) [16])((longlong)puVar66 + lVar69 + -0x10);
          auVar35[0xd] = 0;
          auVar35._0_13_ = auVar86._0_13_;
          auVar35[0xe] = auVar86[7];
          auVar37[0xc] = auVar86[6];
          auVar37._0_12_ = auVar86._0_12_;
          auVar37._13_2_ = auVar35._13_2_;
          auVar39[0xb] = 0;
          auVar39._0_11_ = auVar86._0_11_;
          auVar39._12_3_ = auVar37._12_3_;
          auVar41[10] = auVar86[5];
          auVar41._0_10_ = auVar86._0_10_;
          auVar41._11_4_ = auVar39._11_4_;
          auVar43[9] = 0;
          auVar43._0_9_ = auVar86._0_9_;
          auVar43._10_5_ = auVar41._10_5_;
          auVar45[8] = auVar86[4];
          auVar45._0_8_ = auVar86._0_8_;
          auVar45._9_6_ = auVar43._9_6_;
          auVar89[7] = 0;
          auVar89._0_7_ = auVar45._8_7_;
          auVar52._7_8_ = 0;
          auVar52._0_7_ = auVar45._8_7_;
          auVar56._1_8_ = SUB158(auVar52 << 0x40,7);
          auVar56[0] = auVar86[3];
          auVar56._9_6_ = 0;
          auVar53._1_10_ = SUB1510(auVar56 << 0x30,5);
          auVar53[0] = auVar86[2];
          auVar57._11_4_ = 0;
          auVar57._0_11_ = auVar53;
          auVar47[2] = auVar86[1];
          auVar47._0_2_ = auVar86._0_2_;
          auVar47._3_12_ = SUB1512(auVar57 << 0x20,3);
          auVar49._2_13_ = auVar47._2_13_;
          auVar49._0_2_ = auVar86._0_2_ & 0xff;
          auVar89._8_4_ = auVar49._0_4_;
          auVar89._12_4_ = auVar53._0_4_;
          auVar90 = pshuflw(auVar89,auVar89,0x1b);
          pshufhw(auVar90,auVar90,0x1b);
          auVar90[8] = auVar86[8];
          auVar90[9] = 0;
          auVar90[10] = auVar86[9];
          auVar84._0_10_ = (unkuint10)auVar86[0xc] << 0x40;
          auVar84[10] = auVar86[0xd];
          auVar85[0xb] = 0;
          auVar85._0_11_ = auVar84;
          auVar85[0xc] = auVar86[0xe];
          auVar85[0xd] = 0;
          auVar85[0xe] = auVar86[0xf];
          auVar90[3] = 0;
          auVar90._0_3_ = auVar84._8_3_;
          auVar90._4_3_ = auVar85._12_3_;
          auVar90[7] = 0;
          auVar90[0xb] = 0;
          auVar90._12_3_ = (int3)(CONCAT16(auVar86[0xb],(uint6)auVar86[10] << 0x20) >> 0x20);
          auVar90[0xf] = 0;
          auVar86 = pshuflw(auVar90,auVar90,0x1b);
          auVar86 = pshufhw(auVar86,auVar86,0x1b);
          sVar9 = auVar86._0_2_;
          sVar10 = auVar86._2_2_;
          sVar11 = auVar86._4_2_;
          sVar12 = auVar86._6_2_;
          sVar13 = auVar86._8_2_;
          sVar14 = auVar86._10_2_;
          sVar15 = auVar86._12_2_;
          sVar16 = auVar86._14_2_;
          bVar25 = (char)((0 < sVar9) * (sVar9 < 0x100) * auVar86[0] - (0xff < sVar9)) == in_XMM1_Ba
          ;
          bVar74 = (char)((0 < sVar11) * (sVar11 < 0x100) * auVar86[4] - (0xff < sVar11)) ==
                   in_XMM1_Bc;
          bVar26 = (char)((0 < sVar13) * (sVar13 < 0x100) * auVar86[8] - (0xff < sVar13)) ==
                   in_XMM1_Be;
          bVar27 = (char)((0 < sVar15) * (sVar15 < 0x100) * auVar86[0xc] - (0xff < sVar15)) ==
                   in_XMM1_Bg;
          bVar28 = (char)((0 < sVar16) * (sVar16 < 0x100) * auVar86[0xe] - (0xff < sVar16)) !=
                   in_XMM1_Bh;
          if ((bool)(~bVar25 & 1)) {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -1) = 0;
          }
          if ((char)((0 < sVar10) * (sVar10 < 0x100) * auVar86[2] - (0xff < sVar10)) != in_XMM1_Bb)
          {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -2) = 0;
          }
          if (!bVar74) {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -3) = 0;
          }
          if ((char)((0 < sVar12) * (sVar12 < 0x100) * auVar86[6] - (0xff < sVar12)) != in_XMM1_Bd)
          {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -4) = 0;
          }
          if ((bool)(~bVar26 & 1)) {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -5) = 0;
          }
          if ((char)((0 < sVar14) * (sVar14 < 0x100) * auVar86[10] - (0xff < sVar14)) != in_XMM1_Bf)
          {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -6) = 0;
          }
          if ((bool)(~bVar27 & 1)) {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -7) = 0;
          }
          if (bVar28) {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -8) = 0;
          }
          if ((bool)(~bVar25 & 1)) {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -9) = 0;
          }
          *(undefined1 *)((longlong)puVar66 + lVar69 + -10) = 0;
          if ((bool)(~bVar74 & 1)) {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -0xb) = 0;
          }
          *(undefined1 *)((longlong)puVar66 + lVar69 + -0xc) = 0;
          if ((bool)(~bVar26 & 1)) {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -0xd) = 0;
          }
          *(undefined1 *)((longlong)puVar66 + lVar69 + -0xe) = 0;
          if ((bool)(~bVar27 & 1)) {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -0xf) = 0;
          }
          if (bVar28) {
            *(undefined1 *)((longlong)puVar66 + lVar69 + -0x10) = 0;
          }
          lVar68 = lVar68 + 0x10;
          uVar62 = uVar62 - 0x10;
        } while (uVar62 != 0);
        if (_Size == uVar61) goto LAB_140d67894;
        if ((_Size & 8) == 0) {
          uVar62 = (ulonglong)((uint)_Size & 0xf);
          goto LAB_140d67c0e;
        }
      }
      uVar62 = (ulonglong)((uint)_Size & 7);
      iVar30 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                      CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
      iVar31 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                      CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
      bVar75 = (byte)iVar31;
      bVar76 = (byte)((uint)iVar31 >> 8);
      cVar63 = (char)((uint)iVar31 >> 0x10);
      cVar77 = (char)((uint)iVar31 >> 0x18);
      iVar32 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                      CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
      cVar78 = (char)((uint)iVar32 >> 8);
      cVar79 = (char)((uint)iVar32 >> 0x10);
      cVar80 = (char)((uint)iVar32 >> 0x18);
      iVar33 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                      CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
      cVar81 = (char)((uint)iVar33 >> 8);
      cVar82 = (char)((uint)iVar33 >> 0x10);
      cVar83 = (char)((uint)iVar33 >> 0x18);
      do {
        lVar68 = _Size - uVar61;
        uVar1 = *(ulonglong *)((longlong)puVar66 + lVar68 + -8);
        auVar34._8_6_ = 0;
        auVar34._0_8_ = uVar1;
        auVar34[0xe] = (char)(uVar1 >> 0x38);
        auVar36._8_4_ = 0;
        auVar36._0_8_ = uVar1;
        auVar36[0xc] = (char)(uVar1 >> 0x30);
        auVar36._13_2_ = auVar34._13_2_;
        auVar38._8_4_ = 0;
        auVar38._0_8_ = uVar1;
        auVar38._12_3_ = auVar36._12_3_;
        auVar40._8_2_ = 0;
        auVar40._0_8_ = uVar1;
        auVar40[10] = (char)(uVar1 >> 0x28);
        auVar40._11_4_ = auVar38._11_4_;
        auVar42._8_2_ = 0;
        auVar42._0_8_ = uVar1;
        auVar42._10_5_ = auVar40._10_5_;
        auVar44[8] = (char)(uVar1 >> 0x20);
        auVar44._0_8_ = uVar1;
        auVar44._9_6_ = auVar42._9_6_;
        auVar86[7] = 0;
        auVar86._0_7_ = auVar44._8_7_;
        auVar50._7_8_ = 0;
        auVar50._0_7_ = auVar44._8_7_;
        auVar54._1_8_ = SUB158(auVar50 << 0x40,7);
        auVar54[0] = (char)(uVar1 >> 0x18);
        auVar54._9_6_ = 0;
        auVar51._1_10_ = SUB1510(auVar54 << 0x30,5);
        auVar51[0] = (char)(uVar1 >> 0x10);
        auVar55._11_4_ = 0;
        auVar55._0_11_ = auVar51;
        auVar46[2] = (char)(uVar1 >> 8);
        auVar46._0_2_ = (ushort)uVar1;
        auVar46._3_12_ = SUB1512(auVar55 << 0x20,3);
        auVar48._2_13_ = auVar46._2_13_;
        auVar48._0_2_ = (ushort)uVar1 & 0xff;
        auVar86._8_4_ = auVar48._0_4_;
        auVar86._12_4_ = auVar51._0_4_;
        auVar86 = pshuflw(auVar86,auVar86,0x1b);
        auVar86 = pshufhw(auVar86,auVar86,0x1b);
        sVar9 = auVar86._0_2_;
        cVar17 = (0 < sVar9) * (sVar9 < 0x100) * auVar86[0] - (0xff < sVar9);
        sVar10 = auVar86._2_2_;
        cVar18 = (0 < sVar10) * (sVar10 < 0x100) * auVar86[2] - (0xff < sVar10);
        auVar87[1] = cVar18;
        auVar87[0] = cVar17;
        sVar11 = auVar86._4_2_;
        bVar19 = (0 < sVar11) * (sVar11 < 0x100) * auVar86[4] - (0xff < sVar11);
        auVar87[2] = bVar19;
        sVar12 = auVar86._6_2_;
        cVar20 = (0 < sVar12) * (sVar12 < 0x100) * auVar86[6] - (0xff < sVar12);
        auVar87[3] = cVar20;
        sVar13 = auVar86._8_2_;
        cVar21 = (0 < sVar13) * (sVar13 < 0x100) * auVar86[8] - (0xff < sVar13);
        auVar87[4] = cVar21;
        sVar14 = auVar86._10_2_;
        cVar22 = (0 < sVar14) * (sVar14 < 0x100) * auVar86[10] - (0xff < sVar14);
        auVar87[5] = cVar22;
        sVar15 = auVar86._12_2_;
        cVar23 = (0 < sVar15) * (sVar15 < 0x100) * auVar86[0xc] - (0xff < sVar15);
        auVar87[6] = cVar23;
        sVar16 = auVar86._14_2_;
        cVar24 = (0 < sVar16) * (sVar16 < 0x100) * auVar86[0xe] - (0xff < sVar16);
        auVar87[7] = cVar24;
        auVar87[8] = (0 < sVar9) * (sVar9 < 0x100) * auVar86[0] - (0xff < sVar9);
        auVar87[9] = (0 < sVar10) * (sVar10 < 0x100) * auVar86[2] - (0xff < sVar10);
        auVar87[10] = (0 < sVar11) * (sVar11 < 0x100) * auVar86[4] - (0xff < sVar11);
        auVar87[0xb] = (0 < sVar12) * (sVar12 < 0x100) * auVar86[6] - (0xff < sVar12);
        auVar87[0xc] = (0 < sVar13) * (sVar13 < 0x100) * auVar86[8] - (0xff < sVar13);
        auVar87[0xd] = (0 < sVar14) * (sVar14 < 0x100) * auVar86[10] - (0xff < sVar14);
        auVar87[0xe] = (0 < sVar15) * (sVar15 < 0x100) * auVar86[0xc] - (0xff < sVar15);
        auVar87[0xf] = (0 < sVar16) * (sVar16 < 0x100) * auVar86[0xe] - (0xff < sVar16);
        if ((bool)(~(cVar17 == (char)iVar30) & 1)) {
          *(undefined1 *)((longlong)puVar66 + lVar68 + -1) = 0;
        }
        auVar88[0] = -(cVar17 == (char)iVar30);
        auVar88[1] = -(cVar17 == (char)((uint)iVar30 >> 8));
        auVar88[2] = -(cVar18 == (char)((uint)iVar30 >> 0x10));
        auVar88[3] = -(cVar18 == (char)((uint)iVar30 >> 0x18));
        auVar88[4] = -(bVar19 == bVar75);
        auVar88[5] = -(bVar19 == bVar76);
        auVar88[6] = -(cVar20 == cVar63);
        auVar88[7] = -(cVar20 == cVar77);
        auVar88[8] = -(cVar21 == (char)iVar32);
        auVar88[9] = -(cVar21 == cVar78);
        auVar88[10] = -(cVar22 == cVar79);
        auVar88[0xb] = -(cVar22 == cVar80);
        auVar88[0xc] = -(cVar23 == (char)iVar33);
        auVar88[0xd] = -(cVar23 == cVar81);
        auVar88[0xe] = -(cVar24 == cVar82);
        auVar88[0xf] = -(cVar24 == cVar83);
        auVar29[4] = bVar75;
        auVar29._0_4_ = iVar30;
        auVar29[5] = bVar76;
        auVar29[6] = cVar63;
        auVar29[7] = cVar77;
        auVar29[8] = (char)iVar32;
        auVar29[9] = cVar78;
        auVar29[10] = cVar79;
        auVar29[0xb] = cVar80;
        auVar29[0xc] = (char)iVar33;
        auVar29[0xd] = cVar81;
        auVar29[0xe] = cVar82;
        auVar29[0xf] = cVar83;
        if ((SUB164(auVar88 ^ auVar29,0) >> 0x10 & 1) != 0) {
          *(undefined1 *)((longlong)puVar66 + lVar68 + -2) = 0;
        }
        auVar86 = pshuflw(auVar88 ^ auVar29,auVar87,0x55);
        if (((-(auVar86[4] == bVar75) ^ bVar75) & 1) != 0) {
          *(undefined1 *)((longlong)puVar66 + lVar68 + -3) = 0;
        }
        if ((((ushort)(byte)-(cVar20 == cVar63) ^ (ushort)((uint)iVar31 >> 0x10)) & 1) != 0) {
          *(undefined1 *)((longlong)puVar66 + lVar68 + -4) = 0;
        }
        uVar61 = uVar61 + 8;
      } while ((_Size & 0xfffffffffffffff8) != uVar61);
      if (_Size == (_Size & 0xfffffffffffffff8)) goto LAB_140d67894;
    }
LAB_140d67c0e:
    lVar68 = uVar65 * 4 + 0x2b;
    do {
      if (*(char *)((longlong)param_1->alloc_bits + uVar62 + lVar68 + -0x2c) != -1) {
        *(undefined1 *)((longlong)param_1->alloc_bits + uVar62 + lVar68 + -0x2c) = 0;
      }
      uVar62 = uVar62 - 1;
    } while (uVar62 != 0);
  }
  else {
    _Size = uVar72 / uVar3;
    if (param_3) goto LAB_140d676e5;
LAB_140d6787d:
    memset(puVar67 + uVar65,0,_Size);
  }
LAB_140d67894:
  puVar67 = puVar67 + uVar65;
  if (bVar58) {
    uVar70 = uVar7;
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    uVar65 = uVar6 - 1;
    if ((uVar65 | uVar3) >> 0x20 == 0) {
      uVar65 = (uVar65 & 0xffffffff) / (uVar3 & 0xffffffff);
    }
    else {
      uVar65 = uVar65 / uVar3;
    }
    if (_Size <= uVar65) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar62 = 0;
    do {
      if (*(char *)((longlong)puVar67 + uVar62) == -1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      cVar63 = *(char *)((longlong)puVar67 + uVar62) + '\x01';
      if (cVar63 == -1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      *(char *)((longlong)puVar67 + uVar62) = cVar63;
      uVar62 = uVar62 + 1;
    } while (uVar62 <= uVar65);
  }
  uVar65 = uVar6 + uVar70;
  if (uVar65 != uVar72) {
    uVar72 = uVar72 - 1;
    if ((uVar72 | uVar3) >> 0x20 == 0) {
      uVar72 = (uVar72 & 0xffffffff) / (uVar3 & 0xffffffff);
    }
    else {
      uVar72 = uVar72 / uVar3;
    }
    if (_Size <= uVar72) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if ((uVar65 | uVar3) >> 0x20 == 0) {
      uVar65 = (uVar65 & 0xffffffff) / (uVar3 & 0xffffffff);
    }
    else {
      uVar65 = uVar65 / uVar3;
    }
    for (; uVar65 <= uVar72; uVar65 = uVar65 + 1) {
      if (*(char *)((longlong)puVar67 + uVar65) == -1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      cVar63 = *(char *)((longlong)puVar67 + uVar65) + '\x01';
      if (cVar63 == -1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      *(char *)((longlong)puVar67 + uVar65) = cVar63;
    }
  }
LAB_140d67983:
  param_1->eligibility_notification_has_been_deferred = false;
  return;
}

// pas_segregated_page_note_emptiness_impl @ 140d67c60

void __cdecl
pas_segregated_page_note_emptiness_impl(pas_segregated_page *param_1,<unnamed_tag_00B5EEE2> param_2)

{
  ulong64 uVar1;
  bool bVar2;
  
  if (param_2 == pas_note_emptiness_keep_num_non_empty_words) {
    uVar1 = pas_get_epoch();
    (param_1->emptiness).use_epoch = uVar1;
  }
  else if (param_2 == pas_note_emptiness_clear_num_non_empty_words) {
    uVar1 = pas_get_epoch();
    do {
      LOCK();
      bVar2 = param_1->emptiness == param_1->emptiness;
      if (bVar2) {
        (param_1->emptiness).use_epoch = uVar1;
        (param_1->emptiness).num_non_empty_words_or_live_bytes = 0;
      }
      UNLOCK();
    } while (!bVar2);
  }
  pas_segregated_view_note_emptiness(param_1->owner,param_1);
  return;
}

// pas_segregated_page_take_empty_granules @ 140d67cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_segregated_page_take_empty_granules
          (pas_segregated_page *param_1,pas_deferred_decommit_log *param_2,pas_lock **param_3,
          pas_range_locked_mode param_4,pas_lock_hold_mode param_5)

{
  char cVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  _func___cdecl_void_ptr_pas_page_base_ptr *p_Var4;
  ulong64 uVar5;
  PSRWLOCK SRWLock;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  pas_segregated_page_config *ppVar9;
  ulonglong uVar10;
  pas_lock *ppVar11;
  uint *puVar12;
  undefined1 auStackY_108 [32];
  pas_free_granules local_d0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar2 = (param_1->emptiness).num_non_empty_words_or_live_bytes;
  ppVar9 = pas_segregated_view_get_page_config(param_1->owner);
  uVar10 = (ppVar9->base).page_size;
  uVar3 = (ppVar9->base).granule_size;
  if (uVar10 <= uVar3) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  p_Var4 = (ppVar9->base).boundary_for_page_header;
  uVar5 = ppVar9->num_alloc_bits;
  if ((uVar10 | uVar3) >> 0x20 == 0) {
    uVar10 = (uVar10 & 0xffffffff) / (uVar3 & 0xffffffff);
  }
  else {
    uVar10 = uVar10 / uVar3;
  }
  if (uVar10 < 2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (0x400 < uVar10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (ppVar9->kind == pas_segregated_page_config_kind_pas_utility_small) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (((ppVar9->base).is_enabled & 1U) == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (*param_3 == param_1->lock_ptr) {
    cVar1 = param_1->is_committing_fully;
  }
  else {
    ppVar11 = pas_segregated_page_switch_lock_slow(param_1,*param_3,param_1->lock_ptr);
    *param_3 = ppVar11;
    cVar1 = param_1->is_committing_fully;
  }
  if (cVar1 == '\x01') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  puVar12 = param_1->alloc_bits + (uVar5 + 0x1f >> 5);
  if (uVar2 == 0) {
    pas_free_granules_compute_not_decommitted(&local_d0,(uchar *)puVar12,&ppVar9->base);
    SRWLock = (PSRWLOCK)*param_3;
  }
  else {
    pas_free_granules_compute_and_mark_decommitted(&local_d0,(uchar *)puVar12,&ppVar9->base);
    SRWLock = (PSRWLOCK)*param_3;
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
    *param_3 = (pas_lock *)0x0;
  }
  if (local_d0.num_free_granules == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  (*p_Var4)(&param_1->base);
  if (param_4 == pas_range_is_not_locked) {
    ppVar11 = pas_segregated_view_get_commit_lock(param_1->owner);
    bVar7 = pas_deferred_decommit_log_lock_for_adding(param_2,ppVar11,param_5);
    if (!bVar7) {
      if (*param_3 == param_1->lock_ptr) {
        cVar1 = param_1->is_committing_fully;
      }
      else {
        ppVar11 = pas_segregated_page_switch_lock_slow(param_1,*param_3,param_1->lock_ptr);
        *param_3 = ppVar11;
        cVar1 = param_1->is_committing_fully;
      }
      if (cVar1 == '\x01') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if (uVar2 != 0) {
        pas_free_granules_unmark_decommitted(&local_d0,(uchar *)puVar12,&ppVar9->base);
      }
      if ((local_48 ^ (ulonglong)auStackY_108) == __security_cookie.value) {
        return false;
      }
      goto LAB_140d67ed3;
    }
  }
  ppVar11 = pas_segregated_view_get_commit_lock(param_1->owner);
  pas_free_granules_decommit_after_locking_range
            (&local_d0,&param_1->base,param_2,ppVar11,&ppVar9->base,param_5);
  if ((local_48 ^ (ulonglong)auStackY_108) == __security_cookie.value) {
    return true;
  }
LAB_140d67ed3:
  pcVar6 = (code *)swi(3);
  uVar8 = (*pcVar6)();
  return (bool)uVar8;
}

// pas_segregated_page_take_physically @ 140d67f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_segregated_page_take_physically
          (pas_segregated_page *param_1,pas_deferred_decommit_log *param_2,
          pas_range_locked_mode param_3,pas_lock_hold_mode param_4)

{
  pas_mmap_capability pVar1;
  ulonglong uVar2;
  pas_heap_config *ppVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  pas_segregated_page_config *ppVar7;
  PSRWLOCK pRVar8;
  undefined1 auStackY_98 [32];
  pas_virtual_range local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  ppVar7 = pas_segregated_view_get_page_config(param_1->owner);
  if (ppVar7->kind == pas_segregated_page_config_kind_pas_utility_small) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar2 = (ppVar7->base).page_size;
  if ((ppVar7->base).granule_size < uVar2) {
    local_68.begin = 0;
    bVar5 = pas_segregated_page_take_empty_granules
                      (param_1,param_2,(pas_lock **)&local_68,param_3,param_4);
    if ((PSRWLOCK)local_68.begin != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)local_68.begin);
    }
  }
  else {
    if ((param_1->emptiness).num_non_empty_words_or_live_bytes != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    ppVar3 = (ppVar7->base).heap_config_ptr;
    pRVar8 = (*(ppVar7->base).boundary_for_page_header)(&param_1->base);
    pVar1 = ppVar3->mmap_capability;
    local_68.lock_ptr = pas_segregated_view_get_commit_lock(param_1->owner);
    local_68.end = (longlong)&pRVar8->Ptr + uVar2;
    local_68.begin = (ulong64)pRVar8;
    local_68.mmap_capability = pVar1;
    bVar5 = pas_deferred_decommit_log_add_maybe_locked(param_2,&local_68,param_3,param_4);
  }
  if ((local_48 ^ (ulonglong)auStackY_98) == __security_cookie.value) {
    return bVar5;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// pas_segregated_page_commit_fully @ 140d68020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
pas_segregated_page_commit_fully
          (pas_segregated_page *param_1,pas_lock **param_2,<unnamed_tag_00B5EF09> param_3)

{
  char cVar1;
  undefined2 uVar2;
  pas_segregated_page_config_kind pVar3;
  pas_heap_config *ppVar4;
  ulonglong uVar5;
  uint *puVar6;
  _func___cdecl_void_ptr_pas_page_base_ptr *p_Var7;
  code *pcVar8;
  BOOLEAN BVar9;
  pas_segregated_page_config *ppVar10;
  PSRWLOCK SRWLock;
  ulonglong uVar11;
  ulonglong uVar12;
  void *pvVar13;
  longlong lVar14;
  pas_lock *ppVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulong64 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 uVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStackY_d8 [32];
  PSRWLOCK local_70;
  pas_commit_span local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  ppVar10 = pas_segregated_view_get_page_config(param_1->owner);
  uVar17 = *(ulonglong *)&ppVar10->base;
  ppVar4 = (ppVar10->base).heap_config_ptr;
  uVar16 = (ppVar10->base).page_size;
  uVar5 = (ppVar10->base).granule_size;
  puVar6 = (ppVar10->base).non_committable_granule_bitvector;
  p_Var7 = (ppVar10->base).boundary_for_page_header;
  pVar3 = ppVar10->kind;
  uVar22 = ppVar10->num_alloc_bits;
  if ((PSRWLOCK)param_1->lock_ptr == (PSRWLOCK)0x0) {
    if (*param_2 != (pas_lock *)0x0) goto LAB_140d6814f;
  }
  else {
    BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)param_1->lock_ptr);
    if (BVar9 != '\0') {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (*param_2 != param_1->lock_ptr) {
LAB_140d6814f:
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
  }
  if (param_1->is_committing_fully == true) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  if (param_3 == pas_commit_fully_holding_page_and_commit_locks) {
    SRWLock = (PSRWLOCK)pas_segregated_view_get_commit_lock(param_1->owner);
    BVar9 = TryAcquireSRWLockExclusive(SRWLock);
    if (BVar9 != '\0') {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
  }
  if (uVar16 <= uVar5) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  if (pVar3 == pas_segregated_page_config_kind_pas_utility_small) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  uVar23 = uVar22 + 0x1f >> 5;
  if ((uVar16 | uVar5) >> 0x20 == 0) {
    uVar11 = (uVar16 & 0xffffffff) / (uVar5 & 0xffffffff);
    puVar18 = param_1->alloc_bits + uVar23;
    uVar12 = uVar11;
    if (uVar11 < 4) goto LAB_140d68135;
LAB_140d68168:
    uVar12 = (ulonglong)((uint)uVar11 & 3);
    lVar19 = 0;
    lVar14 = 0;
    uVar20 = 0;
    lVar24 = 0;
    lVar25 = 0;
    uVar21 = uVar11 & 0xfffffffffffffffc;
    do {
      uVar2 = *(undefined2 *)((longlong)puVar18 + ~uVar20 + (uVar11 - 1));
      uVar29 = (undefined1)((ushort)uVar2 >> 8);
      auVar26 = ZEXT416(CONCAT22((short)(CONCAT13(uVar29,CONCAT12(uVar29,uVar2)) >> 0x10),
                                 CONCAT11((char)uVar2,(char)uVar2)));
      uVar2 = *(undefined2 *)((longlong)puVar18 + ~uVar20 + (uVar11 - 3));
      uVar29 = (undefined1)((ushort)uVar2 >> 8);
      auVar26 = pshuflw(auVar26,auVar26,0xc5);
      auVar27[0] = -(auVar26[0] == -1);
      auVar27[1] = -(auVar26[1] == -1);
      auVar27[2] = -(auVar26[2] == -1);
      auVar27[3] = -(auVar26[3] == -1);
      auVar27[4] = -(auVar26[4] == -1);
      auVar27[5] = -(auVar26[5] == -1);
      auVar27[6] = -(auVar26[6] == -1);
      auVar27[7] = -(auVar26[7] == -1);
      auVar27[8] = -(auVar26[4] == -1);
      auVar27[9] = -(auVar26[5] == -1);
      auVar27[10] = -(auVar26[6] == -1);
      auVar27[0xb] = -(auVar26[7] == -1);
      auVar27[0xc] = -(auVar26[0xc] == -1);
      auVar27[0xd] = -(auVar26[0xd] == -1);
      auVar27[0xe] = -(auVar26[0xe] == -1);
      auVar27[0xf] = -(auVar26[0xf] == -1);
      auVar27 = auVar27 & ___xmm_00000000000000010000000000000001;
      lVar19 = lVar19 + auVar27._0_8_;
      lVar14 = lVar14 + auVar27._8_8_;
      auVar26 = pshuflw(auVar27,ZEXT416(CONCAT22((short)(CONCAT13(uVar29,CONCAT12(uVar29,uVar2)) >>
                                                        0x10),CONCAT11((char)uVar2,(char)uVar2))),
                        0xc5);
      auVar28[0] = -(auVar26[0] == -1);
      auVar28[1] = -(auVar26[1] == -1);
      auVar28[2] = -(auVar26[2] == -1);
      auVar28[3] = -(auVar26[3] == -1);
      auVar28[4] = -(auVar26[4] == -1);
      auVar28[5] = -(auVar26[5] == -1);
      auVar28[6] = -(auVar26[6] == -1);
      auVar28[7] = -(auVar26[7] == -1);
      auVar28[8] = -(auVar26[4] == -1);
      auVar28[9] = -(auVar26[5] == -1);
      auVar28[10] = -(auVar26[6] == -1);
      auVar28[0xb] = -(auVar26[7] == -1);
      auVar28[0xc] = -(auVar26[0xc] == -1);
      auVar28[0xd] = -(auVar26[0xd] == -1);
      auVar28[0xe] = -(auVar26[0xe] == -1);
      auVar28[0xf] = -(auVar26[0xf] == -1);
      lVar24 = lVar24 + SUB168(auVar28 & ___xmm_00000000000000010000000000000001,0);
      lVar25 = lVar25 + SUB168(auVar28 & ___xmm_00000000000000010000000000000001,8);
      uVar20 = uVar20 + 4;
      uVar21 = uVar21 - 4;
    } while (uVar21 != 0);
    lVar19 = lVar25 + lVar14 + lVar24 + lVar19;
    if (uVar11 == (uVar11 & 0xfffffffffffffffc)) goto LAB_140d68231;
  }
  else {
    uVar11 = uVar16 / uVar5;
    puVar18 = param_1->alloc_bits + uVar23;
    uVar12 = uVar11;
    if (3 < uVar11) goto LAB_140d68168;
LAB_140d68135:
    lVar19 = 0;
    uVar11 = uVar12;
  }
  do {
    lVar19 = lVar19 + (ulonglong)
                      (*(char *)((longlong)param_1->alloc_bits + uVar12 + uVar23 * 4 + -1) == -1);
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
LAB_140d68231:
  if (lVar19 != 0) {
    param_1->is_committing_fully = true;
    if ((PSRWLOCK)*param_2 != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)*param_2);
      *param_2 = (pas_lock *)0x0;
    }
    local_70 = (PSRWLOCK)pas_segregated_view_get_commit_lock(param_1->owner);
    pas_physical_page_sharing_pool_take_for_page_config
              (lVar19 * uVar5,&ppVar10->base,pas_lock_is_not_held,(pas_lock **)&local_70,
               (ulonglong)(param_3 == pas_commit_fully_holding_page_and_commit_locks));
    if (param_3 == pas_commit_fully_holding_page_lock) {
      AcquireSRWLockExclusive(local_70);
    }
    pas_commit_span_construct(&local_68,ppVar4->mmap_capability);
    if (uVar16 < uVar5) {
      uVar22 = 0;
    }
    else if (puVar6 == (uint *)0x0) {
      uVar22 = 0;
      do {
        while (*(char *)((longlong)puVar18 + uVar22) == -1) {
          pas_commit_span_add_to_change(&local_68,uVar22);
          uVar22 = uVar22 + 1;
          if (uVar11 <= uVar22) goto LAB_140d682c7;
        }
        pvVar13 = (*p_Var7)(&param_1->base);
        pas_commit_span_add_unchanged_and_commit(&local_68,pvVar13,uVar22,&ppVar10->base);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar11);
    }
    else {
      uVar22 = 0;
      do {
        while (((puVar6[uVar22 >> 5] >> ((uint)uVar22 & 0x1f) & 1) != 0 ||
               (*(char *)((longlong)puVar18 + uVar22) != -1))) {
          pvVar13 = (*p_Var7)(&param_1->base);
          pas_commit_span_add_unchanged_and_commit(&local_68,pvVar13,uVar22,&ppVar10->base);
          uVar22 = uVar22 + 1;
          if (uVar11 <= uVar22) goto LAB_140d682c7;
        }
        pas_commit_span_add_to_change(&local_68,uVar22);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar11);
    }
LAB_140d682c7:
    pvVar13 = (*p_Var7)(&param_1->base);
    pas_commit_span_add_unchanged_and_commit(&local_68,pvVar13,uVar22,&ppVar10->base);
    if (param_3 == pas_commit_fully_holding_page_lock) {
      ReleaseSRWLockExclusive(local_70);
    }
    if ((uVar17 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (*param_2 == param_1->lock_ptr) {
      cVar1 = param_1->is_committing_fully;
    }
    else {
      ppVar15 = pas_segregated_page_switch_lock_slow(param_1,*param_2,param_1->lock_ptr);
      *param_2 = ppVar15;
      cVar1 = param_1->is_committing_fully;
    }
    if (cVar1 == '\0') {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    param_1->is_committing_fully = false;
    if (uVar16 < uVar5) {
      lVar14 = 0;
    }
    else {
      if (uVar11 == 1) {
        lVar14 = 0;
        uVar17 = 1;
      }
      else {
        uVar16 = uVar11 & 0xfffffffffffffffe;
        lVar14 = 0;
        uVar17 = uVar11;
        do {
          if (*(char *)((longlong)puVar18 + (uVar17 - 1)) == -1) {
            lVar14 = lVar14 + 1;
            *(undefined1 *)((longlong)puVar18 + (uVar17 - 1)) = 0;
            cVar1 = *(char *)((longlong)puVar18 + (uVar17 - 2));
          }
          else {
            cVar1 = *(char *)((longlong)puVar18 + (uVar17 - 2));
          }
          if (cVar1 == -1) {
            lVar14 = lVar14 + 1;
            *(undefined1 *)((longlong)puVar18 + (uVar17 - 2)) = 0;
          }
          uVar17 = uVar17 - 2;
          uVar16 = uVar16 - 2;
        } while (uVar16 != 0);
      }
      if (((uVar11 & 1) != 0) && (*(char *)((longlong)puVar18 + (uVar17 - 1)) == -1)) {
        lVar14 = lVar14 + 1;
        *(undefined1 *)((longlong)puVar18 + (uVar17 - 1)) = 0;
      }
    }
    if (lVar19 != lVar14) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
  }
  if ((local_48 ^ (ulonglong)auStackY_d8) != __security_cookie.value) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  return;
}

// pas_segregated_page_verify_granules @ 140d684f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_segregated_page_verify_granules(pas_segregated_page *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  code *pcVar6;
  pas_segregated_page *ppVar7;
  pas_segregated_page_config *ppVar8;
  ulonglong _Size;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  ulong64 uVar12;
  byte bVar13;
  undefined1 auStack_4a8 [40];
  ulong64 local_480;
  _func___cdecl_void_ptr_pas_page_base_ptr *local_478;
  pas_segregated_page *local_470;
  char *local_468;
  void *local_460;
  ulonglong local_458;
  undefined8 local_450;
  char local_448 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  ppVar8 = pas_segregated_view_get_page_config(param_1->owner);
  bVar13 = (param_1->base).page_kind - 1;
  local_470 = param_1;
  if (3 < bVar13) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar1 = (ppVar8->base).page_size;
  uVar2 = (ppVar8->base).granule_size;
  local_478 = (ppVar8->base).boundary_for_page_header;
  local_480 = ppVar8->num_alloc_bits;
  uVar3 = ppVar8->shared_payload_offset;
  uVar4 = ppVar8->exclusive_payload_offset;
  uVar12 = ppVar8->shared_payload_size;
  uVar5 = ppVar8->exclusive_payload_size;
  if ((uVar1 | uVar2) >> 0x20 == 0) {
    _Size = (uVar1 & 0xffffffff) / (uVar2 & 0xffffffff);
  }
  else {
    _Size = uVar1 / uVar2;
  }
  if (0x400 < _Size) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  memset(local_448,0,_Size);
  ppVar7 = local_470;
  if ((bVar13 & 1) != 0) {
    uVar12 = uVar5;
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    uVar9 = uVar3 - 1;
    if ((uVar9 | uVar2) >> 0x20 == 0) {
      uVar9 = (uVar9 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar9 = uVar9 / uVar2;
    }
    if (_Size <= uVar9) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar10 = 0;
    do {
      if (local_448[uVar10] == -1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      cVar11 = local_448[uVar10] + '\x01';
      if (cVar11 == -1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      local_448[uVar10] = cVar11;
      uVar10 = uVar10 + 1;
    } while (uVar10 <= uVar9);
  }
  uVar9 = uVar3 + uVar12;
  local_468 = local_448;
  local_460 = (*local_478)(&local_470->base);
  local_458 = uVar1;
  local_450 = uVar2;
  pas_segregated_view_for_each_live_object
            (ppVar7->owner,verify_granules_live_object_callback,&local_468,pas_lock_is_held);
  if (uVar9 != uVar1) {
    uVar10 = uVar1 - 1;
    if ((uVar10 | uVar2) >> 0x20 == 0) {
      uVar10 = (uVar10 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar10 = uVar10 / uVar2;
    }
    if (_Size <= uVar10) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if ((uVar9 | uVar2) >> 0x20 == 0) {
      uVar9 = (uVar9 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar9 = uVar9 / uVar2;
    }
    for (; uVar9 <= uVar10; uVar9 = uVar9 + 1) {
      if (local_448[uVar9] == -1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      cVar11 = local_448[uVar9] + '\x01';
      if (cVar11 == -1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      local_448[uVar9] = cVar11;
    }
  }
  if (uVar1 <= uVar2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  do {
    cVar11 = *(char *)((longlong)ppVar7->alloc_bits + _Size + (local_480 + 0x1f >> 5) * 4 + -1);
    if (local_448[_Size - 1] == '\0') {
      if ((cVar11 != '\0') && (cVar11 != -1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
    }
    else if (cVar11 != local_448[_Size - 1]) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    _Size = _Size - 1;
    if (_Size == 0) {
      if ((local_48 ^ (ulonglong)auStack_4a8) == __security_cookie.value) {
        return;
      }
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  } while( true );
}

// verify_granules_live_object_callback @ 140d68790

bool __cdecl
verify_granules_live_object_callback
          (pas_segregated_view_opaque *param_1,pas_range *param_2,void *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  
  if (param_2->begin == param_2->end) {
    return true;
  }
  lVar1 = *(longlong *)param_3;
  uVar5 = *(ulonglong *)((longlong)param_3 + 0x10);
  uVar2 = *(ulonglong *)((longlong)param_3 + 0x18);
  uVar4 = param_2->end + ~*(ulonglong *)((longlong)param_3 + 8);
  if ((uVar4 | uVar2) >> 0x20 == 0) {
    uVar4 = (uVar4 & 0xffffffff) / (uVar2 & 0xffffffff);
  }
  else {
    uVar4 = uVar4 / uVar2;
  }
  if ((uVar5 | uVar2) >> 0x20 == 0) {
    uVar5 = (uVar5 & 0xffffffff) / (uVar2 & 0xffffffff);
  }
  else {
    uVar5 = uVar5 / uVar2;
  }
  if (uVar4 < uVar5) {
    uVar5 = param_2->begin - *(ulonglong *)((longlong)param_3 + 8);
    if ((uVar5 | uVar2) >> 0x20 == 0) {
      uVar5 = (uVar5 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar5 = uVar5 / uVar2;
    }
    while( true ) {
      if (uVar4 < uVar5) {
        return true;
      }
      cVar6 = *(char *)(lVar1 + uVar5);
      if (cVar6 == -1) break;
      cVar6 = cVar6 + '\x01';
      if (cVar6 == -1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *(char *)(lVar1 + uVar5) = cVar6;
      uVar5 = uVar5 + 1;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

// pas_segregated_page_deallocation_did_fail @ 140d68860

void __cdecl pas_segregated_page_deallocation_did_fail(ulong64 param_1)

{
                    /* WARNING: Subroutine does not return */
  pas_deallocation_did_fail("Alloc bit not set in pas_segregated_page_deallocate_with_page",param_1)
  ;
}

// pas_segregated_page_get_num_empty_granules @ 140d68880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl pas_segregated_page_get_num_empty_granules(pas_segregated_page *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  pas_segregated_page_config *ppVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  ppVar3 = pas_segregated_view_get_page_config(param_1->owner);
  uVar4 = (ppVar3->base).page_size;
  uVar6 = (ppVar3->base).granule_size;
  if (uVar4 <= uVar6) {
    return 0;
  }
  uVar7 = ppVar3->num_alloc_bits + 0x1f;
  if ((uVar4 | uVar6) >> 0x20 == 0) {
    uVar4 = (uVar4 & 0xffffffff) / (uVar6 & 0xffffffff);
  }
  else {
    uVar4 = uVar4 / uVar6;
  }
  if (uVar4 < 4) {
    uVar5 = 0;
    uVar6 = uVar4;
  }
  else {
    uVar6 = (ulonglong)((uint)uVar4 & 3);
    lVar2 = uVar4 + (uVar7 >> 5) * 4 + 0x2c;
    uVar8 = 0;
    lVar12 = 0;
    lVar13 = 0;
    lVar10 = 0;
    lVar11 = 0;
    uVar9 = uVar4 & 0xfffffffffffffffc;
    do {
      uVar1 = *(undefined2 *)((longlong)param_1->alloc_bits + ~uVar8 + lVar2 + -0x2d);
      uVar17 = (undefined1)((ushort)uVar1 >> 8);
      auVar14 = ZEXT416(CONCAT22((short)(CONCAT13(uVar17,CONCAT12(uVar17,uVar1)) >> 0x10),
                                 CONCAT11((char)uVar1,(char)uVar1)));
      uVar1 = *(undefined2 *)((longlong)param_1->alloc_bits + ~uVar8 + lVar2 + -0x2f);
      uVar17 = (undefined1)((ushort)uVar1 >> 8);
      auVar14 = pshuflw(auVar14,auVar14,0xc5);
      auVar15[0] = -(auVar14[0] == '\0');
      auVar15[1] = -(auVar14[1] == '\0');
      auVar15[2] = -(auVar14[2] == '\0');
      auVar15[3] = -(auVar14[3] == '\0');
      auVar15[4] = -(auVar14[4] == '\0');
      auVar15[5] = -(auVar14[5] == '\0');
      auVar15[6] = -(auVar14[6] == '\0');
      auVar15[7] = -(auVar14[7] == '\0');
      auVar15[8] = -(auVar14[4] == '\0');
      auVar15[9] = -(auVar14[5] == '\0');
      auVar15[10] = -(auVar14[6] == '\0');
      auVar15[0xb] = -(auVar14[7] == '\0');
      auVar15[0xc] = -(auVar14[0xc] == '\0');
      auVar15[0xd] = -(auVar14[0xd] == '\0');
      auVar15[0xe] = -(auVar14[0xe] == '\0');
      auVar15[0xf] = -(auVar14[0xf] == '\0');
      auVar15 = auVar15 & ___xmm_00000000000000010000000000000001;
      lVar12 = lVar12 + auVar15._0_8_;
      lVar13 = lVar13 + auVar15._8_8_;
      auVar14 = pshuflw(auVar15,ZEXT416(CONCAT22((short)(CONCAT13(uVar17,CONCAT12(uVar17,uVar1)) >>
                                                        0x10),CONCAT11((char)uVar1,(char)uVar1))),
                        0xc5);
      auVar16[0] = -(auVar14[0] == '\0');
      auVar16[1] = -(auVar14[1] == '\0');
      auVar16[2] = -(auVar14[2] == '\0');
      auVar16[3] = -(auVar14[3] == '\0');
      auVar16[4] = -(auVar14[4] == '\0');
      auVar16[5] = -(auVar14[5] == '\0');
      auVar16[6] = -(auVar14[6] == '\0');
      auVar16[7] = -(auVar14[7] == '\0');
      auVar16[8] = -(auVar14[4] == '\0');
      auVar16[9] = -(auVar14[5] == '\0');
      auVar16[10] = -(auVar14[6] == '\0');
      auVar16[0xb] = -(auVar14[7] == '\0');
      auVar16[0xc] = -(auVar14[0xc] == '\0');
      auVar16[0xd] = -(auVar14[0xd] == '\0');
      auVar16[0xe] = -(auVar14[0xe] == '\0');
      auVar16[0xf] = -(auVar14[0xf] == '\0');
      lVar10 = lVar10 + SUB168(auVar16 & ___xmm_00000000000000010000000000000001,0);
      lVar11 = lVar11 + SUB168(auVar16 & ___xmm_00000000000000010000000000000001,8);
      uVar8 = uVar8 + 4;
      uVar9 = uVar9 - 4;
    } while (uVar9 != 0);
    uVar5 = lVar11 + lVar13 + lVar10 + lVar12;
    if (uVar4 == (uVar4 & 0xfffffffffffffffc)) {
      return uVar5;
    }
  }
  do {
    uVar5 = uVar5 + (*(char *)((longlong)param_1->alloc_bits + uVar6 + (uVar7 >> 5) * 4 + -1) ==
                    '\0');
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  return uVar5;
}

// pas_segregated_page_get_num_committed_granules @ 140d689c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl pas_segregated_page_get_num_committed_granules(pas_segregated_page *param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  pas_segregated_page_config *ppVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 in_XMM2_Ba;
  undefined1 in_XMM2_Bb;
  char cVar17;
  undefined1 in_XMM2_Bc;
  char cVar18;
  undefined1 in_XMM2_Bd;
  char cVar19;
  undefined1 in_XMM2_Be;
  char cVar20;
  undefined1 in_XMM2_Bf;
  char cVar21;
  undefined1 in_XMM2_Bg;
  char cVar22;
  undefined1 in_XMM2_Bh;
  char cVar23;
  undefined1 in_XMM2_Bi;
  char cVar24;
  undefined1 in_XMM2_Bj;
  char cVar25;
  undefined1 in_XMM2_Bk;
  char cVar26;
  undefined1 in_XMM2_Bl;
  char cVar27;
  undefined1 in_XMM2_Bm;
  char cVar28;
  undefined1 in_XMM2_Bn;
  char cVar29;
  undefined1 in_XMM2_Bo;
  char cVar30;
  undefined1 in_XMM2_Bp;
  char cVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  ppVar6 = pas_segregated_view_get_page_config(param_1->owner);
  uVar7 = (ppVar6->base).page_size;
  uVar9 = (ppVar6->base).granule_size;
  if (uVar7 <= uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar10 = ppVar6->num_alloc_bits + 0x1f;
  if ((uVar7 | uVar9) >> 0x20 == 0) {
    uVar7 = (uVar7 & 0xffffffff) / (uVar9 & 0xffffffff);
  }
  else {
    uVar7 = uVar7 / uVar9;
  }
  if (uVar7 < 4) {
    uVar8 = 0;
    uVar9 = uVar7;
  }
  else {
    uVar9 = (ulonglong)((uint)uVar7 & 3);
    lVar5 = uVar7 + (uVar10 >> 5) * 4 + 0x2c;
    lVar13 = 0;
    lVar14 = 0;
    uVar11 = 0;
    iVar3 = -(uint)(CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba))) ==
                   CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba))));
    cVar17 = (char)((uint)iVar3 >> 8);
    cVar18 = (char)((uint)iVar3 >> 0x10);
    cVar19 = (char)((uint)iVar3 >> 0x18);
    iVar4 = -(uint)(CONCAT13(in_XMM2_Bh,CONCAT12(in_XMM2_Bg,CONCAT11(in_XMM2_Bf,in_XMM2_Be))) ==
                   CONCAT13(in_XMM2_Bh,CONCAT12(in_XMM2_Bg,CONCAT11(in_XMM2_Bf,in_XMM2_Be))));
    cVar20 = (char)iVar4;
    cVar21 = (char)((uint)iVar4 >> 8);
    cVar22 = (char)((uint)iVar4 >> 0x10);
    cVar23 = (char)((uint)iVar4 >> 0x18);
    iVar4 = -(uint)(CONCAT13(in_XMM2_Bl,CONCAT12(in_XMM2_Bk,CONCAT11(in_XMM2_Bj,in_XMM2_Bi))) ==
                   CONCAT13(in_XMM2_Bl,CONCAT12(in_XMM2_Bk,CONCAT11(in_XMM2_Bj,in_XMM2_Bi))));
    cVar24 = (char)iVar4;
    cVar25 = (char)((uint)iVar4 >> 8);
    cVar26 = (char)((uint)iVar4 >> 0x10);
    cVar27 = (char)((uint)iVar4 >> 0x18);
    iVar4 = -(uint)(CONCAT13(in_XMM2_Bp,CONCAT12(in_XMM2_Bo,CONCAT11(in_XMM2_Bn,in_XMM2_Bm))) ==
                   CONCAT13(in_XMM2_Bp,CONCAT12(in_XMM2_Bo,CONCAT11(in_XMM2_Bn,in_XMM2_Bm))));
    cVar28 = (char)iVar4;
    cVar29 = (char)((uint)iVar4 >> 8);
    cVar30 = (char)((uint)iVar4 >> 0x10);
    cVar31 = (char)((uint)iVar4 >> 0x18);
    lVar15 = 0;
    lVar16 = 0;
    uVar12 = uVar7 & 0xfffffffffffffffc;
    do {
      uVar1 = *(ushort *)((longlong)param_1->alloc_bits + ~uVar11 + lVar5 + -0x2d);
      auVar32 = psllw(ZEXT216(uVar1),8);
      auVar32 = auVar32 | ZEXT216(uVar1 >> 8);
      uVar1 = *(ushort *)((longlong)param_1->alloc_bits + ~uVar11 + lVar5 + -0x2f);
      auVar44 = psllw(ZEXT216(uVar1),8);
      auVar44 = auVar44 | ZEXT216(uVar1 >> 8);
      auVar33[0] = -(auVar32[0] == (char)iVar3);
      auVar33[1] = -(auVar32[1] == cVar17);
      auVar33[2] = -(auVar32[2] == cVar18);
      auVar33[3] = -(auVar32[3] == cVar19);
      auVar33[4] = -(auVar32[4] == cVar20);
      auVar33[5] = -(auVar32[5] == cVar21);
      auVar33[6] = -(auVar32[6] == cVar22);
      auVar33[7] = -(auVar32[7] == cVar23);
      auVar33[8] = -(auVar32[8] == cVar24);
      auVar33[9] = -(auVar32[9] == cVar25);
      auVar33[10] = -(auVar32[10] == cVar26);
      auVar33[0xb] = -(auVar32[0xb] == cVar27);
      auVar33[0xc] = -(auVar32[0xc] == cVar28);
      auVar33[0xd] = -(auVar32[0xd] == cVar29);
      auVar33[0xe] = -(auVar32[0xe] == cVar30);
      auVar33[0xf] = -(auVar32[0xf] == cVar31);
      auVar32[4] = cVar20;
      auVar32._0_4_ = iVar3;
      auVar32[5] = cVar21;
      auVar32[6] = cVar22;
      auVar32[7] = cVar23;
      auVar32[8] = cVar24;
      auVar32[9] = cVar25;
      auVar32[10] = cVar26;
      auVar32[0xb] = cVar27;
      auVar32[0xc] = cVar28;
      auVar32[0xd] = cVar29;
      auVar32[0xe] = cVar30;
      auVar32[0xf] = cVar31;
      auVar33 = auVar33 ^ auVar32;
      auVar41._0_14_ = auVar33._0_14_;
      auVar41[0xe] = auVar33[7];
      auVar41[0xf] = auVar33[7];
      auVar40._14_2_ = auVar41._14_2_;
      auVar40._0_13_ = auVar33._0_13_;
      auVar40[0xd] = auVar33[6];
      auVar39._13_3_ = auVar40._13_3_;
      auVar39._0_12_ = auVar33._0_12_;
      auVar39[0xc] = auVar33[6];
      auVar38._12_4_ = auVar39._12_4_;
      auVar38._0_11_ = auVar33._0_11_;
      auVar38[0xb] = auVar33[5];
      auVar37._11_5_ = auVar38._11_5_;
      auVar37._0_10_ = auVar33._0_10_;
      auVar37[10] = auVar33[5];
      auVar36._10_6_ = auVar37._10_6_;
      auVar36._0_9_ = auVar33._0_9_;
      auVar36[9] = auVar33[4];
      auVar35._9_7_ = auVar36._9_7_;
      auVar35._0_8_ = auVar33._0_8_;
      auVar35[8] = auVar33[4];
      auVar34._8_8_ = auVar35._8_8_;
      auVar34[7] = auVar33[3];
      auVar34[6] = auVar33[3];
      auVar34[5] = auVar33[2];
      auVar34[4] = auVar33[2];
      auVar34[3] = auVar33[1];
      auVar34[2] = auVar33[1];
      auVar34[0] = auVar33[0];
      auVar34[1] = auVar34[0];
      auVar32 = pshuflw(auVar34,auVar34,0xd4);
      auVar42._12_4_ = auVar32._12_4_;
      auVar42._0_8_ = auVar32._0_8_;
      auVar42._8_4_ = auVar32._4_4_;
      auVar42 = auVar42 & ___xmm_00000000000000010000000000000001;
      lVar13 = lVar13 + auVar42._0_8_;
      lVar14 = lVar14 + auVar42._8_8_;
      auVar45[0] = -(auVar44[0] == (char)iVar3);
      auVar45[1] = -(auVar44[1] == cVar17);
      auVar45[2] = -(auVar44[2] == cVar18);
      auVar45[3] = -(auVar44[3] == cVar19);
      auVar45[4] = -(auVar44[4] == cVar20);
      auVar45[5] = -(auVar44[5] == cVar21);
      auVar45[6] = -(auVar44[6] == cVar22);
      auVar45[7] = -(auVar44[7] == cVar23);
      auVar45[8] = -(auVar44[8] == cVar24);
      auVar45[9] = -(auVar44[9] == cVar25);
      auVar45[10] = -(auVar44[10] == cVar26);
      auVar45[0xb] = -(auVar44[0xb] == cVar27);
      auVar45[0xc] = -(auVar44[0xc] == cVar28);
      auVar45[0xd] = -(auVar44[0xd] == cVar29);
      auVar45[0xe] = -(auVar44[0xe] == cVar30);
      auVar45[0xf] = -(auVar44[0xf] == cVar31);
      auVar44[4] = cVar20;
      auVar44._0_4_ = iVar3;
      auVar44[5] = cVar21;
      auVar44[6] = cVar22;
      auVar44[7] = cVar23;
      auVar44[8] = cVar24;
      auVar44[9] = cVar25;
      auVar44[10] = cVar26;
      auVar44[0xb] = cVar27;
      auVar44[0xc] = cVar28;
      auVar44[0xd] = cVar29;
      auVar44[0xe] = cVar30;
      auVar44[0xf] = cVar31;
      auVar45 = auVar45 ^ auVar44;
      auVar53._0_14_ = auVar45._0_14_;
      auVar53[0xe] = auVar45[7];
      auVar53[0xf] = auVar45[7];
      auVar52._14_2_ = auVar53._14_2_;
      auVar52._0_13_ = auVar45._0_13_;
      auVar52[0xd] = auVar45[6];
      auVar51._13_3_ = auVar52._13_3_;
      auVar51._0_12_ = auVar45._0_12_;
      auVar51[0xc] = auVar45[6];
      auVar50._12_4_ = auVar51._12_4_;
      auVar50._0_11_ = auVar45._0_11_;
      auVar50[0xb] = auVar45[5];
      auVar49._11_5_ = auVar50._11_5_;
      auVar49._0_10_ = auVar45._0_10_;
      auVar49[10] = auVar45[5];
      auVar48._10_6_ = auVar49._10_6_;
      auVar48._0_9_ = auVar45._0_9_;
      auVar48[9] = auVar45[4];
      auVar47._9_7_ = auVar48._9_7_;
      auVar47._0_8_ = auVar45._0_8_;
      auVar47[8] = auVar45[4];
      auVar46._8_8_ = auVar47._8_8_;
      auVar46[7] = auVar45[3];
      auVar46[6] = auVar45[3];
      auVar46[5] = auVar45[2];
      auVar46[4] = auVar45[2];
      auVar46[3] = auVar45[1];
      auVar46[2] = auVar45[1];
      auVar46[0] = auVar45[0];
      auVar46[1] = auVar46[0];
      auVar32 = pshuflw(auVar42,auVar46,0xd4);
      auVar43._12_4_ = auVar32._12_4_;
      auVar43._0_8_ = auVar32._0_8_;
      auVar43._8_4_ = auVar32._4_4_;
      lVar15 = lVar15 + SUB168(auVar43 & ___xmm_00000000000000010000000000000001,0);
      lVar16 = lVar16 + SUB168(auVar43 & ___xmm_00000000000000010000000000000001,8);
      uVar11 = uVar11 + 4;
      uVar12 = uVar12 - 4;
    } while (uVar12 != 0);
    uVar8 = lVar16 + lVar14 + lVar15 + lVar13;
    if (uVar7 == (uVar7 & 0xfffffffffffffffc)) {
      return uVar8;
    }
  }
  do {
    uVar8 = uVar8 + (*(char *)((longlong)param_1->alloc_bits + uVar9 + (uVar10 >> 5) * 4 + -1) != -1
                    );
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  return uVar8;
}

// pas_segregated_page_get_config @ 140d68b40

pas_segregated_page_config * __cdecl pas_segregated_page_get_config(pas_segregated_page *param_1)

{
  pas_segregated_page_config *ppVar1;
  
  ppVar1 = pas_segregated_view_get_page_config(param_1->owner);
  return ppVar1;
}

// pas_segregated_page_add_commit_range @ 140d68b50

void __cdecl
pas_segregated_page_add_commit_range
          (pas_segregated_page *param_1,pas_heap_summary *param_2,pas_range *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  pas_segregated_page_config *ppVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (param_3->begin != param_3->end) {
    if (param_3->end <= param_3->begin) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    ppVar7 = pas_segregated_view_get_page_config(param_1->owner);
    uVar8 = (ppVar7->base).page_size;
    uVar9 = param_3->end;
    if (uVar8 < uVar9) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar2 = (ppVar7->base).granule_size;
    if (uVar8 == uVar2) {
      if (uVar9 < param_3->begin) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      param_2->committed = param_2->committed + (uVar9 - param_3->begin);
    }
    else {
      if (uVar8 <= uVar2) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar3 = ppVar7->num_alloc_bits;
      uVar8 = param_3->begin;
      if ((uVar8 | uVar2) >> 0x20 == 0) {
        uVar8 = (uVar8 & 0xffffffff) / (uVar2 & 0xffffffff);
      }
      else {
        uVar8 = uVar8 / uVar2;
      }
      uVar9 = uVar9 - 1;
      if ((uVar9 | uVar2) >> 0x20 == 0) {
        uVar9 = (uVar9 & 0xffffffff) / (uVar2 & 0xffffffff);
      }
      else {
        uVar9 = uVar9 / uVar2;
      }
      if (uVar8 <= uVar9) {
        do {
          uVar1 = uVar8 + 1;
          uVar10 = uVar1 * uVar2;
          uVar11 = uVar8 * uVar2;
          if (uVar10 < uVar11) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          uVar4 = param_3->begin;
          uVar5 = param_3->end;
          if (uVar5 < uVar4) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          if ((uVar10 - uVar11 == 0) || (uVar4 == uVar5)) {
LAB_140d68c92:
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          if ((uVar10 < uVar4 || uVar10 - uVar4 == 0) || (uVar5 <= uVar11)) goto LAB_140d68c92;
          if (uVar5 < uVar10) {
            uVar10 = uVar5;
          }
          if (uVar11 < uVar4) {
            uVar11 = uVar4;
          }
          if (uVar10 < uVar11) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          (&param_2->committed)
          [*(char *)((longlong)param_1->alloc_bits + uVar8 + (uVar3 + 0x1f >> 5) * 4) == -1] =
               (&param_2->committed)
               [*(char *)((longlong)param_1->alloc_bits + uVar8 + (uVar3 + 0x1f >> 5) * 4) == -1] +
               (uVar10 - uVar11);
          uVar8 = uVar1;
        } while (uVar1 <= uVar9);
      }
    }
  }
  return;
}

// pas_segregated_page_and_config_for_address_and_heap_config @ 140d68cb0

pas_segregated_page_and_config * __cdecl
pas_segregated_page_and_config_for_address_and_heap_config
          (pas_segregated_page_and_config *__return_storage_ptr__,ulong64 param_1,
          pas_heap_config *param_2)

{
  bool bVar1;
  bool bVar2;
  uchar uVar3;
  byte bVar4;
  ulonglong uVar5;
  _func___cdecl_pas_page_base_ptr_void_ptr *p_Var6;
  ulonglong uVar7;
  code *pcVar8;
  pas_fast_megapage_kind pVar9;
  pas_segregated_page *ppVar10;
  pas_segregated_page *ppVar11;
  pas_segregated_page_config *ppVar12;
  
  pVar9 = (*param_2->fast_megapage_kind_func)(param_1);
  if (pVar9 == pas_not_a_fast_megapage_kind) {
    ppVar10 = (pas_segregated_page *)(*param_2->page_header_func)(param_1);
    if (ppVar10 != (pas_segregated_page *)0x0) {
      bVar4 = (ppVar10->base).page_kind;
      if (bVar4 - 3 < 2) {
        ppVar12 = &param_2->medium_segregated_config;
        goto LAB_140d68e17;
      }
      if (bVar4 - 1 < 2) goto LAB_140d68e13;
    }
LAB_140d68de2:
    __return_storage_ptr__->page = (pas_segregated_page *)0x0;
    __return_storage_ptr__->config = (pas_segregated_page_config *)0x0;
  }
  else {
    if (pVar9 == pas_small_other_fast_megapage_kind) {
      bVar1 = (param_2->small_segregated_config).base.is_enabled;
      uVar5 = (param_2->small_segregated_config).base.page_size;
      p_Var6 = (param_2->small_segregated_config).base.page_header_for_boundary;
      bVar2 = param_2->small_segregated_is_in_megapage;
      if ((((param_2->small_bitfit_config).base.is_enabled & 1U) != 0) &&
         ((param_2->small_bitfit_is_in_megapage & 1U) != 0)) {
        uVar7 = (param_2->small_bitfit_config).base.page_size;
        if ((uVar7 ^ uVar7 - 1) <= uVar7 - 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        ppVar10 = (pas_segregated_page *)
                  (*(param_2->small_bitfit_config).base.page_header_for_boundary)
                            ((void *)(-uVar7 & param_1));
        if (((bVar1 & 1U) != 0) && ((bVar2 & 1U) != 0)) {
          if (uVar7 != uVar5) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if ((uVar5 ^ uVar5 - 1) <= uVar5 - 1) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          ppVar11 = (pas_segregated_page *)(*p_Var6)((void *)(-uVar5 & param_1));
          if (ppVar11 != ppVar10) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar3 = (ppVar10->base).page_kind;
          if (uVar3 == '\x01') goto LAB_140d68e13;
          if (uVar3 != '\x05') {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
        }
        goto LAB_140d68de2;
      }
      if (((bVar1 & 1U) == 0) || ((bVar2 & 1U) == 0)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if ((uVar5 ^ uVar5 - 1) <= uVar5 - 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      ppVar10 = (pas_segregated_page *)(*p_Var6)((void *)(-uVar5 & param_1));
      if (ppVar10 == (pas_segregated_page *)0x0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
    }
    else {
      if (pVar9 != pas_small_exclusive_segregated_fast_megapage_kind) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar5 = (param_2->small_segregated_config).base.page_size;
      if ((uVar5 ^ uVar5 - 1) <= uVar5 - 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      ppVar10 = (pas_segregated_page *)
                (*(param_2->small_segregated_config).base.page_header_for_boundary)
                          ((void *)(-uVar5 & param_1));
      if (ppVar10 == (pas_segregated_page *)0x0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
    }
LAB_140d68e13:
    ppVar12 = &param_2->small_segregated_config;
LAB_140d68e17:
    __return_storage_ptr__->page = ppVar10;
    __return_storage_ptr__->config = ppVar12;
  }
  return __return_storage_ptr__;
}

