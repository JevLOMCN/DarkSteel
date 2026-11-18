// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 14

// CreateUpdater @ 1456bd180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ISceneExtensionUpdater * __thiscall
FSplineMeshSceneExtension::CreateUpdater(FSplineMeshSceneExtension *this)

{
  ISceneExtensionUpdater *pIVar1;
  
  pIVar1 = ::operator_new(0x20);
  if (pIVar1 != (ISceneExtensionUpdater *)0x0) {
    pIVar1[1] = (ISceneExtensionUpdater)this;
    *pIVar1 = (ISceneExtensionUpdater)&___7FSplineMeshSceneUpdater__6B_;
    pIVar1[2] = (ISceneExtensionUpdater)0x0;
    pIVar1[3] = (ISceneExtensionUpdater)0x0;
    return pIVar1;
  }
  return (ISceneExtensionUpdater *)0x0;
}

// CreateRenderer @ 1456bd1d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ISceneExtensionRenderer * __thiscall
FSplineMeshSceneExtension::CreateRenderer
          (FSplineMeshSceneExtension *this,FSceneRendererBase *param_1,FEngineShowFlags *param_2)

{
  ISceneExtensionRenderer *pIVar1;
  
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 != (ISceneExtensionRenderer *)0x0) {
    pIVar1->SceneRendererInternal = param_1;
    pIVar1->_padding_ = (longlong)&___7FSplineMeshSceneRenderer__6B_;
    pIVar1[1]._padding_ = (longlong)this;
    return pIVar1;
  }
  return (ISceneExtensionRenderer *)0x0;
}

// AssignCoordinates<FNaniteSplineMeshSceneProxy> @ 1456c78f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSplineMeshSceneExtension::AssignCoordinates<FNaniteSplineMeshSceneProxy>
          (FSplineMeshSceneExtension *this,FNaniteSplineMeshSceneProxy *param_1,
          FPrimitiveSlot *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = 0;
  if (param_2->NumSplines != 0) {
    do {
      uVar8 = param_2->FirstSplineIndex + uVar6;
      uVar5 = uVar8 >> 6 & 0x55555555;
      uVar3 = uVar8 >> 7 & 0x55555555;
      uVar3 = (uVar3 >> 1 ^ uVar3) & 0x33333333;
      uVar3 = (uVar3 >> 2 ^ uVar3) & 0xf0f0f0f;
      uVar7 = (uVar3 >> 4 ^ uVar3) & 0xff00ff;
      uVar3 = (uVar5 >> 1 ^ uVar5) & 0x33333333;
      uVar3 = (uVar3 >> 2 ^ uVar3) & 0xf0f0f0f;
      uVar3 = (uVar3 >> 4 ^ uVar3) & 0xff00ff;
      if ((uVar6 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("SplineIndex == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SplineMeshSceneProxy.h"
                             ,0x6e,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(ulonglong *)&param_1->field_0xcc4 =
           CONCAT44(((uVar7 >> 8 ^ uVar7) & 0xffff) * 0x40 + (uVar8 & 0x3f),
                    ((uVar3 >> 8 ^ uVar3) & 0xffff) << 6);
      lVar4 = (**(code **)(*(longlong *)&param_1->field_0xc20 + 8))(&param_1->field_0xc20);
      bVar2 = FSplineMeshSceneInstanceDataBuffers::Update
                        ((FSplineMeshSceneInstanceDataBuffers *)&param_1->field_0xcd8,
                         (FSplineMeshShaderParams *)&param_1->field_0xc28);
      if (bVar2) {
        (**(code **)(**(longlong **)(lVar4 + 0x220) + 0x510))
                  (*(longlong **)(lVar4 + 0x220),*(undefined8 *)(lVar4 + 0x228),8);
      }
      uVar6 = uVar6 + 1;
      param_1->field_0xdf0 = 1;
    } while (uVar6 < param_2->NumSplines);
  }
  return;
}

// AssignCoordinates<FSplineMeshSceneProxy> @ 1456c7a70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSplineMeshSceneExtension::AssignCoordinates<FSplineMeshSceneProxy>
          (FSplineMeshSceneExtension *this,FSplineMeshSceneProxy *param_1,FPrimitiveSlot *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = 0;
  if (param_2->NumSplines != 0) {
    do {
      uVar8 = param_2->FirstSplineIndex + uVar6;
      uVar5 = uVar8 >> 6 & 0x55555555;
      uVar3 = uVar8 >> 7 & 0x55555555;
      uVar3 = (uVar3 >> 1 ^ uVar3) & 0x33333333;
      uVar3 = (uVar3 >> 2 ^ uVar3) & 0xf0f0f0f;
      uVar7 = (uVar3 >> 4 ^ uVar3) & 0xff00ff;
      uVar3 = (uVar5 >> 1 ^ uVar5) & 0x33333333;
      uVar3 = (uVar3 >> 2 ^ uVar3) & 0xf0f0f0f;
      uVar3 = (uVar3 >> 4 ^ uVar3) & 0xff00ff;
      if ((uVar6 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("SplineIndex == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SplineMeshSceneProxy.h"
                             ,0x6e,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar4 = param_1->_padding_;
      *(ulonglong *)((longlong)&param_1->_padding_ + 4) =
           CONCAT44(((uVar7 >> 8 ^ uVar7) & 0xffff) * 0x40 + (uVar8 & 0x3f),
                    ((uVar3 >> 8 ^ uVar3) & 0xffff) << 6);
      lVar4 = (**(code **)(lVar4 + 8))(&param_1->_padding_);
      bVar2 = FSplineMeshSceneInstanceDataBuffers::Update
                        ((FSplineMeshSceneInstanceDataBuffers *)&param_1->_padding_,
                         (FSplineMeshShaderParams *)&param_1->_padding_);
      if (bVar2) {
        (**(code **)(**(longlong **)(lVar4 + 0x220) + 0x510))
                  (*(longlong **)(lVar4 + 0x220),*(undefined8 *)(lVar4 + 0x228),8);
      }
      uVar6 = uVar6 + 1;
      *(undefined1 *)&param_1->_padding_ = 1;
    } while (uVar6 < param_2->NumSplines);
  }
  return;
}

// AllocTextureSpace @ 1456f40d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSplineMeshSceneExtension::AllocTextureSpace
          (FSplineMeshSceneExtension *this,FPrimitiveSceneInfo *param_1,uint param_2,
          FPrimitiveSlot *param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 local_38 [4];
  
  if ((param_2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSplines > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SplineMeshSceneResources.cpp"
                         ,0xbd,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  param_3->NumSplines = param_2;
  uVar6 = FSpanAllocator::Allocate(&this->SlotAllocator,param_2);
  param_3->FirstSplineIndex = uVar6;
  iVar7 = (this->RegisteredInstanceIds).ArrayNum;
  lVar9 = 0x78;
  if ((this->SlotAllocator).bGrowOnly == false) {
    lVar9 = 0x74;
  }
  uVar6 = *(uint *)((this->SlotAllocator).FreeSpans.AllocatorInstance.InlineData + lVar9 + -0x80);
  if (iVar7 < (int)uVar6) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    piVar1 = &(this->RegisteredInstanceIds).ArrayMax;
    if ((this->RegisteredInstanceIds).ArrayMax < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar6,&(this->RegisteredInstanceIds).AllocatorInstance,iVar7,piVar1);
    }
    uVar6 = (this->RegisteredInstanceIds).ArrayNum;
    if (uVar6 < param_3->FirstSplineIndex + param_2) {
      do {
        pFVar3 = (this->RegisteredInstanceIds).AllocatorInstance.Data;
        local_38[0] = 0xffffffff;
        if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (this->RegisteredInstanceIds).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->RegisteredInstanceIds).AllocatorInstance,piVar1);
        }
        uVar6 = uVar6 + 1;
        (this->RegisteredInstanceIds).ArrayNum = iVar7 + 1;
        *(undefined4 *)((this->RegisteredInstanceIds).AllocatorInstance.Data + (longlong)iVar7 * 4)
             = local_38[0];
      } while (uVar6 < param_3->FirstSplineIndex + param_2);
    }
  }
  uVar6 = 0;
  iVar7 = param_1->InstanceSceneDataOffset;
  if (param_2 != 0) {
    do {
      uVar10 = param_3->FirstSplineIndex + uVar6;
      uVar8 = 0;
      if ((int)uVar10 < (this->RegisteredInstanceIds).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(int *)((this->RegisteredInstanceIds).AllocatorInstance.Data + (longlong)(int)uVar10 * 4
                   ) != -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("RegisteredInstanceIds[SplineIndex] == INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SplineMeshSceneResources.cpp"
                             ,0xd2,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = 0;
      if ((int)uVar10 < (this->RegisteredInstanceIds).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = uVar6 + iVar7;
      uVar6 = uVar6 + 1;
      *(int *)((this->RegisteredInstanceIds).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) =
           iVar2;
    } while (uVar6 < param_2);
  }
  this->bInstanceLookupDirty = true;
  AssignCoordinates(this,param_1,param_3);
  return;
}

// AssignCoordinates @ 1456f8950

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSplineMeshSceneExtension::AssignCoordinates
          (FSplineMeshSceneExtension *this,FPrimitiveSceneInfo *param_1,FPrimitiveSlot *param_2)

{
  FPrimitiveSceneProxy *pFVar1;
  FSceneInterface *pFVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  
  if ((param_1->Proxy->bSplineMesh == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneInfo.Proxy->IsSplineMesh()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SplineMeshSceneResources.cpp"
                         ,0xe8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = param_1->Proxy;
  uVar9 = 0;
  if (pFVar1->bIsNaniteMesh == '\0') {
    if (param_2->NumSplines != 0) {
      pdVar10 = pFVar1[4].LocalToWorld.M[3] + 3;
      do {
        uVar12 = param_2->FirstSplineIndex + uVar9;
        uVar8 = uVar12 >> 6 & 0x55555555;
        uVar6 = uVar12 >> 7 & 0x55555555;
        uVar6 = (uVar6 >> 1 ^ uVar6) & 0x33333333;
        uVar6 = (uVar6 >> 2 ^ uVar6) & 0xf0f0f0f;
        uVar11 = (uVar6 >> 4 ^ uVar6) & 0xff00ff;
        uVar6 = (uVar8 >> 1 ^ uVar8) & 0x33333333;
        uVar6 = (uVar6 >> 2 ^ uVar6) & 0xf0f0f0f;
        uVar6 = (uVar6 >> 4 ^ uVar6) & 0xff00ff;
        if ((uVar9 != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("SplineIndex == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SplineMeshSceneProxy.h"
                               ,0x6e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar3 = *pdVar10;
        *(ulonglong *)((longlong)&pFVar1[4].PrimitiveSceneInfo + 4) =
             CONCAT44(((uVar11 >> 8 ^ uVar11) & 0xffff) * 0x40 + (uVar12 & 0x3f),
                      ((uVar6 >> 8 ^ uVar6) & 0xffff) << 6);
        lVar7 = (**(code **)((longlong)dVar3 + 8))(pdVar10);
        bVar5 = FSplineMeshSceneInstanceDataBuffers::Update
                          ((FSplineMeshSceneInstanceDataBuffers *)&pFVar1[4].LevelName,
                           (FSplineMeshShaderParams *)&pFVar1[4].Bounds);
        if (bVar5) {
          (**(code **)(**(longlong **)(lVar7 + 0x220) + 0x510))
                    (*(longlong **)(lVar7 + 0x220),*(undefined8 *)(lVar7 + 0x228),8);
        }
        uVar9 = uVar9 + 1;
        *(undefined1 *)&pFVar1[5].RuntimeVirtualTextureMaterialTypes.ArrayNum = 1;
      } while (uVar9 < param_2->NumSplines);
    }
  }
  else if (param_2->NumSplines != 0) {
    do {
      uVar12 = param_2->FirstSplineIndex + uVar9;
      uVar8 = uVar12 >> 6 & 0x55555555;
      uVar6 = uVar12 >> 7 & 0x55555555;
      uVar6 = (uVar6 >> 1 ^ uVar6) & 0x33333333;
      uVar6 = (uVar6 >> 2 ^ uVar6) & 0xf0f0f0f;
      uVar11 = (uVar6 >> 4 ^ uVar6) & 0xff00ff;
      uVar6 = (uVar8 >> 1 ^ uVar8) & 0x33333333;
      uVar6 = (uVar6 >> 2 ^ uVar6) & 0xf0f0f0f;
      uVar6 = (uVar6 >> 4 ^ uVar6) & 0xff00ff;
      if ((uVar9 != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SplineIndex == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SplineMeshSceneProxy.h"
                             ,0x6e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = pFVar1[4].Scene;
      *(ulonglong *)((longlong)&pFVar1[5].PrimitiveColor.field0_0x0 + 4) =
           CONCAT44(((uVar11 >> 8 ^ uVar11) & 0xffff) * 0x40 + (uVar12 & 0x3f),
                    ((uVar6 >> 8 ^ uVar6) & 0xffff) << 6);
      lVar7 = (**(code **)&pFVar2->FeatureLevel)(&pFVar1[4].Scene);
      bVar5 = FSplineMeshSceneInstanceDataBuffers::Update
                        ((FSplineMeshSceneInstanceDataBuffers *)
                         &pFVar1[5].CustomPrimitiveData.Data.ArrayNum,
                         (FSplineMeshShaderParams *)&pFVar1[4].PrimitiveSceneInfo);
      if (bVar5) {
        (**(code **)(**(longlong **)(lVar7 + 0x220) + 0x510))
                  (*(longlong **)(lVar7 + 0x220),*(undefined8 *)(lVar7 + 0x228),8);
      }
      uVar9 = uVar9 + 1;
      *(undefined1 *)pFVar1[5].LocalToWorld.M[3] = 1;
    } while (uVar9 < param_2->NumSplines);
  }
  return;
}

// ClearAllCache @ 1456fad10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSplineMeshSceneExtension::ClearAllCache(FSplineMeshSceneExtension *this)

{
  longlong *plVar1;
  IPooledRenderTarget *pIVar2;
  FRDGPooledBuffer *pFVar3;
  longlong lVar4;
  
  pIVar2 = (this->SavedPosTexture).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->SavedPosTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->SavedRotTexture).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->SavedRotTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pFVar3 = (this->SavedIdLookup).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->SavedIdLookup).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001456fad8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      return;
    }
  }
  return;
}

// DefragTexture @ 1456fde80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSplineMeshSceneExtension::DefragTexture(FSplineMeshSceneExtension *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  IPooledRenderTarget *pIVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  pIVar4 = (this->SavedPosTexture).Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (this->SavedPosTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  pIVar4 = (this->SavedRotTexture).Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (this->SavedRotTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  FSpanAllocator::Reset(&this->SlotAllocator);
  (this->RegisteredInstanceIds).ArrayNum = 0;
  if ((this->RegisteredInstanceIds).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->RegisteredInstanceIds).AllocatorInstance,0,
               &(this->RegisteredInstanceIds).ArrayMax);
  }
  iVar3 = *(int *)&(this->RegisteredPrimitives).field_0x28;
  puVar1 = &(this->RegisteredPrimitives).field_0x10;
  uVar8 = 1;
  iVar13 = 0;
  iVar9 = iVar11;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->RegisteredPrimitives).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    iVar13 = 0;
    iVar11 = 0;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1456fdf8d;
      uVar12 = puVar15[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = iVar13 + -1 + local_res10;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_1456fdf8d:
  uVar12 = *(uint *)&(this->RegisteredPrimitives).field_0x28;
  uVar16 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar11);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->RegisteredPrimitives).field_0x8 -
                       *(int *)&(this->RegisteredPrimitives).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->RegisteredPrimitives).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->RegisteredPrimitives).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1456fe090;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar12 = local_res18 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_1456fe090:
  while( true ) {
    if (*(int *)&(this->RegisteredPrimitives).field_0x8 -
        *(int *)&(this->RegisteredPrimitives).field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar10 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar5 = *(longlong *)&this->RegisteredPrimitives;
    AllocTextureSpace(this,*(FPrimitiveSceneInfo **)(lVar5 + lVar10 * 0x18),
                      *(uint *)(lVar5 + 0xc + lVar10 * 0x18),
                      (FPrimitiveSlot *)(lVar5 + 8 + lVar10 * 0x18));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  lVar10 = 0x78;
  if ((this->SlotAllocator).bGrowOnly == false) {
    lVar10 = 0x74;
  }
  if ((*(int *)((this->SlotAllocator).FreeSpans.AllocatorInstance.InlineData + lVar10 + -0x80) !=
       (this->SlotAllocator).CurrentSize) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlotAllocator.GetMaxSize() == SlotAllocator.GetSparselyAllocatedSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SplineMeshSceneResources.cpp"
                         ,0x10b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// GetInstanceIdLookupSRV @ 145709ed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBufferSRV * __thiscall
FSplineMeshSceneExtension::GetInstanceIdLookupSRV
          (FSplineMeshSceneExtension *this,FRDGBuilder *param_1,bool param_2)

{
  longlong *plVar1;
  uint uVar2;
  EBufferUsageFlags EVar3;
  FRDGPooledBuffer *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  TConsoleVariableData<bool> *pTVar9;
  bool bVar10;
  bool bVar11;
  FRDGBuffer *pFVar12;
  TRefCountPtr<FRDGPooledBuffer> *pTVar13;
  FRDGBufferSRV *pFVar14;
  FRDGPooledBuffer *pFVar15;
  uint uVar16;
  FRDGPooledBuffer *local_res8;
  FRDGPooledBuffer *local_res20;
  undefined4 uStack_ac;
  TArrayView<unsigned_int,int> local_a8;
  undefined8 local_98;
  FScriptContainerElement *local_88 [2];
  FShaderParametersMetadata *local_78;
  FRDGBufferSRVDesc local_70;
  
  pFVar15 = (FRDGPooledBuffer *)0x0;
  pFVar4 = (this->SavedIdLookup).Reference;
  uVar2 = (this->RegisteredInstanceIds).ArrayNum;
  uVar16 = 0;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    uVar16 = (pFVar4->Desc).NumElements;
  }
  if ((param_2) || (uVar2 != uVar16)) {
    bVar10 = true;
    if (!param_2) goto LAB_145709f2a;
  }
  else {
    bVar10 = false;
LAB_145709f2a:
    if ((pFVar4 != (FRDGPooledBuffer *)0x0) && (this->bInstanceLookupDirty == false)) {
      bVar11 = false;
      goto LAB_145709f40;
    }
  }
  bVar11 = true;
LAB_145709f40:
  if (bVar10) {
    local_a8.ArrayNum = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_a8.DataPtr = (uint *)CONCAT44(uVar2,4);
    local_98 = 0;
    local_88[0] = (FScriptContainerElement *)local_a8.DataPtr;
    local_88[1] = (FScriptContainerElement *)local_a8._8_8_;
    local_78 = (FShaderParametersMetadata *)0x0;
    pFVar12 = FRDGBuilder::CreateBuffer
                        (param_1,(FRDGBufferDesc *)local_88,L"SplineMesh.InstanceIdLookup",None);
    if (param_2) {
      bVar7 = true;
      bVar10 = false;
      local_res20 = pFVar15;
    }
    else {
      pTVar13 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar12);
      pFVar15 = pTVar13->Reference;
      if (pFVar15 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar15->_padding_ = (int)pFVar15->_padding_ + 1;
        UNLOCK();
      }
      bVar7 = false;
      bVar10 = true;
      local_res8 = pFVar15;
    }
    pFVar4 = (this->SavedIdLookup).Reference;
    if (pFVar4 != pFVar15) {
      (this->SavedIdLookup).Reference = pFVar15;
      if (pFVar15 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar15->_padding_ = (int)pFVar15->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar4 != (FRDGPooledBuffer *)0x0) {
        plVar1 = &pFVar4->_padding_;
        LOCK();
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar4->_padding_)(pFVar4);
        }
      }
    }
    if ((bVar10) && (local_res8 != (FRDGPooledBuffer *)0x0)) {
      plVar1 = &local_res8->_padding_;
      LOCK();
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        if (plVar1 == (longlong *)0x0) {
          local_res8 = (FRDGPooledBuffer *)0x0;
        }
        if (local_res8 != (FRDGPooledBuffer *)0x0) {
          (**(code **)local_res8->_padding_)(local_res8);
        }
      }
    }
    if ((bVar7) && (local_res20 != (FRDGPooledBuffer *)0x0)) {
      plVar1 = &local_res20->_padding_;
      LOCK();
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        if (plVar1 == (longlong *)0x0) {
          local_res20 = (FRDGPooledBuffer *)0x0;
        }
        if (local_res20 != (FRDGPooledBuffer *)0x0) {
          (**(code **)local_res20->_padding_)(local_res20);
        }
      }
    }
  }
  else {
    pFVar12 = FRDGBuilder::RegisterExternalBuffer
                        (param_1,&this->SavedIdLookup,L"SplineMesh.InstanceIdLookup",None);
  }
  pTVar9 = CVarSplineMeshSceneTexturesInstanceIDUploadCopy.Ref;
  if (bVar11) {
    bVar10 = IsInParallelRenderingThread();
    if ((!bVar10) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FRDGBufferSRV *)(*pcVar6)();
      return pFVar14;
    }
    bVar10 = pTVar9->ShadowedValue[1];
    pFVar5 = (this->RegisteredInstanceIds).AllocatorInstance.Data;
    EVar3 = (this->RegisteredInstanceIds).ArrayNum;
    if (((int)EVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FRDGBufferSRV *)(*pcVar6)();
      return pFVar14;
    }
    local_a8._12_4_ = uStack_ac;
    local_a8.ArrayNum = EVar3;
    local_a8.DataPtr = (uint *)pFVar5;
    FRDGBuilder::QueueBufferUpload<unsigned_int>(param_1,pFVar12,&local_a8,bVar10 == false);
  }
  this->bInstanceLookupDirty = false;
  local_70._padding_._4_4_ = 0;
  local_70._padding_._0_4_ = 0xffffffff;
  local_70._padding_ = 0;
  local_70._padding_._0_1_ = 0;
  if (((pFVar12->Desc).Usage & DrawIndirect) != None) {
    local_70._padding_._0_1_ = 0x1c;
  }
  local_70.Buffer = pFVar12;
  pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_70);
  return pFVar14;
}

// GetNumSplines @ 14570a350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __cdecl FSplineMeshSceneExtension::GetNumSplines(FPrimitiveSceneInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1->Proxy->bSplineMesh != '\0') {
    return param_1->NumInstanceSceneDataEntries;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("SceneInfo.Proxy->IsSplineMesh()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SplineMeshSceneResources.cpp"
                     ,0xe1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return param_1->NumInstanceSceneDataEntries;
}

// Register @ 14571a7d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSlot * __thiscall
FSplineMeshSceneExtension::Register(FSplineMeshSceneExtension *this,FPrimitiveSceneInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  FPrimitiveSlot *pFVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  FPrimitiveSceneInfo *local_res18;
  FPrimitiveSceneInfo **local_res20;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  local_res18 = param_1;
  if (*(int *)&(this->RegisteredPrimitives).field_0x8 !=
      *(int *)&(this->RegisteredPrimitives).field_0x34) {
    puVar6 = *(undefined1 **)&(this->RegisteredPrimitives).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->RegisteredPrimitives).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->RegisteredPrimitives).field_0x48 - 1U & uVar7) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)&this->RegisteredPrimitives + (longlong)iVar3 * 0x18;
        if (*(FPrimitiveSceneInfo **)
             (*(longlong *)&this->RegisteredPrimitives + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar4 != 0) goto LAB_14571a8a6;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res20 = &local_res18;
  TSet<TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPrimitiveSceneInfo_const_*_&&>_>
            ((TSet<TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot,0>,FDefaultSetAllocator>
              *)&this->RegisteredPrimitives,(uint)local_res10,
             (TKeyInitializer<FPrimitiveSceneInfo_const_*_&&> *)(ulonglong)uVar7,
             (bool *)&local_res20);
  lVar4 = *(longlong *)&this->RegisteredPrimitives + (longlong)local_res10[0] * 0x18;
LAB_14571a8a6:
  pFVar5 = (FPrimitiveSlot *)(lVar4 + 8);
  if (*(int *)(lVar4 + 0xc) != 0) {
    local_res8[0] = 0;
    bVar2 = `FSplineMeshSceneExtension::Register'::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar2) {
      return pFVar5;
    }
  }
  if ((param_1->Proxy->bSplineMesh == '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneInfo.Proxy->IsSplineMesh()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SplineMeshSceneResources.cpp"
                         ,0xe1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FPrimitiveSlot *)(*pcVar1)();
    return pFVar5;
  }
  AllocTextureSpace(this,param_1,param_1->NumInstanceSceneDataEntries,pFVar5);
  return pFVar5;
}

// ShouldCreateExtension @ 145722ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl FSplineMeshSceneExtension::ShouldCreateExtension(FScene *param_1)

{
  bool bVar1;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    bVar1 = UseSplineMeshSceneResources((FStaticShaderPlatform)0x9b);
    return bVar1;
  }
  bVar1 = UseSplineMeshSceneResources
                    ((FStaticShaderPlatform)
                     GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8]);
  return bVar1;
}

// Unregister @ 1457265b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSplineMeshSceneExtension::Unregister(FSplineMeshSceneExtension *this,FPrimitiveSceneInfo *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  FScriptContainerElement *_Dst;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot> *pTVar8;
  longlong lVar9;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar10;
  uint uVar11;
  uint uVar13;
  int *piVar14;
  FPrimitiveSceneInfo *local_res8;
  int local_38;
  int iStack_34;
  int *piVar12;
  
  pTVar8 = TSet<TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot,0>,FDefaultSetAllocator>
                   *)&this->RegisteredPrimitives,param_1);
  piVar12 = (int *)0x0;
  piVar14 = (int *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot> *)0x0
     ) {
    piVar14 = piVar12;
  }
  if (piVar14 == (int *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6023595025940610907>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SplineMeshSceneResources.cpp"
                       ,0xa5,"Slot != nullptr");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_38 = *piVar14;
    pTVar3 = &(this->SlotAllocator).PendingFreeSpans;
    FVar10 = (this->SlotAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
    iVar7 = piVar14[1];
    if (FVar10 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FVar10 = (ForElementType<FSpanAllocator::FLinearAllocation>)pTVar3;
    }
    iStack_34 = iVar7;
    if (((ulonglong)FVar10 <= &local_38) &&
       (&local_38 <
        (int *)((longlong)FVar10 + (longlong)(this->SlotAllocator).PendingFreeSpans.ArrayMax * 8)))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->SlotAllocator).PendingFreeSpans.ArrayNum;
    piVar1 = &(this->SlotAllocator).PendingFreeSpans.ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                        (0x408,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->SlotAllocator).PendingFreeSpans.ArrayNum = iVar6 + 1;
    FVar10 = (this->SlotAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FVar10 = (ForElementType<FSpanAllocator::FLinearAllocation>)pTVar3;
    }
    *(ulonglong *)((longlong)FVar10 + (longlong)iVar6 * 8) = CONCAT44(iStack_34,local_38);
    (this->SlotAllocator).CurrentSize = (this->SlotAllocator).CurrentSize - iVar7;
    pTVar2 = &this->RegisteredInstanceIds;
    if (piVar14[1] != 0) {
      do {
        uVar13 = *piVar14 + (int)piVar12;
        uVar11 = 0;
        if ((int)uVar13 < (this->RegisteredInstanceIds).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar11 = (int)piVar12 + 1;
        piVar12 = (int *)(ulonglong)uVar11;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar13 * 4) = 0xffffffff;
      } while (uVar11 < (uint)piVar14[1]);
    }
    piVar14 = &(this->RegisteredInstanceIds).ArrayNum;
    uVar11 = *piVar14;
    lVar9 = 0x78;
    if ((this->SlotAllocator).bGrowOnly == false) {
      lVar9 = 0x74;
    }
    uVar13 = uVar11;
    if (*(int *)((this->SlotAllocator).FreeSpans.AllocatorInstance.InlineData + lVar9 + -0x80) <
        (int)uVar11) {
      uVar13 = *(uint *)((this->SlotAllocator).FreeSpans.AllocatorInstance.InlineData +
                        lVar9 + -0x80);
    }
    if ((int)uVar11 < (int)uVar13) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar13 - uVar11,&pTVar2->AllocatorInstance,piVar14,
                 &(this->RegisteredInstanceIds).ArrayMax);
    }
    else {
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if ((int)uVar13 < (int)uVar11) {
        uVar11 = uVar11 - uVar13;
        if ((int)(uVar11 | uVar13) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar11 != 0) {
          _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar13 * 4;
          iVar7 = ((this->RegisteredInstanceIds).ArrayNum - uVar11) - uVar13;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar11 * 4,(longlong)iVar7 << 2);
          }
          piVar14 = &(this->RegisteredInstanceIds).ArrayNum;
          *piVar14 = *piVar14 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar2->AllocatorInstance,(this->RegisteredInstanceIds).ArrayNum,
                     &(this->RegisteredInstanceIds).ArrayMax);
        }
      }
    }
    if (*(int *)&(this->RegisteredPrimitives).field_0x8 !=
        *(int *)&(this->RegisteredPrimitives).field_0x34) {
      uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      local_res8 = param_1;
      TSet<TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot,0>,FDefaultSetAllocator>
      ::RemoveImpl<FPrimitiveSceneInfo_const_*>
                ((TSet<TTuple<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FSplineMeshSceneExtension::FPrimitiveSlot,0>,FDefaultSetAllocator>
                  *)&this->RegisteredPrimitives,uVar11 >> 0x10 ^ uVar11,&local_res8);
    }
    this->bInstanceLookupDirty = true;
  }
  return;
}

// operator() @ 1504d2390

bool __thiscall `FSplineMeshSceneExtension::Register'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6023595025940610919>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6023595025940610919>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

