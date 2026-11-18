// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e89cd10

UScriptStruct * __cdecl FFloatMathExpressionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatMathExpressionDataflowNode,
                         (UObject *)pUVar1,L"FloatMathExpressionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.OuterSingleton;
}

// GetType @ 14e89cdb0

FName __thiscall FFloatMathExpressionDataflowNode::GetType(FFloatMathExpressionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFloatMathExpressionDataflowNode");
  return in_RDX;
}

// IsA @ 14e89cde0

bool __thiscall
FFloatMathExpressionDataflowNode::IsA(FFloatMathExpressionDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FFloatMathExpressionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e89ce48;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e89ce48:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e89ce66;
      }
    }
  }
  bVar5 = true;
LAB_14e89ce66:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e89d5c0

FStructOnScope * __thiscall
FFloatMathExpressionDataflowNode::NewStructOnScope(FFloatMathExpressionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFloatMathExpressionDataflowNode,
                           (UObject *)pUVar2,L"FloatMathExpressionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e89d680

void __thiscall
FFloatMathExpressionDataflowNode::SerializeInternal
          (FFloatMathExpressionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatMathExpressionDataflowNode,
                         (UObject *)pUVar1,L"FloatMathExpressionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89d6fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e89d710

FName __thiscall
FFloatMathExpressionDataflowNode::GetDisplayName(FFloatMathExpressionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FloatMathExpression");
  return in_RDX;
}

// GetCategory @ 14e89d740

FName __thiscall
FFloatMathExpressionDataflowNode::GetCategory(FFloatMathExpressionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e89d770

FString * __thiscall
FFloatMathExpressionDataflowNode::GetTags
          (FFloatMathExpressionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e89d7a0

UScriptStruct * __thiscall
FFloatMathExpressionDataflowNode::TypedScriptStruct(FFloatMathExpressionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatMathExpressionDataflowNode,
                         (UObject *)pUVar1,L"FloatMathExpressionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatMathExpressionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e89d8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FFloatMathExpressionDataflowNode::Evaluate
          (FFloatMathExpressionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  FString *pFVar5;
  size_t sVar6;
  FDataflowInput *pFVar7;
  float *pfVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  undefined1 auStackY_448 [32];
  FString local_408;
  float local_3f8 [2];
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FConnectionReference local_370;
  FConnectionReference local_358;
  FConnectionReference local_340;
  FConnectionReference local_328;
  FString local_310;
  TValueOrError<double,FExpressionError> local_300;
  FBasicMathExpressionEvaluator local_2e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_448;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((float *)puVar4 != &this->ReturnValue) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Out->IsA(&ReturnValue)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionMathNodes.cpp"
                         ,0x367,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_408.Data.ArrayNum = (this->Expression).Data.ArrayNum;
  lVar10 = (longlong)local_408.Data.ArrayNum;
  _Src = (this->Expression).Data.AllocatorInstance.Data;
  local_3f8[0] = 0.0;
  local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_408.Data.ArrayNum == 0) {
    local_408.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_408.Data.ArrayNum,0,(ForAnyElementType *)&local_408,local_408.Data.ArrayNum
               ,&local_408.Data.ArrayMax);
    memcpy(local_408.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
  }
  pFVar5 = ::FString::TrimStartAndEnd(&local_408,&local_310);
  if (&local_408 != pFVar5) {
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
    local_408.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_408.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_408.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  if (local_408.Data.ArrayNum < 2) goto LAB_14e89dec3;
  ::FString::FString(&local_3c0,"{A}");
  if (local_3c0.Data.ArrayNum == 0) {
    FVar11.Data = (FScriptContainerElement *)L"";
LAB_14e89da22:
    sVar6 = wcslen((wchar_t *)FVar11.Data);
    iVar3 = ::FString::Find(&local_408,(wchar_t *)FVar11.Data,(int)sVar6,IgnoreCase,FromStart,-1);
    if (iVar3 != -1) {
      local_370.Reference = &this->A;
      local_370.Index = -1;
      local_370.ContainerReference = (void *)0x0;
      pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_370);
      pfVar8 = FDataflowInput::GetValue<float>(pFVar7,param_1,local_370.Reference);
      ::FString::SanitizeFloat(&local_3b0,(double)*pfVar8,1);
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_3b0.Data.ArrayNum != 0) {
        FVar11.Data = local_3b0.Data.AllocatorInstance.Data;
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_3c0.Data.ArrayNum != 0) {
        FVar9.Data = local_3c0.Data.AllocatorInstance.Data;
      }
      ::FString::ReplaceInline
                (&local_408,(wchar_t *)FVar9.Data,(wchar_t *)FVar11.Data,CaseSensitive);
      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FVar11.Data = local_3c0.Data.AllocatorInstance.Data;
    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14e89da22;
  }
  ::FString::FString(&local_3d0,"{B}");
  if (local_3d0.Data.ArrayNum == 0) {
    FVar11.Data = (FScriptContainerElement *)L"";
LAB_14e89db06:
    sVar6 = wcslen((wchar_t *)FVar11.Data);
    iVar3 = ::FString::Find(&local_408,(wchar_t *)FVar11.Data,(int)sVar6,IgnoreCase,FromStart,-1);
    if (iVar3 != -1) {
      local_358.Reference = &this->B;
      local_358.Index = -1;
      local_358.ContainerReference = (void *)0x0;
      pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_358);
      pfVar8 = FDataflowInput::GetValue<float>(pFVar7,param_1,local_358.Reference);
      ::FString::SanitizeFloat(&local_3a0,(double)*pfVar8,1);
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_3a0.Data.ArrayNum != 0) {
        FVar11.Data = local_3a0.Data.AllocatorInstance.Data;
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_3d0.Data.ArrayNum != 0) {
        FVar9.Data = local_3d0.Data.AllocatorInstance.Data;
      }
      ::FString::ReplaceInline
                (&local_408,(wchar_t *)FVar9.Data,(wchar_t *)FVar11.Data,CaseSensitive);
      if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FVar11.Data = local_3d0.Data.AllocatorInstance.Data;
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14e89db06;
  }
  ::FString::FString(&local_3e0,"{C}");
  if (local_3e0.Data.ArrayNum == 0) {
    FVar11.Data = (FScriptContainerElement *)L"";
LAB_14e89dbec:
    sVar6 = wcslen((wchar_t *)FVar11.Data);
    iVar3 = ::FString::Find(&local_408,(wchar_t *)FVar11.Data,(int)sVar6,IgnoreCase,FromStart,-1);
    if (iVar3 != -1) {
      local_340.Reference = &this->C;
      local_340.Index = -1;
      local_340.ContainerReference = (void *)0x0;
      pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_340);
      pfVar8 = FDataflowInput::GetValue<float>(pFVar7,param_1,local_340.Reference);
      ::FString::SanitizeFloat(&local_390,(double)*pfVar8,1);
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_390.Data.ArrayNum != 0) {
        FVar11.Data = local_390.Data.AllocatorInstance.Data;
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_3e0.Data.ArrayNum != 0) {
        FVar9.Data = local_3e0.Data.AllocatorInstance.Data;
      }
      ::FString::ReplaceInline
                (&local_408,(wchar_t *)FVar9.Data,(wchar_t *)FVar11.Data,CaseSensitive);
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FVar11.Data = local_3e0.Data.AllocatorInstance.Data;
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14e89dbec;
  }
  ::FString::FString(&local_3f0,"{D}");
  if (local_3f0.Data.ArrayNum == 0) {
    FVar11.Data = (FScriptContainerElement *)L"";
LAB_14e89dcd3:
    sVar6 = wcslen((wchar_t *)FVar11.Data);
    iVar3 = ::FString::Find(&local_408,(wchar_t *)FVar11.Data,(int)sVar6,IgnoreCase,FromStart,-1);
    if (iVar3 != -1) {
      local_328.Reference = &this->D;
      local_328.Index = -1;
      local_328.ContainerReference = (void *)0x0;
      pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
      pfVar8 = FDataflowInput::GetValue<float>(pFVar7,param_1,local_328.Reference);
      ::FString::SanitizeFloat(&local_380,(double)*pfVar8,1);
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_380.Data.ArrayNum != 0) {
        FVar11.Data = local_380.Data.AllocatorInstance.Data;
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_3f0.Data.ArrayNum != 0) {
        FVar9.Data = local_3f0.Data.AllocatorInstance.Data;
      }
      ::FString::ReplaceInline
                (&local_408,(wchar_t *)FVar9.Data,(wchar_t *)FVar11.Data,CaseSensitive);
      if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FVar11.Data = local_3f0.Data.AllocatorInstance.Data;
    if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14e89dcd3;
  }
  FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator(&local_2e8);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_408.Data.ArrayNum != 0) {
    FVar11.Data = local_408.Data.AllocatorInstance.Data;
  }
  FBasicMathExpressionEvaluator::Evaluate(&local_2e8,&local_300,(wchar_t *)FVar11.Data,0.0);
  uVar12 = (ulonglong)local_300.Variant.TypeIndex;
  if ((2 < uVar12) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar12) != '\0') {
    if ((local_300.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_3f8[0] = (float)(double)local_300.Variant._padding_;
    if (__real_7f7fffff <= (float)(double)local_300.Variant._padding_) {
      local_3f8[0] = __real_7f7fffff;
    }
    if (local_3f8[0] <= __real_ff7fffff) {
      local_3f8[0] = __real_ff7fffff;
    }
  }
  if ((2 < local_300.Variant.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_300.Variant.TypeIndex])(&local_300);
  FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator(&local_2e8);
  if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
  }
  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
  }
  if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
  }
  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
  }
LAB_14e89dec3:
  FDataflowNode::SetValue<float_&,float>((FDataflowNode *)this,param_1,local_3f8,&this->ReturnValue)
  ;
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  return;
}

// FFloatMathExpressionDataflowNode @ 14e91d690

FFloatMathExpressionDataflowNode * __thiscall
FFloatMathExpressionDataflowNode::FFloatMathExpressionDataflowNode
          (FFloatMathExpressionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FFloatMathExpressionDataflowNode__6B_;
  local_68.Reference = &this->A;
  this->B = 0.0;
  *(float *)local_68.Reference = 0.0;
  this->C = 0.0;
  this->D = 0.0;
  (this->Expression).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Expression).Data.ArrayNum = 0;
  (this->Expression).Data.ArrayMax = 0;
  this->ReturnValue = 0.0;
  local_68.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->B;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->C;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->D;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->ReturnValue;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

