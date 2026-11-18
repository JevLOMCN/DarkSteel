// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149729e70

UClass * __cdecl UPCGKernelParamsDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGKernelParamsDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGKernelParamsDataInterface",
               &Z_Registration_Info_UClass_UPCGKernelParamsDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGKernelParamsDataInterface,0x90,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGKernelParamsDataInterface>,
               InternalVTableHelperCtorCaller<UPCGKernelParamsDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGKernelParamsDataInterface.InnerSingleton;
}

// UPCGKernelParamsDataInterface @ 14973bc80

UPCGKernelParamsDataInterface * __thiscall
UPCGKernelParamsDataInterface::UPCGKernelParamsDataInterface
          (UPCGKernelParamsDataInterface *this,FVTableHelper *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGKernelParamsDataInterface__6B_;
  return this;
}

// UPCGKernelParamsDataInterface @ 14973bcb0

UPCGKernelParamsDataInterface * __thiscall
UPCGKernelParamsDataInterface::UPCGKernelParamsDataInterface
          (UPCGKernelParamsDataInterface *this,FObjectInitializer *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGKernelParamsDataInterface__6B_;
  return this;
}

// ~UPCGKernelParamsDataInterface @ 14973e2c0

void __thiscall
UPCGKernelParamsDataInterface::~UPCGKernelParamsDataInterface(UPCGKernelParamsDataInterface *this)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// GetHLSL @ 149758a90

void __thiscall
UPCGKernelParamsDataInterface::GetHLSL
          (UPCGKernelParamsDataInterface *this,FString *param_1,FString *param_2)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *_Src;
  FString *pFVar3;
  FName *this_00;
  longlong lVar4;
  int iVar5;
  FName *pFVar6;
  undefined1 local_res8 [8];
  FString *local_res10;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  if (*(UObject **)&this->field_0x58 != (UObject *)0x0) {
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x58);
    }
    pUVar2 = *(UObject **)&this->field_0x58;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    iVar1 = *(int *)&pUVar2[3].field_0x10;
    this_00 = *(FName **)&pUVar2[3].field_0x8;
    pFVar6 = this_00 + (longlong)iVar1 * 4;
    while( true ) {
      if (*(int *)&pUVar2[3].field_0x10 != iVar1) {
        `TCheckedPointerIterator<FPCGKernelOverridableParam_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar6) break;
      local_a8.Data.ArrayNum = (param_2->Data).ArrayNum;
      lVar4 = (longlong)local_a8.Data.ArrayNum;
      _Src = (param_2->Data).AllocatorInstance.Data;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_a8.Data.ArrayNum == 0) {
        local_a8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,
                   local_a8.Data.ArrayNum,&local_a8.Data.ArrayMax);
        memcpy(local_a8.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_78,&local_a8);
      pFVar3 = ::FName::ToString(this_00,&local_88);
      FStringFormatArg::FStringFormatArg(&local_58,pFVar3);
      local_b8.ArrayNum = 2;
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_b8.AllocatorInstance,2,&local_b8.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_b8.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl
                (&local_98,L"uint {0}_{1};\nuint Get{1}Internal_{0}() { return {0}_{1}; }\n",
                 &local_b8);
      iVar5 = local_98.Data.ArrayNum + -1;
      if (local_98.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(local_res10,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar5);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 4;
    }
  }
  return;
}

// GetPrivateStaticClass @ 14975bf80

UClass * __cdecl UPCGKernelParamsDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGKernelParamsDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGKernelParamsDataInterface",
               &Z_Registration_Info_UClass_UPCGKernelParamsDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGKernelParamsDataInterface,0x90,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGKernelParamsDataInterface>,
               InternalVTableHelperCtorCaller<UPCGKernelParamsDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGKernelParamsDataInterface.InnerSingleton;
}

// GetSupportedInputs @ 1497657d0

void __thiscall
UPCGKernelParamsDataInterface::GetSupportedInputs
          (UPCGKernelParamsDataInterface *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UObject *pUVar2;
  int iVar3;
  FString *pFVar4;
  FShaderFunctionDefinition *pFVar5;
  FShaderValueTypeHandle FVar6;
  FName *pFVar7;
  FName *this_00;
  undefined1 local_res8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  
  if (*(UObject **)&this->field_0x58 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x58);
    }
    pUVar2 = *(UObject **)&this->field_0x58;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    iVar1 = *(int *)&pUVar2[3].field_0x10;
    this_00 = *(FName **)&pUVar2[3].field_0x8;
    pFVar7 = this_00 + (longlong)iVar1 * 4;
    while( true ) {
      if (*(int *)&pUVar2[3].field_0x10 != iVar1) {
        `TCheckedPointerIterator<FPCGKernelOverridableParam_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar7) break;
      iVar3 = param_1->ArrayNum;
      if (iVar3 == param_1->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar3 + 1;
      pFVar5 = (FShaderFunctionDefinition *)
               ((param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x28);
      DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar5,1);
      pFVar4 = ::FName::ToString(this_00,&local_58);
      FStringFormatArg::FStringFormatArg(&local_48,pFVar4);
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_78.AllocatorInstance,1,&local_78.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_78.AllocatorInstance.Data,&local_48,1);
      ::FString::FormatImpl(&local_68,L"Get{0}Internal",&local_78);
      pFVar5 = FShaderFunctionDefinition::SetName(pFVar5,&local_68);
      FVar6 = FShaderValueType::Get(Uint);
      FShaderFunctionDefinition::AddReturnType(pFVar5,FVar6);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      if ((FStringFormatArg *)local_78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 4;
    }
  }
  return;
}

// StaticRegisterNativesUPCGKernelParamsDataInterface @ 149778780

void __cdecl UPCGKernelParamsDataInterface::StaticRegisterNativesUPCGKernelParamsDataInterface(void)

{
  return;
}

