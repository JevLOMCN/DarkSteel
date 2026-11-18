// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 10

// CanRetry @ 1432c4450

bool __thiscall BuildPatchServices::FFakeInstallerError::CanRetry(FFakeInstallerError *this)

{
  return this->bCanRetry;
}

// GetErrorCode @ 1432d6790

FString * __thiscall
BuildPatchServices::FFakeInstallerError::GetErrorCode
          (FFakeInstallerError *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->ErrorCode);
  return __return_storage_ptr__;
}

// GetErrorText @ 1432d6820

FText * __thiscall
BuildPatchServices::FFakeInstallerError::GetErrorText
          (FFakeInstallerError *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->ErrorText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->ErrorText).Flags;
  return __return_storage_ptr__;
}

// GetErrorType @ 1432d68f0

EBuildPatchInstallError __thiscall
BuildPatchServices::FFakeInstallerError::GetErrorType(FFakeInstallerError *this)

{
  return this->ErrorType;
}

// HasError @ 1432daa10

bool __thiscall BuildPatchServices::FFakeInstallerError::HasError(FFakeInstallerError *this)

{
  return this->bHasError;
}

// IsCancelled @ 1432dba60

bool __thiscall BuildPatchServices::FFakeInstallerError::IsCancelled(FFakeInstallerError *this)

{
  return this->bIsCancelled;
}

// RegisterForErrors @ 1432e64f0

int __thiscall
BuildPatchServices::FFakeInstallerError::RegisterForErrors
          (FFakeInstallerError *this,TFunction<void___cdecl(void)> *param_1)

{
  int iVar1;
  longlong *plVar2;
  int local_28;
  undefined1 local_24 [4];
  int *local_20;
  TFunction<void___cdecl(void)> *local_18;
  
  local_28 = this->HandleCount;
  this->HandleCount = local_28 + 1;
  local_20 = &local_28;
  local_18 = param_1;
  TSet<TTuple<int,TFunction<void___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<void___cdecl(void)>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TFunction<void___cdecl(void)>_const_&>_>
            ((TSet<TTuple<int,TFunction<void___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<void___cdecl(void)>,0>,FDefaultSetAllocator>
              *)&this->Delegates,
             (TPairInitializer<int_const_&,TFunction<void___cdecl(void)>_const_&> *)local_24,
             (bool *)(local_24 + 4));
  iVar1 = local_28;
  if (*(longlong *)param_1 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return iVar1;
}

// Reset @ 1432eafb0

void __thiscall BuildPatchServices::FFakeInstallerError::Reset(FFakeInstallerError *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  this->bHasError = false;
  this->bIsCancelled = false;
  this->bCanRetry = true;
  this->ErrorType = NoError;
  ::FString::operator=(&this->ErrorCode,L"");
  pFVar3 = FText::GetEmpty();
  pIVar1 = (this->ErrorText).TextData.Reference;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->ErrorText).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
    (this->ErrorText).Flags = pFVar3->Flags;
    return;
  }
  (this->ErrorText).Flags = pFVar3->Flags;
  return;
}

// SetError @ 1432ed280

void __thiscall
BuildPatchServices::FFakeInstallerError::SetError
          (FFakeInstallerError *this,EBuildPatchInstallError param_1,wchar_t *param_2,uint param_3,
          FText *param_4)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  FString *pFVar3;
  bool bVar4;
  FString local_38;
  FString local_28;
  FString local_18;
  
  this->ErrorType = param_1;
  bVar4 = param_3 == 0;
  if (bVar4) {
    pFVar3 = ::FString::FString(&local_18,L"");
  }
  else {
    ::FString::PrintfImpl(&local_28,L"-%u");
    pFVar3 = &local_28;
  }
  ::FString::ConcatCF(&local_38,param_2,pFVar3);
  pFVar3 = &this->ErrorCode;
  if (pFVar3 != &local_38) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (this->ErrorCode).Data.ArrayNum = local_38.Data.ArrayNum;
    (this->ErrorCode).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((!bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FText::operator=(&this->ErrorText,param_4);
  pIVar2 = (param_4->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// UnregisterForErrors @ 1432f61a0

void __thiscall
BuildPatchServices::FFakeInstallerError::UnregisterForErrors(FFakeInstallerError *this,int param_1)

{
  int local_res10 [6];
  
  if (*(int *)&(this->Delegates).field_0x8 != *(int *)&(this->Delegates).field_0x34) {
    local_res10[0] = param_1;
    TSet<TTuple<int,TFunction<void___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<void___cdecl(void)>,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,TFunction<void___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<void___cdecl(void)>,0>,FDefaultSetAllocator>
                       *)&this->Delegates,param_1,local_res10);
  }
  return;
}

