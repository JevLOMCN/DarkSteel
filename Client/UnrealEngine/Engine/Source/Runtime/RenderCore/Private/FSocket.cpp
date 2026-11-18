// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Reset @ 145d489e0

void __thiscall GPUMessage::FSocket::Reset(FSocket *this)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  TRDGHandle<GPUMessage::FSocket,unsigned_int> local_res8 [2];
  
  uVar1 = (this->MessageId).Index;
  if ((uVar1 == 0xffffffff) || (GSystem._24_4_ == -1)) {
    (this->MessageId).Index = 0xffffffff;
    return;
  }
  local_res8[0].Index = uVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)&GSystem.field_0x20);
  if (GSystem._80_4_ != GSystem._124_4_) {
    lVar5 = 0x15517a4d8;
    if (GSystem._136_8_ != 0) {
      lVar5 = GSystem._136_8_;
    }
    for (iVar2 = *(int *)(lVar5 + (ulonglong)(GSystem._144_4_ - 1 & uVar1) * 4); iVar2 != -1;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + GSystem._72_8_)) {
      if (*(uint *)((longlong)iVar2 * 0x20 + GSystem._72_8_) == uVar1) goto LAB_145d48a91;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("MessageHandlers.Contains(MessageId)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GPUMessaging.cpp"
                     ,0x44,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_145d48a91:
  if (GSystem._80_4_ != GSystem._124_4_) {
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                           ,0x166,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TSet<TTuple<TRDGHandle<GPUMessage::FSocket,unsigned_int>,TSharedPtr<GPUMessage::FHandler,1>_>,TDefaultMapHashableKeyFuncs<TRDGHandle<GPUMessage::FSocket,unsigned_int>,TSharedPtr<GPUMessage::FHandler,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TRDGHandle<GPUMessage::FSocket,unsigned_int>_>
              ((TSet<TTuple<TRDGHandle<GPUMessage::FSocket,unsigned_int>,TSharedPtr<GPUMessage::FHandler,1>_>,TDefaultMapHashableKeyFuncs<TRDGHandle<GPUMessage::FSocket,unsigned_int>,TSharedPtr<GPUMessage::FHandler,1>,0>,FDefaultSetAllocator>
                *)&GSystem.field_0x48,uVar1,local_res8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GSystem.field_0x20);
  (this->MessageId).Index = 0xffffffff;
  return;
}

