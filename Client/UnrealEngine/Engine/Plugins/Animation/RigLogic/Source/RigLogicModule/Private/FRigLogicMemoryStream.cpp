// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 11

// FRigLogicMemoryStream @ 14a660340

FRigLogicMemoryStream * __thiscall
FRigLogicMemoryStream::FRigLogicMemoryStream
          (FRigLogicMemoryStream *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  this->PositionInBuffer = 0;
  this->_padding_ = (longlong)&_vftable__for__trio__Openable__;
  this->_padding_ = (longlong)&_vftable__for__trio__Closeable__;
  this->_padding_ = (longlong)&_vftable__for__trio__Readable__;
  this->_padding_ = (longlong)&_vftable__for__trio__Writable__;
  this->_padding_ = (longlong)&_vftable__for__trio__Seekable__;
  this->_padding_ = (longlong)&_vftable__for__trio__Bounded__;
  this->BitStreamBuffer = param_1;
  return this;
}

// Grow @ 14a67a9c0

void __thiscall FRigLogicMemoryStream::Grow(FRigLogicMemoryStream *this,ulong64 param_1)

{
  int iVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  iVar1 = this->BitStreamBuffer->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2590778518384148548>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogicMemoryStream.cpp"
                       ,0x44,"BufferSize >= 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((ulonglong)(longlong)iVar1 < param_1) {
    pTVar2 = this->BitStreamBuffer;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)param_1 - iVar1,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,
               &pTVar2->ArrayMax);
  }
  return;
}

// close @ 14a6892c0

void __thiscall FRigLogicMemoryStream::close(FRigLogicMemoryStream *this)

{
  return;
}

// open @ 14a68b9e0

void __thiscall FRigLogicMemoryStream::open(FRigLogicMemoryStream *this)

{
  this->PositionInBuffer = 0;
  return;
}

// read @ 14a68bb10

ulong64 __thiscall
FRigLogicMemoryStream::read(FRigLogicMemoryStream *this,char *param_1,ulong64 param_2)

{
  memcpy(param_1,(void *)(*(longlong *)this->_padding_ + this->_padding_),param_2);
  this->_padding_ = this->_padding_ + param_2;
  return param_2;
}

// read @ 14a68bb50

ulong64 __thiscall
FRigLogicMemoryStream::read(FRigLogicMemoryStream *this,Writable *param_1,ulong64 param_2)

{
  (**(code **)((longlong)*param_1 + 8))(param_1,*(longlong *)this->_padding_ + this->_padding_);
  this->_padding_ = this->_padding_ + param_2;
  return param_2;
}

// seek @ 14a68bc10

void __thiscall FRigLogicMemoryStream::seek(FRigLogicMemoryStream *this,ulong64 param_1)

{
  this->_padding_ = param_1;
  return;
}

// size @ 14a68bcc0

ulong64 __thiscall FRigLogicMemoryStream::size(FRigLogicMemoryStream *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  
  iVar1 = *(int *)(this->_padding_ + 8);
  if (iVar1 < 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2590778518384148541>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogicMemoryStream.cpp"
                       ,0x3d,"Count >= 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (longlong)iVar1;
}

// tell @ 14a68bd80

ulong64 __thiscall FRigLogicMemoryStream::tell(FRigLogicMemoryStream *this)

{
  return this->_padding_;
}

// write @ 14a68bec0

ulong64 __thiscall
FRigLogicMemoryStream::write(FRigLogicMemoryStream *this,Readable *param_1,ulong64 param_2)

{
  Grow((FRigLogicMemoryStream *)&this[-1]._padding_,this->_padding_ + param_2);
  (**(code **)((longlong)*param_1 + 8))
            (param_1,*(longlong *)this->_padding_ + this->_padding_,param_2);
  this->_padding_ = this->_padding_ + param_2;
  return param_2;
}

// write @ 14a68bf20

ulong64 __thiscall
FRigLogicMemoryStream::write(FRigLogicMemoryStream *this,char *param_1,ulong64 param_2)

{
  Grow((FRigLogicMemoryStream *)&this[-1]._padding_,this->_padding_ + param_2);
  memcpy((void *)(*(longlong *)this->_padding_ + this->_padding_),param_1,param_2);
  this->_padding_ = this->_padding_ + param_2;
  return param_2;
}

