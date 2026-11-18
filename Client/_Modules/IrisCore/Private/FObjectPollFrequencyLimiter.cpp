// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 7

// FObjectPollFrequencyLimiter @ 144267130

FObjectPollFrequencyLimiter * __thiscall
UE::Net::Private::FObjectPollFrequencyLimiter::FObjectPollFrequencyLimiter
          (FObjectPollFrequencyLimiter *this)

{
  this->MaxInternalHandle = 0;
  this->FrameIndex = 0;
  memset(this->FrameIndexOffsets,0,0x100);
  (this->FramesBetweenUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FramesBetweenUpdates).ArrayNum = 0;
  (this->FramesBetweenUpdates).ArrayMax = 0;
  (this->FrameCounters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameCounters).ArrayNum = 0;
  (this->FrameCounters).ArrayMax = 0;
  return this;
}

// Deinit @ 144274a30

void __thiscall
UE::Net::Private::FObjectPollFrequencyLimiter::Deinit(FObjectPollFrequencyLimiter *this)

{
  int *piVar1;
  
  piVar1 = &(this->FramesBetweenUpdates).ArrayMax;
  (this->FramesBetweenUpdates).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->FramesBetweenUpdates).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->FrameCounters).ArrayMax;
  (this->FrameCounters).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->FrameCounters).AllocatorInstance,0,piVar1);
  }
  return;
}

// Init @ 14427e000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectPollFrequencyLimiter::Init(FObjectPollFrequencyLimiter *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0x1f & 0xffffffe0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->FramesBetweenUpdates,uVar1,Default);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->FrameCounters,uVar1,Default);
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 144285200

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectPollFrequencyLimiter::OnMaxInternalNetRefIndexIncreased
          (FObjectPollFrequencyLimiter *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0x1f & 0xffffffe0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->FramesBetweenUpdates,uVar1,Default);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->FrameCounters,uVar1,Default);
  return;
}

// SetPollFramePeriod @ 144293da0

void __thiscall
UE::Net::Private::FObjectPollFrequencyLimiter::SetPollFramePeriod
          (FObjectPollFrequencyLimiter *this,uint param_1,uchar param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1;
  if (param_1 < this->MaxInternalHandle) {
    uVar4 = this->MaxInternalHandle;
  }
  this->MaxInternalHandle = uVar4;
  uVar4 = 0;
  if ((int)param_1 < (this->FramesBetweenUpdates).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->FramesBetweenUpdates).AllocatorInstance.Data[(int)param_1] =
       (FScriptContainerElement)param_2;
  this->FrameIndexOffsets[param_2] = this->FrameIndexOffsets[param_2] + 0xff;
  bVar1 = this->FrameIndexOffsets[param_2];
  uVar4 = this->FrameIndex;
  uVar5 = 0;
  if ((int)param_1 < (this->FrameCounters).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->FrameCounters).AllocatorInstance.Data[(int)param_1] =
       SUB41(~(uVar4 + bVar1) % (param_2 + 1),0);
  return;
}

// SetPollWithObject @ 144294140

void __thiscall
UE::Net::Private::FObjectPollFrequencyLimiter::SetPollWithObject
          (FObjectPollFrequencyLimiter *this,uint param_1,uint param_2)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (param_2 < this->MaxInternalHandle) {
    uVar4 = this->MaxInternalHandle;
  }
  this->MaxInternalHandle = uVar4;
  uVar4 = 0;
  if ((int)param_1 < (this->FramesBetweenUpdates).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (this->FramesBetweenUpdates).AllocatorInstance.Data[(int)param_1];
  uVar4 = 0;
  if ((int)param_2 < (this->FramesBetweenUpdates).ArrayNum) {
    uVar4 = ~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->FramesBetweenUpdates).AllocatorInstance.Data[(int)param_2] = FVar1;
  uVar4 = 0;
  if ((int)param_1 < (this->FrameCounters).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (this->FrameCounters).AllocatorInstance.Data[(int)param_1];
  uVar4 = 0;
  if ((int)param_2 < (this->FrameCounters).ArrayNum) {
    uVar4 = ~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->FrameCounters).AllocatorInstance.Data[(int)param_2] = FVar1;
  return;
}

// Update @ 144299ea0

void __thiscall
UE::Net::Private::FObjectPollFrequencyLimiter::Update
          (FObjectPollFrequencyLimiter *this,FNetBitArrayView *param_1,FNetBitArrayView *param_2,
          FNetBitArrayView *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  uint *puVar41;
  uint *puVar42;
  FScriptContainerElement *pFVar43;
  ulonglong uVar44;
  FScriptContainerElement *pFVar45;
  uint *puVar46;
  bool bVar47;
  uint uVar48;
  char cVar49;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  uint uVar60;
  uint uVar63;
  char cVar64;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  uint uVar75;
  uint uVar50;
  undefined1 auVar51 [12];
  undefined1 auVar52 [16];
  undefined1 auVar61 [12];
  undefined1 auVar62 [16];
  uint uVar65;
  undefined1 auVar66 [12];
  undefined1 auVar67 [16];
  undefined1 auVar76 [12];
  undefined1 auVar77 [16];
  
  bVar47 = -1 < CpuChannel->Enabled;
  if (bVar47) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId42,"ObjectPollFrequencyLimiter_Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectPollFrequencyLimiter.cpp"
               ,0x2a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId42);
  }
  if (this->MaxInternalHandle != 0) {
    this->FrameIndex = this->FrameIndex + 1;
    cVar40 = UNK_150b50e2f;
    cVar39 = UNK_150b50e2e;
    cVar38 = UNK_150b50e2d;
    cVar37 = UNK_150b50e2c;
    cVar36 = UNK_150b50e2b;
    cVar35 = UNK_150b50e2a;
    cVar34 = UNK_150b50e29;
    cVar33 = UNK_150b50e28;
    cVar32 = UNK_150b50e27;
    cVar31 = UNK_150b50e26;
    cVar30 = UNK_150b50e25;
    cVar29 = UNK_150b50e24;
    cVar28 = UNK_150b50e23;
    cVar27 = UNK_150b50e22;
    cVar26 = UNK_150b50e21;
    cVar25 = __xmm_01010101010101010101010101010101;
    cVar24 = UNK_15060db2f;
    cVar23 = UNK_15060db2e;
    cVar22 = UNK_15060db2d;
    cVar21 = UNK_15060db2c;
    cVar20 = UNK_15060db2b;
    cVar19 = UNK_15060db2a;
    cVar18 = UNK_15060db29;
    cVar17 = UNK_15060db28;
    cVar16 = UNK_15060db27;
    cVar15 = UNK_15060db26;
    cVar14 = UNK_15060db25;
    cVar13 = UNK_15060db24;
    cVar12 = UNK_15060db23;
    cVar11 = UNK_15060db22;
    cVar10 = UNK_15060db21;
    cVar9 = __xmm_ffffffffffffffffffffffffffffffff;
    pFVar43 = (this->FrameCounters).AllocatorInstance.Data;
    pFVar45 = (this->FramesBetweenUpdates).AllocatorInstance.Data;
    puVar41 = param_1->Storage;
    puVar46 = param_2->Storage;
    puVar42 = param_3->Storage;
    uVar44 = (ulonglong)(this->MaxInternalHandle + 0x20 >> 5);
    do {
      uVar1 = *puVar41;
      if (uVar1 != 0) {
        uVar2 = *(uint *)pFVar45;
        uVar3 = *(uint *)(pFVar45 + 4);
        uVar4 = *(uint *)(pFVar45 + 8);
        uVar5 = *(uint *)(pFVar45 + 0xc);
        uVar6 = *(uint *)(pFVar45 + 0x14);
        uVar7 = *(uint *)(pFVar45 + 0x18);
        uVar8 = *(uint *)(pFVar45 + 0x1c);
        cVar64 = (char)*pFVar43 - cVar25;
        cVar68 = (char)pFVar43[1] - cVar26;
        cVar69 = (char)pFVar43[2] - cVar27;
        cVar70 = (char)pFVar43[3] - cVar28;
        uVar65 = CONCAT13(cVar70,CONCAT12(cVar69,CONCAT11(cVar68,cVar64)));
        cVar71 = (char)pFVar43[4] - cVar29;
        cVar72 = (char)pFVar43[5] - cVar30;
        cVar73 = (char)pFVar43[6] - cVar31;
        cVar74 = (char)pFVar43[7] - cVar32;
        auVar66._0_8_ = CONCAT17(cVar74,CONCAT16(cVar73,CONCAT15(cVar72,CONCAT14(cVar71,uVar65))));
        auVar66[8] = (char)pFVar43[8] - cVar33;
        auVar66[9] = (char)pFVar43[9] - cVar34;
        auVar66[10] = (char)pFVar43[10] - cVar35;
        auVar66[0xb] = (char)pFVar43[0xb] - cVar36;
        auVar67[0xc] = (char)pFVar43[0xc] - cVar37;
        auVar67._0_12_ = auVar66;
        auVar67[0xd] = (char)pFVar43[0xd] - cVar38;
        auVar67[0xe] = (char)pFVar43[0xe] - cVar39;
        auVar67[0xf] = (char)pFVar43[0xf] - cVar40;
        cVar49 = (char)pFVar43[0x10] - cVar25;
        cVar53 = (char)pFVar43[0x11] - cVar26;
        cVar54 = (char)pFVar43[0x12] - cVar27;
        cVar55 = (char)pFVar43[0x13] - cVar28;
        uVar50 = CONCAT13(cVar55,CONCAT12(cVar54,CONCAT11(cVar53,cVar49)));
        cVar56 = (char)pFVar43[0x14] - cVar29;
        cVar57 = (char)pFVar43[0x15] - cVar30;
        cVar58 = (char)pFVar43[0x16] - cVar31;
        cVar59 = (char)pFVar43[0x17] - cVar32;
        auVar51._0_8_ = CONCAT17(cVar59,CONCAT16(cVar58,CONCAT15(cVar57,CONCAT14(cVar56,uVar50))));
        auVar51[8] = (char)pFVar43[0x18] - cVar33;
        auVar51[9] = (char)pFVar43[0x19] - cVar34;
        auVar51[10] = (char)pFVar43[0x1a] - cVar35;
        auVar51[0xb] = (char)pFVar43[0x1b] - cVar36;
        auVar52[0xc] = (char)pFVar43[0x1c] - cVar37;
        auVar52._0_12_ = auVar51;
        auVar52[0xd] = (char)pFVar43[0x1d] - cVar38;
        auVar52[0xe] = (char)pFVar43[0x1e] - cVar39;
        auVar52[0xf] = (char)pFVar43[0x1f] - cVar40;
        uVar75 = CONCAT13(-(cVar70 == cVar12),
                          CONCAT12(-(cVar69 == cVar11),
                                   CONCAT11(-(cVar68 == cVar10),-(cVar64 == cVar9))));
        auVar76._0_8_ =
             CONCAT17(-(cVar74 == cVar16),
                      CONCAT16(-(cVar73 == cVar15),
                               CONCAT15(-(cVar72 == cVar14),CONCAT14(-(cVar71 == cVar13),uVar75))));
        auVar76[8] = -(auVar66[8] == cVar17);
        auVar76[9] = -(auVar66[9] == cVar18);
        auVar76[10] = -(auVar66[10] == cVar19);
        auVar76[0xb] = -(auVar66[0xb] == cVar20);
        auVar77[0xc] = -(auVar67[0xc] == cVar21);
        auVar77._0_12_ = auVar76;
        auVar77[0xd] = -(auVar67[0xd] == cVar22);
        auVar77[0xe] = -(auVar67[0xe] == cVar23);
        auVar77[0xf] = -(auVar67[0xf] == cVar24);
        uVar60 = CONCAT13(-(cVar55 == cVar12),
                          CONCAT12(-(cVar54 == cVar11),
                                   CONCAT11(-(cVar53 == cVar10),-(cVar49 == cVar9))));
        auVar61._0_8_ =
             CONCAT17(-(cVar59 == cVar16),
                      CONCAT16(-(cVar58 == cVar15),
                               CONCAT15(-(cVar57 == cVar14),CONCAT14(-(cVar56 == cVar13),uVar60))));
        auVar61[8] = -(auVar51[8] == cVar17);
        auVar61[9] = -(auVar51[9] == cVar18);
        auVar61[10] = -(auVar51[10] == cVar19);
        auVar61[0xb] = -(auVar51[0xb] == cVar20);
        auVar62[0xc] = -(auVar52[0xc] == cVar21);
        auVar62._0_12_ = auVar61;
        auVar62[0xd] = -(auVar52[0xd] == cVar22);
        auVar62[0xe] = -(auVar52[0xe] == cVar23);
        auVar62[0xf] = -(auVar52[0xf] == cVar24);
        uVar48 = (uint)((ulonglong)auVar76._0_8_ >> 0x20);
        uVar63 = (uint)((ulonglong)auVar61._0_8_ >> 0x20);
        *(uint *)(pFVar43 + 0x10) = ~uVar60 & uVar50 | *(uint *)(pFVar45 + 0x10) & uVar60;
        *(uint *)(pFVar43 + 0x14) =
             ~uVar63 & (uint)((ulonglong)auVar51._0_8_ >> 0x20) | uVar6 & uVar63;
        *(uint *)(pFVar43 + 0x18) = ~auVar61._8_4_ & auVar51._8_4_ | uVar7 & auVar61._8_4_;
        *(uint *)(pFVar43 + 0x1c) = ~auVar62._12_4_ & auVar52._12_4_ | uVar8 & auVar62._12_4_;
        *(uint *)pFVar43 = uVar75 & uVar2 | ~uVar75 & uVar65;
        *(uint *)(pFVar43 + 4) = uVar48 & uVar3 | ~uVar48 & (uint)((ulonglong)auVar66._0_8_ >> 0x20)
        ;
        *(uint *)(pFVar43 + 8) = auVar76._8_4_ & uVar4 | ~auVar76._8_4_ & auVar66._8_4_;
        *(uint *)(pFVar43 + 0xc) = auVar77._12_4_ & uVar5 | ~auVar77._12_4_ & auVar67._12_4_;
        *puVar42 = (CONCAT22((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar62[0xf] >> 7) << 0xf,
                             (ushort)(SUB161(auVar77 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar77[0xf] >> 7) << 0xf) | *puVar46) & uVar1;
      }
      pFVar43 = pFVar43 + 0x20;
      pFVar45 = pFVar45 + 0x20;
      puVar41 = puVar41 + 1;
      puVar46 = puVar46 + 1;
      puVar42 = puVar42 + 1;
      uVar44 = uVar44 - 1;
    } while (uVar44 != 0);
  }
  if (!bVar47) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

