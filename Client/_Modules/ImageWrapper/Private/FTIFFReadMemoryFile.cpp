// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 7

// Close @ 142684980

int __cdecl UE::ImageWrapper::Private::FTIFFReadMemoryFile::Close(void *param_1)

{
  return 0;
}

// GetSize @ 14268bdb0

ulong64 __cdecl UE::ImageWrapper::Private::FTIFFReadMemoryFile::GetSize(void *param_1)

{
  return *(ulong64 *)((longlong)param_1 + 0x30);
}

// MapFile @ 14268cf00

int __cdecl
UE::ImageWrapper::Private::FTIFFReadMemoryFile::MapFile
          (void *param_1,void **param_2,ulong64 *param_3)

{
  return 0;
}

// Read @ 14268d310

long64 __cdecl
UE::ImageWrapper::Private::FTIFFReadMemoryFile::Read(void *param_1,void *param_2,long64 param_3)

{
  longlong lVar1;
  size_t sVar2;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x68);
  if ((-1 < lVar1) && (lVar1 < *(longlong *)((longlong)param_1 + 0x30))) {
    sVar2 = *(longlong *)((longlong)param_1 + 0x30) - lVar1;
    if ((longlong)sVar2 < param_3) {
      param_3 = sVar2;
    }
    memcpy(param_2,(void *)(*(longlong *)((longlong)param_1 + 0x28) + lVar1),param_3);
    *(longlong *)((longlong)param_1 + 0x68) = *(longlong *)((longlong)param_1 + 0x68) + param_3;
    return param_3;
  }
  return 0;
}

// Seek @ 14268d880

ulong64 __cdecl
UE::ImageWrapper::Private::FTIFFReadMemoryFile::Seek(void *param_1,ulong64 param_2,int param_3)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  
  if (param_3 == 0) {
    bVar2 = param_2 < 0x8000000000000000;
  }
  else {
    if (param_3 == 1) {
      uVar3 = *(ulonglong *)((longlong)param_1 + 0x68);
    }
    else {
      if (param_3 != 2) {
        return 0xffffffffffffffff;
      }
      uVar3 = *(ulonglong *)((longlong)param_1 + 0x30);
    }
    uVar1 = uVar3 + param_2;
    if ((longlong)((uVar1 ^ uVar3) & (uVar1 ^ param_2)) < 0) {
      bVar2 = false;
      param_2 = 0;
    }
    else {
      bVar2 = true;
      param_2 = uVar1;
    }
  }
  if (!bVar2) {
    param_2 = *(ulonglong *)((longlong)param_1 + 0x68);
  }
  if ((longlong)param_2 < 0) {
    param_2 = 0;
  }
  *(ulong64 *)((longlong)param_1 + 0x68) = param_2;
  return param_2;
}

// UnmapFile @ 1426922c0

void __cdecl
UE::ImageWrapper::Private::FTIFFReadMemoryFile::UnmapFile
          (void *param_1,void *param_2,ulong64 param_3)

{
  return;
}

// Write @ 1426924b0

long64 __cdecl
UE::ImageWrapper::Private::FTIFFReadMemoryFile::Write(void *param_1,void *param_2,long64 param_3)

{
  return -1;
}

