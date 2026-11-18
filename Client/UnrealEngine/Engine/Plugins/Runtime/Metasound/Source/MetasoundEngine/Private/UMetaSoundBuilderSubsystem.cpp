// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 73

// StaticClass @ 14b2f8110

UClass * __cdecl UMetaSoundBuilderSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundBuilderSubsystem",
               &Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem.InnerSingleton,
               StaticRegisterNativesUMetaSoundBuilderSubsystem,0x80,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMetaSoundBuilderSubsystem>,
               InternalVTableHelperCtorCaller<UMetaSoundBuilderSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem.InnerSingleton;
}

// UMetaSoundBuilderSubsystem @ 14b34c360

UMetaSoundBuilderSubsystem * __thiscall
UMetaSoundBuilderSubsystem::UMetaSoundBuilderSubsystem
          (UMetaSoundBuilderSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMetaSoundBuilderSubsystem__6B_;
  *(undefined8 *)&this->NamedBuilders = 0;
  *(undefined8 *)&(this->NamedBuilders).field_0x8 = 0;
  *(undefined8 *)&(this->NamedBuilders).field_0x20 = 0;
  *(undefined4 *)&(this->NamedBuilders).field_0x28 = 0;
  *(undefined4 *)&(this->NamedBuilders).field_0x2c = 0x80;
  *(undefined4 *)&(this->NamedBuilders).field_0x34 = 0;
  *(undefined4 *)&(this->NamedBuilders).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NamedBuilders).field_0x40 = 0;
  *(undefined4 *)&(this->NamedBuilders).field_0x48 = 0;
  return this;
}

// UMetaSoundBuilderSubsystem @ 14b34c3b0

UMetaSoundBuilderSubsystem * __thiscall
UMetaSoundBuilderSubsystem::UMetaSoundBuilderSubsystem(UMetaSoundBuilderSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7UMetaSoundBuilderSubsystem__6B_;
  *(undefined8 *)&this->NamedBuilders = 0;
  *(undefined8 *)&(this->NamedBuilders).field_0x8 = 0;
  *(undefined8 *)&(this->NamedBuilders).field_0x20 = 0;
  *(undefined4 *)&(this->NamedBuilders).field_0x28 = 0;
  *(undefined4 *)&(this->NamedBuilders).field_0x2c = 0x80;
  *(undefined4 *)&(this->NamedBuilders).field_0x34 = 0;
  *(undefined4 *)&(this->NamedBuilders).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NamedBuilders).field_0x40 = 0;
  *(undefined4 *)&(this->NamedBuilders).field_0x48 = 0;
  return this;
}

// ~UMetaSoundBuilderSubsystem @ 14b3524a0

void __thiscall
UMetaSoundBuilderSubsystem::~UMetaSoundBuilderSubsystem(UMetaSoundBuilderSubsystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMetaSoundBuilderSubsystem__6B_;
  *(undefined4 *)&(this->NamedBuilders).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NamedBuilders).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NamedBuilders);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// operator() @ 14b35ccc0

/* WARNING: Enum "Type": Some values do not have unique names */

FMetaSoundBuilderNodeInputHandle * __thiscall
`UMetaSoundBuilderSubsystem::CreateSourceBuilder'::__l16::<lambda_1>::operator()
          (void *this,FMetaSoundBuilderNodeInputHandle *__return_storage_ptr__,
          FMetaSoundNodeHandle *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FMetaSoundBuilderNodeInputHandle *pFVar4;
  longlong lVar5;
  uint uVar6;
  EMetaSoundBuilderResult local_res8 [8];
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  UMetaSoundBuilderBase::FindNodeInputsByDataType
            (*(UMetaSoundBuilderBase **)this,&local_28,param_1,local_res8,(FName)0x0);
  if (local_28.ArrayNum == 0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  }
  else {
    uVar6 = 0;
    if ((int)(local_28.ArrayNum - 1U) < local_28.ArrayNum) {
      uVar6 = ~(local_28.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMetaSoundBuilderNodeInputHandle *)(*pcVar1)();
      return pFVar4;
    }
    lVar5 = (longlong)(local_28.ArrayNum + -1) * 0x20;
    uVar2 = *(undefined8 *)(local_28.AllocatorInstance.Data + lVar5 + 8);
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(local_28.AllocatorInstance.Data + lVar5)
    ;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar2;
    uVar2 = *(undefined8 *)(local_28.AllocatorInstance.Data + lVar5 + 0x10 + 8);
    *(undefined8 *)&__return_storage_ptr__->field_0x10 =
         *(undefined8 *)(local_28.AllocatorInstance.Data + lVar5 + 0x10);
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar2;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AttachBuilderToAssetChecked @ 14b365b60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

UMetaSoundBuilderBase * __thiscall
UMetaSoundBuilderSubsystem::AttachBuilderToAssetChecked
          (UMetaSoundBuilderSubsystem *this,UObject *param_1)

{
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UMetaSoundBuilderBase *pUVar4;
  UObject *pUVar5;
  FString local_18;
  
  this_00 = *(UClass **)&param_1->field_0x10;
  pUVar3 = UMetaSoundSource::StaticClass();
  if (this_00 == pUVar3) {
    CastChecked<UMetaSoundSource,UObject>(param_1);
    return (UMetaSoundBuilderBase *)0x0;
  }
  pUVar3 = UMetaSoundPatch::StaticClass();
  if (this_00 == pUVar3) {
    CastChecked<UMetaSoundPatch,UObject>(param_1);
    return (UMetaSoundBuilderBase *)0x0;
  }
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0,None);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                     ,0xa0,
                     L"UClass \'%s\' is not a base MetaSound that supports attachment via the MetaSoundBuilderSubsystem"
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UMetaSoundBuilderBase *)(*pcVar1)();
    return pUVar4;
  }
  pUVar5 = GetTransientPackageAsObject();
  pUVar4 = (UMetaSoundBuilderBase *)NewObject<UMetaSoundPatchBuilder>(pUVar5);
  return pUVar4;
}

// AttachPatchBuilderToAsset @ 14b365c30

UMetaSoundPatchBuilder * __thiscall
UMetaSoundBuilderSubsystem::AttachPatchBuilderToAsset
          (UMetaSoundBuilderSubsystem *this,UMetaSoundPatch *param_1)

{
  return (UMetaSoundPatchBuilder *)0x0;
}

// AttachSourceBuilderToAsset @ 14b365c40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

UMetaSoundSourceBuilder * __thiscall
UMetaSoundBuilderSubsystem::AttachSourceBuilderToAsset
          (UMetaSoundBuilderSubsystem *this,UMetaSoundSource *param_1)

{
  return (UMetaSoundSourceBuilder *)0x0;
}

// CreateBoolArrayMetaSoundLiteral @ 14b36cf70

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderSubsystem::CreateBoolArrayMetaSoundLiteral
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_1,FName *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     Metasound::TDataReferenceTypeInfo<TArray<bool,TSizedDefaultAllocator<32>_>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *param_2 = `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
             ::__l2::TypeName;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateBoolMetaSoundLiteral @ 14b36d0a0

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderSubsystem::CreateBoolMetaSoundLiteral
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          bool param_1,FName *param_2)

{
  FName *pFVar1;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<bool>();
  *param_2 = *pFVar1;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateFloatArrayMetaSoundLiteral @ 14b3738f0

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderSubsystem::CreateFloatArrayMetaSoundLiteral
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1,FName *param_2)

{
  FName *pFVar1;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  *param_2 = *pFVar1;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateFloatMetaSoundLiteral @ 14b3739c0

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderSubsystem::CreateFloatMetaSoundLiteral
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          float param_1,FName *param_2)

{
  FName *pFVar1;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  *param_2 = *pFVar1;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateIntArrayMetaSoundLiteral @ 14b373d50

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderSubsystem::CreateIntArrayMetaSoundLiteral
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,FName *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     Metasound::TDataReferenceTypeInfo<TArray<int,TSizedDefaultAllocator<32>_>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *param_2 = `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
             ::__l2::TypeName;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateIntMetaSoundLiteral @ 14b373e80

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderSubsystem::CreateIntMetaSoundLiteral
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          int param_1,FName *param_2)

{
  FName *pFVar1;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<int>();
  *param_2 = *pFVar1;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromParam @ 14b374c60

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderSubsystem::CreateMetaSoundLiteralFromParam
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          FAudioParameter *param_1)

{
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateObjectArrayMetaSoundLiteral @ 14b37b780

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderSubsystem::CreateObjectArrayMetaSoundLiteral
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateObjectMetaSoundLiteral @ 14b37b830

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderSubsystem::CreateObjectMetaSoundLiteral
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          UObject *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreatePatchBuilder @ 14b3891a0

UMetaSoundPatchBuilder * __thiscall
UMetaSoundBuilderSubsystem::CreatePatchBuilder
          (UMetaSoundBuilderSubsystem *this,FName param_1,EMetaSoundBuilderResult *param_2)

{
  FDocumentBuilderRegistry *this_00;
  UMetaSoundPatchBuilder *pUVar1;
  
  *param_2 = Succeeded;
  this_00 = (FDocumentBuilderRegistry *)Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
  pUVar1 = Metasound::Engine::FDocumentBuilderRegistry::
           CreateTransientBuilder<UMetaSoundPatchBuilder>(this_00,param_1);
  return pUVar1;
}

// CreatePatchPresetBuilder @ 14b38bd40

UMetaSoundPatchBuilder * __thiscall
UMetaSoundBuilderSubsystem::CreatePatchPresetBuilder
          (UMetaSoundBuilderSubsystem *this,FName param_1,
          TScriptInterface<IMetaSoundDocumentInterface> *param_2,EMetaSoundBuilderResult *param_3)

{
  FDocumentBuilderRegistry *this_00;
  UMetaSoundBuilderBase *this_01;
  
  if ((*(longlong *)param_2 != 0) && (*(longlong *)&param_2->field_0x8 != 0)) {
    this_00 = (FDocumentBuilderRegistry *)
              Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
    this_01 = (UMetaSoundBuilderBase *)
              Metasound::Engine::FDocumentBuilderRegistry::
              CreateTransientBuilder<UMetaSoundPatchBuilder>(this_00,param_1);
    UMetaSoundBuilderBase::ConvertToPreset(this_01,param_2,param_3);
    return (UMetaSoundPatchBuilder *)this_01;
  }
  *param_3 = Failed;
  return (UMetaSoundPatchBuilder *)0x0;
}

// CreatePresetBuilder @ 14b38bdc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMetaSoundBuilderBase * __thiscall
UMetaSoundBuilderSubsystem::CreatePresetBuilder
          (UMetaSoundBuilderSubsystem *this,FName param_1,
          TScriptInterface<IMetaSoundDocumentInterface> *param_2,EMetaSoundBuilderResult *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  UMetaSoundBuilderBase *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UMetaSoundSource *this_00;
  FDocumentBuilderRegistry *pFVar9;
  UMetaSoundSourceBuilder *pUVar10;
  longlong lVar11;
  IMetasoundUObjectRegistry *pIVar12;
  longlong *plVar13;
  TArrayView<FGuid_const_,int> *pTVar14;
  FMetasoundFrontendDocument *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  UMetaSoundPatch *this_01;
  longlong *plVar17;
  UObject *pUVar18;
  FDocumentModifyDelegates *pFVar19;
  atomic<int> *paVar20;
  TReferenceControllerBase<1> *pTVar21;
  undefined4 local_208 [2];
  FGuid *local_200;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0 [2];
  FGuid *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  UMetaSoundSource *local_178;
  void *local_170;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_168;
  UMetaSoundPatch *local_158;
  void *local_150;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_148;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_138;
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_128;
  FString local_118;
  TArrayView<FGuid_const_,int> local_108;
  TArrayView<FGuid_const_,int> local_f8;
  FMetaSoundFrontendDocumentBuilder local_e8;
  FMetaSoundFrontendDocumentBuilder local_88;
  
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  if (*(longlong *)param_2 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencedMetaSound.GetObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                       ,0x49c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar6 = (UMetaSoundBuilderBase *)(*pcVar4)();
      return pUVar6;
    }
    pTVar16 = pTVar21;
    if (*(longlong *)param_2 != 0) goto LAB_14b38be22;
  }
  else {
LAB_14b38be22:
    pTVar16 = *(TReferenceControllerBase<1> **)&param_2->field_0x8;
  }
  pUVar7 = (UClass *)(**(code **)(pTVar16->_padding_ + 0x20))();
  pUVar8 = UMetaSoundSource::StaticClass();
  if (pUVar7 == pUVar8) {
    this_00 = CastChecked<UMetaSoundSource,UObject>(*(UObject **)param_2);
    if (this_00 != (UMetaSoundSource *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      puVar2 = &this_00->field_0x4b8;
      if (puVar2 != (undefined1 *)0x0) {
        pFVar9 = (FDocumentBuilderRegistry *)
                 Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
        pUVar10 = Metasound::Engine::FDocumentBuilderRegistry::
                  CreateTransientBuilder<UMetaSoundSourceBuilder>(pFVar9,(FName)0x0);
        lVar11 = (**(code **)(*(longlong *)puVar2 + 8))(puVar2);
        if (lVar11 == 0) {
LAB_14b38bf14:
          lVar11 = (**(code **)(*(longlong *)puVar2 + 0x20))(puVar2);
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) +
               (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
            pIVar12 = Metasound::IMetasoundUObjectRegistry::Get();
            plVar13 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x50))(pIVar12,this_00);
            if (plVar13 != (longlong *)0x0) {
              local_208[0] = 0x10101;
              local_200 = (FGuid *)0x0;
              iStack_1f8 = 0;
              pTVar14 = UMetaSoundSettings::GetPageOrder(&local_108);
              local_200 = pTVar14->DataPtr;
              iStack_1f8 = pTVar14->ArrayNum;
              uStack_1f4 = *(undefined4 *)&pTVar14->field_0xc;
              (**(code **)(*plVar13 + 0x18))(plVar13,local_208);
            }
            local_138.Object = (FDocumentModifyDelegates *)0x0;
            local_138.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            local_178 = this_00;
            pUVar7 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
            local_170 = UObjectBaseUtility::GetInterfaceAddress
                                  ((UObjectBaseUtility *)this_00,pUVar7);
            FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
                      (&local_e8,(TScriptInterface<IMetaSoundDocumentInterface> *)&local_178,
                       &local_138,false);
            pFVar15 = (FMetasoundFrontendDocument *)
                      (**(code **)(*(longlong *)puVar2 + 0x18))(puVar2);
            pTVar16 = ::operator_new(0x2f0);
            if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
              pFVar19 = (FDocumentModifyDelegates *)&DAT_00000010;
            }
            else {
              pTVar16->SharedReferenceCount = (atomic<int>)0x1;
              pTVar16->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_UFDocumentModifyDelegates_Frontend_Metasound___00_SharedPointerInternals__6B_
              ;
              pTVar16->WeakReferenceCount = (atomic<int>)0x1;
              Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
                        ((FDocumentModifyDelegates *)(pTVar16 + 1),pFVar15);
              pFVar19 = (FDocumentModifyDelegates *)(pTVar16 + 1);
              pTVar21 = pTVar16;
              if (pFVar19 == (FDocumentModifyDelegates *)0x0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L"");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pUVar6 = (UMetaSoundBuilderBase *)(*pcVar4)();
                  return pUVar6;
                }
                goto LAB_14b38c0b9;
              }
            }
            if (((pFVar19->_padding_ == 0) || (*(longlong *)&pFVar19->_padding_ == 0)) ||
               (*(int *)(*(longlong *)&pFVar19->_padding_ + 8) < 1)) {
              paVar20 = (atomic<int> *)&pFVar19->_padding_;
              if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar21->SharedReferenceCount =
                     (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar19->_padding_ = (longlong)pFVar19;
              if (pTVar21 != *(TReferenceControllerBase<1> **)paVar20) {
                if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
                  UNLOCK();
                }
                plVar13 = *(longlong **)paVar20;
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar13 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
                *(TReferenceControllerBase<1> **)paVar20 = pTVar21;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar21);
            }
LAB_14b38c0b9:
            (**(code **)(pUVar10->_padding_ + 0x2e8))(pUVar10,pFVar19);
            if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_168.Object = pFVar19;
            local_168.SharedReferenceCount.ReferenceController = pTVar21;
            bVar5 = FMetaSoundFrontendDocumentBuilder::ConvertToPreset
                              ((FMetaSoundFrontendDocumentBuilder *)&pUVar10->_padding_,&local_e8,
                               &local_168);
            (**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10);
            *param_3 = !bVar5;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar21);
            FMetaSoundFrontendDocumentBuilder::~FMetaSoundFrontendDocumentBuilder(&local_e8);
            return (UMetaSoundBuilderBase *)pUVar10;
          }
          if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14b38c178;
          local_1d0 = (FName)pUVar10->_padding_;
          ::FName::ToString(&local_1d0,&local_1a8);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          local_1b8.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
        }
        else {
          pUVar7 = Z_Construct_UClass_UMetaSoundBuilderDocument_NoRegister();
          iVar3 = (int)pUVar7->_padding_;
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar7->_padding_)) goto LAB_14b38bf14;
          if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14b38c178;
          local_1d8 = (FName)pUVar10->_padding_;
          ::FName::ToString(&local_1d8,&local_1b8);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          *param_3 = Failed;
          return (UMetaSoundBuilderBase *)pUVar10;
        }
        goto LAB_14b38c178;
      }
    }
  }
  else {
    pUVar8 = UMetaSoundPatch::StaticClass();
    if (pUVar7 != pUVar8) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar7,&local_118,(UObject *)0x0,None);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                         ,0x4ab,L"UClass \'%s\' cannot be built to a MetaSound preset");
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        pUVar18 = GetTransientPackageAsObject();
        pUVar6 = (UMetaSoundBuilderBase *)NewObject<UMetaSoundPatchBuilder>(pUVar18);
        return pUVar6;
      }
      pcVar4 = (code *)swi(3);
      pUVar6 = (UMetaSoundBuilderBase *)(*pcVar4)();
      return pUVar6;
    }
    this_01 = CastChecked<UMetaSoundPatch,UObject>(*(UObject **)param_2);
    if (this_01 != (UMetaSoundPatch *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      plVar13 = &this_01->_padding_;
      if (plVar13 != (longlong *)0x0) {
        pFVar9 = (FDocumentBuilderRegistry *)
                 Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
        pUVar10 = (UMetaSoundSourceBuilder *)
                  Metasound::Engine::FDocumentBuilderRegistry::
                  CreateTransientBuilder<UMetaSoundPatchBuilder>(pFVar9,param_1);
        lVar11 = (**(code **)(*plVar13 + 8))(plVar13);
        if (lVar11 == 0) {
LAB_14b38c250:
          lVar11 = (**(code **)(*plVar13 + 0x20))(plVar13);
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(this_01->_padding_ + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(this_01->_padding_ + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30)) {
            pIVar12 = Metasound::IMetasoundUObjectRegistry::Get();
            plVar17 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x50))(pIVar12,this_01);
            if (plVar17 != (longlong *)0x0) {
              local_1f0[0] = 0x10101;
              local_1e8 = (FGuid *)0x0;
              iStack_1e0 = 0;
              pTVar14 = UMetaSoundSettings::GetPageOrder(&local_f8);
              local_1e8 = pTVar14->DataPtr;
              iStack_1e0 = pTVar14->ArrayNum;
              uStack_1dc = *(undefined4 *)&pTVar14->field_0xc;
              (**(code **)(*plVar17 + 0x18))(plVar17,local_1f0);
            }
            local_128.Object = (FDocumentModifyDelegates *)0x0;
            local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            local_158 = this_01;
            pUVar7 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
            local_150 = UObjectBaseUtility::GetInterfaceAddress
                                  ((UObjectBaseUtility *)this_01,pUVar7);
            FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
                      (&local_88,(TScriptInterface<IMetaSoundDocumentInterface> *)&local_158,
                       &local_128,false);
            pFVar15 = (FMetasoundFrontendDocument *)(**(code **)(*plVar13 + 0x18))(plVar13);
            pTVar16 = ::operator_new(0x2f0);
            if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
              pFVar19 = (FDocumentModifyDelegates *)&DAT_00000010;
            }
            else {
              pTVar16->SharedReferenceCount = (atomic<int>)0x1;
              pTVar16->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_UFDocumentModifyDelegates_Frontend_Metasound___00_SharedPointerInternals__6B_
              ;
              pTVar16->WeakReferenceCount = (atomic<int>)0x1;
              Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
                        ((FDocumentModifyDelegates *)(pTVar16 + 1),pFVar15);
              pFVar19 = (FDocumentModifyDelegates *)(pTVar16 + 1);
              pTVar21 = pTVar16;
              if (pFVar19 == (FDocumentModifyDelegates *)0x0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L"");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pUVar6 = (UMetaSoundBuilderBase *)(*pcVar4)();
                  return pUVar6;
                }
                goto LAB_14b38c3f9;
              }
            }
            if (((pFVar19->_padding_ == 0) || (*(longlong *)&pFVar19->_padding_ == 0)) ||
               (*(int *)(*(longlong *)&pFVar19->_padding_ + 8) < 1)) {
              paVar20 = (atomic<int> *)&pFVar19->_padding_;
              if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar21->SharedReferenceCount =
                     (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar19->_padding_ = (longlong)pFVar19;
              if (pTVar21 != *(TReferenceControllerBase<1> **)paVar20) {
                if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
                  UNLOCK();
                }
                plVar13 = *(longlong **)paVar20;
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar13 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
                *(TReferenceControllerBase<1> **)paVar20 = pTVar21;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar21);
            }
LAB_14b38c3f9:
            (**(code **)(pUVar10->_padding_ + 0x2e8))(pUVar10,pFVar19);
            if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_148.Object = pFVar19;
            local_148.SharedReferenceCount.ReferenceController = pTVar21;
            bVar5 = FMetaSoundFrontendDocumentBuilder::ConvertToPreset
                              ((FMetaSoundFrontendDocumentBuilder *)&pUVar10->_padding_,&local_88,
                               &local_148);
            (**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10);
            *param_3 = !bVar5;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar21);
            FMetaSoundFrontendDocumentBuilder::~FMetaSoundFrontendDocumentBuilder(&local_88);
            return (UMetaSoundBuilderBase *)pUVar10;
          }
          if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14b38c178;
          local_1c0 = (FName)pUVar10->_padding_;
          ::FName::ToString(&local_1c0,&local_188);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          local_198.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
        }
        else {
          pUVar7 = Z_Construct_UClass_UMetaSoundBuilderDocument_NoRegister();
          iVar3 = (int)pUVar7->_padding_;
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar7->_padding_)) goto LAB_14b38c250;
          if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14b38c178;
          local_1c8 = (FName)pUVar10->_padding_;
          ::FName::ToString(&local_1c8,&local_198);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
          *param_3 = Failed;
          return (UMetaSoundBuilderBase *)pUVar10;
        }
        goto LAB_14b38c178;
      }
    }
  }
  pUVar10 = (UMetaSoundSourceBuilder *)0x0;
LAB_14b38c178:
  *param_3 = Failed;
  return (UMetaSoundBuilderBase *)pUVar10;
}

// CreateSourceBuilder @ 14b38e080

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

UMetaSoundSourceBuilder * __thiscall
UMetaSoundBuilderSubsystem::CreateSourceBuilder
          (UMetaSoundBuilderSubsystem *this,FName param_1,FMetaSoundBuilderNodeOutputHandle *param_2
          ,FMetaSoundBuilderNodeInputHandle *param_3,
          TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *param_4,
          EMetaSoundBuilderResult *param_5,EMetaSoundOutputAudioFormat param_6,bool param_7)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FMetaSoundBuilderNodeInputHandle *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *pTVar8;
  EMetaSoundBuilderResult *pEVar9;
  bool bVar10;
  int iVar11;
  FDocumentBuilderRegistry *this_00;
  <lambda_1> this_01;
  TMap<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>
  *pTVar12;
  TTuple<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo> *pTVar13;
  TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> *pTVar14;
  UMetaSoundSourceBuilder *pUVar15;
  FMetasoundFrontendVersion *pFVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FName local_res10;
  FMetaSoundBuilderNodeOutputHandle *local_res18;
  FMetaSoundBuilderNodeInputHandle *local_res20;
  undefined3 in_stack_00000039;
  TArray<FMetaSoundBuilderNodeOutputHandle,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> local_1d8;
  undefined8 local_1c8;
  FName local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  FMetaSoundBuilderNodeOutputHandle local_170;
  FMetaSoundBuilderNodeInputHandle local_150;
  UMetaSoundSourceBuilder *local_128;
  FName *local_120;
  FMetaSoundBuilderNodeInputHandle local_118;
  FString local_f8;
  TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  FString local_c8;
  FMetaSoundNodeHandle local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FMetaSoundNodeHandle local_78;
  FString local_68;
  FString local_58;
  TArray<FMetaSoundNodeHandle,TSizedDefaultAllocator<32>_> local_48;
  
  pTVar8 = param_4;
  FVar18.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  piVar1 = &param_4->ArrayMax;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)&param_2->field_0x8 = 0;
  uStack_188 = 0;
  local_180 = 0;
  *(undefined8 *)&param_2->field_0x10 = 0;
  *(undefined8 *)&param_2->field_0x18 = 0;
  uStack_178 = 0;
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)&param_3->field_0x8 = 0;
  *(undefined8 *)&param_3->field_0x10 = 0;
  *(undefined8 *)&param_3->field_0x18 = 0;
  param_4->ArrayNum = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,&param_4->AllocatorInstance,0,piVar1);
  }
  this_00 = (FDocumentBuilderRegistry *)Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
  this_01.__this =
       Metasound::Engine::FDocumentBuilderRegistry::CreateTransientBuilder<UMetaSoundSourceBuilder>
                 (this_00,local_res10);
  pEVar9 = param_5;
  *param_5 = Succeeded;
  if ((param_6 == Mono) ||
     (UMetaSoundSourceBuilder::SetFormat(this_01.__this,param_6,param_5), *pEVar9 == Succeeded)) {
    _param_6 = 0;
    pTVar12 = Metasound::Engine::GetOutputAudioFormatInfo();
    pTVar13 = AlgoImpl::
              FindByPredicate<TMap<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>_const_&,_UMetaSoundSourceBuilder::FindOutputAudioFormatInfo_::__l2::<lambda_1>_>
                        (pTVar12,this_01);
    if (pTVar13 ==
        (TTuple<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo> *)0x0) {
      *pEVar9 = Failed;
    }
    else {
      FVar3.ComparisonIndex.Value = *(uint *)&pTVar13->field_0x8;
      FVar3.Number = *(uint *)&pTVar13->field_0xc;
      pTVar14 = UMetaSoundBuilderBase::FindInterfaceOutputNodes
                          ((UMetaSoundBuilderBase *)this_01.__this,&local_e8,FVar3,pEVar9);
      if (&local_48 != pTVar14) {
        FVar18.Data = (pTVar14->AllocatorInstance).Data;
        (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        _param_6 = pTVar14->ArrayNum;
        pTVar14->ArrayNum = 0;
        pTVar14->ArrayMax = 0;
      }
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (*pEVar9 == Succeeded) {
        lVar19 = (longlong)_param_6;
        local_120 = &local_res10;
        local_128 = this_01.__this;
        for (pFVar20 = FVar18.Data; pEVar9 = param_5, pFVar20 != FVar18.Data + lVar19 * 0x10;
            pFVar20 = pFVar20 + 0x10) {
          `UMetaSoundBuilderSubsystem::CreateSourceBuilder'::__l16::<lambda_1>::operator()
                    (&local_128,&local_118,(FMetaSoundNodeHandle *)pFVar20);
          pFVar4 = (FMetaSoundBuilderNodeInputHandle *)(pTVar8->AllocatorInstance).Data;
          if (((pFVar4 <= &local_118) && (&local_118 < pFVar4 + *piVar1)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            pUVar15 = (UMetaSoundSourceBuilder *)(*pcVar6)();
            return pUVar15;
          }
          iVar11 = pTVar8->ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x420,&pTVar8->AllocatorInstance,piVar1);
          }
          pTVar8->ArrayNum = iVar11 + 1;
          pFVar5 = (pTVar8->AllocatorInstance).Data;
          pFVar2 = pFVar5 + (longlong)iVar11 * 0x20;
          *(undefined8 *)pFVar2 = local_118._0_8_;
          *(undefined8 *)(pFVar2 + 8) = local_118._8_8_;
          pFVar5 = pFVar5 + (longlong)iVar11 * 0x20 + 0x10;
          *(undefined8 *)pFVar5 = local_118._16_8_;
          *(undefined8 *)(pFVar5 + 8) = local_118._24_8_;
        }
        if (FVar18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar18.Data);
        }
        local_170._0_8_ = 0;
        local_170._8_8_ = 0;
        local_170._16_8_ = 0;
        local_170._24_8_ = 0;
        param_4 = (TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *)0x0;
        UMetaSoundBuilderBase::FindGraphInputNode
                  ((UMetaSoundBuilderBase *)this_01.__this,&local_b8,
                   Metasound::Frontend::SourceInterface::Inputs::OnPlay,(FName *)&param_4,&local_170
                   ,pEVar9);
        if (*pEVar9 == Failed) {
          if ((byte)LogMetaSound._0_1_ < 2) {
            return (UMetaSoundSourceBuilder *)0x0;
          }
          pFVar16 = Metasound::Frontend::SourceInterface::GetVersion();
          FMetasoundFrontendVersion::ToString(pFVar16,&local_c8);
          ::FName::ToString(&local_res10,&local_d8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          FVar18.Data = local_c8.Data.AllocatorInstance.Data;
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            FVar18.Data = local_c8.Data.AllocatorInstance.Data;
          }
        }
        else {
          local_1c8 = 0;
          UMetaSoundBuilderBase::FindNodeOutputsByDataType
                    ((UMetaSoundBuilderBase *)this_01.__this,&local_1e8,&local_b8,pEVar9,(FName)0x0)
          ;
          if (*pEVar9 == Failed) {
            FVar18.Data = local_1e8.AllocatorInstance.Data;
            if (1 < (byte)LogMetaSound._0_1_) {
              ::FName::ToString(&local_res10,&local_a8);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              FVar18.Data = local_1e8.AllocatorInstance.Data;
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                FVar18.Data = local_1e8.AllocatorInstance.Data;
              }
            }
          }
          else {
            if ((local_1e8.ArrayNum == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!Outputs.IsEmpty()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                                    ,0x46d,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              pUVar15 = (UMetaSoundSourceBuilder *)(*pcVar6)();
              return pUVar15;
            }
            uVar17 = 0;
            if ((int)(local_1e8.ArrayNum - 1U) < local_1e8.ArrayNum) {
              uVar17 = ~(local_1e8.ArrayNum - 1U) >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pUVar15 = (UMetaSoundSourceBuilder *)(*pcVar6)();
              return pUVar15;
            }
            lVar19 = (longlong)(local_1e8.ArrayNum + -1) * 0x20;
            uVar7 = *(undefined8 *)(local_1e8.AllocatorInstance.Data + lVar19 + 8);
            *(undefined8 *)local_res18 = *(undefined8 *)(local_1e8.AllocatorInstance.Data + lVar19);
            *(undefined8 *)&local_res18->field_0x8 = uVar7;
            uVar7 = *(undefined8 *)(local_1e8.AllocatorInstance.Data + lVar19 + 0x10 + 8);
            *(undefined8 *)&local_res18->field_0x10 =
                 *(undefined8 *)(local_1e8.AllocatorInstance.Data + lVar19 + 0x10);
            *(undefined8 *)&local_res18->field_0x18 = uVar7;
            if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.AllocatorInstance.Data);
            }
            if (param_7 == false) {
              pFVar16 = Metasound::Frontend::SourceOneShotInterface::GetVersion();
              bVar10 = FMetaSoundFrontendDocumentBuilder::RemoveInterface
                                 ((FMetaSoundFrontendDocumentBuilder *)&(this_01.__this)->_padding_,
                                  pFVar16->Name);
              *pEVar9 = !bVar10;
              return this_01.__this;
            }
            local_150._0_8_ = 0;
            local_150._8_8_ = 0;
            local_150._16_8_ = 0;
            local_150._24_8_ = 0;
            local_1c0.ComparisonIndex.Value = 0;
            local_1c0.Number = 0;
            UMetaSoundBuilderBase::FindGraphOutputNode
                      ((UMetaSoundBuilderBase *)this_01.__this,&local_78,
                       Metasound::Frontend::SourceOneShotInterface::Outputs::OnFinished,&local_1c0,
                       &local_150,pEVar9);
            if ((*pEVar9 == Failed) && (1 < (byte)LogMetaSound._0_1_)) {
              pFVar16 = Metasound::Frontend::SourceOneShotInterface::GetVersion();
              FMetasoundFrontendVersion::ToString(pFVar16,&local_88);
              ::FName::ToString(&local_res10,&local_98);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
            local_1b8 = 0;
            UMetaSoundBuilderBase::FindNodeInputsByDataType
                      ((UMetaSoundBuilderBase *)this_01.__this,&local_1d8,&local_78,pEVar9,
                       (FName)0x0);
            if (*pEVar9 != Failed) {
              if ((local_1d8.ArrayNum == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!Inputs.IsEmpty()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                                      ,0x480,L""), bVar10)) {
                pcVar6 = (code *)swi(3);
                pUVar15 = (UMetaSoundSourceBuilder *)(*pcVar6)();
                return pUVar15;
              }
              uVar17 = 0;
              if ((int)(local_1d8.ArrayNum - 1U) < local_1d8.ArrayNum) {
                uVar17 = ~(local_1d8.ArrayNum - 1U) >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                pUVar15 = (UMetaSoundSourceBuilder *)(*pcVar6)();
                return pUVar15;
              }
              lVar19 = (longlong)(local_1d8.ArrayNum + -1) * 0x20;
              uVar7 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar19 + 8);
              *(undefined8 *)local_res20 =
                   *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar19);
              *(undefined8 *)&local_res20->field_0x8 = uVar7;
              uVar7 = *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar19 + 0x10 + 8);
              *(undefined8 *)&local_res20->field_0x10 =
                   *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar19 + 0x10);
              *(undefined8 *)&local_res20->field_0x18 = uVar7;
              if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.AllocatorInstance.Data);
                return this_01.__this;
              }
              return this_01.__this;
            }
            FVar18.Data = local_1d8.AllocatorInstance.Data;
            if (1 < (byte)LogMetaSound._0_1_) {
              ::FName::ToString(&local_res10,&local_68);
              UE::Logging::Private::BasicLog<2>
                        ((FStaticBasicLogRecord *)&PTR_u_Builder___s__Cr_1523cefd0,
                         (FLogCategoryBase *)&LogMetaSound);
              FVar18.Data = local_1d8.AllocatorInstance.Data;
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
                FVar18.Data = local_1d8.AllocatorInstance.Data;
              }
            }
          }
        }
        goto joined_r0x00014b38e3e7;
      }
    }
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_res10,&local_58);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((byte)LogMetaSound._0_1_ < 2) {
      return (UMetaSoundSourceBuilder *)0x0;
    }
    ::FName::ToString(&local_res10,&local_f8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    FVar18.Data = local_f8.Data.AllocatorInstance.Data;
  }
joined_r0x00014b38e3e7:
  if (FVar18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar18.Data);
  }
  return (UMetaSoundSourceBuilder *)0x0;
}

// CreateSourcePresetBuilder @ 14b38e7f0

UMetaSoundSourceBuilder * __thiscall
UMetaSoundBuilderSubsystem::CreateSourcePresetBuilder
          (UMetaSoundBuilderSubsystem *this,FName param_1,
          TScriptInterface<IMetaSoundDocumentInterface> *param_2,EMetaSoundBuilderResult *param_3)

{
  FDocumentBuilderRegistry *this_00;
  UMetaSoundSourceBuilder *this_01;
  
  if ((*(longlong *)param_2 != 0) && (*(longlong *)&param_2->field_0x8 != 0)) {
    this_00 = (FDocumentBuilderRegistry *)
              Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
    this_01 = Metasound::Engine::FDocumentBuilderRegistry::
              CreateTransientBuilder<UMetaSoundSourceBuilder>(this_00,(FName)0x0);
    UMetaSoundBuilderBase::ConvertToPreset((UMetaSoundBuilderBase *)this_01,param_2,param_3);
    return this_01;
  }
  *param_3 = Failed;
  return (UMetaSoundSourceBuilder *)0x0;
}

// CreateStringArrayMetaSoundLiteral @ 14b38e860

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderSubsystem::CreateStringArrayMetaSoundLiteral
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FName *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     Metasound::TDataReferenceTypeInfo<TArray<FString,TSizedDefaultAllocator<32>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *param_2 = `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
             ::__l2::TypeName;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateStringMetaSoundLiteral @ 14b38e990

FMetasoundFrontendLiteral * __thiscall
UMetaSoundBuilderSubsystem::CreateStringMetaSoundLiteral
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          FString *param_1,FName *param_2)

{
  FName *pFVar1;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<FString>();
  *param_2 = *pFVar1;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// DetachBuilderFromAsset @ 14b398860

bool __thiscall
UMetaSoundBuilderSubsystem::DetachBuilderFromAsset
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendClassName *param_1)

{
  undefined1 uVar1;
  IDocumentBuilderRegistry *pIVar2;
  
  pIVar2 = Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
                    /* WARNING: Could not recover jumptable at 0x00014b398883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x28))
                    (pIVar2,param_1,0,*(code **)((longlong)*pIVar2 + 0x28));
  return (bool)uVar1;
}

// FindBuilder @ 14b3a68e0

UMetaSoundBuilderBase * __thiscall
UMetaSoundBuilderSubsystem::FindBuilder(UMetaSoundBuilderSubsystem *this,FName param_1)

{
  UMetaSoundBuilderBase *pUVar1;
  TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *pTVar2;
  
  pTVar2 = TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                   *)&this->NamedBuilders,param_1);
  if (pTVar2 != (TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *)0x0) {
    pUVar1 = *(UMetaSoundBuilderBase **)&pTVar2->field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UMetaSoundBuilderBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UMetaSoundBuilderBase *)0x0;
}

// FindBuilderOfDocument @ 14b3a6d90

UMetaSoundBuilderBase * __thiscall
UMetaSoundBuilderSubsystem::FindBuilderOfDocument
          (UMetaSoundBuilderSubsystem *this,
          TScriptInterface<IMetaSoundDocumentInterface_const_> *param_1)

{
  FDocumentBuilderRegistry *this_00;
  UMetaSoundBuilderBase *pUVar1;
  UObject *local_18 [2];
  
  this_00 = (FDocumentBuilderRegistry *)Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
  local_18[0] = *(UObject **)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18[0]);
  }
  local_18[1] = *(UObject **)&param_1->field_0x8;
  pUVar1 = Metasound::Engine::FDocumentBuilderRegistry::FindBuilderObject
                     (this_00,(TScriptInterface<IMetaSoundDocumentInterface_const_> *)local_18);
  return pUVar1;
}

// FindParentBuilderOfPreset @ 14b3a8f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

UMetaSoundBuilderBase * __thiscall
UMetaSoundBuilderSubsystem::FindParentBuilderOfPreset
          (UMetaSoundBuilderSubsystem *this,
          TScriptInterface<IMetaSoundDocumentInterface_const_> *param_1,bool param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FName this_00;
  UMetaSoundBuilderBase *pUVar4;
  UClass *pUVar5;
  void *pvVar6;
  UMetaSoundBuilderBase *pUVar7;
  FMetasoundAssetBase *pFVar8;
  UMetaSoundBuilderBase *pUVar9;
  longlong lVar10;
  UObject *pUVar11;
  FString *pFVar12;
  uint uVar13;
  FStaticBasicLogRecord *pFVar14;
  void *pvVar15;
  ulonglong uVar16;
  ForElementType<FSetElementId> FVar17;
  undefined1 this_01 [8];
  wchar_t *pwVar18;
  UMetaSoundBuilderBase *pUVar19;
  UMetaSoundBuilderBase *pUVar20;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  void *local_c0;
  undefined1 local_b8 [4];
  FName local_b4;
  FString local_a8;
  UMetaSoundBuilderBase *local_98 [2];
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((*(longlong *)param_1 == 0) ||
     (pUVar5 = *(UClass **)(*(longlong *)param_1 + 0x10), pUVar5 == (UClass *)0x0)) {
LAB_14b3a9436:
    if (1 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    return (UMetaSoundBuilderBase *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
  bVar2 = UClass::ImplementsInterface(pUVar5,pUVar3);
  if (!bVar2) goto LAB_14b3a9436;
  this_00 = (FName)Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
  local_c8 = *(undefined1 (*) [8])param_1;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (undefined1  [8])0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8);
  }
  local_c0._0_4_ = *(int *)&param_1->field_0x8;
  local_c0._4_4_ = *(int *)&param_1->field_0xc;
  pUVar4 = Metasound::Engine::FDocumentBuilderRegistry::FindBuilderObject
                     ((FDocumentBuilderRegistry *)this_00,
                      (TScriptInterface<IMetaSoundDocumentInterface_const_> *)local_c8);
  if (pUVar4 == (UMetaSoundBuilderBase *)0x0) {
    if ((byte)LogMetaSound._0_1_ < 2) {
      return (UMetaSoundBuilderBase *)0x0;
    }
    if (*(longlong *)param_1 == 0) {
      ::FString::FString((FString *)local_c8,L"None");
      pFVar14 = &::LOG_Static;
    }
    else {
      local_b4 = *(FName *)(*(longlong *)param_1 + 0x18);
      ::FName::ToString(&local_b4,(FString *)local_c8);
      pFVar14 = &::LOG_Static;
    }
    goto LAB_14b3a9405;
  }
  bVar2 = FMetaSoundFrontendDocumentBuilder::IsPreset(&pUVar4->Builder);
  if (!bVar2) {
    if ((byte)LogMetaSound._0_1_ < 2) {
      return (UMetaSoundBuilderBase *)0x0;
    }
    if (*(longlong *)param_1 == 0) {
      ::FString::FString((FString *)local_c8,L"None");
      pFVar14 = &::LOG_Static;
    }
    else {
      local_b4 = *(FName *)(*(longlong *)param_1 + 0x18);
      ::FName::ToString(&local_b4,(FString *)local_c8);
      pFVar14 = &::LOG_Static;
    }
    goto LAB_14b3a9405;
  }
  pUVar4 = (UMetaSoundBuilderBase *)UMetaSoundBuilderBase::GetReferencedPresetAsset(pUVar4);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar4 == (UMetaSoundBuilderBase *)0x0)) {
    if (pUVar4 != (UMetaSoundBuilderBase *)0x0) goto LAB_14b3a9089;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14b3a9089:
    pUVar5 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
    pvVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar4,pUVar5);
    pvVar15 = pvVar6;
    if (pUVar4 == (UMetaSoundBuilderBase *)0x0) {
      pvVar15 = (void *)0x0;
    }
    if (pvVar15 != (void *)0x0) {
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (pUVar4 == (UMetaSoundBuilderBase *)0x0)) {
        if (pUVar4 == (UMetaSoundBuilderBase *)0x0) {
          pvVar6 = (void *)0x0;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      local_c8 = (undefined1  [8])pUVar4;
      local_c0 = pvVar6;
      pUVar7 = Metasound::Engine::FDocumentBuilderRegistry::FindBuilderObject
                         ((FDocumentBuilderRegistry *)this_00,
                          (TScriptInterface<IMetaSoundDocumentInterface_const_> *)local_c8);
      if (!param_2) {
        return pUVar7;
      }
      local_88.Elements._44_4_ = 0x80;
      local_88.Elements._0_8_ = 0;
      local_88.Elements._8_8_ = 0;
      local_88.Elements._32_8_ = 0;
      local_88.Elements._40_4_ = 0;
      local_88.Elements._48_4_ = 0xffffffff;
      local_88.Elements._52_4_ = 0;
      local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_88.HashSize = 0;
      while (pUVar20 = pUVar7, pUVar7 != (UMetaSoundBuilderBase *)0x0) {
        pUVar19 = (UMetaSoundBuilderBase *)0x0;
        bVar2 = FMetaSoundFrontendDocumentBuilder::IsPreset(&pUVar7->Builder);
        if (!bVar2) break;
        uVar13 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar4 >> 4)) *
                 -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        pUVar20 = pUVar19;
        if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
          FVar17 = (ForElementType<FSetElementId>)&local_88.Hash;
          if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar17 = local_88.Hash.SecondaryData;
          }
          for (iVar1 = *(int *)((longlong)FVar17 +
                               (ulonglong)(local_88.HashSize - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
              iVar1 != -1; iVar1 = *(int *)(local_88.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
            if (*(UMetaSoundBuilderBase **)(local_88.Elements._0_8_ + (longlong)iVar1 * 0x10) ==
                pUVar4) goto LAB_14b3a9375;
          }
        }
        local_98[0] = pUVar4;
        TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::
        Emplace<UObject_const_*>(&local_88,(UObject **)&local_b4,(bool *)local_98);
        bVar2 = FMetaSoundFrontendDocumentBuilder::IsPreset(&pUVar7->Builder);
        pUVar9 = pUVar19;
        pUVar4 = pUVar19;
        if (((bVar2) &&
            (pFVar8 = FMetaSoundFrontendDocumentBuilder::GetReferencedPresetAsset(&pUVar7->Builder),
            pFVar8 != (FMetasoundAssetBase *)0x0)) &&
           (pUVar4 = (UMetaSoundBuilderBase *)(**(code **)(pFVar8->_padding_ + 0x50))(pFVar8),
           pUVar4 != (UMetaSoundBuilderBase *)0x0)) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          pUVar5 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
          pUVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar4,pUVar5);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
           (pUVar4 == (UMetaSoundBuilderBase *)0x0)) {
          if (pUVar4 == (UMetaSoundBuilderBase *)0x0) break;
        }
        else {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        if (pUVar9 == (UMetaSoundBuilderBase *)0x0) break;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        pUVar5 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
        pUVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar4,pUVar5);
        if (pUVar4 == (UMetaSoundBuilderBase *)0x0) {
          pUVar7 = pUVar19;
        }
        lVar10 = (**(code **)(pUVar7->_padding_ + 0x18))(pUVar7);
        lpCriticalSection = (LPCRITICAL_SECTION)((longlong)this_00 + 0x58);
        local_c8 = (undefined1  [8])0x0;
        local_c0 = (void *)0x0;
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
        ::MultiFind<TSizedDefaultAllocator<32>_>
                  ((TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
                    *)((longlong)this_00 + 8),(FMetasoundFrontendClassName *)(lVar10 + 0x88),
                   (TArray<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                    *)local_c8,false);
        LeaveCriticalSection(lpCriticalSection);
        iVar1 = (int)local_c0;
        uVar16 = (ulonglong)(int)local_c0;
        pUVar20 = (UMetaSoundBuilderBase *)((longlong)local_c8 + uVar16 * 8);
        this_01 = local_c8;
        while( true ) {
          if ((int)uVar16 != iVar1) {
            `TCheckedPointerIterator<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_b8);
          }
          pUVar7 = pUVar19;
          if (this_01 == (undefined1  [8])pUVar20) break;
          pUVar7 = (UMetaSoundBuilderBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
          pUVar9 = pUVar19;
          if ((pUVar7 != (UMetaSoundBuilderBase *)0x0) &&
             (bVar2 = FMetaSoundFrontendDocumentBuilder::IsValid(&pUVar7->Builder), pUVar9 = pUVar7,
             bVar2)) {
            pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
            if (*(UMetaSoundBuilderBase **)&pUVar11[1].field_0x8 == (UMetaSoundBuilderBase *)0x0) {
              pFVar12 = GetTypeName<UObject>(&local_a8);
              if ((pFVar12->Data).ArrayNum == 0) {
                pwVar18 = L"";
              }
              else {
                pwVar18 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(L"nullptr",pwVar18);
            }
            pUVar9 = pUVar19;
            if (*(UMetaSoundBuilderBase **)&pUVar11[1].field_0x8 == pUVar4) break;
          }
          uVar16 = (ulonglong)local_c0 & 0xffffffff;
          this_01 = (undefined1  [8])&((UMetaSoundBuilderBase *)this_01)->_padding_;
          pUVar19 = pUVar9;
        }
        this_00 = (FName)local_a8.Data.AllocatorInstance;
        if (local_c8 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_c8);
          this_00 = (FName)local_a8.Data.AllocatorInstance;
        }
      }
LAB_14b3a9375:
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return pUVar20;
    }
  }
  if ((byte)LogMetaSound._0_1_ < 2) {
    return (UMetaSoundBuilderBase *)0x0;
  }
  if (*(longlong *)param_1 == 0) {
    ::FString::FString((FString *)local_c8,L"None");
  }
  else {
    local_a8.Data.AllocatorInstance.Data =
         *(FScriptContainerElement **)(*(longlong *)param_1 + 0x18);
    ::FName::ToString((FName *)&local_a8,(FString *)local_c8);
  }
  pFVar14 = &::LOG_Static;
LAB_14b3a9405:
  UE::Logging::Private::BasicLog<2>(pFVar14,(FLogCategoryBase *)&LogMetaSound);
  if (local_c8 == (undefined1  [8])0x0) {
    return (UMetaSoundBuilderBase *)0x0;
  }
  FMemory::Free((void *)local_c8);
  return (UMetaSoundBuilderBase *)0x0;
}

// FindPatchBuilder @ 14b3a9490

UMetaSoundPatchBuilder * __thiscall
UMetaSoundBuilderSubsystem::FindPatchBuilder(UMetaSoundBuilderSubsystem *this,FName param_1)

{
  int iVar1;
  TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *pTVar2;
  UClass *pUVar3;
  UMetaSoundPatchBuilder *pUVar4;
  
  pTVar2 = TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                   *)&this->NamedBuilders,param_1);
  if (pTVar2 != (TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *)0x0) {
    pUVar4 = *(UMetaSoundPatchBuilder **)&pTVar2->field_0x8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 == (UMetaSoundPatchBuilder *)0x0) {
        return (UMetaSoundPatchBuilder *)0x0;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if (pUVar4 != (UMetaSoundPatchBuilder *)0x0) {
      pUVar3 = UMetaSoundPatchBuilder::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        pUVar4 = (UMetaSoundPatchBuilder *)0x0;
      }
      return pUVar4;
    }
  }
  return (UMetaSoundPatchBuilder *)0x0;
}

// FindSourceBuilder @ 14b3a95b0

UMetaSoundSourceBuilder * __thiscall
UMetaSoundBuilderSubsystem::FindSourceBuilder(UMetaSoundBuilderSubsystem *this,FName param_1)

{
  int iVar1;
  TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *pTVar2;
  UClass *pUVar3;
  UMetaSoundSourceBuilder *pUVar4;
  
  pTVar2 = TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                   *)&this->NamedBuilders,param_1);
  if (pTVar2 != (TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *)0x0) {
    pUVar4 = *(UMetaSoundSourceBuilder **)&pTVar2->field_0x8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 == (UMetaSoundSourceBuilder *)0x0) {
        return (UMetaSoundSourceBuilder *)0x0;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if (pUVar4 != (UMetaSoundSourceBuilder *)0x0) {
      pUVar3 = UMetaSoundSourceBuilder::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        pUVar4 = (UMetaSoundSourceBuilder *)0x0;
      }
      return pUVar4;
    }
  }
  return (UMetaSoundSourceBuilder *)0x0;
}

// Get @ 14b3abe10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMetaSoundBuilderSubsystem * __cdecl UMetaSoundBuilderSubsystem::Get(void)

{
  int iVar1;
  bool bVar2;
  UEngine *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UMetaSoundBuilderSubsystem *pUVar6;
  
  pUVar3 = GEngine;
  if (GEngine == (UEngine *)0x0) {
    return (UMetaSoundBuilderSubsystem *)0x0;
  }
  pUVar4 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14b315882;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14b315882:
    pUVar5 = StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14b3158b2;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14b3158b2:
  pUVar6 = (UMetaSoundBuilderSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->EngineSubsystemCollection,pUVar4);
  return pUVar6;
}

// GetChecked @ 14b3ae580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMetaSoundBuilderSubsystem * __cdecl UMetaSoundBuilderSubsystem::GetChecked(void)

{
  code *pcVar1;
  bool bVar2;
  UMetaSoundBuilderSubsystem *pUVar3;
  
  if ((GEngine == (UEngine *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                         ,0x4ce,L"Cannot access UMetaSoundBuilderSubsystem without engine loaded"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UMetaSoundBuilderSubsystem *)(*pcVar1)();
    return pUVar3;
  }
  pUVar3 = UEngine::GetEngineSubsystem<UMetaSoundBuilderSubsystem>(GEngine);
  if ((pUVar3 == (UMetaSoundBuilderSubsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuilderSubsystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                         ,0x4d0,L"Failed to find initialized \'UMetaSoundBuilderSubsystem"), bVar2))
  {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UMetaSoundBuilderSubsystem *)(*pcVar1)();
    return pUVar3;
  }
  return pUVar3;
}

// GetConst @ 14b3ae840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMetaSoundBuilderSubsystem * __cdecl UMetaSoundBuilderSubsystem::GetConst(void)

{
  FObjectSubsystemCollection<UEngineSubsystem> *this;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UMetaSoundBuilderSubsystem *pUVar5;
  
  if (GEngine == (UEngine *)0x0) {
    return (UMetaSoundBuilderSubsystem *)0x0;
  }
  this = &GEngine->EngineSubsystemCollection;
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14b3ae886;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14b3ae886:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14b3ae8b6;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14b3ae8b6:
  pUVar5 = (UMetaSoundBuilderSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal((FSubsystemCollectionBase *)this,pUVar3);
  return pUVar5;
}

// GetConstChecked @ 14b3ae8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMetaSoundBuilderSubsystem * __cdecl UMetaSoundBuilderSubsystem::GetConstChecked(void)

{
  code *pcVar1;
  bool bVar2;
  UMetaSoundBuilderSubsystem *pUVar3;
  
  if ((GEngine == (UEngine *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                         ,0x4e3,L"Cannot access UMetaSoundBuilderSubsystem without engine loaded"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UMetaSoundBuilderSubsystem *)(*pcVar1)();
    return pUVar3;
  }
  pUVar3 = UEngine::GetEngineSubsystem<UMetaSoundBuilderSubsystem>(GEngine);
  if ((pUVar3 == (UMetaSoundBuilderSubsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuilderSubsystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                         ,0x4e5,L"Failed to find initialized \'UMetaSoundBuilderSubsystem"), bVar2))
  {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UMetaSoundBuilderSubsystem *)(*pcVar1)();
    return pUVar3;
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 14b3bf1e0

UClass * __cdecl UMetaSoundBuilderSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundBuilderSubsystem",
               &Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem.InnerSingleton,
               StaticRegisterNativesUMetaSoundBuilderSubsystem,0x80,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMetaSoundBuilderSubsystem>,
               InternalVTableHelperCtorCaller<UMetaSoundBuilderSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem.InnerSingleton;
}

// InvalidateDocumentCache @ 14b3c7e80

void __thiscall
UMetaSoundBuilderSubsystem::InvalidateDocumentCache
          (UMetaSoundBuilderSubsystem *this,FMetasoundFrontendClassName *param_1)

{
  IDocumentBuilderRegistry *pIVar1;
  
  pIVar1 = Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
                    /* WARNING: Could not recover jumptable at 0x00014b3c7ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_1,*(code **)((longlong)*pIVar1 + 0x30));
  return;
}

// IsInterfaceRegistered @ 14b3c8310

bool __thiscall
UMetaSoundBuilderSubsystem::IsInterfaceRegistered(UMetaSoundBuilderSubsystem *this,FName param_1)

{
  undefined1 uVar1;
  ISearchEngine *pIVar2;
  FMetasoundFrontendClassInput *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_20 = 1;
  local_68 = (FMetasoundFrontendClassInput *)0x0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  pIVar2 = Metasound::Frontend::ISearchEngine::Get();
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,param_1,&local_68);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_68,(int)local_60);
  if (local_68 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_68);
  }
  return (bool)uVar1;
}

// RegisterBuilder @ 14b3d0610

void __thiscall
UMetaSoundBuilderSubsystem::RegisterBuilder
          (UMetaSoundBuilderSubsystem *this,FName param_1,UMetaSoundBuilderBase *param_2)

{
  uint uVar1;
  TObjectPtr<UMetaSoundBuilderBase> *pTVar2;
  FName local_res10;
  
  if (param_2 != (UMetaSoundBuilderBase *)0x0) {
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    pTVar2 = TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
                         *)&this->NamedBuilders,uVar1 + param_1.Number,&local_res10);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (pTVar2->field0_0x0).DebugPtr = param_2;
  }
  return;
}

// RegisterPatchBuilder @ 14b3d2430

void __thiscall
UMetaSoundBuilderSubsystem::RegisterPatchBuilder
          (UMetaSoundBuilderSubsystem *this,FName param_1,UMetaSoundPatchBuilder *param_2)

{
  uint uVar1;
  TObjectPtr<UMetaSoundBuilderBase> *pTVar2;
  FName local_res10;
  
  if (param_2 != (UMetaSoundPatchBuilder *)0x0) {
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    pTVar2 = TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
                         *)&this->NamedBuilders,uVar1 + param_1.Number,&local_res10);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (pTVar2->field0_0x0).DebugPtr = (UMetaSoundBuilderBase *)param_2;
  }
  return;
}

// RegisterSourceBuilder @ 14b3d24a0

void __thiscall
UMetaSoundBuilderSubsystem::RegisterSourceBuilder
          (UMetaSoundBuilderSubsystem *this,FName param_1,UMetaSoundSourceBuilder *param_2)

{
  uint uVar1;
  TObjectPtr<UMetaSoundBuilderBase> *pTVar2;
  FName local_res10;
  
  if (param_2 != (UMetaSoundSourceBuilder *)0x0) {
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    pTVar2 = TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
                         *)&this->NamedBuilders,uVar1 + param_1.Number,&local_res10);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (pTVar2->field0_0x0).DebugPtr = (UMetaSoundBuilderBase *)param_2;
  }
  return;
}

// SetTargetPage @ 14b3e0090

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMetaSoundBuilderSubsystem::SetTargetPage(UMetaSoundBuilderSubsystem *this,FName param_1)

{
  FName *pFVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *this_00;
  longlong lVar8;
  IMetaSoundAssetManager *pIVar9;
  undefined1 *puVar10;
  FName local_res18 [2];
  FString local_18;
  
  this_00 = UMetaSoundSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UObject *)0x0) {
    return false;
  }
  bVar6 = ::FName::Equals(param_1,L"Default");
  if (bVar6) {
    puVar10 = &pUVar3[2].field_0x8;
  }
  else {
    puVar10 = *(undefined1 **)&pUVar3[2].field_0x20;
    puVar2 = puVar10 + (longlong)*(int *)(pUVar3 + 3) * 0x18;
    for (; puVar10 != puVar2; puVar10 = puVar10 + 0x18) {
      if (*(FName *)(puVar10 + 0x10) == param_1) goto LAB_14b3e0106;
    }
    puVar10 = (undefined1 *)0x0;
  }
LAB_14b3e0106:
  if (puVar10 != (undefined1 *)0x0) {
    pFVar1 = (FName *)(puVar10 + 0x10);
    lVar8 = 0x90;
    if (*(int *)&pUVar3[3].field_0x18 == -1) {
      lVar8 = 0x50;
    }
    local_res18[0] = *(FName *)(&pUVar3->field_0x0 + lVar8);
    if (local_res18[0] != *pFVar1) {
      if (3 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(local_res18,&local_18);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      if (((pFVar1 != (FName *)&pUVar3[3].field_0x18) &&
          (FVar4 = *pFVar1, *(uint *)&pUVar3[3].field_0x18 = FVar4.ComparisonIndex.Value,
          *(uint *)&pUVar3[3].field_0x1c = FVar4.Number,
          FVar4.ComparisonIndex.Value.Value == 0xffffffff)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pIVar9 = Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
      (**(code **)((longlong)*pIVar9 + 0xb8))(pIVar9);
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUMetaSoundBuilderSubsystem @ 14b3e1430

void __cdecl UMetaSoundBuilderSubsystem::StaticRegisterNativesUMetaSoundBuilderSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1c;
  local_18.DataPtr = Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterBuilder @ 14b3e4ad0

bool __thiscall
UMetaSoundBuilderSubsystem::UnregisterBuilder(UMetaSoundBuilderSubsystem *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->NamedBuilders).field_0x8 != *(int *)&(this->NamedBuilders).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    iVar2 = TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                                 *)&this->NamedBuilders,local_res10.Number + uVar1,&local_res8);
    return 0 < iVar2;
  }
  return false;
}

// UnregisterPatchBuilder @ 14b3e4d30

bool __thiscall
UMetaSoundBuilderSubsystem::UnregisterPatchBuilder(UMetaSoundBuilderSubsystem *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->NamedBuilders).field_0x8 != *(int *)&(this->NamedBuilders).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    iVar2 = TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                                 *)&this->NamedBuilders,local_res10.Number + uVar1,&local_res8);
    return 0 < iVar2;
  }
  return false;
}

// UnregisterSourceBuilder @ 14b3e4d90

bool __thiscall
UMetaSoundBuilderSubsystem::UnregisterSourceBuilder(UMetaSoundBuilderSubsystem *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->NamedBuilders).field_0x8 != *(int *)&(this->NamedBuilders).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    iVar2 = TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                                 *)&this->NamedBuilders,local_res10.Number + uVar1,&local_res8);
    return 0 < iVar2;
  }
  return false;
}

// execCreateBoolArrayMetaSoundLiteral @ 14b3eb040

void __cdecl
UMetaSoundBuilderSubsystem::execCreateBoolArrayMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  void *pvVar3;
  FName *pFVar4;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar5;
  FName local_res10;
  TArray<bool,TSizedDefaultAllocator<32>_> local_88;
  FMetasoundFrontendLiteral local_78;
  
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar1 = (TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar5 = &local_88;
  if (pTVar1 != (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pvVar3 = ThreadLocalStoragePointer;
  pFVar4 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     Metasound::TDataReferenceTypeInfo<TArray<bool,TSizedDefaultAllocator<32>_>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *pFVar4 = `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::TypeName;
  local_78.Type = None;
  local_78.AsNumDefault = 0;
  local_78.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsBoolean.ArrayNum = 0;
  local_78.AsBoolean.ArrayMax = 0;
  local_78.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsInteger.ArrayNum = 0;
  local_78.AsInteger.ArrayMax = 0;
  local_78.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsFloat.ArrayNum = 0;
  local_78.AsFloat.ArrayMax = 0;
  local_78.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsString.ArrayNum = 0;
  local_78.AsString.ArrayMax = 0;
  local_78.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsUObject.ArrayNum = 0;
  local_78.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_78,pTVar5);
  FMetasoundFrontendLiteral::operator=(param_3,&local_78);
  if (local_78.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.AsString.AllocatorInstance.Data,local_78.AsString.ArrayNum);
  if (local_78.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsString.AllocatorInstance.Data);
  }
  if (local_78.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsFloat.AllocatorInstance.Data);
  }
  if (local_78.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsInteger.AllocatorInstance.Data);
  }
  if (local_78.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsBoolean.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// execCreateBoolMetaSoundLiteral @ 14b3eb3b0

void __cdecl
UMetaSoundBuilderSubsystem::execCreateBoolMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FName *pFVar3;
  bool bVar4;
  int local_res10 [4];
  FName local_res20;
  FMetasoundFrontendLiteral local_88;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pFVar3 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Metasound::GetMetasoundDataTypeName<bool>();
  *pFVar3 = *pFVar2;
  local_88.Type = None;
  local_88.AsNumDefault = 0;
  local_88.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsBoolean.ArrayNum = 0;
  local_88.AsBoolean.ArrayMax = 0;
  local_88.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsInteger.ArrayNum = 0;
  local_88.AsInteger.ArrayMax = 0;
  local_88.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsFloat.ArrayNum = 0;
  local_88.AsFloat.ArrayMax = 0;
  local_88.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsString.ArrayNum = 0;
  local_88.AsString.ArrayMax = 0;
  local_88.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsUObject.ArrayNum = 0;
  local_88.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_88,bVar4);
  FMetasoundFrontendLiteral::operator=(param_3,&local_88);
  if (local_88.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.AsString.AllocatorInstance.Data,local_88.AsString.ArrayNum);
  if (local_88.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsString.AllocatorInstance.Data);
  }
  if (local_88.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsFloat.AllocatorInstance.Data);
  }
  if (local_88.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsInteger.AllocatorInstance.Data);
  }
  if (local_88.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreateFloatArrayMetaSoundLiteral @ 14b3eb670

void __cdecl
UMetaSoundBuilderSubsystem::execCreateFloatArrayMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  FName local_res10;
  TArray<float,TSizedDefaultAllocator<32>_> local_88;
  FMetasoundFrontendLiteral local_78;
  
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar1 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar5 = &local_88;
  if (pTVar1 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar4 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = Metasound::GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  *pFVar4 = *pFVar3;
  local_78.Type = None;
  local_78.AsNumDefault = 0;
  local_78.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsBoolean.ArrayNum = 0;
  local_78.AsBoolean.ArrayMax = 0;
  local_78.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsInteger.ArrayNum = 0;
  local_78.AsInteger.ArrayMax = 0;
  local_78.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsFloat.ArrayNum = 0;
  local_78.AsFloat.ArrayMax = 0;
  local_78.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsString.ArrayNum = 0;
  local_78.AsString.ArrayMax = 0;
  local_78.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsUObject.ArrayNum = 0;
  local_78.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_78,pTVar5);
  FMetasoundFrontendLiteral::operator=(param_3,&local_78);
  if (local_78.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.AsString.AllocatorInstance.Data,local_78.AsString.ArrayNum);
  if (local_78.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsString.AllocatorInstance.Data);
  }
  if (local_78.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsFloat.AllocatorInstance.Data);
  }
  if (local_78.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsInteger.AllocatorInstance.Data);
  }
  if (local_78.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsBoolean.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// execCreateFloatMetaSoundLiteral @ 14b3eb980

void __cdecl
UMetaSoundBuilderSubsystem::execCreateFloatMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FName *pFVar3;
  FName *pFVar4;
  float local_res10 [2];
  FName local_res20;
  FMetasoundFrontendLiteral local_88;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  fVar2 = local_res10[0];
  pFVar4 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = Metasound::GetMetasoundDataTypeName<float>();
  *pFVar4 = *pFVar3;
  local_88.Type = None;
  local_88.AsNumDefault = 0;
  local_88.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsBoolean.ArrayNum = 0;
  local_88.AsBoolean.ArrayMax = 0;
  local_88.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsInteger.ArrayNum = 0;
  local_88.AsInteger.ArrayMax = 0;
  local_88.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsFloat.ArrayNum = 0;
  local_88.AsFloat.ArrayMax = 0;
  local_88.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsString.ArrayNum = 0;
  local_88.AsString.ArrayMax = 0;
  local_88.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsUObject.ArrayNum = 0;
  local_88.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_88,fVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_88);
  if (local_88.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.AsString.AllocatorInstance.Data,local_88.AsString.ArrayNum);
  if (local_88.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsString.AllocatorInstance.Data);
  }
  if (local_88.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsFloat.AllocatorInstance.Data);
  }
  if (local_88.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsInteger.AllocatorInstance.Data);
  }
  if (local_88.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreateIntArrayMetaSoundLiteral @ 14b3ebc50

void __cdecl
UMetaSoundBuilderSubsystem::execCreateIntArrayMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  void *pvVar3;
  FName *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  FName local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  FMetasoundFrontendLiteral local_78;
  
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar5 = &local_88;
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pvVar3 = ThreadLocalStoragePointer;
  pFVar4 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     Metasound::TDataReferenceTypeInfo<TArray<int,TSizedDefaultAllocator<32>_>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *pFVar4 = `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::TypeName;
  local_78.Type = None;
  local_78.AsNumDefault = 0;
  local_78.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsBoolean.ArrayNum = 0;
  local_78.AsBoolean.ArrayMax = 0;
  local_78.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsInteger.ArrayNum = 0;
  local_78.AsInteger.ArrayMax = 0;
  local_78.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsFloat.ArrayNum = 0;
  local_78.AsFloat.ArrayMax = 0;
  local_78.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsString.ArrayNum = 0;
  local_78.AsString.ArrayMax = 0;
  local_78.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsUObject.ArrayNum = 0;
  local_78.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_78,pTVar5);
  FMetasoundFrontendLiteral::operator=(param_3,&local_78);
  if (local_78.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.AsString.AllocatorInstance.Data,local_78.AsString.ArrayNum);
  if (local_78.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsString.AllocatorInstance.Data);
  }
  if (local_78.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsFloat.AllocatorInstance.Data);
  }
  if (local_78.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsInteger.AllocatorInstance.Data);
  }
  if (local_78.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsBoolean.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// execCreateIntMetaSoundLiteral @ 14b3ebfc0

void __cdecl
UMetaSoundBuilderSubsystem::execCreateIntMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName *pFVar3;
  FName *pFVar4;
  int local_res10 [2];
  FName local_res20;
  FMetasoundFrontendLiteral local_78;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  iVar2 = local_res10[0];
  pFVar4 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = Metasound::GetMetasoundDataTypeName<int>();
  *pFVar4 = *pFVar3;
  local_78.Type = None;
  local_78.AsNumDefault = 0;
  local_78.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsBoolean.ArrayNum = 0;
  local_78.AsBoolean.ArrayMax = 0;
  local_78.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsInteger.ArrayNum = 0;
  local_78.AsInteger.ArrayMax = 0;
  local_78.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsFloat.ArrayNum = 0;
  local_78.AsFloat.ArrayMax = 0;
  local_78.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsString.ArrayNum = 0;
  local_78.AsString.ArrayMax = 0;
  local_78.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsUObject.ArrayNum = 0;
  local_78.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_78,iVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_78);
  if (local_78.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.AsString.AllocatorInstance.Data,local_78.AsString.ArrayNum);
  if (local_78.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsString.AllocatorInstance.Data);
  }
  if (local_78.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsFloat.AllocatorInstance.Data);
  }
  if (local_78.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsInteger.AllocatorInstance.Data);
  }
  if (local_78.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromParam @ 14b3ecf00

void __cdecl
UMetaSoundBuilderSubsystem::execCreateMetaSoundLiteralFromParam
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAudioParameter *pFVar2;
  FAudioParameter local_108;
  FMetasoundFrontendLiteral local_68;
  
  local_108.ParamName.ComparisonIndex.Value = 0;
  local_108.ParamName.Number = 0;
  local_108.FloatParam = 0.0;
  local_108.BoolParam = false;
  local_108.IntParam = 0;
  local_108.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_108.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.StringParam.Data.ArrayNum = 0;
  local_108.StringParam.Data.ArrayMax = 0;
  local_108.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayFloatParam.ArrayNum = 0;
  local_108.ArrayFloatParam.ArrayMax = 0;
  local_108.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayBoolParam.ArrayNum = 0;
  local_108.ArrayBoolParam.ArrayMax = 0;
  local_108.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayIntParam.ArrayNum = 0;
  local_108.ArrayIntParam.ArrayMax = 0;
  local_108.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayObjectParam.ArrayNum = 0;
  local_108.ArrayObjectParam.ArrayMax = 0;
  local_108.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayStringParam.ArrayNum = 0;
  local_108.ArrayStringParam.ArrayMax = 0;
  local_108.ParamType = None;
  local_108.TypeName.ComparisonIndex.Value = 0;
  local_108.TypeName.Number = 0;
  local_108.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ObjectProxies.ArrayNum = 0;
  local_108.ObjectProxies.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pFVar2 = &local_108;
  if ((FAudioParameter *)param_2->MostRecentPropertyAddress != (FAudioParameter *)0x0) {
    pFVar2 = (FAudioParameter *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_68,pFVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_108.ObjectProxies.AllocatorInstance.Data,
             local_108.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_108.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_108.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_108.ArrayStringParam.AllocatorInstance.Data,
             local_108.ArrayStringParam.ArrayNum);
  if (local_108.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_108.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateObjectArrayMetaSoundLiteral @ 14b3ed580

void __cdecl
UMetaSoundBuilderSubsystem::execCreateObjectArrayMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  pTVar2 = &local_78;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,pTVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execCreateObjectMetaSoundLiteral @ 14b3ed820

void __cdecl
UMetaSoundBuilderSubsystem::execCreateObjectMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  FMetasoundFrontendLiteral local_68;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,local_res10);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreatePatchBuilder @ 14b3eda80

void __cdecl
UMetaSoundBuilderSubsystem::execCreatePatchBuilder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FDocumentBuilderRegistry *this;
  UMetaSoundPatchBuilder *pUVar3;
  uchar *puVar4;
  uchar local_res10 [8];
  FName local_res18;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res18;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar4 = '\0';
  this = (FDocumentBuilderRegistry *)Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
  pUVar3 = Metasound::Engine::FDocumentBuilderRegistry::
           CreateTransientBuilder<UMetaSoundPatchBuilder>(this,FVar2);
  *(UMetaSoundPatchBuilder **)param_3 = pUVar3;
  return;
}

// execCreatePatchPresetBuilder @ 14b3edb70

void __cdecl
UMetaSoundBuilderSubsystem::execCreatePatchPresetBuilder
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  TScriptInterface<IMetaSoundDocumentInterface> *pTVar2;
  FProperty *pFVar3;
  FName FVar4;
  FDocumentBuilderRegistry *this;
  UMetaSoundBuilderBase *this_00;
  TScriptInterface<IMetaSoundDocumentInterface> *pTVar5;
  EMetaSoundBuilderResult *pEVar6;
  EMetaSoundBuilderResult local_res10 [8];
  FName local_res18 [2];
  TScriptInterface<IMetaSoundDocumentInterface> local_38;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38._0_8_ = 0;
  local_38._8_8_ = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar2 = (TScriptInterface<IMetaSoundDocumentInterface> *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar5 = &local_38;
  if (pTVar2 != (TScriptInterface<IMetaSoundDocumentInterface> *)0x0) {
    pTVar5 = pTVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar4 = local_res18[0];
  pEVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)pTVar5 != 0) && (*(longlong *)&pTVar5->field_0x8 != 0)) {
    this = (FDocumentBuilderRegistry *)Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
    this_00 = (UMetaSoundBuilderBase *)
              Metasound::Engine::FDocumentBuilderRegistry::
              CreateTransientBuilder<UMetaSoundPatchBuilder>(this,FVar4);
    UMetaSoundBuilderBase::ConvertToPreset(this_00,pTVar5,pEVar6);
    *(UMetaSoundBuilderBase **)param_3 = this_00;
    return;
  }
  *pEVar6 = Failed;
  *(undefined8 *)param_3 = 0;
  return;
}

// execCreateSourceBuilder @ 14b3edce0

void __cdecl
UMetaSoundBuilderSubsystem::execCreateSourceBuilder(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  UMetaSoundSourceBuilder *pUVar3;
  EMetaSoundBuilderResult *pEVar4;
  FMetaSoundBuilderNodeOutputHandle *pFVar5;
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *pTVar6;
  FMetaSoundBuilderNodeInputHandle *pFVar7;
  EMetaSoundBuilderResult local_res10 [8];
  EMetaSoundOutputAudioFormat local_res18 [8];
  int local_res20 [2];
  FName local_a8;
  TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> local_a0;
  FMetaSoundBuilderNodeOutputHandle local_90;
  FMetaSoundBuilderNodeInputHandle local_70;
  
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_90._16_8_ = 0;
  local_90._24_8_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  pFVar5 = &local_90;
  if ((FMetaSoundBuilderNodeOutputHandle *)param_2->MostRecentPropertyAddress !=
      (FMetaSoundBuilderNodeOutputHandle *)0x0) {
    pFVar5 = (FMetaSoundBuilderNodeOutputHandle *)param_2->MostRecentPropertyAddress;
  }
  local_70._16_8_ = 0;
  local_70._24_8_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  pFVar7 = &local_70;
  if ((FMetaSoundBuilderNodeInputHandle *)param_2->MostRecentPropertyAddress !=
      (FMetaSoundBuilderNodeInputHandle *)0x0) {
    pFVar7 = (FMetaSoundBuilderNodeInputHandle *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  pTVar1 = (TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar6 = &local_a0;
  if (pTVar1 != (TArray<FMetaSoundBuilderNodeInputHandle,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = Mono;
  pEVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar4 = param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = CreateSourceBuilder((UMetaSoundBuilderSubsystem *)param_1,local_a8,pFVar5,pFVar7,pTVar6,
                               pEVar4,local_res18[0],local_res20[0] != 0);
  *(UMetaSoundSourceBuilder **)param_3 = pUVar3;
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return;
}

// execCreateSourcePresetBuilder @ 14b3edf80

void __cdecl
UMetaSoundBuilderSubsystem::execCreateSourcePresetBuilder
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  TScriptInterface<IMetaSoundDocumentInterface> *pTVar2;
  FProperty *pFVar3;
  FDocumentBuilderRegistry *this;
  UMetaSoundSourceBuilder *this_00;
  TScriptInterface<IMetaSoundDocumentInterface> *pTVar4;
  EMetaSoundBuilderResult *pEVar5;
  EMetaSoundBuilderResult local_res10 [8];
  undefined8 local_res18 [2];
  TScriptInterface<IMetaSoundDocumentInterface> local_38;
  
  local_res18[0] = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38._0_8_ = 0;
  local_38._8_8_ = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar2 = (TScriptInterface<IMetaSoundDocumentInterface> *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Succeeded;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar4 = &local_38;
  if (pTVar2 != (TScriptInterface<IMetaSoundDocumentInterface> *)0x0) {
    pTVar4 = pTVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EMetaSoundBuilderResult *)0x0) {
    pEVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)pTVar4 != 0) && (*(longlong *)&pTVar4->field_0x8 != 0)) {
    this = (FDocumentBuilderRegistry *)Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
    this_00 = Metasound::Engine::FDocumentBuilderRegistry::
              CreateTransientBuilder<UMetaSoundSourceBuilder>(this,(FName)0x0);
    UMetaSoundBuilderBase::ConvertToPreset((UMetaSoundBuilderBase *)this_00,pTVar4,pEVar5);
    *(UMetaSoundSourceBuilder **)param_3 = this_00;
    return;
  }
  *pEVar5 = Failed;
  *(undefined8 *)param_3 = 0;
  return;
}

// execCreateStringArrayMetaSoundLiteral @ 14b3ee0e0

void __cdecl
UMetaSoundBuilderSubsystem::execCreateStringArrayMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  void *pvVar3;
  FName *pFVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FName local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  FMetasoundFrontendLiteral local_78;
  
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar1 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar5 = &local_88;
  if (pTVar1 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pvVar3 = ThreadLocalStoragePointer;
  pFVar4 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                      ::__l2::TypeName,
                     Metasound::TDataReferenceTypeInfo<TArray<FString,TSizedDefaultAllocator<32>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *pFVar4 = `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>(void)'
            ::__l2::TypeName;
  local_78.Type = None;
  local_78.AsNumDefault = 0;
  local_78.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsBoolean.ArrayNum = 0;
  local_78.AsBoolean.ArrayMax = 0;
  local_78.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsInteger.ArrayNum = 0;
  local_78.AsInteger.ArrayMax = 0;
  local_78.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsFloat.ArrayNum = 0;
  local_78.AsFloat.ArrayMax = 0;
  local_78.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsString.ArrayNum = 0;
  local_78.AsString.ArrayMax = 0;
  local_78.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsUObject.ArrayNum = 0;
  local_78.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_78,pTVar5);
  FMetasoundFrontendLiteral::operator=(param_3,&local_78);
  if (local_78.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.AsString.AllocatorInstance.Data,local_78.AsString.ArrayNum);
  if (local_78.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsString.AllocatorInstance.Data);
  }
  if (local_78.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsFloat.AllocatorInstance.Data);
  }
  if (local_78.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsInteger.AllocatorInstance.Data);
  }
  if (local_78.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsBoolean.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// execCreateStringMetaSoundLiteral @ 14b3ee470

void __cdecl
UMetaSoundBuilderSubsystem::execCreateStringMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FName *pFVar3;
  FName local_res10;
  FString local_88;
  FMetasoundFrontendLiteral local_78;
  
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Metasound::GetMetasoundDataTypeName<FString>();
  *pFVar3 = *pFVar2;
  local_78.Type = None;
  local_78.AsNumDefault = 0;
  local_78.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsBoolean.ArrayNum = 0;
  local_78.AsBoolean.ArrayMax = 0;
  local_78.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsInteger.ArrayNum = 0;
  local_78.AsInteger.ArrayMax = 0;
  local_78.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsFloat.ArrayNum = 0;
  local_78.AsFloat.ArrayMax = 0;
  local_78.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsString.ArrayNum = 0;
  local_78.AsString.ArrayMax = 0;
  local_78.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsUObject.ArrayNum = 0;
  local_78.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_78,&local_88);
  FMetasoundFrontendLiteral::operator=(param_3,&local_78);
  if (local_78.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.AsString.AllocatorInstance.Data,local_78.AsString.ArrayNum);
  if (local_78.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsString.AllocatorInstance.Data);
  }
  if (local_78.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsFloat.AllocatorInstance.Data);
  }
  if (local_78.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsInteger.AllocatorInstance.Data);
  }
  if (local_78.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsBoolean.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// execFindBuilder @ 14b3eefc0

void __cdecl
UMetaSoundBuilderSubsystem::execFindBuilder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *pTVar3;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                   *)&param_1[1].field_0x8,local_res8);
  if (pTVar3 != (TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *)0x0) {
    pUVar2 = *(UObject **)&pTVar3->field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)param_3 = pUVar2;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execFindBuilderOfDocument @ 14b3ef090

void __cdecl
UMetaSoundBuilderSubsystem::execFindBuilderOfDocument
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FWeakObjectPtr *pFVar1;
  FProperty *pFVar2;
  int iVar3;
  UObject *pUVar4;
  bool bVar5;
  IDocumentBuilderRegistry *pIVar6;
  longlong lVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  FString *pFVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  UObject *pUVar13;
  ForAnyElementType this;
  UObject *pUVar14;
  undefined1 local_res10 [8];
  TArray<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_58;
  UObject *local_48;
  UObject *pUStack_40;
  FString local_38;
  
  local_48 = (UObject *)0x0;
  pUStack_40 = (UObject *)0x0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pUVar4 = local_48;
  pUVar8 = (UObject *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14b3ef120:
    pUVar13 = pUStack_40;
    if (local_48 == (UObject *)0x0) goto LAB_14b3ef12a;
  }
  else {
    if (local_48 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_48);
      goto LAB_14b3ef120;
    }
LAB_14b3ef12a:
    pUVar13 = pUVar8;
  }
  pIVar6 = Metasound::Frontend::IDocumentBuilderRegistry::GetChecked();
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UObject *)0x0)) {
    if (pUVar4 == (UObject *)0x0) goto LAB_14b3ef22d;
  }
  else {
    UE::GC::MarkAsReachable(pUVar4);
  }
  if (pUVar4 == (UObject *)0x0) {
    pUVar13 = pUVar8;
  }
  lVar7 = (**(code **)(*(longlong *)pUVar13 + 0x18))(pUVar13);
  lpCriticalSection = (LPCRITICAL_SECTION)(pIVar6 + 0xb);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>
            ((TMultiMap<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>_>
              *)(pIVar6 + 1),(FMetasoundFrontendClassName *)(lVar7 + 0x88),&local_58,false);
  LeaveCriticalSection(lpCriticalSection);
  iVar3 = local_58.ArrayNum;
  uVar11 = (ulonglong)local_58.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(local_58.AllocatorInstance.Data + uVar11 * 8);
  this.Data = local_58.AllocatorInstance.Data;
  pUVar13 = pUVar8;
  while( true ) {
    if ((int)uVar11 != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    pUVar8 = pUVar13;
    if ((FWeakObjectPtr *)this.Data == pFVar1) break;
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
    pUVar14 = pUVar13;
    if ((pUVar8 != (UObject *)0x0) &&
       (bVar5 = FMetaSoundFrontendDocumentBuilder::IsValid
                          ((FMetaSoundFrontendDocumentBuilder *)(pUVar8 + 1)), pUVar14 = pUVar8,
       bVar5)) {
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      if (*(UObject **)&pUVar9[1].field_0x8 == (UObject *)0x0) {
        pFVar10 = GetTypeName<UObject>(&local_38);
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar12);
      }
      pUVar14 = pUVar13;
      if (*(UObject **)&pUVar9[1].field_0x8 == pUVar4) break;
    }
    uVar11 = local_58._8_8_ & 0xffffffff;
    this.Data = this.Data + 8;
    pUVar13 = pUVar14;
  }
  if ((FWeakObjectPtr *)local_58.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
LAB_14b3ef22d:
  *(UObject **)param_3 = pUVar8;
  return;
}

// execFindParentBuilderOfPreset @ 14b3f0520

void __cdecl
UMetaSoundBuilderSubsystem::execFindParentBuilderOfPreset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UMetaSoundBuilderBase *pUVar3;
  bool bVar4;
  int local_res10 [2];
  UObject *local_38;
  undefined8 uStack_30;
  UObject *local_28 [2];
  
  local_38 = (UObject *)0x0;
  uStack_30 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar2 = local_38;
  bVar4 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38);
  }
  local_28[0] = pUVar2;
  local_28[1] = (UObject *)0;
  if (local_38 != (UObject *)0x0) {
    local_28[1] = (UObject *)uStack_30;
  }
  pUVar3 = FindParentBuilderOfPreset
                     ((UMetaSoundBuilderSubsystem *)param_1,
                      (TScriptInterface<IMetaSoundDocumentInterface_const_> *)local_28,bVar4);
  *(UMetaSoundBuilderBase **)param_3 = pUVar3;
  return;
}

// execFindPatchBuilder @ 14b3f0640

void __cdecl
UMetaSoundBuilderSubsystem::execFindPatchBuilder(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *pTVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                   *)&param_1[1].field_0x8,local_res8);
  if (pTVar3 != (TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *)0x0) {
    pUVar5 = *(UObject **)&pTVar3->field_0x8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 == (UObject *)0x0) goto LAB_14b3f0719;
      UE::GC::MarkAsReachable(pUVar5);
    }
    if (pUVar5 != (UObject *)0x0) {
      pUVar4 = UMetaSoundPatchBuilder::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pUVar5 = (UObject *)0x0;
      }
      *(UObject **)param_3 = pUVar5;
      return;
    }
  }
LAB_14b3f0719:
  *(undefined8 *)param_3 = 0;
  return;
}

// execFindSourceBuilder @ 14b3f0740

void __cdecl
UMetaSoundBuilderSubsystem::execFindSourceBuilder(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *pTVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                   *)&param_1[1].field_0x8,local_res8);
  if (pTVar3 != (TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_> *)0x0) {
    pUVar5 = *(UObject **)&pTVar3->field_0x8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 == (UObject *)0x0) goto LAB_14b3f0819;
      UE::GC::MarkAsReachable(pUVar5);
    }
    if (pUVar5 != (UObject *)0x0) {
      pUVar4 = UMetaSoundSourceBuilder::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pUVar5 = (UObject *)0x0;
      }
      *(UObject **)param_3 = pUVar5;
      return;
    }
  }
LAB_14b3f0819:
  *(undefined8 *)param_3 = 0;
  return;
}

// execIsInterfaceRegistered @ 14b3f43b0

void __cdecl
UMetaSoundBuilderSubsystem::execIsInterfaceRegistered
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ISearchEngine *pIVar4;
  undefined8 local_res10;
  FMetasoundFrontendClassInput *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar2 = local_res10;
  local_68 = (FMetasoundFrontendClassInput *)0x0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 1;
  local_18 = (void *)0x0;
  local_10 = 0;
  pIVar4 = Metasound::Frontend::ISearchEngine::Get();
  uVar3 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,uVar2,&local_68);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(local_68,(int)local_60);
  if (local_68 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_68);
  }
  *(undefined1 *)param_3 = uVar3;
  return;
}

// execRegisterBuilder @ 14b3f4b10

void __cdecl
UMetaSoundBuilderSubsystem::execRegisterBuilder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  TObjectPtr<UMetaSoundBuilderBase>_u_0 TVar3;
  uint uVar4;
  TObjectPtr<UMetaSoundBuilderBase>_u_0 *pTVar5;
  FName local_res10;
  TObjectPtr<UMetaSoundBuilderBase>_u_0 local_res20;
  FName local_18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20.DebugPtr = (UMetaSoundBuilderBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  TVar3 = local_res20;
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18[0] = local_res10;
  if (local_res20.DebugPtr != (UMetaSoundBuilderBase *)0x0) {
    uVar4 = ::GetTypeHash(local_res10.ComparisonIndex);
    pTVar5 = &TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
                          *)&param_1[1].field_0x8,FVar2.Number + uVar4,local_18)->field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    *pTVar5 = TVar3;
  }
  return;
}

// execRegisterPatchBuilder @ 14b3f4c20

void __cdecl
UMetaSoundBuilderSubsystem::execRegisterPatchBuilder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  TObjectPtr<UMetaSoundBuilderBase>_u_0 TVar3;
  uint uVar4;
  TObjectPtr<UMetaSoundBuilderBase>_u_0 *pTVar5;
  FName local_res10;
  TObjectPtr<UMetaSoundBuilderBase>_u_0 local_res20;
  FName local_18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20.DebugPtr = (UMetaSoundBuilderBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  TVar3 = local_res20;
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18[0] = local_res10;
  if (local_res20.DebugPtr != (UMetaSoundBuilderBase *)0x0) {
    uVar4 = ::GetTypeHash(local_res10.ComparisonIndex);
    pTVar5 = &TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
                          *)&param_1[1].field_0x8,FVar2.Number + uVar4,local_18)->field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    *pTVar5 = TVar3;
  }
  return;
}

// execRegisterSourceBuilder @ 14b3f4d30

void __cdecl
UMetaSoundBuilderSubsystem::execRegisterSourceBuilder
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  TObjectPtr<UMetaSoundBuilderBase>_u_0 TVar3;
  uint uVar4;
  TObjectPtr<UMetaSoundBuilderBase>_u_0 *pTVar5;
  FName local_res10;
  TObjectPtr<UMetaSoundBuilderBase>_u_0 local_res20;
  FName local_18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20.DebugPtr = (UMetaSoundBuilderBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  TVar3 = local_res20;
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18[0] = local_res10;
  if (local_res20.DebugPtr != (UMetaSoundBuilderBase *)0x0) {
    uVar4 = ::GetTypeHash(local_res10.ComparisonIndex);
    pTVar5 = &TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,TObjectPtr<UMetaSoundBuilderBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>_>
                          *)&param_1[1].field_0x8,FVar2.Number + uVar4,local_18)->field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    *pTVar5 = TVar3;
  }
  return;
}

// execSetTargetPage @ 14b3f63c0

void __cdecl
UMetaSoundBuilderSubsystem::execSetTargetPage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetTargetPage((UMetaSoundBuilderSubsystem *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execUnregisterBuilder @ 14b3f6770

void __cdecl
UMetaSoundBuilderSubsystem::execUnregisterBuilder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  FName local_res8;
  FName local_res10;
  
  iVar4 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res8;
  if (*(int *)&param_1[1].field_0x10 != *(int *)&param_1[2].field_0x14) {
    uVar3 = ::GetTypeHash(local_res8.ComparisonIndex);
    iVar4 = TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                                 *)&param_1[1].field_0x8,FVar2.Number + uVar3,&local_res10);
  }
  *(bool *)param_3 = 0 < iVar4;
  return;
}

// execUnregisterPatchBuilder @ 14b3f6830

void __cdecl
UMetaSoundBuilderSubsystem::execUnregisterPatchBuilder
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  FName local_res8;
  FName local_res10;
  
  iVar4 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res8;
  if (*(int *)&param_1[1].field_0x10 != *(int *)&param_1[2].field_0x14) {
    uVar3 = ::GetTypeHash(local_res8.ComparisonIndex);
    iVar4 = TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                                 *)&param_1[1].field_0x8,FVar2.Number + uVar3,&local_res10);
  }
  *(bool *)param_3 = 0 < iVar4;
  return;
}

// execUnregisterSourceBuilder @ 14b3f68f0

void __cdecl
UMetaSoundBuilderSubsystem::execUnregisterSourceBuilder
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  FName local_res8;
  FName local_res10;
  
  iVar4 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res8;
  if (*(int *)&param_1[1].field_0x10 != *(int *)&param_1[2].field_0x14) {
    uVar3 = ::GetTypeHash(local_res8.ComparisonIndex);
    iVar4 = TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UMetaSoundBuilderBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMetaSoundBuilderBase>,0>,FDefaultSetAllocator>
                                 *)&param_1[1].field_0x8,FVar2.Number + uVar3,&local_res10);
  }
  *(bool *)param_3 = 0 < iVar4;
  return;
}

