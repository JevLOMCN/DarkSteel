// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e7070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FGLTFJsonLight * __thiscall
FGLTFLightConverter::Convert(FGLTFLightConverter *this,ULightComponent *param_1)

{
  FString *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGLTFJsonLight *pFVar7;
  FGLTFJsonLight *pFVar8;
  UClass *pUVar9;
  FName *this_00;
  ForAnyElementType *pFVar10;
  EGLTFJsonLightType EVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  FName local_res10;
  FName local_res18 [2];
  FGLTFJsonLight *local_58;
  FString local_50 [2];
  
  iVar6 = (**(code **)(param_1->_padding_ + 0x668))(param_1);
  EVar11 = Directional;
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      EVar11 = Point;
    }
    else {
      if (iVar6 != 2) {
        return (FGLTFJsonLight *)0x0;
      }
      EVar11 = Spot;
    }
  }
  lVar2 = *(longlong *)&this->field_0x58;
  pFVar7 = ::operator_new(0x58);
  pFVar8 = (FGLTFJsonLight *)0x0;
  if (pFVar7 != (FGLTFJsonLight *)0x0) {
    *(undefined4 *)&pFVar7->_padding_ = *(undefined4 *)(lVar2 + 0x348);
    pFVar7->_padding_ = (longlong)&___7FGLTFJsonLight__6B_;
    (pFVar7->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Name).Data.ArrayNum = 0;
    (pFVar7->Name).Data.ArrayMax = 0;
    pFVar7->Type = None;
    *(undefined8 *)&(pFVar7->Color).field_0x8 = FGLTFJsonColor3::White._8_8_;
    *(undefined4 *)&(pFVar7->Color).field_0x10 = FGLTFJsonColor3::White._16_4_;
    *(undefined ***)&pFVar7->Color = &___7FGLTFJsonColor3__6B_;
    (pFVar7->Spot)._padding_ = (longlong)&___7FGLTFJsonSpotLight__6B_;
    pFVar7->Intensity = 1.0;
    pFVar7->Range = 0.0;
    (pFVar7->Spot).InnerConeAngle = 0.0;
    (pFVar7->Spot).OuterConeAngle = 1.5707964;
    pFVar8 = pFVar7;
  }
  pFVar10 = (ForAnyElementType *)(lVar2 + 0x340);
  local_58 = pFVar8;
  if (((pFVar10->Data <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 < pFVar10->Data + (longlong)*(int *)(lVar2 + 0x34c) * 8)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FGLTFJsonLight *)(*pcVar4)();
    return pFVar8;
  }
  iVar6 = *(int *)(lVar2 + 0x348);
  if (iVar6 == *(int *)(lVar2 + 0x34c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar10,(int *)(lVar2 + 0x34c));
  }
  *(int *)(lVar2 + 0x348) = iVar6 + 1;
  *(FGLTFJsonLight **)(pFVar10->Data + (longlong)iVar6 * 8) = local_58;
  lVar2 = param_1->_padding_;
  if ((lVar2 == 0) || (param_1 != *(ULightComponent **)(lVar2 + 0x1b8))) {
    local_res18[0] = (FName)param_1->_padding_;
    this_00 = local_res18;
  }
  else {
    local_res10 = *(FName *)(lVar2 + 0x18);
    this_00 = &local_res10;
  }
  ::FName::ToString(this_00,local_50);
  pFVar1 = &pFVar8->Name;
  if (pFVar1 != local_50) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_50[0].Data.AllocatorInstance.Data;
    (pFVar8->Name).Data.ArrayNum = local_50[0].Data.ArrayNum;
    (pFVar8->Name).Data.ArrayMax = local_50[0].Data.ArrayMax;
    local_50[0].Data.ArrayNum = 0;
    local_50[0].Data.ArrayMax = 0;
    local_50[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
  }
  pFVar8->Type = EVar11;
  if (((param_1->IESTexture).field0_0x0.DebugPtr == (UTextureLightProfile *)0x0) ||
     (param_1->bUseIESBrightness == 0)) {
    pFVar8->Intensity = *(float *)((longlong)&param_1->_padding_ + 4);
  }
  fVar14 = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)&param_1->_padding_ + 2)];
  if (__real_3f800000 <=
      FLinearColor::sRGBToLinearTable[*(byte *)((longlong)&param_1->_padding_ + 2)]) {
    fVar14 = __real_3f800000;
  }
  fVar12 = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)&param_1->_padding_ + 1)];
  if (__real_3f800000 <=
      FLinearColor::sRGBToLinearTable[*(byte *)((longlong)&param_1->_padding_ + 1)]) {
    fVar12 = __real_3f800000;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar13 = FLinearColor::sRGBToLinearTable[(byte)param_1->_padding_];
  if (__real_3f800000 <= FLinearColor::sRGBToLinearTable[(byte)param_1->_padding_]) {
    fVar13 = __real_3f800000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  pFVar7 = (FGLTFJsonLight *)&(pFVar8->Color).field_0x8;
  if (pFVar8 == (FGLTFJsonLight *)0xffffffffffffffd8) {
    pFVar7 = (FGLTFJsonLight *)0x0;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  pFVar7->_padding_ = CONCAT44(fVar12,fVar14);
  *(float *)&pFVar7->_padding_ = fVar13;
  pUVar9 = Z_Construct_UClass_UPointLightComponent_NoRegister();
  iVar6 = (int)pUVar9->_padding_;
  if (((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
       == &pUVar9->_padding_)) && (param_1 != (ULightComponent *)0x0)) {
    pFVar8->Range =
         *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28) *
         *(float *)((longlong)&param_1[1]._padding_ + 4);
  }
  pUVar9 = Z_Construct_UClass_USpotLightComponent_NoRegister();
  iVar6 = (int)pUVar9->_padding_;
  if (((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
       == &pUVar9->_padding_)) && (param_1 != (ULightComponent *)0x0)) {
    (pFVar8->Spot).InnerConeAngle = *(float *)&param_1[1]._padding_ * __real_3c8efa35;
    (pFVar8->Spot).OuterConeAngle =
         *(float *)((longlong)&param_1[1]._padding_ + 4) * __real_3c8efa35;
    fVar13 = (float)nextafterf((longlong)iVar6,0);
    fVar12 = __real_3fc90fdb;
    fVar14 = (pFVar8->Spot).InnerConeAngle;
    if (fVar13 <= fVar14) {
      fVar14 = fVar13;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    (pFVar8->Spot).InnerConeAngle = fVar14;
    fVar13 = (float)nextafterf(fVar14,fVar12);
    fVar14 = (pFVar8->Spot).OuterConeAngle;
    if (fVar12 <= fVar14) {
      fVar14 = fVar12;
    }
    if (fVar14 <= fVar13) {
      fVar14 = fVar13;
    }
    (pFVar8->Spot).OuterConeAngle = fVar14;
  }
  return pFVar8;
}

