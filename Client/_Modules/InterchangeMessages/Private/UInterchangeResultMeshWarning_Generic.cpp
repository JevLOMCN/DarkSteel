// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeMessages
// Functions: 7

// StaticClass @ 14e65d6e0

UClass * __cdecl UInterchangeResultMeshWarning_Generic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultMeshWarning_Generic.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultMeshWarning_Generic",
               &Z_Registration_Info_UClass_UInterchangeResultMeshWarning_Generic.InnerSingleton,
               StaticRegisterNativesUInterchangeResultMeshWarning_Generic,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultMeshWarning_Generic>,
               InternalVTableHelperCtorCaller<UInterchangeResultMeshWarning_Generic>,local_res8,
               UInterchangeResultMeshWarning::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultMeshWarning_Generic.InnerSingleton;
}

// UInterchangeResultMeshWarning_Generic @ 14e65e7d0

UInterchangeResultMeshWarning_Generic * __thiscall
UInterchangeResultMeshWarning_Generic::UInterchangeResultMeshWarning_Generic
          (UInterchangeResultMeshWarning_Generic *this,FVTableHelper *param_1)

{
  UInterchangeResultWarning::UInterchangeResultWarning((UInterchangeResultWarning *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInterchangeResultMeshWarning_Generic__6B_;
  FText::FText(&this->Text);
  return this;
}

// UInterchangeResultMeshWarning_Generic @ 14e65e810

UInterchangeResultMeshWarning_Generic * __thiscall
UInterchangeResultMeshWarning_Generic::UInterchangeResultMeshWarning_Generic
          (UInterchangeResultMeshWarning_Generic *this,FObjectInitializer *param_1)

{
  UInterchangeResultWarning::UInterchangeResultWarning((UInterchangeResultWarning *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInterchangeResultMeshWarning_Generic__6B_;
  FText::FText(&this->Text);
  return this;
}

// ~UInterchangeResultMeshWarning_Generic @ 14e65eb40

void __thiscall
UInterchangeResultMeshWarning_Generic::~UInterchangeResultMeshWarning_Generic
          (UInterchangeResultMeshWarning_Generic *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeResultMeshWarning_Generic__6B_;
  pIVar1 = (this->Text).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UInterchangeResultMeshWarning__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeResultWarning::~UInterchangeResultWarning((UInterchangeResultWarning *)this);
  return;
}

// GetPrivateStaticClass @ 14e65f300

UClass * __cdecl UInterchangeResultMeshWarning_Generic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultMeshWarning_Generic.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultMeshWarning_Generic",
               &Z_Registration_Info_UClass_UInterchangeResultMeshWarning_Generic.InnerSingleton,
               StaticRegisterNativesUInterchangeResultMeshWarning_Generic,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultMeshWarning_Generic>,
               InternalVTableHelperCtorCaller<UInterchangeResultMeshWarning_Generic>,local_res8,
               UInterchangeResultMeshWarning::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultMeshWarning_Generic.InnerSingleton;
}

// GetText @ 14e65f830

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UInterchangeResultMeshWarning_Generic::GetText
          (UInterchangeResultMeshWarning_Generic *this,FText *__return_storage_ptr__)

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

// StaticRegisterNativesUInterchangeResultMeshWarning_Generic @ 14e65fe80

void __cdecl
UInterchangeResultMeshWarning_Generic::StaticRegisterNativesUInterchangeResultMeshWarning_Generic
          (void)

{
  return;
}

