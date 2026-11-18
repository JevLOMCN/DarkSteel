// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeMessages
// Functions: 7

// StaticClass @ 14e65d7a0

UClass * __cdecl UInterchangeResultMeshError_Generic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultMeshError_Generic.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultMeshError_Generic",
               &Z_Registration_Info_UClass_UInterchangeResultMeshError_Generic.InnerSingleton,
               StaticRegisterNativesUInterchangeResultMeshError_Generic,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultMeshError_Generic>,
               InternalVTableHelperCtorCaller<UInterchangeResultMeshError_Generic>,local_res8,
               UInterchangeResultMeshError::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultMeshError_Generic.InnerSingleton;
}

// UInterchangeResultMeshError_Generic @ 14e65e6d0

UInterchangeResultMeshError_Generic * __thiscall
UInterchangeResultMeshError_Generic::UInterchangeResultMeshError_Generic
          (UInterchangeResultMeshError_Generic *this,FVTableHelper *param_1)

{
  UInterchangeResultError::UInterchangeResultError((UInterchangeResultError *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInterchangeResultMeshError_Generic__6B_;
  FText::FText(&this->Text);
  return this;
}

// UInterchangeResultMeshError_Generic @ 14e65e710

UInterchangeResultMeshError_Generic * __thiscall
UInterchangeResultMeshError_Generic::UInterchangeResultMeshError_Generic
          (UInterchangeResultMeshError_Generic *this,FObjectInitializer *param_1)

{
  UInterchangeResultError::UInterchangeResultError((UInterchangeResultError *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInterchangeResultMeshError_Generic__6B_;
  FText::FText(&this->Text);
  return this;
}

// ~UInterchangeResultMeshError_Generic @ 14e65eab0

void __thiscall
UInterchangeResultMeshError_Generic::~UInterchangeResultMeshError_Generic
          (UInterchangeResultMeshError_Generic *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeResultMeshError_Generic__6B_;
  pIVar1 = (this->Text).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UInterchangeResultMeshError__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeResultError::~UInterchangeResultError((UInterchangeResultError *)this);
  return;
}

// GetPrivateStaticClass @ 14e65f180

UClass * __cdecl UInterchangeResultMeshError_Generic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultMeshError_Generic.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultMeshError_Generic",
               &Z_Registration_Info_UClass_UInterchangeResultMeshError_Generic.InnerSingleton,
               StaticRegisterNativesUInterchangeResultMeshError_Generic,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultMeshError_Generic>,
               InternalVTableHelperCtorCaller<UInterchangeResultMeshError_Generic>,local_res8,
               UInterchangeResultMeshError::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultMeshError_Generic.InnerSingleton;
}

// GetText @ 14e65f6c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UInterchangeResultMeshError_Generic::GetText
          (UInterchangeResultMeshError_Generic *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_78;
  FString local_68 [2];
  FText local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  ::FString::FString(local_68,L"MeshName");
  pFVar3 = FText::FromString(&local_48,(FString *)&this->_padding_);
  local_28.Type = Text;
  FText::FText((FText *)&local_28.TextValue,pFVar3);
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_78.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Pairs.ArrayNum = 0;
  local_78.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,(ForAnyElementType *)&local_78,0,&local_78.Pairs.ArrayMax);
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString_const_&,FFormatArgumentValue_const_&>(&local_78,local_68,&local_28);
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  pFVar4 = FTextFormat::FTextFormat(&local_38,&this->Text,Default);
  FText::Format(__return_storage_ptr__,pFVar4,&local_78);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_78.Pairs.AllocatorInstance.Data,
             local_78.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_78.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_78.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeResultMeshError_Generic @ 14e65fe60

void __cdecl
UInterchangeResultMeshError_Generic::StaticRegisterNativesUInterchangeResultMeshError_Generic(void)

{
  return;
}

