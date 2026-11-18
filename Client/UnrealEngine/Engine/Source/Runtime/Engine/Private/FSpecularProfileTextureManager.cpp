// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// ReleaseRHI @ 148431850

void __thiscall FSpecularProfileTextureManager::ReleaseRHI(FSpecularProfileTextureManager *this)

{
  TRefCountPtr<IPooledRenderTarget> TVar1;
  
  TVar1.Reference = GSpecularProfileTextureAtlas.Reference;
  if (GSpecularProfileTextureAtlas.Reference != (IPooledRenderTarget *)0x0) {
    GSpecularProfileTextureAtlas.Reference = (IPooledRenderTarget *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014843186a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((TVar1.Reference)->_padding_ + 0x38))();
    return;
  }
  return;
}

// FSpecularProfileTextureManager @ 148442d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSpecularProfileTextureManager * __thiscall
FSpecularProfileTextureManager::FSpecularProfileTextureManager(FSpecularProfileTextureManager *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSpecularProfileTextureManager *pFVar5;
  FSpecularProfileStruct *pFVar6;
  FSpecularProfileStruct *this_00;
  undefined1 auStack_458 [32];
  FSpecularProfileStruct local_438;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_458;
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FSpecularProfileTextureManager__6B_;
  (this->SpecularProfileEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecularProfileEntries).ArrayNum = 0;
  (this->SpecularProfileEntries).ArrayMax = 0;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SpecularProfile.cpp"
                       ,0xc4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSpecularProfileTextureManager *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->SpecularProfileEntries).ArrayNum;
  if (iVar4 == (this->SpecularProfileEntries).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x440,8,&(this->SpecularProfileEntries).AllocatorInstance,
                       &(this->SpecularProfileEntries).ArrayMax);
  }
  pFVar1 = (this->SpecularProfileEntries).AllocatorInstance.Data;
  (this->SpecularProfileEntries).ArrayNum = iVar4 + 1;
  this_00 = (FSpecularProfileStruct *)(pFVar1 + (longlong)iVar4 * 0x440);
  DefaultConstructItems<FSpecularProfileTextureManager::FProfileEntry,int>(this_00,1);
  pFVar6 = FSpecularProfileStruct::FSpecularProfileStruct(&local_438);
  FSpecularProfileStruct::operator=(this_00,pFVar6);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_438.LightColor);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_438.ViewColor);
  *(undefined8 *)(this_00 + 1) = 0;
  this_00[1].ViewColor.ColorCurves[0]._padding_ = 0;
  return this;
}

// ~FSpecularProfileTextureManager @ 1484464a0

void __thiscall
FSpecularProfileTextureManager::~FSpecularProfileTextureManager
          (FSpecularProfileTextureManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSpecularProfileTextureManager__6B_;
  DestructItems<FSpecularProfileTextureManager::FProfileEntry,int>
            ((FProfileEntry *)(this->SpecularProfileEntries).AllocatorInstance.Data,
             (this->SpecularProfileEntries).ArrayNum);
  pFVar1 = (this->SpecularProfileEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// AddOrUpdateProfile @ 14844e540

int __thiscall
FSpecularProfileTextureManager::AddOrUpdateProfile
          (FSpecularProfileTextureManager *this,USpecularProfile *param_1,FGuid *param_2,
          FSpecularProfileStruct *param_3,FTextureReference *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSpecularProfileStruct *pFVar4;
  FSpecularProfileStruct local_868;
  FSpecularProfileStruct local_448;
  
  if (param_1 == (USpecularProfile *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InProfile",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SpecularProfile.cpp"
                       ,0xd3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FindAllocationId(this,param_1);
  if (iVar3 == -1) {
    pFVar4 = FSpecularProfileStruct::FSpecularProfileStruct(&local_448,param_3);
    iVar3 = AddProfile(this,param_1,param_2,pFVar4,param_4);
  }
  else {
    pFVar4 = FSpecularProfileStruct::FSpecularProfileStruct(&local_868,param_3);
    UpdateProfile(this,iVar3,pFVar4,param_4);
  }
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&param_3->LightColor);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&param_3->ViewColor);
  return iVar3;
}

// AddProfile @ 148451260

int __thiscall
FSpecularProfileTextureManager::AddProfile
          (FSpecularProfileTextureManager *this,USpecularProfile *param_1,FGuid *param_2,
          FSpecularProfileStruct *param_3,FTextureReference *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FName *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FName local_468;
  FName local_460;
  FSpecularProfileStruct local_458;
  
  if ((param_1 == (USpecularProfile *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProfile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SpecularProfile.cpp"
                         ,0xe5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = FindAllocationId(this,param_1);
  if ((iVar4 != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FindAllocationId(InProfile) == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SpecularProfile.cpp"
                         ,0xe6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  uVar7 = 1;
  if (1 < (this->SpecularProfileEntries).ArrayNum) {
    lVar9 = 0x440;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->SpecularProfileEntries).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if (*(longlong *)((this->SpecularProfileEntries).AllocatorInstance.Data + lVar9 + 0x420) == 0)
      {
        uVar5 = 0;
        if ((int)uVar7 < (this->SpecularProfileEntries).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        local_4a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar8 = (this->SpecularProfileEntries).AllocatorInstance.Data;
        local_4a8.Data.ArrayNum = 0;
        local_4a8.Data.ArrayMax = 0;
        *(USpecularProfile **)(pFVar8 + (longlong)(int)uVar7 * 0x440 + 0x420) = param_1;
        FGuid::AppendString(param_2,&local_4a8,Digits);
        ::FString::ConcatCF(&local_488,L"__SpecularProfile",&local_4a8);
        iVar4 = local_488.Data.ArrayNum + -1;
        if (local_488.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        pFVar6 = ::FName::FName(&local_468,iVar4,(wchar_t *)local_488.Data.AllocatorInstance.Data,
                                FNAME_Add);
        *(FName *)(pFVar8 + (longlong)(int)uVar7 * 0x440 + 0x438) = *pFVar6;
        if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.Data.AllocatorInstance.Data);
        }
        if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
        }
        if (uVar7 != 0xffffffff) goto LAB_148451526;
        break;
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x440;
    } while ((int)uVar7 < (this->SpecularProfileEntries).ArrayNum);
  }
  uVar7 = (this->SpecularProfileEntries).ArrayNum;
  piVar1 = &(this->SpecularProfileEntries).ArrayMax;
  uVar5 = uVar7;
  if (uVar7 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x440,8,&(this->SpecularProfileEntries).AllocatorInstance,piVar1);
    (this->SpecularProfileEntries).ArrayNum = uVar5;
  }
  (this->SpecularProfileEntries).ArrayNum = uVar5 + 1;
  pFVar8 = (this->SpecularProfileEntries).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x440;
  DefaultConstructItems<FSpecularProfileTextureManager::FProfileEntry,int>(pFVar8,1);
  *(USpecularProfile **)(pFVar8 + 0x420) = param_1;
  local_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_498.Data.ArrayNum = 0;
  local_498.Data.ArrayMax = 0;
  FGuid::AppendString(param_2,&local_498,Digits);
  ::FString::ConcatCF(&local_478,L"__SpecularProfile",&local_498);
  iVar4 = local_478.Data.ArrayNum + -1;
  if (local_478.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  pFVar6 = ::FName::FName(&local_460,iVar4,(wchar_t *)local_478.Data.AllocatorInstance.Data,
                          FNAME_Add);
  *(FName *)(pFVar8 + 0x438) = *pFVar6;
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
LAB_148451526:
  local_458.Format = param_3->Format;
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&local_458.ViewColor,&param_3->ViewColor);
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&local_458.LightColor,&param_3->LightColor);
  local_458.Texture.field0_0x0 = (TObjectPtr<UTexture2D>_u_0)(param_3->Texture).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_458.Texture.field0_0x0.DebugPtr != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_458.Texture.field0_0x0);
  }
  UpdateProfile(this,uVar7,&local_458,param_4);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&param_3->LightColor);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&param_3->ViewColor);
  return uVar7;
}

// FindAllocationId @ 148466fd0

int __thiscall
FSpecularProfileTextureManager::FindAllocationId
          (FSpecularProfileTextureManager *this,USpecularProfile *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 1;
  if (1 < (this->SpecularProfileEntries).ArrayNum) {
    lVar6 = 0x440;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->SpecularProfileEntries).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(USpecularProfile **)
           ((this->SpecularProfileEntries).AllocatorInstance.Data + lVar6 + 0x420) == param_1) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x440;
    } while ((int)uVar5 < (this->SpecularProfileEntries).ArrayNum);
  }
  return -1;
}

// GetAtlasTexture @ 148469280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014846a577) */
/* WARNING: Removing unreachable block (ram,0x00014846a378) */
/* WARNING: Removing unreachable block (ram,0x00014846a38b) */
/* WARNING: Removing unreachable block (ram,0x00014846a9be) */
/* WARNING: Removing unreachable block (ram,0x00014846a9ca) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

IPooledRenderTarget * __thiscall
FSpecularProfileTextureManager::GetAtlasTexture
          (FSpecularProfileTextureManager *this,FRDGBuilder *param_1,EShaderPlatform param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  int *piVar3;
  TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *pTVar4;
  TArray<FRDGBuilder::FUploadedBuffer,TRDGArrayAllocator<0>_> *pTVar5;
  char cVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FRHICommandListBase *pFVar9;
  FUploadedBuffer *pFVar10;
  code *pcVar11;
  float fVar12;
  TConsoleVariableData<int> *pTVar13;
  TRefCountPtr<IPooledRenderTarget> TVar14;
  ForAnyElementType FVar15;
  FSpecularProfileTextureManager *pFVar16;
  FParameters *pFVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  IPooledRenderTarget *pIVar24;
  longlong lVar25;
  FRDGScope *this_00;
  FRHITextureDesc *pFVar26;
  FRDGTexture *pFVar27;
  FRDGTextureUAV *pFVar28;
  FRHITexture *pFVar29;
  FLinearColor *pFVar30;
  FRDGBuffer *pFVar31;
  ForAnyElementType FVar32;
  FRDGBufferSRV *pFVar33;
  FShaderType *pFVar34;
  FName FVar35;
  FRDGEventName *pFVar36;
  FShaderParametersMetadata *pFVar37;
  FRDGTexture *pFVar38;
  undefined8 *puVar39;
  FRHITexture *pFVar40;
  TIntPoint<int>_u_0 TVar41;
  FRDGUserValidation *this_01;
  undefined8 uVar42;
  FRDGTexture *pFVar43;
  EPixelFormat EVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  FRDGBuilder *pFVar48;
  FRDGBuilder *pFVar49;
  ulong64 uVar50;
  ulonglong uVar51;
  float fVar52;
  float fVar53;
  undefined1 auStackY_8c8 [32];
  short local_878;
  ForAnyElementType local_868;
  uint local_860 [2];
  undefined8 local_858;
  undefined8 local_850;
  uint local_848;
  uint local_844;
  FSpecularProfileTextureManager *local_840;
  ForAnyElementType local_838;
  int local_830 [2];
  ForAnyElementType local_828;
  int local_820 [2];
  FRHITexture *local_818;
  FRDGBuilder *local_810;
  undefined8 *local_808;
  FRDGTexture *local_800;
  FRDGBufferDesc local_7f8;
  FRDGExternalAccessQueue local_7e0;
  undefined4 local_7d0;
  uint uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined8 local_7c0;
  FGlobalShaderMap *local_7b8;
  FParameters *local_7b0;
  longlong local_7a8;
  TIntVector3<int>_u_0 local_788;
  TIntVector3<int>_u_0 local_778;
  FRDGBufferDesc local_768;
  TIntVector3<int>_u_0 local_750;
  TIntPoint<int>_u_0 local_744;
  int local_73c;
  TIntPoint<int>_u_0 local_738;
  int local_730;
  undefined8 local_72c;
  undefined8 local_724;
  undefined4 local_71c;
  undefined4 local_718;
  FRDGTextureUAV *local_710;
  FRDGUserValidation *local_708;
  FMemStackBase *local_700;
  undefined1 local_6f8 [8];
  TRDGEventScopeGuard<FRDGScope_RHI> local_6f0;
  char local_6e0;
  undefined1 local_6d8 [8];
  FRDGBufferSRVDesc local_6d0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_6a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_698;
  FRDGBufferSRVDesc local_688;
  FRDGBufferSRVDesc local_668;
  FRDGEventName local_648;
  FString local_630;
  TShaderRefBase<FSpecularProfileConvolveCS,FShaderMapPointerTable> local_618;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_> local_608;
  FString local_5f8;
  FRDGBufferDesc local_5e8;
  TShaderRefBase<FSpecularProfileCopyCS,FShaderMapPointerTable> local_5c8;
  uint uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  FRDGEventName local_598;
  FLinearColor local_580;
  FLinearColor local_570;
  FPooledRenderTargetDesc local_558;
  undefined1 local_4f8 [80];
  FScriptContainerElement local_4a8;
  FRuntimeCurveLinearColor local_4a0;
  FRuntimeCurveLinearColor local_298;
  UObject *local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  local_840 = this;
  local_810 = param_1;
  bVar18 = Substrate::IsSubstrateEnabled();
  if ((!bVar18) ||
     (bVar18 = IsSpecularProfileSupport(param_2), pTVar13 = CVarSpecularProfileForceUpdate.Ref,
     !bVar18)) {
    return (IPooledRenderTarget *)0x0;
  }
  uVar7 = (this->SpecularProfileEntries).ArrayNum;
  bVar18 = IsInParallelGameThread();
  if ((bVar18) || (bVar18 = IsInGameThread(), bVar18)) {
    lVar23 = 0;
  }
  else {
    lVar23 = 4;
  }
  uVar20 = 0;
  iVar21 = *(int *)((longlong)pTVar13->ShadowedValue + lVar23);
  bVar18 = iVar21 == 1;
  if (uVar7 == 0) {
LAB_148469499:
    if (iVar21 != 1) goto LAB_1484694fc;
  }
  else if (iVar21 != 1) {
    do {
      uVar45 = ~uVar20 >> 0x1f;
      uVar47 = 0;
      if ((int)uVar20 < (this->SpecularProfileEntries).ArrayNum) {
        uVar47 = uVar45;
      }
      if ((uVar47 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar11 = (code *)swi(3);
        pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
        return pIVar24;
      }
      pFVar16 = local_840;
      lVar23 = (longlong)(int)uVar20 * 0x440;
      if (*(longlong *)((local_840->SpecularProfileEntries).AllocatorInstance.Data + lVar23 + 0x428)
          != 0) {
        uVar47 = 0;
        if ((int)uVar20 < (local_840->SpecularProfileEntries).ArrayNum) {
          uVar47 = uVar45;
        }
        if ((uVar47 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
          return pIVar24;
        }
        lVar25 = (**(code **)(**(longlong **)
                                (*(longlong *)
                                  ((pFVar16->SpecularProfileEntries).AllocatorInstance.Data +
                                  lVar23 + 0x428) + 0x20) + 0x20))();
        uVar47 = 0;
        if ((int)uVar20 < (local_840->SpecularProfileEntries).ArrayNum) {
          uVar47 = uVar45;
        }
        if ((uVar47 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
          return pIVar24;
        }
        pFVar8 = (local_840->SpecularProfileEntries).AllocatorInstance.Data;
        if ((*(int *)(lVar25 + 0x24) != *(int *)(pFVar8 + lVar23 + 0x430)) ||
           (*(int *)(lVar25 + 0x28) != *(int *)(pFVar8 + lVar23 + 0x434))) {
          bVar18 = true;
          this = local_840;
          goto LAB_1484694a1;
        }
      }
      uVar20 = uVar20 + 1;
      this = local_840;
    } while (uVar20 < uVar7);
    goto LAB_148469499;
  }
LAB_1484694a1:
  TVar14.Reference = GSpecularProfileTextureAtlas.Reference;
  if ((((GSpecularProfileTextureAtlas.Reference != (IPooledRenderTarget *)0x0) &&
       (GSpecularProfileTextureAtlas.Reference = (IPooledRenderTarget *)0x0,
       TVar14.Reference != (IPooledRenderTarget *)0x0)) &&
      ((**(code **)((TVar14.Reference)->_padding_ + 0x38))(), TVar14 = GSpecularProfileTextureAtlas,
      GSpecularProfileTextureAtlas.Reference != (IPooledRenderTarget *)0x0)) &&
     (GSpecularProfileTextureAtlas.Reference = (IPooledRenderTarget *)0x0,
     TVar14.Reference != (IPooledRenderTarget *)0x0)) {
    (**(code **)((TVar14.Reference)->_padding_ + 0x38))();
  }
LAB_1484694fc:
  pFVar49 = local_810;
  if (GSpecularProfileTextureAtlas.Reference == (IPooledRenderTarget *)0x0) {
    pFVar9 = (FRHICommandListBase *)local_810->_padding_;
    uVar20 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarSpecularProfileResolution.Ref);
    local_848 = uVar20;
    if ((uVar7 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("LayerCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SpecularProfile.cpp"
                            ,0x168,L""), bVar19)) {
      pcVar11 = (code *)swi(3);
      pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
      return pIVar24;
    }
    cVar6 = *(char *)((longlong)&pFVar49->_padding_ + 6);
    local_6e0 = '\0';
    if ((cVar6 != '\0') && ((cVar6 != '\x01' || ((pFVar49->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_5a8 = 0;
        uStack_5a4 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_5ac);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_SpecularProfile;
        ::Desc._padding_ = (longlong)u_SpecularProfile;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0x16a;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FSpecularProfileTextureManager::GetAtlasTexture'::__l31::Desc::operator()<>'::__l3
               ::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_6f0.State = (FRDGScopeState *)pFVar49;
      local_608._Myfirst._Val = &::Desc;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&pFVar49->_padding_,(FRDGScope **)pFVar49);
      pFVar49->_padding_ = (longlong)this_00;
      local_6f0.Scope = this_00;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_>_>
                (&(this_00->Impl).Impl,(FRDGScopeState *)pFVar49,&local_608);
      if (*(char *)((longlong)&pFVar49->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)pFVar49->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)pFVar49->_padding_);
      }
      local_6e0 = '\x01';
    }
    bVar19 = true;
    if ((ZPULL(GPixelFormats[0x1a],0,1) == 0) ||
       ((GPixelFormats[0x1a].Capabilities & TextureFilterable) == None)) {
      bVar19 = false;
    }
    EVar44 = PF_FloatRGBA;
    if (bVar19) {
      EVar44 = PF_FloatR11G11B10;
    }
    TVar41._s_0.Y = uVar20;
    TVar41._s_0.X = uVar20;
    if (uVar20 == 0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InExtent.X",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                          ,0x8f,L"");
      if (bVar19) {
        pcVar11 = (code *)swi(3);
        pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
        return pIVar24;
      }
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InExtent.Y",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                          ,0x90,L"");
      if (bVar19) {
        pcVar11 = (code *)swi(3);
        pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
        return pIVar24;
      }
    }
    local_558.ClearValue.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
    local_878 = (short)uVar7;
    local_558.ArraySize = local_878 * 2;
    local_558.UAVFormat = PF_Unknown;
    local_558.DebugName = L"UnknownTexture2DArray";
    local_558.NumSamples = '\x01';
    local_558.FastVRAMPercentage = 0xff;
    local_558.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_558.AliasableFormats.ArrayNum = 0;
    local_558.AliasableFormats.ArrayMax = 1;
    local_558.Depth = 0;
    local_558.field13_0x58.PackedBits = '\x01';
    local_558.NumMips = '\x01';
    local_558.Flags = UAV|ShaderResource;
    local_558.ClearValue._0_8_ = FClearValueBinding::None._0_8_;
    local_558.ClearValue.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
    local_558.Format = EVar44;
    local_558.Extent.field0_0x0 = TVar41;
    if (((uVar20 == 0) || (uVar20 == 0)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewDesc.Is2DTexture()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                            ,0x9e,L""), bVar19)) {
      pcVar11 = (code *)swi(3);
      pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
      return pIVar24;
    }
    pFVar26 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_4f8,&local_558);
    FRenderTargetPool::FindFreeElement
              ((FRenderTargetPool *)&GRenderTargetPool,pFVar9,pFVar26,&GSpecularProfileTextureAtlas,
               L"SpecularProfileTexture");
    if ((void *)local_4f8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_4f8._64_8_);
    }
    local_7b8 = GetGlobalShaderMap(param_2);
    pFVar27 = FRDGBuilder::RegisterExternalTexture
                        (pFVar49,&GSpecularProfileTextureAtlas,L"SpecularProfileTexture",None);
    local_800 = pFVar27;
    if (bVar18) {
      pFVar28 = FRDGBuilder::CreateUAV(pFVar49,pFVar27,None,PF_Unknown);
      AddClearUAVPass(pFVar49,pFVar28,0.0,Compute);
    }
    local_710 = FRDGBuilder::CreateUAV(pFVar49,pFVar27,SkipBarrier,PF_Unknown);
    fVar12 = __real_3f000000;
    fVar52 = __real_3f800000;
    local_844 = 0;
    if (uVar7 != 0) {
      local_700 = (FMemStackBase *)&pFVar49->_padding_;
      pFVar48 = pFVar49;
      do {
        uVar20 = local_844;
        uVar45 = ~local_844;
        uVar47 = 0;
        if ((int)local_844 < (this->SpecularProfileEntries).ArrayNum) {
          uVar47 = uVar45 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
          return pIVar24;
        }
        pFVar8 = (this->SpecularProfileEntries).AllocatorInstance.Data;
        lVar23 = (longlong)(int)uVar20 * 0x440;
        local_4a8 = pFVar8[lVar23];
        FRuntimeCurveLinearColor::FRuntimeCurveLinearColor
                  (&local_4a0,(FRuntimeCurveLinearColor *)(pFVar8 + lVar23 + 8));
        FRuntimeCurveLinearColor::FRuntimeCurveLinearColor
                  (&local_298,(FRuntimeCurveLinearColor *)(pFVar8 + lVar23 + 0x210));
        local_90 = *(UObject **)(pFVar8 + lVar23 + 0x418);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_90);
        }
        uVar47 = 0;
        if ((int)uVar20 < (this->SpecularProfileEntries).ArrayNum) {
          uVar47 = uVar45 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
          return pIVar24;
        }
        lVar23 = *(longlong *)
                  ((this->SpecularProfileEntries).AllocatorInstance.Data + lVar23 + 0x428);
        local_7a8 = lVar23;
        pFVar29 = FMemStackBase::Alloc((FMemStackBase *)&pFVar48->_padding_,0x50,0x10);
        pFVar40 = (FRHITexture *)0x0;
        if (pFVar29 == (FRHITexture *)0x0) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          pFVar29 = pFVar40;
          if (bVar18) {
            pcVar11 = (code *)swi(3);
            pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
            return pIVar24;
          }
        }
        else {
          pFVar29->_padding_ = 0;
          pFVar29->_padding_ =
               (longlong)&___7__TObject_VFParameters_FSpecularProfileCopyCS___FRDGAllocator__6B_;
          pFVar29->_padding_ = 0;
          pFVar29->_padding_ = 0;
          pFVar29->_padding_ = 0;
          pFVar29->_padding_ = 0;
        }
        local_818 = pFVar29;
        if ((((FRHITexture **)pFVar48->_padding_ <= &local_818) &&
            (&local_818 <
             (FRHITexture **)pFVar48->_padding_ + *(int *)((longlong)&pFVar48->_padding_ + 4))) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
          return pIVar24;
        }
        iVar21 = (int)pFVar48->_padding_;
        if (iVar21 == *(int *)((longlong)&pFVar48->_padding_ + 4)) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&pFVar48->_padding_,
                              (int *)((longlong)&pFVar48->_padding_ + 4));
        }
        plVar1 = &pFVar29->_padding_;
        *(int *)&pFVar48->_padding_ = iVar21 + 1;
        *(FRHITexture **)(pFVar48->_padding_ + (longlong)iVar21 * 8) = local_818;
        local_7b0 = (FParameters *)plVar1;
        if (lVar23 == 0) {
          *(undefined4 *)&pFVar29->_padding_ = 0;
        }
        else {
          lVar25 = (**(code **)(**(longlong **)(lVar23 + 0x20) + 0x20))();
          uVar47 = (uint)*(byte *)(lVar25 + 0x30);
          if (*(byte *)(lVar25 + 0x30) == 0) {
            uVar47 = 1;
          }
          *(uint *)&pFVar29->_padding_ = uVar47;
          pFVar40 = *(FRHITexture **)(*(longlong *)(lVar23 + 0x20) + 0x138);
        }
        *plVar1 = (longlong)pFVar40;
        pFVar29->_padding_ =
             (longlong)
             TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI.Reference;
        pFVar29->_padding_ = *(longlong *)&(local_800->Desc).field_0x24;
        pFVar29->_padding_ = *(longlong *)&(local_800->Desc).field_0x24;
        *(uint *)((longlong)&pFVar29->_padding_ + 4) = uVar20;
        uVar47 = 0;
        pFVar29->_padding_ = (longlong)local_710;
        local_838.Data = (FScriptContainerElement *)0x0;
        local_830[0] = 0;
        local_830[1] = 0;
        local_868.Data = (FScriptContainerElement *)0x0;
        local_860[0] = 0;
        local_860[1] = 0;
        uVar20 = (uint)pFVar29->_padding_;
        if ((int)uVar20 < 1) {
          uVar45 = uVar47;
          if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
          }
        }
        else {
          iVar21 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,2,uVar20,&local_838,local_830,local_830 + 1);
          DefaultConstructItems<_FSpecularProfileTextureManager::GetAtlasTexture_::__l36::FLinearColor16,int>
                    (local_838.Data + (longlong)iVar21 * 8,uVar20);
          uVar45 = local_860[0];
        }
        uVar20 = *(uint *)((longlong)&pFVar29->_padding_ + 4);
        if ((int)uVar45 < (int)uVar20) {
          iVar21 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,2,uVar20 - uVar45,&local_868,(int *)local_860,(int *)(local_860 + 1)
                             );
          DefaultConstructItems<_FSpecularProfileTextureManager::GetAtlasTexture_::__l36::FLinearColor16,int>
                    (local_868.Data + (longlong)iVar21 * 8,uVar20 - uVar45);
        }
        else {
          if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
          }
          if ((int)uVar20 < (int)uVar45) {
            uVar46 = uVar45 - uVar20;
            if ((int)(uVar20 | uVar46) < 0) {
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 );
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
                return pIVar24;
              }
              uVar45 = local_860[0];
            }
            if (uVar46 != 0) {
              iVar21 = (uVar45 - uVar20) - uVar46;
              if (iVar21 != 0) {
                memmove(local_868.Data + (longlong)(int)uVar20 * 8,
                        local_868.Data + (longlong)(int)uVar20 * 8 + (longlong)(int)uVar46 * 8,
                        (longlong)iVar21 << 3);
                uVar45 = local_860[0];
              }
              local_860[0] = uVar45 - uVar46;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,2,&local_868,uVar45 - uVar46,(int *)(local_860 + 1));
            }
          }
        }
        uVar20 = local_848;
        uVar51 = (ulonglong)local_848;
        if (local_848 != 0) {
          do {
            fVar53 = ((float)uVar47 + fVar12) * (fVar52 / (float)uVar51);
            pFVar30 = FRuntimeCurveLinearColor::GetLinearColorValue(&local_4a0,&local_580,fVar53);
            local_858 = 0;
            FGenericPlatformMath::StoreHalf((ushort *)&local_858,(pFVar30->field0_0x0)._s_0.R);
            FGenericPlatformMath::StoreHalf
                      ((ushort *)((longlong)&local_858 + 2),(pFVar30->field0_0x0)._s_0.G);
            FGenericPlatformMath::StoreHalf
                      ((ushort *)((longlong)&local_858 + 4),(pFVar30->field0_0x0)._s_0.B);
            FGenericPlatformMath::StoreHalf
                      ((ushort *)((longlong)&local_858 + 6),(pFVar30->field0_0x0)._s_0.A);
            uVar42 = local_858;
            uVar45 = 0;
            if ((int)uVar47 < local_830[0]) {
              uVar45 = ~uVar47 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
              return pIVar24;
            }
            lVar23 = (longlong)(int)uVar47;
            *(undefined8 *)(local_838.Data + lVar23 * 8) = uVar42;
            pFVar30 = FRuntimeCurveLinearColor::GetLinearColorValue(&local_298,&local_570,fVar53);
            local_850 = 0;
            FGenericPlatformMath::StoreHalf((ushort *)&local_850,(pFVar30->field0_0x0)._s_0.R);
            FGenericPlatformMath::StoreHalf
                      ((ushort *)((longlong)&local_850 + 2),(pFVar30->field0_0x0)._s_0.G);
            FGenericPlatformMath::StoreHalf
                      ((ushort *)((longlong)&local_850 + 4),(pFVar30->field0_0x0)._s_0.B);
            FGenericPlatformMath::StoreHalf
                      ((ushort *)((longlong)&local_850 + 6),(pFVar30->field0_0x0)._s_0.A);
            uVar42 = local_850;
            uVar45 = 0;
            if ((int)uVar47 < (int)local_860[0]) {
              uVar45 = ~uVar47 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
              return pIVar24;
            }
            uVar47 = uVar47 + 1;
            *(undefined8 *)(local_868.Data + lVar23 * 8) = uVar42;
          } while (uVar47 < uVar20);
        }
        this_01 = &pFVar48->UserValidation;
        local_7f8.NumElements = uVar20;
        local_7f8.BytesPerElement = 8;
        local_7f8._12_4_ = local_648.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
        local_7f8.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
        local_7f8.Metadata = (FShaderParametersMetadata *)0x0;
        local_768.BytesPerElement = 8;
        local_768.NumElements = uVar20;
        local_768.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
        local_768._12_4_ = local_648.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
        local_768.Metadata = (FShaderParametersMetadata *)0x0;
        local_708 = this_01;
        FRDGUserValidation::ValidateCreateBuffer(this_01,&local_768,L"ViewColor",MultiFrame);
        pTVar4 = &pFVar48->Buffers;
        uVar20 = local_768.BytesPerElement;
        if (local_768.BytesPerElement == 0) {
          uVar20 = 1;
        }
        if (local_768.NumElements == 0) {
          local_768.NumElements = 1;
        }
        local_768.BytesPerElement = uVar20;
        pFVar31 = FMemStackBase::Alloc((FMemStackBase *)&pFVar48->_padding_,0x130,8);
        pFVar31 = FRDGBuffer::FRDGBuffer(pFVar31,L"ViewColor",&local_768,MultiFrame);
        iVar21 = (pFVar48->Buffers).Array.ArrayNum;
        if (iVar21 == (pFVar48->Buffers).Array.ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                             (0x808,(ForElementType<FRDGBuffer_*> *)pTVar4,
                              &(pFVar48->Buffers).Array.ArrayMax);
        }
        (pFVar48->Buffers).Array.ArrayNum = iVar21 + 1;
        (pTVar4->Array).AllocatorInstance.Data[iVar21] = pFVar31;
        (pFVar31->Handle).Index = (pFVar48->Buffers).Array.ArrayNum - 1;
        FRDGUserValidation::ValidateCreateBuffer(this_01,pFVar31);
        FRDGTrace::AddResource(&pFVar48->Trace,(FRDGViewableResource *)pFVar31);
        FVar15.Data = local_838.Data;
        uVar50 = (ulong64)(local_830[0] * 8);
        FRDGUserValidation::ValidateUploadBuffer(this_01,pFVar31,local_838.Data,uVar50);
        FVar32.Data = FVar15.Data;
        if (uVar50 != 0) {
          FVar32.Data = FMemStackBase::Alloc((FMemStackBase *)&pFVar48->_padding_,uVar50,0x10);
          memcpy(FVar32.Data,FVar15.Data,uVar50);
          this_01 = local_708;
        }
        pTVar5 = &pFVar48->UploadedBuffers;
        iVar21 = (pFVar48->UploadedBuffers).ArrayNum;
        if (iVar21 == (pFVar48->UploadedBuffers).ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                             (0x10e0,&pTVar5->AllocatorInstance,&(pFVar48->UploadedBuffers).ArrayMax
                             );
        }
        local_688._padding_._0_1_ = 10;
        local_688._padding_._4_4_ = 0;
        (pFVar48->UploadedBuffers).ArrayNum = iVar21 + 1;
        pFVar10 = (pTVar5->AllocatorInstance).Data;
        local_688._padding_ = 0;
        local_688._padding_._0_4_ = 0xffffffff;
        pFVar10[iVar21].bUseDataCallbacks = false;
        pFVar10[iVar21].bUseFreeCallbacks = false;
        pFVar10[iVar21].Buffer = pFVar31;
        pFVar10[iVar21].Data = FVar32.Data;
        pFVar10[iVar21].DataSize = uVar50;
        *(undefined8 *)&pFVar10[iVar21].DataCallback = 0;
        *(undefined8 *)&pFVar10[iVar21].DataCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar10[iVar21].DataSizeCallback = 0;
        *(undefined8 *)&pFVar10[iVar21].DataSizeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar10[iVar21].DataFreeCallback = 0;
        *(undefined8 *)&pFVar10[iVar21].DataFreeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar10[iVar21].DataFillCallback = 0;
        *(undefined8 *)&pFVar10[iVar21].DataFillCallback.field_0x28 = 0;
        pbVar2 = (byte *)((longlong)&pFVar31->_padding_ + 1);
        *pbVar2 = *pbVar2 | 0x80;
        local_688.Buffer = pFVar31;
        pFVar33 = FRDGBuilder::CreateSRV(local_810,&local_688);
        pFVar17 = local_7b0;
        local_7d0 = 8;
        uStack_7cc = local_848;
        local_7b0->ViewColorBuffer = pFVar33;
        uStack_7c4 = local_648.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
        local_7c0 = 0;
        uStack_7c8 = 0x4109;
        local_7f8.BytesPerElement = 8;
        local_7f8.NumElements = local_848;
        local_7f8._12_4_ = local_648.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
        local_7f8.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
        local_7f8.Metadata = (FShaderParametersMetadata *)0x0;
        FRDGUserValidation::ValidateCreateBuffer(this_01,&local_7f8,L"LightColor",MultiFrame);
        if (local_7f8.BytesPerElement == 0) {
          local_7f8.BytesPerElement = 1;
        }
        if (local_7f8.NumElements == 0) {
          local_7f8.NumElements = 1;
        }
        pFVar31 = FMemStackBase::Alloc(local_700,0x130,8);
        pFVar31 = FRDGBuffer::FRDGBuffer(pFVar31,L"LightColor",&local_7f8,MultiFrame);
        iVar21 = (pFVar48->Buffers).Array.ArrayNum;
        if (iVar21 == (pFVar48->Buffers).Array.ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                             (0x808,(ForElementType<FRDGBuffer_*> *)pTVar4,
                              &(pFVar48->Buffers).Array.ArrayMax);
        }
        pFVar49 = local_810;
        (pFVar48->Buffers).Array.ArrayNum = iVar21 + 1;
        (pTVar4->Array).AllocatorInstance.Data[iVar21] = pFVar31;
        (pFVar31->Handle).Index = (pFVar48->Buffers).Array.ArrayNum - 1;
        FRDGUserValidation::ValidateCreateBuffer(&local_810->UserValidation,pFVar31);
        FRDGTrace::AddResource(&pFVar49->Trace,(FRDGViewableResource *)pFVar31);
        FVar15.Data = local_868.Data;
        uVar50 = (ulong64)(int)(local_860[0] * 8);
        FRDGUserValidation::ValidateUploadBuffer
                  (&pFVar49->UserValidation,pFVar31,local_868.Data,uVar50);
        FVar32.Data = FVar15.Data;
        if (uVar50 != 0) {
          FVar32.Data = FMemStackBase::Alloc((FMemStackBase *)&pFVar49->_padding_,uVar50,0x10);
          memcpy(FVar32.Data,FVar15.Data,uVar50);
        }
        iVar21 = (pFVar48->UploadedBuffers).ArrayNum;
        if (iVar21 == (pFVar48->UploadedBuffers).ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                             (0x10e0,&pTVar5->AllocatorInstance,&(pFVar48->UploadedBuffers).ArrayMax
                             );
        }
        pFVar49 = local_810;
        (pFVar48->UploadedBuffers).ArrayNum = iVar21 + 1;
        pFVar10 = (pTVar5->AllocatorInstance).Data;
        local_668._padding_._0_1_ = 10;
        local_668._padding_._0_4_ = 0xffffffff;
        pFVar10[iVar21].Data = FVar32.Data;
        uVar42 = 0;
        pFVar10[iVar21].bUseDataCallbacks = false;
        pFVar10[iVar21].bUseFreeCallbacks = false;
        pFVar10[iVar21].Buffer = pFVar31;
        pFVar10[iVar21].DataSize = uVar50;
        *(undefined8 *)&pFVar10[iVar21].DataCallback = 0;
        *(undefined8 *)&pFVar10[iVar21].DataCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar10[iVar21].DataSizeCallback = 0;
        *(undefined8 *)&pFVar10[iVar21].DataSizeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar10[iVar21].DataFreeCallback = 0;
        *(undefined8 *)&pFVar10[iVar21].DataFreeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar10[iVar21].DataFillCallback = 0;
        *(undefined8 *)&pFVar10[iVar21].DataFillCallback.field_0x28 = 0;
        pbVar2 = (byte *)((longlong)&pFVar31->_padding_ + 1);
        *pbVar2 = *pbVar2 | 0x80;
        local_668._padding_._4_4_ = 0;
        local_668._padding_ = 0;
        local_668.Buffer = pFVar31;
        pFVar33 = FRDGBuilder::CreateSRV(local_810,&local_668);
        pFVar17->LightColorBuffer = pFVar33;
        bVar18 = local_90 == (UObject *)0x0;
        pFVar34 = (FShaderType *)FSpecularProfileCopyCS::GetStaticType();
        FGlobalShaderMap::GetShader(local_7b8,&local_6a8,pFVar34,(uint)bVar18);
        if (local_6a8.ShaderContent == (FShader *)0x0) {
          FVar35 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_6f8);
          ::FName::ToString((FName *)FVar35,&local_5f8);
          FSpecularProfileCopyCS::GetStaticType();
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
          }
          if (bVar18) {
            pcVar11 = (code *)swi(3);
            pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
            return pIVar24;
          }
        }
        FSpecularProfileCopyCS::GetStaticType();
        iVar21 = (pFVar17->TargetResolution).field0_0x0._s_0.X + 7;
        local_5c8.ShaderContent = (FSpecularProfileCopyCS *)local_6a8.ShaderContent;
        local_5c8.ShaderMap = local_6a8.ShaderMap;
        iVar22 = (pFVar17->TargetResolution).field0_0x0._s_0.Y + 7;
        pFVar36 = FRDGEventName::FRDGEventName(&local_598,1,L"SpecularProfile::CopyTexture");
        pFVar37 = FSpecularProfileCopyCS::FParameters::FTypeInfo::GetStructMetadata();
        local_778._s_0.Z = 1;
        local_778._s_0.X = (int)((iVar21 >> 0x1f & 7U) + iVar21) >> 3;
        local_778._s_0.Y = (int)((iVar22 >> 0x1f & 7U) + iVar22) >> 3;
        FComputeShaderUtils::AddPass<FSpecularProfileCopyCS>
                  (pFVar49,pFVar36,Compute,&local_5c8,pFVar37,pFVar17,
                   (TIntVector3<int> *)&local_778._s_0);
        if (local_598.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_598.FormattedEventName.Data.AllocatorInstance.Data);
        }
        if (local_7a8 != 0) {
          lVar23 = (**(code **)(**(longlong **)(local_7a8 + 0x20) + 0x20))();
          uVar42 = *(undefined8 *)(lVar23 + 0x24);
        }
        this = local_840;
        uVar20 = local_844;
        lVar23 = (longlong)(int)local_844;
        uVar47 = 0;
        if ((int)local_844 < (local_840->SpecularProfileEntries).ArrayNum) {
          uVar47 = ~local_844 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
          return pIVar24;
        }
        *(undefined8 *)
         ((this->SpecularProfileEntries).AllocatorInstance.Data + lVar23 * 0x440 + 0x430) = uVar42;
        if (local_868.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_868.Data);
        }
        if (local_838.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_838.Data);
        }
        FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_298);
        FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_4a0);
        local_844 = uVar20 + 1;
        pFVar27 = local_800;
        pFVar48 = pFVar49;
      } while (local_844 < uVar7);
    }
    pFVar43 = (FRDGTexture *)0x0;
    if (uVar7 != 0) {
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bContainsValidPlatformInfo == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid(Platform)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                              ,0xc1,L""), bVar18)) {
        pcVar11 = (code *)swi(3);
        pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
        return pIVar24;
      }
      pFVar38 = pFVar43;
      if (FGenericDataDrivenShaderPlatformInfo::Infos[param_2].Language == LANGUAGE_OpenGL) {
        pFVar38 = FRDGBuilder::CreateTexture
                            (pFVar49,&pFVar27->Desc,L"ConvolvedSpecularProfileTexture",None);
        local_73c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        local_730 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        local_72c = 0;
        local_724 = 1;
        local_71c = 0;
        local_718 = 1;
        local_744._s_0.Y = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
        local_744._s_0.X = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
        local_738._s_0.Y = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
        local_738._s_0.X = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
        local_750._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        local_750._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
        AddCopyTexturePass(pFVar49,pFVar27,pFVar38,(FRHICopyTextureInfo *)&local_750._s_0);
      }
      local_828.Data = (FScriptContainerElement *)0x0;
      local_820[0] = 0;
      local_820[1] = 0;
      if ((int)uVar7 < 1) {
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
        }
      }
      else {
        iVar21 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar7,&local_828,local_820,local_820 + 1);
        memset(local_828.Data + (longlong)iVar21 * 4,0,(longlong)(int)uVar7 << 2);
      }
      do {
        uVar47 = (uint)pFVar43;
        fVar52 = GetParameterizationSign(this,uVar47);
        uVar20 = 0;
        if ((int)uVar47 < local_820[0]) {
          uVar20 = ~uVar47 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
          return pIVar24;
        }
        pFVar43 = (FRDGTexture *)(ulonglong)(uVar47 + 1);
        *(float *)(local_828.Data + (longlong)(int)uVar47 * 4) = fVar52;
      } while (uVar47 + 1 < uVar7);
      uStack_7c8 = 0x10109;
      local_7d0 = 4;
      local_5e8.NumElements = uVar7;
      local_5e8.BytesPerElement = 4;
      local_5e8._12_4_ = uStack_7c4;
      local_5e8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
      local_7c0 = 0;
      local_5e8.Metadata = (FShaderParametersMetadata *)0x0;
      uStack_7cc = uVar7;
      pFVar31 = FRDGBuilder::CreateBuffer(pFVar49,&local_5e8,L"SpecularProfileData",MultiFrame);
      FRDGBuilder::QueueBufferUpload
                (pFVar49,pFVar31,local_828.Data,(longlong)local_820[0] << 2,None);
      puVar39 = FMemStackBase::Alloc((FMemStackBase *)&pFVar49->_padding_,0x40,0x10);
      if (puVar39 == (undefined8 *)0x0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar18) {
          pcVar11 = (code *)swi(3);
          pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
          return pIVar24;
        }
      }
      else {
        *puVar39 = &___7__TObject_VFParameters_FSpecularProfileConvolveCS___FRDGAllocator__6B_;
        puVar39[5] = 0;
        puVar39[6] = 0;
        puVar39[7] = 0;
      }
      local_808 = puVar39;
      if ((((undefined8 **)pFVar49->_padding_ <= &local_808) &&
          (&local_808 <
           (undefined8 **)pFVar49->_padding_ + *(int *)((longlong)&pFVar49->_padding_ + 4))) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar11 = (code *)swi(3);
        pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
        return pIVar24;
      }
      iVar21 = (int)pFVar49->_padding_;
      piVar3 = (int *)((longlong)&pFVar49->_padding_ + 4);
      if (iVar21 == *piVar3) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&pFVar49->_padding_,piVar3);
      }
      pFVar27 = local_800;
      *(int *)&pFVar49->_padding_ = iVar21 + 1;
      local_6d0._padding_._0_4_ = 0xffffffff;
      *(undefined8 **)(pFVar49->_padding_ + (longlong)iVar21 * 8) = local_808;
      local_6d0._padding_._4_4_ = 0;
      local_6d0._padding_ = 0;
      ((FParameters *)(puVar39 + 2))->SampleCount = 0x40;
      *(uint *)(puVar39 + 4) = uVar7;
      puVar39[3] = *(undefined8 *)&(local_800->Desc).field_0x24;
      local_6d0._padding_._0_1_ = 0;
      if (((pFVar31->Desc).Usage & DrawIndirect) != None) {
        local_6d0._padding_._0_1_ = 0x1c;
      }
      local_6d0.Buffer = pFVar31;
      pFVar33 = FRDGBuilder::CreateSRV(pFVar49,&local_6d0);
      puVar39[7] = pFVar33;
      puVar39[5] = pFVar38;
      pFVar28 = FRDGBuilder::CreateUAV(pFVar49,pFVar27,None,PF_Unknown);
      puVar39[6] = pFVar28;
      lVar23 = puVar39[5];
      pFVar34 = (FShaderType *)FSpecularProfileConvolveCS::GetStaticType();
      FGlobalShaderMap::GetShader(local_7b8,&local_698,pFVar34,(uint)(lVar23 == 0));
      if (local_698.ShaderContent == (FShader *)0x0) {
        FVar35 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_6d8);
        ::FName::ToString((FName *)FVar35,&local_630);
        FSpecularProfileConvolveCS::GetStaticType();
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_630.Data.AllocatorInstance.Data);
        }
        if (bVar18) {
          pcVar11 = (code *)swi(3);
          pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
          return pIVar24;
        }
      }
      FSpecularProfileConvolveCS::GetStaticType();
      iVar21 = *(int *)(puVar39 + 3);
      local_618.ShaderContent = (FSpecularProfileConvolveCS *)local_698.ShaderContent;
      local_618.ShaderMap = local_698.ShaderMap;
      iVar22 = *(int *)((longlong)puVar39 + 0x1c) + 7;
      pFVar36 = FRDGEventName::FRDGEventName(&local_648,1,L"SpecularProfile::Convolve");
      pFVar37 = FSpecularProfileConvolveCS::FParameters::FTypeInfo::GetStructMetadata();
      local_788._s_0.X = (int)((iVar21 + 7 >> 0x1f & 7U) + iVar21 + 7) >> 3;
      local_788._s_0.Y = (int)((iVar22 >> 0x1f & 7U) + iVar22) >> 3;
      local_788._8_4_ = uVar7;
      FComputeShaderUtils::AddPass<FSpecularProfileConvolveCS>
                (pFVar49,pFVar36,Compute,&local_618,pFVar37,(FParameters *)(puVar39 + 2),
                 (TIntVector3<int> *)&local_788._s_0);
      if ((void *)CONCAT44(local_648.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                           local_648.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
          (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_648.FormattedEventName.Data.AllocatorInstance.Data.
                                       _4_4_,local_648.FormattedEventName.Data.AllocatorInstance.
                                             Data._0_4_));
      }
      if (local_828.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_828.Data);
      }
    }
    pFVar27 = local_800;
    local_7e0.Resources.AllocatorInstance.Data = (FResource *)0x0;
    local_7e0.Resources.ArrayNum = 0;
    local_7e0.Resources.ArrayMax = 0;
    if (local_800 != (FRDGTexture *)0x0) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                         (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)&local_7e0,
                          &local_7e0.Resources.ArrayMax);
      local_7e0.Resources.ArrayNum = iVar21 + 1;
      local_7e0.Resources.AllocatorInstance.Data[iVar21].Resource = (FRDGViewableResource *)pFVar27;
      local_7e0.Resources.AllocatorInstance.Data[iVar21].Access = SRVMask;
      local_7e0.Resources.AllocatorInstance.Data[iVar21].Pipelines = Graphics;
    }
    FRDGExternalAccessQueue::Submit(&local_7e0,pFVar49);
    if ((local_7e0.Resources.ArrayNum != 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                            ,0x4fe,L"Submit must be called before destruction."), bVar18)) {
      pcVar11 = (code *)swi(3);
      pIVar24 = (IPooledRenderTarget *)(*pcVar11)();
      return pIVar24;
    }
    if (local_558.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_558.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    if (local_6e0 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_6f0);
    }
  }
  return GSpecularProfileTextureAtlas.Reference;
}

// GetAtlasTexture @ 14846abc0

IPooledRenderTarget * __thiscall
FSpecularProfileTextureManager::GetAtlasTexture(FSpecularProfileTextureManager *this)

{
  return GSpecularProfileTextureAtlas.Reference;
}

// GetParameterName @ 14846ccd0

FName __thiscall
FSpecularProfileTextureManager::GetParameterName
          (FSpecularProfileTextureManager *this,USpecularProfile *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  uint uVar5;
  longlong lVar6;
  USpecularProfile *in_R8;
  
  uVar3 = FindAllocationId(this,in_R8);
  lVar6 = 0;
  if (uVar3 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar3 < (this->SpecularProfileEntries).ArrayNum) {
      uVar5 = ~uVar3 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FName)(*pcVar1)();
        return FVar4;
      }
    }
    lVar6 = *(longlong *)
             ((this->SpecularProfileEntries).AllocatorInstance.Data +
             (longlong)(int)uVar3 * 0x440 + 0x438);
  }
  param_1->_padding_ = lVar6;
  return (FName)param_1;
}

// GetParameterizationSign @ 14846cd70

float __thiscall
FSpecularProfileTextureManager::GetParameterizationSign
          (FSpecularProfileTextureManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  fVar4 = __real_3f800000;
  if (param_1 != -1) {
    uVar3 = 0;
    if (param_1 < (this->SpecularProfileEntries).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    if ((this->SpecularProfileEntries).AllocatorInstance.Data[(longlong)param_1 * 0x440] ==
        (FScriptContainerElement)0x1) {
      return __real_bf800000;
    }
  }
  return fVar4;
}

// RemoveProfile @ 148486ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSpecularProfileTextureManager::RemoveProfile
          (FSpecularProfileTextureManager *this,USpecularProfile *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FSpecularProfileStruct *pFVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_488 [32];
  longlong local_468;
  longlong local_460;
  FSpecularProfileStruct local_458;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_488;
  uVar5 = FindAllocationId(this,param_1);
  lVar9 = (longlong)(int)uVar5;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationId > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SpecularProfile.cpp"
                         ,0x10d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = (this->SpecularProfileEntries).ArrayNum;
    uVar10 = ~uVar5 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar5 < iVar1) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0) {
      local_468 = lVar9;
      local_460 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar8 = lVar9 * 0x440;
    if (*(USpecularProfile **)
         ((this->SpecularProfileEntries).AllocatorInstance.Data + lVar8 + 0x420) != param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SpecularProfileEntries[AllocationId].Profile == InProfile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SpecularProfile.cpp"
                         ,0x10e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = (this->SpecularProfileEntries).ArrayNum;
    uVar6 = 0;
    if ((int)uVar5 < iVar1) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0) {
      local_468 = lVar9;
      local_460 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined8 *)((this->SpecularProfileEntries).AllocatorInstance.Data + lVar8 + 0x420) = 0;
    iVar1 = (this->SpecularProfileEntries).ArrayNum;
    uVar6 = 0;
    if ((int)uVar5 < iVar1) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0) {
      local_468 = lVar9;
      local_460 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->SpecularProfileEntries).AllocatorInstance.Data;
    pFVar7 = FSpecularProfileStruct::FSpecularProfileStruct(&local_458);
    FSpecularProfileStruct::operator=((FSpecularProfileStruct *)(pFVar2 + lVar8),pFVar7);
    FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_458.LightColor);
    FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_458.ViewColor);
    iVar1 = (this->SpecularProfileEntries).ArrayNum;
    local_460 = (longlong)iVar1;
    uVar6 = 0;
    if ((int)uVar5 < iVar1) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0) {
      local_468 = lVar9;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined8 *)((this->SpecularProfileEntries).AllocatorInstance.Data + lVar8 + 0x428) = 0;
    iVar1 = (this->SpecularProfileEntries).ArrayNum;
    local_460 = (longlong)iVar1;
    uVar6 = 0;
    if ((int)uVar5 < iVar1) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0) {
      local_468 = lVar9;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined8 *)((this->SpecularProfileEntries).AllocatorInstance.Data + lVar8 + 0x438) = 0;
  }
  return;
}

// UpdateProfile @ 14849bc70

void __thiscall
FSpecularProfileTextureManager::UpdateProfile
          (FSpecularProfileTextureManager *this,int param_1,FSpecularProfileStruct *param_2,
          FTextureReference *param_3)

{
  code *pcVar1;
  TRefCountPtr<IPooledRenderTarget> TVar2;
  bool bVar3;
  uint uVar4;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SpecularProfile.cpp"
                       ,0x11f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != -1) {
    if ((this->SpecularProfileEntries).ArrayNum <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationId < SpecularProfileEntries.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SpecularProfile.cpp"
                         ,0x123,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar4 = 0;
    if (param_1 < (this->SpecularProfileEntries).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSpecularProfileStruct::operator=
              ((FSpecularProfileStruct *)
               ((this->SpecularProfileEntries).AllocatorInstance.Data + (longlong)param_1 * 0x440),
               param_2);
    uVar4 = 0;
    if (param_1 < (this->SpecularProfileEntries).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(FTextureReference **)
     ((this->SpecularProfileEntries).AllocatorInstance.Data + (longlong)param_1 * 0x440 + 0x428) =
         param_3;
    TVar2 = GSpecularProfileTextureAtlas;
    if (GSpecularProfileTextureAtlas.Reference != (IPooledRenderTarget *)0x0) {
      GSpecularProfileTextureAtlas.Reference = (IPooledRenderTarget *)0x0;
      (**(code **)((TVar2.Reference)->_padding_ + 0x38))();
    }
  }
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&param_2->LightColor);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&param_2->ViewColor);
  return;
}

// UpdateProfile @ 14849bdf0

void __thiscall
FSpecularProfileTextureManager::UpdateProfile
          (FSpecularProfileTextureManager *this,USpecularProfile *param_1,
          FSpecularProfileStruct *param_2,FTextureReference *param_3)

{
  int iVar1;
  FSpecularProfileStruct local_448;
  
  local_448.Format = param_2->Format;
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&local_448.ViewColor,&param_2->ViewColor);
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&local_448.LightColor,&param_2->LightColor);
  local_448.Texture.field0_0x0 = (TObjectPtr<UTexture2D>_u_0)(param_2->Texture).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_448.Texture.field0_0x0.DebugPtr != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_448.Texture.field0_0x0);
  }
  iVar1 = FindAllocationId(this,param_1);
  UpdateProfile(this,iVar1,&local_448,param_3);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&param_2->LightColor);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&param_2->ViewColor);
  return;
}

