// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 1

// Initialize @ 14ca224c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FHuffmanDecodeTable::Initialize(FHuffmanDecodeTable *this,FHuffmanBitStreamReader *param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulong64 uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  ushort *puVar12;
  undefined1 auStack_358 [32];
  FTableEntry local_338;
  byte local_328 [256];
  ushort local_228 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_358;
  uVar4 = param_1->BitBufferBits;
  uVar5 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar4 & 0x3f) |
          param_1->BitBuffer;
  param_1->BytePos = (0x3f - uVar4 >> 3) + param_1->BytePos;
  uVar7 = (uint)uVar5 & 0x1ff;
  param_1->BitBuffer = uVar5 >> 9;
  param_1->BitBufferBits = (uVar4 | 0x38) - 9;
  if (uVar7 < 0x101) {
    if ((uVar5 & 0x1ff) == 0) {
      GenerateHuffmanCodes(local_228,local_328,uVar7,0xb);
      return;
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSymbols <= 256",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanTable.cpp"
                       ,0x11a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = param_1->BitBufferBits;
  uVar9 = param_1->BytePos;
  uVar8 = param_1->BitBuffer;
  puVar1 = param_1->Bytes;
  uVar5 = (ulonglong)uVar7;
  pbVar11 = local_328;
  do {
    uVar6 = *(longlong *)(puVar1 + uVar9) << ((byte)uVar4 & 0x3f) | uVar8;
    uVar8 = uVar6 >> 4;
    uVar9 = uVar9 + (0x3f - uVar4 >> 3);
    uVar4 = (uVar4 | 0x38) - 4;
    param_1->BytePos = uVar9;
    param_1->BitBuffer = uVar8;
    *pbVar11 = (byte)uVar6 & 0xf;
    param_1->BitBufferBits = uVar4;
    uVar5 = uVar5 - 1;
    pbVar11 = pbVar11 + 1;
  } while (uVar5 != 0);
  GenerateHuffmanCodes(local_228,local_328,uVar7,0xb);
  iVar10 = 0;
  pbVar11 = local_328;
  puVar12 = local_228;
  do {
    local_338.Length = *pbVar11;
    if (local_338.Length != 0) {
      uVar5 = (ulonglong)*puVar12;
      local_338.Symbol = (schar)iVar10;
      do {
        this->TableEntries[uVar5] = local_338;
        uVar4 = (int)uVar5 + (1 << (local_338.Length & 0x1fU));
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < 0x800);
    }
    iVar10 = iVar10 + 1;
    pbVar11 = pbVar11 + 1;
    puVar12 = puVar12 + 1;
  } while (iVar10 < (int)uVar7);
  return;
}

