// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 11

// Emplace<unsigned_int_const_&,TRefCountPtr<IPooledRenderTarget>_const_&> @ 14ea73e80

TRefCountPtr<IPooledRenderTarget> * __thiscall
TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
::Emplace<unsigned_int_const_&,TRefCountPtr<IPooledRenderTarget>_const_&>
          (TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
           *this,uint *param_1,TRefCountPtr<IPooledRenderTarget> *param_2)

{
  int iVar1;
  uint uVar2;
  IPooledRenderTarget *pIVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TRefCountPtr<IPooledRenderTarget> *pTVar7;
  int iVar8;
  TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_> *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(uint *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x10) < *param_1) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TRefCountPtr<IPooledRenderTarget> *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_14ea73f1e;
  }
  else {
LAB_14ea73f1e:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TRefCountPtr<IPooledRenderTarget> *)(*pcVar4)();
        return pTVar7;
      }
      pTVar9 = (TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_> *)
               ((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x10);
      if (*(uint *)pTVar9 <= *param_1) {
        DestructItems<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>,int>(pTVar9,1);
        goto LAB_14ea73fa4;
      }
    }
  }
  TArray<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x10);
LAB_14ea73fa4:
  *(uint *)pTVar9 = *param_1;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  pIVar3 = param_2->Reference;
  *(IPooledRenderTarget **)&pTVar9->field_0x8 = pIVar3;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x30))();
  }
  return (TRefCountPtr<IPooledRenderTarget> *)&pTVar9->field_0x8;
}

// Emplace<FCompositeCorePassProxy_const_*_const_&,UE::CompositeCore::FPassTexture_const_&> @ 14ea73ff0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPassTexture * __thiscall
TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
::Emplace<FCompositeCorePassProxy_const_*_const_&,UE::CompositeCore::FPassTexture_const_&>
          (TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
           *this,FCompositeCorePassProxy **param_1,FPassTexture *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FPassTexture *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(FCompositeCorePassProxy **)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x28) < *param_1) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPassTexture *)(*pcVar4)();
      return pFVar7;
    }
    if (-1 < iVar9) goto LAB_14ea74088;
  }
  else {
LAB_14ea74088:
    if (iVar9 < (this->Pairs).ArrayNum) {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FPassTexture *)(*pcVar4)();
        return pFVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar8 = pFVar3 + (longlong)iVar9 * 0x28;
      if (*(FCompositeCorePassProxy **)(pFVar3 + (longlong)iVar9 * 0x28) <= *param_1)
      goto LAB_14ea74105;
    }
  }
  TArray<TTuple<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x28;
LAB_14ea74105:
  *(FCompositeCorePassProxy **)pFVar8 = *param_1;
  (((FPassTexture *)(pFVar8 + 8))->Texture).Texture = (param_2->Texture).Texture;
  *(TIntPoint<int>_u_0 *)(pFVar8 + 0x10) =
       (param_2->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)(pFVar8 + 0x18) =
       (param_2->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  *(FResourceMetadata *)(pFVar8 + 0x20) = param_2->Metadata;
  return (FPassTexture *)(pFVar8 + 8);
}

// Emplace<int> @ 14ea74150

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPassTexture * __thiscall
TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>::
Emplace<int>(TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>
             *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FPassTexture *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x28) < *param_1) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPassTexture *)(*pcVar4)();
      return pFVar7;
    }
    if (-1 < iVar9) goto LAB_14ea741d8;
  }
  else {
LAB_14ea741d8:
    if (iVar9 < (this->Pairs).ArrayNum) {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FPassTexture *)(*pcVar4)();
        return pFVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar8 = pFVar3 + (longlong)iVar9 * 0x28;
      if (*(int *)(pFVar3 + (longlong)iVar9 * 0x28) <= *param_1) goto LAB_14ea74254;
    }
  }
  TArray<TTuple<int,UE::CompositeCore::FPassTexture>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar9,1);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x28;
LAB_14ea74254:
  *(int *)pFVar8 = *param_1;
  (((FPassTexture *)(pFVar8 + 8))->Texture).Texture = (FRDGTexture *)0x0;
  *(undefined8 *)(pFVar8 + 0x10) = 0;
  *(undefined8 *)(pFVar8 + 0x18) = 0;
  *(undefined8 *)(pFVar8 + 0x20) = 0;
  return (FPassTexture *)(pFVar8 + 8);
}

// Emplace<unsigned_int> @ 14ea742b0

FExternalRenderTarget * __thiscall
TSortedMap<unsigned_int,UE::CompositeCore::FExternalRenderTarget,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
::Emplace<unsigned_int>
          (TSortedMap<unsigned_int,UE::CompositeCore::FExternalRenderTarget,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
           *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FExternalRenderTarget *pFVar7;
  int iVar8;
  TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(uint *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < *param_1) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FExternalRenderTarget *)(*pcVar4)();
      return pFVar7;
    }
    if (-1 < iVar8) goto LAB_14ea7433d;
  }
  else {
LAB_14ea7433d:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FExternalRenderTarget *)(*pcVar4)();
        return pFVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *)
               (pFVar3 + (longlong)iVar8 * 0x18);
      if (*(uint *)(pFVar3 + (longlong)iVar8 * 0x18) <= *param_1) {
        DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int>(pTVar9,1);
        goto LAB_14ea743c6;
      }
    }
  }
  TArray<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14ea743c6:
  *(uint *)pTVar9 = *param_1;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  return (FExternalRenderTarget *)&pTVar9->field_0x8;
}

// Emplace<unsigned_int> @ 14ea74410

TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
* __thiscall
TSortedMap<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
::Emplace<unsigned_int>
          (TSortedMap<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
           *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
  *pTVar7;
  int iVar8;
  TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>
  *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(uint *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < *param_1) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
                *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_14ea7449d;
  }
  else {
LAB_14ea7449d:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>
                *)(pFVar3 + (longlong)iVar8 * 0x18);
      if (*(uint *)(pFVar3 + (longlong)iVar8 * 0x18) <= *param_1) {
        DestructItems<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,int>
                  (pTVar9,1);
        goto LAB_14ea74526;
      }
    }
  }
  TArray<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14ea74526:
  *(uint *)pTVar9 = *param_1;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  return (TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
          *)&pTVar9->field_0x8;
}

// Emplace<enum_ISceneViewExtension::EPostProcessingPass> @ 14ea74790

TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_>
::Emplace<enum_ISceneViewExtension::EPostProcessingPass>(void *this,EPostProcessingPass *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  TTuple<ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  uint uVar9;
  
  uVar2 = *(uint *)((longlong)this + 8);
  iVar7 = 0;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(EPostProcessingPass *)(*(longlong *)this + (longlong)iVar1 * 0x18) < *param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar7 < 0) || ((int)uVar2 < iVar7)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
    if (-1 < iVar7) goto LAB_14ea7481d;
  }
  else {
LAB_14ea7481d:
    if (iVar7 < *(int *)((longlong)this + 8)) {
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
      pTVar8 = (TTuple<ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>
                *)(*(longlong *)this + (longlong)iVar7 * 0x18);
      if (*(EPostProcessingPass *)(*(longlong *)this + (longlong)iVar7 * 0x18) <= *param_1) {
        DestructItems<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,int>
                  (pTVar8,1);
        goto LAB_14ea748a6;
      }
    }
  }
  TArray<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(this,iVar7,1);
  pTVar8 = (TTuple<ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>
            *)(*(longlong *)this + (longlong)iVar7 * 0x18);
LAB_14ea748a6:
  *(EPostProcessingPass *)pTVar8 = *param_1;
  *(undefined8 *)&pTVar8->field_0x8 = 0;
  *(undefined8 *)&pTVar8->field_0x10 = 0;
  return (TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *)&pTVar8->field_0x8;
}

// FindOrAddImpl<unsigned_int> @ 14ea75150

TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
* __thiscall
TSortedMap<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
::FindOrAddImpl<unsigned_int>
          (TSortedMap<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
           *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
  *pTVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar6 = 0;
  pFVar8 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar6;
      if (*(uint *)(pFVar8 + (longlong)iVar1 * 0x18) < *param_1) {
        iVar6 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if (((iVar6 < (int)uVar2) && (*(uint *)(pFVar8 + (longlong)iVar6 * 0x18) <= *param_1)) &&
     (iVar6 != -1)) {
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
                *)(*pcVar3)();
      return pTVar7;
    }
    pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x18 + 8;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      return (TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
              *)pFVar8;
    }
  }
  pTVar7 = Emplace<unsigned_int>(this,param_1);
  return pTVar7;
}

// Find @ 14ea7df50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPassTexture * __thiscall
TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>::Find
          (TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FPassTexture *pFVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x28) < param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) && (*(int *)(pFVar3 + (longlong)iVar7 * 0x28) <= param_1)) &&
     (iVar7 != -1)) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPassTexture *)(*pcVar4)();
      return pFVar8;
    }
    pFVar8 = (FPassTexture *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x28 + 8);
  }
  else {
    pFVar8 = (FPassTexture *)0x0;
  }
  return pFVar8;
}

// Find @ 14ea7e030

TRefCountPtr<IPooledRenderTarget> * __thiscall
TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
::Find(TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
       *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TRefCountPtr<IPooledRenderTarget> *pTVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar6 = 0;
  pFVar8 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar6;
      if (*(uint *)(pFVar8 + (longlong)iVar1 * 0x10) < param_1) {
        iVar6 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if (((iVar6 < (int)uVar2) && (*(uint *)(pFVar8 + (longlong)iVar6 * 0x10) <= param_1)) &&
     (iVar6 != -1)) {
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TRefCountPtr<IPooledRenderTarget> *)(*pcVar3)();
      return pTVar7;
    }
    pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8;
  }
  else {
    pFVar8 = (FScriptContainerElement *)0x0;
  }
  return (TRefCountPtr<IPooledRenderTarget> *)pFVar8;
}

// Find @ 14ea7e110

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPassTexture * __thiscall
TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
::Find(TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
       *this,FCompositeCorePassProxy *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FPassTexture *pFVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(FCompositeCorePassProxy **)(pFVar3 + (longlong)iVar1 * 0x28) < param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) &&
      (*(FCompositeCorePassProxy **)(pFVar3 + (longlong)iVar7 * 0x28) <= param_1)) && (iVar7 != -1))
  {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPassTexture *)(*pcVar4)();
      return pFVar8;
    }
    pFVar8 = (FPassTexture *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x28 + 8);
  }
  else {
    pFVar8 = (FPassTexture *)0x0;
  }
  return pFVar8;
}

// Find @ 14ea7e1f0

TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_>
::Find(void *this,EPostProcessingPass param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  
  uVar2 = *(uint *)((longlong)this + 8);
  iVar6 = 0;
  uVar8 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar8 >> 1) + iVar6;
      if (*(EPostProcessingPass *)(*(longlong *)this + (longlong)iVar1 * 0x18) < param_1) {
        iVar6 = iVar1 + (uVar8 & 1);
      }
      uVar4 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar4 != 0);
  }
  if (((iVar6 < (int)uVar2) &&
      (*(EPostProcessingPass *)((longlong)iVar6 * 0x18 + *(longlong *)this) <= param_1)) &&
     (iVar6 != -1)) {
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 8 + (longlong)iVar6 * 0x18);
  }
  else {
    pTVar7 = (TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *)0x0;
  }
  return pTVar7;
}

