// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 24

// StaticClass @ 14e101140

UClass * __cdecl UOptimusNode_ResourceAccessorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ResourceAccessorBase",
               &Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase.InnerSingleton,
               StaticRegisterNativesUOptimusNode_ResourceAccessorBase,0x1b0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNode_ResourceAccessorBase>,
               InternalVTableHelperCtorCaller<UOptimusNode_ResourceAccessorBase>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase.InnerSingleton;
}

// UOptimusNode_ResourceAccessorBase @ 14e15c010

UOptimusNode_ResourceAccessorBase * __thiscall
UOptimusNode_ResourceAccessorBase::UOptimusNode_ResourceAccessorBase
          (UOptimusNode_ResourceAccessorBase *this,FVTableHelper *param_1)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDataInterfaceProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComponentBindingProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPinMutabilityDefiner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNonCollapsibleNode__;
  (this->ResourceDesc).WeakPtr = (FWeakObjectPtr)0x0;
  this->WriteType_DEPRECATED = Write;
  FOptimusNode_ResourceAccessorBase_DuplicationInfo::
  FOptimusNode_ResourceAccessorBase_DuplicationInfo(&this->DuplicationInfo);
  return this;
}

// UOptimusNode_ResourceAccessorBase @ 14e15c090

UOptimusNode_ResourceAccessorBase * __thiscall
UOptimusNode_ResourceAccessorBase::UOptimusNode_ResourceAccessorBase
          (UOptimusNode_ResourceAccessorBase *this)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDataInterfaceProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComponentBindingProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPinMutabilityDefiner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNonCollapsibleNode__;
  (this->ResourceDesc).WeakPtr = (FWeakObjectPtr)0x0;
  this->WriteType_DEPRECATED = Write;
  FOptimusNode_ResourceAccessorBase_DuplicationInfo::
  FOptimusNode_ResourceAccessorBase_DuplicationInfo(&this->DuplicationInfo);
  return this;
}

// ~UOptimusNode_ResourceAccessorBase @ 14e163a40

void __thiscall
UOptimusNode_ResourceAccessorBase::~UOptimusNode_ResourceAccessorBase
          (UOptimusNode_ResourceAccessorBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDataInterfaceProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComponentBindingProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPinMutabilityDefiner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNonCollapsibleNode__;
  pFVar1 = (this->DuplicationInfo).DataDomain.LevelNames_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DuplicationInfo).DataDomain.Expression.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DuplicationInfo).DataDomain.DimensionNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->DuplicationInfo).DataType.TypeObject.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7IOptimusNonCollapsibleNode__6B_;
  this->_padding_ = (longlong)&___7IOptimusPinMutabilityDefiner__6B_;
  this->_padding_ = (longlong)&___7IOptimusComponentBindingProvider__6B_;
  this->_padding_ = (longlong)&___7IOptimusDataInterfaceProvider__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// ExportCustomProperties @ 14e1aeed0

void __thiscall
UOptimusNode_ResourceAccessorBase::ExportCustomProperties
          (UOptimusNode_ResourceAccessorBase *this,FOutputDevice *param_1,uint param_2)

{
  FName *pFVar1;
  FOptimusDataType *this_00;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FString *pFVar5;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar6;
  FName *pFVar7;
  int iVar8;
  int iVar9;
  undefined1 local_res8 [8];
  FName local_res20;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  FString local_48;
  FString local_38;
  
  pUVar4 = FWeakObjectPtr::Get(&(this->ResourceDesc).WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  if (*(int *)&pUVar4[2].field_0x18 == 0) {
    if (*(int *)(pUVar4 + 3) == 0) {
      ::FString::FString(&local_88,L"Empty");
      goto LAB_14e1af076;
    }
    if (*(int *)(pUVar4 + 3) == 1) {
      pFVar7 = *(FName **)&pUVar4[2].field_0x20;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      pFVar1 = pFVar7 + 1;
      while( true ) {
        if (*(int *)(pUVar4 + 3) != 1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar7 == pFVar1) break;
        local_res20 = *pFVar7;
        pFVar5 = ::FName::ToString(&local_res20,&local_68);
        iVar9 = (pFVar5->Data).ArrayNum;
        iVar8 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars(&local_98,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        ::FString::AppendChars(&local_98,L"/",1);
        pFVar7 = pFVar7 + 1;
      }
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_78,*(int *)&pUVar4[3].field_0x8);
      iVar9 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_98,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar9);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      local_88.Data.ArrayNum = local_98.Data.ArrayNum;
      local_88.Data.ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      goto LAB_14e1af076;
    }
  }
  else if (*(int *)&pUVar4[2].field_0x18 == 1) {
    ::FString::PrintfImpl(&local_88,L"\'%s\'");
    goto LAB_14e1af076;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
LAB_14e1af076:
  pTVar6 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)&pUVar4[1].field_0x8,&local_58);
  this_00 = pTVar6->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  ::FName::ToString(&this_00->TypeName,&local_38);
  ::FName::ToString((FName *)(pUVar4 + 1),&local_48);
  if ((0xff < param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                         ,0x272,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FOutputDevice::LogfImpl
            (param_1,
             L"%sCustomProperties ResourceDefinition Name=\"%s\" Type=\"%s\" DataDomain=\"%s\"\n");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// GetComponentBinding @ 14e1bd2c0

UOptimusComponentSourceBinding * __thiscall
UOptimusNode_ResourceAccessorBase::GetComponentBinding
          (UOptimusNode_ResourceAccessorBase *this,FOptimusPinTraversalContext *param_1)

{
  UObject *pUVar1;
  UOptimusComponentSourceBinding *pUVar2;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar1 != (UObject *)0x0) {
    pUVar2 = (UOptimusComponentSourceBinding *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar1[2].field_0x10);
    return pUVar2;
  }
  return (UOptimusComponentSourceBinding *)0x0;
}

// GetComponentBinding`adjustor{8}' @ 14e1bd2ec

/* [thunk]:public: virtual class UOptimusComponentSourceBinding * __ptr64 __cdecl
   UOptimusNode_ResourceAccessorBase::GetComponentBinding`adjustor{8}' (struct
   FOptimusPinTraversalContext const & __ptr64)const __ptr64 */

UOptimusComponentSourceBinding * __thiscall
UOptimusNode_ResourceAccessorBase::GetComponentBinding_adjustor_8__
          (UOptimusNode_ResourceAccessorBase *this,FOptimusPinTraversalContext *param_1)

{
  UOptimusComponentSourceBinding *pUVar1;
  
  pUVar1 = GetComponentBinding((UOptimusNode_ResourceAccessorBase *)
                               &this[-1].DuplicationInfo.DataDomain.LevelNames_DEPRECATED.ArrayNum,
                               param_1);
  return pUVar1;
}

// GetDataFunctionIndexFromPin @ 14e1c1930

int __thiscall
UOptimusNode_ResourceAccessorBase::GetDataFunctionIndexFromPin
          (UOptimusNode_ResourceAccessorBase *this,UOptimusNodePin *param_1)

{
  return -1;
}

// GetDataInterface @ 14e1c1bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusComputeDataInterface * __thiscall
UOptimusNode_ResourceAccessorBase::GetDataInterface
          (UOptimusNode_ResourceAccessorBase *this,UObject *param_1)

{
  FOptimusDataType *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UOptimusComputeDataInterface *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar9;
  longlong *plVar10;
  undefined1 auStackY_d8 [32];
  TSharedPtr<FOptimusDataType_const_,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar5 == (UObject *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5846544486745768157>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ResourceAccessorBase.cpp"
                       ,0xdd,"Description");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UOptimusComputeDataInterface *)(*pcVar3)();
      return pUVar6;
    }
    pUVar6 = (UOptimusComputeDataInterface *)0x0;
  }
  else {
    pUVar8 = *(UObject **)&pUVar5[4].field_0x8;
    if (pUVar8 == (UObject *)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = UOptimusPersistentBufferDataInterface::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar7);
      local_98._8_8_ = param_1;
      pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar10 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      *(UObject **)&pUVar5[4].field_0x8 = pUVar8;
    }
    *(undefined8 *)&pUVar8[3].field_0x18 = *(undefined8 *)(pUVar5 + 1);
    pTVar9 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)&pUVar5[1].field_0x8,&local_a8);
    pFVar1 = pTVar9->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    *(FShaderValueType **)(*(longlong *)&pUVar5[4].field_0x8 + 0x28) =
         (pFVar1->ShaderValueType).ValueTypePtr;
    lVar2 = *(longlong *)&pUVar5[4].field_0x8;
    *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)&pUVar5[2].field_0x18;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x38),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar5[2].field_0x20);
    *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)&pUVar5[3].field_0x8;
    ::FString::operator=((FString *)(lVar2 + 0x50),(FString *)&pUVar5[3].field_0x10);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x60),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar5[3].field_0x20);
    *(undefined8 *)(*(longlong *)&pUVar5[4].field_0x8 + 0x70) = *(undefined8 *)&pUVar5[2].field_0x10
    ;
    pUVar6 = *(UOptimusComputeDataInterface **)&pUVar5[4].field_0x8;
  }
  return pUVar6;
}

// GetNodeCategory @ 14e1cae90

FName __thiscall
UOptimusNode_ResourceAccessorBase::GetNodeCategory(UOptimusNode_ResourceAccessorBase *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = UOptimusNode::CategoryName::Resources;
  return in_RDX;
}

// GetOutputPinMutability @ 14e1cbfc0

EOptimusPinMutability __thiscall
UOptimusNode_ResourceAccessorBase::GetOutputPinMutability
          (UOptimusNode_ResourceAccessorBase *this,UOptimusNodePin *param_1)

{
  return Mutable;
}

// GetPrivateStaticClass @ 14e1d7e20

UClass * __cdecl UOptimusNode_ResourceAccessorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ResourceAccessorBase",
               &Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase.InnerSingleton,
               StaticRegisterNativesUOptimusNode_ResourceAccessorBase,0x1b0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNode_ResourceAccessorBase>,
               InternalVTableHelperCtorCaller<UOptimusNode_ResourceAccessorBase>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase.InnerSingleton;
}

// GetResourceDescription @ 14e1dfdd0

UOptimusResourceDescription * __thiscall
UOptimusNode_ResourceAccessorBase::GetResourceDescription(UOptimusNode_ResourceAccessorBase *this)

{
  UOptimusResourceDescription *pUVar1;
  
  pUVar1 = (UOptimusResourceDescription *)FWeakObjectPtr::Get(&(this->ResourceDesc).WeakPtr);
  return pUVar1;
}

// GetResourcePinName @ 14e1dff30

FName __thiscall
UOptimusNode_ResourceAccessorBase::GetResourcePinName
          (UOptimusNode_ResourceAccessorBase *this,int param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FName FVar4;
  uint in_register_00000014;
  longlong in_R9;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  if (in_R9 != 0) {
    *(longlong *)FVar4 = in_R9;
    return FVar4;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->ResourceDesc).WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5846544486745768121>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ResourceAccessorBase.cpp"
                       ,0xb9,"Description");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
    *(undefined8 *)FVar4 = 0;
    return FVar4;
  }
  *(undefined8 *)FVar4 = *(undefined8 *)(pUVar3 + 1);
  return FVar4;
}

// ImportCustomProperties @ 14e1e9f80

void __thiscall
UOptimusNode_ResourceAccessorBase::ImportCustomProperties
          (UOptimusNode_ResourceAccessorBase *this,wchar_t *param_1,FFeedbackContext *param_2)

{
  FOptimusDataType *pFVar1;
  bool bVar2;
  FOptimusDataTypeRegistry *this_00;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar3;
  FOptimusDataDomain *pFVar4;
  wchar_t *local_res10 [2];
  FName local_res20;
  FName local_c8;
  FString local_c0;
  undefined1 local_b0 [8];
  TPersistentObjectPtr<FSoftObjectPath> local_a8;
  TSharedPtr<FOptimusDataType_const_,1> local_80;
  TSharedPtr<FOptimusDataType_const_,1> local_70;
  FOptimusDataDomain local_60;
  
  local_res10[0] = param_1;
  bVar2 = FParse::Command(local_res10,L"ResourceDefinition",true);
  if (bVar2) {
    local_c8.ComparisonIndex.Value = 0;
    local_c8.Number = 0;
    bVar2 = FParse::Value(local_res10[0],L"Name=",&local_c8);
    if (bVar2) {
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
      bVar2 = FParse::Value(local_res10[0],L"Type=",&local_res20);
      if (bVar2) {
        this_00 = FOptimusDataTypeRegistry::Get();
        pTVar3 = FOptimusDataTypeRegistry::FindType(this_00,&local_70,local_res20);
        local_b0._0_4_ = 0;
        local_b0._4_4_ = 0;
        local_a8.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        local_a8.ObjectID.SubPathString.Data.ArrayNum = 0;
        local_a8.ObjectID.SubPathString.Data.ArrayMax = 0;
        local_a8.WeakPtr.ObjectIndex = 0;
        local_a8.WeakPtr.ObjectSerialNumber = 0;
        local_a8.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_a8.ObjectID.AssetPath.AssetName.Number = 0;
        local_a8.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_a8.ObjectID.AssetPath.PackageName.Number = 0;
        FUtf8String::Reset(&local_a8.ObjectID.SubPathString,0);
        local_80.SharedReferenceCount.ReferenceController =
             (pTVar3->SharedReferenceCount).ReferenceController;
        local_80.Object = pTVar3->Object;
        if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_b0,&local_80);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar3->SharedReferenceCount).ReferenceController);
        pTVar3 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_b0,&local_80);
        pFVar1 = pTVar3->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.SharedReferenceCount.ReferenceController);
        if (pFVar1 != (FOptimusDataType *)0x0) {
          local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c0.Data.ArrayNum = 0;
          local_c0.Data.ArrayMax = 0;
          bVar2 = FParse::Value(local_res10[0],L"DataDomain=",&local_c0,true,(wchar_t **)0x0);
          if (bVar2) {
            (this->DuplicationInfo).ResourceName = local_c8;
            (this->DuplicationInfo).DataType.TypeName.ComparisonIndex = (FNameEntryId)local_b0._0_4_
            ;
            (this->DuplicationInfo).DataType.TypeName.Number = local_b0._4_4_;
            TPersistentObjectPtr<FSoftObjectPath>::operator=
                      ((TPersistentObjectPtr<FSoftObjectPath> *)
                       &(this->DuplicationInfo).DataType.TypeObject,&local_a8);
            pFVar4 = FOptimusDataDomain::FromString(&local_60,&local_c0);
            FOptimusDataDomain::operator=(&(this->DuplicationInfo).DataDomain,pFVar4);
            if (local_60.LevelNames_DEPRECATED.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.LevelNames_DEPRECATED.AllocatorInstance.Data);
            }
            if (local_60.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Expression.Data.AllocatorInstance.Data);
            }
            if (local_60.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.DimensionNames.AllocatorInstance.Data);
            }
          }
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
        }
        if (local_a8.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.ObjectID.SubPathString.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// PostDuplicate @ 14e1fa9b0

void __thiscall
UOptimusNode_ResourceAccessorBase::PostDuplicate
          (UOptimusNode_ResourceAccessorBase *this,Type param_1)

{
  TWeakObjectPtr<UOptimusResourceDescription,FWeakObjectPtr> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong *plVar5;
  UOptimusDeformer *pUVar6;
  UObject *pUVar7;
  UOptimusResourceContainer *pUVar8;
  UOptimusDeformer *pUVar9;
  FOptimusNode_ResourceAccessorBase_DuplicationInfo *pFVar10;
  undefined4 in_register_00000014;
  longlong lVar11;
  UObject *local_res8;
  UObject *local_res18;
  undefined1 local_88 [40];
  void *pvStack_60;
  undefined8 local_58;
  FOptimusDataDomain FStack_50;
  
  (**(code **)(this->_padding_ + 0xf8))
            (this,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),param_1 == PIE));
  lVar11 = this->_padding_;
  if (lVar11 == 0) {
    return;
  }
  pUVar4 = UOptimusNodeGraph::StaticClass();
  lVar11 = *(longlong *)(lVar11 + 0x10);
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(lVar11 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return;
  }
  lVar11 = this->_padding_;
  if (lVar11 == 0) {
LAB_14e1faa33:
    lVar11 = 0;
  }
  else {
    pUVar4 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_14e1faa33;
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)(lVar11 + 0x28) + 0x18))(lVar11 + 0x28);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  pUVar6 = (UOptimusDeformer *)(**(code **)(*plVar5 + 8))(plVar5);
  if (pUVar6 == (UOptimusDeformer *)0x0) {
    return;
  }
  pUVar4 = UOptimusDeformer::StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(pUVar6->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return;
  }
  this_00 = &this->ResourceDesc;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar8 = CastChecked<UOptimusResourceContainer,UObject>(*(UObject **)&pUVar7->field_0x20);
    if ((pUVar8 != (UOptimusResourceContainer *)0x0) &&
       (pUVar9 = CastChecked<UOptimusDeformer,UObject>((UObject *)pUVar8->_padding_),
       pUVar9 == pUVar6)) {
      return;
    }
    pcVar2 = *(code **)(pUVar6->_padding_ + 0x30);
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_res8 = (UObject *)(*pcVar2)(&pUVar6->_padding_,*(undefined8 *)&pUVar7->field_0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
    return;
  }
  if ((this->DuplicationInfo).ResourceName == (FName)0x0) {
    return;
  }
  local_res18 = (UObject *)
                (**(code **)(pUVar6->_padding_ + 0x30))
                          (&pUVar6->_padding_,(this->DuplicationInfo).ResourceName);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar3) goto LAB_14e1fabdc;
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_14e1fabaa:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetPins().IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ResourceAccessorBase.cpp"
                       ,100,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 != 0) goto LAB_14e1fabaa;
  (**(code **)(this->_padding_ + 0x2f0))(this);
LAB_14e1fabdc:
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  local_88._8_4_ = 0;
  local_88._12_4_ = 0;
  FStack_50.LevelNames_DEPRECATED.ArrayNum = 0;
  FStack_50.LevelNames_DEPRECATED.ArrayMax = 0;
  local_88._16_8_ = 0;
  local_88._24_8_ = 0;
  local_88._32_8_ = 0;
  pvStack_60 = (void *)0x0;
  local_58 = 0;
  FStack_50.Type = Dimensional;
  FStack_50._4_4_ = 0;
  FStack_50.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_50.DimensionNames.ArrayNum = 0;
  FStack_50.DimensionNames.ArrayMax = 0;
  FStack_50.Multiplier = 0;
  FStack_50._28_4_ = 0;
  FStack_50.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_50.Expression.Data.ArrayNum = 0;
  FStack_50.Expression.Data.ArrayMax = 0;
  FStack_50.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar10 = FOptimusNode_ResourceAccessorBase_DuplicationInfo::
            FOptimusNode_ResourceAccessorBase_DuplicationInfo
                      ((FOptimusNode_ResourceAccessorBase_DuplicationInfo *)local_88);
  (this->DuplicationInfo).ResourceName = pFVar10->ResourceName;
  (this->DuplicationInfo).DataType.TypeName = (pFVar10->DataType).TypeName;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->DuplicationInfo).DataType.TypeObject,
             (TPersistentObjectPtr<FSoftObjectPath> *)&(pFVar10->DataType).TypeObject);
  FOptimusDataDomain::operator=(&(this->DuplicationInfo).DataDomain,&pFVar10->DataDomain);
  if (FStack_50.LevelNames_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.LevelNames_DEPRECATED.AllocatorInstance.Data);
  }
  if (FStack_50.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Expression.Data.AllocatorInstance.Data);
  }
  if (FStack_50.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.DimensionNames.AllocatorInstance.Data);
  }
  if (pvStack_60 != (void *)0x0) {
    FMemory::Free(pvStack_60);
  }
  return;
}

// PreDuplicateRequirementActions @ 14e200c20

void __thiscall
UOptimusNode_ResourceAccessorBase::PreDuplicateRequirementActions
          (UOptimusNode_ResourceAccessorBase *this,UOptimusNodeGraph *param_1,
          FOptimusCompoundAction *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  FName FVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  UClass *pUVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  TWeakPtr<FOptimusResourceAction_AddResource,1> local_38;
  
  if ((this->DuplicationInfo).ResourceName == (FName)0x0) {
    return;
  }
  plVar8 = (longlong *)(**(code **)(param_1->_padding_ + 0x18))();
  if ((plVar8 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar8 + 8))(plVar8), lVar9 != 0)) {
    pUVar10 = UOptimusDeformer::StaticClass();
    iVar3 = (int)pUVar10->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar10->_padding_)) goto LAB_14e200c98;
  }
  lVar9 = 0;
LAB_14e200c98:
  lVar4 = *(longlong *)(lVar9 + 0x138);
  plVar11 = *(longlong **)(lVar4 + 0x28);
  iVar3 = *(int *)(lVar4 + 0x30);
  plVar8 = plVar11 + iVar3;
  while( true ) {
    if (*(int *)(lVar4 + 0x30) != iVar3) {
      `TCheckedPointerIterator<UOptimusResourceDescription_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar11 == plVar8) break;
    lVar5 = *plVar11;
    if ((((*(FName *)(lVar5 + 0x28) == (this->DuplicationInfo).ResourceName) &&
         (*(FName *)(lVar5 + 0x30) == (this->DuplicationInfo).DataType.TypeName)) &&
        (bVar7 = FSoftObjectPath::operator==
                           ((FSoftObjectPath *)(lVar5 + 0x40),
                            (FSoftObjectPath *)
                            &(this->DuplicationInfo).DataType.TypeObject.SoftObjectPtr.field_0x8),
        bVar7)) &&
       (bVar7 = FOptimusDataDomain::operator==
                          ((FOptimusDataDomain *)(lVar5 + 0x68),&(this->DuplicationInfo).DataDomain)
       , bVar7)) {
      return;
    }
    plVar11 = plVar11 + 1;
  }
  do {
    lVar4 = *(longlong *)(lVar9 + 0x138);
    bVar7 = false;
    plVar11 = *(longlong **)(lVar4 + 0x28);
    iVar3 = *(int *)(lVar4 + 0x30);
    plVar8 = plVar11 + iVar3;
    while( true ) {
      if (*(int *)(lVar4 + 0x30) != iVar3) {
        `TCheckedPointerIterator<UOptimusResourceDescription_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar11 == plVar8) break;
      FVar6 = (this->DuplicationInfo).ResourceName;
      if (*(FName *)(*plVar11 + 0x28) == FVar6) {
        bVar7 = true;
        (this->DuplicationInfo).ResourceName.Number = FVar6.Number + 1;
      }
      plVar11 = plVar11 + 1;
    }
  } while (bVar7);
  FOptimusCompoundAction::
  AddSubAction<FOptimusResourceAction_AddResource,FOptimusDataTypeRef_&,FName_&,FOptimusDataDomain_&>
            (param_2,&local_38,&(this->DuplicationInfo).DataType,
             &(this->DuplicationInfo).ResourceName,&(this->DuplicationInfo).DataDomain);
  if (local_38.WeakReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  LOCK();
  paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 != (atomic<int>)0x1) {
    return;
  }
  (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
            (local_38.WeakReferenceCount.ReferenceController,1);
  return;
}

// SetResourceDescription @ 14e2223a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOptimusNode_ResourceAccessorBase::SetResourceDescription
          (UOptimusNode_ResourceAccessorBase *this,UOptimusResourceDescription *param_1)

{
  FOptimusDataType *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar4;
  UOptimusResourceDescription *local_res10;
  TSharedPtr<FOptimusDataType_const_,1> local_38;
  TSharedPtr<FOptimusDataType_const_,1> local_28;
  FString local_18;
  
  if (param_1 == (UOptimusResourceDescription *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5846544486745768095>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ResourceAccessorBase.cpp"
                       ,0x9f,"InResourceDesc");
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
    if ((pFVar1->UsageFlags & Resource) == None) {
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
      FWeakObjectPtr::operator=(&(this->ResourceDesc).WeakPtr,(FObjectPtr)&local_res10);
    }
  }
  return;
}

// StaticRegisterNativesUOptimusNode_ResourceAccessorBase @ 14e225d20

void __cdecl
UOptimusNode_ResourceAccessorBase::StaticRegisterNativesUOptimusNode_ResourceAccessorBase(void)

{
  return;
}

// ValidateForCompile @ 14e230660

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __thiscall
UOptimusNode_ResourceAccessorBase::ValidateForCompile
          (UOptimusNode_ResourceAccessorBase *this,TOptional<FText> *__return_storage_ptr__,
          FOptimusPinTraversalContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FText *pFVar4;
  TOptional<FText> *pTVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->ResourceDesc).WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"OptimusResourceAccessorBase",L"NoDescriptor",
                        L"No resource descriptor set on this node");
    FText::FText((FText *)__return_storage_ptr__,pFVar4);
    local_38.TextData.Reference = local_58.TextData.Reference;
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), local_38.TextData.Reference = local_58.TextData.Reference, bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<FText> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar3[2].field_0x10);
    if (bVar2) {
      (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
      (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
      return __return_storage_ptr__;
    }
    pFVar4 = FText::FromName(&local_28,(FName *)(pUVar3 + 1));
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"OptimusResourceAccessorBase",L"NoComponentBinding",
                        L"No component binding set for resource \'{0}\'");
    pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
    pFVar4 = FText::Format<FText>(&local_48,pFVar7,pFVar4);
    FText::FText((FText *)__return_storage_ptr__,pFVar4);
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<FText> *)(*pcVar1)();
      return pTVar5;
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  if (local_38.TextData.Reference == (ITextData *)0x0) {
    return __return_storage_ptr__;
  }
  (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  return __return_storage_ptr__;
}

// _getUObject @ 14e238fe0

UObject * __thiscall
UOptimusNode_ResourceAccessorBase::_getUObject(UOptimusNode_ResourceAccessorBase *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14e238ff0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_ResourceAccessorBase::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_ResourceAccessorBase::_getUObject_adjustor_8__(UOptimusNode_ResourceAccessorBase *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_ResourceAccessorBase *)
                       &this[-1].DuplicationInfo.DataDomain.LevelNames_DEPRECATED.ArrayNum);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14e239000

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_ResourceAccessorBase::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_ResourceAccessorBase::_getUObject_adjustor_16__
          (UOptimusNode_ResourceAccessorBase *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_ResourceAccessorBase *)
                       &this[-1].DuplicationInfo.DataDomain.LevelNames_DEPRECATED);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 14e239010

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_ResourceAccessorBase::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_ResourceAccessorBase::_getUObject_adjustor_24__
          (UOptimusNode_ResourceAccessorBase *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_ResourceAccessorBase *)
                       &this[-1].DuplicationInfo.DataDomain.Expression.Data.ArrayNum);
  return (UObject *)pUVar1;
}

