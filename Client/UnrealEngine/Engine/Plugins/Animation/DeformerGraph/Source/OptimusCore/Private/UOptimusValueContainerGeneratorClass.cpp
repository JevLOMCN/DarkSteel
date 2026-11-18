// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 9

// StaticClass @ 14e110bc0

UClass * __cdecl UOptimusValueContainerGeneratorClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusValueContainerGeneratorClass.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusValueContainerGeneratorClass",
               &Z_Registration_Info_UClass_UOptimusValueContainerGeneratorClass.InnerSingleton,
               StaticRegisterNativesUOptimusValueContainerGeneratorClass,0x238,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusValueContainerGeneratorClass>,
               InternalVTableHelperCtorCaller<UOptimusValueContainerGeneratorClass>,local_res8,
               UClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusValueContainerGeneratorClass.InnerSingleton;
}

// UOptimusValueContainerGeneratorClass @ 14e15d7c0

UOptimusValueContainerGeneratorClass * __thiscall
UOptimusValueContainerGeneratorClass::UOptimusValueContainerGeneratorClass
          (UOptimusValueContainerGeneratorClass *this,FVTableHelper *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusValueContainerGeneratorClass__6B_;
  (this->DataType).TypeName.ComparisonIndex = 0;
  (this->DataType).TypeName.Number = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18,0);
  (this->DataType).TypeName.ComparisonIndex = 0;
  (this->DataType).TypeName.Number = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return this;
}

// UOptimusValueContainerGeneratorClass @ 14e15d880

UOptimusValueContainerGeneratorClass * __thiscall
UOptimusValueContainerGeneratorClass::UOptimusValueContainerGeneratorClass
          (UOptimusValueContainerGeneratorClass *this,FObjectInitializer *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusValueContainerGeneratorClass__6B_;
  (this->DataType).TypeName.ComparisonIndex = 0;
  (this->DataType).TypeName.Number = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18,0);
  (this->DataType).TypeName.ComparisonIndex = 0;
  (this->DataType).TypeName.Number = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return this;
}

// ~UOptimusValueContainerGeneratorClass @ 14e164240

void __thiscall
UOptimusValueContainerGeneratorClass::~UOptimusValueContainerGeneratorClass
          (UOptimusValueContainerGeneratorClass *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UOptimusValueContainerGeneratorClass__6B_;
  pvVar1 = *(void **)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UClass::~UClass((UClass *)this);
  return;
}

// GetClassForType @ 14e1bc7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClass * __cdecl
UOptimusValueContainerGeneratorClass::GetClassForType
          (UPackage *param_1,FOptimusDataTypeRef *param_2)

{
  FName FVar1;
  longlong lVar2;
  FOptimusDataType *this;
  void *pvVar3;
  FString *pFVar4;
  size_t sVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  FName *pFVar8;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar9;
  FProperty *pFVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  undefined1 auStack_108 [32];
  TStringView<wchar_t> local_e8;
  FString local_d8;
  TSharedPtr<FOptimusDataType_const_,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar4 = ::FName::ToString(&param_2->TypeName,(FString *)&local_e8);
  ::FString::ConcatCF(&local_d8,L"OptimusValueContainer_",pFVar4);
  if (local_e8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_e8.DataPtr);
  }
  if (local_d8.Data.ArrayNum == 0) {
    local_e8.DataPtr = L"";
  }
  else {
    local_e8.Size = 0;
    local_e8.DataPtr = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
    if (local_d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14e1bc83b;
  }
  sVar5 = wcslen(local_e8.DataPtr);
  local_e8.Size = (int)sVar5;
LAB_14e1bc83b:
  pUVar6 = StaticClass();
  pUVar6 = (UClass *)StaticFindObject(pUVar6,(UObject *)param_1,&local_e8,None);
  if (pUVar6 == (UClass *)0x0) {
    pUVar7 = UOptimusValueContainer::StaticClass();
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar12.Data = local_d8.Data.AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName((FName *)&local_e8,(wchar_t *)FVar12.Data);
    FVar1 = *pFVar8;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar6 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = param_1;
    local_b8._16_8_ = FVar1;
    pUVar6 = (UClass *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar11 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    (**(code **)(pUVar6->_padding_ + 800))(pUVar6,pUVar7);
    lVar2 = pUVar7->_padding_;
    pUVar6->ClassFlags = pUVar6->ClassFlags | CLASS_Hidden;
    pUVar6->_padding_ = lVar2;
    pUVar6[1]._padding_ = (longlong)param_2->TypeName;
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar6[1]._padding_,
               (TPersistentObjectPtr<FSoftObjectPath> *)&param_2->TypeObject);
    pTVar9 = FOptimusDataTypeRef::Resolve(param_2,&local_c8);
    this = pTVar9->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    pFVar10 = FOptimusDataType::CreateProperty(this,(UStruct *)pUVar6,ValuePropertyName);
    pFVar10->PropertyFlags = pFVar10->PropertyFlags | CPF_Edit;
    (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6,pFVar10);
    (**(code **)(pUVar6->_padding_ + 0x2b8))(pUVar6);
    UStruct::StaticLink((UStruct *)pUVar6,true);
    if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar6);
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pvVar3 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return pUVar6;
}

// GetPrivateStaticClass @ 14e1d9bf0

UClass * __cdecl UOptimusValueContainerGeneratorClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusValueContainerGeneratorClass.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusValueContainerGeneratorClass",
               &Z_Registration_Info_UClass_UOptimusValueContainerGeneratorClass.InnerSingleton,
               StaticRegisterNativesUOptimusValueContainerGeneratorClass,0x238,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusValueContainerGeneratorClass>,
               InternalVTableHelperCtorCaller<UOptimusValueContainerGeneratorClass>,local_res8,
               UClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusValueContainerGeneratorClass.InnerSingleton;
}

// Link @ 14e1f11e0

void __thiscall
UOptimusValueContainerGeneratorClass::Link
          (UOptimusValueContainerGeneratorClass *this,FArchive *param_1,bool param_2)

{
  UClass::Link((UClass *)this,param_1,param_2);
  UClass::AssembleReferenceTokenStream((UClass *)this,true);
  return;
}

// RefreshClassForType @ 14e205240

UClass * __cdecl
UOptimusValueContainerGeneratorClass::RefreshClassForType
          (UPackage *param_1,FOptimusDataTypeRef *param_2)

{
  code *pcVar1;
  void *pvVar2;
  FString *pFVar3;
  size_t sVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FGuid *this;
  UPackage *pUVar7;
  ForAnyElementType FVar8;
  FString local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined1 local_58 [48];
  FGuid local_28;
  
  pFVar3 = ::FName::ToString(&param_2->TypeName,(FString *)&local_98);
  ::FString::ConcatCF(&local_88,L"OptimusValueContainer_",pFVar3);
  if (local_98.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_98.DataPtr);
  }
  local_a8.Data.ArrayNum = 0;
  if (local_88.Data.ArrayNum == 0) {
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_a8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14e2052be;
  }
  sVar4 = wcslen((wchar_t *)local_a8.Data.AllocatorInstance.Data);
  local_a8.Data.ArrayNum = (int)sVar4;
LAB_14e2052be:
  pUVar5 = StaticClass();
  local_98.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  local_98.Size = local_a8.Data.ArrayNum;
  local_98._12_4_ = local_a8.Data.ArrayMax;
  pUVar6 = StaticFindObject(pUVar5,(UObject *)param_1,&local_98,None);
  if (pUVar6 != (UObject *)0x0) {
    this = FGuid::NewGuid(&local_28);
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    FGuid::AppendString(this,&local_a8,Digits);
    pFVar3 = ::FString::FString(&local_68,L"Deprecated_");
    ::FString::ConcatFF((FString *)&local_98,pFVar3,&local_88);
    ::FString::ConcatFF(&local_78,(FString *)&local_98,&local_a8);
    if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.DataPtr);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pcVar1 = *(code **)(*(longlong *)pUVar6 + 0x170);
    pUVar7 = GetTransientPackage();
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar8.Data = local_78.Data.AllocatorInstance.Data;
    }
    (*pcVar1)(pUVar6,FVar8.Data,pUVar7,0x34);
    *(uint *)&pUVar6[5].field_0xc = *(uint *)&pUVar6[5].field_0xc | 0x80000000;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  local_58._0_8_ = param_2->TypeName;
  local_58._8_8_ = *(undefined8 *)&(param_2->TypeObject).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_58 + 0x10),
             (FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8);
  pUVar5 = GetClassForType(param_1,(FOptimusDataTypeRef *)local_58);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pvVar2 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return pUVar5;
}

// StaticRegisterNativesUOptimusValueContainerGeneratorClass @ 14e225fa0

void __cdecl
UOptimusValueContainerGeneratorClass::StaticRegisterNativesUOptimusValueContainerGeneratorClass
          (void)

{
  return;
}

