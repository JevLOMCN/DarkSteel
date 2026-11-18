// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FLLMTagDeclaration @ 141678490

FLLMTagDeclaration * __thiscall
FLLMTagDeclaration::FLLMTagDeclaration
          (FLLMTagDeclaration *this,wchar_t *param_1,FName param_2,FName param_3,FName param_4,
          FName param_5,ELLMTagSet param_6)

{
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar5;
  FLLMTagDeclaration *pFVar6;
  
  this->CPPName = param_1;
  (this->UniqueName).ComparisonIndex = 0;
  (this->UniqueName).Number = 0;
  this->StatName = param_4;
  this->SummaryStatName = param_5;
  this->TagSet = param_6;
  this->DisplayName = param_2;
  this->ParentTagName = param_3;
  this->Next = (FLLMTagDeclaration *)0x0;
  FVar5 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks();
  iVar2 = *(int *)((longlong)FVar5 + 0x10);
  if (*(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar5 + 8) !=
      (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
    FVar5 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar5 + 8);
  }
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FLLMTagDeclaration *)(*pcVar3)();
    return pFVar6;
  }
  FVar1 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          ((longlong)FVar5 + (longlong)iVar2 * 8);
  for (; FVar5 != FVar1;
      FVar5 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)((longlong)FVar5 + 8)) {
    (**(code **)FVar5)(this);
  }
  this->Next = List;
  List = this;
  return this;
}

// AddCreationCallback @ 14167f090

void __cdecl
FLLMTagDeclaration::AddCreationCallback(_func___cdecl_void_FLLMTagDeclaration_ptr *param_1)

{
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar5;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar6;
  _func___cdecl_void_FLLMTagDeclaration_ptr *local_res8;
  
  local_res8 = param_1;
  FVar5 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks();
  if (*(int *)((longlong)FVar5 + 0x10) < *(int *)((longlong)FVar5 + 0x14)) {
    FVar1 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar5 + 8);
    FVar6 = FVar5;
    if (FVar1 != (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
      FVar6 = FVar1;
    }
    if ((ulonglong)FVar6 <= &local_res8) {
      FVar6 = FVar5;
      if (FVar1 != (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
        FVar6 = FVar1;
      }
      if ((&local_res8 <
           (_func___cdecl_void_FLLMTagDeclaration_ptr **)
           ((longlong)FVar6 + (longlong)*(int *)((longlong)FVar5 + 0x14) * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)((longlong)FVar5 + 0x10);
    if (iVar4 == *(int *)((longlong)FVar5 + 0x14)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>_>
                        (0x808,(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)FVar5,
                         (int *)((longlong)FVar5 + 0x14));
    }
    *(int *)((longlong)FVar5 + 0x10) = iVar4 + 1;
    if (*(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar5 + 8) !=
        (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
      FVar5 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar5 + 8);
    }
    *(_func___cdecl_void_FLLMTagDeclaration_ptr **)((longlong)FVar5 + (longlong)iVar4 * 8) =
         local_res8;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\LowLevelMemTracker.cpp"
                       ,0xfc7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ClearCreationCallbacks @ 14168b130

void __cdecl FLLMTagDeclaration::ClearCreationCallbacks(void)

{
  TArray<void_(__cdecl*)(FLLMTagDeclaration_&),TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  
  pTVar1 = UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks();
  pTVar1->ArrayNum = 0;
  if (pTVar1->ArrayMax != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>_>
              (8,8,0,&pTVar1->AllocatorInstance,0,&pTVar1->ArrayMax);
  }
  return;
}

// ConstructUniqueName @ 14168c370

void __thiscall FLLMTagDeclaration::ConstructUniqueName(FLLMTagDeclaration *this)

{
  int iVar1;
  FName *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8 [4];
  FString local_18;
  
  ::FString::FString(&local_18,this->CPPName);
  iVar1 = iswalpha(0x5f);
  if (iVar1 == 0) {
    ::FString::ReplaceCharInlineCaseSensitive(&local_18,L'_',L'/');
  }
  else {
    ::FString::ReplaceCharInlineIgnoreCase(&local_18,L'_',L'/');
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(local_res8,(wchar_t *)FVar3.Data);
  this->UniqueName = *pFVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCreationCallbacks @ 141699470

TArrayView<void_(__cdecl*)(FLLMTagDeclaration_&),int> * __cdecl
FLLMTagDeclaration::GetCreationCallbacks
          (TArrayView<void_(__cdecl*)(FLLMTagDeclaration_&),int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar4;
  TArrayView<void_(__cdecl*)(FLLMTagDeclaration_&),int> *pTVar5;
  
  FVar4 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks();
  iVar1 = *(int *)((longlong)FVar4 + 0x10);
  if (*(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar4 + 8) !=
      (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
    FVar4 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar4 + 8);
  }
  __return_storage_ptr__->DataPtr = (_func___cdecl_void_FLLMTagDeclaration_ptr **)FVar4;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<void_(__cdecl*)(FLLMTagDeclaration_&),int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetList @ 141699990

FLLMTagDeclaration * __cdecl FLLMTagDeclaration::GetList(void)

{
  return List;
}

// Register @ 1416bb330

void __thiscall FLLMTagDeclaration::Register(FLLMTagDeclaration *this)

{
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar5;
  
  FVar5 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks();
  iVar2 = *(int *)((longlong)FVar5 + 0x10);
  if (*(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar5 + 8) !=
      (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
    FVar5 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar5 + 8);
  }
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar1 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          ((longlong)FVar5 + (longlong)iVar2 * 8);
  for (; FVar5 != FVar1;
      FVar5 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)((longlong)FVar5 + 8)) {
    (**(code **)FVar5)(this);
  }
  this->Next = List;
  List = this;
  return;
}

