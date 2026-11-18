// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FScopedRemoteRPCMode @ 141fbea70

FScopedRemoteRPCMode * __thiscall
UE::Net::Private::FScopedRemoteRPCMode::FScopedRemoteRPCMode
          (FScopedRemoteRPCMode *this,UFunction *param_1,ERemoteFunctionMode param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  FCoreNetContext *pFVar4;
  FScopedRemoteRPCMode *pFVar5;
  bool bVar6;
  FCoreNetContext local_res18;
  
  this->bAddToStack = false;
  bVar6 = (param_1->FunctionFlags & (FUNC_NetClient|FUNC_NetServer|FUNC_NetMulticast|FUNC_Net)) ==
          FUNC_Net;
  this->bAddToStack = bVar6;
  if (bVar6) {
    local_res18.RemoteFunctionStack.AllocatorInstance.InlineData[0].Pad = (uchar  [4])param_2;
    pFVar4 = FCoreNetContext::Get();
    if (1 < (uint)(pFVar4->RemoteFunctionStack).ArrayNum) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCoreNetContext::Get()->RemoteFunctionStack.Num() < FCoreNetContext::MaxRemoteStackSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNetContext.cpp"
                         ,0x29,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FScopedRemoteRPCMode *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar4 = FCoreNetContext::Get();
    if ((pFVar4 <= &local_res18) &&
       (&local_res18 <
        (pFVar4->RemoteFunctionStack).AllocatorInstance.InlineData +
        (pFVar4->RemoteFunctionStack).ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FScopedRemoteRPCMode *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar3 = (pFVar4->RemoteFunctionStack).ArrayNum;
    piVar1 = &(pFVar4->RemoteFunctionStack).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<enum_UE::Net::Private::ERemoteFunctionMode>_>
                        (0x404,(ForElementType<UE::Net::Private::ERemoteFunctionMode> *)pFVar4,
                         piVar1);
    }
    (pFVar4->RemoteFunctionStack).ArrayNum = iVar3 + 1;
    *&(pFVar4->RemoteFunctionStack).AllocatorInstance.InlineData[iVar3].Pad =
         local_res18.RemoteFunctionStack.AllocatorInstance.InlineData[0].Pad;
  }
  return this;
}

// ~FScopedRemoteRPCMode @ 141fbfef0

void __thiscall
UE::Net::Private::FScopedRemoteRPCMode::~FScopedRemoteRPCMode(FScopedRemoteRPCMode *this)

{
  uint uVar1;
  int *piVar2;
  TTypeCompatibleBytes<UE::Net::Private::ERemoteFunctionMode> *_Dst;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FCoreNetContext *pFVar6;
  
  if (this->bAddToStack != false) {
    pFVar6 = FCoreNetContext::Get();
    if ((pFVar6->RemoteFunctionStack).ArrayNum == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FCoreNetContext::Get()->RemoteFunctionStack.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNetContext.cpp"
                         ,0x32,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar6 = FCoreNetContext::Get();
    if ((pFVar6->RemoteFunctionStack).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar3 = (pFVar6->RemoteFunctionStack).ArrayNum;
    uVar1 = iVar3 - 1;
    _Dst = (pFVar6->RemoteFunctionStack).AllocatorInstance.InlineData + (int)uVar1;
    iVar3 = ~uVar1 + iVar3;
    if (iVar3 != 0) {
      memmove(_Dst,_Dst + 1,(longlong)iVar3 << 2);
    }
    piVar2 = &(pFVar6->RemoteFunctionStack).ArrayNum;
    *piVar2 = *piVar2 + -1;
  }
  return;
}

