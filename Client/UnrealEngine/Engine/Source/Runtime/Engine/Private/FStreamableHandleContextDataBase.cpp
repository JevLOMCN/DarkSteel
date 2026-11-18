// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// AllocateClassTypeId @ 1487883d0

uchar __cdecl FStreamableHandleContextDataBase::AllocateClassTypeId(void)

{
  code *pcVar1;
  atomic<unsigned_char> aVar2;
  atomic<unsigned_char> aVar3;
  uchar uVar4;
  bool bVar5;
  
  aVar3 = TypeNum;
  LOCK();
  aVar2 = (atomic<unsigned_char>)((char)TypeNum + '\x01');
  UNLOCK();
  bVar5 = TypeNum == (atomic<unsigned_char>)0xff;
  TypeNum = aVar2;
  if (bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result != TStreamableHandleContextDataTypeIDInvalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                       ,0x18a,
                       L"Overflow in TypeNum: too many TStreamableHandleContextData subclasses. Change the TStreamableHandleContextDataTypeID typedef if more subclasses are needed."
                      );
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return (uchar)aVar3;
}

