// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: binka_ue_decode_win64_static
// Functions: 5

// UEBinkAudioDecompressMemory @ 14f8d2100

uint __cdecl UEBinkAudioDecompressMemory(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = BinkAudioDecompressMemoryUEBA(param_1,param_2,0);
  return uVar1;
}

// UEBinkAudioDecompressOpen @ 14f8d2110

uint __cdecl
UEBinkAudioDecompressOpen(void *param_1,uint param_2,uint param_3,bool param_4,bool param_5)

{
  uint uVar1;
  
  uVar1 = (uint)param_5 << 2 | 2;
  if (param_4) {
    uVar1 = (uint)param_5 << 2;
  }
  uVar1 = BinkAudioDecompressOpenUEBA(param_1,param_2,param_3,uVar1);
  return uVar1;
}

// UEBinkAudioDecompress @ 14f8d2140

uint __cdecl
UEBinkAudioDecompress(void *param_1,uchar *param_2,uint param_3,uchar **param_4,uchar *param_5)

{
  BINKAC_IN local_48;
  BINKAC_OUT_RINGBUF local_38;
  
  local_38.outend = param_2 + param_3;
  local_48.inptr = *param_4;
  local_48.inend = param_5;
  local_38.eatfirst = 0;
  local_38.outptr = param_2;
  local_38.outstart = param_2;
  local_38.outlen = param_3;
  BinkAudioDecompressUEBA(param_1,&local_38,&local_48);
  *param_4 = local_48.inptr;
  return local_38.decoded_bytes;
}

// UEBinkAudioDecompressResetStartFrame @ 14f8d21b0

void __cdecl UEBinkAudioDecompressResetStartFrame(void *param_1)

{
  if (param_1 != (void *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  }
  return;
}

// UnrealBinkAudioDecodeInterface @ 14f8d21c0

UEBinkAudioDecodeInterface * __cdecl UnrealBinkAudioDecodeInterface(void)

{
  return &Interface;
}

