// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 20

// StaticClass @ 14e115060

UClass * __cdecl UOptimusNode_ConstantValue::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ConstantValue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ConstantValue",
               &Z_Registration_Info_UClass_UOptimusNode_ConstantValue.InnerSingleton,
               StaticRegisterNativesUOptimusNode_ConstantValue,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_ConstantValue>,
               InternalVTableHelperCtorCaller<UOptimusNode_ConstantValue>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ConstantValue.InnerSingleton;
}

// UOptimusNode_ConstantValue @ 14e15b440

UOptimusNode_ConstantValue * __thiscall
UOptimusNode_ConstantValue::UOptimusNode_ConstantValue
          (UOptimusNode_ConstantValue *this,FVTableHelper *param_1)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &_vftable__for__IOptimusValueProvider__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IOptimusGeneratedClassDefiner__;
  *(undefined ***)&this->field_0x118 = &_vftable__for__IOptimusPinMutabilityDefiner__;
  return this;
}

// UOptimusNode_ConstantValue @ 14e15b4a0

UOptimusNode_ConstantValue * __thiscall
UOptimusNode_ConstantValue::UOptimusNode_ConstantValue(UOptimusNode_ConstantValue *this)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x108 = &_vftable__for__IOptimusValueProvider__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IOptimusGeneratedClassDefiner__;
  *(undefined ***)&this->field_0x118 = &_vftable__for__IOptimusPinMutabilityDefiner__;
  return this;
}

// ~UOptimusNode_ConstantValue @ 14e163470

void __thiscall
UOptimusNode_ConstantValue::~UOptimusNode_ConstantValue(UOptimusNode_ConstantValue *this)

{
  *(undefined ***)this = &_vftable__for__UOptimusNode__;
  *(undefined ***)&this->field_0x118 = &___7IOptimusPinMutabilityDefiner__6B_;
  *(undefined ***)&this->field_0x110 = &___7IOptimusGeneratedClassDefiner__6B_;
  *(undefined ***)&this->field_0x108 = &___7IOptimusValueProvider__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// ConstructNode @ 14e192f00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UOptimusNode_ConstantValue::ConstructNode(UOptimusNode_ConstantValue *this)

{
  FOptimusDataType *pFVar1;
  FOptimusDataTypeRef *this_00;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  undefined1 local_res8 [8];
  TFieldIterator<FProperty> local_98;
  TFieldIterator<FProperty> local_80;
  FText local_68;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  FText local_48;
  undefined1 local_38 [32];
  void *local_18;
  
  this_00 = (FOptimusDataTypeRef *)
            (**(code **)(*(longlong *)&this->field_0x108 + 0x18))(&this->field_0x108,local_38);
  pTVar2 = FOptimusDataTypeRef::Resolve(this_00,&local_58);
  pFVar1 = pTVar2->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  local_68.TextData.Reference = (pFVar1->DisplayName).TextData.Reference;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 8))
              (local_68.TextData.Reference,local_res8);
  }
  local_68.Flags = (pFVar1->DisplayName).Flags;
  pFVar3 = FText::FromString(&local_48,L"{0} Constant");
  pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_80,pFVar3,Default);
  pFVar3 = FText::Format<FText>((FText *)&local_98,pFVar4,&local_68);
  UOptimusNode::SetDisplayName((UOptimusNode *)this,pFVar3);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  local_98.Struct = *(UStruct **)&this->field_0x10;
  if (local_98.Struct == (UStruct *)0x0) {
    local_98.Field = (FField *)0x0;
  }
  else {
    local_98.Field = (local_98.Struct)->ChildProperties;
  }
  local_98.InterfaceIndex = -1;
  local_98.bIncludeSuper = true;
  local_98.bIncludeDeprecated = true;
  local_98.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_98);
  local_80.bIncludeSuper = local_98.bIncludeSuper;
  local_80.bIncludeDeprecated = local_98.bIncludeDeprecated;
  local_80.InterfaceIndex = local_98.InterfaceIndex;
  local_80.bIncludeInterface = local_98.bIncludeInterface;
  local_80._23_1_ = local_98._23_1_;
  local_80.Struct = local_98.Struct;
  local_80.Field = local_98.Field;
  while (local_80.Field != (FField *)0x0) {
    local_80.Field = (local_80.Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_80);
  }
  return;
}

// GetAssetPathForClassDefiner @ 14e1ba1d0

FTopLevelAssetPath * __thiscall
UOptimusNode_ConstantValue::GetAssetPathForClassDefiner
          (UOptimusNode_ConstantValue *this,FTopLevelAssetPath *__return_storage_ptr__)

{
  UClass *this_00;
  
  this_00 = StaticClass();
  UStruct::GetStructPathName((UStruct *)this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetClassCreationString @ 14e1bc3b0

FString * __thiscall
UOptimusNode_ConstantValue::GetClassCreationString
          (UOptimusNode_ConstantValue *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FOptimusDataType *this_00;
  UClass *pUVar2;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar3;
  longlong lVar4;
  TSharedPtr<FOptimusDataType_const_,1> local_28;
  FString local_18;
  
  lVar4 = *(longlong *)&this[-1].field_0x20;
  if (lVar4 == 0) {
LAB_14e1bc49f:
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = UOptimusNode_ConstantValueGeneratorClass::StaticClass();
  lVar4 = *(longlong *)(lVar4 + 0x10);
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar2->_padding_)) goto LAB_14e1bc49f;
  lVar4 = *(longlong *)&this[-1].field_0x20;
  if (lVar4 != 0) {
    pUVar2 = UOptimusNode_ConstantValueGeneratorClass::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14e1bc431;
  }
  lVar4 = 0;
LAB_14e1bc431:
  pTVar3 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)(lVar4 + 0x208),&local_28);
  this_00 = pTVar3->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  ::FName::ToString(&this_00->TypeName,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"DataType=%s");
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_18.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// GetClassFromCreationString @ 14e1bca10

UClass * __thiscall
UOptimusNode_ConstantValue::GetClassFromCreationString
          (UOptimusNode_ConstantValue *this,UPackage *param_1,wchar_t *param_2)

{
  FOptimusDataType *pFVar1;
  bool bVar2;
  FOptimusDataTypeRegistry *pFVar3;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar4;
  FOptimusDataTypeRef *pFVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  FName local_res20;
  TSharedPtr<FOptimusDataType_const_,1> local_48;
  FOptimusDataTypeRef local_38;
  
  pUVar6 = (UClass *)0x0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  bVar2 = FParse::Value(param_2,L"DataType=",&local_res20);
  if (!bVar2) {
    return (UClass *)0x0;
  }
  pFVar3 = FOptimusDataTypeRegistry::Get();
  pTVar4 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar3->RegisteredTypes,local_res20);
  pUVar7 = (UClass *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    pUVar7 = pUVar6;
  }
  if (pUVar7 == (UClass *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pFVar1 = (FOptimusDataType *)pUVar7->_padding_;
    pTVar8 = (TReferenceControllerBase<1> *)pUVar7->_padding_;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar1 != (FOptimusDataType *)0x0) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = pFVar1;
      local_48.SharedReferenceCount.ReferenceController = pTVar8;
      pFVar5 = FOptimusDataTypeRef::FOptimusDataTypeRef(&local_38,&local_48);
      pUVar6 = UOptimusNode_ConstantValueGeneratorClass::GetClassForType(param_1,pFVar5);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return pUVar6;
}

// GetGeneratorClass @ 14e1c5630

UOptimusNode_ConstantValueGeneratorClass * __thiscall
UOptimusNode_ConstantValue::GetGeneratorClass(UOptimusNode_ConstantValue *this)

{
  int iVar1;
  UOptimusNode_ConstantValueGeneratorClass *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = *(UOptimusNode_ConstantValueGeneratorClass **)&this->field_0x10;
  if (pUVar2 != (UOptimusNode_ConstantValueGeneratorClass *)0x0) {
    pUVar3 = UOptimusNode_ConstantValueGeneratorClass::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UOptimusNode_ConstantValueGeneratorClass *)0x0;
}

// GetNodeCategory @ 14e1cad90

FName __thiscall UOptimusNode_ConstantValue::GetNodeCategory(UOptimusNode_ConstantValue *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = UOptimusNode::CategoryName::Values;
  return in_RDX;
}

// GetOutputPinMutability @ 14e1cbdb0

EOptimusPinMutability __thiscall
UOptimusNode_ConstantValue::GetOutputPinMutability
          (UOptimusNode_ConstantValue *this,UOptimusNodePin *param_1)

{
  return Immutable;
}

// GetPrivateStaticClass @ 14e1d76a0

UClass * __cdecl UOptimusNode_ConstantValue::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ConstantValue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ConstantValue",
               &Z_Registration_Info_UClass_UOptimusNode_ConstantValue.InnerSingleton,
               StaticRegisterNativesUOptimusNode_ConstantValue,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_ConstantValue>,
               InternalVTableHelperCtorCaller<UOptimusNode_ConstantValue>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ConstantValue.InnerSingleton;
}

// GetValue @ 14e1e9070

FOptimusValueContainerStruct * __thiscall
UOptimusNode_ConstantValue::GetValue
          (UOptimusNode_ConstantValue *this,FOptimusValueContainerStruct *__return_storage_ptr__)

{
  FOptimusDataType *pFVar1;
  code *pcVar2;
  bool bVar3;
  UOptimusNodePin *this_00;
  FOptimusValueContainerStruct *pFVar4;
  FProperty *this_01;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar5;
  int iVar6;
  FName local_res8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_e8;
  uchar *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [32];
  void *local_a8;
  TSharedPtr<FOptimusDataType_const_,1> local_98;
  TArrayView<unsigned_char_const_,int> local_88;
  undefined1 local_78 [48];
  undefined1 local_48 [48];
  
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)__return_storage_ptr__);
  ::FName::FName(&local_res8,L"Value");
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_e8.AllocatorInstance,1,&local_e8.ArrayMax);
  *(FName *)local_e8.AllocatorInstance.Data = local_res8;
  this_00 = UOptimusNode::FindPinFromPath((UOptimusNode *)&this[-1].field_0x18,&local_e8);
  if ((FName *)local_e8.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (this_00 == (UOptimusNodePin *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2816451592063025245>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ConstantValue.cpp"
                       ,0x5d,"ValuePin");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FOptimusValueContainerStruct *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    this_01 = UOptimusNodePin::GetPropertyFromPin(this_00);
    (**(code **)(*(longlong *)this + 0x18))(this);
    if (this_01 == (FProperty *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2816451592063025249>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ConstantValue.cpp"
                         ,0x61,"ValueProperty");
      if (bVar3) {
code_r0x00014e1e9201:
        pcVar2 = (code *)swi(3);
        pFVar4 = (FOptimusValueContainerStruct *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      pTVar5 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_c8,&local_98);
      pFVar1 = pTVar5->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      if (pFVar1 == (FOptimusDataType *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2816451592063025249>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ConstantValue.cpp"
                           ,0x61,"DataType.IsValid()");
        if (bVar3) goto code_r0x00014e1e9201;
      }
      else {
        iVar6 = this_01->ElementSize * this_01->ArrayDim;
        local_d8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                             (this_01,(UObject *)&this[-1].field_0x18,0);
        iStack_d0 = iVar6;
        if ((iVar6 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FOptimusValueContainerStruct *)(*pcVar2)();
          return pFVar4;
        }
        local_78._0_8_ = local_c8._0_8_;
        local_78._8_8_ = local_c8._8_8_;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_78 + 0x10),(FSoftObjectPath *)(local_c8 + 0x10));
        FOptimusValueContainerStruct::SetType
                  (__return_storage_ptr__,(FOptimusDataTypeRef *)local_78);
        local_48._0_8_ = local_c8._0_8_;
        local_48._8_8_ = local_c8._8_8_;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_48 + 0x10),(FSoftObjectPath *)(local_c8 + 0x10));
        local_88._12_4_ = uStack_cc;
        local_88.ArrayNum = iStack_d0;
        local_88.DataPtr = local_d8;
        FOptimusValueContainerStruct::SetValue
                  (__return_storage_ptr__,(FOptimusDataTypeRef *)local_48,&local_88);
      }
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  return __return_storage_ptr__;
}

// GetValueDataType @ 14e1e94a0

FOptimusDataTypeRef * __thiscall
UOptimusNode_ConstantValue::GetValueDataType
          (UOptimusNode_ConstantValue *this,FOptimusDataTypeRef *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FOptimusDataTypeRef *pFVar6;
  
  lVar2 = *(longlong *)&this[-1].field_0x28;
  if (lVar2 != 0) {
    pUVar5 = UOptimusNode_ConstantValueGeneratorClass::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      __return_storage_ptr__->TypeName = *(FName *)(lVar2 + 0x208);
      *(undefined8 *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr =
           *(undefined8 *)(lVar2 + 0x210);
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr.field_0x8,
                 (FSoftObjectPath *)(lVar2 + 0x218));
      return __return_storage_ptr__;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2816451592063025287>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ConstantValue.cpp"
                     ,0x87,"Class");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FOptimusDataTypeRef *)(*pcVar3)();
    return pFVar6;
  }
  (__return_storage_ptr__->TypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->TypeName).Number = 0;
  *(undefined8 *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr = 0;
  *(undefined8 *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr.field_0x18,0
                    );
  (__return_storage_ptr__->TypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->TypeName).Number = 0;
  *(undefined8 *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr = 0;
  *(undefined8 *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr.field_0x18,0
                    );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetValueIdentifier @ 14e1e9670

FOptimusValueIdentifier * __thiscall
UOptimusNode_ConstantValue::GetValueIdentifier
          (UOptimusNode_ConstantValue *this,FOptimusValueIdentifier *__return_storage_ptr__)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FName local_res8 [4];
  FString local_18;
  
  __return_storage_ptr__->Type = Constant;
  pFVar1 = UOptimusNode::GetNodePath((UOptimusNode *)&this[-1].field_0x18,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(local_res8,pwVar2);
  Optimus::GetSanitizedNameForHlsl((FName)&__return_storage_ptr__->Name);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PostLoadNodeSpecificData @ 14e1fe8f0

void __thiscall
UOptimusNode_ConstantValue::PostLoadNodeSpecificData(UOptimusNode_ConstantValue *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  
  UOptimusNode::PostLoadNodeSpecificData((UOptimusNode *)this);
  lVar2 = *(longlong *)(*(longlong *)&this->field_0x10 + 0x20);
  pUVar3 = Z_Construct_UClass_UPackage_NoRegister();
  lVar2 = *(longlong *)(lVar2 + 0x10);
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
    (**(code **)(**(longlong **)&this->field_0x10 + 0x170))
              (*(longlong **)&this->field_0x10,0,pUVar4,0x34);
  }
  return;
}

// StaticRegisterNativesUOptimusNode_ConstantValue @ 14e225c80

void __cdecl UOptimusNode_ConstantValue::StaticRegisterNativesUOptimusNode_ConstantValue(void)

{
  return;
}

// _getUObject @ 14e238e30

UObject * __thiscall UOptimusNode_ConstantValue::_getUObject(UOptimusNode_ConstantValue *this)

{
  return (UObject *)&this[-1].field_0x18;
}

// _getUObject`adjustor{8}' @ 14e238e40

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_ConstantValue::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_ConstantValue::_getUObject_adjustor_8__(UOptimusNode_ConstantValue *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_ConstantValue *)&this[-1].field_0x118);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14e238e50

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_ConstantValue::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_ConstantValue::_getUObject_adjustor_16__(UOptimusNode_ConstantValue *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_ConstantValue *)&this[-1].field_0x110);
  return (UObject *)pUVar1;
}

