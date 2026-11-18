// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 4

// operator() @ 14a7b59e0

void __thiscall
`TTypedTagStaticImpl<FUIActionTag>::TTypedTagStaticImpl<FUIActionTag>'::__l2::<lambda_1>::operator()
          (void *this)

{
  UGameplayTagsManager *this_00;
  FName *pFVar1;
  FGameplayTag FVar2;
  FName local_res10;
  undefined1 local_res18 [16];
  FString local_18;
  
  if (UGameplayTagsManager::SingletonManager == (UGameplayTagsManager *)0x0) {
    UGameplayTagsManager::InitializeManager();
  }
  this_00 = UGameplayTagsManager::SingletonManager;
  ::FString::FString(&local_18,L"(Native)");
  pFVar1 = ::FName::FName(&local_res10,L"UI.Action");
  FVar2 = UGameplayTagsManager::AddNativeGameplayTag(this_00,(FName)local_res18,*pFVar1);
  TTypedTagStaticImpl<FUIActionTag>::StaticImpl.RootTag = *(FUIActionTag *)FVar2.TagName;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14a7b5a60

void __thiscall
`TTypedTagStaticImpl<FUITag>::TTypedTagStaticImpl<FUITag>'::__l2::<lambda_1>::operator()(void *this)

{
  UGameplayTagsManager *this_00;
  FName *pFVar1;
  FGameplayTag FVar2;
  FName local_res10;
  undefined1 local_res18 [16];
  FString local_18;
  
  if (UGameplayTagsManager::SingletonManager == (UGameplayTagsManager *)0x0) {
    UGameplayTagsManager::InitializeManager();
  }
  this_00 = UGameplayTagsManager::SingletonManager;
  ::FString::FString(&local_18,L"(Native)");
  pFVar1 = ::FName::FName(&local_res10,L"UI");
  FVar2 = UGameplayTagsManager::AddNativeGameplayTag(this_00,(FName)local_res18,*pFVar1);
  TTypedTagStaticImpl<FUITag>::StaticImpl.RootTag = *(FUITag *)FVar2.TagName;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddNativeTag @ 14a7be510

FUIActionTag __cdecl TTypedTagStaticImpl<FUIActionTag>::AddNativeTag(FString *param_1)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  UGameplayTagsManager *this;
  bool bVar2;
  FUIActionTag FVar3;
  FName *pFVar4;
  FGameplayTag FVar5;
  FString *in_RDX;
  int iVar6;
  ForAnyElementType FVar7;
  FName local_res10;
  undefined1 local_res18 [16];
  FString local_78;
  FString local_68;
  FString local_58;
  FString *local_48 [2];
  FString local_38;
  
  if (1 < (in_RDX->Data).ArrayNum) {
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    ::FString::PrintfImpl(&local_68,L"%s.");
    iVar6 = local_68.Data.ArrayNum + -1;
    FVar7.Data = local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    bVar2 = ::FString::StartsWith(in_RDX,(wchar_t *)FVar7.Data,iVar6,IgnoreCase);
    if (bVar2) {
      if (&local_78 != in_RDX) {
        iVar6 = (in_RDX->Data).ArrayNum;
        _Src = (in_RDX->Data).AllocatorInstance.Data;
        local_78.Data.ArrayNum = iVar6;
        if (((iVar6 != 0) || (local_78.Data.ArrayMax != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar6,local_78.Data.ArrayMax,(ForAnyElementType *)&local_78,iVar6,
                       &local_78.Data.ArrayMax), iVar6 != 0)) {
          memcpy(local_78.Data.AllocatorInstance.Data,_Src,(longlong)iVar6 * 2);
        }
      }
      local_48[0] = &local_68;
      `TTypedTagStaticImpl<FUIActionTag>::AddNativeTag'::__l10::<lambda_1>::operator()(local_48);
    }
    else {
      ::FString::ConcatFF(&local_58,&local_68,in_RDX);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      local_78.Data.ArrayMax = local_58.Data.ArrayMax;
      local_78.Data.ArrayNum = local_58.Data.ArrayNum;
    }
    if (UGameplayTagsManager::SingletonManager == (UGameplayTagsManager *)0x0) {
      UGameplayTagsManager::InitializeManager();
    }
    this = UGameplayTagsManager::SingletonManager;
    ::FString::FString(&local_38,L"(Native)");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar7.Data = local_78.Data.AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res10,(wchar_t *)FVar7.Data);
    FVar5 = UGameplayTagsManager::AddNativeGameplayTag(this,(FName)local_res18,*pFVar4);
    (param_1->Data).AllocatorInstance.Data = *(FScriptContainerElement **)FVar5.TagName;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    return (FUIActionTag)param_1;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6173615884242780137>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Public\\UITag.h"
                     ,0x17,"!TagBody.IsEmpty()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FUIActionTag)(*pcVar1)();
    return FVar3;
  }
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return (FUIActionTag)param_1;
}

// operator() @ 1505555b0

bool __thiscall
`TTypedTagStaticImpl<FUIActionTag>::AddNativeTag'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6173615884242780121>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_6173615884242780121>,
                         &`public:___cdecl_`private:_static_struct_FUIActionTag___cdecl_TTypedTagStaticImpl<FUIActionTag>::AddNativeTag(FString_const&___ptr64)'::`10'::<lambda_1>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

