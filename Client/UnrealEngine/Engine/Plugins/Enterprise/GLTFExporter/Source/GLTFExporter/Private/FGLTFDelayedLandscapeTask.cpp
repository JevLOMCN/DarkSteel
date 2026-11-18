// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// FGLTFDelayedLandscapeTask @ 14e5d1080

FGLTFDelayedLandscapeTask * __thiscall
FGLTFDelayedLandscapeTask::FGLTFDelayedLandscapeTask
          (FGLTFDelayedLandscapeTask *this,FGLTFConvertBuilder *param_1,ULandscapeComponent *param_2
          ,FGLTFJsonMesh *param_3,UMaterialInterface *param_4)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FGLTFDelayedLandscapeTask__6B_;
  this->LandscapeMaterial = param_4;
  this->Builder = param_1;
  this->LandscapeComponent = param_2;
  this->JsonMesh = param_3;
  return this;
}

// GetName @ 14e5f7b10

FString * __thiscall
FGLTFDelayedLandscapeTask::GetName(FGLTFDelayedLandscapeTask *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this->LandscapeComponent->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Process @ 14e603570

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGLTFDelayedLandscapeTask::Process(FGLTFDelayedLandscapeTask *this)

{
  int iVar1;
  FScriptContainerElement FVar2;
  FGLTFJsonMesh *pFVar3;
  FScriptContainerElement *pFVar4;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_> *this_00;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_> *this_01;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> *this_02;
  FGLTFConvertBuilder *pFVar5;
  UMaterialInterface *pUVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  UClass *pUVar19;
  TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> *pTVar20;
  ALandscapeProxy *pAVar21;
  FGLTFJsonAccessor *pFVar22;
  FString *pFVar23;
  ALandscapeProxy *pAVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  FGLTFConvertBuilder **ppFVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ALandscapeProxy *pAVar35;
  ALandscapeProxy *pAVar36;
  longlong lVar37;
  int iVar38;
  ALandscapeProxy *pAVar39;
  ALandscapeProxy *pAVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  bool local_res10 [8];
  FColor_u_0 local_res18;
  int local_res20;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  uint local_298;
  int local_294;
  int local_290;
  uint local_28c;
  int local_288;
  int local_284;
  ForAnyElementType local_280;
  int local_278 [2];
  ForAnyElementType local_270;
  int local_268 [2];
  ForAnyElementType local_260;
  int local_258 [2];
  ForAnyElementType local_250;
  int local_248 [2];
  FString local_240;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_230;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_220;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_210;
  FMeshAttributesArray<UE::Math::TVector<float>_> local_200;
  FMeshAttributesArray<UE::Math::TVector2<float>_> local_1f0;
  FMeshAttributesArray<int> local_1e0;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  float local_1c0;
  float fStack_1bc;
  FScriptContainerElement *local_1b8;
  undefined1 local_1b0 [4];
  FName local_1ac;
  UMaterialInterface *local_1a0;
  FString local_198;
  FMeshAttributesArray<int> local_188;
  FGLTFLandscapeComponentDataInterface local_178;
  FString local_e8 [10];
  
  pAVar24 = (ALandscapeProxy *)0x0;
  pAVar21 = (ALandscapeProxy *)this->LandscapeComponent->_padding_;
  if (pAVar21 == (ALandscapeProxy *)0x0) {
LAB_14e6035c4:
    pAVar21 = pAVar24;
  }
  else {
    pUVar19 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
    iVar14 = (int)pUVar19->_padding_;
    if ((*(int *)(pAVar21->_padding_ + 0x38) < iVar14) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pAVar21->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar19->_padding_)) goto LAB_14e6035c4;
  }
  local_1ac = (FName)this->LandscapeComponent->_padding_;
  ::FName::ToString(&local_1ac,&local_240);
  pFVar3 = this->JsonMesh;
  pFVar23 = &pFVar3->Name;
  if (pFVar23 != &local_240) {
    pFVar4 = (pFVar23->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar23->Data).AllocatorInstance.Data = local_240.Data.AllocatorInstance.Data;
    local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Name).Data.ArrayNum = local_240.Data.ArrayNum;
    (pFVar3->Name).Data.ArrayMax = local_240.Data.ArrayMax;
    local_240.Data.ArrayNum = 0;
    local_240.Data.ArrayMax = 0;
  }
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  local_res20 = pAVar21->ComponentSizeQuads;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  uVar30 = (local_res20 + 1) * (local_res20 + 1);
  local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.ArrayNum = 0;
  local_230.ArrayMax = 0;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_258[0] = 0;
  local_258[1] = 0;
  uVar15 = local_res20 * local_res20 * 6;
  local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.ArrayNum = 0;
  local_210.ArrayMax = 0;
  local_270.Data = (FScriptContainerElement *)0x0;
  local_268[0] = 0;
  local_268[1] = 0;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278[0] = 0;
  local_278[1] = 0;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  uVar31 = 0;
  if (0 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&local_2a8,0,(int *)((longlong)&local_2a0 + 4));
  }
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_230,uVar30,Default);
  if (local_258[0] < (int)uVar30) {
    iVar27 = uVar30 - local_258[0];
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar27,&local_260,local_258,local_258 + 1);
    memset(local_260.Data + (longlong)iVar14 * 4,0,(longlong)iVar27 << 2);
  }
  else {
    if ((int)uVar30 < 0) goto LAB_14e6048b4;
    if ((int)uVar30 < local_258[0]) {
      uVar28 = local_258[0] - uVar30;
      uVar15 = uVar31;
      if ((int)(uVar28 + uVar30) <= local_258[0]) {
        uVar15 = ~uVar28 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (uVar28 != 0) {
        iVar27 = (local_258[0] - uVar28) - uVar30;
        iVar14 = local_258[0];
        if (iVar27 != 0) {
          memmove(local_260.Data + (longlong)(int)uVar30 * 4,
                  local_260.Data + (longlong)(int)uVar30 * 4 + (longlong)(int)uVar28 * 4,
                  (longlong)iVar27 << 2);
          iVar14 = local_258[0];
        }
        local_258[0] = iVar14 - uVar28;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_260,iVar14 - uVar28,local_258 + 1);
      }
    }
  }
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_210,uVar30,Default);
  uVar15 = 0;
  if (local_268[0] < (int)uVar30) {
    iVar27 = uVar30 - local_268[0];
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,0x10,iVar27,&local_270,local_268,local_268 + 1);
    memset(local_270.Data + (longlong)iVar14 * 0x10,0,(longlong)iVar27 << 4);
  }
  else {
    if ((int)uVar30 < 0) goto LAB_14e6048b4;
    if ((int)uVar30 < local_268[0]) {
      uVar17 = local_268[0] - uVar30;
      uVar28 = uVar15;
      if ((int)(uVar17 + uVar30) <= local_268[0]) {
        uVar28 = ~uVar17 >> 0x1f;
      }
      if (uVar28 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (uVar17 != 0) {
        iVar27 = (local_268[0] - uVar17) - uVar30;
        iVar14 = local_268[0];
        if (iVar27 != 0) {
          memmove(local_270.Data + (longlong)(int)uVar30 * 0x10,
                  local_270.Data + (longlong)(int)uVar30 * 0x10 + (longlong)(int)uVar17 * 0x10,
                  (longlong)iVar27 << 4);
          iVar14 = local_268[0];
        }
        local_268[0] = iVar14 - uVar17;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,&local_270,iVar14 - uVar17,local_268 + 1);
      }
    }
  }
  if (local_278[0] < (int)uVar30) {
    iVar27 = uVar30 - local_278[0];
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,iVar27,&local_280,local_278,local_278 + 1);
    memset(local_280.Data + (longlong)iVar14 * 8,0,(longlong)iVar27 << 3);
  }
  else {
    if ((int)uVar30 < 0) goto LAB_14e6048b4;
    if ((int)uVar30 < local_278[0]) {
      uVar17 = local_278[0] - uVar30;
      uVar28 = uVar15;
      if ((int)(uVar17 + uVar30) <= local_278[0]) {
        uVar28 = ~uVar17 >> 0x1f;
      }
      if (uVar28 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (uVar17 != 0) {
        iVar27 = (local_278[0] - uVar17) - uVar30;
        iVar14 = local_278[0];
        if (iVar27 != 0) {
          memmove(local_280.Data + (longlong)(int)uVar30 * 8,
                  local_280.Data + (longlong)(int)uVar30 * 8 + (longlong)(int)uVar17 * 8,
                  (longlong)iVar27 << 3);
          iVar14 = local_278[0];
        }
        local_278[0] = iVar14 - uVar17;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&local_280,iVar14 - uVar17,local_278 + 1);
      }
    }
  }
  pFVar3 = this->JsonMesh;
  if (((pFVar3->Primitives).ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_1b8 = (pFVar3->Primitives).AllocatorInstance.Data;
  local_250.Data = (FScriptContainerElement *)0x0;
  local_248[0] = 0;
  local_248[1] = 0;
  if ((int)uVar30 < 1) {
    if ((int)uVar30 < 0) {
LAB_14e6048b4:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
  }
  else {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,uVar30,&local_250,local_248,local_248 + 1);
    memset(local_250.Data + iVar14,0,(longlong)(int)uVar30);
  }
  ALandscapeProxy::GetSectionBase(pAVar21);
  ALandscapeProxy::GetSectionBase(pAVar21);
  FGLTFLandscapeComponentDataInterface::FGLTFLandscapeComponentDataInterface
            (&local_178,this->LandscapeComponent,0);
  local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220.ArrayNum = 0;
  local_220.ArrayMax = 0;
  pTVar20 = ULandscapeComponent::GetWeightmapLayerAllocations(this->LandscapeComponent,false);
  iVar14 = pTVar20->ArrayNum;
  pAVar21 = pAVar24;
  pAVar36 = pAVar24;
  if (0 < iVar14) {
    do {
      uVar17 = (uint)pAVar21;
      uVar28 = uVar31;
      if ((int)uVar17 < iVar14) {
        uVar28 = ~uVar17 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (pTVar20->AllocatorInstance).Data;
      ::FName::ToString((FName *)(*(longlong *)((longlong)&pAVar36->_padding_ + (longlong)pFVar4) +
                                 0x28),&local_198);
      FVar25.Data = (FScriptContainerElement *)L"";
      if (local_198.Data.ArrayNum != 0) {
        FVar25.Data = local_198.Data.AllocatorInstance.Data;
      }
      iVar14 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"__LANDSCAPE_VISIBILITY__");
      if (iVar14 == 0) {
        FGLTFLandscapeComponentDataInterface::GetWeightmapTextureData
                  (&local_178,
                   *(ULandscapeLayerInfoObject **)((longlong)&pAVar36->_padding_ + (longlong)pFVar4)
                   ,&local_220,false,false);
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      iVar14 = pTVar20->ArrayNum;
      pAVar21 = (ALandscapeProxy *)(ulonglong)(uVar17 + 1);
      pAVar36 = (ALandscapeProxy *)&pAVar36->_padding_;
    } while ((int)(uVar17 + 1) < iVar14);
  }
  uVar28 = 0;
  pAVar21 = pAVar24;
  pAVar36 = pAVar24;
  pAVar40 = pAVar24;
  if ((local_220.ArrayNum < 1) || (pAVar35 = pAVar24, pAVar39 = pAVar24, (int)uVar30 < 1)) {
    fVar8 = __real_3c008081;
    fVar9 = __real_3c000000;
    fVar10 = __real_47000000;
    fVar11 = __real_3f800000;
    dVar12 = __real_3ff0000000000000;
    if ((int)uVar30 < 1) goto LAB_14e60409e;
  }
  else {
    do {
      uVar32 = (uint)pAVar35;
      iVar14 = local_178.ComponentSubsectionSizeVerts + -1;
      iVar27 = (int)uVar32 % local_178.ComponentSizeVerts + -1;
      uVar33 = iVar27 / iVar14;
      iVar16 = (int)uVar32 / local_178.ComponentSizeVerts + -1;
      uVar17 = iVar16 / iVar14;
      uVar34 = uVar15;
      if (-1 < (int)uVar33) {
        uVar34 = uVar33;
      }
      uVar26 = iVar16 % iVar14 + 1;
      if ((int)uVar17 < 0) {
        uVar26 = uVar31;
        uVar17 = uVar28;
      }
      uVar17 = ((uVar17 * local_178.ComponentSubsectionSizeVerts + uVar26) *
                local_178.ComponentNumSubsections + uVar34) * local_178.ComponentSubsectionSizeVerts
      ;
      if (-1 < (int)uVar33) {
        uVar17 = uVar17 + 1 + iVar27 % iVar14;
      }
      uVar34 = uVar28;
      if ((int)uVar17 < local_220.ArrayNum) {
        uVar34 = ~uVar17 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar2 = local_220.AllocatorInstance.Data[(int)uVar17];
      uVar17 = uVar28;
      if ((int)uVar32 < local_248[0]) {
        uVar17 = ~uVar32 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pAVar35 = (ALandscapeProxy *)(ulonglong)(uVar32 + 1);
      local_250.Data[(longlong)&pAVar39->_padding_] = FVar2;
      pAVar39 = (ALandscapeProxy *)((longlong)&pAVar39->_padding_ + 1);
      fVar8 = __real_3c008081;
      fVar9 = __real_3c000000;
      fVar10 = __real_47000000;
      fVar11 = __real_3f800000;
      dVar12 = __real_3ff0000000000000;
    } while ((longlong)pAVar39 < (longlong)(int)uVar30);
  }
  do {
    uVar17 = (uint)pAVar21;
    if (local_178.HeightMipData == (FColor *)0x0) {
      local_res18.Bits = 0;
      pAVar21 = pAVar24;
    }
    else {
      iVar27 = (int)uVar17 % local_178.ComponentSizeVerts + -1;
      iVar14 = local_178.ComponentSubsectionSizeVerts + -1;
      uVar32 = iVar27 / iVar14;
      iVar16 = (int)uVar17 / local_178.ComponentSizeVerts + -1;
      uVar34 = iVar16 / iVar14;
      uVar33 = uVar28;
      if (-1 < (int)uVar32) {
        uVar33 = uVar32;
      }
      uVar26 = iVar16 % iVar14 + 1;
      if ((int)uVar34 < 0) {
        uVar26 = uVar31;
        uVar34 = uVar28;
      }
      iVar16 = (uVar34 * local_178.ComponentSubsectionSizeVerts + uVar26 +
               local_178.HeightmapComponentOffsetY) * local_178.HeightmapStride +
               local_178.ComponentSubsectionSizeVerts * uVar33;
      if (-1 < (int)uVar32) {
        iVar16 = iVar16 + 1 + iVar27 % iVar14;
      }
      local_res18 = (FColor_u_0)
                    local_178.HeightMipData[iVar16 + local_178.HeightmapComponentOffsetX].field0_0x0
                    .Bits;
      pAVar21 = (ALandscapeProxy *)(ulonglong)(uint)local_res18;
    }
    uVar34 = ~uVar17 >> 0x1f;
    fVar41 = (float)(local_res18.Bits & 0xff) * fVar8 - fVar11;
    dVar44 = (double)fVar41;
    fVar42 = (float)(int)((ulonglong)pAVar21 >> 0x18) * fVar8 - fVar11;
    dVar43 = (double)fVar42;
    local_1d0 = (float)local_178.ComponentSizeQuads / (float)(local_178.ComponentSizeVerts + -1);
    fStack_1cc = (float)((int)uVar17 / local_178.ComponentSizeVerts) * local_1d0;
    local_1d0 = (float)((int)uVar17 % local_178.ComponentSizeVerts) * local_1d0;
    local_1c8 = ((float)(((uint)((ulonglong)pAVar21 >> 0x10) & 0xff) << 8 |
                        (uint)pAVar21 >> 8 & 0xff) - fVar10) * fVar9;
    local_1c0 = (float)(local_178.Component)->SectionBaseX + local_1d0;
    dVar43 = dVar12 - (dVar43 * dVar43 + dVar44 * dVar44);
    if (dVar43 <= 0.0) {
      dVar43 = 0.0;
    }
    uVar33 = uVar28;
    if ((int)uVar17 < local_230.ArrayNum) {
      uVar33 = uVar34;
    }
    fStack_1bc = (float)(local_178.Component)->SectionBaseY + fStack_1cc;
    if ((uVar33 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(ulonglong *)(local_230.AllocatorInstance.Data + (longlong)&pAVar36->_padding_) =
         CONCAT44(fStack_1cc,local_1d0);
    *(float *)((longlong)&pAVar36->_padding_ + local_230.AllocatorInstance.Data) = local_1c8;
    uVar33 = uVar15;
    if ((int)uVar17 < local_210.ArrayNum) {
      uVar33 = uVar34;
    }
    if ((uVar33 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(ulonglong *)(local_210.AllocatorInstance.Data + (longlong)pAVar36) = CONCAT44(fVar42,fVar41);
    *(float *)(local_210.AllocatorInstance.Data + 8 + (longlong)pAVar36) = (float)SQRT(dVar43);
    uVar33 = uVar15;
    if ((int)uVar17 < local_278[0]) {
      uVar33 = uVar34;
    }
    if ((uVar33 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(ulonglong *)(local_280.Data + (longlong)pAVar40 * 8) = CONCAT44(fStack_1bc,local_1c0);
    pAVar40 = (ALandscapeProxy *)((longlong)&pAVar40->_padding_ + 1);
    pAVar21 = (ALandscapeProxy *)(ulonglong)(uVar17 + 1);
    pAVar36 = (ALandscapeProxy *)((longlong)&pAVar36->_padding_ + 4);
  } while ((longlong)pAVar40 < (longlong)(int)uVar30);
LAB_14e60409e:
  iVar14 = local_res20;
  if (0 < local_res20) {
    iVar27 = local_res20 + 1;
    local_res18.Bits = 0;
    pAVar21 = pAVar24;
    pAVar36 = pAVar24;
    do {
      iVar38 = (int)pAVar36;
      lVar37 = (longlong)(iVar38 * iVar27);
      iVar16 = -(iVar38 * iVar27);
      do {
        uVar30 = (uint)pAVar21;
        uVar15 = uVar28;
        if ((int)uVar30 < local_248[0]) {
          uVar15 = ~uVar30 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((byte)local_250.Data[lVar37] < 0xaa) {
          local_298 = uVar30;
          if (((local_2a8.Data <= (FScriptContainerElement *)&local_298) &&
              ((FScriptContainerElement *)&local_298 <
               local_2a8.Data + (longlong)local_2a0._4_4_ * 4)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar18 = (int)local_2a0;
          if ((int)local_2a0 == local_2a0._4_4_) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
          }
          iVar1 = iVar18 + 1;
          *(uint *)(local_2a8.Data + (longlong)iVar18 * 4) = local_298;
          local_294 = (iVar38 + 1) * iVar27 + 1 + iVar16 + uVar30;
          local_2a0._0_4_ = iVar1;
          if (((local_2a8.Data <= (FScriptContainerElement *)&local_294) &&
              ((FScriptContainerElement *)&local_294 <
               local_2a8.Data + (longlong)local_2a0._4_4_ * 4)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((int)local_2a0 == local_2a0._4_4_) {
            local_2a0._0_4_ =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
          }
          iVar18 = (int)local_2a0 + 1;
          *(int *)(local_2a8.Data + (longlong)(int)local_2a0 * 4) = local_294;
          local_290 = uVar30 + 1;
          local_2a0._0_4_ = iVar18;
          if (((local_2a8.Data <= (FScriptContainerElement *)&local_290) &&
              ((FScriptContainerElement *)&local_290 <
               local_2a8.Data + (longlong)local_2a0._4_4_ * 4)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((int)local_2a0 == local_2a0._4_4_) {
            local_2a0._0_4_ =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
          }
          iVar18 = (int)local_2a0 + 1;
          *(int *)(local_2a8.Data + (longlong)(int)local_2a0 * 4) = local_290;
          local_28c = uVar30;
          local_2a0._0_4_ = iVar18;
          if (((local_2a8.Data <= (FScriptContainerElement *)&local_28c) &&
              ((FScriptContainerElement *)&local_28c <
               local_2a8.Data + (longlong)local_2a0._4_4_ * 4)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((int)local_2a0 == local_2a0._4_4_) {
            local_2a0._0_4_ =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
          }
          iVar18 = (int)local_2a0 + 1;
          *(uint *)(local_2a8.Data + (longlong)(int)local_2a0 * 4) = local_28c;
          local_288 = (iVar38 + 1) * iVar27 + iVar16 + uVar30;
          local_2a0._0_4_ = iVar18;
          if (((local_2a8.Data <= (FScriptContainerElement *)&local_288) &&
              ((FScriptContainerElement *)&local_288 <
               local_2a8.Data + (longlong)local_2a0._4_4_ * 4)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((int)local_2a0 == local_2a0._4_4_) {
            local_2a0._0_4_ =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
          }
          iVar18 = (int)local_2a0 + 1;
          *(int *)(local_2a8.Data + (longlong)(int)local_2a0 * 4) = local_288;
          local_284 = (iVar38 + 1) * iVar27 + 1 + iVar16 + uVar30;
          local_2a0._0_4_ = iVar18;
          if (((local_2a8.Data <= (FScriptContainerElement *)&local_284) &&
              ((FScriptContainerElement *)&local_284 <
               local_2a8.Data + (longlong)local_2a0._4_4_ * 4)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar18 = (int)local_2a0;
          if ((int)local_2a0 == local_2a0._4_4_) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
          }
          local_2a0 = CONCAT44(local_2a0._4_4_,iVar18 + 1);
          *(int *)(local_2a8.Data + (longlong)iVar18 * 4) = local_284;
        }
        pAVar21 = (ALandscapeProxy *)(ulonglong)(uVar30 + 1);
        lVar37 = lVar37 + 1;
      } while ((int)(iVar16 + uVar30 + 1) < iVar14);
      pAVar36 = (ALandscapeProxy *)(ulonglong)(iVar38 + 1U);
      local_res18.Bits = local_res18.Bits + iVar27;
      pAVar21 = (ALandscapeProxy *)(ulonglong)local_res18.Bits;
    } while ((int)(iVar38 + 1U) < iVar14);
  }
  FVar25.Data = local_230.AllocatorInstance.Data;
  if ((int)local_2a0 != 0) {
    lVar37 = (longlong)local_230.ArrayNum;
    ppFVar29 = &this->Builder;
    local_200._0_8_ = (FScriptContainerElement *)0x0;
    local_200._8_4_ = local_230.ArrayNum;
    this_00 = ((*ppFVar29)->PositionBufferConverterRaw).Ptr;
    if (local_230.ArrayNum == 0) {
      local_200._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_230.ArrayNum,0,(ForAnyElementType *)&local_200,local_230.ArrayNum,
                 (int *)((longlong)&local_200 + 0xc));
      memcpy((void *)local_200._0_8_,FVar25.Data,lVar37 * 0xc);
    }
    pFVar22 = TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>::
              GetOrAdd(this_00,&local_200);
    pFVar4 = local_1b8;
    local_res10[0] = true;
    *(FGLTFJsonAccessor **)(local_1b8 + 0x10) = pFVar22;
    pFVar22 = FGLTFConvertBuilder::AddUniqueNormalAccessor
                        (*ppFVar29,(FMeshAttributesArray<UE::Math::TVector<float>_> *)&local_210,
                         local_res10);
    *(FGLTFJsonAccessor **)(pFVar4 + 0x20) = pFVar22;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,(ForAnyElementType *)(pFVar4 + 0x30),(int *)(pFVar4 + 0x38),
               (int *)(pFVar4 + 0x3c));
    FVar25.Data = local_280.Data;
    lVar37 = (longlong)local_278[0];
    local_1f0._0_8_ = (FScriptContainerElement *)0x0;
    local_1f0._8_4_ = local_278[0];
    this_01 = ((*ppFVar29)->UVBufferConverterRaw).Ptr;
    if (local_278[0] == 0) {
      local_1f0._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_278[0],0,(ForAnyElementType *)&local_1f0,local_278[0],
                 (int *)((longlong)&local_1f0 + 0xc));
      memcpy((void *)local_1f0._0_8_,FVar25.Data,lVar37 << 3);
    }
    pFVar22 = TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>
              ::GetOrAdd(this_01,&local_1f0);
    if ((*(int *)(pFVar4 + 0x38) < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(FGLTFJsonAccessor **)*(FScriptContainerElement **)&pFVar4[0x30].field_0x0 = pFVar22;
    this_02 = ((*ppFVar29)->IndexBufferConverterRaw).Ptr;
    pFVar23 = ::FString::FString(local_e8,&this->JsonMesh->Name);
    FVar25.Data = local_2a8.Data;
    lVar37 = (longlong)(int)local_2a0;
    local_1e0._0_8_ = (FScriptContainerElement *)0x0;
    local_1e0._8_4_ = (int)local_2a0;
    if ((int)local_2a0 == 0) {
      local_1e0._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_2a0,0,(ForAnyElementType *)&local_1e0,(int)local_2a0,
                 (int *)((longlong)&local_1e0 + 0xc));
      memcpy((void *)local_1e0._0_8_,FVar25.Data,lVar37 << 2);
    }
    pFVar22 = TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>::GetOrAdd
                        (this_02,&local_1e0,pFVar23);
    pFVar4 = local_1b8;
    *(FGLTFJsonAccessor **)(local_1b8 + 0x60) = pFVar22;
    pFVar5 = *ppFVar29;
    pUVar6 = this->LandscapeMaterial;
    if (pUVar6 != (UMaterialInterface *)0x0) {
      local_1a0 = pUVar6;
      TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UMaterialInterface_const_*_const_&>
                ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                  *)&pFVar5->_padding_,(UMaterialInterface **)local_1b0,(bool *)&local_1a0);
      local_188._0_8_ = 0;
      local_188._8_8_ = 0;
      pAVar24 = (ALandscapeProxy *)
                TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
                ::GetOrAdd((pFVar5->MaterialConverter).Ptr,pUVar6,(FGLTFMeshData *)0x0,&local_188);
    }
    *(ALandscapeProxy **)(pFVar4 + 0x68) = pAVar24;
  }
  if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.AllocatorInstance.Data);
  }
  if (local_178.XYOffsetMipDataSource.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.XYOffsetMipDataSource.AllocatorInstance.Data);
  }
  if (local_178.HeightMipDataSource.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.HeightMipDataSource.AllocatorInstance.Data);
  }
  if (local_250.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data);
  }
  if (local_280.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data);
  }
  if (local_270.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data);
  }
  if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.AllocatorInstance.Data);
  }
  if (local_260.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data);
  }
  if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.AllocatorInstance.Data);
  }
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  return;
}

