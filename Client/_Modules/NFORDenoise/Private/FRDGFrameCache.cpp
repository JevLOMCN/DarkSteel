// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NFORDenoise
// Functions: 2

// AppendToNFORBuffer @ 14e9df110

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRDGFrameCache::AppendToNFORBuffer
          (FRDGFrameCache *this,
          TArray<NFORDenoise::FFeatureDesc,TSizedDefaultAllocator<32>_> *param_1,
          TArray<NFORDenoise::FFeatureDesc,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FRDGTexture *pFVar2;
  FRDGTexture *pFVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FRDGTexture *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  FRDGTexture *pFStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  uint uStack_e4;
  FRDGTexture *local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  FRDGTexture *pFStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  uint uStack_ac;
  FRDGTexture *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  FRDGTexture *pFStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint uStack_74;
  FRDGTexture *local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_24;
  
  local_118 = this->Radiance;
  uStack_104 = local_24;
  pFStack_100 = this->RadianceVariance;
  pFVar1 = (param_1->AllocatorInstance).Data;
  uStack_ec = local_24;
  uStack_110 = 0;
  uStack_10c = 3;
  local_108 = 4;
  local_f8 = 0;
  uStack_f4 = 1;
  uStack_f0 = 4;
  local_e8 = 1;
  uStack_e4 = uStack_e4 & 0xffffff00;
  if ((pFVar1 <= (FScriptContainerElement *)&local_118) &&
     ((FScriptContainerElement *)&local_118 < pFVar1 + (longlong)param_1->ArrayMax * 0x38)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  uStack_d8 = 0;
  param_1->ArrayNum = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x38;
  pFVar1 = (param_1->AllocatorInstance).Data;
  uStack_d4 = 3;
  local_d0 = 4;
  local_c0 = 1;
  *(FRDGTexture **)(pFVar1 + lVar8) = local_118;
  *(ulonglong *)(pFVar1 + lVar8 + 8) = CONCAT44(uStack_10c,uStack_110);
  uStack_bc = 1;
  uStack_b8 = 4;
  local_b0 = 1;
  *(ulonglong *)(pFVar1 + lVar8 + 0x10) = CONCAT44(uStack_104,local_108);
  *(FRDGTexture **)(pFVar1 + lVar8 + 0x10 + 8) = pFStack_100;
  uStack_ac = uStack_ac & 0xffffff00;
  *(ulonglong *)(pFVar1 + lVar8 + 0x20) = CONCAT44(uStack_f4,local_f8);
  *(ulonglong *)(pFVar1 + lVar8 + 0x20 + 8) = CONCAT44(uStack_ec,uStack_f0);
  *(ulonglong *)(pFVar1 + lVar8 + 0x30) = CONCAT44(uStack_e4,local_e8);
  local_e0 = this->Albedo;
  pFVar1 = (param_2->AllocatorInstance).Data;
  pFVar2 = this->RadianceVariance;
  pFVar3 = this->Normal;
  uStack_cc = local_24;
  uStack_b4 = local_24;
  pFStack_c8 = pFVar2;
  if ((pFVar1 <= (FScriptContainerElement *)&local_e0) &&
     ((FScriptContainerElement *)&local_e0 < pFVar1 + (longlong)param_2->ArrayMax * 0x38)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x38;
  pFVar1 = (param_2->AllocatorInstance).Data;
  uStack_a0 = 0;
  uStack_9c = 3;
  local_98 = 4;
  *(FRDGTexture **)(pFVar1 + lVar8) = local_e0;
  *(ulonglong *)(pFVar1 + lVar8 + 8) = CONCAT44(uStack_d4,uStack_d8);
  local_88 = 2;
  uStack_84 = 1;
  *(ulonglong *)(pFVar1 + lVar8 + 0x10) = CONCAT44(uStack_cc,local_d0);
  *(FRDGTexture **)(pFVar1 + lVar8 + 0x10 + 8) = pFStack_c8;
  uStack_80 = 4;
  local_78 = 0;
  uStack_74 = uStack_74 & 0xffffff00;
  *(ulonglong *)(pFVar1 + lVar8 + 0x20) = CONCAT44(uStack_bc,local_c0);
  *(ulonglong *)(pFVar1 + lVar8 + 0x20 + 8) = CONCAT44(uStack_b4,uStack_b8);
  *(ulonglong *)(pFVar1 + lVar8 + 0x30) = CONCAT44(uStack_ac,local_b0);
  pFVar1 = (param_2->AllocatorInstance).Data;
  uStack_94 = local_24;
  uStack_7c = local_24;
  local_a8 = pFVar3;
  pFStack_90 = pFVar2;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 < pFVar1 + (longlong)param_2->ArrayMax * 0x38)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x38;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(FRDGTexture **)(pFVar1 + lVar8) = local_a8;
  *(ulonglong *)(pFVar1 + lVar8 + 8) = CONCAT44(uStack_9c,uStack_a0);
  *(ulonglong *)(pFVar1 + lVar8 + 0x10) = CONCAT44(uStack_94,local_98);
  *(FRDGTexture **)(pFVar1 + lVar8 + 0x10 + 8) = pFStack_90;
  *(ulonglong *)(pFVar1 + lVar8 + 0x20) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(pFVar1 + lVar8 + 0x20 + 8) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(pFVar1 + lVar8 + 0x30) = CONCAT44(uStack_74,local_78);
  pTVar5 = CVarNFORFeatureDepth.Ref;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pTVar5->ShadowedValue[1] != false) {
    local_70 = this->Depth;
    pFVar1 = (param_2->AllocatorInstance).Data;
    uStack_5c = local_24;
    uStack_44 = local_24;
    uStack_68 = 0;
    uStack_64 = 1;
    local_60 = 1;
    uStack_58 = 0;
    local_50 = 0;
    uStack_4c = 4;
    uStack_48 = 4;
    local_40 = 1;
    uStack_3c = CONCAT31(uStack_3c._1_3_,1);
    if ((pFVar1 <= (FScriptContainerElement *)&local_70) &&
       ((FScriptContainerElement *)&local_70 < pFVar1 + (longlong)param_2->ArrayMax * 0x38)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    lVar8 = (longlong)iVar7 * 0x38;
    pFVar1 = (param_2->AllocatorInstance).Data;
    *(FRDGTexture **)(pFVar1 + lVar8) = local_70;
    *(ulonglong *)(pFVar1 + lVar8 + 8) = CONCAT44(uStack_64,uStack_68);
    *(ulonglong *)(pFVar1 + lVar8 + 0x10) = CONCAT44(uStack_5c,local_60);
    *(undefined8 *)(pFVar1 + lVar8 + 0x10 + 8) = uStack_58;
    *(ulonglong *)(pFVar1 + lVar8 + 0x20) = CONCAT44(uStack_4c,local_50);
    *(ulonglong *)(pFVar1 + lVar8 + 0x20 + 8) = CONCAT44(uStack_44,uStack_48);
    *(ulonglong *)(pFVar1 + lVar8 + 0x30) = CONCAT44(uStack_3c,local_40);
  }
  return;
}

// ToExternalResource @ 14e9fea40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FExternalFrameCache * __thiscall
FRDGFrameCache::ToExternalResource
          (FRDGFrameCache *this,FExternalFrameCache *__return_storage_ptr__,FRDGBuilder *param_1,
          FSceneView *param_2)

{
  IPooledRenderTarget *pIVar1;
  IPooledRenderTarget *pIVar2;
  TRefCountPtr<IPooledRenderTarget> *pTVar3;
  
  (__return_storage_ptr__->Radiance).Reference = (IPooledRenderTarget *)0x0;
  (__return_storage_ptr__->RadianceVariance).Reference = (IPooledRenderTarget *)0x0;
  (__return_storage_ptr__->Albedo).Reference = (IPooledRenderTarget *)0x0;
  (__return_storage_ptr__->Normal).Reference = (IPooledRenderTarget *)0x0;
  (__return_storage_ptr__->Depth).Reference = (IPooledRenderTarget *)0x0;
  pTVar3 = FRDGBuilder::ConvertToExternalTexture(param_1,this->Radiance);
  pIVar1 = (__return_storage_ptr__->Radiance).Reference;
  pIVar2 = pTVar3->Reference;
  if (pIVar1 != pIVar2) {
    (__return_storage_ptr__->Radiance).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
    }
  }
  pTVar3 = FRDGBuilder::ConvertToExternalTexture(param_1,this->RadianceVariance);
  pIVar1 = (__return_storage_ptr__->RadianceVariance).Reference;
  pIVar2 = pTVar3->Reference;
  if (pIVar1 != pIVar2) {
    (__return_storage_ptr__->RadianceVariance).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
    }
  }
  pTVar3 = FRDGBuilder::ConvertToExternalTexture(param_1,this->Albedo);
  pIVar1 = (__return_storage_ptr__->Albedo).Reference;
  pIVar2 = pTVar3->Reference;
  if (pIVar1 != pIVar2) {
    (__return_storage_ptr__->Albedo).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
    }
  }
  pTVar3 = FRDGBuilder::ConvertToExternalTexture(param_1,this->Normal);
  pIVar1 = (__return_storage_ptr__->Normal).Reference;
  pIVar2 = pTVar3->Reference;
  if (pIVar1 != pIVar2) {
    (__return_storage_ptr__->Normal).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
    }
  }
  pTVar3 = FRDGBuilder::ConvertToExternalTexture(param_1,this->Depth);
  pIVar1 = (__return_storage_ptr__->Depth).Reference;
  pIVar2 = pTVar3->Reference;
  if (pIVar1 != pIVar2) {
    (__return_storage_ptr__->Depth).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
    }
  }
  return __return_storage_ptr__;
}

