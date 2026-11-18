// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 8

// StaticClass @ 14e114a00

UClass * __cdecl UOptimusNode_ConstantValueGeneratorClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ConstantValueGeneratorClass",
               &Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass.InnerSingleton,
               StaticRegisterNativesUOptimusNode_ConstantValueGeneratorClass,0x238,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNode_ConstantValueGeneratorClass>,
               InternalVTableHelperCtorCaller<UOptimusNode_ConstantValueGeneratorClass>,local_res8,
               UClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass.InnerSingleton;
}

// UOptimusNode_ConstantValueGeneratorClass @ 14e15b500

UOptimusNode_ConstantValueGeneratorClass * __thiscall
UOptimusNode_ConstantValueGeneratorClass::UOptimusNode_ConstantValueGeneratorClass
          (UOptimusNode_ConstantValueGeneratorClass *this,FVTableHelper *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusNode_ConstantValueGeneratorClass__6B_;
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

// UOptimusNode_ConstantValueGeneratorClass @ 14e15b5c0

UOptimusNode_ConstantValueGeneratorClass * __thiscall
UOptimusNode_ConstantValueGeneratorClass::UOptimusNode_ConstantValueGeneratorClass
          (UOptimusNode_ConstantValueGeneratorClass *this,FObjectInitializer *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusNode_ConstantValueGeneratorClass__6B_;
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

// ~UOptimusNode_ConstantValueGeneratorClass @ 14e1634b0

void __thiscall
UOptimusNode_ConstantValueGeneratorClass::~UOptimusNode_ConstantValueGeneratorClass
          (UOptimusNode_ConstantValueGeneratorClass *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UOptimusNode_ConstantValueGeneratorClass__6B_;
  pvVar1 = *(void **)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UClass::~UClass((UClass *)this);
  return;
}

// GetClassForType @ 14e1bc4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClass * __cdecl
UOptimusNode_ConstantValueGeneratorClass::GetClassForType
          (UPackage *param_1,FOptimusDataTypeRef *param_2)

{
  longlong lVar1;
  FOptimusDataType *pFVar2;
  void *pvVar3;
  FString *pFVar4;
  size_t sVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  FName *pFVar8;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar9;
  FProperty *pFVar10;
  FProperty *pFVar11;
  FUObjectItem *this;
  longlong *plVar12;
  FName FVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  FString local_e8;
  FName local_d8;
  FName local_d0;
  TSharedPtr<FOptimusDataType_const_,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar4 = ::FName::ToString(&param_2->TypeName,(FString *)local_f8);
  ::FString::ConcatCF(&local_e8,L"OptimusNode_ConstantValue_",pFVar4);
  if ((FName)local_f8._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  if (local_e8.Data.ArrayNum == 0) {
    local_f8._0_8_ = L"";
  }
  else {
    local_f8._8_4_ = 0;
    local_f8._0_8_ = local_e8.Data.AllocatorInstance.Data;
    if ((FName)local_e8.Data.AllocatorInstance.Data == (FName)0x0) goto LAB_14e1bc55e;
  }
  sVar5 = wcslen((wchar_t *)local_f8._0_8_);
  local_f8._8_4_ = (undefined4)sVar5;
LAB_14e1bc55e:
  pUVar6 = StaticClass();
  pUVar6 = (UClass *)
           StaticFindObject(pUVar6,(UObject *)param_1,(TStringView<wchar_t> *)local_f8,None);
  if (pUVar6 == (UClass *)0x0) {
    pUVar7 = UOptimusNode_ConstantValue::StaticClass();
    FVar13 = (FName)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar13 = (FName)local_e8.Data.AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(&local_d8,(wchar_t *)FVar13);
    FVar13 = *pFVar8;
    if (FVar13 == (FName)0x0) {
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
    local_b8._24_4_ = RF_Standalone|RF_Public;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = param_1;
    local_b8._16_8_ = FVar13;
    pUVar6 = (UClass *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar12 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    (**(code **)(pUVar6->_padding_ + 800))(pUVar6,pUVar7);
    lVar1 = pUVar7->_padding_;
    pUVar6->ClassFlags = pUVar6->ClassFlags | CLASS_Hidden;
    pUVar6->_padding_ = lVar1;
    pUVar6[1]._padding_ = (longlong)param_2->TypeName;
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar6[1]._padding_,
               (TPersistentObjectPtr<FSoftObjectPath> *)&param_2->TypeObject);
    pTVar9 = FOptimusDataTypeRef::Resolve(param_2,(TSharedPtr<FOptimusDataType_const_,1> *)local_f8)
    ;
    pFVar2 = pTVar9->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_f8._8_8_);
    pFVar8 = ::FName::FName(&local_d0,"Value");
    pFVar10 = FOptimusDataType::CreateProperty(pFVar2,(UStruct *)pUVar6,*pFVar8);
    pFVar10->PropertyFlags = pFVar10->PropertyFlags | CPF_Edit;
    pTVar9 = FOptimusDataTypeRef::Resolve(param_2,&local_c8);
    pFVar2 = pTVar9->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    pFVar8 = ::FName::FName((FName *)local_f8,"Out");
    pFVar11 = FOptimusDataType::CreateProperty(pFVar2,(UStruct *)pUVar6,*pFVar8);
    *(uint *)&pFVar11->_padding_ = (uint)pFVar11->_padding_ | 0x40;
    (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6,pFVar11);
    (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6,pFVar10);
    (**(code **)(pUVar6->_padding_ + 0x2b8))(pUVar6);
    UStruct::StaticLink((UStruct *)pUVar6,true);
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar6->_padding_ + 4));
    FUObjectItem::SetRootFlags(this,RootSet);
    if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar6);
    }
  }
  if ((FName)local_e8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pvVar3 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return pUVar6;
}

// GetPrivateStaticClass @ 14e1d7760

UClass * __cdecl UOptimusNode_ConstantValueGeneratorClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ConstantValueGeneratorClass",
               &Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass.InnerSingleton,
               StaticRegisterNativesUOptimusNode_ConstantValueGeneratorClass,0x238,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNode_ConstantValueGeneratorClass>,
               InternalVTableHelperCtorCaller<UOptimusNode_ConstantValueGeneratorClass>,local_res8,
               UClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass.InnerSingleton;
}

// Link @ 14e1f11b0

void __thiscall
UOptimusNode_ConstantValueGeneratorClass::Link
          (UOptimusNode_ConstantValueGeneratorClass *this,FArchive *param_1,bool param_2)

{
  UClass::Link((UClass *)this,param_1,param_2);
  UClass::AssembleReferenceTokenStream((UClass *)this,true);
  return;
}

// StaticRegisterNativesUOptimusNode_ConstantValueGeneratorClass @ 14e225c90

void __cdecl
UOptimusNode_ConstantValueGeneratorClass::
StaticRegisterNativesUOptimusNode_ConstantValueGeneratorClass(void)

{
  return;
}

