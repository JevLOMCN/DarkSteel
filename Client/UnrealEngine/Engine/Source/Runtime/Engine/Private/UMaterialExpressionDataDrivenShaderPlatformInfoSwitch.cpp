// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472978d0

UClass * __cdecl UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDataDrivenShaderPlatformInfoSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDataDrivenShaderPlatformInfoSwitch,0x118,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDataDrivenShaderPlatformInfoSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDataDrivenShaderPlatformInfoSwitch>
               ,local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch.
         InnerSingleton;
}

// UMaterialExpressionDataDrivenShaderPlatformInfoSwitch @ 14729ce00

UMaterialExpressionDataDrivenShaderPlatformInfoSwitch * __thiscall
UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::
UMaterialExpressionDataDrivenShaderPlatformInfoSwitch
          (UMaterialExpressionDataDrivenShaderPlatformInfoSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDataDrivenShaderPlatformInfoSwitch__6B_;
  (this->InputTrue).OutputIndex = 0;
  (this->InputTrue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputTrue).InputName.Number = 0;
  (this->InputTrue).MaskR = 0;
  (this->InputTrue).MaskG = 0;
  (this->InputTrue).MaskB = 0;
  (this->InputTrue).MaskA = 0;
  (this->InputTrue).Expression = (UMaterialExpression *)0x0;
  (this->InputFalse).OutputIndex = 0;
  (this->InputFalse).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputFalse).InputName.Number = 0;
  (this->InputFalse).MaskR = 0;
  (this->InputFalse).MaskG = 0;
  (this->InputFalse).MaskB = 0;
  (this->InputFalse).MaskA = 0;
  (this->InputFalse).Expression = (UMaterialExpression *)0x0;
  (this->DDSPIPropertyNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DDSPIPropertyNames).ArrayNum = 0;
  (this->DDSPIPropertyNames).ArrayMax = 0;
  return this;
}

// ~UMaterialExpressionDataDrivenShaderPlatformInfoSwitch @ 14729dbb0

void __thiscall
UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::
~UMaterialExpressionDataDrivenShaderPlatformInfoSwitch
          (UMaterialExpressionDataDrivenShaderPlatformInfoSwitch *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionDataDrivenShaderPlatformInfoSwitch__6B_;
  pFVar1 = (this->DDSPIPropertyNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0e90

UClass * __cdecl UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDataDrivenShaderPlatformInfoSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDataDrivenShaderPlatformInfoSwitch,0x118,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDataDrivenShaderPlatformInfoSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDataDrivenShaderPlatformInfoSwitch>
               ,local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDataDrivenShaderPlatformInfoSwitch @ 1472a1df0

void __cdecl
UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::
StaticRegisterNativesUMaterialExpressionDataDrivenShaderPlatformInfoSwitch(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr =
       Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetNameOptions @ 1472a43d0

void __cdecl
UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::execGetNameOptions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetNameOptions((UMaterialExpressionDataDrivenShaderPlatformInfoSwitch *)param_1,&local_18
                         );
  if (param_3 != pTVar1) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// UMaterialExpressionDataDrivenShaderPlatformInfoSwitch @ 148afb870

UMaterialExpressionDataDrivenShaderPlatformInfoSwitch * __thiscall
UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::
UMaterialExpressionDataDrivenShaderPlatformInfoSwitch
          (UMaterialExpressionDataDrivenShaderPlatformInfoSwitch *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDataDrivenShaderPlatformInfoSwitch__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->InputTrue).OutputIndex = 0;
  (this->InputTrue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputTrue).InputName.Number = 0;
  (this->InputTrue).MaskR = 0;
  (this->InputTrue).MaskG = 0;
  (this->InputTrue).MaskB = 0;
  (this->InputTrue).MaskA = 0;
  (this->InputTrue).Expression = (UMaterialExpression *)0x0;
  (this->InputFalse).OutputIndex = 0;
  (this->InputFalse).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputFalse).InputName.Number = 0;
  (this->InputFalse).MaskR = 0;
  (this->InputFalse).MaskG = 0;
  (this->InputFalse).MaskB = 0;
  (this->InputFalse).MaskA = 0;
  (this->InputFalse).Expression = (UMaterialExpression *)0x0;
  (this->DDSPIPropertyNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DDSPIPropertyNames).ArrayNum = 0;
  (this->DDSPIPropertyNames).ArrayMax = 0;
  return this;
}

// GetNameOptions @ 148b02130

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::GetNameOptions
          (UMaterialExpressionDataDrivenShaderPlatformInfoSwitch *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// PostLoad @ 148b02ee0

void __thiscall
UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::PostLoad
          (UMaterialExpressionDataDrivenShaderPlatformInfoSwitch *this)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString FStack_28;
  FString FStack_18;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId992,"UMaterialExpression_PostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialExpressions.cpp"
               ,0x3e0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId992);
  }
  UObject::PostLoad((UObject *)this);
  if (this->_padding_ == 0) {
    lVar2 = this->_padding_;
    pUVar5 = Z_Construct_UClass_UMaterial_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar3 = (UObject *)this->_padding_;
      if (pUVar3 == (UObject *)0x0) {
        pFVar6 = GetTypeName<UMaterial>(&FStack_28);
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar7);
      }
      pUVar5 = Z_Construct_UClass_UMaterial_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        pFVar6 = GetTypeName<UMaterial>(&FStack_28);
        pwVar7 = L"";
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        pFVar6 = GetFullNameForCastLogError<UObject>(&FStack_18,pUVar3);
        if ((pFVar6->Data).ArrayNum != 0) {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar7,pwVar8);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      this->_padding_ = (longlong)pUVar3;
    }
  }
  if (this->_padding_ == 0) {
    lVar2 = this->_padding_;
    pUVar5 = Z_Construct_UClass_UMaterialFunction_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar3 = (UObject *)this->_padding_;
      if (pUVar3 == (UObject *)0x0) {
        pFVar6 = GetTypeName<UMaterialFunction>(&FStack_18);
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar7);
      }
      pUVar5 = Z_Construct_UClass_UMaterialFunction_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        pFVar6 = GetTypeName<UMaterialFunction>(&FStack_18);
        pwVar7 = L"";
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        pFVar6 = GetFullNameForCastLogError<UObject>(&FStack_28,pUVar3);
        if ((pFVar6->Data).ArrayNum != 0) {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar7,pwVar8);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      this->_padding_ = (longlong)pUVar3;
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

