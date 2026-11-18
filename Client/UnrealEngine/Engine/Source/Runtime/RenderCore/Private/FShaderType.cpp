// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 17

// FShaderType @ 145def170

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderType * __thiscall
FShaderType::FShaderType
          (FShaderType *this,EShaderTypeForDynamicCast param_1,FTypeLayoutDesc *param_2,
          wchar_t *param_3,wchar_t *param_4,wchar_t *param_5,uint param_6,int param_7,
          _func___cdecl_FShader_ptr *param_8,
          _func___cdecl_FShader_ptr_FShaderCompiledShaderInitializerType_ptr *param_9,
          _func___cdecl_bool_FShaderPermutationParameters_ptr *param_10,
          _func___cdecl_EShaderPermutationPrecacheRequest_FShaderPermutationParameters_ptr *param_11
          ,_func___cdecl_ERayTracingPayloadType_int *param_12,
          _func___cdecl_FShaderBindingLayout_ptr_FShaderPermutationParameters_ptr *param_13,
          uint param_14,FShaderParametersMetadata *param_15)

{
  FHashedName *this_00;
  TLinkedList<FShaderType_*> *pTVar1;
  code *pcVar2;
  wchar_t *_Str;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  FShaderType *pFVar6;
  TSet<TTuple<FHashedName,FShaderType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>,FDefaultSetAllocator>
  *this_01;
  TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FShaderType *local_68 [2];
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FHashedName *local_48;
  wchar_t **local_40;
  TStringView<wchar_t> local_38;
  
  this->ShaderTypeForDynamicCast = param_1;
  this->_padding_ = (longlong)&___7FShaderType__6B_;
  this->TypeLayout = param_2;
  this->Name = param_3;
  ::FName::FName(&this->TypeName,param_3);
  this_00 = &this->HashedName;
  FHashedName::FHashedName(this_00,&this->TypeName);
  _Str = param_4;
  FHashedName::FHashedName(&this->HashedSourceFilename,param_4);
  pTVar1 = &this->GlobalListLink;
  this->FunctionName = param_5;
  iVar4 = 0;
  iVar11 = 0;
  this->Frequency = param_6;
  this->TypeSize = param_14;
  this->TotalPermutationCount = param_7;
  this->ConstructSerializedRef = param_8;
  this->ConstructCompiledRef = param_9;
  this->ShouldCompilePermutationRef = param_10;
  this->ShouldPrecachePermutationRef = param_11;
  this->GetRayTracingPayloadTypeRef = param_12;
  this->GetShaderBindingLayoutTypeRef = param_13;
  this->RootParametersMetadata = param_15;
  this->SourceFilename = _Str;
  pTVar1->_padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink).Element = this;
  FTypeLayoutDesc::Register(param_2);
  sVar5 = wcslen(param_3);
  if ((0x3ff < (int)sVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCString::Strlen(InName) < NAME_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                         ,0x123,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FShaderType *)(*pcVar2)();
    return pFVar6;
  }
  local_58 = _Str;
  iStack_50 = iVar11;
  if (_Str != (wchar_t *)0x0) {
    sVar5 = wcslen(_Str);
    iStack_50 = (int)sVar5;
  }
  local_38._12_4_ = uStack_4c;
  local_38.Size = iStack_50;
  local_38.DataPtr = local_58;
  bVar3 = CheckVirtualShaderFilePath
                    (&local_38,(TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckVirtualShaderFilePath(InSourceFilename)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                         ,0x126,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FShaderType *)(*pcVar2)();
    return pFVar6;
  }
  if (GShaderTypeList != (TLinkedList<FShaderType_*> *)0x0) {
    GShaderTypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)GShaderTypeList;
  (this->GlobalListLink)._padding_ = (longlong)&GShaderTypeList;
  GShaderTypeList = pTVar1;
  this_01 = (TSet<TTuple<FHashedName,FShaderType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>,FDefaultSetAllocator>
             *)GetNameToTypeMap();
  local_40 = &param_4;
  param_4 = (wchar_t *)this;
  local_48 = this_00;
  TSet<TTuple<FHashedName,FShaderType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FHashedName_const_&,FShaderType_*_&&>_>
            (this_01,(TPairInitializer<FHashedName_const_&,FShaderType_*_&&> *)&param_6,
             (bool *)&local_48);
  pTVar7 = GetSortedShaderTypes(param_1);
  uVar9 = pTVar7->ArrayNum;
  pFVar8 = (pTVar7->AllocatorInstance).Data;
  if (0 < (int)uVar9) {
    do {
      uVar10 = uVar9 >> 1;
      FHashedName::FHashedName
                ((FHashedName *)&param_5,
                 (FHashedName *)(*(longlong *)(pFVar8 + (longlong)(int)(uVar10 + iVar4) * 8) + 0x28)
                );
      iVar11 = iVar4;
      if (param_5 < (wchar_t *)this_00->Hash) {
        iVar11 = uVar10 + iVar4 + (uVar9 & 1);
      }
      uVar9 = uVar10;
      iVar4 = iVar11;
    } while (uVar10 != 0);
  }
  pFVar8 = (pTVar7->AllocatorInstance).Data;
  local_68[0] = this;
  if (((pFVar8 <= (FScriptContainerElement *)local_68) &&
      ((FScriptContainerElement *)local_68 < pFVar8 + (longlong)pTVar7->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FShaderType *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = pTVar7->ArrayNum;
  if (iVar4 == pTVar7->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pFVar8 = (pTVar7->AllocatorInstance).Data;
  pTVar7->ArrayNum = iVar4 + 1;
  pFVar8 = pFVar8 + (longlong)iVar11 * 8;
  memmove(pFVar8 + 8,pFVar8,(longlong)(iVar4 - iVar11) << 3);
  *(FShaderType **)((pTVar7->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_68[0];
  return this;
}

// ~FShaderType @ 145df1de0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderType::~FShaderType(FShaderType *this)

{
  FHashedName *pFVar1;
  FScriptContainerElement *_Dst;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSet<TTuple<FHashedName,FShaderType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>,FDefaultSetAllocator>
  *this_00;
  TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  uint uVar9;
  <lambda_1> local_res8;
  
  this->_padding_ = (longlong)&___7FShaderType__6B_;
  lVar2 = (this->GlobalListLink)._padding_;
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 8) = (this->GlobalListLink)._padding_;
  }
  plVar3 = (longlong *)(this->GlobalListLink)._padding_;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (this->GlobalListLink)._padding_;
  }
  pFVar1 = &this->HashedName;
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  this_00 = (TSet<TTuple<FHashedName,FShaderType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>,FDefaultSetAllocator>
             *)GetNameToTypeMap();
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    TSet<TTuple<FHashedName,FShaderType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FHashedName>(this_00,(int)(pFVar1->Hash >> 0x20) * 0x17 + (int)pFVar1->Hash,pFVar1)
    ;
  }
  pTVar7 = GetSortedShaderTypes(this->ShaderTypeForDynamicCast);
  uVar6 = Algo::
          BinarySearchBy<TArray<FShaderType_*,TSizedDefaultAllocator<32>_>,FHashedName,_FShaderType::~FShaderType_::__l2::<lambda_1>,TLess<void>_>
                    (pTVar7,pFVar1,local_res8,(TLess<void>)local_res8);
  if (uVar6 == 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SortedIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x138,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar9 = 0;
  if ((int)uVar6 < pTVar7->ArrayNum) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  _Dst = (pTVar7->AllocatorInstance).Data + (longlong)(int)uVar6 * 8;
  iVar8 = pTVar7->ArrayNum + ~uVar6;
  if (iVar8 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar8 << 3);
  }
  pTVar7->ArrayNum = pTVar7->ArrayNum + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar7->AllocatorInstance,pTVar7->ArrayNum,&pTVar7->ArrayMax);
  return;
}

// ConstructCompiled @ 145dfe490

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __thiscall
FShaderType::ConstructCompiled(FShaderType *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShader *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145dfe497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (*this->ConstructCompiledRef)(param_1);
  return pFVar1;
}

// ConstructForDeserialization @ 145dfea50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __thiscall FShaderType::ConstructForDeserialization(FShaderType *this)

{
  FShader *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145dfea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (*this->ConstructSerializedRef)();
  return pFVar1;
}

// GetNameToTypeMap @ 145e0fa20

TMap<FHashedName,FShaderType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>_>
* __cdecl FShaderType::GetNameToTypeMap(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FShaderType::GetNameToTypeMap'::__l2::
             _dynamic_atexit_destructor_for__ShaderNameToTypeMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &ShaderNameToTypeMap;
}

// GetRayTracingPayloadType @ 145e101f0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ERayTracingPayloadType __thiscall
FShaderType::GetRayTracingPayloadType(FShaderType *this,int param_1)

{
  ERayTracingPayloadType EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145e101f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (*this->GetRayTracingPayloadTypeRef)(param_1);
  return EVar1;
}

// GetShaderBindingLayout @ 145e102d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderBindingLayout * __thiscall
FShaderType::GetShaderBindingLayout(FShaderType *this,FShaderPermutationParameters *param_1)

{
  FShaderBindingLayout *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145e102da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (*this->GetShaderBindingLayoutTypeRef)(param_1);
  return pFVar1;
}

// GetShaderTypeByName @ 145e10dc0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderType * __cdecl FShaderType::GetShaderTypeByName(wchar_t *param_1)

{
  FShaderType *pFVar1;
  TLinkedList<FShaderType_*> *pTVar2;
  int iVar3;
  
  pTVar2 = GShaderTypeList;
  while( true ) {
    if (pTVar2 == (TLinkedList<FShaderType_*> *)0x0) {
      return (FShaderType *)0x0;
    }
    pFVar1 = pTVar2->Element;
    iVar3 = wcscmp(param_1,pFVar1->Name);
    if (iVar3 == 0) break;
    pTVar2 = (TLinkedList<FShaderType_*> *)pTVar2->_padding_;
  }
  return pFVar1;
}

// GetShaderTypesByFilename @ 145e10e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<FShaderType_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FShaderType::GetShaderTypesByFilename
          (TArray<FShaderType_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          wchar_t *param_1,bool param_2)

{
  FString *pFVar1;
  undefined ***pppuVar2;
  undefined1 auStackY_a8 [32];
  FRegexPattern local_78;
  FString local_68;
  FString local_58;
  code *local_48 [2];
  undefined **local_38;
  FRegexPattern *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (param_2) {
    pFVar1 = ::FString::FString(&local_58,param_1);
    pFVar1 = ::FString::Replace(pFVar1,&local_68,L"*",L"(.)*",IgnoreCase);
    FRegexPattern::FRegexPattern(&local_78,pFVar1,CaseInsensitive);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FShaderType::GetShaderTypesByFilename'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_30 = &local_78;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FShaderType::GetShaderTypesByFilename'::__l5::<lambda_1>,bool,wchar_t_const_*>
                  ::Call;
    GetShaderTypesByFilenameFilter
              (__return_storage_ptr__,(TFunction<bool___cdecl(wchar_t_const_*)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar2 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar2 = local_20;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.Implementation.SharedReferenceCount.ReferenceController);
  }
  else {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FShaderType::GetShaderTypesByFilename'::`7'::<lambda_2>,0,0>
                ::_vftable_;
    local_20 = (undefined ***)0x0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FShaderType::GetShaderTypesByFilename'::__l7::<lambda_2>,bool,wchar_t_const_*>
                  ::Call;
    local_30 = (FRegexPattern *)param_1;
    GetShaderTypesByFilenameFilter
              (__return_storage_ptr__,(TFunction<bool___cdecl(wchar_t_const_*)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar2 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar2 = local_20;
      }
      (*(code *)(*pppuVar2)[2])();
    }
  }
  return __return_storage_ptr__;
}

// GetShaderTypesByFilenameFilter @ 145e10fa0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<FShaderType_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FShaderType::GetShaderTypesByFilenameFilter
          (TArray<FShaderType_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TFunction<bool___cdecl(wchar_t_const_*)> *param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  TArray<FShaderType_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  TLinkedList<FShaderType_*> *pTVar9;
  wchar_t *local_res8;
  FShaderType *local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (GShaderTypeList != (TLinkedList<FShaderType_*> *)0x0) {
    pTVar9 = GShaderTypeList;
    do {
      local_28[0] = pTVar9->Element;
      local_res8 = local_28[0]->SourceFilename;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar1 = *(code **)param_1;
      plVar8 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar8 = (longlong *)&param_1->field_0x10;
      }
      uVar6 = (**(code **)(*plVar8 + 8))();
      cVar3 = (*pcVar1)(uVar6,&local_res8);
      if (cVar3 != '\0') {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TArray<FShaderType_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar7;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(FShaderType **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             local_28[0];
      }
      pTVar9 = (TLinkedList<FShaderType_*> *)pTVar9->_padding_;
    } while (pTVar9 != (TLinkedList<FShaderType_*> *)0x0);
  }
  return __return_storage_ptr__;
}

// GetSortedTypes @ 145e117e0

TArray<FShaderType_*,TSizedDefaultAllocator<32>_> * __cdecl
FShaderType::GetSortedTypes(EShaderTypeForDynamicCast param_1)

{
  undefined8 *puVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    puVar1 = operator_new__(0x78);
    SortedTypesArray = (TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 7;
      SortedTypesArray = (TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *)(puVar1 + 1);
      (SortedTypesArray->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
    }
    _Init_thread_footer(&::_TSS0);
  }
  return SortedTypesArray + param_1;
}

// GetSourceHash @ 145e11980

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSHAHash * __thiscall FShaderType::GetSourceHash(FShaderType *this,EShaderPlatform param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(this->SourceFilename,param_1);
  return pFVar1;
}

// GetTypeList @ 145e15810

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TLinkedList<FShaderType_*> ** __cdecl FShaderType::GetTypeList(void)

{
  return &GShaderTypeList;
}

// Initialize @ 145e18230

void __cdecl
FShaderType::Initialize
          (TMap<FString,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,0>_>
           *param_1)

{
  return;
}

// ShouldCompilePermutation @ 145e2d290

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FShaderType::ShouldCompilePermutation(FShaderType *this,FShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  bVar1 = ShouldCompileShaderFrequency((EShaderFrequency)this->Frequency,param_1->Platform);
  if (bVar1) {
    bVar1 = (*this->ShouldCompilePermutationRef)(param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutation @ 145e2dbd0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __thiscall
FShaderType::ShouldPrecachePermutation(FShaderType *this,FShaderPermutationParameters *param_1)

{
  bool bVar1;
  EShaderPermutationPrecacheRequest EVar2;
  
  bVar1 = ShouldCompileShaderFrequency((EShaderFrequency)this->Frequency,param_1->Platform);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000145e2dc01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar2 = (*this->ShouldPrecachePermutationRef)(param_1);
    return EVar2;
  }
  return NotUsed;
}

// DumpDebugInfo @ 145e94f50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderType::DumpDebugInfo(FShaderType *this)

{
  EShaderTypeForDynamicCast EVar1;
  
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    if (3 < (byte)LogConsoleResponse._0_1_) {
      GetShaderFrequencyString((EShaderFrequency)this->Frequency,true);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      if (3 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      }
    }
  }
  EVar1 = this->ShaderTypeForDynamicCast;
  if (EVar1 == Global) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else if (EVar1 == Material) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else if (EVar1 == MeshMaterial) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else if ((EVar1 == Niagara) && (3 < (byte)LogConsoleResponse._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    return;
  }
  return;
}

