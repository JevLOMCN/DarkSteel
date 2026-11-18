// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetRaw @ 148b42040

bool __thiscall
IImageWrapper::GetRaw
          (IImageWrapper *this,ERGBFormat param_1,int param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  char cVar1;
  bool bVar2;
  ERGBFormat local_res10 [8];
  int local_res18 [4];
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_48;
  IImageWrapper *local_30;
  int *local_28;
  ERGBFormat *local_20;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *local_18;
  
  local_48.ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  cVar1 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar1 == '\0') {
LAB_148b420cc:
    bVar2 = false;
  }
  else {
    if (local_48.ArrayNum != (int)local_48.ArrayNum) {
      local_28 = local_res18;
      local_20 = local_res10;
      local_18 = &local_48;
      local_30 = this;
      bVar2 = `IImageWrapper::GetRaw'::__l3::<lambda_1>::operator()(&local_30);
      if (!bVar2) goto LAB_148b420cc;
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<TSizedDefaultAllocator<64>_>
              (param_3,&local_48);
    bVar2 = true;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator() @ 1505367d0

bool __thiscall `IImageWrapper::GetRaw'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3060530056599175492>);
  if (bVar2) {
    (**(code **)(**(longlong **)this + 0x48))();
    (**(code **)(**(longlong **)this + 0x40))();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3060530056599175492>,
                       &`public:___cdecl_`public:_bool___cdecl_IImageWrapper::GetRaw(ERGBFormat,int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

