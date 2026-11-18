// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 6

// FStringStore @ 14d3cd3f0

FStringStore * __thiscall
TraceServices::FStringStore::FStringStore(FStringStore *this,FSlabAllocator *param_1)

{
  this->_padding_ = (longlong)&___7FStringStore_TraceServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Cs,4000);
  this->Allocator = param_1;
  *(undefined8 *)&this->StoredStrings = 0;
  *(undefined8 *)&(this->StoredStrings).field_0x8 = 0;
  *(undefined8 *)&(this->StoredStrings).field_0x20 = 0;
  *(undefined4 *)&(this->StoredStrings).field_0x28 = 0;
  *(undefined4 *)&(this->StoredStrings).field_0x2c = 0x80;
  *(undefined4 *)&(this->StoredStrings).field_0x34 = 0;
  *(undefined4 *)&(this->StoredStrings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StoredStrings).field_0x40 = 0;
  *(undefined4 *)&(this->StoredStrings).field_0x48 = 0;
  (this->FindStoredStrings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FindStoredStrings).ArrayNum = 0;
  (this->FindStoredStrings).ArrayMax = 0;
  this->BufferPtr = (wchar_t *)0x0;
  this->BufferLeft = 0;
  this->BlockCount = 0;
  return this;
}

// ~FStringStore @ 14d3d1380

void __thiscall TraceServices::FStringStore::~FStringStore(FStringStore *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FStringStore_TraceServices__6B_;
  pFVar1 = (this->FindStoredStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StoredStrings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StoredStrings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StoredStrings);
                    /* WARNING: Could not recover jumptable at 0x00014d3d13d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Cs);
  return;
}

// Find @ 14d3de230

wchar_t * __thiscall
TraceServices::FStringStore::Find(FStringStore *this,TStringView<wchar_t> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  wchar_t *_Str;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->Cs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  pTVar1 = &this->FindStoredStrings;
  (this->FindStoredStrings).ArrayNum = 0;
  if ((this->FindStoredStrings).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->FindStoredStrings).ArrayMax);
  }
  TMultiMap<unsigned_int,wchar_t_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,wchar_t_const_*,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->StoredStrings,uVar5,pTVar1,false);
  pFVar9 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (this->FindStoredStrings).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->FindStoredStrings).ArrayNum != iVar3) {
      `TCheckedPointerIterator<wchar_t_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar2) break;
    _Str = *(wchar_t **)pFVar9;
    iVar8 = 0;
    if (_Str != (wchar_t *)0x0) {
      sVar7 = wcslen(_Str);
      iVar8 = (int)sVar7;
    }
    iVar4 = param_1->Size;
    if ((iVar4 == 0) || (iVar8 == 0)) {
LAB_14d3de331:
      if (iVar4 == iVar8) goto LAB_14d3de347;
    }
    else {
      iVar6 = iVar8;
      if (iVar4 < iVar8) {
        iVar6 = iVar4;
      }
      iVar6 = wcsncmp(param_1->DataPtr,_Str,(longlong)iVar6);
      if (iVar6 == 0) goto LAB_14d3de331;
    }
    pFVar9 = pFVar9 + 8;
  }
  _Str = (wchar_t *)0x0;
LAB_14d3de347:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return _Str;
}

// Find @ 14d3de390

wchar_t * __thiscall TraceServices::FStringStore::Find(FStringStore *this,wchar_t *param_1)

{
  code *pcVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  wchar_t *local_18;
  undefined4 local_10;
  
  pcVar1 = *(code **)(this->_padding_ + 8);
  local_10 = 0;
  local_18 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    local_10 = (undefined4)sVar2;
  }
  pwVar3 = (wchar_t *)(*pcVar1)(this,&local_18);
  return pwVar3;
}

// Store @ 14d403730

wchar_t * __thiscall
TraceServices::FStringStore::Store(FStringStore *this,TStringView<wchar_t> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  wchar_t **_Str;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  uint local_res18 [2];
  uint local_res20;
  TPairInitializer<unsigned_int_const_&,wchar_t_const_*_const_&> local_68;
  FScriptContainerElement *local_58;
  uint *local_50;
  wchar_t ***local_48;
  
  lpCriticalSection = &this->Cs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res18[0] =
       FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  pTVar1 = &this->FindStoredStrings;
  (this->FindStoredStrings).ArrayNum = 0;
  if ((this->FindStoredStrings).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->FindStoredStrings).ArrayMax);
  }
  TMultiMap<unsigned_int,wchar_t_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,wchar_t_const_*,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->StoredStrings,local_res18[0],pTVar1,false);
  local_res20 = (this->FindStoredStrings).ArrayNum;
  uVar7 = (ulonglong)(int)local_res20;
  pFVar10 = (pTVar1->AllocatorInstance).Data;
  local_58 = pFVar10 + uVar7 * 8;
  while( true ) {
    pFVar3 = local_58;
    if ((this->FindStoredStrings).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<wchar_t_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar3) break;
    _Str = *(wchar_t ***)pFVar10;
    iVar8 = 0;
    if (_Str != (wchar_t **)0x0) {
      sVar5 = wcslen((wchar_t *)_Str);
      iVar8 = (int)sVar5;
    }
    iVar2 = param_1->Size;
    if ((iVar2 == 0) || (iVar8 == 0)) {
LAB_14d40384e:
      if (iVar2 == iVar8) goto LAB_14d40391d;
    }
    else {
      iVar4 = iVar8;
      if (iVar2 < iVar8) {
        iVar4 = iVar2;
      }
      iVar4 = wcsncmp(param_1->DataPtr,(wchar_t *)_Str,(longlong)iVar4);
      if (iVar4 == 0) goto LAB_14d40384e;
    }
    uVar7 = (ulonglong)local_res20;
    pFVar10 = pFVar10 + 8;
  }
  lVar9 = (longlong)param_1->Size;
  uVar7 = lVar9 + 1;
  if (this->BufferLeft < uVar7) {
    pwVar6 = (wchar_t *)(**(code **)(this->Allocator->_padding_ + 8))(this->Allocator,0x800000);
    this->BlockCount = this->BlockCount + 1;
    this->BufferPtr = pwVar6;
    this->BufferLeft = 0x400000;
  }
  local_68.Value = (wchar_t **)this->BufferPtr;
  memcpy(local_68.Value,param_1->DataPtr,lVar9 * 2);
  this->BufferPtr[lVar9] = L'\0';
  this->BufferPtr = this->BufferPtr + uVar7;
  this->BufferLeft = this->BufferLeft - uVar7;
  local_50 = local_res18;
  local_48 = &local_68.Value;
  TSet<TTuple<unsigned_int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,wchar_t_const_*,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,wchar_t_const_*_const_&>_>
            ((TSet<TTuple<unsigned_int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,wchar_t_const_*,1>,FDefaultSetAllocator>
              *)&this->StoredStrings,&local_68,(bool *)&local_50);
  _Str = local_68.Value;
LAB_14d40391d:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (wchar_t *)_Str;
}

// Store @ 14d403960

wchar_t * __thiscall TraceServices::FStringStore::Store(FStringStore *this,wchar_t *param_1)

{
  code *pcVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  wchar_t *local_18;
  undefined4 local_10;
  
  pcVar1 = *(code **)(this->_padding_ + 0x18);
  local_10 = 0;
  local_18 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    local_10 = (undefined4)sVar2;
  }
  pwVar3 = (wchar_t *)(*pcVar1)(this,&local_18);
  return pwVar3;
}

