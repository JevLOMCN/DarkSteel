// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetArchetypeFromLoader @ 148b3f5a0

UObject * __thiscall FCPFUOWriter::GetArchetypeFromLoader(FCPFUOWriter *this,UObject *param_1)

{
  UObject *pUVar1;
  
  if ((param_1 != this->SourceObject) || (pUVar1 = this->SourceArchetype, pUVar1 == (UObject *)0x0))
  {
    pUVar1 = (UObject *)0x0;
  }
  return pUVar1;
}

// MarkScriptSerializationEnd @ 148b692c0

void __thiscall FCPFUOWriter::MarkScriptSerializationEnd(FCPFUOWriter *this,UObject *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + -1;
  return;
}

// MarkScriptSerializationStart @ 148b692e0

void __thiscall FCPFUOWriter::MarkScriptSerializationStart(FCPFUOWriter *this,UObject *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  return;
}

// Serialize @ 148b75290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCPFUOWriter::Serialize(FCPFUOWriter *this,void *param_1,long64 param_2)

{
  uint uVar1;
  ForAnyElementType *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  FString local_18;
  
  if (((char)this->_padding_ != '\0') || (0 < *(int *)((longlong)&this->_padding_ + 4))) {
    lVar7 = (longlong)*(int *)(this->_padding_ + 8);
    lVar8 = (param_2 - lVar7) + this->_padding_;
    if (0 < lVar8) {
      if (0x7ffffffe < lVar7 + lVar8) {
        ::FName::ToString((FName *)&this->_padding_,&local_18);
        UE::Logging::Private::BasicFatalLog
                  (&`public:_virtual_void___cdecl_TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(void*___ptr64,__int64)___ptr64'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      pFVar2 = (ForAnyElementType *)this->_padding_;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)lVar8,pFVar2,(int *)(pFVar2 + 1),(int *)((longlong)&pFVar2[1].Data + 4));
    }
    if (((longlong)*(int *)(this->_padding_ + 8) < this->_padding_ + param_2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset + Num) <= Bytes.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryWriter.h"
                           ,0x39,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_2 != 0) {
      uVar1 = (uint)this->_padding_;
      plVar3 = (longlong *)this->_padding_;
      uVar6 = 0;
      if ((int)uVar1 < (int)plVar3[1]) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy((void *)((longlong)(int)uVar1 + *plVar3),param_1,param_2);
      this->_padding_ = this->_padding_ + param_2;
    }
  }
  return;
}

