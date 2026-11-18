// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 3

// DereferenceIfNecessary<FGPUTextureTransferModule,FGPUTextureTransferModule_*_&> @ 14d756a80

FGPUTextureTransferModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FGPUTextureTransferModule,FGPUTextureTransferModule_*_&>
          (FGPUTextureTransferModule **param_1)

{
  return *param_1;
}

// CleanupTextureTransfer @ 14d758510

void __cdecl UE::GPUTextureTransfer::CleanupTextureTransfer(ITextureTransfer *param_1)

{
  FTextureTransfersWrapper::CleanupTextureTransfer(&TextureTransfersWrapper,param_1);
  return;
}

// GetTextureTransfer @ 14d759b80

ITextureTransfer * __cdecl UE::GPUTextureTransfer::GetTextureTransfer(FInitializeDMAArgs *param_1)

{
  ERHI EVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  ITextureTransfer *pIVar5;
  FTextureTransferBase *this;
  ulonglong uVar6;
  
  EVar1 = param_1->RHI;
  uVar6 = (ulonglong)EVar1;
  if ((TextureTransfersWrapper.Transfers.ArrayNum <= (int)(uint)EVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pIVar5 = (ITextureTransfer *)(*pcVar2)();
    return pIVar5;
  }
  if (*(longlong *)(TextureTransfersWrapper.Transfers.AllocatorInstance.Data + uVar6 * 8) != 0) {
    if ((TextureTransfersWrapper.Transfers.ArrayNum <= (int)(uint)EVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pIVar5 = (ITextureTransfer *)(*pcVar2)();
      return pIVar5;
    }
    return *(ITextureTransfer **)
            (TextureTransfersWrapper.Transfers.AllocatorInstance.Data + uVar6 * 8);
  }
  if (param_1->RHI == D3D11) {
    this = ::operator_new(0xf8);
    if (this != (FTextureTransferBase *)0x0) {
      memset(this,0,0xf8);
      Private::FTextureTransferBase::FTextureTransferBase(this);
      this[1]._padding_ = 0;
      this->_padding_ = (longlong)&___7FD3D11TextureTransfer_Private_GPUTextureTransfer_UE__6B_;
      goto LAB_14d759ce4;
    }
  }
  else {
    if (param_1->RHI != D3D12) {
      return (ITextureTransfer *)0x0;
    }
    this = ::operator_new(0x100);
    if (this != (FTextureTransferBase *)0x0) {
      memset(this,0,0x100);
      Private::FTextureTransferBase::FTextureTransferBase(this);
      this[1].bInitialized = false;
      *(undefined3 *)&this[1].field_0x9 = 0;
      this[1]._padding_ = 0;
      this[1]._padding_ = 0;
      this->_padding_ = (longlong)&___7FD3D12TextureTransfer_Private_GPUTextureTransfer_UE__6B_;
      goto LAB_14d759ce4;
    }
  }
  this = (FTextureTransferBase *)0x0;
LAB_14d759ce4:
  cVar4 = (**(code **)(this->_padding_ + 0x78))(this,param_1);
  if (cVar4 == '\0') {
    (**(code **)this->_padding_)(this,1);
  }
  else {
    if ((TextureTransfersWrapper.Transfers.ArrayNum <= (int)(uint)EVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pIVar5 = (ITextureTransfer *)(*pcVar2)();
      return pIVar5;
    }
    *(FTextureTransferBase **)(TextureTransfersWrapper.Transfers.AllocatorInstance.Data + uVar6 * 8)
         = this;
  }
  if ((TextureTransfersWrapper.Transfers.ArrayNum <= (int)(uint)EVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pIVar5 = (ITextureTransfer *)(*pcVar2)();
    return pIVar5;
  }
  return *(ITextureTransfer **)
          (TextureTransfersWrapper.Transfers.AllocatorInstance.Data + uVar6 * 8);
}

