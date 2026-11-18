// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 15

// StaticClass @ 14e111ff0

UClass * __cdecl UOptimusGraphDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGraphDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusGraphDataInterface",
               &Z_Registration_Info_UClass_UOptimusGraphDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGraphDataInterface,0x40,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UOptimusGraphDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusGraphDataInterface>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGraphDataInterface.InnerSingleton;
}

// UOptimusGraphDataInterface @ 14e15a070

UOptimusGraphDataInterface * __thiscall
UOptimusGraphDataInterface::UOptimusGraphDataInterface
          (UOptimusGraphDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGraphDataInterface__6B_;
  (this->Variables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Variables).ArrayNum = 0;
  (this->Variables).ArrayMax = 0;
  this->ParameterBufferSize = 0;
  return this;
}

// UOptimusGraphDataInterface @ 14e15a0b0

UOptimusGraphDataInterface * __thiscall
UOptimusGraphDataInterface::UOptimusGraphDataInterface
          (UOptimusGraphDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGraphDataInterface__6B_;
  (this->Variables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Variables).ArrayNum = 0;
  (this->Variables).ArrayMax = 0;
  this->ParameterBufferSize = 0;
  return this;
}

// ~UOptimusGraphDataInterface @ 14e162bc0

void __thiscall
UOptimusGraphDataInterface::~UOptimusGraphDataInterface(UOptimusGraphDataInterface *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusGraphDataInterface__6B_;
  DestructItems<FOptimusGraphVariableDescription,int>
            ((FOptimusGraphVariableDescription *)(this->Variables).AllocatorInstance.Data,
             (this->Variables).ArrayNum);
  pFVar1 = (this->Variables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e181b20

bool __thiscall
UOptimusGraphDataInterface::CanSupportUnifiedDispatch(UOptimusGraphDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19cf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusGraphDataInterface::CreateDataProvider
          (UOptimusGraphDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
          ulong64 param_3)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOptimusGraphDataProvider *this_00;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UOptimusGraphDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this_00 = (UOptimusGraphDataProvider *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UOptimusGraphDataProvider::Init(this_00,&this->Variables,this->ParameterBufferSize);
  return (UComputeDataProvider *)this_00;
}

// FindFunctionIndex @ 14e1b1310

int __thiscall
UOptimusGraphDataInterface::FindFunctionIndex
          (UOptimusGraphDataInterface *this,FOptimusValueIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->Variables).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Variables).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (this->Variables).AllocatorInstance.Data;
      if ((pFVar1[lVar7 + 0x18] == (FScriptContainerElement)param_1->Type) &&
         (*(FName *)(pFVar1 + lVar7 + 0x1c) == param_1->Name)) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x88;
    } while ((int)uVar6 < (this->Variables).ArrayNum);
  }
  return -1;
}

// GetClassName @ 14e1bcb90

wchar_t * __thiscall UOptimusGraphDataInterface::GetClassName(UOptimusGraphDataInterface *this)

{
  return L"Graph";
}

// GetHLSL @ 14e1c6fe0

void __thiscall
UOptimusGraphDataInterface::GetHLSL
          (UOptimusGraphDataInterface *this,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString *local_res10;
  FName local_res20;
  FString local_58;
  FString local_48;
  
  iVar1 = (this->Variables).ArrayNum;
  pFVar2 = (this->Variables).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x88;
  local_res10 = param_1;
  while( true ) {
    if ((this->Variables).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOptimusGraphVariableDescription_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    FShaderValueType::ToString(*(FShaderValueType **)(pFVar2 + 0x10),&local_48,&local_res20);
    ::FString::PrintfImpl(&local_58,L"%s %s_%s;\n");
    iVar4 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x88;
  }
  iVar1 = (this->Variables).ArrayNum;
  pFVar2 = (this->Variables).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x88;
  while( true ) {
    if ((this->Variables).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOptimusGraphVariableDescription_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    FShaderValueType::ToString(*(FShaderValueType **)(pFVar2 + 0x10),&local_48,&local_res20);
    ::FString::PrintfImpl(&local_58,L"%s Read%s_%s()\n{\n\treturn %s_%s;\n}\n");
    iVar4 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(local_res10,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x88;
  }
  return;
}

// GetPrivateStaticClass @ 14e1d6070

UClass * __cdecl UOptimusGraphDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGraphDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusGraphDataInterface",
               &Z_Registration_Info_UClass_UOptimusGraphDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGraphDataInterface,0x40,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UOptimusGraphDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusGraphDataInterface>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGraphDataInterface.InnerSingleton;
}

// GetShaderParameters @ 14e1e1ca0

void __thiscall
UOptimusGraphDataInterface::GetShaderParameters
          (UOptimusGraphDataInterface *this,wchar_t *param_1,
          FShaderParametersMetadataBuilder *param_2,FShaderParametersMetadataAllocations *param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FShaderParametersMetadata *local_58;
  FShaderParametersMetadataAllocations local_50;
  
  iVar5 = (this->Variables).ArrayNum;
  pFVar7 = (this->Variables).AllocatorInstance.Data;
  local_50.Names.Chunks.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9 = pFVar7 + (longlong)iVar5 * 0x88;
  local_50.Names.Chunks.Array.ArrayNum = 0;
  local_50.Names.Chunks.Array.ArrayMax = 0;
  local_50.Names.NumElements = 0;
  local_50.ShaderParameterMetadatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ShaderParameterMetadatas.ArrayNum = 0;
  local_50.ShaderParameterMetadatas.ArrayMax = 0;
  while( true ) {
    if ((this->Variables).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FOptimusGraphVariableDescription_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    if (*(int *)(pFVar7 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)pFVar7;
    }
    ComputeFramework::AddParamForType
              ((FShaderParametersMetadataBuilder *)&local_50.Names,pwVar6,
               (FShaderValueTypeHandle *)(pFVar7 + 0x10),&local_50.ShaderParameterMetadatas);
    pFVar7 = pFVar7 + 0x88;
  }
  local_58 = FShaderParametersMetadataBuilder::Build
                       ((FShaderParametersMetadataBuilder *)&local_50.Names,ShaderParameterStruct,
                        L"UGraphDataInterface");
  pFVar7 = (param_3->ShaderParameterMetadatas).AllocatorInstance.Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 <
      pFVar7 + (longlong)(param_3->ShaderParameterMetadatas).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_3->ShaderParameterMetadatas).ArrayNum;
  piVar1 = &(param_3->ShaderParameterMetadatas).ArrayNum;
  piVar2 = &(param_3->ShaderParameterMetadatas).ArrayMax;
  if (iVar5 == (param_3->ShaderParameterMetadatas).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)param_3,piVar2);
  }
  *piVar1 = iVar5 + 1;
  *(FShaderParametersMetadata **)
   ((param_3->ShaderParameterMetadatas).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_58;
  if (param_3 == &local_50) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar8 = (longlong)local_50.ShaderParameterMetadatas.ArrayNum;
  if (local_50.ShaderParameterMetadatas.ArrayNum != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_50.ShaderParameterMetadatas.ArrayNum,(ForAnyElementType *)param_3,
                       piVar1,piVar2);
    memcpy((param_3->ShaderParameterMetadatas).AllocatorInstance.Data + (longlong)iVar5 * 8,
           local_50.ShaderParameterMetadatas.AllocatorInstance.Data,lVar8 << 3);
  }
  FShaderParametersMetadataBuilder::AddNestedStruct(param_2,param_1,local_58,Float);
  if (local_50.ShaderParameterMetadatas.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ShaderParameterMetadatas.AllocatorInstance.Data);
  }
  if (local_50.Names.Chunks.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Names.Chunks.Array.AllocatorInstance.Data);
  }
  return;
}

// GetSupportedInputs @ 14e1e5550

void __thiscall
UOptimusGraphDataInterface::GetSupportedInputs
          (UOptimusGraphDataInterface *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FShaderFunctionDefinition *pFVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FString local_38;
  
  uVar6 = (this->Variables).ArrayNum + param_1->ArrayNum;
  if (-1 < (int)uVar6) {
    piVar1 = &param_1->ArrayMax;
    if (*piVar1 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar6,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    iVar2 = (this->Variables).ArrayNum;
    pFVar5 = (this->Variables).AllocatorInstance.Data;
    pFVar7 = pFVar5 + (longlong)iVar2 * 0x88;
    while( true ) {
      if ((this->Variables).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FOptimusGraphVariableDescription_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar7) break;
      iVar3 = param_1->ArrayNum;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar3 + 1;
      pFVar4 = (FShaderFunctionDefinition *)
               ((param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x28);
      DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar4,1);
      ::FString::PrintfImpl(&local_38,L"Read%s");
      pFVar4 = FShaderFunctionDefinition::SetName(pFVar4,&local_38);
      FShaderFunctionDefinition::AddReturnType(pFVar4,*(FShaderValueType **)(pFVar5 + 0x10));
      pFVar5 = pFVar5 + 0x88;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Init @ 14e1eb420

void __thiscall
UOptimusGraphDataInterface::Init
          (UOptimusGraphDataInterface *this,
          TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_> *this_00;
  undefined4 uVar1;
  FShaderParametersMetadata *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FShaderParametersMetadata *local_88;
  longlong local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  TArray<FShaderParametersMetadata_*,TSizedDefaultAllocator<32>_> local_68;
  FShaderParametersMetadataBuilder local_58;
  
  this_00 = &this->Variables;
  TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_>::operator=(this_00,param_1);
  iVar5 = (this->Variables).ArrayNum;
  uVar12 = 0;
  pFVar10 = (this_00->AllocatorInstance).Data;
  local_58.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar15 = pFVar10 + (longlong)iVar5 * 0x88;
  local_58.Members.ArrayNum = 0;
  local_58.Members.ArrayMax = 0;
  local_58.NextMemberOffset = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  while( true ) {
    if ((this->Variables).ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FOptimusGraphVariableDescription,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar10 == pFVar15) break;
    if (*(int *)(pFVar10 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar10;
    }
    ComputeFramework::AddParamForType
              (&local_58,pwVar8,(FShaderValueTypeHandle *)(pFVar10 + 0x10),&local_68);
    pFVar10 = pFVar10 + 0x88;
  }
  local_88 = FShaderParametersMetadataBuilder::Build
                       (&local_58,ShaderParameterStruct,L"UGraphDataInterface");
  if (((local_78.Data <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 < local_78.Data + (longlong)local_70[1] * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = local_70[0];
  if (local_70[0] == local_70[1]) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_78,local_70 + 1);
  }
  local_70[0] = iVar5 + 1;
  *(FShaderParametersMetadata **)(local_78.Data + (longlong)iVar5 * 8) = local_88;
  lVar11 = (longlong)local_68.ArrayNum;
  if (local_68.ArrayNum != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_68.ArrayNum,&local_78,local_70,local_70 + 1);
    memcpy(local_78.Data + (longlong)iVar5 * 8,local_68.AllocatorInstance.Data,lVar11 << 3);
  }
  pFVar2 = local_88;
  if (0 < (this->Variables).ArrayNum) {
    local_80 = 0;
    lVar11 = 0;
    uVar16 = uVar12;
    do {
      uVar9 = (uint)uVar12;
      uVar14 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (pFVar2->Members).ArrayNum) {
        uVar6 = uVar14;
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
      pwVar8 = *(wchar_t **)((pFVar2->Members).AllocatorInstance.Data + lVar11);
      uVar6 = 0;
      if ((int)uVar9 < (this->Variables).ArrayNum) {
        uVar6 = uVar14;
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
      pFVar10 = (this_00->AllocatorInstance).Data;
      if (*(int *)(pFVar10 + uVar16 + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)(pFVar10 + uVar16);
      }
      iVar5 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
      if ((iVar5 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Variables[VariableIndex].Name == Members[VariableIndex].GetName()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceGraph.cpp"
                             ,0x26,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar9 < (pFVar2->Members).ArrayNum) {
        uVar6 = uVar14;
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
      uVar1 = *(undefined4 *)((pFVar2->Members).AllocatorInstance.Data + lVar11 + 0x14);
      uVar6 = 0;
      if ((int)uVar9 < (this->Variables).ArrayNum) {
        uVar6 = uVar14;
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
      uVar12 = (ulonglong)(uVar9 + 1);
      local_80 = local_80 + 1;
      lVar11 = lVar11 + 0x30;
      *(undefined4 *)((this_00->AllocatorInstance).Data + uVar16 + 0x24) = uVar1;
      uVar16 = uVar16 + 0x88;
    } while ((int)(uVar9 + 1) < (this->Variables).ArrayNum);
  }
  iVar5 = local_70[0];
  this->ParameterBufferSize = local_88->Size;
  pFVar10 = local_78.Data + (longlong)local_70[0] * 8;
  FVar13.Data = local_78.Data;
  while( true ) {
    if (local_70[0] != iVar5) {
      `TCheckedPointerIterator<FShaderParametersMetadata_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar13.Data == pFVar10) break;
    pFVar2 = *(FShaderParametersMetadata **)FVar13.Data;
    if (pFVar2 != (FShaderParametersMetadata *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    FVar13.Data = FVar13.Data + 8;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_58.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Members.AllocatorInstance.Data);
  }
  return;
}

// PostLoad @ 14e1fb9a0

void __thiscall UOptimusGraphDataInterface::PostLoad(UOptimusGraphDataInterface *this)

{
  FShaderValueContainer *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *_Src;
  code *pcVar6;
  FOptimusDataType *this_00;
  bool bVar7;
  FOptimusDataTypeRegistry *this_01;
  FShaderValueContainer *pFVar8;
  FScriptContainerElement *pFVar9;
  TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  FShaderValueContainer local_48;
  
  UObject::PostLoad((UObject *)this);
  pFVar12 = (this->Variables).AllocatorInstance.Data;
  iVar3 = (this->Variables).ArrayNum;
  pFVar9 = pFVar12 + 0x50;
  pFVar11 = pFVar12 + (longlong)iVar3 * 0x88;
  do {
    if ((this->Variables).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FOptimusGraphVariableDescription,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar11) {
      return;
    }
    if (*(int *)(pFVar9 + -0x18) != 0) {
      this_01 = FOptimusDataTypeRegistry::Get();
      FOptimusDataTypeRegistry::FindType(this_01,&local_58,*(FShaderValueType **)(pFVar9 + -0x40));
      this_00 = local_58.Object;
      if ((local_58.Object == (FOptimusDataType *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar8 = FOptimusDataType::MakeShaderValue(this_00,&local_48);
      pFVar1 = (FShaderValueContainer *)(pFVar9 + -0x10);
      if (pFVar1 != pFVar8) {
        pFVar5 = (pFVar1->ShaderValue).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar1->ShaderValue).AllocatorInstance.Data = (pFVar8->ShaderValue).AllocatorInstance.Data;
        (pFVar8->ShaderValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar9 + -8) = (pFVar8->ShaderValue).ArrayNum;
        *(int *)(pFVar9 + -4) = (pFVar8->ShaderValue).ArrayMax;
        (pFVar8->ShaderValue).ArrayNum = 0;
        (pFVar8->ShaderValue).ArrayMax = 0;
      }
      pTVar10 = &pFVar8->ArrayList;
      if ((TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *)pFVar9 != pTVar10) {
        DestructItems<FArrayShaderValue,int>(*(FArrayShaderValue **)pFVar9,*(int *)(pFVar9 + 8));
        if (*(void **)pFVar9 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar9);
        }
        *(FScriptContainerElement **)pFVar9 = (pTVar10->AllocatorInstance).Data;
        (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar9 + 8) = (pFVar8->ArrayList).ArrayNum;
        *(int *)(pFVar9 + 0xc) = (pFVar8->ArrayList).ArrayMax;
        (pFVar8->ArrayList).ArrayNum = 0;
        (pFVar8->ArrayList).ArrayMax = 0;
      }
      DestructItems<FArrayShaderValue,int>
                ((FArrayShaderValue *)local_48.ArrayList.AllocatorInstance.Data,
                 local_48.ArrayList.ArrayNum);
      if (local_48.ArrayList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ArrayList.AllocatorInstance.Data);
      }
      if (local_48.ShaderValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ShaderValue.AllocatorInstance.Data);
      }
      if ((*(int *)(pFVar9 + 8) != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("VariableDescription.ShaderValue_DEPRECATED.ArrayList.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceGraph.cpp"
                             ,0x80,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = pFVar9 + -0x20;
      if (pFVar9 + -0x10 != pFVar5) {
        iVar4 = *(int *)(pFVar9 + -0x18);
        pFVar2 = pFVar9 + -4;
        _Src = *(FScriptContainerElement **)&pFVar5->field_0x0;
        *(int *)(pFVar9 + -8) = iVar4;
        if ((iVar4 == 0) && (*(int *)pFVar2 == 0)) {
          *(int *)pFVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar4,*(int *)pFVar2,(ForAnyElementType *)(pFVar9 + -0x10),iVar4,
                     (int *)pFVar2);
          if (iVar4 != 0) {
            memcpy(*(void **)(pFVar9 + -0x10),_Src,(longlong)iVar4);
          }
        }
      }
      *(undefined4 *)(pFVar9 + -0x18) = 0;
      if (*(int *)(pFVar9 + -0x14) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)pFVar5,0,(int *)(pFVar9 + -0x14));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    pFVar12 = pFVar12 + 0x88;
    pFVar9 = pFVar9 + 0x88;
  } while( true );
}

// StaticRegisterNativesUOptimusGraphDataInterface @ 14e225a40

void __cdecl UOptimusGraphDataInterface::StaticRegisterNativesUOptimusGraphDataInterface(void)

{
  return;
}

