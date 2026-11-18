// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// CalculateCrc32 @ 141488790

uint __cdecl
UE::CompressedBuffer::Private::FHeader::CalculateCrc32(TMemoryView<void_const_> *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  void *pvVar5;
  
  uVar2 = param_1->Size;
  uVar1 = 0;
  uVar3 = 8;
  if (uVar2 < 8) {
    uVar3 = uVar2;
  }
  pvVar5 = (void *)((longlong)param_1->Data + uVar3);
  for (uVar2 = uVar2 - uVar3; uVar2 != 0; uVar2 = uVar2 - uVar3) {
    iVar4 = 0x7fffffff;
    if (uVar2 < 0x7fffffff) {
      iVar4 = (int)uVar2;
    }
    uVar1 = (*FCrc::MemCrc32Func)(pvVar5,iVar4,uVar1);
    uVar3 = (longlong)iVar4;
    if (uVar2 < (ulonglong)(longlong)iVar4) {
      uVar3 = uVar2;
    }
    pvVar5 = (void *)(uVar3 + (longlong)pvVar5);
  }
  return uVar1;
}

// IsValid @ 14149e950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UE::CompressedBuffer::Private::FHeader::IsValid(FCompositeBuffer *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *pvVar5;
  uint uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  FOodleDecoder FVar9;
  FLZ4Decoder *pFVar10;
  undefined1 auStackY_f8 [32];
  TMemoryView<void> local_c8;
  uint local_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  TMemoryView<void_const_> local_78;
  TMemoryView<void_const_> local_68;
  uint local_58;
  uint uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar7 = FCompositeBuffer::GetSize(param_1);
  if (0x3f < uVar7) {
    local_b8 = 0xb7756362;
    uStack_b4 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uVar8 = FCompositeBuffer::GetSize(param_1);
    if (0x3f < uVar8) {
      local_c8.Data = &local_b8;
      local_c8.Size = 0x40;
      FCompositeBuffer::CopyTo(param_1,&local_c8,0);
      uStack_b4 = uStack_b4 >> 0x18 | (uStack_b4 & 0xff0000) >> 8 | (uStack_b4 & 0xff00) << 8 |
                  uStack_b4 << 0x18;
      uStack_b0 = CONCAT44(uStack_b0._4_4_ >> 0x18 | (uStack_b0._4_4_ & 0xff0000) >> 8 |
                           (uStack_b0._4_4_ & 0xff00) << 8 | uStack_b0._4_4_ << 0x18,
                           (undefined4)uStack_b0);
      local_a8 = local_a8 >> 0x38 | (local_a8 & 0xff000000000000) >> 0x28 |
                 (local_a8 & 0xff0000000000) >> 0x18 | (local_a8 & 0xff00000000) >> 8 |
                 (local_a8 & 0xff000000) << 8 | (local_a8 & 0xff0000) << 0x18 |
                 (local_a8 & 0xff00) << 0x28 | local_a8 << 0x38;
      uStack_a0 = uStack_a0 >> 0x38 | (uStack_a0 & 0xff000000000000) >> 0x28 |
                  (uStack_a0 & 0xff0000000000) >> 0x18 | (uStack_a0 & 0xff00000000) >> 8 |
                  (uStack_a0 & 0xff000000) << 8 | (uStack_a0 & 0xff0000) << 0x18 |
                  (uStack_a0 & 0xff00) << 0x28 | uStack_a0 << 0x38;
      local_b8 = local_b8 >> 0x18 | (local_b8 & 0xff0000) >> 8 | (local_b8 & 0xff00) << 8 |
                 local_b8 << 0x18;
    }
    local_58 = local_b8;
    uStack_54 = uStack_b4;
    local_48 = local_a8;
    uStack_40 = uStack_a0;
    uStack_50 = uStack_b0;
    local_28 = (undefined4)local_88;
    uStack_24 = local_88._4_4_;
    uStack_20 = (undefined4)uStack_80;
    uStack_1c = uStack_80._4_4_;
    local_38 = (undefined4)local_98;
    uStack_34 = local_98._4_4_;
    uStack_30 = (undefined4)uStack_90;
    uStack_2c = uStack_90._4_4_;
    if ((local_b8 == 0xb7756362) && (uStack_a0 <= uVar7)) {
      if ((char)uStack_b0 == '\0') {
        FVar9 = (FOodleDecoder)::None;
        pFVar10 = (FLZ4Decoder *)&::None;
      }
      else {
        uVar6 = (uint)uStack_b0 & 0xff;
        if (uVar6 == 3) {
          FVar9 = ::Oodle;
          pFVar10 = (FLZ4Decoder *)&::Oodle;
        }
        else {
          if (uVar6 != 4) {
            return false;
          }
          pFVar10 = &LZ4;
          FVar9 = (FOodleDecoder)LZ4;
        }
      }
      local_c8.Data = (longlong *)0x0;
      uVar7 = (**(code **)FVar9)(pFVar10,&local_58);
      FCompositeBuffer::ViewOrCopyRange(param_1,&local_78,0,uVar7,(FUniqueBuffer *)&local_c8);
      local_68.Data = local_78.Data;
      local_68.Size = local_78.Size;
      uVar6 = CalculateCrc32(&local_68);
      pvVar5 = local_c8.Data;
      if (uStack_54 == uVar6) {
        if (local_c8.Data != (longlong *)0x0) {
          LOCK();
          plVar1 = (longlong *)((longlong)local_c8.Data + 0x18);
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (((uint)lVar3 & 0x3fffffff) == 1) {
            (**(code **)(*(longlong *)local_c8.Data + 0x10))(local_c8.Data);
            *(longlong *)((longlong)pvVar5 + 8) = 0;
            *(longlong *)((longlong)pvVar5 + 0x10) = 0;
            LOCK();
            puVar2 = (ulonglong *)((longlong)pvVar5 + 0x18);
            uVar4 = *puVar2;
            *puVar2 = *puVar2 - 0x40000000;
            UNLOCK();
            if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
              (*(code *)**(undefined8 **)pvVar5)(pvVar5,1);
            }
          }
        }
        return true;
      }
      if (local_c8.Data != (longlong *)0x0) {
        LOCK();
        plVar1 = (longlong *)((longlong)local_c8.Data + 0x18);
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (((uint)lVar3 & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_c8.Data + 0x10))(local_c8.Data);
          *(longlong *)((longlong)pvVar5 + 8) = 0;
          *(longlong *)((longlong)pvVar5 + 0x10) = 0;
          LOCK();
          puVar2 = (ulonglong *)((longlong)pvVar5 + 0x18);
          uVar4 = *puVar2;
          *puVar2 = *puVar2 - 0x40000000;
          UNLOCK();
          if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)pvVar5)(pvVar5,1);
          }
        }
      }
    }
  }
  return false;
}

// Write @ 1414ba470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::CompressedBuffer::Private::FHeader::Write(FHeader *this,TMemoryView<void> *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ulonglong local_80;
  uint local_78;
  uint uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar10 = this->Magic;
  uVar3 = this->Crc32;
  uStack_70._0_1_ = this->Method;
  uStack_70._1_1_ = this->Compressor;
  uStack_70._2_1_ = this->CompressionLevel;
  uStack_70._3_1_ = this->BlockSizeExponent;
  uVar11 = this->BlockCount;
  uVar12 = this->TotalRawSize;
  uVar13 = this->TotalCompressedSize;
  local_58 = *(undefined8 *)(this->RawHash).Hash;
  uStack_50 = *(undefined8 *)((this->RawHash).Hash + 8);
  local_48 = *(undefined8 *)((this->RawHash).Hash + 0x10);
  uStack_40 = *(undefined8 *)((this->RawHash).Hash + 0x18);
  uStack_74 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uStack_6c = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar19 = param_1->Size;
  uVar3 = (uVar10 & 0xff0000) >> 8;
  local_78 = uVar10 >> 0x18 | uVar3 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
  uVar18 = (uVar12 & 0xff000000000000) >> 0x28;
  uVar5 = (uVar12 & 0xff0000000000) >> 0x18;
  uVar7 = (uVar12 & 0xff00000000) >> 8;
  local_68 = uVar12 >> 0x38 | uVar18 | uVar5 | uVar7 | (uVar12 & 0xff000000) << 8 |
             (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38;
  uVar4 = (uVar13 & 0xff000000000000) >> 0x28;
  uVar6 = (uVar13 & 0xff0000000000) >> 0x18;
  uVar8 = (uVar13 & 0xff00000000) >> 8;
  uStack_60 = uVar13 >> 0x38 | uVar4 | uVar6 | uVar8 | (uVar13 & 0xff000000) << 8 |
              (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
  if (uVar19 < 0x40) {
    local_88 = 0x40;
    local_80 = uVar19;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InView.Size <= Size",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                        ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.");
    if (bVar15) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  puVar2 = param_1->Data;
  uVar16 = 0;
  uVar14 = CONCAT44(uStack_74,local_78);
  local_78 = uVar10 & 0xffff | uVar3 << 8 | (uVar10 >> 0x18) << 0x18;
  *puVar2 = uVar14;
  puVar2[1] = CONCAT44(uStack_6c,uStack_70);
  uVar17 = 8;
  if (uVar19 < 8) {
    uVar17 = uVar19;
  }
  puVar2[2] = local_68;
  puVar2[3] = uStack_60;
  local_68 = uVar12 & 0xffffffff | uVar7 << 8 | uVar5 << 0x18 | uVar18 << 0x28 |
             (uVar12 >> 0x38) << 0x38;
  pvVar1 = (void *)(uVar17 + (longlong)puVar2);
  uStack_60 = uVar13 & 0xffffffff | uVar8 << 8 | uVar6 << 0x18 | uVar4 << 0x28 |
              (uVar13 >> 0x38) << 0x38;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_58._4_4_;
  *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_50._4_4_;
  puVar2[6] = local_48;
  puVar2[7] = uStack_40;
  uStack_6c = uVar11;
  for (uVar19 = uVar19 - uVar17; uVar19 != 0; uVar19 = uVar19 - uVar18) {
    iVar20 = 0x7fffffff;
    if (uVar19 < 0x7fffffff) {
      iVar20 = (int)uVar19;
    }
    uVar16 = (*FCrc::MemCrc32Func)(pvVar1,iVar20,uVar16);
    uVar18 = (longlong)iVar20;
    if (uVar19 < (ulonglong)(longlong)iVar20) {
      uVar18 = uVar19;
    }
    pvVar1 = (void *)(uVar18 + (longlong)pvVar1);
  }
  local_80 = param_1->Size;
  local_78 = local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 | (local_78 & 0xff00) << 8 |
             local_78 << 0x18;
  uStack_74 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
  uStack_6c = uStack_6c >> 0x18 | (uStack_6c & 0xff0000) >> 8 | (uStack_6c & 0xff00) << 8 |
              uStack_6c << 0x18;
  local_68 = local_68 >> 0x38 | (local_68 & 0xff000000000000) >> 0x28 |
             (local_68 & 0xff0000000000) >> 0x18 | (local_68 & 0xff00000000) >> 8 |
             (local_68 & 0xff000000) << 8 | (local_68 & 0xff0000) << 0x18 |
             (local_68 & 0xff00) << 0x28 | local_68 << 0x38;
  uStack_60 = uStack_60 >> 0x38 | (uStack_60 & 0xff000000000000) >> 0x28 |
              (uStack_60 & 0xff0000000000) >> 0x18 | (uStack_60 & 0xff00000000) >> 8 |
              (uStack_60 & 0xff000000) << 8 | (uStack_60 & 0xff0000) << 0x18 |
              (uStack_60 & 0xff00) << 0x28 | uStack_60 << 0x38;
  if (local_80 < 0x40) {
    local_88 = 0x40;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InView.Size <= Size",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                        ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.");
    if (bVar15) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  puVar2 = param_1->Data;
  *puVar2 = CONCAT44(uStack_74,local_78);
  puVar2[1] = CONCAT44(uStack_6c,uStack_70);
  puVar2[2] = local_68;
  puVar2[3] = uStack_60;
  puVar2[4] = local_58;
  puVar2[5] = uStack_50;
  puVar2[6] = local_48;
  puVar2[7] = uStack_40;
  return;
}

// Decode @ 14174f210

FHeader * __cdecl FIoChunkEncoding::FHeader::Decode(TMemoryView<void_const_> *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  FHeader *pFVar3;
  
  if (param_1->Size < 0x10) {
    return (FHeader *)0x0;
  }
  pFVar3 = param_1->Data;
  if (((*(uint *)pFVar3 & 0xffffff) != 0x2e696f) ||
     (uVar2 = (ulonglong)(uint)(1 << (pFVar3->BlockSizeExponent & 0x1f)),
     uVar1._0_3_ = pFVar3->Magic, uVar1._3_5_ = pFVar3->RawSize,
     param_1->Size < ((((uVar1 >> 0x18) - 1) + uVar2) / uVar2 & 0xffffffff) * 4 + 0x10)) {
    pFVar3 = (FHeader *)0x0;
  }
  return pFVar3;
}

// GetBlockCount @ 14175b940

uint __thiscall FIoChunkEncoding::FHeader::GetBlockCount(FHeader *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((*(uint *)this & 0xffffff) != 0x2e696f) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar5 = (ulonglong)(uint)(1 << (this->BlockSizeExponent & 0x1f));
  uVar1._0_3_ = this->Magic;
  uVar1._3_5_ = this->RawSize;
  return (uint)((((uVar1 >> 0x18) - 1) + uVar5) / uVar5);
}

// GetBlockSize @ 14175b9b0

uint __thiscall FIoChunkEncoding::FHeader::GetBlockSize(FHeader *this)

{
  return 1 << (this->BlockSizeExponent & 0x1f);
}

// GetBlocks @ 14175b9d0

TArrayView<unsigned_int_const_,int> * __thiscall
FIoChunkEncoding::FHeader::GetBlocks
          (FHeader *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<unsigned_int_const_,int> *pTVar5;
  ulonglong uVar6;
  
  if ((*(uint *)this & 0xffffff) != 0x2e696f) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                       ,0x22,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  if ((*(uint *)this & 0xffffff) != 0x2e696f) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar6 = (ulonglong)(uint)(1 << (this->BlockSizeExponent & 0x1f));
  __return_storage_ptr__->DataPtr = (uint *)(this + 1);
  uVar1._0_3_ = this->Magic;
  uVar1._3_5_ = this->RawSize;
  iVar4 = (int)((((uVar1 >> 0x18) - 1) + uVar6) / uVar6);
  __return_storage_ptr__->ArrayNum = iVar4;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetTotalHeaderSize @ 141761ad0

ulong64 __thiscall FIoChunkEncoding::FHeader::GetTotalHeaderSize(FHeader *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  
  if ((*(uint *)this & 0xffffff) != 0x2e696f) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                       ,0x29,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if ((*(uint *)this & 0xffffff) != 0x2e696f) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar5 = (ulonglong)(uint)(1 << (this->BlockSizeExponent & 0x1f));
  uVar1._0_3_ = this->Magic;
  uVar1._3_5_ = this->RawSize;
  return ((((uVar1 >> 0x18) - 1) + uVar5) / uVar5 & 0xffffffff) * 4 + 0x10;
}

// IsValid @ 1417670c0

bool __thiscall FIoChunkEncoding::FHeader::IsValid(FHeader *this)

{
  return (*(uint *)this & 0xffffff) == 0x2e696f;
}

