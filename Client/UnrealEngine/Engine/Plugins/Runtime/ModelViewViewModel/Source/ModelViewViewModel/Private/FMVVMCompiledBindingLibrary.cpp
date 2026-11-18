// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 24

// StaticStruct @ 14a73a700

UScriptStruct * __cdecl FMVVMCompiledBindingLibrary::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMCompiledBindingLibrary.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMCompiledBindingLibrary.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary,(UObject *)pUVar1,
                         L"MVVMCompiledBindingLibrary");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMCompiledBindingLibrary.OuterSingleton;
}

// FMVVMCompiledBindingLibrary @ 14a73f410

FMVVMCompiledBindingLibrary * __thiscall
FMVVMCompiledBindingLibrary::FMVVMCompiledBindingLibrary(FMVVMCompiledBindingLibrary *this)

{
  (this->LoadedProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedProperties).ArrayNum = 0;
  (this->LoadedProperties).ArrayMax = 0;
  (this->LoadedFunctions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedFunctions).ArrayNum = 0;
  (this->LoadedFunctions).ArrayMax = 0;
  (this->FieldPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldPaths).ArrayNum = 0;
  (this->FieldPaths).ArrayMax = 0;
  (this->CompiledFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompiledFields).ArrayNum = 0;
  (this->CompiledFields).ArrayMax = 0;
  (this->CompiledFieldNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompiledFieldNames).ArrayNum = 0;
  (this->CompiledFieldNames).ArrayMax = 0;
  return this;
}

// CanAccessLoadedProperiesAtIndex @ 14a744900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMVVMCompiledBindingLibrary::CanAccessLoadedProperiesAtIndex
          (FMVVMCompiledBindingLibrary *this,short param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FString *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStackY_168 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_128;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FStringFormatArg local_c8;
  FString local_a8;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((param_1 < 0) || ((this->LoadedProperties).ArrayNum <= (int)param_1)) {
    iVar10 = (this->LoadedProperties).ArrayNum;
    uVar7 = 0;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    uVar9 = uVar7;
    if (0 < iVar10) {
      do {
        uVar6 = (uint)uVar7;
        uVar4 = 0;
        if ((int)uVar6 < iVar10) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        pFVar5 = FProperty::GetNameCPP
                           (*(FProperty **)((this->LoadedProperties).AllocatorInstance.Data + uVar9)
                            ,&local_a8);
        FStringFormatArg::FStringFormatArg(&local_c8,pFVar5);
        local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_128.AllocatorInstance,1,&local_128.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_128.AllocatorInstance.Data,&local_c8,1);
        ::FString::FormatImpl(&local_d8,L"{0}, ",&local_128);
        iVar10 = local_d8.Data.ArrayNum + -1;
        if (local_d8.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        ::FString::AppendChars(&local_f8,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar10);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
        if ((FStringFormatArg *)local_128.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_128.AllocatorInstance.Data);
        }
        if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
        }
        iVar10 = (this->LoadedProperties).ArrayNum;
        uVar7 = (ulonglong)(uVar6 + 1);
        uVar9 = uVar9 + 8;
      } while ((int)(uVar6 + 1) < iVar10);
    }
    FStringFormatArg::FStringFormatArg(&local_98,(int)param_1);
    FStringFormatArg::FStringFormatArg(&local_78,(this->LoadedProperties).ArrayNum);
    _Src.Data = local_f8.Data.AllocatorInstance.Data;
    lVar8 = (longlong)local_f8.Data.ArrayNum;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = local_f8.Data.ArrayNum;
    if (local_f8.Data.ArrayNum == 0) {
      local_108.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_108,local_f8.Data.ArrayNum
                 ,&local_108.Data.ArrayMax);
      memcpy(local_108.Data.AllocatorInstance.Data,_Src.Data,lVar8 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_58,&local_108);
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_118.AllocatorInstance,3,&local_118.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_118.AllocatorInstance.Data,&local_98,3);
    ::FString::FormatImpl(&local_e8,L"{0} on {1}. LoadedProperties : {2}",&local_118);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
    if ((FStringFormatArg *)local_118.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                       ,0x156,L"LoadedProperties.IsValidIndex(PathIndex.Index) failed. \'%s\'");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (1 < (byte)LogMVVM._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMVVM);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// EvaluateFieldPath @ 14a747370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::MVVM::FFieldContext,void> * __thiscall
FMVVMCompiledBindingLibrary::EvaluateFieldPath
          (FMVVMCompiledBindingLibrary *this,
          TValueOrError<UE::MVVM::FFieldContext,void> *__return_storage_ptr__,UObject *param_1,
          FMVVMVCompiledFieldPath *param_2)

{
  FLoadedFunction *this_00;
  byte bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  TValueOrError<UE::MVVM::FFieldContext,void> *pTVar5;
  void *pvVar6;
  UClass *pUVar7;
  code *pcVar8;
  UFunction *pUVar9;
  FObjectPropertyBase *pFVar10;
  short sVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_e8 [32];
  FObjectPropertyBase *local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined1 local_b7 [3];
  uint local_b4;
  ulonglong local_b0;
  longlong local_a8;
  FObjectVariant local_a0;
  TValueOrError<UE::MVVM::FMVVMFieldVariant,void> local_88;
  TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
  local_70;
  TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((param_1 == (UObject *)0x0) ||
     (local_70.TypeIndex = -(char)(param_2->Num >> 0xf), local_70.TypeIndex != 0)) {
    (__return_storage_ptr__->Value).bIsSet = false;
  }
  else {
    local_58.TypeIndex = '\x02';
    local_58._padding_ = (longlong)param_1;
    TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
    ::operator=(&local_70,&local_58);
    iVar12 = param_2->Num + -1 + (int)param_2->StartIndex;
    if (((this->FieldPaths).ArrayNum <= iVar12) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IterationMax < FieldPaths.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                           ,0x172,
                           L"The number of field is bigger than the number of field that was compiled."
                          ), bVar2)) {
      pcVar8 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
      return pTVar5;
    }
    uVar15 = (ulonglong)param_2->StartIndex;
    if (param_2->StartIndex < iVar12) {
      local_a8 = (longlong)iVar12;
      uVar16 = uVar15;
      do {
        uVar13 = (ulonglong)local_70.TypeIndex;
        local_b0 = uVar15;
        if ((2 < uVar13) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar2)) {
          pcVar8 = (code *)swi(3);
          pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
          return pTVar5;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar13) == '\0') {
          uVar13 = (ulonglong)local_70.TypeIndex;
          if ((2 < uVar13) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar2)) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar13 + 4) == '\0') goto LAB_14a747b9e;
          pUVar7 = (UClass *)local_70._padding_;
          if ((local_70.TypeIndex != 1) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), pUVar7 = (UClass *)local_70._padding_, bVar2)) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
        }
        else {
          pUVar7 = (UClass *)local_70._padding_;
          if ((local_70.TypeIndex != 2) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), pUVar7 = (UClass *)local_70._padding_, bVar2)) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
        }
        if (pUVar7 == (UClass *)0x0) goto LAB_14a747b9e;
        uVar14 = (uint)uVar16;
        if ((((int)uVar14 < 0) || ((this->FieldPaths).ArrayNum <= (int)uVar14)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("FieldPaths.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                               ,0x17a,L""), bVar2)) {
          pcVar8 = (code *)swi(3);
          pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
          return pTVar5;
        }
        iVar12 = (this->FieldPaths).ArrayNum;
        uVar4 = 0;
        if ((int)uVar14 < iVar12) {
          uVar4 = ~uVar14 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_c8 = (FObjectPropertyBase *)(longlong)(int)uVar14;
          local_c0 = (longlong)iVar12;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
        }
        local_b4 = *(uint *)((this->FieldPaths).AllocatorInstance.Data + uVar15 * 4);
        sVar11 = (short)local_b4;
        if ((local_b4 >> 0x10 & 4) == 0) {
          if (((sVar11 < 0) || ((this->LoadedFunctions).ArrayNum <= (int)sVar11)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("LoadedFunctions.IsValidIndex(PathIndex.Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                                 ,0x1a1,L""), bVar2)) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
          iVar12 = (this->LoadedFunctions).ArrayNum;
          uVar4 = 0;
          if (sVar11 < iVar12) {
            uVar4 = (uint)~(int)sVar11 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (local_c8 = (FObjectPropertyBase *)(longlong)sVar11, local_c0 = (longlong)iVar12,
             bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar2)) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
          uVar15 = (ulonglong)local_70.TypeIndex;
          this_00 = (FLoadedFunction *)
                    ((this->LoadedFunctions).AllocatorInstance.Data + (longlong)sVar11 * 0x14);
          if ((2 < uVar15) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar2)) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar15) == '\0') {
            pUVar9 = FLoadedFunction::GetFunction(this_00);
          }
          else {
            if ((local_70.TypeIndex != 2) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar2)) {
              pcVar8 = (code *)swi(3);
              pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
              return pTVar5;
            }
            pUVar9 = FLoadedFunction::GetFunction(this_00,(UObject *)local_70._padding_);
          }
          if (pUVar9 == (UFunction *)0x0) goto LAB_14a747b9e;
          if ((local_b4 & 0x10000) == 0) {
            if ((local_b4 & 0x20000) != 0) {
              `FMVVMCompiledBindingLibrary::EvaluateFieldPath'::__l93::<lambda_2>::operator()
                        (local_b7);
              (__return_storage_ptr__->Value).bIsSet = false;
              return __return_storage_ptr__;
            }
            goto LAB_14a747b9e;
          }
          pFVar10 = (FObjectPropertyBase *)UE::MVVM::BindingHelper::GetReturnProperty(pUVar9);
          if ((pFVar10 == (FObjectPropertyBase *)0x0) ||
             ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
            local_c8 = pFVar10;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x480,L"CastFieldChecked failed with 0x%016llx");
            if (bVar2) {
              pcVar8 = (code *)swi(3);
              pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
              return pTVar5;
            }
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("ReturnObjectProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                               ,0x1ac,L"");
            pFVar10 = (FObjectPropertyBase *)0x0;
            if (bVar2) {
              pcVar8 = (code *)swi(3);
              pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
              return pTVar5;
            }
          }
          if ((pUVar9->NumParms != '\x01') &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Function->NumParms == 1",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                                 ,0x1ad,L""), bVar2)) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
          uVar15 = (ulonglong)local_70.TypeIndex;
          if ((2 < uVar15) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar2)) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar15) == '\0') goto LAB_14a747b9e;
          if ((local_70.TypeIndex != 2) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar2)) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
          pUVar7 = (UClass *)
                   UE::MVVM::Private::EvaluateFieldPathObject
                             ((UObject *)local_70._padding_,pUVar9,pFVar10);
          bVar1 = local_70.TypeIndex;
          if ((2 < local_70.TypeIndex) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar2)) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
          pcVar8 = UE::Core::Private::TDestructorCaller<UObject_*>::Destruct;
LAB_14a747a9b:
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[bVar1] != pcVar8) {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[bVar1])(&local_70);
          }
          local_70.TypeIndex = 2;
          local_70._padding_ = (longlong)pUVar7;
        }
        else {
          bVar2 = CanAccessLoadedProperiesAtIndex(this,sVar11);
          if (!bVar2) goto LAB_14a747b9e;
          iVar12 = (this->LoadedProperties).ArrayNum;
          uVar4 = 0;
          if (sVar11 < iVar12) {
            uVar4 = (uint)~(int)sVar11 >> 0x1f;
          }
          if (uVar4 == 0) {
            local_c8 = (FObjectPropertyBase *)(longlong)sVar11;
            local_c0 = (longlong)iVar12;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar8 = (code *)swi(3);
              pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
              return pTVar5;
            }
          }
          pFVar10 = *(FObjectPropertyBase **)
                     ((this->LoadedProperties).AllocatorInstance.Data + (longlong)sVar11 * 8);
          if (pFVar10 == (FObjectPropertyBase *)0x0) goto LAB_14a747b9e;
          if ((local_b4 & 0x10000) != 0) {
            if ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x1a & 1) == 0) {
              pFVar10 = (FObjectPropertyBase *)0x0;
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("ObjectProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                                 ,0x18b,L"");
              if (bVar2) {
                pcVar8 = (code *)swi(3);
                pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
                return pTVar5;
              }
            }
            pcVar8 = *(code **)(pFVar10->_padding_ + 0x208);
            pvVar6 = UE::MVVM::TObjectVariant<0>::GetData((TObjectVariant<0> *)&local_70);
            pUVar7 = (UClass *)(*pcVar8)(pFVar10,pvVar6,0);
            bVar1 = local_70.TypeIndex;
            if ((2 < local_70.TypeIndex) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar2)) {
              pcVar8 = (code *)swi(3);
              pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
              return pTVar5;
            }
            pcVar8 = UE::Core::Private::TDestructorCaller<FEmptyVariantState>::Destruct;
            goto LAB_14a747a9b;
          }
          if ((local_b4 & 0x20000) == 0) goto LAB_14a747b9e;
          if ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x14 & 1) == 0) {
            local_c8 = pFVar10;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x480,L"CastFieldChecked failed with 0x%016llx");
            pFVar10 = (FObjectPropertyBase *)0x0;
            if (bVar2) {
              pcVar8 = (code *)swi(3);
              pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
              return pTVar5;
            }
          }
          cVar3 = (**(code **)(pFVar10->_padding_ + 0x78))(pFVar10);
          if (cVar3 != '\0') {
            `FMVVMCompiledBindingLibrary::EvaluateFieldPath'::__l55::<lambda_1>::operator()
                      (&local_b8);
            goto LAB_14a747b9e;
          }
          pvVar6 = UE::MVVM::TObjectVariant<0>::GetData((TObjectVariant<0> *)&local_70);
          iVar12 = (int)pFVar10->_padding_;
          if (iVar12 < 1) {
            local_c0 = CONCAT44(local_c0._4_4_,iVar12);
            local_c8 = (FObjectPropertyBase *)((ulonglong)local_c8 & 0xffffffff00000000);
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar2) {
              pcVar8 = (code *)swi(3);
              pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
              return pTVar5;
            }
          }
          if ((pvVar6 == (void *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar2)) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
          pUVar7 = (pFVar10->PropertyClass).field0_0x0.DebugPtr;
          iVar12 = *(int *)((longlong)&pFVar10->_padding_ + 4);
          uVar15 = (ulonglong)local_70.TypeIndex;
          if ((2 < local_70.TypeIndex) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar2)) {
            pcVar8 = (code *)swi(3);
            pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
            return pTVar5;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar15] !=
              UE::Core::Private::TDestructorCaller<UObject_*>::Destruct) {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar15])(&local_70);
          }
          local_70.TypeIndex = 1;
          local_70._padding_ = (longlong)pUVar7;
          local_70._padding_ = (longlong)((longlong)iVar12 + (longlong)pvVar6);
        }
        uVar16 = (ulonglong)(uVar14 + 1);
        uVar15 = local_b0 + 1;
        local_b0 = uVar15;
      } while ((longlong)uVar15 < local_a8);
    }
    bVar2 = UE::MVVM::TObjectVariant<0>::IsNull((TObjectVariant<0> *)&local_70);
    if (!bVar2) {
      uVar15 = (ulonglong)local_70.TypeIndex;
      local_a0._16_1_ = local_70.TypeIndex;
      if ((2 < local_70.TypeIndex) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar2)) {
        pcVar8 = (code *)swi(3);
        pTVar5 = (TValueOrError<UE::MVVM::FFieldContext,void> *)(*pcVar8)();
        return pTVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                  ::__l2::CopyConstructors)[uVar15])(&local_a0,&local_70);
      GetFinalFieldFromPathImpl(this,&local_88,&local_a0,param_2);
      if (local_88.Value.bIsSet != false) {
        TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
        ::
        TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
                  ((TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
                    *)__return_storage_ptr__,&local_70);
        *(undefined8 *)&(__return_storage_ptr__->Value).TypedValue.field_0x18 =
             local_88.Value.TypedValue._0_8_;
        *(undefined8 *)&(__return_storage_ptr__->Value).TypedValue.field_0x20 =
             local_88.Value.TypedValue._8_8_;
        (__return_storage_ptr__->Value).bIsSet = true;
        return __return_storage_ptr__;
      }
    }
LAB_14a747b9e:
    (__return_storage_ptr__->Value).bIsSet = false;
  }
  return __return_storage_ptr__;
}

// Execute @ 14a7485f0

TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason> __thiscall
FMVVMCompiledBindingLibrary::Execute
          (FMVVMCompiledBindingLibrary *this,UObject *param_1,FMVVMVCompiledBinding *param_2,
          EConversionFunctionType param_3)

{
  code *pcVar1;
  bool bVar2;
  TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason> TVar3;
  undefined4 in_register_0000008c;
  
  if (param_2 == (FMVVMVCompiledBinding *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExecutionSource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                       ,0xac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar1)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar3.Error;
    }
  }
  ExecuteImpl(this,param_1,param_2,(UObject *)CONCAT44(in_register_0000008c,param_3),Simple);
  return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)
         (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)param_1;
}

// ExecuteImpl @ 14a74c380

TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason> __thiscall
FMVVMCompiledBindingLibrary::ExecuteImpl
          (FMVVMCompiledBindingLibrary *this,FFieldContext *param_1,FFieldContext *param_2,
          FFunctionContext *param_3,EConversionFunctionType param_4)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  FFunctionContext *pFVar4;
  bool bVar5;
  TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason> TVar6;
  UStruct *pUVar7;
  UClass *pUVar8;
  undefined4 in_stack_0000002c;
  int in_stack_00000030;
  
  if (in_stack_00000030 != 1) {
    bVar1 = param_2->field_0x10;
    if ((2 < (ulonglong)bVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar3)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Source.GetObjectVariant().IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                           ,0x119,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar3)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
    }
    bVar5 = UE::MVVM::TObjectVariant<0>::IsNull((TObjectVariant<0> *)param_2);
    if ((bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Source.GetObjectVariant().IsNull()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                           ,0x11a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar3)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
    }
    if (((param_2->field_0x20 == '\0') || (*(longlong *)&param_2->field_0x18 == 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Source.GetFieldVariant().IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                           ,0x11b,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar3)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
    }
    pUVar7 = UE::MVVM::TObjectVariant<0>::GetOwner((TObjectVariant<0> *)param_2);
    if (param_2->field_0x20 == '\x02') {
      if (*(FField **)&param_2->field_0x18 == (FField *)0x0) goto LAB_14a74c658;
      pUVar8 = (UClass *)FField::GetOwnerStruct(*(FField **)&param_2->field_0x18);
    }
    else {
      if ((param_2->field_0x20 != '\x01') || (*(UField **)&param_2->field_0x18 == (UField *)0x0))
      goto LAB_14a74c658;
      pUVar8 = UField::GetOwnerClass(*(UField **)&param_2->field_0x18);
    }
    if (pUVar8 == (UClass *)0x0) goto LAB_14a74c658;
    iVar2 = (int)pUVar8->_padding_;
    if (((int)pUVar7->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar2 * 8) != &pUVar8->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14a74c658;
  }
  bVar1 = *(byte *)(param_3 + 1);
  if ((2 < (ulonglong)bVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar3)();
    return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Destination.GetObjectVariant().IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                         ,0x121,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar3)();
    return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
  }
  bVar5 = UE::MVVM::TObjectVariant<0>::IsNull((TObjectVariant<0> *)param_3);
  if ((bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Destination.GetObjectVariant().IsNull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar3)();
    return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
  }
  if (((*(char *)(param_3 + 2) == '\0') || (*(longlong *)&param_3[1].field_0x8 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Destination.GetFieldVariant().IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                         ,0x123,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar3)();
    return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
  }
  pUVar7 = UE::MVVM::TObjectVariant<0>::GetOwner((TObjectVariant<0> *)param_3);
  if (*(char *)(param_3 + 2) == '\x02') {
    if (*(FField **)&param_3[1].field_0x8 == (FField *)0x0) goto LAB_14a74c658;
    pUVar8 = (UClass *)FField::GetOwnerStruct(*(FField **)&param_3[1].field_0x8);
  }
  else {
    if ((*(char *)(param_3 + 2) != '\x01') || (*(UField **)&param_3[1].field_0x8 == (UField *)0x0))
    goto LAB_14a74c658;
    pUVar8 = UField::GetOwnerClass(*(UField **)&param_3[1].field_0x8);
  }
  if (pUVar8 != (UClass *)0x0) {
    iVar2 = (int)pUVar8->_padding_;
    if (((int)pUVar7->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar2 * 8) != &pUVar8->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pFVar4 = (FFunctionContext *)CONCAT44(in_stack_0000002c,param_4);
      if (*(longlong *)&pFVar4->field_0x8 == 0) {
        UE::MVVM::BindingHelper::ExecuteBinding_NoCheck(param_2,(FFieldContext *)param_3);
        param_1->field_0x4 = 0;
        return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)
               (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)param_1;
      }
      if (in_stack_00000030 == 1) {
        UE::MVVM::BindingHelper::ExecuteBinding_NoCheck((FFieldContext *)param_3,pFVar4);
        param_1->field_0x4 = 0;
        return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)
               (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)param_1;
      }
      UE::MVVM::BindingHelper::ExecuteBinding_NoCheck(param_2,(FFieldContext *)param_3,pFVar4);
      param_1->field_0x4 = 0;
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)
             (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)param_1;
    }
  }
LAB_14a74c658:
  param_1->field_0x4 = 1;
  *(undefined4 *)param_1 = 4;
  return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)
         (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)param_1;
}

// ExecuteImpl @ 14a74c690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason> __thiscall
FMVVMCompiledBindingLibrary::ExecuteImpl
          (FMVVMCompiledBindingLibrary *this,UObject *param_1,FMVVMVCompiledBinding *param_2,
          UObject *param_3,EConversionFunctionType param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason> TVar6;
  UObject *pUVar7;
  void *pvVar8;
  FObjectVariant *pFVar9;
  UFunction *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_stack_0000002c;
  int in_stack_00000030;
  undefined1 auStackY_238 [32];
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206 [14];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [32];
  char local_1c8;
  bool local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  TValueOrError<UE::MVVM::FMVVMFieldVariant,void> local_198;
  TValueOrError<UE::MVVM::FFieldContext,void> local_180;
  TValueOrError<UE::MVVM::FFieldContext,void> local_150;
  TValueOrError<UE::MVVM::FFieldContext,void> local_120;
  FObjectVariant local_f0;
  FFieldContext local_d8;
  TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
  local_b0;
  TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
  local_98;
  FMVVMFieldVariant local_80;
  TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
  local_70;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pUVar13 = (UObject *)CONCAT44(in_stack_0000002c,param_4);
  local_d8._16_8_ = 0;
  local_d8._24_8_ = 0;
  local_d8._32_8_ = 0;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  if (in_stack_00000030 != 1) {
    if (pUVar13 == (UObject *)0x0) {
      EvaluateFieldPath(this,&local_180,(UObject *)param_2,(FMVVMVCompiledFieldPath *)param_3);
      if (local_180.Value.bIsSet == false) goto LAB_14a74c71c;
      pvVar8 = UE::MVVM::TObjectVariant<0>::GetData((TObjectVariant<0> *)&local_180);
      if ((pvVar8 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FoundSource.GetValue().GetObjectVariant().GetData() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                             ,0xed,L"Tested in EvaluateFieldPath"), bVar5)) {
        pcVar4 = (code *)swi(3);
        TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
        return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error
        ;
      }
      if ((local_180.Value.bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
        return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error
        ;
      }
      TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
      ::
      TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
                (&local_70,
                 (TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
                  *)&local_180);
      _local_58 = local_180.Value.TypedValue._24_8_;
      _uStack_50 = local_180.Value.TypedValue._32_8_;
      if (local_180.Value.bIsSet != false) {
        local_180.Value.bIsSet = false;
      }
      TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
      ::operator=((TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
                   *)&local_d8,&local_70);
      local_d8._24_4_ = local_58;
      local_d8._28_4_ = uStack_54;
      local_d8._32_4_ = uStack_50;
      local_d8._36_4_ = uStack_4c;
    }
    else {
      EvaluateFieldPath(this,&local_150,(UObject *)param_2,(FMVVMVCompiledFieldPath *)param_3);
      if (local_150.Value.bIsSet == false) {
        `FMVVMCompiledBindingLibrary::ExecuteImpl'::__l11::<lambda_1>::operator()(&local_208);
LAB_14a74c71c:
        *(undefined4 *)param_1 = 1;
        param_1->field_0x4 = 1;
        return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)
               (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)param_1;
      }
      bVar5 = UE::MVVM::TObjectVariant<0>::IsUObject((TObjectVariant<0> *)&local_150);
      if (!bVar5) {
        `FMVVMCompiledBindingLibrary::ExecuteImpl'::__l14::<lambda_2>::operator()(&local_207);
        *(undefined4 *)param_1 = 1;
        param_1->field_0x4 = 1;
        return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)
               (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)param_1;
      }
      if ((local_150.Value.bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
        return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error
        ;
      }
      pUVar7 = UE::MVVM::TObjectVariant<0>::GetUObject((TObjectVariant<0> *)&local_150);
      if (pUVar13 != pUVar7) {
        `FMVVMCompiledBindingLibrary::ExecuteImpl'::__l17::<lambda_3>::operator()(local_206);
        *(undefined4 *)param_1 = 1;
        param_1->field_0x4 = 1;
        return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)
               (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)param_1;
      }
      if ((local_150.Value.bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
        return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error
        ;
      }
      pvVar8 = UE::MVVM::TObjectVariant<0>::GetData((TObjectVariant<0> *)&local_150);
      if ((pvVar8 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestSource.GetValue().GetObjectVariant().GetData() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                             ,0xdc,L"Tested in EvaluateFieldPath"), bVar5)) {
        pcVar4 = (code *)swi(3);
        TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
        return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error
        ;
      }
      pFVar9 = UE::MVVM::FObjectVariant::FObjectVariant(&local_f0,pUVar13);
      GetFinalFieldFromPathImpl(this,&local_198,pFVar9,(FMVVMVCompiledFieldPath *)param_3);
      if (local_198.Value.bIsSet == false) goto LAB_14a74c71c;
      local_198.Value.bIsSet = false;
      local_98.TypeIndex = '\0';
      local_b0.TypeIndex = '\x02';
      local_b0._padding_ = (longlong)pUVar13;
      TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
      ::operator=(&local_98,&local_b0);
      local_80._0_8_ = local_198.Value.TypedValue._0_8_;
      local_80._8_8_ = local_198.Value.TypedValue._8_8_;
      TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
      ::operator=((TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
                   *)&local_d8,&local_98);
      local_d8._24_4_ = local_80._0_4_;
      local_d8._28_4_ = local_80._4_4_;
      local_d8._32_4_ = local_80._8_4_;
      local_d8._36_4_ = local_80._12_4_;
    }
  }
  EvaluateFieldPath(this,&local_120,(UObject *)param_2,
                    (FMVVMVCompiledFieldPath *)&param_3->field_0x4);
  if (local_120.Value.bIsSet == false) {
    *(undefined4 *)param_1 = 2;
    param_1->field_0x4 = 1;
    return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)
           (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)param_1;
  }
  pvVar8 = UE::MVVM::TObjectVariant<0>::GetData((TObjectVariant<0> *)&local_120);
  if ((pvVar8 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FoundDestination.GetValue().GetObjectVariant().GetData() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                         ,0xf8,L"Tested in EvaluateFieldPath"), bVar5)) {
    pcVar4 = (code *)swi(3);
    TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
    return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
  }
  local_1f8 = 0;
  uStack_1f0 = 0;
  if (*(short *)&param_3->field_0xa < 0) goto LAB_14a74ccf7;
  EvaluateFieldPath(this,(TValueOrError<UE::MVVM::FFieldContext,void> *)local_1e8,(UObject *)param_2
                    ,(FMVVMVCompiledFieldPath *)&param_3->field_0x8);
  if ((local_1c0 == false) || (local_1c8 != '\x01')) {
LAB_14a74cb92:
    *(undefined4 *)param_1 = 3;
    param_1->field_0x4 = 1;
    return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)
           (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)param_1;
  }
  pUVar10 = UE::MVVM::TMVVMFieldVariant<0>::GetFunction((TMVVMFieldVariant<0> *)(local_1e8 + 0x18));
  if ((pUVar10->FunctionFlags >> 0xd & 1) == 0) {
    if ((local_1c0 == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
    }
    bVar5 = UE::MVVM::TObjectVariant<0>::IsUObject((TObjectVariant<0> *)local_1e8);
    if (!bVar5) goto LAB_14a74cb92;
    if ((local_1c0 == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
    }
    pUVar10 = UE::MVVM::TMVVMFieldVariant<0>::GetFunction
                        ((TMVVMFieldVariant<0> *)(local_1e8 + 0x18));
    if ((local_1c0 == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
    }
    pUVar13 = UE::MVVM::TObjectVariant<0>::GetUObject((TObjectVariant<0> *)local_1e8);
    local_1a8 = pUVar13;
    uStack_1a0 = pUVar10;
    if ((pUVar13 == (UObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFunctionContext.h"
                           ,0x19,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
    }
    if ((pUVar10 == (UFunction *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFunction",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFunctionContext.h"
                           ,0x1a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
    }
    lVar2 = pUVar10->_padding_;
    lVar3 = *(longlong *)&pUVar13->field_0x10;
    if (lVar2 == 0) {
LAB_14a74ccc7:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectPtr->GetClass()->IsChildOf(FunctionPtr->GetOuterUClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFunctionContext.h"
                         ,0x1b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
        return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error
        ;
      }
    }
    else {
      pUVar12 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar12->_padding_;
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar12->_padding_)) goto LAB_14a74ccc7;
      if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14a74ccc7;
    }
    uVar14 = (undefined4)local_1a8;
    uVar15 = local_1a8._4_4_;
    uVar16 = (undefined4)uStack_1a0;
    uVar17 = uStack_1a0._4_4_;
  }
  else {
    if ((local_1c0 == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
    }
    pUVar10 = UE::MVVM::TMVVMFieldVariant<0>::GetFunction
                        ((TMVVMFieldVariant<0> *)(local_1e8 + 0x18));
    if (((pUVar10 == (UFunction *)0x0) || ((pUVar10->FunctionFlags & FUNC_Static) == FUNC_None)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFunction && InFunction->HasAnyFunctionFlags(FUNC_Static)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFunctionContext.h"
                           ,0x48,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
    }
    pUVar12 = (UClass *)pUVar10->_padding_;
    if (pUVar12 == (UClass *)0x0) {
LAB_14a74ca85:
      pUVar12 = (UClass *)0x0;
    }
    else {
      pUVar11 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar11->_padding_;
      if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar11->_padding_)) goto LAB_14a74ca85;
    }
    if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar12);
    }
    pUVar13 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
    local_1b8 = pUVar13;
    uStack_1b0 = pUVar10;
    if ((pUVar13 == (UObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFunctionContext.h"
                           ,0x19,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
    }
    lVar2 = *(longlong *)&pUVar13->field_0x10;
    lVar3 = pUVar10->_padding_;
    if (lVar3 == 0) {
LAB_14a74cb28:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectPtr->GetClass()->IsChildOf(FunctionPtr->GetOuterUClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFunctionContext.h"
                         ,0x1b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
        return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error
        ;
      }
    }
    else {
      pUVar12 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar12->_padding_;
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar12->_padding_)) goto LAB_14a74cb28;
      if ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14a74cb28;
    }
    uVar14 = (undefined4)local_1b8;
    uVar15 = local_1b8._4_4_;
    uVar16 = (undefined4)uStack_1b0;
    uVar17 = uStack_1b0._4_4_;
  }
  local_1f8 = CONCAT44(uVar15,uVar14);
  uStack_1f0 = CONCAT44(uVar17,uVar16);
LAB_14a74ccf7:
  if ((local_120.Value.bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    TVar6.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar4)();
    return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar6.Error;
  }
  ExecuteImpl(this,(FFieldContext *)param_1,&local_d8,(FFunctionContext *)&local_120,
              (EConversionFunctionType)&local_1f8);
  return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)
         (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)param_1;
}

// ExecuteWithSource @ 14a74d5b0

TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason> __thiscall
FMVVMCompiledBindingLibrary::ExecuteWithSource
          (FMVVMCompiledBindingLibrary *this,UObject *param_1,FMVVMVCompiledBinding *param_2,
          UObject *param_3)

{
  code *pcVar1;
  bool bVar2;
  TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason> TVar3;
  longlong in_stack_00000028;
  
  if (param_2 == (FMVVMVCompiledBinding *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExecutionSource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                       ,0xb4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar1)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar3.Error;
    }
  }
  if (in_stack_00000028 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                       ,0xb5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Error = (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)(*pcVar1)();
      return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)TVar3.Error;
    }
  }
  ExecuteImpl(this,param_1,param_2,param_3,(EConversionFunctionType)in_stack_00000028);
  return (TValueOrError<void,FMVVMCompiledBindingLibrary::EExecutionFailingReason>)
         (TOptional<FMVVMCompiledBindingLibrary::EExecutionFailingReason>)param_1;
}

// FieldPathToString @ 14a74d680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FString,FString> * __thiscall
FMVVMCompiledBindingLibrary::FieldPathToString
          (FMVVMCompiledBindingLibrary *this,TValueOrError<FString,FString> *__return_storage_ptr__,
          FMVVMVCompiledFieldPath param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TValueOrError<FString,FString> *pTVar6;
  void *pvVar7;
  UFunction *pUVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char cVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_4f8 [32];
  ulonglong local_4d8;
  longlong local_4d0;
  char local_4c8;
  char local_4c7;
  undefined1 local_4c6 [2];
  uint local_4c4;
  FName local_4c0;
  ulonglong local_4b8;
  FString local_4b0;
  FString local_4a0;
  TValueOrError<FString,FString> *local_490;
  FName local_488;
  FName local_480;
  FName local_478;
  longlong local_470;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_4f8;
  if ((((this->LoadedProperties).ArrayNum < 1) && ((this->LoadedFunctions).ArrayNum < 1)) &&
     ((this->CompiledFields).ArrayNum != 0)) {
    cVar14 = '\0';
  }
  else {
    cVar14 = '\x01';
  }
  local_468.Base = local_448;
  uVar18 = (ulonglong)param_1.StartIndex;
  local_468.CurPos = local_448;
  iVar10 = (int)param_1.Num + (int)param_1.StartIndex;
  local_468.End = (wchar_t *)local_48;
  local_4c8 = '\0';
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  local_4c7 = cVar14;
  local_490 = __return_storage_ptr__;
  if (((this->FieldPaths).ArrayNum < iVar10) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IterationMax <= FieldPaths.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                         ,0x204,
                         L"The number of field is bigger than the number of field that was compiled."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
    return pTVar6;
  }
  local_470 = (longlong)iVar10;
  uVar19 = uVar18;
  local_4b8 = uVar18;
  if ((longlong)uVar18 < local_470) {
LAB_14a74d760:
    local_4b8 = uVar18;
    if (0 < (int)((longlong)local_468.CurPos - (longlong)local_468.Base >> 1)) {
      if (local_468.End < local_468.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,1);
      }
      *local_468.CurPos = L'.';
      local_468.CurPos = local_468.CurPos + 1;
    }
    uVar17 = (uint)uVar19;
    if ((((int)uVar17 < 0) || ((this->FieldPaths).ArrayNum <= (int)uVar17)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldPaths.IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                           ,0x20c,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
      return pTVar6;
    }
    iVar10 = (this->FieldPaths).ArrayNum;
    uVar13 = 0;
    uVar4 = uVar13;
    if ((int)uVar17 < iVar10) {
      uVar4 = ~uVar17 >> 0x1f;
    }
    if (uVar4 == 0) {
      local_4d8 = (ulonglong)(int)uVar17;
      local_4d0 = (longlong)iVar10;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
        return pTVar6;
      }
    }
    uVar4 = *(uint *)((this->FieldPaths).AllocatorInstance.Data + uVar18 * 4);
    sVar9 = (short)uVar4;
    uVar18 = (ulonglong)sVar9;
    local_4c4 = uVar4;
    if (cVar14 == '\0') {
      iVar10 = (this->CompiledFields).ArrayNum;
      pFVar15 = (this->CompiledFields).AllocatorInstance.Data;
      pFVar16 = pFVar15 + (longlong)iVar10 * 0x10;
      do {
        if ((this->CompiledFields).ArrayNum != iVar10) {
          local_4c6[0] = 0;
          `TCheckedPointerIterator<FMVVMVCompiledFields_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_4c6);
        }
        if (pFVar15 == pFVar16) {
          if (local_468.End < local_468.CurPos + 9) {
            TStringBuilderBase<wchar_t>::Extend(&local_468,9);
          }
          pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"<Invalid>",0x12);
          cVar14 = local_4c7;
          goto LAB_14a74dca7;
        }
        iVar12 = (int)uVar18;
        if ((uVar4 & 0x40000) == 0) {
          iVar5 = 0;
          if (*(longlong *)pFVar15 != 0) {
            iVar5 = (int)*(short *)(pFVar15 + 0xc);
          }
          if (iVar12 < iVar5) {
            iVar10 = (this->CompiledFieldNames).ArrayNum;
            pFVar16 = (this->CompiledFieldNames).AllocatorInstance.Data;
            if ((iVar10 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
              return pTVar6;
            }
            if (((*(short *)(pFVar15 + 0xc) <= iVar12) || (iVar12 < 0)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < NumberOfFunctions && Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Bindings\\MVVMCompiledBindingLibrary.h"
                                   ,0x33,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
              return pTVar6;
            }
            iVar5 = (int)*(short *)(pFVar15 + 10) + *(short *)(pFVar15 + 8) + iVar12;
            if (((iVar5 < 0) || (iVar10 <= iVar5)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Names.IsValidIndex(LibraryStartIndex + NumberOfProperties + Index)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Bindings\\MVVMCompiledBindingLibrary.h"
                                   ,0x34,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
              return pTVar6;
            }
            uVar13 = iVar12 + *(short *)(pFVar15 + 10) + (int)*(short *)(pFVar15 + 8);
            uVar4 = 0;
            if ((int)uVar13 < iVar10) {
              uVar4 = ~uVar13 >> 0x1f;
            }
            if (uVar4 == 0) {
              local_4d8 = (ulonglong)(int)uVar13;
              local_4d0 = (longlong)iVar10;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
                return pTVar6;
              }
            }
            local_478 = *(FName *)(pFVar16 + (longlong)(int)uVar13 * 8);
            ::FName::AppendString(&local_478,&local_468);
            cVar14 = local_4c7;
            goto LAB_14a74dcb1;
          }
        }
        else {
          iVar5 = 0;
          if (*(longlong *)pFVar15 != 0) {
            iVar5 = (int)*(short *)(pFVar15 + 10);
          }
          if (iVar12 < iVar5) goto code_r0x00014a74da1d;
        }
        uVar18 = (ulonglong)(uint)(iVar12 - iVar5);
        pFVar15 = pFVar15 + 0x10;
      } while( true );
    }
    uVar11 = (uint)sVar9;
    if ((uVar4 >> 0x10 & 4) == 0) {
      if ((sVar9 < 0) || ((this->LoadedFunctions).ArrayNum <= (int)sVar9)) goto LAB_14a74d89d;
      iVar10 = (this->LoadedFunctions).ArrayNum;
      if ((int)uVar11 < iVar10) {
        uVar13 = (uint)~(int)sVar9 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (local_4d8 = uVar18, local_4d0 = (longlong)iVar10,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
        return pTVar6;
      }
      pUVar8 = FLoadedFunction::GetFunction
                         ((FLoadedFunction *)
                          ((this->LoadedFunctions).AllocatorInstance.Data + uVar18 * 0x14));
      if (pUVar8 == (UFunction *)0x0) {
        if (local_468.End < local_468.CurPos + 9) goto LAB_14a74d8ab;
        goto LAB_14a74d8bd;
      }
      local_488 = (FName)pUVar8->_padding_;
      ::FName::AppendString(&local_488,&local_468);
    }
    else {
      if (-1 < sVar9) {
        iVar10 = (this->LoadedProperties).ArrayNum;
        if (sVar9 < iVar10) {
          if ((int)uVar11 < iVar10) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (local_4d8 = uVar18, local_4d0 = (longlong)iVar10,
             bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
            return pTVar6;
          }
          pvVar7 = *(void **)((this->LoadedProperties).AllocatorInstance.Data + uVar18 * 8);
          if (pvVar7 != (void *)0x0) {
            bVar3 = IsThisNotNull(pvVar7,"FField::GetFName");
            if (bVar3) {
              local_4c0 = *(FName *)((longlong)pvVar7 + 0x20);
            }
            else {
              local_4c0.ComparisonIndex.Value = 0;
              local_4c0.Number = 0;
            }
            ::FName::AppendString(&local_4c0,&local_468);
            goto LAB_14a74dcb1;
          }
        }
      }
LAB_14a74d89d:
      if (local_468.End < local_468.CurPos + 9) {
LAB_14a74d8ab:
        TStringBuilderBase<wchar_t>::Extend(&local_468,9);
      }
LAB_14a74d8bd:
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"<Invalid>",0x12);
LAB_14a74dca7:
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x12);
      local_4c8 = '\x01';
    }
    goto LAB_14a74dcb1;
  }
LAB_14a74dd49:
  if (local_468.End < local_468.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_468,1);
  }
  *local_468.CurPos = L'\0';
  ::FString::FString(&local_4a0,local_468.Base);
  (__return_storage_ptr__->Variant)._padding_ = (longlong)local_4a0.Data.AllocatorInstance.Data;
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_4a0.Data.ArrayNum;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_4a0.Data.ArrayMax;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a0.Data.ArrayNum = 0;
  local_4a0.Data.ArrayMax = 0;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
  return __return_storage_ptr__;
code_r0x00014a74da1d:
  iVar10 = (this->CompiledFieldNames).ArrayNum;
  pFVar16 = (this->CompiledFieldNames).AllocatorInstance.Data;
  if ((iVar10 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
    return pTVar6;
  }
  if (((*(short *)(pFVar15 + 10) <= iVar12) || (iVar12 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NumberOfProperties && Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Bindings\\MVVMCompiledBindingLibrary.h"
                         ,0x2c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
    return pTVar6;
  }
  if (((*(short *)(pFVar15 + 8) + iVar12 < 0) || (iVar10 <= *(short *)(pFVar15 + 8) + iVar12)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Names.IsValidIndex(LibraryStartIndex + Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Bindings\\MVVMCompiledBindingLibrary.h"
                         ,0x2d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
    return pTVar6;
  }
  uVar13 = iVar12 + *(short *)(pFVar15 + 8);
  uVar4 = 0;
  if ((int)uVar13 < iVar10) {
    uVar4 = ~uVar13 >> 0x1f;
  }
  if (uVar4 == 0) {
    local_4d8 = (ulonglong)(int)uVar13;
    local_4d0 = (longlong)iVar10;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TValueOrError<FString,FString> *)(*pcVar1)();
      return pTVar6;
    }
  }
  local_480 = *(FName *)(pFVar16 + (longlong)(int)uVar13 * 8);
  ::FName::AppendString(&local_480,&local_468);
  cVar14 = local_4c7;
LAB_14a74dcb1:
  uVar18 = local_4b8 + 1;
  uVar19 = (ulonglong)(uVar17 + 1);
  if (local_470 <= (longlong)uVar18) goto code_r0x00014a74dccb;
  goto LAB_14a74d760;
code_r0x00014a74dccb:
  __return_storage_ptr__ = local_490;
  local_4b8 = uVar18;
  if (local_4c8 != '\0') {
    if (local_468.End < local_468.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,1);
    }
    *local_468.CurPos = L'\0';
    ::FString::FString(&local_4b0,local_468.Base);
    pTVar6 = local_490;
    FVar2.Data = local_4b0.Data.AllocatorInstance.Data;
    local_4b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_490->Variant)._padding_ = (longlong)FVar2.Data;
    *(int *)&(local_490->Variant)._padding_ = local_4b0.Data.ArrayNum;
    *(int *)((longlong)&(local_490->Variant)._padding_ + 4) = local_4b0.Data.ArrayMax;
    local_4b0.Data.ArrayNum = 0;
    local_4b0.Data.ArrayMax = 0;
    (local_490->Variant).TypeIndex = '\x01';
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
    return pTVar6;
  }
  goto LAB_14a74dd49;
}

// GetFinalFieldFromPathImpl @ 14a751650

TValueOrError<UE::MVVM::FMVVMFieldVariant,void> * __thiscall
FMVVMCompiledBindingLibrary::GetFinalFieldFromPathImpl
          (FMVVMCompiledBindingLibrary *this,
          TValueOrError<UE::MVVM::FMVVMFieldVariant,void> *__return_storage_ptr__,
          FObjectVariant *param_1,FMVVMVCompiledFieldPath *param_2)

{
  FLoadedFunction *this_00;
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TValueOrError<UE::MVVM::FMVVMFieldVariant,void> *pTVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  UFunction *local_18;
  undefined1 uStack_10;
  undefined7 uStack_f;
  
  uVar7 = param_2->StartIndex + -1 + (int)param_2->Num;
  if ((((int)uVar7 < 0) || ((this->FieldPaths).ArrayNum <= (int)uVar7)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldPaths.IsValidIndex(IterationMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                         ,0x1d5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::MVVM::FMVVMFieldVariant,void> *)(*pcVar2)();
    return pTVar4;
  }
  uVar5 = 0;
  if ((int)uVar7 < (this->FieldPaths).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::MVVM::FMVVMFieldVariant,void> *)(*pcVar2)();
    return pTVar4;
  }
  uVar7 = *(uint *)((this->FieldPaths).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
  sVar6 = (short)uVar7;
  if ((uVar7 >> 0x10 & 4) == 0) {
    if (((sVar6 < 0) || ((this->LoadedFunctions).ArrayNum <= (int)sVar6)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LoadedFunctions.IsValidIndex(FinalPathIndex.Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                           ,0x1e6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TValueOrError<UE::MVVM::FMVVMFieldVariant,void> *)(*pcVar2)();
      return pTVar4;
    }
    uVar7 = 0;
    if ((int)sVar6 < (this->LoadedFunctions).ArrayNum) {
      uVar7 = (uint)~(int)sVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TValueOrError<UE::MVVM::FMVVMFieldVariant,void> *)(*pcVar2)();
      return pTVar4;
    }
    bVar1 = param_1->field_0x10;
    this_00 = (FLoadedFunction *)
              ((this->LoadedFunctions).AllocatorInstance.Data + (longlong)sVar6 * 0x14);
    if ((2 < (ulonglong)bVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TValueOrError<UE::MVVM::FMVVMFieldVariant,void> *)(*pcVar2)();
      return pTVar4;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
      local_18 = FLoadedFunction::GetFunction(this_00);
    }
    else {
      if ((param_1->field_0x10 != '\x02') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TValueOrError<UE::MVVM::FMVVMFieldVariant,void> *)(*pcVar2)();
        return pTVar4;
      }
      local_18 = FLoadedFunction::GetFunction(this_00,*(UObject **)param_1);
    }
    if (local_18 != (UFunction *)0x0) {
      uStack_10 = 1;
      goto LAB_14a7518b8;
    }
  }
  else {
    bVar3 = CanAccessLoadedProperiesAtIndex(this,sVar6);
    if (!bVar3) {
      (__return_storage_ptr__->Value).bIsSet = false;
      return __return_storage_ptr__;
    }
    uVar7 = 0;
    if ((int)sVar6 < (this->LoadedProperties).ArrayNum) {
      uVar7 = (uint)~(int)sVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TValueOrError<UE::MVVM::FMVVMFieldVariant,void> *)(*pcVar2)();
      return pTVar4;
    }
    local_18 = *(UFunction **)
                ((this->LoadedProperties).AllocatorInstance.Data + (longlong)sVar6 * 8);
    if (local_18 != (UFunction *)0x0) {
      uStack_10 = 2;
LAB_14a7518b8:
      (__return_storage_ptr__->Value).bIsSet = true;
      *(UFunction **)&(__return_storage_ptr__->Value).TypedValue = local_18;
      *(ulonglong *)&(__return_storage_ptr__->Value).TypedValue.field_0x8 =
           CONCAT71(uStack_f,uStack_10);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Value).bIsSet = false;
  return __return_storage_ptr__;
}

// IsLoaded @ 14a7599e0

bool __thiscall FMVVMCompiledBindingLibrary::IsLoaded(FMVVMCompiledBindingLibrary *this)

{
  if ((((this->LoadedProperties).ArrayNum < 1) && ((this->LoadedFunctions).ArrayNum < 1)) &&
     ((this->CompiledFields).ArrayNum != 0)) {
    return false;
  }
  return true;
}

// LexToText @ 14a75ad70

FText * __cdecl
FMVVMCompiledBindingLibrary::LexToText
          (FText *__return_storage_ptr__,EExecutionFailingReason param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  if (param_1 == IncompatibleLibrary) {
    pwVar2 = L"Incompatible Library";
    pwVar1 = L"FailingReasonIncompatibleLibrary";
  }
  else if (param_1 == InvalidSource) {
    pwVar2 = L"Invalid Source";
    pwVar1 = L"FailingReasonInvalidSource";
  }
  else if (param_1 == InvalidDestination) {
    pwVar2 = L"Invalid Destination";
    pwVar1 = L"FailingReasonInvalidDestination";
  }
  else if (param_1 == InvalidConversionFunction) {
    pwVar2 = L"Invalid Conversion Function";
    pwVar1 = L"FailingReasonInvalidConversionFunction";
  }
  else {
    if (param_1 != InvalidCast) {
      FText::FText(__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    pwVar2 = L"Invalid Cast";
    pwVar1 = L"FailingReasonInvalidCast";
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"MVVMCompiledBindingLibrary",pwVar1,pwVar2);
  return __return_storage_ptr__;
}

// Load @ 14a75b080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMVVMCompiledBindingLibrary::Load(FMVVMCompiledBindingLibrary *this)

{
  int *piVar1;
  FWeakObjectPtr *this_00;
  short sVar2;
  FName FVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  FObjectPtr_u_0 *pFVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_LoadLibrary> FVar12;
  ulonglong uVar13;
  UClass *pUVar14;
  UFunction *this_01;
  longlong lVar15;
  FString *pFVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  wchar_t *pwVar20;
  FNameEntryId FVar21;
  int iVar22;
  wchar_t *pwVar23;
  FObjectPtr_u_0 *this_02;
  uint local_res10;
  uint uStackX_14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8 [8];
  FName local_f0;
  byte local_e8;
  FProperty *local_e0;
  FColor_u_0 local_d8;
  uint local_d4;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  UClass *local_b8;
  FObjectPtr_u_0 *local_b0;
  FObjectPtr_u_0 *local_a8;
  FName *local_a0;
  FObjectPtr_u_0 *local_98;
  FName *local_90;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  FVar12 = StatPtr_STAT_UMG_Viewmodel_LoadLibrary;
  if (StatPtr_STAT_UMG_Viewmodel_LoadLibrary ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_LoadLibrary>)0x0) {
    pFVar11 = ::FName::FName(&local_88,"STAT_UMG_Viewmodel_LoadLibrary");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_LoadLibrary>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_LoadLibrary,
                        *pFVar11,L"Load Library","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",
                        L"UMG Viewmodel",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  local_e8 = 0;
  FVar3 = *(FName *)FVar12;
  FVar21 = FVar3.ComparisonIndex.Value;
  uVar18 = FVar3.Number;
  if ((FVar21.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      local_e8 = local_e8 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar21.Value;
        local_d0.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                   ,0x78);
        local_e8 = local_e8 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar21.Value;
      uStackX_14 = uVar18;
      local_f0 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_e8 = local_e8 | 4;
    }
  }
  if ((this->LoadedProperties).ArrayNum != 0) {
    local_res10 = local_res10 & 0xffffff00;
    `FMVVMCompiledBindingLibrary::Load'::__l2::<lambda_1>::operator()(&local_res10);
  }
  if ((this->LoadedFunctions).ArrayNum != 0) {
    local_res18[0] = 0;
    `FMVVMCompiledBindingLibrary::Load'::__l2::<lambda_2>::operator()(local_res18);
  }
  local_d4 = (this->CompiledFields).ArrayNum;
  uVar13 = (ulonglong)(int)local_d4;
  this_02 = (FObjectPtr_u_0 *)(this->CompiledFields).AllocatorInstance.Data;
  local_b0 = this_02 + uVar13 * 2;
  do {
    pFVar8 = local_b0;
    iVar22 = 0;
    if ((this->CompiledFields).ArrayNum != (int)uVar13) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FMVVMVCompiledFields,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (this_02 == pFVar8) {
      if ((local_e8 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_e8 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_e8 & 4) != 0) {
        FThreadStats::AddMessage(local_f0,CycleScopeEnd);
      }
      return;
    }
    pUVar4 = this_02->Handle;
    if (pUVar4 != (UObject *)0x0) {
      pUVar14 = Z_Construct_UClass_UClass_NoRegister();
      iVar10 = (int)pUVar14->_padding_;
      if (((iVar10 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar10 * 8) ==
           &pUVar14->_padding_)) && (*(int *)&pUVar4[5].field_0xc < 0)) {
        local_f8[0] = 0;
        `FMVVMCompiledBindingLibrary::Load'::__l9::<lambda_3>::operator()(local_f8);
      }
    }
    if (this_02->Handle != (UObject *)0x0) {
      sVar2 = *(short *)((longlong)this_02 + 10);
      if (0 < sVar2) {
        piVar1 = &(this->LoadedProperties).ArrayMax;
        do {
          pFVar5 = (this->CompiledFieldNames).AllocatorInstance.Data;
          iVar10 = (this->CompiledFieldNames).ArrayNum;
          if ((iVar10 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((*(short *)((longlong)this_02 + 10) <= iVar22) || (iVar22 < 0)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < NumberOfProperties && Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Bindings\\MVVMCompiledBindingLibrary.h"
                                 ,0x2c,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((*(short *)(this_02 + 1) + iVar22 < 0) ||
              (iVar10 <= *(short *)(this_02 + 1) + iVar22)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Names.IsValidIndex(LibraryStartIndex + Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Bindings\\MVVMCompiledBindingLibrary.h"
                                 ,0x2d,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar19 = *(short *)(this_02 + 1) + iVar22;
          uVar18 = 0;
          if ((int)uVar19 < iVar10) {
            uVar18 = ~uVar19 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_c8 = *(FName *)(pFVar5 + (longlong)(int)uVar19 * 8);
          local_e0 = PropertyAccessUtil::FindPropertyByName(local_c8,(UStruct *)this_02->Handle);
          pFVar5 = (this->LoadedProperties).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_e0) &&
              ((FScriptContainerElement *)&local_e0 < pFVar5 + (longlong)*piVar1 * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = (this->LoadedProperties).ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)this,piVar1);
          }
          (this->LoadedProperties).ArrayNum = iVar10 + 1;
          *(FProperty **)((this->LoadedProperties).AllocatorInstance.Data + (longlong)iVar10 * 8) =
               local_e0;
          if (local_e0 == (FProperty *)0x0) {
            local_a0 = &local_c8;
            local_a8 = this_02;
            `FMVVMCompiledBindingLibrary::Load'::__l12::<lambda_4>::operator()(&local_a8);
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 < sVar2);
      }
      iVar22 = 0;
      pwVar23 = L"";
      if ((this_02->Handle != (UObject *)0x0) &&
         (sVar2 = *(short *)((longlong)this_02 + 0xc), 0 < sVar2)) {
        do {
          pFVar5 = (this->CompiledFieldNames).AllocatorInstance.Data;
          iVar10 = (this->CompiledFieldNames).ArrayNum;
          if ((iVar10 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((*(short *)((longlong)this_02 + 0xc) <= iVar22) || (iVar22 < 0)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < NumberOfFunctions && Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Bindings\\MVVMCompiledBindingLibrary.h"
                                 ,0x33,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar17 = (int)*(short *)(this_02 + 1) + *(short *)((longlong)this_02 + 10) + iVar22;
          if (((iVar17 < 0) || (iVar10 <= iVar17)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Names.IsValidIndex(LibraryStartIndex + NumberOfProperties + Index)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Bindings\\MVVMCompiledBindingLibrary.h"
                                 ,0x34,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar19 = (int)*(short *)(this_02 + 1) + *(short *)((longlong)this_02 + 10) + iVar22;
          uVar18 = 0;
          if ((int)uVar19 < iVar10) {
            uVar18 = ~uVar19 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar3 = *(FName *)(pFVar5 + (longlong)(int)uVar19 * 8);
          local_c0 = FVar3;
          if (this_02->Handle == (UObject *)0x0) {
            pFVar16 = GetTypeName<UClass>(local_60);
            if ((pFVar16->Data).ArrayNum != 0) {
              pwVar23 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar23);
          }
          pUVar14 = Z_Construct_UClass_UClass_NoRegister();
          bVar9 = FObjectPtr::IsA((FObjectPtr *)this_02,pUVar14);
          if ((!bVar9) || ((UClass *)this_02->Handle == (UClass *)0x0)) {
            pFVar16 = GetTypeName<UClass>(&local_80);
            if ((pFVar16->Data).ArrayNum == 0) {
              pwVar20 = L"";
            }
            else {
              pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
            }
            pFVar16 = GetFullNameForCastLogError<UStruct_const_>
                                (&local_70,(UStruct *)this_02->Handle);
            if ((pFVar16->Data).ArrayNum != 0) {
              pwVar23 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar23,pwVar20);
          }
          this_01 = UClass::FindFunctionByName((UClass *)this_02->Handle,FVar3,IncludeSuper);
          if (this_01 == (UFunction *)0x0) {
            local_90 = &local_c0;
            local_98 = this_02;
            `FMVVMCompiledBindingLibrary::Load'::__l15::<lambda_5>::operator()(&local_98);
          }
          piVar1 = &(this->LoadedFunctions).ArrayMax;
          iVar10 = (this->LoadedFunctions).ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x414,&(this->LoadedFunctions).AllocatorInstance,piVar1);
          }
          (this->LoadedFunctions).ArrayNum = iVar10 + 1;
          lVar15 = (longlong)iVar10;
          pFVar5 = (this->LoadedFunctions).AllocatorInstance.Data;
          *(undefined8 *)(pFVar5 + lVar15 * 0x14) = 0;
          *(undefined8 *)(pFVar5 + lVar15 * 0x14 + 8) = 0;
          pFVar5[lVar15 * 0x14 + 0x10] = (FScriptContainerElement)0x0;
          this_00 = (FWeakObjectPtr *)(pFVar5 + lVar15 * 0x14);
          if (this_01 != (UFunction *)0x0) {
            local_b8 = UField::GetOwnerClass((UField *)this_01);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)local_b8);
            }
            FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_b8);
            uVar7 = *(undefined4 *)((longlong)&this_01->_padding_ + 4);
            this_00[1].ObjectIndex = *(undefined4 *)&this_01->_padding_;
            this_00[1].ObjectSerialNumber = uVar7;
            *(bool *)&this_00[2].ObjectIndex =
                 (this_01->FunctionFlags & (FUNC_Static|FUNC_Final)) == FUNC_None;
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 < sVar2);
      }
    }
    this_02 = this_02 + 2;
    uVar13 = (ulonglong)local_d4;
  } while( true );
}

// Unload @ 14a767d10

void __thiscall FMVVMCompiledBindingLibrary::Unload(FMVVMCompiledBindingLibrary *this)

{
  int *piVar1;
  
  piVar1 = &(this->LoadedProperties).ArrayMax;
  (this->LoadedProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->LoadedFunctions).ArrayMax;
  (this->LoadedFunctions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&(this->LoadedFunctions).AllocatorInstance,0,piVar1);
  }
  return;
}

// operator() @ 150553ac0

bool __thiscall `FMVVMCompiledBindingLibrary::Load'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8419805663185600390>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8419805663185600390>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553db0

bool __thiscall
`FMVVMCompiledBindingLibrary::EvaluateFieldPath'::__l55::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8419805663185600108>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8419805663185600108>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553df0

bool __thiscall
`FMVVMCompiledBindingLibrary::ExecuteImpl'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8419805663185600305>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8419805663185600305>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553ef0

bool __thiscall `FMVVMCompiledBindingLibrary::Load'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8419805663185600389>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8419805663185600389>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150554060

bool __thiscall
`FMVVMCompiledBindingLibrary::EvaluateFieldPath'::__l93::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8419805663185600072>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8419805663185600072>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150554120

bool __thiscall
`FMVVMCompiledBindingLibrary::ExecuteImpl'::__l14::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8419805663185600300>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8419805663185600300>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150554160

bool __thiscall `FMVVMCompiledBindingLibrary::Load'::__l9::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8419805663185600383>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8419805663185600383>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505541a0

bool __thiscall
`FMVVMCompiledBindingLibrary::ExecuteImpl'::__l17::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8419805663185600295>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8419805663185600295>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505541e0

bool __thiscall `FMVVMCompiledBindingLibrary::Load'::__l12::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar2 = false;
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8419805663185600373>);
  if (bVar3) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    bVar5 = **(longlong **)this != 0;
    if (bVar5) {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar2 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8419805663185600373>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1505542a3;
    }
  }
  bVar3 = false;
LAB_1505542a3:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// operator() @ 150554300

bool __thiscall `FMVVMCompiledBindingLibrary::Load'::__l15::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar2 = false;
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8419805663185600364>);
  if (bVar3) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    bVar5 = **(longlong **)this != 0;
    if (bVar5) {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar2 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8419805663185600364>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1505543c3;
    }
  }
  bVar3 = false;
LAB_1505543c3:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

