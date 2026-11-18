// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SandboxFile
// Functions: 11

// `dynamic_initializer_for_'ModuleRegistrantSandboxFile'' @ 141164700

void __cdecl _dynamic_initializer_for__ModuleRegistrantSandboxFile__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SandboxFile";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SandboxFile",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSandboxFileModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'SandboxFile'' @ 141164750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__SandboxFile__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&SandboxFile,L"SandboxFile",Log,All);
  atexit(_dynamic_atexit_destructor_for__SandboxFile__);
  return;
}

// `scalar_deleting_destructor' @ 148b802c0

void * __thiscall
FSandboxFileModule::_scalar_deleting_destructor_(FSandboxFileModule *this,uint param_1)

{
  *this = (FSandboxFileModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148b80690

void * __thiscall
`FSandboxPlatformFile::FindFiles'::__l2::FFileMatch::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  *(undefined ***)this = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148b806e0

void * __thiscall
FSandboxPlatformFile::_scalar_deleting_destructor_(FSandboxPlatformFile *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSandboxPlatformFile__6B_;
  pFVar1 = (this->InjectedTargetDirectoryParent).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InjectedTargetDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InjectedSourceDirectoryParent).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InjectedSourceDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->DirectoryExclusionWildcards).AllocatorInstance.Data,
             (this->DirectoryExclusionWildcards).ArrayNum);
  pFVar1 = (this->DirectoryExclusionWildcards).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->FileExclusionWildcards).AllocatorInstance.Data,
             (this->FileExclusionWildcards).ArrayNum);
  pFVar1 = (this->FileExclusionWildcards).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AbsolutePathToGameDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AbsoluteGameDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AbsoluteRootDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RelativeRootDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameSandboxDirectoryName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SandboxDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IPlatformFile::~IPlatformFile((IPlatformFile *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148b80800

void * __thiscall
FSandboxStatVisitor::_scalar_deleting_destructor_(FSandboxStatVisitor *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->VisitedSandboxFiles).HashSize = 0;
  FVar1 = (this->VisitedSandboxFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VisitedSandboxFiles).Elements);
  this->_padding_ = (longlong)&___7FDirectoryStatVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148b80870

void * __thiscall FSandboxVisitor::_scalar_deleting_destructor_(FSandboxVisitor *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->VisitedSandboxFiles).HashSize = 0;
  FVar1 = (this->VisitedSandboxFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VisitedSandboxFiles).Elements);
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// GetCookedSandboxDir @ 148b827f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl GetCookedSandboxDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  wchar_t *_Str;
  int iVar5;
  undefined1 auStack_488 [32];
  char *local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  TStringView<char> local_458;
  TStringBuilderBase<wchar_t> local_448;
  wchar_t local_428 [512];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_488;
  local_448.Base = local_428;
  local_448.CurPos = local_428;
  local_448.End = (wchar_t *)local_28;
  local_448.bIsDynamic = false;
  local_448.bIsExternal = false;
  pFVar1 = FPaths::ProjectDir((FString *)&local_458);
  if ((pFVar1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    iVar5 = 0;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) goto LAB_148b8287f;
  }
  sVar2 = wcslen(_Str);
  iVar5 = (int)sVar2;
LAB_148b8287f:
  uVar4 = (ulong64)iVar5;
  if (local_448.End < local_448.CurPos + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_448,uVar4);
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(local_448.CurPos,_Str,uVar4 * 2);
    local_448.CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  if (local_458.DataPtr != (char *)0x0) {
    FMemory::Free(local_458.DataPtr);
  }
  uStack_460 = 0xd;
  local_468 = "Saved/Cooked/";
  local_458._12_4_ = uStack_45c;
  local_458.Size = 0xd;
  local_458.DataPtr = "Saved/Cooked/";
  TStringBuilderBase<wchar_t>::Append<TStringView<char>_>(&local_448,&local_458);
  uStack_460 = 7;
  local_468 = "Windows";
  local_458._12_4_ = uStack_45c;
  local_458.Size = 7;
  local_458.DataPtr = "Windows";
  TStringBuilderBase<wchar_t>::Append<TStringView<char>_>(&local_448,&local_458);
  uStack_460 = 1;
  local_468 = "/";
  local_458._12_4_ = uStack_45c;
  local_458.Size = 1;
  local_458.DataPtr = "/";
  TStringBuilderBase<wchar_t>::Append<TStringView<char>_>(&local_448,&local_458);
  if (local_448.End < local_448.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_448,1);
  }
  *local_448.CurPos = L'\0';
  FString::FString(__return_storage_ptr__,local_448.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_448);
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_SandboxFile @ 148b855a0

void __cdecl IMPLEMENT_MODULE_SandboxFile(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'AutoDestroySingleton'' @ 15040a6d0

void __cdecl
`FSandboxFileModule::GetPlatformFile'::__l2::_dynamic_atexit_destructor_for__AutoDestroySingleton__
          (void)

{
  if (`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FSandboxFileModule::GetPlatformFile(void)___ptr64'
      ::__l2::AutoDestroySingleton.Ptr != (IPlatformFile *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015040a6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FSandboxFileModule::GetPlatformFile(void)___ptr64'
                 ::__l2::AutoDestroySingleton.Ptr)
              (`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FSandboxFileModule::GetPlatformFile(void)___ptr64'
               ::__l2::AutoDestroySingleton.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SandboxFile'' @ 15040a6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__SandboxFile__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&SandboxFile);
  return;
}

