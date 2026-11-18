// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// FMemScope @ 141986890

FMemScope * __thiscall FMemScope::FMemScope(FMemScope *this,FName *param_1,bool param_2)

{
  int iVar1;
  undefined1 local_res8 [4];
  undefined1 local_resc;
  
  (this->Inner).bActive = false;
  if ((param_2 & ((byte)((uint)MemAllocChannel->Enabled >> 0x1f) ^ 1)) != 0) {
    if (GTagTrace != (FTagTrace *)0x0) {
      local_resc = 0;
      iVar1 = FTagTrace::AnnounceFNameTag
                        (GTagTrace,*param_1,-1,(wchar_t *)0x0,(TOptional<int>)local_res8);
      ActivateScope(this,iVar1);
      return this;
    }
    ActivateScope(this,-1);
  }
  return this;
}

// FMemScope @ 141986920

FMemScope * __thiscall FMemScope::FMemScope(FMemScope *this,int param_1,bool param_2)

{
  (this->Inner).bActive = false;
  if ((param_2 & ((byte)((uint)MemAllocChannel->Enabled >> 0x1f) ^ 1)) != 0) {
    ActivateScope(this,param_1);
  }
  return this;
}

// FMemScope @ 141986960

FMemScope * __thiscall FMemScope::FMemScope(FMemScope *this,FTagData *param_1,bool param_2)

{
  int iVar1;
  FName FVar2;
  undefined1 local_res8 [4];
  undefined1 local_resc;
  
  (this->Inner).bActive = false;
  if (((param_2 & ((byte)((uint)MemAllocChannel->Enabled >> 0x1f) ^ 1)) != 0) &&
     (param_1 != (FTagData *)0x0)) {
    FVar2 = UE::LLMPrivate::FTagData::GetName(param_1);
    if (GTagTrace != (FTagTrace *)0x0) {
      local_resc = 0;
      iVar1 = FTagTrace::AnnounceFNameTag
                        (GTagTrace,*(FName *)FVar2,-1,(wchar_t *)0x0,(TOptional<int>)local_res8);
      ActivateScope(this,iVar1);
      return this;
    }
    ActivateScope(this,-1);
  }
  return this;
}

// FMemScope @ 141986a00

FMemScope * __thiscall FMemScope::FMemScope(FMemScope *this,ELLMTag param_1,bool param_2)

{
  (this->Inner).bActive = false;
  if ((param_2 & ((byte)((uint)MemAllocChannel->Enabled >> 0x1f) ^ 1)) != 0) {
    ActivateScope(this,(uint)param_1);
  }
  return this;
}

// FMemScope @ 141986a40

FMemScope * __thiscall FMemScope::FMemScope(FMemScope *this)

{
  (this->Inner).bActive = false;
  return this;
}

// ~FMemScope @ 141987fc0

void __thiscall FMemScope::~FMemScope(FMemScope *this)

{
  if ((this->Inner).bActive != false) {
    *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xbb0)
         = this->PrevTag;
  }
  UE::Trace::Private::FScopedLogScope::Deinit(&this->Inner);
  return;
}

// ActivateScope @ 14198a070

void __thiscall FMemScope::ActivateScope(FMemScope *this,int param_1)

{
  longlong lVar1;
  int *local_18;
  longlong local_10;
  
  UE::Trace::Private::FLogScope::ScopedEnter<FMemoryMemoryScopeFields>((TLogScope<0> *)&local_18);
  if ((this->Inner).bActive == false) {
    (this->Inner).bActive = true;
  }
  *local_18 = param_1;
  *(undefined8 *)(local_10 + 0x28) = *(undefined8 *)(local_10 + 0x20);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  this->PrevTag = *(int *)(lVar1 + 0xbb0);
  *(int *)(lVar1 + 0xbb0) = param_1;
  return;
}

// SetTagAndActivate @ 1419ab550

void __thiscall FMemScope::SetTagAndActivate(FMemScope *this,FName *param_1,bool param_2)

{
  int iVar1;
  undefined1 local_res20 [4];
  undefined1 local_res24;
  
  if ((param_2 & ((byte)((uint)MemAllocChannel->Enabled >> 0x1f) ^ 1)) == 0) {
    return;
  }
  if (GTagTrace != (FTagTrace *)0x0) {
    local_res24 = 0;
    iVar1 = FTagTrace::AnnounceFNameTag
                      (GTagTrace,*param_1,-1,(wchar_t *)0x0,(TOptional<int>)local_res20);
    ActivateScope(this,iVar1);
    return;
  }
  ActivateScope(this,-1);
  return;
}

