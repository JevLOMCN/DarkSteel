// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 204

// PrecachePSOs @ 1479de790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
UMaterialInterface::PrecachePSOs
          (UMaterialInterface *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,TArrayView<FVertexFactoryType_const_*_const,int> *param_1,
          FPSOPrecacheParams *param_2,EPSOPrecachePriority param_3,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStackY_c8 [32];
  ForElementType<FPSOPrecacheVertexFactoryData> local_80;
  int local_58 [2];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar8 = param_1->ArrayNum;
  local_80.SecondaryData = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
  local_58[0] = 0;
  local_58[1] = 2;
  if ((int)uVar8 < 1) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
  }
  else {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                      (0x10,8,uVar8,&local_80,local_58,local_58 + 1);
    FVar7 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_80;
    if (local_80.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
      FVar7 = local_80.SecondaryData;
    }
    DefaultConstructItems<FPSOPrecacheVertexFactoryData,int>
              ((void *)((longlong)iVar4 * 0x10 + (longlong)FVar7),uVar8);
  }
  iVar4 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar4) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar4) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar2)();
        return pTVar6;
      }
      uVar1 = *(undefined8 *)(lVar9 + (longlong)param_1->DataPtr);
      uVar5 = 0;
      if ((int)uVar8 < local_58[0]) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar2)();
        return pTVar6;
      }
      FVar7 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_80;
      if (local_80.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FVar7 = local_80.SecondaryData;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
      *(undefined8 *)(lVar10 + (longlong)FVar7) = uVar1;
      lVar10 = lVar10 + 0x10;
      iVar4 = param_1->ArrayNum;
    } while ((int)uVar8 < iVar4);
  }
  (**(code **)(this->_padding_ + 0x3b0))(this,__return_storage_ptr__,&local_80,param_2);
  if (local_80.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
    FMemory::Free((void *)local_80.SecondaryData);
  }
  return __return_storage_ptr__;
}

// AssertDefaultMaterialsExist @ 147ef5590

void __cdecl UMaterialInterface::AssertDefaultMaterialsExist(void)

{
  code *pcVar1;
  bool bVar2;
  
  if ((!GIsInitialLoad) || (!GEventDrivenLoaderEnabled)) {
    if (GDefaultMaterials[0] == (UMaterial *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GDefaultMaterials[Domain] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x314,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (GDefaultMaterials[1] == (UMaterial *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GDefaultMaterials[Domain] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x314,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (GDefaultMaterials[2] == (UMaterial *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GDefaultMaterials[Domain] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x314,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (GDefaultMaterials[3] == (UMaterial *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GDefaultMaterials[Domain] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x314,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (GDefaultMaterials[4] == (UMaterial *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GDefaultMaterials[Domain] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x314,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (GDefaultMaterials[5] == (UMaterial *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GDefaultMaterials[Domain] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x314,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (GDefaultMaterials[6] == (UMaterial *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GDefaultMaterials[Domain] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x314,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// AssertDefaultMaterialsPostLoaded @ 147ef5710

void __cdecl UMaterialInterface::AssertDefaultMaterialsPostLoaded(void)

{
  code *pcVar1;
  bool bVar2;
  UMaterial **ppUVar3;
  
  if ((!GIsInitialLoad) || (!GEventDrivenLoaderEnabled)) {
    ppUVar3 = GDefaultMaterials;
    do {
      if ((*ppUVar3 == (UMaterial *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GDefaultMaterials[Domain] != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                             ,0x321,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((((uint)(*ppUVar3)->_padding_ >> 0xc & 1) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!GDefaultMaterials[Domain]->HasAnyFlags(RF_NeedPostLoad)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                             ,0x322,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ppUVar3 = ppUVar3 + 1;
    } while ((longlong)ppUVar3 < 0x155214930);
  }
  return;
}

// GetCastShadowAsMasked @ 147efa710

bool __thiscall UMaterialInterface::GetCastShadowAsMasked(UMaterialInterface *this)

{
  return (this->LightmassSettings).bCastShadowAsMasked;
}

// GetDiffuseBoost @ 147efacb0

float __thiscall UMaterialInterface::GetDiffuseBoost(UMaterialInterface *this)

{
  return (this->LightmassSettings).DiffuseBoost;
}

// GetEmissiveBoost @ 147efae40

float __thiscall UMaterialInterface::GetEmissiveBoost(UMaterialInterface *this)

{
  return (this->LightmassSettings).EmissiveBoost;
}

// GetExportResolutionScale @ 147efae50

float __thiscall UMaterialInterface::GetExportResolutionScale(UMaterialInterface *this)

{
  float fVar1;
  
  fVar1 = (this->LightmassSettings).ExportResolutionScale;
  if (__real_41200000 <= fVar1) {
    fVar1 = __real_41200000;
  }
  if (fVar1 <= __real_3dcccccd) {
    fVar1 = __real_3dcccccd;
  }
  return fVar1;
}

// InitDefaultMaterials @ 147effc40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UMaterialInterface::InitDefaultMaterials(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UObject *pUVar6;
  FUObjectItem *this;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  FString local_d8;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FString local_a8;
  FString local_98;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FScopedBootTiming local_48;
  size_t sVar5;
  
  if (!bDefaultMaterialInitialized) {
    bVar10 = CpuChannel->Enabled < 0;
    if (!bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId597,"UMaterialInterface::InitDefaultMaterials",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                 ,0x255);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId597);
    }
    FScopedBootTiming::FScopedBootTiming(&local_48,"UMaterialInterface::InitDefaultMaterials");
    bVar2 = IsInGameThread();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                           ,0x256,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = IsInGameThread();
    if (bVar2) {
      RecursionLevel = RecursionLevel + 1;
      pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar4);
      }
      pUVar4 = UMaterial::StaticClass();
      if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar4);
      }
      lVar7 = 0;
      lVar9 = 7;
      lVar8 = lVar7;
      do {
        if (*(longlong *)((longlong)GDefaultMaterials + lVar7) == 0) {
          ::FString::FString(&local_98,*(wchar_t **)((longlong)GDefaultMaterialNames + lVar7));
          ResolveIniObjectsReference(&local_d8,&local_98,(FString *)0x0,false);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data.ArrayNum == 0) {
            local_c8 = (FScriptContainerElement *)0x15060d16c;
LAB_147effe08:
            sVar5 = wcslen((wchar_t *)local_c8);
            iVar3 = (int)sVar5;
          }
          else {
            local_c8 = local_d8.Data.AllocatorInstance.Data;
            iVar3 = 0;
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_147effe08;
          }
          iStack_c0 = iVar3;
          pUVar4 = UMaterial::StaticClass();
          local_78._12_4_ = uStack_bc;
          local_78.Size = iStack_c0;
          local_78.DataPtr = (wchar_t *)local_c8;
          pUVar6 = StaticFindObject(pUVar4,(UObject *)0x0,&local_78,None);
          *(UObject **)((longlong)GDefaultMaterials + lVar7) = pUVar6;
          if ((pUVar6 == (UObject *)0x0) &&
             ((RecursionLevel == 1 || (GEventDrivenLoaderEnabled == false)))) {
            local_88 = (wchar_t *)0x0;
            iStack_80 = 0;
            if (local_d8.Data.ArrayNum == 0) {
              local_b8 = (FScriptContainerElement *)0x15060d16c;
LAB_147effe87:
              sVar5 = wcslen((wchar_t *)local_b8);
              iVar3 = (int)sVar5;
            }
            else {
              iVar3 = 0;
              local_b8 = local_d8.Data.AllocatorInstance.Data;
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_147effe87;
            }
            iStack_b0 = iVar3;
            pUVar4 = UMaterial::StaticClass();
            local_68._12_4_ = uStack_7c;
            local_68.Size = iStack_80;
            local_58._12_4_ = uStack_ac;
            local_58.Size = iStack_b0;
            local_68.DataPtr = local_88;
            local_58.DataPtr = (wchar_t *)local_b8;
            pUVar6 = StaticLoadObject(pUVar4,(UObject *)0x0,&local_58,&local_68,0x1000,
                                      (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
            *(UObject **)((longlong)GDefaultMaterials + lVar7) = pUVar6;
            if (pUVar6 == (UObject *)0x0) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                Enum = StaticEnum<enum_EMaterialDomain>();
                _Init_thread_footer(&::_TSS0);
              }
              if ((Enum == (UEnum *)0x0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Enum",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                                     ,0x32a,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              UEnum::GetNameStringByValue(Enum,&local_a8,lVar8);
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("GDefaultMaterials[Domain] != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                                 ,0x27c,
                                 L"Cannot load default material \'%s\' [Domain=%s] from path \'%s\'"
                                );
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
          }
          if (*(longlong *)((longlong)GDefaultMaterials + lVar7) != 0) {
            this = FUObjectArray::IndexToObject
                             (&GUObjectArray,
                              *(int *)(*(longlong *)((longlong)GDefaultMaterials + lVar7) + 0xc));
            FUObjectItem::SetRootFlags(this,RootSet);
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 8;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      RecursionLevel = RecursionLevel + -1;
      bDefaultMaterialInitialized = RecursionLevel == 0;
      if ((RecursionLevel == 0) &&
         ((bVar2 = PipelineStateCache::IsPSOPrecachingEnabled(), bVar2 ||
          (bVar2 = IsPSOShaderPreloadingEnabled(), bVar2)))) {
        PrecacheDefaultMaterialPSOs();
      }
      FScopedBootTiming::~FScopedBootTiming(&local_48);
      if (bVar10) {
        return;
      }
    }
    else {
      FScopedBootTiming::~FScopedBootTiming(&local_48);
      if (bVar10) {
        return;
      }
    }
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsDefaultMaterialInitialized @ 147f029a0

bool __cdecl UMaterialInterface::IsDefaultMaterialInitialized(void)

{
  return bDefaultMaterialInitialized;
}

// IsDependent @ 147f029d0

bool __thiscall
UMaterialInterface::IsDependent(UMaterialInterface *this,UMaterialInterface *param_1)

{
  return param_1 == this;
}

// IsDependent_Concurrent @ 147f029e0

bool __thiscall
UMaterialInterface::IsDependent_Concurrent
          (UMaterialInterface *this,UMaterialInterface *param_1,
          TMaterialRecursionGuard<UMaterialInterface> *param_2)

{
  return param_1 == this;
}

// OverrideBlendableSettings @ 147f04430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EBlendableLocation": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMaterialInterface::OverrideBlendableSettings
          (UMaterialInterface *this,FSceneView *param_1,float param_2)

{
  UMaterialInstanceDynamic *this_00;
  code *pcVar1;
  float fVar2;
  bool bVar3;
  EShaderPlatform EVar4;
  undefined4 uVar5;
  UMaterial *pUVar6;
  FName FVar7;
  FPostProcessMaterialNode *pFVar8;
  FBlendableEntry *pFVar9;
  UMaterial *pUVar10;
  TOptional<FMaterialCachedTexturesSamplingInfo> *pTVar11;
  undefined1 uVar12;
  UMaterialInstanceDynamic *local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  
  fVar2 = __real_3f800000;
  if (((param_2 <= 0.0) || (__real_3f800000 < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Weight > 0.0f && Weight <= 1.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x87a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar11 = &this[-1].CachedTexturesSamplingInfo;
  pUVar6 = (UMaterial *)
           (**(code **)(this[-1].CachedTexturesSamplingInfo.TypedValue.TextureSamplingInfos.
                        AllocatorInstance.Data + 0x2d0))(pTVar11);
  if (pUVar6 == (UMaterial *)0x0) {
    return;
  }
  if ((pUVar6->MaterialDomain).Value != '\x04') {
    return;
  }
  if (param_1->State == (FSceneViewStateInterface *)0x0) {
    return;
  }
  if ((pUVar6->bIsBlendable == 0) ||
     (FVar7 = GetUserSceneTextureOutput((UMaterialInterface *)pTVar11,(UMaterial *)&stack0x00000008)
     , *(longlong *)FVar7 != 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
    pFVar8 = FindExistingBlendablePostProcessNode
                       (&param_1->FinalPostProcessSettings,(UMaterialInterface *)pTVar11,pUVar6);
    if (pFVar8 != (FPostProcessMaterialNode *)0x0) goto LAB_147f04642;
  }
  pTVar11 = &this[-1].CachedTexturesSamplingInfo;
  local_68 = (UMaterialInstanceDynamic *)
             (**(code **)(param_1->State->_padding_ + 0x28))(param_1->State,pTVar11);
  if (local_68 == (UMaterialInstanceDynamic *)0x0) {
    return;
  }
  pUVar10 = (UMaterial *)pTVar11;
  if (param_2 < fVar2) {
    pUVar10 = pUVar6;
  }
  EVar4 = FSceneView::GetShaderPlatform(param_1);
  UMaterialInstanceDynamic::CopyScalarAndVectorParameters
            (local_68,(UMaterialInterface *)pUVar10,EVar4);
  uVar5 = (**(code **)((pTVar11->TypedValue).TextureSamplingInfos.AllocatorInstance.Data + 0x448))
                    (pTVar11,pUVar6);
  local_5c = (**(code **)((pTVar11->TypedValue).TextureSamplingInfos.AllocatorInstance.Data + 0x440)
             )(pTVar11,pUVar6);
  local_60 = 1;
  local_58 = uVar5;
  local_54 = uVar12;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName_const&___ptr64___cdecl_FPostProcessMaterialNode::GetFName(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FPostProcessMaterialNode::GetFName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName_const&___ptr64___cdecl_FPostProcessMaterialNode::GetFName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FPostProcessMaterialNode::GetFName(void)'
                    ::__l2::Name,L"FPostProcessMaterialNode");
    _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FPostProcessMaterialNode::GetFName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar9 = FBlendableManager::PushBlendableDataPtr
                     (&(param_1->FinalPostProcessSettings).BlendableManager,fVar2,
                      `public:_static_class_FName_const&___ptr64___cdecl_FPostProcessMaterialNode::GetFName(void)'
                      ::__l2::Name,(uchar *)&local_68,0x18,8);
  if ((pFVar9 == (FBlendableEntry *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BlendableManager.h"
                         ,0x16,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (fVar2 <= param_2) {
    return;
  }
  if ((UMaterial *)&this[-1].CachedTexturesSamplingInfo == pUVar6) {
    return;
  }
  pFVar8 = (FPostProcessMaterialNode *)((longlong)&pFVar9[1].Weight + (ulonglong)pFVar9->PrePadding)
  ;
  if (pFVar8 == (FPostProcessMaterialNode *)0x0) {
    return;
  }
LAB_147f04642:
  if ((pFVar8->bIsMID == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsMID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\BlendableInterface.h"
                         ,0x80,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (UMaterialInstanceDynamic *)pFVar8->MaterialInterface;
  if ((this_00 == (UMaterialInstanceDynamic *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestMID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x8aa,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar3 = UObjectBaseUtility::IsA<UMaterialInstance>
                    ((UObjectBaseUtility *)&this[-1].CachedTexturesSamplingInfo);
  if (bVar3) {
    if ((&this[-1].CachedTexturesSamplingInfo ==
         (TOptional<FMaterialCachedTexturesSamplingInfo> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SrcMI",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                           ,0x8b5,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UMaterialInstanceDynamic::K2_InterpolateMaterialInstanceParams
              (this_00,(UMaterialInstance *)this_00,
               (UMaterialInstance *)&this[-1].CachedTexturesSamplingInfo,param_2);
  }
  return;
}

// PostCDOContruct @ 147f04780

void __thiscall UMaterialInterface::PostCDOContruct(UMaterialInterface *this)

{
  UClass *this_00;
  
  this_00 = UMaterial::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  InitDefaultMaterials();
  return;
}

// PostLoadDefaultMaterials @ 147f055c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl UMaterialInterface::PostLoadDefaultMaterials(void)

{
  UMaterial *this;
  code *pcVar1;
  bool bVar2;
  UMaterial **ppUVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,Materials,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,Materials,true);
  if (bPostLoaded == false) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x2de,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bPostLoaded = true;
    ppUVar3 = GDefaultMaterials;
    do {
      this = *ppUVar3;
      if (this == (UMaterial *)0x0) {
        if ((GIsInitialLoad == false) || (GEventDrivenLoaderEnabled == false)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Material || (GIsInitialLoad && GEventDrivenLoaderEnabled)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                             ,0x2ea,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
LAB_147f056aa:
        bPostLoaded = false;
      }
      else {
        if (((uint)this->_padding_ >> 10 & 1) != 0) goto LAB_147f056aa;
        UObject::ConditionalPostLoad((UObject *)this);
        if (((uint)this->_padding_ >> 0xc & 1) != 0) goto LAB_147f056aa;
      }
      ppUVar3 = ppUVar3 + 1;
    } while ((longlong)ppUVar3 < 0x155214930);
    if (GPoolSpecialMaterialsCompileJobs == true) {
      GPoolSpecialMaterialsCompileJobs = false;
      if (GShaderCompilingManager != (FShaderCompilingManager *)0x0) {
        (**(code **)(GShaderCompilingManager->_padding_ + 0x30))();
      }
    }
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PrecacheDefaultMaterialPSOs @ 147f057b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl UMaterialInterface::PrecacheDefaultMaterialPSOs(void)

{
  FVertexFactoryType **ppFVar1;
  TLinkedList<FVertexFactoryType_*> *pTVar2;
  code *pcVar3;
  EShaderPlatform EVar4;
  bool bVar5;
  TLinkedList<FVertexFactoryType_*> **ppTVar6;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar7;
  TRefCountPtr<FBaseGraphTask> *pTVar8;
  UMaterial **ppUVar9;
  longlong lVar10;
  undefined1 auStack_148 [32];
  FVertexFactoryType **local_128;
  ForElementType<FPSOPrecacheVertexFactoryData> local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  ulonglong local_f8;
  void *local_f0;
  undefined8 local_e8;
  FVertexFactoryType *local_e0;
  FVertexFactoryType *pFStack_d8;
  ForElementType<FPSOPrecacheVertexFactoryData> local_d0;
  int local_a8;
  int local_a4;
  TRefCountPtr<FBaseGraphTask> local_a0 [4];
  TRefCountPtr<FBaseGraphTask> *local_80;
  int local_78;
  TRefCountPtr<FBaseGraphTask> local_70 [4];
  TRefCountPtr<FBaseGraphTask> *local_50;
  int local_48;
  TRefCountPtr<FBaseGraphTask> local_40 [4];
  TRefCountPtr<FBaseGraphTask> *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (GRHIGlobals.IsRHIInitialized) {
    local_f8 = (ulonglong)((uint)local_f8 & 0x8000) | 0x13c40;
    local_f0 = (void *)0x0;
    local_e8 = 0;
    local_d0.SecondaryData = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
    local_a8 = 0;
    local_a4 = 2;
    ppTVar6 = FVertexFactoryType::GetTypeList();
    EVar4 = GMaxRHIShaderPlatform;
    lVar10 = local_118;
    for (pTVar2 = *ppTVar6; GMaxRHIShaderPlatform = EVar4,
        pTVar2 != (TLinkedList<FVertexFactoryType_*> *)0x0;
        pTVar2 = (TLinkedList<FVertexFactoryType_*> *)pTVar2->_padding_) {
      local_e0 = pTVar2->Element;
      pFStack_d8 = (FVertexFactoryType *)0x0;
      FVar7 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FVar7 = local_d0.SecondaryData;
      }
      if ((ulonglong)FVar7 <= &local_e0) {
        local_118 = (longlong)local_a4;
        FVar7 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_d0;
        if (local_d0.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
          FVar7 = local_d0.SecondaryData;
        }
        if (&local_e0 < (FVertexFactoryType **)(local_118 * 0x10 + (longlong)FVar7)) {
          local_110 = (longlong)local_a8;
          local_108 = 0x10;
          local_128 = &local_e0;
          local_120 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
            local_120 = local_d0.SecondaryData;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          lVar10 = local_118;
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      local_118 = lVar10;
      if (local_a8 == local_a4) {
        local_a8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                             (0x810,&local_d0,&local_a4);
      }
      FVar7 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FVar7 = local_d0.SecondaryData;
      }
      ppFVar1 = (FVertexFactoryType **)((longlong)FVar7 + (longlong)local_a8 * 0x10);
      local_a8 = local_a8 + 1;
      *ppFVar1 = local_e0;
      ppFVar1[1] = pFStack_d8;
      EVar4 = GMaxRHIShaderPlatform;
      lVar10 = local_118;
    }
    local_118 = lVar10;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar4].bContainsValidPlatformInfo == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x2ce,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar4].bSupportsManualVertexFetch != 0) ||
       (bVar5 = IsPSOShaderPreloadingEnabled(), bVar5)) {
      ppUVar9 = GDefaultMaterials;
      lVar10 = 7;
      do {
        if (*ppUVar9 != (UMaterial *)0x0) {
          local_f8 = local_f8 & 0xfffffffffe1fffff;
          bVar5 = PipelineStateCache::IsPSOPrecachingEnabled();
          if ((bVar5) || (bVar5 = IsPSOShaderPreloadingEnabled(), bVar5)) {
            local_120 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_f0;
            local_128 = (FVertexFactoryType **)CONCAT71(local_128._1_7_,1);
            (**(code **)((*ppUVar9)->_padding_ + 0x3b0))(*ppUVar9,local_70,&local_d0,&local_f8);
            pTVar8 = local_70;
            if (local_50 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
              pTVar8 = local_50;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar8,local_48);
            if (local_50 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
              FMemory::Free(local_50);
            }
          }
          local_f8 = local_f8 & 0xfffffffffe5fffff | 0x400000;
          bVar5 = PipelineStateCache::IsPSOPrecachingEnabled();
          if ((bVar5) || (bVar5 = IsPSOShaderPreloadingEnabled(), bVar5)) {
            local_120 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_f0;
            local_128 = (FVertexFactoryType **)CONCAT71(local_128._1_7_,1);
            (**(code **)((*ppUVar9)->_padding_ + 0x3b0))(*ppUVar9,local_40,&local_d0,&local_f8);
            pTVar8 = local_40;
            if (local_20 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
              pTVar8 = local_20;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar8,local_18);
            if (local_20 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
              FMemory::Free(local_20);
            }
          }
        }
        ppUVar9 = ppUVar9 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    else if ((GDefaultMaterials[2] != (UMaterial *)0x0) &&
            (bVar5 = PipelineStateCache::IsPSOPrecachingEnabled(), bVar5)) {
      local_120 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_f0;
      local_128 = (FVertexFactoryType **)CONCAT71(local_128._1_7_,1);
      (**(code **)(GDefaultMaterials[2]->_padding_ + 0x3b0))
                (GDefaultMaterials[2],local_a0,&local_d0,&local_f8);
      pTVar8 = local_a0;
      if (local_80 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
        pTVar8 = local_80;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar8,local_78);
      if (local_80 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
        FMemory::Free(local_80);
      }
    }
    if (local_d0.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
      FMemory::Free((void *)local_d0.SecondaryData);
    }
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
  }
  return;
}

// StaticClass @ 147f08500

UClass * __cdecl UMaterialInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInterface",
               &Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton,
               StaticRegisterNativesUMaterialInterface,0xe8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialInterface>,
               InternalVTableHelperCtorCaller<UMaterialInterface>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton;
}

// UMaterialInterface @ 147f2e560

UMaterialInterface * __thiscall
UMaterialInterface::UMaterialInterface(UMaterialInterface *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnBaseMaterialSetEvent).field_0x18 = 2;
  (this->SubsurfaceProfile).field0_0x0.DebugPtr = (USubsurfaceProfile *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SubsurfaceProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->SubsurfaceProfiles).ArrayNum = 0;
  (this->SubsurfaceProfiles).ArrayMax = 0;
  (this->SpecularProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecularProfiles).ArrayNum = 0;
  (this->SpecularProfiles).ArrayMax = 0;
  (this->NeuralProfile).field0_0x0.DebugPtr = (UNeuralProfile *)0x0;
  *(undefined8 *)&this->OnBaseMaterialSetEvent = 0;
  *(undefined8 *)&(this->OnBaseMaterialSetEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnBaseMaterialSetEvent).field_0x10 = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ParentRefFence);
  (this->LightmassSettings).bCastShadowAsMasked = '\0';
  (this->LightmassSettings).bOverrideExportResolutionScale = '\0';
  (this->LightmassSettings).bOverrideDiffuseBoost = '\0';
  (this->LightmassSettings).bOverrideEmissiveBoost = '\0';
  (this->LightmassSettings).bOverrideCastShadowAsMasked = '\0';
  (this->LightmassSettings).EmissiveBoost = 1.0;
  (this->LightmassSettings).DiffuseBoost = 1.0;
  (this->LightmassSettings).ExportResolutionScale = 1.0;
  (this->TextureStreamingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureStreamingData).ArrayNum = 0;
  (this->TextureStreamingData).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->CachedTexturesSamplingInfo).bIsSet = false;
  this->bLoadedCachedExpressionData = false;
  (this->CachedExpressionData).Ptr = (FMaterialCachedExpressionData *)0x0;
  return this;
}

// UMaterialInterface @ 147f2e640

UMaterialInterface * __thiscall
UMaterialInterface::UMaterialInterface(UMaterialInterface *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  UMaterialInterface *pUVar4;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnBaseMaterialSetEvent).field_0x18 = 2;
  (this->SubsurfaceProfile).field0_0x0.DebugPtr = (USubsurfaceProfile *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SubsurfaceProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->SubsurfaceProfiles).ArrayNum = 0;
  (this->SubsurfaceProfiles).ArrayMax = 0;
  (this->SpecularProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecularProfiles).ArrayNum = 0;
  (this->SpecularProfiles).ArrayMax = 0;
  (this->NeuralProfile).field0_0x0.DebugPtr = (UNeuralProfile *)0x0;
  *(undefined8 *)&this->OnBaseMaterialSetEvent = 0;
  *(undefined8 *)&(this->OnBaseMaterialSetEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnBaseMaterialSetEvent).field_0x10 = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ParentRefFence);
  (this->LightmassSettings).bCastShadowAsMasked = '\0';
  (this->LightmassSettings).bOverrideExportResolutionScale = '\0';
  (this->LightmassSettings).bOverrideDiffuseBoost = '\0';
  (this->LightmassSettings).bOverrideEmissiveBoost = '\0';
  (this->LightmassSettings).bOverrideCastShadowAsMasked = '\0';
  (this->LightmassSettings).EmissiveBoost = 1.0;
  (this->LightmassSettings).DiffuseBoost = 1.0;
  (this->LightmassSettings).ExportResolutionScale = 1.0;
  (this->TextureStreamingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureStreamingData).ArrayNum = 0;
  (this->TextureStreamingData).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->CachedTexturesSamplingInfo).bIsSet = false;
  this->bLoadedCachedExpressionData = false;
  (this->CachedExpressionData).Ptr = (FMaterialCachedExpressionData *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    MaterialDomainString(&local_18,MD_Surface);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if ((GIsInitialLoad == false) || (GEventDrivenLoaderEnabled == false)) {
      InitDefaultMaterials();
      AssertDefaultMaterialsExist();
    }
    if (SamplerTypeEnum == (UEnum *)0x0) {
      SamplerTypeEnum = StaticEnum<enum_EMaterialSamplerType>();
      if (SamplerTypeEnum == (UEnum *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SamplerTypeEnum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                           ,199,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar4 = (UMaterialInterface *)(*pcVar2)();
          return pUVar4;
        }
      }
    }
  }
  return this;
}

// UMaterialInterface @ 147f2e7a0

UMaterialInterface * __thiscall UMaterialInterface::UMaterialInterface(UMaterialInterface *this)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this);
  *(undefined8 *)&(this->OnBaseMaterialSetEvent).field_0x18 = 2;
  (this->SubsurfaceProfile).field0_0x0.DebugPtr = (USubsurfaceProfile *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SubsurfaceProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->SubsurfaceProfiles).ArrayNum = 0;
  (this->SubsurfaceProfiles).ArrayMax = 0;
  (this->SpecularProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecularProfiles).ArrayNum = 0;
  (this->SpecularProfiles).ArrayMax = 0;
  (this->NeuralProfile).field0_0x0.DebugPtr = (UNeuralProfile *)0x0;
  *(undefined8 *)&this->OnBaseMaterialSetEvent = 0;
  *(undefined8 *)&(this->OnBaseMaterialSetEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnBaseMaterialSetEvent).field_0x10 = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ParentRefFence);
  (this->LightmassSettings).bCastShadowAsMasked = '\0';
  (this->LightmassSettings).bOverrideExportResolutionScale = '\0';
  (this->LightmassSettings).bOverrideDiffuseBoost = '\0';
  (this->LightmassSettings).bOverrideEmissiveBoost = '\0';
  (this->LightmassSettings).bOverrideCastShadowAsMasked = '\0';
  (this->LightmassSettings).EmissiveBoost = 1.0;
  (this->LightmassSettings).DiffuseBoost = 1.0;
  (this->LightmassSettings).ExportResolutionScale = 1.0;
  (this->TextureStreamingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureStreamingData).ArrayNum = 0;
  (this->TextureStreamingData).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->CachedTexturesSamplingInfo).bIsSet = false;
  this->bLoadedCachedExpressionData = false;
  (this->CachedExpressionData).Ptr = (FMaterialCachedExpressionData *)0x0;
  return this;
}

// ~UMaterialInterface @ 147f2f500

void __thiscall UMaterialInterface::~UMaterialInterface(UMaterialInterface *this)

{
  FMaterialCachedExpressionData *this_00;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this_00 = (this->CachedExpressionData).Ptr;
  if (this_00 != (FMaterialCachedExpressionData *)0x0) {
    FMaterialCachedExpressionData::~FMaterialCachedExpressionData(this_00);
    ::operator_delete(this_00,0x4e0);
  }
  if (((this->CachedTexturesSamplingInfo).bIsSet != false) &&
     (pFVar1 = (this->CachedTexturesSamplingInfo).TypedValue.TextureSamplingInfos.AllocatorInstance.
               Data, pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureStreamingData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderCommandFence::~FRenderCommandFence(&this->ParentRefFence);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBaseMaterialSetEvent).field_0x8,
             *(int *)&(this->OnBaseMaterialSetEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnBaseMaterialSetEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBaseMaterialSetEvent);
  pFVar1 = (this->SpecularProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SubsurfaceProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  this->_padding_ = (longlong)&___7IBlendableInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 147f2fb10

void __thiscall
`UMaterialInterface::UpdateMaterialRenderProxy'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  USubsurfaceProfile *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  bool bVar23;
  uint uVar24;
  FLinearColor_u_0 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FLinearColor_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pUVar1 = *(USubsurfaceProfile **)((longlong)this + 0xa0);
  if (pUVar1 != (USubsurfaceProfile *)0x0) {
    uVar3 = *(undefined8 *)this;
    uVar4 = *(undefined8 *)((longlong)this + 8);
    uVar5 = *(undefined8 *)((longlong)this + 0x10);
    uVar6 = *(undefined8 *)((longlong)this + 0x18);
    uVar7 = *(undefined8 *)((longlong)this + 0x20);
    uVar8 = *(undefined8 *)((longlong)this + 0x28);
    uVar9 = *(undefined8 *)((longlong)this + 0x30);
    uVar10 = *(undefined8 *)((longlong)this + 0x38);
    uVar11 = *(undefined8 *)((longlong)this + 0x40);
    uVar12 = *(undefined8 *)((longlong)this + 0x48);
    uVar13 = *(undefined8 *)((longlong)this + 0x50);
    uVar14 = *(undefined8 *)((longlong)this + 0x58);
    uVar15 = *(undefined8 *)((longlong)this + 0x60);
    uVar16 = *(undefined8 *)((longlong)this + 0x68);
    uVar17 = *(undefined8 *)((longlong)this + 0x80);
    uVar18 = *(undefined8 *)((longlong)this + 0x88);
    uVar19 = *(undefined8 *)((longlong)this + 0x70);
    uVar20 = *(undefined8 *)((longlong)this + 0x78);
    uVar21 = *(undefined8 *)((longlong)this + 0x90);
    uVar22 = *(undefined8 *)((longlong)this + 0x98);
    uVar24 = FSubsurfaceProfileTexture::FindAllocationId
                       ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,pUVar1);
    if (uVar24 == 0xffffffff) {
      local_a8._0_8_ = uVar3;
      local_a8._8_8_ = uVar4;
      local_98 = uVar5;
      uStack_90 = uVar6;
      local_88 = uVar7;
      uStack_80 = uVar8;
      local_78 = uVar9;
      uStack_70 = uVar10;
      local_68 = uVar11;
      uStack_60 = uVar12;
      local_58 = uVar13;
      uStack_50 = uVar14;
      local_48 = uVar15;
      uStack_40 = uVar16;
      local_38 = uVar19;
      uStack_30 = uVar20;
      local_28 = uVar17;
      uStack_20 = uVar18;
      local_18 = uVar21;
      uStack_10 = uVar22;
      uVar24 = FSubsurfaceProfileTexture::AddProfile
                         ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,
                          (FSubsurfaceProfileStruct *)&local_a8._s_0,pUVar1);
    }
    else {
      local_148._0_8_ = uVar3;
      local_148._8_8_ = uVar4;
      local_138 = uVar5;
      uStack_130 = uVar6;
      local_128 = uVar7;
      uStack_120 = uVar8;
      local_118 = uVar9;
      uStack_110 = uVar10;
      local_108 = uVar11;
      uStack_100 = uVar12;
      local_f8 = uVar13;
      uStack_f0 = uVar14;
      local_e8 = uVar15;
      uStack_e0 = uVar16;
      local_d8 = uVar19;
      uStack_d0 = uVar20;
      local_c8 = uVar17;
      uStack_c0 = uVar18;
      local_b8 = uVar21;
      uStack_b0 = uVar22;
      FSubsurfaceProfileTexture::UpdateProfile
                ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,uVar24,
                 (FSubsurfaceProfileStruct *)&local_148._s_0);
    }
    if (0xff < uVar24) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllocationId >= 0 && AllocationId < 256",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                          ,0x6c8,L"");
      if (bVar23) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  *(undefined8 *)(*(longlong *)((longlong)this + 0xa8) + 0x70) =
       *(undefined8 *)((longlong)this + 0xa0);
  return;
}

// operator() @ 147f2fd20

void __thiscall
`UMaterialInterface::UpdateMaterialRenderProxy'::__l21::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNeuralProfileStruct *pFVar4;
  FNeuralProfileStruct local_58;
  
  pFVar4 = FNeuralProfileStruct::FNeuralProfileStruct
                     (&local_58,(FNeuralProfileStruct *)((longlong)this + 0x18));
  uVar3 = NeuralProfile::AddOrUpdateProfile
                    (*(UNeuralProfile **)((longlong)this + 0x10),(FGuid *)((longlong)this + 0x60),
                     pFVar4);
  if (0x3f < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationId >= 0 && AllocationId < 64",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                       ,0x6e7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(char *)(*(longlong *)((longlong)this + 0x70) + 0x21f) = (char)uVar3;
  *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0xa0) = *(undefined8 *)this;
  return;
}

// operator() @ 147f2fdb0

void __thiscall
`UMaterialInterface::UpdateMaterialRenderProxy'::__l36::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  ForAnyElementType *pFVar9;
  FTextureReference *pFVar10;
  undefined1 local_res8 [8];
  longlong local_868;
  FSpecularProfileStruct local_860;
  FSpecularProfileStruct local_440;
  
  plVar7 = *(longlong **)((longlong)this + 8);
  iVar1 = *(int *)((longlong)this + 0x10);
  plVar8 = plVar7 + (longlong)iVar1 * 0x88;
  while( true ) {
    if (*(int *)((longlong)this + 0x10) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<`UMaterialInterface::UpdateMaterialRenderProxy'::__l25::FEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar7 == plVar8) break;
    if (*plVar7 != 0) {
      local_860.Format = *(ESpecularProfileFormat *)(plVar7 + 1);
      pFVar10 = (FTextureReference *)plVar7[0x85];
      FRuntimeCurveLinearColor::FRuntimeCurveLinearColor
                (&local_860.ViewColor,(FRuntimeCurveLinearColor *)(plVar7 + 2));
      FRuntimeCurveLinearColor::FRuntimeCurveLinearColor
                (&local_860.LightColor,(FRuntimeCurveLinearColor *)(plVar7 + 0x43));
      local_860.Texture.field0_0x0 =
           (TObjectPtr<UTexture2D>_u_0)((TObjectPtr<UTexture2D>_u_0 *)(plVar7 + 0x84))->DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_860.Texture.field0_0x0.DebugPtr != (TObjectPtr<UTexture2D>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_860.Texture.field0_0x0);
      }
      uVar5 = SpecularProfile::AddOrUpdateProfile
                        ((USpecularProfile *)*plVar7,(FGuid *)(plVar7 + 0x86),&local_860,pFVar10);
      if (0xff < uVar5) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationId >= 0 && AllocationId < 256",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                           ,0x718,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    local_868 = *plVar7;
    lVar2 = *(longlong *)this;
    pFVar9 = (ForAnyElementType *)(lVar2 + 0x88);
    if ((pFVar9->Data <= (FScriptContainerElement *)&local_868) &&
       ((FScriptContainerElement *)&local_868 < pFVar9->Data + (longlong)*(int *)(lVar2 + 0x94) * 8)
       ) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)(lVar2 + 0x90);
    if (iVar6 == *(int *)(lVar2 + 0x94)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar9,(int *)(lVar2 + 0x94));
    }
    plVar7 = plVar7 + 0x88;
    *(int *)(lVar2 + 0x90) = iVar6 + 1;
    *(longlong *)(pFVar9->Data + (longlong)iVar6 * 8) = local_868;
  }
  lVar2 = *(longlong *)((longlong)this + 0x18);
  if (lVar2 != 0) {
    pFVar10 = (FTextureReference *)0x0;
    if (*(longlong *)(lVar2 + 0x440) != 0) {
      pFVar10 = *(FTextureReference **)(*(longlong *)(lVar2 + 0x440) + 0x140);
    }
    local_440.Format = *(ESpecularProfileFormat *)(lVar2 + 0x28);
    FRuntimeCurveLinearColor::FRuntimeCurveLinearColor
              (&local_440.ViewColor,(FRuntimeCurveLinearColor *)(lVar2 + 0x30));
    FRuntimeCurveLinearColor::FRuntimeCurveLinearColor
              (&local_440.LightColor,(FRuntimeCurveLinearColor *)(lVar2 + 0x238));
    local_440.Texture.field0_0x0 =
         (TObjectPtr<UTexture2D>_u_0)((TObjectPtr<UTexture2D>_u_0 *)(lVar2 + 0x440))->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_440.Texture.field0_0x0.DebugPtr != (TObjectPtr<UTexture2D>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_440.Texture.field0_0x0);
    }
    SpecularProfile::AddOrUpdateProfile
              (*(USpecularProfile **)((longlong)this + 0x18),
               &(*(USpecularProfile **)((longlong)this + 0x18))->Guid,&local_440,pFVar10);
  }
  *(undefined8 *)(*(longlong *)this + 0x98) = *(undefined8 *)((longlong)this + 0x18);
  return;
}

// operator() @ 147f30030

void __thiscall
`UMaterialInterface::UpdateMaterialRenderProxy'::__l37::<lambda_4>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  USubsurfaceProfile *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  undefined8 local_358 [2];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  FLinearColor_u_0 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  FLinearColor_u_0 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  FLinearColor_u_0 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FLinearColor_u_0 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = *(longlong *)this;
  *(undefined4 *)(lVar1 + 0x80) = 0;
  if (*(int *)(lVar1 + 0x84) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(lVar1 + 0x78),0,(int *)(lVar1 + 0x84));
  }
  puVar8 = *(undefined8 **)((longlong)this + 8);
  iVar7 = *(int *)((longlong)this + 0x10);
  puVar9 = puVar8 + 1;
  puVar10 = puVar8 + (longlong)iVar7 * 0x15;
  while( true ) {
    if (*(int *)((longlong)this + 0x10) != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<`UMaterialInterface::UpdateMaterialRenderProxy'::__l37::FEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar8 == puVar10) break;
    pUVar2 = (USubsurfaceProfile *)*puVar8;
    if (pUVar2 != (USubsurfaceProfile *)0x0) {
      local_348 = *puVar9;
      uStack_340 = puVar9[1];
      local_338 = puVar9[2];
      uStack_330 = puVar9[3];
      local_328 = puVar9[4];
      uStack_320 = puVar9[5];
      local_318 = puVar9[6];
      uStack_310 = puVar9[7];
      local_308 = puVar9[8];
      uStack_300 = puVar9[9];
      local_2f8 = puVar9[10];
      uStack_2f0 = puVar9[0xb];
      local_2e8 = puVar9[0xc];
      uStack_2e0 = puVar9[0xd];
      local_2d8 = puVar9[0xe];
      uStack_2d0 = puVar9[0xf];
      local_2c8 = puVar9[0x10];
      uStack_2c0 = puVar9[0x11];
      local_2b8 = puVar9[0x12];
      uStack_2b0 = puVar9[0x13];
      uVar5 = FSubsurfaceProfileTexture::FindAllocationId
                        ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,pUVar2);
      if (uVar5 == 0xffffffff) {
        local_208._0_8_ = local_348;
        local_208._8_8_ = uStack_340;
        local_1f8 = local_338;
        uStack_1f0 = uStack_330;
        local_1e8 = local_328;
        uStack_1e0 = uStack_320;
        local_1d8 = local_318;
        uStack_1d0 = uStack_310;
        local_1c8 = local_308;
        uStack_1c0 = uStack_300;
        local_1b8 = local_2f8;
        uStack_1b0 = uStack_2f0;
        local_1a8 = local_2e8;
        uStack_1a0 = uStack_2e0;
        local_198 = local_2d8;
        uStack_190 = uStack_2d0;
        local_188 = local_2c8;
        uStack_180 = uStack_2c0;
        local_178 = local_2b8;
        uStack_170 = uStack_2b0;
        uVar5 = FSubsurfaceProfileTexture::AddProfile
                          ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,
                           (FSubsurfaceProfileStruct *)&local_208._s_0,pUVar2);
      }
      else {
        local_2a8._0_8_ = local_348;
        local_2a8._8_8_ = uStack_340;
        local_298 = local_338;
        uStack_290 = uStack_330;
        local_288 = local_328;
        uStack_280 = uStack_320;
        local_278 = local_318;
        uStack_270 = uStack_310;
        local_268 = local_308;
        uStack_260 = uStack_300;
        local_258 = local_2f8;
        uStack_250 = uStack_2f0;
        local_248 = local_2e8;
        uStack_240 = uStack_2e0;
        local_238 = local_2d8;
        uStack_230 = uStack_2d0;
        local_228 = local_2c8;
        uStack_220 = uStack_2c0;
        local_218 = local_2b8;
        uStack_210 = uStack_2b0;
        FSubsurfaceProfileTexture::UpdateProfile
                  ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,uVar5,
                   (FSubsurfaceProfileStruct *)&local_2a8._s_0);
      }
      if (0xff < uVar5) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationId >= 0 && AllocationId < 256",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                           ,0x75b,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    local_358[0] = *puVar8;
    lVar1 = *(longlong *)this;
    if ((*(undefined8 **)(lVar1 + 0x78) <= local_358) &&
       (local_358 < *(undefined8 **)(lVar1 + 0x78) + *(int *)(lVar1 + 0x84))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)(lVar1 + 0x80);
    if (iVar6 == *(int *)(lVar1 + 0x84)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(lVar1 + 0x78),(int *)(lVar1 + 0x84));
    }
    puVar8 = puVar8 + 0x15;
    *(int *)(lVar1 + 0x80) = iVar6 + 1;
    puVar9 = puVar9 + 0x15;
    *(undefined8 *)(*(longlong *)(lVar1 + 0x78) + (longlong)iVar6 * 8) = local_358[0];
  }
  pUVar2 = *(USubsurfaceProfile **)((longlong)this + 0x18);
  if (pUVar2 != (USubsurfaceProfile *)0x0) {
    local_348 = *(undefined8 *)((longlong)this + 0x20);
    uStack_340 = *(undefined8 *)((longlong)this + 0x28);
    local_338 = *(undefined8 *)((longlong)this + 0x30);
    uStack_330 = *(undefined8 *)((longlong)this + 0x38);
    local_328 = *(undefined8 *)((longlong)this + 0x40);
    uStack_320 = *(undefined8 *)((longlong)this + 0x48);
    local_318 = *(undefined8 *)((longlong)this + 0x50);
    uStack_310 = *(undefined8 *)((longlong)this + 0x58);
    local_308 = *(undefined8 *)((longlong)this + 0x60);
    uStack_300 = *(undefined8 *)((longlong)this + 0x68);
    local_2f8 = *(undefined8 *)((longlong)this + 0x70);
    uStack_2f0 = *(undefined8 *)((longlong)this + 0x78);
    local_2e8 = *(undefined8 *)((longlong)this + 0x80);
    uStack_2e0 = *(undefined8 *)((longlong)this + 0x88);
    local_2d8 = *(undefined8 *)((longlong)this + 0x90);
    uStack_2d0 = *(undefined8 *)((longlong)this + 0x98);
    local_2c8 = *(undefined8 *)((longlong)this + 0xa0);
    uStack_2c0 = *(undefined8 *)((longlong)this + 0xa8);
    local_2b8 = *(undefined8 *)((longlong)this + 0xb0);
    uStack_2b0 = *(undefined8 *)((longlong)this + 0xb8);
    iVar7 = FSubsurfaceProfileTexture::FindAllocationId
                      ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,pUVar2);
    if (iVar7 == -1) {
      local_c8._0_8_ = local_348;
      local_c8._8_8_ = uStack_340;
      local_b8 = local_338;
      uStack_b0 = uStack_330;
      local_a8 = local_328;
      uStack_a0 = uStack_320;
      local_98 = local_318;
      uStack_90 = uStack_310;
      local_88 = local_308;
      uStack_80 = uStack_300;
      local_78 = local_2f8;
      uStack_70 = uStack_2f0;
      local_68 = local_2e8;
      uStack_60 = uStack_2e0;
      local_58 = local_2d8;
      uStack_50 = uStack_2d0;
      local_48 = local_2c8;
      uStack_40 = uStack_2c0;
      local_38 = local_2b8;
      uStack_30 = uStack_2b0;
      FSubsurfaceProfileTexture::AddProfile
                ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,
                 (FSubsurfaceProfileStruct *)&local_c8._s_0,pUVar2);
    }
    else {
      local_168._0_8_ = local_348;
      local_168._8_8_ = uStack_340;
      local_158 = local_338;
      uStack_150 = uStack_330;
      local_148 = local_328;
      uStack_140 = uStack_320;
      local_138 = local_318;
      uStack_130 = uStack_310;
      local_128 = local_308;
      uStack_120 = uStack_300;
      local_118 = local_2f8;
      uStack_110 = uStack_2f0;
      local_108 = local_2e8;
      uStack_100 = uStack_2e0;
      local_f8 = local_2d8;
      uStack_f0 = uStack_2d0;
      local_e8 = local_2c8;
      uStack_e0 = uStack_2c0;
      local_d8 = local_2b8;
      uStack_d0 = uStack_2b0;
      FSubsurfaceProfileTexture::UpdateProfile
                ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,iVar7,
                 (FSubsurfaceProfileStruct *)&local_168._s_0);
    }
  }
  *(undefined8 *)(*(longlong *)this + 0x70) = *(undefined8 *)((longlong)this + 0x18);
  return;
}

// AddAssetUserData @ 147f31890

void __thiscall
UMaterialInterface::AddAssetUserData(UMaterialInterface *this,UAssetUserData *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  code *pcVar3;
  UObject **ppUVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UObject *local_res18 [2];
  UObject *local_48;
  UAssetUserData *local_40;
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res18[0] = *(UObject **)&param_1->field_0x10;
    pcVar3 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    pUVar8 = (UObject *)(*pcVar3)(this,local_res18);
    if (pUVar8 != (UObject *)0x0) {
      local_48 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      ppUVar4 = *(UObject ***)&(this->OnBaseMaterialSetEvent).field_0x18;
      if (((ppUVar4 <= &local_48) &&
          (&local_48 <
           ppUVar4 + *(int *)((longlong)&(this->ParentRefFence).CompletionTask.Pimpl.Reference + 4))
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference;
      if (iVar7 != 0) {
        iVar12 = 0;
        plVar5 = *(longlong **)&(this->OnBaseMaterialSetEvent).field_0x18;
        bVar6 = (UObject *)*plVar5 != local_48;
        lVar9 = 0;
        pUVar8 = local_48;
        iVar10 = 0;
        do {
          iVar11 = iVar10;
          do {
            lVar9 = lVar9 + 1;
            iVar11 = iVar11 + 1;
            if (iVar7 <= lVar9) break;
          } while (bVar6 == ((UObject *)plVar5[lVar9] != pUVar8));
          if (bVar6 != false) {
            if (iVar12 != iVar10) {
              memmove(plVar5 + iVar12,plVar5 + iVar10,(longlong)(iVar11 - iVar10) << 3);
              pUVar8 = local_48;
            }
            iVar12 = iVar12 + (iVar11 - iVar10);
          }
          bVar6 = (bool)(bVar6 ^ 1);
          iVar10 = iVar11;
        } while (lVar9 < iVar7);
        *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference = iVar12;
      }
    }
    puVar2 = &(this->OnBaseMaterialSetEvent).field_0x18;
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (((*(UAssetUserData ***)puVar2 <= &local_40) &&
        (&local_40 <
         *(UAssetUserData ***)puVar2 +
         *(int *)((longlong)&(this->ParentRefFence).CompletionTask.Pimpl.Reference + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference;
    piVar1 = (int *)((longlong)&(this->ParentRefFence).CompletionTask.Pimpl.Reference + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar2,piVar1);
    }
    *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference = iVar7 + 1;
    *(UAssetUserData **)(*(longlong *)puVar2 + (longlong)iVar7 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UAssetUserData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_40);
    }
  }
  return;
}

// AddReferencedObjects @ 147f32130

void __cdecl UMaterialInterface::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMaterialInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    if (*(FMaterialCachedExpressionData **)&param_1[5].field_0x18 !=
        (FMaterialCachedExpressionData *)0x0) {
      FMaterialCachedExpressionData::AddReferencedObjects
                (*(FMaterialCachedExpressionData **)&param_1[5].field_0x18,param_2);
    }
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar3 = GetTypeName<UMaterialInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// BeginDestroy @ 147f32900

void __thiscall UMaterialInterface::BeginDestroy(UMaterialInterface *this)

{
  FRenderCommandFence::BeginFence(&this->ParentRefFence,RenderThread);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CacheShaders @ 147f33280

/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

void __thiscall
UMaterialInterface::CacheShaders(UMaterialInterface *this,EMaterialShaderPrecompileMode param_1)

{
  return;
}

// CacheTexturesSamplingInfo @ 147f334f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UMaterialInterface::CacheTexturesSamplingInfo(UMaterialInterface *this)

{
  TOptional<FMaterialCachedTexturesSamplingInfo> *pTVar1;
  undefined8 *puVar2;
  code *pcVar3;
  UObject *pUVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FCachedSystemScalabilityCVars *pFVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_d8 [32];
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_88 [2];
  Type local_86 [6];
  ForAnyElementType local_80;
  undefined8 local_78;
  EShaderPlatform local_70;
  undefined1 local_6e;
  undefined8 *local_68;
  ulonglong local_60;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  cVar7 = (**(code **)(this->_padding_ + 0x2b8))();
  if (cVar7 != '\0') {
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2241,"UMaterialInterface::CacheTexturesSamplingInfo",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                 ,0x8c1);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2241);
    }
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    local_6e = 1;
    pcVar3 = *(code **)(this->_padding_ + 0x330);
    local_70 = GMaxRHIShaderPlatform;
    pFVar10 = GetCachedScalabilityCVars();
    local_86[0] = pFVar10->MaterialQualityLevel;
    local_86[1] = 1;
    (*pcVar3)(this,&local_68,local_86,&local_70);
    iVar6 = (int)local_60;
    uVar12 = (ulonglong)(int)local_60;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    puVar2 = local_68 + uVar12;
    puVar14 = local_68;
    while( true ) {
      if ((int)uVar12 != iVar6) {
        local_88[0] = 0;
        `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_88);
      }
      if (puVar14 == puVar2) break;
      pFVar11 = (FScriptContainerElement *)
                (**(code **)(this->_padding_ + 0x2b0))(this,local_58,*puVar14);
      if (local_80.Data <= pFVar11) {
        if (pFVar11 < local_80.Data + (longlong)local_78._4_4_ * 0x20) {
          local_a0 = (longlong)(int)local_78;
          local_98 = 0x20;
          local_b0 = local_80.Data;
          local_b8 = pFVar11;
          local_a8 = (longlong)local_78._4_4_;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      iVar9 = (int)local_78;
      if ((int)local_78 == local_78._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_80,(int *)((longlong)&local_78 + 4));
      }
      local_78 = CONCAT44(local_78._4_4_,iVar9 + 1);
      pFVar13 = local_80.Data + (longlong)iVar9 * 0x20;
      *pFVar13 = *pFVar11;
      pUVar4 = *(UObject **)(pFVar11 + 8);
      *(UObject **)(pFVar13 + 8) = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      uVar5 = *(undefined8 *)(pFVar11 + 0x18);
      puVar14 = puVar14 + 1;
      *(undefined8 *)(pFVar13 + 0x10) = *(undefined8 *)(pFVar11 + 0x10);
      *(undefined8 *)(pFVar13 + 0x18) = uVar5;
      uVar12 = local_60 & 0xffffffff;
    }
    if (((this->CachedTexturesSamplingInfo).bIsSet != false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!CachedTexturesSamplingInfo.IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                           ,0x8cc,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar1 = &this->CachedTexturesSamplingInfo;
    if ((TOptional<FMaterialCachedTexturesSamplingInfo> *)&local_80 != pTVar1) {
      if (((this->CachedTexturesSamplingInfo).bIsSet != false) &&
         (pFVar11 = (pTVar1->TypedValue).TextureSamplingInfos.AllocatorInstance.Data,
         pFVar11 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar11);
      }
      (pTVar1->TypedValue).TextureSamplingInfos.AllocatorInstance.Data = local_80.Data;
      (this->CachedTexturesSamplingInfo).TypedValue.TextureSamplingInfos.ArrayNum = (int)local_78;
      (this->CachedTexturesSamplingInfo).TypedValue.TextureSamplingInfos.ArrayMax = local_78._4_4_;
      (this->CachedTexturesSamplingInfo).bIsSet = true;
      local_80.Data = (FScriptContainerElement *)0x0;
      local_78 = 0;
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    if (local_68 != (undefined8 *)0x0) {
      FMemory::Free(local_68);
    }
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// CalculateTexturesSamplingInfo @ 147f33990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTextureSamplingInfo * __thiscall
UMaterialInterface::CalculateTexturesSamplingInfo
          (UMaterialInterface *this,FTextureSamplingInfo *__return_storage_ptr__,UTexture *param_1)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FTextureSamplingInfo *pFVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  __return_storage_ptr__->bIsValid = false;
  (__return_storage_ptr__->Texture).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (__return_storage_ptr__->ChannelMinSamplingScale).Elements[0] = 3.4028235e+38;
  (__return_storage_ptr__->ChannelMinSamplingScale).Elements[1] = 3.4028235e+38;
  (__return_storage_ptr__->ChannelMinSamplingScale).Elements[2] = 3.4028235e+38;
  (__return_storage_ptr__->ChannelMinSamplingScale).Elements[3] = 3.4028235e+38;
  local_14 = -1;
  local_18 = -1;
  bVar6 = FindTextureStreamingDataIndexRange(this,(FName)param_1->_padding_,&local_14,&local_18);
  iVar5 = local_18;
  if ((bVar6) && (uVar11 = (ulonglong)local_14, local_14 <= local_18)) {
    lVar9 = uVar11 << 4;
    do {
      iVar2 = (this->TextureStreamingData).ArrayNum;
      local_20 = (longlong)iVar2;
      uVar10 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar10 < iVar2) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_28 = (longlong)(int)uVar10;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FTextureSamplingInfo *)(*pcVar4)();
          return pFVar8;
        }
      }
      pFVar3 = (this->TextureStreamingData).AllocatorInstance.Data;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar7 = *(uint *)(pFVar3 + lVar9 + 4);
      fVar12 = *(float *)(pFVar3 + lVar9);
      lVar9 = lVar9 + 0x10;
      fVar1 = (__return_storage_ptr__->ChannelMinSamplingScale).Elements[uVar7];
      if (fVar1 <= fVar12) {
        fVar12 = fVar1;
      }
      (__return_storage_ptr__->ChannelMinSamplingScale).Elements[uVar7] = fVar12;
      __return_storage_ptr__->bIsValid = (bool)(__return_storage_ptr__->bIsValid | 1);
    } while ((int)(uVar10 + 1) <= iVar5);
  }
  return __return_storage_ptr__;
}

// CanCacheTexturesSamplingInfo @ 147f34020

bool __thiscall UMaterialInterface::CanCacheTexturesSamplingInfo(UMaterialInterface *this)

{
  return UE::Private::GEnableTexturesSamplingStreamingCache;
}

// CastsRayTracedShadows @ 147f34050

bool __thiscall UMaterialInterface::CastsRayTracedShadows(UMaterialInterface *this)

{
  return true;
}

// CheckMaterialUsage @ 147f34110

bool __thiscall
UMaterialInterface::CheckMaterialUsage(UMaterialInterface *this,EMaterialUsage param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x25f,L"Pure virtual not implemented (%s)");
  return false;
}

// CheckMaterialUsage_Concurrent @ 147f34610

bool __thiscall
UMaterialInterface::CheckMaterialUsage_Concurrent(UMaterialInterface *this,EMaterialUsage param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x263,L"Pure virtual not implemented (%s)");
  return false;
}

// ClearNumericParameterDefault @ 147f34650

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInterface::ClearNumericParameterDefault
          (UMaterialInterface *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,EShaderPlatform param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,599,L"Pure virtual not implemented (%s)");
  return;
}

// DumpDebugInfo @ 147f37960

void __thiscall UMaterialInterface::DumpDebugInfo(UMaterialInterface *this,FOutputDevice *param_1)

{
  return;
}

// EnsureIsComplete @ 147f37ba0

void __thiscall UMaterialInterface::EnsureIsComplete(UMaterialInterface *this)

{
  return;
}

// FilterOutPlatformShadingModels @ 147f38910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UMaterialInterface::FilterOutPlatformShadingModels
          (EShaderPlatform param_1,FMaterialShadingModelField *param_2)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2->ShadingModelField -
          ((ulonglong)(param_2->ShadingModelField >> 1) & 0x5555555555555555);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  if (1 < (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
    bVar1 = AllowPerPixelShadingModels((FStaticShaderPlatform)param_1);
    if (!bVar1) {
      param_2->ShadingModelField = 2;
    }
  }
  uVar2 = GetPlatformShadingModelsMask((FStaticShaderPlatform)param_1);
  if ((uVar2 != 0xffffffff) &&
     (param_2->ShadingModelField = param_2->ShadingModelField & (ushort)uVar2,
     0x1ffe < (ushort)(param_2->ShadingModelField - 1))) {
    param_2->ShadingModelField = 2;
  }
  return;
}

// FindTextureStreamingDataIndexRange @ 147f38ea0

bool __thiscall
UMaterialInterface::FindTextureStreamingDataIndexRange
          (UMaterialInterface *this,FName param_1,int *param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  pTVar4 = CVarStreamingUseMaterialData.Ref;
  bVar5 = IsInParallelGameThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  pTVar3 = CVarStreamingUseNewMetrics.Ref;
  if (pTVar4->ShadowedValue[0] != 0) {
    bVar5 = IsInParallelGameThread();
    if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if (pTVar3->ShadowedValue[0] != 0) {
      iVar1 = (this->TextureStreamingData).ArrayNum;
      if (0 < iVar1) {
        lVar8 = 0;
        lVar11 = 0;
        uVar9 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar9 < (this->TextureStreamingData).ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          uVar10 = uVar9 + 1;
          if (*(FName *)((this->TextureStreamingData).AllocatorInstance.Data + lVar11 + 8) ==
              param_1) {
            *param_2 = uVar9;
            if (iVar1 <= (int)uVar10) goto LAB_147f39097;
            lVar8 = (lVar8 + 1) * 0x10;
            goto LAB_147f39030;
          }
          lVar8 = lVar8 + 1;
          lVar11 = lVar11 + 0x10;
          uVar9 = uVar10;
        } while (lVar8 < iVar1);
      }
    }
  }
  return false;
  while( true ) {
    uVar9 = uVar9 + 1;
    uVar10 = uVar10 + 1;
    lVar8 = lVar8 + 0x10;
    if (iVar1 <= (int)uVar10) break;
LAB_147f39030:
    uVar7 = 0;
    if ((int)uVar10 < (this->TextureStreamingData).ArrayNum) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if (*(FName *)((this->TextureStreamingData).AllocatorInstance.Data + lVar8 + 8) != param_1)
    break;
  }
LAB_147f39097:
  *param_3 = uVar9;
  return true;
}

// FinishDestroy @ 147f39340

void __thiscall UMaterialInterface::FinishDestroy(UMaterialInterface *this)

{
  FMaterialCachedExpressionData *this_00;
  
  this_00 = (this->CachedExpressionData).Ptr;
  if (this_00 != (FMaterialCachedExpressionData *)0x0) {
    (this->CachedExpressionData).Ptr = (FMaterialCachedExpressionData *)0x0;
    FMaterialCachedExpressionData::~FMaterialCachedExpressionData(this_00);
    ::operator_delete(this_00,0x4e0);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetAllDoubleVectorParameterInfo @ 147f3d220

void __thiscall
UMaterialInterface::GetAllDoubleVectorParameterInfo
          (UMaterialInterface *this,
          TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147f3d22b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3b8))(this,2,param_1,param_2);
  return;
}

// GetAllFontParameterInfo @ 147f3d240

void __thiscall
UMaterialInterface::GetAllFontParameterInfo
          (UMaterialInterface *this,
          TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147f3d24b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3b8))(this,5,param_1,param_2);
  return;
}

// GetAllParameterCollectionParameterInfo @ 147f3d260

void __thiscall
UMaterialInterface::GetAllParameterCollectionParameterInfo
          (UMaterialInterface *this,
          TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147f3d26b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3b8))(this,9,param_1,param_2);
  return;
}

// GetAllParameterInfoOfType @ 147f3d280

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInterface::GetAllParameterInfoOfType
          (UMaterialInterface *this,EMaterialParameterType param_1,
          TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_3)

{
  FMaterialCachedExpressionData *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  local_18 = 0;
  uStack_10 = 0;
  this_00 = (FMaterialCachedExpressionData *)(**(code **)(this->_padding_ + 0x2f0))(this,&local_18);
  FMaterialCachedExpressionData::GetAllParameterInfoOfType(this_00,param_1,param_2,param_3);
  return;
}

// GetAllParametersOfType @ 147f3e3b0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInterface::GetAllParametersOfType
          (UMaterialInterface *this,EMaterialParameterType param_1,
          TMap<FMaterialParameterInfo,FMaterialParameterMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>_>
          *param_2)

{
  FMaterialCachedExpressionData *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  
  TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
           *)param_2);
  local_18 = 0;
  uStack_10 = 0;
  this_00 = (FMaterialCachedExpressionData *)(**(code **)(this->_padding_ + 0x2f0))(this,&local_18);
  FMaterialCachedExpressionData::GetAllParametersOfType(this_00,param_1,param_2);
  return;
}

// GetAllRuntimeVirtualTextureParameterInfo @ 147f3e410

void __thiscall
UMaterialInterface::GetAllRuntimeVirtualTextureParameterInfo
          (UMaterialInterface *this,
          TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147f3e41b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3b8))(this,6,param_1,param_2);
  return;
}

// GetAllScalarParameterInfo @ 147f3e430

void __thiscall
UMaterialInterface::GetAllScalarParameterInfo
          (UMaterialInterface *this,
          TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147f3e43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3b8))(this,0,param_1,param_2);
  return;
}

// GetAllSparseVolumeTextureParameterInfo @ 147f3e580

void __thiscall
UMaterialInterface::GetAllSparseVolumeTextureParameterInfo
          (UMaterialInterface *this,
          TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147f3e58b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3b8))(this,7,param_1,param_2);
  return;
}

// GetAllTextureCollectionParameterInfo @ 147f3e5a0

void __thiscall
UMaterialInterface::GetAllTextureCollectionParameterInfo
          (UMaterialInterface *this,
          TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147f3e5ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3b8))(this,4,param_1,param_2);
  return;
}

// GetAllTextureParameterInfo @ 147f3e5c0

void __thiscall
UMaterialInterface::GetAllTextureParameterInfo
          (UMaterialInterface *this,
          TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147f3e5cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3b8))(this,3,param_1,param_2);
  return;
}

// GetAllVectorParameterInfo @ 147f3e5e0

void __thiscall
UMaterialInterface::GetAllVectorParameterInfo
          (UMaterialInterface *this,
          TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147f3e5eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3b8))(this,1,param_1,param_2);
  return;
}

// GetAssetUserDataOfClass @ 147f3e600

UAssetUserData * __thiscall
UMaterialInterface::GetAssetUserDataOfClass
          (UMaterialInterface *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar9 + *(longlong *)&(this->OnBaseMaterialSetEvent).field_0x18)
      ;
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_147f3e6ac;
LAB_147f3e6da:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_147f3e6da;
          UE::GC::MarkAsReachable(pUVar7);
LAB_147f3e6ac:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_147f3e6da;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_147f3e6da;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference);
  }
  return (UAssetUserData *)0x0;
}

// GetBaseMaterial @ 147f3e730

UMaterial * __thiscall UMaterialInterface::GetBaseMaterial(UMaterialInterface *this)

{
  UMaterial *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147f3e733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UMaterial *)(**(code **)(this->_padding_ + 0x2d8))();
  return pUVar1;
}

// GetBlendMode @ 147f3f0c0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

EBlendMode __thiscall UMaterialInterface::GetBlendMode(UMaterialInterface *this)

{
  return BLEND_Opaque;
}

// GetBlendableLocation @ 147f3f250

/* WARNING: Enum "EBlendableLocation": Some values do not have unique names */

EBlendableLocation __thiscall
UMaterialInterface::GetBlendableLocation(UMaterialInterface *this,UMaterial *param_1)

{
  code *pcVar1;
  bool bVar2;
  EBlendableLocation EVar3;
  
  if (param_1 != (UMaterial *)0x0) {
    return (EBlendableLocation)(param_1->BlendableLocation).Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Base",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                     ,0x56a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return (EBlendableLocation)bRam0000000000000200;
}

// GetBlendablePriority @ 147f3f3f0

int __thiscall UMaterialInterface::GetBlendablePriority(UMaterialInterface *this,UMaterial *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != (UMaterial *)0x0) {
    return param_1->BlendablePriority;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Base",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                     ,0x56f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return iRam0000000000000224;
}

// GetCachedExpressionData @ 147f3f510

FMaterialCachedExpressionData * __thiscall
UMaterialInterface::GetCachedExpressionData
          (UMaterialInterface *this,TMaterialRecursionGuard<UMaterialInterface> *param_1)

{
  FMaterialCachedExpressionData *pFVar1;
  FMaterialCachedExpressionData *pFVar2;
  
  pFVar1 = (this->CachedExpressionData).Ptr;
  pFVar2 = &FMaterialCachedExpressionData::EmptyData;
  if (pFVar1 != (FMaterialCachedExpressionData *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// GetCastDynamicShadowAsMasked @ 147f3f560

bool __thiscall UMaterialInterface::GetCastDynamicShadowAsMasked(UMaterialInterface *this)

{
  return false;
}

// GetDependencies @ 147f3f650

void __thiscall
UMaterialInterface::GetDependencies
          (UMaterialInterface *this,
          TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
          *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x208,L"Pure virtual not implemented (%s)");
  return;
}

// GetDisplacementFadeRange @ 147f3f740

FDisplacementFadeRange __thiscall
UMaterialInterface::GetDisplacementFadeRange(UMaterialInterface *this)

{
  FDisplacementFadeRange in_RDX;
  
  *(undefined4 *)in_RDX = 0x40800000;
  *(undefined4 *)((longlong)in_RDX + 4) = 0x3f800000;
  return in_RDX;
}

// GetDisplacementScaling @ 147f3f7e0

FDisplacementScaling __thiscall UMaterialInterface::GetDisplacementScaling(UMaterialInterface *this)

{
  FDisplacementScaling in_RDX;
  
  *(undefined4 *)in_RDX = 0x40800000;
  *(undefined4 *)((longlong)in_RDX + 4) = 0x3f000000;
  return in_RDX;
}

// GetDoubleVectorParameterDefaultValue @ 147f3f800

bool __thiscall
UMaterialInterface::GetDoubleVectorParameterDefaultValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,
          TVector4<double> *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  char local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x410))(this,2,param_1,&local_38,1);
  if (cVar2 == '\0') {
    return false;
  }
  if (local_18 != '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EMaterialParameterType::DoubleVector",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                       ,0x178,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  (param_2->field0_0x0)._s_0.X = local_38;
  (param_2->field0_0x0)._s_0.Y = dStack_30;
  (param_2->field0_0x0)._s_0.Z = local_28;
  (param_2->field0_0x0)._s_0.W = dStack_20;
  return true;
}

// GetDoubleVectorParameterValue @ 147f3f890

bool __thiscall
UMaterialInterface::GetDoubleVectorParameterValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,
          TVector4<double> *param_2,bool param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  char local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x410))(this,2,param_1,&local_38,!param_3 + '\x02');
  if (cVar2 == '\0') {
    return false;
  }
  if (local_18 != '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EMaterialParameterType::DoubleVector",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                       ,0x178,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  (param_2->field0_0x0)._s_0.X = local_38;
  (param_2->field0_0x0)._s_0.Y = dStack_30;
  (param_2->field0_0x0)._s_0.Z = local_28;
  (param_2->field0_0x0)._s_0.W = dStack_20;
  return true;
}

// GetFeatureLevelsToCompileForAllMaterials @ 147f3fb30

uint __cdecl UMaterialInterface::GetFeatureLevelsToCompileForAllMaterials(void)

{
  return 1 << ((byte)GMaxRHIFeatureLevel & 0x1f) | FeatureLevelsForAllMaterials;
}

// GetFeatureLevelsToCompileForRendering @ 147f3fb50

uint __thiscall UMaterialInterface::GetFeatureLevelsToCompileForRendering(UMaterialInterface *this)

{
  return 1 << ((byte)GMaxRHIFeatureLevel & 0x1f) | this->FeatureLevelsToForceCompile |
         FeatureLevelsForAllMaterials;
}

// GetFontParameterDefaultValue @ 147f3fb80

bool __thiscall
UMaterialInterface::GetFontParameterDefaultValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,UFont **param_2,
          int *param_3)

{
  char cVar1;
  UFont *local_38;
  int local_30;
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,5,param_1,&local_38,1);
  if (cVar1 != '\0') {
    *param_2 = local_38;
    *param_3 = local_30;
    return true;
  }
  return false;
}

// GetFontParameterValue @ 147f3fbf0

bool __thiscall
UMaterialInterface::GetFontParameterValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,UFont **param_2,
          int *param_3,bool param_4)

{
  char cVar1;
  UFont *local_38;
  int local_30;
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,5,param_1,&local_38,!param_4 + '\x02');
  if (cVar1 != '\0') {
    *param_2 = local_38;
    *param_3 = local_30;
    return true;
  }
  return false;
}

// GetHeight @ 147f3fcb0

int __thiscall UMaterialInterface::GetHeight(UMaterialInterface *this)

{
  return 0x122;
}

// GetLightingGuidChain @ 147f3fcd0

void __thiscall
UMaterialInterface::GetLightingGuidChain
          (UMaterialInterface *this,bool param_1,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  FMaterialCachedExpressionData *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  this_00 = (FMaterialCachedExpressionData *)(**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  FMaterialCachedExpressionData::AppendReferencedFunctionIdsTo(this_00,param_2);
  FMaterialCachedExpressionData::AppendReferencedParameterCollectionIdsTo(this_00,param_2);
  return;
}

// GetMaterial @ 147f3fde0

UMaterial * __thiscall UMaterialInterface::GetMaterial(UMaterialInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x1e2,L"Pure virtual not implemented (%s)");
  return (UMaterial *)0x0;
}

// GetMaterial @ 147f3fe10

UMaterial * __thiscall UMaterialInterface::GetMaterial(UMaterialInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x1e7,L"Pure virtual not implemented (%s)");
  return (UMaterial *)0x0;
}

// GetMaterialInheritanceChain @ 147f3ffb0

void __thiscall
UMaterialInterface::GetMaterialInheritanceChain
          (UMaterialInterface *this,FMaterialInheritanceChain *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x1ee,L"Pure virtual not implemented (%s)");
  return;
}

// GetMaterialLayers @ 147f400f0

bool __thiscall
UMaterialInterface::GetMaterialLayers
          (UMaterialInterface *this,FMaterialLayersFunctions *param_1,
          TMaterialRecursionGuard<UMaterialInterface> *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x279,L"Pure virtual not implemented (%s)");
  return false;
}

// GetMaterialResource @ 147f40280

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialResource * __thiscall
UMaterialInterface::GetMaterialResource
          (UMaterialInterface *this,EShaderPlatform param_1,Type param_2)

{
  return (FMaterialResource *)0x0;
}

// GetMaterialResource @ 147f40290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialResource * __thiscall
UMaterialInterface::GetMaterialResource
          (UMaterialInterface *this,EShaderPlatform param_1,Type param_2)

{
  return (FMaterialResource *)0x0;
}

// GetMaterial_Concurrent @ 147f40320

UMaterial * __thiscall
UMaterialInterface::GetMaterial_Concurrent
          (UMaterialInterface *this,TMaterialRecursionGuard<UMaterialInterface> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x1ec,L"Pure virtual not implemented (%s)");
  return (UMaterial *)0x0;
}

// GetMaxWorldPositionOffsetDisplacement @ 147f403e0

float __thiscall UMaterialInterface::GetMaxWorldPositionOffsetDisplacement(UMaterialInterface *this)

{
  return 0.0;
}

// GetNaniteOverride @ 147f40490

UMaterialInterface * __thiscall
UMaterialInterface::GetNaniteOverride
          (UMaterialInterface *this,TMaterialRecursionGuard<UMaterialInterface> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x27f,L"Pure virtual not implemented (%s)");
  return (UMaterialInterface *)0x0;
}

// GetNeuralProfile_Internal @ 147f404c0

UNeuralProfile * __thiscall UMaterialInterface::GetNeuralProfile_Internal(UMaterialInterface *this)

{
  return (UNeuralProfile *)0x0;
}

// GetOpacityMaskClipValue @ 147f40560

float __thiscall UMaterialInterface::GetOpacityMaskClipValue(UMaterialInterface *this)

{
  return 0.0;
}

// GetParameterCollectionParameterDefaultValue @ 147f40570

bool __thiscall
UMaterialInterface::GetParameterCollectionParameterDefaultValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,
          UMaterialParameterCollection **param_2)

{
  char cVar1;
  UMaterialParameterCollection *local_38 [4];
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,9,param_1,local_38,1);
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetParameterCollectionParameterValue @ 147f405d0

bool __thiscall
UMaterialInterface::GetParameterCollectionParameterValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,
          UMaterialParameterCollection **param_2,bool param_3)

{
  char cVar1;
  UMaterialParameterCollection *local_38 [4];
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,9,param_1,local_38,!param_3 + '\x02');
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetParameterDefaultValue @ 147f40640

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __thiscall
UMaterialInterface::GetParameterDefaultValue
          (UMaterialInterface *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FMaterialParameterMetadata *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x410))();
  return (bool)uVar1;
}

// GetParameterInfo @ 147f40660

FMaterialParameterInfo * __thiscall
UMaterialInterface::GetParameterInfo
          (UMaterialInterface *this,FMaterialParameterInfo *__return_storage_ptr__,
          EMaterialParameterAssociation param_1,FName param_2,UMaterialFunctionInterface *param_3)

{
  char cVar1;
  ForAnyElementType FVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined8 local_138;
  undefined8 uStack_130;
  FMaterialLayersFunctionsRuntimeData local_128;
  void *local_f8;
  undefined8 local_f0;
  FText *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  FText *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  iVar3 = -1;
  if (param_1 == GlobalParameter) {
LAB_147f40903:
    __return_storage_ptr__->Name = param_2;
    (__return_storage_ptr__->Association).Value = (uchar)param_1;
    __return_storage_ptr__->Index = iVar3;
  }
  else {
    if (param_3 != (UMaterialFunctionInterface *)0x0) {
      local_128.Layers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Layers.ArrayNum = 0;
      local_128.Layers.ArrayMax = 0;
      local_128.Blends.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Blends.ArrayNum = 0;
      local_128.Blends.ArrayMax = 0;
      local_128.LayerStackCache.Object = (FMaterialLayerStackFunctionsCache *)0x0;
      local_128.LayerStackCache.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_e8 = (FText *)0x0;
      local_e0 = 0;
      local_d8 = (void *)0x0;
      local_d0 = 0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_a8 = (void *)0x0;
      local_a0 = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_88 = (void *)0x0;
      local_80 = 0;
      local_78 = (FText *)0x0;
      local_70 = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_48 = (void *)0x0;
      local_40 = 0;
      local_38 = (void *)0x0;
      local_30 = 0;
      local_28 = (void *)0x0;
      local_20 = 0;
      local_138 = 0;
      uStack_130 = 0;
      cVar1 = (**(code **)(this->_padding_ + 0x3a0))(0,&local_128,&local_138);
      iVar3 = -1;
      if (cVar1 != '\0') {
        if (param_1 == BlendParameter) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_3);
          }
          for (FVar4.Data = local_128.Blends.AllocatorInstance.Data;
              FVar4.Data !=
              local_128.Blends.AllocatorInstance.Data + (longlong)local_128.Blends.ArrayNum * 8;
              FVar4.Data = FVar4.Data + 8) {
            FVar2.Data = local_128.Blends.AllocatorInstance.Data;
            if (*(UMaterialFunctionInterface **)FVar4.Data == param_3) goto LAB_147f408f7;
          }
        }
        else {
          if (param_1 != LayerParameter) goto LAB_147f407a7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_3);
          }
          for (FVar4.Data = local_128.Layers.AllocatorInstance.Data;
              FVar4.Data !=
              local_128.Layers.AllocatorInstance.Data + (longlong)local_128.Layers.ArrayNum * 8;
              FVar4.Data = FVar4.Data + 8) {
            FVar2.Data = local_128.Layers.AllocatorInstance.Data;
            if (*(UMaterialFunctionInterface **)FVar4.Data == param_3) goto LAB_147f408f7;
          }
        }
        iVar3 = -1;
      }
LAB_147f407a7:
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      DestructItems<FText,int>(local_78,(int)local_70);
      if (local_78 != (FText *)0x0) {
        FMemory::Free(local_78);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      DestructItems<FText,int>(local_e8,(int)local_e0);
      if (local_e8 != (FText *)0x0) {
        FMemory::Free(local_e8);
      }
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
      FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData(&local_128);
      if (iVar3 != -1) goto LAB_147f40903;
    }
    (__return_storage_ptr__->Name).ComparisonIndex = 0;
    (__return_storage_ptr__->Name).Number = 0;
    (__return_storage_ptr__->Association).Value = '\x02';
    __return_storage_ptr__->Index = -1;
  }
  return __return_storage_ptr__;
LAB_147f408f7:
  iVar3 = (int)((longlong)FVar4.Data - (longlong)FVar2.Data >> 3);
  goto LAB_147f407a7;
}

// GetParameterValue @ 147f421a0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */
/* WARNING: Enum "EMaterialGetParameterValueFlags": Some values do not have unique names */

bool __thiscall
UMaterialInterface::GetParameterValue
          (UMaterialInterface *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FMaterialParameterMetadata *param_3,
          EMaterialGetParameterValueFlags param_4)

{
  return false;
}

// GetPhysicalMaterial @ 147f42240

UPhysicalMaterial * __thiscall UMaterialInterface::GetPhysicalMaterial(UMaterialInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x217,L"Pure virtual not implemented (%s)");
  return (UPhysicalMaterial *)0x0;
}

// GetPhysicalMaterialFromMap @ 147f42290

UPhysicalMaterial * __thiscall
UMaterialInterface::GetPhysicalMaterialFromMap(UMaterialInterface *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x225,L"Pure virtual not implemented (%s)");
  return (UPhysicalMaterial *)0x0;
}

// GetPhysicalMaterialMask @ 147f422e0

UPhysicalMaterialMask * __thiscall
UMaterialInterface::GetPhysicalMaterialMask(UMaterialInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x21e,L"Pure virtual not implemented (%s)");
  return (UPhysicalMaterialMask *)0x0;
}

// GetPrivateStaticClass @ 147f438c0

UClass * __cdecl UMaterialInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInterface",
               &Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton,
               StaticRegisterNativesUMaterialInterface,0xe8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialInterface>,
               InternalVTableHelperCtorCaller<UMaterialInterface>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton;
}

// GetQualityLevelUsage @ 147f43a20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMaterialInterface::GetQualityLevelUsage
          (UMaterialInterface *this,
          TArray<bool,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_1,
          EShaderPlatform param_2,bool param_3)

{
  int *piVar1;
  int *piVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  UMaterialShaderQualitySettings *this_00;
  UShaderPlatformQualitySettings *this_01;
  FMaterialQualityOverrides *pFVar7;
  ForElementType<bool> _Dst;
  ForElementType<bool> FVar8;
  ForElementType<bool> *pFVar9;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = 0;
  uStack_30 = 0;
  lVar6 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_38);
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  iVar5 = *(int *)(lVar6 + 0x4c0);
  _Src = *(void **)(lVar6 + 0x4b8);
  *piVar2 = iVar5;
  if ((iVar5 == 0) && (param_1->ArrayMax == 0)) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
              (1,1,iVar5,param_1->ArrayMax,&param_1->AllocatorInstance,iVar5,piVar1);
    FVar8 = (param_1->AllocatorInstance).SecondaryData;
    _Dst = (ForElementType<bool>)param_1;
    if (FVar8 != (ForElementType<bool>)0x0) {
      _Dst = FVar8;
    }
    if (iVar5 != 0) {
      memcpy((void *)_Dst,_Src,(longlong)iVar5);
    }
  }
  pFVar9 = &(param_1->AllocatorInstance).SecondaryData;
  if (*piVar2 == 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                      (1,1,4,&param_1->AllocatorInstance,piVar2,piVar1);
    FVar8 = (ForElementType<bool>)param_1;
    if (*pFVar9 != (ForElementType<bool>)0x0) {
      FVar8 = *pFVar9;
    }
    *(undefined4 *)((longlong)iVar5 + (longlong)FVar8) = 0;
  }
  if (param_2 == SP_NumPlatforms) {
    return;
  }
  this_00 = UMaterialShaderQualitySettings::Get();
  this_01 = UMaterialShaderQualitySettings::GetShaderPlatformQualitySettings(this_00,param_2);
  pFVar7 = UShaderPlatformQualitySettings::GetQualityOverrides(this_01,Low);
  if ((param_3) && (pFVar7->bDiscardQualityDuringCook != false)) {
    if ((*piVar2 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar8 = (ForElementType<bool>)param_1;
    if (*pFVar9 != (ForElementType<bool>)0x0) {
      FVar8 = *pFVar9;
    }
    *(undefined1 *)FVar8 = 0;
    pFVar7 = UShaderPlatformQualitySettings::GetQualityOverrides(this_01,High);
LAB_147f43c1f:
    if (pFVar7->bDiscardQualityDuringCook == false) goto LAB_147f43c84;
    if ((*piVar2 < 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar8 = (ForElementType<bool>)param_1;
    if (*pFVar9 != (ForElementType<bool>)0x0) {
      FVar8 = *pFVar9;
    }
    *(uchar *)((longlong)FVar8 + 1) = '\0';
    pFVar7 = UShaderPlatformQualitySettings::GetQualityOverrides(this_01,Medium);
LAB_147f43d05:
    if (pFVar7->bDiscardQualityDuringCook == false) goto LAB_147f43d6a;
    if ((*piVar2 < 3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar8 = (ForElementType<bool>)param_1;
    if (*pFVar9 != (ForElementType<bool>)0x0) {
      FVar8 = *pFVar9;
    }
    *(uchar *)((longlong)FVar8 + 2) = '\0';
    pFVar7 = UShaderPlatformQualitySettings::GetQualityOverrides(this_01,Epic);
  }
  else {
    if ((pFVar7->bEnableOverride != false) &&
       ((bVar4 = FMaterialQualityOverrides::HasAnyOverridesSet(pFVar7), bVar4 &&
        (bVar4 = FMaterialQualityOverrides::CanOverride(pFVar7,param_2), bVar4)))) {
      if ((*piVar2 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar8 = (ForElementType<bool>)param_1;
      if (*pFVar9 != (ForElementType<bool>)0x0) {
        FVar8 = *pFVar9;
      }
      *(undefined1 *)FVar8 = 1;
    }
    pFVar7 = UShaderPlatformQualitySettings::GetQualityOverrides(this_01,High);
    if (param_3) goto LAB_147f43c1f;
LAB_147f43c84:
    if (((pFVar7->bEnableOverride != false) &&
        (bVar4 = FMaterialQualityOverrides::HasAnyOverridesSet(pFVar7), bVar4)) &&
       (bVar4 = FMaterialQualityOverrides::CanOverride(pFVar7,param_2), bVar4)) {
      if ((*piVar2 < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar8 = (ForElementType<bool>)param_1;
      if (*pFVar9 != (ForElementType<bool>)0x0) {
        FVar8 = *pFVar9;
      }
      *(uchar *)((longlong)FVar8 + 1) = '\x01';
    }
    pFVar7 = UShaderPlatformQualitySettings::GetQualityOverrides(this_01,Medium);
    if (param_3) goto LAB_147f43d05;
LAB_147f43d6a:
    if (((pFVar7->bEnableOverride != false) &&
        (bVar4 = FMaterialQualityOverrides::HasAnyOverridesSet(pFVar7), bVar4)) &&
       (bVar4 = FMaterialQualityOverrides::CanOverride(pFVar7,param_2), bVar4)) {
      if ((*piVar2 < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar8 = (ForElementType<bool>)param_1;
      if (*pFVar9 != (ForElementType<bool>)0x0) {
        FVar8 = *pFVar9;
      }
      *(uchar *)((longlong)FVar8 + 2) = '\x01';
    }
    pFVar7 = UShaderPlatformQualitySettings::GetQualityOverrides(this_01,Epic);
    if (!param_3) goto LAB_147f43e3d;
  }
  if (pFVar7->bDiscardQualityDuringCook != false) {
    if ((*piVar2 < 4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*pFVar9 != (ForElementType<bool>)0x0) {
      param_1 = (TArray<bool,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)*pFVar9;
    }
    *(uchar *)((longlong)param_1 + 3) = '\0';
    return;
  }
LAB_147f43e3d:
  if (((pFVar7->bEnableOverride != false) &&
      (bVar4 = FMaterialQualityOverrides::HasAnyOverridesSet(pFVar7), bVar4)) &&
     (bVar4 = FMaterialQualityOverrides::CanOverride(pFVar7,param_2), bVar4)) {
    if ((*piVar2 < 4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*pFVar9 != (ForElementType<bool>)0x0) {
      param_1 = (TArray<bool,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)*pFVar9;
    }
    *(uchar *)((longlong)param_1 + 3) = '\x01';
  }
  return;
}

// GetReferencedTextureCollections @ 147f43ed0

TArrayView<TObjectPtr<UTextureCollection>_const_,int> * __thiscall
UMaterialInterface::GetReferencedTextureCollections
          (UMaterialInterface *this,
          TArrayView<TObjectPtr<UTextureCollection>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  TArrayView<TObjectPtr<UTextureCollection>_const_,int> *pTVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar4 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  iVar1 = *(int *)(lVar4 + 0x418);
  __return_storage_ptr__->DataPtr = *(TObjectPtr<UTextureCollection> **)(lVar4 + 0x410);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TObjectPtr<UTextureCollection>_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetReferencedTextures @ 147f43f50

TArrayView<TObjectPtr<UObject>_const_,int> * __thiscall
UMaterialInterface::GetReferencedTextures
          (UMaterialInterface *this,
          TArrayView<TObjectPtr<UObject>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  TArrayView<TObjectPtr<UObject>_const_,int> *pTVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar4 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  iVar1 = *(int *)(lVar4 + 0x408);
  __return_storage_ptr__->DataPtr = *(TObjectPtr<UObject> **)(lVar4 + 0x400);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TObjectPtr<UObject>_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetRefractionSettings @ 147f441a0

bool __thiscall UMaterialInterface::GetRefractionSettings(UMaterialInterface *this,float *param_1)

{
  return false;
}

// GetRelevance @ 147f441b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UMaterialInterface::GetRelevance(UMaterialInterface *this,EShaderPlatform param_1)

{
  EShaderPlatform EVar1;
  undefined6 in_register_00000012;
  FMaterialRelevance_u_0 FVar2;
  
  FVar2.Raw._2_6_ = in_register_00000012;
  FVar2.Raw._0_2_ = param_1;
  EVar1 = (**(code **)(this->_padding_ + 0x2d0))();
  GetRelevance_Internal(this,(UMaterial *)FVar2,EVar1);
  return (FMaterialRelevance)FVar2;
}

// GetRelevance @ 147f44200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UMaterialInterface::GetRelevance(UMaterialInterface *this,Type param_1)

{
  EShaderPlatform EVar1;
  undefined4 in_register_00000014;
  FMaterialRelevance_u_0 FVar2;
  
  FVar2.Raw._4_4_ = in_register_00000014;
  FVar2.Raw._0_4_ = param_1;
  EVar1 = (**(code **)(this->_padding_ + 0x2d0))();
  GetRelevance_Internal(this,(UMaterial *)FVar2,EVar1);
  return (FMaterialRelevance)FVar2;
}

// GetRelevance_Concurrent @ 147f44270

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UMaterialInterface::GetRelevance_Concurrent(UMaterialInterface *this,EShaderPlatform param_1)

{
  EShaderPlatform EVar1;
  undefined6 in_register_00000012;
  FMaterialRelevance_u_0 FVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FVar2.Raw._2_6_ = in_register_00000012;
  FVar2.Raw._0_2_ = param_1;
  local_18 = 0;
  uStack_10 = 0;
  EVar1 = (**(code **)(this->_padding_ + 0x2e0))(0,&local_18);
  GetRelevance_Internal(this,(UMaterial *)FVar2,EVar1);
  return (FMaterialRelevance)FVar2;
}

// GetRelevance_Concurrent @ 147f442d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UMaterialInterface::GetRelevance_Concurrent(UMaterialInterface *this,Type param_1)

{
  EShaderPlatform EVar1;
  undefined4 in_register_00000014;
  FMaterialRelevance_u_0 FVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FVar2.Raw._4_4_ = in_register_00000014;
  FVar2.Raw._0_4_ = param_1;
  local_18 = 0;
  uStack_10 = 0;
  EVar1 = (**(code **)(this->_padding_ + 0x2e0))(0,&local_18);
  GetRelevance_Internal(this,(UMaterial *)FVar2,EVar1);
  return (FMaterialRelevance)FVar2;
}

// GetRelevance_Internal @ 147f44350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

FMaterialRelevance __thiscall
UMaterialInterface::GetRelevance_Internal
          (UMaterialInterface *this,UMaterial *param_1,EShaderPlatform param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  Type TVar15;
  ESubstrateTileType EVar16;
  FMaterial *this_00;
  FMaterialRelevance FVar17;
  ushort *puVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  undefined6 in_register_00000082;
  longlong *plVar21;
  FStaticShaderPlatform in_R9W;
  byte bVar22;
  byte bVar23;
  byte local_res18 [16];
  byte local_78;
  byte local_77 [7];
  undefined8 local_70;
  EBlendMode local_68;
  ushort local_64;
  Type local_60;
  uint local_5c;
  ForAnyElementType local_58;
  uint local_50;
  int local_4c;
  ushort *local_48;
  
  plVar21 = (longlong *)CONCAT62(in_register_00000082,param_2);
  bVar22 = 0;
  uVar19 = (ulonglong)in_R9W.Platform;
  if (plVar21 == (longlong *)0x0) {
LAB_147f449ac:
    param_1->_padding_ = 0;
    return (FMaterialRelevance)(FMaterialRelevance_u_0)param_1;
  }
  this_00 = (FMaterial *)
            (**(code **)(this->_padding_ + 0x380))
                      (this,uVar19,CONCAT71((int7)((ulonglong)plVar21 >> 8),4));
  if ((this_00 == (FMaterial *)0x0) || (this_00[1]._padding_ == 0)) {
    this_00 = (FMaterial *)(**(code **)(*plVar21 + 0x380))(plVar21,in_R9W.Platform,4);
    if (this_00 == (FMaterial *)0x0) goto LAB_147f449ac;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar19].bContainsValidPlatformInfo == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      FVar17.field0_0x0 = (FMaterialRelevance_u_0)(*pcVar2)();
      return (FMaterialRelevance)FVar17.field0_0x0;
    }
  }
  TVar15 = FGenericDataDrivenShaderPlatformInfo::Infos[uVar19].MaxFeatureLevel;
  local_60 = TVar15;
  puVar18 = (ushort *)(**(code **)(this_00->_padding_ + 0x280))(this_00,local_res18);
  local_64 = *puVar18 >> 10 & 0xff01;
  bVar23 = 0;
  if ((TVar15 == ES3_1) && ((char)local_64 != '\0')) {
    bVar5 = MobileSupportsSM5MaterialNodes(in_R9W);
    local_res18[0] = 1;
    if (bVar5) goto LAB_147f4444f;
  }
  else {
LAB_147f4444f:
    local_res18[0] = 0;
  }
  local_48 = (ushort *)(**(code **)(this_00->_padding_ + 0x280))(this_00,&local_68);
  local_50 = 2;
  local_70 = &DAT_400000001;
  local_58.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_58,2,&local_4c);
  uVar4 = local_50;
  *(undefined1 **)local_58.Data = local_70;
  uVar19 = (ulonglong)(int)local_50;
  pFVar1 = local_58.Data + uVar19 * 4;
  FVar20.Data = local_58.Data;
  while( true ) {
    if ((uint)uVar19 != uVar4) {
      `TCheckedPointerIterator<enum_EMaterialShadingModel_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_77);
      uVar19 = (ulonglong)local_50;
    }
    if (FVar20.Data == pFVar1) goto LAB_147f44511;
    if ((*local_48 >> ((byte)*FVar20.Data & 0x1f) & 1) != 0) break;
    FVar20.Data = FVar20.Data + 4;
  }
  bVar5 = FMaterial::MaterialUsesAnisotropy_GameThread(this_00);
  local_78 = 8;
  if (!bVar5) {
LAB_147f44511:
    local_78 = 0;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  local_68 = (**(code **)(this->_padding_ + 0x460))(this);
  bVar5 = IsTranslucentBlendMode(local_68);
  if ((bVar5) || (local_res18[0] != 0)) {
    bVar13 = 1;
  }
  else {
    bVar13 = 0;
  }
  iVar14 = (**(code **)(this_00->_padding_ + 0x40))(this_00);
  local_70 = (undefined1 *)0x0;
  puVar18 = (ushort *)(**(code **)(this->_padding_ + 0x468))(this,&local_5c);
  local_48 = (ushort *)CONCAT44(local_48._4_4_,(uint)*puVar18);
  local_77[0] = FMaterial::GetCustomDepthStencilUsageMask_GameThread(this_00);
  local_70 = (undefined1 *)
             (CONCAT35(local_70._5_3_,CONCAT14(local_77[0],(undefined4)local_70)) &
             0xffffff03ffffffff);
  if (iVar14 == 1) {
    bVar22 = 8;
  }
  local_5c = (uint)(bVar22 | local_70._6_1_ & 0xf7);
  if (((char)plVar21[0x29] == '\x05') || ((char)plVar21[0x29] == '\x01')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  bVar22 = 0;
  if ((bVar13 != 0) && (bVar22 = 0, bVar5)) {
    if (local_60 == ES3_1) {
      bVar22 = *(byte *)((longlong)plVar21 + 0x1a4) & 1;
    }
    else {
      bVar22 = *(byte *)((longlong)plVar21 + 0x1a2);
    }
  }
  cVar6 = (**(code **)(this_00->_padding_ + 0x318))(this_00);
  if (cVar6 == '\0') {
    bVar5 = IsModulateBlendMode(local_68);
    local_res18[0] = 0;
    if (bVar5) goto LAB_147f44616;
  }
  else {
LAB_147f44616:
    local_res18[0] = 1;
  }
  bVar7 = FMaterial::MaterialGetSubstrateClosureCount_GameThread(this_00);
  bVar8 = 1;
  if (1 < bVar7) {
    bVar8 = bVar7;
  }
  bVar7 = 8;
  if ((int)(bVar8 - 1) < 8) {
    bVar7 = (byte)(bVar8 - 1);
  }
  local_68 = (EBlendMode)(byte)('\x01' << (bVar7 & 0x1f));
  bVar8 = FMaterial::MaterialGetSubstrateUintPerPixel_GameThread(this_00);
  local_60 = 1;
  if (1 < bVar8) {
    local_60 = (uint)bVar8;
  }
  bVar8 = (**(code **)(this->_padding_ + 0x4b0))(this);
  cVar6 = (**(code **)(this_00->_padding_ + 0x2a8))(this_00);
  bVar7 = local_77[0] & 3;
  bVar8 = (cVar6 * '\x02' | bVar8 & 1) * '\x02';
  TVar15 = FGenericDataDrivenShaderPlatformInfo::GetMaxFeatureLevel(in_R9W);
  if ((int)TVar15 < 3) {
LAB_147f446dc:
    bVar12 = 0;
  }
  else {
    cVar6 = (**(code **)(this_00->_padding_ + 0x1d0))(this_00);
    if (cVar6 == '\0') goto LAB_147f446dc;
    bVar5 = IsOpaqueOrMaskedBlendMode(this_00);
    if (!bVar5) goto LAB_147f446dc;
    bVar12 = 0x20;
  }
  bVar9 = (**(code **)(this_00->_padding_ + 0x48))(this_00);
  uVar19 = (ulonglong)local_70;
  bVar9 = (bVar9 & 1) << 6;
  if ((bVar13 == 0) || (bVar22 != 1)) {
    local_70._0_5_ =
         CONCAT14(bVar9 | (bVar8 & 7 | bVar13 ^ 1) << 2 | bVar7 | bVar12,(undefined4)local_70);
    uVar3 = (ulonglong)local_70;
    if (bVar22 == 2) {
      bVar23 = 2;
    }
    local_70._5_1_ = SUB81(uVar19,5);
    bVar23 = bVar23 | local_70._5_1_ & 0xfc | local_res18[0];
    local_70 = (undefined1 *)uVar3;
    if ((bVar13 == 0) || (bVar22 != 0)) goto LAB_147f44716;
    bVar23 = bVar23 | 4;
LAB_147f44723:
    if ((*(byte *)(plVar21 + 0x3b) & 1) == 0) goto LAB_147f44771;
    bVar22 = local_70._7_1_ | 4;
LAB_147f44780:
    bVar5 = FMaterial::RequiresSceneColorCopy_GameThread(this_00);
    local_res18[0] = 8;
    if (bVar5) goto LAB_147f4479c;
  }
  else {
    local_70 = (undefined1 *)
               (CONCAT35(local_70._5_3_,
                         CONCAT14(bVar9 | (bVar8 & 0x27 | bVar13 ^ 1) << 2 | bVar7 | bVar12,
                                  (undefined4)local_70)) | 0x8000000000);
    bVar23 = local_res18[0];
LAB_147f44716:
    bVar23 = bVar23 & 0xfb;
    if (bVar13 != 0) goto LAB_147f44723;
LAB_147f44771:
    bVar22 = 0;
    if (bVar13 != 0) goto LAB_147f44780;
  }
  local_res18[0] = 0;
LAB_147f4479c:
  bVar8 = (**(code **)(this_00->_padding_ + 0x68))(this_00);
  bVar5 = FMaterial::UsesGlobalDistanceField_GameThread(this_00);
  bVar10 = FMaterial::MaterialUsesWorldPositionOffset_GameThread(this_00);
  bVar11 = FMaterial::MaterialUsesDisplacement_GameThread(this_00);
  local_70._0_6_ =
       CONCAT15((((bVar11 * '\x02' | bVar10) * '\x02' | bVar5) * '\x02' | bVar8 & 1) << 4 |
                bVar23 & 7 | local_res18[0],(undefined5)local_70);
  bVar5 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(this_00);
  bVar23 = (byte)local_5c;
  iVar14 = (**(code **)(this_00->_padding_ + 0x290))(this_00);
  if ((bVar13 == 0) || (1 < iVar14 - 4U)) {
    bVar13 = 0;
  }
  else {
    bVar13 = 0x10;
  }
  bVar10 = FMaterial::MaterialUsesSceneDepthLookup_GameThread(this_00);
  bVar7 = (**(code **)(this_00->_padding_ + 0xf0))(this_00);
  bVar11 = FMaterial::MaterialUsesDistanceCullFade_GameThread(this_00);
  bVar8 = *(byte *)((longlong)plVar21 + 0x1fe);
  cVar6 = (char)local_64;
  iVar14 = (**(code **)(this_00->_padding_ + 0x420))(this_00);
  bVar12 = (**(code **)(this_00->_padding_ + 0x478))(this_00);
  bVar9 = 0;
  if (0 < iVar14) {
    bVar9 = 2;
  }
  local_70._0_7_ =
       CONCAT16((bVar12 & 1) << 2 | bVar9 |
                (bVar8 & 8 | cVar6 << 4) << 3 | bVar10 << 5 | bVar5 | bVar23 & 8 | bVar13,
                (undefined6)local_70);
  EVar16 = FMaterial::MaterialGetSubstrateTileType_GameThread(this_00);
  local_70 = (undefined1 *)
             CONCAT44(local_70._4_4_,
                      0x4000 << ((byte)EVar16 & 0x1f) & 0x3c000U |
                      (local_60 & 0x3f | (local_68 & 0xff) << 6) << 0x12 | (uint)local_48 & 0x3fff);
  bVar5 = FMaterial::MaterialIsLightFunctionAtlasCompatible_GameThread(this_00);
  bVar23 = (**(code **)(this_00->_padding_ + 0x1a8))(this_00);
  bVar13 = (**(code **)(this_00->_padding_ + 0x1b0))(this_00);
  cVar6 = (**(code **)(this_00->_padding_ + 0x488))(this_00);
  local_70 = (undefined1 *)
             CONCAT17((((cVar6 * '\x02' | bVar13 & 1) * '\x02' | bVar23 & 1) * '\x02' | bVar5) << 4
                      | bVar11 * '\x02' | bVar7 & 1 | bVar22 & 4 | local_78,(undefined7)local_70);
  param_1->_padding_ = (longlong)local_70;
  return (FMaterialRelevance)(FMaterialRelevance_u_0)param_1;
}

// GetRelevance_Internal @ 147f449d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
UMaterialInterface::GetRelevance_Internal(UMaterialInterface *this,UMaterial *param_1,Type param_2)

{
  int in_R9D;
  
  if (in_R9D == 5) {
    GetRelevance_Internal(this,param_1,(EShaderPlatform)param_2);
    return (FMaterialRelevance)(FMaterialRelevance_u_0)param_1;
  }
  GetRelevance_Internal(this,param_1,(EShaderPlatform)param_2);
  return (FMaterialRelevance)(FMaterialRelevance_u_0)param_1;
}

// GetRenderProxy @ 147f44a30

FMaterialRenderProxy * __thiscall UMaterialInterface::GetRenderProxy(UMaterialInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x210,L"Pure virtual not implemented (%s)");
  return (FMaterialRenderProxy *)0x0;
}

// GetRuntimeVirtualTextureParameterDefaultValue @ 147f44d60

bool __thiscall
UMaterialInterface::GetRuntimeVirtualTextureParameterDefaultValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,
          URuntimeVirtualTexture **param_2)

{
  char cVar1;
  URuntimeVirtualTexture *local_38 [4];
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,6,param_1,local_38,1);
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetRuntimeVirtualTextureParameterValue @ 147f44dc0

bool __thiscall
UMaterialInterface::GetRuntimeVirtualTextureParameterValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,
          URuntimeVirtualTexture **param_2,bool param_3)

{
  char cVar1;
  URuntimeVirtualTexture *local_38 [4];
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,6,param_1,local_38,!param_3 + '\x02');
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetScalarParameterDefaultValue @ 147f44e30

bool __thiscall
UMaterialInterface::GetScalarParameterDefaultValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,float *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  float local_38 [8];
  char local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x410))(this,0,param_1,local_38,1);
  if (cVar2 == '\0') {
    return false;
  }
  if (local_18 != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EMaterialParameterType::Scalar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                       ,0x176,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  *param_2 = local_38[0];
  return true;
}

// GetScalarParameterValue @ 147f44ec0

bool __thiscall
UMaterialInterface::GetScalarParameterValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,float *param_2,
          bool param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  float local_38 [8];
  char local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x410))(this,0,param_1,local_38,!param_3 + '\x02');
  if (cVar2 == '\0') {
    return false;
  }
  if (local_18 != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EMaterialParameterType::Scalar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                       ,0x176,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  *param_2 = local_38[0];
  return true;
}

// GetShadingModels @ 147f44fc0

FMaterialShadingModelField __thiscall UMaterialInterface::GetShadingModels(UMaterialInterface *this)

{
  undefined2 *in_RDX;
  
  *in_RDX = 2;
  return (FMaterialShadingModelField)(ushort)in_RDX;
}

// GetSparseVolumeTextureParameterDefaultValue @ 147f44fd0

bool __thiscall
UMaterialInterface::GetSparseVolumeTextureParameterDefaultValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,
          USparseVolumeTexture **param_2)

{
  char cVar1;
  USparseVolumeTexture *local_38 [4];
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,7,param_1,local_38,1);
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetSparseVolumeTextureParameterValue @ 147f45030

bool __thiscall
UMaterialInterface::GetSparseVolumeTextureParameterValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,
          USparseVolumeTexture **param_2,bool param_3)

{
  char cVar1;
  USparseVolumeTexture *local_38 [4];
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,7,param_1,local_38,!param_3 + '\x02');
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetSpecularProfileOverride_Internal @ 147f450e0

USpecularProfile * __thiscall
UMaterialInterface::GetSpecularProfileOverride_Internal(UMaterialInterface *this)

{
  return (USpecularProfile *)0x0;
}

// GetSpecularProfile_Internal @ 147f45110

USpecularProfile * __thiscall
UMaterialInterface::GetSpecularProfile_Internal(UMaterialInterface *this,uint param_1)

{
  return (USpecularProfile *)0x0;
}

// GetSubstrateCompilationConfig @ 147f45230

FSubstrateCompilationConfig * __thiscall
UMaterialInterface::GetSubstrateCompilationConfig(UMaterialInterface *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2e0))(0,&local_18);
  if (lVar1 != 0) {
    return (FSubstrateCompilationConfig *)(lVar1 + 0x23e);
  }
  return &DefaultFSubstrateCompilationConfig;
}

// GetSubsurfaceProfileOverride_Internal @ 147f452a0

USubsurfaceProfile * __thiscall
UMaterialInterface::GetSubsurfaceProfileOverride_Internal(UMaterialInterface *this)

{
  return (USubsurfaceProfile *)0x0;
}

// GetSubsurfaceProfileRoot_Internal @ 147f452f0

USubsurfaceProfile * __thiscall
UMaterialInterface::GetSubsurfaceProfileRoot_Internal(UMaterialInterface *this,uint param_1)

{
  return (USubsurfaceProfile *)0x0;
}

// GetSubsurfaceProfileRoot_Internal @ 147f45300

USubsurfaceProfile * __thiscall
UMaterialInterface::GetSubsurfaceProfileRoot_Internal(UMaterialInterface *this)

{
  return (USubsurfaceProfile *)0x0;
}

// GetSubsurfaceProfile_Internal @ 147f45340

USubsurfaceProfile * __thiscall
UMaterialInterface::GetSubsurfaceProfile_Internal(UMaterialInterface *this)

{
  return (USubsurfaceProfile *)0x0;
}

// GetTextureCollectionParameterDefaultValue @ 147f45420

bool __thiscall
UMaterialInterface::GetTextureCollectionParameterDefaultValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,
          UTextureCollection **param_2)

{
  char cVar1;
  UTextureCollection *local_38 [4];
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,4,param_1,local_38,1);
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetTextureCollectionParameterValue @ 147f454f0

bool __thiscall
UMaterialInterface::GetTextureCollectionParameterValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,
          UTextureCollection **param_2,bool param_3)

{
  char cVar1;
  UTextureCollection *local_38 [4];
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,4,param_1,local_38,!param_3 + '\x02');
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetTextureDensity @ 147f45870

float __thiscall
UMaterialInterface::GetTextureDensity
          (UMaterialInterface *this,FName param_1,FMeshUVChannelInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_res18 [2];
  int local_res20 [2];
  
  if ((param_2->bInitialized == false) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8716324033433434120>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                         ,0x7f8,"UVChannelData.bInitialized"), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar9 = (float)(*pcVar2)();
    return fVar9;
  }
  local_res20[0] = -1;
  local_res18[0] = -1;
  bVar3 = FindTextureStreamingDataIndexRange(this,param_1,local_res20,local_res18);
  fVar9 = __real_322bcc77;
  if (!bVar3) {
    return 0.0;
  }
  uVar8 = (ulonglong)local_res20[0];
  fVar10 = 0.0;
  if (local_res20[0] <= local_res18[0]) {
    lVar5 = uVar8 << 4;
    fVar11 = fVar10;
    do {
      uVar7 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar7 < (this->TextureStreamingData).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar9 = (float)(*pcVar2)();
        return fVar9;
      }
      pFVar1 = (this->TextureStreamingData).AllocatorInstance.Data;
      if (((*(FName *)(pFVar1 + lVar5 + 8) == (FName)0x0) || (*(float *)(pFVar1 + lVar5) <= fVar9))
         || (pFVar6 = pFVar1 + lVar5 + 4, 3 < *(uint *)pFVar6)) {
        pFVar6 = pFVar1 + lVar5 + 4;
LAB_147f459d6:
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8716324033433434109>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                           ,0x803,
                           "MatchingData.IsValid() && MatchingData.TextureName == TextureName");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          fVar9 = (float)(*pcVar2)();
          return fVar9;
        }
      }
      else if (*(FName *)(pFVar1 + lVar5 + 8) != param_1) goto LAB_147f459d6;
      uVar8 = (ulonglong)(uVar7 + 1);
      fVar10 = param_2->LocalUVDensities[(int)*(uint *)pFVar6] / *(float *)(pFVar1 + lVar5);
      lVar5 = lVar5 + 0x10;
      if (fVar10 <= fVar11) {
        fVar10 = fVar11;
      }
      fVar11 = fVar10;
    } while ((int)(uVar7 + 1) <= local_res18[0]);
  }
  return fVar10;
}

// GetTextureDensityWithCache @ 147f45a80

float __thiscall
UMaterialInterface::GetTextureDensityWithCache
          (UMaterialInterface *this,FTextureSamplingInfo *param_1,FMeshUVChannelInfo *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTextureSamplingInfo *pFVar4;
  FTextureSamplingInfo *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 local_res10 [8];
  
  if (param_1->bIsValid == false) {
    return 0.0;
  }
  if ((this->CachedTexturesSamplingInfo).bIsSet != false) {
    iVar1 = (this->CachedTexturesSamplingInfo).TypedValue.TextureSamplingInfos.ArrayNum;
    pFVar4 = (FTextureSamplingInfo *)
             (this->CachedTexturesSamplingInfo).TypedValue.TextureSamplingInfos.AllocatorInstance.
             Data;
    pFVar5 = pFVar4 + iVar1;
    while( true ) {
      if ((this->CachedTexturesSamplingInfo).TypedValue.TextureSamplingInfos.ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FTextureSamplingInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar5) goto LAB_147f45afd;
      if (pFVar4 == param_1) break;
      pFVar4 = pFVar4 + 1;
    }
    if (pFVar4 != (FTextureSamplingInfo *)0x0) goto LAB_147f45b23;
  }
LAB_147f45afd:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CachedTexturesSamplingInfo && Algo::FindByPredicate(CachedTexturesSamplingInfo->TextureSamplingInfos, [&TextureSamplingInfo](const FTextureSamplingInfo& Info) { return &Info == &TextureSamplingInfo; })"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                     ,0x7e8,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    fVar6 = (float)(*pcVar2)();
    return fVar6;
  }
LAB_147f45b23:
  fVar6 = param_2->LocalUVDensities[0] / (param_1->ChannelMinSamplingScale).Elements[0];
  fVar7 = param_2->LocalUVDensities[1] / (param_1->ChannelMinSamplingScale).Elements[1];
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar8 = param_2->LocalUVDensities[2] / (param_1->ChannelMinSamplingScale).Elements[2];
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  fVar7 = param_2->LocalUVDensities[3] / (param_1->ChannelMinSamplingScale).Elements[3];
  if (fVar6 <= fVar8) {
    fVar6 = fVar8;
  }
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  fVar7 = 0.0;
  if (__real_322bcc77 < (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar7 = fVar6;
  }
  return fVar7;
}

// GetTextureParameterDefaultValue @ 147f46010

bool __thiscall
UMaterialInterface::GetTextureParameterDefaultValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,UTexture **param_2)

{
  char cVar1;
  UTexture *local_38 [4];
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,3,param_1,local_38,1);
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetTextureParameterValue @ 147f460e0

bool __thiscall
UMaterialInterface::GetTextureParameterValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,UTexture **param_2,
          bool param_3)

{
  char cVar1;
  UTexture *local_38 [4];
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,3,param_1,local_38,!param_3 + '\x02');
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetUsedTextures @ 147f468d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMaterialInterface::GetUsedTextures
          (UMaterialInterface *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          TOptional<EMaterialQualityLevel::Type> param_2,TOptional<EShaderPlatform> param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x23d,L"Pure virtual not implemented (%s)");
  return;
}

// GetUsedTexturesAndIndices @ 147f46a90

void __thiscall
UMaterialInterface::GetUsedTexturesAndIndices
          (UMaterialInterface *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          Type param_3,Type param_4)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(this->_padding_ + 0x340);
  if (param_4 == Num) {
                    /* WARNING: Could not recover jumptable at 0x000147f46aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f46ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}

// GetUsedTexturesAndIndices @ 147f46ad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMaterialInterface::GetUsedTexturesAndIndices
          (UMaterialInterface *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          Type param_3,EShaderPlatform param_4)

{
  Type local_res20 [8];
  undefined1 uStack000000000000002a;
  
  uStack000000000000002a = 1;
  local_res20[1] = 1;
  local_res20[0] = param_3;
  (**(code **)(this->_padding_ + 0x330))(this,param_1,local_res20,&param_4);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
            (param_2,param_1->ArrayNum);
  return;
}

// GetUserSceneTextureOutput @ 147f46b30

FName __thiscall
UMaterialInterface::GetUserSceneTextureOutput(UMaterialInterface *this,UMaterial *param_1)

{
  char cVar1;
  longlong in_R8;
  
  param_1->_padding_ = 0;
  if (*(char *)(in_R8 + 0x200) != '\x03') {
    cVar1 = (**(code **)(this->_padding_ + 0x438))();
    if (cVar1 == '\0') {
      param_1->_padding_ = *(longlong *)(in_R8 + 0x204);
    }
  }
  return (FName)param_1;
}

// GetUserSceneTextureOverride @ 147f46cd0

bool __thiscall
UMaterialInterface::GetUserSceneTextureOverride(UMaterialInterface *this,FName *param_1)

{
  return false;
}

// GetVectorParameterDefaultValue @ 147f46d80

bool __thiscall
UMaterialInterface::GetVectorParameterDefaultValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,FLinearColor *param_2
          )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x410))(this,1,param_1,&local_38,1);
  if (cVar2 == '\0') {
    return false;
  }
  if (local_18 != '\x01') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EMaterialParameterType::Vector",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                       ,0x177,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  *(undefined8 *)&param_2->field0_0x0 = local_38;
  *(undefined8 *)((longlong)&param_2->field0_0x0 + 8) = uStack_30;
  return true;
}

// GetVectorParameterValue @ 147f46e10

bool __thiscall
UMaterialInterface::GetVectorParameterValue
          (UMaterialInterface *this,FMemoryImageMaterialParameterInfo *param_1,FLinearColor *param_2
          ,bool param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x410))(this,1,param_1,&local_38,!param_3 + '\x02');
  if (cVar2 == '\0') {
    return false;
  }
  if (local_18 != '\x01') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EMaterialParameterType::Vector",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                       ,0x177,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  *(undefined8 *)&param_2->field0_0x0 = local_38;
  *(undefined8 *)((longlong)&param_2->field0_0x0 + 8) = uStack_30;
  return true;
}

// GetWidth @ 147f46ea0

int __thiscall UMaterialInterface::GetWidth(UMaterialInterface *this)

{
  return 0x110;
}

// HasCustomPrimitiveData @ 147f47080

bool __thiscall UMaterialInterface::HasCustomPrimitiveData(UMaterialInterface *this)

{
  return false;
}

// HasCustomizedUVs @ 147f470b0

bool __thiscall UMaterialInterface::HasCustomizedUVs(UMaterialInterface *this)

{
  return false;
}

// HasMeshPaintTexture @ 147f470e0

bool __thiscall UMaterialInterface::HasMeshPaintTexture(UMaterialInterface *this)

{
  return false;
}

// HasPixelAnimation @ 147f47480

bool __thiscall UMaterialInterface::HasPixelAnimation(UMaterialInterface *this)

{
  return false;
}

// HasSubstrateRoughnessTracking @ 147f47530

bool __thiscall UMaterialInterface::HasSubstrateRoughnessTracking(UMaterialInterface *this)

{
  return true;
}

// HasVertexInterpolator @ 147f47560

bool __thiscall UMaterialInterface::HasVertexInterpolator(UMaterialInterface *this)

{
  return false;
}

// IsCompatibleWithLumenCardSharing @ 147f4a930

bool __thiscall UMaterialInterface::IsCompatibleWithLumenCardSharing(UMaterialInterface *this)

{
  return false;
}

// IsComplete @ 147f4aae0

bool __thiscall UMaterialInterface::IsComplete(UMaterialInterface *this)

{
  return true;
}

// IsDeferredDecal @ 147f4ab10

bool __thiscall UMaterialInterface::IsDeferredDecal(UMaterialInterface *this)

{
  return false;
}

// IsDisplacementFadeEnabled @ 147f4ac80

bool __thiscall UMaterialInterface::IsDisplacementFadeEnabled(UMaterialInterface *this)

{
  return false;
}

// IsDitheredLODTransition @ 147f4acd0

bool __thiscall UMaterialInterface::IsDitheredLODTransition(UMaterialInterface *this)

{
  return false;
}

// IsMasked @ 147f4aea0

bool __thiscall UMaterialInterface::IsMasked(UMaterialInterface *this)

{
  return false;
}

// IsPostProcessMaterial @ 147f4aed0

bool __thiscall UMaterialInterface::IsPostProcessMaterial(UMaterialInterface *this)

{
  return false;
}

// IsReadyForFinishDestroy @ 147f4af70

bool __thiscall UMaterialInterface::IsReadyForFinishDestroy(UMaterialInterface *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ParentRefFence);
  return bVar1;
}

// IsShadingModelFromMaterialExpression @ 147f4b210

bool __thiscall UMaterialInterface::IsShadingModelFromMaterialExpression(UMaterialInterface *this)

{
  return false;
}

// IsTessellationEnabled @ 147f4b240

bool __thiscall UMaterialInterface::IsTessellationEnabled(UMaterialInterface *this)

{
  return false;
}

// IsThinSurface @ 147f4b290

bool __thiscall UMaterialInterface::IsThinSurface(UMaterialInterface *this)

{
  return false;
}

// IsTranslucencyVelocityFromDepth @ 147f4b2c0

bool __thiscall UMaterialInterface::IsTranslucencyVelocityFromDepth(UMaterialInterface *this)

{
  return false;
}

// IsTranslucencyWritingCustomDepth @ 147f4b2d0

bool __thiscall UMaterialInterface::IsTranslucencyWritingCustomDepth(UMaterialInterface *this)

{
  return false;
}

// IsTranslucencyWritingFrontLayerTransparency @ 147f4b2e0

bool __thiscall
UMaterialInterface::IsTranslucencyWritingFrontLayerTransparency(UMaterialInterface *this)

{
  return false;
}

// IsTranslucencyWritingVelocity @ 147f4b350

bool __thiscall UMaterialInterface::IsTranslucencyWritingVelocity(UMaterialInterface *this)

{
  return false;
}

// IsTwoSided @ 147f4b3a0

bool __thiscall UMaterialInterface::IsTwoSided(UMaterialInterface *this)

{
  return false;
}

// IsUIMaterial @ 147f4b3d0

bool __thiscall UMaterialInterface::IsUIMaterial(UMaterialInterface *this)

{
  return false;
}

// IsUsingMotionVectorWorldOffset_Concurrent @ 147f4b3e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UMaterialInterface::IsUsingMotionVectorWorldOffset_Concurrent
          (UMaterialInterface *this,EShaderPlatform param_1)

{
  bool bVar1;
  longlong *plVar2;
  FMaterial *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x2e0))(0,&local_18);
  if (plVar2 == (longlong *)0x0) {
    return false;
  }
  this_00 = (FMaterial *)(**(code **)(this->_padding_ + 0x380))(this,param_1,4);
  if (((this_00 == (FMaterial *)0x0) || (this_00[1]._padding_ == 0)) &&
     (this_00 = (FMaterial *)(**(code **)(*plVar2 + 0x380))(plVar2,param_1,4),
     this_00 == (FMaterial *)0x0)) {
    return false;
  }
  bVar1 = FMaterial::MaterialUsesMotionVectorWorldOffset_GameThread(this_00);
  return bVar1;
}

// IsUsingNewHLSLGenerator @ 147f4b480

bool __thiscall UMaterialInterface::IsUsingNewHLSLGenerator(UMaterialInterface *this)

{
  bool bVar1;
  longlong lVar2;
  IConsoleManager *pIVar3;
  longlong *plVar4;
  TConsoleVariableData<bool> *pTVar5;
  TConsoleVariableData<bool> *pTVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pTVar6 = (TConsoleVariableData<bool> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar3 = IConsoleManager::Get();
    plVar4 = (longlong *)
             (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Material.Translator.EnableNew",1);
    pTVar5 = pTVar6;
    if (plVar4 != (longlong *)0x0) {
      pTVar5 = (TConsoleVariableData<bool> *)(**(code **)(*plVar4 + 0x60))(plVar4);
    }
    ::CVar = pTVar5;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar5 = ::CVar;
  bVar1 = IsInParallelGameThread();
  if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
    pTVar6 = (TConsoleVariableData<bool> *)&DAT_00000001;
  }
  if (pTVar5->ShadowedValue[(longlong)pTVar6->ShadowedValue] != false) {
    local_18 = 0;
    uStack_10 = 0;
    lVar2 = (**(code **)(this->_padding_ + 0x2e0))(this,&local_18);
    if (lVar2 != 0) {
      return (bool)(*(byte *)(lVar2 + 0x1fd) >> 7);
    }
  }
  return false;
}

// IsUsingNewTranslatorPrototype @ 147f4b5a0

bool __thiscall UMaterialInterface::IsUsingNewTranslatorPrototype(UMaterialInterface *this)

{
  bool bVar1;
  
  bVar1 = IsUsingNewHLSLGenerator(this);
  if (bVar1) {
    bVar1 = IsUsingNewMaterialTranslatorPrototype();
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsUsingTemporalResponsiveness_Concurrent @ 147f4b5d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UMaterialInterface::IsUsingTemporalResponsiveness_Concurrent
          (UMaterialInterface *this,EShaderPlatform param_1)

{
  bool bVar1;
  longlong *plVar2;
  FMaterial *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x2e0))(0,&local_18);
  if (plVar2 == (longlong *)0x0) {
    return false;
  }
  this_00 = (FMaterial *)(**(code **)(this->_padding_ + 0x380))(this,param_1,4);
  if (((this_00 == (FMaterial *)0x0) || (this_00[1]._padding_ == 0)) &&
     (this_00 = (FMaterial *)(**(code **)(*plVar2 + 0x380))(plVar2,param_1,4),
     this_00 == (FMaterial *)0x0)) {
    return false;
  }
  bVar1 = FMaterial::MaterialUsesTemporalResponsiveness_GameThread(this_00);
  return bVar1;
}

// IsUsingWorldPositionOffset_Concurrent @ 147f4b670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UMaterialInterface::IsUsingWorldPositionOffset_Concurrent
          (UMaterialInterface *this,EShaderPlatform param_1)

{
  bool bVar1;
  longlong *plVar2;
  FMaterial *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x2e0))(0,&local_18);
  if (plVar2 == (longlong *)0x0) {
    return false;
  }
  this_00 = (FMaterial *)(**(code **)(this->_padding_ + 0x380))(this,param_1,4);
  if (((this_00 == (FMaterial *)0x0) || (this_00[1]._padding_ == 0)) &&
     (this_00 = (FMaterial *)(**(code **)(*plVar2 + 0x380))(plVar2,param_1,4),
     this_00 == (FMaterial *)0x0)) {
    return false;
  }
  bVar1 = FMaterial::MaterialUsesWorldPositionOffset_GameThread(this_00);
  return bVar1;
}

// IsUsingWorldPositionOffset_Concurrent @ 147f4b710

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UMaterialInterface::IsUsingWorldPositionOffset_Concurrent(UMaterialInterface *this,Type param_1)

{
  bool bVar1;
  longlong *plVar2;
  FMaterial *this_00;
  EShaderPlatform EVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 == Num) {
    EVar3 = SP_NumPlatforms;
  }
  else {
    EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  }
  local_18 = 0;
  uStack_10 = 0;
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x2e0))(0,&local_18);
  if (plVar2 == (longlong *)0x0) {
    return false;
  }
  this_00 = (FMaterial *)(**(code **)(this->_padding_ + 0x380))(this,EVar3,4);
  if (((this_00 == (FMaterial *)0x0) || (this_00[1]._padding_ == 0)) &&
     (this_00 = (FMaterial *)(**(code **)(*plVar2 + 0x380))(plVar2,EVar3,4),
     this_00 == (FMaterial *)0x0)) {
    return false;
  }
  bVar1 = FMaterial::MaterialUsesWorldPositionOffset_GameThread(this_00);
  return bVar1;
}

// LogMaterialsAndTextures @ 147f4cbd0

void __thiscall
UMaterialInterface::LogMaterialsAndTextures
          (UMaterialInterface *this,FOutputDevice *param_1,int param_2)

{
  return;
}

// NumSpecularProfile_Internal @ 147f4cc00

uint __thiscall UMaterialInterface::NumSpecularProfile_Internal(UMaterialInterface *this)

{
  return 0;
}

// NumSubsurfaceProfileRoot_Internal @ 147f4cc30

uint __thiscall UMaterialInterface::NumSubsurfaceProfileRoot_Internal(UMaterialInterface *this)

{
  return 0;
}

// OnAssignedAsOverride @ 147f4cc40

void __thiscall UMaterialInterface::OnAssignedAsOverride(UMaterialInterface *this,UObject *param_1)

{
  return;
}

// OnRemovedAsOverride @ 147f4cc50

void __thiscall UMaterialInterface::OnRemovedAsOverride(UMaterialInterface *this,UObject *param_1)

{
  return;
}

// OverrideTexture @ 147f4cc70

void __thiscall
UMaterialInterface::OverrideTexture
          (UMaterialInterface *this,UTexture *param_1,UTexture *param_2,Type param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x24d,L"Pure virtual not implemented (%s)");
  return;
}

// PostDuplicate @ 147f4ccb0

void __thiscall UMaterialInterface::PostDuplicate(UMaterialInterface *this,bool param_1)

{
  return;
}

// PostInitProperties @ 147f4d190

void __thiscall UMaterialInterface::PostInitProperties(UMaterialInterface *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UMaterialInterface *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UMaterialInterface **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UMaterialInterface **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 147f4dc20

void __thiscall UMaterialInterface::PostLoad(UMaterialInterface *this)

{
  UObject::PostLoad((UObject *)this);
  if (GEventDrivenLoaderEnabled == false) {
    PostLoadDefaultMaterials();
    return;
  }
  return;
}

// PreSave @ 147f4dc50

void __thiscall UMaterialInterface::PreSave(UMaterialInterface *this,FObjectPreSaveContext param_1)

{
  longlong lVar1;
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  lVar1 = *(longlong *)(((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4dc8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 8) + 0xd8))(lVar1 + 8);
    return;
  }
  return;
}

// PrecachePSOs @ 147f4e040

TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
UMaterialInterface::PrecachePSOs
          (UMaterialInterface *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,
          TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_1,FPSOPrecacheParams *param_2,EPSOPrecachePriority param_3,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_4)

{
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 4;
  return __return_storage_ptr__;
}

// RecacheAllMaterialUniformExpressions @ 147f4e080

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UMaterialInterface::RecacheAllMaterialUniformExpressions(bool param_1)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UMaterialInterface> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UMaterialInterface>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(**(longlong **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x598))
              (*(longlong **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8),param_1);
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// RecacheUniformExpressions @ 147f4e190

void __thiscall UMaterialInterface::RecacheUniformExpressions(UMaterialInterface *this,bool param_1)

{
  return;
}

// RemoveUserDataOfClass @ 147f4e950

void __thiscall
UMaterialInterface::RemoveUserDataOfClass
          (UMaterialInterface *this,TSubclassOf<UAssetUserData> param_1)

{
  undefined1 *puVar1;
  void *_Dst;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  uint uVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  
  pUVar11 = (UObject *)0x0;
  pUVar8 = pUVar11;
  pUVar10 = pUVar11;
  if (0 < *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference) {
    do {
      uVar9 = (uint)pUVar8;
      uVar5 = 0;
      if ((int)uVar9 < *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)
               (&pUVar10->field_0x0 + *(longlong *)&(this->OnBaseMaterialSetEvent).field_0x18);
      if (lVar2 != 0) {
        pUVar8 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar8 != (UObject *)0x0) goto LAB_147f4ea0e;
LAB_147f4ea3c:
          pUVar8 = pUVar11;
        }
        else {
          if (pUVar8 == (UObject *)0x0) goto LAB_147f4ea3c;
          UE::GC::MarkAsReachable(pUVar8);
LAB_147f4ea0e:
          pUVar7 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar7 == (UClass *)0x0) goto LAB_147f4ea3c;
          iVar6 = (int)pUVar7->_padding_;
          if ((*(int *)&pUVar8[1].field_0x10 < iVar6) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar6 * 8)
              != &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_147f4ea3c;
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(lVar2 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)&pUVar8[1].field_0x10 * 8) ==
            &pUVar8[1].field_0x8)) {
          puVar1 = &(this->OnBaseMaterialSetEvent).field_0x18;
          uVar5 = 0;
          if ((int)uVar9 < *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Dst = (void *)(*(longlong *)puVar1 + (longlong)(int)uVar9 * 8);
          iVar6 = (*(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference - uVar9) + -1;
          if (iVar6 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
          }
          iVar6 = *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference + -1;
          *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference = iVar6;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)puVar1,iVar6,
                     (int *)((longlong)&(this->ParentRefFence).CompletionTask.Pimpl.Reference + 4));
          return;
        }
      }
      pUVar8 = (UObject *)(ulonglong)(uVar9 + 1);
      pUVar10 = (UObject *)&pUVar10->field_0x8;
    } while ((int)(uVar9 + 1) < *(int *)&(this->ParentRefFence).CompletionTask.Pimpl.Reference);
  }
  return;
}

// Rename @ 147f4eb30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UMaterialInterface::Rename(UMaterialInterface *this,wchar_t *param_1,UObject *param_2,uint param_3)

{
  FName FVar1;
  longlong lVar2;
  int iVar3;
  UPackage *pUVar4;
  FLinkerLoad *pFVar5;
  FLinkerLoad *pFVar6;
  UPackage *pUVar7;
  size_t sVar8;
  UMaterialInterface *this_00;
  UObject *pUVar9;
  FName FVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_80 [8];
  FString FStack_78;
  TStringView<wchar_t> TStack_68;
  FString FStack_58;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId247,"UObject::Rename",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
               ,0xf7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId247);
  }
  pUVar7 = GObjTransientPkg;
  if ((param_2 != (UObject *)0x0) && (param_2 != (UObject *)this->_padding_)) {
    if (((this->_padding_ & 0x30) == 0) &&
       (pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2), pUVar4 != pUVar7)) {
      pUVar9 = *(UObject **)(this->_padding_ + 0xe0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < *(int *)&pUVar9[1].field_0x10) ||
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) +
           (longlong)*(int *)&pUVar9[1].field_0x10 * 8) != &pUVar9[1].field_0x8)) {
        if ((param_3 & 2) != 0) {
          bVar13 = false;
          goto LAB_142109c5c;
        }
        auStack_80 = *(undefined1 (*) [8])(*(longlong *)(this->_padding_ + 0xe0) + 0x18);
        ::FName::ToString((FName *)auStack_80,&FStack_78);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_2,(FString *)&TStack_68,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&FStack_58,(UObject *)0x0,None);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
        if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
        }
        if (TStack_68.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(TStack_68.DataPtr);
        }
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
    pFVar6 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_2);
    if (((param_3 >> 9 & 1) == 0) && (pFVar5 != pFVar6)) {
      if (pFVar6 == (FLinkerLoad *)0x0) {
        pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2);
        pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
        if (pUVar4 == pUVar7) goto LAB_1421099f4;
      }
      if ((pFVar5 != (FLinkerLoad *)0x0) && ((this->_padding_ & 0x1400) != 0)) {
        if (1 < (byte)LogObj._0_1_) {
          auStack_80 = (undefined1  [8])0x150852300;
          if (((uint)this->_padding_ >> 10 & 1) != 0) {
            auStack_80 = (undefined1  [8])0x1508522e8;
          }
          pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_2);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar7,&FStack_58,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this,(FString *)&TStack_68,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogObj);
          if (TStack_68.DataPtr != (wchar_t *)0x0) {
            FMemory::Free(TStack_68.DataPtr);
          }
          if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
          }
        }
        ::FDebug::DumpStackTraceToLog(Display);
      }
      UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,true);
    }
  }
LAB_1421099f4:
  if (param_1 == (wchar_t *)0x0) {
LAB_142109af3:
    if ((param_3 & 2) == 0) {
LAB_142109afd:
      FVar1 = (FName)this->_padding_;
      if ((param_2 != (UObject *)0x0) && ((param_3 & 4) == 0)) {
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)param_2);
      }
      LockUObjectHashTables();
      if (param_1 == (wchar_t *)0x0) {
        if ((param_2 == (UObject *)0x0) ||
           (pUVar9 = StaticFindObjectFastInternal
                               ((UClass *)0x0,param_2,FVar1,None,RF_NoFlags,Borrowed),
           FVar10 = FVar1, pUVar9 != (UObject *)0x0)) {
          pUVar11 = (UClass *)param_2;
          if (param_2 == (UObject *)0x0) {
            pUVar11 = (UClass *)this->_padding_;
          }
          FVar10 = MakeUniqueObjectName((UObject *)auStack_80,pUVar11,(FName)this->_padding_,None);
          goto LAB_142109c21;
        }
      }
      else {
        FVar10 = (FName)::FName::FName((FName *)auStack_80,param_1);
LAB_142109c21:
        FVar10 = *(FName *)FVar10;
      }
      lVar2 = this->_padding_;
      if ((this->_padding_ & 1) != 0) {
        Z_Construct_UClass_UPackage_NoRegister();
      }
      UObjectBase::LowLevelRename((UObjectBase *)this,FVar10,param_2);
      UnlockUObjectHashTables();
      (**(code **)(this->_padding_ + 0xe0))(this,lVar2,FVar1);
    }
  }
  else {
    sVar8 = wcslen(param_1);
    FStack_78.Data.ArrayNum = (int)sVar8;
    FStack_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
    TStack_68.DataPtr = param_1;
    if ((param_3 >> 6 & 1) == 0) {
      FStack_78.Data.ArrayMax = TStack_68._12_4_;
      pUVar9 = param_2;
      if (param_2 == (UObject *)0x0) {
        pUVar9 = (UObject *)this->_padding_;
      }
      TStack_68.Size = FStack_78.Data.ArrayNum;
      this_00 = (UMaterialInterface *)StaticFindObject((UClass *)0x0,pUVar9,&TStack_68,ExactClass);
    }
    else {
      TStack_68._12_4_ = FStack_78.Data.ArrayMax;
      TStack_68.Size = FStack_78.Data.ArrayNum;
      this_00 = (UMaterialInterface *)
                StaticFindFirstObject((UClass *)0x0,&TStack_68,ExactClass,NoLogging,(wchar_t *)0x0);
    }
    if (this_00 != this) {
      if (this_00 == (UMaterialInterface *)0x0) goto LAB_142109af3;
      if ((param_3 & 2) != 0) {
        bVar13 = false;
        goto LAB_142109c5c;
      }
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&FStack_58,(UObject *)0x0,None);
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this,(FString *)&TStack_68,(UObject *)0x0,None);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
      if (TStack_68.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(TStack_68.DataPtr);
      }
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      goto LAB_142109afd;
    }
    auStack_80 = (undefined1  [8])this_00->_padding_;
    ::FName::ToString((FName *)auStack_80,&FStack_78);
    ::FString::FString(&FStack_58,param_1);
    FVar12.Data = FStack_78.Data.AllocatorInstance.Data;
    if (FStack_78.Data.ArrayNum == FStack_58.Data.ArrayNum) {
      if (FStack_78.Data.ArrayNum < 2) {
        bVar13 = true;
      }
      else {
        iVar3 = wcscmp((wchar_t *)FStack_78.Data.AllocatorInstance.Data,
                       (wchar_t *)FStack_58.Data.AllocatorInstance.Data);
        bVar13 = iVar3 == 0;
      }
    }
    else {
      bVar13 = FStack_78.Data.ArrayNum + FStack_58.Data.ArrayNum == 1;
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      FVar12.Data = FStack_78.Data.AllocatorInstance.Data;
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    if (!bVar13) goto LAB_142109af3;
  }
  bVar13 = true;
LAB_142109c5c:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar13;
}

// SaveShaderStableKeysInner @ 147f4f2b0

void __thiscall
UMaterialInterface::SaveShaderStableKeysInner
          (UMaterialInterface *this,ITargetPlatform *param_1,FStableShaderKeyAndValue *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x300,L"Pure virtual not implemented (%s)");
  return;
}

// Serialize @ 147f4f830

void __thiscall UMaterialInterface::Serialize(UMaterialInterface *this,FArchive *param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  code *pcVar3;
  int iVar4;
  FMaterialCachedExpressionData *pFVar5;
  FMaterialCachedExpressionData *pFVar6;
  UScriptStruct *this_00;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;
  uint local_res10 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  uVar7 = 0;
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  pFVar6 = (FMaterialCachedExpressionData *)0x0;
  if (0xd < iVar4) {
    if ((((*(longlong *)&param_1->field_0x68 != 0) &&
         (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) ||
        (((param_1->field_0x28 & 4) != 0 && ((*(uint *)&param_1->field_0x34 & 0x1000) != 0)))) &&
       ((this->CachedExpressionData).Ptr != (FMaterialCachedExpressionData *)0x0)) {
      uVar7 = 1;
    }
    puVar8 = &param_1->field_0x28;
    bVar9 = SUB41(uVar7,0);
    puVar2 = *(ulonglong **)&param_1->field_0x8;
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_res10[0] = 0;
      if ((*puVar8 & 1) == 0) {
        local_res10[0] = uVar7;
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar7 = local_res10[0];
      if ((*puVar8 & 1) != 0) goto LAB_147f4f91c;
    }
    else {
      uVar7 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
LAB_147f4f91c:
      bVar9 = uVar7 != 0;
    }
    if (bVar9 != false) {
      if ((*puVar8 & 1) != 0) {
        pFVar5 = ::operator_new(0x4e0);
        if (pFVar5 != (FMaterialCachedExpressionData *)0x0) {
          pFVar6 = FMaterialCachedExpressionData::FMaterialCachedExpressionData(pFVar5);
        }
        pFVar5 = (this->CachedExpressionData).Ptr;
        if ((pFVar5 != pFVar6) &&
           ((this->CachedExpressionData).Ptr = pFVar6,
           pFVar5 != (FMaterialCachedExpressionData *)0x0)) {
          FMaterialCachedExpressionData::~FMaterialCachedExpressionData(pFVar5);
          ::operator_delete(pFVar5,0x4e0);
        }
        this->bLoadedCachedExpressionData = true;
      }
      if (((this->CachedExpressionData).Ptr == (FMaterialCachedExpressionData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedExpressionData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                             ,0xf9,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_147f4f9be;
    }
  }
  if ((param_1->field_0x2b & 1) == 0) {
    return;
  }
  if ((this->CachedExpressionData).Ptr == (FMaterialCachedExpressionData *)0x0) {
    return;
  }
LAB_147f4f9be:
  this_00 = FMaterialCachedExpressionData::StaticStruct();
  UStruct::SerializeTaggedProperties
            ((UStruct *)this_00,param_1,(uchar *)(this->CachedExpressionData).Ptr,(UStruct *)this_00
             ,(uchar *)0x0,(UObject *)0x0);
  return;
}

// Serialize @ 147f4fa00

void __thiscall
UMaterialInterface::Serialize(UMaterialInterface *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetFeatureLevelToCompile @ 147f4ffe0

void __thiscall
UMaterialInterface::SetFeatureLevelToCompile(UMaterialInterface *this,Type param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  if (param_2) {
    this->FeatureLevelsToForceCompile = this->FeatureLevelsToForceCompile | uVar1;
    return;
  }
  this->FeatureLevelsToForceCompile = ~uVar1 & this->FeatureLevelsToForceCompile;
  return;
}

// SetForceMipLevelsToBeResident @ 147f502e0

void __thiscall
UMaterialInterface::SetForceMipLevelsToBeResident
          (UMaterialInterface *this,bool param_1,bool param_2,float param_3,int param_4,bool param_5
          )

{
  code *pcVar1;
  UStreamableRenderAsset *this_00;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  FCachedSystemScalabilityCVars *pFVar6;
  UClass *pUVar7;
  FStreamingManagerCollection *this_01;
  IRenderAssetStreamingManager *pIVar8;
  longlong lVar9;
  uint uVar10;
  Type local_res8 [8];
  undefined1 local_68 [2];
  undefined1 local_66;
  void *local_60;
  undefined8 local_58;
  
  local_60 = (void *)0x0;
  local_58 = 0;
  local_66 = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x330);
  pFVar6 = GetCachedScalabilityCVars();
  if ((pFVar6->bInitialized == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetCachedScalabilityCVars().bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                         ,100,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar6 = GetCachedScalabilityCVars();
  local_res8[0] = pFVar6->MaterialQualityLevel;
  local_res8[1] = 1;
  (*pcVar1)(this,&local_60,local_res8,local_68);
  uVar10 = 0;
  if (0 < (int)local_58) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar10 < (int)local_58) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(UStreamableRenderAsset **)(lVar9 + (longlong)local_60);
      if (this_00 != (UStreamableRenderAsset *)0x0) {
        pUVar7 = Z_Construct_UClass_UTexture2D_NoRegister();
        iVar5 = (int)pUVar7->_padding_;
        if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar7->_padding_)) {
          UStreamableRenderAsset::SetForceMipLevelsToBeResident(this_00,param_3,param_4);
          if (param_1) {
            this_00->bForceMiplevelsToBeResident = '\0';
            this_00->field_0xd0 = this_00->field_0xd0 | param_2 << 3;
          }
          if ((param_5) && ((0.0 < param_3 || (this_00->bForceMiplevelsToBeResident != '\0')))) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
                  (IConsoleManager::SetupSingleton(),
                  IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Singleton != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                     ,0x4fb,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              CVarAllowFastForceResident =
                   (IConsoleVariable *)
                   (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                             (IConsoleManager::Singleton,L"r.Streaming.AllowFastForceResident",1);
              _Init_thread_footer(&::_TSS0);
            }
            if ((CVarAllowFastForceResident == (IConsoleVariable *)0x0) ||
               (iVar5 = (**(code **)(*(longlong *)CVarAllowFastForceResident + 200))(), iVar5 == 0))
            {
              bVar3 = 0;
            }
            else {
              bVar3 = 0x10;
            }
            this_00->bIgnoreStreamingMipBias = '\0';
            this_00->field_0xd0 = this_00->field_0xd0 | bVar3;
            if (this_00->StreamingIndex != -1) {
              this_01 = IStreamingManager::Get();
              pIVar8 = FStreamingManagerCollection::GetRenderAssetStreamingManager(this_01);
              (**(code **)(*(longlong *)pIVar8 + 0xa0))(pIVar8,this_00);
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar10 < (int)local_58);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

// SetGlobalRequiredFeatureLevel @ 147f50610

void __cdecl UMaterialInterface::SetGlobalRequiredFeatureLevel(Type param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  if (param_2) {
    FeatureLevelsForAllMaterials = FeatureLevelsForAllMaterials | uVar1;
    return;
  }
  FeatureLevelsForAllMaterials = FeatureLevelsForAllMaterials & ~uVar1;
  return;
}

// SetNumericParameterDefault @ 147f50670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInterface::SetNumericParameterDefault
          (UMaterialInterface *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FValue *param_3,EShaderPlatform param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialInterface.h"
             ,0x256,L"Pure virtual not implemented (%s)");
  return;
}

// SetSubstrateCompilationConfig @ 147f51c70

void __thiscall
UMaterialInterface::SetSubstrateCompilationConfig
          (UMaterialInterface *this,FSubstrateCompilationConfig *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x2d8))();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x23e) = *(undefined4 *)param_1;
    *(short *)(lVar1 + 0x242) = param_1->ClosuresPerPixelOverride;
  }
  return;
}

// SetTextureStreamingData @ 147f525b0

void __thiscall
UMaterialInterface::SetTextureStreamingData
          (UMaterialInterface *this,
          TArray<FMaterialTextureInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FMaterialTextureInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar2 = &this->TextureStreamingData;
  if (pTVar2 != param_1) {
    iVar3 = (this->TextureStreamingData).ArrayMax;
    piVar1 = &(this->TextureStreamingData).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    (this->TextureStreamingData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
    if (iVar4 != 0) {
      memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 << 4);
    }
  }
  return;
}

// ShouldAlwaysEvaluateWorldPositionOffset @ 147f52a70

bool __thiscall
UMaterialInterface::ShouldAlwaysEvaluateWorldPositionOffset(UMaterialInterface *this)

{
  return false;
}

// SortTextureStreamingData @ 147f52a80

void __thiscall
UMaterialInterface::SortTextureStreamingData(UMaterialInterface *this,bool param_1,bool param_2)

{
  return;
}

// StaticRegisterNativesUMaterialInterface @ 147f52d00

void __cdecl UMaterialInterface::StaticRegisterNativesUMaterialInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UMaterialInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SubmitRemainingJobsForWorld @ 147f52d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UMaterialInterface::SubmitRemainingJobsForWorld
          (UWorld *param_1,EMaterialShaderPrecompileMode param_2)

{
  UMaterialInterface **ppUVar1;
  ulonglong uVar2;
  IPrimitiveComponent *pIVar3;
  UMaterialInterface *pUVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  EInternalObjectFlags EVar8;
  FObjectCacheContext *pFVar9;
  UWorld *pUVar10;
  UClass *pUVar11;
  longlong *plVar12;
  byte bVar13;
  int iVar14;
  UMaterialInterface **ppUVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  IPrimitiveComponent **ppIVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStackY_2a8 [32];
  FObjectCacheContextScope local_278;
  undefined1 local_277;
  undefined1 local_276 [6];
  TObjectIterator<UMaterialInterface> local_270;
  longlong *local_258;
  undefined8 local_250;
  TObjectIterator<UDecalComponent> local_248;
  undefined1 local_230 [8];
  undefined8 local_228;
  UMaterialInterface *local_220;
  undefined8 local_218;
  longlong *local_210;
  longlong *local_208;
  uint uStack_200;
  uint uStack_1fc;
  TBitArray<FDefaultBitArrayAllocator> *local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  uint local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  longlong *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  TObjectCacheIterator<UMaterialInterface> local_1a8;
  TObjectCacheIterator<IPrimitiveComponent> local_188;
  undefined4 local_14c;
  undefined1 local_148 [32];
  uint *local_128;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  ForElementType<FSetElementId> local_108;
  int local_100;
  FMaterialUpdateContext local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId713,"UMaterialInterface::SubmitRemainingJobsForWorld",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
               ,0x2c9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId713);
  }
  local_11c = 0x80;
  local_148._0_8_ = 0;
  local_148._8_8_ = 0;
  local_128 = (uint *)0x0;
  local_120 = 0;
  local_114 = 0;
  local_108 = (ForElementType<FSetElementId>)0x0;
  local_100 = 0;
  local_118 = 0xffffffff;
  FObjectCacheContextScope::FObjectCacheContextScope(&local_278);
  pFVar9 = FObjectCacheContextScope::GetContext(&local_278);
  FObjectCacheContext::GetPrimitiveComponents(pFVar9,&local_188);
  for (ppIVar21 = local_188.ArrayView.DataPtr;
      ppIVar21 != local_188.ArrayView.DataPtr + local_188.ArrayView.ArrayNum;
      ppIVar21 = ppIVar21 + 1) {
    pIVar3 = *ppIVar21;
    if (((param_1 == (UWorld *)0x0) ||
        (pUVar10 = (UWorld *)(**(code **)((longlong)*pIVar3 + 0x28))(pIVar3), pUVar10 == param_1))
       && (cVar6 = (**(code **)*pIVar3)(pIVar3), cVar6 != '\0')) {
      pFVar9 = FObjectCacheContextScope::GetContext(&local_278);
      FObjectCacheContext::GetUsedMaterials(pFVar9,&local_1a8,pIVar3);
      ppUVar1 = local_1a8.ArrayView.DataPtr + local_1a8.ArrayView.ArrayNum;
      for (ppUVar15 = local_1a8.ArrayView.DataPtr; ppUVar15 != ppUVar1; ppUVar15 = ppUVar15 + 1) {
        local_220 = *ppUVar15;
        if ((local_220 != (UMaterialInterface *)0x0) &&
           (cVar6 = (**(code **)(local_220->_padding_ + 0x5a8))(), cVar6 == '\0')) {
          TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
          Emplace<UMaterialInterface_*_const_&>
                    ((TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                      *)local_148,(UMaterialInterface **)local_230,(bool *)&local_220);
        }
      }
      if (local_1a8.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.OwnedArray.AllocatorInstance.Data);
      }
    }
  }
  if (local_188.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.OwnedArray.AllocatorInstance.Data);
  }
  local_270.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.ObjectArray.ArrayNum = 0;
  local_270.ObjectArray.ArrayMax = 0;
  local_270.Index = 0xffffffff;
  EVar8 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar11 = StaticClass();
  GetObjectsOfClass(pUVar11,&local_270.ObjectArray,true,RF_ClassDefaultObject,
                    EVar8 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UMaterialInterface>::Advance(&local_270);
    lVar16 = (longlong)local_270.Index;
    if ((local_270.Index < 0) || (local_270.ObjectArray.ArrayNum <= local_270.Index)) break;
    uVar18 = 0;
    if (local_270.Index < local_270.ObjectArray.ArrayNum) {
      uVar18 = (uint)~local_270.Index >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar12 = (longlong *)
              (**(code **)(**(longlong **)
                             (local_270.ObjectArray.AllocatorInstance.Data + lVar16 * 8) + 0x2d8))()
    ;
    if ((plVar12 != (longlong *)0x0) &&
       (((cVar6 = (**(code **)(*plVar12 + 0x4c0))(plVar12), cVar6 != '\0' ||
         (cVar6 = (**(code **)(*plVar12 + 0x4c8))(plVar12), cVar6 != '\0')) &&
        (cVar6 = (**(code **)(*plVar12 + 0x5a8))(plVar12), cVar6 == '\0')))) {
      lVar16 = (longlong)local_270.Index;
      uVar18 = 0;
      if (local_270.Index < local_270.ObjectArray.ArrayNum) {
        uVar18 = (uint)~local_270.Index >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_218 = *(undefined8 *)(local_270.ObjectArray.AllocatorInstance.Data + lVar16 * 8);
      TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
      Emplace<UMaterialInterface_*>
                ((TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                  *)local_148,(UMaterialInterface **)(local_230 + 4),(bool *)&local_218);
    }
  }
  if (local_270.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.ObjectArray.AllocatorInstance.Data);
  }
  local_248.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ObjectArray.ArrayNum = 0;
  local_248.ObjectArray.ArrayMax = 0;
  local_248.Index = 0xffffffff;
  EVar8 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar11 = Z_Construct_UClass_UDecalComponent_NoRegister();
  GetObjectsOfClass(pUVar11,&local_248.ObjectArray,true,RF_ClassDefaultObject,
                    EVar8 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  TObjectIterator<UDecalComponent>::Advance(&local_248);
  while( true ) {
    lVar16 = (longlong)local_248.Index;
    uVar18 = 0;
    if ((local_248.Index < 0) || (local_248.ObjectArray.ArrayNum <= local_248.Index)) break;
    local_258 = (longlong *)0x0;
    local_250 = 0;
    if (local_248.Index < local_248.ObjectArray.ArrayNum) {
      uVar18 = (uint)~local_248.Index >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(**(longlong **)(local_248.ObjectArray.AllocatorInstance.Data + lVar16 * 8) + 0x650)
    )(*(longlong **)(local_248.ObjectArray.AllocatorInstance.Data + lVar16 * 8),&local_258,0);
    iVar14 = (int)local_250;
    plVar12 = local_258 + (int)local_250;
    plVar17 = local_258;
    while( true ) {
      if ((int)local_250 != iVar14) {
        local_277 = 0;
        `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_277);
      }
      if (plVar17 == plVar12) break;
      local_210 = (longlong *)*plVar17;
      if ((local_210 != (longlong *)0x0) &&
         (cVar6 = (**(code **)(*local_210 + 0x5a8))(), cVar6 == '\0')) {
        TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
        Emplace<UMaterialInterface_*_const_&>
                  ((TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                    *)local_148,(UMaterialInterface **)&local_228,(bool *)&local_210);
      }
      plVar17 = plVar17 + 1;
    }
    if (local_258 != (longlong *)0x0) {
      FMemory::Free(local_258);
    }
    TObjectIterator<UDecalComponent>::Advance(&local_248);
  }
  if (local_248.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ObjectArray.AllocatorInstance.Data);
  }
  if (local_148._8_4_ != local_114) {
    FMaterialUpdateContext::FMaterialUpdateContext(&local_f8,2,GMaxRHIShaderPlatform);
    uVar20 = local_120;
    uStack_1fc = 1;
    uStack_1ec = uVar18;
    local_1e8 = uVar18;
    if (local_120 != 0) {
      puVar19 = (uint *)(local_148 + 0x10);
      if (local_128 != (uint *)0x0) {
        puVar19 = local_128;
      }
      uVar22 = *puVar19;
      local_1e8 = 0;
      uVar18 = 0;
      while (uVar22 == 0) {
        lVar16 = (longlong)(int)uVar18;
        local_1e8 = local_1e8 + 0x20;
        uVar18 = uVar18 + 1;
        uStack_1ec = local_120;
        if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_147f53280;
        uVar22 = puVar19[lVar16 + 1];
      }
      uStack_1fc = -uVar22 & uVar22;
      uVar2 = (ulonglong)uStack_1fc * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_228._4_4_ = (int)lVar16;
      uStack_1ec = (local_1e8 - 1) + local_228._4_4_;
      if ((int)local_120 < (int)uStack_1ec) {
        uStack_1ec = local_120;
      }
    }
LAB_147f53280:
    local_208 = (longlong *)local_148;
    uStack_1e4 = local_14c;
    local_1f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
    uVar22 = local_120 & 0xffffffe0;
    iStack_1e0 = local_148._8_4_ - local_114;
    uStack_1f0 = 0xffffffff;
    TStack_1d0.CurrentBitIndex = uStack_1ec;
    TStack_1d0.UnvisitedBitMask = 0xffffffff;
    TStack_1d0._padding_ = CONCAT44(uStack_1fc,uVar18);
    iVar14 = (int)local_120 >> 5;
    TStack_1d0._28_4_ = local_14c;
    TStack_1d0.BaseBitIndex = local_1e8;
    uStack_1b0 = CONCAT44(uStack_1dc,iStack_1e0);
    bVar13 = (byte)local_120;
    uStack_200 = uVar18;
    local_1d8 = local_208;
    TStack_1d0.Array = local_1f8;
    if (((int)local_120 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar20 != local_120) {
      puVar19 = (uint *)(local_148 + 0x10);
      if (local_128 != (uint *)0x0) {
        puVar19 = local_128;
      }
      uVar18 = -1 << (bVar13 & 0x1f) & puVar19[iVar14];
      while (uVar18 == 0) {
        lVar16 = (longlong)iVar14;
        uVar22 = uVar22 + 0x20;
        iVar14 = iVar14 + 1;
        uVar20 = local_120;
        if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_147f53381;
        uVar18 = puVar19[lVar16 + 1];
      }
      uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar20 = (int)lVar16 + -1 + uVar22;
      if ((int)local_120 < (int)uVar20) {
        uVar20 = local_120;
      }
    }
LAB_147f53381:
    while( true ) {
      plVar12 = local_1d8;
      if ((int)local_1d8[1] - *(int *)((longlong)local_1d8 + 0x34) != (int)uStack_1b0) {
        `TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_276);
      }
      if (((TStack_1d0.CurrentBitIndex == uVar20) &&
          (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10))) &&
         (plVar12 == (longlong *)local_148)) break;
      pUVar4 = *(UMaterialInterface **)(*plVar12 + (longlong)TStack_1d0.CurrentBitIndex * 0x10);
      FMaterialUpdateContext::AddMaterialInterface(&local_f8,pUVar4);
      (**(code **)(pUVar4->_padding_ + 0x5a0))(pUVar4,param_2);
      TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
    }
    FMaterialUpdateContext::~FMaterialUpdateContext(&local_f8);
  }
  FObjectCacheContextScope::~FObjectCacheContextScope(&local_278);
  local_100 = 0;
  if (local_108 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108);
  }
  TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_148);
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateLightmassTextureTracking @ 147f53c40

bool __thiscall UMaterialInterface::UpdateLightmassTextureTracking(UMaterialInterface *this)

{
  return false;
}

// UpdateMaterialRenderProxy @ 147f53c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialInterface::UpdateMaterialRenderProxy
          (UMaterialInterface *this,FMaterialRenderProxy *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  FRenderCommandList *pFVar11;
  FCommandList *pFVar12;
  FRenderCommandTag *pFVar13;
  code *pcVar14;
  code **ppcVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  undefined1 auStackY_618 [32];
  ForAnyElementType local_5d8;
  undefined8 local_5d0;
  ushort local_5c8 [4];
  ForAnyElementType local_5c0;
  undefined8 local_5b8;
  FMaterialRenderProxy *local_5b0;
  ForAnyElementType local_5a8;
  undefined8 local_5a0;
  code *local_598;
  code *local_590;
  code *pcStack_588;
  code *local_580;
  FMaterialRenderProxy *local_578;
  code *local_570;
  FNeuralProfileStruct local_568;
  code *local_520;
  code *pcStack_518;
  code *local_510;
  code *local_508;
  FNeuralProfileStruct local_500;
  code *local_4b8;
  code *pcStack_4b0;
  FMaterialRenderProxy *local_4a8;
  ForAnyElementType local_4a0;
  undefined8 local_498;
  code *local_490;
  code *local_488;
  code *pcStack_480;
  code *local_478;
  code *pcStack_470;
  code *local_468;
  code *pcStack_460;
  code *local_458;
  code *pcStack_450;
  code *local_448;
  code *pcStack_440;
  code *local_438;
  code *pcStack_430;
  code *local_428;
  code *pcStack_420;
  code *local_418;
  code *pcStack_410;
  code *local_408;
  code *pcStack_400;
  code *local_3f8;
  code *pcStack_3f0;
  code *local_3e8;
  code *pcStack_3e0;
  code *local_3d8;
  code *pcStack_3d0;
  code *local_3c8;
  code *pcStack_3c0;
  code *local_3b8;
  code *pcStack_3b0;
  code *local_3a8;
  code *pcStack_3a0;
  code *local_398;
  code *pcStack_390;
  code *local_388;
  code *pcStack_380;
  code *local_378;
  code *pcStack_370;
  code *local_368;
  code *pcStack_360;
  code *local_358;
  code *pcStack_350;
  code *local_348;
  FMaterialRenderProxy *pFStack_340;
  FLinearColor_u_0 local_338;
  code *local_328;
  code *pcStack_320;
  code *local_318;
  code *pcStack_310;
  code *local_308;
  code *pcStack_300;
  code *local_2f8;
  code *pcStack_2f0;
  code *local_2e8;
  code *pcStack_2e0;
  code *local_2d8;
  code *pcStack_2d0;
  code *local_2c8;
  code *pcStack_2c0;
  code *local_2b8;
  code *pcStack_2b0;
  code *local_2a8;
  code *pcStack_2a0;
  FLinearColor_u_0 local_298;
  code *local_288;
  code *pcStack_280;
  code *local_278;
  code *pcStack_270;
  code *local_268;
  code *pcStack_260;
  code *local_258;
  code *pcStack_250;
  code *local_248;
  code *pcStack_240;
  code *local_238;
  code *pcStack_230;
  code *local_228;
  code *pcStack_220;
  code *local_218;
  code *pcStack_210;
  code *local_208;
  code *pcStack_200;
  code *local_1f8 [2];
  code *local_1e8 [3];
  code **local_1d0;
  code *local_1c8 [2];
  code *local_1b8 [3];
  code **local_1a0;
  code *local_198 [2];
  code *local_188 [3];
  code **local_170;
  code *local_168 [2];
  code *local_158 [3];
  code **local_140;
  undefined1 local_138 [40];
  code **local_110;
  byte local_108;
  undefined1 local_f8 [40];
  code **local_d0;
  byte local_c8;
  undefined1 local_b8 [40];
  code **local_90;
  byte local_88;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_618;
  if ((param_1 == (FMaterialRenderProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("&Proxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                         ,0x6b1,L""), bVar6)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  (**(code **)(this->_padding_ + 0x468))(this,local_5c8);
  iVar17 = 0;
  if ((((local_5c8[0] & 0x20) != 0) || ((local_5c8[0] >> 9 & 1) != 0)) &&
     (bVar6 = Substrate::IsSubstrateEnabled(), !bVar6)) {
    pcVar10 = (code *)(**(code **)(this->_padding_ + 0x528))(this);
    FSubsurfaceProfileStruct::FSubsurfaceProfileStruct((FSubsurfaceProfileStruct *)&local_338._s_0);
    if (pcVar10 != (code *)0x0) {
      local_338._0_8_ = *(undefined8 *)(pcVar10 + 0x28);
      local_338._8_8_ = *(undefined8 *)(pcVar10 + 0x30);
      local_328 = *(code **)(pcVar10 + 0x38);
      pcStack_320 = *(code **)(pcVar10 + 0x40);
      local_318 = *(code **)(pcVar10 + 0x48);
      pcStack_310 = *(code **)(pcVar10 + 0x50);
      local_308 = *(code **)(pcVar10 + 0x58);
      pcStack_300 = *(code **)(pcVar10 + 0x60);
      local_2f8 = *(code **)(pcVar10 + 0x68);
      pcStack_2f0 = *(code **)(pcVar10 + 0x70);
      local_2e8 = *(code **)(pcVar10 + 0x78);
      pcStack_2e0 = *(code **)(pcVar10 + 0x80);
      local_2d8 = *(code **)(pcVar10 + 0x88);
      pcStack_2d0 = *(code **)(pcVar10 + 0x90);
      local_2c8 = *(code **)(pcVar10 + 0x98);
      pcStack_2c0 = *(code **)(pcVar10 + 0xa0);
      local_2b8 = *(code **)(pcVar10 + 0xa8);
      pcStack_2b0 = *(code **)(pcVar10 + 0xb0);
      local_2a8 = *(code **)(pcVar10 + 0xb8);
      pcStack_2a0 = *(code **)(pcVar10 + 0xc0);
    }
    local_1f8[0] = (code *)0x0;
    local_3e8 = (code *)local_338._0_8_;
    pcStack_3e0 = (code *)local_338._8_8_;
    local_3d8 = local_328;
    pcStack_3d0 = pcStack_320;
    local_3c8 = local_318;
    pcStack_3c0 = pcStack_310;
    local_3b8 = local_308;
    pcStack_3b0 = pcStack_300;
    local_3a8 = local_2f8;
    pcStack_3a0 = pcStack_2f0;
    local_398 = local_2e8;
    pcStack_390 = pcStack_2e0;
    local_388 = local_2d8;
    pcStack_380 = pcStack_2d0;
    local_378 = local_2c8;
    pcStack_370 = pcStack_2c0;
    local_368 = local_2b8;
    pcStack_360 = pcStack_2b0;
    local_358 = local_2a8;
    pcStack_350 = pcStack_2a0;
    local_348 = pcVar10;
    pFStack_340 = param_1;
    local_1d0 = FMemory::Malloc(0xb8,8);
    *local_1d0 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`UMaterialInterface::UpdateMaterialRenderProxy'::`12'::<lambda_1>,1,1>
                          ::_vftable_;
    local_1d0[1] = local_3e8;
    local_1d0[2] = pcStack_3e0;
    local_1d0[3] = local_3d8;
    local_1d0[4] = pcStack_3d0;
    local_1d0[5] = local_3c8;
    local_1d0[6] = pcStack_3c0;
    local_1d0[7] = local_3b8;
    local_1d0[8] = pcStack_3b0;
    local_1d0[9] = local_3a8;
    local_1d0[10] = pcStack_3a0;
    local_1d0[0xb] = local_398;
    local_1d0[0xc] = pcStack_390;
    local_1d0[0xd] = local_388;
    local_1d0[0xe] = pcStack_380;
    local_1d0[0xf] = local_378;
    local_1d0[0x10] = pcStack_370;
    local_1d0[0x11] = local_368;
    local_1d0[0x12] = pcStack_360;
    local_1d0[0x13] = local_358;
    local_1d0[0x14] = pcStack_350;
    local_1d0[0x15] = local_348;
    local_1d0[0x16] = (code *)pFStack_340;
    if (local_1d0 + 1 != (code **)0x0) {
      local_1f8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UMaterialInterface::UpdateMaterialRenderProxy'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    pFVar11 = FRenderCommandList::GetInstanceTLS();
    if (pFVar11 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialInterface::UpdateMaterialRenderProxy_::__l12::TSTR_UpdateMaterialRenderProxySubsurface1730>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_1f8);
    }
    else {
      pFVar12 = FRenderCommandList::GetRenderThread(pFVar11);
      local_138._0_8_ = local_1f8[0];
      local_110 = local_1d0;
      local_1d0 = (code **)0x0;
      local_138._16_8_ = local_1e8[0];
      local_138._24_8_ = local_1e8[1];
      local_138._32_8_ = local_1e8[2];
      local_1f8[0] = (code *)0x0;
      local_108 = 2;
      pFVar13 = (FRenderCommandTag *)
                TRenderCommandTag<`UMaterialInterface::UpdateMaterialRenderProxy'::__l12::TSTR_UpdateMaterialRenderProxySubsurface1730>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar12,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_138,pFVar13);
      uVar18 = (ulonglong)local_108;
      if ((2 < uVar18) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar18] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_138._0_8_ != (code *)0x0) {
          ppcVar15 = (code **)(local_138 + 0x10);
          if (local_110 != (code **)0x0) {
            ppcVar15 = local_110;
          }
          (**(code **)(*ppcVar15 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar18])(local_138);
      }
    }
    if (local_1f8[0] != (code *)0x0) {
      ppcVar15 = local_1f8 + 2;
      if (local_1d0 != (code **)0x0) {
        ppcVar15 = local_1d0;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
  }
  pcVar10 = (code *)(**(code **)(this->_padding_ + 0x2d8))(this);
  if (((pcVar10 != (code *)0x0) &&
      (cVar7 = (**(code **)(*(longlong *)pcVar10 + 0x4c8))(pcVar10), cVar7 != '\0')) &&
     (pcVar14 = (code *)(**(code **)(this->_padding_ + 0x568))(this), pcVar14 != (code *)0x0)) {
    local_500.InputFormat = (ENeuralProfileFormat)pcVar14[0x28];
    local_500.OutputFormat = (ENeuralProfileFormat)pcVar14[0x29];
    local_500.RuntimeType = (ENeuralProfileRuntimeType)pcVar14[0x2a];
    local_508 = pcVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(pcVar14 + 0x30) != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)(pcVar14 + 0x30));
    }
    local_500.NNEModelData.field0_0x0 = *(TObjectPtr<UObject>_u_0 *)(pcVar14 + 0x30);
    local_500.InputDimension.field0_0x0._0_8_ = *(undefined8 *)(pcVar14 + 0x38);
    local_500.InputDimension.field0_0x0._8_8_ = *(undefined8 *)(pcVar14 + 0x40);
    local_500.BatchSizeOverride = *(int *)(pcVar14 + 0x58);
    local_500.OutputDimension.field0_0x0._0_8_ = *(undefined8 *)(pcVar14 + 0x48);
    local_500.OutputDimension.field0_0x0._8_8_ = *(undefined8 *)(pcVar14 + 0x50);
    local_500.TileSize = (ENeuralModelTileType)pcVar14[0x5c];
    local_500.TileOverlap.field0_0x0 = *(TIntPoint<int>_u_0 *)(pcVar14 + 0x60);
    local_590 = *(code **)(pcVar14 + 0x70);
    pcStack_588 = *(code **)(pcVar14 + 0x78);
    local_500.TileOverlapResolveType = (ETileOverlapResolveType)pcVar14[0x68];
    local_580 = pcVar14;
    local_578 = param_1;
    local_570 = pcVar14;
    local_4b8 = local_590;
    pcStack_4b0 = pcStack_588;
    FNeuralProfileStruct::FNeuralProfileStruct(&local_568,&local_500);
    local_1c8[0] = (code *)0x0;
    local_520 = local_590;
    pcStack_518 = pcStack_588;
    local_510 = pcVar10;
    ppcVar15 = FMemory::Malloc(0x80,8);
    *ppcVar15 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UMaterialInterface::UpdateMaterialRenderProxy'::`21'::<lambda_2>,1,1>
                         ::_vftable_;
    ppcVar15[1] = local_580;
    ppcVar15[2] = (code *)local_578;
    ppcVar15[3] = local_570;
    *(ENeuralProfileFormat *)(ppcVar15 + 4) = local_568.InputFormat;
    *(ENeuralProfileFormat *)((longlong)ppcVar15 + 0x21) = local_568.OutputFormat;
    *(ENeuralProfileRuntimeType *)((longlong)ppcVar15 + 0x22) = local_568.RuntimeType;
    ((TObjectPtr<UObject>_u_0 *)(ppcVar15 + 5))->DebugPtr =
         (UObject *)local_568.NNEModelData.field0_0x0;
    local_1a0 = ppcVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_568.NNEModelData.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_568.NNEModelData.field0_0x0);
    }
    *(int *)(ppcVar15 + 10) = local_568.BatchSizeOverride;
    *(ENeuralModelTileType *)((longlong)ppcVar15 + 0x54) = local_568.TileSize;
    *(TIntPoint<int>_u_0 *)(ppcVar15 + 0xb) = local_568.TileOverlap.field0_0x0;
    ppcVar15[6] = (code *)local_568.InputDimension.field0_0x0._0_8_;
    ppcVar15[7] = (code *)local_568.InputDimension.field0_0x0._8_8_;
    *(ETileOverlapResolveType *)(ppcVar15 + 0xc) = local_568.TileOverlapResolveType;
    ppcVar15[8] = (code *)local_568.OutputDimension.field0_0x0._0_8_;
    ppcVar15[9] = (code *)local_568.OutputDimension.field0_0x0._8_8_;
    ppcVar15[0xd] = local_590;
    ppcVar15[0xe] = pcStack_588;
    ppcVar15[0xf] = pcVar10;
    if (ppcVar15 + 1 != (code **)0x0) {
      local_1c8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UMaterialInterface::UpdateMaterialRenderProxy'::__l21::<lambda_2>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    pFVar11 = FRenderCommandList::GetInstanceTLS();
    if (pFVar11 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialInterface::UpdateMaterialRenderProxy_::__l21::TSTR_UpdateMaterialRenderProxyNNEModelData1762>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_1c8);
    }
    else {
      pFVar12 = FRenderCommandList::GetRenderThread(pFVar11);
      local_f8._0_8_ = local_1c8[0];
      local_d0 = local_1a0;
      local_1a0 = (code **)0x0;
      local_f8._16_8_ = local_1b8[0];
      local_f8._24_8_ = local_1b8[1];
      local_f8._32_8_ = local_1b8[2];
      local_1c8[0] = (code *)0x0;
      local_c8 = 2;
      pFVar13 = (FRenderCommandTag *)
                TRenderCommandTag<`UMaterialInterface::UpdateMaterialRenderProxy'::__l21::TSTR_UpdateMaterialRenderProxyNNEModelData1762>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar12,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_f8,pFVar13);
      uVar18 = (ulonglong)local_c8;
      if ((2 < uVar18) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar18] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_f8._0_8_ != (code *)0x0) {
          ppcVar15 = (code **)(local_f8 + 0x10);
          if (local_d0 != (code **)0x0) {
            ppcVar15 = local_d0;
          }
          (**(code **)(*ppcVar15 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar18])(local_f8);
      }
    }
    if (local_1c8[0] != (code *)0x0) {
      ppcVar15 = local_1c8 + 2;
      if (local_1a0 != (code **)0x0) {
        ppcVar15 = local_1a0;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
  }
  bVar6 = Substrate::IsSubstrateEnabled();
  if (bVar6) {
    local_5c0.Data = (FScriptContainerElement *)0x0;
    local_5b8 = 0;
    iVar8 = (**(code **)(this->_padding_ + 0x550))(this);
    iVar20 = iVar17;
    if (0 < iVar8) {
      do {
        iVar9 = (int)local_5b8;
        if ((int)local_5b8 == local_5b8._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x440,8,&local_5c0,(int *)((longlong)&local_5b8 + 4));
        }
        local_5b8 = CONCAT44(local_5b8._4_4_,iVar9 + 1);
        pFVar19 = local_5c0.Data + (longlong)iVar9 * 0x440;
        DefaultConstructItems<_UMaterialInterface::UpdateMaterialRenderProxy_::__l25::FEntry,int>
                  (pFVar19,1);
        lVar16 = (**(code **)(this->_padding_ + 0x558))(this,iVar20);
        *(longlong *)&pFVar19->field_0x0 = lVar16;
        if (lVar16 != 0) {
          pFVar19[8] = *(FScriptContainerElement *)(lVar16 + 0x28);
          FRuntimeCurveLinearColor::operator=
                    ((FRuntimeCurveLinearColor *)(pFVar19 + 0x10),
                     (FRuntimeCurveLinearColor *)(lVar16 + 0x30));
          FRuntimeCurveLinearColor::operator=
                    ((FRuntimeCurveLinearColor *)(pFVar19 + 0x218),
                     (FRuntimeCurveLinearColor *)(lVar16 + 0x238));
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (*(UObject **)(lVar16 + 0x440) != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(*(UObject **)(lVar16 + 0x440));
          }
          lVar16 = *(longlong *)(lVar16 + 0x440);
          *(longlong *)(pFVar19 + 0x420) = lVar16;
          lVar1 = *(longlong *)&pFVar19->field_0x0;
          uVar2 = *(undefined4 *)(lVar1 + 0x44c);
          uVar3 = *(undefined4 *)(lVar1 + 0x450);
          uVar4 = *(undefined4 *)(lVar1 + 0x454);
          *(undefined4 *)(pFVar19 + 0x430) = *(undefined4 *)(lVar1 + 0x448);
          *(undefined4 *)(pFVar19 + 0x434) = uVar2;
          *(undefined4 *)(pFVar19 + 0x438) = uVar3;
          *(undefined4 *)(pFVar19 + 0x43c) = uVar4;
          if (lVar16 != 0) {
            *(undefined8 *)(pFVar19 + 0x428) = *(undefined8 *)(*(longlong *)(lVar1 + 0x440) + 0x140)
            ;
          }
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < iVar8);
    }
    pcVar10 = (code *)(**(code **)(this->_padding_ + 0x560))(this);
    FVar5.Data = local_5c0.Data;
    iVar20 = (int)local_5b8;
    if ((0 < (int)local_5b8) || (pcVar10 != (code *)0x0)) {
      local_5a8.Data = (FScriptContainerElement *)0x0;
      local_5a0 = CONCAT44(local_5a0._4_4_,(int)local_5b8);
      local_5b0 = param_1;
      if ((int)local_5b8 == 0) {
        local_5a0 = local_5b8 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x440,8,(int)local_5b8,0,&local_5a8,(int)local_5b8,
                   (int *)((longlong)&local_5a0 + 4));
        ConstructItems<_UMaterialInterface::UpdateMaterialRenderProxy_::__l25::FEntry,_UMaterialInterface::UpdateMaterialRenderProxy_::__l25::FEntry,int>
                  (local_5a8.Data,(FEntry *)FVar5.Data,iVar20);
      }
      local_198[0] = (code *)0x0;
      local_598 = pcVar10;
      local_170 = FMemory::Malloc(0x28,8);
      *local_170 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`UMaterialInterface::UpdateMaterialRenderProxy'::`36'::<lambda_3>,1,1>
                            ::_vftable_;
      local_170[2] = (code *)0x0;
      local_170[1] = (code *)local_5b0;
      local_170[2] = (code *)local_5a8.Data;
      local_5a8.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_170 + 3) = (int)local_5a0;
      *(undefined4 *)((longlong)local_170 + 0x1c) = local_5a0._4_4_;
      local_5a0 = 0;
      local_170[4] = local_598;
      if (local_170 + 1 != (code **)0x0) {
        local_198[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UMaterialInterface::UpdateMaterialRenderProxy'::__l36::<lambda_3>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      pFVar11 = FRenderCommandList::GetInstanceTLS();
      if (pFVar11 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UMaterialInterface::UpdateMaterialRenderProxy_::__l36::TSTR_UpdateMaterialRenderProxySpecular1808>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_198);
      }
      else {
        pFVar12 = FRenderCommandList::GetRenderThread(pFVar11);
        local_b8._0_8_ = local_198[0];
        local_90 = local_170;
        local_170 = (code **)0x0;
        local_b8._16_8_ = local_188[0];
        local_b8._24_8_ = local_188[1];
        local_b8._32_8_ = local_188[2];
        local_198[0] = (code *)0x0;
        local_88 = 2;
        pFVar13 = (FRenderCommandTag *)
                  TRenderCommandTag<`UMaterialInterface::UpdateMaterialRenderProxy'::__l36::TSTR_UpdateMaterialRenderProxySpecular1808>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar12,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_b8,pFVar13);
        uVar18 = (ulonglong)local_88;
        if ((2 < uVar18) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar18] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_b8._0_8_ != (code *)0x0) {
            ppcVar15 = (code **)(local_b8 + 0x10);
            if (local_90 != (code **)0x0) {
              ppcVar15 = local_90;
            }
            (**(code **)(*ppcVar15 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar18])(local_b8);
        }
      }
      if (local_198[0] != (code *)0x0) {
        ppcVar15 = local_198 + 2;
        if (local_170 != (code **)0x0) {
          ppcVar15 = local_170;
        }
        (**(code **)(*ppcVar15 + 0x10))();
      }
      DestructItems<_UMaterialInterface::UpdateMaterialRenderProxy_::__l25::FEntry,int>
                ((FEntry *)local_5a8.Data,(int)local_5a0);
      if ((FEntry *)local_5a8.Data != (FEntry *)0x0) {
        FMemory::Free(local_5a8.Data);
      }
    }
    DestructItems<_UMaterialInterface::UpdateMaterialRenderProxy_::__l25::FEntry,int>
              ((FEntry *)local_5c0.Data,(int)local_5b8);
    if ((FEntry *)local_5c0.Data != (FEntry *)0x0) {
      FMemory::Free(local_5c0.Data);
    }
    local_5d8.Data = (FScriptContainerElement *)0x0;
    local_5d0 = 0;
    iVar20 = (**(code **)(this->_padding_ + 0x540))(this);
    if (0 < iVar20) {
      do {
        iVar8 = (int)local_5d0;
        if ((int)local_5d0 == local_5d0._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8a8,&local_5d8,(int *)((longlong)&local_5d0 + 4));
        }
        local_5d0 = CONCAT44(local_5d0._4_4_,iVar8 + 1);
        pFVar19 = local_5d8.Data + (longlong)iVar8 * 0xa8;
        DefaultConstructItems<_UMaterialInterface::UpdateMaterialRenderProxy_::__l37::FEntry,int>
                  (pFVar19,1);
        lVar16 = (**(code **)(this->_padding_ + 0x530))(this,iVar17);
        *(longlong *)pFVar19 = lVar16;
        if (lVar16 != 0) {
          lVar1 = *(longlong *)(lVar16 + 0x30);
          *(longlong *)(pFVar19 + 8) = *(longlong *)(lVar16 + 0x28);
          *(longlong *)(pFVar19 + 0x10) = lVar1;
          lVar1 = *(longlong *)(lVar16 + 0x40);
          *(longlong *)(pFVar19 + 0x18) = *(longlong *)(lVar16 + 0x38);
          *(longlong *)(pFVar19 + 0x20) = lVar1;
          lVar1 = *(longlong *)(lVar16 + 0x50);
          *(longlong *)(pFVar19 + 0x28) = *(longlong *)(lVar16 + 0x48);
          *(longlong *)(pFVar19 + 0x30) = lVar1;
          lVar1 = *(longlong *)(lVar16 + 0x60);
          *(longlong *)(pFVar19 + 0x38) = *(longlong *)(lVar16 + 0x58);
          *(longlong *)(pFVar19 + 0x40) = lVar1;
          lVar1 = *(longlong *)(lVar16 + 0x70);
          *(longlong *)(pFVar19 + 0x48) = *(longlong *)(lVar16 + 0x68);
          *(longlong *)(pFVar19 + 0x50) = lVar1;
          lVar1 = *(longlong *)(lVar16 + 0x80);
          *(longlong *)(pFVar19 + 0x58) = *(longlong *)(lVar16 + 0x78);
          *(longlong *)(pFVar19 + 0x60) = lVar1;
          lVar1 = *(longlong *)(lVar16 + 0x90);
          *(longlong *)(pFVar19 + 0x68) = *(longlong *)(lVar16 + 0x88);
          *(longlong *)(pFVar19 + 0x70) = lVar1;
          lVar1 = *(longlong *)(lVar16 + 0xa0);
          *(longlong *)(pFVar19 + 0x78) = *(longlong *)(lVar16 + 0x98);
          *(longlong *)(pFVar19 + 0x80) = lVar1;
          uVar2 = *(undefined4 *)(lVar16 + 0xac);
          uVar3 = *(undefined4 *)(lVar16 + 0xb0);
          uVar4 = *(undefined4 *)(lVar16 + 0xb4);
          *(undefined4 *)(pFVar19 + 0x88) = *(undefined4 *)(lVar16 + 0xa8);
          *(undefined4 *)(pFVar19 + 0x8c) = uVar2;
          *(undefined4 *)(pFVar19 + 0x90) = uVar3;
          *(undefined4 *)(pFVar19 + 0x94) = uVar4;
          lVar1 = *(longlong *)(lVar16 + 0xc0);
          *(longlong *)(pFVar19 + 0x98) = *(longlong *)(lVar16 + 0xb8);
          *(longlong *)(pFVar19 + 0xa0) = lVar1;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar20);
    }
    if (((int)local_5d0 == 0) &&
       (lVar16 = (**(code **)(this->_padding_ + 0x528))(this), lVar16 != 0)) {
      iVar17 = (int)local_5d0;
      if ((int)local_5d0 == local_5d0._4_4_) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8a8,&local_5d8,(int *)((longlong)&local_5d0 + 4));
      }
      local_5d0 = CONCAT44(local_5d0._4_4_,iVar17 + 1);
      pFVar19 = local_5d8.Data + (longlong)iVar17 * 0xa8;
      DefaultConstructItems<_UMaterialInterface::UpdateMaterialRenderProxy_::__l37::FEntry,int>
                (pFVar19,1);
      lVar16 = (**(code **)(this->_padding_ + 0x528))(this);
      *(longlong *)pFVar19 = lVar16;
      if (lVar16 != 0) {
        lVar1 = *(longlong *)(lVar16 + 0x30);
        *(longlong *)(pFVar19 + 8) = *(longlong *)(lVar16 + 0x28);
        *(longlong *)(pFVar19 + 0x10) = lVar1;
        lVar1 = *(longlong *)(lVar16 + 0x40);
        *(longlong *)(pFVar19 + 0x18) = *(longlong *)(lVar16 + 0x38);
        *(longlong *)(pFVar19 + 0x20) = lVar1;
        lVar1 = *(longlong *)(lVar16 + 0x50);
        *(longlong *)(pFVar19 + 0x28) = *(longlong *)(lVar16 + 0x48);
        *(longlong *)(pFVar19 + 0x30) = lVar1;
        lVar1 = *(longlong *)(lVar16 + 0x60);
        *(longlong *)(pFVar19 + 0x38) = *(longlong *)(lVar16 + 0x58);
        *(longlong *)(pFVar19 + 0x40) = lVar1;
        lVar1 = *(longlong *)(lVar16 + 0x70);
        *(longlong *)(pFVar19 + 0x48) = *(longlong *)(lVar16 + 0x68);
        *(longlong *)(pFVar19 + 0x50) = lVar1;
        lVar1 = *(longlong *)(lVar16 + 0x80);
        *(longlong *)(pFVar19 + 0x58) = *(longlong *)(lVar16 + 0x78);
        *(longlong *)(pFVar19 + 0x60) = lVar1;
        lVar1 = *(longlong *)(lVar16 + 0x90);
        *(longlong *)(pFVar19 + 0x68) = *(longlong *)(lVar16 + 0x88);
        *(longlong *)(pFVar19 + 0x70) = lVar1;
        lVar1 = *(longlong *)(lVar16 + 0xa0);
        *(longlong *)(pFVar19 + 0x78) = *(longlong *)(lVar16 + 0x98);
        *(longlong *)(pFVar19 + 0x80) = lVar1;
        uVar2 = *(undefined4 *)(lVar16 + 0xac);
        uVar3 = *(undefined4 *)(lVar16 + 0xb0);
        uVar4 = *(undefined4 *)(lVar16 + 0xb4);
        *(undefined4 *)(pFVar19 + 0x88) = *(undefined4 *)(lVar16 + 0xa8);
        *(undefined4 *)(pFVar19 + 0x8c) = uVar2;
        *(undefined4 *)(pFVar19 + 0x90) = uVar3;
        *(undefined4 *)(pFVar19 + 0x94) = uVar4;
        lVar1 = *(longlong *)(lVar16 + 0xc0);
        *(longlong *)(pFVar19 + 0x98) = *(longlong *)(lVar16 + 0xb8);
        *(longlong *)(pFVar19 + 0xa0) = lVar1;
      }
    }
    pcVar10 = (code *)(**(code **)(this->_padding_ + 0x548))(this);
    FSubsurfaceProfileStruct::FSubsurfaceProfileStruct((FSubsurfaceProfileStruct *)&local_298._s_0);
    FVar5.Data = local_5d8.Data;
    if (pcVar10 != (code *)0x0) {
      local_298._0_8_ = *(undefined8 *)(pcVar10 + 0x28);
      local_298._8_8_ = *(undefined8 *)(pcVar10 + 0x30);
      local_288 = *(code **)(pcVar10 + 0x38);
      pcStack_280 = *(code **)(pcVar10 + 0x40);
      local_278 = *(code **)(pcVar10 + 0x48);
      pcStack_270 = *(code **)(pcVar10 + 0x50);
      local_268 = *(code **)(pcVar10 + 0x58);
      pcStack_260 = *(code **)(pcVar10 + 0x60);
      local_258 = *(code **)(pcVar10 + 0x68);
      pcStack_250 = *(code **)(pcVar10 + 0x70);
      local_248 = *(code **)(pcVar10 + 0x78);
      pcStack_240 = *(code **)(pcVar10 + 0x80);
      local_238 = *(code **)(pcVar10 + 0x88);
      pcStack_230 = *(code **)(pcVar10 + 0x90);
      local_228 = *(code **)(pcVar10 + 0x98);
      pcStack_220 = *(code **)(pcVar10 + 0xa0);
      local_218 = *(code **)(pcVar10 + 0xa8);
      pcStack_210 = *(code **)(pcVar10 + 0xb0);
      local_208 = *(code **)(pcVar10 + 0xb8);
      pcStack_200 = *(code **)(pcVar10 + 0xc0);
    }
    lVar16 = (longlong)(int)local_5d0;
    local_4a0.Data = (FScriptContainerElement *)0x0;
    local_498 = CONCAT44(local_498._4_4_,(int)local_5d0);
    local_4a8 = param_1;
    if ((int)local_5d0 == 0) {
      local_498 = local_5d0 & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,(int)local_5d0,0,&local_4a0,(int)local_5d0,(int *)((longlong)&local_498 + 4)
                );
      memcpy(local_4a0.Data,FVar5.Data,lVar16 * 0xa8);
    }
    local_168[0] = (code *)0x0;
    local_488 = (code *)local_298._0_8_;
    pcStack_480 = (code *)local_298._8_8_;
    local_478 = local_288;
    pcStack_470 = pcStack_280;
    local_468 = local_278;
    pcStack_460 = pcStack_270;
    local_458 = local_268;
    pcStack_450 = pcStack_260;
    local_448 = local_258;
    pcStack_440 = pcStack_250;
    local_438 = local_248;
    pcStack_430 = pcStack_240;
    local_428 = local_238;
    pcStack_420 = pcStack_230;
    local_418 = local_228;
    pcStack_410 = pcStack_220;
    local_408 = local_218;
    pcStack_400 = pcStack_210;
    local_3f8 = local_208;
    pcStack_3f0 = pcStack_200;
    local_490 = pcVar10;
    local_140 = FMemory::Malloc(200,8);
    *local_140 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`UMaterialInterface::UpdateMaterialRenderProxy'::`37'::<lambda_4>,1,1>
                          ::_vftable_;
    local_140[2] = (code *)0x0;
    local_140[1] = (code *)local_4a8;
    local_140[2] = (code *)local_4a0.Data;
    local_4a0.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(local_140 + 3) = (undefined4)local_498;
    *(undefined4 *)((longlong)local_140 + 0x1c) = local_498._4_4_;
    local_498 = 0;
    local_140[4] = local_490;
    local_140[5] = local_488;
    local_140[6] = pcStack_480;
    local_140[7] = local_478;
    local_140[8] = pcStack_470;
    local_140[9] = local_468;
    local_140[10] = pcStack_460;
    local_140[0xb] = local_458;
    local_140[0xc] = pcStack_450;
    local_140[0xd] = local_448;
    local_140[0xe] = pcStack_440;
    local_140[0xf] = local_438;
    local_140[0x10] = pcStack_430;
    local_140[0x11] = local_428;
    local_140[0x12] = pcStack_420;
    local_140[0x13] = local_418;
    local_140[0x14] = pcStack_410;
    local_140[0x15] = local_408;
    local_140[0x16] = pcStack_400;
    local_140[0x17] = local_3f8;
    local_140[0x18] = pcStack_3f0;
    if (local_140 + 1 != (code **)0x0) {
      local_168[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UMaterialInterface::UpdateMaterialRenderProxy'::__l37::<lambda_4>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    pFVar11 = FRenderCommandList::GetInstanceTLS();
    if (pFVar11 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialInterface::UpdateMaterialRenderProxy_::__l37::TSTR_UpdateMaterialRenderProxySubsurfaceProfiles1874>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_168);
    }
    else {
      pFVar12 = FRenderCommandList::GetRenderThread(pFVar11);
      local_78._0_8_ = local_168[0];
      local_50 = local_140;
      local_140 = (code **)0x0;
      local_78._16_8_ = local_158[0];
      local_78._24_8_ = local_158[1];
      local_78._32_8_ = local_158[2];
      local_168[0] = (code *)0x0;
      local_48 = 2;
      pFVar13 = (FRenderCommandTag *)
                TRenderCommandTag<`UMaterialInterface::UpdateMaterialRenderProxy'::__l37::TSTR_UpdateMaterialRenderProxySubsurfaceProfiles1874>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar12,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar13);
      uVar18 = (ulonglong)local_48;
      if ((2 < uVar18) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar18] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar15 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar15 = local_50;
          }
          (**(code **)(*ppcVar15 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar18])(local_78);
      }
    }
    if (local_168[0] != (code *)0x0) {
      ppcVar15 = local_168 + 2;
      if (local_140 != (code **)0x0) {
        ppcVar15 = local_140;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    if (local_4a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.Data);
    }
    if (local_5d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data);
    }
  }
  return;
}

// UseAnyStreamingTexture @ 147f55360

bool __thiscall UMaterialInterface::UseAnyStreamingTexture(UMaterialInterface *this)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong *plVar5;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_res10 [2];
  undefined1 local_res12;
  longlong *local_18;
  ulonglong local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  local_res12 = 0;
  local_res9 = 0;
  (**(code **)(this->_padding_ + 0x330))(this,&local_18,&local_res8,local_res10);
  iVar2 = (int)local_10;
  uVar3 = (ulonglong)(int)local_10;
  plVar1 = local_18 + uVar3;
  plVar5 = local_18;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
      uVar3 = local_10 & 0xffffffff;
    }
    if (plVar5 == plVar1) break;
    if ((*plVar5 != 0) && (*(int *)(*plVar5 + 0xb8) != -1)) {
      bVar4 = true;
LAB_147f553dc:
      if (local_18 != (longlong *)0x0) {
        FMemory::Free(local_18);
      }
      return bVar4;
    }
    plVar5 = plVar5 + 1;
  }
  bVar4 = false;
  goto LAB_147f553dc;
}

// WritesToRuntimeVirtualTexture @ 147f55c90

bool __thiscall UMaterialInterface::WritesToRuntimeVirtualTexture(UMaterialInterface *this)

{
  return false;
}

// execGetBaseMaterial @ 147f57bf0

void __cdecl UMaterialInterface::execGetBaseMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d8))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetBlendMode @ 147f57c30

void __cdecl UMaterialInterface::execGetBlendMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x460))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetNaniteOverideMaterial @ 147f57c70

void __cdecl
UMaterialInterface::execGetNaniteOverideMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = 0;
  uStack_10 = 0;
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x3a8))(0,&local_18);
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetParameterInfo @ 147f57cc0

void __cdecl
UMaterialInterface::execGetParameterInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 uVar3;
  UObject *pUVar4;
  char cVar5;
  ForAnyElementType FVar6;
  int iVar7;
  ForAnyElementType FVar8;
  char local_res10 [8];
  undefined8 local_res18;
  UObject *local_res20;
  undefined8 local_168;
  undefined8 uStack_160;
  FMaterialLayersFunctionsRuntimeData local_158;
  void *local_128;
  undefined8 local_120;
  FText *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  FText *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar4 = local_res20;
  uVar3 = local_res18;
  cVar2 = local_res10[0];
  iVar7 = -1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = local_res18;
  if (local_res10[0] == '\x02') {
LAB_147f5804f:
    local_168 = CONCAT44((int)((ulonglong)local_48 >> 0x20),(int)uVar3);
    uStack_160 = CONCAT71(uStack_160._1_7_,cVar2);
    uStack_160 = CONCAT44(iVar7,(undefined4)uStack_160);
  }
  else {
    if (local_res20 != (UObject *)0x0) {
      local_158.Layers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.Layers.ArrayNum = 0;
      local_158.Layers.ArrayMax = 0;
      local_158.Blends.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.Blends.ArrayNum = 0;
      local_158.Blends.ArrayMax = 0;
      local_158.LayerStackCache.Object = (FMaterialLayerStackFunctionsCache *)0x0;
      local_158.LayerStackCache.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_128 = (void *)0x0;
      local_120 = 0;
      local_118 = (FText *)0x0;
      local_110 = 0;
      local_108 = (void *)0x0;
      local_100 = 0;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_e8 = (void *)0x0;
      local_e0 = 0;
      local_d8 = (void *)0x0;
      local_d0 = 0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_a8 = (FText *)0x0;
      local_a0 = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_88 = (void *)0x0;
      local_80 = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_168 = 0;
      uStack_160 = 0;
      cVar5 = (**(code **)(*(longlong *)param_1 + 0x3a0))(param_1,&local_158,&local_168);
      iVar7 = -1;
      if (cVar5 != '\0') {
        if (cVar2 == '\x01') {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          for (FVar8.Data = local_158.Blends.AllocatorInstance.Data;
              FVar8.Data !=
              local_158.Blends.AllocatorInstance.Data + (longlong)local_158.Blends.ArrayNum * 8;
              FVar8.Data = FVar8.Data + 8) {
            FVar6.Data = local_158.Blends.AllocatorInstance.Data;
            if (*(UObject **)FVar8.Data == pUVar4) goto LAB_147f58043;
          }
        }
        else {
          if (cVar2 != '\0') goto LAB_147f57ef7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          for (FVar8.Data = local_158.Layers.AllocatorInstance.Data;
              FVar8.Data !=
              local_158.Layers.AllocatorInstance.Data + (longlong)local_158.Layers.ArrayNum * 8;
              FVar8.Data = FVar8.Data + 8) {
            FVar6.Data = local_158.Layers.AllocatorInstance.Data;
            if (*(UObject **)FVar8.Data == pUVar4) goto LAB_147f58043;
          }
        }
        iVar7 = -1;
      }
LAB_147f57ef7:
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      DestructItems<FText,int>(local_a8,(int)local_a0);
      if (local_a8 != (FText *)0x0) {
        FMemory::Free(local_a8);
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
      if (local_108 != (void *)0x0) {
        FMemory::Free(local_108);
      }
      DestructItems<FText,int>(local_118,(int)local_110);
      if (local_118 != (FText *)0x0) {
        FMemory::Free(local_118);
      }
      if (local_128 != (void *)0x0) {
        FMemory::Free(local_128);
      }
      FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData(&local_158);
      if (iVar7 != -1) goto LAB_147f5804f;
    }
    local_168 = 0;
    uStack_160 = CONCAT71(uStack_160._1_7_,2);
    uStack_160 = CONCAT44(0xffffffff,(undefined4)uStack_160);
  }
  *(undefined8 *)param_3 = local_168;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_160;
  return;
LAB_147f58043:
  iVar7 = (int)((longlong)FVar8.Data - (longlong)FVar6.Data >> 3);
  goto LAB_147f57ef7;
}

// execGetPhysicalMaterial @ 147f58090

void __cdecl
UMaterialInterface::execGetPhysicalMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x318))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetPhysicalMaterialFromMap @ 147f580d0

void __cdecl
UMaterialInterface::execGetPhysicalMaterialFromMap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x328))(param_1,local_res8[0]);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetPhysicalMaterialMask @ 147f58170

void __cdecl
UMaterialInterface::execGetPhysicalMaterialMask(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 800))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execSetForceMipLevelsToBeResident @ 147f59f20

void __cdecl
UMaterialInterface::execSetForceMipLevelsToBeResident
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res8 [2];
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_38;
  undefined4 local_34 [3];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_34[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_34,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_34);
  }
  local_38 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x590))
            (param_1,bVar2,bVar3,local_34[0],local_38,local_res20[0] != 0);
  return;
}

// AnalyzeMaterialCompilationInCallback @ 147f6e210

void __thiscall
UMaterialInterface::AnalyzeMaterialCompilationInCallback
          (UMaterialInterface *this,TFunctionRef<void___cdecl(FMaterialCompiler_*)> *param_1,
          FMaterialAnalysisResult *param_2)

{
  return;
}

// AnalyzeMaterialCustomOutput @ 147f6e220

void __thiscall
UMaterialInterface::AnalyzeMaterialCustomOutput
          (UMaterialInterface *this,UMaterialExpressionCustomOutput *param_1,int param_2,
          FMaterialAnalysisResult *param_3)

{
  return;
}

// AnalyzeMaterialProperty @ 147f6e230

void __thiscall
UMaterialInterface::AnalyzeMaterialProperty
          (UMaterialInterface *this,EMaterialProperty param_1,int *param_2,bool *param_3)

{
  return;
}

// AnalyzeMaterialPropertyEx @ 147f6e240

void __thiscall
UMaterialInterface::AnalyzeMaterialPropertyEx
          (UMaterialInterface *this,EMaterialProperty param_1,FMaterialAnalysisResult *param_2)

{
  return;
}

// AnalyzeMaterialTranslationOutput @ 147f6e250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMaterialInterface::AnalyzeMaterialTranslationOutput
          (UMaterialInterface *this,FMaterialResource *param_1,EShaderPlatform param_2,
          FMaterialAnalysisResult *param_3)

{
  ForElementType<unsigned_int> FVar1;
  FMaterialAnalysisResult local_38;
  
  if (param_3 != &local_38) {
    *(undefined8 *)(param_3->TextureCoordinates).AllocatorInstance.InlineData =
         local_38.TextureCoordinates.AllocatorInstance.InlineData._0_8_;
    *(undefined8 *)((param_3->TextureCoordinates).AllocatorInstance.InlineData + 8) =
         local_38.TextureCoordinates.AllocatorInstance.InlineData._8_8_;
    FVar1 = (param_3->TextureCoordinates).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (param_3->TextureCoordinates).AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    (param_3->TextureCoordinates).NumBits = 0;
    (param_3->TextureCoordinates).MaxBits = 0x80;
  }
  (param_3->ShadingModels).ShadingModelField = 0;
  param_3->bRequiresVertexData = false;
  param_3->bTranslationSuccess = false;
  param_3->EstimatedNumTextureSamplesVS = 0;
  param_3->EstimatedNumTextureSamplesPS = 0;
  return;
}

// AnalyzeMaterialTranslationOutput @ 147f6e2b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMaterialInterface::AnalyzeMaterialTranslationOutput
          (UMaterialInterface *this,FMaterialResource *param_1,EShaderPlatform param_2,bool param_3,
          FMaterialAnalysisResult *param_4)

{
  ForElementType<unsigned_int> FVar1;
  FMaterialAnalysisResult local_38;
  
  if (param_4 != &local_38) {
    *(undefined8 *)(param_4->TextureCoordinates).AllocatorInstance.InlineData =
         local_38.TextureCoordinates.AllocatorInstance.InlineData._0_8_;
    *(undefined8 *)((param_4->TextureCoordinates).AllocatorInstance.InlineData + 8) =
         local_38.TextureCoordinates.AllocatorInstance.InlineData._8_8_;
    FVar1 = (param_4->TextureCoordinates).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (param_4->TextureCoordinates).AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    (param_4->TextureCoordinates).NumBits = 0;
    (param_4->TextureCoordinates).MaxBits = 0x80;
  }
  (param_4->ShadingModels).ShadingModelField = 0;
  param_4->bRequiresVertexData = false;
  param_4->bTranslationSuccess = false;
  param_4->EstimatedNumTextureSamplesVS = 0;
  param_4->EstimatedNumTextureSamplesPS = 0;
  return;
}

// IsPropertyActive @ 147f80900

bool __thiscall
UMaterialInterface::IsPropertyActive(UMaterialInterface *this,EMaterialProperty param_1)

{
  return false;
}

