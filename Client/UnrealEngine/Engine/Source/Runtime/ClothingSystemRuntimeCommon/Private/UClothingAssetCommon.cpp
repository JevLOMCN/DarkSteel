// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 16

// StaticClass @ 148c0b1c0

UClass * __cdecl UClothingAssetCommon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingAssetCommon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothingAssetCommon",
               &Z_Registration_Info_UClass_UClothingAssetCommon.InnerSingleton,
               StaticRegisterNativesUClothingAssetCommon,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UClothingAssetCommon>,
               InternalVTableHelperCtorCaller<UClothingAssetCommon>,local_res8,
               UClothingAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingAssetCommon.InnerSingleton;
}

// UClothingAssetCommon @ 148c1a290

UClothingAssetCommon * __thiscall
UClothingAssetCommon::UClothingAssetCommon(UClothingAssetCommon *this,FVTableHelper *param_1)

{
  UClothingAssetBase::UClothingAssetBase((UClothingAssetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UClothingAssetCommon__6B_;
  (this->PhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  *(undefined8 *)&this->ClothConfigs = 0;
  *(undefined8 *)&(this->ClothConfigs).field_0x8 = 0;
  *(undefined8 *)&(this->ClothConfigs).field_0x20 = 0;
  *(undefined4 *)&(this->ClothConfigs).field_0x28 = 0;
  *(undefined4 *)&(this->ClothConfigs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClothConfigs).field_0x34 = 0;
  *(undefined4 *)&(this->ClothConfigs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClothConfigs).field_0x40 = 0;
  *(undefined4 *)&(this->ClothConfigs).field_0x48 = 0;
  (this->LodData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LodData).ArrayNum = 0;
  (this->LodData).ArrayMax = 0;
  (this->LodMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LodMap).ArrayNum = 0;
  (this->LodMap).ArrayMax = 0;
  (this->UsedBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBoneNames).ArrayNum = 0;
  (this->UsedBoneNames).ArrayMax = 0;
  (this->UsedBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBoneIndices).ArrayNum = 0;
  (this->UsedBoneIndices).ArrayMax = 0;
  return this;
}

// UClothingAssetCommon @ 148c1a330

UClothingAssetCommon * __thiscall
UClothingAssetCommon::UClothingAssetCommon(UClothingAssetCommon *this,FObjectInitializer *param_1)

{
  UClothingAssetBase::UClothingAssetBase((UClothingAssetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UClothingAssetCommon__6B_;
  (this->PhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  *(undefined8 *)&this->ClothConfigs = 0;
  *(undefined8 *)&(this->ClothConfigs).field_0x8 = 0;
  *(undefined8 *)&(this->ClothConfigs).field_0x20 = 0;
  *(undefined4 *)&(this->ClothConfigs).field_0x28 = 0;
  *(undefined4 *)&(this->ClothConfigs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClothConfigs).field_0x34 = 0;
  *(undefined4 *)&(this->ClothConfigs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClothConfigs).field_0x40 = 0;
  *(undefined4 *)&(this->ClothConfigs).field_0x48 = 0;
  (this->LodData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LodData).ArrayNum = 0;
  (this->LodData).ArrayMax = 0;
  (this->LodMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LodMap).ArrayNum = 0;
  (this->LodMap).ArrayMax = 0;
  (this->UsedBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBoneNames).ArrayNum = 0;
  (this->UsedBoneNames).ArrayMax = 0;
  (this->UsedBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBoneIndices).ArrayNum = 0;
  (this->UsedBoneIndices).ArrayMax = 0;
  this->ReferenceBoneIndex = 0;
  return this;
}

// ~UClothingAssetCommon @ 148c1abf0

void __thiscall UClothingAssetCommon::~UClothingAssetCommon(UClothingAssetCommon *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UClothingAssetCommon__6B_;
  pFVar1 = (this->UsedBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UsedBoneNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LodMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FClothLODDataCommon,int>
            ((FClothLODDataCommon *)(this->LodData).AllocatorInstance.Data,(this->LodData).ArrayNum)
  ;
  pFVar1 = (this->LodData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ClothConfigs).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ClothConfigs).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClothConfigs);
  UClothingAssetBase::~UClothingAssetBase((UClothingAssetBase *)this);
  return;
}

// AddClothConfigs @ 148c1f350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall UClothingAssetCommon::AddClothConfigs(UClothingAssetCommon *this)

{
  undefined8 *puVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  uint *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
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
  FScriptContainerElement *pFVar21;
  bool bVar22;
  undefined1 uVar23;
  char cVar24;
  bool bVar25;
  int iVar26;
  uint uVar27;
  IModularFeatures *pIVar28;
  longlong lVar29;
  longlong *plVar30;
  UClass *pUVar31;
  UClass *pUVar32;
  UClass *pUVar33;
  size_t sVar34;
  UObject *pUVar35;
  UClass *pUVar36;
  ulonglong uVar37;
  longlong *plVar38;
  undefined1 *puVar39;
  FObjectPtr_u_0 FVar40;
  ForElementType<FSetElementId> FVar41;
  ulonglong uVar42;
  FName FVar43;
  ForAnyElementType FVar44;
  uint uVar45;
  uint *puVar46;
  undefined1 *puVar47;
  TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
  *this_00;
  TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
  *pTVar48;
  uint uVar49;
  undefined1 auStack_478 [32];
  FScriptContainerElement *local_458;
  FScriptContainerElement *local_450;
  longlong local_448;
  longlong local_440;
  undefined8 local_438;
  undefined1 local_428;
  undefined1 local_427 [7];
  ForAnyElementType local_420;
  uint local_418;
  uint uStack_414;
  ulonglong local_410;
  longlong *local_408;
  uint local_400;
  TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
  *local_3f8;
  UClass *local_3f0;
  undefined8 local_3e8;
  undefined8 *local_3e0;
  FScriptContainerElement *local_3d8;
  FString local_3d0;
  undefined8 local_3c0;
  FObjectPtr_u_0 local_3b8;
  FName local_3b0;
  FName local_3a8;
  longlong local_3a0;
  UClothingAssetCommon *local_398;
  undefined8 *local_390;
  FScriptContainerElement *local_388;
  int local_380;
  int local_37c;
  TPairInitializer<FName_const_&,UClothConfigBase_*_const_&> local_378;
  uint uStack_368;
  undefined4 uStack_364;
  FString local_360;
  FString local_350;
  TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
  *local_340;
  uint uStack_338;
  uint uStack_334;
  undefined1 *local_330;
  undefined4 uStack_328;
  uint uStack_324;
  uint local_320;
  undefined4 uStack_31c;
  int iStack_318;
  undefined4 uStack_314;
  TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
  *local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_308;
  undefined8 uStack_2e8;
  TStringView<wchar_t> local_2d8;
  undefined8 *local_2c8;
  int local_2c0;
  longlong *local_2b8;
  UClass **local_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [4];
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
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
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
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
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined1 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_15c;
  undefined4 local_13c;
  undefined1 local_138 [128];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_478;
  bVar25 = false;
  local_398 = this;
  pIVar28 = IModularFeatures::Get();
  FVar43 = IClothingSimulationFactoryClassProvider::FeatureName;
  local_420.Data = (FScriptContainerElement *)0x0;
  local_418 = 0;
  uStack_414 = 0;
  iVar26 = (**(code **)((longlong)*pIVar28 + 0x18))
                     (pIVar28,IClothingSimulationFactoryClassProvider::FeatureName);
  uVar42 = 0;
  if (0 < iVar26) {
    do {
      lVar29 = (**(code **)((longlong)*pIVar28 + 0x20))(pIVar28,FVar43,uVar42);
      local_410 = lVar29 - 8;
      if (lVar29 == 0) {
        local_410 = 0;
      }
      if ((local_420.Data <= (FScriptContainerElement *)&local_410) &&
         ((FScriptContainerElement *)&local_410 < local_420.Data + (longlong)(int)uStack_414 * 8)) {
        local_440 = (longlong)(int)local_418;
        local_438 = 8;
        local_458 = (FScriptContainerElement *)&local_410;
        local_450 = local_420.Data;
        local_448 = (longlong)(int)uStack_414;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar22) {
          pcVar6 = (code *)swi(3);
          uVar23 = (*pcVar6)();
          return (bool)uVar23;
        }
      }
      if (local_418 == uStack_414) {
        local_418 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_420,(int *)&uStack_414);
      }
      uVar27 = local_418 + 1;
      uVar45 = (int)uVar42 + 1;
      *(ulonglong *)(local_420.Data + (longlong)(int)local_418 * 8) = local_410;
      uVar42 = (ulonglong)uVar45;
      local_418 = uVar27;
    } while ((int)uVar45 < iVar26);
  }
  uVar20 = _UNK_151c8e848;
  uVar19 = ___xmm_3ff00000000000003fc99999a0000000;
  uVar18 = _UNK_151c8e838;
  uVar17 = ___xmm_3fd99999a00000003fd99999a0000000;
  uVar16 = _UNK_151c8e828;
  uVar15 = ___xmm_3fc99999a00000003fc99999a0000000;
  uVar14 = __real_3fd99999a0000000;
  uVar13 = __real_3fc99999a0000000;
  uVar12 = _UNK_15076b1f8;
  uVar11 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar10 = _UNK_15076b188;
  uVar9 = ___xmm_3f80000000000000000000003f800000;
  uVar8 = _UNK_150689688;
  uVar7 = ___xmm_3ff00000000000003ff0000000000000;
  uVar37 = (ulonglong)(int)local_418;
  local_388 = local_420.Data + uVar37 * 8;
  local_400 = local_418;
  uVar42 = uVar37;
  FVar44.Data = local_420.Data;
  do {
    pFVar21 = local_388;
    local_3d8 = FVar44.Data;
    if ((int)uVar37 != (int)uVar42) {
      local_428 = 0;
      `TCheckedPointerIterator<IClothingSimulationFactoryClassProvider_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_428);
    }
    if (FVar44.Data == pFVar21) {
      if (local_420.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.Data);
      }
      return bVar25;
    }
    puVar1 = *(undefined8 **)FVar44.Data;
    if ((puVar1 == (undefined8 *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Provider",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothingAsset.cpp"
                            ,0x51c,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      uVar23 = (*pcVar6)();
      return (bool)uVar23;
    }
    plVar30 = (longlong *)(**(code **)*puVar1)(puVar1,local_2a8);
    lVar29 = *plVar30;
    if ((lVar29 != 0) &&
       (pUVar31 = Z_Construct_UClass_UClothingSimulationFactory_NoRegister(),
       pUVar31 != (UClass *)0x0)) {
      iVar26 = (int)pUVar31->_padding_;
      if ((*(int *)(lVar29 + 0x38) < iVar26) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar29 + 0x30) + (longlong)iVar26 * 8) !=
          &pUVar31->_padding_)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if ((bVar22) && (pUVar31 = (UClass *)*plVar30, pUVar31 != (UClass *)0x0)) {
        if ((pUVar31->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar31);
        }
        pUVar35 = (pUVar31->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar31 = Z_Construct_UClass_UClothingSimulationFactory_NoRegister();
        iVar26 = (int)pUVar31->_padding_;
        if (((*(int *)(*(longlong *)&pUVar35->field_0x10 + 0x38) < iVar26) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar35->field_0x10 + 0x30) + (longlong)iVar26 * 8) !=
             &pUVar31->_padding_)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ret->IsA(T::StaticClass())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                ,0x1181,L""), bVar22)) {
          pcVar6 = (code *)swi(3);
          uVar23 = (*pcVar6)();
          return (bool)uVar23;
        }
        cVar24 = (**(code **)(*(longlong *)pUVar35 + 0x2d8))(pUVar35,this);
        if (cVar24 != '\0') {
          (**(code **)(*(longlong *)pUVar35 + 0x2f8))(pUVar35,&local_2c8);
          local_3e0 = local_2c8;
          local_390 = local_2c8 + local_2c0;
          if (local_2c8 != local_390) {
            pTVar48 = (TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
                       *)&this->ClothConfigs;
            local_3f8 = pTVar48;
LAB_148c1f6a4:
            pUVar31 = (UClass *)*local_3e0;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar31 != (UClass *)0x0) goto LAB_148c1f6c4;
LAB_148c1f6f8:
              pUVar32 = (UClass *)0x0;
            }
            else {
              if (pUVar31 == (UClass *)0x0) goto LAB_148c1f6f8;
              UE::GC::MarkAsReachable((UObject *)pUVar31);
LAB_148c1f6c4:
              pUVar32 = Z_Construct_UClass_UClothConfigBase_NoRegister();
              if (pUVar32 == (UClass *)0x0) goto LAB_148c1f6f8;
              iVar26 = (int)pUVar32->_padding_;
              if (((int)pUVar31->_padding_ < iVar26) ||
                 ((longlong *)*(undefined1 **)(pUVar31->_padding_ + (longlong)iVar26 * 8) !=
                  &pUVar32->_padding_)) {
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
              pUVar32 = pUVar31;
              if (!bVar22) goto LAB_148c1f6f8;
            }
            lVar29 = pUVar32->_padding_;
            local_3a0 = lVar29;
            uVar27 = ::GetTypeHash((FNameEntryId)(uint)lVar29);
            if (*(int *)&(pTVar48->Elements).field_0x8 != *(int *)&(pTVar48->Elements).field_0x34) {
              FVar2 = (pTVar48->Hash).SecondaryData;
              FVar41 = (ForElementType<FSetElementId>)&pTVar48->Hash;
              if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                FVar41 = FVar2;
              }
              iVar26 = *(int *)((longlong)FVar41 +
                               (ulonglong)
                               (pTVar48->HashSize - 1U & (int)((ulonglong)lVar29 >> 0x20) + uVar27)
                               * 4);
              if (iVar26 != -1) {
                lVar3 = *(longlong *)&pTVar48->Elements;
                do {
                  if (*(longlong *)(lVar3 + (longlong)iVar26 * 0x18) == lVar29) {
                    if ((iVar26 != -1) && (lVar3 = lVar3 + (longlong)iVar26 * 0x18, lVar3 != 0)) {
                      local_408 = (longlong *)(lVar3 + 8);
                      if ((local_408 == (longlong *)0x0) || (*local_408 == 0)) goto LAB_148c1f7ab;
                      goto LAB_148c1fed8;
                    }
                    break;
                  }
                  iVar26 = *(int *)(lVar3 + 0x10 + (longlong)iVar26 * 0x18);
                } while (iVar26 != -1);
              }
            }
            local_408 = (longlong *)0x0;
LAB_148c1f7ab:
            plVar30 = local_408;
            pUVar32 = (UClass *)0x0;
            if ((pUVar31 == (UClass *)0x0) ||
               (pUVar33 = Z_Construct_UClass_UClothConfigBase_NoRegister(), pUVar33 == (UClass *)0x0
               )) {
LAB_148c1f7e2:
              pUVar33 = pUVar32;
            }
            else {
              iVar26 = (int)pUVar33->_padding_;
              if (((int)pUVar31->_padding_ < iVar26) ||
                 ((longlong *)*(undefined1 **)(pUVar31->_padding_ + (longlong)iVar26 * 8) !=
                  &pUVar33->_padding_)) {
                bVar25 = false;
              }
              else {
                bVar25 = true;
              }
              pUVar33 = pUVar31;
              if (!bVar25) goto LAB_148c1f7e2;
            }
            local_3b0 = (FName)pUVar33->_padding_;
            ::FName::ToString(&local_3b0,&local_360);
            uVar27 = 0;
            if (local_360.Data.ArrayNum == 0) {
              FVar44.Data = (FScriptContainerElement *)L"";
LAB_148c1f815:
              sVar34 = wcslen((wchar_t *)FVar44.Data);
              uVar45 = (uint)sVar34;
            }
            else {
              FVar44.Data = local_360.Data.AllocatorInstance.Data;
              uVar45 = uVar27;
              if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_148c1f815;
            }
            uStack_364 = local_15c;
            local_378.Value = (UClothConfigBase **)FVar44.Data;
            uStack_368 = uVar45;
            if ((pUVar31 == (UClass *)0x0) ||
               (pUVar33 = Z_Construct_UClass_UClothConfigBase_NoRegister(), pUVar33 == (UClass *)0x0
               )) {
LAB_148c1f85e:
              pUVar33 = pUVar32;
            }
            else {
              iVar26 = (int)pUVar33->_padding_;
              if (((int)pUVar31->_padding_ < iVar26) ||
                 ((longlong *)*(undefined1 **)(pUVar31->_padding_ + (longlong)iVar26 * 8) !=
                  &pUVar33->_padding_)) {
                bVar25 = false;
              }
              else {
                bVar25 = true;
              }
              pUVar33 = pUVar31;
              if (!bVar25) goto LAB_148c1f85e;
            }
            local_2d8._12_4_ = uStack_364;
            local_2d8.Size = uStack_368;
            local_2d8.DataPtr = (wchar_t *)local_378.Value;
            pUVar35 = StaticFindObject(pUVar33,(UObject *)this,&local_2d8,ExactClass);
            if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_360.Data.AllocatorInstance.Data);
            }
            if (pUVar35 != (UObject *)0x0) {
              if ((pUVar31 == (UClass *)0x0) ||
                 (pUVar33 = Z_Construct_UClass_UClothConfigBase_NoRegister(),
                 pUVar33 == (UClass *)0x0)) {
LAB_148c1f8d2:
                pUVar33 = pUVar32;
              }
              else {
                iVar26 = (int)pUVar33->_padding_;
                if (((int)pUVar31->_padding_ < iVar26) ||
                   ((longlong *)*(undefined1 **)(pUVar31->_padding_ + (longlong)iVar26 * 8) !=
                    &pUVar33->_padding_)) {
                  bVar25 = false;
                }
                else {
                  bVar25 = true;
                }
                pUVar33 = pUVar31;
                if (!bVar25) goto LAB_148c1f8d2;
              }
              local_3a8 = (FName)pUVar33->_padding_;
              ::FName::ToString(&local_3a8,&local_350);
              FVar44.Data = (FScriptContainerElement *)L"";
              if (local_350.Data.ArrayNum != 0) {
                FVar44.Data = local_350.Data.AllocatorInstance.Data;
              }
              if (this == (UClothingAssetCommon *)0x0) {
                ::FString::FString(&local_3d0,L"None");
              }
              else {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this,&local_3d0,(UObject *)0x0);
              }
              local_458 = (FScriptContainerElement *)L"";
              if (local_3d0.Data.ArrayNum != 0) {
                local_458 = local_3d0.Data.AllocatorInstance.Data;
              }
              local_450 = FVar44.Data;
              bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!StaticFindObject(ClothConfigClass, this, *ClothConfigClass->GetName(), EFindObjectFlags::ExactClass)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothingAsset.cpp"
                                  ,0x52c,
                                  L"Found an existing instance of ClothConfigClass in %s. Class:%s")
              ;
              if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
              }
              if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_350.Data.AllocatorInstance.Data);
              }
              if (bVar25) {
                pcVar6 = (code *)swi(3);
                uVar23 = (*pcVar6)();
                return (bool)uVar23;
              }
            }
            if ((pUVar31 == (UClass *)0x0) ||
               (pUVar33 = Z_Construct_UClass_UClothConfigBase_NoRegister(), pUVar33 == (UClass *)0x0
               )) {
LAB_148c1f9b9:
              FVar43 = _DAT_00000018;
              if (pUVar31 != (UClass *)0x0) goto LAB_148c1f9c6;
LAB_148c1f9f5:
              pUVar31 = pUVar32;
            }
            else {
              iVar26 = (int)pUVar33->_padding_;
              if (((int)pUVar31->_padding_ < iVar26) ||
                 ((longlong *)*(undefined1 **)(pUVar31->_padding_ + (longlong)iVar26 * 8) !=
                  &pUVar33->_padding_)) {
                bVar25 = false;
              }
              else {
                bVar25 = true;
              }
              if (!bVar25) goto LAB_148c1f9b9;
              FVar43 = (FName)pUVar31->_padding_;
LAB_148c1f9c6:
              pUVar33 = Z_Construct_UClass_UClothConfigBase_NoRegister();
              if (pUVar33 == (UClass *)0x0) goto LAB_148c1f9f5;
              iVar26 = (int)pUVar33->_padding_;
              if (((int)pUVar31->_padding_ < iVar26) ||
                 ((longlong *)*(undefined1 **)(pUVar31->_padding_ + (longlong)iVar26 * 8) !=
                  &pUVar33->_padding_)) {
                bVar25 = false;
              }
              else {
                bVar25 = true;
              }
              if (!bVar25) goto LAB_148c1f9f5;
            }
            local_3e8 = 0;
            if (FVar43 == (FName)0x0) {
              FObjectInitializer::AssertIfInConstructor
                        ((UObject *)this,
                         L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                        );
            }
            pUVar33 = Z_Construct_UClass_UClothConfigBase_NoRegister();
            CheckIsClassChildOf_Internal(pUVar33,pUVar31);
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_138,pUVar31);
            local_138._48_8_ = (FObjectInstancingGraph *)0x0;
            local_138._56_8_ = (UPackage *)0x0;
            local_138._24_4_ = RF_Transactional;
            local_138._40_8_ = (UObject *)0x0;
            local_138[0x20] = false;
            local_138._8_8_ = this;
            local_138._16_8_ = FVar43;
            pUVar31 = (UClass *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
            if (local_138._64_8_ != 0) {
              plVar38 = (longlong *)(local_138 + 0x50);
              if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
                plVar38 = (longlong *)local_138._104_8_;
              }
              (**(code **)(*plVar38 + 0x10))();
            }
            pUVar33 = pUVar32;
            local_3f0 = pUVar31;
            if (pUVar31 != (UClass *)0x0) {
              pUVar36 = UClothConfigCommon::StaticClass();
              iVar26 = (int)pUVar36->_padding_;
              if ((iVar26 <= *(int *)(pUVar31->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar31->_padding_ + 0x30) + (longlong)iVar26 * 8)
                  == &pUVar36->_padding_)) {
                pUVar33 = pUVar31;
                local_408 = plVar30;
              }
            }
            this_00 = pTVar48;
            if (pUVar33 != (UClass *)0x0) {
              uVar45 = *(uint *)&(pTVar48->Elements).field_0x28;
              local_330 = &(pTVar48->Elements).field_0x10;
              uStack_334 = 1;
              uStack_324 = uVar27;
              local_320 = uVar27;
              if (uVar45 != 0) {
                puVar4 = *(uint **)&(pTVar48->Elements).field_0x20;
                puVar46 = (uint *)local_330;
                if (puVar4 != (uint *)0x0) {
                  puVar46 = puVar4;
                }
                uVar49 = *puVar46;
                pUVar31 = pUVar32;
                while( true ) {
                  uVar27 = (uint)pUVar32;
                  local_320 = (uint)pUVar31;
                  if (uVar49 != 0) break;
                  uVar27 = uVar27 + 1;
                  pUVar32 = (UClass *)(ulonglong)uVar27;
                  local_320 = local_320 + 0x20;
                  pUVar31 = (UClass *)(ulonglong)local_320;
                  uStack_324 = uVar45;
                  if ((int)(((int)(uVar45 - 1) >> 0x1f & 0x1fU) + (uVar45 - 1)) >> 5 < (int)uVar27)
                  goto LAB_148c1fb5e;
                  uVar49 = puVar46[(int)uVar27];
                }
                uStack_334 = -uVar49 & uVar49;
                uVar42 = (ulonglong)uStack_334 * 2 + 1;
                lVar29 = 0x3f;
                if (uVar42 != 0) {
                  for (; uVar42 >> lVar29 == 0; lVar29 = lVar29 + -1) {
                  }
                }
                local_380 = (int)lVar29;
                uStack_324 = local_380 + -1 + local_320;
                if ((int)uVar45 < (int)uStack_324) {
                  uStack_324 = uVar45;
                }
              }
LAB_148c1fb5e:
              uVar45 = *(uint *)&(pTVar48->Elements).field_0x28;
              uStack_31c = local_13c;
              uVar49 = uVar45 & 0xffffffe0;
              iStack_318 = *(int *)&(pTVar48->Elements).field_0x8 -
                           *(int *)&(pTVar48->Elements).field_0x34;
              puVar47 = &(pTVar48->Elements).field_0x10;
              TStack_308._padding_ = CONCAT44(uStack_334,uVar27);
              uStack_328 = 0xffffffff;
              TStack_308.CurrentBitIndex = uStack_324;
              TStack_308.UnvisitedBitMask = 0xffffffff;
              iVar26 = (int)uVar45 >> 5;
              TStack_308._28_4_ = local_13c;
              TStack_308.BaseBitIndex = local_320;
              uStack_2e8 = CONCAT44(uStack_314,iStack_318);
              local_340 = pTVar48;
              uStack_338 = uVar27;
              local_310 = pTVar48;
              TStack_308.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_330;
              if ((((int)uVar45 < 0) || (*(int *)&(pTVar48->Elements).field_0x28 < (int)uVar45)) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x7af,L""), bVar25)) {
                pcVar6 = (code *)swi(3);
                uVar23 = (*pcVar6)();
                return (bool)uVar23;
              }
              this_00 = local_3f8;
              uVar27 = *(uint *)&(pTVar48->Elements).field_0x28;
              if (uVar45 != uVar27) {
                puVar5 = *(undefined1 **)&(pTVar48->Elements).field_0x20;
                puVar39 = puVar47;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar39 = puVar5;
                }
                uVar45 = -1 << ((byte)uVar45 & 0x1f) & *(uint *)(puVar39 + (longlong)iVar26 * 4);
                while (uVar45 == 0) {
                  iVar26 = iVar26 + 1;
                  uVar49 = uVar49 + 0x20;
                  uVar45 = uVar27;
                  if ((int)(((int)(uVar27 - 1) >> 0x1f & 0x1fU) + (uVar27 - 1)) >> 5 < iVar26)
                  goto LAB_148c1fc70;
                  uVar45 = *(uint *)(puVar39 + (longlong)iVar26 * 4);
                }
                uVar42 = (ulonglong)(-uVar45 & uVar45) * 2 + 1;
                lVar29 = 0x3f;
                if (uVar42 != 0) {
                  for (; uVar42 >> lVar29 == 0; lVar29 = lVar29 + -1) {
                  }
                }
                local_37c = (int)lVar29;
                uVar45 = local_37c + -1 + uVar49;
                if ((int)uVar27 < (int)uVar45) {
                  uVar45 = uVar27;
                }
              }
LAB_148c1fc70:
              do {
                pTVar48 = local_310;
                if (*(int *)&(local_310->Elements).field_0x8 -
                    *(int *)&(local_310->Elements).field_0x34 != (int)uStack_2e8) {
                  local_427[0] = 0;
                  `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_427);
                }
                if (((TStack_308.CurrentBitIndex == uVar45) &&
                    (TStack_308.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar47)) &&
                   (pTVar48 == this_00)) break;
                lVar29 = *(longlong *)&pTVar48->Elements;
                local_3c0 = *(undefined8 *)(lVar29 + (longlong)TStack_308.CurrentBitIndex * 0x18);
                local_3b8 = (FObjectPtr_u_0)
                            ((FObjectPtr_u_0 *)
                            (lVar29 + 8 + (longlong)TStack_308.CurrentBitIndex * 0x18))->Handle;
                if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_148c1fcde:
                  if (local_3b8.Handle == (UObject *)0x0) goto LAB_148c1fcfe;
                  pUVar31 = UClothConfigCommon::StaticClass();
                  bVar25 = FObjectPtr::IsA((FObjectPtr *)&local_3b8,pUVar31);
                  FVar40 = local_3b8;
                  if (!bVar25) goto LAB_148c1fcfe;
                }
                else {
                  if (local_3b8.Handle != (UObject *)0x0) {
                    UE::GC::MarkAsReachable(local_3b8.Handle);
                    goto LAB_148c1fcde;
                  }
LAB_148c1fcfe:
                  FVar40.Handle = (UObject *)0x0;
                }
                if (FVar40.Handle != (UObject *)0x0) {
                  local_238 = uVar14;
                  local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  local_220 = uVar13;
                  local_298[0] = 0;
                  local_294 = 0x3f800000;
                  local_290 = 0x3f800000;
                  local_28c = 0x3f800000;
                  local_288 = uVar11;
                  uStack_280 = uVar12;
                  local_278 = uVar11;
                  uStack_270 = uVar12;
                  local_268 = uVar11;
                  uStack_260 = uVar12;
                  local_258 = uVar9;
                  uStack_250 = uVar10;
                  local_248 = uVar17;
                  uStack_240 = uVar18;
                  local_230 = 0x3dcccccd;
                  local_22c = 0x3951b717;
                  local_228 = 0x3951b717;
                  local_218 = uVar15;
                  uStack_210 = uVar16;
                  local_208 = uVar15;
                  uStack_200 = uVar16;
                  local_1f8 = uVar19;
                  uStack_1f0 = uVar20;
                  local_1e8 = uVar7;
                  uStack_1e0 = uVar8;
                  local_1d8 = uVar7;
                  uStack_1d0 = uVar8;
                  local_1c8 = uVar7;
                  uStack_1c0 = uVar8;
                  local_1b8 = uVar7;
                  uStack_1b0 = uVar8;
                  local_1a8 = 0x42f00000;
                  local_1a4 = 0x42c80000;
                  local_1a0 = 0x3f800000;
                  local_180 = 0;
                  local_17c = 0x3f800000;
                  local_178 = uVar11;
                  uStack_170 = uVar12;
                  cVar24 = (**(code **)(*(longlong *)FVar40.Handle + 0x2f0))
                                     (SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                                            0),local_298);
                  if (cVar24 != '\0') goto LAB_148c1fe38;
                }
                TStack_308.UnvisitedBitMask =
                     TStack_308.UnvisitedBitMask & ~TStack_308._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_308);
              } while( true );
            }
            goto LAB_148c1fe4f;
          }
        }
      }
    }
LAB_148c1feee:
    uVar37 = (ulonglong)local_418;
    FVar44.Data = local_3d8 + 8;
    uVar42 = (ulonglong)local_400;
  } while( true );
LAB_148c1fe38:
  (**(code **)(pUVar33->_padding_ + 0x2e8))(pUVar33,local_298);
LAB_148c1fe4f:
  if ((local_3f0 == (UClass *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClothConfig",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothingAsset.cpp"
                          ,0x543,L""), bVar25)) {
    pcVar6 = (code *)swi(3);
    uVar23 = (*pcVar6)();
    return (bool)uVar23;
  }
  pUVar31 = local_3f0;
  plVar30 = local_408;
  if (local_408 == (longlong *)0x0) {
    local_2b8 = &local_3a0;
    local_2b0 = &local_3f0;
    TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,UClothConfigBase_*_const_&>_>
              (this_00,&local_378,(bool *)&local_2b8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3f0 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_3f0);
    }
    *plVar30 = (longlong)pUVar31;
  }
  bVar25 = true;
  this = local_398;
  pTVar48 = this_00;
LAB_148c1fed8:
  local_3e0 = local_3e0 + 1;
  if (local_3e0 == local_390) goto LAB_148c1feee;
  goto LAB_148c1f6a4;
}

// CalculateReferenceBoneIndex @ 148c215c0

void __thiscall UClothingAssetCommon::CalculateReferenceBoneIndex(UClothingAssetCommon *this)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  UClass *pUVar12;
  longlong lVar13;
  int *piVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  float *pfVar19;
  longlong lVar20;
  float *pfVar21;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar22;
  uint uVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  float *local_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  longlong *local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_70 [3];
  
  plVar4 = (longlong *)this->_padding_;
  this->ReferenceBoneIndex = 0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_88 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    pUVar12 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    fVar6 = __real_322bcc77;
    iVar10 = (int)pUVar12->_padding_;
    if ((iVar10 <= *(int *)(plVar4[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar12->_padding_)) {
      local_a0 = (this->LodData).ArrayNum;
      uVar15 = (ulonglong)(int)local_a0;
      pFVar16 = (this->LodData).AllocatorInstance.Data;
      local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar17 = pFVar16 + 0x98;
      local_90 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar16 + uVar15 * 0x158);
      local_70[0].ArrayNum = 0;
      local_70[0].ArrayMax = 0;
      while( true ) {
        pTVar22 = local_90;
        if ((this->LodData).ArrayNum != (int)uVar15) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FClothLODDataCommon,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar17 + -0x98) == pTVar22) break;
        local_a4 = *(uint *)pFVar17;
        uVar15 = (ulonglong)(int)local_a4;
        pfVar25 = (float *)(*(longlong *)(pFVar17 + -8) + 0x1c);
        local_98 = (float *)(uVar15 * 0x4c + *(longlong *)(pFVar17 + -8));
        while( true ) {
          pfVar19 = local_98;
          if (*(int *)pFVar17 != (int)uVar15) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FClothVertBoneData_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res18);
          }
          if (pfVar25 + -7 == pfVar19) break;
          lVar24 = 0;
          pfVar19 = pfVar25 + -6;
          pfVar21 = pfVar25;
          do {
            if (*pfVar21 <= fVar6) break;
            uVar2 = *(ushort *)pfVar19;
            if (((this->UsedBoneIndices).ArrayNum <= (int)(uint)uVar2) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("UsedBoneIndices.IsValidIndex(UnmappedBoneIndex)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothingAsset.cpp"
                                   ,0x3bb,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (((this->UsedBoneIndices).ArrayNum <= (int)(uint)uVar2) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (local_70,(int *)((this->UsedBoneIndices).AllocatorInstance.Data +
                                       (ulonglong)uVar2 * 4));
            lVar24 = lVar24 + 1;
            pfVar21 = pfVar21 + 1;
            pfVar19 = (float *)((longlong)pfVar19 + 2);
          } while (lVar24 < 0xc);
          pfVar25 = pfVar25 + 0x13;
          uVar15 = (ulonglong)local_a4;
        }
        pFVar17 = pFVar17 + 0x158;
        uVar15 = (ulonglong)local_a0;
      }
      iVar10 = local_70[0].ArrayNum;
      lVar24 = (longlong)local_70[0].ArrayNum;
      if (local_70[0].ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_70[0]._8_8_ & 0xffffffff);
      }
      if ((int)local_78._4_4_ < local_70[0].ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_70[0].ArrayNum,&local_80,(uint)local_78,
                   (int *)((longlong)&local_78 + 4));
      }
      lVar13 = (**(code **)(*local_88 + 0x318))();
      uVar23 = 0;
      lVar26 = 0;
      if (0 < iVar10) {
        do {
          uVar8 = (uint)local_78;
          if ((uint)local_78 == local_78._4_4_) {
            uVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_80,(int *)((longlong)&local_78 + 4));
          }
          iVar10 = uVar8 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar10);
          *(undefined8 *)&local_80.Data[(longlong)(int)uVar8 * 0x10].field_0x0 = 0;
          *(undefined8 *)(local_80.Data + (longlong)(int)uVar8 * 0x10 + 8) = 0;
          uVar9 = 0;
          if ((int)uVar8 < iVar10) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = (uint)local_78;
          }
          pFVar17 = local_80.Data + (longlong)(iVar10 + -1) * 0x10;
          uVar8 = 0;
          if ((int)uVar23 < local_70[0].ArrayNum) {
            uVar8 = ~uVar23 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_a8 = *(uint *)(local_70[0].AllocatorInstance.Data + lVar26 * 4);
          if (((*(uint **)&pFVar17->field_0x0 <= &local_a8) &&
              (&local_a8 < *(uint **)&pFVar17->field_0x0 + *(int *)(pFVar17 + 0xc))) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar10 = *(int *)(pFVar17 + 8);
          if (iVar10 == *(int *)(pFVar17 + 0xc)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 0xc));
          }
          *(int *)(pFVar17 + 8) = iVar10 + 1;
          *(uint *)(*(longlong *)&pFVar17->field_0x0 + (longlong)iVar10 * 4) = local_a8;
          uVar8 = local_a8;
          while ((local_a8 = uVar8, uVar8 != 0 && (uVar8 != 0xffffffff))) {
            uVar9 = 0;
            if ((int)uVar8 < *(int *)(lVar13 + 0x28)) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_a8 = *(uint *)(*(longlong *)(lVar13 + 0x20) + 8 + (longlong)(int)uVar8 * 0xc);
            if (((*(uint **)&pFVar17->field_0x0 <= &local_a8) &&
                (&local_a8 < *(uint **)&pFVar17->field_0x0 + *(int *)(pFVar17 + 0xc))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = *(int *)(pFVar17 + 8);
            if (iVar10 == *(int *)(pFVar17 + 0xc)) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 0xc));
            }
            *(int *)(pFVar17 + 8) = iVar10 + 1;
            *(uint *)(*(longlong *)&pFVar17->field_0x0 + (longlong)iVar10 * 4) = local_a8;
            uVar8 = local_a8;
          }
          uVar23 = uVar23 + 1;
          lVar26 = lVar26 + 1;
        } while (lVar26 < lVar24);
      }
      iVar10 = (uint)local_78;
      pTVar22 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                (local_80.Data + (longlong)(int)(uint)local_78 * 0x10);
      FVar18.Data = local_80.Data;
      while( true ) {
        if ((uint)local_78 != iVar10) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res20);
        }
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data == pTVar22) break;
        lVar24 = 0;
        pFVar17 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->AllocatorInstance).Data
        ;
        iVar11 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum / 2;
        if (0 < iVar11) {
          pFVar16 = pFVar17 + (longlong)
                              (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum +
                              -1) * 4;
          do {
            uVar3 = *(undefined4 *)(pFVar17 + lVar24 * 4);
            *(undefined4 *)(pFVar17 + lVar24 * 4) = *(undefined4 *)pFVar16;
            lVar24 = lVar24 + 1;
            *(undefined4 *)pFVar16 = uVar3;
            pFVar16 = pFVar16 + -4;
          } while (lVar24 < iVar11);
        }
        FVar18.Data = FVar18.Data + 0x10;
      }
      lVar24 = (longlong)(int)(uint)local_78;
      if ((int)(uint)local_78 < 1) {
        this->ReferenceBoneIndex = 0;
      }
      else {
        uVar23 = 0;
        local_90 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_80.Data;
        lVar13 = 0;
        local_88 = (longlong *)(longlong)*(int *)(local_80.Data + 8);
        if (0 < (longlong)local_88) {
          do {
            pTVar22 = local_90;
            uVar8 = 0;
            if ((int)uVar23 < local_90->ArrayNum) {
              uVar8 = ~uVar23 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar8 = 1;
            lVar26 = 1;
            iVar10 = *(int *)((pTVar22->AllocatorInstance).Data + lVar13 * 4);
            if (1 < lVar24) {
              lVar20 = 0x10;
              do {
                uVar9 = 0;
                if ((int)uVar8 < (int)(uint)local_78) {
                  uVar9 = ~uVar8 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                piVar14 = *(int **)(local_80.Data + lVar20);
                piVar1 = piVar14 + *(int *)(local_80.Data + lVar20 + 8);
                while( true ) {
                  if (piVar14 == piVar1) goto LAB_148c21c6b;
                  if (*piVar14 == iVar10) break;
                  piVar14 = piVar14 + 1;
                }
                uVar8 = uVar8 + 1;
                lVar26 = lVar26 + 1;
                lVar20 = lVar20 + 0x10;
              } while (lVar26 < lVar24);
            }
            uVar23 = uVar23 + 1;
            lVar13 = lVar13 + 1;
            this->ReferenceBoneIndex = iVar10;
          } while (lVar13 < (longlong)local_88);
        }
      }
LAB_148c21c6b:
      if (local_70[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70[0].AllocatorInstance.Data);
      }
    }
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_80.Data,(uint)local_78);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_80.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_80.Data);
  }
  return;
}

// GetNumLods @ 148c2c860

int __thiscall UClothingAssetCommon::GetNumLods(UClothingAssetCommon *this)

{
  return (this->LodData).ArrayNum;
}

// GetPrivateStaticClass @ 148c2d830

UClass * __cdecl UClothingAssetCommon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingAssetCommon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothingAssetCommon",
               &Z_Registration_Info_UClass_UClothingAssetCommon.InnerSingleton,
               StaticRegisterNativesUClothingAssetCommon,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UClothingAssetCommon>,
               InternalVTableHelperCtorCaller<UClothingAssetCommon>,local_res8,
               UClothingAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingAssetCommon.InnerSingleton;
}

// IsValidLod @ 148c2daa0

bool __thiscall UClothingAssetCommon::IsValidLod(UClothingAssetCommon *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->LodData).ArrayNum)) {
    return true;
  }
  return false;
}

// PostLoad @ 148c2e620

void __thiscall UClothingAssetCommon::PostLoad(UClothingAssetCommon *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UClothingAssetCommon **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PostUpdateAllAssets @ 148c2e630

void __thiscall UClothingAssetCommon::PostUpdateAllAssets(UClothingAssetCommon *this)

{
  AddClothConfigs(this);
  PropagateSharedConfigs(this,false);
  return;
}

// PropagateSharedConfigs @ 148c2f4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UClothingAssetCommon::PropagateSharedConfigs(UClothingAssetCommon *this,bool param_1)

{
  TMap<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
  *pTVar1;
  longlong *plVar2;
  UClothingAssetCommon *this_00;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  FName FVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  TMap<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  byte bVar15;
  ulonglong uVar16;
  ForElementType<FSetElementId> FVar17;
  undefined1 *puVar18;
  uint uVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  undefined8 *puVar21;
  longlong lVar22;
  USkeletalMesh *this_01;
  int iVar23;
  int iVar24;
  uint *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint *puVar28;
  FScriptContainerElement *pFVar29;
  undefined1 auStack_2a8 [32];
  undefined1 local_288;
  undefined1 local_287;
  undefined1 local_286;
  undefined1 local_285;
  char local_284;
  undefined1 local_283 [3];
  uint local_280;
  TMap<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
  *local_278;
  undefined8 uStack_270;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_268;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_258;
  undefined4 uStack_254;
  int local_250;
  undefined4 uStack_24c;
  USkeletalMesh *local_248;
  FScriptContainerElement *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_218;
  undefined1 local_1f8 [16];
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  longlong local_1d8;
  TBitArray<FDefaultBitArrayAllocator> *local_1d0;
  TMap<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
  *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  TMap<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  TMap<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  longlong *local_108;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_cc;
  undefined4 local_ac;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  this_01 = (USkeletalMesh *)this->_padding_;
  local_284 = param_1;
  if (this_01 != (USkeletalMesh *)0x0) {
    local_248 = this_01;
    pUVar13 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar23 = (int)pUVar13->_padding_;
    if ((iVar23 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar23 * 8) ==
        &pUVar13->_padding_)) goto LAB_148c2f50b;
  }
  local_248 = (USkeletalMesh *)0x0;
  this_01 = (USkeletalMesh *)0x0;
LAB_148c2f50b:
  if (this_01 != (USkeletalMesh *)0x0) {
    USkeletalMesh::WaitUntilAsyncPropertyReleased(this_01,MeshClothingAssets,ReadWrite);
    local_280 = (this_01->MeshClothingAssets).ArrayNum;
    uVar16 = (ulonglong)(int)local_280;
    pFVar29 = (this_01->MeshClothingAssets).AllocatorInstance.Data;
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    local_240 = pFVar29 + uVar16 * 8;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    while( true ) {
      pFVar8 = local_240;
      iVar23 = 0;
      uVar27 = 0;
      if ((this_01->MeshClothingAssets).ArrayNum != (int)uVar16) {
        local_288 = 0;
        `TCheckedPointerIterator<UClothingAssetBase_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_288);
      }
      uVar11 = local_60;
      if (pFVar29 == pFVar8) break;
      this_00 = *(UClothingAssetCommon **)pFVar29;
      if (((this_00 != this) && (this_00 != (UClothingAssetCommon *)0x0)) &&
         (bVar10 = UObjectBaseUtility::IsA<UClothingAssetCommon>((UObjectBaseUtility *)this_00),
         bVar10)) {
        pTVar1 = &this_00->ClothConfigs;
        TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
        ::Reserve((TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
                   *)local_88,
                  ((local_88._8_4_ - *(int *)&(this_00->ClothConfigs).field_0x34) - local_54) +
                  *(int *)&(this_00->ClothConfigs).field_0x8);
        pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this_00->ClothConfigs).field_0x10;
        local_218._padding_._0_4_ = 0;
        local_218._padding_._4_4_ = 1;
        local_218.UnvisitedBitMask = 0xffffffff;
        local_218.CurrentBitIndex = 0;
        local_218.BaseBitIndex = 0;
        local_218.Array = pTVar20;
        if (*(int *)&(this_00->ClothConfigs).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_218);
        }
        uVar27 = *(uint *)&(this_00->ClothConfigs).field_0x28;
        uStack_270 = CONCAT44(local_218._padding_._4_4_,(undefined4)local_218._padding_);
        bVar15 = (byte)uVar27 & 0x1f;
        local_250 = *(int *)&(this_00->ClothConfigs).field_0x8 -
                    *(int *)&(this_00->ClothConfigs).field_0x34;
        uStack_25c = local_218.CurrentBitIndex;
        uStack_260 = local_218.UnvisitedBitMask;
        uStack_254 = local_218._28_4_;
        uStack_258 = local_218.BaseBitIndex;
        local_238._padding_._0_4_ = (int)uVar27 >> 5;
        local_238._padding_._4_4_ = 1 << bVar15;
        local_238.UnvisitedBitMask = -1 << bVar15;
        pTStack_268 = local_218.Array;
        local_238.BaseBitIndex = uVar27 & 0xffffffe0;
        uStack_1a0 = CONCAT44(uStack_24c,local_250);
        TStack_1c0.Array = local_218.Array;
        local_278 = pTVar1;
        local_238.Array = pTVar20;
        local_238.CurrentBitIndex = uVar27;
        local_1c8 = pTVar1;
        TStack_1c0._padding_ = uStack_270;
        TStack_1c0._16_8_ = _uStack_260;
        TStack_1c0._24_8_ = _uStack_258;
        if (((int)uVar27 < 0) ||
           (uVar11 = *(uint *)&(this_00->ClothConfigs).field_0x28, (int)uVar11 < (int)uVar27)) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L"");
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar11 = *(uint *)&(this_00->ClothConfigs).field_0x28;
        }
        if (uVar27 != uVar11) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
          pTVar20 = local_238.Array;
          uVar27 = local_238.CurrentBitIndex;
        }
        while( true ) {
          pTVar9 = local_1c8;
          if (*(int *)&local_1c8->field_0x8 - *(int *)&local_1c8->field_0x34 != (int)uStack_1a0) {
            local_287 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_287);
          }
          if (((TStack_1c0.CurrentBitIndex == uVar27) && (TStack_1c0.Array == pTVar20)) &&
             (this_01 = local_248, pTVar9 == pTVar1)) break;
          lVar22 = *(longlong *)pTVar9;
          plVar2 = (longlong *)(lVar22 + (longlong)TStack_1c0.CurrentBitIndex * 0x18);
          if (*(longlong *)(lVar22 + 8 + (longlong)TStack_1c0.CurrentBitIndex * 0x18) != 0) {
            pUVar13 = UClothSharedConfigCommon::StaticClass();
            bVar10 = FObjectPtr::IsA((FObjectPtr *)(plVar2 + 1),pUVar13);
            if ((bVar10) && (plVar2[1] != 0)) {
              lVar22 = *plVar2;
              uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar22);
              if (local_88._8_4_ != local_54) {
                FVar17 = (ForElementType<FSetElementId>)local_50;
                if (local_48 != (ForElementType<FSetElementId>)0x0) {
                  FVar17 = local_48;
                }
                for (iVar23 = *(int *)((longlong)FVar17 +
                                      (ulonglong)
                                      (local_40 - 1U & (int)((ulonglong)lVar22 >> 0x20) + uVar11) *
                                      4); iVar23 != -1;
                    iVar23 = *(int *)(local_88._0_8_ + 0x10 + (longlong)iVar23 * 0x18)) {
                  if (*(longlong *)(local_88._0_8_ + (longlong)iVar23 * 0x18) == lVar22) {
                    if (((iVar23 != -1) &&
                        (lVar22 = local_88._0_8_ + (longlong)iVar23 * 0x18, lVar22 != 0)) &&
                       (lVar22 != -8)) goto LAB_148c2f840;
                    break;
                  }
                }
              }
              local_100 = plVar2 + 1;
              local_108 = plVar2;
              TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<UClothConfigBase>_const_&>_>
                        ((TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
                          *)local_88,
                         (TPairInitializer<FName_const_&,TObjectPtr<UClothConfigBase>_const_&> *)
                         local_1f8,(bool *)&local_108);
            }
          }
LAB_148c2f840:
          TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
        }
      }
      uVar16 = (ulonglong)local_280;
      pFVar29 = pFVar29 + 8;
    }
    uVar12 = 1;
    uStack_25c = uVar27;
    if (local_60 != 0) {
      puVar25 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar25 = local_68;
      }
      uVar19 = *puVar25;
      while (uVar19 == 0) {
        iVar23 = iVar23 + 1;
        uVar27 = uVar27 + 0x20;
        uStack_25c = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_148c2f900;
        uVar19 = puVar25[iVar23];
      }
      uVar12 = ~(uVar19 - 1) & uVar19;
      uVar16 = (ulonglong)uVar12 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_1f8._4_4_ = (undefined4)lVar22;
      uStack_25c = local_1f8._4_4_ + -1 + uVar27;
      if ((int)local_60 < (int)uStack_25c) {
        uStack_25c = local_60;
      }
    }
LAB_148c2f900:
    local_278 = (TMap<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
                 *)local_88;
    pTStack_268 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uVar19 = local_60 & 0xffffffe0;
    local_250 = local_88._8_4_ - local_54;
    uStack_270 = CONCAT44(uVar12,iVar23);
    uStack_260 = 0xffffffff;
    uStack_254 = local_cc;
    uStack_258 = uVar27;
    TStack_190._padding_ = uStack_270;
    iVar23 = (int)local_60 >> 5;
    uStack_170 = CONCAT44(uStack_24c,local_250);
    bVar15 = (byte)local_60;
    TStack_190.UnvisitedBitMask = 0xffffffff;
    TStack_190.CurrentBitIndex = uStack_25c;
    TStack_190.BaseBitIndex = uVar27;
    TStack_190._28_4_ = local_cc;
    local_198 = (longlong *)local_278;
    TStack_190.Array = pTStack_268;
    if (((int)local_60 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (uVar11 != local_60) {
      puVar25 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar25 = local_68;
      }
      uVar27 = -1 << (bVar15 & 0x1f) & puVar25[iVar23];
      while (uVar27 == 0) {
        iVar23 = iVar23 + 1;
        uVar19 = uVar19 + 0x20;
        uVar11 = local_60;
        if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < iVar23)
        goto LAB_148c2fa21;
        uVar27 = puVar25[iVar23];
      }
      uVar16 = (ulonglong)(~(uVar27 - 1) & uVar27) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_1f8._8_4_ = (undefined4)lVar22;
      uVar11 = local_1f8._8_4_ + -1 + uVar19;
      if ((int)local_60 < (int)uVar11) {
        uVar11 = local_60;
      }
    }
LAB_148c2fa21:
    while( true ) {
      plVar2 = local_198;
      if ((int)local_198[1] - *(int *)((longlong)local_198 + 0x34) != (int)uStack_170) {
        local_286 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_286);
      }
      if (((TStack_190.CurrentBitIndex == uVar11) &&
          (TStack_190.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar2 == (longlong *)local_88)) break;
      lVar22 = *plVar2;
      lVar3 = *(longlong *)(lVar22 + (longlong)TStack_190.CurrentBitIndex * 0x18);
      lVar22 = lVar22 + (longlong)TStack_190.CurrentBitIndex * 0x18;
      uVar27 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
      if (*(int *)&(this->ClothConfigs).field_0x8 != *(int *)&(this->ClothConfigs).field_0x34) {
        puVar4 = *(undefined1 **)&(this->ClothConfigs).field_0x40;
        puVar18 = &(this->ClothConfigs).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar18 = puVar4;
        }
        iVar23 = *(int *)(puVar18 +
                         (ulonglong)
                         (*(int *)&(this->ClothConfigs).field_0x48 - 1U &
                         (int)((ulonglong)lVar3 >> 0x20) + uVar27) * 4);
        if (iVar23 != -1) {
          lVar5 = *(longlong *)&this->ClothConfigs;
          do {
            if (*(longlong *)(lVar5 + (longlong)iVar23 * 0x18) == lVar3) {
              if ((iVar23 != -1) && (lVar5 = lVar5 + (longlong)iVar23 * 0x18, lVar5 != 0)) {
                puVar21 = (undefined8 *)(lVar5 + 8);
                if (puVar21 != (undefined8 *)0x0) {
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar14 = *(UObject **)(lVar22 + 8), pUVar14 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar14);
                  }
                  *puVar21 = *(undefined8 *)(lVar22 + 8);
                  goto LAB_148c2fb01;
                }
              }
              break;
            }
            iVar23 = *(int *)(lVar5 + 0x10 + (longlong)iVar23 * 0x18);
          } while (iVar23 != -1);
        }
      }
      local_f0 = lVar22 + 8;
      local_f8 = lVar22;
      TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<UClothConfigBase>_const_&>_>
                ((TSet<TTuple<FName,TObjectPtr<UClothConfigBase>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>,FDefaultSetAllocator>
                  *)&this->ClothConfigs,
                 (TPairInitializer<FName_const_&,TObjectPtr<UClothConfigBase>_const_&> *)
                 (local_1f8 + 0xc),(bool *)&local_f8);
LAB_148c2fb01:
      TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
    }
    local_278 = &this->ClothConfigs;
    iVar24 = 0;
    iVar23 = *(int *)&(this->ClothConfigs).field_0x28;
    pTStack_268 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ClothConfigs).field_0x10;
    uStack_258 = 0;
    uVar27 = 1;
    uStack_25c = 0;
    if (iVar23 != 0) {
      puVar25 = *(uint **)&(this->ClothConfigs).field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)pTStack_268;
      }
      uVar11 = *puVar25;
      while (uVar11 == 0) {
        iVar24 = iVar24 + 1;
        uStack_258 = uStack_258 + 0x20;
        uStack_25c = iVar23;
        if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_148c2fbef;
        uVar11 = puVar25[iVar24];
      }
      uVar27 = ~(uVar11 - 1) & uVar11;
      uVar16 = (ulonglong)uVar27 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_1e8 = (int)lVar22;
      uStack_25c = uStack_258 + -1 + local_1e8;
      if (iVar23 < (int)uStack_25c) {
        uStack_25c = iVar23;
      }
    }
LAB_148c2fbef:
    uVar11 = *(uint *)&(this->ClothConfigs).field_0x28;
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ClothConfigs).field_0x10;
    local_250 = *(int *)&(this->ClothConfigs).field_0x8 - *(int *)&(this->ClothConfigs).field_0x34;
    uVar12 = uVar11 & 0xffffffe0;
    uStack_270 = CONCAT44(uVar27,iVar24);
    uStack_260 = 0xffffffff;
    uStack_254 = local_ac;
    TStack_130._padding_ = uStack_270;
    iVar23 = (int)uVar11 >> 5;
    uStack_110 = CONCAT44(uStack_24c,local_250);
    TStack_130.BaseBitIndex = uStack_258;
    TStack_130._28_4_ = local_ac;
    TStack_130.UnvisitedBitMask = 0xffffffff;
    TStack_130.CurrentBitIndex = uStack_25c;
    local_280 = uVar11;
    local_240 = (FScriptContainerElement *)local_278;
    local_1d0 = pTVar20;
    local_138 = local_278;
    TStack_130.Array = pTStack_268;
    if ((((int)uVar11 < 0) || (*(int *)&(this->ClothConfigs).field_0x28 < (int)uVar11)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar27 = *(uint *)&(this->ClothConfigs).field_0x28;
    if (uVar11 != uVar27) {
      puVar4 = *(undefined1 **)&(this->ClothConfigs).field_0x20;
      puVar18 = (undefined1 *)pTVar20;
      if (puVar4 != (undefined1 *)0x0) {
        puVar18 = puVar4;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar23 * 4);
      while (uVar11 == 0) {
        iVar23 = iVar23 + 1;
        uVar12 = uVar12 + 0x20;
        uVar11 = uVar27;
        local_280 = uVar27;
        if ((int)(((int)(uVar27 - 1) >> 0x1f & 0x1fU) + (uVar27 - 1)) >> 5 < iVar23)
        goto LAB_148c2fd14;
        uVar11 = *(uint *)(puVar18 + (longlong)iVar23 * 4);
      }
      uVar16 = (ulonglong)(~(uVar11 - 1) & uVar11) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_1e4 = (int)lVar22;
      uVar11 = (uVar12 - 1) + local_1e4;
      local_280 = uVar11;
      if ((int)uVar27 < (int)uVar11) {
        uVar11 = uVar27;
        local_280 = uVar27;
      }
    }
LAB_148c2fd14:
    pTVar1 = &this->ClothConfigs;
    while( true ) {
      pTVar9 = local_138;
      if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
        local_285 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_285);
      }
      if (((TStack_130.CurrentBitIndex == uVar11) && (TStack_130.Array == pTVar20)) &&
         (pTVar9 == (TMap<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
                     *)local_240)) break;
      lVar3 = *(longlong *)pTVar9;
      lVar22 = lVar3 + (longlong)TStack_130.CurrentBitIndex * 0x18;
      local_1d8 = lVar22;
      if (*(longlong *)(lVar3 + 8 + (longlong)TStack_130.CurrentBitIndex * 0x18) != 0) {
        pUVar13 = UClothSharedConfigCommon::StaticClass();
        bVar10 = FObjectPtr::IsA((FObjectPtr *)(lVar22 + 8),pUVar13);
        if ((bVar10) && (pUVar14 = *(UObject **)(lVar22 + 8), pUVar14 != (UObject *)0x0)) {
          if (local_284 != '\0') {
            iVar23 = *(int *)&(this->ClothConfigs).field_0x28;
            pTStack_268 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ClothConfigs).field_0x10;
            iVar24 = 0;
            uStack_258 = 0;
            uVar27 = 1;
            uStack_25c = 0;
            if (iVar23 != 0) {
              puVar25 = *(uint **)&(this->ClothConfigs).field_0x20;
              puVar28 = (uint *)pTStack_268;
              if (puVar25 != (uint *)0x0) {
                puVar28 = puVar25;
              }
              uVar11 = *puVar28;
              while (uVar11 == 0) {
                iVar24 = iVar24 + 1;
                uStack_258 = uStack_258 + 0x20;
                uStack_25c = iVar23;
                if ((int)((iVar23 + -1 >> 0x1f & 0x1fU) + iVar23 + -1) >> 5 < iVar24)
                goto LAB_148c2fe2c;
                uVar11 = puVar28[iVar24];
              }
              uVar27 = ~(uVar11 - 1) & uVar11;
              uVar16 = (ulonglong)uVar27 * 2 + 1;
              lVar22 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              local_1e0 = (int)lVar22;
              uStack_25c = uStack_258 + -1 + local_1e0;
              if (iVar23 < (int)uStack_25c) {
                uStack_25c = iVar23;
              }
            }
LAB_148c2fe2c:
            uVar11 = *(uint *)&(this->ClothConfigs).field_0x28;
            puVar4 = &(this->ClothConfigs).field_0x10;
            local_250 = *(int *)&(this->ClothConfigs).field_0x8 -
                        *(int *)&(this->ClothConfigs).field_0x34;
            uVar12 = uVar11 & 0xffffffe0;
            uStack_270 = CONCAT44(uVar27,iVar24);
            uStack_260 = 0xffffffff;
            uStack_254 = local_8c;
            TStack_160._padding_ = uStack_270;
            iVar23 = (int)uVar11 >> 5;
            uStack_140 = CONCAT44(uStack_24c,local_250);
            TStack_160.UnvisitedBitMask = 0xffffffff;
            TStack_160.CurrentBitIndex = uStack_25c;
            TStack_160.BaseBitIndex = uStack_258;
            TStack_160._28_4_ = local_8c;
            local_278 = pTVar1;
            local_168 = pTVar1;
            TStack_160.Array = pTStack_268;
            if ((((int)uVar11 < 0) || (*(int *)&(this->ClothConfigs).field_0x28 < (int)uVar11)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar27 = *(uint *)&(this->ClothConfigs).field_0x28;
            if (uVar11 != uVar27) {
              puVar18 = *(undefined1 **)&(this->ClothConfigs).field_0x20;
              puVar26 = puVar4;
              if (puVar18 != (undefined1 *)0x0) {
                puVar26 = puVar18;
              }
              uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar23 * 4);
              while (uVar11 == 0) {
                iVar23 = iVar23 + 1;
                uVar12 = uVar12 + 0x20;
                uVar11 = uVar27;
                if ((int)(((int)(uVar27 - 1) >> 0x1f & 0x1fU) + (uVar27 - 1)) >> 5 < iVar23)
                goto LAB_148c2ff40;
                uVar11 = *(uint *)(puVar26 + (longlong)iVar23 * 4);
              }
              uVar16 = (ulonglong)(~(uVar11 - 1) & uVar11) * 2 + 1;
              lVar22 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              local_1dc = (int)lVar22;
              uVar11 = (uVar12 - 1) + local_1dc;
              if ((int)uVar27 < (int)uVar11) {
                uVar11 = uVar27;
              }
            }
LAB_148c2ff40:
            while( true ) {
              pTVar9 = local_168;
              if (*(int *)&local_168->field_0x8 - *(int *)&local_168->field_0x34 != (int)uStack_140)
              {
                local_283[0] = 0;
                `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_283);
              }
              if (((TStack_160.CurrentBitIndex == uVar11) &&
                  (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) &&
                 (lVar22 = local_1d8, pTVar20 = local_1d0, pTVar9 == pTVar1)) break;
              lVar3 = *(longlong *)pTVar9;
              lVar22 = lVar3 + (longlong)TStack_160.CurrentBitIndex * 0x18;
              if (*(longlong *)(lVar3 + 8 + (longlong)TStack_160.CurrentBitIndex * 0x18) != 0) {
                pUVar13 = UClothSharedConfigCommon::StaticClass();
                bVar10 = FObjectPtr::IsA((FObjectPtr *)(lVar22 + 8),pUVar13);
                if (((!bVar10) || (*(longlong *)(lVar22 + 8) == 0)) &&
                   (*(longlong *)(lVar22 + 8) != 0)) {
                  pUVar13 = UClothConfigCommon::StaticClass();
                  bVar10 = FObjectPtr::IsA((FObjectPtr *)(lVar22 + 8),pUVar13);
                  if ((bVar10) && (plVar2 = *(longlong **)(lVar22 + 8), plVar2 != (longlong *)0x0))
                  {
                    (**(code **)(*plVar2 + 0x2e0))(plVar2,pUVar14);
                  }
                }
              }
              TStack_160.UnvisitedBitMask =
                   TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
            }
          }
          lVar3 = *(longlong *)&pUVar14->field_0x20;
          if (lVar3 != 0) {
            pUVar13 = StaticClass();
            lVar3 = *(longlong *)(lVar3 + 0x10);
            iVar23 = (int)pUVar13->_padding_;
            if ((iVar23 <= *(int *)(lVar3 + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar23 * 8) ==
                &pUVar13->_padding_)) {
              (**(code **)(*(longlong *)pUVar14 + 0x170))(pUVar14,0);
            }
          }
          uVar11 = local_280;
          if (*(USkeletalMesh **)&pUVar14->field_0x20 != local_248) {
            FVar6.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
            FVar6.Number = *(uint *)&pUVar14->field_0x1c;
            pUVar13 = UClothSharedConfigCommon::StaticClass();
            pUVar14 = DuplicateObject_Internal(pUVar13,pUVar14,(UObject *)local_248,FVar6);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar14);
            }
            *(UObject **)(lVar22 + 8) = pUVar14;
            uVar11 = local_280;
          }
        }
      }
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothConfigBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  return;
}

// RefreshBoneMapping @ 148c30270

void __thiscall
UClothingAssetCommon::RefreshBoneMapping(UClothingAssetCommon *this,USkeletalMesh *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  
  if (param_1 != (USkeletalMesh *)0x0) {
    piVar1 = &(this->UsedBoneIndices).ArrayNum;
    pTVar2 = &this->UsedBoneIndices;
    if ((this->UsedBoneNames).ArrayNum != *piVar1) {
      piVar8 = &(this->UsedBoneIndices).ArrayMax;
      (this->UsedBoneIndices).ArrayNum = 0;
      if ((this->UsedBoneIndices).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar2->AllocatorInstance,0,piVar8);
      }
      iVar11 = (this->UsedBoneNames).ArrayNum;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar11,&pTVar2->AllocatorInstance,piVar1,piVar8);
      memset((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4,0,(longlong)iVar11 << 2);
    }
    uVar10 = 0;
    piVar1 = &(this->UsedBoneNames).ArrayNum;
    if (0 < *piVar1) {
      lVar12 = 0;
      do {
        lVar7 = (**(code **)(param_1->_padding_ + 800))();
        uVar9 = 0;
        if ((int)uVar10 < (this->UsedBoneNames).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = -1;
        FVar3 = *(FName *)((this->UsedBoneNames).AllocatorInstance.Data + lVar12 * 8);
        if ((FVar3 != (FName)0x0) &&
           (piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)(lVar7 + 0x90),FVar3), piVar8 != (int *)0x0)) {
          iVar11 = *piVar8;
        }
        uVar9 = 0;
        if ((int)uVar10 < (this->UsedBoneIndices).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = 0;
        if (iVar11 != -1) {
          iVar6 = iVar11;
        }
        uVar10 = uVar10 + 1;
        *(int *)((pTVar2->AllocatorInstance).Data + lVar12 * 4) = iVar6;
        lVar12 = lVar12 + 1;
      } while ((int)uVar10 < *piVar1);
    }
  }
  return;
}

// Serialize @ 148c31f20

void __thiscall UClothingAssetCommon::Serialize(UClothingAssetCommon *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FClothingAssetCustomVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPhysicsObjectVersion::GUID);
                    /* WARNING: Could not recover jumptable at 0x000148c31f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  return;
}

// Serialize @ 148c31fa0

void __thiscall
UClothingAssetCommon::Serialize(UClothingAssetCommon *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FAnimPhysObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FClothingAssetCustomVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPhysicsObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  return;
}

// StaticRegisterNativesUClothingAssetCommon @ 148c34520

void __cdecl UClothingAssetCommon::StaticRegisterNativesUClothingAssetCommon(void)

{
  return;
}

