// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e74a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FGLTFJsonLightIESInstance * __thiscall
FGLTFLightIESInstanceConverter::Convert
          (FGLTFLightIESInstanceConverter *this,ULightComponent *param_1)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> *this_00;
  FGLTFJsonLightIESInstance *pFVar7;
  FGLTFJsonLightIESInstance *pFVar8;
  uint uVar9;
  undefined1 *puVar10;
  FGLTFJsonLightIES *pFVar11;
  ForAnyElementType *pFVar12;
  undefined1 local_res10 [8];
  ULightComponent *local_res18;
  TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> *local_res20;
  FGLTFJsonLightIESInstance *local_68;
  FGLTFJsonLightIES *local_60;
  ULightComponent *local_58;
  ULightComponent **local_50;
  FGLTFJsonLightIES **local_48;
  
  if ((param_1->IESTexture).field0_0x0.DebugPtr != (UTextureLightProfile *)0x0) {
    pTVar2 = *(TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> **)
              (*(longlong *)&this->field_0x58 + 0x930);
    local_res18 = param_1;
    (**(code **)(pTVar2->_padding_ + 8))(pTVar2,&local_res18);
    pFVar8 = (FGLTFJsonLightIESInstance *)0x0;
    local_58 = local_res18;
    uVar9 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4))
            * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar9 >> 0x10 ^ uVar9;
    if (*(int *)&(pTVar2->CachedOutputs).field_0x8 != *(int *)&(pTVar2->CachedOutputs).field_0x34) {
      puVar10 = *(undefined1 **)&(pTVar2->CachedOutputs).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(pTVar2->CachedOutputs).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(pTVar2->CachedOutputs).field_0x48 - 1U & uVar9) * 4);
      if (iVar6 != -1) {
        do {
          lVar1 = *(longlong *)&pTVar2->CachedOutputs + (longlong)iVar6 * 0x18;
          if (*(ULightComponent **)(*(longlong *)&pTVar2->CachedOutputs + (longlong)iVar6 * 0x18) ==
              local_res18) {
            pFVar7 = (FGLTFJsonLightIESInstance *)(lVar1 + 8);
            if (lVar1 == 0) {
              pFVar7 = pFVar8;
            }
            if (pFVar7 != (FGLTFJsonLightIESInstance *)0x0) {
              pFVar11 = (FGLTFJsonLightIES *)pFVar7->_padding_;
              goto LAB_14e5e75d0;
            }
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x10);
        } while (iVar6 != -1);
      }
    }
    local_res20 = pTVar2;
    this_00 = UE::Core::Private::
              DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*>,TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*>_*>
                        (&local_res20);
    local_60 = (FGLTFJsonLightIES *)
               TGLTFConverter<FGLTFJsonLightIES*___ptr64,ULightComponent_const*___ptr64>::
               _vcall__16__flat______
                         ((TGLTFConverter<FGLTFJsonLightIES*___ptr64,ULightComponent_const*___ptr64>
                           *)this_00);
    local_50 = &local_58;
    local_48 = &local_60;
    TSet<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<TTuple<ULightComponent_const_*>_&&,FGLTFJsonLightIES_*_const_&>_>
              ((TSet<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*,0>,FDefaultSetAllocator>
                *)&pTVar2->CachedOutputs,(uint)local_res10,
               (TPairInitializer<TTuple<ULightComponent_const_*>_&&,FGLTFJsonLightIES_*_const_&> *)
               (ulonglong)uVar9,(bool *)&local_50);
    pFVar11 = local_60;
LAB_14e5e75d0:
    if (pFVar11 != (FGLTFJsonLightIES *)0x0) {
      lVar1 = *(longlong *)&this->field_0x58;
      pFVar7 = ::operator_new(0x20);
      if (pFVar7 != (FGLTFJsonLightIESInstance *)0x0) {
        *(undefined4 *)&pFVar7->_padding_ = *(undefined4 *)(lVar1 + 0x390);
        pFVar7->_padding_ = (longlong)&___7FGLTFJsonLightIESInstance__6B_;
        pFVar7->Multiplier = 1.0;
        pFVar7->LightIES = (FGLTFJsonLightIES *)0x0;
        pFVar8 = pFVar7;
      }
      pFVar12 = (ForAnyElementType *)(lVar1 + 0x388);
      local_68 = pFVar8;
      if (((pFVar12->Data <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar12->Data + (longlong)*(int *)(lVar1 + 0x394) * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FGLTFJsonLightIESInstance *)(*pcVar4)();
        return pFVar8;
      }
      iVar6 = *(int *)(lVar1 + 0x390);
      if (iVar6 == *(int *)(lVar1 + 0x394)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar12,(int *)(lVar1 + 0x394));
      }
      pFVar3 = pFVar12->Data;
      *(int *)(lVar1 + 0x390) = iVar6 + 1;
      *(FGLTFJsonLightIESInstance **)(pFVar3 + (longlong)iVar6 * 8) = local_68;
      if (param_1->bUseIESBrightness != 0) {
        pFVar8->Multiplier = param_1->IESBrightnessScale;
      }
      pFVar8->LightIES = pFVar11;
      return pFVar8;
    }
  }
  return (FGLTFJsonLightIESInstance *)0x0;
}

