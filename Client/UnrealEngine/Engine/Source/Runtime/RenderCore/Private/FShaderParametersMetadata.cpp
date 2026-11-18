// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 12

// HashLayout<FXxHash64Builder,FXxHash64> @ 145e7ad70

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
FShaderParametersMetadata::HashLayout<FXxHash64Builder,FXxHash64>
          (FShaderParametersMetadata *this,TMemoryHasher<FXxHash64Builder,FXxHash64> *param_1)

{
  int iVar1;
  FMember *this_00;
  FMember *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Members).ArrayNum;
  this_00 = (FMember *)(this->Members).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->Members).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FMember::HashLayout<FXxHash64Builder,FXxHash64>(this_00,param_1);
    this_00 = this_00 + 1;
  }
  return;
}

// FShaderParametersMetadata @ 145e81e50

FShaderParametersMetadata * __thiscall
FShaderParametersMetadata::FShaderParametersMetadata
          (FShaderParametersMetadata *this,EUseCase param_1,EUniformBufferBindingFlags param_2,
          wchar_t *param_3,wchar_t *param_4,wchar_t *param_5,wchar_t *param_6,char *param_7,
          int param_8,uint param_9,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_10,
          bool param_11,FRHIUniformBufferLayoutInitializer *param_12,EUsageFlags param_13)

{
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TLinkedList<FShaderParametersMetadata_*> *pTVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  wchar_t *pwVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FShaderParametersMetadata *pFVar10;
  TSet<TTuple<FHashedName,FShaderParametersMetadata_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderParametersMetadata_*,0>,FDefaultSetAllocator>
  *this_00;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *pTVar11;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *this_01
  ;
  FName *this_02;
  undefined1 *puVar12;
  FHashedName *local_48;
  wchar_t **local_40;
  wchar_t **local_38;
  wchar_t **local_30;
  FString local_28;
  
  this->LayoutName = param_3;
  this->_padding_ = (longlong)&___7FShaderParametersMetadata__6B_;
  this->StructTypeName = param_4;
  this->StaticSlotName = param_6;
  this->ShaderVariableName = param_5;
  FHashedName::FHashedName(&this->ShaderVariableHashedName,param_5);
  this->FileName = param_7;
  this->FileLine = param_8;
  this->Size = param_9;
  this->UsageFlags = param_13;
  this->BindingFlags = param_2;
  pTVar1 = &this->Members;
  this->UseCase = param_1;
  (this->Layout).Reference = (FRHIUniformBufferLayout *)0x0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar9 = param_10->ArrayNum;
  _Src = (param_10->AllocatorInstance).Data;
  piVar2 = &(this->Members).ArrayMax;
  (this->Members).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar9,0,&pTVar1->AllocatorInstance,iVar9,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar9 * 0x30);
  }
  pTVar3 = &this->GlobalListLink;
  this->LayoutHash = 0;
  pTVar3->_padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink).Element = this;
  if (((this->UseCase != UniformBuffer) && ((this->BindingFlags & Static) != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("UseCase == EUseCase::UniformBuffer || !EnumHasAnyFlags(BindingFlags, EUniformBufferBindingFlags::Static)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                         ,0x1b7,L"Only uniform buffers can utilize the global binding flag."), bVar7
     )) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FShaderParametersMetadata *)(*pcVar5)();
    return pFVar10;
  }
  if ((this->StructTypeName == (wchar_t *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructTypeName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                         ,0x1b9,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FShaderParametersMetadata *)(*pcVar5)();
    return pFVar10;
  }
  if (this->UseCase == ShaderParameterStruct) {
    if ((this->StaticSlotName != (wchar_t *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!StaticSlotName",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                           ,0x1bc,L"Only uniform buffers can be tagged with a static slot."), bVar7)
       ) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FShaderParametersMetadata *)(*pcVar5)();
      return pFVar10;
    }
    if ((this->ShaderVariableName != (wchar_t *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderVariableName == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                           ,0x1be,L""), bVar7)) {
code_r0x000145e8203a:
      pcVar5 = (code *)swi(3);
      pFVar10 = (FShaderParametersMetadata *)(*pcVar5)();
      return pFVar10;
    }
  }
  else if ((this->ShaderVariableName == (wchar_t *)0x0) &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("ShaderVariableName",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                              ,0x1c2,L""), bVar7)) goto code_r0x000145e8203a;
  GetGlobalShaderVariableToStructMap();
  GetLayoutHashStructMap();
  GetNameStructMap();
  if ((this->UseCase == UniformBuffer) && (param_11 == false)) {
    if (GUniformStructList != (TLinkedList<FShaderParametersMetadata_*> *)0x0) {
      GUniformStructList->_padding_ = (longlong)pTVar3;
    }
    pTVar3->_padding_ = (longlong)GUniformStructList;
    (this->GlobalListLink)._padding_ = (longlong)&GUniformStructList;
    GUniformStructList = pTVar3;
    ::FName::FName((FName *)&param_6,this->StructTypeName);
    this_00 = (TSet<TTuple<FHashedName,FShaderParametersMetadata_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderParametersMetadata_*,0>,FDefaultSetAllocator>
               *)GetNameStructMap();
    local_40 = &param_5;
    param_5 = (wchar_t *)this;
    local_48 = &this->ShaderVariableHashedName;
    TSet<TTuple<FHashedName,FShaderParametersMetadata_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderParametersMetadata_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FHashedName_const_&,FShaderParametersMetadata_*_&&>_>
              (this_00,(TPairInitializer<FHashedName_const_&,FShaderParametersMetadata_*_&&> *)
                       &param_13,(bool *)&local_48);
    ::FName::FName((FName *)&param_4,this->ShaderVariableName);
    pTVar11 = GetGlobalShaderVariableToStructMap();
    pwVar6 = param_4;
    uVar8 = ::GetTypeHash((FNameEntryId)(uint)param_4);
    if (*(int *)&pTVar11->field_0x8 != *(int *)&pTVar11->field_0x34) {
      puVar12 = *(undefined1 **)&pTVar11->field_0x40;
      if (*(undefined1 **)&pTVar11->field_0x40 == (undefined1 *)0x0) {
        puVar12 = &pTVar11->field_0x38;
      }
      iVar9 = *(int *)(puVar12 +
                      (ulonglong)
                      (*(int *)&pTVar11->field_0x48 - 1U & (int)((ulonglong)pwVar6 >> 0x20) + uVar8)
                      * 4);
      if (iVar9 != -1) {
        do {
          lVar4 = *(longlong *)pTVar11 + (longlong)iVar9 * 0x18;
          if (*(wchar_t **)(*(longlong *)pTVar11 + (longlong)iVar9 * 0x18) == pwVar6) {
            this_02 = (FName *)(lVar4 + 8);
            if (lVar4 == 0) {
              this_02 = (FName *)0x0;
            }
            if (this_02 != (FName *)0x0) {
              ::FName::GetPlainNameString(this_02,&local_28);
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                                 ,0x1e6,
                                 L"Found duplicate Uniform Buffer shader variable name %s defined by struct %s. Previous definition found on struct %s. Uniform buffer shader names must be unique to support name-based reflection of shader source files."
                                );
              if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
              }
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                pFVar10 = (FShaderParametersMetadata *)(*pcVar5)();
                return pFVar10;
              }
            }
            break;
          }
          iVar9 = *(int *)(lVar4 + 0x10);
        } while (iVar9 != -1);
      }
    }
    this_01 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)GetGlobalShaderVariableToStructMap();
    local_38 = &param_4;
    local_30 = &param_6;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
              (this_01,(TPairInitializer<FName_const_&,FName_const_&> *)&stack0x00000010,
               (bool *)&local_38);
  }
  else {
    InitializeLayout(this,param_12);
  }
  return this;
}

// ~FShaderParametersMetadata @ 145e84d50

void __thiscall
FShaderParametersMetadata::~FShaderParametersMetadata(FShaderParametersMetadata *this)

{
  longlong lVar1;
  longlong *plVar2;
  ulong64 uVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  FRHIUniformBufferLayout *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TSet<TTuple<FHashedName,FShaderParametersMetadata_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderParametersMetadata_*,0>,FDefaultSetAllocator>
  *this_01;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *this_02
  ;
  FName *pFVar9;
  TSet<TTuple<unsigned_int,FShaderParametersMetadata_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FShaderParametersMetadata_*,0>,FDefaultSetAllocator>
  *this_03;
  uint local_res8 [2];
  FName local_res10;
  FName local_res18 [2];
  
  lVar1 = (this->GlobalListLink)._padding_;
  this->_padding_ = (longlong)&___7FShaderParametersMetadata__6B_;
  if (lVar1 != 0) {
    if ((this->UseCase != UniformBuffer) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("UseCase == EUseCase::UniformBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                           ,0x202,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar1 = (this->GlobalListLink)._padding_;
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 8) = (this->GlobalListLink)._padding_;
    }
    plVar2 = (longlong *)(this->GlobalListLink)._padding_;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (this->GlobalListLink)._padding_;
    }
    (this->GlobalListLink)._padding_ = 0;
    (this->GlobalListLink)._padding_ = 0;
    this_01 = (TSet<TTuple<FHashedName,FShaderParametersMetadata_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderParametersMetadata_*,0>,FDefaultSetAllocator>
               *)GetNameStructMap();
    if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
      uVar3 = (this->ShaderVariableHashedName).Hash;
      TSet<TTuple<FHashedName,FShaderParametersMetadata_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderParametersMetadata_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FHashedName>
                (this_01,(int)(uVar3 >> 0x20) * 0x17 + (int)uVar3,&this->ShaderVariableHashedName);
    }
    this_02 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)GetGlobalShaderVariableToStructMap();
    pFVar9 = ::FName::FName(local_res18,this->ShaderVariableName,FNAME_Find);
    FVar4 = *pFVar9;
    local_res10 = FVar4;
    if (*(int *)&(this_02->Elements).field_0x8 != *(int *)&(this_02->Elements).field_0x34) {
      uVar8 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      RemoveImpl<FName>(this_02,FVar4.Number + uVar8,&local_res10);
    }
    if ((this->Layout).Reference != (FRHIUniformBufferLayout *)0x0) {
      this_03 = (TSet<TTuple<unsigned_int,FShaderParametersMetadata_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FShaderParametersMetadata_*,0>,FDefaultSetAllocator>
                 *)GetLayoutHashStructMap();
      if (((this->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_res8[0] = ((this->Layout).Reference)->Hash;
      if (*(int *)&(this_03->Elements).field_0x8 != *(int *)&(this_03->Elements).field_0x34) {
        TSet<TTuple<unsigned_int,FShaderParametersMetadata_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FShaderParametersMetadata_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned_int>(this_03,local_res8[0],local_res8);
      }
    }
  }
  pFVar5 = (this->Members).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  this_00 = (this->Layout).Reference;
  if (this_00 == (FRHIUniformBufferLayout *)0x0) {
    return;
  }
  FRHIResource::Release((FRHIResource *)this_00);
  return;
}

// operator() @ 145e87db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
`FShaderParametersMetadata::InitializeLayout'::__l66::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__)

{
  char *_Str;
  undefined8 uVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  _Str = *(char **)(*(longlong *)this + 0x30);
  uVar1 = **(undefined8 **)((longlong)this + 8);
  uVar2 = *(undefined8 *)(*(longlong *)this + 0x10);
  local_148._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_148.Ptr = (wchar_t *)0x0;
    local_148.StringLength = 0;
  }
  else {
    sVar3 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,_Str,(int)sVar3,Yes);
  }
  local_158 = uVar2;
  local_150 = uVar1;
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s(%i): Shader parameter %s::%s error:\n");
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return __return_storage_ptr__;
}

// FindMemberFromOffset @ 145e9ac80

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
FShaderParametersMetadata::FindMemberFromOffset
          (FShaderParametersMetadata *this,ushort param_1,FShaderParametersMetadata **param_2,
          FMember **param_3,int *param_4,FString *param_5)

{
  EUniformBufferBaseType EVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  ulonglong uVar9;
  FMember *pFVar10;
  FMember *pFVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  FShaderParametersMetadata **local_res18;
  FMember **local_res20;
  FString local_68;
  FString local_58;
  
  local_res18 = param_2;
  local_res20 = param_3;
LAB_145e9aca9:
  if ((this->Size <= (uint)param_1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MemberOffset < GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                         ,0x43a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar12 = (this->Members).ArrayNum;
  uVar9 = (ulonglong)(int)uVar12;
  pFVar10 = (FMember *)(this->Members).AllocatorInstance.Data;
  pFVar11 = pFVar10 + uVar9;
  do {
    if ((this->Members).ArrayNum != (int)uVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar11) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                         ,0x47f,L"Looks like this offset is invalid.");
      if (!bVar8) {
        return;
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EVar1 = pFVar10->BaseType;
    uVar3 = pFVar10->NumElements;
    if (EVar1 == UBMT_NESTED_STRUCT) {
      if (uVar3 == 0) {
LAB_145e9ad68:
        pFVar5 = pFVar10->Struct;
        if ((uint)param_1 < pFVar5->Size + pFVar10->Offset) {
          if (param_5 != (FString *)0x0) {
            ::FString::PrintfImpl(&local_58,L"%s%s::");
            if (param_5 != &local_58) {
              pFVar6 = (param_5->Data).AllocatorInstance.Data;
              if (pFVar6 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar6);
              }
              (param_5->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
              (param_5->Data).ArrayNum = local_58.Data.ArrayNum;
              (param_5->Data).ArrayMax = local_58.Data.ArrayMax;
              local_58.Data.ArrayNum = 0;
              local_58.Data.ArrayMax = 0;
              local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
          param_1 = param_1 - (short)pFVar10->Offset;
          this = pFVar5;
          goto LAB_145e9aca9;
        }
      }
      else {
        pFVar5 = pFVar10->Struct;
        uVar2 = (ushort)pFVar10->Offset;
        uVar4 = pFVar5->Size;
        if ((uVar2 <= param_1) && (param_1 < (ushort)((short)uVar3 * (short)uVar4 + uVar2))) break;
      }
    }
    else {
      if (EVar1 == UBMT_INCLUDED_STRUCT) goto LAB_145e9ad68;
      if (((uVar3 == 0) || (UBMT_RESOURCE_COLLECTION < EVar1)) ||
         ((0x10fff60U >> (EVar1 & 0x1f) & 1) == 0)) {
        if (pFVar10->Offset == (uint)param_1) {
          *local_res18 = this;
          *local_res20 = pFVar10;
          *param_4 = 0;
          return;
        }
      }
      else {
        uVar2 = (ushort)pFVar10->Offset;
        if ((uVar2 <= param_1) && (param_1 < (ushort)((short)uVar3 * 8 + uVar2))) {
          if (((param_1 & 7) != 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(MemberOffset % sizeof(uint64)) == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                                 ,0x46f,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *local_res18 = this;
          *local_res20 = pFVar10;
          *param_4 = (int)((ulonglong)param_1 - (ulonglong)uVar2 >> 3);
          return;
        }
      }
    }
    uVar9 = (ulonglong)uVar12;
    pFVar10 = pFVar10 + 1;
  } while( true );
  uVar12 = (uint)param_1 - (uint)uVar2;
  if ((uVar12 % uVar4 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(MemberOffsetInArray % StructSize) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                         ,0x459,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (param_5 != (FString *)0x0) {
    ::FString::PrintfImpl(&local_68,L"%s%s[%u]::");
    if (param_5 != &local_68) {
      pFVar6 = (param_5->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (param_5->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (param_5->Data).ArrayNum = local_68.Data.ArrayNum;
      (param_5->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  param_1 = (short)uVar12 - (short)(uVar12 / uVar4) * (short)uVar4;
  this = pFVar5;
  goto LAB_145e9aca9;
}

// GetFullMemberCodeName @ 145e9d5f0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FString * __thiscall
FShaderParametersMetadata::GetFullMemberCodeName
          (FShaderParametersMetadata *this,FString *__return_storage_ptr__,ushort param_1)

{
  EUniformBufferBaseType EVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FString *pFVar9;
  ulonglong uVar10;
  FMember *pFVar11;
  uint uVar12;
  FMember *pFVar13;
  int local_res8 [2];
  uint local_res10;
  undefined1 local_res18 [8];
  FMember *local_res20;
  FShaderParametersMetadata *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  uVar12 = (uint)param_1;
  local_90 = (FShaderParametersMetadata *)0x0;
  local_res20 = (FMember *)0x0;
  local_res8[0] = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  if ((this->Size <= uVar12) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MemberOffset < GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                         ,0x43a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FString *)(*pcVar7)();
    return pFVar9;
  }
  local_res10 = (this->Members).ArrayNum;
  uVar10 = (ulonglong)(int)local_res10;
  pFVar11 = (FMember *)(this->Members).AllocatorInstance.Data;
  pFVar13 = pFVar11 + uVar10;
  do {
    if ((this->Members).ArrayNum != (int)uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar11 == pFVar13) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                         ,0x47f,L"Looks like this offset is invalid.");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar9 = (FString *)(*pcVar7)();
        return pFVar9;
      }
      goto LAB_145e9d8d3;
    }
    EVar1 = pFVar11->BaseType;
    uVar3 = pFVar11->NumElements;
    if (EVar1 == UBMT_NESTED_STRUCT) {
      if (uVar3 == 0) {
LAB_145e9d6e8:
        pFVar5 = pFVar11->Struct;
        if (uVar12 < pFVar5->Size + pFVar11->Offset) {
          ::FString::PrintfImpl(&local_58,L"%s%s::");
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          local_88.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          local_88.Data.ArrayMax = local_58.Data.ArrayMax;
          local_88.Data.ArrayNum = local_58.Data.ArrayNum;
          FindMemberFromOffset
                    (pFVar5,param_1 - (short)pFVar11->Offset,&local_90,&local_res20,local_res8,
                     &local_88);
          goto LAB_145e9d8d3;
        }
      }
      else {
        pFVar5 = pFVar11->Struct;
        uVar2 = (ushort)pFVar11->Offset;
        uVar4 = pFVar5->Size;
        if ((uVar2 <= param_1) && (param_1 < (ushort)((short)uVar3 * (short)uVar4 + uVar2))) {
          uVar12 = uVar12 - uVar2;
          if ((uVar12 % uVar4 != 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(MemberOffsetInArray % StructSize) == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                                 ,0x459,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            pFVar9 = (FString *)(*pcVar7)();
            return pFVar9;
          }
          ::FString::PrintfImpl(&local_68,L"%s%s[%u]::");
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          local_88.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
          local_88.Data.ArrayMax = local_68.Data.ArrayMax;
          local_88.Data.ArrayNum = local_68.Data.ArrayNum;
          FindMemberFromOffset
                    (pFVar5,(short)uVar12 - (short)(uVar12 / uVar4) * (short)uVar4,&local_90,
                     &local_res20,local_res8,&local_88);
          goto LAB_145e9d8d3;
        }
      }
    }
    else {
      if (EVar1 == UBMT_INCLUDED_STRUCT) goto LAB_145e9d6e8;
      if (((uVar3 == 0) || (UBMT_RESOURCE_COLLECTION < EVar1)) ||
         ((0x10fff60U >> (EVar1 & 0x1f) & 1) == 0)) {
        if (pFVar11->Offset == uVar12) {
          local_res8[0] = 0;
          local_res20 = pFVar11;
          local_90 = this;
LAB_145e9d8d3:
          ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s");
          if (local_res20->NumElements != 0) {
            ::FString::PrintfImpl(&local_78,L"%s%s[%d]");
            if (__return_storage_ptr__ != &local_78) {
              pFVar6 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
              if (pFVar6 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar6);
              }
              (__return_storage_ptr__->Data).AllocatorInstance.Data =
                   local_78.Data.AllocatorInstance.Data;
              (__return_storage_ptr__->Data).ArrayNum = local_78.Data.ArrayNum;
              (__return_storage_ptr__->Data).ArrayMax = local_78.Data.ArrayMax;
              local_78.Data.ArrayNum = 0;
              local_78.Data.ArrayMax = 0;
              local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          return __return_storage_ptr__;
        }
      }
      else {
        uVar2 = (ushort)pFVar11->Offset;
        if ((uVar2 <= param_1) && (param_1 < (ushort)((short)uVar3 * 8 + uVar2))) {
          if (((param_1 & 7) != 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(MemberOffset % sizeof(uint64)) == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                                 ,0x46f,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            pFVar9 = (FString *)(*pcVar7)();
            return pFVar9;
          }
          local_res8[0] = (int)((ulonglong)param_1 - (ulonglong)uVar2 >> 3);
          local_res20 = pFVar11;
          local_90 = this;
          goto LAB_145e9d8d3;
        }
      }
    }
    uVar10 = (ulonglong)local_res10;
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// GetLayoutHash @ 145e9db00

uint __thiscall FShaderParametersMetadata::GetLayoutHash(FShaderParametersMetadata *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->UseCase != ShaderParameterStruct) && (this->UseCase != UniformBuffer)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UseCase == EUseCase::ShaderParameterStruct || UseCase == EUseCase::UniformBuffer"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x1a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if ((this->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x1a3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return this->LayoutHash;
}

// GetNameStructMap @ 145e9dde0

TMap<FHashedName,FShaderParametersMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderParametersMetadata_*,0>_>
* __cdecl FShaderParametersMetadata::GetNameStructMap(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FShaderParametersMetadata::GetNameStructMap'::__l2::
             _dynamic_atexit_destructor_for__NameStructMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &NameStructMap;
}

// GetNestedStructs @ 145e9de50

void __thiscall
FShaderParametersMetadata::GetNestedStructs
          (FShaderParametersMetadata *this,
          TArray<FShaderParametersMetadata_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  FShaderParametersMetadata *local_18 [2];
  
  uVar7 = 0;
  if (0 < (this->Members).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Members).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
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
      local_18[0] = *(FShaderParametersMetadata **)
                     ((this->Members).AllocatorInstance.Data + lVar6 + 0x28);
      if (local_18[0] != (FShaderParametersMetadata *)0x0) {
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_1->ArrayNum;
        if (iVar5 == param_1->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar5 + 1;
        *(FShaderParametersMetadata **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             local_18[0];
        GetNestedStructs(local_18[0],param_1);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x30;
    } while ((int)uVar7 < (this->Members).ArrayNum);
  }
  return;
}

// GetStructList @ 145ea1fa0

TLinkedList<FShaderParametersMetadata_*> ** __cdecl FShaderParametersMetadata::GetStructList(void)

{
  return &GUniformStructList;
}

// InitializeAllUniformBufferStructs @ 145ea3b50

void __cdecl FShaderParametersMetadata::InitializeAllUniformBufferStructs(void)

{
  TLinkedList<FShaderParametersMetadata_*> *pTVar1;
  
  for (pTVar1 = GUniformStructList; pTVar1 != (TLinkedList<FShaderParametersMetadata_*> *)0x0;
      pTVar1 = (TLinkedList<FShaderParametersMetadata_*> *)pTVar1->_padding_) {
    if ((pTVar1->Element->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
      InitializeLayout(pTVar1->Element,(FRHIUniformBufferLayoutInitializer *)0x0);
    }
  }
  return;
}

// InitializeLayout @ 145ea3b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
FShaderParametersMetadata::InitializeLayout
          (FShaderParametersMetadata *this,FRHIUniformBufferLayoutInitializer *param_1)

{
  TMemoryImagePtr<FScriptContainerElement>_u_0 *pTVar1;
  int *piVar2;
  TRefCountPtr<FRHIUniformBufferLayout_const_> *pTVar3;
  byte bVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  code *pcVar7;
  TMemoryImagePtr<FScriptContainerElement>_u_0 *pTVar8;
  bool bVar9;
  uchar uVar10;
  bool bVar11;
  EShaderCodeResourceBindingType EVar12;
  size_t sVar13;
  FUniformBufferStaticSlotRegistry *this_00;
  FName *pFVar14;
  ForAnyElementType FVar15;
  ForAnyElementType FVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  FRHIUniformBufferLayout *pFVar19;
  FRHIUniformBufferLayout *this_01;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar20;
  longlong lVar21;
  ForAnyElementType FVar22;
  FRHIUniformBufferResourceInitializer *pFVar23;
  undefined1 *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  TMemoryImagePtr<FScriptContainerElement>_u_0 *pTVar29;
  TMemoryImagePtr<FScriptContainerElement>_u_0 *pTVar30;
  FMember *this_02;
  FShaderParametersMetadata **ppFVar31;
  int iVar32;
  FMember *pFVar33;
  ulonglong uVar34;
  ForAnyElementType FVar35;
  byte bVar36;
  int iVar37;
  longlong lVar38;
  uint uVar39;
  TMemoryImagePtr<FScriptContainerElement>_u_0 *pTVar40;
  undefined1 auStackY_df8 [32];
  undefined4 local_d7c;
  FIdentityFunctor local_d78;
  char local_d77;
  undefined1 local_d76;
  char local_d75;
  EUseCase local_d74;
  char local_d73;
  byte local_d72;
  ForAnyElementType local_d70;
  int local_d68;
  int iStack_d64;
  uint local_d60;
  uint local_d5c;
  TMemoryImagePtr<FScriptContainerElement>_u_0 *local_d58;
  undefined1 local_d50 [8];
  wchar_t *local_d48;
  longlong local_d40;
  longlong local_d38;
  longlong local_d30;
  FLLMScope local_d28 [2];
  longlong local_d20;
  FShaderParametersMetadata *local_d18;
  uint local_d10 [2];
  longlong local_d08;
  longlong local_d00;
  FShaderParametersMetadata *local_cf8;
  FScriptContainerElement *pFStack_cf0;
  undefined4 local_ce8;
  undefined4 uStack_ce4;
  longlong local_ce0;
  longlong lStack_cd8;
  int local_cd0;
  undefined4 uStack_ccc;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_cc0;
  int local_cb8 [2];
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_cb0;
  undefined8 local_ca8;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_ca0;
  undefined8 local_c98;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_c90;
  undefined8 local_c88;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_c80;
  undefined8 local_c78;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_c70;
  undefined8 local_c68;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_c60;
  undefined8 local_c58;
  undefined8 local_c50;
  undefined4 local_c48;
  undefined1 local_c44;
  TPairInitializer<unsigned_int_&&,FShaderParametersMetadata_*_&&> local_c40;
  FString local_c30;
  FString local_c20;
  FString local_c10;
  FString local_c00;
  FString local_bf0;
  FString local_be0;
  FString local_bd0;
  uint local_bc0;
  FShaderParametersMetadata *local_bb8;
  FMemScope local_bb0;
  uint *local_ba8;
  FShaderParametersMetadata **local_ba0;
  FString local_b98;
  longlong local_b88;
  FName local_b80 [8];
  TMemoryHasher<FXxHash64Builder,FXxHash64> local_b40;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_840;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_720;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_600;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4e0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_180;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_df8;
  local_d18 = this;
  if (((this->Layout).Reference != (FRHIUniformBufferLayout *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                         ,0x23c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pwVar5 = this->LayoutName;
  local_cc0.Packed = 0;
  local_cb8[0] = 0;
  local_cb8[1] = 0;
  if ((pwVar5 != (wchar_t *)0x0) && (*pwVar5 != L'\0')) {
    sVar13 = wcslen(pwVar5);
    iVar32 = (int)sVar13 + 1;
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (2,2,iVar32,(ForAnyElementType *)&local_cc0.Frozen,local_cb8,local_cb8 + 1);
    TVar20 = local_cc0;
    if ((local_cc0.Packed & 1) != 0) {
      TVar20.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&local_cc0 + ((longlong)local_cc0.Packed >> 0x18));
    }
    FGenericPlatformString::Convert<wchar_t,wchar_t>
              ((wchar_t *)TVar20.UnfrozenPtr,iVar32,pwVar5,iVar32);
  }
  local_cb0.Packed = 0;
  local_ca8 = 0;
  pTVar40 = &local_cc0;
  if (param_1 != (FRHIUniformBufferLayoutInitializer *)0x0) {
    pTVar40 = (TMemoryImagePtr<FScriptContainerElement>_u_0 *)param_1;
  }
  local_ca0.Packed = 0;
  local_c98 = 0;
  local_c90.Packed = 0;
  local_c88 = 0;
  local_c80.Packed = 0;
  local_c78 = 0;
  local_c70.Packed = 0;
  local_c68 = 0;
  local_c60.Packed = 0;
  local_c58 = 0;
  local_c50 = 0;
  local_c48 = 0x1ffffff;
  local_c44 = 0;
  *(uint *)((longlong)pTVar40 + 0x74) = this->Size;
  if ((this->UsageFlags & UniformView) != None) {
    *(ERHIUniformBufferFlags *)((longlong)pTVar40 + 0x7c) =
         *(ERHIUniformBufferFlags *)((longlong)pTVar40 + 0x7c) | UniformView;
  }
  if ((this->UsageFlags & (UniformView|NoEmulatedUniformBuffer)) != None) {
    *(ERHIUniformBufferFlags *)((longlong)pTVar40 + 0x7c) =
         *(ERHIUniformBufferFlags *)((longlong)pTVar40 + 0x7c) | NoEmulatedUniformBuffer;
  }
  if ((this->UsageFlags & NeedsReflectedMembers) != None) {
    *(ERHIUniformBufferFlags *)((longlong)pTVar40 + 0x7c) =
         *(ERHIUniformBufferFlags *)((longlong)pTVar40 + 0x7c) | NeedsReflectedMembers;
  }
  local_d58 = pTVar40;
  if (this->StaticSlotName == (wchar_t *)0x0) {
    if (((this->BindingFlags & Static) != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAnyFlags(BindingFlags, EUniformBufferBindingFlags::Static)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                           ,0x266,
                           L"Uniform buffer of type \'%s\' and shader name \'%s\' has no binding slot specified, but the binding model specifies \'Global\'."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if (((this->BindingFlags & Static) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAnyFlags(BindingFlags, EUniformBufferBindingFlags::Static)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                           ,0x254,
                           L"Uniform buffer of type \'%s\' and shader name \'%s\' attempted to reference static slot \'%s\', but the binding model does not contain \'Global\'."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((this->UseCase != UniformBuffer) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("UseCase == EUseCase::UniformBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                           ,600,
                           L"Attempted to assign static slot %s to uniform buffer %s. Static slots are only supported for compile-time uniform buffers."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = FUniformBufferStaticSlotRegistry::Get();
    pFVar14 = ::FName::FName(local_b80,this->StaticSlotName);
    uVar10 = FUniformBufferStaticSlotRegistry::FindSlotByName(this_00,*pFVar14);
    if ((uVar10 == 0xff) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsUniformBufferStaticSlotValid(StaticSlot)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                           ,0x25e,
                           L"Uniform buffer of type \'%s\' and shader name \'%s\' attempted to reference static slot \'%s\', but the slot could not be found in the registry."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(uchar *)((longlong)pTVar40 + 0x7a) = uVar10;
    *(EUniformBufferBindingFlags *)((longlong)pTVar40 + 0x7b) = this->BindingFlags;
  }
  uVar25 = (this->Members).ArrayNum;
  local_d70.Data = (FScriptContainerElement *)0x0;
  local_d68 = 0;
  iStack_d64 = 0;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  if (0 < (int)uVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar25,&local_d70,0,&iStack_d64);
  }
  uVar25 = 0;
  if (0 < (this->Members).ArrayNum) {
    do {
      uVar39 = 0;
      if ((int)uVar25 < (this->Members).ArrayNum) {
        uVar39 = ~uVar25 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_ce8 = 0;
      pFStack_cf0 = (this->Members).AllocatorInstance.Data + (longlong)(int)uVar25 * 0x30;
      local_cf8 = this;
      if (((local_d70.Data <= (FScriptContainerElement *)&local_cf8) &&
          ((FScriptContainerElement *)&local_cf8 < local_d70.Data + (longlong)iStack_d64 * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_d68 == iStack_d64) {
        local_d68 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_d70,&iStack_d64);
      }
      lVar21 = (longlong)local_d68;
      uVar25 = uVar25 + 1;
      local_d68 = local_d68 + 1;
      *(FShaderParametersMetadata **)(local_d70.Data + lVar21 * 0x18) = local_cf8;
      *(FScriptContainerElement **)(local_d70.Data + lVar21 * 0x18 + 8) = pFStack_cf0;
      *(ulonglong *)(local_d70.Data + lVar21 * 0x18 + 0x10) = CONCAT44(uStack_ce4,local_ce8);
    } while ((int)uVar25 < (this->Members).ArrayNum);
  }
  local_d74 = this->UseCase;
  if ((local_d74 == ShaderParameterStruct) || (local_d75 = '\0', local_d74 == UniformBuffer)) {
    local_d75 = '\x01';
  }
  local_d60 = 0;
  if (0 < local_d68) {
    local_d20 = 0;
    local_d08 = 0;
    bVar36 = 0;
    do {
      lVar38 = local_d08;
      lVar21 = local_d20;
      uVar25 = local_d60;
      uVar26 = ~local_d60;
      uVar39 = 0;
      if ((int)local_d60 < local_d68) {
        uVar39 = uVar26 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar38 = *(longlong *)(local_d70.Data + lVar38);
      uVar39 = 0;
      if ((int)uVar25 < local_d68) {
        uVar39 = uVar26 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_d30 = *(longlong *)(local_d70.Data + lVar21 * 0x18 + 8);
      local_d5c = *(uint *)(local_d30 + 0x24);
      bVar4 = *(byte *)(local_d30 + 0x18);
      local_d40 = *(longlong *)(local_d30 + 0x28);
      local_d48 = *(wchar_t **)(local_d30 + 8);
      if ((0x18 < bVar4) || (local_d77 = '\x01', (0x1000160U >> (bVar4 & 0x1f) & 1) == 0)) {
        local_d77 = '\0';
      }
      local_d73 = (byte)(bVar4 - 9) < 0xb;
      if ((bVar4 == 2) || ((byte)(bVar4 - 3) < 2)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      local_d72 = bVar36 | bVar4 == 7;
      local_d38 = lVar38;
      local_d00 = local_d30;
      if (bVar4 == 1) {
        pcVar6 = *(char **)(lVar38 + 0x30);
        local_840._padding_ = 0;
        if (pcVar6 == (char *)0x0) {
          local_840.Ptr = (wchar_t *)0x0;
          local_840.StringLength = 0;
        }
        else {
          sVar13 = strlen(pcVar6);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_840,pcVar6,(int)sVar13,Yes);
        }
        ::FString::PrintfImpl(&local_c30,L"%s(%i): Shader parameter %s::%s error:\n");
        if ((void *)local_840._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_840._padding_);
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
        FVar22.Data = local_c30.Data.AllocatorInstance.Data;
LAB_145ea44d1:
        if (FVar22.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar22.Data);
        }
      }
      else if ((bVar4 == 0x16) || (bVar4 == 0x13)) {
        if ((local_d40 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ChildStruct",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                                ,0x2a5,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_d74 != ShaderParameterStruct) {
          pcVar6 = *(char **)(lVar38 + 0x30);
          local_720._padding_ = 0;
          if (pcVar6 == (char *)0x0) {
            local_720.Ptr = (wchar_t *)0x0;
            local_720.StringLength = 0;
          }
          else {
            sVar13 = strlen(pcVar6);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_720,pcVar6,(int)sVar13,Yes);
          }
          ::FString::PrintfImpl(&local_c10,L"%s(%i): Shader parameter %s::%s error:\n");
          if ((void *)local_720._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_720._padding_);
          }
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
          FVar22.Data = local_c10.Data.AllocatorInstance.Data;
          goto LAB_145ea44d1;
        }
      }
      else if ((byte)(bVar4 - 0x14) < 2) {
        if ((local_d40 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ChildStruct",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                                ,0x2ae,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_d75 == '\0') {
          pcVar6 = *(char **)(lVar38 + 0x30);
          local_180._padding_ = 0;
          if (pcVar6 == (char *)0x0) {
            local_180.Ptr = (wchar_t *)0x0;
            local_180.StringLength = 0;
          }
          else {
            sVar13 = strlen(pcVar6);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_180,pcVar6,(int)sVar13,Yes);
          }
          ::FString::PrintfImpl(&local_c20,L"%s(%i): Shader parameter %s::%s error:\n");
          if ((void *)local_180._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_180._padding_);
          }
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)&PTR_u__sShader_parame_151168398,
                     (FLogCategoryBase *)&LogRendererCore);
          FVar22.Data = local_c20.Data.AllocatorInstance.Data;
          goto LAB_145ea44d1;
        }
        if ((*(char *)(local_d40 + 0x40) != '\0') && (local_d18->UseCase == ShaderParameterStruct))
        {
          `FShaderParametersMetadata::InitializeLayout'::__l66::<lambda_1>::operator()
                    (&local_d38,&local_b98);
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
          lVar38 = local_d38;
          if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b98.Data.AllocatorInstance.Data);
            lVar38 = local_d38;
          }
        }
      }
      if (((local_d18->UseCase != ShaderParameterStruct) && (bVar4 < 0x18)) &&
         ((0xc98c00U >> (bVar4 & 0x1f) & 1) != 0)) {
        pcVar6 = *(char **)(lVar38 + 0x30);
        local_600._padding_ = 0;
        if (pcVar6 == (char *)0x0) {
          local_600.Ptr = (wchar_t *)0x0;
          local_600.StringLength = 0;
        }
        else {
          sVar13 = strlen(pcVar6);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_600,pcVar6,(int)sVar13,Yes);
        }
        ::FString::PrintfImpl(&local_c00,L"%s(%i): Shader parameter %s::%s error:\n");
        if ((void *)local_600._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_600._padding_);
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
        if (local_c00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c00.Data.AllocatorInstance.Data);
        }
      }
      if ((((local_d74 == ShaderParameterStruct) && ((local_d77 != '\0' || (local_d73 != '\0')))) ||
          (bVar9)) || (bVar4 == 0x14)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if ((local_d5c != 0) && (!bVar9)) {
        pcVar6 = *(char **)(lVar38 + 0x30);
        local_4e0._padding_ = 0;
        if (pcVar6 == (char *)0x0) {
          local_4e0.Ptr = (wchar_t *)0x0;
          local_4e0.StringLength = 0;
        }
        else {
          sVar13 = strlen(pcVar6);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_4e0,pcVar6,(int)sVar13,Yes);
        }
        ::FString::PrintfImpl(&local_bf0,L"%s(%i): Shader parameter %s::%s error:\n");
        if ((void *)local_4e0._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4e0._padding_);
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
        if (local_bf0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_bf0.Data.AllocatorInstance.Data);
        }
      }
      if ((local_d77 != '\0') ||
         ((local_d73 != '\0' && ((0x13 < bVar4 || ((0x98c00U >> (bVar4 & 0x1f) & 1) == 0)))))) {
        EVar12 = ParseShaderResourceBindingType(local_d48);
        if (EVar12 == Invalid) {
          if (2 < (byte)LogRendererCore._0_1_) {
            pcVar6 = *(char **)(lVar38 + 0x30);
            local_3c0._padding_ = 0;
            if (pcVar6 == (char *)0x0) {
              local_3c0.Ptr = (wchar_t *)0x0;
              local_3c0.StringLength = 0;
            }
            else {
              sVar13 = strlen(pcVar6);
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_3c0,pcVar6,(int)sVar13,Yes);
            }
            ::FString::PrintfImpl(&local_be0,L"%s(%i): Shader parameter %s::%s error:\n");
            if ((void *)local_3c0._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_3c0._padding_);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
            if (local_be0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_be0.Data.AllocatorInstance.Data);
            }
          }
        }
        else if (EVar12 == SamplerState) {
          bVar9 = bVar4 == 8;
LAB_145ea48f7:
          if (bVar9) goto LAB_145ea49de;
        }
        else if ((byte)(EVar12 - Texture2D) < 6) {
          if ((bVar4 < 0xe) && ((0x3260U >> (bVar4 & 0x1f) & 1) != 0)) goto LAB_145ea49de;
        }
        else if (EVar12 == TextureMetadata) {
          if ((bVar4 == 6) || ((byte)(bVar4 - 0xc) < 2)) goto LAB_145ea49de;
        }
        else if (((byte)(EVar12 - Buffer) < 3) || (EVar12 == RaytracingAccelerationStructure)) {
          if ((bVar4 == 6) || (bVar4 == 0x11)) goto LAB_145ea49de;
        }
        else if (((byte)(EVar12 - RWTexture2D) < 5) || (EVar12 == RasterizerOrderedTexture2D)) {
          if ((bVar4 == 7) || (bVar4 == 0xe)) goto LAB_145ea49de;
        }
        else if ((byte)(EVar12 - RWBuffer) < 3) {
          if ((bVar4 == 7) || (bVar4 == 0x12)) goto LAB_145ea49de;
        }
        else if (EVar12 == ResourceCollection) {
          bVar9 = bVar4 == 0x18;
          goto LAB_145ea48f7;
        }
        if ((bVar4 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ShaderParameterBaseType != UBMT_INVALID",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                               ,0x133,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (2 < (byte)LogRendererCore._0_1_) {
          pcVar6 = *(char **)(lVar38 + 0x30);
          local_2a0._padding_ = 0;
          if (pcVar6 == (char *)0x0) {
            local_2a0.Ptr = (wchar_t *)0x0;
            local_2a0.StringLength = 0;
          }
          else {
            sVar13 = strlen(pcVar6);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_2a0,pcVar6,(int)sVar13,Yes);
          }
          ::FString::PrintfImpl(&local_bd0,L"%s(%i): Shader parameter %s::%s error:\n");
          if ((void *)local_2a0._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_2a0._padding_);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
          if (local_bd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_bd0.Data.AllocatorInstance.Data);
          }
        }
      }
LAB_145ea49de:
      pTVar40 = local_d58;
      if (local_d72 != 0) {
        *(ERHIUniformBufferFlags *)((longlong)local_d58 + 0x7c) =
             *(ERHIUniformBufferFlags *)((longlong)local_d58 + 0x7c) | HasNonGraphOutputs;
      }
      if (((byte)(bVar4 - 5) < 0xf) || ((byte)(bVar4 - 0x16) < 3)) {
        uVar25 = 1;
        if (local_d5c != 0) {
          uVar25 = local_d5c;
        }
        uVar39 = 0;
        if (uVar25 != 0) {
          pTVar1 = local_d58 + 2;
          uVar26 = ~local_d60;
          local_d48 = (wchar_t *)(local_d20 * 0x18);
          do {
            pwVar5 = local_d48;
            uVar27 = 0;
            if ((int)local_d60 < local_d68) {
              uVar27 = uVar26 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar27 = *(int *)((longlong)(pwVar5 + 8) + local_d70.Data) + uVar39 * 8 +
                     *(int *)(local_d00 + 0x14);
            if ((0xffff < uVar27) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AbsoluteMemberOffset < (1u << (sizeof(FRHIUniformBufferResourceInitializer::MemberOffset) * 8))"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                                   ,0x32c,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            puVar18 = (undefined4 *)(pTVar1->Frozen).Packed;
            local_d7c._0_3_ = CONCAT12(bVar4,(short)uVar27);
            puVar17 = (undefined4 *)
                      ((longlong)&(pTVar1->Frozen).Packed + ((longlong)puVar18 >> 0x18));
            if (((ulonglong)puVar18 & 1) == 0) {
              puVar17 = puVar18;
            }
            if (puVar17 <= &local_d7c) {
              puVar17 = (undefined4 *)
                        ((longlong)&(pTVar1->Frozen).Packed + ((longlong)puVar18 >> 0x18));
              if (((ulonglong)puVar18 & 1) == 0) {
                puVar17 = puVar18;
              }
              if ((&local_d7c < puVar17 + *(int *)((longlong)pTVar40 + 0x1c)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            iVar32 = (int)pTVar40[3].Frozen.Packed;
            if (iVar32 == *(int *)((longlong)pTVar40 + 0x1c)) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                 (0x204,(ForAnyElementType *)&pTVar1->Frozen,
                                  (int *)((longlong)pTVar40 + 0x1c));
            }
            pTVar30 = local_d58;
            *(int *)&pTVar40[3].Frozen.Packed = iVar32 + 1;
            puVar24 = (undefined1 *)(pTVar1->Frozen).Packed;
            if (((ulonglong)puVar24 & 1) != 0) {
              puVar24 = (undefined1 *)
                        ((longlong)&(pTVar1->Frozen).Packed + ((longlong)puVar24 >> 0x18));
            }
            *(undefined4 *)(puVar24 + (longlong)iVar32 * 4) = local_d7c;
            if (((byte)(bVar4 - 9) < 6) || (bVar4 == 0x17)) {
              pTVar29 = local_d58 + 4;
              puVar18 = (undefined4 *)(pTVar29->Frozen).Packed;
              puVar17 = (undefined4 *)
                        ((longlong)&(pTVar29->Frozen).Packed + ((longlong)puVar18 >> 0x18));
              if (((ulonglong)puVar18 & 1) == 0) {
                puVar17 = puVar18;
              }
              if (puVar17 <= &local_d7c) {
                if (((ulonglong)puVar18 & 1) != 0) {
                  puVar18 = (undefined4 *)
                            ((longlong)&(pTVar29->Frozen).Packed + ((longlong)puVar18 >> 0x18));
                }
                if ((&local_d7c < puVar18 + *(int *)((longlong)local_d58 + 0x2c)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar32 = (int)pTVar30[5].Frozen.Packed;
              if (iVar32 == *(int *)((longlong)pTVar30 + 0x2c)) {
                iVar32 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                   (0x204,(ForAnyElementType *)&pTVar29->Frozen,
                                    (int *)((longlong)pTVar30 + 0x2c));
              }
              pTVar8 = local_d58;
              *(int *)&pTVar30[5].Frozen.Packed = iVar32 + 1;
              puVar24 = (undefined1 *)(pTVar29->Frozen).Packed;
              if (((ulonglong)puVar24 & 1) != 0) {
                puVar24 = (undefined1 *)
                          ((longlong)&(pTVar29->Frozen).Packed + ((longlong)puVar24 >> 0x18));
              }
              pTVar30 = local_d58 + 6;
              *(undefined4 *)(puVar24 + (longlong)iVar32 * 4) = local_d7c;
              puVar18 = (undefined4 *)(pTVar30->Frozen).Packed;
              puVar17 = (undefined4 *)
                        ((longlong)&(pTVar30->Frozen).Packed + ((longlong)puVar18 >> 0x18));
              if (((ulonglong)puVar18 & 1) == 0) {
                puVar17 = puVar18;
              }
              if (puVar17 <= &local_d7c) {
                if (((ulonglong)puVar18 & 1) != 0) {
                  puVar18 = (undefined4 *)
                            ((longlong)&(pTVar30->Frozen).Packed + ((longlong)puVar18 >> 0x18));
                }
                if ((&local_d7c < puVar18 + *(int *)((longlong)local_d58 + 0x3c)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar32 = (int)pTVar8[7].Frozen.Packed;
              if (iVar32 == *(int *)((longlong)pTVar8 + 0x3c)) {
                iVar32 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                   (0x204,(ForAnyElementType *)&pTVar30->Frozen,
                                    (int *)((longlong)pTVar8 + 0x3c));
              }
              pTVar29 = local_d58;
              *(int *)&pTVar8[7].Frozen.Packed = iVar32 + 1;
              puVar24 = (undefined1 *)(pTVar30->Frozen).Packed;
              if (((ulonglong)puVar24 & 1) != 0) {
                puVar24 = (undefined1 *)
                          ((longlong)&(pTVar30->Frozen).Packed + ((longlong)puVar24 >> 0x18));
              }
              *(undefined4 *)(puVar24 + (longlong)iVar32 * 4) = local_d7c;
              if (bVar4 == 0x17) {
                if ((*(ushort *)(local_d58 + 0xf) != 0xffff) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("!LayoutInitializer.HasRenderTargets()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                                       ,0x338,
                                       L"Shader parameter struct %s has multiple render target binding slots."
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                *(ushort *)(pTVar29 + 0xf) = (ushort)local_d7c;
              }
            }
            else {
              if ((byte)(bVar4 - 0xf) < 4) {
                pTVar29 = local_d58 + 4;
                puVar18 = (undefined4 *)(pTVar29->Frozen).Packed;
                puVar17 = (undefined4 *)
                          ((longlong)&(pTVar29->Frozen).Packed + ((longlong)puVar18 >> 0x18));
                if (((ulonglong)puVar18 & 1) == 0) {
                  puVar17 = puVar18;
                }
                if (puVar17 <= &local_d7c) {
                  if (((ulonglong)puVar18 & 1) != 0) {
                    puVar18 = (undefined4 *)
                              ((longlong)&(pTVar29->Frozen).Packed + ((longlong)puVar18 >> 0x18));
                  }
                  if ((&local_d7c < puVar18 + *(int *)((longlong)local_d58 + 0x2c)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                iVar32 = (int)pTVar30[5].Frozen.Packed;
                if (iVar32 == *(int *)((longlong)pTVar30 + 0x2c)) {
                  iVar32 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                     (0x204,(ForAnyElementType *)&pTVar29->Frozen,
                                      (int *)((longlong)pTVar30 + 0x2c));
                }
                *(int *)&pTVar30[5].Frozen.Packed = iVar32 + 1;
                puVar24 = (undefined1 *)(pTVar29->Frozen).Packed;
                if (((ulonglong)puVar24 & 1) != 0) {
                  puVar24 = (undefined1 *)
                            ((longlong)&(pTVar29->Frozen).Packed + ((longlong)puVar24 >> 0x18));
                }
                pTVar30 = local_d58 + 8;
                *(undefined4 *)(puVar24 + (longlong)iVar32 * 4) = local_d7c;
                FVar16 = *(ForAnyElementType *)&(pTVar30->Frozen).Packed;
                bVar36 = FVar16._0_1_ & 1;
                FVar15 = (ForAnyElementType)
                         ((longlong)&((ForAnyElementType *)&(pTVar30->Frozen).Packed)->field_0x0 +
                         ((longlong)FVar16 >> 0x18));
                if (((ulonglong)FVar16 & 1) == 0) {
                  FVar15 = FVar16;
                }
                FVar35 = (ForAnyElementType)
                         ((longlong)&((ForAnyElementType *)&(pTVar30->Frozen).Packed)->field_0x0 +
                         ((longlong)FVar16 >> 0x18));
                bVar9 = &local_d7c < (ulonglong)FVar15;
              }
              else if (bVar4 == 0x13) {
                pTVar29 = local_d58 + 4;
                puVar18 = (undefined4 *)(pTVar29->Frozen).Packed;
                puVar17 = (undefined4 *)
                          ((longlong)&(pTVar29->Frozen).Packed + ((longlong)puVar18 >> 0x18));
                if (((ulonglong)puVar18 & 1) == 0) {
                  puVar17 = puVar18;
                }
                if (puVar17 <= &local_d7c) {
                  if (((ulonglong)puVar18 & 1) != 0) {
                    puVar18 = (undefined4 *)
                              ((longlong)&(pTVar29->Frozen).Packed + ((longlong)puVar18 >> 0x18));
                  }
                  if ((&local_d7c < puVar18 + *(int *)((longlong)local_d58 + 0x2c)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                iVar32 = (int)pTVar30[5].Frozen.Packed;
                if (iVar32 == *(int *)((longlong)pTVar30 + 0x2c)) {
                  iVar32 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                     (0x204,(ForAnyElementType *)&pTVar29->Frozen,
                                      (int *)((longlong)pTVar30 + 0x2c));
                }
                *(int *)&pTVar30[5].Frozen.Packed = iVar32 + 1;
                puVar24 = (undefined1 *)(pTVar29->Frozen).Packed;
                if (((ulonglong)puVar24 & 1) != 0) {
                  puVar24 = (undefined1 *)
                            ((longlong)&(pTVar29->Frozen).Packed + ((longlong)puVar24 >> 0x18));
                }
                pTVar30 = local_d58 + 10;
                *(undefined4 *)(puVar24 + (longlong)iVar32 * 4) = local_d7c;
                FVar16 = *(ForAnyElementType *)&(pTVar30->Frozen).Packed;
                bVar36 = FVar16._0_1_ & 1;
                FVar15 = (ForAnyElementType)
                         ((longlong)&((ForAnyElementType *)&(pTVar30->Frozen).Packed)->field_0x0 +
                         ((longlong)FVar16 >> 0x18));
                if (((ulonglong)FVar16 & 1) == 0) {
                  FVar15 = FVar16;
                }
                FVar35 = (ForAnyElementType)
                         ((longlong)&((ForAnyElementType *)&(pTVar30->Frozen).Packed)->field_0x0 +
                         ((longlong)FVar16 >> 0x18));
                bVar9 = &local_d7c < (ulonglong)FVar15;
              }
              else {
                if (bVar4 != 0x16) goto LAB_145ea50b0;
                pTVar30 = local_d58 + 0xc;
                FVar16 = *(ForAnyElementType *)&(pTVar30->Frozen).Packed;
                bVar36 = FVar16._0_1_ & 1;
                FVar15 = (ForAnyElementType)
                         ((longlong)&((ForAnyElementType *)&(pTVar30->Frozen).Packed)->field_0x0 +
                         ((longlong)FVar16 >> 0x18));
                if (((ulonglong)FVar16 & 1) == 0) {
                  FVar15 = FVar16;
                }
                FVar35 = (ForAnyElementType)
                         ((longlong)&((ForAnyElementType *)&(pTVar30->Frozen).Packed)->field_0x0 +
                         ((longlong)FVar16 >> 0x18));
                bVar9 = &local_d7c < (ulonglong)FVar15;
              }
              if (!bVar9) {
                if (bVar36 != 0) {
                  FVar16 = FVar35;
                }
                if ((&local_d7c <
                     (undefined4 *)
                     ((longlong)FVar16 +
                     (longlong)*(int *)((longlong)&pTVar30[1].Frozen.Packed + 4) * 4)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar32 = *(int *)(pTVar30 + 1);
              piVar2 = (int *)((longlong)&pTVar30[1].Frozen.Packed + 4);
              if (iVar32 == *piVar2) {
                iVar32 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                   (0x204,(ForAnyElementType *)&pTVar30->Frozen,piVar2);
              }
              *(int *)(pTVar30 + 1) = iVar32 + 1;
              FVar16 = (ForAnyElementType)pTVar30->UnfrozenPtr;
              if (((ulonglong)FVar16 & 1) != 0) {
                FVar16 = (ForAnyElementType)
                         ((longlong)&(pTVar30->Frozen).Packed + ((longlong)FVar16 >> 0x18));
              }
              *(undefined4 *)((longlong)FVar16 + (longlong)iVar32 * 4) = local_d7c;
            }
LAB_145ea50b0:
            uVar39 = uVar39 + 1;
          } while (uVar39 < uVar25);
        }
      }
      uVar25 = 0;
      if (((local_d40 != 0) && (bVar4 != 0x16)) && (bVar4 != 0x13)) {
        uVar39 = 1;
        if (local_d5c != 0) {
          uVar39 = local_d5c;
        }
        local_d48 = (wchar_t *)CONCAT44(local_d48._4_4_,uVar39);
        if (uVar39 != 0) {
          uVar26 = ~local_d60 >> 0x1f;
          ppFVar31 = (FShaderParametersMetadata **)(local_d20 * 0x18);
          local_c40.Value = ppFVar31;
          local_d5c = uVar26;
          do {
            iVar32 = *(int *)(local_d40 + 0x3c);
            uVar27 = 0;
            if ((int)local_d60 < local_d68) {
              uVar27 = uVar26;
            }
            if ((uVar27 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar21 = local_d40;
            uVar27 = local_d60;
            uVar28 = 0;
            iVar32 = *(int *)((longlong)(ppFVar31 + 2) + local_d70.Data) + iVar32 * uVar25 +
                     *(int *)(local_d00 + 0x14);
            if (0 < *(int *)(local_d40 + 0x58)) {
              do {
                uVar39 = 0;
                if ((int)uVar28 < *(int *)(lVar21 + 0x58)) {
                  uVar39 = ~uVar28 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_ce0 = lVar21;
                lStack_cd8 = (longlong)(int)uVar28 * 0x30 + *(longlong *)(lVar21 + 0x50);
                local_cd0 = iVar32;
                if (((local_d70.Data <= (FScriptContainerElement *)&local_ce0) &&
                    ((FScriptContainerElement *)&local_ce0 <
                     local_d70.Data + (longlong)iStack_d64 * 0x18)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (local_d68 == iStack_d64) {
                  local_d68 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x818,&local_d70,&iStack_d64);
                }
                iVar37 = local_d68 - (uVar28 + uVar27);
                local_d68 = local_d68 + 1;
                memmove(local_d70.Data + ((longlong)(int)(uVar28 + uVar27) + 1) * 0x18 + 0x18,
                        local_d70.Data + ((longlong)(int)(uVar28 + uVar27) + 1) * 0x18,
                        (longlong)(iVar37 + -1) * 0x18);
                uVar28 = uVar28 + 1;
                *(longlong *)((longlong)(ppFVar31 + 3) + local_d70.Data) = local_ce0;
                *(longlong *)((longlong)(ppFVar31 + 3) + local_d70.Data + 8) = lStack_cd8;
                *(ulonglong *)((longlong)(ppFVar31 + 5) + local_d70.Data) =
                     CONCAT44(uStack_ccc,local_cd0);
                ppFVar31 = ppFVar31 + 3;
              } while ((int)uVar28 < *(int *)(lVar21 + 0x58));
              ppFVar31 = local_c40.Value;
              uVar26 = local_d5c;
              uVar39 = (uint)local_d48;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar39);
        }
      }
      local_d60 = local_d60 + 1;
      local_d20 = local_d20 + 1;
      local_d08 = local_d08 + 0x18;
      this = local_d18;
      pTVar40 = local_d58;
      bVar36 = local_d72;
    } while ((int)local_d60 < local_d68);
  }
  pFVar23 = (FRHIUniformBufferResourceInitializer *)pTVar40[2].UnfrozenPtr;
  if (((ulonglong)pFVar23 & 1) != 0) {
    pFVar23 = (FRHIUniformBufferResourceInitializer *)
              ((longlong)pTVar40 + ((longlong)pFVar23 >> 0x18) + 0x10);
  }
  AlgoImpl::
  IntroSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_FShaderParametersMetadata::InitializeLayout_::__l2::<lambda_2>_>_>
            (pFVar23,*(int *)(pTVar40 + 3),local_d78,(<lambda_2> *)&local_d76);
  pFVar23 = (FRHIUniformBufferResourceInitializer *)pTVar40[4].UnfrozenPtr;
  if (((ulonglong)pFVar23 & 1) != 0) {
    pFVar23 = (FRHIUniformBufferResourceInitializer *)
              ((longlong)pTVar40 + ((longlong)pFVar23 >> 0x18) + 0x20);
  }
  AlgoImpl::
  IntroSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_FShaderParametersMetadata::InitializeLayout_::__l2::<lambda_2>_>_>
            (pFVar23,*(int *)(pTVar40 + 5),local_d78,(<lambda_2> *)&local_d76);
  pFVar23 = (FRHIUniformBufferResourceInitializer *)pTVar40[6].UnfrozenPtr;
  if (((ulonglong)pFVar23 & 1) != 0) {
    pFVar23 = (FRHIUniformBufferResourceInitializer *)
              ((longlong)pTVar40 + ((longlong)pFVar23 >> 0x18) + 0x30);
  }
  AlgoImpl::
  IntroSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_FShaderParametersMetadata::InitializeLayout_::__l2::<lambda_3>_>_>
            (pFVar23,*(int *)(pTVar40 + 7),local_d78,(<lambda_3> *)&local_d78);
  pFVar23 = (FRHIUniformBufferResourceInitializer *)pTVar40[8].UnfrozenPtr;
  if (((ulonglong)pFVar23 & 1) != 0) {
    pFVar23 = (FRHIUniformBufferResourceInitializer *)
              ((longlong)pTVar40 + ((longlong)pFVar23 >> 0x18) + 0x40);
  }
  AlgoImpl::
  IntroSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_FShaderParametersMetadata::InitializeLayout_::__l2::<lambda_3>_>_>
            (pFVar23,*(int *)(pTVar40 + 9),local_d78,(<lambda_3> *)&local_d78);
  pFVar23 = (FRHIUniformBufferResourceInitializer *)pTVar40[10].UnfrozenPtr;
  if (((ulonglong)pFVar23 & 1) != 0) {
    pFVar23 = (FRHIUniformBufferResourceInitializer *)
              ((longlong)pTVar40 + ((longlong)pFVar23 >> 0x18) + 0x50);
  }
  AlgoImpl::
  IntroSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_FShaderParametersMetadata::InitializeLayout_::__l2::<lambda_2>_>_>
            (pFVar23,*(int *)(pTVar40 + 0xb),local_d78,(<lambda_2> *)&local_d76);
  pFVar23 = (FRHIUniformBufferResourceInitializer *)pTVar40[0xc].UnfrozenPtr;
  if (((ulonglong)pFVar23 & 1) != 0) {
    pFVar23 = (FRHIUniformBufferResourceInitializer *)
              ((longlong)pTVar40 + ((longlong)pFVar23 >> 0x18) + 0x60);
  }
  AlgoImpl::
  IntroSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_FShaderParametersMetadata::InitializeLayout_::__l2::<lambda_2>_>_>
            (pFVar23,*(int *)(pTVar40 + 0xd),local_d78,(<lambda_2> *)&local_d76);
  FRHIUniformBufferLayoutInitializer::ComputeHash
            ((FRHIUniformBufferLayoutInitializer *)&pTVar40->Frozen);
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  local_b40._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_b40);
  this_01 = (FRHIUniformBufferLayout *)0x0;
  local_b40._padding_ = (longlong)&___7__TMemoryHasher_VFXxHash64Builder__UFXxHash64____6B_;
  local_b40._padding_ = 0;
  FXxHash64Builder::Reset(&local_b40.BuilderState);
  (**(code **)(local_b40._padding_ + 0xd8))(&local_b40,1);
  (**(code **)(local_b40._padding_ + 0x108))(&local_b40,0);
  iVar32 = (this->Members).ArrayNum;
  this_02 = (FMember *)(this->Members).AllocatorInstance.Data;
  pFVar33 = this_02 + iVar32;
  while( true ) {
    if ((this->Members).ArrayNum != iVar32) {
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_d50);
    }
    if (this_02 == pFVar33) break;
    FMember::HashLayout<FXxHash64Builder,FXxHash64>(this_02,&local_b40);
    this_02 = this_02 + 1;
  }
  FXxHash64Builder::Finalize(&local_b40.BuilderState);
  this->LayoutHash = local_bc0;
  FArchive::~FArchive((FArchive *)&local_b40);
  uVar34 = (ulonglong)_tls_index;
  if (this->UseCase == UniformBuffer) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar34 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`GetLayoutHashStructMap'::__l2::_dynamic_atexit_destructor_for__GLayoutHashStructMap__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
    local_d10[0] = *(uint *)(pTVar40 + 0xe);
    local_ba8 = local_d10;
    local_ba0 = &local_bb8;
    local_bb8 = this;
    TSet<TTuple<unsigned_int,FShaderParametersMetadata_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FShaderParametersMetadata_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_&&,FShaderParametersMetadata_*_&&>_>
              ((TSet<TTuple<unsigned_int,FShaderParametersMetadata_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FShaderParametersMetadata_*,0>,FDefaultSetAllocator>
                *)&GLayoutHashStructMap,&local_c40,(bool *)&local_ba8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar34 * 8) + 0x9d4c) <
       `class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                    ::__l2::LLMScope_Name1227,L"RHIMisc/CreateUniformBufferLayout");
    _Init_thread_footer(&`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_d28,
             `class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
             ::__l2::LLMScope_Name1227,false,None,Default,true);
  FMemScope::FMemScope
            (&local_bb0,
             &`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
              ::__l2::LLMScope_Name1227,true);
  pFVar19 = ::operator_new(0x98);
  if ((pFVar19 != (FRHIUniformBufferLayout *)0x0) &&
     (this_01 = FRHIUniformBufferLayout::FRHIUniformBufferLayout
                          (pFVar19,(FRHIUniformBufferLayoutInitializer *)&pTVar40->Frozen),
     this_01 != (FRHIUniformBufferLayout *)0x0)) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  FMemScope::~FMemScope(&local_bb0);
  FLLMScope::~FLLMScope(local_d28);
  pTVar3 = &this->Layout;
  if (pTVar3 != (TRefCountPtr<FRHIUniformBufferLayout_const_> *)&local_b88) {
    pFVar19 = pTVar3->Reference;
    pTVar3->Reference = this_01;
    this_01 = pFVar19;
  }
  if (this_01 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  if (local_d70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d70.Data);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_c60.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_c70.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_c80.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_c90.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_ca0.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_cb0.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_cc0.Frozen);
  return;
}

