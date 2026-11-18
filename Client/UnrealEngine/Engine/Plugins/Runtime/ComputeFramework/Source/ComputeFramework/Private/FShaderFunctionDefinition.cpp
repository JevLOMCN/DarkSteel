// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 6

// StaticStruct @ 1494bd180

UScriptStruct * __cdecl FShaderFunctionDefinition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FShaderFunctionDefinition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UScriptStruct_FShaderFunctionDefinition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FShaderFunctionDefinition,(UObject *)pUVar1,
                         L"ShaderFunctionDefinition");
  }
  return Z_Registration_Info_UScriptStruct_FShaderFunctionDefinition.OuterSingleton;
}

// AddParam @ 1494c8000

FShaderFunctionDefinition * __thiscall
FShaderFunctionDefinition::AddParam
          (FShaderFunctionDefinition *this,FShaderValueTypeHandle param_1,
          EShaderParamModifier param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FShaderParamTypeDefinition *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  FShaderFunctionDefinition *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FShaderParamTypeDefinition local_48;
  
  local_48.TypeDeclaration.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.TypeDeclaration.Data.ArrayNum = 0;
  local_48.TypeDeclaration.Data.ArrayMax = 0;
  local_48.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Name.Data.ArrayNum = 0;
  local_48.Name.Data.ArrayMax = 0;
  local_48.ArrayElementCount = 0;
  local_48.BindingType = None;
  local_48.ResourceType = None;
  local_48.ValueType.ValueTypePtr = param_1.ValueTypePtr;
  local_48.Modifier = param_2;
  FShaderParamTypeDefinition::ResetTypeDeclaration(&local_48);
  pFVar3 = (FShaderParamTypeDefinition *)(this->ParamTypes).AllocatorInstance.Data;
  if ((pFVar3 <= &local_48) && (&local_48 < pFVar3 + (this->ParamTypes).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FShaderFunctionDefinition *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar7 = (this->ParamTypes).ArrayNum;
  piVar1 = &(this->ParamTypes).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->ParamTypes).AllocatorInstance,piVar1);
  }
  FVar5.Data = local_48.TypeDeclaration.Data.AllocatorInstance.Data;
  pFVar9 = (this->ParamTypes).AllocatorInstance.Data;
  (this->ParamTypes).ArrayNum = iVar7 + 1;
  pFVar9 = pFVar9 + (longlong)iVar7 * 0x30;
  *(undefined8 *)&pFVar9->field_0x0 = 0;
  lVar10 = (longlong)local_48.TypeDeclaration.Data.ArrayNum;
  *(int *)&pFVar9[8].field_0x0 = local_48.TypeDeclaration.Data.ArrayNum;
  if (local_48.TypeDeclaration.Data.ArrayNum == 0) {
    *(int *)(pFVar9 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.TypeDeclaration.Data.ArrayNum,0,(ForAnyElementType *)pFVar9,
               local_48.TypeDeclaration.Data.ArrayNum,(int *)(pFVar9 + 0xc));
    memcpy(*(void **)&pFVar9->field_0x0,FVar5.Data,lVar10 * 2);
  }
  FVar5.Data = local_48.Name.Data.AllocatorInstance.Data;
  pFVar2 = pFVar9 + 0x10;
  *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
  lVar10 = (longlong)local_48.Name.Data.ArrayNum;
  *(int *)&pFVar9[0x18].field_0x0 = local_48.Name.Data.ArrayNum;
  if (local_48.Name.Data.ArrayNum == 0) {
    *(int *)(pFVar9 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Name.Data.ArrayNum,0,(ForAnyElementType *)pFVar2,
               local_48.Name.Data.ArrayNum,(int *)(pFVar9 + 0x1c));
    memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,FVar5.Data,lVar10 * 2);
  }
  *(FShaderValueType **)&pFVar9[0x20].field_0x0 = local_48.ValueType.ValueTypePtr;
  *(ushort *)&pFVar9[0x28].field_0x0 = local_48.ArrayElementCount;
  pFVar9[0x2a] = (FScriptContainerElement)local_48.BindingType;
  pFVar9[0x2b] = (FScriptContainerElement)local_48.ResourceType;
  pFVar9[0x2c] = (FScriptContainerElement)local_48.Modifier;
  if (local_48.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Name.Data.AllocatorInstance.Data);
  }
  if (local_48.TypeDeclaration.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.TypeDeclaration.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddParam @ 1494c8200

FShaderFunctionDefinition * __thiscall
FShaderFunctionDefinition::AddParam
          (FShaderFunctionDefinition *this,EShaderFundamentalType param_1,int param_2,int param_3,
          EShaderParamModifier param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FShaderParamTypeDefinition *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  FShaderFunctionDefinition *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FShaderParamTypeDefinition local_48;
  
  local_48.TypeDeclaration.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.TypeDeclaration.Data.ArrayNum = 0;
  local_48.TypeDeclaration.Data.ArrayMax = 0;
  local_48.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Name.Data.ArrayNum = 0;
  local_48.Name.Data.ArrayMax = 0;
  local_48.ArrayElementCount = 0;
  local_48.BindingType = None;
  local_48.ResourceType = None;
  local_48.Modifier = param_4;
  if (param_2 < 1) {
    local_48.ValueType = FShaderValueType::Get(param_1);
  }
  else if (param_3 < 1) {
    local_48.ValueType = FShaderValueType::Get(param_1,param_2);
  }
  else {
    local_48.ValueType = FShaderValueType::Get(param_1,param_2,param_3);
  }
  FShaderParamTypeDefinition::ResetTypeDeclaration(&local_48);
  pFVar3 = (FShaderParamTypeDefinition *)(this->ParamTypes).AllocatorInstance.Data;
  if ((pFVar3 <= &local_48) && (&local_48 < pFVar3 + (this->ParamTypes).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FShaderFunctionDefinition *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar7 = (this->ParamTypes).ArrayNum;
  piVar1 = &(this->ParamTypes).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->ParamTypes).AllocatorInstance,piVar1);
  }
  FVar5.Data = local_48.TypeDeclaration.Data.AllocatorInstance.Data;
  pFVar9 = (this->ParamTypes).AllocatorInstance.Data;
  (this->ParamTypes).ArrayNum = iVar7 + 1;
  pFVar9 = pFVar9 + (longlong)iVar7 * 0x30;
  *(undefined8 *)&pFVar9->field_0x0 = 0;
  lVar10 = (longlong)local_48.TypeDeclaration.Data.ArrayNum;
  *(int *)&pFVar9[8].field_0x0 = local_48.TypeDeclaration.Data.ArrayNum;
  if (local_48.TypeDeclaration.Data.ArrayNum == 0) {
    *(int *)(pFVar9 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.TypeDeclaration.Data.ArrayNum,0,(ForAnyElementType *)pFVar9,
               local_48.TypeDeclaration.Data.ArrayNum,(int *)(pFVar9 + 0xc));
    memcpy(*(void **)&pFVar9->field_0x0,FVar5.Data,lVar10 * 2);
  }
  FVar5.Data = local_48.Name.Data.AllocatorInstance.Data;
  pFVar2 = pFVar9 + 0x10;
  *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
  lVar10 = (longlong)local_48.Name.Data.ArrayNum;
  *(int *)&pFVar9[0x18].field_0x0 = local_48.Name.Data.ArrayNum;
  if (local_48.Name.Data.ArrayNum == 0) {
    *(int *)(pFVar9 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Name.Data.ArrayNum,0,(ForAnyElementType *)pFVar2,
               local_48.Name.Data.ArrayNum,(int *)(pFVar9 + 0x1c));
    memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,FVar5.Data,lVar10 * 2);
  }
  *(FShaderValueType **)&pFVar9[0x20].field_0x0 = local_48.ValueType.ValueTypePtr;
  *(ushort *)&pFVar9[0x28].field_0x0 = local_48.ArrayElementCount;
  pFVar9[0x2a] = (FScriptContainerElement)local_48.BindingType;
  pFVar9[0x2b] = (FScriptContainerElement)local_48.ResourceType;
  pFVar9[0x2c] = (FScriptContainerElement)local_48.Modifier;
  if (local_48.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Name.Data.AllocatorInstance.Data);
  }
  if (local_48.TypeDeclaration.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.TypeDeclaration.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddReturnType @ 1494c9380

FShaderFunctionDefinition * __thiscall
FShaderFunctionDefinition::AddReturnType
          (FShaderFunctionDefinition *this,FShaderValueTypeHandle param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  FShaderFunctionDefinition *pFVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  
  if ((this->bHasReturnType != false) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<297563889841734434>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ShaderParamTypeDefinition.cpp"
                          ,0x322,"!bHasReturnType"), bVar11)) {
    pcVar3 = (code *)swi(3);
    pFVar12 = (FShaderFunctionDefinition *)(*pcVar3)();
    return pFVar12;
  }
  this->bHasReturnType = true;
  AddParam(this,param_1,None);
  iVar15 = (this->ParamTypes).ArrayNum;
  iVar13 = iVar15 + -1;
  lVar14 = (longlong)iVar13;
  if (0 < iVar13) {
    iVar15 = iVar15 + -2;
    lVar16 = lVar14 * 0x30;
    do {
      if ((iVar15 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0xce6,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FShaderFunctionDefinition *)(*pcVar3)();
        return pFVar12;
      }
      iVar1 = (this->ParamTypes).ArrayNum;
      if (((iVar1 <= iVar13) || (iVar1 <= iVar15)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0xce7,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FShaderFunctionDefinition *)(*pcVar3)();
        return pFVar12;
      }
      if (iVar13 != iVar15) {
        pFVar2 = (this->ParamTypes).AllocatorInstance.Data;
        uVar4 = *(undefined8 *)(pFVar2 + lVar16 + -0x30 + 8);
        uVar5 = *(undefined8 *)(pFVar2 + lVar16);
        uVar6 = *(undefined8 *)(pFVar2 + lVar16 + 8);
        uVar7 = *(undefined8 *)(pFVar2 + lVar16 + 0x10);
        uVar8 = *(undefined8 *)(pFVar2 + lVar16 + 0x10 + 8);
        uVar9 = *(undefined8 *)(pFVar2 + lVar16 + 0x20);
        uVar10 = *(undefined8 *)(pFVar2 + lVar16 + 0x20 + 8);
        *(undefined8 *)(pFVar2 + lVar16) = *(undefined8 *)(pFVar2 + lVar16 + -0x30);
        *(undefined8 *)(pFVar2 + lVar16 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar2 + lVar16 + -0x20 + 8);
        *(undefined8 *)(pFVar2 + lVar16 + 0x10) = *(undefined8 *)(pFVar2 + lVar16 + -0x20);
        *(undefined8 *)(pFVar2 + lVar16 + 0x10 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar2 + lVar16 + -0x10 + 8);
        *(undefined8 *)(pFVar2 + lVar16 + 0x20) = *(undefined8 *)(pFVar2 + lVar16 + -0x10);
        *(undefined8 *)(pFVar2 + lVar16 + 0x20 + 8) = uVar4;
        *(undefined8 *)(pFVar2 + lVar16 + -0x30) = uVar5;
        *(undefined8 *)(pFVar2 + lVar16 + -0x30 + 8) = uVar6;
        *(undefined8 *)(pFVar2 + lVar16 + -0x20) = uVar7;
        *(undefined8 *)(pFVar2 + lVar16 + -0x20 + 8) = uVar8;
        *(undefined8 *)(pFVar2 + lVar16 + -0x10) = uVar9;
        *(undefined8 *)(pFVar2 + lVar16 + -0x10 + 8) = uVar10;
      }
      iVar13 = iVar13 + -1;
      iVar15 = iVar15 + -1;
      lVar14 = lVar14 + -1;
      lVar16 = lVar16 + -0x30;
    } while (0 < lVar14);
  }
  return this;
}

// AddReturnType @ 1494c94e0

FShaderFunctionDefinition * __thiscall
FShaderFunctionDefinition::AddReturnType
          (FShaderFunctionDefinition *this,EShaderFundamentalType param_1,int param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  FShaderFunctionDefinition *pFVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  
  if ((this->bHasReturnType != false) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<297563889841734451>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ShaderParamTypeDefinition.cpp"
                          ,0x333,"!bHasReturnType"), bVar11)) {
    pcVar3 = (code *)swi(3);
    pFVar12 = (FShaderFunctionDefinition *)(*pcVar3)();
    return pFVar12;
  }
  this->bHasReturnType = true;
  AddParam(this,param_1,param_2,param_3,None);
  iVar13 = (this->ParamTypes).ArrayNum;
  iVar15 = iVar13 + -1;
  lVar14 = (longlong)iVar15;
  if (0 < iVar15) {
    iVar13 = iVar13 + -2;
    lVar16 = lVar14 * 0x30;
    do {
      if ((iVar13 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0xce6,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FShaderFunctionDefinition *)(*pcVar3)();
        return pFVar12;
      }
      iVar1 = (this->ParamTypes).ArrayNum;
      if (((iVar1 <= iVar15) || (iVar1 <= iVar13)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0xce7,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FShaderFunctionDefinition *)(*pcVar3)();
        return pFVar12;
      }
      if (iVar15 != iVar13) {
        pFVar2 = (this->ParamTypes).AllocatorInstance.Data;
        uVar4 = *(undefined8 *)(pFVar2 + lVar16 + -0x30 + 8);
        uVar5 = *(undefined8 *)(pFVar2 + lVar16);
        uVar6 = *(undefined8 *)(pFVar2 + lVar16 + 8);
        uVar7 = *(undefined8 *)(pFVar2 + lVar16 + 0x10);
        uVar8 = *(undefined8 *)(pFVar2 + lVar16 + 0x10 + 8);
        uVar9 = *(undefined8 *)(pFVar2 + lVar16 + 0x20);
        uVar10 = *(undefined8 *)(pFVar2 + lVar16 + 0x20 + 8);
        *(undefined8 *)(pFVar2 + lVar16) = *(undefined8 *)(pFVar2 + lVar16 + -0x30);
        *(undefined8 *)(pFVar2 + lVar16 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar2 + lVar16 + -0x20 + 8);
        *(undefined8 *)(pFVar2 + lVar16 + 0x10) = *(undefined8 *)(pFVar2 + lVar16 + -0x20);
        *(undefined8 *)(pFVar2 + lVar16 + 0x10 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar2 + lVar16 + -0x10 + 8);
        *(undefined8 *)(pFVar2 + lVar16 + 0x20) = *(undefined8 *)(pFVar2 + lVar16 + -0x10);
        *(undefined8 *)(pFVar2 + lVar16 + 0x20 + 8) = uVar4;
        *(undefined8 *)(pFVar2 + lVar16 + -0x30) = uVar5;
        *(undefined8 *)(pFVar2 + lVar16 + -0x30 + 8) = uVar6;
        *(undefined8 *)(pFVar2 + lVar16 + -0x20) = uVar7;
        *(undefined8 *)(pFVar2 + lVar16 + -0x20 + 8) = uVar8;
        *(undefined8 *)(pFVar2 + lVar16 + -0x10) = uVar9;
        *(undefined8 *)(pFVar2 + lVar16 + -0x10 + 8) = uVar10;
      }
      iVar15 = iVar15 + -1;
      iVar13 = iVar13 + -1;
      lVar14 = lVar14 + -1;
      lVar16 = lVar16 + -0x30;
    } while (0 < lVar14);
  }
  return this;
}

// SetName @ 1494d7530

FShaderFunctionDefinition * __thiscall
FShaderFunctionDefinition::SetName(FShaderFunctionDefinition *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange(&this->Name,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

