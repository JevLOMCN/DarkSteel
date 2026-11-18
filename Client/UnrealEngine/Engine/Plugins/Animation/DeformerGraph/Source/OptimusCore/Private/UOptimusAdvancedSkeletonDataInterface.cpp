// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 26

// StaticClass @ 14e106d70

UClass * __cdecl UOptimusAdvancedSkeletonDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusAdvancedSkeletonDataInterface",
               &Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusAdvancedSkeletonDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusAdvancedSkeletonDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusAdvancedSkeletonDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataInterface.InnerSingleton;
}

// UOptimusAdvancedSkeletonDataInterface @ 14e1581a0

UOptimusAdvancedSkeletonDataInterface * __thiscall
UOptimusAdvancedSkeletonDataInterface::UOptimusAdvancedSkeletonDataInterface
          (UOptimusAdvancedSkeletonDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusAdvancedSkeletonDataInterface__6B_;
  (this->SkinWeightProfile).ComparisonIndex = 0;
  (this->SkinWeightProfile).Number = 0;
  this->bEnableLayeredSkinning = false;
  (this->AttributeBufferArray).InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeBufferArray).InnerArray.ArrayNum = 0;
  (this->AttributeBufferArray).InnerArray.ArrayMax = 0;
  *(undefined8 *)&this->OnPinDefinitionChangedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPinDefinitionRenamedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionRenamedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionRenamedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDisplayNameChangedDelegate = 0;
  *(undefined8 *)&(this->OnDisplayNameChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDisplayNameChangedDelegate).field_0x10 = 0;
  return this;
}

// UOptimusAdvancedSkeletonDataInterface @ 14e158200

UOptimusAdvancedSkeletonDataInterface * __thiscall
UOptimusAdvancedSkeletonDataInterface::UOptimusAdvancedSkeletonDataInterface
          (UOptimusAdvancedSkeletonDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusAdvancedSkeletonDataInterface__6B_;
  (this->SkinWeightProfile).ComparisonIndex = 0;
  (this->SkinWeightProfile).Number = 0;
  this->bEnableLayeredSkinning = false;
  (this->AttributeBufferArray).InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeBufferArray).InnerArray.ArrayNum = 0;
  (this->AttributeBufferArray).InnerArray.ArrayMax = 0;
  *(undefined8 *)&this->OnPinDefinitionChangedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPinDefinitionRenamedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionRenamedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionRenamedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDisplayNameChangedDelegate = 0;
  *(undefined8 *)&(this->OnDisplayNameChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDisplayNameChangedDelegate).field_0x10 = 0;
  return this;
}

// ~UOptimusAdvancedSkeletonDataInterface @ 14e1620f0

void __thiscall
UOptimusAdvancedSkeletonDataInterface::~UOptimusAdvancedSkeletonDataInterface
          (UOptimusAdvancedSkeletonDataInterface *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusAdvancedSkeletonDataInterface__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDisplayNameChangedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPinDefinitionRenamedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPinDefinitionChangedDelegate);
  DestructItems<FOptimusAnimAttributeBufferDescription,int>
            ((FOptimusAnimAttributeBufferDescription *)
             (this->AttributeBufferArray).InnerArray.AllocatorInstance.Data,
             (this->AttributeBufferArray).InnerArray.ArrayNum);
  pFVar1 = (this->AttributeBufferArray).InnerArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// AddAnimAttribute @ 14e173e80

FOptimusAnimAttributeBufferDescription * __thiscall
UOptimusAdvancedSkeletonDataInterface::AddAnimAttribute
          (UOptimusAdvancedSkeletonDataInterface *this,FString *param_1,FOptimusDataTypeRef *param_2
          )

{
  int *piVar1;
  int iVar2;
  FString *pFVar3;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar4;
  FOptimusDataTypeRef *pFVar5;
  wchar_t *pwVar6;
  FOptimusAnimAttributeBufferDescription *this_00;
  FName local_res8;
  FString local_68;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  FOptimusDataTypeRef local_48;
  
  iVar2 = (this->AttributeBufferArray).InnerArray.ArrayNum;
  piVar1 = &(this->AttributeBufferArray).InnerArray.ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,(ForAnyElementType *)&this->AttributeBufferArray,piVar1);
  }
  (this->AttributeBufferArray).InnerArray.ArrayNum = iVar2 + 1;
  this_00 = (FOptimusAnimAttributeBufferDescription *)
            ((this->AttributeBufferArray).InnerArray.AllocatorInstance.Data + (longlong)iVar2 * 0x68
            );
  DefaultConstructItems<FOptimusAnimAttributeBufferDescription,int>(this_00,1);
  pFVar3 = GetUnusedAttributeName
                     (this,&local_68,(this->AttributeBufferArray).InnerArray.ArrayNum + -1,param_1);
  ::FString::operator=((FString *)this_00,pFVar3);
  (this_00->DataType).TypeName = param_2->TypeName;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&(this_00->DataType).TypeObject,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_2->TypeObject);
  pTVar4 = FOptimusDataTypeRef::Resolve(&this_00->DataType,&local_58);
  pFVar5 = FOptimusDataTypeRef::FOptimusDataTypeRef(&local_48,pTVar4);
  FOptimusValueContainerStruct::SetType(&this_00->DefaultValueStruct,pFVar5);
  ::FString::operator=(&this_00->HlslId,pFVar3);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar6);
  this_00->PinName = local_res8;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return this_00;
}

// CanPinDefinitionChange @ 14e181a90

bool __thiscall
UOptimusAdvancedSkeletonDataInterface::CanPinDefinitionChange
          (UOptimusAdvancedSkeletonDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19c3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusAdvancedSkeletonDataInterface::CreateDataProvider
          (UOptimusAdvancedSkeletonDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
          ulong64 param_3)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UOptimusAdvancedSkeletonDataProvider *this_00;
  longlong *plVar4;
  USkeletalMeshComponent *pUVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UOptimusAdvancedSkeletonDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._8_8_ = pUVar2;
  this_00 = (UOptimusAdvancedSkeletonDataProvider *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)param_1.field0_0x0 != 0) {
    pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar3);
    if (bVar1) {
      pUVar5 = *(USkeletalMeshComponent **)param_1.field0_0x0;
      goto LAB_14e19c479;
    }
  }
  pUVar5 = (USkeletalMeshComponent *)0x0;
LAB_14e19c479:
  UOptimusAdvancedSkeletonDataProvider::Init(this_00,this,pUVar5);
  return (UComputeDataProvider *)this_00;
}

// GetClassName @ 14e1bcb10

wchar_t * __thiscall
UOptimusAdvancedSkeletonDataInterface::GetClassName(UOptimusAdvancedSkeletonDataInterface *this)

{
  return L"AdvancedSkeleton";
}

// GetDisplayName @ 14e1c3ee0

FString * __thiscall
UOptimusAdvancedSkeletonDataInterface::GetDisplayName
          (UOptimusAdvancedSkeletonDataInterface *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,L"Default Skin Weights");
  if (this->SkinWeightProfile != (FName)0x0) {
    pFVar1 = ::FName::ToString(&this->SkinWeightProfile,&local_18);
    if (&local_28 != pFVar1) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      local_28.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = (pFVar1->Data).ArrayNum;
      local_28.Data.ArrayMax = (pFVar1->Data).ArrayMax;
      (pFVar1->Data).ArrayNum = 0;
      (pFVar1->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"Skeleton - %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetHLSL @ 14e1c5b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusAdvancedSkeletonDataInterface::GetHLSL
          (UOptimusAdvancedSkeletonDataInterface *this,FString *param_1,FString *param_2)

{
  FOptimusDataType *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStackY_358 [32];
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FName local_2d8;
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_2d0;
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_2c0;
  FString local_2b0;
  initializer_list<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_> local_298;
  FString local_288;
  initializer_list<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_> local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  undefined1 local_228 [32];
  void *local_208;
  TObjectPtr<UScriptStruct_const_>_u_0 local_1f8;
  undefined8 uStack_1f0;
  FString local_1e8;
  undefined8 local_1d8;
  TSharedPtr<FOptimusDataType_const_,1> local_1c8;
  FStringFormatArg local_1b8;
  FStringFormatArg local_198;
  FStringFormatArg local_178;
  FStringFormatArg local_158;
  FString local_138;
  FString local_128;
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_118;
  FString *local_108;
  FStringFormatArg *local_100;
  FString *local_f8;
  FStringFormatArg *local_f0;
  undefined1 local_e8 [72];
  undefined4 local_a0;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_358;
  pFVar5 = ::FString::FString(&local_138,param_2);
  FStringFormatArg::FStringFormatArg(&local_1b8,pFVar5);
  ::FString::FString(&local_288,L"DataInterfaceName");
  local_2d0.Key = &local_288;
  local_2d0.Value = &local_1b8;
  local_298._First = &local_2d0;
  local_298._Last = &local_2c0;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
            ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_98,&local_298);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if (local_1b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.StringValue.Data.AllocatorInstance.Data);
  }
  uVar11 = 0;
  local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.Data.ArrayNum = 0;
  local_2e8.Data.ArrayMax = 0;
  LoadShaderSourceFile
            (SkeletonTemplateFilePath,SP_PCD3D_SM5,&local_2e8,
             (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_2e8.Data.ArrayNum != 0) {
    FVar7.Data = local_2e8.Data.AllocatorInstance.Data;
  }
  ::FString::FormatImpl
            ((FString *)&local_2c0,(wchar_t *)FVar7.Data,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_98);
  iVar8 = (int)local_2c0.Value + -1;
  if ((int)local_2c0.Value == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_2c0.Key,iVar8);
  if (local_2c0.Key != (FString *)0x0) {
    FMemory::Free(local_2c0.Key);
  }
  local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.Data.ArrayNum = 0;
  local_2f8.Data.ArrayMax = 0;
  LoadShaderSourceFile
            (AttributeTemplateFilePath,SP_PCD3D_SM5,&local_2f8,
             (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  uVar13 = uVar11;
  if (0 < (this->AttributeBufferArray).InnerArray.ArrayNum) {
    do {
      uVar12 = (uint)uVar11;
      uVar4 = 0;
      if ((int)uVar12 < (this->AttributeBufferArray).InnerArray.ArrayNum) {
        uVar4 = ~uVar12 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (this->AttributeBufferArray).InnerArray.AllocatorInstance.Data + uVar13;
      ::FString::FString(&local_238,(FString *)pFVar9);
      local_228._0_8_ = *(FName *)(pFVar9 + 0x10);
      local_228._8_8_ = *(undefined8 *)(pFVar9 + 0x18);
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_228 + 0x10),(FSoftObjectPath *)(pFVar9 + 0x20));
      local_1f8.DebugPtr = (UScriptStruct *)0x0;
      uStack_1f0 = 0;
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)&local_1f8.ObjectPtr,*(UScriptStruct **)&pFVar9[0x40].field_0x0
                 ,*(uchar **)(pFVar9 + 0x48));
      ::FString::FString(&local_1e8,(FString *)(pFVar9 + 0x50));
      local_1d8 = *(undefined8 *)&pFVar9[0x60].field_0x0;
      local_318.Data.ArrayNum = (param_2->Data).ArrayNum;
      lVar10 = (longlong)local_318.Data.ArrayNum;
      local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar9 = (param_2->Data).AllocatorInstance.Data;
      if (local_318.Data.ArrayNum == 0) {
        local_318.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_318.Data.ArrayNum,0,(ForAnyElementType *)&local_318,
                   local_318.Data.ArrayNum,&local_318.Data.ArrayMax);
        memcpy(local_318.Data.AllocatorInstance.Data,pFVar9,lVar10 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_158,&local_318);
      ::FString::FString(&local_248,L"DataInterfaceName");
      local_118.Key = &local_248;
      local_118.Value = &local_158;
      pTVar6 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_228,&local_1c8);
      pFVar1 = pTVar6->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
      local_2d8.ComparisonIndex.Value = 0;
      local_2d8.Number = 0;
      pFVar5 = FShaderValueType::ToString
                         ((pFVar1->ShaderValueType).ValueTypePtr,&local_128,&local_2d8);
      FStringFormatArg::FStringFormatArg(&local_178,pFVar5);
      ::FString::FString(&local_258,L"TypeName");
      FVar7.Data = local_1e8.Data.AllocatorInstance.Data;
      local_100 = &local_178;
      local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar8 = local_1e8.Data.ArrayNum;
      local_308.Data.ArrayNum = iVar8;
      local_108 = &local_258;
      if (iVar8 == 0) {
        local_308.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,0,(ForAnyElementType *)&local_308,iVar8,&local_308.Data.ArrayMax);
        memcpy(local_308.Data.AllocatorInstance.Data,FVar7.Data,(longlong)iVar8 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_198,&local_308);
      ::FString::FString(&local_268,L"AttributeName");
      local_f8 = &local_268;
      local_f0 = &local_198;
      local_278._First = &local_118;
      local_278._Last = (TPairInitializer<FString_const_&,FStringFormatArg_const_&> *)local_e8;
      TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
      ::
      TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                  *)local_e8,&local_278);
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      if (local_198.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      if (local_178.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      if (local_158.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.StringValue.Data.AllocatorInstance.Data);
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_2f8.Data.ArrayNum != 0) {
        FVar7.Data = local_2f8.Data.AllocatorInstance.Data;
      }
      ::FString::FormatImpl
                (&local_2b0,(wchar_t *)FVar7.Data,
                 (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                  *)local_e8);
      iVar8 = local_2b0.Data.ArrayNum + -1;
      if (local_2b0.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_2b0.Data.AllocatorInstance.Data,iVar8);
      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
      }
      local_a0 = 0;
      if ((void *)local_e8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      FInstancedStruct::Reset((FInstancedStruct *)&local_1f8.ObjectPtr);
      if (local_208 != (void *)0x0) {
        FMemory::Free(local_208);
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      uVar11 = (ulonglong)(uVar12 + 1);
      uVar13 = uVar13 + 0x68;
    } while ((int)(uVar12 + 1) < (this->AttributeBufferArray).InnerArray.ArrayNum);
  }
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  local_50 = 0;
  if ((void *)local_98._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GetPermutations @ 14e1cc3b0

void __thiscall
UOptimusAdvancedSkeletonDataInterface::GetPermutations
          (UOptimusAdvancedSkeletonDataInterface *this,FComputeKernelPermutationVector *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"ENABLE_DEFORMER_BONES");
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"GPUSKIN_UNLIMITED_BONE_INFLUENCE");
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"GPUSKIN_BONE_INDEX_UINT16");
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"GPUSKIN_BONE_WEIGHTS_UINT16");
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPinDefinitions @ 14e1cd4d0

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusAdvancedSkeletonDataInterface::GetPinDefinitions
          (UOptimusAdvancedSkeletonDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  GetPinDefinitions_Internal(this,__return_storage_ptr__,false,-1);
  return __return_storage_ptr__;
}

// GetPinDefinitions_Internal @ 14e1d2520

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusAdvancedSkeletonDataInterface::GetPinDefinitions_Internal
          (UOptimusAdvancedSkeletonDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1,int param_2)

{
  FOptimusCDIPinDefinition *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  FString *pFVar8;
  FName *pFVar9;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  FDimensionInfo *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 local_3c8;
  FString local_3c0;
  ForAnyElementType local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  FScriptContainerElement local_39c;
  undefined8 local_398;
  FOptimusCDIPinDefinition local_390;
  FOptimusCDIPinDefinition local_358;
  FOptimusCDIPinDefinition local_320;
  FOptimusCDIPinDefinition local_2e8;
  FOptimusCDIPinDefinition local_2b0;
  FOptimusCDIPinDefinition local_278;
  FName local_240;
  FName local_238;
  FName local_230;
  undefined8 local_228;
  undefined8 local_220;
  FName local_218;
  FString local_210;
  initializer_list<FOptimusCDIPinDefinition::FDimensionInfo> local_1f8;
  FString local_1e8;
  initializer_list<FOptimusCDIPinDefinition::FDimensionInfo> local_1d8;
  initializer_list<FOptimusCDIPinDefinition::FDimensionInfo> local_1c8;
  FDimensionInfo local_1b8;
  FName local_1a0;
  FString local_198;
  FDimensionInfo local_188;
  FName local_170;
  FString local_168;
  FDimensionInfo local_158;
  FName local_140;
  FString local_138;
  FDimensionInfo local_128;
  FName local_110;
  FString local_108;
  undefined1 local_f8 [24];
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  ulonglong uVar15;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = ::FString::FString(&local_58,"ReadNumVertices");
  FVar3 = Optimus::DomainName::Vertex;
  pFVar8 = ::FString::FString(&local_68,"ReadNumBones");
  pFVar9 = ::FName::FName((FName *)local_f8,"NumBones");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_2b0,*pFVar9,pFVar8,FVar3,pFVar7,true,(FName)0x0);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar1 <= &local_2b0) && (&local_2b0 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar10;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar9 = local_2b0.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_2b0.DataFunctionName.Data.AllocatorInstance.Data;
  local_2b0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_2b0.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_2b0.DataFunctionName.Data.ArrayMax;
  local_2b0.DataFunctionName.Data.ArrayNum = 0;
  local_2b0.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_2b0.DataDimensions.AllocatorInstance.Data;
  local_2b0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_2b0.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_2b0.DataDimensions.ArrayMax;
  local_2b0.DataDimensions.ArrayNum = 0;
  local_2b0.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_2b0.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_2b0.bMutable;
  pFVar9[6] = local_2b0.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_2b0.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.DataDimensions.AllocatorInstance.Data);
  }
  if (local_2b0.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.DataFunctionName.Data.AllocatorInstance.Data);
  }
  local_1b8.ContextName = Optimus::DomainName::Vertex;
  ::FString::FString(&local_1b8.CountFunctionName,"ReadNumVertices");
  local_1a0 = Optimus::DomainName::Bone;
  ::FString::FString(&local_198,"ReadNumBones");
  pFVar7 = ::FString::FString(&local_78,"ReadBoneMatrix");
  pFVar9 = ::FName::FName((FName *)(local_f8 + 8),"BoneMatrix");
  local_1f8._First = &local_1b8;
  local_1f8._Last = &local_188;
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_2e8,*pFVar9,pFVar7,&local_1f8,true,(FName)0x0);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar1 <= &local_2e8) && (&local_2e8 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar10;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar9 = local_2e8.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_2e8.DataFunctionName.Data.AllocatorInstance.Data;
  local_2e8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_2e8.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_2e8.DataFunctionName.Data.ArrayMax;
  local_2e8.DataFunctionName.Data.ArrayNum = 0;
  local_2e8.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_2e8.DataDimensions.AllocatorInstance.Data;
  local_2e8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_2e8.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_2e8.DataDimensions.ArrayMax;
  local_2e8.DataDimensions.ArrayNum = 0;
  local_2e8.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_2e8.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_2e8.bMutable;
  pFVar9[6] = local_2e8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_2e8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_2e8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_1b8.CountFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.CountFunctionName.Data.AllocatorInstance.Data);
  }
  local_188.ContextName = Optimus::DomainName::Vertex;
  local_220 = 0;
  ::FString::FString(&local_188.CountFunctionName,"ReadNumVertices");
  local_170 = Optimus::DomainName::Bone;
  ::FString::FString(&local_168,"ReadNumBones");
  pFVar7 = ::FString::FString(&local_48,"ReadBoneWeight");
  pFVar9 = ::FName::FName((FName *)(local_f8 + 0x10),"BoneWeight");
  local_1c8._First = &local_188;
  local_1c8._Last = &local_158;
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_320,*pFVar9,pFVar7,&local_1c8,true,(FName)0x0);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar1 <= &local_320) && (&local_320 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar10;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar9 = local_320.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_320.DataFunctionName.Data.AllocatorInstance.Data;
  local_320.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_320.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_320.DataFunctionName.Data.ArrayMax;
  local_320.DataFunctionName.Data.ArrayNum = 0;
  local_320.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_320.DataDimensions.AllocatorInstance.Data;
  local_320.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_320.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_320.DataDimensions.ArrayMax;
  local_320.DataDimensions.ArrayNum = 0;
  local_320.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_320.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_320.bMutable;
  pFVar9[6] = local_320.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_320.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.DataDimensions.AllocatorInstance.Data);
  }
  if (local_320.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.DataFunctionName.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_188.CountFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.CountFunctionName.Data.AllocatorInstance.Data);
  }
  local_240.ComparisonIndex.Value = 0;
  local_240.Number = 0;
  pFVar7 = ::FString::FString(&local_c8,"ReadNumVertices");
  FVar3 = Optimus::DomainName::Vertex;
  pFVar8 = ::FString::FString(&local_b8,"ReadWeightedBoneMatrix");
  pFVar9 = ::FName::FName(&local_e0,"WeightedBoneMatrix");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_358,*pFVar9,pFVar8,FVar3,pFVar7,true,local_240);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar1 <= &local_358) && (&local_358 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar10;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar9 = local_358.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_358.DataFunctionName.Data.AllocatorInstance.Data;
  local_358.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_358.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_358.DataFunctionName.Data.ArrayMax;
  local_358.DataFunctionName.Data.ArrayNum = 0;
  local_358.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_358.DataDimensions.AllocatorInstance.Data;
  local_358.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_358.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_358.DataDimensions.ArrayMax;
  local_358.DataDimensions.ArrayNum = 0;
  local_358.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_358.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_358.bMutable;
  pFVar9[6] = local_358.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_358.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.DataDimensions.AllocatorInstance.Data);
  }
  if (local_358.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.DataFunctionName.Data.AllocatorInstance.Data);
  }
  if ((param_1) || (this->bEnableLayeredSkinning != false)) {
    local_158.ContextName = Optimus::DomainName::Vertex;
    local_238.ComparisonIndex.Value = 0;
    local_238.Number = 0;
    ::FString::FString(&local_158.CountFunctionName,"ReadNumVertices");
    local_140 = Optimus::DomainName::Bone;
    ::FString::FString(&local_138,"ReadNumBones");
    pFVar7 = ::FString::FString(&local_a8,"ReadLayeredBoneMatrix");
    pFVar9 = ::FName::FName(&local_d8,"LayeredBoneMatrix");
    local_1d8._First = &local_158;
    local_1d8._Last = &local_128;
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_278,*pFVar9,pFVar7,&local_1d8,true,local_238);
    pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar1 <= &local_278) &&
       ((&local_278 < pFVar1 + __return_storage_ptr__->ArrayMax &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar10;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
    *pFVar9 = local_278.PinName;
    pFVar9[1].ComparisonIndex = 0;
    pFVar9[1].Number = 0;
    pFVar9[1] = (FName)local_278.DataFunctionName.Data.AllocatorInstance.Data;
    local_278.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9[2].ComparisonIndex.Value = local_278.DataFunctionName.Data.ArrayNum;
    pFVar9[2].Number = local_278.DataFunctionName.Data.ArrayMax;
    local_278.DataFunctionName.Data.ArrayNum = 0;
    local_278.DataFunctionName.Data.ArrayMax = 0;
    pFVar9[3].ComparisonIndex = 0;
    pFVar9[3].Number = 0;
    pFVar9[3] = (FName)local_278.DataDimensions.AllocatorInstance.Data;
    local_278.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9[4].ComparisonIndex.Value = local_278.DataDimensions.ArrayNum;
    pFVar9[4].Number = local_278.DataDimensions.ArrayMax;
    local_278.DataDimensions.ArrayNum = 0;
    local_278.DataDimensions.ArrayMax = 0;
    pFVar9[5].ComparisonIndex.Value = local_278.DomainMultiplier;
    *(bool *)&pFVar9[5].Number = local_278.bMutable;
    pFVar9[6] = local_278.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    if ((FName)local_278.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_278.DataDimensions.AllocatorInstance.Data);
    }
    if ((FName)local_278.DataFunctionName.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_278.DataFunctionName.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_158.CountFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.CountFunctionName.Data.AllocatorInstance.Data);
    }
    local_230.ComparisonIndex.Value = 0;
    local_230.Number = 0;
    pFVar7 = ::FString::FString(&local_98,"ReadNumVertices");
    FVar3 = Optimus::DomainName::Vertex;
    pFVar8 = ::FString::FString(&local_88,"ReadWeightedLayeredBoneMatrix");
    pFVar9 = ::FName::FName(&local_d0,"WeightedLayeredBoneMatrix");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_390,*pFVar9,pFVar8,FVar3,pFVar7,true,local_230);
    pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar1 <= &local_390) && (&local_390 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar10;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
    *pFVar9 = local_390.PinName;
    pFVar9[1].ComparisonIndex = 0;
    pFVar9[1].Number = 0;
    pFVar9[1] = (FName)local_390.DataFunctionName.Data.AllocatorInstance.Data;
    local_390.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9[2].ComparisonIndex.Value = local_390.DataFunctionName.Data.ArrayNum;
    pFVar9[2].Number = local_390.DataFunctionName.Data.ArrayMax;
    local_390.DataFunctionName.Data.ArrayNum = 0;
    local_390.DataFunctionName.Data.ArrayMax = 0;
    pFVar9[3].ComparisonIndex = 0;
    pFVar9[3].Number = 0;
    pFVar9[3] = (FName)local_390.DataDimensions.AllocatorInstance.Data;
    local_390.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9[4].ComparisonIndex.Value = local_390.DataDimensions.ArrayNum;
    pFVar9[4].Number = local_390.DataDimensions.ArrayMax;
    local_390.DataDimensions.ArrayNum = 0;
    local_390.DataDimensions.ArrayMax = 0;
    pFVar9[5].ComparisonIndex.Value = local_390.DomainMultiplier;
    *(bool *)&pFVar9[5].Number = local_390.bMutable;
    pFVar9[6] = local_390.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    if ((FName)local_390.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_390.DataDimensions.AllocatorInstance.Data);
    }
    if ((FName)local_390.DataFunctionName.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_390.DataFunctionName.Data.AllocatorInstance.Data);
    }
  }
  uVar13 = 0;
  uVar15 = uVar13;
  if (0 < (this->AttributeBufferArray).InnerArray.ArrayNum) {
    do {
      uVar14 = (uint)uVar15;
      if (uVar14 != param_2) {
        uVar6 = 0;
        if ((int)uVar14 < (this->AttributeBufferArray).InnerArray.ArrayNum) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar10;
        }
        pFVar11 = (this->AttributeBufferArray).InnerArray.AllocatorInstance.Data;
        local_228 = 0;
        local_128.ContextName = Optimus::DomainName::Vertex;
        ::FString::FString(&local_128.CountFunctionName,"ReadNumVertices");
        local_110 = Optimus::DomainName::Bone;
        ::FString::FString(&local_108,"ReadNumBones");
        ::FString::PrintfImpl(&local_1e8,L"Read%s");
        local_3c8 = *(undefined8 *)(pFVar11 + uVar13 + 0x60);
        ::FString::FString(&local_3c0,&local_1e8);
        local_3a0 = 1;
        local_3b0.Data = (FScriptContainerElement *)0x0;
        pFVar12 = &local_128;
        local_3a8 = 0;
        local_398 = local_228;
        local_39c = (FScriptContainerElement)0x1;
        do {
          local_218 = pFVar12->ContextName;
          ::FString::FString(&local_210,&pFVar12->CountFunctionName);
          if (((local_3b0.Data <= &local_218) &&
              (&local_218 < (FName *)(local_3b0.Data + (longlong)local_3a8._4_4_ * 0x18))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar10;
          }
          iVar5 = (int)local_3a8;
          if ((int)local_3a8 == local_3a8._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_3b0,(int *)((longlong)&local_3a8 + 4));
          }
          local_3a8 = CONCAT44(local_3a8._4_4_,iVar5 + 1);
          *(FName *)(local_3b0.Data + (longlong)iVar5 * 0x18) = local_218;
          ::FString::FString((FString *)((FName *)(local_3b0.Data + (longlong)iVar5 * 0x18) + 1),
                             &local_210);
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
          pFVar12 = pFVar12 + 1;
        } while (pFVar12 != (FDimensionInfo *)local_f8);
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar11 <= (FScriptContainerElement *)&local_3c8) &&
            ((FScriptContainerElement *)&local_3c8 <
             pFVar11 + (longlong)__return_storage_ptr__->ArrayMax * 0x38)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar10;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38;
        *(undefined8 *)pFVar11 = local_3c8;
        *(undefined8 *)(pFVar11 + 8) = 0;
        *(FScriptContainerElement **)(pFVar11 + 8) = local_3c0.Data.AllocatorInstance.Data;
        local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar11 + 0x10) = local_3c0.Data.ArrayNum;
        *(int *)(pFVar11 + 0x14) = local_3c0.Data.ArrayMax;
        local_3c0.Data.ArrayNum = 0;
        local_3c0.Data.ArrayMax = 0;
        *(undefined8 *)(pFVar11 + 0x18) = 0;
        *(FScriptContainerElement **)(pFVar11 + 0x18) = local_3b0.Data;
        local_3b0.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar11 + 0x20) = (int)local_3a8;
        *(int *)(pFVar11 + 0x24) = local_3a8._4_4_;
        local_3a8 = 0;
        *(undefined4 *)(pFVar11 + 0x28) = local_3a0;
        pFVar11[0x2c] = local_39c;
        *(undefined8 *)(pFVar11 + 0x30) = local_398;
        DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
        if (local_3b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b0.Data);
        }
        if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_128.CountFunctionName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.CountFunctionName.Data.AllocatorInstance.Data);
        }
      }
      uVar13 = uVar13 + 0x68;
      uVar15 = (ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < (this->AttributeBufferArray).InnerArray.ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d4420

UClass * __cdecl UOptimusAdvancedSkeletonDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusAdvancedSkeletonDataInterface",
               &Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusAdvancedSkeletonDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusAdvancedSkeletonDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusAdvancedSkeletonDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusAdvancedSkeletonDataInterface.InnerSingleton;
}

// GetPropertyPinDefinitions @ 14e1d9fd0

/* WARNING: Removing unreachable block (ram,0x00014e1da1b1) */

TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusAdvancedSkeletonDataInterface::GetPropertyPinDefinitions
          (UOptimusAdvancedSkeletonDataInterface *this,
          TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FOptimusDataTypeRegistry *pFVar4;
  FFieldClass *pFVar5;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar6;
  FName *pFVar7;
  TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *pTVar8;
  FOptimusDataType *pFVar9;
  FOptimusDataType *pFVar10;
  FName FVar11;
  FName local_res10;
  TSharedPtr<FOptimusDataType_const_,1> local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  FName local_68;
  undefined1 local_60 [8];
  FName local_58;
  FName local_50;
  FName FStack_48;
  FUtf8String local_40;
  
  pFVar10 = (FOptimusDataType *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar4 = FOptimusDataTypeRegistry::Get();
  pFVar5 = FNameProperty::StaticClass();
  pTVar6 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar4->RegisteredTypes,pFVar5->Name);
  pFVar9 = (FOptimusDataType *)&pTVar6->field_0x10;
  if (pTVar6 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    pFVar9 = pFVar10;
  }
  if (pFVar9 == (FOptimusDataType *)0x0) {
    local_70 = 0;
    local_78 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FVar11 = (FName)pFVar10;
  }
  else {
    FVar11 = pFVar9->TypeName;
    pFVar10 = (FOptimusDataType *)(pFVar9->DisplayName).TextData.Reference;
    if (pFVar10 != (FOptimusDataType *)0x0) {
      LOCK();
      *(int *)&(pFVar10->DisplayName).TextData.Reference =
           *(int *)&(pFVar10->DisplayName).TextData.Reference + 1;
      UNLOCK();
    }
    local_80 = 0;
    local_88 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  pFVar7 = ::FName::FName(&local_res10,0x11,L"SkinWeightProfile",FNAME_Add);
  local_68 = *pFVar7;
  if (pFVar10 != (FOptimusDataType *)0x0) {
    LOCK();
    *(int *)&(pFVar10->DisplayName).TextData.Reference =
         *(int *)&(pFVar10->DisplayName).TextData.Reference + 1;
    UNLOCK();
  }
  local_60._0_4_ = 0;
  local_60._4_4_ = 0;
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FStack_48.ComparisonIndex.Value = 0;
  FStack_48.Number = 0;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FUtf8String::Reset(&local_40,0);
  if (pFVar10 != (FOptimusDataType *)0x0) {
    LOCK();
    *(int *)&(pFVar10->DisplayName).TextData.Reference =
         *(int *)&(pFVar10->DisplayName).TextData.Reference + 1;
    UNLOCK();
  }
  local_98.Object = (FOptimusDataType *)FVar11;
  local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_60,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  pFVar7 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar7 <= &local_68) &&
      (&local_68 < pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 7)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar8;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x38);
  *pFVar7 = local_68;
  pFVar7[1].ComparisonIndex = (FNameEntryId)local_60._0_4_;
  pFVar7[1].Number = local_60._4_4_;
  pFVar7[2] = local_58;
  pFVar7[3] = local_50;
  pFVar7[4] = FStack_48;
  pFVar7[5].ComparisonIndex = 0;
  pFVar7[5].Number = 0;
  pFVar7[5] = (FName)local_40.Data.AllocatorInstance.Data;
  pFVar7[6].ComparisonIndex.Value = local_40.Data.ArrayNum;
  pFVar7[6].Number = local_40.Data.ArrayMax;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return __return_storage_ptr__;
}

// GetRequiredComponentClass @ 14e1df750

TSubclassOf<UActorComponent> __thiscall
UOptimusAdvancedSkeletonDataInterface::GetRequiredComponentClass
          (UOptimusAdvancedSkeletonDataInterface *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetShaderHash @ 14e1e05b0

void __thiscall
UOptimusAdvancedSkeletonDataInterface::GetShaderHash
          (UOptimusAdvancedSkeletonDataInterface *this,FString *param_1)

{
  return;
}

// GetShaderParameters @ 14e1e0bd0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusAdvancedSkeletonDataInterface::GetShaderParameters
          (UOptimusAdvancedSkeletonDataInterface *this,wchar_t *param_1,
          FShaderParametersMetadataBuilder *param_2,FShaderParametersMetadataAllocations *param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FOptimusDataType *pFVar4;
  FShaderValueTypeHandle FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar9;
  code *pcVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  FShaderValueTypeHandle local_res8;
  wchar_t *local_res10;
  FShaderParametersMetadata *local_88;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_80;
  undefined1 local_70 [32];
  FShaderParametersMetadataBuilder local_50;
  
  uVar13 = 0;
  local_50.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Members.ArrayNum = 0;
  local_50.Members.ArrayMax = 0;
  local_50.NextMemberOffset = 0;
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAdvancedSkeletonDataInterfaceDefaultParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAdvancedSkeletonDataInterfaceDefaultParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     FVar5.ValueTypePtr = local_res8.ValueTypePtr,
     `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAdvancedSkeletonDataInterfaceDefaultParameters::FTypeInfo::GetStructMetadata(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pcVar10 = FAdvancedSkeletonDataInterfaceDefaultParameters::zzAppendMemberGetPrev;
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    do {
      pcVar10 = (code *)(*pcVar10)((ulonglong)FVar5.ValueTypePtr & 0xff,&local_80);
    } while (pcVar10 != (code *)0x0);
    AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
              ((FMember *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
    FShaderParametersMetadata::FShaderParametersMetadata
              (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAdvancedSkeletonDataInterfaceDefaultParameters::FTypeInfo::GetStructMetadata(void)'
                ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
               L"FAdvancedSkeletonDataInterfaceDefaultParameters",
               L"FAdvancedSkeletonDataInterfaceDefaultParameters",(wchar_t *)0x0,(wchar_t *)0x0,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAdvancedSkeleton.cpp"
               ,0x17b,0x30,&local_80,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
    if ((FMember *)local_80.AllocatorInstance.Data != (FMember *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
    atexit(`FAdvancedSkeletonDataInterfaceDefaultParameters::FTypeInfo::GetStructMetadata'::__l2::
           _dynamic_atexit_destructor_for__StaticStructMetadata__);
    _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAdvancedSkeletonDataInterfaceDefaultParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FShaderParametersMetadataBuilder::AddIncludedStruct
            (&local_50,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAdvancedSkeletonDataInterfaceDefaultParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,Float);
  local_70._0_8_ = (FScriptContainerElement *)0x0;
  local_70._8_4_ = 0;
  local_70._12_4_ = 0;
  uVar15 = uVar13;
  if (0 < (this->AttributeBufferArray).InnerArray.ArrayNum) {
    do {
      uVar14 = (uint)uVar13;
      uVar7 = 0;
      if ((int)uVar14 < (this->AttributeBufferArray).InnerArray.ArrayNum) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar3 = (this->AttributeBufferArray).InnerArray.AllocatorInstance.Data;
      pTVar9 = FOptimusDataTypeRef::Resolve
                         ((FOptimusDataTypeRef *)(pFVar3 + uVar15 + 0x10),
                          (TSharedPtr<FOptimusDataType_const_,1> *)(local_70 + 0x10));
      pFVar4 = pTVar9->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_70._24_8_);
      local_res8 = FShaderValueType::MakeDynamicArrayType(&pFVar4->ShaderValueType);
      if (*(int *)(pFVar3 + uVar15 + 0x58) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)(pFVar3 + uVar15 + 0x50);
      }
      ComputeFramework::AddParamForType
                (&local_50,pwVar11,&local_res8,
                 (TArray<FShaderParametersMetadata_*,TSizedDefaultAllocator<32>_> *)local_70);
      uVar13 = (ulonglong)(uVar14 + 1);
      param_1 = local_res10;
      uVar15 = uVar15 + 0x68;
    } while ((int)(uVar14 + 1) < (this->AttributeBufferArray).InnerArray.ArrayNum);
  }
  local_88 = FShaderParametersMetadataBuilder::Build
                       (&local_50,ShaderParameterStruct,L"AnimAttributeBuffers");
  pFVar3 = (param_3->ShaderParameterMetadatas).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 <
       pFVar3 + (longlong)(param_3->ShaderParameterMetadatas).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar8 = (param_3->ShaderParameterMetadatas).ArrayNum;
  piVar1 = &(param_3->ShaderParameterMetadatas).ArrayNum;
  piVar2 = &(param_3->ShaderParameterMetadatas).ArrayMax;
  if (iVar8 == (param_3->ShaderParameterMetadatas).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)param_3,piVar2);
  }
  *piVar1 = iVar8 + 1;
  *(FShaderParametersMetadata **)
   ((param_3->ShaderParameterMetadatas).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_88;
  if ((param_3 == (FShaderParametersMetadataAllocations *)local_70) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar6)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar12 = (longlong)(int)local_70._8_4_;
  if (local_70._8_4_ != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_70._8_4_,(ForAnyElementType *)param_3,piVar1,piVar2);
    memcpy((param_3->ShaderParameterMetadatas).AllocatorInstance.Data + (longlong)iVar8 * 8,
           (void *)local_70._0_8_,lVar12 << 3);
  }
  FShaderParametersMetadataBuilder::AddNestedStruct(param_2,param_1,local_88,Float);
  if ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_70._0_8_);
  }
  if (local_50.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Members.AllocatorInstance.Data);
  }
  return;
}

// GetSkinWeightProfilePropertyName @ 14e1e3cd0

FName __cdecl UOptimusAdvancedSkeletonDataInterface::GetSkinWeightProfilePropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0x11,L"SkinWeightProfile",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetSupportedInputs @ 14e1e4400

void __thiscall
UOptimusAdvancedSkeletonDataInterface::GetSupportedInputs
          (UOptimusAdvancedSkeletonDataInterface *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FOptimusDataType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  FShaderFunctionDefinition *pFVar8;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar9;
  longlong lVar10;
  uint uVar11;
  FString local_a8;
  TSharedPtr<FOptimusDataType_const_,1> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar8 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar8,1);
  pFVar7 = ::FString::FString(&local_88,L"ReadNumVertices");
  pFVar8 = FShaderFunctionDefinition::SetName(pFVar8,pFVar7);
  FShaderFunctionDefinition::AddReturnType(pFVar8,Uint,0,0);
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar8 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar8,1);
  pFVar7 = ::FString::FString(&local_78,L"ReadNumBones");
  pFVar8 = FShaderFunctionDefinition::SetName(pFVar8,pFVar7);
  pFVar8 = FShaderFunctionDefinition::AddReturnType(pFVar8,Uint,0,0);
  FShaderFunctionDefinition::AddParam(pFVar8,Uint,0,0,None);
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar8 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar8,1);
  pFVar7 = ::FString::FString(&local_68,L"ReadBoneMatrix");
  pFVar8 = FShaderFunctionDefinition::SetName(pFVar8,pFVar7);
  pFVar8 = FShaderFunctionDefinition::AddReturnType(pFVar8,Float,3,4);
  pFVar8 = FShaderFunctionDefinition::AddParam(pFVar8,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar8,Uint,0,0,None);
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar8 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar8,1);
  pFVar7 = ::FString::FString(&local_58,L"ReadBoneWeight");
  pFVar8 = FShaderFunctionDefinition::SetName(pFVar8,pFVar7);
  pFVar8 = FShaderFunctionDefinition::AddReturnType(pFVar8,Float,0,0);
  pFVar8 = FShaderFunctionDefinition::AddParam(pFVar8,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar8,Uint,0,0,None);
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar8 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar8,1);
  pFVar7 = ::FString::FString(&local_48,L"ReadWeightedBoneMatrix");
  pFVar8 = FShaderFunctionDefinition::SetName(pFVar8,pFVar7);
  pFVar8 = FShaderFunctionDefinition::AddReturnType(pFVar8,Float,3,4);
  FShaderFunctionDefinition::AddParam(pFVar8,Uint,0,0,None);
  if (this->bEnableLayeredSkinning != false) {
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar5 + 1;
    pFVar8 = (FShaderFunctionDefinition *)
             ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
    DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar8,1);
    pFVar7 = ::FString::FString(&local_38,L"ReadLayeredBoneMatrix");
    pFVar8 = FShaderFunctionDefinition::SetName(pFVar8,pFVar7);
    pFVar8 = FShaderFunctionDefinition::AddReturnType(pFVar8,Float,3,4);
    pFVar8 = FShaderFunctionDefinition::AddParam(pFVar8,Uint,0,0,None);
    FShaderFunctionDefinition::AddParam(pFVar8,Uint,0,0,None);
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar5 + 1;
    pFVar8 = (FShaderFunctionDefinition *)
             ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
    DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar8,1);
    pFVar7 = ::FString::FString(&local_28,L"ReadWeightedLayeredBoneMatrix");
    pFVar8 = FShaderFunctionDefinition::SetName(pFVar8,pFVar7);
    pFVar8 = FShaderFunctionDefinition::AddReturnType(pFVar8,Float,3,4);
    FShaderFunctionDefinition::AddParam(pFVar8,Uint,0,0,None);
  }
  uVar11 = 0;
  if (0 < (this->AttributeBufferArray).InnerArray.ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar11 < (this->AttributeBufferArray).InnerArray.ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = param_1->ArrayNum;
      pFVar1 = (this->AttributeBufferArray).InnerArray.AllocatorInstance.Data;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar5 + 1;
      pFVar8 = (FShaderFunctionDefinition *)
               ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
      DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar8,1);
      ::FString::PrintfImpl(&local_a8,L"Read%s");
      pFVar8 = FShaderFunctionDefinition::SetName(pFVar8,&local_a8);
      pTVar9 = FOptimusDataTypeRef::Resolve
                         ((FOptimusDataTypeRef *)(pFVar1 + lVar10 + 0x10),&local_98);
      pFVar2 = pTVar9->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      pFVar8 = FShaderFunctionDefinition::AddReturnType
                         (pFVar8,(pFVar2->ShaderValueType).ValueTypePtr);
      pFVar8 = FShaderFunctionDefinition::AddParam(pFVar8,Uint,0,0,None);
      FShaderFunctionDefinition::AddParam(pFVar8,Uint,0,0,None);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x68;
    } while ((int)uVar11 < (this->AttributeBufferArray).InnerArray.ArrayNum);
  }
  return;
}

// GetUnusedAttributeName @ 14e1e8630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UOptimusAdvancedSkeletonDataInterface::GetUnusedAttributeName
          (UOptimusAdvancedSkeletonDataInterface *this,FString *__return_storage_ptr__,int param_1,
          FString *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType this_00;
  FOptimusCDIPinDefinition *pFVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  FString local_d0;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> local_c0;
  undefined1 local_b0 [8];
  FString local_a8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  GetPinDefinitions_Internal(this,&local_c0,true,param_1);
  iVar3 = local_c0.ArrayNum;
  pFVar6 = (FOptimusCDIPinDefinition *)
           (local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 0x38);
  this_00.Data = local_c0.AllocatorInstance.Data;
  while( true ) {
    if (local_c0.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FOptimusCDIPinDefinition,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_d8);
    }
    if ((FOptimusCDIPinDefinition *)this_00.Data == pFVar6) break;
    pFVar4 = ::FName::ToString((FName *)this_00.Data,&local_a8);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              (&local_98,(FString *)local_b0,(bool *)pFVar4);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    this_00.Data = this_00.Data + 0x38;
  }
  ::FString::FString(__return_storage_ptr__,param_2);
  while( true ) {
    iVar3 = (__return_storage_ptr__->Data).ArrayNum;
    if (iVar3 == 0) {
      pwVar5 = L"";
      iVar3 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
      iVar3 = iVar3 + -1;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
    iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&local_98,uVar2,__return_storage_ptr__);
    if (iVar3 == -1) break;
    ::FString::PrintfImpl(&local_d0,L"%s_%d");
    if (__return_storage_ptr__ != &local_d0) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_d0.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_d0.Data.ArrayMax;
      local_d0.Data.ArrayNum = 0;
      local_d0.Data.ArrayMax = 0;
      local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FOptimusCDIPinDefinition,int>
            ((FOptimusCDIPinDefinition *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
  if ((FOptimusCDIPinDefinition *)local_c0.AllocatorInstance.Data != (FOptimusCDIPinDefinition *)0x0
     ) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return __return_storage_ptr__;
}

// Initialize @ 14e1ed130

void __thiscall
UOptimusAdvancedSkeletonDataInterface::Initialize(UOptimusAdvancedSkeletonDataInterface *this)

{
  return;
}

// OnDataTypeChanged @ 14e1f49b0

void __thiscall
UOptimusAdvancedSkeletonDataInterface::OnDataTypeChanged
          (UOptimusAdvancedSkeletonDataInterface *this,FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  undefined1 local_48 [48];
  
  iVar1 = (this->AttributeBufferArray).InnerArray.ArrayNum;
  pFVar3 = (this->AttributeBufferArray).InnerArray.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((this->AttributeBufferArray).InnerArray.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOptimusAnimAttributeBufferDescription,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*(FName *)(pFVar3 + 0x10) == param_1) {
      local_48._8_8_ = *(undefined8 *)(pFVar3 + 0x18);
      local_48._0_8_ = *(FName *)(pFVar3 + 0x10);
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_48 + 0x10),(FSoftObjectPath *)(pFVar3 + 0x20));
      FOptimusValueContainerStruct::SetType
                ((FOptimusValueContainerStruct *)(pFVar3 + 0x40),(FOptimusDataTypeRef *)local_48);
    }
    pFVar3 = pFVar3 + 0x68;
  }
  return;
}

// RegisterPropertyChangeDelegatesForOwningNode @ 14e207630

void __thiscall
UOptimusAdvancedSkeletonDataInterface::RegisterPropertyChangeDelegatesForOwningNode
          (UOptimusAdvancedSkeletonDataInterface *this,UOptimusNode *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UOptimusNode *local_res10;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  if (param_1 != (UOptimusNode *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPinDefinitionChangedDelegate,(FWriteAccessScope *)&local_48);
    local_30 = &(this->OnPinDefinitionChangedDelegate).field_0x8;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      puVar1[3] = 0;
      local_res10 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = UOptimusNode::_vcall__704__flat______;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPinDefinitionRenamedDelegate,(FWriteAccessScope *)&local_48);
    local_30 = &(this->OnPinDefinitionRenamedDelegate).field_0x8;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXVFName__0_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode____A6AXVFName__0_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      puVar1[3] = 0;
      local_res10 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = UOptimusNode::_vcall__712__flat______;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnDisplayNameChangedDelegate,(FWriteAccessScope *)&local_48);
    local_30 = &(this->OnDisplayNameChangedDelegate).field_0x8;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      puVar1[3] = 0;
      local_res10 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = UOptimusNode::_vcall__720__flat______;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  return;
}

// StaticRegisterNativesUOptimusAdvancedSkeletonDataInterface @ 14e225750

void __cdecl
UOptimusAdvancedSkeletonDataInterface::StaticRegisterNativesUOptimusAdvancedSkeletonDataInterface
          (void)

{
  return;
}

// UpdateAttributePinNamesAndHlslIds @ 14e22b490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UOptimusAdvancedSkeletonDataInterface::UpdateAttributePinNamesAndHlslIds
          (UOptimusAdvancedSkeletonDataInterface *this)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStack_1b8 [32];
  uint *local_198;
  uint *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166 [2];
  uint local_164;
  uint local_160;
  int local_15c;
  int local_158;
  int local_154;
  FScriptContainerElement *local_150;
  longlong *local_148;
  uint uStack_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  uint local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 local_e0;
  FSoftObjectPath local_d8;
  char local_b8;
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  iVar12 = (this->AttributeBufferArray).InnerArray.ArrayNum;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._8_4_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_164 = 0;
  uVar18 = 0;
  if (0 < iVar12) {
    do {
      uVar7 = local_164;
      iVar8 = (this->AttributeBufferArray).InnerArray.ArrayNum;
      uVar16 = uVar18;
      if ((int)local_164 < iVar8) {
        uVar16 = ~local_164 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_198 = (uint *)(longlong)(int)local_164;
        local_190 = (uint *)(longlong)iVar8;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar13 = (this->AttributeBufferArray).InnerArray.AllocatorInstance.Data +
                (longlong)(int)uVar7 * 0x68;
      if (*(int *)(pFVar13 + 8) == 0) {
        pwVar11 = L"";
        uVar7 = uVar18;
      }
      else {
        pwVar11 = *(wchar_t **)&pFVar13->field_0x0;
        uVar7 = *(int *)(pFVar13 + 8) - 1;
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar7,pwVar11);
      iVar8 = TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)local_88,uVar7,(FString *)pFVar13);
      if ((iVar8 == -1) || (lVar10 = local_88._0_8_ + (longlong)iVar8 * 0x28, lVar10 == 0)) {
        local_198 = (uint *)0x0;
        local_150 = pFVar13;
        TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_88,(uint)&local_15c,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar7
                   ,(bool *)&local_150);
        lVar10 = local_88._0_8_ + (longlong)local_15c * 0x28;
      }
      puVar14 = *(uint **)(lVar10 + 0x10);
      if ((puVar14 <= &local_164) && (&local_164 < puVar14 + *(int *)(lVar10 + 0x1c))) {
        local_180 = (longlong)*(int *)(lVar10 + 0x18);
        local_178 = 4;
        local_198 = &local_164;
        local_190 = puVar14;
        local_188 = (longlong)*(int *)(lVar10 + 0x1c);
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar8 = *(int *)(lVar10 + 0x18);
      if (iVar8 == *(int *)(lVar10 + 0x1c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(lVar10 + 0x10),(int *)(lVar10 + 0x1c));
      }
      *(int *)(lVar10 + 0x18) = iVar8 + 1;
      *(uint *)(((ForAnyElementType *)(lVar10 + 0x10))->Data + (longlong)iVar8 * 4) = local_164;
      local_164 = local_164 + 1;
    } while ((int)local_164 < iVar12);
  }
  uVar7 = local_60;
  uStack_13c = 1;
  uStack_12c = uVar18;
  local_128 = uVar18;
  if (local_60 != 0) {
    puVar14 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar14 = local_68;
    }
    uVar16 = *puVar14;
    uVar18 = 0;
    local_128 = 0;
    while (uVar16 == 0) {
      lVar10 = (longlong)(int)uVar18;
      local_128 = local_128 + 0x20;
      uVar18 = uVar18 + 1;
      uStack_12c = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_14e22b720;
      uVar16 = (puVar14 + 1)[lVar10];
    }
    uStack_13c = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_13c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_158 = (int)lVar10;
    uStack_12c = (local_128 - 1) + local_158;
    if ((int)local_60 < (int)uStack_12c) {
      uStack_12c = local_60;
    }
  }
LAB_14e22b720:
  iStack_120 = local_88._8_4_ - local_54;
  local_148 = (longlong *)local_88;
  local_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uStack_130 = 0xffffffff;
  TStack_110.CurrentBitIndex = uStack_12c;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  TStack_110._padding_ = CONCAT44(uStack_13c,uVar18);
  uVar16 = local_60 & 0xffffffe0;
  uStack_124 = local_94;
  iVar12 = (int)local_60 >> 5;
  TStack_110._28_4_ = local_94;
  TStack_110.BaseBitIndex = local_128;
  uStack_f0 = CONCAT44(uStack_11c,iStack_120);
  bVar9 = (byte)local_60;
  local_160 = local_60;
  uStack_140 = uVar18;
  local_118 = local_148;
  TStack_110.Array = local_138;
  if (((int)local_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar7 != local_60) {
    puVar14 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar14 = local_68;
    }
    uVar18 = -1 << (bVar9 & 0x1f) & puVar14[iVar12];
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      local_160 = local_60;
      uVar7 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14e22b830;
      uVar18 = (puVar14 + 1)[lVar10];
    }
    uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_154 = (int)lVar10;
    local_160 = local_154 + -1 + uVar16;
    uVar7 = local_160;
    if ((int)local_60 < (int)local_160) {
      local_160 = local_60;
      uVar7 = local_60;
    }
  }
LAB_14e22b830:
  do {
    plVar4 = local_118;
    if ((int)local_118[1] - *(int *)((longlong)local_118 + 0x34) != (int)uStack_f0) {
      local_168 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_168);
    }
    if (((TStack_110.CurrentBitIndex == uVar7) &&
        (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar4 == (longlong *)local_88)) {
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return;
    }
    bVar5 = false;
    lVar10 = *plVar4;
    puVar15 = *(uint **)(lVar10 + 0x10 + (longlong)TStack_110.CurrentBitIndex * 0x28);
    lVar10 = lVar10 + (longlong)TStack_110.CurrentBitIndex * 0x28;
    iVar12 = *(int *)(lVar10 + 0x18);
    local_b8 = '\0';
    puVar14 = puVar15 + iVar12;
    while( true ) {
      while( true ) {
        if (*(int *)(lVar10 + 0x18) != iVar12) {
          local_167 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_167);
        }
        if (puVar15 == puVar14) goto LAB_14e22b976;
        uVar18 = *puVar15;
        puVar17 = (uint *)(longlong)(int)uVar18;
        iVar8 = (this->AttributeBufferArray).InnerArray.ArrayNum;
        uVar7 = 0;
        if ((int)uVar18 < iVar8) {
          uVar7 = ~uVar18 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (local_198 = puVar17, local_190 = (uint *)(longlong)iVar8,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->AttributeBufferArray).InnerArray.AllocatorInstance.Data;
        pFVar13 = pFVar2 + (longlong)puVar17 * 0x68 + 0x10;
        if (local_b8 != '\0') break;
        if (pFVar13 == (FScriptContainerElement *)&local_e8) goto LAB_14e22b96a;
        local_e8 = *(longlong *)pFVar13;
        local_e0 = *(undefined8 *)(pFVar2 + (longlong)puVar17 * 0x68 + 0x18);
        FSoftObjectPath::FSoftObjectPath
                  (&local_d8,(FSoftObjectPath *)(pFVar2 + (longlong)puVar17 * 0x68 + 0x20));
        puVar15 = puVar15 + 1;
        local_b8 = '\x01';
      }
      if ((*(longlong *)pFVar13 != local_e8) ||
         (bVar6 = FSoftObjectPath::operator==
                            ((FSoftObjectPath *)(pFVar2 + (longlong)puVar17 * 0x68 + 0x20),&local_d8
                            ), !bVar6)) break;
LAB_14e22b96a:
      puVar15 = puVar15 + 1;
    }
    bVar5 = true;
LAB_14e22b976:
    puVar15 = *(uint **)(lVar10 + 0x10);
    iVar12 = *(int *)(lVar10 + 0x18);
    puVar14 = puVar15 + iVar12;
    while( true ) {
      if (*(int *)(lVar10 + 0x18) != iVar12) {
        local_166[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_166);
      }
      if (puVar15 == puVar14) break;
      uVar18 = *puVar15;
      iVar8 = (this->AttributeBufferArray).InnerArray.ArrayNum;
      uVar7 = 0;
      if ((int)uVar18 < iVar8) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (local_198 = (uint *)(longlong)(int)uVar18, local_190 = (uint *)(longlong)iVar8,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FOptimusAnimAttributeBufferDescription::UpdatePinNameAndHlslId
                ((FOptimusAnimAttributeBufferDescription *)
                 ((this->AttributeBufferArray).InnerArray.AllocatorInstance.Data +
                 (longlong)(int)uVar18 * 0x68),bVar5);
      puVar15 = puVar15 + 1;
    }
    if ((local_b8 != '\0') &&
       (local_d8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_d8.SubPathString.Data.AllocatorInstance.Data);
    }
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
    uVar7 = local_160;
  } while( true );
}

