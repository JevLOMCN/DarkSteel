// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 9

// StaticClass @ 14e111050

UClass * __cdecl UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ComputeKernelFunctionGeneratorClass",
               &Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass.
                InnerSingleton,StaticRegisterNativesUOptimusNode_ComputeKernelFunctionGeneratorClass
               ,0x278,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNode_ComputeKernelFunctionGeneratorClass>,
               InternalVTableHelperCtorCaller<UOptimusNode_ComputeKernelFunctionGeneratorClass>,
               local_res8,UClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass.InnerSingleton;
}

// UOptimusNode_ComputeKernelFunctionGeneratorClass @ 14e15b340

UOptimusNode_ComputeKernelFunctionGeneratorClass * __thiscall
UOptimusNode_ComputeKernelFunctionGeneratorClass::UOptimusNode_ComputeKernelFunctionGeneratorClass
          (UOptimusNode_ComputeKernelFunctionGeneratorClass *this,FVTableHelper *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusNode_ComputeKernelFunctionGeneratorClass__6B_;
  (this->Category).ComparisonIndex = 0;
  (this->Category).Number = 0;
  (this->KernelName).ComparisonIndex = 0;
  (this->KernelName).Number = 0;
  (this->ExecutionDomain).Type = DomainName;
  (this->ExecutionDomain).Name.ComparisonIndex = 0;
  (this->ExecutionDomain).Name.Number = 0;
  (this->ExecutionDomain).Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDomain).Expression.Data.ArrayNum = 0;
  (this->ExecutionDomain).Expression.Data.ArrayMax = 0;
  (this->InputBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBindings).ArrayNum = 0;
  (this->InputBindings).ArrayMax = 0;
  (this->OutputBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBindings).ArrayNum = 0;
  (this->OutputBindings).ArrayMax = 0;
  (this->ShaderSource).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderSource).Data.ArrayNum = 0;
  (this->ShaderSource).Data.ArrayMax = 0;
  return this;
}

// UOptimusNode_ComputeKernelFunctionGeneratorClass @ 14e15b3c0

UOptimusNode_ComputeKernelFunctionGeneratorClass * __thiscall
UOptimusNode_ComputeKernelFunctionGeneratorClass::UOptimusNode_ComputeKernelFunctionGeneratorClass
          (UOptimusNode_ComputeKernelFunctionGeneratorClass *this,FObjectInitializer *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusNode_ComputeKernelFunctionGeneratorClass__6B_;
  (this->Category).ComparisonIndex = 0;
  (this->Category).Number = 0;
  (this->KernelName).ComparisonIndex = 0;
  (this->KernelName).Number = 0;
  (this->ExecutionDomain).Type = DomainName;
  (this->ExecutionDomain).Name.ComparisonIndex = 0;
  (this->ExecutionDomain).Name.Number = 0;
  (this->ExecutionDomain).Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDomain).Expression.Data.ArrayNum = 0;
  (this->ExecutionDomain).Expression.Data.ArrayMax = 0;
  (this->InputBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBindings).ArrayNum = 0;
  (this->InputBindings).ArrayMax = 0;
  (this->OutputBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBindings).ArrayNum = 0;
  (this->OutputBindings).ArrayMax = 0;
  (this->ShaderSource).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderSource).Data.ArrayNum = 0;
  (this->ShaderSource).Data.ArrayMax = 0;
  return this;
}

// ~UOptimusNode_ComputeKernelFunctionGeneratorClass @ 14e1633e0

void __thiscall
UOptimusNode_ComputeKernelFunctionGeneratorClass::~UOptimusNode_ComputeKernelFunctionGeneratorClass
          (UOptimusNode_ComputeKernelFunctionGeneratorClass *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusNode_ComputeKernelFunctionGeneratorClass__6B_;
  pFVar1 = (this->ShaderSource).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)(this->OutputBindings).AllocatorInstance.Data,
             (this->OutputBindings).ArrayNum);
  pFVar1 = (this->OutputBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)(this->InputBindings).AllocatorInstance.Data,
             (this->InputBindings).ArrayNum);
  pFVar1 = (this->InputBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExecutionDomain).Expression.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UClass::~UClass((UClass *)this);
  return;
}

// CreateNodeClass @ 14e19e1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClass * __cdecl
UOptimusNode_ComputeKernelFunctionGeneratorClass::CreateNodeClass
          (UObject *param_1,FName param_2,FName param_3,TIntVector3<int> *param_4,
          TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *param_5,
          TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *param_6,FString *param_7)

{
  int iVar1;
  FOptimusDataType *pFVar2;
  FField *pFVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar7;
  UClass *pUVar8;
  FString *pFVar9;
  FName *pFVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  FName FVar13;
  FName FVar14;
  UClass *pUVar15;
  FProperty *pFVar16;
  FUObjectItem *this;
  atomic<unsigned_char> *paVar17;
  longlong *plVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  FField **ppFVar21;
  FScriptContainerElement *pFVar22;
  FName *pFVar23;
  FName local_res18 [2];
  undefined1 auStackY_168 [32];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136 [6];
  UClass *local_130;
  TIntVector3<int> *local_128;
  TSharedPtr<FOptimusDataType_const_,1> local_120;
  FString local_110;
  FName local_100;
  TSharedPtr<FOptimusDataType_const_,1> local_f8;
  TSharedPtr<FOptimusDataType_const_,1> local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_120.Object = (FOptimusDataType *)param_7;
  local_res18[0] = param_3;
  local_130 = (UClass *)param_1;
  local_128 = param_4;
  if (param_1 == (UObject *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6106248231283327000>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelFunction.cpp"
                       ,0x18,"InPackage");
    if (!bVar5) {
      return (UClass *)0x0;
    }
    goto code_r0x00014e19e480;
  }
  if (param_2 == (FName)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6106248231283327000>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelFunction.cpp"
                       ,0x18,"!InCategory.IsNone()");
    if (!bVar5) {
      return (UClass *)0x0;
    }
    goto code_r0x00014e19e480;
  }
  if (param_3 == (FName)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6106248231283327000>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelFunction.cpp"
                       ,0x18,"!InKernelName.IsNone()");
    if (!bVar5) {
      return (UClass *)0x0;
    }
    goto code_r0x00014e19e480;
  }
  iVar19 = (param_4->field0_0x0)._s_0.Y;
  iVar1 = (param_4->field0_0x0)._s_0.Z;
  if ((param_4->field0_0x0)._s_0.X < iVar19) {
    iVar19 = (param_4->field0_0x0)._s_0.X;
  }
  if (iVar19 < iVar1) {
    iVar1 = iVar19;
  }
  if (iVar1 < 1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6106248231283327001>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelFunction.cpp"
                       ,0x19,"InGroupSize.GetMin() > 0");
    if (!bVar5) {
      return (UClass *)0x0;
    }
    goto code_r0x00014e19e480;
  }
  if ((param_7->Data).ArrayNum < 2) {
    pcVar6 = "!InShaderSource.IsEmpty()";
    iVar19 = 0x19;
    paVar17 = &bGEnsureHasExecuted<6106248231283327001>;
  }
  else {
    iVar19 = param_5->ArrayNum;
    if (iVar19 < 1) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6106248231283327007>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelFunction.cpp"
                         ,0x1f,"InInputBindings.Num() >= 1");
      if (!bVar5) {
        return (UClass *)0x0;
      }
      goto code_r0x00014e19e480;
    }
    if (0 < param_6->ArrayNum) {
      pFVar20 = (param_5->AllocatorInstance).Data;
      pFVar22 = pFVar20 + (longlong)iVar19 * 0x80;
      while( true ) {
        if (param_5->ArrayNum != iVar19) {
          local_138 = 0;
          `TCheckedPointerIterator<FOptimusParameterBinding_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_138);
        }
        if (pFVar20 == pFVar22) {
          iVar19 = param_6->ArrayNum;
          pFVar20 = (param_6->AllocatorInstance).Data;
          pFVar22 = pFVar20 + (longlong)iVar19 * 0x80;
          goto LAB_14e19e410;
        }
        if (*(longlong *)pFVar20 == 0) break;
        pTVar7 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)(pFVar20 + 8),&local_f8);
        pFVar2 = pTVar7->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
        if (pFVar2 == (FOptimusDataType *)0x0) break;
        pFVar20 = pFVar20 + 0x80;
      }
      iVar19 = 0x26;
      paVar17 = &bGEnsureHasExecuted<6106248231283327014>;
      goto LAB_14e19e461;
    }
    pcVar6 = "InOutputBindings.Num() >= 1";
    iVar19 = 0x1f;
    paVar17 = &bGEnsureHasExecuted<6106248231283327007>;
  }
  goto LAB_14e19e468;
LAB_14e19e410:
  if (param_6->ArrayNum != iVar19) {
    local_137 = 0;
    `TCheckedPointerIterator<FOptimusParameterBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_137);
  }
  if (pFVar20 == pFVar22) {
    pFVar9 = ::FName::ToString(local_res18,&local_d8);
    ::FString::ConcatCF(&local_110,L"Optimus_ComputeKernel_",pFVar9);
    iVar19 = local_110.Data.ArrayNum + -1;
    if (local_110.Data.ArrayNum == 0) {
      iVar19 = 0;
    }
    pFVar10 = ::FName::FName(&local_100,iVar19,(wchar_t *)local_110.Data.AllocatorInstance.Data,
                             FNAME_Add);
    FVar14 = *pFVar10;
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    pUVar11 = Z_Construct_UClass_UObject_NoRegister();
    pUVar8 = local_130;
    pUVar12 = StaticFindObjectFast(pUVar11,(UObject *)local_130,FVar14,None,RF_NoFlags,Borrowed);
    if (pUVar12 != (UObject *)0x0) {
      FVar13 = (FName)Z_Construct_UClass_UObject_NoRegister();
      FVar14 = MakeUniqueObjectName
                         ((UObject *)&local_130,pUVar8,FVar13,FVar14.ComparisonIndex.Value.Value);
      FVar14 = *(FName *)FVar14;
    }
    pUVar11 = UOptimusNode_ComputeKernelFunction::StaticClass();
    if (FVar14 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar8,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar15 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar15);
    local_c8._8_8_ = pUVar8;
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_Standalone|RF_Public;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._16_8_ = FVar14;
    pUVar8 = (UClass *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar18 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    (**(code **)(pUVar8->_padding_ + 800))(pUVar8,pUVar11);
    pUVar8->_padding_ = (longlong)pUVar11->_padding_;
    pUVar8[1]._padding_ = (longlong)param_2;
    pUVar8[1]._padding_ = (longlong)local_res18[0];
    iVar19 = (local_128->field0_0x0)._s_0.Z;
    pUVar8[1]._padding_ = *(longlong *)&local_128->field0_0x0;
    *(int *)&pUVar8[1]._padding_ = iVar19;
    TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)&pUVar8[1]._padding_,
               param_5);
    TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)&pUVar8[1]._padding_,
               param_6);
    ::FString::operator=((FString *)&pUVar8[1]._padding_,(FString *)local_120.Object);
    ppFVar21 = (FField **)&pUVar8->_padding_;
    if ((ppFVar21 == (FField **)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ListStartPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LinkedListBuilder.h"
                           ,0x3d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UClass *)(*pcVar4)();
      return pUVar8;
    }
    for (pFVar3 = *ppFVar21; pFVar3 != (FField *)0x0; pFVar3 = pFVar3->Next) {
      ppFVar21 = &pFVar3->Next;
    }
    iVar19 = param_5->ArrayNum;
    pFVar10 = (FName *)(param_5->AllocatorInstance).Data;
    pFVar23 = pFVar10 + (longlong)iVar19 * 0x10;
    while( true ) {
      if (param_5->ArrayNum != iVar19) {
        `TCheckedPointerIterator<FOptimusParameterBinding_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_136);
      }
      if (pFVar10 == pFVar23) break;
      if ((pFVar10[7].ComparisonIndex.Value == 0) && (pFVar10[9].ComparisonIndex.Value == 0)) {
        pTVar7 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)(pFVar10 + 1),&local_120);
        pFVar2 = pTVar7->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_120.SharedReferenceCount.ReferenceController);
        pFVar16 = FOptimusDataType::CreateProperty(pFVar2,(UStruct *)pUVar8,*pFVar10);
        pFVar16->PropertyFlags = pFVar16->PropertyFlags | CPF_Edit;
        if ((FProperty *)*ppFVar21 != pFVar16) {
          *ppFVar21 = (FField *)pFVar16;
        }
        ppFVar21 = (FField **)&pFVar16->_padding_;
      }
      pFVar10 = pFVar10 + 0x10;
    }
    (**(code **)(pUVar8->_padding_ + 0x2b8))(pUVar8);
    UStruct::StaticLink((UStruct *)pUVar8,true);
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar8->_padding_ + 4));
    FUObjectItem::SetRootFlags(this,RootSet);
    return pUVar8;
  }
  if (*(longlong *)pFVar20 == 0) goto LAB_14e19e454;
  pTVar7 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)(pFVar20 + 8),&local_e8);
  pFVar2 = pTVar7->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FOptimusDataType *)0x0) goto LAB_14e19e454;
  pFVar20 = pFVar20 + 0x80;
  goto LAB_14e19e410;
LAB_14e19e454:
  iVar19 = 0x2d;
  paVar17 = &bGEnsureHasExecuted<6106248231283327021>;
LAB_14e19e461:
  pcVar6 = "Binding.IsValid()";
LAB_14e19e468:
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar17,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelFunction.cpp"
                     ,iVar19,pcVar6);
  if (!bVar5) {
    return (UClass *)0x0;
  }
code_r0x00014e19e480:
  pcVar4 = (code *)swi(3);
  pUVar8 = (UClass *)(*pcVar4)();
  return pUVar8;
}

// GetPrivateStaticClass @ 14e1d75e0

UClass * __cdecl UOptimusNode_ComputeKernelFunctionGeneratorClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_ComputeKernelFunctionGeneratorClass",
               &Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass.
                InnerSingleton,StaticRegisterNativesUOptimusNode_ComputeKernelFunctionGeneratorClass
               ,0x278,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNode_ComputeKernelFunctionGeneratorClass>,
               InternalVTableHelperCtorCaller<UOptimusNode_ComputeKernelFunctionGeneratorClass>,
               local_res8,UClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass.InnerSingleton;
}

// InitPropertiesFromCustomList @ 14e1ebf70

void __thiscall
UOptimusNode_ComputeKernelFunctionGeneratorClass::InitPropertiesFromCustomList
          (UOptimusNode_ComputeKernelFunctionGeneratorClass *this,uchar *param_1,uchar *param_2)

{
  code *pcVar1;
  FField *pFVar2;
  bool bVar3;
  uchar *_Dst;
  uchar *_Src;
  TFieldIterator<FProperty> local_38;
  
  if ((param_1 != (uchar *)0x0) && (param_2 != (uchar *)0x0)) {
    if (this->_padding_ == 0) {
      UClass::InternalCreateDefaultObjectWrapper((UClass *)this);
    }
    if (param_1 == (uchar *)this->_padding_) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6106248231283327104>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_ComputeKernelFunction.cpp"
                         ,0x80,"InObjectPtr != static_cast<const void*>(GetDefaultObject())");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      local_38.Field = (FField *)this->_padding_;
      local_38.InterfaceIndex = -1;
      local_38.bIncludeSuper = true;
      local_38.bIncludeDeprecated = true;
      local_38.bIncludeInterface = false;
      local_38.Struct = (UStruct *)this;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      pFVar2 = local_38.Field;
      while (pFVar2 != (FField *)0x0) {
        local_38.Field = pFVar2;
        if (((int)pFVar2[1]._padding_ < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _Src = param_2 + *(int *)((longlong)&pFVar2[1].Owner.Container + 4);
        if (((int)pFVar2[1]._padding_ < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _Dst = param_1 + *(int *)((longlong)&pFVar2[1].Owner.Container + 4);
        if (_Dst != _Src) {
          if ((*(uint *)&pFVar2[1].ClassPrivate >> 0x1e & 1) == 0) {
            (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,_Dst,_Src,(int)pFVar2[1]._padding_);
          }
          else {
            memcpy(_Dst,_Src,
                   (longlong)*(int *)((longlong)&pFVar2[1]._padding_ + 4) *
                   (longlong)(int)pFVar2[1]._padding_);
          }
        }
        local_38.Field = pFVar2->Next;
        TFieldIterator<FProperty>::IterateToNext(&local_38);
        pFVar2 = local_38.Field;
      }
    }
  }
  return;
}

// Link @ 14e1f1180

void __thiscall
UOptimusNode_ComputeKernelFunctionGeneratorClass::Link
          (UOptimusNode_ComputeKernelFunctionGeneratorClass *this,FArchive *param_1,bool param_2)

{
  UClass::Link((UClass *)this,param_1,param_2);
  UClass::AssembleReferenceTokenStream((UClass *)this,true);
  return;
}

// StaticRegisterNativesUOptimusNode_ComputeKernelFunctionGeneratorClass @ 14e225c70

void __cdecl
UOptimusNode_ComputeKernelFunctionGeneratorClass::
StaticRegisterNativesUOptimusNode_ComputeKernelFunctionGeneratorClass(void)

{
  return;
}

