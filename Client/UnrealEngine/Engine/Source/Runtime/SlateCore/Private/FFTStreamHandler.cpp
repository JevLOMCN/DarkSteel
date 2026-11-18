// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// FFTStreamHandler @ 142472030

FFTStreamHandler * __thiscall
FFreeTypeFace::FFTStreamHandler::FFTStreamHandler(FFTStreamHandler *this,FString *param_1)

{
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar1;
  IFileHandle *pIVar2;
  long64 lVar3;
  wchar_t *pwVar4;
  
  this_00 = FPlatformFileManager::Get();
  pIVar1 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pIVar2 = (IFileHandle *)(**(code **)((longlong)*pIVar1 + 0xe8))(pIVar1,pwVar4,0);
  this->FileHandle = pIVar2;
  if (pIVar2 != (IFileHandle *)0x0) {
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2);
    this->FontSizeBytes = lVar3;
    return this;
  }
  this->FontSizeBytes = 0;
  return this;
}

// FFTStreamHandler @ 1424720c0

FFTStreamHandler * __thiscall
FFreeTypeFace::FFTStreamHandler::FFTStreamHandler(FFTStreamHandler *this)

{
  this->FileHandle = (IFileHandle *)0x0;
  this->FontSizeBytes = 0;
  return this;
}

// ~FFTStreamHandler @ 142478e70

void __thiscall FFreeTypeFace::FFTStreamHandler::~FFTStreamHandler(FFTStreamHandler *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->FileHandle != (IFileHandle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FileHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                       ,0x286,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CloseFile @ 142481f00

void __cdecl FFreeTypeFace::FFTStreamHandler::CloseFile(FT_StreamRec_ *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (param_1->descriptor).pointer;
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  return;
}

// ReadData @ 1424a2590

ulong __cdecl
FFreeTypeFace::FFTStreamHandler::ReadData
          (FT_StreamRec_ *param_1,ulong param_2,uchar *param_3,ulong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar1 = (param_1->descriptor).pointer;
  plVar2 = (longlong *)*plVar1;
  if ((plVar2 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2), cVar3 == '\0')) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  plVar1 = (longlong *)*plVar1;
  if ((plVar1 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_3,param_4), cVar3 != '\0')) {
    return param_4;
  }
  return 0;
}

