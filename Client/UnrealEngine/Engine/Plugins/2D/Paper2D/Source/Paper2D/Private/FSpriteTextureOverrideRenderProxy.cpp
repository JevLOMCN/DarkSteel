// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 6

// FSpriteTextureOverrideRenderProxy @ 14ace9c70

FSpriteTextureOverrideRenderProxy * __thiscall
FSpriteTextureOverrideRenderProxy::FSpriteTextureOverrideRenderProxy
          (FSpriteTextureOverrideRenderProxy *this,FMaterialRenderProxy *param_1,UTexture *param_2,
          TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  ForElementType<UTexture_*> *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FString *pFVar4;
  ForElementType<UTexture_*> FVar5;
  longlong lVar6;
  FString local_78;
  FString local_60;
  FString local_50;
  
  this->_padding_ = (longlong)&___7FDynamicPrimitiveResource__6B_;
  if (param_1 == (FMaterialRenderProxy *)0x0) {
    pFVar4 = ::FString::FString(&local_50,L"FSpriteTextureOverrideRenderProxy");
    pFVar4 = ::FString::FString(&local_60,pFVar4);
    FMaterialRenderProxy::FMaterialRenderProxy((FMaterialRenderProxy *)&this->_padding_,pFVar4);
  }
  else {
    local_78.Data.ArrayNum = (param_1->MaterialName).Data.ArrayNum;
    lVar6 = (longlong)local_78.Data.ArrayNum;
    _Src = (param_1->MaterialName).Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_78.Data.ArrayNum == 0) {
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
    }
    pFVar4 = ::FString::FString(&local_60,&local_78);
    FMaterialRenderProxy::FMaterialRenderProxy((FMaterialRenderProxy *)&this->_padding_,pFVar4);
    local_50.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  this->Parent = param_1;
  this->_padding_ = (longlong)&_vftable__for__FDynamicPrimitiveResource__;
  pFVar1 = &(param_3->AllocatorInstance).SecondaryData;
  this->BaseTexture = param_2;
  this->_padding_ = (longlong)&_vftable__for__FMaterialRenderProxy__;
  (this->AdditionalTextures).AllocatorInstance.SecondaryData = (ForElementType<UTexture_*>)0x0;
  FVar5 = *pFVar1;
  iVar3 = param_3->ArrayNum;
  (this->AdditionalTextures).ArrayNum = iVar3;
  if (FVar5 != (ForElementType<UTexture_*>)0x0) {
    param_3 = (TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar5;
  }
  piVar2 = &(this->AdditionalTextures).ArrayMax;
  if (iVar3 == 0) {
    *piVar2 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
              (8,8,iVar3,0,&(this->AdditionalTextures).AllocatorInstance,iVar3,piVar2);
    FVar5 = (this->AdditionalTextures).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<UTexture_*>)0x0) {
      FVar5 = (ForElementType<UTexture_*>)&this->AdditionalTextures;
    }
    memcpy((void *)FVar5,param_3,(longlong)iVar3 << 3);
  }
  this->ParentMaterialSerialNumber = -1;
  FVar5 = *pFVar1;
  if (FVar5 != (ForElementType<UTexture_*>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  return this;
}

// GetFallback @ 14acfa840

FMaterialRenderProxy * __thiscall
FSpriteTextureOverrideRenderProxy::GetFallback(FSpriteTextureOverrideRenderProxy *this,Type param_1)

{
  FMaterialRenderProxy *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014acfa84a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FMaterialRenderProxy *)(**(code **)(*(longlong *)this->_padding_ + 0x38))();
  return pFVar1;
}

// GetMaterialNoFallback @ 14acfb710

FMaterial * __thiscall
FSpriteTextureOverrideRenderProxy::GetMaterialNoFallback
          (FSpriteTextureOverrideRenderProxy *this,Type param_1)

{
  FMaterial *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014acfb71a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FMaterial *)(**(code **)(*(longlong *)this->_padding_ + 0x30))();
  return pFVar1;
}

// GetParameterValue @ 14acfc7d0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __thiscall
FSpriteTextureOverrideRenderProxy::GetParameterValue
          (FSpriteTextureOverrideRenderProxy *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FMaterialParameterValue *param_3,
          FMaterialRenderContext *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  UTexture **ppUVar7;
  uint uVar8;
  uint uVar9;
  FNameEntryId local_68;
  uint local_58;
  UTexture *local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined7 uStack_17;
  
  if (param_1 == Texture) {
    uVar2 = (param_2->Name).ComparisonIndex;
    uVar9 = (param_2->Name).Number;
    if ((TextureParameterName.ComparisonIndex.Value.Value == uVar2) &&
       (TextureParameterName.Number == uVar9)) {
      local_38 = (UTexture *)this->Parent;
LAB_14acfc839:
      (param_3->field0_0x0).Double[0] = (double)local_38;
      (param_3->field0_0x0).Double[1] = dStack_30;
      (param_3->field0_0x0).Double[2] = local_28;
      (param_3->field0_0x0).Double[3] = dStack_20;
      *(ulonglong *)&param_3->Type = CONCAT71(uStack_17,3);
      return true;
    }
    iVar3 = *(int *)&(this->AdditionalTextures).AllocatorInstance.SecondaryData;
    uVar8 = 0;
    if (0 < iVar3) {
      do {
        uVar1 = uVar8 + 1;
        local_68 = AdditionalTextureParameterRootName.ComparisonIndex.Value;
        if ((local_68.Value == uVar2) && (uVar1 == uVar9)) {
          uVar9 = 0;
          if ((int)uVar8 < *(int *)&(this->AdditionalTextures).AllocatorInstance.SecondaryData) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar5 = (*pcVar4)();
            return (bool)uVar5;
          }
          ppUVar7 = *(UTexture ***)((this->AdditionalTextures).AllocatorInstance.InlineData + 0x18);
          if (ppUVar7 == (UTexture **)0x0) {
            ppUVar7 = &this->BaseTexture;
          }
          local_38 = ppUVar7[(int)uVar8];
          goto LAB_14acfc839;
        }
        uVar8 = uVar1;
      } while ((int)uVar1 < iVar3);
    }
  }
  uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x48))
                    ((longlong *)this->_padding_,param_1,param_2,param_3,param_4);
  return (bool)uVar5;
}

// InitPrimitiveResource @ 14ad02af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSpriteTextureOverrideRenderProxy::InitPrimitiveResource
          (FSpriteTextureOverrideRenderProxy *this,FRHICommandListBase *param_1)

{
  return;
}

// ReleasePrimitiveResource @ 14ad08930

void __thiscall
FSpriteTextureOverrideRenderProxy::ReleasePrimitiveResource(FSpriteTextureOverrideRenderProxy *this)

{
  if (this != (FSpriteTextureOverrideRenderProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad08942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(&this->_padding_,1);
    return;
  }
  return;
}

