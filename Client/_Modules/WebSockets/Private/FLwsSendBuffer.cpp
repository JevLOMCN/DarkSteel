// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebSockets
// Functions: 2

// FLwsSendBuffer @ 14b3f8340

FLwsSendBuffer * __thiscall
FLwsSendBuffer::FLwsSendBuffer(FLwsSendBuffer *this,uchar *param_1,ulong64 param_2,bool param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  FLwsSendBuffer *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  this->bIsBinary = param_3;
  piVar1 = &(this->Payload).ArrayNum;
  this->BytesWritten = 0;
  piVar2 = &(this->Payload).ArrayMax;
  (this->Payload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  this->bHasError = false;
  if (0x7ffffffe < param_2 + 0x10) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("((((4 + 10 + 2) % ((int)sizeof (void *))) ? ((4 + 10 + 2) + (((int)sizeof (void *)) - ((4 + 10 + 2) % ((int)sizeof (void *))))) : (4 + 10 + 2)) + Size) < 2147483647i32"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                       ,0x1a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLwsSendBuffer *)(*pcVar3)();
      return pFVar7;
    }
  }
  if (param_1 == (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLwsSendBuffer *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar4 = (int)param_2;
  uVar9 = iVar4 + 0x10;
  if (-1 < (int)uVar9) {
    if (*piVar2 < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar9,&(this->Payload).AllocatorInstance,*piVar1,piVar2);
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0x10,&(this->Payload).AllocatorInstance,piVar1,piVar2);
    pFVar8 = (this->Payload).AllocatorInstance.Data + iVar6;
    *(undefined8 *)pFVar8 = 0;
    *(undefined8 *)(pFVar8 + 8) = 0;
    if ((param_1 == (uchar *)0x0) && (iVar4 != 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FLwsSendBuffer *)(*pcVar3)();
        return pFVar7;
      }
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar4,&(this->Payload).AllocatorInstance,piVar1,piVar2);
    if (iVar4 != 0) {
      memcpy((this->Payload).AllocatorInstance.Data + iVar6,param_1,(longlong)iVar4);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
}

// GetPayloadSize @ 14b3fcaa0

int __thiscall FLwsSendBuffer::GetPayloadSize(FLwsSendBuffer *this)

{
  return (this->Payload).ArrayNum + -0x10;
}

