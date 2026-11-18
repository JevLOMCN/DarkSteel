// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 27

// StaticClass @ 149855750

UClass * __cdecl UPCGLandscapeData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeData",
               &Z_Registration_Info_UClass_UPCGLandscapeData.InnerSingleton,
               StaticRegisterNativesUPCGLandscapeData,0x220,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGLandscapeData>,
               InternalVTableHelperCtorCaller<UPCGLandscapeData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeData.InnerSingleton;
}

// UPCGLandscapeData @ 14988e1c0

UPCGLandscapeData * __thiscall
UPCGLandscapeData::UPCGLandscapeData(UPCGLandscapeData *this,FVTableHelper *param_1)

{
  UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGLandscapeData__6B_;
  (this->Landscapes).ArrayNum = 0;
  (this->Landscapes).ArrayMax = 0;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Landscapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).IsValid = '\0';
  *(undefined8 *)(this->Bounds).Pad = 0;
  (this->DataProps).bGetLayerWeights = true;
  (this->DataProps).bGetActorReference = false;
  (this->DataProps).bGetPhysicalMaterial = false;
  (this->DataProps).bGetComponentCoordinates = false;
  (this->DataProps).bSampleVirtualTextures = true;
  (this->DataProps).bSampleVirtualTextureNormals = false;
  (this->BoundsToLandscapeInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsToLandscapeInfos).ArrayNum = 0;
  (this->BoundsToLandscapeInfos).ArrayMax = 0;
  (this->LandscapeInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapeInfos).ArrayNum = 0;
  (this->LandscapeInfos).ArrayMax = 0;
  this->LandscapeCache = (UPCGLandscapeCache *)0x0;
  return this;
}

// UPCGLandscapeData @ 14988e270

UPCGLandscapeData * __thiscall
UPCGLandscapeData::UPCGLandscapeData(UPCGLandscapeData *this,FObjectInitializer *param_1)

{
  UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGLandscapeData__6B_;
  (this->Landscapes).ArrayNum = 0;
  (this->Landscapes).ArrayMax = 0;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Landscapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).IsValid = '\0';
  *(undefined8 *)(this->Bounds).Pad = 0;
  (this->DataProps).bGetLayerWeights = true;
  (this->DataProps).bGetActorReference = false;
  (this->DataProps).bGetPhysicalMaterial = false;
  (this->DataProps).bGetComponentCoordinates = false;
  (this->DataProps).bSampleVirtualTextures = true;
  (this->DataProps).bSampleVirtualTextureNormals = false;
  (this->BoundsToLandscapeInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsToLandscapeInfos).ArrayNum = 0;
  (this->BoundsToLandscapeInfos).ArrayMax = 0;
  (this->LandscapeInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapeInfos).ArrayNum = 0;
  (this->LandscapeInfos).ArrayMax = 0;
  this->LandscapeCache = (UPCGLandscapeCache *)0x0;
  return this;
}

// ~UPCGLandscapeData @ 149891620

void __thiscall UPCGLandscapeData::~UPCGLandscapeData(UPCGLandscapeData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGLandscapeData__6B_;
  pFVar1 = (this->LandscapeInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundsToLandscapeInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<ALandscapeProxy>,int>
            ((TSoftObjectPtr<ALandscapeProxy> *)(this->Landscapes).AllocatorInstance.Data,
             (this->Landscapes).ArrayNum);
  pFVar1 = (this->Landscapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// AddToCrc @ 14989ddb0

void __thiscall
UPCGLandscapeData::AddToCrc(UPCGLandscapeData *this,FArchiveCrc32 *param_1,bool param_2)

{
  undefined1 local_res8 [8];
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  return;
}

// CopyInternal @ 1498a4320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall
UPCGLandscapeData::CopyInternal(UPCGLandscapeData *this,FPCGContext *param_1)

{
  int *piVar1;
  TArray<TSoftObjectPtr<ALandscapeProxy>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<ULandscapeInfo_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TTuple<UE::Math::TBox<double>,ULandscapeInfo_*>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong lVar8;
  double dVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  UPCGSpatialData *pUVar20;
  UObject *pUVar21;
  UPCGLandscapeData *pUVar22;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGLandscapeData *local_res18 [2];
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar19 = IsInGameThread();
    if (!bVar19) {
      bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4331830188552749225>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                          ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar19) {
        pcVar7 = (code *)swi(3);
        pUVar20 = (UPCGSpatialData *)(*pcVar7)();
        return pUVar20;
      }
    }
  }
  else {
    bVar19 = IsInGameThread();
    if (!bVar19) {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4331830188552749348>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                            ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          pUVar20 = (UPCGSpatialData *)(*pcVar7)();
          return pUVar20;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar21 = GetTransientPackageAsObject();
      pUVar22 = NewObject<UPCGLandscapeData>(pUVar21);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if (pUVar22 == (UPCGLandscapeData *)0x0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                            ,0x12a,L"");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          pUVar20 = (UPCGSpatialData *)(*pcVar7)();
          return pUVar20;
        }
      }
      local_res18[0] = pUVar22;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar22 != (UPCGLandscapeData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar22);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)local_res18);
      goto LAB_1498a437f;
    }
  }
  pUVar21 = GetTransientPackageAsObject();
  pUVar22 = NewObject<UPCGLandscapeData>(pUVar21);
LAB_1498a437f:
  lVar8 = this->_padding_;
  pTVar2 = &pUVar22->Landscapes;
  pUVar22->_padding_ = this->_padding_;
  pUVar22->_padding_ = lVar8;
  lVar8 = this->_padding_;
  pUVar22->_padding_ = this->_padding_;
  pUVar22->_padding_ = lVar8;
  lVar8 = this->_padding_;
  pUVar22->_padding_ = this->_padding_;
  pUVar22->_padding_ = lVar8;
  lVar8 = this->_padding_;
  pUVar22->_padding_ = this->_padding_;
  pUVar22->_padding_ = lVar8;
  lVar8 = this->_padding_;
  pUVar22->_padding_ = this->_padding_;
  pUVar22->_padding_ = lVar8;
  lVar8 = this->_padding_;
  pUVar22->_padding_ = this->_padding_;
  pUVar22->_padding_ = lVar8;
  *(char *)&pUVar22->_padding_ = (char)this->_padding_;
  if (pTVar2 != &this->Landscapes) {
    DestructItems<TSoftObjectPtr<ALandscapeProxy>,int>
              ((TSoftObjectPtr<ALandscapeProxy> *)(pTVar2->AllocatorInstance).Data,
               (pUVar22->Landscapes).ArrayNum);
    iVar5 = (this->Landscapes).ArrayNum;
    piVar1 = &(pUVar22->Landscapes).ArrayMax;
    pFVar6 = (this->Landscapes).AllocatorInstance.Data;
    (pUVar22->Landscapes).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar5,*piVar1,&pTVar2->AllocatorInstance,iVar5,piVar1);
      ConstructItems<TSoftObjectPtr<ALandscapeProxy>,TSoftObjectPtr<ALandscapeProxy>,int>
                ((pTVar2->AllocatorInstance).Data,(TSoftObjectPtr<ALandscapeProxy> *)pFVar6,iVar5);
    }
  }
  dVar9 = (this->Bounds).Min.field0_0x0._s_0.Y;
  pTVar3 = &pUVar22->LandscapeInfos;
  (pUVar22->Bounds).Min.field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (pUVar22->Bounds).Min.field0_0x0._s_0.Y = dVar9;
  dVar9 = (this->Bounds).Max.field0_0x0._s_0.X;
  (pUVar22->Bounds).Min.field0_0x0._s_0.Z = (this->Bounds).Min.field0_0x0._s_0.Z;
  (pUVar22->Bounds).Max.field0_0x0._s_0.X = dVar9;
  dVar9 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (pUVar22->Bounds).Max.field0_0x0._s_0.Y = (this->Bounds).Max.field0_0x0._s_0.Y;
  (pUVar22->Bounds).Max.field0_0x0._s_0.Z = dVar9;
  uVar10 = (this->Bounds).Pad[0];
  uVar11 = (this->Bounds).Pad[1];
  uVar12 = (this->Bounds).Pad[2];
  uVar13 = (this->Bounds).Pad[3];
  uVar14 = (this->Bounds).Pad[4];
  uVar15 = (this->Bounds).Pad[5];
  uVar16 = (this->Bounds).Pad[6];
  (pUVar22->Bounds).IsValid = (this->Bounds).IsValid;
  (pUVar22->Bounds).Pad[0] = uVar10;
  (pUVar22->Bounds).Pad[1] = uVar11;
  (pUVar22->Bounds).Pad[2] = uVar12;
  (pUVar22->Bounds).Pad[3] = uVar13;
  (pUVar22->Bounds).Pad[4] = uVar14;
  (pUVar22->Bounds).Pad[5] = uVar15;
  (pUVar22->Bounds).Pad[6] = uVar16;
  bVar19 = (this->DataProps).bGetLayerWeights;
  bVar17 = (this->DataProps).bGetActorReference;
  bVar18 = (this->DataProps).bGetPhysicalMaterial;
  (pUVar22->DataProps).bGetHeightOnly = (this->DataProps).bGetHeightOnly;
  (pUVar22->DataProps).bGetLayerWeights = bVar19;
  (pUVar22->DataProps).bGetActorReference = bVar17;
  (pUVar22->DataProps).bGetPhysicalMaterial = bVar18;
  bVar19 = (this->DataProps).bSampleVirtualTextures;
  (pUVar22->DataProps).bGetComponentCoordinates = (this->DataProps).bGetComponentCoordinates;
  (pUVar22->DataProps).bSampleVirtualTextures = bVar19;
  (pUVar22->DataProps).bSampleVirtualTextureNormals = (this->DataProps).bSampleVirtualTextureNormals
  ;
  if (pTVar3 != &this->LandscapeInfos) {
    iVar5 = (this->LandscapeInfos).ArrayNum;
    piVar1 = &(pUVar22->LandscapeInfos).ArrayMax;
    pFVar6 = (this->LandscapeInfos).AllocatorInstance.Data;
    (pUVar22->LandscapeInfos).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,*piVar1,&pTVar3->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
      }
    }
  }
  pTVar4 = &pUVar22->BoundsToLandscapeInfos;
  if (pTVar4 != &this->BoundsToLandscapeInfos) {
    iVar5 = (this->BoundsToLandscapeInfos).ArrayNum;
    piVar1 = &(pUVar22->BoundsToLandscapeInfos).ArrayMax;
    pFVar6 = (this->BoundsToLandscapeInfos).AllocatorInstance.Data;
    (pUVar22->BoundsToLandscapeInfos).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar5,*piVar1,&pTVar4->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 6);
      }
    }
  }
  pUVar22->LandscapeCache = this->LandscapeCache;
  return (UPCGSpatialData *)pUVar22;
}

// CreateBasePointData @ 1498a8d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __thiscall
UPCGLandscapeData::CreateBasePointData
          (UPCGLandscapeData *this,FPCGContext *param_1,TBox<double> *param_2,
          TSubclassOf<UPCGBasePointData> param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  UPCGLandscapeData *pUVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UPackage *pUVar10;
  UPCGBasePointData *pUVar11;
  UClass *pUVar12;
  TBox<double> *pTVar13;
  FText *pFVar14;
  int iVar15;
  ulonglong uVar16;
  long64 *plVar17;
  TTransform<double> *pTVar18;
  int *piVar19;
  TVector<double>_u_0 *pTVar20;
  uint uVar21;
  UPCGMetadata *pUVar22;
  uint uVar23;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  FScriptContainerElement *pFVar31;
  ULandscapeInfo *this_00;
  ulonglong uVar32;
  UPCGMetadata *pUVar33;
  longlong lVar34;
  longlong lVar35;
  double dVar36;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar37;
  double dVar49;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar60;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar61;
  undefined4 uVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  double dVar73;
  uint uVar74;
  double dVar75;
  undefined4 uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined4 uVar84;
  undefined4 uVar85;
  undefined1 auStackY_608 [32];
  undefined1 local_5c8 [4];
  int local_5c4;
  uint local_5c0;
  uint local_5bc;
  FScriptContainerElement *local_5b8;
  UPCGBasePointData *local_5b0;
  TIntPoint<int>_u_0 local_5a8;
  undefined4 local_5a0;
  int local_59c;
  int local_598;
  int local_594;
  int local_590;
  uint local_58c;
  uint local_588;
  uint local_584;
  int local_580;
  uint local_57c;
  TSharedPtr<FPCGLandscapeCacheEntry_const_,1> local_578;
  undefined8 local_568;
  UPackage *local_560;
  double local_558;
  double dStack_550;
  UPCGLandscapeData *local_548;
  FScriptContainerElement *local_540;
  undefined1 local_538 [16];
  UPCGLandscapeData *local_528;
  undefined8 local_520;
  undefined2 local_518;
  undefined1 local_516;
  undefined1 local_515;
  undefined8 local_510;
  void *local_508;
  undefined8 local_500;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_4f8;
  undefined8 local_4f0;
  ulonglong local_4e8;
  double dStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  longlong local_4c8;
  double dStack_4c0;
  ULandscapeInfo *local_4b8;
  ALandscapeProxy *local_4b0;
  FName local_4a8 [2];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  double local_478;
  double dStack_470;
  FString local_468;
  FText local_458;
  double local_448;
  double dStack_440;
  double local_438;
  double local_430;
  double dStack_428;
  double local_420;
  FPCGPointValueRanges local_418;
  TBox<double> local_288;
  double local_250;
  double dStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  double dStack_228;
  undefined8 local_220;
  FPCGPoint local_218;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  int iVar24;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_608;
  local_548 = this;
  if (((this->LandscapeInfos).ArrayNum == 0) || (this->LandscapeCache == (UPCGLandscapeCache *)0x0))
  {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_458,L"PCGLandscapeData",L"RequiredDataNotInitialized",
                         L"PCG Landscape cache or Landscape info are not initialized");
    PCGLog::LogErrorOnGraph(pFVar14,param_1);
    if (local_458.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_458.TextData.Reference + 0x10))();
    }
    pUVar11 = (UPCGBasePointData *)0x0;
  }
  else {
    pUVar10 = GetTransientPackage();
    pUVar22 = (UPCGMetadata *)0x0;
    local_560 = pUVar10;
    if (param_1 == (FPCGContext *)0x0) {
      bVar7 = IsInGameThread();
      if ((!bVar7) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749225>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0xa9,"Context != nullptr || IsInGameThread()"), bVar7)) {
        pcVar1 = (code *)swi(3);
        pUVar11 = (UPCGBasePointData *)(*pcVar1)();
        return pUVar11;
      }
      local_568 = 0;
      pUVar12 = TSubclassOf<UPCGBasePointData>::operator*
                          ((TSubclassOf<UPCGBasePointData> *)param_3.Class.field0_0x0);
      pUVar11 = NewObject<UPCGBasePointData>
                          ((UObject *)pUVar10,pUVar12,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    }
    else {
      pUVar11 = FPCGContext::
                NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                          (param_1,&local_560,
                           (TSubclassOf<UPCGBasePointData> *)param_3.Class.field0_0x0);
    }
    local_5b0 = pUVar11;
    local_528 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_520 = 0;
    local_518 = 0x101;
    local_515 = 0;
    local_510 = (**(code **)(this->_padding_ + 800))(this);
    local_508 = (void *)0x0;
    local_500 = 0;
    local_4f8 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
    local_4f0 = 0;
    local_516 = 0;
    (**(code **)(pUVar11->_padding_ + 0x468))(pUVar11,&local_528);
    if ((local_528 != (UPCGLandscapeData *)0x0) && ((char)local_518 != '\0')) {
      (**(code **)(pUVar11->_padding_ + 0x470))(pUVar11,&local_528);
    }
    local_250 = (this->Bounds).Min.field0_0x0._s_0.X;
    dStack_248 = (this->Bounds).Min.field0_0x0._s_0.Y;
    local_240 = (this->Bounds).Min.field0_0x0._s_0.Z;
    dStack_238 = (this->Bounds).Max.field0_0x0._s_0.X;
    local_230 = (this->Bounds).Max.field0_0x0._s_0.Y;
    dStack_228 = (this->Bounds).Max.field0_0x0._s_0.Z;
    local_220._0_1_ = (this->Bounds).IsValid;
    local_220._1_1_ = (this->Bounds).Pad[0];
    local_220._2_1_ = (this->Bounds).Pad[1];
    local_220._3_1_ = (this->Bounds).Pad[2];
    local_220._4_1_ = (this->Bounds).Pad[3];
    local_220._5_1_ = (this->Bounds).Pad[4];
    local_220._6_1_ = (this->Bounds).Pad[5];
    local_220._7_1_ = (this->Bounds).Pad[6];
    if (param_2->IsValid != '\0') {
      pTVar13 = UE::Math::TBox<double>::Overlap(&this->Bounds,&local_288,param_2);
      local_250 = (pTVar13->Min).field0_0x0._s_0.X;
      dStack_248 = (pTVar13->Min).field0_0x0._s_0.Y;
      local_240 = (pTVar13->Min).field0_0x0._s_0.Z;
      dStack_238 = (pTVar13->Max).field0_0x0._s_0.X;
      local_230 = (pTVar13->Max).field0_0x0._s_0.Y;
      dStack_228 = (pTVar13->Max).field0_0x0._s_0.Z;
      local_220._0_1_ = pTVar13->IsValid;
      local_220._1_1_ = pTVar13->Pad[0];
      local_220._2_1_ = pTVar13->Pad[1];
      local_220._3_1_ = pTVar13->Pad[2];
      local_220._4_1_ = pTVar13->Pad[3];
      local_220._5_1_ = pTVar13->Pad[4];
      local_220._6_1_ = pTVar13->Pad[5];
      local_220._7_1_ = pTVar13->Pad[6];
    }
    if ((char)local_220 != '\0') {
      pUVar33 = pUVar22;
      if ((this->DataProps).bGetLayerWeights != false) {
        pUVar33 = (UPCGMetadata *)pUVar11->_padding_;
      }
      local_5a0 = 0xcd;
      if (pUVar33 == (UPCGMetadata *)0x0) {
        local_5a0 = 0x4d;
      }
      local_57c = (this->LandscapeInfos).ArrayNum;
      uVar16 = (ulonglong)(int)local_57c;
      pFVar31 = (this->LandscapeInfos).AllocatorInstance.Data;
      pFVar29 = pFVar31 + uVar16 * 8;
      uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar74 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_5b8 = pFVar29;
      while( true ) {
        local_540 = pFVar31;
        if ((this->LandscapeInfos).ArrayNum != (int)uVar16) {
          local_5c8[0] = 0;
          `TCheckedPointerIterator<ULandscapeInfo_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_5c8);
        }
        pUVar11 = local_5b0;
        if (pFVar31 == pFVar29) break;
        this_00 = *(ULandscapeInfo **)pFVar31;
        local_4b8 = this_00;
        if ((this_00 != (ULandscapeInfo *)0x0) &&
           (local_4b0 = ULandscapeInfo::GetLandscapeProxy(this_00),
           local_4b0 != (ALandscapeProxy *)0x0)) {
          (**(code **)(local_4b0->_padding_ + 0x20))(&local_4b0->_padding_,&local_148);
          dStack_4e0 = local_138 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dStack_550 = dStack_130 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar84 = SUB84(dStack_550,0);
          uVar85 = (undefined4)((ulonglong)dStack_550 >> 0x20);
          iVar28 = this_00->ComponentSizeQuads;
          dVar61 = local_148 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dStack_4c0 = dStack_140 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar36 = local_240 - local_118;
          dVar38 = local_250 - local_128;
          dVar73 = dStack_248 - dStack_120;
          uVar76 = (undefined4)((ulonglong)dVar73 >> 0x20);
          auVar57._8_4_ = SUB84(dStack_4c0,0);
          auVar57._0_8_ = dVar61;
          uVar67 = (undefined4)((ulonglong)dStack_4c0 >> 0x20);
          auVar57._12_4_ = uVar67;
          dVar60 = auVar57._8_8_;
          auVar83._8_4_ = SUB84(dStack_4c0,0);
          auVar83._0_8_ = dVar61;
          auVar83._12_4_ = uVar67;
          auVar43._8_4_ = uVar84;
          auVar43._0_8_ = dStack_4e0;
          auVar43._12_4_ = uVar85;
          local_488 = blendpd(auVar83,auVar43,2);
          auVar39._8_4_ = uVar84;
          auVar39._0_8_ = dStack_4e0;
          auVar39._12_4_ = uVar85;
          local_558 = auVar39._8_8_;
          auVar77._8_4_ = SUB84(dVar73,0);
          auVar77._0_8_ = dVar38;
          auVar77._12_4_ = uVar76;
          auVar50._8_4_ = SUB84(dVar73,0);
          auVar50._0_8_ = dVar38;
          auVar50._12_4_ = uVar76;
          auVar51._8_8_ = 0;
          auVar51._0_8_ = dVar36;
          auVar51 = blendpd(auVar50,auVar51,2);
          auVar40._8_4_ = SUB84(dStack_4e0,0);
          auVar40._0_8_ = dVar60;
          auVar40._12_4_ = (int)((ulonglong)dStack_4e0 >> 0x20);
          auVar78._0_8_ = auVar77._8_8_ * dVar61 - dVar60 * dVar38;
          auVar78._8_8_ = dVar36 * dStack_4c0 - auVar40._8_8_ * dVar73;
          dVar37 = local_488._0_8_;
          local_498._8_4_ = uVar84;
          local_498._0_8_ = dStack_4e0;
          local_498._12_4_ = uVar85;
          dVar49 = local_488._8_8_;
          auVar52._0_8_ = auVar51._0_8_ * dStack_4e0 - dVar37 * dVar36;
          auVar52._8_8_ = auVar51._8_8_ * dStack_550 - dVar49 * 0.0;
          auVar51 = blendpd(auVar78,auVar52,2);
          dVar72 = auVar78._8_8_ + auVar78._8_8_;
          dVar75 = auVar52._0_8_ + auVar52._0_8_;
          auVar79._0_8_ = auVar51._0_8_ + auVar51._0_8_;
          auVar79._8_8_ = auVar51._8_8_ + auVar51._8_8_;
          uVar67 = SUB84(dVar75,0);
          auVar68._8_4_ = uVar67;
          auVar68._0_8_ = dVar72;
          uVar76 = (undefined4)((ulonglong)dVar75 >> 0x20);
          auVar68._12_4_ = uVar76;
          auVar41._8_4_ = uVar67;
          auVar41._0_8_ = dVar72;
          auVar41._12_4_ = uVar76;
          auVar62._8_4_ = uVar67;
          auVar62._0_8_ = dVar72;
          auVar62._12_4_ = uVar76;
          auVar69._0_8_ = auVar68._8_8_ * dVar61 - dVar72 * dVar60;
          auVar69._8_8_ = auVar79._0_8_ * dStack_4c0 - auVar41._8_8_ * dStack_4e0;
          auVar51 = blendpd(auVar62,auVar79,2);
          auVar42._8_4_ = SUB84(auVar79._8_8_,0);
          auVar42._0_8_ = auVar79._0_8_;
          auVar42._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
          auVar63._0_8_ = auVar51._0_8_ * dStack_4e0 - auVar79._0_8_ * dVar37;
          auVar63._8_8_ = auVar51._8_8_ * dStack_550 - auVar42._8_8_ * dVar49;
          auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,local_108)
          ;
          auVar53._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_108._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_108._0_4_);
          auVar53._8_4_ = _UNK_15061cc88 & local_108._8_4_;
          auVar53._12_4_ = _UNK_15061cc8c & local_108._12_4_;
          auVar4._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar4._0_8_ = local_f8._0_8_;
          auVar4._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar4);
          lVar34 = -(ulonglong)
                    (auVar53._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar35 = -(ulonglong)
                    (auVar53._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          local_4d8._0_4_ = auVar51._0_4_;
          local_4d8._4_4_ = auVar51._4_4_;
          uStack_4d0._0_4_ = auVar51._8_4_;
          uStack_4d0._4_4_ = auVar51._12_4_;
          auVar54._0_8_ =
               (double)CONCAT44(~(uint)((ulonglong)lVar34 >> 0x20) & local_4d8._4_4_,
                                ~(uint)lVar34 & (uint)local_4d8);
          auVar54._8_4_ = ~(uint)lVar35 & (uint)uStack_4d0;
          auVar54._12_4_ = ~(uint)((ulonglong)lVar35 >> 0x20) & uStack_4d0._4_4_;
          lVar34 = -(ulonglong)
                    ((double)CONCAT44(uVar74 & local_f8._4_4_,uVar25 & local_f8._0_4_) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          local_538._0_4_ = auVar43._0_4_;
          local_538._4_4_ = auVar43._4_4_;
          auVar44._8_4_ = SUB84(auVar69._8_8_,0);
          auVar44._0_8_ = auVar69._0_8_;
          auVar44._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
          auVar43 = blendpd(auVar69,auVar63,2);
          dVar2 = dStack_238 - local_128;
          dVar3 = local_230 - dStack_120;
          uVar67 = SUB84(dVar3,0);
          uVar76 = (undefined4)((ulonglong)dVar3 >> 0x20);
          local_478 = auVar54._0_8_ * (dVar72 * local_558 + dVar38 + auVar44._8_8_);
          dStack_470 = auVar54._8_8_ * (dVar75 * dStack_550 + dVar73 + auVar63._0_8_);
          auVar70._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_108._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_108._0_4_);
          auVar70._8_4_ = _UNK_15061cc88 & local_108._8_4_;
          auVar70._12_4_ = _UNK_15061cc8c & local_108._12_4_;
          local_438 = (auVar79._0_8_ * local_558 + dVar36 + auVar43._0_8_) *
                      (double)CONCAT44(~(uint)((ulonglong)lVar34 >> 0x20) & local_538._4_4_,
                                       ~(uint)lVar34 & local_538._0_4_);
          dVar38 = dStack_228 - local_118;
          auVar80._8_4_ = uVar67;
          auVar80._0_8_ = dVar2;
          auVar80._12_4_ = uVar76;
          auVar64._8_8_ = 0;
          auVar64._0_8_ = dVar38;
          auVar45._8_4_ = uVar67;
          auVar45._0_8_ = dVar2;
          auVar45._12_4_ = uVar76;
          auVar81._0_8_ = auVar80._8_8_ * dVar61 - dVar2 * dVar60;
          auVar81._8_8_ = dVar38 * dStack_4c0 - auVar45._8_8_ * dStack_4e0;
          auVar55._8_4_ = uVar67;
          auVar55._0_8_ = dVar2;
          auVar55._12_4_ = uVar76;
          auVar43 = blendpd(auVar55,auVar64,2);
          lVar34 = -(ulonglong)
                    (auVar70._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar35 = -(ulonglong)
                    (auVar70._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar71._0_8_ =
               (double)CONCAT44(~(uint)((ulonglong)lVar34 >> 0x20) & local_4d8._4_4_,
                                ~(uint)lVar34 & (uint)local_4d8);
          auVar71._8_4_ = ~(uint)lVar35 & (uint)uStack_4d0;
          auVar71._12_4_ = ~(uint)((ulonglong)lVar35 >> 0x20) & uStack_4d0._4_4_;
          auVar56._0_8_ = auVar43._0_8_ * dStack_4e0 - dVar38 * dVar37;
          auVar56._8_8_ = auVar43._8_8_ * (double)local_498._8_8_ - dVar49 * 0.0;
          auVar43 = blendpd(auVar81,auVar56,2);
          auVar82._0_8_ = auVar43._0_8_ + auVar43._0_8_;
          auVar82._8_8_ = auVar43._8_8_ + auVar43._8_8_;
          dVar73 = auVar81._8_8_ + auVar81._8_8_;
          dVar36 = auVar56._0_8_ + auVar56._0_8_;
          uVar67 = SUB84(dVar36,0);
          auVar65._8_4_ = uVar67;
          auVar65._0_8_ = dVar73;
          uVar76 = (undefined4)((ulonglong)dVar36 >> 0x20);
          auVar65._12_4_ = uVar76;
          auVar46._8_4_ = uVar67;
          auVar46._0_8_ = dVar73;
          auVar46._12_4_ = uVar76;
          auVar58._8_4_ = uVar67;
          auVar58._0_8_ = dVar73;
          auVar58._12_4_ = uVar76;
          auVar66._0_8_ = auVar65._8_8_ * dVar61 - dVar73 * dVar60;
          auVar66._8_8_ = auVar82._0_8_ * dStack_4c0 - auVar46._8_8_ * dStack_4e0;
          auVar43 = blendpd(auVar58,auVar82,2);
          auVar47._8_4_ = SUB84(auVar82._8_8_,0);
          auVar47._0_8_ = auVar82._0_8_;
          auVar47._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
          auVar59._0_8_ = auVar43._0_8_ * dStack_4e0 - auVar82._0_8_ * dVar37;
          auVar59._8_8_ = auVar43._8_8_ * (double)local_498._8_8_ - auVar47._8_8_ * dVar49;
          auVar48._8_4_ = SUB84(auVar66._8_8_,0);
          auVar48._0_8_ = auVar66._0_8_;
          auVar48._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
          auVar43 = blendpd(auVar66,auVar59,2);
          lVar34 = -(ulonglong)
                    ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_f8._4_4_,
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_f8._0_4_)
                    <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          local_420 = (auVar82._0_8_ * local_558 + dVar38 + auVar43._0_8_) *
                      (double)CONCAT44(~(uint)((ulonglong)lVar34 >> 0x20) & local_538._4_4_,
                                       ~(uint)lVar34 & local_538._0_4_);
          local_430 = auVar71._0_8_ * (dVar73 * local_558 + dVar2 + auVar48._8_8_);
          dStack_428 = auVar71._8_8_ * (dVar36 * dStack_550 + dVar3 + auVar59._0_8_);
          iVar15 = (int)((longlong)
                         ROUND(__real_bfe0000000000000 - local_478 * __real_4000000000000000) >> 1);
          uVar21 = -iVar15;
          local_4e8 = (ulonglong)uVar21;
          iVar24 = (int)((longlong)
                         ROUND(__real_bfe0000000000000 - dStack_470 * __real_4000000000000000) >> 1)
          ;
          uVar23 = -iVar24;
          local_538 = ZEXT416(uVar23);
          uVar16 = (longlong)ROUND(dStack_428 * __real_4000000000000000 - __real_3fe0000000000000)
                   >> 1;
          uStack_4d0 = auVar51._8_8_;
          local_4d8 = uVar16;
          local_4c8 = (longlong)ROUND(local_430 * __real_4000000000000000 - __real_3fe0000000000000)
                      >> 1;
          pFVar29 = local_5b8;
          uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar74 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          local_590 = iVar28;
          local_448 = local_478;
          dStack_440 = dStack_470;
          if (((int)uVar21 <= (int)local_4c8) && (iVar8 = (int)uVar16, (int)uVar23 <= iVar8)) {
            local_580 = (int)pUVar22;
            iVar15 = (iVar8 + iVar24 + 1) * ((int)local_4c8 + iVar15 + 1);
            local_558 = (double)(longlong)iVar15;
            if (0 < iVar15) {
              (**(code **)(local_5b0->_padding_ + 0x490))(local_5b0,iVar15 + local_580);
              (**(code **)(local_5b0->_padding_ + 0x498))(local_5b0,local_5a0);
            }
            FPCGPointValueRanges::FPCGPointValueRanges(&local_418,local_5b0,false);
            local_584 = (uint)((longlong)(int)local_4c8 / (longlong)iVar28);
            uVar30 = (longlong)(int)local_4c8 / (longlong)iVar28 & 0xffffffff;
            local_588 = (uint)((longlong)(int)uVar23 / (longlong)iVar28);
            uVar27 = (longlong)(int)uVar23 / (longlong)iVar28 & 0xffffffff;
            uVar16 = (longlong)((ulonglong)(uint)(iVar8 >> 0x1f) << 0x20 | uVar16 & 0xffffffff) /
                     (longlong)iVar28;
            local_58c = (uint)uVar16;
            uVar16 = uVar16 & 0xffffffff;
            local_5bc = (uint)((longlong)(int)local_4e8 / (longlong)iVar28);
            uVar32 = (longlong)(int)local_4e8 / (longlong)iVar28 & 0xffffffff;
            if ((int)local_5bc <= (int)local_584) {
              do {
                iVar15 = (int)uVar32;
                local_5c0 = (uint)uVar27;
                if ((int)local_5c0 <= (int)uVar16) {
                  do {
                    local_5a8._s_0.X = (int)uVar32;
                    uVar25 = (uint)uVar27;
                    local_5a8._s_0.Y = uVar25;
                    UPCGLandscapeCache::GetCacheEntry
                              (this->LandscapeCache,&local_578,this_00,
                               (TIntPoint<int> *)&local_5a8._s_0,(ALandscapeProxy *)0x0,true);
                    if (local_578.Object == (FPCGLandscapeCacheEntry *)0x0) {
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_578.SharedReferenceCount.ReferenceController);
                    }
                    else {
                      iVar15 = iVar28 + -1;
                      iVar8 = (int)local_4e8 + -(local_5a8._s_0.X * iVar28);
                      iVar24 = iVar15;
                      if (iVar8 < iVar15) {
                        iVar24 = iVar8;
                      }
                      iVar9 = (int)local_4c8 + -(local_5a8._s_0.X * iVar28);
                      iVar8 = iVar15;
                      if (iVar9 < iVar15) {
                        iVar8 = iVar9;
                      }
                      local_594 = 0;
                      if (0 < iVar8) {
                        local_594 = iVar8;
                      }
                      iVar9 = local_538._0_4_ + -(local_5a8._s_0.Y * iVar28);
                      iVar8 = iVar15;
                      if (iVar9 < iVar15) {
                        iVar8 = iVar9;
                      }
                      local_59c = 0;
                      if (0 < iVar8) {
                        local_59c = iVar8;
                      }
                      iVar8 = (int)local_4d8 + -(local_5a8._s_0.Y * iVar28);
                      if (iVar8 < iVar15) {
                        iVar15 = iVar8;
                      }
                      local_598 = 0;
                      if (0 < iVar15) {
                        local_598 = iVar15;
                      }
                      local_5c4 = 0;
                      if (0 < iVar24) {
                        local_5c4 = iVar24;
                      }
                      iVar15 = local_594;
                      iVar24 = local_59c;
                      iVar8 = local_598;
                      if (local_5c4 <= local_594) {
                        do {
                          pUVar5 = local_548;
                          if (iVar24 <= iVar8) {
                            iVar9 = iVar28 + 1;
                            iVar26 = iVar9 * iVar24 + local_5c4;
                            uVar16 = (ulonglong)((iVar8 - iVar24) + 1);
                            do {
                              local_218.Transform.Rotation.XY.m128d_f64[0] =
                                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
                              local_218.Transform.Rotation.XY.m128d_f64[1] =
                                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
                              local_218.Density = 1.0;
                              local_218.Steepness = 0.5;
                              local_218.Seed = 0;
                              local_218.MetadataEntry = -1;
                              local_218.Transform.Rotation.ZW.m128d_f64[0] =
                                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
                              local_218.Transform.Rotation.ZW.m128d_f64[1] =
                                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
                              local_218.Transform.Translation.XY.m128d_f64[0] =
                                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                              local_218.Transform.Translation.XY.m128d_f64[1] =
                                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                              local_218.Transform.Scale3D.XY.m128d_f64[0] =
                                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
                              local_218.Transform.Scale3D.XY.m128d_f64[1] =
                                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
                              local_218.Transform.Translation.ZW.m128d_f64[0] =
                                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                              local_218.Transform.Translation.ZW.m128d_f64[1] =
                                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                              uVar25 = (uint)__xmm_80000000000000008000000000000000;
                              uVar74 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >>
                                             0x20);
                              local_218.BoundsMin.field0_0x0._s_0.Y =
                                   (double)CONCAT44((uint)((ulonglong)
                                                           UE::Math::TVector<double>::OneVector.
                                                           field0_0x0._8_8_ >> 0x20) ^ uVar74,
                                                    SUB84(UE::Math::TVector<double>::OneVector.
                                                          field0_0x0._s_0.Y,0) ^ uVar25);
                              local_218.Transform.Scale3D.ZW.m128d_f64[0] =
                                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
                              local_218.Transform.Scale3D.ZW.m128d_f64[1] =
                                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
                              local_218.BoundsMin.field0_0x0._s_0.X =
                                   (double)CONCAT44((uint)((ulonglong)
                                                           UE::Math::TVector<double>::OneVector.
                                                           field0_0x0._0_8_ >> 0x20) ^ uVar74,
                                                    SUB84(UE::Math::TVector<double>::OneVector.
                                                          field0_0x0._s_0.X,0) ^ uVar25);
                              local_218.BoundsMin.field0_0x0._s_0.Z =
                                   (double)CONCAT44((uint)((ulonglong)
                                                           UE::Math::TVector<double>::OneVector.
                                                           field0_0x0._16_8_ >> 0x20) ^ uVar74,
                                                    SUB84(UE::Math::TVector<double>::OneVector.
                                                          field0_0x0._s_0.Z,0) ^ uVar25);
                              local_218.Color.field0_0x0._s_0.X =
                                   ___xmm_3ff00000000000003ff0000000000000;
                              local_218.Color.field0_0x0._s_0.Y = _UNK_150689688;
                              local_218.Color.field0_0x0._s_0.Z =
                                   ___xmm_3ff00000000000003ff0000000000000;
                              local_218.Color.field0_0x0._s_0.W = _UNK_150689688;
                              local_218.BoundsMax.field0_0x0._s_0.X =
                                   UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
                              local_218.BoundsMax.field0_0x0._s_0.Y =
                                   UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
                              local_218.BoundsMax.field0_0x0._s_0.Z =
                                   UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
                              uVar25 = (uint)pUVar22;
                              if ((pUVar5->DataProps).bGetHeightOnly == false) {
                                if ((local_578.Object == (FPCGLandscapeCacheEntry *)0x0) &&
                                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                      ("IsValid()",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar7)) {
                                  pcVar1 = (code *)swi(3);
                                  pUVar11 = (UPCGBasePointData *)(*pcVar1)();
                                  return pUVar11;
                                }
                                FPCGLandscapeCacheEntry::GetPoint
                                          (local_578.Object,iVar26,&local_218,pUVar33);
                                if (pUVar33 != (UPCGMetadata *)0x0) {
                                  uVar74 = 0;
                                  if ((int)uVar25 < local_418.MetadataEntryRange.NumElements) {
                                    uVar74 = ~uVar25 >> 0x1f;
                                  }
                                  if ((uVar74 == 0) &&
                                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("(Index >= 0) & (Index < NumElements)",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                  ,0x8b,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar7)) {
                                    pcVar1 = (code *)swi(3);
                                    pUVar11 = (UPCGBasePointData *)(*pcVar1)();
                                    return pUVar11;
                                  }
                                  if (uVar25 == (int)uVar25 %
                                                local_418.MetadataEntryRange.ElementView.NumElements
                                     ) {
                                    plVar17 = (long64 *)
                                              ((longlong)
                                               local_418.MetadataEntryRange.ElementView.
                                               BytesBetweenElements *
                                               (longlong)
                                               ((int)uVar25 %
                                               local_418.MetadataEntryRange.ElementView.NumElements)
                                              + (longlong)
                                                local_418.MetadataEntryRange.ElementView.
                                                FirstElementPtr);
                                  }
                                  else {
                                    plVar17 = &local_418.MetadataEntryRange.StubValue;
                                  }
                                  *plVar17 = local_218.MetadataEntry;
                                }
                              }
                              else {
                                if ((local_578.Object == (FPCGLandscapeCacheEntry *)0x0) &&
                                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                      ("IsValid()",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar7)) {
                                  pcVar1 = (code *)swi(3);
                                  pUVar11 = (UPCGBasePointData *)(*pcVar1)();
                                  return pUVar11;
                                }
                                FPCGLandscapeCacheEntry::GetPointHeightOnly
                                          (local_578.Object,iVar26,&local_218);
                              }
                              uVar21 = ~uVar25 >> 0x1f;
                              uVar74 = 0;
                              if ((int)uVar25 < local_418.TransformRange.NumElements) {
                                uVar74 = uVar21;
                              }
                              if ((uVar74 == 0) &&
                                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < NumElements)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                  ,0x8b,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar7)) {
                                pcVar1 = (code *)swi(3);
                                pUVar11 = (UPCGBasePointData *)(*pcVar1)();
                                return pUVar11;
                              }
                              dVar38 = local_218.Transform.Rotation.XY.m128d_f64[1];
                              if (uVar25 == (int)uVar25 %
                                            local_418.TransformRange.ElementView.NumElements) {
                                pTVar18 = (TTransform<double> *)
                                          ((longlong)
                                           ((local_418.TransformRange.ElementView.FirstElementPtr)->
                                           Rotation).XY.m128d_f64 +
                                          (longlong)
                                          local_418.TransformRange.ElementView.BytesBetweenElements
                                          * (longlong)
                                            ((int)uVar25 %
                                            local_418.TransformRange.ElementView.NumElements));
                              }
                              else {
                                pTVar18 = &local_418.TransformRange.StubValue;
                              }
                              (pTVar18->Rotation).XY.m128d_f64[0] =
                                   local_218.Transform.Rotation.XY.m128d_f64[0];
                              (pTVar18->Rotation).XY.m128d_f64[1] = dVar38;
                              dVar38 = local_218.Transform.Rotation.ZW.m128d_f64[1];
                              (pTVar18->Rotation).ZW.m128d_f64[0] =
                                   local_218.Transform.Rotation.ZW.m128d_f64[0];
                              (pTVar18->Rotation).ZW.m128d_f64[1] = dVar38;
                              dVar38 = local_218.Transform.Translation.XY.m128d_f64[1];
                              (pTVar18->Translation).XY.m128d_f64[0] =
                                   local_218.Transform.Translation.XY.m128d_f64[0];
                              (pTVar18->Translation).XY.m128d_f64[1] = dVar38;
                              dVar38 = local_218.Transform.Translation.ZW.m128d_f64[1];
                              (pTVar18->Translation).ZW.m128d_f64[0] =
                                   local_218.Transform.Translation.ZW.m128d_f64[0];
                              (pTVar18->Translation).ZW.m128d_f64[1] = dVar38;
                              dVar38 = local_218.Transform.Scale3D.XY.m128d_f64[1];
                              (pTVar18->Scale3D).XY.m128d_f64[0] =
                                   local_218.Transform.Scale3D.XY.m128d_f64[0];
                              (pTVar18->Scale3D).XY.m128d_f64[1] = dVar38;
                              dVar38 = local_218.Transform.Scale3D.ZW.m128d_f64[1];
                              (pTVar18->Scale3D).ZW.m128d_f64[0] =
                                   local_218.Transform.Scale3D.ZW.m128d_f64[0];
                              (pTVar18->Scale3D).ZW.m128d_f64[1] = dVar38;
                              uVar74 = 0;
                              if ((int)uVar25 < local_418.SeedRange.NumElements) {
                                uVar74 = uVar21;
                              }
                              if ((uVar74 == 0) &&
                                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < NumElements)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                  ,0x8b,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar7)) {
                                pcVar1 = (code *)swi(3);
                                pUVar11 = (UPCGBasePointData *)(*pcVar1)();
                                return pUVar11;
                              }
                              if (uVar25 == (int)uVar25 %
                                            local_418.SeedRange.ElementView.NumElements) {
                                piVar19 = (int *)((longlong)
                                                  local_418.SeedRange.ElementView.
                                                  BytesBetweenElements *
                                                  (longlong)
                                                  ((int)uVar25 %
                                                  local_418.SeedRange.ElementView.NumElements) +
                                                 (longlong)
                                                 local_418.SeedRange.ElementView.FirstElementPtr);
                              }
                              else {
                                piVar19 = &local_418.SeedRange.StubValue;
                              }
                              *piVar19 = local_218.Seed;
                              uVar74 = 0;
                              if ((int)uVar25 < local_418.BoundsMinRange.NumElements) {
                                uVar74 = uVar21;
                              }
                              if ((uVar74 == 0) &&
                                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < NumElements)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                  ,0x8b,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar7)) {
                                pcVar1 = (code *)swi(3);
                                pUVar11 = (UPCGBasePointData *)(*pcVar1)();
                                return pUVar11;
                              }
                              uVar6 = local_218.BoundsMin.field0_0x0._s_0.Y;
                              if (uVar25 == (int)uVar25 %
                                            local_418.BoundsMinRange.ElementView.NumElements) {
                                pTVar20 = (TVector<double>_u_0 *)
                                          ((longlong)
                                           &(local_418.BoundsMinRange.ElementView.FirstElementPtr)->
                                            field0_0x0 +
                                          (longlong)
                                          local_418.BoundsMinRange.ElementView.BytesBetweenElements
                                          * (longlong)
                                            ((int)uVar25 %
                                            local_418.BoundsMinRange.ElementView.NumElements));
                              }
                              else {
                                pTVar20 = &local_418.BoundsMinRange.StubValue.field0_0x0;
                              }
                              (((TVector<double>_u_0 *)&(pTVar20->_s_0).X)->_s_0).X =
                                   local_218.BoundsMin.field0_0x0._s_0.X;
                              *(undefined8 *)((longlong)pTVar20 + 8) = uVar6;
                              *(double *)((longlong)pTVar20 + 0x10) =
                                   local_218.BoundsMin.field0_0x0._s_0.Z;
                              uVar74 = 0;
                              if ((int)uVar25 < local_418.BoundsMaxRange.NumElements) {
                                uVar74 = uVar21;
                              }
                              if ((uVar74 == 0) &&
                                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < NumElements)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                  ,0x8b,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar7)) {
                                pcVar1 = (code *)swi(3);
                                pUVar11 = (UPCGBasePointData *)(*pcVar1)();
                                return pUVar11;
                              }
                              uVar6 = local_218.BoundsMax.field0_0x0._s_0.Y;
                              if (uVar25 == (int)uVar25 %
                                            local_418.BoundsMaxRange.ElementView.NumElements) {
                                pTVar20 = (TVector<double>_u_0 *)
                                          ((longlong)
                                           &(local_418.BoundsMaxRange.ElementView.FirstElementPtr)->
                                            field0_0x0 +
                                          (longlong)
                                          local_418.BoundsMaxRange.ElementView.BytesBetweenElements
                                          * (longlong)
                                            ((int)uVar25 %
                                            local_418.BoundsMaxRange.ElementView.NumElements));
                              }
                              else {
                                pTVar20 = &local_418.BoundsMaxRange.StubValue.field0_0x0;
                              }
                              pUVar22 = (UPCGMetadata *)(ulonglong)(uVar25 + 1);
                              (((TVector<double>_u_0 *)&(pTVar20->_s_0).X)->_s_0).X =
                                   local_218.BoundsMax.field0_0x0._s_0.X;
                              *(undefined8 *)((longlong)pTVar20 + 8) = uVar6;
                              iVar26 = iVar26 + iVar9;
                              *(double *)((longlong)pTVar20 + 0x10) =
                                   local_218.BoundsMax.field0_0x0._s_0.Z;
                              uVar16 = uVar16 - 1;
                              iVar28 = local_590;
                              iVar15 = local_594;
                              iVar24 = local_59c;
                              iVar8 = local_598;
                            } while (uVar16 != 0);
                          }
                          local_5c4 = local_5c4 + 1;
                        } while (local_5c4 <= iVar15);
                        uVar32 = (ulonglong)local_5bc;
                        this = local_548;
                        uVar25 = local_5c0;
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_578.SharedReferenceCount.ReferenceController);
                      this_00 = local_4b8;
                    }
                    iVar15 = (int)uVar32;
                    uVar16 = (ulonglong)local_58c;
                    local_5c0 = uVar25 + 1;
                    uVar27 = (ulonglong)local_5c0;
                  } while ((int)local_5c0 <= (int)local_58c);
                  uVar27 = (ulonglong)local_588;
                  uVar30 = (ulonglong)local_584;
                }
                local_5bc = iVar15 + 1;
                uVar32 = (ulonglong)local_5bc;
              } while ((int)local_5bc <= (int)uVar30);
            }
            if (((longlong)local_558 < (longlong)((int)pUVar22 - local_580)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NumPoints - PointsBeforeNum <= PointCountUpperBound",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeData.cpp"
                                   ,0x246,L""), bVar7)) {
              pcVar1 = (code *)swi(3);
              pUVar11 = (UPCGBasePointData *)(*pcVar1)();
              return pUVar11;
            }
            pFVar29 = local_5b8;
            uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar74 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            if (5 < (byte)LogPCG._0_1_) {
              local_4a8[0] = (FName)local_4b0->_padding_;
              ::FName::ToString(local_4a8,&local_468);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              pFVar29 = local_5b8;
              uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar74 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_468.Data.AllocatorInstance.Data);
                pFVar29 = local_5b8;
                uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                uVar74 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              }
            }
          }
        }
        uVar16 = (ulonglong)local_57c;
        pFVar31 = local_540 + 8;
      }
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              (local_4f8,(int)local_4f0);
    if (local_4f8 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_4f8);
    }
    if (local_508 != (void *)0x0) {
      FMemory::Free(local_508);
    }
  }
  return pUVar11;
}

// CreatePointArrayData @ 1498ada70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointArrayData * __thiscall
UPCGLandscapeData::CreatePointArrayData
          (UPCGLandscapeData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  UPCGPointArrayData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  UClass *local_res20;
  FString local_28;
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId441,"UPCGLandscapeData::CreatePointArrayData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeData.cpp"
               ,0x1b9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId441);
  }
  local_res20 = UPCGPointArrayData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar2 = (UPCGPointArrayData *)
           CreateBasePointData(this,param_1,param_2,(TSubclassOf<UPCGBasePointData>)&local_res20);
  if (pUVar2 == (UPCGPointArrayData *)0x0) {
    pUVar2 = (UPCGPointArrayData *)0x0;
  }
  else {
    pUVar3 = UPCGPointArrayData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPCGPointArrayData>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// CreatePointData @ 1498aec00

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

UPCGPointData * __thiscall
UPCGLandscapeData::CreatePointData(UPCGLandscapeData *this,FPCGContext *param_1)

{
  UPCGPointData *pUVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_18 = 0;
  local_17 = 0;
  local_13 = 0;
  local_11 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  pUVar1 = (UPCGPointData *)(**(code **)(this->_padding_ + 0x480))(0,0,&local_48);
  return pUVar1;
}

// CreatePointData @ 1498aec70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGLandscapeData::CreatePointData
          (UPCGLandscapeData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  UPCGPointData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  UClass *local_res20;
  FString local_28;
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId434,"UPCGLandscapeData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeData.cpp"
               ,0x1b2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId434);
  }
  local_res20 = UPCGPointData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar2 = (UPCGPointData *)
           CreateBasePointData(this,param_1,param_2,(TSubclassOf<UPCGBasePointData>)&local_res20);
  if (pUVar2 == (UPCGPointData *)0x0) {
    pUVar2 = (UPCGPointData *)0x0;
  }
  else {
    pUVar3 = UPCGPointData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPCGPointData>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// GetBounds @ 1498b5750

TBox<double> * __thiscall
UPCGLandscapeData::GetBounds(UPCGLandscapeData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->Bounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->Bounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->Bounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->Bounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->Bounds).IsValid;
  uVar6 = (this->Bounds).Pad[0];
  uVar7 = (this->Bounds).Pad[1];
  uVar8 = (this->Bounds).Pad[2];
  uVar9 = (this->Bounds).Pad[3];
  uVar10 = (this->Bounds).Pad[4];
  uVar11 = (this->Bounds).Pad[5];
  uVar12 = (this->Bounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetDataType @ 1498b83e0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGLandscapeData::GetDataType(UPCGLandscapeData *this)

{
  return Landscape;
}

// GetDataTypeId @ 1498b8760

FPCGDataTypeBaseId * __thiscall UPCGLandscapeData::GetDataTypeId(UPCGLandscapeData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscape::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscape::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscape::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscape::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscape::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscape.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscape.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscape,(UObject *)pUVar3,
                         L"PCGDataTypeInfoLandscape");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscape.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b87e3;
  }
  else {
LAB_1498b87e3:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscape.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b883a;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1498b883c;
  }
LAB_1498b883a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b883c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscape::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscape::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscape::AsId(void)'
          ::__l2::Id;
}

// GetLandscapeInfo @ 1498bab00

ULandscapeInfo * __thiscall
UPCGLandscapeData::GetLandscapeInfo(UPCGLandscapeData *this,TVector<double> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ULandscapeInfo *pUVar4;
  TBox<double> *pTVar5;
  TBox<double> *pTVar6;
  undefined1 local_res8 [8];
  
  if (((this->LandscapeInfos).ArrayNum == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!LandscapeInfos.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeData.cpp"
                         ,0x254,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (ULandscapeInfo *)(*pcVar2)();
    return pUVar4;
  }
  if ((this->LandscapeInfos).ArrayNum == 1) {
    return *(ULandscapeInfo **)(this->LandscapeInfos).AllocatorInstance.Data;
  }
  pTVar5 = (TBox<double> *)(this->BoundsToLandscapeInfos).AllocatorInstance.Data;
  iVar1 = (this->BoundsToLandscapeInfos).ArrayNum;
  pTVar6 = (TBox<double> *)((longlong)pTVar5 + (longlong)iVar1 * 0x40);
  while( true ) {
    if ((this->BoundsToLandscapeInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<UE::Math::TBox<double>,ULandscapeInfo_*>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar5 == pTVar6) break;
    bVar3 = PCGHelpers::IsInsideBoundsXY(pTVar5,param_1);
    if (bVar3) {
      return (ULandscapeInfo *)pTVar5[1].Min.field0_0x0._s_0.X;
    }
    pTVar5 = (TBox<double> *)((longlong)&pTVar5[1].Min.field0_0x0 + 8);
  }
  return (ULandscapeInfo *)0x0;
}

// GetPrivateStaticClass @ 1498bc4d0

UClass * __cdecl UPCGLandscapeData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeData",
               &Z_Registration_Info_UClass_UPCGLandscapeData.InnerSingleton,
               StaticRegisterNativesUPCGLandscapeData,0x220,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGLandscapeData>,
               InternalVTableHelperCtorCaller<UPCGLandscapeData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeData.InnerSingleton;
}

// GetStrictBounds @ 1498c76c0

TBox<double> * __thiscall
UPCGLandscapeData::GetStrictBounds(UPCGLandscapeData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->Bounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->Bounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->Bounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->Bounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->Bounds).IsValid;
  uVar6 = (this->Bounds).Pad[0];
  uVar7 = (this->Bounds).Pad[1];
  uVar8 = (this->Bounds).Pad[2];
  uVar9 = (this->Bounds).Pad[3];
  uVar10 = (this->Bounds).Pad[4];
  uVar11 = (this->Bounds).Pad[5];
  uVar12 = (this->Bounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// HasNonTrivialTransform @ 1498ca670

bool __thiscall UPCGLandscapeData::HasNonTrivialTransform(UPCGLandscapeData *this)

{
  return true;
}

// Initialize @ 1498cba90

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

void __thiscall
UPCGLandscapeData::Initialize
          (UPCGLandscapeData *this,
          TArray<TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_1,TBox<double> *param_2,FPCGLandscapeDataProps *param_3)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  FSoftObjectPtr *this_00;
  FScriptContainerElement *pFVar3;
  USceneComponent *pUVar4;
  code *pcVar5;
  double dVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  UObject *pUVar19;
  UObject *pUVar20;
  undefined8 uVar21;
  ALandscapeProxy *pAVar22;
  TBox<double> *pTVar23;
  AActor *this_01;
  UClass *pUVar24;
  TTransform<double> *pTVar25;
  UWorld *pUVar26;
  UPCGSubsystem *this_02;
  AActor *pAVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ForElementType<FSetElementId> FVar31;
  FWeakObjectPtr *pFVar32;
  ForAnyElementType FVar33;
  undefined1 auStack_178 [32];
  FWeakObjectPtr *local_158;
  FWeakObjectPtr *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126 [6];
  ForAnyElementType local_120;
  undefined8 local_118;
  FWeakObjectPtr local_110;
  FWeakObjectPtr local_108;
  FWeakObjectPtr local_100;
  uint local_f8;
  undefined8 local_f4;
  undefined1 local_ec [12];
  UObject *local_e0;
  ULandscapeInfo *local_d8;
  FWeakObjectPtr *local_d0;
  TBox<double> *local_c8;
  FPCGLandscapeDataProps *local_c0;
  TSet<ALandscapeProxy_*,DefaultKeyFuncs<ALandscapeProxy_*,0>,FDefaultSetAllocator> local_b8;
  TBox<double> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar32 = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
  iVar18 = param_1->ArrayNum;
  local_b8.Elements._0_8_ = 0;
  pFVar2 = pFVar32 + iVar18;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  local_c8 = param_2;
  local_c0 = param_3;
  while( true ) {
    if (param_1->ArrayNum != iVar18) {
      local_128 = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_128);
    }
    if (pFVar32 == pFVar2) break;
    local_100 = *pFVar32;
    bVar16 = FWeakObjectPtr::IsValid(&local_100);
    if (bVar16) {
      pUVar19 = FWeakObjectPtr::Get(&local_100);
      pUVar20 = FWeakObjectPtr::Get(&local_100);
      pUVar19 = (UObject *)(**(code **)(*(longlong *)pUVar19 + 0x778))(pUVar19);
      if (pUVar19 != pUVar20) {
        pUVar19 = FWeakObjectPtr::Get(&local_100);
        local_ec._4_8_ = (**(code **)(*(longlong *)pUVar19 + 0x778))(pUVar19);
        TSet<ALandscapeProxy_*,DefaultKeyFuncs<ALandscapeProxy_*,0>,FDefaultSetAllocator>::
        Emplace<ALandscapeProxy_*>(&local_b8,(ALandscapeProxy **)local_ec,(bool *)(local_ec + 4));
      }
    }
    pFVar32 = pFVar32 + 1;
  }
  pFVar32 = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
  iVar18 = param_1->ArrayNum;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  pFVar2 = pFVar32 + iVar18;
  while( true ) {
    if (param_1->ArrayNum != iVar18) {
      local_127 = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_127);
    }
    if (pFVar32 == pFVar2) break;
    local_110 = *pFVar32;
    bVar16 = FWeakObjectPtr::IsValid(&local_110);
    if (bVar16) {
      pUVar19 = FWeakObjectPtr::Get(&local_110);
      uVar28 = ((uint)((ulonglong)pUVar19 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar19 >> 4)) *
               -0x7a143595;
      uVar28 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
      if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
        FVar31 = (ForElementType<FSetElementId>)&local_b8.Hash;
        if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar31 = local_b8.Hash.SecondaryData;
        }
        for (iVar17 = *(int *)((longlong)FVar31 +
                              (ulonglong)(local_b8.HashSize - 1U & (uVar28 >> 0x10 ^ uVar28)) * 4);
            iVar17 != -1; iVar17 = *(int *)(local_b8.Elements._0_8_ + 8 + (longlong)iVar17 * 0x10))
        {
          if (*(UObject **)(local_b8.Elements._0_8_ + (longlong)iVar17 * 0x10) == pUVar19)
          goto LAB_1498cbd23;
        }
      }
      if (local_120.Data <= &local_110) {
        if (&local_110 < (FWeakObjectPtr *)(local_120.Data + (longlong)local_118._4_4_ * 8)) {
          local_140 = (longlong)(int)(uint)local_118;
          local_138 = 8;
          local_158 = &local_110;
          local_150 = (FWeakObjectPtr *)local_120.Data;
          local_148 = (longlong)local_118._4_4_;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar16) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      iVar17 = (uint)local_118;
      if ((uint)local_118 == local_118._4_4_) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_120,(int *)((longlong)&local_118 + 4));
      }
      local_118 = CONCAT44(local_118._4_4_,iVar17 + 1);
      *(FWeakObjectPtr *)(local_120.Data + (longlong)iVar17 * 8) = local_110;
    }
LAB_1498cbd23:
    pFVar32 = pFVar32 + 1;
  }
  uVar29 = (ulonglong)(int)(uint)local_118;
  local_f8 = (uint)local_118;
  local_d0 = (FWeakObjectPtr *)(local_120.Data + uVar29 * 8);
  FVar33.Data = local_120.Data;
  while( true ) {
    pFVar2 = local_d0;
    pAVar27 = (AActor *)0x0;
    if ((uint)local_118 != (int)uVar29) {
      local_126[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_126);
    }
    if ((FWeakObjectPtr *)FVar33.Data == pFVar2) break;
    local_108 = *(FWeakObjectPtr *)FVar33.Data;
    bVar16 = FWeakObjectPtr::IsValid(&local_108);
    if ((!bVar16) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Landscape.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeData.cpp"
                            ,0x3d,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar19 = FWeakObjectPtr::Get(&local_108);
    piVar1 = &(this->Landscapes).ArrayMax;
    iVar18 = (this->Landscapes).ArrayNum;
    if (iVar18 == *piVar1) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&(this->Landscapes).AllocatorInstance,piVar1);
    }
    (this->Landscapes).ArrayNum = iVar18 + 1;
    this_00 = (FSoftObjectPtr *)
              ((this->Landscapes).AllocatorInstance.Data + (longlong)iVar18 * 0x28);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar19);
    }
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    local_f4 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this_00->field_0x18,0);
    local_e0 = pUVar19;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar19);
    }
    FSoftObjectPtr::operator=(this_00,(FObjectPtr)&local_e0);
    pUVar19 = FWeakObjectPtr::Get(&local_108);
    local_d8 = (ULandscapeInfo *)(**(code **)(*(longlong *)&pUVar19[0x11].field_0x18 + 0x18))();
    TArray<ULandscapeInfo_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<ULandscapeInfo_*>
              (&this->LandscapeInfos,&local_d8);
    pUVar19 = FWeakObjectPtr::Get(&local_108);
    uVar21 = (**(code **)(*(longlong *)&pUVar19[0x11].field_0x18 + 0x18))();
    pAVar22 = (ALandscapeProxy *)FWeakObjectPtr::Get(&local_108);
    pTVar23 = PCGHelpers::GetLandscapeBounds(&local_68,pAVar22);
    piVar1 = &(this->BoundsToLandscapeInfos).ArrayMax;
    iVar18 = (this->BoundsToLandscapeInfos).ArrayNum;
    if (iVar18 == *piVar1) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&(this->BoundsToLandscapeInfos).AllocatorInstance,piVar1);
    }
    FVar33.Data = FVar33.Data + 8;
    (this->BoundsToLandscapeInfos).ArrayNum = iVar18 + 1;
    dVar6 = (pTVar23->Min).field0_0x0._s_0.Y;
    pFVar3 = (this->BoundsToLandscapeInfos).AllocatorInstance.Data;
    lVar30 = (longlong)iVar18 * 0x40;
    *(double *)(pFVar3 + lVar30) = (pTVar23->Min).field0_0x0._s_0.X;
    *(double *)(pFVar3 + lVar30 + 8) = dVar6;
    dVar6 = (pTVar23->Max).field0_0x0._s_0.X;
    *(double *)(pFVar3 + lVar30 + 0x10) = (pTVar23->Min).field0_0x0._s_0.Z;
    *(double *)(pFVar3 + lVar30 + 0x10 + 8) = dVar6;
    dVar6 = (pTVar23->Max).field0_0x0._s_0.Z;
    *(double *)(pFVar3 + lVar30 + 0x20) = (pTVar23->Max).field0_0x0._s_0.Y;
    *(double *)(pFVar3 + lVar30 + 0x20 + 8) = dVar6;
    *(undefined8 *)(pFVar3 + lVar30 + 0x30) = *(undefined8 *)&pTVar23->IsValid;
    *(undefined8 *)(pFVar3 + lVar30 + 0x38) = uVar21;
    uVar29 = (ulonglong)local_f8;
  }
  if (((this->Landscapes).ArrayNum == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Landscapes.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeData.cpp"
                          ,0x45,L""), bVar16)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar18 = (this->Landscapes).ArrayNum;
  if (iVar18 < 1) {
    local_158 = (FWeakObjectPtr *)0x0;
    local_150 = (FWeakObjectPtr *)(longlong)iVar18;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_01 = (AActor *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)
                       (this->Landscapes).AllocatorInstance.Data);
  if (this_01 != (AActor *)0x0) {
    pUVar24 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
    iVar18 = (int)pUVar24->_padding_;
    if ((iVar18 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
        &pUVar24->_padding_)) goto LAB_1498cc001;
  }
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("FirstLandscape",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeData.cpp"
                      ,0x48,L"");
  this_01 = pAVar27;
  if (bVar16) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1498cc001:
  dVar6 = (local_c8->Min).field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (local_c8->Min).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar6;
  dVar6 = (local_c8->Max).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (local_c8->Min).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar6;
  dVar6 = (local_c8->Max).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (local_c8->Max).field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar6;
  uVar7 = local_c8->Pad[0];
  uVar8 = local_c8->Pad[1];
  uVar9 = local_c8->Pad[2];
  uVar10 = local_c8->Pad[3];
  uVar11 = local_c8->Pad[4];
  uVar12 = local_c8->Pad[5];
  uVar13 = local_c8->Pad[6];
  (this->Bounds).IsValid = local_c8->IsValid;
  (this->Bounds).Pad[0] = uVar7;
  (this->Bounds).Pad[1] = uVar8;
  (this->Bounds).Pad[2] = uVar9;
  (this->Bounds).Pad[3] = uVar10;
  (this->Bounds).Pad[4] = uVar11;
  (this->Bounds).Pad[5] = uVar12;
  (this->Bounds).Pad[6] = uVar13;
  bVar16 = local_c0->bGetLayerWeights;
  bVar14 = local_c0->bGetActorReference;
  bVar15 = local_c0->bGetPhysicalMaterial;
  (this->DataProps).bGetHeightOnly = local_c0->bGetHeightOnly;
  (this->DataProps).bGetLayerWeights = bVar16;
  (this->DataProps).bGetActorReference = bVar14;
  (this->DataProps).bGetPhysicalMaterial = bVar15;
  bVar16 = local_c0->bSampleVirtualTextures;
  (this->DataProps).bGetComponentCoordinates = local_c0->bGetComponentCoordinates;
  (this->DataProps).bSampleVirtualTextures = bVar16;
  (this->DataProps).bSampleVirtualTextureNormals = local_c0->bSampleVirtualTextureNormals;
  pUVar4 = (this_01->RootComponent).field0_0x0.DebugPtr;
  if (pUVar4 == (USceneComponent *)0x0) {
    pTVar25 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar25 = &pUVar4->ComponentToWorld;
  }
  dVar6 = (pTVar25->Rotation).XY.m128d_f64[1];
  this->_padding_ = (longlong)(pTVar25->Rotation).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar6;
  dVar6 = (pTVar25->Rotation).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(pTVar25->Rotation).ZW.m128d_f64[0];
  this->_padding_ = (longlong)dVar6;
  dVar6 = (pTVar25->Translation).XY.m128d_f64[1];
  this->_padding_ = (longlong)(pTVar25->Translation).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar6;
  dVar6 = (pTVar25->Translation).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(pTVar25->Translation).ZW.m128d_f64[0];
  this->_padding_ = (longlong)dVar6;
  dVar6 = (pTVar25->Scale3D).XY.m128d_f64[1];
  this->_padding_ = (longlong)(pTVar25->Scale3D).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar6;
  dVar6 = (pTVar25->Scale3D).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(pTVar25->Scale3D).ZW.m128d_f64[0];
  this->_padding_ = (longlong)dVar6;
  pUVar26 = AActor::GetWorld(this_01);
  this_02 = UPCGSubsystem::GetInstance(pUVar26);
  if (this_02 != (UPCGSubsystem *)0x0) {
    pAVar27 = (AActor *)UPCGSubsystem::GetLandscapeCache(this_02);
  }
  this->LandscapeCache = (UPCGLandscapeCache *)pAVar27;
  if ((FWeakObjectPtr *)local_120.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_120.Data);
  }
  local_b8.HashSize = 0;
  if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<ALandscapeProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ALandscapeProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  return;
}

// InitializeTargetMetadata @ 1498cfdd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGLandscapeData::InitializeTargetMetadata
          (UPCGLandscapeData *this,FPCGInitializeFromDataParams *param_1,UPCGMetadata *param_2)

{
  FName *pFVar1;
  int iVar2;
  int iVar3;
  UPCGLandscapeCache *this_00;
  code *pcVar4;
  FWeakObjectPtr *pFVar5;
  bool bVar6;
  FPCGMetadataDomain *this_01;
  ALandscapeProxy *pAVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  FWeakObjectPtr *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  float local_res20 [2];
  int local_c8 [2];
  FWeakObjectPtr *local_c0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_b8;
  FSoftObjectPath local_a8;
  FSoftObjectPath local_88;
  TPersistentObjectPtr<FSoftObjectPath> local_68;
  
  if ((param_2 == (UPCGMetadata *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MetadataToInitialize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeData.cpp"
                         ,0x2bf,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UPCGSpatialData::InitializeTargetMetadata((UPCGSpatialData *)this,param_1,param_2);
  if ((((((this->DataProps).bGetActorReference != false) ||
        ((this->DataProps).bGetComponentCoordinates != false)) ||
       ((this->DataProps).bGetLayerWeights != false)) ||
      ((this->DataProps).bGetPhysicalMaterial != false)) &&
     (this_01 = UPCGMetadata::GetMetadataDomain(param_2,&PCGMetadataDomainID::Elements),
     this_01 != (FPCGMetadataDomain *)0x0)) {
    if (this->LandscapeCache == (UPCGLandscapeCache *)0x0) {
      if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
    else if ((this->DataProps).bGetLayerWeights != false) {
      iVar2 = (this->Landscapes).ArrayNum;
      pFVar11 = (FWeakObjectPtr *)(this->Landscapes).AllocatorInstance.Data;
      local_c0 = pFVar11 + (longlong)iVar2 * 5;
      while( true ) {
        pFVar5 = local_c0;
        if ((this->Landscapes).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TSoftObjectPtr<ALandscapeProxy>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res8);
        }
        if (pFVar11 == pFVar5) break;
        local_68.WeakPtr = *pFVar11;
        FSoftObjectPath::FSoftObjectPath(&local_68.ObjectID,(FSoftObjectPath *)(pFVar11 + 1));
        this_00 = this->LandscapeCache;
        pAVar7 = (ALandscapeProxy *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_68);
        if (pAVar7 == (ALandscapeProxy *)0x0) {
LAB_1498cff2e:
          pAVar7 = (ALandscapeProxy *)0x0;
        }
        else {
          pUVar8 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
          iVar3 = (int)pUVar8->_padding_;
          if ((*(int *)(pAVar7->_padding_ + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar8->_padding_)) goto LAB_1498cff2e;
        }
        UPCGLandscapeCache::GetLayerNames(this_00,&local_b8,pAVar7);
        iVar3 = local_b8.ArrayNum;
        uVar9 = (ulonglong)local_b8.ArrayNum;
        pFVar1 = (FName *)(local_b8.AllocatorInstance.Data + uVar9 * 8);
        FVar10.Data = local_b8.AllocatorInstance.Data;
        while( true ) {
          if ((uint)uVar9 != iVar3) {
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if ((FName *)FVar10.Data == pFVar1) break;
          local_res20[0] = 0.0;
          FPCGMetadataDomain::FindOrCreateAttribute<float>
                    (this_01,*(FName *)FVar10.Data,local_res20,true,true,true);
          uVar9 = (ulonglong)(uint)local_b8.ArrayNum;
          FVar10.Data = FVar10.Data + 8;
        }
        if ((FName *)local_b8.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_b8.AllocatorInstance.Data);
        }
        if (local_68.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.ObjectID.SubPathString.Data.AllocatorInstance.Data);
        }
        pFVar11 = pFVar11 + 5;
      }
    }
    if ((this->DataProps).bGetActorReference != false) {
      local_a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_a8.AssetPath.PackageName.Number = 0;
      local_a8.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_a8.AssetPath.AssetName.Number = 0;
      local_a8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.SubPathString.Data.ArrayNum = 0;
      local_a8.SubPathString.Data.ArrayMax = 0;
      FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                (this_01,PCGPointDataConstants::ActorReferenceAttribute,&local_a8,false,false,true);
      if (local_a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    if ((this->DataProps).bGetPhysicalMaterial != false) {
      local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_88.AssetPath.PackageName.Number = 0;
      local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_88.AssetPath.AssetName.Number = 0;
      local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.SubPathString.Data.ArrayNum = 0;
      local_88.SubPathString.Data.ArrayMax = 0;
      FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                (this_01,PCGWorldQueryConstants::PhysicalMaterialReferenceAttribute,&local_88,false,
                 false,true);
      if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    if ((this->DataProps).bGetComponentCoordinates != false) {
      local_c8[0] = 0;
      FPCGMetadataDomain::FindOrCreateAttribute<int>
                (this_01,PCGLandscapeDataConstants::ComponentXAttribute,local_c8,false,true,true);
      local_c0 = (FWeakObjectPtr *)((ulonglong)local_c0 & 0xffffffff00000000);
      FPCGMetadataDomain::FindOrCreateAttribute<int>
                (this_01,PCGLandscapeDataConstants::ComponentYAttribute,(int *)&local_c0,false,true,
                 true);
    }
  }
  return;
}

// PostLoad @ 1498d25e0

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

void __thiscall UPCGLandscapeData::PostLoad(UPCGLandscapeData *this)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  undefined8 uVar9;
  ALandscapeProxy *pAVar10;
  TBox<double> *pTVar11;
  AActor *this_00;
  UWorld *pUVar12;
  UPCGSubsystem *this_01;
  UPCGLandscapeCache *pUVar13;
  longlong lVar14;
  FWeakObjectPtr *pFVar15;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  TPersistentObjectPtr<FSoftObjectPath> local_a0;
  ULandscapeInfo *local_78;
  TBox<double> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UObject::PostLoad((UObject *)this);
  iVar3 = (this->Landscapes).ArrayNum;
  this_00 = (AActor *)0x0;
  pFVar15 = (FWeakObjectPtr *)(this->Landscapes).AllocatorInstance.Data;
  pFVar2 = pFVar15 + (longlong)iVar3 * 5;
  do {
    if ((this->Landscapes).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TSoftObjectPtr<ALandscapeProxy>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_a8);
    }
    if (pFVar15 == pFVar2) {
      if (this_00 == (AActor *)0x0) {
        pUVar12 = (UWorld *)0x0;
      }
      else {
        pUVar12 = AActor::GetWorld(this_00);
      }
      this_01 = UPCGSubsystem::GetInstance(pUVar12);
      if (this_01 == (UPCGSubsystem *)0x0) {
        this->LandscapeCache = (UPCGLandscapeCache *)0x0;
      }
      else {
        pUVar13 = UPCGSubsystem::GetLandscapeCache(this_01);
        this->LandscapeCache = pUVar13;
      }
      return;
    }
    local_a0.WeakPtr = *pFVar15;
    FSoftObjectPath::FSoftObjectPath(&local_a0.ObjectID,(FSoftObjectPath *)(pFVar15 + 1));
    pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_a0);
    if (pUVar7 == (UObject *)0x0) {
      if (local_a0.ObjectID.AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&local_a0.ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_a0);
        if (pUVar7 != (UObject *)0x0) goto LAB_1498d26a9;
      }
    }
    else {
LAB_1498d26a9:
      Z_Construct_UClass_ALandscapeProxy_NoRegister();
    }
    pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_a0);
    if (pUVar7 == (UObject *)0x0) {
LAB_1498d2877:
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
    else {
      pUVar8 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
      iVar6 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar8->_padding_)) goto LAB_1498d2877;
      pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_a0);
      if (pUVar7 == (UObject *)0x0) {
LAB_1498d2724:
        pUVar7 = (UObject *)0x0;
      }
      else {
        pUVar8 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
        iVar6 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar8->_padding_)) goto LAB_1498d2724;
      }
      local_78 = (ULandscapeInfo *)(**(code **)(*(longlong *)&pUVar7[0x11].field_0x18 + 0x18))();
      TArray<ULandscapeInfo_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<ULandscapeInfo_*>
                (&this->LandscapeInfos,&local_78);
      pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_a0);
      if (pUVar7 == (UObject *)0x0) {
LAB_1498d277e:
        pUVar7 = (UObject *)0x0;
      }
      else {
        pUVar8 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
        iVar6 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar8->_padding_)) goto LAB_1498d277e;
      }
      uVar9 = (**(code **)(*(longlong *)&pUVar7[0x11].field_0x18 + 0x18))();
      pAVar10 = (ALandscapeProxy *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_a0);
      if (pAVar10 == (ALandscapeProxy *)0x0) {
LAB_1498d27c2:
        pAVar10 = (ALandscapeProxy *)0x0;
      }
      else {
        pUVar8 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
        iVar6 = (int)pUVar8->_padding_;
        if ((*(int *)(pAVar10->_padding_ + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar10->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar8->_padding_)) goto LAB_1498d27c2;
      }
      pTVar11 = PCGHelpers::GetLandscapeBounds(&local_70,pAVar10);
      piVar1 = &(this->BoundsToLandscapeInfos).ArrayMax;
      iVar6 = (this->BoundsToLandscapeInfos).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&(this->BoundsToLandscapeInfos).AllocatorInstance,piVar1);
      }
      (this->BoundsToLandscapeInfos).ArrayNum = iVar6 + 1;
      dVar5 = (pTVar11->Min).field0_0x0._s_0.Y;
      pFVar4 = (this->BoundsToLandscapeInfos).AllocatorInstance.Data;
      lVar14 = (longlong)iVar6 * 0x40;
      *(double *)(pFVar4 + lVar14) = (pTVar11->Min).field0_0x0._s_0.X;
      *(double *)(pFVar4 + lVar14 + 8) = dVar5;
      dVar5 = (pTVar11->Max).field0_0x0._s_0.X;
      *(double *)(pFVar4 + lVar14 + 0x10) = (pTVar11->Min).field0_0x0._s_0.Z;
      *(double *)(pFVar4 + lVar14 + 0x10 + 8) = dVar5;
      dVar5 = (pTVar11->Max).field0_0x0._s_0.Z;
      *(double *)(pFVar4 + lVar14 + 0x20) = (pTVar11->Max).field0_0x0._s_0.Y;
      *(double *)(pFVar4 + lVar14 + 0x20 + 8) = dVar5;
      *(undefined8 *)(pFVar4 + lVar14 + 0x30) = *(undefined8 *)&pTVar11->IsValid;
      *(undefined8 *)(pFVar4 + lVar14 + 0x38) = uVar9;
      if (this_00 == (AActor *)0x0) {
        this_00 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_a0);
        if (this_00 != (AActor *)0x0) {
          pUVar8 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
          iVar6 = (int)pUVar8->_padding_;
          if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
              &pUVar8->_padding_)) goto LAB_1498d2893;
        }
        this_00 = (AActor *)0x0;
      }
    }
LAB_1498d2893:
    if (local_a0.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
    pFVar15 = pFVar15 + 5;
  } while( true );
}

// PrepareForSpatialQuery @ 1498d2f80

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

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
UPCGLandscapeData::PrepareForSpatialQuery
          (UPCGLandscapeData *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGContext *param_1,TBox<double> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  TConsoleVariableData<bool> *pTVar4;
  FWeakObjectPtr FVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  IPCGGraphExecutionSource *pIVar8;
  ULandscapeInfo *this_00;
  ALandscapeProxy *pAVar9;
  ulong64 uVar10;
  IPCGGraphExecutionSource *pIVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  undefined1 auStackY_268 [32];
  FWeakObjectPtr local_228;
  FWeakObjectPtr local_220;
  TIntPoint<int>_u_0 local_218;
  TIntPoint<int>_u_0 local_210;
  UPCGLandscapeData *local_208;
  ULandscapeInfo *local_200;
  FPCGContext *local_1f8;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d0;
  double local_1b8;
  double local_1b0;
  code *local_198 [5];
  undefined8 *local_170;
  FPCGScheduleGenericParams local_168;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar12 = -1 < CpuChannel->Enabled;
  local_1f8 = param_1;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId635,"UPCGLandscapeData::PrepareForSpatialQuery",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeData.cpp"
               ,0x27b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId635);
  }
  pTVar4 = PCGSpatialData::CVarEnablePrepareForSpatialQuery.Ref;
  bVar7 = IsInParallelGameThread();
  pIVar11 = (IPCGGraphExecutionSource *)0x0;
  if (bVar7) {
LAB_1498d3023:
    pIVar8 = pIVar11;
  }
  else {
    bVar7 = IsInGameThread();
    pIVar8 = (IPCGGraphExecutionSource *)&DAT_00000001;
    if (bVar7) goto LAB_1498d3023;
  }
  if (((pTVar4->ShadowedValue[(longlong)&pIVar8->field_0x0] == false) ||
      (this->LandscapeCache == (UPCGLandscapeCache *)0x0)) ||
     ((this->LandscapeCache->SerializationMode == NeverSerialize &&
      (bVar7 = PCGHelpers::IsRuntimeOrPIE(), bVar7)))) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (!bVar12) {
      return __return_storage_ptr__;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return __return_storage_ptr__;
  }
  dVar3 = __real_3fe0000000000000;
  local_1f0._s_0.X =
       ((param_2->Max).field0_0x0._s_0.X + (param_2->Min).field0_0x0._s_0.X) *
       __real_3fe0000000000000;
  local_1f0._s_0.Z =
       ((param_2->Max).field0_0x0._s_0.Z + (param_2->Min).field0_0x0._s_0.Z) *
       __real_3fe0000000000000;
  local_1f0._s_0.Y =
       ((param_2->Max).field0_0x0._s_0.Y + (param_2->Min).field0_0x0._s_0.Y) *
       __real_3fe0000000000000;
  this_00 = GetLandscapeInfo(this,(TVector<double> *)&local_1f0._s_0);
  if ((this_00 != (ULandscapeInfo *)0x0) &&
     (pAVar9 = ULandscapeInfo::GetLandscapeProxy(this_00), pAVar9 != (ALandscapeProxy *)0x0)) {
    (**(code **)(pAVar9->_padding_ + 0x20))(&pAVar9->_padding_,&local_c8);
    UE::Math::TBox<double>::InverseTransformBy(param_2,(TBox<double> *)&local_1d0._s_0,&local_c8);
    dVar13 = __real_3ff0000000000000 / (double)this_00->ComponentSizeQuads;
    dVar14 = dVar13 * local_1d0._s_0.X;
    dVar13 = dVar13 * local_1d0._s_0.Y;
    local_218._s_0.X = (int)((longlong)ROUND((dVar14 + dVar14) - dVar3) >> 1);
    local_218._s_0.Y = (int)((longlong)ROUND((dVar13 + dVar13) - dVar3) >> 1);
    dVar13 = __real_3ff0000000000000 / (double)this_00->ComponentSizeQuads;
    local_1b8 = dVar13 * local_1b8;
    dVar13 = dVar13 * local_1b0;
    local_210._s_0.X = (int)((longlong)ROUND((local_1b8 + local_1b8) - dVar3) >> 1);
    local_210._s_0.Y = (int)((longlong)ROUND((dVar13 + dVar13) - dVar3) >> 1);
    bVar7 = UPCGLandscapeCache::AreCacheEntriesReady
                      (this->LandscapeCache,this_00,(TIntPoint<int> *)&local_218._s_0,
                       (TIntPoint<int> *)&local_210._s_0);
    if (!bVar7) {
      if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar7)) {
        pIVar11 = (param_1->ExecutionSource).InterfaceInstance;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_228.ObjectIndex = 0;
      local_228.ObjectSerialNumber = 0;
      local_208 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_208);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      local_220.ObjectIndex = 0;
      local_220.ObjectSerialNumber = 0;
      local_200 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(&local_220,(FObjectPtr)&local_200);
      FVar6 = local_220;
      FVar5 = local_228;
      uVar1 = CONCAT44(local_218._s_0.Y,local_218._s_0.X);
      uVar2 = CONCAT44(local_210._s_0.Y,local_210._s_0.X);
      local_198[0] = (code *)0x0;
      local_170 = FMemory::Malloc(0x28,8);
      *local_170 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UPCGLandscapeData::PrepareForSpatialQuery'::`2'::<lambda_1>,0,1>
                    ::_vftable_;
      *(FWeakObjectPtr *)(local_170 + 1) = FVar5;
      *(FWeakObjectPtr *)(local_170 + 2) = FVar6;
      local_170[3] = uVar1;
      local_170[4] = uVar2;
      if ((FWeakObjectPtr *)(local_170 + 1) != (FWeakObjectPtr *)0x0) {
        local_198[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UPCGLandscapeData::PrepareForSpatialQuery'::__l2::<lambda_1>,bool,FPCGContext_*>
                       ::Call;
      }
      FPCGScheduleGenericParams::FPCGScheduleGenericParams
                (&local_168,(TFunction<bool___cdecl(FPCGContext_*)> *)local_198,pIVar11);
      local_168.bCanExecuteOnlyOnMainThread = false;
      uVar10 = FPCGContext::ScheduleGeneric(local_1f8,&local_168);
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
                 &__return_storage_ptr__->ArrayMax);
      *(ulong64 *)(__return_storage_ptr__->AllocatorInstance).Data = uVar10;
      FPCGScheduleGenericParams::~FPCGScheduleGenericParams(&local_168);
      goto LAB_1498d331d;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
LAB_1498d331d:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ProjectPoint @ 1498d3ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGLandscapeData::ProjectPoint
          (UPCGLandscapeData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGProjectionParams *param_3,FPCGPoint *param_4,UPCGMetadata *param_5)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  TIntPoint<int> TVar6;
  undefined1 auVar7 [16];
  FPCGProjectionParams *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  ULandscapeInfo *this_00;
  ALandscapeProxy *pAVar11;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *pTVar12;
  FPCGMetadataDomain *pFVar13;
  ULandscapeHeightfieldCollisionComponent *this_01;
  FPCGMetadataAttribute<FSoftObjectPath> *this_02;
  UPhysicalMaterial *pUVar14;
  FPCGMetadataAttribute<int> *pFVar15;
  ForAnyElementType FVar16;
  ULandscapeHeightfieldCollisionComponent *pUVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStackY_378 [32];
  TIntPoint<int>_u_0 local_348;
  int local_340 [2];
  TSharedPtr<FPCGLandscapeCacheEntry_const_,1> local_338;
  TVector2<double>_u_0 local_328;
  FSoftObjectPath local_318;
  FSoftObjectPath local_2f8;
  FSoftObjectPath local_2d8;
  FSoftObjectPath local_2b8;
  FPCGProjectionParams *local_298;
  undefined8 local_290;
  FSharedReferencer<1> local_288 [2];
  FName local_278;
  FPCGMetadataDomainID local_270;
  FName local_258;
  FPCGMetadataDomainID local_250;
  FName local_238;
  FPCGMetadataDomainID local_230;
  FName local_218;
  FPCGMetadataDomainID local_210;
  TVector<double>_u_0 local_1f8;
  TQuat<double> local_1d8;
  TQuat<double> local_1b8;
  TQuat<double> local_198;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  TQuat<double> local_148;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  if (this->LandscapeCache != (UPCGLandscapeCache *)0x0) {
    local_1f8._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    local_1f8._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
    local_1f8._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
    local_298 = param_3;
    this_00 = GetLandscapeInfo(this,(TVector<double> *)&local_1f8._s_0);
    if ((this_00 != (ULandscapeInfo *)0x0) &&
       (pAVar11 = ULandscapeInfo::GetLandscapeProxy(this_00), pAVar11 != (ALandscapeProxy *)0x0)) {
      (**(code **)(pAVar11->_padding_ + 0x20))(&pAVar11->_padding_,&local_128);
      dVar3 = __real_3fe0000000000000;
      local_168 = (param_1->Translation).ZW.m128d_f64[0];
      local_178 = (param_1->Translation).XY.m128d_f64[0];
      dStack_170 = (param_1->Translation).XY.m128d_f64[1];
      local_f8 = local_168 - local_f8;
      local_128 = local_128 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dStack_120 = dStack_120 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      local_118 = local_118 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dStack_110 = dStack_110 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar33._8_4_ = SUB84(dStack_120,0);
      auVar33._0_8_ = local_128;
      auVar33._12_4_ = (int)((ulonglong)dStack_120 >> 0x20);
      auVar30._8_4_ = SUB84(dStack_110,0);
      auVar30._0_8_ = local_118;
      auVar30._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
      auVar34 = blendpd(auVar33,auVar30,2);
      auVar21._8_4_ = SUB84(local_118,0);
      auVar21._0_8_ = dStack_120;
      auVar21._12_4_ = (int)((ulonglong)local_118 >> 0x20);
      local_108 = local_178 - local_108;
      dStack_100 = dStack_170 - dStack_100;
      uVar38 = (undefined4)((ulonglong)dStack_100 >> 0x20);
      auVar44._8_4_ = SUB84(dStack_100,0);
      auVar44._0_8_ = local_108;
      auVar44._12_4_ = uVar38;
      auVar29._8_4_ = SUB84(dStack_100,0);
      auVar29._0_8_ = local_108;
      auVar29._12_4_ = uVar38;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_f8;
      auVar30 = blendpd(auVar29,auVar4,2);
      auVar45._0_8_ = auVar44._8_8_ * local_128 - dStack_120 * local_108;
      auVar45._8_8_ = local_f8 * dStack_120 - auVar21._8_8_ * dStack_100;
      auVar31._0_8_ = auVar30._0_8_ * local_118 - auVar34._0_8_ * local_f8;
      auVar31._8_8_ = auVar30._8_8_ * dStack_110 - auVar34._8_8_ * 0.0;
      dVar27 = auVar45._8_8_ + auVar45._8_8_;
      dVar28 = auVar31._0_8_ + auVar31._0_8_;
      uVar38 = SUB84(dVar28,0);
      uVar39 = (undefined4)((ulonglong)dVar28 >> 0x20);
      auVar30 = blendpd(auVar45,auVar31,2);
      auVar46._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar46._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar41._8_4_ = uVar38;
      auVar41._0_8_ = dVar27;
      auVar41._12_4_ = uVar39;
      auVar22._8_4_ = uVar38;
      auVar22._0_8_ = dVar27;
      auVar22._12_4_ = uVar39;
      auVar35._8_4_ = uVar38;
      auVar35._0_8_ = dVar27;
      auVar35._12_4_ = uVar39;
      auVar50._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uStack_e4,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_e8);
      auVar50._8_4_ = _UNK_15061cc88 & uStack_e0;
      auVar50._12_4_ = _UNK_15061cc8c & uStack_dc;
      auVar42._0_8_ = auVar41._8_8_ * local_128 - dVar27 * dStack_120;
      auVar42._8_8_ = auVar46._0_8_ * dStack_120 - auVar22._8_8_ * local_118;
      auVar30 = blendpd(auVar35,auVar46,2);
      auVar23._8_4_ = SUB84(auVar46._8_8_,0);
      auVar23._0_8_ = auVar46._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
      auVar36._0_8_ = auVar30._0_8_ * local_118 - auVar46._0_8_ * auVar34._0_8_;
      auVar36._8_8_ = auVar30._8_8_ * dStack_110 - auVar23._8_8_ * auVar34._8_8_;
      lVar18 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_d8._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_d8._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      lVar19 = -(ulonglong)(auVar50._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar20 = -(ulonglong)(auVar50._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar7._4_4_ = uStack_e4;
      auVar7._0_4_ = local_e8;
      auVar7._8_4_ = uStack_e0;
      auVar7._12_4_ = uStack_dc;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar7);
      auVar51._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar30._4_4_,
                            ~(uint)lVar19 & auVar30._0_4_);
      auVar51._8_4_ = ~(uint)lVar20 & auVar30._8_4_;
      auVar51._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar30._12_4_;
      auVar24._8_4_ = SUB84(auVar42._8_8_,0);
      auVar24._0_8_ = auVar42._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
      this_01 = (ULandscapeHeightfieldCollisionComponent *)0x0;
      auVar34._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar34._0_8_ = local_d8._0_8_;
      auVar34._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar34);
      auVar34 = blendpd(auVar42,auVar36,2);
      dVar49 = auVar51._0_8_ * (dVar27 * dStack_110 + local_108 + auVar24._8_8_);
      dStack_158 = auVar51._8_8_ * (dVar28 * dStack_110 + dStack_100 + auVar36._0_8_);
      auVar5._4_8_ = auVar36._8_8_;
      auVar5._0_4_ = (int)((ulonglong)dVar49 >> 0x20);
      auVar37._0_8_ = auVar5._0_8_ << 0x20;
      auVar37._8_4_ = SUB84(dStack_158,0);
      auVar37._12_4_ = (int)((ulonglong)dStack_158 >> 0x20);
      local_150 = (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar30._4_4_,
                                   ~(uint)lVar18 & auVar30._0_4_) *
                  (auVar46._0_8_ * dStack_110 + local_f8 + auVar34._0_8_);
      dVar27 = __real_3ff0000000000000 / (double)this_00->ComponentSizeQuads;
      dVar28 = dVar27 * dVar49;
      dVar27 = dVar27 * auVar37._8_8_;
      local_348._s_0.X = (int)((longlong)ROUND((dVar28 + dVar28) - __real_3fe0000000000000) >> 1);
      local_348._s_0.Y = (int)((longlong)ROUND((dVar27 + dVar27) - __real_3fe0000000000000) >> 1);
      local_160 = dVar49;
      UPCGLandscapeCache::GetCacheEntry
                (this->LandscapeCache,&local_338,this_00,(TIntPoint<int> *)&local_348._s_0,
                 (ALandscapeProxy *)0x0,true);
      if (local_338.Object == (FPCGLandscapeCacheEntry *)0x0) {
        bVar9 = false;
      }
      else {
        local_328._s_0.X = dVar49 - (double)(this_00->ComponentSizeQuads * local_348._s_0.X);
        local_328._s_0.Y = auVar37._8_8_ - (double)(this_00->ComponentSizeQuads * local_348._s_0.Y);
        if ((this->DataProps).bGetHeightOnly == false) {
          if ((local_338.Object == (FPCGLandscapeCacheEntry *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar1 = (code *)swi(3);
            uVar10 = (*pcVar1)();
            return (bool)uVar10;
          }
          pUVar17 = this_01;
          if ((this->DataProps).bGetLayerWeights != false) {
            pUVar17 = (ULandscapeHeightfieldCollisionComponent *)param_5;
          }
          FPCGLandscapeCacheEntry::GetInterpolatedPoint
                    (local_338.Object,(TVector2<double> *)&local_328._s_0,param_4,
                     (UPCGMetadata *)pUVar17);
        }
        else {
          if ((local_338.Object == (FPCGLandscapeCacheEntry *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar1 = (code *)swi(3);
            uVar10 = (*pcVar1)();
            return (bool)uVar10;
          }
          pUVar17 = this_01;
          if ((this->DataProps).bGetLayerWeights != false) {
            pUVar17 = (ULandscapeHeightfieldCollisionComponent *)param_5;
          }
          FPCGLandscapeCacheEntry::GetInterpolatedPointHeightOnly
                    (local_338.Object,(TVector2<double> *)&local_328._s_0,param_4,
                     (UPCGMetadata *)pUVar17);
        }
        local_288[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_338.Object = (FPCGLandscapeCacheEntry *)0x0;
        local_290 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_338.SharedReferenceCount,local_288);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_288[0].ReferenceController);
        TVar6.field0_0x0._s_0.Y = local_348._s_0.Y;
        TVar6.field0_0x0._s_0.X = local_348._s_0.X;
        pTVar12 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                          *)&this_00->XYtoCollisionComponentMap,TVar6);
        pUVar17 = this_01;
        if (pTVar12 !=
            (TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *)0x0) {
          pUVar17 = *(ULandscapeHeightfieldCollisionComponent **)&pTVar12->field_0x8;
        }
        if ((((this->DataProps).bGetActorReference != false) && (param_5 != (UPCGMetadata *)0x0)) &&
           (pUVar17 != (ULandscapeHeightfieldCollisionComponent *)0x0)) {
          local_278 = PCGPointDataConstants::ActorReferenceAttribute;
          local_270.Flag = PCGMetadataDomainID::Default.Flag;
          local_270._1_3_ = PCGMetadataDomainID::Default._1_3_;
          local_270.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
          local_270.DebugName = PCGMetadataDomainID::Default.DebugName;
          local_2d8.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_2d8.AssetPath.PackageName.Number = 0;
          local_2d8.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_2d8.AssetPath.AssetName.Number = 0;
          local_2d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2d8.SubPathString.Data.ArrayNum = 0;
          local_2d8.SubPathString.Data.ArrayMax = 0;
          pFVar13 = UPCGMetadata::FindOrCreateMetadataDomain(param_5,&local_270);
          FVar16.Data = (FScriptContainerElement *)this_01;
          if (pFVar13 != (FPCGMetadataDomain *)0x0) {
            this_01 = (ULandscapeHeightfieldCollisionComponent *)
                      FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                                (pFVar13,local_278,&local_2d8,true,true,true);
            FVar16.Data = local_2d8.SubPathString.Data.AllocatorInstance.Data;
          }
          if ((ULandscapeHeightfieldCollisionComponent *)FVar16.Data !=
              (ULandscapeHeightfieldCollisionComponent *)0x0) {
            FMemory::Free(FVar16.Data);
          }
          if (this_01 != (ULandscapeHeightfieldCollisionComponent *)0x0) {
            UPCGMetadata::InitializeOnSet
                      (param_5,&param_4->MetadataEntry,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0
                      );
            local_318.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_318.AssetPath.PackageName.Number = 0;
            local_318.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_318.AssetPath.AssetName.Number = 0;
            local_318.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_318.SubPathString.Data.ArrayNum = 0;
            local_318.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath(&local_318,*(UObject **)&pUVar17->field_0xa8);
            FPCGMetadataAttribute<FSoftObjectPath>::SetValue
                      ((FPCGMetadataAttribute<FSoftObjectPath> *)this_01,param_4->MetadataEntry,
                       &local_318);
            if (local_318.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_318.SubPathString.Data.AllocatorInstance.Data);
            }
          }
        }
        this_02 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
        if ((((this->DataProps).bGetPhysicalMaterial != false) && (param_5 != (UPCGMetadata *)0x0))
           && (pUVar17 != (ULandscapeHeightfieldCollisionComponent *)0x0)) {
          local_258 = PCGWorldQueryConstants::PhysicalMaterialReferenceAttribute;
          local_250.Flag = PCGMetadataDomainID::Default.Flag;
          local_250._1_3_ = PCGMetadataDomainID::Default._1_3_;
          local_250.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
          local_250.DebugName = PCGMetadataDomainID::Default.DebugName;
          local_2b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_2b8.AssetPath.PackageName.Number = 0;
          local_2b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_2b8.AssetPath.AssetName.Number = 0;
          local_2b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2b8.SubPathString.Data.ArrayNum = 0;
          local_2b8.SubPathString.Data.ArrayMax = 0;
          pFVar13 = UPCGMetadata::FindOrCreateMetadataDomain(param_5,&local_250);
          FVar16.Data = (FScriptContainerElement *)this_02;
          if (pFVar13 != (FPCGMetadataDomain *)0x0) {
            this_02 = FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                                (pFVar13,local_258,&local_2b8,true,true,true);
            FVar16.Data = local_2b8.SubPathString.Data.AllocatorInstance.Data;
          }
          if ((FPCGMetadataAttribute<FSoftObjectPath> *)FVar16.Data !=
              (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
            FMemory::Free(FVar16.Data);
          }
          if ((this_02 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) &&
             (pUVar14 = ULandscapeHeightfieldCollisionComponent::GetPhysicalMaterial
                                  (pUVar17,(float)local_328._s_0.X,(float)local_328._s_0.Y,Complex),
             pUVar14 != (UPhysicalMaterial *)0x0)) {
            UPCGMetadata::InitializeOnSet
                      (param_5,&param_4->MetadataEntry,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0
                      );
            local_2f8.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_2f8.AssetPath.PackageName.Number = 0;
            local_2f8.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_2f8.AssetPath.AssetName.Number = 0;
            local_2f8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2f8.SubPathString.Data.ArrayNum = 0;
            local_2f8.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath(&local_2f8,(UObject *)pUVar14);
            FPCGMetadataAttribute<FSoftObjectPath>::SetValue
                      (this_02,param_4->MetadataEntry,&local_2f8);
            if (local_2f8.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2f8.SubPathString.Data.AllocatorInstance.Data);
            }
          }
        }
        if (((this->DataProps).bGetComponentCoordinates != false) &&
           (param_5 != (UPCGMetadata *)0x0)) {
          local_238 = PCGLandscapeDataConstants::ComponentXAttribute;
          local_230.Flag = PCGMetadataDomainID::Default.Flag;
          local_230._1_3_ = PCGMetadataDomainID::Default._1_3_;
          local_230.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
          local_230.DebugName = PCGMetadataDomainID::Default.DebugName;
          local_340[0] = 0;
          pFVar13 = UPCGMetadata::FindOrCreateMetadataDomain(param_5,&local_230);
          if ((pFVar13 != (FPCGMetadataDomain *)0x0) &&
             (pFVar15 = FPCGMetadataDomain::FindOrCreateAttribute<int>
                                  (pFVar13,local_238,local_340,true,true,true),
             pFVar15 != (FPCGMetadataAttribute<int> *)0x0)) {
            UPCGMetadata::InitializeOnSet
                      (param_5,&param_4->MetadataEntry,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0
                      );
            FPCGMetadataAttribute<int>::SetValue(pFVar15,param_4->MetadataEntry,local_348.XY);
          }
          local_218 = PCGLandscapeDataConstants::ComponentYAttribute;
          local_210.Flag = PCGMetadataDomainID::Default.Flag;
          local_210._1_3_ = PCGMetadataDomainID::Default._1_3_;
          local_210.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
          local_210.DebugName = PCGMetadataDomainID::Default.DebugName;
          local_340[1] = 0;
          pFVar13 = UPCGMetadata::FindOrCreateMetadataDomain(param_5,&local_210);
          if ((pFVar13 != (FPCGMetadataDomain *)0x0) &&
             (pFVar15 = FPCGMetadataDomain::FindOrCreateAttribute<int>
                                  (pFVar13,local_218,local_340 + 1,true,true,true),
             pFVar15 != (FPCGMetadataAttribute<int> *)0x0)) {
            UPCGMetadata::InitializeOnSet
                      (param_5,&param_4->MetadataEntry,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0
                      );
            FPCGMetadataAttribute<int>::SetValue(pFVar15,param_4->MetadataEntry,&local_348._s_0.Y);
          }
        }
        pFVar8 = local_298;
        if (local_298->bProjectPositions == false) {
          dVar28 = (param_1->Translation).XY.m128d_f64[1];
          dVar27 = (param_1->Translation).ZW.m128d_f64[0];
          (param_4->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
          (param_4->Transform).Translation.XY.m128d_f64[1] = dVar28;
          (param_4->Transform).Translation.ZW.m128d_f64[0] = dVar27;
          (param_4->Transform).Translation.ZW.m128d_f64[1] = 0.0;
        }
        if (local_298->bProjectRotations == false) {
          dVar3 = (param_1->Rotation).XY.m128d_f64[0];
          dVar27 = (param_1->Rotation).XY.m128d_f64[1];
          dVar49 = (param_1->Rotation).ZW.m128d_f64[0];
          dVar48 = (param_1->Rotation).ZW.m128d_f64[1];
        }
        else {
          local_1b8.X = (param_1->Rotation).XY.m128d_f64[0];
          local_1b8.Y = (param_1->Rotation).XY.m128d_f64[1];
          local_1b8.Z = (param_1->Rotation).ZW.m128d_f64[0];
          local_1b8.W = (param_1->Rotation).ZW.m128d_f64[1];
          UE::Math::TQuat<double>::Log(&local_1b8,&local_148);
          auVar30 = *(undefined1 (*) [16])(param_4->Transform).Rotation.XY.m128d_f64;
          auVar34 = *(undefined1 (*) [16])(param_4->Transform).Rotation.ZW.m128d_f64;
          local_1d8.W = 0.0;
          local_1d8.Z = local_148.Z * __real_4000000000000000 * dVar3;
          local_1d8.X = 0.0;
          local_1d8.Y = 0.0;
          UE::Math::TQuat<double>::Exp(&local_1d8,&local_198);
          dVar27 = auVar30._0_8_;
          auVar47._8_4_ = auVar30._0_4_;
          auVar47._0_8_ = dVar27;
          auVar47._12_4_ = auVar30._4_4_;
          dVar40 = auVar34._0_8_;
          dVar43 = auVar34._8_8_;
          dVar28 = auVar30._8_8_;
          auVar25._8_4_ = auVar34._8_4_;
          auVar25._0_8_ = dVar43;
          auVar25._12_4_ = auVar34._12_4_;
          auVar32._8_4_ = auVar30._8_4_;
          auVar32._0_8_ = dVar28;
          auVar32._12_4_ = auVar30._12_4_;
          auVar26._8_4_ = auVar34._0_4_;
          auVar26._0_8_ = dVar40;
          auVar26._12_4_ = auVar34._4_4_;
          dVar49 = dVar27 * local_198.Y *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                   dVar43 * local_198.Z +
                   dVar28 * local_198.X *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                   dVar40 * local_198.W *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar48 = auVar47._8_8_ * local_198.X *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   auVar25._8_8_ * local_198.W +
                   auVar32._8_8_ * local_198.Y *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   auVar26._8_8_ * local_198.Z *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dVar3 = dVar27 * local_198.W *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                  dVar43 * local_198.X +
                  dVar28 * local_198.Z *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                  dVar40 * local_198.Y *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar27 = dVar27 * local_198.Z *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   dVar43 * local_198.Y +
                   dVar28 * local_198.W *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   dVar40 * local_198.X *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        }
        auVar2._8_4_ = SUB84(dVar27,0);
        auVar2._0_8_ = dVar3;
        auVar2._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        *(undefined1 (*) [16])(param_4->Transform).Rotation.XY.m128d_f64 = auVar2;
        (param_4->Transform).Rotation.ZW.m128d_f64[0] = dVar49;
        (param_4->Transform).Rotation.ZW.m128d_f64[1] = dVar48;
        if (pFVar8->bProjectScales == false) {
          dVar28 = (param_1->Scale3D).XY.m128d_f64[1];
          dVar27 = (param_1->Scale3D).ZW.m128d_f64[0];
          (param_4->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
          (param_4->Transform).Scale3D.XY.m128d_f64[1] = dVar28;
          (param_4->Transform).Scale3D.ZW.m128d_f64[0] = dVar27;
          (param_4->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
        }
        bVar9 = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_338.SharedReferenceCount.ReferenceController);
      return bVar9;
    }
  }
  return false;
}

// SamplePoint @ 1498d9730

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

bool __thiscall
UPCGLandscapeData::SamplePoint
          (UPCGLandscapeData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  ForElementType<ULandscapeHeightfieldCollisionComponent_*> FVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TIntPoint<int> TVar6;
  double dVar7;
  TBox<double> *pTVar8;
  FPCGPoint *pFVar9;
  int iVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  ULandscapeInfo *this_00;
  ALandscapeProxy *pAVar14;
  TMatrix<double> *pTVar15;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *pTVar16;
  void *pvVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  ForElementType<ULandscapeHeightfieldCollisionComponent_*> FVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auStack_2e8 [32];
  void **local_2c8;
  undefined1 local_2b8 [8];
  void *local_2b0;
  undefined8 local_2a8;
  int local_2a0;
  int iStack_29c;
  ULandscapeHeightfieldCollisionComponent *local_298;
  TBox<double> *local_290;
  uint local_288;
  float local_284;
  float local_280;
  float local_27c;
  FPCGPoint *local_278;
  TVector<double>_u_0 local_270;
  double local_258;
  double dStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  TArray<ULandscapeHeightfieldCollisionComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  local_200;
  TVector<double>_u_0 local_1e8;
  double local_1d0;
  double local_1c8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  local_270._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  local_270._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
  local_270._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  local_290 = param_2;
  local_278 = param_3;
  this_00 = GetLandscapeInfo(this,(TVector<double> *)&local_270._s_0);
  if ((this_00 == (ULandscapeInfo *)0x0) ||
     (pAVar14 = ULandscapeInfo::GetLandscapeProxy(this_00), pAVar14 == (ALandscapeProxy *)0x0)) {
    bVar11 = false;
  }
  else {
    pAVar14 = ULandscapeInfo::GetLandscapeProxy(this_00);
    (**(code **)(pAVar14->_padding_ + 0x20))(&pAVar14->_padding_,&local_1a8);
    UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_148,&local_1a8);
    pTVar15 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_148,&local_e8);
    UE::Math::TBox<double>::TransformBy(param_2,(TBox<double> *)&local_1e8._s_0,pTVar15);
    dVar7 = __real_3fe0000000000000;
    local_200.AllocatorInstance.SecondaryData =
         (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)0x0;
    local_200.ArrayNum = 0;
    local_200.ArrayMax = 1;
    dVar4 = __real_3ff0000000000000 / (double)this_00->ComponentSizeQuads;
    pvVar17 = (void *)((longlong)
                       ROUND((dVar4 * local_1d0 + dVar4 * local_1d0) - __real_3fe0000000000000) >> 1
                      );
    uVar23 = (longlong)
             ROUND((dVar4 * local_1e8._s_0.X + dVar4 * local_1e8._s_0.X) - __real_3fe0000000000000)
             >> 1;
    dVar5 = (dVar4 * local_1c8 + dVar4 * local_1c8) - __real_3fe0000000000000;
    uVar22 = (longlong)
             ROUND((dVar4 * local_1e8._s_0.Y + dVar4 * local_1e8._s_0.Y) - __real_3fe0000000000000)
             >> 1;
    local_2b0 = pvVar17;
    if ((int)uVar23 <= (int)pvVar17) {
      do {
        uVar19 = (uint)uVar22;
        uVar20 = uVar22 & 0xffffffff;
        iVar10 = (int)uVar23;
        iVar18 = local_2a0;
        while (local_2a0 = iVar10, (int)uVar19 <= (int)((longlong)ROUND(dVar5) >> 1)) {
          iVar18 = (int)uVar20;
          TVar6.field0_0x0._s_0.Y = iVar18;
          TVar6.field0_0x0._s_0.X = local_2a0;
          iStack_29c = iVar18;
          pTVar16 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                            *)&this_00->XYtoCollisionComponentMap,TVar6);
          if (pTVar16 ==
              (TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *)0x0) {
            local_298 = (ULandscapeHeightfieldCollisionComponent *)0x0;
          }
          else {
            local_298 = *(ULandscapeHeightfieldCollisionComponent **)&pTVar16->field_0x8;
            if (local_298 != (ULandscapeHeightfieldCollisionComponent *)0x0) {
              TArray<ULandscapeHeightfieldCollisionComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              ::AddUniqueImpl<ULandscapeHeightfieldCollisionComponent_*_const_&>
                        (&local_200,&local_298);
            }
          }
          uVar19 = iVar18 + 1;
          uVar20 = (ulonglong)uVar19;
          pvVar17 = local_2b0;
          iVar10 = local_2a0;
          iVar18 = local_2a0;
        }
        uVar19 = (int)uVar23 + 1;
        uVar23 = (ulonglong)uVar19;
        local_2a0 = iVar18;
      } while ((int)uVar19 <= (int)pvVar17);
    }
    iVar18 = local_200.ArrayNum;
    pTVar8 = local_290;
    if (local_200.ArrayNum != 0) {
      local_218 = (param_1->Scale3D).XY.m128d_f64[0];
      dStack_210 = (param_1->Scale3D).XY.m128d_f64[1];
      local_208 = (param_1->Scale3D).ZW.m128d_f64[0];
      local_284 = (float)(((local_290->Max).field0_0x0._s_0.X - (local_290->Min).field0_0x0._s_0.X)
                          * dVar7 * local_218);
      local_280 = (float)(((local_290->Max).field0_0x0._s_0.Y - (local_290->Min).field0_0x0._s_0.Y)
                          * dVar7 * dStack_210);
      local_27c = (float)(((local_290->Max).field0_0x0._s_0.Z - (local_290->Min).field0_0x0._s_0.Z)
                          * dVar7 * local_208);
    }
    local_288 = (uint)(local_200.ArrayNum != 0);
    FVar21 = (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)&local_200;
    if (local_200.AllocatorInstance.SecondaryData !=
        (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)0x0) {
      FVar21 = local_200.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)
            ((longlong)FVar21 + (longlong)local_200.ArrayNum * 8);
    while( true ) {
      if (local_200.ArrayNum != iVar18) {
        local_2b8[0] = 0;
        `TCheckedPointerIterator<ULandscapeHeightfieldCollisionComponent_*,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_2b8);
      }
      if (FVar21 == FVar1) {
        bVar11 = false;
        goto LAB_1498d9aeb;
      }
      plVar2 = *(longlong **)FVar21;
      if ((plVar2 == (longlong *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Component",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeData.cpp"
                              ,0xbf,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return (bool)uVar12;
      }
      local_238 = (param_1->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_1->Rotation).XY.m128d_f64[1];
      local_2c8 = &local_2b0;
      local_228 = (param_1->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_1->Rotation).ZW.m128d_f64[1];
      local_248 = *(undefined4 *)(param_1->Translation).ZW.m128d_f64;
      uStack_244 = *(undefined4 *)((longlong)(param_1->Translation).ZW.m128d_f64 + 4);
      local_258 = (param_1->Translation).XY.m128d_f64[0];
      dStack_250 = (param_1->Translation).XY.m128d_f64[1];
      local_2b0 = (void *)0x0;
      local_2a8 = 0;
      cVar13 = (**(code **)(*plVar2 + 0xa70))(plVar2,&local_258,&local_238);
      pFVar9 = local_278;
      if (cVar13 != '\0') break;
      if (local_2b0 != (void *)0x0) {
        FMemory::Free(local_2b0);
      }
      FVar21 = (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)((longlong)FVar21 + 8);
    }
    FPCGPoint::FPCGPoint(local_278,param_1,__real_3f800000,0);
    dVar4 = (pTVar8->Min).field0_0x0._s_0.Y;
    (pFVar9->BoundsMin).field0_0x0._s_0.X = (pTVar8->Min).field0_0x0._s_0.X;
    (pFVar9->BoundsMin).field0_0x0._s_0.Y = dVar4;
    (pFVar9->BoundsMin).field0_0x0._s_0.Z = (pTVar8->Min).field0_0x0._s_0.Z;
    dVar4 = (pTVar8->Max).field0_0x0._s_0.Y;
    (pFVar9->BoundsMax).field0_0x0._s_0.X = (pTVar8->Max).field0_0x0._s_0.X;
    (pFVar9->BoundsMax).field0_0x0._s_0.Y = dVar4;
    (pFVar9->BoundsMax).field0_0x0._s_0.Z = (pTVar8->Max).field0_0x0._s_0.Z;
    if (local_2b0 != (void *)0x0) {
      FMemory::Free(local_2b0);
    }
    bVar11 = true;
LAB_1498d9aeb:
    if (local_200.AllocatorInstance.SecondaryData !=
        (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)0x0) {
      FMemory::Free((void *)local_200.AllocatorInstance.SecondaryData);
    }
  }
  return bVar11;
}

// SamplePoints @ 1498dceb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGLandscapeData::SamplePoints
          (UPCGLandscapeData *this,
          TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_const_,int>
          *param_1,TArrayView<FPCGPoint,int> *param_2,UPCGMetadata *param_3)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_> *pTVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  TArrayView<FPCGPoint,int> *pTVar21;
  bool bVar22;
  int iVar23;
  ALandscapeProxy *pAVar24;
  TTransform<double> *pTVar25;
  TMatrix<double> *pTVar26;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *pTVar27;
  ulonglong *puVar28;
  ForElementType<unsigned_int> FVar29;
  FImplicitObject *pFVar30;
  uint uVar31;
  ForElementType<int> *pFVar32;
  longlong *plVar33;
  ForElementType<FPhysicsShapeAdapter_Chaos> FVar34;
  ForElementType<FSetElementId> FVar35;
  ForElementType<FCollisionShape> FVar36;
  uint uVar37;
  int iVar38;
  longlong lVar39;
  ForElementType<int> *pFVar40;
  ULandscapeInfo *pUVar41;
  FScriptContainerElement *pFVar42;
  UPCGLandscapeData *pUVar43;
  FScriptContainerElement *pFVar44;
  uint uVar45;
  FCollisionShape *pFVar46;
  longlong lVar47;
  TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_> *pTVar48;
  ulonglong uVar49;
  longlong lVar50;
  uint uVar51;
  uint *puVar52;
  ulonglong uVar53;
  TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_> *pTVar54;
  FPCGPoint *this_00;
  ulonglong uVar55;
  UPCGLandscapeData *pUVar56;
  undefined1 auStackY_4a88 [32];
  char local_4a38;
  undefined1 local_4a37;
  undefined1 local_4a36 [2];
  undefined1 local_4a34 [12];
  ForAnyElementType local_4a28;
  int local_4a20;
  int iStack_4a1c;
  uint local_4a18;
  ULandscapeInfo *local_4a10;
  UPCGLandscapeData *local_4a08;
  int local_4a00;
  UPCGLandscapeData *local_49f8;
  longlong local_49f0;
  longlong local_49e8;
  FScriptContainerElement *local_49e0;
  int local_49d8;
  uchar local_49d4 [4];
  ForAnyElementType local_49d0;
  undefined8 local_49c8;
  int local_49c0 [2];
  FReadPhysicsObjectInterface<0> *local_49b8;
  TArrayView<FPCGPoint,int> *local_49b0;
  ulonglong local_49a8;
  TPairInitializer<ULandscapeInfo_const_*_const_&,UE::Math::TTransform<double>_&&> local_49a0;
  ulonglong *local_4990;
  FPhysicsObject *local_4988;
  FPhysicsObject *local_4980;
  longlong local_4978;
  longlong *local_4970;
  uint uStack_4968;
  uint uStack_4964;
  TBitArray<FDefaultBitArrayAllocator> *local_4960;
  uchar auStack_4958 [4];
  uint uStack_4954;
  uint local_4950;
  int iStack_4948;
  uchar auStack_4944 [4];
  longlong *local_4940;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4938;
  int aiStack_4918 [4];
  FPhysicsObject **local_4908;
  uchar auStack_4900 [8];
  FPhysicsObject **local_48f8;
  uchar auStack_48f0 [8];
  code *local_48e8;
  FReadPhysicsObjectInterface<0> ***local_48e0;
  ULandscapeInfo **local_48d8;
  uchar local_48d0 [8];
  FScriptContainerElement *local_48c8;
  int iStack_48c0;
  uchar auStack_48bc [4];
  FReadPhysicsObjectInterface<0> **local_48b8;
  char *local_48b0;
  TTransform<double> *local_48a8;
  FImplicitObject *local_48a0;
  uchar *local_4898;
  ForAnyElementType *local_4890;
  uchar local_4888 [16];
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_4878;
  TVector<double>_u_0 local_4868;
  FLockedPhysicsObjectExternalInterface<0> local_4850;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_4828;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_4818;
  TQuat<double> local_4808;
  double local_47e8;
  double dStack_47e0;
  double local_47d8;
  uchar local_47d0 [4];
  uchar auStack_47cc [4];
  uchar auStack_47c8 [4];
  uchar auStack_47c4 [4];
  uchar local_47c0 [36];
  uchar local_479c [4];
  undefined1 local_4798 [32];
  uint *local_4778;
  uint local_4770;
  undefined4 local_476c;
  undefined4 local_4768;
  int local_4764;
  undefined1 local_4760 [8];
  ForElementType<FSetElementId> local_4758;
  int local_4750;
  TSet<TTuple<ULandscapeInfo_const_*,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<ULandscapeInfo_const_*,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
  local_4748;
  TVector<double>_u_0 local_46f8;
  double local_46e0;
  double local_46d8;
  uchar local_46b8 [8];
  uchar auStack_46b0 [8];
  uchar local_46a8 [8];
  uchar auStack_46a0 [4];
  uchar auStack_469c [4];
  uchar local_4698 [4];
  uchar auStack_4694 [4];
  uchar auStack_4690 [4];
  uchar auStack_468c [4];
  uchar local_4688 [8];
  uchar auStack_4680 [16];
  uchar auStack_4670 [8];
  uchar local_4668 [8];
  uchar auStack_4660 [8];
  TTransform<double> local_4658;
  TTransform<double> local_45f8;
  ForElementType<unsigned_int> local_4598;
  uint local_4190;
  int local_418c;
  undefined1 local_4188 [96];
  TMatrix<double> local_4128;
  ForElementType<FCollisionShape> local_40a8;
  int local_30a0;
  int local_309c;
  ForElementType<FPhysicsShapeAdapter_Chaos> local_3098;
  int local_88;
  int local_84 [3];
  ulonglong local_78;
  
  dVar11 = __real_3fe0000000000000;
  dVar2 = __real_3ff0000000000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_4a88;
  uVar31 = param_1->ArrayNum;
  local_4798._0_8_ = 0;
  local_4798._8_8_ = 0;
  local_4778 = (uint *)0x0;
  local_4770 = 0;
  local_476c = 0x80;
  local_4768 = 0xffffffff;
  local_4764 = 0;
  local_4758 = (ForElementType<FSetElementId>)0x0;
  local_4750 = 0;
  local_4748.Elements._0_8_ = 0;
  local_4748.Elements._8_8_ = 0;
  local_4748.Elements._32_8_ = 0;
  local_4748.Elements._40_4_ = 0;
  local_4748.Elements._44_4_ = 0x80;
  local_4748.Elements._48_4_ = 0xffffffff;
  local_4748.Elements._52_4_ = 0;
  local_4748.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_4748.HashSize = 0;
  local_4a34._0_4_ = 0;
  local_4a34._4_8_ = param_1;
  local_4a08 = this;
  local_49b0 = param_2;
  if (0 < (int)uVar31) {
    do {
      uVar20 = local_4a34._0_4_;
      uVar51 = 0;
      if ((int)local_4a34._0_4_ < (int)uVar31) {
        uVar51 = (uint)~local_4a34._0_4_ >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar22)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar48 = param_1->DataPtr + (int)uVar20;
      local_4868._s_0.X = (double)*(undefined8 *)&pTVar48->field_0x20;
      local_4868._s_0.Y = (double)*(undefined8 *)(&pTVar48->field_0x20 + 8);
      local_4868._s_0.Z = (double)*(undefined8 *)(&pTVar48->field_0x20 + 0x10);
      local_4a10 = GetLandscapeInfo(this,(TVector<double> *)&local_4868._s_0);
      lVar39 = (longlong)(int)local_4a34._0_4_;
      uVar31 = 0;
      if ((int)local_4a34._0_4_ < param_2->ArrayNum) {
        uVar31 = (uint)~local_4a34._0_4_ >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar22)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      param_2->DataPtr[lVar39].Density = 0.0;
      if ((local_4a10 != (ULandscapeInfo *)0x0) &&
         (pAVar24 = ULandscapeInfo::GetLandscapeProxy(local_4a10), pAVar24 != (ALandscapeProxy *)0x0
         )) {
        uVar31 = ((uint)((ulonglong)local_4a10 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_4a10 >> 4)) * -0x7a143595;
        uVar31 = (uVar31 >> 0xd ^ uVar31) * -0x3d4d51cb;
        if (local_4748.Elements._8_4_ != local_4748.Elements._52_4_) {
          FVar35 = (ForElementType<FSetElementId>)&local_4748.Hash;
          if (local_4748.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar35 = local_4748.Hash.SecondaryData;
          }
          for (iVar38 = *(int *)((longlong)FVar35 +
                                (ulonglong)(local_4748.HashSize - 1U & (uVar31 >> 0x10 ^ uVar31)) *
                                4); iVar38 != -1;
              iVar38 = *(int *)((longlong)iVar38 * 0x80 + 0x70 + local_4748.Elements._0_8_)) {
            if (*(ULandscapeInfo **)((longlong)iVar38 * 0x80 + local_4748.Elements._0_8_) ==
                local_4a10) {
              if (iVar38 != -1) goto LAB_1498dd19e;
              break;
            }
          }
        }
        pAVar24 = ULandscapeInfo::GetLandscapeProxy(local_4a10);
        local_48d8 = &local_4a10;
        local_48d0 = (uchar  [8])
                     (**(code **)(pAVar24->_padding_ + 0x20))(&pAVar24->_padding_,local_4188);
        TSet<TTuple<ULandscapeInfo_const_*,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<ULandscapeInfo_const_*,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<ULandscapeInfo_const_*_const_&,UE::Math::TTransform<double>_&&>_>
                  (&local_4748,&local_49a0,(bool *)&local_48d8);
LAB_1498dd19e:
        pTVar25 = TMapBase<ULandscapeInfo_const_*,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeInfo_const_*,UE::Math::TTransform<double>,0>_>
                  ::FindChecked((TMapBase<ULandscapeInfo_const_*,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeInfo_const_*,UE::Math::TTransform<double>,0>_>
                                 *)&local_4748,local_4a10);
        UE::Math::TTransform<double>::GetRelativeTransform
                  ((TTransform<double> *)pTVar48,&local_4658,pTVar25);
        pTVar26 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_4658,&local_4128);
        UE::Math::TBox<double>::TransformBy
                  ((TBox<double> *)&pTVar48->field_0x60,(TBox<double> *)&local_46f8._s_0,pTVar26);
        dVar8 = dVar2 / (double)local_4a10->ComponentSizeQuads;
        dVar6 = dVar8 * local_46e0;
        uVar53 = (longlong)ROUND((dVar8 * local_46f8._s_0.Y + dVar8 * local_46f8._s_0.Y) - dVar11)
                 >> 1;
        dVar7 = dVar8 * local_46d8;
        uVar55 = (longlong)ROUND((dVar8 * local_46f8._s_0.X + dVar8 * local_46f8._s_0.X) - dVar11)
                 >> 1;
        uVar31 = (uint)uVar55;
        pUVar41 = local_4a10;
        this = local_4a08;
        param_2 = local_49b0;
        while (local_4a08 = this, local_49b0 = param_2,
              (int)uVar31 <= (int)((longlong)ROUND((dVar6 + dVar6) - dVar11) >> 1)) {
          uVar49 = uVar53 & 0xffffffff;
          iVar38 = (int)((longlong)ROUND((dVar7 + dVar7) - dVar11) >> 1);
          if ((int)uVar53 <= iVar38) {
            do {
              pTVar27 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                                *)&pUVar41->XYtoCollisionComponentMap,
                               (TIntPoint<int>)(uVar49 << 0x20 | uVar55 & 0xffffffff));
              if (pTVar27 ==
                  (TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *)0x0)
              {
                local_49a8 = 0;
              }
              else {
                local_49a8 = *(ulonglong *)&pTVar27->field_0x8;
                if (local_49a8 != 0) {
                  uVar31 = ((uint)(local_49a8 >> 0x14) & 0xffff ^ (uint)(local_49a8 >> 4)) *
                           -0x7a143595;
                  uVar31 = (uVar31 >> 0xd ^ uVar31) * -0x3d4d51cb;
                  uVar31 = uVar31 >> 0x10 ^ uVar31;
                  if (local_4798._8_4_ != local_4764) {
                    FVar35 = (ForElementType<FSetElementId>)local_4760;
                    if (local_4758 != (ForElementType<FSetElementId>)0x0) {
                      FVar35 = local_4758;
                    }
                    iVar23 = *(int *)((longlong)FVar35 + (ulonglong)(local_4750 - 1U & uVar31) * 4);
                    while (iVar23 != -1) {
                      puVar28 = (ulonglong *)((longlong)iVar23 * 0x420 + local_4798._0_8_);
                      if (*puVar28 == local_49a8) {
                        if (puVar28 != (ulonglong *)0x0) goto LAB_1498dd37d;
                        break;
                      }
                      iVar23 = (int)puVar28[0x83];
                    }
                  }
                  local_4990 = &local_49a8;
                  TSet<TTuple<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                  ::
                  EmplaceByHash<TKeyInitializer<ULandscapeHeightfieldCollisionComponent_*_const_&>_>
                            ((TSet<TTuple<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                              *)local_4798,(uint)local_49c0,
                             (TKeyInitializer<ULandscapeHeightfieldCollisionComponent_*_const_&> *)
                             (ulonglong)uVar31,(bool *)&local_4990);
                  puVar28 = (ulonglong *)((longlong)local_49c0[0] * 0x420 + local_4798._0_8_);
LAB_1498dd37d:
                  pFVar40 = (ForElementType<int> *)(puVar28 + 1);
                  pFVar32 = (ForElementType<int> *)puVar28[0x81];
                  if ((ForElementType<int> *)puVar28[0x81] == (ForElementType<int> *)0x0) {
                    pFVar32 = pFVar40;
                  }
                  if (((pFVar32 <= (ForElementType<int> *)local_4a34) &&
                      (local_4a34 <
                       pFVar32->InlineData + (longlong)*(int *)((longlong)puVar28 + 0x414) * 4)) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar22)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar23 = (int)puVar28[0x82];
                  if (iVar23 == *(int *)((longlong)puVar28 + 0x414)) {
                    iVar23 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                       (0x404,pFVar40,(int *)((longlong)puVar28 + 0x414));
                  }
                  *(int *)(puVar28 + 0x82) = iVar23 + 1;
                  if ((ForElementType<int> *)puVar28[0x81] != (ForElementType<int> *)0x0) {
                    pFVar40 = (ForElementType<int> *)puVar28[0x81];
                  }
                  *(undefined4 *)(pFVar40->InlineData + (longlong)iVar23 * 4) = local_4a34._0_4_;
                  pUVar41 = local_4a10;
                }
              }
              uVar31 = (int)uVar49 + 1;
              uVar49 = (ulonglong)uVar31;
            } while ((int)uVar31 <= iVar38);
          }
          uVar31 = (int)uVar55 + 1;
          uVar55 = (ulonglong)uVar31;
          param_1 = (TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_const_,int>
                     *)local_4a34._4_8_;
          this = local_4a08;
          param_2 = local_49b0;
        }
      }
      uVar31 = param_1->ArrayNum;
      local_4a34._0_4_ = local_4a34._0_4_ + 1;
    } while ((int)local_4a34._0_4_ < (int)uVar31);
  }
  if (local_4798._8_4_ != local_4764) {
    local_40a8.SecondaryData = (ForElementType<FCollisionShape>)0x0;
    uVar37 = uVar31 + 0x1f >> 5;
    uVar51 = 0;
    local_30a0 = 0;
    local_309c = 0x100;
    local_3098.SecondaryData = (ForElementType<FPhysicsShapeAdapter_Chaos>)0x0;
    local_88 = 0;
    local_84[0] = 0x100;
    local_4598.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_418c = 0x2000;
    local_4190 = uVar31;
    if (uVar31 + 0x1f >> 5 != 0) {
      if (0x100 < uVar37) {
        TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_4598,0,uVar37,4);
        local_418c = uVar37 << 5;
      }
      FVar29 = (ForElementType<unsigned_int>)&local_4598;
      if (local_4598.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_4598.SecondaryData;
      }
      memset((void *)FVar29,0,(ulonglong)uVar37 << 2);
      uVar31 = local_4190 & 0x8000001f;
      if ((int)uVar31 < 0) {
        uVar31 = (uVar31 - 1 | 0xffffffe0) + 1;
      }
      if (uVar31 != 0) {
        FVar29 = (ForElementType<unsigned_int>)&local_4598;
        if (local_4598.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar29 = local_4598.SecondaryData;
        }
        puVar52 = (uint *)((longlong)FVar29 +
                          (longlong)((int)(local_4190 + ((int)local_4190 >> 0x1f & 0x1fU)) >> 5) * 4
                          );
        *puVar52 = *puVar52 & 0xffffffffU >> (0x20U - (char)uVar31 & 0x1f);
      }
    }
    uVar31 = param_1->ArrayNum;
    if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
    }
    if (local_309c < (int)uVar31) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FCollisionShape>_>
                (0x10,4,uVar31,&local_40a8,local_30a0,&local_309c);
    }
    pTVar48 = param_1->DataPtr;
    uVar37 = 1;
    pTVar54 = pTVar48 + param_1->ArrayNum;
    uVar31 = local_4770;
    for (; local_4770 = uVar31, pTVar48 != pTVar54; pTVar48 = pTVar48 + 1) {
      if (local_30a0 == local_309c) {
        local_30a0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FCollisionShape>_>
                               (0x410,&local_40a8,&local_309c);
      }
      FVar36 = (ForElementType<FCollisionShape>)&local_40a8;
      if (local_40a8.SecondaryData != (ForElementType<FCollisionShape>)0x0) {
        FVar36 = local_40a8.SecondaryData;
      }
      pFVar46 = (FCollisionShape *)((longlong)local_30a0 * 0x10 + (longlong)FVar36);
      pFVar46->ShapeType = Line;
      dVar2 = *(double *)&pTVar48->field_0x78;
      dVar6 = *(double *)&pTVar48->field_0x60;
      local_47e8 = *(double *)&pTVar48->field_0x40;
      dStack_47e0 = *(double *)&pTVar48->field_0x48;
      dVar7 = *(double *)&pTVar48->field_0x80;
      dVar8 = *(double *)&pTVar48->field_0x68;
      local_47d8 = *(double *)&pTVar48->field_0x50;
      dVar3 = *(double *)&pTVar48->field_0x88;
      dVar4 = *(double *)&pTVar48->field_0x70;
      pFVar46->ShapeType = Box;
      (pFVar46->field1_0x4).Box.HalfExtentX = (float)((dVar2 - dVar6) * dVar11 * local_47e8);
      (pFVar46->field1_0x4).Box.HalfExtentY = (float)((dVar7 - dVar8) * dVar11 * dStack_47e0);
      local_30a0 = local_30a0 + 1;
      (pFVar46->field1_0x4).Box.HalfExtentZ = (float)((dVar3 - dVar4) * dVar11 * local_47d8);
      local_4808.X = *(double *)pTVar48;
      local_4808.Y = *(double *)&pTVar48->field_0x8;
      local_4808.Z = *(double *)&pTVar48->field_0x10;
      local_4808.W = *(double *)&pTVar48->field_0x18;
      if (local_88 == local_84[0]) {
        local_88 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FPhysicsShapeAdapter_Chaos>_>
                             (0x1030,&local_3098,local_84);
      }
      lVar39 = (longlong)local_88;
      FVar34 = (ForElementType<FPhysicsShapeAdapter_Chaos>)&local_3098;
      if (local_3098.SecondaryData != (ForElementType<FPhysicsShapeAdapter_Chaos>)0x0) {
        FVar34 = local_3098.SecondaryData;
      }
      local_88 = local_88 + 1;
      FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
                ((FPhysicsShapeAdapter_Chaos *)(lVar39 * 0x30 + (longlong)FVar34),&local_4808,
                 pFVar46);
      uVar31 = local_4770;
    }
    local_49d0.Data = (FScriptContainerElement *)0x0;
    local_49c8 = 0;
    local_4950 = 0;
    uStack_4964 = 1;
    uStack_4954 = local_4950;
    if (uVar31 != 0) {
      puVar52 = (uint *)(local_4798 + 0x10);
      if (local_4778 != (uint *)0x0) {
        puVar52 = local_4778;
      }
      uStack_4964 = *puVar52;
      local_4950 = 0;
      uVar51 = 0;
      while (uStack_4964 == 0) {
        lVar39 = (longlong)(int)uVar51;
        local_4950 = local_4950 + 0x20;
        uVar51 = uVar51 + 1;
        uStack_4964 = 1;
        uStack_4954 = uVar31;
        if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar51)
        goto LAB_1498dd813;
        uStack_4964 = puVar52[lVar39 + 1];
      }
      uStack_4964 = -uStack_4964 & uStack_4964;
      uVar55 = (ulonglong)uStack_4964 * 2 + 1;
      lVar39 = 0x3f;
      if (uVar55 != 0) {
        for (; uVar55 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      local_49a0.Key._4_4_ = (int)lVar39;
      uStack_4954 = local_49a0.Key._4_4_ + -1 + local_4950;
      if ((int)uVar31 < (int)uStack_4954) {
        uStack_4954 = uVar31;
      }
    }
LAB_1498dd813:
    local_4970 = (longlong *)local_4798;
    local_4960 = (TBitArray<FDefaultBitArrayAllocator> *)(local_4798 + 0x10);
    uVar45 = uVar31 & 0xffffffe0;
    iStack_4948 = local_4798._8_4_ - local_4764;
    auStack_4958[0] = 0xff;
    auStack_4958[1] = 0xff;
    auStack_4958[2] = 0xff;
    auStack_4958[3] = 0xff;
    TStack_4938.CurrentBitIndex = uStack_4954;
    TStack_4938.UnvisitedBitMask = 0xffffffff;
    TStack_4938._padding_ = CONCAT44(uStack_4964,uVar51);
    iVar38 = (int)uVar31 >> 5;
    TStack_4938._28_1_ = local_479c[0];
    TStack_4938._29_1_ = local_479c[1];
    TStack_4938._30_1_ = local_479c[2];
    TStack_4938._31_1_ = local_479c[3];
    TStack_4938.BaseBitIndex = local_4950;
    aiStack_4918[1]._0_1_ = auStack_4944[0];
    aiStack_4918[1]._1_1_ = auStack_4944[1];
    aiStack_4918[1]._2_1_ = auStack_4944[2];
    aiStack_4918[1]._3_1_ = auStack_4944[3];
    aiStack_4918[0] = iStack_4948;
    local_4a18 = uVar31;
    uStack_4968 = uVar51;
    local_4940 = local_4970;
    TStack_4938.Array = local_4960;
    if (((int)uVar31 < 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar22)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar18 = _UNK_150689688;
    uVar16 = ___xmm_3ff00000000000003ff0000000000000;
    uVar14 = _UNK_150689518;
    uVar12 = ___xmm_00000000000000003ff0000000000000;
    if (uVar31 != local_4770) {
      puVar52 = (uint *)(local_4798 + 0x10);
      if (local_4778 != (uint *)0x0) {
        puVar52 = local_4778;
      }
      uVar31 = -1 << ((byte)uVar31 & 0x1f) & puVar52[iVar38];
      while (uVar31 == 0) {
        lVar39 = (longlong)iVar38;
        uVar45 = uVar45 + 0x20;
        iVar38 = iVar38 + 1;
        local_4a18 = local_4770;
        uVar31 = local_4770;
        if ((int)((local_4770 - 1) + ((int)(local_4770 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar38)
        goto LAB_1498dd950;
        uVar31 = puVar52[lVar39 + 1];
      }
      uVar55 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
      lVar39 = 0x3f;
      if (uVar55 != 0) {
        for (; uVar55 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      local_49a0.Value._0_4_ = (int)lVar39;
      local_4a18 = (int)local_49a0.Value + -1 + uVar45;
      uVar31 = local_4a18;
      if ((int)local_4770 < (int)local_4a18) {
        local_4a18 = local_4770;
        uVar31 = local_4770;
      }
    }
LAB_1498dd950:
    while( true ) {
      plVar33 = local_4940;
      uVar55 = 0;
      if ((int)local_4940[1] - *(int *)((longlong)local_4940 + 0x34) != aiStack_4918[0]) {
        local_4a37 = 0;
        `TSparseArray<TSparseSetElement<TTuple<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4a37);
      }
      fVar10 = __real_3f800000;
      if (((TStack_4938.CurrentBitIndex == uVar31) &&
          (TStack_4938.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_4798 + 0x10))) &&
         (plVar33 == (longlong *)local_4798)) break;
      lVar39 = *plVar33;
      lVar47 = (longlong)TStack_4938.CurrentBitIndex * 0x420;
      pUVar56 = (UPCGLandscapeData *)(lVar39 + 8 + lVar47);
      plVar33 = (longlong *)(*(longlong *)(lVar47 + lVar39) + 0x260);
      local_4a08 = pUVar56;
      local_49f0 = lVar47;
      local_49e8 = lVar39;
      (**(code **)(*plVar33 + 0x20))(plVar33,&local_49e0);
      iVar38 = local_49d8;
      local_48c8 = local_49e0;
      if ((local_49d8 < 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar22)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iStack_48c0 = iVar38;
      local_4828._12_1_ = auStack_48bc[0];
      local_4828._13_1_ = auStack_48bc[1];
      local_4828._14_1_ = auStack_48bc[2];
      local_4828._15_1_ = auStack_48bc[3];
      local_4828.ArrayNum = iVar38;
      local_4828.DataPtr = (FPhysicsObject **)local_48c8;
      FPhysicsObjectExternalInterface::LockRead(&local_4850,&local_4828);
      local_4a28.Data = (FScriptContainerElement *)0x0;
      local_4a20._0_1_ = '\0';
      local_4a20._1_1_ = '\0';
      local_4a20._2_1_ = '\0';
      local_4a20._3_1_ = '\0';
      iStack_4a1c._0_1_ = '\0';
      iStack_4a1c._1_1_ = '\0';
      iStack_4a1c._2_1_ = '\0';
      iStack_4a1c._3_1_ = '\0';
      pFVar44 = local_49e0 + (longlong)local_49d8 * 8;
      for (pFVar42 = local_49e0; pFVar42 != pFVar44; pFVar42 = pFVar42 + 8) {
        local_4988 = *(FPhysicsObject **)pFVar42;
        auStack_4900[0] = '\x01';
        auStack_4900[1] = '\0';
        auStack_4900[2] = '\0';
        auStack_4900[3] = '\0';
        local_4818._12_1_ = (uchar)auStack_4900._4_4_;
        local_4818._13_1_ = SUB41(auStack_4900._4_4_,1);
        local_4818._14_1_ = SUB41(auStack_4900._4_4_,2);
        local_4818._15_1_ = SUB41(auStack_4900._4_4_,3);
        local_4818.ArrayNum = 1;
        local_4908 = &local_4988;
        local_4818.DataPtr = &local_4988;
        bVar22 = Chaos::FReadPhysicsObjectInterface<0>::AreAllDisabled
                           (&local_4850.Interface,&local_4818);
        if (!bVar22) {
          if (((local_4a28.Data <= pFVar42) &&
              (pFVar42 < local_4a28.Data + (longlong)iStack_4a1c * 8)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar38 = local_4a20;
          if (local_4a20 == iStack_4a1c) {
            iVar38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_4a28,&iStack_4a1c);
          }
          local_4a20 = iVar38 + 1;
          *(undefined8 *)(local_4a28.Data + (longlong)iVar38 * 8) = *(undefined8 *)pFVar42;
        }
      }
      if (local_49e0 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_49e0);
      }
      pUVar43 = *(UPCGLandscapeData **)(lVar47 + 0x408 + lVar39);
      local_49e0 = local_4a28.Data;
      local_49d8 = local_4a20;
      local_49d4[0] = (uchar)iStack_4a1c;
      local_49d4[1] = iStack_4a1c._1_1_;
      local_49d4[2] = iStack_4a1c._2_1_;
      local_49d4[3] = iStack_4a1c._3_1_;
      local_49b8 = &local_4850.Interface;
      local_4a00 = *(int *)(lVar47 + 0x410 + lVar39);
      local_4a28.Data = (FScriptContainerElement *)0x0;
      local_4a20._0_1_ = '\0';
      local_4a20._1_1_ = '\0';
      local_4a20._2_1_ = '\0';
      local_4a20._3_1_ = '\0';
      iStack_4a1c._0_1_ = '\0';
      iStack_4a1c._1_1_ = '\0';
      iStack_4a1c._2_1_ = '\0';
      iStack_4a1c._3_1_ = '\0';
      if (pUVar43 != (UPCGLandscapeData *)0x0) {
        pUVar56 = pUVar43;
        local_4a08 = pUVar43;
      }
      local_49f8 = (UPCGLandscapeData *)((longlong)&pUVar56->_padding_ + (longlong)local_4a00 * 4);
      pUVar43 = local_49f8;
      while( true ) {
        if (*(int *)(lVar47 + 0x410 + lVar39) != local_4a00) {
          local_4a36[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_4a36);
        }
        if (pUVar56 == pUVar43) break;
        uVar31 = (uint)pUVar56->_padding_;
        lVar50 = (longlong)(int)uVar31;
        if ((((int)uVar31 < 0) || ((int)local_4190 <= (int)uVar31)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar29 = (ForElementType<unsigned_int>)&local_4598;
        if (local_4598.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar29 = local_4598.SecondaryData;
        }
        uVar51 = uVar31;
        if ((int)uVar31 < 0) {
          uVar51 = uVar31 + 0x1f;
        }
        local_4978 = (longlong)((int)uVar51 >> 5);
        uVar51 = 1 << ((byte)uVar31 & 0x1f);
        if ((*(uint *)((longlong)FVar29 + local_4978 * 4) & uVar51) == 0) {
          uVar45 = 0;
          if ((int)uVar31 < local_88) {
            uVar45 = ~uVar31 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar34 = (ForElementType<FPhysicsShapeAdapter_Chaos>)&local_3098;
          if (local_3098.SecondaryData != (ForElementType<FPhysicsShapeAdapter_Chaos>)0x0) {
            FVar34 = local_3098.SecondaryData;
          }
          pFVar30 = FPhysicsShapeAdapter_Chaos::GetGeometry
                              ((FPhysicsShapeAdapter_Chaos *)(lVar50 * 0x30 + (longlong)FVar34));
          uVar45 = 0;
          if ((int)uVar31 < *(int *)(local_4a34._4_8_ + 8)) {
            uVar45 = ~uVar31 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar44 = local_49e0;
          uVar19 = _UNK_150689688;
          uVar17 = ___xmm_3ff00000000000003ff0000000000000;
          uVar15 = _UNK_150689518;
          uVar13 = ___xmm_00000000000000003ff0000000000000;
          lVar39 = (longlong)local_49d8;
          pTVar54 = *(TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_> **)
                     local_4a34._4_8_;
          __xmm_3ff00000000000003ff0000000000000 = (uchar)uVar16;
          UNK_150689681 = SUB81(uVar16,1);
          UNK_150689682 = SUB81(uVar16,2);
          UNK_150689683 = SUB81(uVar16,3);
          UNK_150689684 = SUB81(uVar16,4);
          UNK_150689685 = SUB81(uVar16,5);
          UNK_150689686 = SUB81(uVar16,6);
          UNK_150689687 = SUB81(uVar16,7);
          auStack_4680[8] = __xmm_3ff00000000000003ff0000000000000;
          auStack_4680[9] = UNK_150689681;
          auStack_4680[10] = UNK_150689682;
          auStack_4680[0xb] = UNK_150689683;
          auStack_4680[0xc] = UNK_150689684;
          auStack_4680[0xd] = UNK_150689685;
          auStack_4680[0xe] = UNK_150689686;
          auStack_4680[0xf] = UNK_150689687;
          UNK_150689688 = (uchar)uVar18;
          UNK_150689689 = SUB81(uVar18,1);
          UNK_15068968a = SUB81(uVar18,2);
          UNK_15068968b = SUB81(uVar18,3);
          UNK_15068968c = SUB81(uVar18,4);
          UNK_15068968d = SUB81(uVar18,5);
          UNK_15068968e = SUB81(uVar18,6);
          UNK_15068968f = SUB81(uVar18,7);
          auStack_4670[0] = UNK_150689688;
          auStack_4670[1] = UNK_150689689;
          auStack_4670[2] = UNK_15068968a;
          auStack_4670[3] = UNK_15068968b;
          auStack_4670[4] = UNK_15068968c;
          auStack_4670[5] = UNK_15068968d;
          auStack_4670[6] = UNK_15068968e;
          auStack_4670[7] = UNK_15068968f;
          __xmm_00000000000000003ff0000000000000 = (uchar)uVar12;
          UNK_150689511 = SUB81(uVar12,1);
          UNK_150689512 = SUB81(uVar12,2);
          UNK_150689513 = SUB81(uVar12,3);
          UNK_150689514 = SUB81(uVar12,4);
          UNK_150689515 = SUB81(uVar12,5);
          UNK_150689516 = SUB81(uVar12,6);
          UNK_150689517 = SUB81(uVar12,7);
          local_4668[0] = __xmm_00000000000000003ff0000000000000;
          local_4668[1] = UNK_150689511;
          local_4668[2] = UNK_150689512;
          local_4668[3] = UNK_150689513;
          local_4668[4] = UNK_150689514;
          local_4668[5] = UNK_150689515;
          local_4668[6] = UNK_150689516;
          local_4668[7] = UNK_150689517;
          UNK_150689518 = (uchar)uVar14;
          UNK_150689519 = SUB81(uVar14,1);
          UNK_15068951a = SUB81(uVar14,2);
          UNK_15068951b = SUB81(uVar14,3);
          UNK_15068951c = SUB81(uVar14,4);
          UNK_15068951d = SUB81(uVar14,5);
          UNK_15068951e = SUB81(uVar14,6);
          UNK_15068951f = SUB81(uVar14,7);
          auStack_4660[0] = UNK_150689518;
          auStack_4660[1] = UNK_150689519;
          auStack_4660[2] = UNK_15068951a;
          auStack_4660[3] = UNK_15068951b;
          auStack_4660[4] = UNK_15068951c;
          auStack_4660[5] = UNK_15068951d;
          auStack_4660[6] = UNK_15068951e;
          auStack_4660[7] = UNK_15068951f;
          pTVar48 = pTVar54 + lVar50;
          puVar1 = &pTVar48->field_0x20;
          local_47d0[0] = pTVar48->field_0x20;
          local_47d0[1] = pTVar48->field_0x21;
          local_47d0[2] = pTVar48->field_0x22;
          local_47d0[3] = pTVar48->field_0x23;
          auStack_47cc = *(uchar (*) [4])(puVar1 + 4);
          auStack_47c8 = *(uchar (*) [4])(puVar1 + 8);
          auStack_47c4 = *(uchar (*) [4])(puVar1 + 0xc);
          pTVar9 = pTVar54 + lVar50;
          pTVar48 = pTVar54 + lVar50;
          pTVar54 = pTVar54 + lVar50;
          local_47c0[0] = pTVar54->field_0x30;
          local_47c0[1] = pTVar54->field_0x31;
          local_47c0[2] = pTVar54->field_0x32;
          local_47c0[3] = pTVar54->field_0x33;
          local_47c0[4] = pTVar54->field_0x34;
          local_47c0[5] = pTVar54->field_0x35;
          local_47c0[6] = pTVar54->field_0x36;
          local_47c0[7] = pTVar54->field_0x37;
          local_46a8[0] = pTVar9->field_0x10;
          local_46a8[1] = pTVar9->field_0x11;
          local_46a8[2] = pTVar9->field_0x12;
          local_46a8[3] = pTVar9->field_0x13;
          local_46a8[4] = pTVar9->field_0x14;
          local_46a8[5] = pTVar9->field_0x15;
          local_46a8[6] = pTVar9->field_0x16;
          local_46a8[7] = pTVar9->field_0x17;
          auStack_46a0 = (uchar  [4])*(undefined4 *)(&pTVar9->field_0x10 + 8);
          auStack_469c = (uchar  [4])*(undefined4 *)(&pTVar9->field_0x10 + 0xc);
          local_46b8[0] = pTVar48->field_0x0;
          local_46b8[1] = pTVar48->field_0x1;
          local_46b8[2] = pTVar48->field_0x2;
          local_46b8[3] = pTVar48->field_0x3;
          local_46b8[4] = pTVar48->field_0x4;
          local_46b8[5] = pTVar48->field_0x5;
          local_46b8[6] = pTVar48->field_0x6;
          local_46b8[7] = pTVar48->field_0x7;
          auStack_46b0[0] = pTVar48->field_0x8;
          auStack_46b0[1] = pTVar48->field_0x9;
          auStack_46b0[2] = pTVar48->field_0xa;
          auStack_46b0[3] = pTVar48->field_0xb;
          auStack_46b0[4] = pTVar48->field_0xc;
          auStack_46b0[5] = pTVar48->field_0xd;
          auStack_46b0[6] = pTVar48->field_0xe;
          auStack_46b0[7] = pTVar48->field_0xf;
          local_4698[0] = local_47d0[0];
          local_4698[1] = local_47d0[1];
          local_4698[2] = local_47d0[2];
          local_4698[3] = local_47d0[3];
          auStack_4694[0] = auStack_47cc[0];
          auStack_4694[1] = auStack_47cc[1];
          auStack_4694[2] = auStack_47cc[2];
          auStack_4694[3] = auStack_47cc[3];
          auStack_4690[0] = auStack_47c8[0];
          auStack_4690[1] = auStack_47c8[1];
          auStack_4690[2] = auStack_47c8[2];
          auStack_4690[3] = auStack_47c8[3];
          auStack_468c[0] = auStack_47c4[0];
          auStack_468c[1] = auStack_47c4[1];
          auStack_468c[2] = auStack_47c4[2];
          auStack_468c[3] = auStack_47c4[3];
          local_4688[0] = local_47c0[0];
          local_4688[1] = local_47c0[1];
          local_4688[2] = local_47c0[2];
          local_4688[3] = local_47c0[3];
          local_4688[4] = local_47c0[4];
          local_4688[5] = local_47c0[5];
          local_4688[6] = local_47c0[6];
          local_4688[7] = local_47c0[7];
          auStack_4680[0] = '\0';
          auStack_4680[1] = '\0';
          auStack_4680[2] = '\0';
          auStack_4680[3] = '\0';
          auStack_4680[4] = '\0';
          auStack_4680[5] = '\0';
          auStack_4680[6] = '\0';
          auStack_4680[7] = '\0';
          ___xmm_00000000000000003ff0000000000000 = uVar13;
          _UNK_150689518 = uVar15;
          ___xmm_3ff00000000000003ff0000000000000 = uVar17;
          _UNK_150689688 = uVar19;
          if ((local_49d8 < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar42 = pFVar44 + lVar39 * 8;
          local_4a38 = '\0';
          pUVar43 = local_49f8;
          lVar47 = local_49f0;
          lVar39 = local_49e8;
          if (pFVar44 == pFVar42) goto LAB_1498ddf61;
          do {
            local_4980 = *(FPhysicsObject **)pFVar44;
            Chaos::FReadPhysicsObjectInterface<0>::GetTransform(local_49b8,&local_45f8,local_4980);
            local_48b8 = &local_49b8;
            local_48b0 = &local_4a38;
            auStack_48f0[0] = '\x01';
            auStack_48f0[1] = '\0';
            auStack_48f0[2] = '\0';
            auStack_48f0[3] = '\0';
            local_48a8 = &local_45f8;
            local_4898 = local_46b8;
            local_4890 = &local_49d0;
            local_48e0 = &local_48b8;
            local_48f8 = &local_4980;
            local_4878._12_1_ = auStack_48f0[4];
            local_4878._13_1_ = auStack_48f0[5];
            local_4878._14_1_ = auStack_48f0[6];
            local_4878._15_1_ = auStack_48f0[7];
            local_4878.ArrayNum = 1;
            local_4888[0] = '\0';
            local_4888[1] = '\0';
            local_4888[2] = '\0';
            local_4888[3] = '\0';
            local_4888[4] = '\0';
            local_4888[5] = '\0';
            local_4888[6] = '\0';
            local_4888[7] = '\0';
            local_48e8 = UE::Core::Private::Function::
                         TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<0>::ShapeOverlapWithMTD<ChaosInterface::FOverlapHit>'::__l6::<lambda_1>,bool,Chaos::FPhysicsObject_const_*,Chaos::FShapeInstanceProxy_*>
                         ::Call;
            local_48a0 = pFVar30;
            local_4878.DataPtr = local_48f8;
            Chaos::FReadPhysicsObjectInterface<0>::VisitEveryShape
                      (local_49b8,&local_4878,
                       (TFunctionRef<bool___cdecl(Chaos::FPhysicsObject_const_*,Chaos::FShapeInstanceProxy_*)>
                        *)&local_48e8);
            lVar50 = local_4978;
            pFVar44 = pFVar44 + 8;
          } while (pFVar44 != pFVar42);
          pUVar43 = local_49f8;
          lVar47 = local_49f0;
          lVar39 = local_49e8;
          if (local_4a38 == '\0') goto LAB_1498ddf61;
          if ((int)local_49c8 != 0) {
            if ((((int)uVar31 < 0) || ((int)local_4190 <= (int)uVar31)) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar22)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar29 = (ForElementType<unsigned_int>)&local_4598;
            if (local_4598.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar29 = local_4598.SecondaryData;
            }
            puVar52 = (uint *)((longlong)FVar29 + lVar50 * 4);
            *puVar52 = *puVar52 | uVar51;
          }
          lVar39 = local_49c8;
          uVar31 = local_49c8._4_4_;
          local_49c8 = (ulonglong)local_49c8._4_4_ << 0x20;
          if ((lVar39 < 0) && (uVar31 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,0,&local_49d0,0,(int *)((longlong)&local_49c8 + 4));
            pUVar56 = (UPCGLandscapeData *)((longlong)&local_4a08->_padding_ + 4);
            pUVar43 = local_49f8;
            lVar47 = local_49f0;
            lVar39 = local_49e8;
            local_4a08 = pUVar56;
          }
          else {
            pUVar56 = (UPCGLandscapeData *)((longlong)&local_4a08->_padding_ + 4);
            pUVar43 = local_49f8;
            lVar47 = local_49f0;
            lVar39 = local_49e8;
            local_4a08 = pUVar56;
          }
        }
        else {
LAB_1498ddf61:
          pUVar56 = (UPCGLandscapeData *)((longlong)&local_4a08->_padding_ + 4);
          local_4a08 = pUVar56;
        }
      }
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_4850.Lock);
      if (local_49e0 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_49e0);
      }
      TStack_4938.UnvisitedBitMask = TStack_4938.UnvisitedBitMask & ~TStack_4938._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4938);
      uVar31 = local_4a18;
    }
    uVar53 = uVar55;
    uVar49 = uVar55;
    if (0 < *(int *)(local_4a34._4_8_ + 8)) {
      do {
        pTVar21 = local_49b0;
        uVar51 = (uint)uVar55;
        uVar45 = ~uVar51 >> 0x1f;
        uVar31 = 0;
        if ((int)uVar51 < local_49b0->ArrayNum) {
          uVar31 = uVar45;
        }
        if ((uVar31 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = (FPCGPoint *)
                  ((longlong)(pTVar21->DataPtr->Transform).Rotation.XY.m128d_f64 + uVar49);
        if ((((int)uVar51 < 0) || ((int)local_4190 <= (int)uVar51)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar29 = (ForElementType<unsigned_int>)&local_4598;
        if (local_4598.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar29 = local_4598.SecondaryData;
        }
        uVar31 = uVar51;
        if ((int)uVar51 < 0) {
          uVar31 = uVar51 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar29 + (longlong)((int)uVar31 >> 5) * 4) & uVar37) != 0) {
          uVar31 = 0;
          if ((int)uVar51 < *(int *)(local_4a34._4_8_ + 8)) {
            uVar31 = uVar45;
          }
          if ((uVar31 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FPCGPoint::FPCGPoint
                    (this_00,(TTransform<double> *)
                             (&(*(TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_> **)
                                 local_4a34._4_8_)->field_0x0 + uVar53),fVar10,0);
          uVar31 = 0;
          if ((int)uVar51 < *(int *)(local_4a34._4_8_ + 8)) {
            uVar31 = uVar45;
          }
          if ((uVar31 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar48 = *(TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_> **)
                     local_4a34._4_8_;
          dVar2 = *(double *)((longlong)(&pTVar48->field_0x60 + uVar53) + 8);
          (this_00->BoundsMin).field0_0x0._s_0.X = *(double *)(&pTVar48->field_0x60 + uVar53);
          (this_00->BoundsMin).field0_0x0._s_0.Y = dVar2;
          (this_00->BoundsMin).field0_0x0._s_0.Z = *(double *)(&pTVar48->field_0x70 + uVar53);
          dVar2 = *(double *)((longlong)(&pTVar48->field_0x78 + uVar53) + 8);
          (this_00->BoundsMax).field0_0x0._s_0.X = *(double *)(&pTVar48->field_0x78 + uVar53);
          (this_00->BoundsMax).field0_0x0._s_0.Y = dVar2;
          (this_00->BoundsMax).field0_0x0._s_0.Z = *(double *)(&pTVar48->field_0x88 + uVar53);
        }
        uVar55 = (ulonglong)(uVar51 + 1);
        uVar37 = uVar37 << 1 | (uint)((int)uVar37 < 0);
        uVar53 = uVar53 + 0xa0;
        uVar49 = uVar49 + 0xd0;
      } while ((int)(uVar51 + 1) < *(int *)(local_4a34._4_8_ + 8));
    }
    if (local_49d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_49d0.Data);
    }
    if (local_4598.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_4598.SecondaryData);
    }
    FVar34 = (ForElementType<FPhysicsShapeAdapter_Chaos>)&local_3098;
    if (local_3098.SecondaryData != (ForElementType<FPhysicsShapeAdapter_Chaos>)0x0) {
      FVar34 = local_3098.SecondaryData;
    }
    DestructItems<FPhysicsShapeAdapter_Chaos,int>((FPhysicsShapeAdapter_Chaos *)FVar34,local_88);
    if (local_3098.SecondaryData != (ForElementType<FPhysicsShapeAdapter_Chaos>)0x0) {
      FMemory::Free((void *)local_3098.SecondaryData);
    }
    if (local_40a8.SecondaryData != (ForElementType<FCollisionShape>)0x0) {
      FMemory::Free((void *)local_40a8.SecondaryData);
    }
  }
  local_4748.HashSize = 0;
  if (local_4748.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4748.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<ULandscapeInfo_const_*,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULandscapeInfo_const_*,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_4748.Elements);
  local_4750 = 0;
  if (local_4758 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4758);
  }
  TSparseArray<TSparseSetElement<TTuple<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_4798);
  return;
}

// StaticRegisterNativesUPCGLandscapeData @ 1498f6910

void __cdecl UPCGLandscapeData::StaticRegisterNativesUPCGLandscapeData(void)

{
  return;
}

// SupportsBoundedPointData @ 1498f6c60

bool __thiscall UPCGLandscapeData::SupportsBoundedPointData(UPCGLandscapeData *this)

{
  return true;
}

// UseMetadata @ 1498f9c10

bool __thiscall UPCGLandscapeData::UseMetadata(UPCGLandscapeData *this)

{
  if (((((this->DataProps).bGetActorReference == false) &&
       ((this->DataProps).bGetComponentCoordinates == false)) &&
      ((this->DataProps).bGetLayerWeights == false)) &&
     ((this->DataProps).bGetPhysicalMaterial == false)) {
    return false;
  }
  return true;
}

