// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 22

// StaticClass @ 14e1022f0

UClass * __cdecl UOptimusNode_GetVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_GetVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_GetVariable",
               &Z_Registration_Info_UClass_UOptimusNode_GetVariable.InnerSingleton,
               StaticRegisterNativesUOptimusNode_GetVariable,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusNode_GetVariable>,
               InternalVTableHelperCtorCaller<UOptimusNode_GetVariable>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_GetVariable.InnerSingleton;
}

// UOptimusNode_GetVariable @ 14e15bc20

UOptimusNode_GetVariable * __thiscall
UOptimusNode_GetVariable::UOptimusNode_GetVariable
          (UOptimusNode_GetVariable *this,FVTableHelper *param_1)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusValueProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPinMutabilityDefiner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNonCollapsibleNode__;
  (this->VariableDesc).WeakPtr = (FWeakObjectPtr)0x0;
  FOptimusNode_GetVariable_DuplicationInfo::FOptimusNode_GetVariable_DuplicationInfo
            (&this->DuplicationInfo);
  return this;
}

// UOptimusNode_GetVariable @ 14e15bc90

UOptimusNode_GetVariable * __thiscall
UOptimusNode_GetVariable::UOptimusNode_GetVariable(UOptimusNode_GetVariable *this)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusValueProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPinMutabilityDefiner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNonCollapsibleNode__;
  (this->VariableDesc).WeakPtr = (FWeakObjectPtr)0x0;
  FOptimusNode_GetVariable_DuplicationInfo::FOptimusNode_GetVariable_DuplicationInfo
            (&this->DuplicationInfo);
  return this;
}

// ~UOptimusNode_GetVariable @ 14e163800

void __thiscall UOptimusNode_GetVariable::~UOptimusNode_GetVariable(UOptimusNode_GetVariable *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusValueProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPinMutabilityDefiner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNonCollapsibleNode__;
  pFVar1 = (this->DuplicationInfo).DefaultValue.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->DuplicationInfo).DataType.TypeObject.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7IOptimusNonCollapsibleNode__6B_;
  this->_padding_ = (longlong)&___7IOptimusPinMutabilityDefiner__6B_;
  this->_padding_ = (longlong)&___7IOptimusValueProvider__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// ConstructNode @ 14e193930

void __thiscall UOptimusNode_GetVariable::ConstructNode(UOptimusNode_GetVariable *this)

{
  FName FVar1;
  UObject *pUVar2;
  undefined1 local_78 [48];
  FOptimusDataDomain local_48;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->VariableDesc).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    local_78._0_4_ = *(uint *)&pUVar2[1].field_0x18;
    local_78._4_4_ = *(uint *)&pUVar2[1].field_0x1c;
    local_78._8_8_ = *(undefined8 *)&pUVar2[1].field_0x20;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_78 + 0x10),(FSoftObjectPath *)(pUVar2 + 2));
    local_48.Type = Dimensional;
    local_48._4_4_ = 0;
    local_48.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.DimensionNames.ArrayNum = 0;
    local_48.DimensionNames.ArrayMax = 0;
    local_48.Multiplier = 0;
    local_48._28_4_ = 0;
    local_48.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Expression.Data.ArrayNum = 0;
    local_48.Expression.Data.ArrayMax = 0;
    local_48.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.LevelNames_DEPRECATED.ArrayNum = 0;
    local_48.LevelNames_DEPRECATED.ArrayMax = 0;
    FOptimusDataDomain::FOptimusDataDomain(&local_48);
    FVar1.ComparisonIndex.Value = *(uint *)&pUVar2[1].field_0x10;
    FVar1.Number = *(uint *)&pUVar2[1].field_0x14;
    UOptimusNode::AddPinDirect
              ((UOptimusNode *)this,FVar1,Output,&local_48,(FOptimusDataTypeRef *)local_78,
               (UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
    if (local_48.LevelNames_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.LevelNames_DEPRECATED.AllocatorInstance.Data);
    }
    if (local_48.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Expression.Data.AllocatorInstance.Data);
    }
    if (local_48.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DimensionNames.AllocatorInstance.Data);
    }
  }
  return;
}

// ExportCustomProperties @ 14e1aec80

void __thiscall
UOptimusNode_GetVariable::ExportCustomProperties
          (UOptimusNode_GetVariable *this,FOutputDevice *param_1,uint param_2)

{
  FOptimusDataType *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar5;
  FProperty *pFVar6;
  void *_Src;
  longlong lVar7;
  ulonglong in_stack_ffffffffffffff88;
  FString local_68;
  void *local_58;
  undefined8 local_50;
  TSharedPtr<FOptimusDataType_const_,1> local_48;
  FString local_38;
  FString local_28;
  
  pUVar4 = FWeakObjectPtr::Get(&(this->VariableDesc).WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  pTVar5 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)&pUVar4[1].field_0x18,&local_48);
  this_00 = pTVar5->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  ::FName::ToString(&this_00->TypeName,&local_28);
  ::FName::ToString((FName *)&pUVar4[1].field_0x10,&local_38);
  if ((0xff < param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                         ,0x272,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FOutputDevice::LogfImpl(param_1,L"%sCustomProperties VariableDefinition Name=\"%s\" Type=%s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar3 = FInstancedPropertyBag::GetNumPropertiesInBag
                    ((FInstancedPropertyBag *)&pUVar4[2].field_0x20);
  if (iVar3 != 1) goto LAB_14e1aee8e;
  pFVar6 = FOptimusValueContainerStruct::GetValueProperty
                     ((FOptimusValueContainerStruct *)&pUVar4[2].field_0x20);
  _Src = (void *)0x0;
  if (pFVar6 == (FProperty *)0x0) {
    local_68.Data.ArrayNum = 0;
LAB_14e1aee4a:
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayMax = 0;
  }
  else {
    local_58 = (void *)0x0;
    local_50 = 0;
    (**(code **)(pFVar6->_padding_ + 0xe0))
              (pFVar6,&local_58,*(undefined8 *)(pUVar4 + 3),1,0,0,
               in_stack_ffffffffffffff88 & 0xffffffff00000000,0);
    _Src = local_58;
    lVar7 = (longlong)(int)local_50;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (int)local_50;
    if ((int)local_50 == 0) goto LAB_14e1aee4a;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  ::FString::ReplaceCharWithEscapedCharInline
            (&local_68,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
  FOutputDevice::LogfImpl(param_1,L" DefaultValue=\"%s\"");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
LAB_14e1aee8e:
  FOutputDevice::Log(param_1,L"\n");
  return;
}

// GetNodeCategory @ 14e1cae50

FName __thiscall UOptimusNode_GetVariable::GetNodeCategory(UOptimusNode_GetVariable *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = UOptimusNode::CategoryName::Variables;
  return in_RDX;
}

// GetOutputPinMutability @ 14e1cbf60

EOptimusPinMutability __thiscall
UOptimusNode_GetVariable::GetOutputPinMutability
          (UOptimusNode_GetVariable *this,UOptimusNodePin *param_1)

{
  return Mutable;
}

// GetPrivateStaticClass @ 14e1d7b20

UClass * __cdecl UOptimusNode_GetVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_GetVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_GetVariable",
               &Z_Registration_Info_UClass_UOptimusNode_GetVariable.InnerSingleton,
               StaticRegisterNativesUOptimusNode_GetVariable,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusNode_GetVariable>,
               InternalVTableHelperCtorCaller<UOptimusNode_GetVariable>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_GetVariable.InnerSingleton;
}

// GetValue @ 14e1e9300

FOptimusValueContainerStruct * __thiscall
UOptimusNode_GetVariable::GetValue
          (UOptimusNode_GetVariable *this,FOptimusValueContainerStruct *__return_storage_ptr__)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar1 != (UObject *)0x0) {
    (__return_storage_ptr__->Value).Value.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    (__return_storage_ptr__->Value).Value.StructMemory = (uchar *)0x0;
    FInstancedStruct::InitializeAs
              ((FInstancedStruct *)__return_storage_ptr__,*(UScriptStruct **)&pUVar1[2].field_0x20,
               *(uchar **)(pUVar1 + 3));
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Value).Value.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (__return_storage_ptr__->Value).Value.StructMemory = (uchar *)0x0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetValueDataType @ 14e1e95b0

FOptimusDataTypeRef * __thiscall
UOptimusNode_GetVariable::GetValueDataType
          (UOptimusNode_GetVariable *this,FOptimusDataTypeRef *__return_storage_ptr__)

{
  undefined4 uVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar2 != (UObject *)0x0) {
    uVar1 = *(undefined4 *)&pUVar2[1].field_0x1c;
    (__return_storage_ptr__->TypeName).ComparisonIndex =
         (FNameEntryId)*(undefined4 *)&pUVar2[1].field_0x18;
    (__return_storage_ptr__->TypeName).Number = uVar1;
    *(undefined8 *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr =
         *(undefined8 *)&pUVar2[1].field_0x20;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)&(__return_storage_ptr__->TypeObject).SoftObjectPtr.field_0x8,
               (FSoftObjectPath *)(pUVar2 + 2));
    return __return_storage_ptr__;
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

// GetValueIdentifier @ 14e1e96e0

FOptimusValueIdentifier * __thiscall
UOptimusNode_GetVariable::GetValueIdentifier
          (UOptimusNode_GetVariable *this,FOptimusValueIdentifier *__return_storage_ptr__)

{
  undefined4 uVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar2 != (UObject *)0x0) {
    __return_storage_ptr__->Type = Variable;
    uVar1 = *(undefined4 *)&pUVar2[1].field_0x14;
    (__return_storage_ptr__->Name).ComparisonIndex =
         (FNameEntryId)*(undefined4 *)&pUVar2[1].field_0x10;
    (__return_storage_ptr__->Name).Number = uVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Type = Invalid;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  return __return_storage_ptr__;
}

// GetVariableDescription @ 14e1e9950

UOptimusVariableDescription * __thiscall
UOptimusNode_GetVariable::GetVariableDescription(UOptimusNode_GetVariable *this)

{
  UOptimusVariableDescription *pUVar1;
  
  pUVar1 = (UOptimusVariableDescription *)FWeakObjectPtr::Get(&(this->VariableDesc).WeakPtr);
  return pUVar1;
}

// ImportCustomProperties @ 14e1e9df0

void __thiscall
UOptimusNode_GetVariable::ImportCustomProperties
          (UOptimusNode_GetVariable *this,wchar_t *param_1,FFeedbackContext *param_2)

{
  FOptimusDataType *pFVar1;
  bool bVar2;
  FOptimusDataTypeRegistry *this_00;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar3;
  wchar_t *local_res10 [2];
  FName local_res20;
  FName local_78;
  TSharedPtr<FOptimusDataType_const_,1> local_70;
  TSharedPtr<FOptimusDataType_const_,1> local_60;
  undefined1 local_50 [8];
  TPersistentObjectPtr<FSoftObjectPath> local_48;
  
  local_res10[0] = param_1;
  bVar2 = FParse::Command(local_res10,L"VariableDefinition",true);
  if (bVar2) {
    local_78.ComparisonIndex.Value = 0;
    local_78.Number = 0;
    bVar2 = FParse::Value(local_res10[0],L"Name=",&local_78);
    if (bVar2) {
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
      bVar2 = FParse::Value(local_res10[0],L"Type=",&local_res20);
      if (bVar2) {
        this_00 = FOptimusDataTypeRegistry::Get();
        pTVar3 = FOptimusDataTypeRegistry::FindType(this_00,&local_60,local_res20);
        local_50._0_4_ = 0;
        local_50._4_4_ = 0;
        local_48.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        local_48.ObjectID.SubPathString.Data.ArrayNum = 0;
        local_48.ObjectID.SubPathString.Data.ArrayMax = 0;
        local_48.WeakPtr.ObjectIndex = 0;
        local_48.WeakPtr.ObjectSerialNumber = 0;
        local_48.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_48.ObjectID.AssetPath.AssetName.Number = 0;
        local_48.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_48.ObjectID.AssetPath.PackageName.Number = 0;
        FUtf8String::Reset(&local_48.ObjectID.SubPathString,0);
        local_70.SharedReferenceCount.ReferenceController =
             (pTVar3->SharedReferenceCount).ReferenceController;
        local_70.Object = pTVar3->Object;
        if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_50,&local_70);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar3->SharedReferenceCount).ReferenceController);
        pTVar3 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_50,&local_70);
        pFVar1 = pTVar3->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.SharedReferenceCount.ReferenceController);
        if (pFVar1 != (FOptimusDataType *)0x0) {
          (this->DuplicationInfo).VariableName = local_78;
          (this->DuplicationInfo).DataType.TypeName.ComparisonIndex = (FNameEntryId)local_50._0_4_;
          (this->DuplicationInfo).DataType.TypeName.Number = local_50._4_4_;
          TPersistentObjectPtr<FSoftObjectPath>::operator=
                    ((TPersistentObjectPtr<FSoftObjectPath> *)
                     &(this->DuplicationInfo).DataType.TypeObject,&local_48);
          bVar2 = FParse::Value(local_res10[0],L"DefaultValue=",
                                &(this->DuplicationInfo).DefaultValue,true,(wchar_t **)0x0);
          if (bVar2) {
            ::FString::ReplaceEscapedCharWithCharInline
                      (&(this->DuplicationInfo).DefaultValue,
                       (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
          }
        }
        if (local_48.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.ObjectID.SubPathString.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// PostDuplicate @ 14e1fa6b0

void __thiscall UOptimusNode_GetVariable::PostDuplicate(UOptimusNode_GetVariable *this,Type param_1)

{
  TWeakObjectPtr<UOptimusVariableDescription,FWeakObjectPtr> *this_00;
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UOptimusDeformer *pUVar7;
  UObject *pUVar8;
  UOptimusVariableContainer *pUVar9;
  UOptimusDeformer *pUVar10;
  FOptimusNode_GetVariable_DuplicationInfo *pFVar11;
  undefined4 in_register_00000014;
  longlong lVar12;
  FString *pFVar13;
  FString *pFVar14;
  UObject *local_res8;
  UObject *local_res18;
  undefined1 local_58 [40];
  void *pvStack_30;
  undefined8 local_28;
  ForAnyElementType FStack_20;
  undefined8 local_18;
  
  (**(code **)(this->_padding_ + 0xf8))
            (this,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),param_1 == PIE));
  lVar12 = this->_padding_;
  if (lVar12 == 0) {
    return;
  }
  pUVar5 = UOptimusNodeGraph::StaticClass();
  lVar12 = *(longlong *)(lVar12 + 0x10);
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(lVar12 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_) {
    return;
  }
  lVar12 = this->_padding_;
  if (lVar12 == 0) {
LAB_14e1fa730:
    lVar12 = 0;
  }
  else {
    pUVar5 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_14e1fa730;
  }
  plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar12 + 0x28) + 0x18))(lVar12 + 0x28);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  pUVar7 = (UOptimusDeformer *)(**(code **)(*plVar6 + 8))(plVar6);
  if (pUVar7 == (UOptimusDeformer *)0x0) {
    return;
  }
  pUVar5 = UOptimusDeformer::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(pUVar7->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_) {
    return;
  }
  this_00 = &this->VariableDesc;
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar4) {
    pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar9 = CastChecked<UOptimusVariableContainer,UObject>(*(UObject **)&pUVar8->field_0x20);
    if ((pUVar9 != (UOptimusVariableContainer *)0x0) &&
       (pUVar10 = CastChecked<UOptimusDeformer,UObject>((UObject *)pUVar9->_padding_),
       pUVar10 == pUVar7)) {
      return;
    }
    pcVar2 = *(code **)(pUVar7->_padding_ + 0x38);
    pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_res8 = (UObject *)(*pcVar2)(&pUVar7->_padding_,*(undefined8 *)&pUVar8->field_0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
    return;
  }
  if ((this->DuplicationInfo).VariableName == (FName)0x0) {
    return;
  }
  local_res18 = (UObject *)
                (**(code **)(pUVar7->_padding_ + 0x38))
                          (&pUVar7->_padding_,(this->DuplicationInfo).VariableName);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res18);
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar4) goto LAB_14e1fa8d9;
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_14e1fa8a7:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetPins().IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GetVariable.cpp"
                       ,100,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 != 0) goto LAB_14e1fa8a7;
  (**(code **)(this->_padding_ + 0x2f0))(this);
LAB_14e1fa8d9:
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_58._8_4_ = 0;
  local_58._12_4_ = 0;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  local_58._16_8_ = 0;
  local_58._24_8_ = 0;
  local_58._32_8_ = 0;
  pvStack_30 = (void *)0x0;
  local_28 = 0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  pFVar11 = FOptimusNode_GetVariable_DuplicationInfo::FOptimusNode_GetVariable_DuplicationInfo
                      ((FOptimusNode_GetVariable_DuplicationInfo *)local_58);
  (this->DuplicationInfo).VariableName = pFVar11->VariableName;
  (this->DuplicationInfo).DataType.TypeName = (pFVar11->DataType).TypeName;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->DuplicationInfo).DataType.TypeObject,
             (TPersistentObjectPtr<FSoftObjectPath> *)&(pFVar11->DataType).TypeObject);
  pFVar13 = &pFVar11->DefaultValue;
  pFVar14 = &(this->DuplicationInfo).DefaultValue;
  if (pFVar14 != pFVar13) {
    pFVar3 = (pFVar14->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar14->Data).AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DuplicationInfo).DefaultValue.Data.ArrayNum = (pFVar11->DefaultValue).Data.ArrayNum;
    (this->DuplicationInfo).DefaultValue.Data.ArrayMax = (pFVar11->DefaultValue).Data.ArrayMax;
    (pFVar11->DefaultValue).Data.ArrayNum = 0;
    (pFVar11->DefaultValue).Data.ArrayMax = 0;
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  if (pvStack_30 != (void *)0x0) {
    FMemory::Free(pvStack_30);
  }
  return;
}

// PreDuplicateRequirementActions @ 14e200a70

void __thiscall
UOptimusNode_GetVariable::PreDuplicateRequirementActions
          (UOptimusNode_GetVariable *this,UOptimusNodeGraph *param_1,FOptimusCompoundAction *param_2
          )

{
  atomic<int> *paVar1;
  uint *puVar2;
  atomic<int> aVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  UClass *pUVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  TWeakPtr<FOptimusVariableAction_AddVariable,1> local_48;
  
  if ((this->DuplicationInfo).VariableName == (FName)0x0) {
    return;
  }
  plVar8 = (longlong *)(**(code **)(param_1->_padding_ + 0x18))(&param_1->_padding_);
  if ((plVar8 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar8 + 8))(plVar8), lVar9 != 0)) {
    pUVar10 = UOptimusDeformer::StaticClass();
    iVar4 = (int)pUVar10->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar10->_padding_)) goto LAB_14e200aed;
  }
  lVar9 = 0;
LAB_14e200aed:
  lVar5 = *(longlong *)(lVar9 + 0x130);
  plVar11 = *(longlong **)(lVar5 + 0x28);
  iVar4 = *(int *)(lVar5 + 0x30);
  plVar8 = plVar11 + iVar4;
  while( true ) {
    if (*(int *)(lVar5 + 0x30) != iVar4) {
      `TCheckedPointerIterator<UOptimusVariableDescription_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar11 == plVar8) break;
    lVar6 = *plVar11;
    if (((*(FName *)(lVar6 + 0x38) == (this->DuplicationInfo).VariableName) &&
        (*(FName *)(lVar6 + 0x40) == (this->DuplicationInfo).DataType.TypeName)) &&
       (bVar7 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(lVar6 + 0x50),
                           (FSoftObjectPath *)
                           &(this->DuplicationInfo).DataType.TypeObject.SoftObjectPtr.field_0x8),
       bVar7)) {
      return;
    }
    plVar11 = plVar11 + 1;
  }
  do {
    lVar5 = *(longlong *)(lVar9 + 0x130);
    bVar7 = false;
    plVar11 = *(longlong **)(lVar5 + 0x28);
    iVar4 = *(int *)(lVar5 + 0x30);
    plVar8 = plVar11 + iVar4;
    while( true ) {
      if (*(int *)(lVar5 + 0x30) != iVar4) {
        `TCheckedPointerIterator<UOptimusVariableDescription_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar11 == plVar8) break;
      if (*(FName *)(*plVar11 + 0x38) == (this->DuplicationInfo).VariableName) {
        puVar2 = &(this->DuplicationInfo).VariableName.Number;
        *puVar2 = *puVar2 + 1;
        bVar7 = true;
      }
      plVar11 = plVar11 + 1;
    }
  } while (bVar7);
  FOptimusCompoundAction::
  AddSubAction<FOptimusVariableAction_AddVariable,FOptimusDataTypeRef_&,FName_&>
            (param_2,&local_48,&(this->DuplicationInfo).DataType,
             &(this->DuplicationInfo).VariableName);
  if (local_48.WeakReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  LOCK();
  paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar3 != (atomic<int>)0x1) {
    return;
  }
  (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
            (local_48.WeakReferenceCount.ReferenceController,1);
  return;
}

// SetVariableDescription @ 14e223bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOptimusNode_GetVariable::SetVariableDescription
          (UOptimusNode_GetVariable *this,UOptimusVariableDescription *param_1)

{
  FOptimusDataType *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar4;
  UOptimusVariableDescription *local_res10;
  TSharedPtr<FOptimusDataType_const_,1> local_38;
  TSharedPtr<FOptimusDataType_const_,1> local_28;
  FString local_18;
  
  if (param_1 == (UOptimusVariableDescription *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1212835353493241692>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_GetVariable.cpp"
                       ,0xa4,"InVariableDesc");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pTVar4 = FOptimusDataTypeRef::Resolve(&param_1->DataType,&local_38);
    pFVar1 = pTVar4->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if ((pFVar1->UsageFlags & (Property|Variable)) == None) {
      if (1 < (byte)LogOptimusCore._0_1_) {
        pTVar4 = FOptimusDataTypeRef::Resolve(&param_1->DataType,&local_28);
        pFVar1 = pTVar4->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        ::FName::ToString(&pFVar1->TypeName,&local_18);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_res10 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&(this->VariableDesc).WeakPtr,(FObjectPtr)&local_res10);
    }
  }
  return;
}

// StaticRegisterNativesUOptimusNode_GetVariable @ 14e225ce0

void __cdecl UOptimusNode_GetVariable::StaticRegisterNativesUOptimusNode_GetVariable(void)

{
  return;
}

// ValidateForCompile @ 14e2305c0

TOptional<FText> * __thiscall
UOptimusNode_GetVariable::ValidateForCompile
          (UOptimusNode_GetVariable *this,TOptional<FText> *__return_storage_ptr__,
          FOptimusPinTraversalContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FText *pFVar4;
  TOptional<FText> *pTVar5;
  FText local_18;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->VariableDesc).WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"OptimusGetVariable",L"NoDescriptor",
                        L"No variable descriptor set on this node");
    FText::FText((FText *)__return_storage_ptr__,pFVar4);
    if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TOptional<FText> *)(*pcVar1)();
        return pTVar5;
      }
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  }
  return __return_storage_ptr__;
}

// _getUObject @ 14e238f20

UObject * __thiscall UOptimusNode_GetVariable::_getUObject(UOptimusNode_GetVariable *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14e238f30

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_GetVariable::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_GetVariable::_getUObject_adjustor_8__(UOptimusNode_GetVariable *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_GetVariable *)
                       &this[-1].DuplicationInfo.DefaultValue.Data.ArrayNum);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14e238f40

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_GetVariable::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_GetVariable::_getUObject_adjustor_16__(UOptimusNode_GetVariable *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_GetVariable *)&this[-1].DuplicationInfo.DefaultValue);
  return (UObject *)pUVar1;
}

