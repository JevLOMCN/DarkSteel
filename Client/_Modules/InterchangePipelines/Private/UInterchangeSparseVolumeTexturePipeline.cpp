// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 11

// StaticClass @ 14e72f540

UClass * __cdecl UInterchangeSparseVolumeTexturePipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSparseVolumeTexturePipeline.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeSparseVolumeTexturePipeline",
               &Z_Registration_Info_UClass_UInterchangeSparseVolumeTexturePipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeSparseVolumeTexturePipeline,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSparseVolumeTexturePipeline>
               ,InternalVTableHelperCtorCaller<UInterchangeSparseVolumeTexturePipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSparseVolumeTexturePipeline.InnerSingleton;
}

// UInterchangeSparseVolumeTexturePipeline @ 14e768a90

UInterchangeSparseVolumeTexturePipeline * __thiscall
UInterchangeSparseVolumeTexturePipeline::UInterchangeSparseVolumeTexturePipeline
          (UInterchangeSparseVolumeTexturePipeline *this,FVTableHelper *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportSparseVolumeTextures = true;
  this->bImportAnimatedSparseVolumeTextures = true;
  this->_padding_ = (longlong)&___7UInterchangeSparseVolumeTexturePipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  (this->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetName).Data.ArrayNum = 0;
  (this->AssetName).Data.ArrayMax = 0;
  (this->BaseNodeContainer).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
  return this;
}

// UInterchangeSparseVolumeTexturePipeline @ 14e768af0

UInterchangeSparseVolumeTexturePipeline * __thiscall
UInterchangeSparseVolumeTexturePipeline::UInterchangeSparseVolumeTexturePipeline
          (UInterchangeSparseVolumeTexturePipeline *this,FObjectInitializer *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportSparseVolumeTextures = true;
  this->bImportAnimatedSparseVolumeTextures = true;
  this->_padding_ = (longlong)&___7UInterchangeSparseVolumeTexturePipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  (this->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetName).Data.ArrayNum = 0;
  (this->AssetName).Data.ArrayMax = 0;
  (this->BaseNodeContainer).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
  return this;
}

// ~UInterchangeSparseVolumeTexturePipeline @ 14e76c400

void __thiscall
UInterchangeSparseVolumeTexturePipeline::~UInterchangeSparseVolumeTexturePipeline
          (UInterchangeSparseVolumeTexturePipeline *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeSparseVolumeTexturePipeline__6B_;
  pFVar1 = (this->AssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// operator() @ 14e76eb30

void __thiscall
`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UInterchangeBaseNode *local_18 [2];
  
  if (param_2 != (UInterchangeBaseNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterchangeVolumeNode_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      pFVar2 = *(ForAnyElementType **)this;
      local_18[0] = param_2;
      if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      *(UInterchangeBaseNode **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
      return;
    }
  }
  return;
}

// operator() @ 14e773d10

bool __thiscall
`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l32::<lambda_2>::operator()
          (void *this,FNodeAndAnimationIndex *param_1,FNodeAndAnimationIndex *param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1->Index == param_2->Index) {
    pFVar2 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2->Node,&local_18);
    pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1->Node,&local_28);
    pwVar4 = L"";
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    if ((pFVar3->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return SUB41((uint)iVar1 >> 0x1f,0);
  }
  return param_1->Index < param_2->Index;
}

// AdjustSettingsForContext @ 14e780ec0

void __thiscall
UInterchangeSparseVolumeTexturePipeline::AdjustSettingsForContext
          (UInterchangeSparseVolumeTexturePipeline *this,FInterchangePipelineContextParams *param_1)

{
  EInterchangePipelineContext EVar1;
  
  FInterchangePipelineContextParams::operator=
            ((FInterchangePipelineContextParams *)&this->_padding_,param_1);
  TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
  ::operator=((TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
               *)&this->_padding_,
              (TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
               *)&this->_padding_);
  EVar1 = param_1->ContextType;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(bool *)&this->_padding_ = EVar1 == None;
  EVar1 = param_1->ContextType;
  if ((EVar1 == AssetReimport) ||
     (((EVar1 - SceneReimport & 0xf9) == 0 && (EVar1 != AssetCustomMorphTargetReImport)))) {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  return;
}

// ExecutePipeline @ 14e7a8420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeSparseVolumeTexturePipeline::ExecutePipeline
          (UInterchangeSparseVolumeTexturePipeline *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  undefined4 uVar1;
  UInterchangeVolumeNode *pUVar2;
  UInterchangeBaseNodeContainer *pUVar3;
  void *_Src;
  UInterchangeSparseVolumeTextureFactoryNode *this_00;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FIdentityFunctor FVar7;
  UInterchangeSparseVolumeTexturePipeline *this_01;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FString *pFVar12;
  FString *pFVar13;
  UInterchangeBaseNode *pUVar14;
  UClass *pUVar15;
  UInterchangeSparseVolumeTexturePipeline *pUVar16;
  byte bVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ForAnyElementType *pFVar20;
  uint uVar21;
  undefined8 *puVar22;
  ForElementType<FSetElementId> FVar23;
  int iVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  ForAnyElementType FVar27;
  longlong lVar28;
  uint *puVar29;
  ForElementType<unsigned_int> FVar30;
  uint uVar31;
  undefined8 *puVar32;
  FScriptContainerElement *pFVar33;
  undefined1 auStackY_4a8 [32];
  FIdentityFunctor local_458;
  undefined1 local_457;
  undefined1 local_456;
  undefined1 local_455;
  undefined1 local_454 [4];
  ForAnyElementType local_450;
  undefined8 local_448;
  UInterchangeSparseVolumeTextureFactoryNode *local_440;
  UInterchangeSparseVolumeTextureFactoryNode *local_438;
  undefined1 local_430 [8];
  FString local_428;
  FString local_418;
  uint local_408;
  longlong *local_400;
  int iStack_3f8;
  uint uStack_3f4;
  TBitArray<FDefaultBitArrayAllocator> *local_3f0;
  uint uStack_3e8;
  uint uStack_3e4;
  uint local_3e0;
  undefined4 uStack_3dc;
  int iStack_3d8;
  undefined4 uStack_3d4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3d0;
  FString local_3c0;
  ForAnyElementType local_3b0;
  int local_3a8;
  int iStack_3a4;
  FString local_3a0;
  int local_390 [2];
  UInterchangeSparseVolumeTexturePipeline *local_388;
  TArray<int,TSizedDefaultAllocator<32>_> local_380;
  FString local_370;
  undefined8 *local_360;
  ulonglong local_358;
  FString local_350;
  UInterchangeVolumeNode *local_340;
  int local_338;
  undefined1 local_334 [4];
  undefined8 **local_330;
  FString *local_328;
  undefined8 *local_320;
  undefined8 local_318;
  int local_310;
  int local_30c;
  FString local_308;
  FString local_2f8;
  ForAnyElementType local_2e8;
  undefined8 local_2e0;
  int local_2d8;
  longlong *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c8;
  undefined8 uStack_2a8;
  longlong *local_2a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_298;
  undefined8 uStack_278;
  code *local_270;
  undefined8 ***local_268;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  longlong *local_1d0;
  undefined8 uStack_1c8;
  TBitArray<FDefaultBitArrayAllocator> *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_184;
  undefined4 local_164;
  undefined4 local_144;
  longlong local_138;
  undefined8 local_130;
  TBitArray<FDefaultBitArrayAllocator> local_128;
  undefined4 local_108;
  int local_104;
  void *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<UInterchangeVolumeNode_const_*,DefaultKeyFuncs<UInterchangeVolumeNode_const_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_408 = 0;
  if ((this->bImportSparseVolumeTextures != false) &&
     (param_1 != (UInterchangeBaseNodeContainer *)0x0)) {
    local_388 = this;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_330 = &local_360;
    (this->BaseNodeContainer).field0_0x0.DebugPtr = param_1;
    local_268 = &local_330;
    local_360 = (undefined8 *)0x0;
    local_358 = 0;
    local_270 = UE::Core::Private::Function::
                TFunctionRefCaller<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
                ::Call;
    UInterchangeBaseNodeContainer::IterateNodes
              (param_1,(TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)
                       &local_270);
    uVar18 = (ulonglong)(int)(uint)local_358;
    local_450.Data = (FScriptContainerElement *)0x0;
    local_448 = 0;
    local_e8._0_8_ = 0;
    local_e8._8_8_ = 0;
    local_320 = local_360 + uVar18;
    local_c8 = (uint *)0x0;
    local_c0 = 0;
    local_bc = 0x80;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (ForElementType<FSetElementId>)0x0;
    local_a0 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_128.NumBits = 0;
    local_128.MaxBits = 0x80;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = (void *)0x0;
    local_f0 = 0;
    local_408 = (uint)local_358;
    uVar19 = uVar18;
    puVar32 = local_360;
    while( true ) {
      puVar22 = local_320;
      iVar24 = 0;
      if ((int)uVar18 != (int)uVar19) {
        local_457 = 0;
        `TCheckedPointerIterator<UInterchangeVolumeNode_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_457);
      }
      uVar10 = local_c0;
      if (puVar32 == puVar22) break;
      pUVar2 = (UInterchangeVolumeNode *)*puVar32;
      local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c0.Data.ArrayNum = 0;
      local_3c0.Data.ArrayMax = 0;
      local_340 = pUVar2;
      if (((this->bImportAnimatedSparseVolumeTextures == false) ||
          (bVar9 = UInterchangeVolumeNode::GetCustomAnimationID(pUVar2,&local_3c0), !bVar9)) ||
         (local_3c0.Data.ArrayNum < 2)) {
        TSet<UInterchangeVolumeNode_*,DefaultKeyFuncs<UInterchangeVolumeNode_*,0>,FDefaultSetAllocator>
        ::Emplace<UInterchangeVolumeNode_*_const_&>
                  ((TSet<UInterchangeVolumeNode_*,DefaultKeyFuncs<UInterchangeVolumeNode_*,0>,FDefaultSetAllocator>
                    *)local_e8,(UInterchangeVolumeNode **)&local_318,(bool *)&local_340);
      }
      else {
        local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_380.ArrayNum = 0;
        local_380.ArrayMax = 0;
        UInterchangeVolumeNode::GetCustomFrameIndicesInAnimation(pUVar2,&local_380);
        iVar24 = local_380.ArrayNum;
        uVar19 = (ulonglong)local_380.ArrayNum;
        pFVar26 = local_380.AllocatorInstance.Data + uVar19 * 4;
        FVar27.Data = local_380.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar19 != iVar24) {
            local_456 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_456);
          }
          if (FVar27.Data == pFVar26) break;
          uVar1 = *(undefined4 *)FVar27.Data;
          iVar11 = local_3c0.Data.ArrayNum + -1;
          FVar5.Data = local_3c0.Data.AllocatorInstance.Data;
          if (local_3c0.Data.ArrayNum == 0) {
            iVar11 = 0;
            FVar5.Data = (FScriptContainerElement *)L"";
          }
          uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar5.Data);
          iVar11 = TSet<TTuple<FString,TArray<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FString>(&local_138,uVar10,&local_3c0);
          if ((iVar11 == -1) || (lVar28 = local_138 + (longlong)iVar11 * 0x28, lVar28 == 0)) {
            local_328 = &local_3c0;
            TSet<TTuple<FString,TArray<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                      (&local_138,(uint)local_390,
                       (TKeyInitializer<FString_const_&> *)(ulonglong)uVar10,(bool *)&local_328);
            lVar28 = local_138 + (longlong)local_390[0] * 0x28;
          }
          iVar11 = *(int *)(lVar28 + 0x18);
          if (iVar11 == *(int *)(lVar28 + 0x1c)) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)(lVar28 + 0x10),(int *)(lVar28 + 0x1c));
          }
          *(int *)(lVar28 + 0x18) = iVar11 + 1;
          puVar22 = (undefined8 *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar28 + 0x10));
          FVar27.Data = FVar27.Data + 4;
          *(undefined4 *)((longlong)puVar22 + 0xc) = 0;
          *puVar22 = local_340;
          *(undefined4 *)(puVar22 + 1) = uVar1;
          uVar19 = local_380._8_8_ & 0xffffffff;
        }
        this = local_388;
        if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.AllocatorInstance.Data);
          this = local_388;
        }
      }
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
      }
      uVar18 = local_358 & 0xffffffff;
      puVar32 = puVar32 + 1;
      uVar19 = (ulonglong)local_408;
    }
    uStack_3f4 = 1;
    uStack_3e4 = 0;
    iStack_3f8 = iVar24;
    local_3e0 = iVar24;
    if (local_c0 != 0) {
      puVar29 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar29 = local_c8;
      }
      uStack_3f4 = *puVar29;
      while (uStack_3f4 == 0) {
        iStack_3f8 = iStack_3f8 + 1;
        local_3e0 = local_3e0 + 0x20;
        uStack_3f4 = 1;
        uStack_3e4 = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_3f8)
        goto LAB_14e7a87e3;
        uStack_3f4 = puVar29[iStack_3f8];
      }
      uStack_3f4 = ~(uStack_3f4 - 1) & uStack_3f4;
      uVar19 = (ulonglong)uStack_3f4 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_318._4_4_ = (int)lVar28;
      uStack_3e4 = (int)lVar28 + -1 + local_3e0;
      if ((int)local_c0 < (int)uStack_3e4) {
        uStack_3e4 = local_c0;
      }
    }
LAB_14e7a87e3:
    local_400 = (longlong *)local_e8;
    uStack_3dc = local_184;
    local_3f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    uVar25 = local_c0 & 0xffffffe0;
    iStack_3d8 = local_e8._8_4_ - local_b4;
    TStack_2c8._padding_ = CONCAT44(uStack_3f4,iStack_3f8);
    uStack_3e8 = 0xffffffff;
    TStack_2c8.CurrentBitIndex = uStack_3e4;
    TStack_2c8.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)local_c0 >> 5;
    TStack_2c8._28_4_ = local_184;
    TStack_2c8.BaseBitIndex = local_3e0;
    uStack_2a8 = CONCAT44(uStack_3d4,iStack_3d8);
    bVar17 = (byte)local_c0;
    local_2d0 = local_400;
    TStack_2c8.Array = local_3f0;
    if (((int)local_c0 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar10 != local_c0) {
      puVar29 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar29 = local_c8;
      }
      uVar10 = -1 << (bVar17 & 0x1f) & puVar29[iVar24];
      while (uVar10 == 0) {
        iVar24 = iVar24 + 1;
        uVar25 = uVar25 + 0x20;
        uVar10 = local_c0;
        if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < iVar24)
        goto LAB_14e7a8910;
        uVar10 = puVar29[iVar24];
      }
      uVar19 = (ulonglong)(~(uVar10 - 1) & uVar10) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_310 = (int)lVar28;
      uVar10 = (int)lVar28 + -1 + uVar25;
      if ((int)local_c0 < (int)uVar10) {
        uVar10 = local_c0;
      }
    }
LAB_14e7a8910:
    while( true ) {
      plVar8 = local_2d0;
      if ((int)local_2d0[1] - *(int *)((longlong)local_2d0 + 0x34) != (int)uStack_2a8) {
        local_455 = 0;
        `TSparseArray<TSparseSetElement<UInterchangeVolumeNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_455);
      }
      iVar24 = local_128.NumBits;
      if (((TStack_2c8.CurrentBitIndex == uVar10) &&
          (TStack_2c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
         (plVar8 == (longlong *)local_e8)) break;
      pUVar14 = *(UInterchangeBaseNode **)(*plVar8 + (longlong)TStack_2c8.CurrentBitIndex * 0x10);
      pFVar12 = UInterchangeBaseNode::GetUniqueID(pUVar14,&local_260);
      UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_308,pFVar12);
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      pUVar3 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
      pFVar12 = UInterchangeBaseNode::GetDisplayLabel(pUVar14,&local_250);
      local_440 = UE::Interchange::Private::CreateTextureFactoryNode(pFVar12,&local_308,pUVar3);
      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data.AllocatorInstance.Data);
      }
      if (local_440 != (UInterchangeSparseVolumeTextureFactoryNode *)0x0) {
        if (((local_450.Data <= (FScriptContainerElement *)&local_440) &&
            ((FScriptContainerElement *)&local_440 < local_450.Data + (longlong)local_448._4_4_ * 8)
            ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar24 = (int)local_448;
        if ((int)local_448 == local_448._4_4_) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_450,(int *)((longlong)&local_448 + 4));
        }
        local_448 = CONCAT44(local_448._4_4_,iVar24 + 1);
        *(UInterchangeSparseVolumeTextureFactoryNode **)(local_450.Data + (longlong)iVar24 * 8) =
             local_440;
        UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                  (pUVar14,(UInterchangeBaseNode *)local_440,false);
        pFVar12 = UInterchangeBaseNode::GetUniqueID(pUVar14,&local_240);
        UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)local_440,pFVar12);
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        pFVar12 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_440,&local_230);
        UInterchangeBaseNode::AddTargetNodeUid(pUVar14,pFVar12);
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
        UE::Interchange::Private::SetupDefaultOpenVDBGridAssignment
                  (local_440,(this->BaseNodeContainer).field0_0x0.DebugPtr);
      }
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      TStack_2c8.UnvisitedBitMask = TStack_2c8.UnvisitedBitMask & ~TStack_2c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c8);
    }
    iStack_3f8 = 0;
    local_3e0 = 0;
    uStack_3e4 = 0;
    uStack_3f4 = 1;
    if (local_128.NumBits != 0) {
      FVar30 = (ForElementType<unsigned_int>)&local_128;
      if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar30 = local_128.AllocatorInstance.SecondaryData;
      }
      uStack_3f4 = *(uint *)FVar30;
      while (uStack_3f4 == 0) {
        iStack_3f8 = iStack_3f8 + 1;
        local_3e0 = local_3e0 + 0x20;
        uStack_3e4 = local_128.NumBits;
        uStack_3f4 = 1;
        if ((int)((local_128.NumBits - 1U) + ((int)(local_128.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iStack_3f8) goto LAB_14e7a8bd3;
        uStack_3f4 = *(uint *)((longlong)FVar30 + (longlong)iStack_3f8 * 4);
      }
      uStack_3f4 = ~(uStack_3f4 - 1) & uStack_3f4;
      uVar19 = (ulonglong)uStack_3f4 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      uStack_3e4 = local_3e0 + -1 + (int)lVar28;
      local_30c = (int)lVar28;
      if (local_128.NumBits < (int)uStack_3e4) {
        uStack_3e4 = local_128.NumBits;
      }
    }
LAB_14e7a8bd3:
    local_400 = &local_138;
    local_3f0 = &local_128;
    uStack_3dc = local_164;
    iStack_3d8 = (int)local_130 - local_104;
    uVar10 = local_128.NumBits & 0xffffffe0;
    TStack_298._padding_ = CONCAT44(uStack_3f4,iStack_3f8);
    bVar17 = (byte)local_128.NumBits & 0x1f;
    uStack_3e8 = 0xffffffff;
    TStack_298.CurrentBitIndex = uStack_3e4;
    TStack_298.UnvisitedBitMask = 0xffffffff;
    uVar31 = 1 << bVar17;
    TStack_298._28_4_ = local_164;
    TStack_298.BaseBitIndex = local_3e0;
    uStack_278 = CONCAT44(uStack_3d4,iStack_3d8);
    uVar25 = -1 << bVar17;
    iVar11 = local_128.NumBits >> 5;
    local_2a0 = local_400;
    TStack_298.Array = local_3f0;
    if ((local_128.NumBits < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = local_388;
    FVar7 = local_458;
    uStack_3e4 = iVar24;
    if (iVar24 != local_128.NumBits) {
      FVar30 = (ForElementType<unsigned_int>)&local_128;
      if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar30 = local_128.AllocatorInstance.SecondaryData;
      }
      uVar21 = uVar25 & *(uint *)((longlong)FVar30 + (longlong)iVar11 * 4);
      while (uVar21 == 0) {
        iVar11 = iVar11 + 1;
        uVar10 = uVar10 + 0x20;
        uStack_3e4 = local_128.NumBits;
        if ((int)(((int)(local_128.NumBits - 1U) >> 0x1f & 0x1fU) + (local_128.NumBits - 1U)) >> 5 <
            iVar11) goto LAB_14e7a8d17;
        uVar25 = 0xffffffff;
        uVar21 = *(uint *)((longlong)FVar30 + (longlong)iVar11 * 4);
      }
      uVar31 = ~(uVar21 - 1) & uVar21;
      uVar19 = (ulonglong)uVar31 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_2d8 = (int)lVar28;
      uStack_3e4 = local_2d8 + -1 + uVar10;
      if (local_128.NumBits < (int)uStack_3e4) {
        uStack_3e4 = local_128.NumBits;
      }
    }
LAB_14e7a8d17:
    local_400 = &local_138;
    local_3f0 = &local_128;
    uStack_3dc = local_144;
    iStack_3d8 = (int)local_130 - local_104;
    uStack_1c8 = CONCAT44(uVar31,iVar11);
    uStack_1b8 = CONCAT44(uStack_3e4,uVar25);
    local_1b0 = CONCAT44(local_144,uVar10);
    uStack_1a8 = CONCAT44(uStack_3d4,iStack_3d8);
    iStack_3f8 = iVar11;
    uStack_3f4 = uVar31;
    uStack_3e8 = uVar25;
    local_3e0 = uVar10;
    local_1d0 = local_400;
    local_1c0 = local_3f0;
    while( true ) {
      plVar8 = local_2a0;
      if ((int)local_2a0[1] - *(int *)((longlong)local_2a0 + 0x34) != (int)uStack_278) {
        local_454[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TArray<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_454);
      }
      if (((TStack_298.CurrentBitIndex == uStack_1b8._4_4_) && (TStack_298.Array == local_1c0)) &&
         (plVar8 == local_1d0)) break;
      lVar28 = *plVar8;
      iVar24 = *(int *)(lVar28 + 0x18 + (longlong)TStack_298.CurrentBitIndex * 0x28);
      pFVar12 = (FString *)(lVar28 + (longlong)TStack_298.CurrentBitIndex * 0x28);
      if (iVar24 != 0) {
        AlgoImpl::
        IntroSortInternal<_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l2::FNodeAndAnimationIndex,int,FIdentityFunctor,TDereferenceWrapper<_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l2::FNodeAndAnimationIndex,_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l32::<lambda_2>_>_>
                  ((FNodeAndAnimationIndex *)pFVar12[1].Data.AllocatorInstance.Data,iVar24,FVar7,
                   (<lambda_2> *)local_430);
        uVar10 = 0;
        if ((pFVar12[1].Data.ArrayNum < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar2 = *(UInterchangeVolumeNode **)pFVar12[1].Data.AllocatorInstance.Data;
        local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_428.Data.ArrayNum = 0;
        local_428.Data.ArrayMax = 0;
        bVar9 = UInterchangeVolumeNode::GetCustomFileName(pUVar2,&local_428);
        if ((bVar9) && (1 < local_428.Data.ArrayNum)) {
          pFVar13 = FPaths::GetBaseFilename(&local_220,&local_428,true);
          if (&local_428 != pFVar13) {
            if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_428.Data.AllocatorInstance.Data);
            }
            local_428.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
            (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_428.Data.ArrayNum = (pFVar13->Data).ArrayNum;
            local_428.Data.ArrayMax = (pFVar13->Data).ArrayMax;
            (pFVar13->Data).ArrayNum = 0;
            (pFVar13->Data).ArrayMax = 0;
          }
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
          local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_370.Data.ArrayNum = 0;
          local_370.Data.ArrayMax = 0;
          UE::Interchange::Private::SplitNumberedSuffix(&local_428,&local_370,&local_338);
          FVar27.Data = local_370.Data.AllocatorInstance.Data;
          lVar28 = (longlong)local_370.Data.ArrayNum;
          local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_350.Data.ArrayNum = local_370.Data.ArrayNum;
          if (local_370.Data.ArrayNum == 0) {
            local_350.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_370.Data.ArrayNum,0,(ForAnyElementType *)&local_350,
                       local_370.Data.ArrayNum,&local_350.Data.ArrayMax);
            memcpy(local_350.Data.AllocatorInstance.Data,FVar27.Data,lVar28 * 2);
          }
          UE::Interchange::Private::RemoveTrailingSeparators(&local_418,&local_350);
          if (local_418.Data.ArrayNum < 2) {
            local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3d0.ArrayNum = 0;
            local_3d0.ArrayMax = 0;
            UInterchangeVolumeNode::GetCustomGridDependecies(pUVar2,&local_3d0);
            if (0 < local_3d0.ArrayNum) {
              do {
                pUVar3 = (this_01->BaseNodeContainer).field0_0x0.DebugPtr;
                uVar25 = 0;
                if ((int)uVar10 < local_3d0.ArrayNum) {
                  uVar25 = ~uVar10 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pUVar14 = UInterchangeBaseNodeContainer::GetNode
                                    (pUVar3,(FString *)
                                            (local_3d0.AllocatorInstance.Data +
                                            (longlong)(int)uVar10 * 0x10));
                if (pUVar14 != (UInterchangeBaseNode *)0x0) {
                  pUVar15 = Z_Construct_UClass_UInterchangeVolumeGridNode_NoRegister();
                  iVar24 = (int)pUVar15->_padding_;
                  if ((iVar24 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar24 * 8) ==
                      &pUVar15->_padding_)) {
                    pFVar13 = UInterchangeBaseNode::GetDisplayLabel(pUVar14,&local_210);
                    if (&local_418 != pFVar13) {
                      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_418.Data.AllocatorInstance.Data);
                      }
                      local_418.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data
                      ;
                      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_418.Data.ArrayNum = (pFVar13->Data).ArrayNum;
                      local_418.Data.ArrayMax = (pFVar13->Data).ArrayMax;
                      (pFVar13->Data).ArrayNum = 0;
                      (pFVar13->Data).ArrayMax = 0;
                    }
                    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_210.Data.AllocatorInstance.Data);
                    }
                    if (1 < local_418.Data.ArrayNum) {
                      break;
                    }
                  }
                }
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < local_3d0.ArrayNum);
            }
            DestructItems<FString,int>
                      ((FString *)local_3d0.AllocatorInstance.Data,local_3d0.ArrayNum);
            if (local_3d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3d0.AllocatorInstance.Data);
            }
            if (local_418.Data.ArrayNum < 2) {
              ::FString::operator=(&local_418,L"Volume");
            }
          }
          pFVar13 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar2,&local_200);
          UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_2f8,pFVar13);
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
          local_438 = UE::Interchange::Private::CreateTextureFactoryNode
                                (&local_418,&local_2f8,
                                 (this_01->BaseNodeContainer).field0_0x0.DebugPtr);
          if (local_438 != (UInterchangeSparseVolumeTextureFactoryNode *)0x0) {
            if (((local_450.Data <= (FScriptContainerElement *)&local_438) &&
                ((FScriptContainerElement *)&local_438 <
                 local_450.Data + (longlong)local_448._4_4_ * 8)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar24 = (int)local_448;
            if ((int)local_448 == local_448._4_4_) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_450,(int *)((longlong)&local_448 + 4));
            }
            local_448 = CONCAT44(local_448._4_4_,iVar24 + 1);
            *(UInterchangeSparseVolumeTextureFactoryNode **)(local_450.Data + (longlong)iVar24 * 8)
                 = local_438;
            UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                      ((UInterchangeBaseNode *)pUVar2,(UInterchangeBaseNode *)local_438,false);
            UInterchangeSparseVolumeTextureFactoryNode::SetCustomAnimationID(local_438,pFVar12);
            pFVar26 = pFVar12[1].Data.AllocatorInstance.Data;
            local_98.Elements._0_8_ = 0;
            local_98.Elements._32_8_ = 0;
            local_98.Elements._40_4_ = 0;
            local_98.Elements._52_4_ = 0;
            local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_98.HashSize = 0;
            iVar24 = pFVar12[1].Data.ArrayNum;
            local_98.Elements._8_8_ = 0;
            pFVar33 = pFVar26 + (longlong)iVar24 * 0x10;
            local_98.Elements._44_4_ = 0x80;
            local_98.Elements._48_4_ = 0xffffffff;
            while( true ) {
              if (pFVar12[1].Data.ArrayNum != iVar24) {
                local_458 = (FIdentityFunctor)0x0;
                `TCheckedPointerIterator<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(&local_458);
              }
              if (pFVar26 == pFVar33) break;
              uVar19 = *(ulonglong *)pFVar26;
              uVar10 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
              uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
              if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
                FVar23 = (ForElementType<FSetElementId>)&local_98.Hash;
                if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar23 = local_98.Hash.SecondaryData;
                }
                for (iVar11 = *(int *)((longlong)FVar23 +
                                      (ulonglong)
                                      (local_98.HashSize - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
                    iVar11 != -1;
                    iVar11 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar11 * 0x10)) {
                  if (*(ulonglong *)(local_98.Elements._0_8_ + (longlong)iVar11 * 0x10) == uVar19)
                  goto LAB_14e7a933f;
                }
              }
              TSet<UInterchangeVolumeNode_const_*,DefaultKeyFuncs<UInterchangeVolumeNode_const_*,0>,FDefaultSetAllocator>
              ::Emplace<UInterchangeVolumeNode_const_*_const_&>
                        (&local_98,(UInterchangeVolumeNode **)local_334,(bool *)pFVar26);
              pFVar13 = UInterchangeBaseNode::GetUniqueID
                                  (*(UInterchangeBaseNode **)pFVar26,&local_1f0);
              UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)local_438,pFVar13);
              if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
              }
              pUVar14 = *(UInterchangeBaseNode **)pFVar26;
              pFVar13 = UInterchangeBaseNode::GetUniqueID
                                  ((UInterchangeBaseNode *)local_438,&local_1e0);
              UInterchangeBaseNode::AddTargetNodeUid(pUVar14,pFVar13);
              if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
              }
LAB_14e7a933f:
              pFVar26 = pFVar26 + 0x10;
            }
            UE::Interchange::Private::SetupDefaultOpenVDBGridAssignment
                      (local_438,(this_01->BaseNodeContainer).field0_0x0.DebugPtr);
            local_98.HashSize = 0;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_98.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<UInterchangeVolumeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<UInterchangeVolumeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_98.Elements);
          }
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
          if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_418.Data.AllocatorInstance.Data);
          }
          if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_370.Data.AllocatorInstance.Data);
          }
        }
        if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_428.Data.AllocatorInstance.Data);
        }
      }
      TStack_298.UnvisitedBitMask = TStack_298.UnvisitedBitMask & ~TStack_298._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_298);
    }
    if ((int)local_448 == 1) {
      pUVar16 = (UInterchangeSparseVolumeTexturePipeline *)
                UInterchangePipelineBase::GetMostPipelineOuter((UInterchangePipelineBase *)this_01);
      if (this_01 == pUVar16) {
        iVar24 = (int)this_01->_padding_;
        _Src = (void *)this_01->_padding_;
        local_3b0.Data = (FScriptContainerElement *)0x0;
        local_3a8 = iVar24;
        if (iVar24 == 0) {
          pFVar20 = &local_3b0;
          iStack_3a4 = 0;
          bVar6 = true;
          bVar9 = false;
          local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar24,0,&local_3b0,iVar24,&iStack_3a4);
          memcpy(local_3b0.Data,_Src,(longlong)iVar24 * 2);
          pFVar20 = &local_3b0;
          bVar6 = true;
          bVar9 = false;
          local_3a0.Data.AllocatorInstance.Data = local_3b0.Data;
        }
      }
      else {
        pFVar20 = &local_2e8;
        local_2e0 = 0;
        local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        bVar6 = false;
        bVar9 = true;
      }
      pFVar20->Data = (FScriptContainerElement *)0x0;
      local_3a0.Data.ArrayNum = *(int *)&pFVar20[1].Data;
      local_3a0.Data.ArrayMax = *(int *)((longlong)&pFVar20[1].Data + 4);
      pFVar20[1].Data = (FScriptContainerElement *)0x0;
      if ((bVar9) && (local_2e8.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2e8.Data);
      }
      if ((bVar6) && (local_3b0.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_3b0.Data);
      }
      if ((local_3a0.Data.ArrayNum < 2) &&
         (pUVar16 = (UInterchangeSparseVolumeTexturePipeline *)
                    UInterchangePipelineBase::GetMostPipelineOuter
                              ((UInterchangePipelineBase *)this_01), this_01 == pUVar16)) {
        iVar11 = (this_01->AssetName).Data.ArrayNum;
        iVar24 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar24 = 0;
        }
        ::FString::AssignRange
                  (&local_3a0,(wchar_t *)(this_01->AssetName).Data.AllocatorInstance.Data,iVar24);
      }
      if (((int)local_448 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(UInterchangeSparseVolumeTextureFactoryNode **)local_450.Data;
      pUVar16 = (UInterchangeSparseVolumeTexturePipeline *)
                UInterchangePipelineBase::GetMostPipelineOuter((UInterchangePipelineBase *)this_01);
      if ((this_01 == pUVar16) && (1 < local_3a0.Data.ArrayNum)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if ((this_00 != (UInterchangeSparseVolumeTextureFactoryNode *)0x0) && (bVar9)) {
        (**(code **)(this_00->_padding_ + 0x2e0))(this_00,&local_3a0);
        UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)this_00,&local_3a0);
      }
      if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
      }
    }
    local_f0 = 0;
    if (local_f8 != (void *)0x0) {
      FMemory::Free(local_f8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TArray<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::FNodeAndAnimationIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<_UInterchangeSparseVolumeTexturePipeline::ExecutePipeline_::__l2::FNodeAndAnimationIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_138);
    local_a0 = 0;
    if (local_a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8);
    }
    TSparseArray<TSparseSetElement<UInterchangeVolumeNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UInterchangeVolumeNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UInterchangeVolumeNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
    if (local_450.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data);
    }
    if (local_360 != (undefined8 *)0x0) {
      FMemory::Free(local_360);
    }
  }
  return;
}

// GetPipelineCategory @ 14e7b9350

FString * __cdecl
UInterchangeSparseVolumeTexturePipeline::GetPipelineCategory
          (FString *__return_storage_ptr__,UClass *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"Textures");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e7b9df0

UClass * __cdecl UInterchangeSparseVolumeTexturePipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSparseVolumeTexturePipeline.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeSparseVolumeTexturePipeline",
               &Z_Registration_Info_UClass_UInterchangeSparseVolumeTexturePipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeSparseVolumeTexturePipeline,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSparseVolumeTexturePipeline>
               ,InternalVTableHelperCtorCaller<UInterchangeSparseVolumeTexturePipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSparseVolumeTexturePipeline.InnerSingleton;
}

// StaticRegisterNativesUInterchangeSparseVolumeTexturePipeline @ 14e7e4700

void __cdecl
UInterchangeSparseVolumeTexturePipeline::
StaticRegisterNativesUInterchangeSparseVolumeTexturePipeline(void)

{
  return;
}

