// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12ConstantBuffer @ 1459a8fe0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ConstantBuffer * __thiscall
FD3D12ConstantBuffer::FD3D12ConstantBuffer
          (FD3D12ConstantBuffer *this,FD3D12Device *param_1,FD3D12FastConstantAllocator *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FD3D12ConstantBuffer__6B_;
  (this->ShadowData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShadowData).ArrayNum = 0;
  (this->ShadowData).ArrayMax = 0;
  this->CurrentUpdateSize = 0;
  this->TotalUpdateSize = 0;
  this->bIsDirty = false;
  this->Allocator = param_2;
  return this;
}

// ~FD3D12ConstantBuffer @ 1459ac530

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12ConstantBuffer::~FD3D12ConstantBuffer(FD3D12ConstantBuffer *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FD3D12ConstantBuffer__6B_;
  pFVar1 = (this->ShadowData).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// Version @ 1459e0ec0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __thiscall
FD3D12ConstantBuffer::Version
          (FD3D12ConstantBuffer *this,FD3D12ResourceLocation *param_1,bool param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  void *_Dst;
  uint uVar5;
  
  uVar5 = this->CurrentUpdateSize;
  if (uVar5 == 0) {
    return false;
  }
  if (param_2) {
    this->TotalUpdateSize = uVar5;
  }
  else {
    uVar2 = this->TotalUpdateSize;
    if (this->TotalUpdateSize < uVar5) {
      uVar2 = uVar5;
    }
    uVar5 = uVar2;
    this->TotalUpdateSize = uVar5;
  }
  _Dst = FD3D12FastConstantAllocator::Allocate
                   (this->Allocator,uVar5,param_1,(FD3D12ConstantBufferView *)0x0);
  if ((uint)(this->ShadowData).ArrayNum < this->TotalUpdateSize) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TotalUpdateSize <= (uint32)ShadowData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12ConstantBuffer.cpp"
                       ,0x39,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  memcpy(_Dst,(this->ShadowData).AllocatorInstance.Data,(ulonglong)this->TotalUpdateSize);
  this->bIsDirty = false;
  return true;
}

