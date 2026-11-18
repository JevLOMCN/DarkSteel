// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 7

// ~FChannelProvider @ 14d3d00f0

void __thiscall TraceServices::FChannelProvider::~FChannelProvider(FChannelProvider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FChannelProvider_TraceServices__6B_;
  DestructItems<TraceServices::FChannelEntry,int>
            ((FChannelEntry *)(this->Channels).AllocatorInstance.Data,(this->Channels).ArrayNum);
  pFVar1 = (this->Channels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FChannelProvider @ 14d420c40

FChannelProvider * __thiscall
TraceServices::FChannelProvider::FChannelProvider(FChannelProvider *this)

{
  FDateTime FVar1;
  
  this->_padding_ = (longlong)&___7FChannelProvider_TraceServices__6B_;
  (this->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Channels).ArrayNum = 0;
  (this->Channels).ArrayMax = 0;
  (this->TimeStamp).Ticks = 0;
  FVar1 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
  (this->TimeStamp).Ticks = *FVar1.Ticks;
  return this;
}

// AnnounceChannel @ 14d43ee40

/* WARNING: Removing unreachable block (ram,0x00014d43f048) */

void __thiscall
TraceServices::FChannelProvider::AnnounceChannel
          (FChannelProvider *this,wchar_t *param_1,uint param_2,bool param_3)

{
  int *piVar1;
  ushort uVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FDateTime FVar6;
  FScriptContainerElement *pFVar7;
  FString local_58;
  uint local_48 [2];
  ForAnyElementType local_40;
  undefined8 local_38;
  FScriptContainerElement local_30;
  FScriptContainerElement local_2f;
  
  ::FString::FString(&local_58,param_1);
  if (*param_1 != L'\0') {
    iVar5 = local_58.Data.ArrayNum;
    if (iVar5 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = local_58.Data.ArrayNum;
    }
    uVar2 = *(ushort *)local_58.Data.AllocatorInstance.Data;
    if ((iVar5 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(ushort *)local_58.Data.AllocatorInstance.Data =
         uVar2 - (-(ushort)(uVar2 - 0x61 < 0x1a) & 0x20);
  }
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  local_40.Data = (FScriptContainerElement *)0x0;
  iVar5 = local_58.Data.ArrayNum;
  local_38 = CONCAT44(local_38._4_4_,iVar5);
  local_48[0] = param_2;
  if (iVar5 == 0) {
    local_38 = local_58.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_40,iVar5,(int *)((longlong)&local_38 + 4));
    memcpy(local_40.Data,_Src.Data,(longlong)iVar5 * 2);
  }
  pFVar7 = (this->Channels).AllocatorInstance.Data;
  local_30 = (FScriptContainerElement)0x0;
  local_2f = (FScriptContainerElement)param_3;
  if (((pFVar7 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar7 + (longlong)(this->Channels).ArrayMax * 0x20))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->Channels).ArrayNum;
  piVar1 = &(this->Channels).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->Channels).AllocatorInstance,piVar1);
  }
  (this->Channels).ArrayNum = iVar5 + 1;
  pFVar7 = (this->Channels).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(uint *)pFVar7 = local_48[0];
  *(undefined8 *)(pFVar7 + 8) = 0;
  *(FScriptContainerElement **)(pFVar7 + 8) = local_40.Data;
  *(undefined4 *)(pFVar7 + 0x10) = (undefined4)local_38;
  *(undefined4 *)(pFVar7 + 0x14) = local_38._4_4_;
  pFVar7[0x18] = local_30;
  pFVar7[0x19] = local_2f;
  local_38 = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  FVar6 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
  (this->TimeStamp).Ticks = *FVar6.Ticks;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// GetChannelCount @ 14d462170

ulong64 __thiscall TraceServices::FChannelProvider::GetChannelCount(FChannelProvider *this)

{
  return (longlong)(this->Channels).ArrayNum;
}

// GetChannels @ 14d462200

TArray<TraceServices::FChannelEntry,TSizedDefaultAllocator<32>_> * __thiscall
TraceServices::FChannelProvider::GetChannels(FChannelProvider *this)

{
  return &this->Channels;
}

// GetTimeStamp @ 14d46e420

FDateTime __thiscall TraceServices::FChannelProvider::GetTimeStamp(FChannelProvider *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->TimeStamp).Ticks;
  return (FDateTime)(long64)in_RDX;
}

// UpdateChannel @ 14d48ec20

void __thiscall
TraceServices::FChannelProvider::UpdateChannel(FChannelProvider *this,uint param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FDateTime FVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->Channels).AllocatorInstance.Data;
  pFVar3 = pFVar1 + (longlong)(this->Channels).ArrayNum * 0x20;
  do {
    if (pFVar1 == pFVar3) {
LAB_14d48ec53:
      FVar2 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
      (this->TimeStamp).Ticks = *FVar2.Ticks;
      return;
    }
    if (*(uint *)pFVar1 == param_1) {
      pFVar1[0x18] = (FScriptContainerElement)param_2;
      goto LAB_14d48ec53;
    }
    pFVar1 = pFVar1 + 0x20;
  } while( true );
}

