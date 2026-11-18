// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 11

// StaticClass @ 14e2d0f10

UClass * __cdecl UPropertyValueOption::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueOption.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueOption",
               &Z_Registration_Info_UClass_UPropertyValueOption.InnerSingleton,
               StaticRegisterNativesUPropertyValueOption,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyValueOption>,
               InternalVTableHelperCtorCaller<UPropertyValueOption>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueOption.InnerSingleton;
}

// UPropertyValueOption @ 14e2d4a40

UPropertyValueOption * __thiscall
UPropertyValueOption::UPropertyValueOption(UPropertyValueOption *this,FVTableHelper *param_1)

{
  UPropertyValue::UPropertyValue((UPropertyValue *)this,param_1);
  *(undefined ***)this = &___7UPropertyValueOption__6B_;
  return this;
}

// UPropertyValueOption @ 14e2d4a70

UPropertyValueOption * __thiscall
UPropertyValueOption::UPropertyValueOption(UPropertyValueOption *this,FObjectInitializer *param_1)

{
  UPropertyValue::UPropertyValue((UPropertyValue *)this,param_1);
  *(undefined ***)this = &___7UPropertyValueOption__6B_;
  return this;
}

// ~UPropertyValueOption @ 14e2d5510

void __thiscall UPropertyValueOption::~UPropertyValueOption(UPropertyValueOption *this)

{
  *(undefined ***)this = &___7UPropertyValueOption__6B_;
  UPropertyValue::~UPropertyValue((UPropertyValue *)this);
  return;
}

// ApplyDataToResolvedObject @ 14e2d93a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPropertyValueOption::ApplyDataToResolvedObject(UPropertyValueOption *this)

{
  ASwitchActor *this_00;
  char cVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (this->field_0x130 != '\0') {
    cVar1 = (**(code **)(*(longlong *)this + 0x2b0))(this,0);
    if (cVar1 != '\0') {
      this_00 = *(ASwitchActor **)&this->field_0x78;
      pTVar2 = UPropertyValue::GetRecordedData((UPropertyValue *)this);
      ASwitchActor::SelectOption(this_00,*(int *)(pTVar2->AllocatorInstance).Data);
    }
  }
  return;
}

// GetDataFromResolvedObject @ 14e2dc780

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UPropertyValueOption::GetDataFromResolvedObject
          (UPropertyValueOption *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  undefined4 local_res8 [2];
  
  iVar2 = (**(code **)(*(longlong *)this + 0x2f8))();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (__return_storage_ptr__,iVar2,Default);
  bVar1 = UPropertyValue::HasValidResolve((UPropertyValue *)this);
  if (bVar1) {
    local_res8[0] = *(undefined4 *)(*(longlong *)&this->field_0x78 + 0x2e8);
    iVar2 = (**(code **)(*(longlong *)this + 0x2f8))(this);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,local_res8,(longlong)iVar2);
  }
  return __return_storage_ptr__;
}

// GetDefaultValue @ 14e2dcf40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UPropertyValueOption::GetDefaultValue(UPropertyValueOption *this)

{
  undefined1 *this_00;
  
  this_00 = &this->field_0x160;
  if (*(int *)&this->field_0x168 == 0) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)this_00,4,Default);
    **(undefined4 **)this_00 = 0xffffffff;
  }
  return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)this_00;
}

// GetPrivateStaticClass @ 14e2de650

UClass * __cdecl UPropertyValueOption::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueOption.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueOption",
               &Z_Registration_Info_UClass_UPropertyValueOption.InnerSingleton,
               StaticRegisterNativesUPropertyValueOption,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyValueOption>,
               InternalVTableHelperCtorCaller<UPropertyValueOption>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueOption.InnerSingleton;
}

// GetValueSizeInBytes @ 14e2e0090

int __thiscall UPropertyValueOption::GetValueSizeInBytes(UPropertyValueOption *this)

{
  return 4;
}

// Resolve @ 14e2e3790

bool __thiscall UPropertyValueOption::Resolve(UPropertyValueOption *this,UObject *param_1)

{
  int iVar1;
  UVariantObjectBinding *this_00;
  UClass *pUVar2;
  
  if (param_1 == (UObject *)0x0) {
    this_00 = *(UVariantObjectBinding **)&this->field_0x20;
    if (this_00 == (UVariantObjectBinding *)0x0) goto LAB_14e2e3823;
    pUVar2 = UVariantObjectBinding::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) goto LAB_14e2e3823;
    param_1 = UVariantObjectBinding::GetObject(this_00);
    if (param_1 == (UObject *)0x0) goto LAB_14e2e3823;
  }
  pUVar2 = ASwitchActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar2->_padding_)) && (param_1 != (UObject *)0x0)) {
    pUVar2 = ASwitchActor::StaticClass();
    *(UClass **)&this->field_0x70 = pUVar2;
    *(UObject **)&this->field_0x78 = param_1;
    return true;
  }
LAB_14e2e3823:
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  return false;
}

// StaticRegisterNativesUPropertyValueOption @ 14e2e70a0

void __cdecl UPropertyValueOption::StaticRegisterNativesUPropertyValueOption(void)

{
  return;
}

