// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// ParameterDefaultName'' @ 141161cf0

void __cdecl `dynamic_initializer_for_'UMaterialExpressionParameter::ParameterDefaultName__(void)

{
  ::FName::FName(&UMaterialExpressionParameter::ParameterDefaultName,L"Param");
  return;
}

// `dynamic_initializer_for_'NAME_GradientBias'' @ 141161d10

void __cdecl _dynamic_initializer_for__NAME_GradientBias__(void)

{
  FName::FName(&NAME_GradientBias,L"GradientBias");
  return;
}

// `dynamic_initializer_for_'NAME_GradientCount'' @ 141161d30

void __cdecl _dynamic_initializer_for__NAME_GradientCount__(void)

{
  FName::FName(&NAME_GradientCount,L"GradientCount");
  return;
}

// `dynamic_initializer_for_'NAME_GradientScale'' @ 141161d50

void __cdecl _dynamic_initializer_for__NAME_GradientScale__(void)

{
  FName::FName(&NAME_GradientScale,L"GradientScale");
  return;
}

// `dynamic_initializer_for_'NAME_GradientTexture'' @ 141161d70

void __cdecl _dynamic_initializer_for__NAME_GradientTexture__(void)

{
  FName::FName(&NAME_GradientTexture,L"GradientTexture");
  return;
}

// CastChecked<UMaterialExpression,UObject> @ 148afa500

UMaterialExpression * __cdecl CastChecked<UMaterialExpression,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMaterialExpression>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMaterialExpression_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMaterialExpression *)param_1;
  }
  pFVar3 = GetTypeName<UMaterialExpression>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UMaterialFunction,UObject> @ 148afa5c0

UMaterialFunction * __cdecl CastChecked<UMaterialFunction,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMaterialFunction>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMaterialFunction_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMaterialFunction *)param_1;
  }
  pFVar3 = GetTypeName<UMaterialFunction>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetTypeName<UMaterialExpression> @ 148afa680

FString * __cdecl GetTypeName<UMaterialExpression>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMaterialExpression_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMaterialFunction> @ 148afa6c0

FString * __cdecl GetTypeName<UMaterialFunction>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMaterialFunction_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CanConnectMaterialValueTypes @ 148affdd0

bool __cdecl CanConnectMaterialValueTypes(uint param_1,uint param_2)

{
  if (((param_1 | param_2) >> 0x16 & 1) != 0) {
    return param_1 == param_2;
  }
  if (((((param_1 >> 10 & 1) == 0) && ((param_2 >> 10 & 1) == 0)) && ((param_2 & param_1) == 0)) &&
     ((((param_1 & 0x13c000f) == 0 || ((param_2 & 0x13c000f) == 0)) &&
      ((param_1 != 0x1000000 || (param_2 != 0x200)))))) {
    return false;
  }
  return true;
}

// CanConnectMaterialValueTypes @ 148affe20

bool __cdecl CanConnectMaterialValueTypes(EMaterialValueType param_1,EMaterialValueType param_2)

{
  if (((ulonglong)(param_1 | param_2) >> 0x16 & 1) != 0) {
    return param_1 == param_2;
  }
  if ((((((ulonglong)param_1 >> 10 & 1) == 0) && (((ulonglong)param_2 >> 10 & 1) == 0)) &&
      ((param_2 & param_1) == 0)) &&
     (((param_1 & MCT_Numeric) == 0 || ((param_2 & MCT_Numeric) == 0)))) {
    if (param_1 == MCT_Bool) {
      return param_2 == MCT_StaticBool;
    }
    return false;
  }
  return true;
}

// CompileShadingModelBlendFunction @ 148affe80

int __cdecl
CompileShadingModelBlendFunction(FMaterialCompiler *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_2 == -1) || (param_3 == -1)) || (param_4 == -1)) {
    iVar2 = -1;
  }
  else {
    uVar1 = (**(code **)(param_1->_padding_ + 0x138))(param_1,__real_3f000000);
    iVar2 = (**(code **)(param_1->_padding_ + 0x328))
                      (param_1,param_4,uVar1,param_3,0xffffffff,param_2,0xffffffff);
  }
  return iVar2;
}

// CompileSubstrateBlendFunction @ 148afff10

int __cdecl
CompileSubstrateBlendFunction(FMaterialCompiler *param_1,int param_2,int param_3,int param_4)

{
  return -1;
}

// ConvertToMultilineToolTip @ 148afffe0

void __cdecl
ConvertToMultilineToolTip
          (FString *param_1,int param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  FString local_48;
  FString local_38;
  
  iVar10 = 0;
  DestructItems<FString,int>((FString *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (*piVar1 != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,&param_3->AllocatorInstance,0,piVar1);
  }
  lVar11 = 0;
  iVar6 = 0;
  do {
    while( true ) {
      iVar5 = (param_1->Data).ArrayNum;
      iVar7 = iVar5 + -1;
      iVar12 = 0;
      iVar4 = iVar7;
      if (iVar5 == 0) {
        iVar4 = iVar12;
      }
      if (iVar4 <= iVar10) {
        return;
      }
      iVar10 = iVar10 + param_2;
      lVar11 = lVar11 + param_2;
      iVar4 = iVar7;
      if (iVar5 == 0) {
        iVar4 = iVar12;
      }
      if (iVar10 < iVar4) break;
      if (iVar5 != 0) {
        iVar12 = iVar7;
      }
      pFVar8 = (FScriptContainerElement *)FString::Mid(param_1,&local_38,iVar6,iVar12 - iVar6);
      pFVar9 = (param_3->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar7 + 1;
      pFVar9 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 =
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = *(int *)&pFVar8[8].field_0x0;
      *(int *)(pFVar9 + 0xc) = *(int *)&pFVar8[0xc].field_0x0;
      *(undefined8 *)&pFVar8[8].field_0x0 = 0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    while( true ) {
      iVar7 = (param_1->Data).ArrayNum;
      iVar5 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar5 = 0;
      }
      if (iVar5 <= iVar10) break;
      if ((((iVar7 == 0) || (iVar10 < 0)) || (iVar7 + -1 <= iVar10)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(short *)((param_1->Data).AllocatorInstance.Data + lVar11 * 2) == 0x20) break;
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 1;
    }
    iVar7 = (param_1->Data).ArrayNum;
    iVar5 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar5 = 0;
    }
    if (iVar10 < iVar5) {
      if ((((iVar10 < 0) || (iVar7 == 0)) || (iVar7 + -1 <= iVar10)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(short *)((param_1->Data).AllocatorInstance.Data + lVar11 * 2) == 0x20) {
        iVar10 = iVar10 + 1;
        lVar11 = lVar11 + 1;
      }
    }
    pFVar8 = (FScriptContainerElement *)FString::Mid(param_1,&local_48,iVar6,iVar10 - iVar6);
    pFVar9 = (param_3->AllocatorInstance).Data;
    if (((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_3->AllocatorInstance,piVar1);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar9 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar9 + 8) = *(int *)&pFVar8[8].field_0x0;
    *(int *)(pFVar9 + 0xc) = *(int *)&pFVar8[0xc].field_0x0;
    *(undefined8 *)&pFVar8[8].field_0x0 = 0;
    iVar6 = iVar10;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  } while( true );
}

// GetEditorOnlyDataName @ 148b00950

FString * __cdecl
MaterialFunctionInterface::GetEditorOnlyDataName(FString *__return_storage_ptr__,wchar_t *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%sEditorOnlyData");
  return __return_storage_ptr__;
}

// GetMaterialValueTypeDescriptions @ 148b00fe0

void __cdecl
GetMaterialValueTypeDescriptions(uint param_1,TArray<FText,TSizedDefaultAllocator<32>_> *param_2)

{
  GetMaterialValueTypeDescriptions((ulonglong)param_1,param_2);
  return;
}

// GetMaterialValueTypeDescriptions @ 148b00ff0

void __cdecl
GetMaterialValueTypeDescriptions
          (EMaterialValueType param_1,TArray<FText,TSizedDefaultAllocator<32>_> *param_2)

{
  FText *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FText *pFVar6;
  EMaterialValueType EVar7;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  uVar4 = (uint)param_1 & 0xf;
  if ((param_1 & MCT_Float) != 0) {
    if (uVar4 == 1) {
LAB_148b0104f:
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_128,L"MaterialExpression",L"Float",L"Float");
      pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
      if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
    }
    else if (uVar4 == 2) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_138,L"MaterialExpression",L"Float2",L"Float 2");
      pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
      if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
      local_128.TextData.Reference = local_138.TextData.Reference;
    }
    else if (uVar4 == 4) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_148,L"MaterialExpression",L"Float3",L"Float 3");
      pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
      if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
      local_128.TextData.Reference = local_148.TextData.Reference;
    }
    else {
      if (uVar4 != 8) {
        if (uVar4 != 0xf) goto LAB_148b01112;
        goto LAB_148b0104f;
      }
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_158,L"MaterialExpression",L"Float4",L"Float 4");
      pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
      if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
      local_128.TextData.Reference = local_158.TextData.Reference;
    }
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
  }
LAB_148b01112:
  uVar4 = (uint)param_1 & 0x1e000000;
  if ((param_1 & MCT_UInt) != 0) {
    if (uVar4 == 0x2000000) {
LAB_148b01158:
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_e8,L"MaterialExpression",L"UInt",L"UInt");
      pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
      if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
    }
    else if (uVar4 == 0x4000000) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_f8,L"MaterialExpression",L"UInt2",L"UInt 2");
      pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
      if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
      local_e8.TextData.Reference = local_f8.TextData.Reference;
    }
    else if (uVar4 == 0x8000000) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_108,L"MaterialExpression",L"UInt3",L"UInt 3");
      pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
      if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
      local_e8.TextData.Reference = local_108.TextData.Reference;
    }
    else {
      if (uVar4 != 0x10000000) {
        if (uVar4 != 0x1e000000) goto LAB_148b0121b;
        goto LAB_148b01158;
      }
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_118,L"MaterialExpression",L"UInt4",L"UInt 4");
      pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
      if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
      local_e8.TextData.Reference = local_118.TextData.Reference;
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
  }
LAB_148b0121b:
  EVar7 = param_1 & MCT_Texture;
  if (EVar7 != 0) {
    if ((ulonglong)EVar7 < 0x81) {
      if (EVar7 == MCT_TextureCubeArray) {
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_a8,L"MaterialExpression",L"TextureCubeArray",
                            L"Texture Cube Array");
        pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
        if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
        local_d8.TextData.Reference = local_a8.TextData.Reference;
      }
      else if (EVar7 == MCT_Texture2D) {
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_b8,L"MaterialExpression",L"Texture2D",L"Texture 2D");
        pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
        if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
        local_d8.TextData.Reference = local_b8.TextData.Reference;
      }
      else if (EVar7 == MCT_TextureCube) {
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_c8,L"MaterialExpression",L"TextureCube",L"Texture Cube");
        pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
        if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
        local_d8.TextData.Reference = local_c8.TextData.Reference;
      }
      else {
        if (EVar7 != MCT_Texture2DArray) goto LAB_148b01b59;
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_d8,L"MaterialExpression",L"Texture2DArray",L"Texture 2D Array");
        pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
        if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
      }
    }
    else if (EVar7 == MCT_VolumeTexture) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"MaterialExpression",L"VolumeTexture",L"Volume Texture");
      pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
      if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
      local_d8.TextData.Reference = local_88.TextData.Reference;
    }
    else {
      if (EVar7 != MCT_Texture) goto LAB_148b01b59;
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_98,L"MaterialExpression",L"Texture",L"Texture");
      pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
      if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
      local_d8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
  }
LAB_148b01b59:
  if (((ulonglong)param_1 >> 9 & 1) != 0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"MaterialExpression",L"StaticBool",L"Bool");
    pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
    if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  if (((ulonglong)param_1 >> 0x18 & 1) != 0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText(&local_68,L"MaterialExpression",L"Bool",L"Bool");
    pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
    if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  if (((ulonglong)param_1 >> 0xb & 1) != 0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"MaterialExpression",L"MaterialAttributes",L"Material Attributes"
                       );
    pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
    if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  if (((ulonglong)param_1 >> 0x10 & 1) != 0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"MaterialExpression",L"ShadingModel",L"Shading Model");
    pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
    if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  if (((ulonglong)param_1 >> 0x11 & 1) != 0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"MaterialExpression",L"Substrate",L"Substrate Material");
    pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
    if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (((ulonglong)param_1 >> 0x1d & 1) != 0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"MaterialExpression",L"TextureCollection",L"Texture Collection");
    pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
    if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if (((ulonglong)param_1 >> 10 & 1) != 0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"MaterialExpression",L"Unknown",L"Unknown");
    pFVar1 = (FText *)(param_2->AllocatorInstance).Data;
    if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_2->ArrayMax)) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    FText::FText((FText *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pFVar6);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// IsAllowedExpressionType @ 148b02570

bool __cdecl IsAllowedExpressionType(UClass *param_1,bool param_2)

{
  int iVar1;
  UObject *pUVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  pUVar2 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UMaterialExpression_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      if (param_2) {
        pUVar4 = Z_Construct_UClass_UMaterialFunction_NoRegister();
      }
      else {
        pUVar4 = Z_Construct_UClass_UMaterial_NoRegister();
      }
      if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x000148b025fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)pUVar2 + 0x2b0))
                        (pUVar2,(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr);
      return (bool)uVar3;
    }
    pFVar5 = GetTypeName<UMaterialExpression>(&local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UObject>(&local_18,pUVar2);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar5 = GetTypeName<UMaterialExpression>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// LogWarningIfCooking @ 148b028a0

void __cdecl CookDeterminism::LogWarningIfCooking(TStringView<wchar_t> *param_1)

{
  return;
}

// MakeRandomColor @ 148b028c0

FLinearColor * __cdecl
CookDeterminism::MakeRandomColor
          (FLinearColor *__return_storage_ptr__,TStringView<wchar_t> *param_1,ESeed param_2)

{
  FLinearColor::MakeRandomColor(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// NewGuid @ 148b028e0

FGuid * __cdecl
CookDeterminism::NewGuid(FGuid *__return_storage_ptr__,TStringView<wchar_t> *param_1,ESeed param_2)

{
  FGuid::NewGuid(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// `dynamic_atexit_destructor_for_'UniformMembers'' @ 150409af0

void __cdecl
`UMaterialExpressionCustom::Serialize'::__l12::_dynamic_atexit_destructor_for__UniformMembers__
          (void)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = &::_TSS0;
  lVar2 = 0x48;
  do {
    piVar1 = piVar3 + -4;
    piVar3 = piVar3 + -4;
    lVar2 = lVar2 + -1;
    if (*(void **)piVar1 != (void *)0x0) {
      FMemory::Free(*(void **)piVar1);
    }
  } while (lVar2 != 0);
  return;
}

