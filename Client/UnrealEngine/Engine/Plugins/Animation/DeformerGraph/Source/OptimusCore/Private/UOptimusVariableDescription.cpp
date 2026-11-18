// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 10

// StaticClass @ 14e10ff20

UClass * __cdecl UOptimusVariableDescription::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusVariableDescription.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusVariableDescription",
               &Z_Registration_Info_UClass_UOptimusVariableDescription.InnerSingleton,
               StaticRegisterNativesUOptimusVariableDescription,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusVariableDescription>,
               InternalVTableHelperCtorCaller<UOptimusVariableDescription>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusVariableDescription.InnerSingleton;
}

// UOptimusVariableDescription @ 14e15da20

UOptimusVariableDescription * __thiscall
UOptimusVariableDescription::UOptimusVariableDescription
          (UOptimusVariableDescription *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusVariableDescription__6B_;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->VariableName).ComparisonIndex = 0;
  (this->VariableName).Number = 0;
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
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->DefaultValueStruct);
  (this->CachedShaderValue).ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedShaderValue).ShaderValue.ArrayNum = 0;
  (this->CachedShaderValue).ShaderValue.ArrayMax = 0;
  (this->CachedShaderValue).ArrayList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedShaderValue).ArrayList.ArrayNum = 0;
  (this->CachedShaderValue).ArrayList.ArrayMax = 0;
  (this->ValueData_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueData_DEPRECATED).ArrayNum = 0;
  (this->ValueData_DEPRECATED).ArrayMax = 0;
  (this->DefaultValue_DEPRECATED).field0_0x0.DebugPtr = (UOptimusValueContainer *)0x0;
  return this;
}

// UOptimusVariableDescription @ 14e15db00

UOptimusVariableDescription * __thiscall
UOptimusVariableDescription::UOptimusVariableDescription
          (UOptimusVariableDescription *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusVariableDescription__6B_;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->VariableName).ComparisonIndex = 0;
  (this->VariableName).Number = 0;
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
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->DefaultValueStruct);
  (this->CachedShaderValue).ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedShaderValue).ShaderValue.ArrayNum = 0;
  (this->CachedShaderValue).ShaderValue.ArrayMax = 0;
  (this->CachedShaderValue).ArrayList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedShaderValue).ArrayList.ArrayNum = 0;
  (this->CachedShaderValue).ArrayList.ArrayMax = 0;
  (this->ValueData_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueData_DEPRECATED).ArrayNum = 0;
  (this->ValueData_DEPRECATED).ArrayMax = 0;
  (this->DefaultValue_DEPRECATED).field0_0x0.DebugPtr = (UOptimusValueContainer *)0x0;
  return this;
}

// ~UOptimusVariableDescription @ 14e1642d0

void __thiscall
UOptimusVariableDescription::~UOptimusVariableDescription(UOptimusVariableDescription *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UOptimusVariableDescription__6B_;
  pFVar1 = (this->ValueData_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FArrayShaderValue,int>
            ((FArrayShaderValue *)(this->CachedShaderValue).ArrayList.AllocatorInstance.Data,
             (this->CachedShaderValue).ArrayList.ArrayNum);
  pFVar1 = (this->CachedShaderValue).ArrayList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedShaderValue).ShaderValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->DefaultValueStruct);
  pvVar2 = *(void **)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetIndex @ 14e1c8860

int __thiscall UOptimusVariableDescription::GetIndex(UOptimusVariableDescription *this)

{
  FScriptContainerElement *pFVar1;
  UOptimusVariableContainer *pUVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  
  pUVar2 = CastChecked<UOptimusVariableContainer,UObject>((UObject *)this->_padding_);
  pFVar1 = (pUVar2->Descriptions).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  while( true ) {
    if (pFVar3 == pFVar1 + (longlong)(pUVar2->Descriptions).ArrayNum * 8) {
      return -1;
    }
    if (*(UOptimusVariableDescription **)pFVar3 == (UOptimusVariableDescription *)0x0) {
      bVar4 = this == (UOptimusVariableDescription *)0x0;
    }
    else {
      bVar4 = *(UOptimusVariableDescription **)pFVar3 == this;
    }
    if (bVar4) break;
    pFVar3 = pFVar3 + 8;
  }
  return (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
}

// GetOwningDeformer @ 14e1cc030

UOptimusDeformer * __thiscall
UOptimusVariableDescription::GetOwningDeformer(UOptimusVariableDescription *this)

{
  UOptimusVariableContainer *pUVar1;
  UOptimusDeformer *pUVar2;
  
  pUVar1 = CastChecked<UOptimusVariableContainer,UObject>((UObject *)this->_padding_);
  if (pUVar1 != (UOptimusVariableContainer *)0x0) {
    pUVar2 = CastChecked<UOptimusDeformer,UObject>((UObject *)pUVar1->_padding_);
    return pUVar2;
  }
  return (UOptimusDeformer *)0x0;
}

// GetPrivateStaticClass @ 14e1d9e20

UClass * __cdecl UOptimusVariableDescription::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusVariableDescription.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusVariableDescription",
               &Z_Registration_Info_UClass_UOptimusVariableDescription.InnerSingleton,
               StaticRegisterNativesUOptimusVariableDescription,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusVariableDescription>,
               InternalVTableHelperCtorCaller<UOptimusVariableDescription>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusVariableDescription.InnerSingleton;
}

// PostLoad @ 14e1fc1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UOptimusVariableDescription::PostLoad(UOptimusVariableDescription *this)

{
  UObject *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FOptimusValueContainerStruct *pFVar4;
  FOptimusDataTypeRegistry *pFVar5;
  FFieldClass *pFVar6;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar7;
  FOptimusDataTypeRef *pFVar8;
  FName *pFVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  atomic<int> *paVar14;
  ulonglong uVar15;
  FName FVar16;
  undefined1 auStack_188 [32];
  undefined1 local_168 [16];
  FSoftObjectPath local_158;
  TSharedPtr<FOptimusDataType_const_,1> local_138;
  TSharedPtr<FOptimusDataType_const_,1> local_128;
  FName local_118;
  FName local_110;
  FGuid local_108;
  FInstancedStruct local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [48];
  FOptimusDataTypeRef local_78;
  float local_48;
  byte local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_188;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  UObject::PostLoad((UObject *)this);
  local_108 = FOptimusObjectVersion::GUID;
  iVar3 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_108);
  if ((iVar3 < 10) &&
     (this_00 = (UObject *)(this->DefaultValue_DEPRECATED).field0_0x0.DebugPtr,
     this_00 != (UObject *)0x0)) {
    UObject::ConditionalPostLoad(this_00);
    pFVar4 = UOptimusValueContainer::MakeValueContainerStruct
                       ((this->DefaultValue_DEPRECATED).field0_0x0.DebugPtr,
                        (FOptimusValueContainerStruct *)&local_f8);
    FOptimusValueContainerStruct::operator=(&this->DefaultValueStruct,pFVar4);
    FInstancedStruct::Reset(&local_f8);
    (this->DefaultValue_DEPRECATED).field0_0x0.DebugPtr = (UOptimusValueContainer *)0x0;
  }
  pFVar5 = FOptimusDataTypeRegistry::Get();
  pFVar6 = FFloatProperty::StaticClass();
  pTVar7 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar5->RegisteredTypes,pFVar6->Name);
  FVar12 = (FName)&pTVar7->field_0x10;
  if (pTVar7 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    FVar12 = FVar11;
  }
  if (FVar12 == (FName)0x0) {
    local_d0 = 0;
    local_d8 = 0;
    FVar12 = FVar11;
    FVar16 = FVar11;
  }
  else {
    FVar16 = ((FOptimusDataType *)FVar12)->TypeName;
    FVar12 = (FName)(((FOptimusDataType *)FVar12)->DisplayName).TextData.Reference;
    if (FVar12 != (FName)0x0) {
      LOCK();
      *(int *)&(((FOptimusDataType *)FVar12)->DisplayName).TextData.Reference =
           *(int *)&(((FOptimusDataType *)FVar12)->DisplayName).TextData.Reference + 1;
      UNLOCK();
    }
    local_e0 = 0;
    local_e8 = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar5 = FOptimusDataTypeRegistry::Get();
  pFVar6 = FDoubleProperty::StaticClass();
  pTVar7 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar5->RegisteredTypes,pFVar6->Name);
  FVar10 = (FName)&pTVar7->field_0x10;
  if (pTVar7 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    FVar10 = FVar11;
  }
  if (FVar10 == (FName)0x0) {
    local_b8 = 0;
    local_b0 = 0;
    FVar13 = FVar11;
  }
  else {
    FVar13 = ((FOptimusDataType *)FVar10)->TypeName;
    FVar11 = (FName)(((FOptimusDataType *)FVar10)->DisplayName).TextData.Reference;
    if (FVar11 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar11 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar11 + 8) + 1);
      UNLOCK();
    }
    local_c0 = 0;
    local_c8 = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (FVar12 == (FName)0x0) {
    paVar14 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar14 = (atomic<int> *)&((FOptimusDataType *)FVar12)->DisplayName;
    LOCK();
    *(int *)&(((FText *)paVar14)->TextData).Reference =
         *(int *)&(((FText *)paVar14)->TextData).Reference + 1;
    UNLOCK();
  }
  local_168._0_4_ = 0;
  local_168._4_4_ = 0;
  local_158.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubPathString.Data.ArrayNum = 0;
  local_158.SubPathString.Data.ArrayMax = 0;
  local_168._8_8_ = 0;
  local_158.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_158.AssetPath.AssetName.Number = 0;
  local_158.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_158.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_158.SubPathString,0);
  if (FVar12 != (FName)0x0) {
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  local_138.Object = (FOptimusDataType *)FVar16;
  local_138.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar12;
  FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_168,&local_138);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar12);
  if ((this->DataType).TypeName == (FName)local_168._0_8_) {
    bVar2 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8,
                       &local_158);
    if (bVar2) {
      bVar2 = true;
      goto LAB_14e1fc3b1;
    }
  }
  bVar2 = false;
LAB_14e1fc3b1:
  if (local_158.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.SubPathString.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    ::FName::FName(&local_118,FOptimusValueContainerStruct::ValuePropertyName);
    FInstancedPropertyBag::GetValueFloat(&(this->DefaultValueStruct).Value,(FName)&local_48);
    if (FVar11 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar11 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar11 + 8) + 1);
      UNLOCK();
    }
    local_128.Object = (FOptimusDataType *)FVar13;
    local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar11;
    pFVar8 = FOptimusDataTypeRef::FOptimusDataTypeRef(&local_78,&local_128);
    SetDataType(this,pFVar8);
    uVar15 = (ulonglong)local_44;
    if (2 < uVar15) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar15) != '\0') {
      if (local_44 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar9 = ::FName::FName(&local_110,FOptimusValueContainerStruct::ValuePropertyName);
      FInstancedPropertyBag::SetValueDouble
                (&(this->DefaultValueStruct).Value,*pFVar9,(double)local_48);
    }
  }
  iVar3 = FInstancedPropertyBag::GetNumPropertiesInBag(&(this->DefaultValueStruct).Value);
  if (iVar3 != 1) {
    local_a8._0_8_ = (this->DataType).TypeName;
    local_a8._8_8_ = *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_a8 + 0x10),
               (FSoftObjectPath *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8);
    SetDataType(this,(FOptimusDataTypeRef *)local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar12);
  return;
}

// SetDataType @ 14e21dcb0

void __thiscall
UOptimusVariableDescription::SetDataType
          (UOptimusVariableDescription *this,FOptimusDataTypeRef *param_1)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  undefined1 local_38 [48];
  
  if ((param_1->TypeName == (this->DataType).TypeName) &&
     (bVar2 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)&(param_1->TypeObject).SoftObjectPtr.field_0x8,
                         (FSoftObjectPath *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8),
     bVar2)) {
    iVar3 = FInstancedPropertyBag::GetNumPropertiesInBag(&(this->DefaultValueStruct).Value);
    if (iVar3 == 1) goto LAB_14e21dd36;
  }
  else {
    (this->DataType).TypeName = param_1->TypeName;
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->DataType).TypeObject,
               (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->TypeObject);
  }
  local_38._0_8_ = param_1->TypeName;
  local_38._8_8_ = *(undefined8 *)&(param_1->TypeObject).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_38 + 0x10),
             (FSoftObjectPath *)&(param_1->TypeObject).SoftObjectPtr.field_0x8);
  FOptimusValueContainerStruct::SetType(&this->DefaultValueStruct,(FOptimusDataTypeRef *)local_38);
LAB_14e21dd36:
  pvVar1 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// StaticRegisterNativesUOptimusVariableDescription @ 14e225fd0

void __cdecl UOptimusVariableDescription::StaticRegisterNativesUOptimusVariableDescription(void)

{
  return;
}

