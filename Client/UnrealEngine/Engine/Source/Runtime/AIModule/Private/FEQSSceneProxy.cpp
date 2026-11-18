// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// FEQSSceneProxy @ 146f28ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FEQSSceneProxy * __thiscall
FEQSSceneProxy::FEQSSceneProxy
          (FEQSSceneProxy *this,UPrimitiveComponent *param_1,FString *param_2,
          TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *param_4)

{
  AActor *this_00;
  int iVar1;
  uint uVar2;
  UClass *pUVar3;
  IEQSQueryResultSourceInterface *pIVar4;
  wchar_t *pwVar5;
  TArray<EQSDebug::FDebugHelper,TSizedDefaultAllocator<32>_> local_28;
  
  FDebugRenderSceneProxy::FDebugRenderSceneProxy((FDebugRenderSceneProxy *)this,param_1);
  *(undefined ***)this = &___7FEQSSceneProxy__6B_;
  (this->QueryResult).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryResult).Items.ArrayNum = 0;
  (this->QueryResult).Items.ArrayMax = 0;
  (this->QueryResult).ItemType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->QueryResult).RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryResult).RawData.ArrayNum = 0;
  (this->QueryResult).RawData.ArrayMax = 0;
  (this->QueryResult).Status = Processing;
  (this->QueryResult).OptionIndex = 0;
  (this->QueryResult).QueryID = 0;
  (this->QueryResult).Owner.WeakPtr.ObjectIndex = 0;
  (this->QueryResult).Owner.WeakPtr.ObjectSerialNumber = 0;
  this->ActorOwner = (AActor *)0x0;
  this->QueryDataSource = (IEQSQueryResultSourceInterface *)0x0;
  *(undefined4 *)&this->field_0x388 = 2;
  *(undefined4 *)&this->field_0x354 = 0x44bb8000;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar1 = FEngineShowFlags::FindIndexByName(pwVar5,(wchar_t *)0x0);
  *(int *)&this->field_0x350 = iVar1;
  ::FString::operator=((FString *)&this->field_0x358,param_2);
  this->field_0x84 = this->field_0x84 & 0xfe;
  TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> *)
             &this->field_0x2f0,param_3);
  TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *)
             &this->field_0x300,param_4);
  if (param_1 == (UPrimitiveComponent *)0x0) {
LAB_146f28cbe:
    uVar2 = 0;
  }
  else {
    pUVar3 = UEQSRenderingComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar3->_padding_)) || (uVar2 = 1, (param_1[1].field_0x70 & 1) == 0)) goto LAB_146f28cbe;
  }
  this->bDrawOnlyWhenSelected = 0;
  *(uint *)&this->field_0x3f0 = *(uint *)&this->field_0x3f0 | uVar2;
  this_00 = *(AActor **)&param_1->field_0xa8;
  this->ActorOwner = this_00;
  if (this_00 == (AActor *)0x0) {
    this->QueryDataSource = (IEQSQueryResultSourceInterface *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar3);
    this->QueryDataSource = pIVar4;
    if (pIVar4 != (IEQSQueryResultSourceInterface *)0x0) goto LAB_146f28d1d;
  }
  pUVar3 = Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
  pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar3);
  this->QueryDataSource = pIVar4;
LAB_146f28d1d:
  if (((*(int *)&this->field_0x2f8 == 0) && (*(int *)&this->field_0x308 == 0)) &&
     (pIVar4 != (IEQSQueryResultSourceInterface *)0x0)) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    CollectEQSData(param_1,pIVar4,
                   (TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> *)
                   &this->field_0x2f0,
                   (TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *)
                   &this->field_0x300,&local_28);
    DestructItems<EQSDebug::FDebugHelper,int>
              ((FDebugHelper *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FDebugHelper *)local_28.AllocatorInstance.Data != (FDebugHelper *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return this;
}

// CollectEQSData @ 146f378d0

/* WARNING: Removing unreachable block (ram,0x000146f38b95) */
/* WARNING: Removing unreachable block (ram,0x000146f385e5) */
/* WARNING: Removing unreachable block (ram,0x000146f38001) */
/* WARNING: Removing unreachable block (ram,0x000146f3875d) */
/* WARNING: Removing unreachable block (ram,0x000146f3963d) */
/* WARNING: Removing unreachable block (ram,0x000146f38260) */
/* WARNING: Removing unreachable block (ram,0x000146f38d98) */
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

void __cdecl
FEQSSceneProxy::CollectEQSData
          (FEnvQueryResult *param_1,FEnvQueryInstance *param_2,float param_3,bool param_4,
          TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> *param_5,
          TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *param_6,
          TArray<EQSDebug::FDebugHelper,TSizedDefaultAllocator<32>_> *param_7)

{
  TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *pTVar1;
  void *_Src;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  ForAnyElementType _Src_00;
  float fVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  FColor FVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined4 extraout_var;
  longlong lVar25;
  FString *pFVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  FLinearColor_u_0 *this;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  int iVar33;
  ulonglong uVar34;
  longlong lVar35;
  float extraout_XMM0_Da;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  FEnvQueryInstance *local_488;
  FEnvQueryInstance *local_480;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_478;
  ForAnyElementType local_468;
  undefined8 local_460;
  double local_458;
  double dStack_450;
  double local_448;
  undefined4 local_440;
  ForAnyElementType local_438;
  undefined8 local_430;
  double local_428;
  double dStack_420;
  double local_418;
  undefined4 local_410;
  ForAnyElementType local_408;
  undefined8 local_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  undefined4 local_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  float local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  void *local_3b0;
  undefined8 local_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  float local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined8 local_378;
  undefined8 local_370;
  double local_368;
  double dStack_360;
  double local_358;
  float local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined8 local_340;
  undefined8 local_338;
  double local_330;
  double dStack_328;
  double local_320;
  float local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 local_300;
  UObject *local_2f8;
  FString local_2f0;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  undefined4 local_2c8;
  FLinearColor_u_0 local_2c0;
  TVector<double>_u_0 local_2b0;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  float local_250;
  undefined4 uStack_24c;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  float local_228;
  undefined4 uStack_224;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  float local_200;
  undefined4 uStack_1fc;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  float local_1d8;
  undefined4 uStack_1d4;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  FString local_1b0;
  UClass *local_198;
  UClass *local_190;
  UClass *local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FLinearColor_u_0 local_130;
  FLinearColor_u_0 local_120;
  FString local_110;
  FLinearColor_u_0 local_100;
  FLinearColor_u_0 local_f0 [9];
  byte *pbVar24;
  
  uVar14 = _UNK_1514fd368;
  uVar13 = ___xmm_3f8000003f8000003f8000003e4ccccd;
  fVar12 = __real_7f7fffff;
  fVar11 = __real_3e4ccccd;
  fVar36 = __real_3b808081;
  fVar10 = __real_3f800000;
  bVar7 = false;
  bVar17 = false;
  bVar6 = false;
  bVar18 = false;
  iVar21 = 0;
  iVar22 = 0;
  if (param_1 == (FEnvQueryResult *)0x0) {
    param_1 = (FEnvQueryResult *)param_2;
    if (param_2 == (FEnvQueryInstance *)0x0) {
      return;
    }
LAB_146f37925:
    local_488 = (FEnvQueryInstance *)param_1;
    if ((param_2->DebugData).DebugItems.ArrayNum <= (int)param_2->_padding_) goto LAB_146f37968;
    local_480 = (FEnvQueryInstance *)&(param_2->DebugData).DebugItems;
    iVar33 = (param_2->DebugData).DebugItems.ArrayNum;
    local_478 = &(param_2->DebugData).RawData;
    iVar3 = 10000;
    if (iVar33 < 10000) {
      iVar3 = iVar33;
    }
    bVar4 = true;
    if (0 < iVar3) {
      iVar22 = iVar3;
    }
LAB_146f3799c:
    if (0 < param_2->CurrentTest) goto LAB_146f379ae;
    bVar8 = true;
LAB_146f379ba:
    if ((param_2->DebugData).bSingleItemResult != 0) {
      bVar5 = true;
      goto LAB_146f379c9;
    }
  }
  else {
    local_488 = (FEnvQueryInstance *)param_1;
    if (param_2 != (FEnvQueryInstance *)0x0) goto LAB_146f37925;
LAB_146f37968:
    iVar33 = (int)local_488->_padding_;
    local_478 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_488->_padding_;
    iVar3 = 10000;
    if (iVar33 < 10000) {
      iVar3 = iVar33;
    }
    if (0 < iVar3) {
      iVar22 = iVar3;
    }
    bVar4 = false;
    local_480 = local_488;
    if (param_2 != (FEnvQueryInstance *)0x0) goto LAB_146f3799c;
LAB_146f379ae:
    bVar8 = false;
    if (param_2 != (FEnvQueryInstance *)0x0) goto LAB_146f379ba;
  }
  bVar5 = false;
LAB_146f379c9:
  fVar39 = 0.0;
  fVar37 = __real_ff7fc99e;
  if ((bVar4) || (param_3 < __real_3f800000)) {
    pFVar28 = (((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)&local_480->_padding_)->
              AllocatorInstance).Data;
    if (3 < iVar33) {
      uVar19 = (iVar33 - 4U >> 2) + 1;
      uVar30 = (ulonglong)uVar19;
      iVar21 = uVar19 * 4;
      do {
        fVar38 = fVar39;
        if ((((uint)*(float *)(pFVar28 + 4) >> 0x1e & 1) == 0) &&
           (-1 < (int)*(float *)(pFVar28 + 4))) {
          fVar38 = *(float *)pFVar28;
          fVar16 = fVar38;
          if (fVar38 <= fVar37) {
            fVar16 = fVar37;
          }
          fVar37 = fVar16;
          if (fVar39 <= fVar38) {
            fVar38 = fVar39;
          }
        }
        fVar39 = fVar38;
        if ((((uint)*(float *)(pFVar28 + 0xc) >> 0x1e & 1) == 0) &&
           (-1 < (int)*(float *)(pFVar28 + 0xc))) {
          fVar39 = *(float *)(pFVar28 + 8);
          fVar16 = fVar39;
          if (fVar39 <= fVar37) {
            fVar16 = fVar37;
          }
          fVar37 = fVar16;
          if (fVar38 <= fVar39) {
            fVar39 = fVar38;
          }
        }
        fVar38 = fVar39;
        if ((((uint)*(float *)(pFVar28 + 0x14) >> 0x1e & 1) == 0) &&
           (-1 < (int)*(float *)(pFVar28 + 0x14))) {
          fVar38 = *(float *)(pFVar28 + 0x10);
          fVar16 = fVar38;
          if (fVar38 <= fVar37) {
            fVar16 = fVar37;
          }
          fVar37 = fVar16;
          if (fVar39 <= fVar38) {
            fVar38 = fVar39;
          }
        }
        fVar39 = fVar38;
        if ((((uint)*(float *)(pFVar28 + 0x1c) >> 0x1e & 1) == 0) &&
           (-1 < (int)*(float *)(pFVar28 + 0x1c))) {
          fVar39 = *(float *)(pFVar28 + 0x18);
          fVar16 = fVar39;
          if (fVar39 <= fVar37) {
            fVar16 = fVar37;
          }
          fVar37 = fVar16;
          if (fVar38 <= fVar39) {
            fVar39 = fVar38;
          }
        }
        pFVar28 = pFVar28 + 0x20;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    if (iVar21 < iVar33) {
      uVar30 = (ulonglong)(uint)(iVar33 - iVar21);
      do {
        fVar38 = fVar39;
        if ((((uint)*(float *)(pFVar28 + 4) >> 0x1e & 1) == 0) &&
           (-1 < (int)*(float *)(pFVar28 + 4))) {
          fVar38 = *(float *)pFVar28;
          fVar16 = fVar38;
          if (fVar38 <= fVar37) {
            fVar16 = fVar37;
          }
          fVar37 = fVar16;
          if (fVar39 <= fVar38) {
            fVar38 = fVar39;
          }
        }
        fVar39 = fVar38;
        pFVar28 = pFVar28 + 8;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
  }
  fVar39 = __real_7f7fffff;
  if (param_3 < __real_3f800000) {
    fVar39 = fVar37 * param_3;
  }
  lVar35 = (longlong)iVar22;
  if (bVar5) {
    if (0 < iVar22) {
      if (((int)local_480->_padding_ < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar19 = *(uint *)((((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)
                          &local_480->_padding_)->AllocatorInstance).Data + 4);
      if (((uVar19 >> 0x1e & 1) == 0) && (-1 < (int)uVar19)) {
        if (((int)local_480->_padding_ < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar15 = ItemDrawRadius.field0_0x0._s_0.X;
        local_190 = (((TSubclassOf<UEnvQueryItemType> *)&local_488->_padding_)->Class).field0_0x0.
                    DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_190);
        }
        FEQSRenderingHelper::ExtractLocation
                  ((TVector<double> *)&local_280._s_0,(TSubclassOf<UEnvQueryItemType>)&local_190,
                   local_478,(TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)local_480,0);
        local_120._0_8_ = ___xmm_3f8000003df5c28f3f80000000000000;
        local_120._8_8_ = _UNK_1514fd358;
        local_228 = (float)uVar15;
        dStack_220 = local_280._s_0.X;
        dStack_218 = local_280._s_0.Y;
        dStack_210 = local_280._s_0.Z;
        FLinearColor::ToFColorSRGB((FLinearColor *)&local_120._s_0);
        uStack_204 = 3;
        pFVar28 = (param_5->AllocatorInstance).Data;
        if (((pFVar28 <= (FScriptContainerElement *)&local_228) &&
            ((FScriptContainerElement *)&local_228 < pFVar28 + (longlong)param_5->ArrayMax * 0x28))
           && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar18)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar21 = param_5->ArrayNum;
        if (iVar21 == param_5->ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar21 + 1;
        lVar25 = (longlong)iVar21;
        local_350 = (float)uVar15;
        local_34c = 0xffffffff;
        local_340 = 0;
        local_338 = 0;
        pFVar28 = (param_5->AllocatorInstance).Data;
        *(ulonglong *)(pFVar28 + lVar25 * 0x28) = CONCAT44(uStack_224,local_228);
        *(double *)(pFVar28 + lVar25 * 0x28 + 8) = dStack_220;
        *(double *)(pFVar28 + lVar25 * 0x28 + 0x10) = dStack_218;
        *(double *)(pFVar28 + lVar25 * 0x28 + 0x10 + 8) = dStack_210;
        *(ulonglong *)(pFVar28 + lVar25 * 0x28 + 0x20) = CONCAT44(uStack_204,local_208);
        pFVar28 = (param_7->AllocatorInstance).Data;
        local_358 = local_280._s_0.Z;
        local_368 = local_280._s_0.X;
        dStack_360 = local_280._s_0.Y;
        if (((pFVar28 <= (FScriptContainerElement *)&local_368) &&
            ((FScriptContainerElement *)&local_368 < pFVar28 + (longlong)param_7->ArrayMax * 0x38))
           && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar18)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar21 = param_7->ArrayNum;
        if (iVar21 == param_7->ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&param_7->AllocatorInstance,&param_7->ArrayMax);
        }
        lVar25 = (longlong)iVar21 * 0x38;
        param_7->ArrayNum = iVar21 + 1;
        pFVar28 = (param_7->AllocatorInstance).Data;
        *(double *)(pFVar28 + lVar25) = local_368;
        *(double *)(pFVar28 + lVar25 + 8) = dStack_360;
        *(double *)(pFVar28 + lVar25 + 0x10) = local_358;
        *(float *)(pFVar28 + lVar25 + 0x18) = local_350;
        *(undefined4 *)(pFVar28 + lVar25 + 0x1c) = local_34c;
        *(undefined8 *)(pFVar28 + lVar25 + 0x28) = 0;
        *(undefined4 *)(pFVar28 + lVar25 + 0x20) = local_348;
        *(undefined8 *)(pFVar28 + lVar25 + 0x28) = local_340;
        *(undefined4 *)(pFVar28 + lVar25 + 0x30) = (undefined4)local_338;
        *(undefined4 *)(pFVar28 + lVar25 + 0x34) = local_338._4_4_;
        local_338 = 0;
        local_340 = 0;
        ::FString::PrintfImpl(&local_150,L"Winner %.2f");
        ::FString::FString(&local_2f0,&local_150);
        local_2e0 = local_280._s_0.X;
        dStack_2d8 = local_280._s_0.Y;
        local_2d0 = local_280._s_0.Z;
        FLinearColor::ToFColorSRGB(&FLinearColor::White);
        pFVar28 = (param_6->AllocatorInstance).Data;
        if (((pFVar28 <= (FScriptContainerElement *)&local_2f0) &&
            ((FScriptContainerElement *)&local_2f0 < pFVar28 + (longlong)param_6->ArrayMax * 0x30))
           && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar18)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar21 = param_6->ArrayNum;
        if (iVar21 == param_6->ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&param_6->AllocatorInstance,&param_6->ArrayMax);
        }
        lVar25 = (longlong)iVar21;
        param_6->ArrayNum = iVar21 + 1;
        pFVar28 = (param_6->AllocatorInstance).Data;
        *(undefined8 *)(pFVar28 + lVar25 * 0x30) = 0;
        *(FScriptContainerElement **)(pFVar28 + lVar25 * 0x30) =
             local_2f0.Data.AllocatorInstance.Data;
        *(int *)(pFVar28 + lVar25 * 0x30 + 8) = local_2f0.Data.ArrayNum;
        *(int *)(pFVar28 + lVar25 * 0x30 + 0xc) = local_2f0.Data.ArrayMax;
        *(double *)(pFVar28 + lVar25 * 0x30 + 0x10) = local_2e0;
        *(double *)(pFVar28 + lVar25 * 0x30 + 0x10 + 8) = dStack_2d8;
        *(double *)(pFVar28 + lVar25 * 0x30 + 0x20) = local_2d0;
        *(undefined4 *)(pFVar28 + lVar25 * 0x30 + 0x28) = local_2c8;
        local_2f0.Data.ArrayNum = 0;
        local_2f0.Data.ArrayMax = 0;
        local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
      }
      uVar14 = _UNK_1514fd348;
      uVar13 = ___xmm_3f8000003ccccccd3e4ccccd00000000;
      uVar19 = 1;
      if (1 < lVar35) {
        lVar25 = 1;
        do {
          uVar31 = 0;
          if ((int)uVar19 < (int)local_480->_padding_) {
            uVar31 = ~uVar19 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar31 = *(uint *)((((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)
                              &local_480->_padding_)->AllocatorInstance).Data + lVar25 * 8 + 4);
          if (((uVar31 >> 0x1e & 1) == 0) && (-1 < (int)uVar31)) {
            if (!bVar8) {
              uVar31 = 0;
              if ((int)uVar19 < (int)local_480->_padding_) {
                uVar31 = ~uVar19 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            fVar36 = fVar10;
            if (fVar39 < fVar12) {
              if (!bVar8) {
                uVar31 = 0;
                if ((int)uVar19 < (int)local_480->_padding_) {
                  uVar31 = ~uVar19 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar28 = (((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)
                           &local_480->_padding_)->AllocatorInstance).Data + lVar25 * 8;
                if (fVar39 < *(float *)pFVar28 || fVar39 == *(float *)pFVar28) goto LAB_146f388e4;
              }
              fVar36 = fVar11;
            }
LAB_146f388e4:
            fVar36 = fVar36 * ItemDrawRadius.field0_0x0._s_0.X;
            local_188 = (((TSubclassOf<UEnvQueryItemType> *)&local_488->_padding_)->Class).
                        field0_0x0.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UClass *)0x0)
               ) {
              UE::GC::MarkAsReachable((UObject *)local_188);
            }
            FEQSRenderingHelper::ExtractLocation
                      ((TVector<double> *)&local_298._s_0,(TSubclassOf<UEnvQueryItemType>)&local_188
                       ,local_478,(TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)local_480,
                       uVar19);
            dStack_248 = local_298._s_0.X;
            dStack_240 = local_298._s_0.Y;
            local_f0[0]._0_8_ = uVar13;
            local_f0[0]._8_8_ = uVar14;
            dStack_238 = local_298._s_0.Z;
            local_250 = fVar36;
            FLinearColor::ToFColorSRGB((FLinearColor *)&local_f0[0]._s_0);
            pFVar28 = (param_5->AllocatorInstance).Data;
            uStack_22c = 3;
            if (((pFVar28 <= (FScriptContainerElement *)&local_250) &&
                ((FScriptContainerElement *)&local_250 <
                 pFVar28 + (longlong)param_5->ArrayMax * 0x28)) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar18)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar21 = param_5->ArrayNum;
            if (iVar21 == param_5->ArrayMax) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,&param_5->AllocatorInstance,&param_5->ArrayMax);
            }
            lVar27 = (longlong)iVar21;
            param_5->ArrayNum = iVar21 + 1;
            local_314 = 0xffffffff;
            pFVar28 = (param_5->AllocatorInstance).Data;
            local_308 = 0;
            local_300 = 0;
            *(ulonglong *)(pFVar28 + lVar27 * 0x28) = CONCAT44(uStack_24c,local_250);
            *(double *)(pFVar28 + lVar27 * 0x28 + 8) = dStack_248;
            *(double *)(pFVar28 + lVar27 * 0x28 + 0x10) = dStack_240;
            *(double *)(pFVar28 + lVar27 * 0x28 + 0x10 + 8) = dStack_238;
            *(ulonglong *)(pFVar28 + lVar27 * 0x28 + 0x20) = CONCAT44(uStack_22c,local_230);
            pFVar28 = (param_7->AllocatorInstance).Data;
            local_320 = local_298._s_0.Z;
            local_330 = local_298._s_0.X;
            dStack_328 = local_298._s_0.Y;
            local_318 = fVar36;
            if (((pFVar28 <= (FScriptContainerElement *)&local_330) &&
                ((FScriptContainerElement *)&local_330 <
                 pFVar28 + (longlong)param_7->ArrayMax * 0x38)) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar18)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar21 = param_7->ArrayNum;
            if (iVar21 == param_7->ArrayMax) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,&param_7->AllocatorInstance,&param_7->ArrayMax);
            }
            lVar27 = (longlong)iVar21 * 0x38;
            param_7->ArrayNum = iVar21 + 1;
            pFVar28 = (param_7->AllocatorInstance).Data;
            *(double *)(pFVar28 + lVar27) = local_330;
            *(double *)(pFVar28 + lVar27 + 8) = dStack_328;
            *(double *)(pFVar28 + lVar27 + 0x10) = local_320;
            *(float *)(pFVar28 + lVar27 + 0x18) = local_318;
            *(undefined4 *)(pFVar28 + lVar27 + 0x1c) = local_314;
            *(undefined8 *)(pFVar28 + lVar27 + 0x28) = 0;
            *(undefined4 *)(pFVar28 + lVar27 + 0x20) = local_310;
            *(undefined8 *)(pFVar28 + lVar27 + 0x28) = local_308;
            *(undefined4 *)(pFVar28 + lVar27 + 0x30) = (undefined4)local_300;
            *(undefined4 *)(pFVar28 + lVar27 + 0x34) = local_300._4_4_;
            local_300 = 0;
            local_308 = 0;
            if (bVar8) {
              bVar7 = true;
              pFVar26 = ::FString::FString(&local_140,L"");
            }
            else {
              bVar17 = true;
              ::FString::PrintfImpl(&local_160,L"%.2f");
              pFVar26 = &local_160;
            }
            pFVar28 = (pFVar26->Data).AllocatorInstance.Data;
            (pFVar26->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar21 = (pFVar26->Data).ArrayNum;
            (pFVar26->Data).ArrayNum = 0;
            (pFVar26->Data).ArrayMax = 0;
            if ((bVar17) &&
               (bVar17 = false,
               local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_160.Data.AllocatorInstance.Data);
            }
            if ((bVar7) &&
               (bVar7 = false,
               local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            local_438.Data = (FScriptContainerElement *)0x0;
            local_430 = CONCAT44(local_430._4_4_,iVar21);
            if (iVar21 == 0) {
              local_430 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar21,0,&local_438,iVar21,(int *)((longlong)&local_430 + 4));
              memcpy(local_438.Data,pFVar28,(longlong)iVar21 * 2);
            }
            local_428 = local_298._s_0.X;
            dStack_420 = local_298._s_0.Y;
            local_418 = local_298._s_0.Z;
            FLinearColor::ToFColorSRGB(&FLinearColor::White);
            pFVar29 = (param_6->AllocatorInstance).Data;
            if (((pFVar29 <= (FScriptContainerElement *)&local_438) &&
                ((FScriptContainerElement *)&local_438 <
                 pFVar29 + (longlong)param_6->ArrayMax * 0x30)) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar18)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar21 = param_6->ArrayNum;
            if (iVar21 == param_6->ArrayMax) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&param_6->AllocatorInstance,&param_6->ArrayMax);
            }
            pFVar29 = (param_6->AllocatorInstance).Data;
            param_6->ArrayNum = iVar21 + 1;
            lVar27 = (longlong)iVar21;
            *(undefined8 *)(pFVar29 + lVar27 * 0x30) = 0;
            *(FScriptContainerElement **)(pFVar29 + lVar27 * 0x30) = local_438.Data;
            *(undefined4 *)(pFVar29 + lVar27 * 0x30 + 8) = (undefined4)local_430;
            *(undefined4 *)(pFVar29 + lVar27 * 0x30 + 0xc) = local_430._4_4_;
            *(double *)(pFVar29 + lVar27 * 0x30 + 0x10) = local_428;
            *(double *)(pFVar29 + lVar27 * 0x30 + 0x10 + 8) = dStack_420;
            *(double *)(pFVar29 + lVar27 * 0x30 + 0x20) = local_418;
            *(undefined4 *)(pFVar29 + lVar27 * 0x30 + 0x28) = local_410;
            local_430 = 0;
            local_438.Data = (FScriptContainerElement *)0x0;
            if (pFVar28 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar28);
            }
          }
          uVar19 = uVar19 + 1;
          lVar25 = lVar25 + 1;
        } while (lVar25 < lVar35);
      }
    }
  }
  else {
    uVar34 = 0;
    uVar30 = uVar34;
    if (0 < iVar22) {
      do {
        uVar31 = (uint)uVar34;
        uVar19 = 0;
        if ((int)uVar31 < (int)local_480->_padding_) {
          uVar19 = ~uVar31 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar19 = *(uint *)((((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)
                            &local_480->_padding_)->AllocatorInstance).Data + uVar30 * 8 + 4);
        if (((uVar19 >> 0x1e & 1) == 0) && (-1 < (int)uVar19)) {
          if (!bVar8) {
            uVar19 = 0;
            if ((int)uVar31 < (int)local_480->_padding_) {
              uVar19 = ~uVar31 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          fVar37 = fVar10;
          if (fVar39 < fVar12) {
            if (!bVar8) {
              uVar19 = 0;
              if ((int)uVar31 < (int)local_480->_padding_) {
                uVar19 = ~uVar31 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar28 = (((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)&local_480->_padding_
                         )->AllocatorInstance).Data + uVar30 * 8;
              if (fVar39 < *(float *)pFVar28 || fVar39 == *(float *)pFVar28) goto LAB_146f37d14;
            }
            fVar37 = fVar11;
          }
LAB_146f37d14:
          fVar37 = fVar37 * ItemDrawRadius.field0_0x0._s_0.X;
          local_198 = (((TSubclassOf<UEnvQueryItemType> *)&local_488->_padding_)->Class).field0_0x0.
                      DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_198 != (UClass *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)local_198);
          }
          FEQSRenderingHelper::ExtractLocation
                    ((TVector<double> *)&local_268._s_0,(TSubclassOf<UEnvQueryItemType>)&local_198,
                     local_478,(TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)local_480,uVar31
                    );
          if (bVar8) {
            local_100._0_8_ = uVar13;
            local_100._8_8_ = uVar14;
            this = &local_100;
          }
          else {
            FVar20 = FColor::MakeRedToGreenColorFromScalar(extraout_XMM0_Da);
            pbVar24 = (byte *)CONCAT44(extraout_var,FVar20.field0_0x0);
            local_2c0._s_0.R = FLinearColor::sRGBToLinearTable[pbVar24[2]];
            local_2c0._s_0.G = FLinearColor::sRGBToLinearTable[pbVar24[1]];
            local_2c0._s_0.B = FLinearColor::sRGBToLinearTable[*pbVar24];
            this = &local_2c0;
            local_2c0._s_0.A = (float)pbVar24[3] * fVar36;
          }
          dStack_1f8 = local_268._s_0.X;
          dStack_1f0 = local_268._s_0.Y;
          dStack_1e8 = local_268._s_0.Z;
          local_200 = fVar37;
          FLinearColor::ToFColorSRGB((FLinearColor *)&this->_s_0);
          uStack_1dc = 3;
          pFVar28 = (param_5->AllocatorInstance).Data;
          if (((pFVar28 <= (FScriptContainerElement *)&local_200) &&
              ((FScriptContainerElement *)&local_200 < pFVar28 + (longlong)param_5->ArrayMax * 0x28)
              ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar21 = param_5->ArrayNum;
          if (iVar21 == param_5->ArrayMax) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          lVar25 = (longlong)iVar21;
          param_5->ArrayNum = iVar21 + 1;
          local_384 = 0xffffffff;
          pFVar28 = (param_5->AllocatorInstance).Data;
          local_378 = 0;
          local_370 = 0;
          *(ulonglong *)(pFVar28 + lVar25 * 0x28) = CONCAT44(uStack_1fc,local_200);
          *(double *)(pFVar28 + lVar25 * 0x28 + 8) = dStack_1f8;
          *(double *)(pFVar28 + lVar25 * 0x28 + 0x10) = dStack_1f0;
          *(double *)(pFVar28 + lVar25 * 0x28 + 0x10 + 8) = dStack_1e8;
          *(ulonglong *)(pFVar28 + lVar25 * 0x28 + 0x20) = CONCAT44(uStack_1dc,local_1e0);
          pFVar28 = (param_7->AllocatorInstance).Data;
          local_390 = local_268._s_0.Z;
          local_3a0 = local_268._s_0.X;
          dStack_398 = local_268._s_0.Y;
          local_388 = fVar37;
          if (((pFVar28 <= (FScriptContainerElement *)&local_3a0) &&
              ((FScriptContainerElement *)&local_3a0 < pFVar28 + (longlong)param_7->ArrayMax * 0x38)
              ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar21 = param_7->ArrayNum;
          if (iVar21 == param_7->ArrayMax) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&param_7->AllocatorInstance,&param_7->ArrayMax);
          }
          lVar25 = (longlong)iVar21 * 0x38;
          param_7->ArrayNum = iVar21 + 1;
          pFVar28 = (param_7->AllocatorInstance).Data;
          *(double *)(pFVar28 + lVar25) = local_3a0;
          *(double *)(pFVar28 + lVar25 + 8) = dStack_398;
          *(double *)(pFVar28 + lVar25 + 0x10) = local_390;
          *(float *)(pFVar28 + lVar25 + 0x18) = local_388;
          *(undefined4 *)(pFVar28 + lVar25 + 0x1c) = local_384;
          *(undefined8 *)(pFVar28 + lVar25 + 0x28) = 0;
          *(undefined4 *)(pFVar28 + lVar25 + 0x20) = local_380;
          *(undefined8 *)(pFVar28 + lVar25 + 0x28) = local_378;
          *(undefined4 *)(pFVar28 + lVar25 + 0x30) = (undefined4)local_370;
          *(undefined4 *)(pFVar28 + lVar25 + 0x34) = local_370._4_4_;
          local_370 = 0;
          local_378 = 0;
          if (bVar8) {
            bVar6 = true;
            pFVar26 = ::FString::FString(&local_110,L"");
          }
          else {
            uVar19 = 0;
            if ((int)uVar31 < (int)local_480->_padding_) {
              uVar19 = ~uVar31 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            bVar18 = true;
            ::FString::PrintfImpl(&local_180,L"%.2f");
            pFVar26 = &local_180;
          }
          pFVar28 = (pFVar26->Data).AllocatorInstance.Data;
          (pFVar26->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar21 = (pFVar26->Data).ArrayNum;
          (pFVar26->Data).ArrayNum = 0;
          (pFVar26->Data).ArrayMax = 0;
          if ((bVar18) &&
             (bVar18 = false,
             local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          if ((bVar6) &&
             (bVar6 = false, local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
          local_468.Data = (FScriptContainerElement *)0x0;
          local_460 = CONCAT44(local_460._4_4_,iVar21);
          if (iVar21 == 0) {
            local_460 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar21,0,&local_468,iVar21,(int *)((longlong)&local_460 + 4));
            memcpy(local_468.Data,pFVar28,(longlong)iVar21 * 2);
          }
          local_458 = local_268._s_0.X;
          dStack_450 = local_268._s_0.Y;
          local_448 = local_268._s_0.Z;
          FLinearColor::ToFColorSRGB(&FLinearColor::White);
          pFVar29 = (param_6->AllocatorInstance).Data;
          if (((pFVar29 <= (FScriptContainerElement *)&local_468) &&
              ((FScriptContainerElement *)&local_468 < pFVar29 + (longlong)param_6->ArrayMax * 0x30)
              ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar21 = param_6->ArrayNum;
          if (iVar21 == param_6->ArrayMax) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&param_6->AllocatorInstance,&param_6->ArrayMax);
          }
          pFVar29 = (param_6->AllocatorInstance).Data;
          param_6->ArrayNum = iVar21 + 1;
          lVar25 = (longlong)iVar21;
          *(undefined8 *)(pFVar29 + lVar25 * 0x30) = 0;
          *(FScriptContainerElement **)(pFVar29 + lVar25 * 0x30) = local_468.Data;
          *(undefined4 *)(pFVar29 + lVar25 * 0x30 + 8) = (undefined4)local_460;
          *(undefined4 *)(pFVar29 + lVar25 * 0x30 + 0xc) = local_460._4_4_;
          *(double *)(pFVar29 + lVar25 * 0x30 + 0x10) = local_458;
          *(double *)(pFVar29 + lVar25 * 0x30 + 0x10 + 8) = dStack_450;
          *(double *)(pFVar29 + lVar25 * 0x30 + 0x20) = local_448;
          *(undefined4 *)(pFVar29 + lVar25 * 0x30 + 0x28) = local_440;
          local_460 = 0;
          local_468.Data = (FScriptContainerElement *)0x0;
          if (pFVar28 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar28);
          }
        }
        uVar34 = (ulonglong)(uVar31 + 1);
        uVar30 = uVar30 + 1;
      } while ((longlong)uVar30 < lVar35);
    }
  }
  uVar14 = _UNK_1514fd338;
  uVar13 = ___xmm_3f19999a3f19999a0000000000000000;
  if ((param_4) && (param_2 != (FEnvQueryInstance *)0x0)) {
    pTVar1 = &(param_2->DebugData).DebugItems;
    iVar21 = (param_2->DebugData).DebugItems.ArrayNum;
    if (iVar21 == (param_2->DebugData).DebugItemDetails.ArrayNum) {
      iVar22 = 10000;
      if (iVar21 < 10000) {
        iVar22 = iVar21;
      }
      iVar21 = 0;
      if (0 < iVar22) {
        iVar21 = iVar22;
      }
    }
    else {
      iVar21 = 0;
    }
    uVar30 = 0;
    if (0 < (longlong)iVar21) {
      local_488 = (FEnvQueryInstance *)0x0;
      uVar34 = uVar30;
      do {
        uVar31 = (uint)uVar30;
        uVar19 = 0;
        if ((int)uVar31 < (param_2->DebugData).DebugItems.ArrayNum) {
          uVar19 = ~uVar31 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar19 = *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)local_488 * 8 + 4);
        if (((uVar19 >> 0x1e & 1) != 0) || ((int)uVar19 < 0)) {
          fVar36 = fVar10;
          if (fVar39 < fVar12) {
            if (!bVar8) {
              uVar19 = 0;
              if ((int)uVar31 < (int)local_480->_padding_) {
                uVar19 = ~uVar31 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar28 = (((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)&local_480->_padding_
                         )->AllocatorInstance).Data + (longlong)local_488 * 8;
              if (fVar39 < *(float *)pFVar28 || fVar39 == *(float *)pFVar28) goto LAB_146f38f2a;
            }
            fVar36 = fVar11;
          }
LAB_146f38f2a:
          local_2f8 = (UObject *)param_2->_padding_;
          fVar36 = fVar36 * ItemDrawRadius.field0_0x0._s_0.X;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2f8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_2f8);
          }
          FEQSRenderingHelper::ExtractLocation
                    ((TVector<double> *)&local_2b0._s_0,(TSubclassOf<UEnvQueryItemType>)&local_2f8,
                     &(param_2->DebugData).RawData,pTVar1,uVar31);
          dStack_1d0 = local_2b0._s_0.X;
          dStack_1c8 = local_2b0._s_0.Y;
          local_130._0_8_ = uVar13;
          local_130._8_8_ = uVar14;
          dStack_1c0 = local_2b0._s_0.Z;
          local_1d8 = fVar36;
          FLinearColor::ToFColorSRGB((FLinearColor *)&local_130._s_0);
          uStack_1b4 = 3;
          pFVar28 = (param_5->AllocatorInstance).Data;
          if (((pFVar28 <= (FScriptContainerElement *)&local_1d8) &&
              ((FScriptContainerElement *)&local_1d8 < pFVar28 + (longlong)param_5->ArrayMax * 0x28)
              ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar18)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar22 = param_5->ArrayNum;
          if (iVar22 == param_5->ArrayMax) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          lVar35 = (longlong)iVar22;
          param_5->ArrayNum = iVar22 + 1;
          local_3bc = 0xffffffff;
          local_3b0 = (void *)0x0;
          pFVar28 = (param_5->AllocatorInstance).Data;
          local_3a8 = 0;
          *(ulonglong *)(pFVar28 + lVar35 * 0x28) = CONCAT44(uStack_1d4,local_1d8);
          *(double *)(pFVar28 + lVar35 * 0x28 + 8) = dStack_1d0;
          *(double *)(pFVar28 + lVar35 * 0x28 + 0x10) = dStack_1c8;
          *(double *)(pFVar28 + lVar35 * 0x28 + 0x10 + 8) = dStack_1c0;
          *(ulonglong *)(pFVar28 + lVar35 * 0x28 + 0x20) = CONCAT44(uStack_1b4,local_1b8);
          pFVar28 = (param_7->AllocatorInstance).Data;
          local_3c8 = local_2b0._s_0.Z;
          local_3d8 = local_2b0._s_0.X;
          dStack_3d0 = local_2b0._s_0.Y;
          local_3c0 = fVar36;
          if (((pFVar28 <= (FScriptContainerElement *)&local_3d8) &&
              ((FScriptContainerElement *)&local_3d8 < pFVar28 + (longlong)param_7->ArrayMax * 0x38)
              ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar18)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar19 = param_7->ArrayNum;
          if (uVar19 == param_7->ArrayMax) {
            uVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&param_7->AllocatorInstance,&param_7->ArrayMax);
          }
          param_7->ArrayNum = uVar19 + 1;
          pFVar28 = (param_7->AllocatorInstance).Data;
          lVar35 = (longlong)(int)uVar19 * 0x38;
          *(double *)(pFVar28 + lVar35) = local_3d8;
          *(double *)(pFVar28 + lVar35 + 8) = dStack_3d0;
          *(double *)(pFVar28 + lVar35 + 0x10) = local_3c8;
          *(float *)(pFVar28 + lVar35 + 0x18) = local_3c0;
          *(undefined4 *)(pFVar28 + lVar35 + 0x1c) = local_3bc;
          *(undefined8 *)(pFVar28 + lVar35 + 0x28) = 0;
          *(undefined4 *)(pFVar28 + lVar35 + 0x20) = local_3b8;
          *(void **)(pFVar28 + lVar35 + 0x28) = local_3b0;
          local_3b0 = (void *)0x0;
          *(undefined4 *)(pFVar28 + lVar35 + 0x30) = (undefined4)local_3a8;
          *(undefined4 *)(pFVar28 + lVar35 + 0x34) = local_3a8._4_4_;
          local_3a8 = 0;
          uVar23 = 0;
          if ((int)uVar19 < param_7->ArrayNum) {
            uVar23 = ~uVar19 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar28 = (param_7->AllocatorInstance).Data;
          if (local_3b0 != (void *)0x0) {
            FMemory::Free(local_3b0);
          }
          uVar19 = 0;
          if ((int)uVar31 < (param_2->DebugData).DebugItemDetails.ArrayNum) {
            uVar19 = ~uVar31 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar32 = pFVar28 + lVar35 + 0x28;
          pFVar29 = (param_2->DebugData).DebugItemDetails.AllocatorInstance.Data + uVar34 + 0x28;
          if (pFVar32 != pFVar29) {
            iVar22 = *(int *)&pFVar29[8].field_0x0;
            pFVar9 = pFVar32 + 0xc;
            _Src = *(void **)&pFVar29->field_0x0;
            iVar33 = *(int *)pFVar9;
            *(int *)&pFVar32[8].field_0x0 = iVar22;
            if ((iVar22 == 0) && (iVar33 == 0)) {
              *(int *)pFVar9 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar22,iVar33,(ForAnyElementType *)pFVar32,iVar22,(int *)pFVar9);
              if (iVar22 != 0) {
                memcpy(*(void **)&pFVar32->field_0x0,_Src,(longlong)iVar22 * 2);
              }
            }
          }
          uVar19 = 0;
          if ((int)uVar31 < (param_2->DebugData).DebugItemDetails.ArrayNum) {
            uVar19 = ~uVar31 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)((param_2->DebugData).DebugItemDetails.AllocatorInstance.Data + uVar34 + 0x20)
              != -1) {
            uVar19 = 0;
            if ((int)uVar31 < (param_2->DebugData).DebugItemDetails.ArrayNum) {
              uVar19 = ~uVar31 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)(pFVar28 + lVar35 + 0x1c) =
                 *(undefined4 *)
                  ((param_2->DebugData).DebugItemDetails.AllocatorInstance.Data + uVar34 + 0x20);
            uVar19 = 0;
            if ((int)uVar31 < (param_2->DebugData).DebugItemDetails.ArrayNum) {
              uVar19 = ~uVar31 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar19 = *(uint *)(pFVar28 + lVar35 + 0x1c);
            pFVar29 = (param_2->DebugData).DebugItemDetails.AllocatorInstance.Data;
            uVar23 = 0;
            if ((int)uVar19 < *(int *)(pFVar29 + uVar34 + 8)) {
              uVar23 = ~uVar19 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)(pFVar28 + lVar35 + 0x20) =
                 *(undefined4 *)(*(longlong *)(pFVar29 + uVar34) + (longlong)(int)uVar19 * 4);
            ::FString::PrintfImpl(&local_170,L"(%d)");
            uVar19 = *(uint *)(pFVar28 + lVar35 + 0x1c);
            uVar23 = 0;
            if ((int)uVar19 < (param_2->DebugData).PerformedTestNames.ArrayNum) {
              uVar23 = ~uVar19 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            ::FString::ConcatFF(&local_1b0,
                                (FString *)
                                ((param_2->DebugData).PerformedTestNames.AllocatorInstance.Data +
                                (longlong)(int)uVar19 * 0x10),&local_170);
            if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_170.Data.AllocatorInstance.Data);
            }
            _Src_00.Data = local_1b0.Data.AllocatorInstance.Data;
            local_408.Data = (FScriptContainerElement *)0x0;
            iVar22 = local_1b0.Data.ArrayNum;
            local_400 = CONCAT44(local_400._4_4_,iVar22);
            if (iVar22 == 0) {
              local_400 = local_1b0.Data._8_8_ & 0xffffffff;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar22,0,&local_408,iVar22,(int *)((longlong)&local_400 + 4));
              memcpy(local_408.Data,_Src_00.Data,(longlong)iVar22 * 2);
            }
            local_3f8 = local_2b0._s_0.X;
            dStack_3f0 = local_2b0._s_0.Y;
            local_3e8 = local_2b0._s_0.Z;
            FLinearColor::ToFColorSRGB(&FLinearColor::White);
            pFVar28 = (param_6->AllocatorInstance).Data;
            if (((pFVar28 <= (FScriptContainerElement *)&local_408) &&
                ((FScriptContainerElement *)&local_408 <
                 pFVar28 + (longlong)param_6->ArrayMax * 0x30)) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar18)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar22 = param_6->ArrayNum;
            if (iVar22 == param_6->ArrayMax) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&param_6->AllocatorInstance,&param_6->ArrayMax);
            }
            lVar35 = (longlong)iVar22;
            param_6->ArrayNum = iVar22 + 1;
            pFVar28 = (param_6->AllocatorInstance).Data;
            *(undefined8 *)(pFVar28 + lVar35 * 0x30) = 0;
            *(FScriptContainerElement **)(pFVar28 + lVar35 * 0x30) = local_408.Data;
            *(undefined4 *)(pFVar28 + lVar35 * 0x30 + 8) = (undefined4)local_400;
            *(undefined4 *)(pFVar28 + lVar35 * 0x30 + 0xc) = local_400._4_4_;
            *(double *)(pFVar28 + lVar35 * 0x30 + 0x10) = local_3f8;
            *(double *)(pFVar28 + lVar35 * 0x30 + 0x10 + 8) = dStack_3f0;
            *(double *)(pFVar28 + lVar35 * 0x30 + 0x20) = local_3e8;
            *(undefined4 *)(pFVar28 + lVar35 * 0x30 + 0x28) = local_3e0;
            local_400 = 0;
            local_408.Data = (FScriptContainerElement *)0x0;
            if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
            }
          }
        }
        local_488 = (FEnvQueryInstance *)((longlong)local_488 + 1);
        uVar30 = (ulonglong)(uVar31 + 1);
        uVar34 = uVar34 + 0x38;
      } while ((longlong)local_488 < (longlong)iVar21);
    }
  }
  return;
}

// CollectEQSData @ 146f396e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FEQSSceneProxy::CollectEQSData
          (UPrimitiveComponent *param_1,IEQSQueryResultSourceInterface *param_2,
          TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *param_4,
          TArray<EQSDebug::FDebugHelper,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  UClass *pUVar2;
  FEnvQueryResult *pFVar3;
  FEnvQueryInstance *pFVar4;
  UObjectBaseUtility *this;
  float fVar5;
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    this = (UObjectBaseUtility *)0x0;
  }
  else {
    this = *(UObjectBaseUtility **)&param_1->field_0xa8;
  }
  if (param_2 == (IEQSQueryResultSourceInterface *)0x0) {
    if (this != (UObjectBaseUtility *)0x0) {
      pUVar2 = Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
      param_2 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar2);
      if (param_2 != (IEQSQueryResultSourceInterface *)0x0) goto LAB_146f39757;
    }
    if (param_1 == (UPrimitiveComponent *)0x0) {
      return;
    }
    pUVar2 = Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
    param_2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (param_2 == (IEQSQueryResultSourceInterface *)0x0) {
      return;
    }
  }
LAB_146f39757:
  pFVar3 = (FEnvQueryResult *)(**(code **)((longlong)*param_2 + 0x10))(param_2);
  pFVar4 = (FEnvQueryInstance *)(**(code **)((longlong)*param_2 + 0x18))(param_2);
  bVar1 = (bool)(**(code **)((longlong)*param_2 + 0x28))(param_2);
  fVar5 = (float)(**(code **)((longlong)*param_2 + 0x30))(param_2);
  CollectEQSData(pFVar3,pFVar4,fVar5,bVar1,param_3,param_4,param_5);
  if (((this != (UObjectBaseUtility *)0x0) && (10000 < param_3->ArrayNum)) &&
     (FVisualLogger::bIsRecording != 0)) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogEQS.field_0x4,Warning,
               L"EQS drawing: too much items to draw! Drawing first %d from set of %d");
  }
  return;
}

// GetTypeHash @ 146f5a8c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall FEQSSceneProxy::GetTypeHash(FEQSSceneProxy *this)

{
  return 0x1551c3ca0;
}

// GetViewRelevance @ 146f5ab90

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
FEQSSceneProxy::GetViewRelevance
          (FEQSSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FEngineShowFlags::GetSingleFlag
                    (&param_1->Family->EngineShowFlags,*(uint *)&this->field_0x350);
  if (bVar2) {
    bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
    if (bVar2) {
      if (this->bDrawOnlyWhenSelected == 0) {
LAB_146f5ac06:
        uVar3 = 4;
        goto LAB_146f5ac0f;
      }
      if (this->ActorOwner != (AActor *)0x0) {
        bVar2 = UObject::IsSelected((UObject *)this->ActorOwner);
        if (bVar2) goto LAB_146f5ac06;
      }
    }
  }
  uVar3 = 0;
LAB_146f5ac0f:
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | uVar3 | 2;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfb;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0x7f;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 | bVar2 << 2;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | (*(byte *)((longlong)&__return_storage_ptr__->_padding_ + 5) & 0xfc) << 5;
  return __return_storage_ptr__;
}

// SafeIsActorSelected @ 146f72d60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FEQSSceneProxy::SafeIsActorSelected(FEQSSceneProxy *this)

{
  if (this->ActorOwner == (AActor *)0x0) {
    return false;
  }
  return false;
}

