// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebSockets
// Functions: 1

// FLwsReceiveBufferBinaryFragment @ 14b3f81d0

FLwsReceiveBufferBinaryFragment * __thiscall
FLwsReceiveBufferBinaryFragment::FLwsReceiveBufferBinaryFragment
          (FLwsReceiveBufferBinaryFragment *this,uchar *param_1,int param_2,bool param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLwsReceiveBufferBinaryFragment *pFVar6;
  
  (this->Payload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Payload).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->Payload).ArrayMax;
  *piVar2 = 0;
  this->bIsLastFragment = param_3;
  if (param_1 == (uchar *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FLwsReceiveBufferBinaryFragment *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                       ,0x35,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FLwsReceiveBufferBinaryFragment *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((param_1 == (uchar *)0x0) && (param_2 != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FLwsReceiveBufferBinaryFragment *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_2,(ForAnyElementType *)this,piVar1,piVar2);
  if (param_2 != 0) {
    memcpy((this->Payload).AllocatorInstance.Data + iVar5,param_1,(longlong)param_2);
  }
  return this;
}

