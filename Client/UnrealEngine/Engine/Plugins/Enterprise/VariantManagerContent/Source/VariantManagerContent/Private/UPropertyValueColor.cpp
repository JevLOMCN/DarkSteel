// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 9

// StaticClass @ 14e2d0980

UClass * __cdecl UPropertyValueColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueColor",
               &Z_Registration_Info_UClass_UPropertyValueColor.InnerSingleton,
               StaticRegisterNativesUPropertyValueColor,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyValueColor>,
               InternalVTableHelperCtorCaller<UPropertyValueColor>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueColor.InnerSingleton;
}

// UPropertyValueColor @ 14e2d4980

UPropertyValueColor * __thiscall
UPropertyValueColor::UPropertyValueColor(UPropertyValueColor *this,FVTableHelper *param_1)

{
  UPropertyValue::UPropertyValue((UPropertyValue *)this,param_1);
  *(undefined ***)this = &___7UPropertyValueColor__6B_;
  return this;
}

// UPropertyValueColor @ 14e2d49b0

UPropertyValueColor * __thiscall
UPropertyValueColor::UPropertyValueColor(UPropertyValueColor *this,FObjectInitializer *param_1)

{
  UPropertyValue::UPropertyValue((UPropertyValue *)this,param_1);
  *(undefined ***)this = &___7UPropertyValueColor__6B_;
  return this;
}

// ~UPropertyValueColor @ 14e2d54d0

void __thiscall UPropertyValueColor::~UPropertyValueColor(UPropertyValueColor *this)

{
  *(undefined ***)this = &___7UPropertyValueColor__6B_;
  UPropertyValue::~UPropertyValue((UPropertyValue *)this);
  return;
}

// GetDataFromResolvedObject @ 14e2dc540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UPropertyValueColor::GetDataFromResolvedObject
          (UPropertyValueColor *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName FVar1;
  ULightComponentBase *this_00;
  bool bVar2;
  int iVar3;
  FLinearColor local_18;
  
  iVar3 = (**(code **)(*(longlong *)this + 0x2f8))();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (__return_storage_ptr__,iVar3,Default);
  bVar2 = UPropertyValue::HasValidResolve((UPropertyValue *)this);
  if ((bVar2) &&
     (FVar1.ComparisonIndex.Value = *(uint *)&this->field_0xd8,
     FVar1.Number = *(uint *)&this->field_0xdc, bVar2 = ::FName::Equals(FVar1,L"SetLightColor"),
     bVar2)) {
    this_00 = *(ULightComponentBase **)&this->field_0x78;
    if ((this_00 == (ULightComponentBase *)0x0) ||
       (bVar2 = UObjectBase::IsValidLowLevel((UObjectBase *)this_00), !bVar2)) {
      if (1 < (byte)LogVariantContent._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
      }
    }
    else {
      ULightComponentBase::GetLightColor(this_00,&local_18);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,&local_18,(longlong)iVar3);
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e2de4d0

UClass * __cdecl UPropertyValueColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueColor",
               &Z_Registration_Info_UClass_UPropertyValueColor.InnerSingleton,
               StaticRegisterNativesUPropertyValueColor,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyValueColor>,
               InternalVTableHelperCtorCaller<UPropertyValueColor>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueColor.InnerSingleton;
}

// GetStructPropertyStruct @ 14e2df2b0

UScriptStruct * __thiscall UPropertyValueColor::GetStructPropertyStruct(UPropertyValueColor *this)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  int *piVar3;
  TStringView<wchar_t> local_18;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_18.Size = 0x13;
      local_18.DataPtr = L"/Script/CoreUObject";
      pUVar2 = Z_Construct_UClass_UPackage_NoRegister();
      CoreUObjectPkg = (UPackage *)StaticFindObjectChecked(pUVar2,(UObject *)0x0,&local_18,None);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    pUVar1 = CoreUObjectPkg;
    if (::_TSS1 == -1) {
      local_18.DataPtr = L"LinearColor";
      local_18.Size = 0xb;
      pUVar2 = Z_Construct_UClass_UScriptStruct_NoRegister();
      LinearColorScriptStruct =
           (UScriptStruct *)StaticFindObjectChecked(pUVar2,(UObject *)pUVar1,&local_18,None);
      _Init_thread_footer(&::_TSS1);
    }
  }
  return LinearColorScriptStruct;
}

// GetValueSizeInBytes @ 14e2e0070

int __thiscall UPropertyValueColor::GetValueSizeInBytes(UPropertyValueColor *this)

{
  return 0x10;
}

// StaticRegisterNativesUPropertyValueColor @ 14e2e7080

void __cdecl UPropertyValueColor::StaticRegisterNativesUPropertyValueColor(void)

{
  return;
}

