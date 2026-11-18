// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e89f690

UScriptStruct * __cdecl FMathExpressionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMathExpressionDataflowNode,(UObject *)pUVar1,
                         L"MathExpressionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.OuterSingleton;
}

// GetType @ 14e89f730

FName __thiscall FMathExpressionDataflowNode::GetType(FMathExpressionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMathExpressionDataflowNode");
  return in_RDX;
}

// IsA @ 14e89f7a0

bool __thiscall FMathExpressionDataflowNode::IsA(FMathExpressionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMathExpressionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e89f808;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e89f808:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e89f826;
      }
    }
  }
  bVar5 = true;
LAB_14e89f826:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e89f860

FStructOnScope * __thiscall
FMathExpressionDataflowNode::NewStructOnScope(FMathExpressionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMathExpressionDataflowNode,(UObject *)pUVar2,
                           L"MathExpressionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e89f960

void __thiscall
FMathExpressionDataflowNode::SerializeInternal(FMathExpressionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMathExpressionDataflowNode,(UObject *)pUVar1,
                         L"MathExpressionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89f9dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e89fa50

FName __thiscall FMathExpressionDataflowNode::GetDisplayName(FMathExpressionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MathExpression");
  return in_RDX;
}

// GetCategory @ 14e89fad0

FName __thiscall FMathExpressionDataflowNode::GetCategory(FMathExpressionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math");
  return in_RDX;
}

// GetTags @ 14e89fb00

FString * __thiscall
FMathExpressionDataflowNode::GetTags
          (FMathExpressionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e89fb30

UScriptStruct * __thiscall
FMathExpressionDataflowNode::TypedScriptStruct(FMathExpressionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMathExpressionDataflowNode,(UObject *)pUVar1,
                         L"MathExpressionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMathExpressionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e89ffa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMathExpressionDataflowNode::Evaluate
          (FMathExpressionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  FString *pFVar5;
  size_t sVar6;
  FDataflowOutput *pFVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auStackY_448 [32];
  FString local_408;
  undefined1 local_3f8 [8];
  double local_3f0;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FConnectionReference local_368;
  FDataflowOutput *local_348;
  FContext *local_340;
  double *local_338;
  FString local_328;
  TValueOrError<double,FExpressionError> local_318;
  FBasicMathExpressionEvaluator local_2f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_448;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FDataflowNumericTypes *)puVar4 != &this->ReturnValue) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Out->IsA(&ReturnValue)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionMathNodes.cpp"
                         ,0x3a7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_408.Data.ArrayNum = (this->Expression).Data.ArrayNum;
  lVar9 = (longlong)local_408.Data.ArrayNum;
  _Src = (this->Expression).Data.AllocatorInstance.Data;
  local_3f0 = 0.0;
  local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_408.Data.ArrayNum == 0) {
    local_408.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_408.Data.ArrayNum,0,(ForAnyElementType *)&local_408,local_408.Data.ArrayNum
               ,&local_408.Data.ArrayMax);
    memcpy(local_408.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
  }
  pFVar5 = ::FString::TrimStartAndEnd(&local_408,&local_328);
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
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  if (local_408.Data.ArrayNum < 2) goto LAB_14e8a0508;
  ::FString::FString(&local_3b8,"{A}");
  if (local_3b8.Data.ArrayNum == 0) {
    FVar10.Data = (FScriptContainerElement *)L"";
LAB_14e8a010b:
    sVar6 = wcslen((wchar_t *)FVar10.Data);
    iVar3 = ::FString::Find(&local_408,(wchar_t *)FVar10.Data,(int)sVar6,IgnoreCase,FromStart,-1);
    if (iVar3 != -1) {
      dVar12 = FDataflowNode::GetValue<FDataflowNumericTypes>
                         ((FDataflowNode *)this,param_1,&this->A);
      ::FString::SanitizeFloat(&local_3a8,dVar12,1);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_3a8.Data.ArrayNum != 0) {
        FVar10.Data = local_3a8.Data.AllocatorInstance.Data;
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_3b8.Data.ArrayNum != 0) {
        FVar8.Data = local_3b8.Data.AllocatorInstance.Data;
      }
      ::FString::ReplaceInline
                (&local_408,(wchar_t *)FVar8.Data,(wchar_t *)FVar10.Data,CaseSensitive);
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FVar10.Data = local_3b8.Data.AllocatorInstance.Data;
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14e8a010b;
  }
  ::FString::FString(&local_3c8,"{B}");
  if (local_3c8.Data.ArrayNum == 0) {
    FVar10.Data = (FScriptContainerElement *)L"";
LAB_14e8a01c6:
    sVar6 = wcslen((wchar_t *)FVar10.Data);
    iVar3 = ::FString::Find(&local_408,(wchar_t *)FVar10.Data,(int)sVar6,IgnoreCase,FromStart,-1);
    if (iVar3 != -1) {
      dVar12 = FDataflowNode::GetValue<FDataflowNumericTypes>
                         ((FDataflowNode *)this,param_1,&this->B);
      ::FString::SanitizeFloat(&local_398,dVar12,1);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_398.Data.ArrayNum != 0) {
        FVar10.Data = local_398.Data.AllocatorInstance.Data;
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_3c8.Data.ArrayNum != 0) {
        FVar8.Data = local_3c8.Data.AllocatorInstance.Data;
      }
      ::FString::ReplaceInline
                (&local_408,(wchar_t *)FVar8.Data,(wchar_t *)FVar10.Data,CaseSensitive);
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FVar10.Data = local_3c8.Data.AllocatorInstance.Data;
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14e8a01c6;
  }
  ::FString::FString(&local_3d8,"{C}");
  if (local_3d8.Data.ArrayNum == 0) {
    FVar10.Data = (FScriptContainerElement *)L"";
LAB_14e8a0284:
    sVar6 = wcslen((wchar_t *)FVar10.Data);
    iVar3 = ::FString::Find(&local_408,(wchar_t *)FVar10.Data,(int)sVar6,IgnoreCase,FromStart,-1);
    if (iVar3 != -1) {
      dVar12 = FDataflowNode::GetValue<FDataflowNumericTypes>
                         ((FDataflowNode *)this,param_1,&this->C);
      ::FString::SanitizeFloat(&local_388,dVar12,1);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_388.Data.ArrayNum != 0) {
        FVar10.Data = local_388.Data.AllocatorInstance.Data;
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_3d8.Data.ArrayNum != 0) {
        FVar8.Data = local_3d8.Data.AllocatorInstance.Data;
      }
      ::FString::ReplaceInline
                (&local_408,(wchar_t *)FVar8.Data,(wchar_t *)FVar10.Data,CaseSensitive);
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FVar10.Data = local_3d8.Data.AllocatorInstance.Data;
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14e8a0284;
  }
  ::FString::FString(&local_3e8,"{D}");
  if (local_3e8.Data.ArrayNum == 0) {
    FVar10.Data = (FScriptContainerElement *)L"";
LAB_14e8a0344:
    sVar6 = wcslen((wchar_t *)FVar10.Data);
    iVar3 = ::FString::Find(&local_408,(wchar_t *)FVar10.Data,(int)sVar6,IgnoreCase,FromStart,-1);
    if (iVar3 != -1) {
      dVar12 = FDataflowNode::GetValue<FDataflowNumericTypes>
                         ((FDataflowNode *)this,param_1,&this->D);
      ::FString::SanitizeFloat(&local_378,dVar12,1);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_378.Data.ArrayNum != 0) {
        FVar10.Data = local_378.Data.AllocatorInstance.Data;
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_3e8.Data.ArrayNum != 0) {
        FVar8.Data = local_3e8.Data.AllocatorInstance.Data;
      }
      ::FString::ReplaceInline
                (&local_408,(wchar_t *)FVar8.Data,(wchar_t *)FVar10.Data,CaseSensitive);
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FVar10.Data = local_3e8.Data.AllocatorInstance.Data;
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14e8a0344;
  }
  FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator(&local_2f8);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_408.Data.ArrayNum != 0) {
    FVar10.Data = local_408.Data.AllocatorInstance.Data;
  }
  FBasicMathExpressionEvaluator::Evaluate(&local_2f8,&local_318,(wchar_t *)FVar10.Data,0.0);
  uVar11 = (ulonglong)local_318.Variant.TypeIndex;
  if ((2 < uVar11) &&
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
                 ::__l2::bIsSameType + uVar11) != '\0') {
    if ((local_318.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (__real_7fefffffffffffff <= (double)local_318.Variant._padding_) {
      local_318.Variant._padding_ = (longlong)__real_7fefffffffffffff;
    }
    local_3f0 = (double)local_318.Variant._padding_;
    if ((double)local_318.Variant._padding_ <= __real_ffefffffffffffff) {
      local_3f0 = __real_ffefffffffffffff;
    }
  }
  if ((2 < local_318.Variant.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_318.Variant.TypeIndex])(&local_318);
  FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator(&local_2f8);
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
LAB_14e8a0508:
  local_368.Index = -1;
  local_368.ContainerReference = (void *)0x0;
  local_368.Reference = &this->ReturnValue;
  pFVar7 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_368);
  if (pFVar7 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FDataflowNumericTypes>'::__l7::<lambda_1>::operator()(local_3f8);
  }
  else {
    local_338 = &local_3f0;
    local_348 = pFVar7;
    local_340 = param_1;
    TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
    ::
    VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>_::__l2::<lambda_1>_>
              (pFVar7->_padding_,&local_348);
  }
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  return;
}

// FMathExpressionDataflowNode @ 14e924410

FMathExpressionDataflowNode * __thiscall
FMathExpressionDataflowNode::FMathExpressionDataflowNode
          (FMathExpressionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowInput *pFVar1;
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
  this->_padding_ = (longlong)&___7FMathExpressionDataflowNode__6B_;
  local_68.Reference = &this->A;
  (this->B).Value = 0.0;
  ((FDataflowNumericTypes *)local_68.Reference)->Value = 0.0;
  (this->C).Value = 0.0;
  (this->D).Value = 0.0;
  (this->Expression).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Expression).Data.ArrayNum = 0;
  (this->Expression).Data.ArrayMax = 0;
  (this->ReturnValue).Value = 0.0;
  local_68.ContainerReference = (void *)0x0;
  pFVar1 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)pFVar1,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
              ::__l2::Instance);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->B;
  pFVar1 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)pFVar1,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
              ::__l2::Instance);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->C;
  pFVar1 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)pFVar1,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
              ::__l2::Instance);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->D;
  pFVar1 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)pFVar1,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
              ::__l2::Instance);
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
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)this_00,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
              ::__l2::Instance);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

