// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 8

// AddMaterialExpression<GLTF::FMaterialExpressionTextureCoordinate> @ 14e621a50

FMaterialExpressionTextureCoordinate * __thiscall
GLTF::FMaterialElement::AddMaterialExpression<GLTF::FMaterialExpressionTextureCoordinate>
          (FMaterialElement *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMaterialExpressionTextureCoordinate *pFVar6;
  TArray<GLTF::FMaterialExpression_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FMaterialExpressionTextureCoordinate *local_18 [2];
  
  local_18[0] = ::operator_new(0x18);
  if (local_18[0] == (FMaterialExpressionTextureCoordinate *)0x0) {
    return (FMaterialExpressionTextureCoordinate *)0x0;
  }
  *(undefined4 *)&local_18[0]->_padding_ = 5;
  local_18[0]->_padding_ = (longlong)&___7FMaterialExpressionTextureCoordinate_GLTF__6B_;
  pTVar7 = &this->Expressions;
  local_18[0]->CoordinateIndex = 0;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Expressions).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMaterialExpressionTextureCoordinate *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Expressions).ArrayNum;
  piVar1 = &(this->Expressions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  (this->Expressions).ArrayNum = iVar5 + 1;
  *(FMaterialExpressionTextureCoordinate **)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8)
       = local_18[0];
  return local_18[0];
}

// FMaterialElement @ 14e62a4d0

FMaterialElement * __thiscall
GLTF::FMaterialElement::FMaterialElement(FMaterialElement *this,FString *param_1)

{
  FMaterialExpressionInput *pFVar1;
  int *piVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FString local_28;
  
  this->_padding_ = (longlong)&___7FMaterialElement_GLTF__6B_;
  ::FString::FString(&this->Name,param_1);
  pFVar1 = &this->BaseColor;
  ::FString::FString(&local_28,L"BaseColor");
  iVar4 = local_28.Data.ArrayNum;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar2 = &(this->BaseColor).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseColor).Name.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  (this->BaseColor).Expression = (FMaterialExpression *)0x0;
  (this->BaseColor).OutputIndex = -1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->Metallic;
  ::FString::FString(&local_28,L"Metallic");
  iVar4 = local_28.Data.ArrayNum;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar2 = &(this->Metallic).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metallic).Name.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  (this->Metallic).Expression = (FMaterialExpression *)0x0;
  (this->Metallic).OutputIndex = -1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->Specular;
  ::FString::FString(&local_28,L"Specular");
  iVar4 = local_28.Data.ArrayNum;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar2 = &(this->Specular).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Specular).Name.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  (this->Specular).Expression = (FMaterialExpression *)0x0;
  (this->Specular).OutputIndex = -1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->Roughness;
  ::FString::FString(&local_28,L"Roughness");
  iVar4 = local_28.Data.ArrayNum;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar2 = &(this->Roughness).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Roughness).Name.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  (this->Roughness).Expression = (FMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = -1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->EmissiveColor;
  ::FString::FString(&local_28,L"EmissiveColor");
  iVar4 = local_28.Data.ArrayNum;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar2 = &(this->EmissiveColor).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmissiveColor).Name.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  (this->EmissiveColor).Expression = (FMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = -1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->Opacity;
  ::FString::FString(&local_28,L"Opacity");
  iVar4 = local_28.Data.ArrayNum;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar2 = &(this->Opacity).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Opacity).Name.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  (this->Opacity).Expression = (FMaterialExpression *)0x0;
  (this->Opacity).OutputIndex = -1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->Normal;
  ::FString::FString(&local_28,L"Normal");
  iVar4 = local_28.Data.ArrayNum;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar2 = &(this->Normal).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normal).Name.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  (this->Normal).Expression = (FMaterialExpression *)0x0;
  (this->Normal).OutputIndex = -1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->WorldDisplacement;
  ::FString::FString(&local_28,L"WorldDisplacement");
  iVar4 = local_28.Data.ArrayNum;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar2 = &(this->WorldDisplacement).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldDisplacement).Name.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  (this->WorldDisplacement).Expression = (FMaterialExpression *)0x0;
  (this->WorldDisplacement).OutputIndex = -1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->Refraction;
  ::FString::FString(&local_28,L"Refraction");
  iVar4 = local_28.Data.ArrayNum;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar2 = &(this->Refraction).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Refraction).Name.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  (this->Refraction).Expression = (FMaterialExpression *)0x0;
  (this->Refraction).OutputIndex = -1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->AmbientOcclusion;
  ::FString::FString(&local_28,L"AmbientOcclusion");
  iVar4 = local_28.Data.ArrayNum;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar2 = &(this->AmbientOcclusion).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AmbientOcclusion).Name.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  (this->AmbientOcclusion).Expression = (FMaterialExpression *)0x0;
  (this->AmbientOcclusion).OutputIndex = -1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->ClearCoat;
  ::FString::FString(&local_28,L"ClearCoat");
  iVar4 = local_28.Data.ArrayNum;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar2 = &(this->ClearCoat).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClearCoat).Name.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  (this->ClearCoat).Expression = (FMaterialExpression *)0x0;
  (this->ClearCoat).OutputIndex = -1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->ClearCoatRoughness;
  ::FString::FString(&local_28,L"ClearCoatRoughness");
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  piVar2 = &(this->ClearCoatRoughness).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClearCoatRoughness).Name.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,FVar3.Data,
           (longlong)local_28.Data.ArrayNum * 2);
  }
  (this->ClearCoatRoughness).Expression = (FMaterialExpression *)0x0;
  (this->ClearCoatRoughness).OutputIndex = -1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (this->Expressions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Expressions).ArrayNum = 0;
  (this->Expressions).ArrayMax = 0;
  this->ThinTranslucentMaterialOutput = (FMaterialExpression *)0x0;
  this->ClearCoatBottomNormalOutput = (FMaterialExpression *)0x0;
  this->bIsFinal = false;
  (this->GLTFMaterialHash).bIsValid = false;
  return this;
}

// ~FMaterialElement @ 14e62bca0

void __thiscall GLTF::FMaterialElement::~FMaterialElement(FMaterialElement *this)

{
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FMaterialElement_GLTF__6B_;
  pFVar4 = (this->Expressions).AllocatorInstance.Data;
  iVar1 = (this->Expressions).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Expressions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<GLTF::FMaterialExpression_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    puVar2 = *(undefined8 **)pFVar4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar3 = (this->Expressions).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ClearCoatRoughness).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ClearCoat).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AmbientOcclusion).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Refraction).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->WorldDisplacement).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Normal).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Opacity).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->EmissiveColor).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Roughness).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Specular).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Metallic).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BaseColor).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddMaterialExpression @ 14e62d200

FMaterialExpression * __thiscall
GLTF::FMaterialElement::AddMaterialExpression
          (FMaterialElement *this,EMaterialExpressionType param_1)

{
  FMaterialExpression *pFVar1;
  int *piVar2;
  TArray<GLTF::FMaterialExpression_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  bool bVar6;
  int iVar7;
  FMaterialExpression *pFVar8;
  FMaterialExpression *local_38;
  FString local_30;
  
  local_38 = (FMaterialExpression *)0x0;
  switch(param_1) {
  case ConstantColor:
    local_38 = ::operator_new(0x40);
    if (local_38 != (FMaterialExpression *)0x0) {
      local_38->Type = ConstantColor;
      local_38->_padding_ = (longlong)&___7FMaterialExpressionColor_GLTF__6B_;
      local_38[1]._padding_ = 0;
      *(undefined8 *)&local_38[1].Type = 0;
      local_38[2]._padding_ = 0;
      *(undefined8 *)&local_38[2].Type = 0;
      goto LAB_14e62d4f4;
    }
    break;
  case ConstantScalar:
    local_38 = ::operator_new(0x38);
    if (local_38 != (FMaterialExpression *)0x0) {
      local_38->Type = ConstantScalar;
      local_38->_padding_ = (longlong)&___7FMaterialExpressionScalar_GLTF__6B_;
      local_38[1]._padding_ = 0;
      *(undefined8 *)&local_38[1].Type = 0;
      local_38[2]._padding_ = 0;
      *(undefined8 *)&local_38[2].Type = 0;
      goto LAB_14e62d4f4;
    }
    break;
  case FunctionCall:
    local_38 = ::operator_new(0x30);
    if (local_38 != (FMaterialExpression *)0x0) {
      local_38->Type = FunctionCall;
      local_38->_padding_ = (longlong)&___7FMaterialExpressionFunctionCall_GLTF__6B_;
      local_38[1]._padding_ = 0;
      *(undefined8 *)&local_38[1].Type = 0;
      local_38[2]._padding_ = 0;
      *(undefined8 *)&local_38[2].Type = 0;
      goto LAB_14e62d4f4;
    }
    break;
  case Generic:
    local_38 = ::operator_new(0xd0);
    if (local_38 != (FMaterialExpression *)0x0) {
      local_38->Type = Generic;
      local_38->_padding_ = (longlong)&___7FMaterialExpressionGeneric_GLTF__6B_;
      local_38[1]._padding_ = 0;
      *(undefined8 *)&local_38[1].Type = 0;
      local_38[2]._padding_ = 0;
      *(undefined8 *)&local_38[2].Type = 0;
      local_38[3]._padding_ = 0;
      *(undefined8 *)&local_38[3].Type = 0;
      local_38[5]._padding_ = 0;
      local_38[5].Type = ConstantColor;
      *(undefined4 *)&local_38[5].field_0xc = 0x80;
      *(undefined4 *)&local_38[6]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&local_38[6]._padding_ + 4) = 0;
      local_38[7]._padding_ = 0;
      local_38[7].Type = ConstantColor;
      local_38[8]._padding_ = 0;
      *(undefined8 *)&local_38[8].Type = 0;
      local_38[10]._padding_ = 0;
      local_38[10].Type = ConstantColor;
      *(undefined4 *)&local_38[10].field_0xc = 0x80;
      *(undefined4 *)&local_38[0xb]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&local_38[0xb]._padding_ + 4) = 0;
      local_38[0xc]._padding_ = 0;
      local_38[0xc].Type = ConstantColor;
      goto LAB_14e62d4f4;
    }
    break;
  case Texture:
    pFVar8 = ::operator_new(0x58);
    if (pFVar8 == (FMaterialExpression *)0x0) {
      local_38 = (FMaterialExpression *)0x0;
    }
    else {
      pFVar8->Type = Texture;
      pFVar8[1]._padding_ = 0;
      *(undefined8 *)&pFVar8[1].Type = 0;
      pFVar8[2]._padding_ = 0;
      *(undefined8 *)&pFVar8[2].Type = 0;
      pFVar1 = pFVar8 + 3;
      pFVar8->_padding_ = (longlong)&___7FMaterialExpressionTexture_GLTF__6B_;
      ::FString::FString(&local_30,L"InputCoordinate");
      _Src.Data = local_30.Data.AllocatorInstance.Data;
      pFVar1->_padding_ = 0;
      pFVar8[3].Type = local_30.Data.ArrayNum;
      if (local_30.Data.ArrayNum == ConstantColor) {
        *(undefined4 *)&pFVar8[3].field_0xc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_30.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_30.Data.ArrayNum,
                   (int *)&pFVar8[3].field_0xc);
        memcpy((FScriptContainerElement *)pFVar1->_padding_,_Src.Data,
               (longlong)local_30.Data.ArrayNum * 2);
      }
      pFVar8[4]._padding_ = 0;
      pFVar8[4].Type = ~ConstantColor;
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      pFVar8[5]._padding_ = 0;
      local_38 = pFVar8;
    }
    goto LAB_14e62d4f4;
  case TextureCoordinate:
    local_38 = ::operator_new(0x18);
    if (local_38 != (FMaterialExpression *)0x0) {
      local_38->Type = TextureCoordinate;
      local_38->_padding_ = (longlong)&___7FMaterialExpressionTextureCoordinate_GLTF__6B_;
      *(undefined4 *)&local_38[1]._padding_ = 0;
      goto LAB_14e62d4f4;
    }
    break;
  default:
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_589650665588916005>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                       ,0xdb,"false");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMaterialExpression *)(*pcVar5)();
      return pFVar8;
    }
    goto LAB_14e62d4f4;
  }
  local_38 = (FMaterialExpression *)0x0;
LAB_14e62d4f4:
  if (local_38 != (FMaterialExpression *)0x0) {
    pTVar3 = &this->Expressions;
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)(this->Expressions).ArrayMax * 8)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMaterialExpression *)(*pcVar5)();
      return pFVar8;
    }
    iVar7 = (this->Expressions).ArrayNum;
    piVar2 = &(this->Expressions).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->Expressions).ArrayNum = iVar7 + 1;
    *(FMaterialExpression **)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38;
  }
  return local_38;
}

// GetExpression @ 14e63b1a0

FMaterialExpression * __thiscall
GLTF::FMaterialElement::GetExpression(FMaterialElement *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FMaterialExpression *pFVar3;
  
  if (param_1 < (this->Expressions).ArrayNum) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FMaterialExpression *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FMaterialExpression **)
            ((this->Expressions).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_589650665588916036>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                     ,0xbc,"Index < Expressions.Num()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMaterialExpression *)(*pcVar1)();
    return pFVar3;
  }
  return (FMaterialExpression *)0x0;
}

// GetExpressionsCount @ 14e63b250

int __thiscall GLTF::FMaterialElement::GetExpressionsCount(FMaterialElement *this)

{
  return (this->Expressions).ArrayNum;
}

// GetGLTFMaterialHash @ 14e63b6d0

FMD5Hash * __thiscall
GLTF::FMaterialElement::GetGLTFMaterialHash(FMaterialElement *this,FMD5Hash *__return_storage_ptr__)

{
  uchar uVar1;
  undefined8 uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  
  uVar1 = (this->GLTFMaterialHash).Bytes[0xf];
  uVar3 = (this->GLTFMaterialHash).Bytes[0];
  uVar4 = (this->GLTFMaterialHash).Bytes[1];
  uVar5 = (this->GLTFMaterialHash).Bytes[2];
  uVar6 = (this->GLTFMaterialHash).Bytes[3];
  uVar7 = (this->GLTFMaterialHash).Bytes[4];
  uVar8 = (this->GLTFMaterialHash).Bytes[5];
  uVar9 = (this->GLTFMaterialHash).Bytes[6];
  uVar2 = *(undefined8 *)((this->GLTFMaterialHash).Bytes + 7);
  __return_storage_ptr__->bIsValid = (this->GLTFMaterialHash).bIsValid;
  __return_storage_ptr__->Bytes[0] = uVar3;
  __return_storage_ptr__->Bytes[1] = uVar4;
  __return_storage_ptr__->Bytes[2] = uVar5;
  __return_storage_ptr__->Bytes[3] = uVar6;
  __return_storage_ptr__->Bytes[4] = uVar7;
  __return_storage_ptr__->Bytes[5] = uVar8;
  __return_storage_ptr__->Bytes[6] = uVar9;
  *(undefined8 *)(__return_storage_ptr__->Bytes + 7) = uVar2;
  __return_storage_ptr__->Bytes[0xf] = uVar1;
  return __return_storage_ptr__;
}

// SetGLTFMaterialHash @ 14e64a820

void __thiscall
GLTF::FMaterialElement::SetGLTFMaterialHash(FMaterialElement *this,FMD5Hash *param_1)

{
  uchar uVar1;
  undefined8 uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  
  uVar3 = param_1->Bytes[0];
  uVar4 = param_1->Bytes[1];
  uVar5 = param_1->Bytes[2];
  uVar6 = param_1->Bytes[3];
  uVar7 = param_1->Bytes[4];
  uVar8 = param_1->Bytes[5];
  uVar9 = param_1->Bytes[6];
  uVar2 = *(undefined8 *)(param_1->Bytes + 7);
  uVar1 = param_1->Bytes[0xf];
  (this->GLTFMaterialHash).bIsValid = param_1->bIsValid;
  (this->GLTFMaterialHash).Bytes[0] = uVar3;
  (this->GLTFMaterialHash).Bytes[1] = uVar4;
  (this->GLTFMaterialHash).Bytes[2] = uVar5;
  (this->GLTFMaterialHash).Bytes[3] = uVar6;
  (this->GLTFMaterialHash).Bytes[4] = uVar7;
  (this->GLTFMaterialHash).Bytes[5] = uVar8;
  (this->GLTFMaterialHash).Bytes[6] = uVar9;
  *(undefined8 *)((this->GLTFMaterialHash).Bytes + 7) = uVar2;
  (this->GLTFMaterialHash).Bytes[0xf] = uVar1;
  return;
}

