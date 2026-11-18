// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 13

// StaticClass @ 1468db040

UClass * __cdecl UTextBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"TextBinding",&Z_Registration_Info_UClass_UTextBinding.InnerSingleton
               ,StaticRegisterNativesUTextBinding,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextBinding>,InternalVTableHelperCtorCaller<UTextBinding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextBinding.InnerSingleton;
}

// UTextBinding @ 146902110

UTextBinding * __thiscall UTextBinding::UTextBinding(UTextBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  this->_padding_ = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UTextBinding__6B_;
  (this->NeedsConversion).bIsSet = false;
  return this;
}

// UTextBinding @ 146902170

UTextBinding * __thiscall UTextBinding::UTextBinding(UTextBinding *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  this->_padding_ = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UTextBinding__6B_;
  (this->NeedsConversion).bIsSet = false;
  return this;
}

// ~UTextBinding @ 146904d10

void __thiscall UTextBinding::~UTextBinding(UTextBinding *this)

{
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// Bind @ 14690cd80

void __thiscall
UTextBinding::Bind(UTextBinding *this,FProperty *param_1,
                  TScriptDelegate<FNotThreadSafeDelegateMode> *param_2)

{
  FFieldClass *pFVar1;
  FFieldClass *pFVar2;
  FName FVar3;
  UTextBinding *local_res10;
  FDestructionSentinel local_28;
  
  pFVar1 = (FFieldClass *)param_1->_padding_;
  pFVar2 = FTextProperty::StaticClass();
  local_res10 = this;
  if (pFVar1 == pFVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&BinderFunction,L"GetTextValue");
      _Init_thread_footer(&::_TSS0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FWriteAccessScope *)&local_28);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UTextBinding *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&param_2->Object,(FObjectPtr)&local_res10);
    FVar3 = BinderFunction;
  }
  else {
    pFVar1 = (FFieldClass *)param_1->_padding_;
    pFVar2 = FStrProperty::StaticClass();
    if (pFVar1 != pFVar2) {
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&BinderFunction,L"GetStringValue");
      _Init_thread_footer(&::_TSS1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FWriteAccessScope *)&local_28);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UTextBinding *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&param_2->Object,(FObjectPtr)&local_res10);
    FVar3 = BinderFunction;
  }
  param_2->FunctionName = FVar3;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// GetPrivateStaticClass @ 146922b10

UClass * __cdecl UTextBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"TextBinding",&Z_Registration_Info_UClass_UTextBinding.InnerSingleton
               ,StaticRegisterNativesUTextBinding,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextBinding>,InternalVTableHelperCtorCaller<UTextBinding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextBinding.InnerSingleton;
}

// GetStringValue @ 146924640

FString * __thiscall
UTextBinding::GetStringValue(UTextBinding *this,FString *__return_storage_ptr__)

{
  TOptional<UTextBinding::EConversion> *pTVar1;
  bool bVar2;
  UObject *pUVar3;
  FText *pFVar4;
  FString *pFVar5;
  float local_res8 [2];
  char local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined2 local_45 [2];
  FText local_40;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar3 != (UObject *)0x0) {
    pTVar1 = &this->NeedsConversion;
    if (((this->NeedsConversion).bIsSet == false) || (pTVar1->TypedValue == None)) {
      local_40.TextData.Reference = (ITextData *)0x0;
      local_40.Flags = 0;
      local_40._12_4_ = 0;
      bVar2 = FDynamicPropertyPath::GetValue<FString>
                        ((FDynamicPropertyPath *)&this->_padding_,pUVar3,(FString *)&local_40);
      if (bVar2) {
        if ((TOptional<UTextBinding::EConversion> *)&local_48 != pTVar1) {
          pTVar1->TypedValue = None;
          pTVar1->bIsSet = true;
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (FScriptContainerElement *)local_40.TextData.Reference;
        (__return_storage_ptr__->Data).ArrayNum = local_40.Flags;
        (__return_storage_ptr__->Data).ArrayMax = local_40._12_4_;
        return __return_storage_ptr__;
      }
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_40.TextData.Reference);
      }
    }
    if (((this->NeedsConversion).bIsSet == false) || (pTVar1->TypedValue == Words)) {
      pFVar4 = FText::GetEmpty();
      local_40.TextData.Reference = (pFVar4->TextData).Reference;
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 8))
                  (local_40.TextData.Reference,local_res8);
      }
      local_40.Flags = pFVar4->Flags;
      bVar2 = FDynamicPropertyPath::GetValue<FText>
                        ((FDynamicPropertyPath *)&this->_padding_,pUVar3,&local_40);
      if (bVar2) {
        if ((TOptional<UTextBinding::EConversion> *)&local_47 != pTVar1) {
          pTVar1->TypedValue = Words;
          pTVar1->bIsSet = true;
        }
        pFVar5 = FText::ToString(&local_40);
        ::FString::FString(__return_storage_ptr__,pFVar5);
        if (local_40.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
      }
    }
    if ((((this->NeedsConversion).bIsSet == false) || (pTVar1->TypedValue == Integer)) &&
       (bVar2 = FDynamicPropertyPath::GetValue<int>
                          ((FDynamicPropertyPath *)&this->_padding_,pUVar3,(int *)local_res8), bVar2
       )) {
      if ((TOptional<UTextBinding::EConversion> *)&local_46 != pTVar1) {
        pTVar1->TypedValue = Integer;
        pTVar1->bIsSet = true;
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      ::FString::AppendInt(__return_storage_ptr__,(int)local_res8[0]);
      return __return_storage_ptr__;
    }
    if ((((this->NeedsConversion).bIsSet == false) || (pTVar1->TypedValue == Float)) &&
       (bVar2 = FDynamicPropertyPath::GetValue<float>
                          ((FDynamicPropertyPath *)&this->_padding_,pUVar3,local_res8), bVar2)) {
      pTVar1 = &this->NeedsConversion;
      if ((TOptional<UTextBinding::EConversion> *)local_45 != pTVar1) {
        pTVar1->TypedValue = Float;
        pTVar1->bIsSet = true;
      }
      ::FString::SanitizeFloat(__return_storage_ptr__,(double)local_res8[0],1);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTextValue @ 146924850

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall UTextBinding::GetTextValue(UTextBinding *this,FText *__return_storage_ptr__)

{
  TOptional<UTextBinding::EConversion> *pTVar1;
  ITextData *pIVar2;
  bool bVar3;
  UObject *pUVar4;
  FText *pFVar5;
  float local_res8 [2];
  char local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined2 local_45 [2];
  TSharedPtr<FCulture,1> local_40;
  
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar4 != (UObject *)0x0) {
    pTVar1 = &this->NeedsConversion;
    if (((this->NeedsConversion).bIsSet == false) || (pTVar1->TypedValue == None)) {
      pFVar5 = FText::GetEmpty();
      local_40.Object = (FCulture *)(pFVar5->TextData).Reference;
      if (local_40.Object != (FCulture *)0x0) {
        (*(code *)((((local_40.Object)->Implementation).Ptr)->ICULocale)._padding_)
                  (local_40.Object,local_res8);
      }
      local_40.SharedReferenceCount.ReferenceController._0_4_ = pFVar5->Flags;
      bVar3 = FDynamicPropertyPath::GetValue<FText>
                        ((FDynamicPropertyPath *)&this->_padding_,pUVar4,(FText *)&local_40);
      if (bVar3) {
        if ((TOptional<UTextBinding::EConversion> *)&local_48 != pTVar1) {
          pTVar1->TypedValue = None;
          pTVar1->bIsSet = true;
        }
        FText::FText(__return_storage_ptr__,(FText *)&local_40);
        if (local_40.Object == (FCulture *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((((local_40.Object)->Implementation).Ptr)->ICULocale).language)();
        return __return_storage_ptr__;
      }
      if (local_40.Object != (FCulture *)0x0) {
        (**(code **)((((local_40.Object)->Implementation).Ptr)->ICULocale).language)();
      }
    }
    if (((this->NeedsConversion).bIsSet == false) || (pTVar1->TypedValue == String)) {
      local_40.Object = (FCulture *)0x0;
      local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      bVar3 = FDynamicPropertyPath::GetValue<FString>
                        ((FDynamicPropertyPath *)&this->_padding_,pUVar4,(FString *)&local_40);
      if (bVar3) {
        if ((TOptional<UTextBinding::EConversion> *)&local_47 != pTVar1) {
          pTVar1->TypedValue = String;
          pTVar1->bIsSet = true;
        }
        FText::FromString(__return_storage_ptr__,(FString *)&local_40);
        if (local_40.Object == (FCulture *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_40.Object);
        return __return_storage_ptr__;
      }
      if (local_40.Object != (FCulture *)0x0) {
        FMemory::Free(local_40.Object);
      }
    }
    if ((((this->NeedsConversion).bIsSet == false) || (pTVar1->TypedValue == Integer)) &&
       (bVar3 = FDynamicPropertyPath::GetValue<int>
                          ((FDynamicPropertyPath *)&this->_padding_,pUVar4,(int *)local_res8), bVar3
       )) {
      if ((TOptional<UTextBinding::EConversion> *)&local_46 != pTVar1) {
        pTVar1->TypedValue = Integer;
        pTVar1->bIsSet = true;
      }
      local_40.Object = (FCulture *)0x0;
      local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FText::AsNumber(__return_storage_ptr__,(int)local_res8[0],(FNumberFormattingOptions *)0x0,
                      &local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    if ((((this->NeedsConversion).bIsSet == false) || (pTVar1->TypedValue == Float)) &&
       (bVar3 = FDynamicPropertyPath::GetValue<float>
                          ((FDynamicPropertyPath *)&this->_padding_,pUVar4,local_res8), bVar3)) {
      pTVar1 = &this->NeedsConversion;
      if ((TOptional<UTextBinding::EConversion> *)local_45 != pTVar1) {
        pTVar1->TypedValue = Float;
        pTVar1->bIsSet = true;
      }
      local_40.Object = (FCulture *)0x0;
      local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FText::AsNumber(__return_storage_ptr__,local_res8[0],(FNumberFormattingOptions *)0x0,&local_40
                     );
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
  pFVar5 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// IsSupportedDestination @ 14692d160

bool __thiscall UTextBinding::IsSupportedDestination(UTextBinding *this,FProperty *param_1)

{
  FFieldClass *pFVar1;
  FFieldClass *pFVar2;
  
  pFVar1 = (FFieldClass *)param_1->_padding_;
  pFVar2 = FTextProperty::StaticClass();
  return pFVar1 == pFVar2;
}

// IsSupportedSource @ 14692d4a0

bool __thiscall UTextBinding::IsSupportedSource(UTextBinding *this,FProperty *param_1)

{
  longlong *plVar1;
  FFieldClass *pFVar2;
  FFieldClass *pFVar3;
  
  pFVar2 = (FFieldClass *)param_1->_padding_;
  plVar1 = &param_1->_padding_;
  pFVar3 = FTextProperty::StaticClass();
  if (pFVar2 != pFVar3) {
    pFVar2 = (FFieldClass *)*plVar1;
    pFVar3 = FStrProperty::StaticClass();
    if (pFVar2 != pFVar3) {
      if ((*(ulonglong *)(*plVar1 + 0x18) & 0x1000000000000) != 0) {
        param_1 = (FProperty *)param_1[1]._padding_;
      }
      pFVar2 = (FFieldClass *)param_1->_padding_;
      pFVar3 = FIntProperty::StaticClass();
      if (pFVar2 != pFVar3) {
        pFVar2 = (FFieldClass *)*plVar1;
        pFVar3 = FFloatProperty::StaticClass();
        if (pFVar2 != pFVar3) {
          return false;
        }
      }
    }
  }
  return true;
}

// StaticRegisterNativesUTextBinding @ 146945a20

void __cdecl UTextBinding::StaticRegisterNativesUTextBinding(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UTextBinding_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetStringValue @ 1469526c0

void __cdecl UTextBinding::execGetStringValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetStringValue((UTextBinding *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetTextValue @ 146952740

void __cdecl UTextBinding::execGetTextValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetTextValue((UTextBinding *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

