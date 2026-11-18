// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeMessages
// Functions: 7

// StaticClass @ 14e65d920

UClass * __cdecl UInterchangeResultTextureDisplay_TextureFileDoNotExist::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultTextureDisplay_TextureFileDoNotExist.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",
               L"InterchangeResultTextureDisplay_TextureFileDoNotExist",
               &Z_Registration_Info_UClass_UInterchangeResultTextureDisplay_TextureFileDoNotExist.
                InnerSingleton,
               StaticRegisterNativesUInterchangeResultTextureDisplay_TextureFileDoNotExist,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeResultTextureDisplay_TextureFileDoNotExist>,
               InternalVTableHelperCtorCaller<UInterchangeResultTextureDisplay_TextureFileDoNotExist>
               ,local_res8,UInterchangeResultTextureDisplay::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultTextureDisplay_TextureFileDoNotExist.
         InnerSingleton;
}

// UInterchangeResultTextureDisplay_TextureFileDoNotExist @ 14e65e950

UInterchangeResultTextureDisplay_TextureFileDoNotExist * __thiscall
UInterchangeResultTextureDisplay_TextureFileDoNotExist::
UInterchangeResultTextureDisplay_TextureFileDoNotExist
          (UInterchangeResultTextureDisplay_TextureFileDoNotExist *this,FVTableHelper *param_1)

{
  UInterchangeResultDisplay_Generic::UInterchangeResultDisplay_Generic
            ((UInterchangeResultDisplay_Generic *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResultTextureDisplay_TextureFileDoNotExist__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MaterialName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialName).Data.ArrayNum = 0;
  (this->MaterialName).Data.ArrayMax = 0;
  return this;
}

// UInterchangeResultTextureDisplay_TextureFileDoNotExist @ 14e65e9a0

UInterchangeResultTextureDisplay_TextureFileDoNotExist * __thiscall
UInterchangeResultTextureDisplay_TextureFileDoNotExist::
UInterchangeResultTextureDisplay_TextureFileDoNotExist
          (UInterchangeResultTextureDisplay_TextureFileDoNotExist *this,FObjectInitializer *param_1)

{
  UInterchangeResultDisplay_Generic::UInterchangeResultDisplay_Generic
            ((UInterchangeResultDisplay_Generic *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResultTextureDisplay_TextureFileDoNotExist__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MaterialName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialName).Data.ArrayNum = 0;
  (this->MaterialName).Data.ArrayMax = 0;
  return this;
}

// ~UInterchangeResultTextureDisplay_TextureFileDoNotExist @ 14e65ec10

void __thiscall
UInterchangeResultTextureDisplay_TextureFileDoNotExist::
~UInterchangeResultTextureDisplay_TextureFileDoNotExist
          (UInterchangeResultTextureDisplay_TextureFileDoNotExist *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeResultTextureDisplay_TextureFileDoNotExist__6B_;
  pFVar1 = (this->MaterialName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInterchangeResultTextureDisplay__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeResultDisplay_Generic::~UInterchangeResultDisplay_Generic
            ((UInterchangeResultDisplay_Generic *)this);
  return;
}

// GetPrivateStaticClass @ 14e65f540

UClass * __cdecl UInterchangeResultTextureDisplay_TextureFileDoNotExist::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultTextureDisplay_TextureFileDoNotExist.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",
               L"InterchangeResultTextureDisplay_TextureFileDoNotExist",
               &Z_Registration_Info_UClass_UInterchangeResultTextureDisplay_TextureFileDoNotExist.
                InnerSingleton,
               StaticRegisterNativesUInterchangeResultTextureDisplay_TextureFileDoNotExist,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeResultTextureDisplay_TextureFileDoNotExist>,
               InternalVTableHelperCtorCaller<UInterchangeResultTextureDisplay_TextureFileDoNotExist>
               ,local_res8,UInterchangeResultTextureDisplay::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultTextureDisplay_TextureFileDoNotExist.
         InnerSingleton;
}

// GetText @ 14e65fb90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UInterchangeResultTextureDisplay_TextureFileDoNotExist::GetText
          (UInterchangeResultTextureDisplay_TextureFileDoNotExist *this,
          FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString **ppFVar5;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_f8;
  FString local_e8;
  FString local_d8;
  FString *local_c8;
  undefined4 *local_c0;
  FString *local_b8;
  undefined4 *local_b0;
  FString *local_a8 [2];
  FText local_98;
  undefined4 local_88 [4];
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  FTextFormat local_18;
  
  ::FString::FString(&local_d8,L"TextureName");
  pFVar3 = FText::FromString(&local_58,(FString *)&this->_padding_);
  local_88[0] = 4;
  FText::FText(&local_78,pFVar3);
  if (local_78.TextData.Reference == (ITextData *)0x0) {
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
  local_c8 = &local_d8;
  local_c0 = local_88;
  ::FString::FString(&local_e8,L"MaterialName");
  pFVar3 = FText::FromString(&local_68,&this->MaterialName);
  local_a8[0]._0_4_ = 4;
  FText::FText(&local_98,pFVar3);
  if (local_98.TextData.Reference == (ITextData *)0x0) {
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
  local_b8 = &local_e8;
  local_b0 = (undefined4 *)local_a8;
  local_f8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Pairs.ArrayNum = 0;
  local_f8.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,2,(ForAnyElementType *)&local_f8,0,&local_f8.Pairs.ArrayMax);
  ppFVar5 = &local_c8;
  do {
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString_const_&,FFormatArgumentValue_const_&>
              (&local_f8,*ppFVar5,(FFormatArgumentValue *)ppFVar5[1]);
    ppFVar5 = ppFVar5 + 2;
  } while (ppFVar5 != local_a8);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if ((this->MaterialName).Data.ArrayNum < 2) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"InterchangeFbxMessages",L"TextureFileCannotBeOpened",
                        L"Cannot open texture file \'{TextureName}\'.");
    pFVar4 = FTextFormat::FTextFormat(&local_28,pFVar3,Default);
    FText::Format(__return_storage_ptr__,pFVar4,&local_f8);
  }
  else {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"InterchangeFbxMessages",L"CannotOpenTextureFileOnImport",
                        L"Cannot open texture file \'{TextureName}\' when importing material \'{MaterialName}\'."
                       );
    pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
    FText::Format(__return_storage_ptr__,pFVar4,&local_f8);
    local_48.TextData.Reference = local_38.TextData.Reference;
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_f8.Pairs.AllocatorInstance.Data,
             local_f8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_f8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_f8.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeResultTextureDisplay_TextureFileDoNotExist @ 14e65feb0

void __cdecl
UInterchangeResultTextureDisplay_TextureFileDoNotExist::
StaticRegisterNativesUInterchangeResultTextureDisplay_TextureFileDoNotExist(void)

{
  return;
}

