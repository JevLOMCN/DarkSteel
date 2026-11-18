// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 3

// FQueryTaskProgressCommand @ 14e660e60

FQueryTaskProgressCommand * __thiscall
UE::Interchange::FQueryTaskProgressCommand::FQueryTaskProgressCommand
          (FQueryTaskProgressCommand *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->TaskIndexes;
  this->_padding_ = (longlong)&___7FQueryTaskProgressCommand_Interchange_UE__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TaskIndexes).ArrayMax;
  (this->TaskIndexes).ArrayNum = 0;
  *piVar2 = 0;
  if (pTVar1 != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar3 = param_1->ArrayNum;
    (this->TaskIndexes).ArrayNum = iVar3;
    if (iVar3 != 0) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
      memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
    }
    return this;
  }
  return this;
}

// GetType @ 14e666070

ECommandId __thiscall
UE::Interchange::FQueryTaskProgressCommand::GetType(FQueryTaskProgressCommand *this)

{
  return QueryTaskProgress;
}

// SerializeImpl @ 14e668120

void __thiscall
UE::Interchange::FQueryTaskProgressCommand::SerializeImpl
          (FQueryTaskProgressCommand *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&this->TaskIndexes);
  return;
}

