// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BinkAudioDecoder
// Functions: 11

// FBinkAudioInfo @ 146bc62d0

FBinkAudioInfo * __thiscall FBinkAudioInfo::FBinkAudioInfo(FBinkAudioInfo *this)

{
  IStreamedCompressedInfo::IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
  this->_padding_ = (longlong)&___7FBinkAudioInfo__6B_;
  (this->OutputReservoir).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputReservoir).ArrayNum = 0;
  (this->OutputReservoir).ArrayMax = 0;
  this->Decoder = (BinkAudioDecoder *)0x0;
  (this->RawMemory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawMemory).ArrayNum = 0;
  (this->RawMemory).ArrayMax = 0;
  this->bErrorStateLatch = false;
  return this;
}

// ~FBinkAudioInfo @ 146bc6350

void __thiscall FBinkAudioInfo::~FBinkAudioInfo(FBinkAudioInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBinkAudioInfo__6B_;
  pFVar1 = (this->RawMemory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputReservoir).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IStreamedCompressedInfo::~IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
  return;
}

// CreateDecoder @ 146bc64a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FBinkAudioInfo::CreateDecoder(FBinkAudioInfo *this)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UEBinkAudioDecodeInterface *pUVar6;
  BinkAudioDecoder *pBVar7;
  uint uVar8;
  void *pvVar9;
  void *pvVar10;
  longlong lVar11;
  byte bVar12;
  uint *puVar13;
  BinkAudioDecoder *pBVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  int iVar18;
  undefined1 auStackY_a8 [32];
  uint local_58 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pUVar6 = UnrealBinkAudioDecodeInterface();
  if (pUVar6 == (UEBinkAudioDecodeInterface *)0x0) {
    if (1 < (byte)LogBinkAudioDecoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
    }
    bVar3 = false;
  }
  else {
    lVar2 = this->_padding_;
    bVar12 = (byte)this->_padding_;
    uVar8 = (uint)bVar12;
    uVar15 = bVar12 + 1 >> 1;
    uVar16 = (ulonglong)uVar15;
    iVar18 = 0;
    if (uVar15 != 0) {
      puVar13 = local_58;
      do {
        uVar4 = uVar8;
        if (2 < uVar8) {
          uVar4 = 2;
        }
        uVar8 = uVar8 - uVar4;
        uVar4 = (*pUVar6->MemoryFn)(this->SampleRate,uVar4);
        iVar18 = iVar18 + uVar4;
        *puVar13 = uVar4;
        puVar13 = puVar13 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    uVar4 = uVar15 * 8 + 0x1f & 0xffffffe0;
    uVar8 = 0;
    if (*(ushort *)(lVar2 + 0x18) != 0) {
      uVar8 = (uint)*(ushort *)(lVar2 + 0x18) * 4 + 0x23 & 0xffffffe0;
    }
    iVar18 = (uVar15 + 0x33 & 0xffffffe0) + uVar8 + uVar4 + iVar18;
    iVar5 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (1,1,iVar18,&(this->RawMemory).AllocatorInstance,&(this->RawMemory).ArrayNum,
                       &(this->RawMemory).ArrayMax);
    memset((this->RawMemory).AllocatorInstance.Data + iVar5,0,(longlong)iVar18);
    pBVar14 = (BinkAudioDecoder *)(this->RawMemory).AllocatorInstance.Data;
    this->Decoder = pBVar14;
    pBVar14->StreamCount = (uchar)uVar15;
    this->Decoder->SeekTableCount = *(ushort *)(lVar2 + 0x18);
    this->Decoder->FramesPerSeekTableEntry = *(ushort *)(lVar2 + 0x1a);
    pBVar7 = this->Decoder;
    bVar12 = (byte)this->_padding_;
    pBVar14 = pBVar7 + 1;
    puVar13 = (uint *)(&pBVar7->StreamCount +
                      ((ulonglong)pBVar7->StreamCount + 0x33 & 0xffffffffffffffe0));
    pvVar9 = (void *)((longlong)puVar13 + (ulonglong)uVar4);
    if (uVar15 != 0) {
      uVar16 = (ulonglong)uVar15;
      puVar17 = local_58;
      pvVar10 = pvVar9;
      do {
        uVar8 = (uint)bVar12;
        if (2 < bVar12) {
          uVar8 = 2;
        }
        uVar15 = *puVar17;
        pBVar14->StreamCount = (uchar)uVar8;
        bVar12 = bVar12 - (uchar)uVar8;
        *(void **)puVar13 = pvVar10;
        pvVar9 = (void *)((longlong)pvVar10 + (ulonglong)uVar15);
        (*pUVar6->OpenFn)(pvVar10,this->SampleRate,uVar8,true,true);
        pBVar14 = (BinkAudioDecoder *)&pBVar14->field_0x1;
        puVar13 = puVar13 + 2;
        puVar17 = puVar17 + 1;
        uVar16 = uVar16 - 1;
        pvVar10 = pvVar9;
      } while (uVar16 != 0);
    }
    iVar18 = 0;
    lVar11 = (longlong)pvVar9 - (longlong)(this->RawMemory).AllocatorInstance.Data;
    this->Decoder->ToSeekTableOffset32 =
         (ushort)((longlong)(lVar11 + (ulonglong)((uint)(lVar11 >> 0x3f) & 0x1f)) >> 5);
    pBVar14 = this->Decoder;
    if (pBVar14->SeekTableCount != 0) {
      uVar1 = pBVar14->ToSeekTableOffset32;
      lVar11 = this->_padding_;
      uVar16 = 0;
      pBVar7 = pBVar14;
      iVar5 = 0;
      if (pBVar14->SeekTableCount != 0) {
        do {
          uVar8 = (int)uVar16 + 1;
          *(int *)((longlong)pBVar14 + uVar16 * 4 + (ulonglong)uVar1 * 0x20) = iVar5;
          pBVar7 = this->Decoder;
          iVar18 = iVar5 + (uint)*(ushort *)(lVar11 + 0x1c + uVar16 * 2);
          uVar16 = (ulonglong)uVar8;
          iVar5 = iVar18;
        } while (uVar8 < pBVar7->SeekTableCount);
      }
      *(int *)((longlong)pBVar14 + (ulonglong)pBVar7->SeekTableCount * 4 + (ulonglong)uVar1 * 0x20)
           = iVar18;
    }
    *(uint *)((longlong)&this->_padding_ + 4) = (uint)*(ushort *)(lVar2 + 0x18) * 2 + 0x1c;
    bVar3 = true;
  }
  return bVar3;
}

// Decode @ 146bc67b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

FDecodeResult * __thiscall
FBinkAudioInfo::Decode
          (FBinkAudioInfo *this,FDecodeResult *__return_storage_ptr__,uchar *param_1,int param_2,
          uchar *param_3,int param_4)

{
  TArray<unsigned_char,TAlignedHeapAllocator<16>_> *pTVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  void *pvVar8;
  _func___cdecl_uint_void_ptr_uchar_ptr_uint_uchar_ptr_ptr_uchar_ptr *p_Var9;
  longlong lVar10;
  uchar *_Dst;
  UEBinkAudioDecodeInterface *pUVar11;
  uchar uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  FDecodeResult *pFVar17;
  uint uVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  char *pcVar21;
  longlong lVar22;
  BinkAudioDecoder *pBVar23;
  undefined1 *puVar24;
  uint *puVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  ForAnyElementType FVar28;
  uint uVar29;
  uint *puVar30;
  undefined8 uStack_100;
  undefined1 auStack_f8 [32];
  longlong alStack_d8 [4];
  uint local_b8;
  char cStack_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  FDecodeResult *local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  uint local_88;
  int local_84;
  uint *local_80;
  uint local_78;
  int local_74;
  uchar *local_70;
  uchar *local_68;
  uint local_60;
  uchar *local_58;
  UEBinkAudioDecodeInterface *local_50;
  uint *local_48;
  uchar *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)&local_b8;
  uStack_100 = 0x146bc6808;
  local_a0 = __return_storage_ptr__;
  local_74 = param_2;
  local_70 = param_1;
  local_50 = UnrealBinkAudioDecodeInterface();
  if (local_50 == (UEBinkAudioDecodeInterface *)0x0) {
    __return_storage_ptr__->NumCompressedBytesConsumed = -1;
    __return_storage_ptr__->NumPcmBytesProduced = -1;
    __return_storage_ptr__->NumAudioFramesProduced = -1;
    puVar24 = auStack_f8;
  }
  else {
    local_40 = param_1 + param_2;
    FVar28.Data = (FScriptContainerElement *)0x0;
    uVar14 = this->MaxCompSpaceNeeded + 0x18;
    local_98.Data = (FScriptContainerElement *)0x0;
    uVar16 = (ulonglong)uVar14 + 0xf;
    local_ac = 0;
    local_90 = 0;
    local_b0 = param_4;
    if (uVar16 <= uVar14) {
      uVar16 = 0xffffffffffffff0;
    }
    uStack_100 = 0x146bc6872;
    lVar10 = -(uVar16 & 0xfffffffffffffff0);
    puVar24 = auStack_f8 + lVar10;
    local_58 = (uchar *)((longlong)&local_b8 + lVar10);
    pcVar7 = *(code **)(this->_padding_ + 0xc0);
    local_b8 = param_2;
    *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc688a;
    local_88 = (*pcVar7)(this);
    local_84 = (uint)(byte)this->_padding_ * 2;
    local_a8 = local_84 * local_88;
    uVar14 = param_4;
    iVar26 = 0;
joined_r0x000146bc68a9:
    if (uVar14 != 0) {
      uVar15 = this->Decoder->OutputReservoirReadOffset;
      uVar18 = this->Decoder->OutputReservoirTotalBytes;
      if (uVar15 < uVar18) {
        uVar18 = uVar18 - uVar15;
        uVar29 = uVar14;
        if (uVar18 <= uVar14) {
          uVar29 = uVar18;
        }
        pFVar20 = (this->OutputReservoir).AllocatorInstance.Data;
        *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc68e5;
        memcpy(param_3,pFVar20 + uVar15,(ulonglong)uVar29);
        uVar14 = uVar14 - uVar29;
        param_3 = param_3 + uVar29;
        puVar25 = &this->Decoder->OutputReservoirReadOffset;
        *puVar25 = *puVar25 + uVar29;
        __return_storage_ptr__ = local_a0;
        param_2 = local_b8;
        local_b0 = uVar14;
        if (uVar14 == 0) goto LAB_146bc6f1e;
      }
      param_2 = local_b8;
      __return_storage_ptr__ = local_a0;
      if (local_b8 == 0) goto LAB_146bc6f1e;
      uVar15 = this->MaxCompSpaceNeeded;
      *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6925;
      uVar12 = BinkAudioValidateBlock(uVar15,param_1,param_2);
      _Dst = local_58;
      __return_storage_ptr__ = local_a0;
      if (uVar12 != '\0') {
        if (2 < (byte)LogBinkAudioDecoder._0_1_) {
          *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6f12;
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
          __return_storage_ptr__ = local_a0;
          param_2 = local_b8;
        }
        goto LAB_146bc6f1e;
      }
      puVar25 = (uint *)(param_1 + 4);
      uVar18 = (uint)*(ushort *)(param_1 + 2);
      uVar14 = 0xffffffff;
      if (*(ushort *)(param_1 + 2) == 0xffff) {
        uVar14 = *puVar25;
        puVar25 = (uint *)(param_1 + 8);
        uVar18 = uVar14 & 0xffff;
        uVar14 = uVar14 >> 0x10;
      }
      puVar30 = (uint *)((ulonglong)uVar18 + (longlong)puVar25);
      local_80 = puVar25;
      local_48 = puVar30;
      local_68 = param_1;
      uVar18 = local_88;
      if ((uVar14 == 0xffffffff) || (uVar18 = uVar14, uVar14 <= local_88)) {
        uVar4 = this->Decoder->ConsumeFrameCount;
        if (uVar18 <= uVar4) {
          uVar14 = (int)puVar30 - (int)param_1;
          param_2 = param_2 - uVar14;
          param_1 = param_1 + uVar14;
          this->Decoder->ConsumeFrameCount = uVar4 - (short)uVar18;
          uVar14 = local_b0;
          local_b8 = param_2;
          local_70 = param_1;
          goto joined_r0x000146bc68a9;
        }
        if ((longlong)local_40 - (longlong)puVar30 < 0x11) {
          uVar16 = (longlong)puVar30 - (longlong)param_1;
          if (uVar15 + 8 < uVar16) {
            if (1 < (byte)LogBinkAudioDecoder._0_1_) {
              *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6e52;
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
            }
            this->bErrorStateLatch = true;
            __return_storage_ptr__ = local_a0;
            uVar14 = local_b0;
            param_2 = local_b8;
            goto LAB_146bc6f1e;
          }
          *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc69dd;
          memcpy(_Dst,param_1,uVar16);
          puVar30 = (uint *)(local_58 + uVar16);
          local_48 = puVar30;
          local_68 = local_58;
          local_80 = (uint *)(local_58 + ((longlong)puVar25 - (longlong)param_1));
          puVar30[0] = 0;
          puVar30[1] = 0;
          puVar30[2] = 0;
          puVar30[3] = 0;
        }
        pUVar11 = local_50;
        uVar15 = local_88;
        uVar14 = local_b0;
        pBVar23 = this->Decoder;
        local_48 = puVar30;
        if ((((pBVar23->StreamCount != '\x01') || (local_b0 < local_a8)) ||
            (((ulonglong)param_3 & 0xf) != 0)) || (pBVar23->ConsumeFrameCount != 0)) {
          uVar14 = local_88 * 2;
          if (iVar26 < (int)uVar14) {
            *(longlong *)((longlong)alStack_d8 + lVar10 + 8) = (longlong)&local_90 + 4;
            *(undefined8 **)((longlong)alStack_d8 + lVar10) = &local_90;
            *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6ab4;
            UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (2,2,uVar14 - iVar26,&local_98,*(int **)((longlong)alStack_d8 + lVar10),
                       *(int **)((longlong)alStack_d8 + lVar10 + 8));
LAB_146bc6b6d:
            local_ac = (int)local_90;
            FVar28.Data = local_98.Data;
          }
          else {
            if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)(auStack_f8 + lVar10 + -8) = &UNK_146bc6f94;
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
            }
            if ((int)uVar14 < iVar26) {
              uVar29 = iVar26 + local_88 * -2;
              if ((int)(uVar29 | uVar14) < 0) {
                *(longlong *)((longlong)alStack_d8 + lVar10 + 0x10) = (longlong)iVar26;
                *(longlong *)((longlong)alStack_d8 + lVar10 + 8) = (longlong)(int)uVar29;
                *(longlong *)((longlong)alStack_d8 + lVar10) = (longlong)(int)uVar14;
                *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6b13;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   );
                if (bVar13) {
                  pcVar7 = (code *)swi(3);
                  pFVar17 = (FDecodeResult *)(*pcVar7)();
                  return pFVar17;
                }
              }
              if (uVar29 != 0) {
                iVar26 = iVar26 - uVar29;
                iVar19 = iVar26 + uVar15 * -2;
                if (iVar19 != 0) {
                  *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6b4d;
                  memmove(FVar28.Data + (longlong)(int)uVar14 * 2,
                          FVar28.Data + (longlong)(int)uVar14 * 2 + (longlong)(int)uVar29 * 2,
                          (longlong)iVar19 * 2);
                }
                local_90 = CONCAT44(local_90._4_4_,iVar26);
                *(longlong *)((longlong)alStack_d8 + lVar10) = (longlong)&local_90 + 4;
                *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6b6d;
                UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                          (2,2,&local_98,iVar26,*(int **)((longlong)alStack_d8 + lVar10));
                goto LAB_146bc6b6d;
              }
            }
          }
          local_78 = 0;
          uVar4 = this->Decoder->ConsumeFrameCount;
          if (uVar4 != 0) {
            local_78 = uVar18;
            if (uVar4 < uVar18) {
              local_78 = (uint)uVar4;
            }
            uVar18 = uVar18 - local_78;
            this->Decoder->ConsumeFrameCount = uVar4 - (short)local_78;
          }
          cStack_b4 = '\x01';
          pFVar20 = (FScriptContainerElement *)param_3;
          if (local_b0 < uVar18 * local_84) {
            uVar16 = (ulonglong)local_a8;
            pTVar1 = &this->OutputReservoir;
            iVar26 = (this->OutputReservoir).ArrayNum;
            if (iVar26 < (int)local_a8) {
              iVar26 = local_a8 - iVar26;
              *(int **)((longlong)alStack_d8 + lVar10 + 8) = &(this->OutputReservoir).ArrayMax;
              *(int **)((longlong)alStack_d8 + lVar10) = &(this->OutputReservoir).ArrayNum;
              *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6bf8;
              UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (1,1,iVar26,&pTVar1->AllocatorInstance,
                         *(int **)((longlong)alStack_d8 + lVar10),
                         *(int **)((longlong)alStack_d8 + lVar10 + 8));
            }
            else {
              if ((int)local_a8 < 0) {
                    /* WARNING: Subroutine does not return */
                *(undefined **)(auStack_f8 + lVar10 + -8) = &UNK_146bc6f9d;
                UE::Core::Private::OnInvalidArrayNum(uVar16);
              }
              if ((int)local_a8 < iVar26) {
                uVar14 = iVar26 - local_a8;
                if ((int)(uVar14 | local_a8) < 0) {
                  lVar22 = (longlong)(int)local_a8;
                  *(longlong *)((longlong)alStack_d8 + lVar10 + 0x10) = (longlong)iVar26;
                  *(longlong *)((longlong)alStack_d8 + lVar10 + 8) = (longlong)(int)uVar14;
                  *(longlong *)((longlong)alStack_d8 + lVar10) = lVar22;
                  *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6c5f;
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     );
                  if (bVar13) {
                    pcVar7 = (code *)swi(3);
                    pFVar17 = (FDecodeResult *)(*pcVar7)();
                    return pFVar17;
                  }
                }
                if (uVar14 != 0) {
                  pFVar20 = (pTVar1->AllocatorInstance).Data + (int)local_a8;
                  iVar26 = ((this->OutputReservoir).ArrayNum - local_a8) - uVar14;
                  if (iVar26 != 0) {
                    *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6c9e;
                    memmove(pFVar20,pFVar20 + (int)uVar14,(longlong)iVar26);
                  }
                  iVar26 = (this->OutputReservoir).ArrayNum;
                  *(int **)((longlong)alStack_d8 + lVar10) = &(this->OutputReservoir).ArrayMax;
                  iVar26 = iVar26 - uVar14;
                  (this->OutputReservoir).ArrayNum = iVar26;
                  *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6cc1;
                  UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                            (1,1,&pTVar1->AllocatorInstance,iVar26,
                             *(int **)((longlong)alStack_d8 + lVar10));
                }
              }
            }
            pFVar20 = (pTVar1->AllocatorInstance).Data;
            cStack_b4 = '\0';
          }
          pBVar23 = this->Decoder;
          iVar26 = 0;
          uVar16 = 0;
          bVar2 = pBVar23->StreamCount;
          bVar3 = pBVar23[1].StreamCount;
          if (bVar2 != 0) {
            uVar14 = bVar3 * local_88;
            local_38 = (ulonglong)uVar14 * 2;
            local_60 = uVar14 * 2;
            do {
              uVar14 = local_60;
              p_Var9 = local_50->DecodeFn;
              *(uint **)((longlong)alStack_d8 + lVar10) = local_48;
              pvVar8 = *(void **)(&pBVar23->StreamCount +
                                 uVar16 * 8 + ((ulonglong)bVar2 + 0x33 & 0xffffffffffffffe0));
              *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6d31;
              uVar14 = (*p_Var9)(pvVar8,(uchar *)FVar28.Data,uVar14,(uchar **)&local_80,
                                 *(uchar **)((longlong)alStack_d8 + lVar10));
              if (uVar14 != local_38) {
                iVar26 = 0x29a;
                pcVar21 = "DecodedBytes == DecodeFrames * StreamChannels * sizeof(int16)";
                goto LAB_146bc6ec4;
              }
              if (bVar3 == 2) {
                uVar14 = 0;
                pFVar27 = FVar28.Data + (ulonglong)local_78 * 4;
                if (uVar18 != 0) {
                  do {
                    uVar6 = *(undefined4 *)pFVar27;
                    pFVar27 = pFVar27 + 4;
                    iVar19 = (byte)this->_padding_ * uVar14;
                    uVar14 = uVar14 + 1;
                    *(undefined4 *)(pFVar20 + (ulonglong)(uint)(iVar19 + iVar26) * 2) = uVar6;
                  } while (uVar14 < uVar18);
                }
              }
              else {
                pFVar27 = FVar28.Data + (ulonglong)local_78 * 2;
                uVar14 = 0;
                if (uVar18 != 0) {
                  do {
                    uVar5 = *(undefined2 *)pFVar27;
                    pFVar27 = pFVar27 + 2;
                    iVar19 = (byte)this->_padding_ * uVar14;
                    uVar14 = uVar14 + 1;
                    *(undefined2 *)(pFVar20 + (ulonglong)(uint)(iVar19 + iVar26) * 2) = uVar5;
                  } while (uVar14 < uVar18);
                }
              }
              pBVar23 = this->Decoder;
              uVar14 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar14;
              iVar26 = iVar26 + (uint)bVar3;
              bVar2 = pBVar23->StreamCount;
            } while (uVar14 < bVar2);
          }
          uVar14 = (int)local_80 - (int)local_68;
          param_2 = local_b8 - uVar14;
          param_1 = local_70 + uVar14;
          __return_storage_ptr__ = local_a0;
          local_b8 = param_2;
          local_70 = param_1;
          iVar26 = local_ac;
          if (cStack_b4 == '\0') {
            pBVar23->OutputReservoirTotalBytes = uVar18 * local_84;
            this->Decoder->OutputReservoirReadOffset = 0;
            uVar14 = local_b0;
          }
          else {
            param_3 = param_3 + uVar18 * local_84;
            uVar14 = local_b0 - uVar18 * local_84;
            local_b0 = uVar14;
          }
          goto joined_r0x000146bc68a9;
        }
        pvVar8 = *(void **)&pBVar23[1].ToSeekTableOffset32;
        *(uint **)((longlong)alStack_d8 + lVar10) = puVar30;
        p_Var9 = pUVar11->DecodeFn;
        *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6a42;
        uVar15 = (*p_Var9)(pvVar8,param_3,uVar14,(uchar **)&local_80,
                           *(uchar **)((longlong)alStack_d8 + lVar10));
        if (uVar15 == local_a8) {
          if (local_80 != puVar30) {
            if (1 < (byte)LogBinkAudioDecoder._0_1_) {
              *(uchar **)((longlong)alStack_d8 + lVar10) = local_68;
              *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6e8c;
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
            }
            goto LAB_146bc6e8c;
          }
          uVar15 = (int)local_80 - (int)local_68;
          param_3 = param_3 + uVar18 * local_84;
          param_2 = local_b8 - uVar15;
          param_1 = param_1 + uVar15;
          uVar14 = uVar14 - uVar18 * local_84;
          __return_storage_ptr__ = local_a0;
          local_b8 = param_2;
          local_b0 = uVar14;
          local_70 = param_1;
          goto joined_r0x000146bc68a9;
        }
        iVar26 = 0x24c;
        pcVar21 = "DecodedBytes == AllStreamsDecodeSize";
LAB_146bc6ec4:
        *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6ed7;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           (pcVar21,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\BinkAudioDecoder\\Module\\Private\\BinkAudioInfo.cpp"
                            ,iVar26,L"");
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          pFVar17 = (FDecodeResult *)(*pcVar7)();
          return pFVar17;
        }
      }
LAB_146bc6e8c:
      this->bErrorStateLatch = true;
      local_a0->NumCompressedBytesConsumed = -1;
      local_a0->NumPcmBytesProduced = -1;
      local_a0->NumAudioFramesProduced = -1;
      __return_storage_ptr__ = local_a0;
      puVar24 = auStack_f8 + lVar10;
      goto joined_r0x000146bc6ea9;
    }
LAB_146bc6f1e:
    lVar22 = this->_padding_;
    __return_storage_ptr__->NumCompressedBytesConsumed = local_74 - param_2;
    __return_storage_ptr__->NumPcmBytesProduced = param_4 - uVar14;
    __return_storage_ptr__->NumAudioFramesProduced =
         (int)((ulonglong)(longlong)(int)(param_4 - uVar14) / ((ulonglong)(byte)lVar22 * 2));
    FVar28.Data = local_98.Data;
joined_r0x000146bc6ea9:
    if (FVar28.Data != (FScriptContainerElement *)0x0) {
      *(undefined8 *)(auStack_f8 + lVar10 + -8) = 0x146bc6f55;
      FMemory::Free(FVar28.Data);
      puVar24 = auStack_f8 + lVar10;
    }
  }
  *(undefined8 *)(puVar24 + -8) = 0x146bc6f67;
  return __return_storage_ptr__;
}

// GetFrameSize @ 146bc6fb0

int __thiscall FBinkAudioInfo::GetFrameSize(FBinkAudioInfo *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  uVar3 = (int)this->_padding_ - uVar1;
  if (3 < uVar3) {
    iVar4 = 4;
    uVar2 = *(uint *)(this->_padding_ + (ulonglong)uVar1);
    if ((short)uVar2 == -0x6667) {
      uVar2 = uVar2 >> 0x10;
      if (uVar2 == 0xffff) {
        if (uVar3 < 8) goto LAB_146bc7003;
        uVar2 = (uint)*(ushort *)(this->_padding_ + 4 + (ulonglong)uVar1);
        iVar4 = 8;
      }
      if (uVar2 <= this->MaxCompSpaceNeeded) {
        return uVar2 + iVar4;
      }
    }
  }
LAB_146bc7003:
  this->bErrorStateLatch = true;
  return 0;
}

// GetMaxFrameSizeSamples @ 146bc7020

uint __thiscall FBinkAudioInfo::GetMaxFrameSizeSamples(FBinkAudioInfo *this)

{
  uint uVar1;
  
  if (0xac43 < this->SampleRate) {
    return 0x780;
  }
  uVar1 = 0x1e0;
  if (0x5621 < this->SampleRate) {
    uVar1 = 0x3c0;
  }
  return uVar1;
}

// HasError @ 146bc7050

bool __thiscall FBinkAudioInfo::HasError(FBinkAudioInfo *this)

{
  bool bVar1;
  
  bVar1 = ICompressedAudioInfo::HasError((ICompressedAudioInfo *)this);
  if ((!bVar1) && (this->bErrorStateLatch == false)) {
    return false;
  }
  return true;
}

// NotifySeek @ 146bc72b0

void __thiscall FBinkAudioInfo::NotifySeek(FBinkAudioInfo *this)

{
  byte bVar1;
  BinkAudioDecoder *pBVar2;
  UEBinkAudioDecodeInterface *pUVar3;
  byte bVar4;
  ulonglong uVar5;
  
  pUVar3 = UnrealBinkAudioDecodeInterface();
  pBVar2 = this->Decoder;
  uVar5 = 0;
  bVar1 = pBVar2->StreamCount;
  if (bVar1 != 0) {
    do {
      (*pUVar3->ResetStartFn)
                (*(void **)(&pBVar2->StreamCount +
                           uVar5 * 8 + ((ulonglong)bVar1 + 0x33 & 0xffffffffffffffe0)));
      bVar4 = (char)uVar5 + 1;
      uVar5 = (ulonglong)bVar4;
    } while (bVar4 < this->Decoder->StreamCount);
  }
  return;
}

// ParseHeader @ 146bc7330

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FBinkAudioInfo::ParseHeader
          (FBinkAudioInfo *this,uchar *param_1,uint param_2,FSoundQualityInfo *param_3)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  this->_padding_ = (longlong)param_1;
  *(uint *)&this->_padding_ = param_2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  if (0x1b < param_2) {
    if (*(int *)param_1 == 0x55454241) {
      if (param_1[4] == '\x01') {
        this->SampleRate = *(uint *)(param_1 + 8);
        *(uint *)&this->_padding_ = (uint)param_1[5] * *(int *)(param_1 + 0xc);
        *(uchar *)&this->_padding_ = param_1[5];
        this->MaxCompSpaceNeeded = (uint)*(ushort *)(param_1 + 0x10);
        if ((uint)*(ushort *)(param_1 + 0x18) * 2 + 0x1c <= param_2) {
          *(uint *)&this->_padding_ = (uint)*(ushort *)(param_1 + 0x18) * 2 + 0x1c;
          if (param_3 != (FSoundQualityInfo *)0x0) {
            uVar2 = *(uint *)(param_1 + 8);
            param_3->SampleRate = uVar2;
            bVar1 = param_1[5];
            param_3->NumChannels = (uint)bVar1;
            param_3->SampleDataSize = (uint)bVar1 * *(int *)(param_1 + 0xc) * 2;
            param_3->Duration = (float)*(uint *)(param_1 + 0xc) / (float)uVar2;
          }
          return true;
        }
        if (1 < (byte)LogBinkAudioDecoder._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
        }
      }
      else if (1 < (byte)LogBinkAudioDecoder._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
        BinkAudioInfo::LogOnce((BinkAudioFileHeader *)param_1);
        return false;
      }
    }
    else if (1 < (byte)LogBinkAudioDecoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
      BinkAudioInfo::LogOnce((BinkAudioFileHeader *)param_1);
      return false;
    }
    BinkAudioInfo::LogOnce((BinkAudioFileHeader *)param_1);
    return false;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("InSrcBufferDataSize >= sizeof(BinkAudioFileHeader)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\BinkAudioDecoder\\Module\\Private\\BinkAudioInfo.cpp"
                     ,0xf3,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (1 < (byte)LogBinkAudioDecoder._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBinkAudioDecoder);
  }
  return false;
}

// SeekToFrame @ 146bc7510

void __thiscall FBinkAudioInfo::SeekToFrame(FBinkAudioInfo *this,uint param_1)

{
  byte bVar1;
  BinkAudioDecoder *pBVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  UEBinkAudioDecodeInterface *pUVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  NotifySeek(this);
  if (this->Decoder->SeekTableCount == 0) {
    IStreamedCompressedInfo::SeekToFrame((IStreamedCompressedInfo *)this,param_1);
    return;
  }
  uVar10 = (byte)this->_padding_ * param_1;
  iVar5 = (**(code **)(this->_padding_ + 0xc0))();
  uVar12 = (uint)this->_padding_;
  if (uVar12 < uVar10) {
    uVar10 = uVar12 - 1;
    param_1 = uVar12 / (byte)this->_padding_ - 1;
  }
  pBVar2 = this->Decoder;
  *(uint *)((longlong)&this->_padding_ + 4) = uVar10;
  uVar12 = 0;
  uVar10 = (uint)pBVar2->FramesPerSeekTableEntry * iVar5;
  iVar5 = *(int *)((longlong)pBVar2 +
                  ((ulonglong)param_1 / (ulonglong)uVar10 +
                  (ulonglong)pBVar2->ToSeekTableOffset32 * 8) * 4);
  pBVar2->ConsumeFrameCount = (ushort)(param_1 % uVar10);
  uVar10 = iVar5 + (pBVar2->SeekTableCount + 0xe) * 2;
  this->Decoder->OutputReservoirTotalBytes = 0;
  this->Decoder->OutputReservoirReadOffset = 0;
  pUVar8 = UnrealBinkAudioDecodeInterface();
  pBVar2 = this->Decoder;
  uVar11 = 0;
  bVar1 = pBVar2->StreamCount;
  if (bVar1 != 0) {
    do {
      (*pUVar8->ResetStartFn)
                (*(void **)(&pBVar2->StreamCount +
                           uVar11 * 8 + ((ulonglong)bVar1 + 0x33 & 0xffffffffffffffe0)));
      bVar9 = (char)uVar11 + 1;
      uVar11 = (ulonglong)bVar9;
    } while (bVar9 < this->Decoder->StreamCount);
  }
  if ((FSoundWaveProxy *)this->_padding_ != (FSoundWaveProxy *)0x0) {
    uVar6 = FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)this->_padding_);
    if (uVar6 != 0) {
      while( true ) {
        if (this->_padding_ == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar7 = FSoundWaveProxy::GetSizeOfChunk((FSoundWaveProxy *)this->_padding_,uVar12);
        if (uVar10 < uVar7) break;
        uVar10 = uVar10 - uVar7;
        uVar12 = uVar12 + 1;
        if (uVar6 <= uVar12) {
          return;
        }
      }
      if ((*(uint *)((longlong)&this->_padding_ + 4) == uVar12) && (this->_padding_ != 0))
      goto LAB_146bc7691;
      LOCK();
      *(uint *)&this->_padding_ = uVar12;
      UNLOCK();
      *(uint *)((longlong)&this->_padding_ + 4) = uVar10;
    }
    return;
  }
LAB_146bc7691:
  *(uint *)((longlong)&this->_padding_ + 4) = uVar10;
  return;
}

// SeekToTime @ 146bc76d0

void __thiscall FBinkAudioInfo::SeekToTime(FBinkAudioInfo *this,float param_1)

{
  longlong lVar1;
  
  NotifySeek(this);
  if (this->Decoder->SeekTableCount == 0) {
    IStreamedCompressedInfo::SeekToTime((IStreamedCompressedInfo *)this,param_1);
    return;
  }
  lVar1 = 0;
  if (0.0 < param_1) {
    lVar1 = (longlong)((float)this->SampleRate * param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000146bc773a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))(this,lVar1);
  return;
}

