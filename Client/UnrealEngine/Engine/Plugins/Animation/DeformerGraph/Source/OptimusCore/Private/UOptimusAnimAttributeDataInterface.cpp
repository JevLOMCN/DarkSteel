// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 26

// StaticClass @ 14e10e710

UClass * __cdecl UOptimusAnimAttributeDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusAnimAttributeDataInterface",
               &Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusAnimAttributeDataInterface,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusAnimAttributeDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusAnimAttributeDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface.InnerSingleton;
}

// UOptimusAnimAttributeDataInterface @ 14e158460

UOptimusAnimAttributeDataInterface * __thiscall
UOptimusAnimAttributeDataInterface::UOptimusAnimAttributeDataInterface
          (UOptimusAnimAttributeDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusAnimAttributeDataInterface__6B_;
  (this->AttributeArray).InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeArray).InnerArray.ArrayNum = 0;
  (this->AttributeArray).InnerArray.ArrayMax = 0;
  *(undefined8 *)&this->OnPinDefinitionChangedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPinDefinitionRenamedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionRenamedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionRenamedDelegate).field_0x10 = 0;
  return this;
}

// UOptimusAnimAttributeDataInterface @ 14e1584b0

UOptimusAnimAttributeDataInterface * __thiscall
UOptimusAnimAttributeDataInterface::UOptimusAnimAttributeDataInterface
          (UOptimusAnimAttributeDataInterface *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,pFVar1);
  this->_padding_ = (longlong)&___7UOptimusAnimAttributeDataInterface__6B_;
  (this->AttributeArray).InnerArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeArray).InnerArray.ArrayNum = 0;
  (this->AttributeArray).InnerArray.ArrayMax = 0;
  *(undefined8 *)&this->OnPinDefinitionChangedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPinDefinitionRenamedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionRenamedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionRenamedDelegate).field_0x10 = 0;
  return this;
}

// ~UOptimusAnimAttributeDataInterface @ 14e162220

void __thiscall
UOptimusAnimAttributeDataInterface::~UOptimusAnimAttributeDataInterface
          (UOptimusAnimAttributeDataInterface *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusAnimAttributeDataInterface__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPinDefinitionRenamedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPinDefinitionChangedDelegate);
  DestructItems<FOptimusAnimAttributeDescription,int>
            ((FOptimusAnimAttributeDescription *)
             (this->AttributeArray).InnerArray.AllocatorInstance.Data,
             (this->AttributeArray).InnerArray.ArrayNum);
  pFVar1 = (this->AttributeArray).InnerArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// operator() @ 14e1674b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e1677c7) */

void __thiscall
`UOptimusAnimAttributeDataInterface::GetStructDeclarations'::__l2::<lambda_1>::operator()
          (void *this,FOptimusAnimAttributeArray *param_1)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FOptimusDataType *pFVar4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar10;
  FString *pFVar11;
  int iVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  FShaderValueTypeHandle *pFVar16;
  ForAnyElementType FVar17;
  FOptimusDataTypeRef *this_01;
  undefined1 auStackY_188 [32];
  undefined1 local_138;
  undefined1 local_137 [7];
  TArray<FShaderValueTypeHandle,TSizedDefaultAllocator<32>_> local_130;
  FString local_120;
  uint local_110;
  FName local_10c;
  FScriptContainerElement *local_100;
  FString local_f8;
  undefined1 local_e8 [16];
  FScriptContainerElement *local_d8;
  TSharedPtr<FOptimusDataType_const_,1> local_d0;
  TSharedPtr<FOptimusDataType_const_,1> local_c0;
  TSharedPtr<FOptimusDataType_const_,1> local_b0;
  FString local_a0;
  void *local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  void *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar15 = (param_1->InnerArray).AllocatorInstance.Data;
  local_110 = (param_1->InnerArray).ArrayNum;
  uVar13 = (ulonglong)(int)local_110;
  this_01 = (FOptimusDataTypeRef *)(pFVar15 + 0x18);
  local_d8 = pFVar15 + uVar13 * 0x78;
  local_e8._8_8_ = param_1;
  while( true ) {
    pFVar3 = local_d8;
    local_100 = pFVar15;
    if (((TArray<FOptimusAnimAttributeDescription,TSizedDefaultAllocator<32>_> *)local_e8._8_8_)->
        ArrayNum != (int)uVar13) {
      local_138 = 0;
      `TCheckedPointerIterator<FOptimusAnimAttributeDescription_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_138);
    }
    if (pFVar15 == pFVar3) break;
    pTVar10 = FOptimusDataTypeRef::Resolve(this_01,&local_d0);
    pFVar4 = pTVar10->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.SharedReferenceCount.ReferenceController);
    if (((pFVar4->ShaderValueType).ValueTypePtr)->Type == Struct) {
      pTVar10 = FOptimusDataTypeRef::Resolve(this_01,&local_c0);
      pFVar4 = pTVar10->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.SharedReferenceCount.ReferenceController);
      FShaderValueType::GetMemberStructTypes((pFVar4->ShaderValueType).ValueTypePtr,&local_130);
      pTVar10 = FOptimusDataTypeRef::Resolve(this_01,&local_b0);
      pFVar4 = pTVar10->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.SharedReferenceCount.ReferenceController);
      pFVar16 = &pFVar4->ShaderValueType;
      if (((local_130.AllocatorInstance.Data <= pFVar16) &&
          (pFVar16 < local_130.AllocatorInstance.Data + (longlong)local_130.ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_130.ArrayNum == local_130.ArrayMax) {
        local_130.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_130.AllocatorInstance,&local_130.ArrayMax);
      }
      uVar1 = local_130.ArrayNum + 1;
      *(FShaderValueType **)(local_130.AllocatorInstance.Data + (longlong)local_130.ArrayNum * 8) =
           pFVar16->ValueTypePtr;
      uVar13 = (ulonglong)(int)uVar1;
      pFVar3 = local_130.AllocatorInstance.Data + uVar13 * 8;
      FVar17.Data = local_130.AllocatorInstance.Data;
      local_130.ArrayNum = uVar1;
      while( true ) {
        if ((uint)uVar13 != uVar1) {
          local_137[0] = 0;
          `TCheckedPointerIterator<FShaderValueTypeHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_137);
        }
        pFVar15 = local_100;
        if (FVar17.Data == pFVar3) break;
        local_10c.ComparisonIndex.Value = 0;
        local_10c.Number = 0;
        FShaderValueType::ToString(*(FShaderValueType **)FVar17.Data,&local_f8,&local_10c);
        this_00 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)this;
        iVar9 = local_f8.Data.ArrayNum;
        FVar14.Data = (FScriptContainerElement *)L"";
        if (iVar9 != 0) {
          FVar14.Data = local_f8.Data.AllocatorInstance.Data;
        }
        iVar12 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar12 = 0;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar14.Data);
        iVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                FindIndexByHash<FString>(this_00,uVar8,&local_f8);
        if (iVar9 == -1) {
          pFVar5 = *(ForAnyElementType **)((longlong)this + 8);
          local_50 = 0;
          local_78.AllocatorInstance.InlineData[0] = '\0';
          local_78.AllocatorInstance.InlineData[1] = '\0';
          local_78.AllocatorInstance.InlineData[2] = '\0';
          local_78.AllocatorInstance.InlineData[3] = '\0';
          local_78.AllocatorInstance.InlineData[4] = '\0';
          local_78.AllocatorInstance.InlineData[5] = '\0';
          local_78.AllocatorInstance.InlineData[6] = '\0';
          local_78.AllocatorInstance.InlineData[7] = '\0';
          local_78.AllocatorInstance.InlineData[8] = '\0';
          local_78.AllocatorInstance.InlineData[9] = '\0';
          local_78.AllocatorInstance.InlineData[10] = '\0';
          local_78.AllocatorInstance.InlineData[0xb] = '\0';
          local_78.AllocatorInstance.InlineData[0xc] = '\0';
          local_78.AllocatorInstance.InlineData[0xd] = '\0';
          local_78.AllocatorInstance.InlineData[0xe] = '\0';
          local_78.AllocatorInstance.InlineData[0xf] = '\0';
          local_40 = 0;
          local_88 = (void *)0x0;
          local_80 = 0;
          local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_78.NumBits = 0;
          local_78.MaxBits = 0x80;
          local_54 = 0;
          local_48 = (void *)0x0;
          local_58 = iVar9;
          pFVar11 = FShaderValueType::GetTypeDeclaration
                              (*(FShaderValueType **)FVar17.Data,&local_a0,
                               (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                *)&local_88,false);
          ::FString::ConcatFC(&local_120,pFVar11,L";\n\n");
          if (((pFVar5->Data <= (FScriptContainerElement *)&local_120) &&
              ((FScriptContainerElement *)&local_120 <
               pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 0x10)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = *(int *)&pFVar5[1].Data;
          piVar2 = (int *)((longlong)&pFVar5[1].Data + 4);
          if (iVar9 == *piVar2) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,pFVar5,piVar2);
          }
          *(int *)&pFVar5[1].Data = iVar9 + 1;
          pFVar15 = pFVar5->Data + (longlong)iVar9 * 0x10;
          *(undefined8 *)pFVar15 = 0;
          *(FScriptContainerElement **)pFVar15 = local_120.Data.AllocatorInstance.Data;
          *(int *)(pFVar15 + 8) = local_120.Data.ArrayNum;
          *(int *)(pFVar15 + 0xc) = local_120.Data.ArrayMax;
          local_120.Data.ArrayNum = 0;
          local_120.Data.ArrayMax = 0;
          local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          local_40 = local_40 & 0xffffffff00000000;
          if (local_48 != (void *)0x0) {
            FMemory::Free(local_48);
          }
          uVar13 = local_80 >> 0x20;
          local_80 = local_80 & 0xffffffff00000000;
          if ((int)uVar13 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,0,(ForAnyElementType *)&local_88,0,(int *)((longlong)&local_80 + 4));
          }
          local_58 = 0xffffffff;
          local_54 = 0;
          local_78.NumBits = 0;
          if (0x80 < (uint)local_78.MaxBits) {
            local_78.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
          }
          if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
          }
          if (local_88 != (void *)0x0) {
            FMemory::Free(local_88);
          }
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (*(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)this,
                     (FString *)local_e8,(bool *)&local_f8);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        uVar13 = (ulonglong)(uint)local_130.ArrayNum;
        FVar17.Data = FVar17.Data + 8;
      }
      if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.AllocatorInstance.Data);
      }
    }
    pFVar15 = pFVar15 + 0x78;
    this_01 = (FOptimusDataTypeRef *)&this_01[2].TypeObject.SoftObjectPtr.field_0x10;
    uVar13 = (ulonglong)local_110;
  }
  return;
}

// AddAnimAttribute @ 14e173fa0

FOptimusAnimAttributeDescription * __thiscall
UOptimusAnimAttributeDataInterface::AddAnimAttribute
          (UOptimusAnimAttributeDataInterface *this,FString *param_1,FName param_2,
          FOptimusDataTypeRef *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FString *pFVar4;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar5;
  FOptimusDataTypeRef *pFVar6;
  wchar_t *pwVar7;
  FOptimusAnimAttributeDescription *this_00;
  FName local_res8;
  FString local_68;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  FOptimusDataTypeRef local_48;
  
  iVar3 = (this->AttributeArray).InnerArray.ArrayNum;
  piVar1 = &(this->AttributeArray).InnerArray.ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&this->AttributeArray,piVar1);
  }
  pFVar2 = (this->AttributeArray).InnerArray.AllocatorInstance.Data;
  (this->AttributeArray).InnerArray.ArrayNum = iVar3 + 1;
  this_00 = (FOptimusAnimAttributeDescription *)(pFVar2 + (longlong)iVar3 * 0x78);
  DefaultConstructItems<FOptimusAnimAttributeDescription,int>(this_00,1);
  pFVar4 = GetUnusedAttributeName(this,&local_68,param_1);
  ::FString::operator=((FString *)this_00,pFVar4);
  this_00->BoneName = param_2;
  (this_00->DataType).TypeName = param_3->TypeName;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&(this_00->DataType).TypeObject,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_3->TypeObject);
  pTVar5 = FOptimusDataTypeRef::Resolve(&this_00->DataType,&local_58);
  pFVar6 = FOptimusDataTypeRef::FOptimusDataTypeRef(&local_48,pTVar5);
  FOptimusValueContainerStruct::SetType(&this_00->DefaultValueStruct,pFVar6);
  ::FString::operator=(&this_00->HlslId,pFVar4);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar7);
  this_00->PinName = local_res8;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return this_00;
}

// CanPinDefinitionChange @ 14e181aa0

bool __thiscall
UOptimusAnimAttributeDataInterface::CanPinDefinitionChange(UOptimusAnimAttributeDataInterface *this)

{
  return true;
}

// CanSupportUnifiedDispatch @ 14e181ad0

bool __thiscall
UOptimusAnimAttributeDataInterface::CanSupportUnifiedDispatch
          (UOptimusAnimAttributeDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19c4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusAnimAttributeDataInterface::CreateDataProvider
          (UOptimusAnimAttributeDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
          ulong64 param_3)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UOptimusAnimAttributeDataProvider *this_00;
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
  pUVar3 = UOptimusAnimAttributeDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._8_8_ = pUVar2;
  this_00 = (UOptimusAnimAttributeDataProvider *)
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
      goto LAB_14e19c568;
    }
  }
  pUVar5 = (USkeletalMeshComponent *)0x0;
LAB_14e19c568:
  UOptimusAnimAttributeDataProvider::Init(this_00,pUVar5,&(this->AttributeArray).InnerArray);
  return (UComputeDataProvider *)this_00;
}

// GetClassName @ 14e1bcb20

wchar_t * __thiscall
UOptimusAnimAttributeDataInterface::GetClassName(UOptimusAnimAttributeDataInterface *this)

{
  return L"AnimAttribute";
}

// GetDisplayName @ 14e1c3fb0

FString * __thiscall
UOptimusAnimAttributeDataInterface::GetDisplayName
          (UOptimusAnimAttributeDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Animation Attributes");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e1c6130

void __thiscall
UOptimusAnimAttributeDataInterface::GetHLSL
          (UOptimusAnimAttributeDataInterface *this,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FOptimusDataType *pFVar3;
  void *_Src;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar8;
  ulonglong uVar9;
  longlong lVar10;
  FString *pFVar11;
  FString *pFVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 local_res20 [8];
  undefined1 local_158 [8];
  FString local_150;
  FString *local_140;
  ulonglong local_138;
  FString *local_130;
  ulonglong local_128;
  TArray<FString,TSizedDefaultAllocator<32>_> local_120;
  FString local_110;
  FName local_100;
  longlong local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  TSharedPtr<FOptimusDataType_const_,1> local_70;
  TSharedPtr<FOptimusDataType_const_,1> local_60;
  TSharedPtr<FOptimusDataType_const_,1> local_50;
  
  uVar15 = 0;
  if (0 < (this->AttributeArray).InnerArray.ArrayNum) {
    local_f8 = 0;
    do {
      lVar5 = local_f8;
      uVar7 = 0;
      if ((int)uVar15 < (this->AttributeArray).InnerArray.ArrayNum) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->AttributeArray).InnerArray.AllocatorInstance.Data;
      pTVar8 = FOptimusDataTypeRef::Resolve
                         ((FOptimusDataTypeRef *)(pFVar2 + lVar5 + 0x18),&local_70);
      pFVar3 = pTVar8->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
      local_100.ComparisonIndex.Value = 0;
      local_100.Number = 0;
      FShaderValueType::ToString((pFVar3->ShaderValueType).ValueTypePtr,&local_150,&local_100);
      pTVar8 = FOptimusDataTypeRef::Resolve
                         ((FOptimusDataTypeRef *)(pFVar2 + lVar5 + 0x18),&local_60);
      pFVar3 = pTVar8->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
      if (local_150.Data.ArrayNum < 2) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4068075417976701215>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAnimAttribute.cpp"
                           ,0x11f,"!TypeName.IsEmpty()");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (((pFVar3->ShaderValueType).ValueTypePtr)->Type == Struct) {
        local_110.Data.ArrayNum = *(int *)(pFVar2 + lVar5 + 0x60);
        lVar10 = (longlong)local_110.Data.ArrayNum;
        _Src = *(void **)(pFVar2 + lVar5 + 0x58);
        local_140 = (FString *)0x0;
        local_138 = 0;
        local_130 = (FString *)0x0;
        local_128 = 0;
        local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_110.Data.ArrayNum == 0) {
          local_110.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_110.Data.ArrayNum,0,(ForAnyElementType *)&local_110,
                     local_110.Data.ArrayNum,&local_110.Data.ArrayMax);
          memcpy(local_110.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
        }
        local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,1,0,&local_120.AllocatorInstance,1,&local_120.ArrayMax);
        ConstructItems<FString,FString,int>(local_120.AllocatorInstance.Data,&local_110,1);
        pTVar8 = FOptimusDataTypeRef::Resolve
                           ((FOptimusDataTypeRef *)(pFVar2 + lVar5 + 0x18),&local_50);
        pFVar3 = pTVar8->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50.SharedReferenceCount.ReferenceController);
        `UOptimusAnimAttributeDataInterface::GetHLSL'::__l14::FStructParser::WalkStruct
                  (&local_140,param_2,(pFVar3->ShaderValueType).ValueTypePtr,&local_120);
        DestructItems<FString,int>((FString *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
        if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.AllocatorInstance.Data);
        }
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        iVar13 = (int)local_138;
        uVar9 = (ulonglong)(int)local_138;
        pFVar12 = local_140 + uVar9;
        pFVar11 = local_140;
        while( true ) {
          if ((int)uVar9 != iVar13) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar11 == pFVar12) break;
          iVar1 = (pFVar11->Data).ArrayNum;
          iVar14 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar14 = 0;
          }
          ::FString::AppendChars(param_1,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar14);
          uVar9 = local_138 & 0xffffffff;
          pFVar11 = pFVar11 + 1;
        }
        ::FString::PrintfImpl(&local_d0,L"%s Read%s_%s()\n");
        iVar13 = local_d0.Data.ArrayNum + -1;
        if (local_d0.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar13);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_c0,L"{\n");
        iVar13 = local_c0.Data.ArrayNum + -1;
        if (local_c0.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_c0.Data.AllocatorInstance.Data,iVar13);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_b0,L"\t%s %s;\n");
        iVar13 = local_b0.Data.ArrayNum + -1;
        if (local_b0.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar13);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        iVar13 = (int)local_128;
        uVar9 = (ulonglong)(int)local_128;
        pFVar12 = local_130 + uVar9;
        pFVar11 = local_130;
        while( true ) {
          if ((int)uVar9 != iVar13) {
            local_158[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_158);
          }
          if (pFVar11 == pFVar12) break;
          ::FString::ConcatCF(&local_a0,L"\t",pFVar11);
          iVar14 = local_a0.Data.ArrayNum + -1;
          if (local_a0.Data.ArrayNum == 0) {
            iVar14 = 0;
          }
          ::FString::AppendChars(param_1,(wchar_t *)local_a0.Data.AllocatorInstance.Data,iVar14);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          uVar9 = local_128 & 0xffffffff;
          pFVar11 = pFVar11 + 1;
        }
        ::FString::PrintfImpl(&local_90,L"\treturn %s;\n");
        iVar13 = local_90.Data.ArrayNum + -1;
        if (local_90.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_90.Data.AllocatorInstance.Data,iVar13);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_80,L"}\n");
        iVar13 = local_80.Data.ArrayNum + -1;
        if (local_80.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_80.Data.AllocatorInstance.Data,iVar13);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>(local_130,(int)local_128);
        if (local_130 != (FString *)0x0) {
          FMemory::Free(local_130);
        }
        DestructItems<FString,int>(local_140,(int)local_138);
        if (local_140 != (FString *)0x0) {
          FMemory::Free(local_140);
        }
      }
      else {
        ::FString::PrintfImpl(&local_f0,L"%s %s_%s;\n");
        iVar13 = local_f0.Data.ArrayNum + -1;
        if (local_f0.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_f0.Data.AllocatorInstance.Data,iVar13);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_e0,L"%s Read%s_%s()\n{\n\treturn %s_%s;\n}\n");
        iVar13 = local_e0.Data.ArrayNum + -1;
        if (local_e0.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_e0.Data.AllocatorInstance.Data,iVar13);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      uVar15 = uVar15 + 1;
      local_f8 = local_f8 + 0x78;
    } while ((int)uVar15 < (this->AttributeArray).InnerArray.ArrayNum);
  }
  return;
}

// GetPinDefinitions @ 14e1cd500

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusAnimAttributeDataInterface::GetPinDefinitions
          (UOptimusAnimAttributeDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FString local_78;
  undefined8 local_68;
  FString local_60;
  void *local_50;
  undefined8 local_48;
  undefined4 local_40;
  FScriptContainerElement local_3c;
  undefined8 local_38;
  
  uVar8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar9 = uVar8;
  if (0 < (this->AttributeArray).InnerArray.ArrayNum) {
    do {
      uVar7 = (uint)uVar8;
      uVar3 = 0;
      if ((int)uVar7 < (this->AttributeArray).InnerArray.ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar5;
      }
      pFVar6 = (this->AttributeArray).InnerArray.AllocatorInstance.Data;
      ::FString::PrintfImpl(&local_78,L"Read%s");
      local_68 = *(undefined8 *)(pFVar6 + uVar9 + 0x68);
      ::FString::FString(&local_60,&local_78);
      local_50 = (void *)0x0;
      local_48 = 0;
      local_40 = 1;
      local_3c = (FScriptContainerElement)0x1;
      local_38 = 0;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 0x38)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x38;
      *(undefined8 *)pFVar6 = local_68;
      *(undefined8 *)(pFVar6 + 8) = 0;
      *(FScriptContainerElement **)(pFVar6 + 8) = local_60.Data.AllocatorInstance.Data;
      local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6 + 0x10) = local_60.Data.ArrayNum;
      *(int *)(pFVar6 + 0x14) = local_60.Data.ArrayMax;
      local_60.Data.ArrayNum = 0;
      local_60.Data.ArrayMax = 0;
      *(undefined8 *)(pFVar6 + 0x18) = 0;
      *(void **)(pFVar6 + 0x18) = local_50;
      local_50 = (void *)0x0;
      *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_48;
      *(undefined4 *)(pFVar6 + 0x24) = local_48._4_4_;
      local_48 = 0;
      *(undefined4 *)(pFVar6 + 0x28) = local_40;
      pFVar6[0x2c] = local_3c;
      *(undefined8 *)(pFVar6 + 0x30) = local_38;
      DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 0x78;
    } while ((int)(uVar7 + 1) < (this->AttributeArray).InnerArray.ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d4660

UClass * __cdecl UOptimusAnimAttributeDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusAnimAttributeDataInterface",
               &Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusAnimAttributeDataInterface,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusAnimAttributeDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusAnimAttributeDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e1df790

TSubclassOf<UActorComponent> __thiscall
UOptimusAnimAttributeDataInterface::GetRequiredComponentClass
          (UOptimusAnimAttributeDataInterface *this)

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

// GetShaderHash @ 14e1e05c0

void __thiscall
UOptimusAnimAttributeDataInterface::GetShaderHash
          (UOptimusAnimAttributeDataInterface *this,FString *param_1)

{
  return;
}

// GetShaderParameters @ 14e1e0f70

void __thiscall
UOptimusAnimAttributeDataInterface::GetShaderParameters
          (UOptimusAnimAttributeDataInterface *this,wchar_t *param_1,
          FShaderParametersMetadataBuilder *param_2,FShaderParametersMetadataAllocations *param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FOptimusDataType *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar10;
  wchar_t *pwVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  FShaderParametersMetadata *local_68;
  undefined1 local_60 [32];
  FShaderParametersMetadataBuilder local_40;
  
  uVar9 = 0;
  local_40.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Members.ArrayNum = 0;
  local_40.Members.ArrayMax = 0;
  local_40.NextMemberOffset = 0;
  local_60._0_8_ = (FScriptContainerElement *)0x0;
  local_60._8_4_ = 0;
  local_60._12_4_ = 0;
  uVar14 = uVar9;
  if (0 < (this->AttributeArray).InnerArray.ArrayNum) {
    do {
      uVar12 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar12 < (this->AttributeArray).InnerArray.ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->AttributeArray).InnerArray.AllocatorInstance.Data;
      pTVar10 = FOptimusDataTypeRef::Resolve
                          ((FOptimusDataTypeRef *)(pFVar3 + uVar14 + 0x18),
                           (TSharedPtr<FOptimusDataType_const_,1> *)(local_60 + 0x10));
      pFVar4 = pTVar10->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_60._24_8_);
      if (*(int *)(pFVar3 + uVar14 + 0x60) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)(pFVar3 + uVar14 + 0x58);
      }
      ComputeFramework::AddParamForType
                (&local_40,pwVar11,&pFVar4->ShaderValueType,
                 (TArray<FShaderParametersMetadata_*,TSizedDefaultAllocator<32>_> *)local_60);
      uVar9 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 0x78;
    } while ((int)(uVar12 + 1) < (this->AttributeArray).InnerArray.ArrayNum);
  }
  local_68 = FShaderParametersMetadataBuilder::Build
                       (&local_40,ShaderParameterStruct,L"UAnimAttributeDataInterface");
  pFVar3 = (param_3->ShaderParameterMetadatas).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar3 + (longlong)(param_3->ShaderParameterMetadatas).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
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
   ((param_3->ShaderParameterMetadatas).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_68;
  if ((param_3 == (FShaderParametersMetadataAllocations *)local_60) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar13 = (longlong)(int)local_60._8_4_;
  if (local_60._8_4_ != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_60._8_4_,(ForAnyElementType *)param_3,piVar1,piVar2);
    memcpy((param_3->ShaderParameterMetadatas).AllocatorInstance.Data + (longlong)iVar8 * 8,
           (void *)local_60._0_8_,lVar13 << 3);
  }
  FShaderParametersMetadataBuilder::AddNestedStruct(param_2,param_1,local_68,Float);
  if ((FScriptContainerElement *)local_60._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_60._0_8_);
  }
  if (local_40.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Members.AllocatorInstance.Data);
  }
  return;
}

// GetStructDeclarations @ 14e1e3f20

void __thiscall
UOptimusAnimAttributeDataInterface::GetStructDeclarations
          (UOptimusAnimAttributeDataInterface *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_18;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  `UOptimusAnimAttributeDataInterface::GetStructDeclarations'::__l2::<lambda_1>::operator()
            (&local_18,&this->AttributeArray);
  return;
}

// GetSupportedInputs @ 14e1e4950

void __thiscall
UOptimusAnimAttributeDataInterface::GetSupportedInputs
          (UOptimusAnimAttributeDataInterface *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FOptimusDataType *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FShaderFunctionDefinition *pFVar7;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar8;
  uint uVar9;
  longlong lVar10;
  FString local_38;
  TSharedPtr<FOptimusDataType_const_,1> local_28;
  
  uVar9 = 0;
  if (0 < (this->AttributeArray).InnerArray.ArrayNum) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->AttributeArray).InnerArray.ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      pFVar1 = (this->AttributeArray).InnerArray.AllocatorInstance.Data;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      pFVar7 = (FShaderFunctionDefinition *)
               ((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
      DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar7,1);
      ::FString::PrintfImpl(&local_38,L"Read%s");
      pFVar7 = FShaderFunctionDefinition::SetName(pFVar7,&local_38);
      pTVar8 = FOptimusDataTypeRef::Resolve
                         ((FOptimusDataTypeRef *)(pFVar1 + lVar10 + 0x18),&local_28);
      pFVar2 = pTVar8->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      FShaderFunctionDefinition::AddReturnType(pFVar7,(pFVar2->ShaderValueType).ValueTypePtr);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x78;
    } while ((int)uVar9 < (this->AttributeArray).InnerArray.ArrayNum);
  }
  return;
}

// GetUnusedAttributeName @ 14e1e8810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UOptimusAnimAttributeDataInterface::GetUnusedAttributeName
          (UOptimusAnimAttributeDataInterface *this,FString *__return_storage_ptr__,FString *param_1
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_f8 [32];
  FString local_c8;
  undefined1 local_b8 [8];
  FScriptContainerElement *local_b0 [3];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar11 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  uVar12 = uVar11;
  if (0 < (this->AttributeArray).InnerArray.ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar5 = 0;
      uVar4 = uVar5;
      if ((int)uVar10 < (this->AttributeArray).InnerArray.ArrayNum) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      pFVar9 = (this->AttributeArray).InnerArray.AllocatorInstance.Data + uVar12;
      if (*(int *)(pFVar9 + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)&pFVar9->field_0x0;
        uVar5 = *(int *)(pFVar9 + 8) - 1;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar5,pwVar8);
      iVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                          *)local_98,uVar5,(FString *)pFVar9);
      if ((iVar6 == -1) ||
         ((FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar6 * 0x20) ==
          (FScriptContainerElement *)0x0)) {
        local_b0[0] = pFVar9;
        TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
        EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                    *)local_98,(uint)local_b8,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar5,
                   (bool *)local_b0);
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 0x78;
    } while ((int)(uVar10 + 1) < (this->AttributeArray).InnerArray.ArrayNum);
  }
  ::FString::FString(__return_storage_ptr__,param_1);
  while( true ) {
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    iVar6 = 0;
    if (iVar1 == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
      iVar6 = iVar1 + -1;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
    iVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)local_98,uVar5,__return_storage_ptr__);
    if (iVar6 == -1) break;
    ::FString::PrintfImpl(&local_c8,L"%s_%d");
    if (__return_storage_ptr__ != &local_c8) {
      pFVar9 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_c8.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_c8.Data.ArrayMax;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  bVar3 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_64 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

// Initialize @ 14e1ed140

void __thiscall
UOptimusAnimAttributeDataInterface::Initialize(UOptimusAnimAttributeDataInterface *this)

{
  FOptimusDataTypeRegistry *pFVar1;
  FFieldClass *pFVar2;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar3;
  FOptimusDataType *pFVar4;
  FOptimusDataType *pFVar5;
  FName FVar6;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  FString local_48;
  undefined1 local_38 [32];
  FUtf8String local_18;
  
  pFVar5 = (FOptimusDataType *)0x0;
  pFVar1 = FOptimusDataTypeRegistry::Get();
  pFVar2 = FFloatProperty::StaticClass();
  pTVar3 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar1->RegisteredTypes,pFVar2->Name);
  pFVar4 = (FOptimusDataType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    pFVar4 = pFVar5;
  }
  if (pFVar4 == (FOptimusDataType *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FVar6 = (FName)pFVar5;
  }
  else {
    FVar6 = pFVar4->TypeName;
    pFVar5 = (FOptimusDataType *)(pFVar4->DisplayName).TextData.Reference;
    if (pFVar5 != (FOptimusDataType *)0x0) {
      LOCK();
      *(int *)&(pFVar5->DisplayName).TextData.Reference =
           *(int *)&(pFVar5->DisplayName).TextData.Reference + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_38._8_8_ = 0;
  local_38._24_8_ = 0;
  local_38._16_8_ = 0;
  FUtf8String::Reset(&local_18,0);
  if (pFVar5 != (FOptimusDataType *)0x0) {
    LOCK();
    *(int *)&(pFVar5->DisplayName).TextData.Reference =
         *(int *)&(pFVar5->DisplayName).TextData.Reference + 1;
    UNLOCK();
  }
  local_58.Object = (FOptimusDataType *)FVar6;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
  FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_38,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  ::FString::FString(&local_48,L"EmptyName");
  AddAnimAttribute(this,&local_48,(FName)0x0,(FOptimusDataTypeRef *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnDataTypeChanged @ 14e1f4a50

void __thiscall
UOptimusAnimAttributeDataInterface::OnDataTypeChanged
          (UOptimusAnimAttributeDataInterface *this,FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  undefined1 local_48 [48];
  
  iVar1 = (this->AttributeArray).InnerArray.ArrayNum;
  pFVar3 = (this->AttributeArray).InnerArray.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->AttributeArray).InnerArray.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOptimusAnimAttributeDescription,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*(FName *)(pFVar3 + 0x18) == param_1) {
      local_48._8_8_ = *(undefined8 *)(pFVar3 + 0x20);
      local_48._0_8_ = *(FName *)(pFVar3 + 0x18);
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_48 + 0x10),(FSoftObjectPath *)(pFVar3 + 0x28));
      FOptimusValueContainerStruct::SetType
                ((FOptimusValueContainerStruct *)(pFVar3 + 0x48),(FOptimusDataTypeRef *)local_48);
    }
    pFVar3 = pFVar3 + 0x78;
  }
  return;
}

// PostLoad @ 14e1facb0

void __thiscall
UOptimusAnimAttributeDataInterface::PostLoad(UOptimusAnimAttributeDataInterface *this)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  int iVar3;
  FInstancedStruct *pFVar4;
  FScriptContainerElement *pFVar5;
  FInstancedStruct *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  FGuid local_38;
  
  UObject::PostLoad((UObject *)this);
  local_38 = FOptimusObjectVersion::GUID;
  iVar3 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_38);
  if (iVar3 < 10) {
    pFVar5 = (this->AttributeArray).InnerArray.AllocatorInstance.Data;
    iVar3 = (this->AttributeArray).InnerArray.ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar3 * 0x78;
    while( true ) {
      if ((this->AttributeArray).InnerArray.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FOptimusAnimAttributeDescription,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar5 == pFVar6) break;
      if (*(UObject **)(pFVar5 + 0x70) != (UObject *)0x0) {
        UObject::ConditionalPostLoad(*(UObject **)(pFVar5 + 0x70));
      }
      pFVar5 = pFVar5 + 0x78;
    }
    pFVar5 = (this->AttributeArray).InnerArray.AllocatorInstance.Data;
    iVar3 = (this->AttributeArray).InnerArray.ArrayNum;
    this_00 = (FInstancedStruct *)(pFVar5 + 0x48);
    pFVar6 = pFVar5 + (longlong)iVar3 * 0x78;
    while( true ) {
      if ((this->AttributeArray).InnerArray.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FOptimusAnimAttributeDescription,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar5 == pFVar6) break;
      if ((UOptimusValueContainer *)this_00[2].StructMemory != (UOptimusValueContainer *)0x0) {
        pFVar4 = (FInstancedStruct *)
                 UOptimusValueContainer::MakeValueContainerStruct
                           ((UOptimusValueContainer *)this_00[2].StructMemory,
                            (FOptimusValueContainerStruct *)&local_38);
        if (this_00 != pFVar4) {
          FInstancedStruct::Reset(this_00);
          puVar1 = pFVar4->StructMemory;
          pUVar2 = (((FInstancedPropertyBag *)&pFVar4->ScriptStruct)->Value).ScriptStruct.field0_0x0
                   .DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          (this_00->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
          this_00->StructMemory = puVar1;
          (((FInstancedPropertyBag *)&pFVar4->ScriptStruct)->Value).ScriptStruct.field0_0x0.DebugPtr
               = (UScriptStruct *)0x0;
          pFVar4->StructMemory = (uchar *)0x0;
        }
        FInstancedStruct::Reset((FInstancedStruct *)&local_38);
        this_00[2].StructMemory = (uchar *)0x0;
      }
      pFVar5 = pFVar5 + 0x78;
      this_00 = (FInstancedStruct *)&this_00[7].StructMemory;
    }
  }
  return;
}

// RegisterPropertyChangeDelegatesForOwningNode @ 14e207860

void __thiscall
UOptimusAnimAttributeDataInterface::RegisterPropertyChangeDelegatesForOwningNode
          (UOptimusAnimAttributeDataInterface *this,UOptimusNode *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UOptimusNode *local_res10;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  if (param_1 != (UOptimusNode *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPinDefinitionChangedDelegate,(FWriteAccessScope *)&local_38);
    local_20 = &(this->OnPinDefinitionChangedDelegate).field_0x8;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_20);
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
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPinDefinitionRenamedDelegate,(FWriteAccessScope *)&local_38);
    local_20 = &(this->OnPinDefinitionRenamedDelegate).field_0x8;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_20);
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
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// StaticRegisterNativesUOptimusAnimAttributeDataInterface @ 14e225780

void __cdecl
UOptimusAnimAttributeDataInterface::StaticRegisterNativesUOptimusAnimAttributeDataInterface(void)

{
  return;
}

// UpdateAttributePinNamesAndHlslIds @ 14e22ba90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e22bfd3) */
/* WARNING: Removing unreachable block (ram,0x00014e22bff8) */

void __thiscall
UOptimusAnimAttributeDataInterface::UpdateAttributePinNamesAndHlslIds
          (UOptimusAnimAttributeDataInterface *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  UOptimusAnimAttributeDataInterface *pUVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FString *pFVar11;
  byte bVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  undefined8 *puVar20;
  FOptimusAnimAttributeDescription *this_00;
  FString *pFVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStack_1f8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6 [2];
  uint local_1a4;
  uint local_1a0;
  longlong local_198;
  int local_190 [2];
  UOptimusAnimAttributeDataInterface *local_188;
  undefined8 *local_180;
  int local_178;
  int local_174;
  FScriptContainerElement *local_170;
  FName local_168;
  longlong *local_160;
  uint uStack_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  undefined4 uStack_148;
  uint uStack_144;
  uint local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  longlong local_100;
  undefined8 local_f8;
  FSoftObjectPath local_f0;
  char local_d0;
  FString local_c8;
  FString local_b8 [2];
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  iVar15 = (this->AttributeArray).InnerArray.ArrayNum;
  local_88._0_8_ = 0;
  local_88._8_4_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_1a4 = 0;
  uVar22 = 0;
  local_188 = this;
  if (0 < iVar15) {
    do {
      uVar9 = local_1a4;
      uVar18 = uVar22;
      if ((int)local_1a4 < (this->AttributeArray).InnerArray.ArrayNum) {
        uVar18 = ~local_1a4 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (this->AttributeArray).InnerArray.AllocatorInstance.Data +
                (longlong)(int)uVar9 * 0x78;
      if (*(int *)(pFVar16 + 8) == 0) {
        pwVar14 = L"";
        uVar9 = uVar22;
      }
      else {
        pwVar14 = *(wchar_t **)&pFVar16->field_0x0;
        uVar9 = *(int *)(pFVar16 + 8) - 1;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar9,pwVar14);
      iVar10 = TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                           *)local_88,uVar9,(FString *)pFVar16);
      if ((iVar10 == -1) || (lVar13 = local_88._0_8_ + (longlong)iVar10 * 0x28, lVar13 == 0)) {
        local_170 = pFVar16;
        TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_88,(uint)local_190,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar9,
                   (bool *)&local_170);
        lVar13 = local_88._0_8_ + (longlong)local_190[0] * 0x28;
      }
      if (((*(uint **)(lVar13 + 0x10) <= &local_1a4) &&
          (&local_1a4 < *(uint **)(lVar13 + 0x10) + *(int *)(lVar13 + 0x1c))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = *(int *)(lVar13 + 0x18);
      if (iVar10 == *(int *)(lVar13 + 0x1c)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(lVar13 + 0x10),(int *)(lVar13 + 0x1c));
      }
      *(int *)(lVar13 + 0x18) = iVar10 + 1;
      *(uint *)(((ForAnyElementType *)(lVar13 + 0x10))->Data + (longlong)iVar10 * 4) = local_1a4;
      local_1a4 = local_1a4 + 1;
    } while ((int)local_1a4 < iVar15);
  }
  uVar9 = local_60;
  uStack_154 = 1;
  uStack_144 = uVar22;
  local_140 = uVar22;
  if (local_60 != 0) {
    puVar17 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar17 = local_68;
    }
    uVar18 = *puVar17;
    uVar22 = 0;
    local_140 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)(int)uVar22;
      local_140 = local_140 + 0x20;
      uVar22 = uVar22 + 1;
      uStack_144 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
      goto LAB_14e22bd50;
      uVar18 = (puVar17 + 1)[lVar13];
    }
    uStack_154 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uStack_154 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_178 = (int)lVar13;
    uStack_144 = (local_140 - 1) + local_178;
    if ((int)local_60 < (int)uStack_144) {
      uStack_144 = local_60;
    }
  }
LAB_14e22bd50:
  iStack_138 = local_88._8_4_ - local_54;
  local_160 = (longlong *)local_88;
  local_150 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  TStack_128._padding_ = CONCAT44(uStack_154,uVar22);
  uStack_148 = 0xffffffff;
  TStack_128.CurrentBitIndex = uStack_144;
  TStack_128.UnvisitedBitMask = 0xffffffff;
  uVar18 = local_60 & 0xffffffe0;
  uStack_13c = local_8c;
  TStack_128._28_4_ = local_8c;
  TStack_128.BaseBitIndex = local_140;
  uStack_108 = CONCAT44(uStack_134,iStack_138);
  iVar15 = (int)local_60 >> 5;
  bVar12 = (byte)local_60;
  local_1a0 = local_60;
  uStack_158 = uVar22;
  local_130 = local_160;
  TStack_128.Array = local_150;
  if (((int)local_60 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar9 != local_60) {
    puVar17 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar17 = local_68;
    }
    uVar22 = -1 << (bVar12 & 0x1f) & puVar17[iVar15];
    while (uVar22 == 0) {
      lVar13 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      local_1a0 = local_60;
      uVar9 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14e22be70;
      uVar22 = (puVar17 + 1)[lVar13];
    }
    uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_174 = (int)lVar13;
    local_1a0 = local_174 + -1 + uVar18;
    uVar9 = local_1a0;
    if ((int)local_60 < (int)local_1a0) {
      local_1a0 = local_60;
      uVar9 = local_60;
    }
  }
LAB_14e22be70:
  do {
    plVar6 = local_130;
    if ((int)local_130[1] - *(int *)((longlong)local_130 + 0x34) != (int)uStack_108) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    if (((TStack_128.CurrentBitIndex == uVar9) &&
        (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar6 == (longlong *)local_88)) {
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
    lVar3 = *plVar6;
    lVar13 = (longlong)TStack_128.CurrentBitIndex * 5 + 2;
    puVar19 = *(uint **)(lVar3 + lVar13 * 8);
    local_180 = (undefined8 *)(lVar3 + lVar13 * 8);
    iVar15 = *(int *)(local_180 + 1);
    bVar23 = false;
    bVar7 = false;
    local_198 = 0xffffffff;
    local_d0 = '\0';
    puVar17 = puVar19 + iVar15;
    lVar13 = local_198;
    while( true ) {
      puVar20 = local_180;
      if (*(int *)(local_180 + 1) != iVar15) {
        local_1a7 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1a7);
      }
      if (puVar19 == puVar17) break;
      uVar22 = *puVar19;
      uVar9 = 0;
      if ((int)uVar22 < (local_188->AttributeArray).InnerArray.ArrayNum) {
        uVar9 = ~uVar22 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (local_188->AttributeArray).InnerArray.AllocatorInstance.Data;
      if ((int)local_198 == -1) {
        if (((pFVar16 + (longlong)(int)uVar22 * 0x78 + 0x10 != (FScriptContainerElement *)&local_198
             ) && (lVar13 = *(longlong *)(pFVar16 + (longlong)(int)uVar22 * 0x78 + 0x10),
                  local_198 = lVar13, (int)lVar13 == -1)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (*(longlong *)(pFVar16 + (longlong)(int)uVar22 * 0x78 + 0x10) != lVar13) {
        bVar7 = true;
      }
      pFVar1 = pFVar16 + (longlong)(int)uVar22 * 0x78 + 0x18;
      if (local_d0 == '\0') {
        if (pFVar1 != (FScriptContainerElement *)&local_100) {
          local_100 = *(longlong *)pFVar1;
          local_f8 = *(undefined8 *)(pFVar16 + (longlong)(int)uVar22 * 0x78 + 0x20);
          FSoftObjectPath::FSoftObjectPath
                    (&local_f0,(FSoftObjectPath *)(pFVar16 + (longlong)(int)uVar22 * 0x78 + 0x28));
          local_d0 = '\x01';
        }
      }
      else if ((*(longlong *)pFVar1 != local_100) ||
              (bVar8 = FSoftObjectPath::operator==
                                 ((FSoftObjectPath *)(pFVar16 + (longlong)(int)uVar22 * 0x78 + 0x28)
                                  ,&local_f0), !bVar8)) {
        bVar23 = true;
      }
      if ((bVar7 != false) && (puVar20 = local_180, bVar23 != false)) break;
      puVar19 = puVar19 + 1;
    }
    puVar19 = (uint *)*puVar20;
    iVar15 = *(int *)(puVar20 + 1);
    puVar17 = puVar19 + iVar15;
    while( true ) {
      if (*(int *)(puVar20 + 1) != iVar15) {
        local_1a6[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1a6);
      }
      pUVar5 = local_188;
      if (puVar19 == puVar17) break;
      uVar22 = *puVar19;
      uVar9 = 0;
      if ((int)uVar22 < (local_188->AttributeArray).InnerArray.ArrayNum) {
        uVar9 = ~uVar22 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (FOptimusAnimAttributeDescription *)
                ((pUVar5->AttributeArray).InnerArray.AllocatorInstance.Data +
                (longlong)(int)uVar22 * 0x78);
      pFVar11 = FOptimusAnimAttributeDescription::GetFormattedId
                          (this_00,&local_c8,&PinNameDelimiter,bVar7,bVar23);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_168,pwVar14);
      this_00->PinName = local_168;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      pFVar11 = FOptimusAnimAttributeDescription::GetFormattedId
                          (this_00,local_b8,&HlslIdDelimiter,bVar7,bVar23);
      pFVar21 = &this_00->HlslId;
      if (pFVar21 != pFVar11) {
        pFVar16 = (pFVar21->Data).AllocatorInstance.Data;
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar16);
        }
        (pFVar21->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->HlslId).Data.ArrayNum = (pFVar11->Data).ArrayNum;
        (this_00->HlslId).Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8[0].Data.AllocatorInstance.Data);
      }
      puVar19 = puVar19 + 1;
      puVar20 = local_180;
    }
    if ((local_d0 != '\0') &&
       (local_f0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_f0.SubPathString.Data.AllocatorInstance.Data);
    }
    TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
    uVar9 = local_1a0;
  } while( true );
}

