// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 11

// StaticClass @ 14e111210

UClass * __cdecl UOptimusValueContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusValueContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusValueContainer",
               &Z_Registration_Info_UClass_UOptimusValueContainer.InnerSingleton,
               StaticRegisterNativesUOptimusValueContainer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusValueContainer>,
               InternalVTableHelperCtorCaller<UOptimusValueContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusValueContainer.InnerSingleton;
}

// UOptimusValueContainer @ 14e15d760

UOptimusValueContainer * __thiscall
UOptimusValueContainer::UOptimusValueContainer(UOptimusValueContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOptimusValueContainer__6B_;
  return this;
}

// UOptimusValueContainer @ 14e15d790

UOptimusValueContainer * __thiscall
UOptimusValueContainer::UOptimusValueContainer
          (UOptimusValueContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOptimusValueContainer__6B_;
  return this;
}

// ~UOptimusValueContainer @ 14e164220

void __thiscall UOptimusValueContainer::~UOptimusValueContainer(UOptimusValueContainer *this)

{
  *(undefined ***)this = &___7UOptimusValueContainer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d9b40

UClass * __cdecl UOptimusValueContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusValueContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusValueContainer",
               &Z_Registration_Info_UClass_UOptimusValueContainer.InnerSingleton,
               StaticRegisterNativesUOptimusValueContainer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusValueContainer>,
               InternalVTableHelperCtorCaller<UOptimusValueContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusValueContainer.InnerSingleton;
}

// GetShaderValue @ 14e1e3870

FShaderValueContainer * __thiscall
UOptimusValueContainer::GetShaderValue
          (UOptimusValueContainer *this,FShaderValueContainer *__return_storage_ptr__)

{
  FProperty *this_00;
  FOptimusDataType *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar5;
  FShaderValueContainer *pFVar6;
  int iVar7;
  longlong lVar8;
  FShaderValueContainer local_b8;
  uchar *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TSharedPtr<FOptimusDataType_const_,1> local_88;
  TSharedPtr<FOptimusDataType_const_,1> local_78;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  TArrayView<unsigned_char_const_,int> local_58;
  undefined1 local_48 [48];
  
  lVar8 = *(longlong *)&this->field_0x10;
  if (lVar8 == 0) {
LAB_14e1e38c5:
    lVar8 = 0;
  }
  else {
    pUVar4 = UOptimusValueContainerGeneratorClass::StaticClass();
    iVar7 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar4->_padding_)) goto LAB_14e1e38c5;
  }
  this_00 = *(FProperty **)(lVar8 + 0x70);
  GetValueType(this,(FOptimusDataTypeRef *)local_48);
  if (this_00 == (FProperty *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5616713399393058681>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusValueContainer.cpp"
                       ,0x87,"ValueProperty");
    if (bVar3) {
code_r0x00014e1e395b:
      pcVar2 = (code *)swi(3);
      pFVar6 = (FShaderValueContainer *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    pTVar5 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_48,&local_88);
    pFVar1 = pTVar5->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (pFVar1 == (FOptimusDataType *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5616713399393058681>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusValueContainer.cpp"
                         ,0x87,"DataType.IsValid()");
      if (bVar3) goto code_r0x00014e1e395b;
    }
    else {
      iVar7 = this_00->ElementSize * this_00->ArrayDim;
      local_98 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)this,0);
      iStack_90 = iVar7;
      if ((iVar7 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FShaderValueContainer *)(*pcVar2)();
        return pFVar6;
      }
      pTVar5 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_48,&local_78);
      pFVar1 = pTVar5->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      FOptimusDataType::MakeShaderValue(pFVar1,&local_b8);
      pTVar5 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_48,&local_68);
      pFVar1 = pTVar5->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      local_58._12_4_ = uStack_8c;
      local_58.ArrayNum = iStack_90;
      local_58.DataPtr = local_98;
      bVar3 = FOptimusDataType::ConvertPropertyValueToShader(pFVar1,&local_58,&local_b8);
      if (bVar3) {
        (__return_storage_ptr__->ShaderValue).AllocatorInstance.Data =
             local_b8.ShaderValue.AllocatorInstance.Data;
        (__return_storage_ptr__->ShaderValue).ArrayNum = local_b8.ShaderValue.ArrayNum;
        (__return_storage_ptr__->ShaderValue).ArrayMax = local_b8.ShaderValue.ArrayMax;
        (__return_storage_ptr__->ArrayList).AllocatorInstance.Data =
             local_b8.ArrayList.AllocatorInstance.Data;
        (__return_storage_ptr__->ArrayList).ArrayNum = local_b8.ArrayList.ArrayNum;
        (__return_storage_ptr__->ArrayList).ArrayMax = local_b8.ArrayList.ArrayMax;
        local_b8.ArrayList.ArrayNum = 0;
        local_b8.ArrayList.ArrayMax = 0;
        local_b8.ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.ShaderValue.ArrayNum = 0;
        local_b8.ShaderValue.ArrayMax = 0;
        local_b8.ArrayList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        DestructItems<FArrayShaderValue,int>((FArrayShaderValue *)0x0,0);
        if (local_b8.ArrayList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.ArrayList.AllocatorInstance.Data);
        }
        if (local_b8.ShaderValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.ShaderValue.AllocatorInstance.Data);
        }
        goto LAB_14e1e3a97;
      }
      DestructItems<FArrayShaderValue,int>
                ((FArrayShaderValue *)local_b8.ArrayList.AllocatorInstance.Data,
                 local_b8.ArrayList.ArrayNum);
      if (local_b8.ArrayList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.ArrayList.AllocatorInstance.Data);
      }
      if (local_b8.ShaderValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.ShaderValue.AllocatorInstance.Data);
      }
    }
  }
  (__return_storage_ptr__->ShaderValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShaderValue).ArrayNum = 0;
  (__return_storage_ptr__->ShaderValue).ArrayMax = 0;
  (__return_storage_ptr__->ArrayList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayList).ArrayNum = 0;
  (__return_storage_ptr__->ArrayList).ArrayMax = 0;
LAB_14e1e3a97:
  if ((void *)local_48._32_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._32_8_);
  }
  return __return_storage_ptr__;
}

// GetValueType @ 14e1e9820

FOptimusDataTypeRef * __thiscall
UOptimusValueContainer::GetValueType
          (UOptimusValueContainer *this,FOptimusDataTypeRef *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FOptimusDataTypeRef *pFVar6;
  
  lVar2 = *(longlong *)&this->field_0x10;
  if (lVar2 != 0) {
    pUVar5 = UOptimusValueContainerGeneratorClass::StaticClass();
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
                    (&bGEnsureHasExecuted<_5616713399393058694>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusValueContainer.cpp"
                     ,0x7a,"Class");
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

// MakeValueContainer @ 14e1f1bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusValueContainer * __cdecl
UOptimusValueContainer::MakeValueContainer(UObject *param_1,FOptimusDataTypeRef *param_2)

{
  void *pvVar1;
  UPackage *pUVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  longlong *plVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0 [56];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e0._0_8_ = param_2->TypeName;
  local_e0._8_8_ = *(undefined8 *)&(param_2->TypeObject).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_e0 + 0x10),
             (FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8);
  pUVar2 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  pUVar3 = UOptimusValueContainerGeneratorClass::GetClassForType
                     (pUVar2,(FOptimusDataTypeRef *)local_e0);
  local_e8 = 0;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  pvVar1 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return (UOptimusValueContainer *)pUVar5;
}

// MakeValueContainerStruct @ 14e1f1d10

FOptimusValueContainerStruct * __thiscall
UOptimusValueContainer::MakeValueContainerStruct
          (UOptimusValueContainer *this,FOptimusValueContainerStruct *__return_storage_ptr__)

{
  FProperty *this_00;
  FOptimusDataType *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar5;
  FOptimusValueContainerStruct *pFVar6;
  uchar *puVar7;
  FOptimusDataTypeRef *pFVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uStack_cc;
  undefined1 local_c8 [32];
  void *local_a8;
  TSharedPtr<FOptimusDataType_const_,1> local_98;
  TArrayView<unsigned_char_const_,int> local_88;
  undefined1 local_78 [48];
  TSharedPtr<FOptimusDataType_const_,1> local_48;
  FOptimusDataTypeRef local_38;
  
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)__return_storage_ptr__);
  lVar10 = *(longlong *)&this->field_0x10;
  if (lVar10 == 0) {
LAB_14e1f1d61:
    lVar10 = 0;
  }
  else {
    pUVar4 = UOptimusValueContainerGeneratorClass::StaticClass();
    iVar9 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < iVar9) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar9 * 8)
        != &pUVar4->_padding_)) goto LAB_14e1f1d61;
  }
  this_00 = *(FProperty **)(lVar10 + 0x70);
  GetValueType(this,(FOptimusDataTypeRef *)local_c8);
  if (this_00 == (FProperty *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5616713399393058708>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusValueContainer.cpp"
                       ,0x6c,"ValueProperty");
    if (bVar3) {
code_r0x00014e1f1dfa:
      pcVar2 = (code *)swi(3);
      pFVar6 = (FOptimusValueContainerStruct *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    pTVar5 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_c8,&local_98);
    pFVar1 = pTVar5->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    if (pFVar1 == (FOptimusDataType *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5616713399393058708>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusValueContainer.cpp"
                         ,0x6c,"DataType.IsValid()");
      if (bVar3) goto code_r0x00014e1f1dfa;
    }
    else {
      iVar9 = this_00->ElementSize * this_00->ArrayDim;
      puVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)this,0);
      if ((iVar9 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FOptimusValueContainerStruct *)(*pcVar2)();
        return pFVar6;
      }
      pTVar5 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_c8,&local_48);
      pFVar8 = FOptimusDataTypeRef::FOptimusDataTypeRef(&local_38,pTVar5);
      FOptimusValueContainerStruct::SetType(__return_storage_ptr__,pFVar8);
      local_78._0_8_ = local_c8._0_8_;
      local_78._8_8_ = local_c8._8_8_;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_78 + 0x10),(FSoftObjectPath *)(local_c8 + 0x10));
      local_88._12_4_ = uStack_cc;
      local_88.ArrayNum = iVar9;
      local_88.DataPtr = puVar7;
      FOptimusValueContainerStruct::SetValue
                (__return_storage_ptr__,(FOptimusDataTypeRef *)local_78,&local_88);
    }
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return __return_storage_ptr__;
}

// PostLoad @ 14e1fc150

void __thiscall UOptimusValueContainer::PostLoad(UOptimusValueContainer *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  
  UObject::PostLoad((UObject *)this);
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

// StaticRegisterNativesUOptimusValueContainer @ 14e225f90

void __cdecl UOptimusValueContainer::StaticRegisterNativesUOptimusValueContainer(void)

{
  return;
}

