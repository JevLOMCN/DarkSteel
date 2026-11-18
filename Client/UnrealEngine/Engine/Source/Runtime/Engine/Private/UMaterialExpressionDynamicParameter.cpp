// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472a4c50

UClass * __cdecl UMaterialExpressionDynamicParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDynamicParameter.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDynamicParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionDynamicParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDynamicParameter,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDynamicParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDynamicParameter>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDynamicParameter.InnerSingleton;
}

// UMaterialExpressionDynamicParameter @ 1472acc40

UMaterialExpressionDynamicParameter * __thiscall
UMaterialExpressionDynamicParameter::UMaterialExpressionDynamicParameter
          (UMaterialExpressionDynamicParameter *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDynamicParameter__6B_;
  (this->ParamNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParamNames).ArrayNum = 0;
  FVar1 = FLinearColor::White;
  (this->ParamNames).ArrayMax = 0;
  this->ParameterIndex = 0;
  (this->DefaultValue).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return this;
}

// ~UMaterialExpressionDynamicParameter @ 1472af5e0

void __thiscall
UMaterialExpressionDynamicParameter::~UMaterialExpressionDynamicParameter
          (UMaterialExpressionDynamicParameter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionDynamicParameter__6B_;
  DestructItems<FString,int>
            ((FString *)(this->ParamNames).AllocatorInstance.Data,(this->ParamNames).ArrayNum);
  pFVar1 = (this->ParamNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b1ee0

UClass * __cdecl UMaterialExpressionDynamicParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDynamicParameter.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDynamicParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionDynamicParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDynamicParameter,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDynamicParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDynamicParameter>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDynamicParameter.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDynamicParameter @ 1472b44d0

void __cdecl
UMaterialExpressionDynamicParameter::StaticRegisterNativesUMaterialExpressionDynamicParameter(void)

{
  return;
}

// UMaterialExpressionDynamicParameter @ 148afbe10

/* WARNING: Removing unreachable block (ram,0x000148afc121) */
/* WARNING: Removing unreachable block (ram,0x000148afbf7b) */
/* WARNING: Removing unreachable block (ram,0x000148afc04e) */
/* WARNING: Removing unreachable block (ram,0x000148afc1f4) */

UMaterialExpressionDynamicParameter * __thiscall
UMaterialExpressionDynamicParameter::UMaterialExpressionDynamicParameter
          (UMaterialExpressionDynamicParameter *this,FObjectInitializer *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  FLinearColor FVar3;
  bool bVar4;
  int iVar5;
  UMaterialExpressionDynamicParameter *pUVar6;
  FScriptContainerElement *pFVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  pTVar1 = &this->ParamNames;
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
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ParamNames).ArrayNum = 0;
  (this->ParamNames).ArrayMax = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionDynamicParameter__6B_;
  FVar3 = FLinearColor::White;
  this->ParameterIndex = 0;
  (this->DefaultValue).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  ::FString::FString(&local_48,L"Param1");
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar7 + (longlong)(this->ParamNames).ArrayMax * 0x10)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UMaterialExpressionDynamicParameter *)(*pcVar2)();
    return pUVar6;
  }
  iVar5 = (this->ParamNames).ArrayNum;
  if (iVar5 == (this->ParamNames).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->ParamNames).ArrayMax);
  }
  (this->ParamNames).ArrayNum = iVar5 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_48.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_48.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_38,L"Param2");
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar7 + (longlong)(this->ParamNames).ArrayMax * 0x10)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UMaterialExpressionDynamicParameter *)(*pcVar2)();
    return pUVar6;
  }
  iVar5 = (this->ParamNames).ArrayNum;
  if (iVar5 == (this->ParamNames).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->ParamNames).ArrayMax);
  }
  (this->ParamNames).ArrayNum = iVar5 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_28,L"Param3");
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar7 + (longlong)(this->ParamNames).ArrayMax * 0x10)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UMaterialExpressionDynamicParameter *)(*pcVar2)();
    return pUVar6;
  }
  iVar5 = (this->ParamNames).ArrayNum;
  if (iVar5 == (this->ParamNames).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->ParamNames).ArrayMax);
  }
  (this->ParamNames).ArrayNum = iVar5 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_28.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_28.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_28.Data.ArrayMax;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_18,L"Param4");
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar7 + (longlong)(this->ParamNames).ArrayMax * 0x10)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UMaterialExpressionDynamicParameter *)(*pcVar2)();
    return pUVar6;
  }
  iVar5 = (this->ParamNames).ArrayNum;
  if (iVar5 == (this->ParamNames).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->ParamNames).ArrayMax);
  }
  (this->ParamNames).ArrayNum = iVar5 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_18.Data.ArrayMax;
  return this;
}

// CopyDynamicParameterProperties @ 148b00350

bool __thiscall
UMaterialExpressionDynamicParameter::CopyDynamicParameterProperties
          (UMaterialExpressionDynamicParameter *this,UMaterialExpressionDynamicParameter *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  
  if (((param_1 != (UMaterialExpressionDynamicParameter *)0x0) && (param_1 != this)) &&
     (this->ParameterIndex == param_1->ParameterIndex)) {
    iVar6 = 0;
    lVar7 = 0;
    do {
      if ((param_1->ParamNames).ArrayNum <= iVar6) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pFVar1 = (param_1->ParamNames).AllocatorInstance.Data;
      if ((this->ParamNames).ArrayNum <= iVar6) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      ::FString::operator=
                ((FString *)((this->ParamNames).AllocatorInstance.Data + lVar7),
                 (FString *)(pFVar1 + lVar7));
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar6 < 4);
    uVar3 = *(undefined8 *)((longlong)&(param_1->DefaultValue).field0_0x0 + 8);
    *(undefined8 *)&(this->DefaultValue).field0_0x0 =
         *(undefined8 *)&(param_1->DefaultValue).field0_0x0;
    *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8) = uVar3;
    return true;
  }
  return false;
}

// PostLoad @ 148b02ef0

void __thiscall
UMaterialExpressionDynamicParameter::PostLoad(UMaterialExpressionDynamicParameter *this)

{
  FPackageFileVersion FVar1;
  
  UMaterialExpression::PostLoad((UMaterialExpression *)this);
  FVar1 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar1 < 0x1da) {
    (this->DefaultValue).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  }
  return;
}

