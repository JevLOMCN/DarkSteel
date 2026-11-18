// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FRenderAssetLinkConstIterator @ 148805f50

FRenderAssetLinkConstIterator * __thiscall
FRenderAssetInstanceView::FRenderAssetLinkConstIterator::FRenderAssetLinkConstIterator
          (FRenderAssetLinkConstIterator *this,FRenderAssetInstanceView *param_1,
          UStreamableRenderAsset *param_2)

{
  FRenderAssetDesc *pFVar1;
  
  this->State = param_1;
  this->CurrElementIndex = -1;
  pFVar1 = TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
           ::Find((TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                   *)&param_1->RenderAssetMap,param_2);
  if (pFVar1 != (FRenderAssetDesc *)0x0) {
    this->CurrElementIndex = pFVar1->HeadLink;
  }
  return this;
}

// GetBounds @ 14883d280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
FRenderAssetInstanceView::FRenderAssetLinkConstIterator::GetBounds
          (FRenderAssetLinkConstIterator *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  FRenderAssetInstanceView *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FElement *pFVar8;
  TBoxSphereBounds<double,double> *pTVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->SphereRadius = 0.0;
  pFVar8 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::
           operator[](&this->State->Elements,this->CurrElementIndex);
  uVar11 = pFVar8->BoundsIndex;
  uVar7 = (int)(uVar11 + ((int)uVar11 >> 0x1f & 3U)) >> 2;
  if ((-1 < (int)uVar7) && (pFVar3 = this->State, (int)uVar7 < (pFVar3->Bounds4).ArrayNum)) {
    uVar12 = 0;
    if ((int)uVar7 < (pFVar3->Bounds4).ArrayNum) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
        return pTVar9;
      }
    }
    pFVar4 = (pFVar3->Bounds4).AllocatorInstance.Data;
    uVar11 = uVar11 & 0x80000003;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
    }
    lVar10 = (longlong)(int)uVar11;
    if (uVar11 < 4) {
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
           *(double *)(pFVar4 + lVar10 * 8 + (longlong)(int)uVar7 * 0x150);
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
           *(double *)(pFVar4 + lVar10 * 8 + (longlong)(int)uVar7 * 0x150 + 0x20);
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
           *(double *)(pFVar4 + lVar10 * 8 + (longlong)(int)uVar7 * 0x150 + 0x40);
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
           (double)*(float *)(pFVar4 + lVar10 * 4 + (longlong)(int)uVar7 * 0x150 + 0xc0);
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y =
           (double)*(float *)(pFVar4 + lVar10 * 4 + (longlong)(int)uVar7 * 0x150 + 0xd0);
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x319,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
        return pTVar9;
      }
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
           *(double *)(pFVar4 + lVar10 * 8 + (longlong)(int)uVar7 * 0x150);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x319,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
        return pTVar9;
      }
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
           *(double *)(pFVar4 + lVar10 * 8 + (longlong)(int)uVar7 * 0x150 + 0x20);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x319,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
        return pTVar9;
      }
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
           *(double *)(pFVar4 + lVar10 * 8 + (longlong)(int)uVar7 * 0x150 + 0x40);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x319,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
        return pTVar9;
      }
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
           (double)*(float *)(pFVar4 + lVar10 * 4 + (longlong)(int)uVar7 * 0x150 + 0xc0);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x319,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
        return pTVar9;
      }
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y =
           (double)*(float *)(pFVar4 + lVar10 * 4 + (longlong)(int)uVar7 * 0x150 + 0xd0);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x319,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
        return pTVar9;
      }
    }
    dVar13 = (double)*(float *)(pFVar4 + lVar10 * 4 + (longlong)(int)uVar7 * 0x150 + 0xe0);
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar13;
    dVar1 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y;
    dVar2 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
    auVar14._0_8_ = dVar1 * dVar1 + dVar2 * dVar2 + dVar13 * dVar13;
    auVar14._8_8_ = 0;
    auVar14 = sqrtpd(auVar14,auVar14);
    __return_storage_ptr__->SphereRadius = auVar14._0_8_;
  }
  return __return_storage_ptr__;
}

// OutputToLog @ 14884c1e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRenderAssetInstanceView::FRenderAssetLinkConstIterator::OutputToLog
          (FRenderAssetLinkConstIterator *this,float param_1,float param_2,wchar_t *param_3)

{
  float fVar1;
  bool bVar2;
  UPrimitiveComponent *pUVar3;
  FRenderAssetInstanceView *pFVar4;
  FElement *pFVar5;
  TBoxSphereBounds<double,double> local_78 [2];
  
  GetBounds(this,local_78);
  pFVar5 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::
           operator[](&this->State->Elements,this->CurrElementIndex);
  pUVar3 = pFVar5->Component;
  pFVar5 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::
           operator[](&this->State->Elements,this->CurrElementIndex);
  bVar2 = pFVar5->bForceLoad;
  pFVar5 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::
           operator[](&this->State->Elements,this->CurrElementIndex);
  pFVar4 = this->State;
  fVar1 = pFVar5->TexelFactor;
  pFVar5 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::
           operator[](&pFVar4->Elements,this->CurrElementIndex);
  FRenderAssetInstanceView::OutputToLog
            (local_78,pFVar5->BoundsIndex,&pFVar4->Bounds4,fVar1,bVar2,param_1,param_2,param_3,
             pUVar3);
  return;
}

