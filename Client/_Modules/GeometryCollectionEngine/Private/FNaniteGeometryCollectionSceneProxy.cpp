// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 23

// FNaniteGeometryCollectionSceneProxy @ 1463a2ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FNaniteGeometryCollectionSceneProxy * __thiscall
FNaniteGeometryCollectionSceneProxy::FNaniteGeometryCollectionSceneProxy
          (FNaniteGeometryCollectionSceneProxy *this,UGeometryCollectionComponent *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  double *pdVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  FGeometryCollection *this_00;
  FResources *pFVar11;
  longlong lVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  FName FVar22;
  UGeometryCollectionComponent *this_01;
  bool bVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  EBlendMode EVar27;
  FColor FVar28;
  FNaniteGeometryCollectionSceneProxy *pFVar29;
  UMaterial *pUVar30;
  ushort *puVar31;
  FString *pFVar32;
  undefined8 uVar33;
  FName *pFVar34;
  TManagedArray<UE::Math::TBox<double>_> *pTVar35;
  TManagedArray<int> *pTVar36;
  undefined4 extraout_var;
  undefined8 *puVar38;
  TMatrix<double> *pTVar39;
  uint uVar40;
  void *_Dst;
  TManagedArray<FGeometryCollectionSection> *pTVar41;
  FScriptContainerElement *pFVar42;
  uint uVar43;
  uint uVar44;
  longlong lVar45;
  longlong lVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStackY_2f8 [32];
  FAccessTag local_2b8;
  FLLMScope local_2a0 [2];
  FScriptContainerElement *local_298;
  undefined1 local_28e [6];
  TManagedArray<FGeometryCollectionSection> *local_288;
  longlong local_280;
  FNaniteGeometryCollectionSceneProxy *local_278;
  TManagedArray<int> *local_270;
  undefined8 local_268;
  UGeometryCollectionComponent *local_260;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_258;
  FName local_244;
  FName local_23c;
  FName local_234;
  TReferenceControllerBase<1> *local_228;
  FMemScope local_220;
  FString local_218;
  FString local_208;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FString local_1c8;
  FString local_1b8;
  FWriteView local_1a8;
  undefined1 local_128 [128];
  ulonglong local_a8;
  byte *pbVar37;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_268 = 0;
  local_278 = this;
  local_260 = param_1;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  puVar4 = &this->field_0x280;
  *(undefined8 *)&this->field_0x294 = 0;
  *(undefined4 *)&this->field_0x29c = 0;
  *(undefined ***)this = &___7FSceneProxyBase_Nanite__6B_;
  puVar1 = &this->field_0x288;
  *(undefined8 *)puVar4 = 0;
  puVar2 = &this->field_0x28c;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)puVar2 = 0;
  this->field_0x81 = this->field_0x81 | 2;
  *(undefined4 *)&this->field_0x290 = 0xffffffff;
  this->field_0x2a0 = 0;
  *(undefined8 *)&this->field_0x2a4 = 0xffffffffffffffff;
  bVar23 = Nanite::FSceneProxyBase::SupportsAlwaysVisible((FSceneProxyBase *)this);
  this->field_0x2a1 = this->field_0x2a1 & 0xc0;
  this->field_0x85 = this->field_0x85 | 8;
  this->field_0x81 = bVar23 << 2 | this->field_0x81 & 0xfb;
  FGeometryCollectionSceneProxyBase::FGeometryCollectionSceneProxyBase
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x2b0,param_1,true);
  *(undefined ***)this = &_vftable__for__Nanite__FSceneProxyBase__;
  *(undefined ***)&this->field_0x2b0 = &_vftable__for__FGeometryCollectionSceneProxyBase__;
  this->GeometryCollection = (UGeometryCollection *)(param_1->RestCollection).field0_0x0;
  FCollisionResponseContainer::FCollisionResponseContainer(&this->CollisionResponse);
  (this->GeometryNaniteData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometryNaniteData).ArrayNum = 0;
  (this->GeometryNaniteData).ArrayMax = 0;
  this->bRequiresGPUSceneUpdate = 0;
  this->bEnableBoneSelection = 0;
  FInstanceSceneDataBuffers::FInstanceSceneDataBuffers(&this->InstanceSceneDataBuffersImpl);
  FLLMScope::FLLMScope(local_2a0,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_244 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_220,&local_244,true);
  uVar40 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar40 = (uVar40 >> 0xd ^ uVar40) * -0x3d4d51cb;
  local_2b8.Kind = Writer;
  local_2b8.WriterTag = uVar40 >> 0x10 ^ uVar40;
  FInstanceSceneDataBuffers::BeginWriteAccess
            (&this->InstanceSceneDataBuffersImpl,&local_1a8,local_2b8);
  (local_1a8.Flags)->Packed = (local_1a8.Flags)->Packed | 100;
  (local_1a8.Flags)->Packed =
       (local_1a8.Flags)->Packed ^
       ((short)(*(uint *)&this->field_0x838 >> 4) << 9 ^ (local_1a8.Flags)->Packed) & 0x200;
  FInstanceSceneDataBuffers::EndWriteAccess(&this->InstanceSceneDataBuffersImpl,local_2b8);
  this->field_0x82 = this->field_0x82 | 0x80;
  FPrimitiveSceneProxy::SetupInstanceSceneDataBuffers
            ((FPrimitiveSceneProxy *)this,&this->InstanceSceneDataBuffersImpl);
  this->field_0x83 = this->field_0x83 & 0xfe;
  this->field_0x7c = this->field_0x7c & 0xfb;
  this->field_0x80 = this->field_0x80 & 0xbf | 0x20;
  this_00 = (this->GeometryCollection->GeometryCollection).Object;
  local_228 = (this->GeometryCollection->GeometryCollection).SharedReferenceCount.
              ReferenceController;
  if (local_228 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_228->SharedReferenceCount = (atomic<int>)((int)local_228->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FGeometryCollection *)0x0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar23) {
      pcVar13 = (code *)swi(3);
      pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
      return pFVar29;
    }
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar23) {
      pcVar13 = (code *)swi(3);
      pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
      return pFVar29;
    }
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar23) {
      pcVar13 = (code *)swi(3);
      pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
      return pFVar29;
    }
  }
  local_288 = &this_00->Sections;
  uVar40 = (**(code **)(*(longlong *)local_288 + 0x60))();
  iVar26 = *(int *)puVar1;
  if (iVar26 < (int)uVar40) {
    iVar25 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x50,0x10,uVar40 - iVar26,(ForAnyElementType *)puVar4,(int *)puVar1,
                        (int *)puVar2);
    DefaultConstructItems<Nanite::FSceneProxyBase::FMaterialSection,int>
              ((void *)(*(longlong *)puVar4 + (longlong)iVar25 * 0x50),uVar40 - iVar26);
  }
  else {
    if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
    }
    if ((int)uVar40 < iVar26) {
      uVar43 = iVar26 - uVar40;
      if (((int)(uVar43 | uVar40) < 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar23)) {
        pcVar13 = (code *)swi(3);
        pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
        return pFVar29;
      }
      if (uVar43 != 0) {
        _Dst = (void *)(*(longlong *)puVar4 + (longlong)(int)uVar40 * 0x50);
        iVar26 = (*(int *)puVar1 - uVar43) - uVar40;
        if (iVar26 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar43 * 0x50),
                  (longlong)iVar26 * 0x50);
        }
        *(uint *)puVar1 = *(int *)puVar1 - uVar43;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,(ForAnyElementType *)puVar4,*(int *)puVar1,(int *)puVar2);
      }
    }
  }
  pTVar41 = &this_00->Sections;
  uVar40 = 0;
  iVar26 = (**(code **)(*(longlong *)pTVar41 + 0x60))(pTVar41);
  if (0 < iVar26) {
    lVar45 = 0;
    local_280 = 0;
    local_2b8.WriterTag = 0;
    local_2b8.Kind = Reader;
    do {
      uVar44 = ~uVar40 >> 0x1f;
      uVar43 = 0;
      if ((int)uVar40 < *(int *)&pTVar41->field_0x18) {
        uVar43 = uVar44;
      }
      if ((uVar43 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar13 = (code *)swi(3);
        pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
        return pFVar29;
      }
      local_270 = *(TManagedArray<int> **)&pTVar41->field_0x10;
      iVar26 = *(int *)(&local_270->field_0x0 + (longlong)local_2b8);
      iVar25 = *(int *)&this->field_0x290;
      if (*(int *)&this->field_0x290 < iVar26) {
        iVar25 = iVar26;
      }
      *(int *)&this->field_0x290 = iVar25;
      if ((iVar26 == -1) ||
         (pUVar30 = (UMaterial *)(**(code **)(*(longlong *)local_260 + 0x690))(),
         pUVar30 == (UMaterial *)0x0)) {
LAB_1463a30af:
        pUVar30 = UMaterial::GetDefaultMaterial(MD_Surface);
        pTVar41 = local_288;
        if ((pUVar30 == (UMaterial *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("MaterialInterface != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                                ,0x4f6,L""), pTVar41 = local_288, bVar23)) {
          pcVar13 = (code *)swi(3);
          pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
          return pFVar29;
        }
      }
      else {
        bVar23 = IsOpaqueOrMaskedBlendMode((UMaterialInterface *)pUVar30);
        if ((!bVar23) ||
           (puVar31 = (ushort *)(**(code **)(pUVar30->_padding_ + 0x468))(pUVar30),
           (*puVar31 & 0x400) != 0)) {
          if (2 < (byte)LogStaticMesh._0_1_) {
            puVar31 = (ushort *)(**(code **)(pUVar30->_padding_ + 0x468))(pUVar30,local_28e);
            pFVar32 = GetShadingModelFieldString(&local_1b8,(FMaterialShadingModelField)*puVar31);
            if ((pFVar32->Data).ArrayNum == 0) {
              local_298 = (FScriptContainerElement *)0x15060d16c;
            }
            else {
              local_298 = (pFVar32->Data).AllocatorInstance.Data;
            }
            EVar27 = (**(code **)(pUVar30->_padding_ + 0x460))(pUVar30);
            GetBlendModeString(&local_1c8,EVar27);
            local_23c = (FName)this->GeometryCollection->_padding_;
            ::FName::ToString(&local_23c,&local_208);
            local_234 = (FName)pUVar30->_padding_;
            ::FName::ToString(&local_234,&local_218);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
            if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.Data.AllocatorInstance.Data);
            }
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
            }
            if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
            }
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_1463a30af;
        }
      }
      bVar23 = IsOpaqueOrMaskedBlendMode((UMaterialInterface *)pUVar30);
      if ((!bVar23) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsOpaqueOrMaskedBlendMode(*MaterialInterface)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                              ,0x4f9,L""), bVar23)) {
        pcVar13 = (code *)swi(3);
        pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
        return pFVar29;
      }
      local_298 = (FScriptContainerElement *)(**(code **)(pUVar30->_padding_ + 0x310))(pUVar30);
      uVar43 = 0;
      if ((int)uVar40 < *(int *)puVar1) {
        uVar43 = uVar44;
      }
      if ((uVar43 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar13 = (code *)swi(3);
        pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
        return pFVar29;
      }
      *(FScriptContainerElement **)(*(longlong *)&this->field_0x280 + 8 + lVar45) = local_298;
      uVar33 = (**(code **)(pUVar30->_padding_ + 0x310))(pUVar30);
      uVar43 = 0;
      if ((int)uVar40 < *(int *)puVar1) {
        uVar43 = uVar44;
      }
      if ((uVar43 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar13 = (code *)swi(3);
        pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
        return pFVar29;
      }
      *(undefined8 *)(lVar45 + *(longlong *)&this->field_0x280) = uVar33;
      uVar10 = *(undefined4 *)(&local_270->field_0x0 + (longlong)local_2b8);
      uVar43 = 0;
      if ((int)uVar40 < *(int *)puVar1) {
        uVar43 = uVar44;
      }
      if ((uVar43 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar13 = (code *)swi(3);
        pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
        return pFVar29;
      }
      *(undefined4 *)(*(longlong *)&this->field_0x280 + 0x10 + lVar45) = uVar10;
      uVar43 = 0;
      if ((int)uVar40 < *(int *)puVar1) {
        uVar43 = uVar44;
      }
      if ((uVar43 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar13 = (code *)swi(3);
        pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
        return pFVar29;
      }
      uVar40 = uVar40 + 1;
      local_280 = local_280 + 1;
      local_2b8 = (FAccessTag)((longlong)local_2b8 + 0x20);
      pbVar37 = (byte *)(*(longlong *)&this->field_0x280 + 0x40 + lVar45);
      *pbVar37 = *pbVar37 | 0x10;
      lVar45 = lVar45 + 0x50;
      iVar26 = (**(code **)(*(longlong *)pTVar41 + 0x60))(pTVar41);
    } while ((int)uVar40 < iVar26);
  }
  Nanite::FSceneProxyBase::OnMaterialsUpdated((FSceneProxyBase *)this,false);
  if ((this_00 == (FGeometryCollection *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar13 = (code *)swi(3);
    pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
    return pFVar29;
  }
  FVar22 = FGeometryCollection::GeometryGroup;
  pFVar34 = ::FName::FName(&local_1f8,"BoundingBox");
  bVar23 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this_00,*pFVar34,FVar22)
  ;
  if (bVar23) {
    if ((this_00 == (FGeometryCollection *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar23)) {
      pcVar13 = (code *)swi(3);
      pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
      return pFVar29;
    }
    iVar26 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)this_00,FGeometryCollection::GeometryGroup);
    if (iVar26 == 0) goto LAB_1463a3369;
    bVar23 = true;
  }
  else {
LAB_1463a3369:
    bVar23 = false;
  }
  if ((this_00 == (FGeometryCollection *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar24)) {
    pcVar13 = (code *)swi(3);
    pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
    return pFVar29;
  }
  iVar26 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)this_00,FTransformCollection::TransformGroup);
  if (iVar26 != 0) {
    if ((this_00 == (FGeometryCollection *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar24)) {
      pcVar13 = (code *)swi(3);
      pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
      return pFVar29;
    }
    FVar22 = FTransformCollection::TransformGroup;
    pFVar34 = ::FName::FName(&local_1f0,"BoundingBox");
    bVar24 = FManagedArrayCollection::HasAttribute
                       ((FManagedArrayCollection *)this_00,*pFVar34,FVar22);
    if (bVar24) {
      if ((this_00 == (FGeometryCollection *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar24)) {
        pcVar13 = (code *)swi(3);
        pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
        return pFVar29;
      }
      FVar22 = FTransformCollection::TransformGroup;
      pFVar34 = ::FName::FName(&local_1e8,"TransformToGeometryIndex");
      bVar24 = FManagedArrayCollection::HasAttribute
                         ((FManagedArrayCollection *)this_00,*pFVar34,FVar22);
      if (bVar24) {
        bVar24 = true;
        goto LAB_1463a3450;
      }
    }
  }
  bVar24 = false;
LAB_1463a3450:
  if (bVar23) {
    if ((this_00 == (FGeometryCollection *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar23)) {
      pcVar13 = (code *)swi(3);
      pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
      return pFVar29;
    }
    iVar26 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)this_00,FGeometryCollection::GeometryGroup);
    TArray<FNaniteGeometryCollectionSceneProxy::FGeometryNaniteData,TSizedDefaultAllocator<32>_>::
    SetNumUninitialized(&this->GeometryNaniteData,iVar26,Default);
    if ((this_00 == (FGeometryCollection *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar23)) {
      pcVar13 = (code *)swi(3);
      pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
      return pFVar29;
    }
    FVar22 = FGeometryCollection::GeometryGroup;
    pFVar34 = ::FName::FName(&local_1e0,"BoundingBox");
    pTVar35 = FManagedArrayCollection::GetAttribute<UE::Math::TBox<double>_>
                        ((FManagedArrayCollection *)this_00,*pFVar34,FVar22);
    dVar21 = __real_3fd0000000000000;
    dVar20 = __real_3fe0000000000000;
    uVar40 = 0;
    if (0 < iVar26) {
      lVar46 = 0;
      lVar45 = 0;
      local_2b8.WriterTag = 0;
      local_2b8.Kind = Reader;
      do {
        uVar44 = ~uVar40 >> 0x1f;
        uVar43 = 0;
        if ((int)uVar40 < (this->GeometryNaniteData).ArrayNum) {
          uVar43 = uVar44;
        }
        if ((uVar43 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
          return pFVar29;
        }
        pFVar42 = (this->GeometryNaniteData).AllocatorInstance.Data;
        pFVar11 = (((this->GeometryCollection->RenderData).Ptr)->NaniteResourcesPtr).Ptr;
        if ((((int)uVar40 < 0) || ((pFVar11->HierarchyRootOffsets).ArrayNum <= (int)uVar40)) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("GeometryIndex >= 0 && GeometryIndex < NaniteResources.HierarchyRootOffsets.Num()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionObject.cpp"
                                ,0x8ae,L""), bVar23)) {
          pcVar13 = (code *)swi(3);
          pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
          return pFVar29;
        }
        uVar43 = 0;
        if ((int)uVar40 < (pFVar11->HierarchyRootOffsets).ArrayNum) {
          uVar43 = uVar44;
        }
        if ((uVar43 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
          return pFVar29;
        }
        *(int *)(pFVar42 + lVar45 + 0x38) =
             *(int *)((pFVar11->HierarchyRootOffsets).AllocatorInstance.Data +
                     (longlong)local_2b8 * 4) * 0x38;
        uVar43 = 0;
        if ((int)uVar40 < *(int *)&pTVar35->field_0x18) {
          uVar43 = uVar44;
        }
        if ((uVar43 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
          return pFVar29;
        }
        local_2b8 = (FAccessTag)((longlong)local_2b8 + 1);
        uVar40 = uVar40 + 1;
        lVar12 = *(longlong *)&pTVar35->field_0x10;
        dVar8 = *(double *)(lVar46 + 8 + lVar12);
        dVar15 = *(double *)(lVar46 + 0x18 + lVar12) - *(double *)(lVar46 + lVar12);
        dVar9 = *(double *)(lVar46 + 0x10 + lVar12);
        dVar17 = *(double *)(lVar46 + 0x20 + lVar12) - dVar8;
        dVar14 = *(double *)(lVar46 + 0x28 + lVar12) - dVar9;
        pdVar3 = (double *)(lVar46 + lVar12);
        lVar46 = lVar46 + 0x38;
        *(double *)(pFVar42 + lVar45) = dVar15 * dVar20 + *pdVar3;
        auVar48._0_8_ = dVar17 * dVar20 + dVar8;
        auVar48._8_8_ = 0;
        *(double *)(pFVar42 + lVar45 + 8) = auVar48._0_8_;
        *(double *)(pFVar42 + lVar45 + 0x10) = dVar14 * dVar20 + dVar9;
        *(double *)(pFVar42 + lVar45 + 0x18) = dVar15 * dVar20;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (dVar17 * dVar17 + dVar15 * dVar15 + dVar14 * dVar14) * dVar21;
        auVar49 = sqrtpd(auVar48,auVar16);
        *(double *)(pFVar42 + lVar45 + 0x20) = dVar17 * dVar20;
        *(double *)(pFVar42 + lVar45 + 0x28) = dVar14 * dVar20;
        *(longlong *)(pFVar42 + lVar45 + 0x30) = auVar49._0_8_;
        lVar45 = lVar45 + 0x40;
      } while ((longlong)local_2b8 < (longlong)iVar26);
    }
  }
  else if (bVar24) {
    TArray<FNaniteGeometryCollectionSceneProxy::FGeometryNaniteData,TSizedDefaultAllocator<32>_>::
    SetNumUninitialized(&this->GeometryNaniteData,
                        (((((this->GeometryCollection->RenderData).Ptr)->NaniteResourcesPtr).Ptr)->
                        HierarchyRootOffsets).ArrayNum,Default);
    if ((this_00 == (FGeometryCollection *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar23)) {
      pcVar13 = (code *)swi(3);
      pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
      return pFVar29;
    }
    FVar22 = FTransformCollection::TransformGroup;
    pFVar34 = ::FName::FName(&local_1d8,"BoundingBox");
    pTVar35 = FManagedArrayCollection::GetAttribute<UE::Math::TBox<double>_>
                        ((FManagedArrayCollection *)this_00,*pFVar34,FVar22);
    if ((this_00 == (FGeometryCollection *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar23)) {
      pcVar13 = (code *)swi(3);
      pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
      return pFVar29;
    }
    FVar22 = FTransformCollection::TransformGroup;
    pFVar34 = ::FName::FName(&local_1d0,"TransformToGeometryIndex");
    pTVar36 = FManagedArrayCollection::GetAttribute<int>
                        ((FManagedArrayCollection *)this_00,*pFVar34,FVar22);
    uVar40 = 0;
    local_270 = pTVar36;
    iVar26 = (**(code **)(*(longlong *)pTVar36 + 0x60))(pTVar36);
    dVar21 = __real_3fd0000000000000;
    dVar20 = __real_3fe0000000000000;
    if (0 < (longlong)iVar26) {
      lVar46 = 0;
      lVar45 = 0;
      do {
        uVar43 = 0;
        if ((int)uVar40 < *(int *)&pTVar36->field_0x18) {
          uVar43 = ~uVar40 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
          return pFVar29;
        }
        uVar43 = *(uint *)(*(longlong *)&pTVar36->field_0x10 + lVar46 * 4);
        if (-1 < (int)uVar43) {
          uVar44 = 0;
          if ((int)uVar43 < (local_278->GeometryNaniteData).ArrayNum) {
            uVar44 = ~uVar43 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar13 = (code *)swi(3);
            pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
            return pFVar29;
          }
          pFVar42 = (local_278->GeometryNaniteData).AllocatorInstance.Data +
                    (longlong)(int)uVar43 * 0x40;
          pFVar11 = (((local_278->GeometryCollection->RenderData).Ptr)->NaniteResourcesPtr).Ptr;
          if (((pFVar11->HierarchyRootOffsets).ArrayNum <= (int)uVar43) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GeometryIndex >= 0 && GeometryIndex < NaniteResources.HierarchyRootOffsets.Num()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionObject.cpp"
                                  ,0x8ae,L""), bVar23)) {
            pcVar13 = (code *)swi(3);
            pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
            return pFVar29;
          }
          uVar44 = 0;
          if ((int)uVar43 < (pFVar11->HierarchyRootOffsets).ArrayNum) {
            uVar44 = ~uVar43 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar13 = (code *)swi(3);
            pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
            return pFVar29;
          }
          *(int *)(pFVar42 + 0x38) =
               *(int *)((pFVar11->HierarchyRootOffsets).AllocatorInstance.Data +
                       (longlong)(int)uVar43 * 4) * 0x38;
          uVar43 = 0;
          if ((int)uVar40 < *(int *)&pTVar35->field_0x18) {
            uVar43 = ~uVar40 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar13 = (code *)swi(3);
            pFVar29 = (FNaniteGeometryCollectionSceneProxy *)(*pcVar13)();
            return pFVar29;
          }
          lVar12 = *(longlong *)&pTVar35->field_0x10;
          dVar8 = *(double *)(lVar12 + 8 + lVar45);
          dVar15 = *(double *)(lVar12 + 0x18 + lVar45) - *(double *)(lVar12 + lVar45);
          dVar9 = *(double *)(lVar12 + 0x10 + lVar45);
          dVar17 = *(double *)(lVar12 + 0x20 + lVar45) - dVar8;
          dVar14 = *(double *)(lVar12 + 0x28 + lVar45) - dVar9;
          *(double *)pFVar42 = dVar15 * dVar20 + *(double *)(lVar12 + lVar45);
          auVar50._0_8_ = dVar17 * dVar20 + dVar8;
          auVar50._8_8_ = 0;
          *(double *)(pFVar42 + 8) = auVar50._0_8_;
          *(double *)(pFVar42 + 0x10) = dVar14 * dVar20 + dVar9;
          *(double *)(pFVar42 + 0x18) = dVar15 * dVar20;
          auVar49._8_8_ = 0;
          auVar49._0_8_ = (dVar17 * dVar17 + dVar15 * dVar15 + dVar14 * dVar14) * dVar21;
          auVar49 = sqrtpd(auVar50,auVar49);
          *(double *)(pFVar42 + 0x20) = dVar17 * dVar20;
          *(double *)(pFVar42 + 0x28) = dVar14 * dVar20;
          *(longlong *)(pFVar42 + 0x30) = auVar49._0_8_;
          pTVar36 = local_270;
        }
        uVar40 = uVar40 + 1;
        lVar46 = lVar46 + 1;
        lVar45 = lVar45 + 0x38;
        this = local_278;
      } while (lVar46 < iVar26);
    }
  }
  this_01 = local_260;
  FVar28 = UMeshComponent::GetWireframeColorForSceneProxy((UMeshComponent *)local_260);
  pbVar37 = (byte *)CONCAT44(extraout_var,FVar28.field0_0x0);
  fVar6 = FLinearColor::sRGBToLinearTable[pbVar37[1]];
  fVar7 = FLinearColor::sRGBToLinearTable[*pbVar37];
  fVar47 = (float)pbVar37[3] * __real_3b808081;
  *(float *)&this->field_0x30 = FLinearColor::sRGBToLinearTable[pbVar37[2]];
  *(float *)&this->field_0x34 = fVar6;
  *(float *)&this->field_0x38 = fVar7;
  *(float *)&this->field_0x3c = fVar47;
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0;
  UGeometryCollectionComponent::GetRestTransforms(this_01,&local_258);
  puVar38 = (undefined8 *)(**(code **)(*(longlong *)this_01 + 0x5c8))(this_01);
  uVar33 = puVar38[1];
  *(undefined8 *)&(this->CollisionResponse).field0_0x0 = *puVar38;
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 8) = uVar33;
  uVar10 = *(undefined4 *)((longlong)puVar38 + 0x14);
  uVar18 = *(undefined4 *)(puVar38 + 3);
  uVar19 = *(undefined4 *)((longlong)puVar38 + 0x1c);
  *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x10) =
       *(undefined4 *)(puVar38 + 2);
  *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x14) = uVar10;
  *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x18) = uVar18;
  *(undefined4 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x1c) = uVar19;
  pTVar39 = (TMatrix<double> *)(**(code **)(*(longlong *)this_01 + 0x808))(this_01,local_128);
  UpdateInstanceSceneDataBuffers(this,pTVar39);
  if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_228);
  FMemScope::~FMemScope(&local_220);
  FLLMScope::~FLLMScope(local_2a0);
  return this;
}

// ~FNaniteGeometryCollectionSceneProxy @ 1463a58e0

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
FNaniteGeometryCollectionSceneProxy::~FNaniteGeometryCollectionSceneProxy
          (FNaniteGeometryCollectionSceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__Nanite__FSceneProxyBase__;
  *(undefined ***)&this->field_0x2b0 = &_vftable__for__FGeometryCollectionSceneProxyBase__;
  FInstanceSceneDataBuffers::~FInstanceSceneDataBuffers(&this->InstanceSceneDataBuffersImpl);
  pFVar1 = (this->GeometryNaniteData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FGeometryCollectionSceneProxyBase::~FGeometryCollectionSceneProxyBase
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x2b0);
  if (*(void **)&this->field_0x280 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x280);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// CreateRenderThreadResources @ 1463af560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNaniteGeometryCollectionSceneProxy::CreateRenderThreadResources
          (FNaniteGeometryCollectionSceneProxy *this,FRHICommandListBase *param_1)

{
  FResources *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  FGeometryCollectionSceneProxyBase::CreateRenderThreadResources
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x2b0,param_1);
  pFVar1 = (((this->GeometryCollection->RenderData).Ptr)->NaniteResourcesPtr).Ptr;
  if ((pFVar1->RuntimeResourceID == 0xffffffff) || (pFVar1->HierarchyOffset == 0xffffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NaniteResources.RuntimeResourceID != INDEX_NONE && NaniteResources.HierarchyOffset != INDEX_NONE"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                       ,0x55e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FGeometryCollectionSceneProxyBase::SetDynamicData_RenderThread
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x2b0,param_1,
             *(FGeometryCollectionDynamicData **)&this->field_0x598);
  return;
}

// DestroyRenderThreadResources @ 1463b06c0

void __thiscall
FNaniteGeometryCollectionSceneProxy::DestroyRenderThreadResources
          (FNaniteGeometryCollectionSceneProxy *this)

{
  FGeometryCollectionSceneProxyBase::DestroyRenderThreadResources
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x2b0);
  return;
}

// DrawStaticElements @ 1463b0b10

void __thiscall
FNaniteGeometryCollectionSceneProxy::DrawStaticElements
          (FNaniteGeometryCollectionSceneProxy *this,FStaticPrimitiveDrawInterface *param_1)

{
  Nanite::FSceneProxyBase::DrawStaticElementsInternal
            ((FSceneProxyBase *)this,param_1,(FLightCacheInterface *)0x0);
  return;
}

// FlushGPUSceneUpdate_GameThread @ 1463b24e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNaniteGeometryCollectionSceneProxy::FlushGPUSceneUpdate_GameThread
          (FNaniteGeometryCollectionSceneProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNaniteGeometryCollectionSceneProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNaniteGeometryCollectionSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNaniteGeometryCollectionSceneProxy::FlushGPUSceneUpdate_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNaniteGeometryCollectionSceneProxy::FlushGPUSceneUpdate_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNaniteGeometryCollectionSceneProxy::FlushGPUSceneUpdate_GameThread_::__l2::TSTR_NaniteProxyUpdateGPUScene1574>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FNaniteGeometryCollectionSceneProxy::FlushGPUSceneUpdate_GameThread'::__l2::TSTR_NaniteProxyUpdateGPUScene1574>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// GetAllocatedSize @ 1463b2cd0

uint __thiscall
FNaniteGeometryCollectionSceneProxy::GetAllocatedSize(FNaniteGeometryCollectionSceneProxy *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)&this->field_0x104;
  uVar2 = FGeometryCollectionSceneProxyBase::GetAllocatedSize
                    ((FGeometryCollectionSceneProxyBase *)&this->field_0x2b0);
  return uVar2 + iVar1 * 4;
}

// GetDynamicMeshElements @ 1463b4040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNaniteGeometryCollectionSceneProxy::GetDynamicMeshElements
          (FNaniteGeometryCollectionSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  UGeometryCollection *pUVar3;
  FGeometryCollection *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName this_00;
  bool bVar11;
  bool bVar12;
  FNameEntryId FVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FNaniteGeometryCollectionSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements>
  FVar15;
  FColoredMaterialRenderProxy *pFVar16;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar17;
  FPrimitiveDrawInterface *pFVar18;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *pTVar19;
  FName FVar20;
  uint uVar21;
  FName FVar22;
  undefined1 auStackY_198 [32];
  FColor_u_0 local_130 [2];
  FName local_128;
  FColor_u_0 local_120 [2];
  uint local_118;
  uint uStack_114;
  FName local_110;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_108;
  FName local_100;
  FName local_f8;
  FSceneViewFamily *local_e8;
  FName local_e0;
  FName local_d8;
  FLinearColor_u_0 local_d0;
  FLinearColor_u_0 local_c0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar9 = false;
  local_128 = (FName)param_4;
  local_130[0].Bits = 0;
  local_108 = param_1;
  local_e8 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FNaniteGeometryCollectionSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements>
         )0x0) {
      pFVar14 = ::FName::FName(&local_d8,
                               "STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements,*pFVar14,
                 L"STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements","STATGROUP_Quick"
                 ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FNaniteGeometryCollectionSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements>
       )0x0) {
    pFVar14 = ::FName::FName(&local_e0,
                             "STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements");
    FVar15 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FNaniteGeometryCollectionSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements,
                          *pFVar14,L"STAT_NaniteGeometryCollectionSceneProxy_GetDynamicMeshElements"
                          ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar15;
  bVar7 = false;
  bVar10 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  bVar11 = false;
  bVar8 = false;
  FVar13 = FVar20.ComparisonIndex.Value;
  uVar21 = FVar20.Number;
  if ((FVar13.Value != 0) || (uVar21 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_120[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_120[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar10 = true;
      bVar11 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar13.Value;
        local_110.Number = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                   ,0x64a);
        bVar7 = true;
        bVar10 = true;
        bVar11 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_118 = FVar13.Value;
      uStack_114 = uVar21;
      local_100 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar11 = true;
      goto LAB_1463b4229;
    }
  }
  bVar10 = bVar8;
  bVar7 = bVar11;
  bVar11 = false;
  local_100 = local_f8;
  FVar20 = local_f8;
LAB_1463b4229:
  this_00 = local_128;
  bVar8 = bVar9;
  if (((param_2->EngineShowFlags).Collision != 0) && ((this->field_0x7b & 0x20) != 0)) {
    bVar8 = true;
  }
  uVar21 = 0;
  pTVar19 = local_108;
  FVar22 = local_e0;
  if (0 < param_1->ArrayNum) {
    do {
      if ((param_3 >> (uVar21 & 0x1f) & 1) != 0) {
        if ((((this->field_0x7b & 0x20) == 0) ||
            (((((param_2->EngineShowFlags).CollisionPawn == 0 ||
               ((this->CollisionResponse).field0_0x0._s_0.Pawn == '\0')) &&
              (((param_2->EngineShowFlags).CollisionVisibility == 0 ||
               ((this->CollisionResponse).field0_0x0._s_0.Visibility == '\0')))) &&
             ((param_2->EngineShowFlags).Collision == 0)))) ||
           (pUVar3 = this->GeometryCollection, pUVar3 == (UGeometryCollection *)0x0)) {
LAB_1463b42da:
          bVar12 = false;
        }
        else {
          FVar22 = (FName)(pUVar3->GeometryCollection).SharedReferenceCount.ReferenceController;
          bVar9 = true;
          pFVar4 = (pUVar3->GeometryCollection).Object;
          if (FVar22 != (FName)0x0) {
            LOCK();
            *(atomic<int> *)((longlong)FVar22 + 8) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
            UNLOCK();
          }
          if ((pFVar4 == (FGeometryCollection *)0x0) || (bVar12 = AllowDebugViewmodes(), !bVar12))
          goto LAB_1463b42da;
          bVar12 = true;
        }
        if (bVar9) {
          bVar9 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)FVar22);
        }
        if (bVar12) {
          UE::Math::TTransform<double>::SetFromMatrix
                    (&local_a8,(TMatrix<double> *)&this->field_0x110);
          if (bVar8) {
            local_d0._0_8_ = *(undefined8 *)&this->field_0x30;
            local_d0._8_8_ = *(undefined8 *)&this->field_0x38;
            FLinearColor::ToFColorSRGB((FLinearColor *)&local_d0._s_0);
            pTVar5 = (this->GeometryCollection->GeometryCollection).SharedReferenceCount.
                     ReferenceController;
            pFVar4 = (this->GeometryCollection->GeometryCollection).Object;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar4 == (FGeometryCollection *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            GeometryCollectionDebugDraw::DrawWireframe
                      (pFVar4,&local_a8,(FMeshElementCollector *)this_00,uVar21,
                       (FColor *)&local_130[0]._s_0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
          }
          else {
            pFVar16 = ::operator_new(0xe0);
            if (pFVar16 == (FColoredMaterialRenderProxy *)0x0) {
              pFVar16 = (FColoredMaterialRenderProxy *)0x0;
            }
            else {
              FVar13 = FNameEntryId::FromValidEName((EName)&local_118);
              local_c0._s_0.R = (float)*(undefined4 *)&this->field_0x30;
              local_c0._s_0.G = (float)*(undefined4 *)&this->field_0x34;
              local_c0._s_0.B = (float)*(undefined4 *)&this->field_0x38;
              local_c0._s_0.A = (float)*(undefined4 *)&this->field_0x3c;
              local_128.Number = 0;
              local_128.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
              pFVar17 = (FMaterialRenderProxy *)
                        (**(code **)(((GEngine->ShadedLevelColorationUnlitMaterial).field0_0x0.
                                     DebugPtr)->_padding_ + 0x310))();
              pFVar16 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                  (pFVar16,pFVar17,(FLinearColor *)&local_c0._s_0,local_128);
            }
            FMeshElementCollector::RegisterOneFrameMaterialProxy
                      ((FMeshElementCollector *)this_00,(FMaterialRenderProxy *)pFVar16);
            pTVar5 = (this->GeometryCollection->GeometryCollection).SharedReferenceCount.
                     ReferenceController;
            pFVar4 = (this->GeometryCollection->GeometryCollection).Object;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar4 == (FGeometryCollection *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            GeometryCollectionDebugDraw::DrawSolid
                      (pFVar4,&local_a8,(FMeshElementCollector *)this_00,uVar21,
                       (FMaterialRenderProxy *)pFVar16);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            param_2 = local_e8;
          }
        }
        bVar2 = this->field_0x79;
        pFVar18 = FMeshElementCollector::GetPDI((FMeshElementCollector *)this_00,uVar21);
        FPrimitiveSceneProxy::RenderBounds
                  ((FPrimitiveSceneProxy *)this,pFVar18,&param_2->EngineShowFlags,
                   (TBoxSphereBounds<double,double> *)&this->field_0x190,(bVar2 & 6) != 0);
        pTVar19 = local_108;
      }
      uVar21 = uVar21 + 1;
      FVar20 = local_100;
    } while ((int)uVar21 < pTVar19->ArrayNum);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// GetDynamicRayTracingInstances @ 1463b5bd0

void __thiscall
FNaniteGeometryCollectionSceneProxy::GetDynamicRayTracingInstances
          (FNaniteGeometryCollectionSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  FGeometryCollectionSceneProxyBase::GetDynamicRayTracingInstances
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x2b0,param_1,
             (TMatrix<double> *)&this->field_0x110,*(FRHIUniformBuffer **)&this->field_0x258,
             (bool)((byte)this->field_0x82 >> 2 & 1));
  return;
}

// GetLCIs @ 1463b5f20

void __thiscall
FNaniteGeometryCollectionSceneProxy::GetLCIs
          (FNaniteGeometryCollectionSceneProxy *this,
          TArray<FLightCacheInterface_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  ForElementType<FLightCacheInterface_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FLightCacheInterface_*> FVar5;
  FEmptyLightCacheInfo *local_18 [2];
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  local_18[0] = &EmptyLightCacheInfo;
  FVar5 = (ForElementType<FLightCacheInterface_*>)param_1;
  if (FVar1 != (ForElementType<FLightCacheInterface_*>)0x0) {
    FVar5 = FVar1;
  }
  if ((ulonglong)FVar5 <= local_18) {
    FVar5 = (ForElementType<FLightCacheInterface_*>)param_1;
    if (FVar1 != (ForElementType<FLightCacheInterface_*>)0x0) {
      FVar5 = FVar1;
    }
    if ((local_18 < (FEmptyLightCacheInfo **)((longlong)FVar5 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightCacheInterface_*>_>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FLightCacheInterface_*>)0x0) {
    param_1 = (TArray<FLightCacheInterface_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *)FVar1;
  }
  *(FEmptyLightCacheInfo **)((longlong)param_1 + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// GetMemoryFootprint @ 1463b6210

uint __thiscall
FNaniteGeometryCollectionSceneProxy::GetMemoryFootprint(FNaniteGeometryCollectionSceneProxy *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)&this->field_0x104;
  uVar2 = FGeometryCollectionSceneProxyBase::GetAllocatedSize
                    ((FGeometryCollectionSceneProxyBase *)&this->field_0x2b0);
  return uVar2 + iVar1 * 4 + 0x960;
}

// GetPreSkinnedLocalBounds @ 1463b7320

void __thiscall
FNaniteGeometryCollectionSceneProxy::GetPreSkinnedLocalBounds
          (FNaniteGeometryCollectionSceneProxy *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  
  dVar1 = *(double *)&this->field_0x310;
  (param_1->Origin).field0_0x0._s_0.X = *(double *)&this->field_0x308;
  (param_1->Origin).field0_0x0._s_0.Y = dVar1;
  dVar1 = *(double *)&this->field_0x320;
  (param_1->Origin).field0_0x0._s_0.Z = *(double *)&this->field_0x318;
  (param_1->BoxExtent).field0_0x0._s_0.X = dVar1;
  dVar1 = *(double *)&this->field_0x330;
  (param_1->BoxExtent).field0_0x0._s_0.Y = *(double *)&this->field_0x328;
  (param_1->BoxExtent).field0_0x0._s_0.Z = dVar1;
  param_1->SphereRadius = *(double *)&this->field_0x338;
  return;
}

// GetResourceMeshInfo @ 1463b7a80

FResourceMeshInfo * __thiscall
FNaniteGeometryCollectionSceneProxy::GetResourceMeshInfo
          (FNaniteGeometryCollectionSceneProxy *this,FResourceMeshInfo *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FResources *pFVar7;
  FDebugName local_18;
  
  pFVar7 = (((this->GeometryCollection->RenderData).Ptr)->NaniteResourcesPtr).Ptr;
  FDebugName::FDebugName(&local_18);
  uVar1 = pFVar7->NumClusters;
  uVar2 = (pFVar7->HierarchyNodes).ArrayNum;
  uVar3 = pFVar7->NumInputVertices;
  uVar4 = pFVar7->NumInputTriangles;
  iVar5 = *(int *)&this->field_0x290;
  FDebugName::operator=(&local_18,(FName)this->GeometryCollection->_padding_);
  uVar6 = pFVar7->NumResidentClusters;
  (__return_storage_ptr__->SegmentMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SegmentMapping).ArrayNum = 0;
  (__return_storage_ptr__->SegmentMapping).ArrayMax = 0;
  __return_storage_ptr__->NumClusters = uVar1;
  __return_storage_ptr__->NumNodes = uVar2;
  __return_storage_ptr__->NumVertices = uVar3;
  __return_storage_ptr__->NumTriangles = uVar4;
  __return_storage_ptr__->NumMaterials = iVar5 + 1;
  __return_storage_ptr__->bAssembly = false;
  (__return_storage_ptr__->DebugName).Name = local_18.Name;
  (__return_storage_ptr__->DebugName).Number = local_18.Number;
  __return_storage_ptr__->NumSegments = 0;
  __return_storage_ptr__->NumResidentClusters = uVar6;
  return __return_storage_ptr__;
}

// GetResourcePrimitiveInfo @ 1463b7ba0

FResourcePrimitiveInfo * __thiscall
FNaniteGeometryCollectionSceneProxy::GetResourcePrimitiveInfo
          (FNaniteGeometryCollectionSceneProxy *this,FResourcePrimitiveInfo *__return_storage_ptr__)

{
  uint uVar1;
  FResources *pFVar2;
  
  pFVar2 = (((this->GeometryCollection->RenderData).Ptr)->NaniteResourcesPtr).Ptr;
  uVar1 = pFVar2->HierarchyOffset;
  __return_storage_ptr__->ResourceID = pFVar2->RuntimeResourceID;
  __return_storage_ptr__->HierarchyOffset = uVar1;
  __return_storage_ptr__->ImposterIndex = 0xffffffff;
  __return_storage_ptr__->AssemblyTransformOffset = 0xffffffff;
  __return_storage_ptr__->AssemblyTransformCount = 0;
  return __return_storage_ptr__;
}

// GetTypeHash @ 1463b8d60

ulong64 __thiscall
FNaniteGeometryCollectionSceneProxy::GetTypeHash(FNaniteGeometryCollectionSceneProxy *this)

{
  return 0x1551abfa0;
}

// GetViewRelevance @ 1463b8f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FNaniteGeometryCollectionSceneProxy::GetViewRelevance
          (FNaniteGeometryCollectionSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__
          ,FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar3 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  uVar7 = 0;
  if ((!bVar3) || (uVar4 = 4, (param_1->Family->EngineShowFlags).NaniteMeshes == 0)) {
    uVar4 = uVar7;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar4;
  bVar3 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar3 << 3;
  bVar3 = Nanite::GetSupportsCustomDepthRendering();
  if (bVar3) {
    bVar3 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
    uVar4 = 0x20;
    if (!bVar3) goto LAB_1463b8fcc;
  }
  else {
LAB_1463b8fcc:
    uVar4 = uVar7;
  }
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar4;
  uVar4 = *(uint *)&__return_storage_ptr__->field_0x8;
  uVar6 = uVar7;
  if (this->field_0x89 != '\x01') {
    uVar6 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6 | uVar4 & 0xffffdfff | 1;
  if ((this->field_0x7b & 0x20) != 0) {
    if (((param_1->Family->EngineShowFlags).CollisionPawn != 0) &&
       ((this->CollisionResponse).field0_0x0._s_0.Pawn != '\0')) {
      uVar5 = 2;
      goto LAB_1463b903c;
    }
    if (((param_1->Family->EngineShowFlags).CollisionVisibility != 0) &&
       ((this->CollisionResponse).field0_0x0._s_0.Visibility != '\0')) {
      uVar5 = 2;
      goto LAB_1463b903c;
    }
    uVar5 = 2;
    if ((param_1->Family->EngineShowFlags).Collision != 0) goto LAB_1463b903c;
  }
  uVar5 = uVar7;
LAB_1463b903c:
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6 | uVar4 & 0xffffdffd | 1 | uVar5 | 0x80;
  FMaterialRelevance::SetPrimitiveViewRelevance
            ((FMaterialRelevance *)&this->field_0x300,__return_storage_ptr__);
  uVar7 = 0;
  if ((((__return_storage_ptr__->_padding_ & 0x400000000) != 0) &&
      (uVar7 = 0, __return_storage_ptr__->bRenderInMainPass != 0)) &&
     (((this->field_0x68 == '\x02' ||
       (((this->field_0x68 == '\x01' || ((this->field_0x86 & 1) != 0)) ||
        ((char)this->field_0x82 < '\0')))) || ((this->field_0x82 & 0x72) != 0)))) {
    uVar7 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = uVar7 >> 4;
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// HasRayTracingRepresentation @ 1463b9120

bool __thiscall
FNaniteGeometryCollectionSceneProxy::HasRayTracingRepresentation
          (FNaniteGeometryCollectionSceneProxy *this)

{
  return (bool)this->field_0x6b0;
}

// IsRayTracingRelevant @ 1463bcb30

bool __thiscall
FNaniteGeometryCollectionSceneProxy::IsRayTracingRelevant(FNaniteGeometryCollectionSceneProxy *this)

{
  return true;
}

// IsRayTracingStaticRelevant @ 1463bcb50

bool __thiscall
FNaniteGeometryCollectionSceneProxy::IsRayTracingStaticRelevant
          (FNaniteGeometryCollectionSceneProxy *this)

{
  return false;
}

// ResetPreviousTransforms_RenderThread @ 1463c40a0

void __thiscall
FNaniteGeometryCollectionSceneProxy::ResetPreviousTransforms_RenderThread
          (FNaniteGeometryCollectionSceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FAccessTag FVar12;
  FAccessTag FVar13;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  FWriteView local_98;
  
  uVar17 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
  uVar17 = uVar17 >> 0x10 ^ uVar17;
  FVar12.Kind = Writer;
  FVar12.WriterTag = uVar17;
  FInstanceSceneDataBuffers::BeginWriteAccess(&this->InstanceSceneDataBuffersImpl,&local_98,FVar12);
  if (((local_98.InstanceToPrimitiveRelative)->ArrayNum !=
       (local_98.PrevInstanceToPrimitiveRelative)->ArrayNum) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ProxyData.InstanceToPrimitiveRelative.Num() == ProxyData.PrevInstanceToPrimitiveRelative.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                          ,0x61c,L""), bVar15)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar18 = 0;
  if (0 < (local_98.InstanceToPrimitiveRelative)->ArrayNum) {
    lVar19 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar18 < (local_98.InstanceToPrimitiveRelative)->ArrayNum) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar14 = local_98.PrevInstanceToPrimitiveRelative;
      pFVar2 = ((local_98.InstanceToPrimitiveRelative)->AllocatorInstance).Data;
      pFVar1 = pFVar2 + lVar19;
      uVar4 = *(undefined4 *)pFVar1;
      uVar5 = *(undefined4 *)(pFVar1 + 4);
      uVar6 = *(undefined4 *)(pFVar1 + 8);
      uVar7 = *(undefined4 *)(pFVar1 + 0xc);
      uVar8 = *(undefined8 *)(pFVar2 + lVar19 + 0x10);
      uVar9 = *(undefined8 *)(pFVar2 + lVar19 + 0x10 + 8);
      uVar10 = *(undefined8 *)(pFVar2 + lVar19 + 0x20);
      uVar11 = *(undefined8 *)(pFVar2 + lVar19 + 0x20 + 8);
      uVar16 = 0;
      if ((int)uVar18 < (local_98.PrevInstanceToPrimitiveRelative)->ArrayNum) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pTVar14->AllocatorInstance).Data;
      uVar18 = uVar18 + 1;
      pFVar1 = pFVar2 + lVar19;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
      *(undefined8 *)(pFVar2 + lVar19 + 0x10) = uVar8;
      *(undefined8 *)(pFVar2 + lVar19 + 0x10 + 8) = uVar9;
      *(undefined8 *)(pFVar2 + lVar19 + 0x20) = uVar10;
      *(undefined8 *)(pFVar2 + lVar19 + 0x20 + 8) = uVar11;
      lVar19 = lVar19 + 0x30;
    } while ((int)uVar18 < (local_98.InstanceToPrimitiveRelative)->ArrayNum);
  }
  FVar13.Kind = Writer;
  FVar13.WriterTag = uVar17;
  FInstanceSceneDataBuffers::EndWriteAccess(&this->InstanceSceneDataBuffersImpl,FVar13);
  return;
}

// SetDynamicData_RenderThread @ 1463c8c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNaniteGeometryCollectionSceneProxy::SetDynamicData_RenderThread
          (FNaniteGeometryCollectionSceneProxy *this,FRHICommandListBase *param_1,
          FGeometryCollectionDynamicData *param_2,TMatrix<double> *param_3)

{
  FGeometryCollectionSceneProxyBase::SetDynamicData_RenderThread
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x2b0,param_1,param_2);
  UpdateInstanceSceneDataBuffers(this,param_3);
  return;
}

// ShowCollisionMeshes @ 1463c9b30

bool __thiscall
FNaniteGeometryCollectionSceneProxy::ShowCollisionMeshes
          (FNaniteGeometryCollectionSceneProxy *this,FEngineShowFlags *param_1)

{
  undefined1 *puVar1;
  
  if ((this->field_0x7b & 0x20) == 0) {
    return false;
  }
  if (((param_1->CollisionPawn == 0) || ((this->CollisionResponse).field0_0x0._s_0.Pawn == '\0')) &&
     ((param_1->CollisionVisibility == 0 ||
      ((this->CollisionResponse).field0_0x0._s_0.Visibility == '\0')))) {
    return param_1->Collision;
  }
  return true;
}

// UpdateInstanceSceneDataBuffers @ 1463ce460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FNaniteGeometryCollectionSceneProxy::UpdateInstanceSceneDataBuffers
          (FNaniteGeometryCollectionSceneProxy *this,TMatrix<double> *param_1)

{
  FInstanceSceneDataBuffers *this_00;
  FGeometryCollection *pFVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FRenderTransform *pFVar11;
  longlong lVar12;
  FRenderBounds *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_1c8 [32];
  FAccessTag local_190;
  longlong local_180;
  TVector<float>_u_0 local_170;
  float local_164;
  float local_160;
  float local_15c;
  FInstanceSceneDataBuffers *local_158;
  longlong local_150;
  TReferenceControllerBase<1> *local_148;
  FWriteView local_138;
  FRenderBounds local_b8;
  FRenderTransform local_a0;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar14 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  this_00 = &this->InstanceSceneDataBuffersImpl;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  local_190.Kind = Writer;
  local_190.WriterTag = uVar14 >> 0x10 ^ uVar14;
  local_158 = this_00;
  FInstanceSceneDataBuffers::BeginWriteAccess(this_00,&local_138,local_190);
  FInstanceSceneDataBuffers::SetPrimitiveLocalToWorld(this_00,param_1,local_190);
  pFVar1 = (this->GeometryCollection->GeometryCollection).Object;
  local_148 = (this->GeometryCollection->GeometryCollection).SharedReferenceCount.
              ReferenceController;
  if (local_148 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_148->SharedReferenceCount = (atomic<int>)((int)local_148->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar1 == (FGeometryCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pFVar1 == (FGeometryCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pFVar1 == (FGeometryCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar14 = *(uint *)(*(longlong *)&this->field_0x598 + 8);
  uVar8 = (**(code **)(*(longlong *)&pFVar1->TransformToGeometryIndex + 0x60))
                    (&pFVar1->TransformToGeometryIndex);
  if ((uVar14 != uVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TransformCount == TransformToGeometryIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                         ,0x5db,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = (**(code **)(pFVar1->_padding_ + 0x60))(&pFVar1->_padding_);
  if ((uVar14 != uVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TransformCount == TransformChildren.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                         ,0x5dc,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::operator=
            (local_138.PrevInstanceToPrimitiveRelative,local_138.InstanceToPrimitiveRelative);
  this->field_0x7c = this->field_0x7c & 0xef;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  uVar8 = 0;
  (local_138.InstanceToPrimitiveRelative)->ArrayNum = 0;
  if ((local_138.InstanceToPrimitiveRelative)->ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,uVar14,&(local_138.InstanceToPrimitiveRelative)->AllocatorInstance,0,
               &(local_138.InstanceToPrimitiveRelative)->ArrayMax);
  }
  (local_138.InstanceLocalBounds)->ArrayNum = 0;
  if ((local_138.InstanceLocalBounds)->ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar14,&(local_138.InstanceLocalBounds)->AllocatorInstance,0,
               &(local_138.InstanceLocalBounds)->ArrayMax);
  }
  (local_138.InstanceHierarchyOffset)->ArrayNum = 0;
  if ((local_138.InstanceHierarchyOffset)->ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&(local_138.InstanceHierarchyOffset)->AllocatorInstance,0,
               &(local_138.InstanceHierarchyOffset)->ArrayMax);
  }
  (local_138.Flags)->Packed = (local_138.Flags)->Packed | 100;
  local_150 = (longlong)(int)uVar14;
  if (0 < (int)uVar14) {
    local_180 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar8 < *(int *)&(pFVar1->TransformToGeometryIndex).field_0x18) {
        uVar14 = ~uVar8 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar14 = *(uint *)(*(longlong *)&(pFVar1->TransformToGeometryIndex).field_0x10 + local_180 * 4
                        );
      uVar9 = 0;
      if ((int)uVar8 < *(int *)&(pFVar1->SimulationType).field_0x18) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)(*(longlong *)&(pFVar1->SimulationType).field_0x10 + local_180 * 4) == 1) {
        uVar9 = 0;
        if ((int)uVar14 < (this->GeometryNaniteData).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar15 = (this->GeometryNaniteData).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x40;
        plVar2 = *(longlong **)&this->field_0x598;
        uVar14 = 0;
        if ((int)uVar8 < (int)plVar2[1]) {
          uVar14 = ~uVar8 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = FInstanceSceneDataBuffers::ComputeInstanceToPrimitiveRelative
                            (local_158,&local_a0,
                             (TMatrix<float> *)((longlong)(int)uVar8 * 0x40 + *plVar2),local_190);
        iVar10 = (local_138.InstanceToPrimitiveRelative)->ArrayNum;
        if (iVar10 == (local_138.InstanceToPrimitiveRelative)->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x430,&(local_138.InstanceToPrimitiveRelative)->AllocatorInstance,
                              &(local_138.InstanceToPrimitiveRelative)->ArrayMax);
        }
        lVar12 = (longlong)iVar10;
        (local_138.InstanceToPrimitiveRelative)->ArrayNum = iVar10 + 1;
        uVar6 = *(undefined8 *)((longlong)&pFVar11->TransformRows[0].field0_0x0 + 8);
        pFVar3 = ((local_138.InstanceToPrimitiveRelative)->AllocatorInstance).Data;
        *(undefined8 *)(pFVar3 + lVar12 * 0x30) =
             *(undefined8 *)&pFVar11->TransformRows[0].field0_0x0;
        *(undefined8 *)(pFVar3 + lVar12 * 0x30 + 8) = uVar6;
        uVar6 = *(undefined8 *)&pFVar11->TransformRows[2].field0_0x0;
        *(undefined8 *)(pFVar3 + lVar12 * 0x30 + 0x10) =
             *(undefined8 *)((longlong)&pFVar11->TransformRows[1].field0_0x0 + 4);
        *(undefined8 *)(pFVar3 + lVar12 * 0x30 + 0x10 + 8) = uVar6;
        uVar6 = *(undefined8 *)((longlong)&(pFVar11->Origin).field0_0x0 + 4);
        *(undefined8 *)(pFVar3 + lVar12 * 0x30 + 0x20) =
             *(undefined8 *)((longlong)&pFVar11->TransformRows[2].field0_0x0 + 8);
        *(undefined8 *)(pFVar3 + lVar12 * 0x30 + 0x20 + 8) = uVar6;
        local_170._s_0.X = (float)(*(double *)pFVar15 - *(double *)(pFVar15 + 0x18));
        local_170._s_0.Y = (float)(*(double *)(pFVar15 + 8) - *(double *)(pFVar15 + 0x20));
        local_170._s_0.Z = (float)(*(double *)(pFVar15 + 0x10) - *(double *)(pFVar15 + 0x28));
        local_164 = (float)(*(double *)pFVar15 + *(double *)(pFVar15 + 0x18));
        local_160 = (float)(*(double *)(pFVar15 + 8) + *(double *)(pFVar15 + 0x20));
        local_15c = (float)(*(double *)(pFVar15 + 0x10) + *(double *)(pFVar15 + 0x28));
        pFVar13 = FPrimitiveSceneProxy::PadInstanceLocalBounds
                            ((FPrimitiveSceneProxy *)this,&local_b8,(FRenderBounds *)&local_170._s_0
                            );
        iVar10 = (local_138.InstanceLocalBounds)->ArrayNum;
        if (iVar10 == (local_138.InstanceLocalBounds)->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&(local_138.InstanceLocalBounds)->AllocatorInstance,
                              &(local_138.InstanceLocalBounds)->ArrayMax);
        }
        (local_138.InstanceLocalBounds)->ArrayNum = iVar10 + 1;
        uVar6 = *(undefined8 *)((longlong)&(pFVar13->Min).field0_0x0 + 8);
        pFVar4 = ((local_138.InstanceLocalBounds)->AllocatorInstance).Data;
        pFVar3 = pFVar4 + (longlong)iVar10 * 0x18;
        *(undefined8 *)pFVar3 = *(undefined8 *)&(pFVar13->Min).field0_0x0;
        *(undefined8 *)(pFVar3 + 8) = uVar6;
        *(undefined8 *)(pFVar4 + (longlong)iVar10 * 0x18 + 0x10) =
             *(undefined8 *)((longlong)&(pFVar13->Max).field0_0x0 + 4);
        iVar10 = (local_138.InstanceHierarchyOffset)->ArrayNum;
        if (iVar10 == (local_138.InstanceHierarchyOffset)->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(local_138.InstanceHierarchyOffset)->AllocatorInstance,
                              &(local_138.InstanceHierarchyOffset)->ArrayMax);
        }
        (local_138.InstanceHierarchyOffset)->ArrayNum = iVar10 + 1;
        *(undefined4 *)
         (((local_138.InstanceHierarchyOffset)->AllocatorInstance).Data + (longlong)iVar10 * 4) =
             *(undefined4 *)(pFVar15 + 0x38);
      }
      uVar8 = uVar8 + 1;
      local_180 = local_180 + 1;
    } while (local_180 < local_150);
  }
  if ((local_138.PrevInstanceToPrimitiveRelative)->ArrayNum !=
      (local_138.InstanceToPrimitiveRelative)->ArrayNum) {
    TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::operator=
              (local_138.PrevInstanceToPrimitiveRelative,local_138.InstanceToPrimitiveRelative);
    this->field_0x7c = this->field_0x7c | 0x10;
  }
  FInstanceSceneDataBuffers::EndWriteAccess(&this->InstanceSceneDataBuffersImpl,local_190);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_148);
  return;
}

