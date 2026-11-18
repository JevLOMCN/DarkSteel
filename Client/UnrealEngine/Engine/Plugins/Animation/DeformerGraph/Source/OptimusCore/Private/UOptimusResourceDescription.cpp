// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 8

// StaticClass @ 14e1080e0

UClass * __cdecl UOptimusResourceDescription::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusResourceDescription.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusResourceDescription",
               &Z_Registration_Info_UClass_UOptimusResourceDescription.InnerSingleton,
               StaticRegisterNativesUOptimusResourceDescription,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusResourceDescription>,
               InternalVTableHelperCtorCaller<UOptimusResourceDescription>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusResourceDescription.InnerSingleton;
}

// UOptimusResourceDescription @ 14e15c9d0

UOptimusResourceDescription * __thiscall
UOptimusResourceDescription::UOptimusResourceDescription
          (UOptimusResourceDescription *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusResourceDescription__6B_;
  (this->ResourceName).ComparisonIndex = 0;
  (this->ResourceName).Number = 0;
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
  (this->ComponentBinding).WeakPtr = (FWeakObjectPtr)0x0;
  FOptimusDataDomain::FOptimusDataDomain(&this->DataDomain);
  (this->DataInterface).field0_0x0.DebugPtr = (UOptimusPersistentBufferDataInterface *)0x0;
  return this;
}

// ~UOptimusResourceDescription @ 14e163e00

void __thiscall
UOptimusResourceDescription::~UOptimusResourceDescription(UOptimusResourceDescription *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UOptimusResourceDescription__6B_;
  pFVar1 = (this->DataDomain).LevelNames_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataDomain).Expression.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataDomain).DimensionNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetIndex @ 14e1c87f0

int __thiscall UOptimusResourceDescription::GetIndex(UOptimusResourceDescription *this)

{
  FScriptContainerElement *pFVar1;
  UOptimusResourceContainer *pUVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  
  pUVar2 = CastChecked<UOptimusResourceContainer,UObject>((UObject *)this->_padding_);
  pFVar1 = (pUVar2->Descriptions).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  while( true ) {
    if (pFVar3 == pFVar1 + (longlong)(pUVar2->Descriptions).ArrayNum * 8) {
      return -1;
    }
    if (*(UOptimusResourceDescription **)pFVar3 == (UOptimusResourceDescription *)0x0) {
      bVar4 = this == (UOptimusResourceDescription *)0x0;
    }
    else {
      bVar4 = *(UOptimusResourceDescription **)pFVar3 == this;
    }
    if (bVar4) break;
    pFVar3 = pFVar3 + 8;
  }
  return (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
}

// GetOwningDeformer @ 14e1cc000

UOptimusDeformer * __thiscall
UOptimusResourceDescription::GetOwningDeformer(UOptimusResourceDescription *this)

{
  UOptimusResourceContainer *pUVar1;
  UOptimusDeformer *pUVar2;
  
  pUVar1 = CastChecked<UOptimusResourceContainer,UObject>((UObject *)this->_padding_);
  if (pUVar1 != (UOptimusResourceContainer *)0x0) {
    pUVar2 = CastChecked<UOptimusDeformer,UObject>((UObject *)pUVar1->_padding_);
    return pUVar2;
  }
  return (UOptimusDeformer *)0x0;
}

// GetPrivateStaticClass @ 14e1d8a10

UClass * __cdecl UOptimusResourceDescription::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusResourceDescription.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusResourceDescription",
               &Z_Registration_Info_UClass_UOptimusResourceDescription.InnerSingleton,
               StaticRegisterNativesUOptimusResourceDescription,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusResourceDescription>,
               InternalVTableHelperCtorCaller<UOptimusResourceDescription>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusResourceDescription.InnerSingleton;
}

// PostLoad @ 14e1fbee0

void __thiscall UOptimusResourceDescription::PostLoad(UOptimusResourceDescription *this)

{
  UOptimusPersistentBufferDataInterface *pUVar1;
  bool bVar2;
  FOptimusDataTypeRegistry *pFVar3;
  FFieldClass *pFVar4;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar5;
  FOptimusDataType *pFVar6;
  atomic<int> *paVar7;
  FOptimusDataType *pFVar8;
  FName FVar9;
  FName FVar10;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  undefined1 local_58 [8];
  TPersistentObjectPtr<FSoftObjectPath> local_50;
  
  FVar9 = (FName)0x0;
  UObject::PostLoad((UObject *)this);
  pUVar1 = (this->DataInterface).field0_0x0.DebugPtr;
  if (pUVar1 != (UOptimusPersistentBufferDataInterface *)0x0) {
    *(EOptimusDataDomainType *)&pUVar1->_padding_ = (this->DataDomain).Type;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar1->_padding_,
               &(this->DataDomain).DimensionNames);
    *(int *)&pUVar1->_padding_ = (this->DataDomain).Multiplier;
    ::FString::operator=((FString *)&pUVar1->_padding_,&(this->DataDomain).Expression);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar1->_padding_,
               &(this->DataDomain).LevelNames_DEPRECATED);
    ((this->DataInterface).field0_0x0.DebugPtr)->_padding_ =
         (longlong)(this->ComponentBinding).WeakPtr;
  }
  pFVar3 = FOptimusDataTypeRegistry::Get();
  pFVar4 = FFloatProperty::StaticClass();
  pTVar5 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar3->RegisteredTypes,pFVar4->Name);
  pFVar8 = (FOptimusDataType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    pFVar8 = (FOptimusDataType *)FVar9;
  }
  if (pFVar8 == (FOptimusDataType *)0x0) {
    pFVar8 = (FOptimusDataType *)0x0;
    FVar10.ComparisonIndex.Value = 0;
    FVar10.Number = 0;
  }
  else {
    FVar10 = pFVar8->TypeName;
    pFVar8 = (FOptimusDataType *)(pFVar8->DisplayName).TextData.Reference;
    if (pFVar8 != (FOptimusDataType *)0x0) {
      LOCK();
      *(int *)&(pFVar8->DisplayName).TextData.Reference =
           *(int *)&(pFVar8->DisplayName).TextData.Reference + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar3 = FOptimusDataTypeRegistry::Get();
  pFVar4 = FDoubleProperty::StaticClass();
  pTVar5 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar3->RegisteredTypes,pFVar4->Name);
  pFVar6 = (FOptimusDataType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    pFVar6 = (FOptimusDataType *)FVar9;
  }
  if (pFVar6 == (FOptimusDataType *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar6 = (FOptimusDataType *)FVar9;
  }
  else {
    FVar9 = pFVar6->TypeName;
    pFVar6 = (FOptimusDataType *)(pFVar6->DisplayName).TextData.Reference;
    if (pFVar6 != (FOptimusDataType *)0x0) {
      LOCK();
      *(int *)&(pFVar6->DisplayName).TextData.Reference =
           *(int *)&(pFVar6->DisplayName).TextData.Reference + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (pFVar6 != (FOptimusDataType *)0x0) {
    LOCK();
    *(int *)&(pFVar6->DisplayName).TextData.Reference =
         *(int *)&(pFVar6->DisplayName).TextData.Reference + 1;
    UNLOCK();
  }
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_50.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ObjectID.SubPathString.Data.ArrayNum = 0;
  local_50.ObjectID.SubPathString.Data.ArrayMax = 0;
  local_50.WeakPtr.ObjectIndex = 0;
  local_50.WeakPtr.ObjectSerialNumber = 0;
  local_50.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_50.ObjectID.AssetPath.AssetName.Number = 0;
  local_50.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_50.ObjectID.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_50.ObjectID.SubPathString,0);
  if (pFVar6 != (FOptimusDataType *)0x0) {
    LOCK();
    *(int *)&(pFVar6->DisplayName).TextData.Reference =
         *(int *)&(pFVar6->DisplayName).TextData.Reference + 1;
    UNLOCK();
  }
  local_68.Object = (FOptimusDataType *)FVar9;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
  FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_58,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  if ((this->DataType).TypeName == (FName)local_58) {
    bVar2 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8,
                       &local_50.ObjectID);
    if (bVar2) {
      bVar2 = true;
      goto LAB_14e1fc080;
    }
  }
  bVar2 = false;
LAB_14e1fc080:
  if (local_50.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_50.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    if (pFVar8 == (FOptimusDataType *)0x0) {
      paVar7 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar7 = (atomic<int> *)&pFVar8->DisplayName;
      LOCK();
      *(int *)&(((FText *)paVar7)->TextData).Reference =
           *(int *)&(((FText *)paVar7)->TextData).Reference + 1;
      UNLOCK();
    }
    local_58._0_4_ = 0;
    local_58._4_4_ = 0;
    local_50.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ObjectID.SubPathString.Data.ArrayNum = 0;
    local_50.ObjectID.SubPathString.Data.ArrayMax = 0;
    local_50.WeakPtr.ObjectIndex = 0;
    local_50.WeakPtr.ObjectSerialNumber = 0;
    local_50.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_50.ObjectID.AssetPath.AssetName.Number = 0;
    local_50.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_50.ObjectID.AssetPath.PackageName.Number = 0;
    FUtf8String::Reset(&local_50.ObjectID.SubPathString,0);
    if (pFVar8 != (FOptimusDataType *)0x0) {
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    local_68.Object = (FOptimusDataType *)FVar10;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_58,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
    (this->DataType).TypeName.ComparisonIndex = (FNameEntryId)local_58._0_4_;
    (this->DataType).TypeName.Number = local_58._4_4_;
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->DataType).TypeObject,&local_50);
    if (local_50.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  return;
}

// StaticRegisterNativesUOptimusResourceDescription @ 14e225e20

void __cdecl UOptimusResourceDescription::StaticRegisterNativesUOptimusResourceDescription(void)

{
  return;
}

