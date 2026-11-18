// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 4

// StaticStruct @ 146b38200

UScriptStruct * __cdecl FMetaDataTextKeyPattern::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaDataTextKeyPattern.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FMetaDataTextKeyPattern.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern,(UObject *)pUVar1,
                         L"MetaDataTextKeyPattern");
  }
  return Z_Registration_Info_UScriptStruct_FMetaDataTextKeyPattern.OuterSingleton;
}

// operator() @ 146b491a0

/* WARNING: Removing unreachable block (ram,0x000146b49293) */
/* WARNING: Removing unreachable block (ram,0x000146b49370) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
`FMetaDataTextKeyPattern::GetPossiblePlaceHolders'::__l2::<lambda_1>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_28,L"{FieldPath}");
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_28.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_28.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_28.Data.ArrayMax;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_18,L"{MetaDataValue}");
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// GetPossiblePlaceHolders @ 146b76430

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FMetaDataTextKeyPattern::GetPossiblePlaceHolders(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FMetaDataTextKeyPattern::GetPossiblePlaceHolders'::__l2::<lambda_1>::operator()
                (local_res8,&PossiblePlaceHolders);
      atexit(`FMetaDataTextKeyPattern::GetPossiblePlaceHolders'::__l2::
             _dynamic_atexit_destructor_for__PossiblePlaceHolders__);
      _Init_thread_footer(&::_TSS0);
      return &PossiblePlaceHolders;
    }
  }
  return &PossiblePlaceHolders;
}

// Validate @ 146b91970

bool __thiscall
FMetaDataTextKeyPattern::Validate(FMetaDataTextKeyPattern *this,bool param_1,FText *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  FText *pFVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *_Str;
  undefined1 local_res20 [8];
  FText local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    `FMetaDataTextKeyPattern::GetPossiblePlaceHolders'::__l2::<lambda_1>::operator()
              (local_res20,&PossiblePlaceHolders);
    atexit(`FMetaDataTextKeyPattern::GetPossiblePlaceHolders'::__l2::
           _dynamic_atexit_destructor_for__PossiblePlaceHolders__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar1 = PossiblePlaceHolders.ArrayNum;
  pFVar6 = PossiblePlaceHolders.AllocatorInstance.Data +
           (longlong)PossiblePlaceHolders.ArrayNum * 0x10;
  FVar5.Data = PossiblePlaceHolders.AllocatorInstance.Data;
  do {
    if (PossiblePlaceHolders.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar5.Data == pFVar6) {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"LocalizationTargetTypes",
                          L"NoMetaDataLocalizationKeyPlaceHolderError",
                          L"No place holders used. All generated keys will conflict!");
      FText::operator=(param_2,pFVar4);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      return false;
    }
    if (*(int *)(FVar5.Data + 8) == 0) {
      _Str = L"";
LAB_146b91a01:
      sVar3 = wcslen(_Str);
      iVar2 = ::FString::Find(&this->Pattern,_Str,(int)sVar3,IgnoreCase,FromStart,-1);
      if (iVar2 != -1) {
        return true;
      }
    }
    else {
      _Str = *(wchar_t **)FVar5.Data;
      if (_Str != (wchar_t *)0x0) goto LAB_146b91a01;
    }
    FVar5.Data = FVar5.Data + 0x10;
  } while( true );
}

