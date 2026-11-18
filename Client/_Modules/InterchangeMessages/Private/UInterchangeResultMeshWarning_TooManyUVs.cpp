// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeMessages
// Functions: 7

// StaticClass @ 14e65d860

UClass * __cdecl UInterchangeResultMeshWarning_TooManyUVs::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultMeshWarning_TooManyUVs.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultMeshWarning_TooManyUVs",
               &Z_Registration_Info_UClass_UInterchangeResultMeshWarning_TooManyUVs.InnerSingleton,
               StaticRegisterNativesUInterchangeResultMeshWarning_TooManyUVs,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeResultMeshWarning_TooManyUVs>,
               InternalVTableHelperCtorCaller<UInterchangeResultMeshWarning_TooManyUVs>,local_res8,
               UInterchangeResultMeshWarning::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultMeshWarning_TooManyUVs.InnerSingleton;
}

// UInterchangeResultMeshWarning_TooManyUVs @ 14e65e850

UInterchangeResultMeshWarning_TooManyUVs * __thiscall
UInterchangeResultMeshWarning_TooManyUVs::UInterchangeResultMeshWarning_TooManyUVs
          (UInterchangeResultMeshWarning_TooManyUVs *this,FVTableHelper *param_1)

{
  UInterchangeResultWarning::UInterchangeResultWarning((UInterchangeResultWarning *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInterchangeResultMeshWarning_TooManyUVs__6B_;
  return this;
}

// UInterchangeResultMeshWarning_TooManyUVs @ 14e65e890

UInterchangeResultMeshWarning_TooManyUVs * __thiscall
UInterchangeResultMeshWarning_TooManyUVs::UInterchangeResultMeshWarning_TooManyUVs
          (UInterchangeResultMeshWarning_TooManyUVs *this,FObjectInitializer *param_1)

{
  UInterchangeResultWarning::UInterchangeResultWarning((UInterchangeResultWarning *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInterchangeResultMeshWarning_TooManyUVs__6B_;
  return this;
}

// ~UInterchangeResultMeshWarning_TooManyUVs @ 14e65eb90

void __thiscall
UInterchangeResultMeshWarning_TooManyUVs::~UInterchangeResultMeshWarning_TooManyUVs
          (UInterchangeResultMeshWarning_TooManyUVs *this)

{
  this->_padding_ = (longlong)&___7UInterchangeResultMeshWarning__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeResultWarning::~UInterchangeResultWarning((UInterchangeResultWarning *)this);
  return;
}

// GetPrivateStaticClass @ 14e65f3c0

UClass * __cdecl UInterchangeResultMeshWarning_TooManyUVs::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultMeshWarning_TooManyUVs.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultMeshWarning_TooManyUVs",
               &Z_Registration_Info_UClass_UInterchangeResultMeshWarning_TooManyUVs.InnerSingleton,
               StaticRegisterNativesUInterchangeResultMeshWarning_TooManyUVs,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeResultMeshWarning_TooManyUVs>,
               InternalVTableHelperCtorCaller<UInterchangeResultMeshWarning_TooManyUVs>,local_res8,
               UInterchangeResultMeshWarning::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultMeshWarning_TooManyUVs.InnerSingleton;
}

// GetText @ 14e65f9a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UInterchangeResultMeshWarning_TooManyUVs::GetText
          (UInterchangeResultMeshWarning_TooManyUVs *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString **ppFVar5;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_c8;
  FString local_b8;
  FString local_a8;
  FString *local_98;
  undefined4 *local_90;
  FString *local_88;
  undefined4 *local_80;
  FString *local_78;
  longlong local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_58 [4];
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  ::FString::FString(&local_a8,L"MeshName");
  pFVar3 = FText::FromString(&local_38,(FString *)&this->_padding_);
  local_58[0] = 4;
  FText::FText(&local_48,pFVar3);
  if (local_48.TextData.Reference == (ITextData *)0x0) {
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
  local_98 = &local_a8;
  local_90 = local_58;
  ::FString::FString(&local_b8,L"ExcessUVs");
  local_70 = (longlong)this->ExcessUVs;
  local_88 = &local_b8;
  local_78._0_4_ = 0;
  local_80 = (undefined4 *)&local_78;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  local_c8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Pairs.ArrayNum = 0;
  local_c8.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,2,(ForAnyElementType *)&local_c8,0,&local_c8.Pairs.ArrayMax);
  ppFVar5 = &local_98;
  do {
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString_const_&,FFormatArgumentValue_const_&>
              (&local_c8,*ppFVar5,(FFormatArgumentValue *)ppFVar5[1]);
    ppFVar5 = ppFVar5 + 2;
  } while (ppFVar5 != &local_78);
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"InterchangeFbxMessages",L"TooManyUVs",
                      L"Reached the maximum number of UV Channels for mesh \'{MeshName}\' - discarding {ExcessUVs} {ExcessUVs}|plural(one=channel,other=channels)."
                     );
  pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
  FText::Format(__return_storage_ptr__,pFVar4,&local_c8);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_c8.Pairs.AllocatorInstance.Data,
             local_c8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_c8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_c8.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeResultMeshWarning_TooManyUVs @ 14e65fe90

void __cdecl
UInterchangeResultMeshWarning_TooManyUVs::
StaticRegisterNativesUInterchangeResultMeshWarning_TooManyUVs(void)

{
  return;
}

