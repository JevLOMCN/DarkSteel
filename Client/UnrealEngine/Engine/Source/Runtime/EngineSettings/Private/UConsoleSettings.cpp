// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineSettings
// Functions: 7

// StaticClass @ 1431291d0

UClass * __cdecl UConsoleSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConsoleSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"ConsoleSettings",
               &Z_Registration_Info_UClass_UConsoleSettings.InnerSingleton,
               StaticRegisterNativesUConsoleSettings,0x70,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UConsoleSettings>,
               InternalVTableHelperCtorCaller<UConsoleSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConsoleSettings.InnerSingleton;
}

// UConsoleSettings @ 14312abc0

UConsoleSettings * __thiscall
UConsoleSettings::UConsoleSettings(UConsoleSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bDisplayHelpInAutoComplete = true;
  this->_padding_ = (longlong)&___7UConsoleSettings__6B_;
  (this->ManualAutoCompleteList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManualAutoCompleteList).ArrayNum = 0;
  (this->ManualAutoCompleteList).ArrayMax = 0;
  (this->AutoCompleteMapPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoCompleteMapPaths).ArrayNum = 0;
  (this->AutoCompleteMapPaths).ArrayMax = 0;
  return this;
}

// UConsoleSettings @ 14312ac00

UConsoleSettings * __thiscall
UConsoleSettings::UConsoleSettings(UConsoleSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bDisplayHelpInAutoComplete = true;
  this->_padding_ = (longlong)&___7UConsoleSettings__6B_;
  (this->ManualAutoCompleteList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManualAutoCompleteList).ArrayNum = 0;
  (this->ManualAutoCompleteList).ArrayMax = 0;
  (this->AutoCompleteMapPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoCompleteMapPaths).ArrayNum = 0;
  (this->AutoCompleteMapPaths).ArrayMax = 0;
  return this;
}

// ~UConsoleSettings @ 14312b170

void __thiscall UConsoleSettings::~UConsoleSettings(UConsoleSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UConsoleSettings__6B_;
  DestructItems<FString,int>
            ((FString *)(this->AutoCompleteMapPaths).AllocatorInstance.Data,
             (this->AutoCompleteMapPaths).ArrayNum);
  pFVar1 = (this->AutoCompleteMapPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAutoCompleteCommand,int>
            ((FAutoCompleteCommand *)(this->ManualAutoCompleteList).AllocatorInstance.Data,
             (this->ManualAutoCompleteList).ArrayNum);
  pFVar1 = (this->ManualAutoCompleteList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetFilteredManualAutoCompleteCommands @ 14312baa0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UConsoleSettings::GetFilteredManualAutoCompleteCommands
          (UConsoleSettings *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  size_t sVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *_Str;
  uint uVar13;
  FScriptContainerElement *this_00;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_90;
  TArray<FString,TSizedDefaultAllocator<32>_> local_80;
  FString local_70;
  wchar_t *local_58;
  undefined8 uStack_50;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (param_1->Size == 0) {
    uVar13 = (this->ManualAutoCompleteList).ArrayNum;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if ((int)uVar13 < 1) goto LAB_14312bb0a;
  }
  else {
    uVar13 = 0x14;
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,uVar13,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
LAB_14312bb0a:
  local_58 = param_1->DataPtr;
  uStack_50 = *(undefined8 *)&param_1->Size;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  pFVar7 = ::FString::ConstructFromPtrSize
                     (&local_70,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_90 != pFVar7) {
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    local_90.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    local_90.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  ::FString::ParseIntoArrayWS(&local_90,&local_80,(wchar_t *)0x0,true);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  local_res20 = (this->ManualAutoCompleteList).ArrayNum;
  uVar10 = (ulonglong)(int)local_res20;
  this_00 = (this->ManualAutoCompleteList).AllocatorInstance.Data;
  pFVar2 = this_00 + uVar10 * 0x28;
  do {
    if ((this->ManualAutoCompleteList).ArrayNum != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FAutoCompleteCommand_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    iVar6 = local_80.ArrayNum;
    if (this_00 == pFVar2) {
      DestructItems<FString,int>((FString *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pFVar12 = local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 0x10;
    FVar11.Data = local_80.AllocatorInstance.Data;
    while( true ) {
      if (local_80.ArrayNum != iVar6) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar11.Data == pFVar12) break;
      if (*(int *)(FVar11.Data + 8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)FVar11.Data;
        if (_Str == (wchar_t *)0x0) goto LAB_14312bcf8;
      }
      sVar8 = wcslen(_Str);
      iVar5 = ::FString::Find((FString *)this_00,_Str,(int)sVar8,IgnoreCase,FromStart,-1);
      if (iVar5 == -1) goto LAB_14312bcf8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar12 <= this_00) && (this_00 < pFVar12 + (longlong)*piVar1 * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                       (FString *)this_00);
LAB_14312bcf8:
    this_00 = this_00 + 0x28;
    uVar10 = (ulonglong)local_res20;
  } while( true );
}

// GetPrivateStaticClass @ 14312c560

UClass * __cdecl UConsoleSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConsoleSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"ConsoleSettings",
               &Z_Registration_Info_UClass_UConsoleSettings.InnerSingleton,
               StaticRegisterNativesUConsoleSettings,0x70,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UConsoleSettings>,
               InternalVTableHelperCtorCaller<UConsoleSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConsoleSettings.InnerSingleton;
}

// StaticRegisterNativesUConsoleSettings @ 14312cde0

void __cdecl UConsoleSettings::StaticRegisterNativesUConsoleSettings(void)

{
  return;
}

