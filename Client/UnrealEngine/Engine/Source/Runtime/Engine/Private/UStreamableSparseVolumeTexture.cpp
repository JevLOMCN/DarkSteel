// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// StaticClass @ 1487029e0

UClass * __cdecl UStreamableSparseVolumeTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StreamableSparseVolumeTexture",
               &Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.InnerSingleton,
               StaticRegisterNativesUStreamableSparseVolumeTexture,0xb0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UStreamableSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UStreamableSparseVolumeTexture>,local_res8,
               USparseVolumeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.InnerSingleton;
}

// UStreamableSparseVolumeTexture @ 148713600

UStreamableSparseVolumeTexture * __thiscall
UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture
          (UStreamableSparseVolumeTexture *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)((longlong)&(this->FallbackValueA).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined ***)this = &_vftable__for__USparseVolumeTexture__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->FallbackValueA).field0_0x0 = 0;
  (this->FallbackValueA).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->FallbackValueB).field0_0x0 + 4) = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  (this->FallbackValueB).field0_0x0._s_0.W = 1.0;
  this->bLocalDDCOnly = true;
  this->StreamingPoolSizeFactor = 3.0;
  this->NumberOfPrefetchFrames = 3;
  this->PrefetchPercentageStepSize = 20.0;
  this->PrefetchPercentageBias = 20.0;
  return this;
}

// UStreamableSparseVolumeTexture @ 148713690

UStreamableSparseVolumeTexture * __thiscall
UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture
          (UStreamableSparseVolumeTexture *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)((longlong)&(this->FallbackValueA).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined ***)this = &_vftable__for__USparseVolumeTexture__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->FallbackValueA).field0_0x0 = 0;
  (this->FallbackValueA).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->FallbackValueB).field0_0x0 + 4) = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  (this->FallbackValueB).field0_0x0._s_0.W = 1.0;
  this->bLocalDDCOnly = true;
  this->StreamingPoolSizeFactor = 3.0;
  this->NumberOfPrefetchFrames = 3;
  this->PrefetchPercentageStepSize = 20.0;
  this->PrefetchPercentageBias = 20.0;
  return this;
}

// ~UStreamableSparseVolumeTexture @ 148714ea0

void __thiscall
UStreamableSparseVolumeTexture::~UStreamableSparseVolumeTexture
          (UStreamableSparseVolumeTexture *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Frames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->field_0x28 = &___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddAssetUserData @ 14871dc20

void __thiscall
UStreamableSparseVolumeTexture::AddAssetUserData
          (UStreamableSparseVolumeTexture *this,UAssetUserData *param_1)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  TObjectPtr<UAssetUserData>_u_0 TVar5;
  TVector4<float> *this_00;
  UObject *local_res10;
  TObjectPtr<UAssetUserData>_u_0 local_res18;
  UAssetUserData *local_18 [2];
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res10 = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(*(longlong *)this + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
    }
    TVar5.DebugPtr = (UAssetUserData *)(*pcVar2)(this,&local_res10);
    this_00 = &this->FallbackValueB;
    if (TVar5.DebugPtr != (UAssetUserData *)0x0) {
      local_res18.DebugPtr = TVar5.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      }
      TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>::Remove
                ((TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *)this_00,
                 (TObjectPtr<UAssetUserData> *)&local_res18.ObjectPtr);
    }
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (((*(UAssetUserData ***)&this_00->field0_0x0 <= local_18) &&
        (local_18 <
         *(UAssetUserData ***)&this_00->field0_0x0 + (int)(this->FallbackValueB).field0_0x0._s_0.W))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar4 = *(float *)((longlong)&(this->FallbackValueB).field0_0x0 + 8);
    pfVar1 = &(this->FallbackValueB).field0_0x0._s_0.W;
    if (fVar4 == *pfVar1) {
      fVar4 = (float)UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)this_00,(int *)pfVar1);
      *(float *)((longlong)&(this->FallbackValueB).field0_0x0 + 8) = fVar4;
    }
    (this->FallbackValueB).field0_0x0._s_0.Z = (float)((int)fVar4 + 1);
    *(UAssetUserData **)(*(longlong *)&this_00->field0_0x0 + (longlong)(int)fVar4 * 8) = local_18[0]
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UAssetUserData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// AppendFrame @ 148721e50

bool __thiscall
UStreamableSparseVolumeTexture::AppendFrame
          (UStreamableSparseVolumeTexture *this,FTextureData *param_1,TTransform<double> *param_2)

{
  return false;
}

// BeginDestroy @ 148722ae0

void __thiscall UStreamableSparseVolumeTexture::BeginDestroy(UStreamableSparseVolumeTexture *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  UObject::BeginDestroy((UObject *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar2 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar2,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
                    /* WARNING: Could not recover jumptable at 0x000148722b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(UE::SVT::GStreamingManager._32_8_ + 8))(0x155248580,this);
      return;
    }
  }
  return;
}

// BeginInitialize @ 148722bb0

bool __thiscall
UStreamableSparseVolumeTexture::BeginInitialize(UStreamableSparseVolumeTexture *this,int param_1)

{
  return false;
}

// EndInitialize @ 148730b70

bool __thiscall UStreamableSparseVolumeTexture::EndInitialize(UStreamableSparseVolumeTexture *this)

{
  return false;
}

// FinishDestroy @ 148734f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStreamableSparseVolumeTexture::FinishDestroy(UStreamableSparseVolumeTexture *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLinkerLoad *pFVar5;
  ForElementType<UObject_*> FVar6;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if ((*(uint *)&this->field_0x8 >> 0x10 & 1) == 0) {
    aFStackX_8[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
    aFStackX_8[0].Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
  if ((pFVar5 != (FLinkerLoad *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GetLinker()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x457,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)this);
  if ((iVar4 != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetLinkerIndex() == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UObject::DestroyNonNativeProperties((UObject *)this);
  pTVar8 = &DebugFinishDestroyed;
  pTVar7 = &DebugFinishDestroyed;
  if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar7 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugFinishDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)
          ((longlong)pTVar7 + (longlong)DebugFinishDestroyed.ArrayNum * 8);
  FVar6 = (ForElementType<UObject_*>)pTVar7;
  if ((ForElementType<UObject_*>)pTVar7 != FVar1) {
    while (*(UStreamableSparseVolumeTexture **)FVar6 != this) {
      FVar6 = (ForElementType<UObject_*>)((longlong)FVar6 + 8);
      if (FVar6 == FVar1) {
        return;
      }
    }
    iVar4 = (int)((longlong)FVar6 - (longlong)pTVar7 >> 3);
    if (iVar4 != -1) {
      if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar8 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugFinishDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar8 + (longlong)iVar4 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugFinishDestroyed.ArrayNum - iVar4) + -1) << 3);
      DebugFinishDestroyed.ArrayNum = DebugFinishDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetAssetRegistryTags @ 148739ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UStreamableSparseVolumeTexture::GetAssetRegistryTags
          (UStreamableSparseVolumeTexture *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UStreamableSparseVolumeTexture *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UStreamableSparseVolumeTexture **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
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
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UStreamableSparseVolumeTexture **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(*(longlong *)this + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UStreamableSparseVolumeTexture **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8)
        == this) goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
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
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 148739bb0

void __thiscall
UStreamableSparseVolumeTexture::GetAssetRegistryTags
          (UStreamableSparseVolumeTexture *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res18 [2];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  return;
}

// GetAssetUserDataArray @ 148739bf0

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
UStreamableSparseVolumeTexture::GetAssetUserDataArray(UStreamableSparseVolumeTexture *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&this->FallbackValueB;
}

// GetAssetUserDataOfClass @ 148739d30

UAssetUserData * __thiscall
UStreamableSparseVolumeTexture::GetAssetUserDataOfClass
          (UStreamableSparseVolumeTexture *this,TSubclassOf<UAssetUserData> param_1)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  UAssetUserData *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  plVar8 = *(longlong **)&(this->FallbackValueB).field0_0x0;
  fVar2 = (this->FallbackValueB).field0_0x0._s_0.Z;
  plVar1 = plVar8 + (int)fVar2;
  do {
    if ((this->FallbackValueB).field0_0x0._s_0.Z != fVar2) {
      `TCheckedPointerIterator<TObjectPtr<UAssetUserData>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar8 == plVar1) {
      return (UAssetUserData *)0x0;
    }
    pUVar4 = (UAssetUserData *)*plVar8;
    if (pUVar4 != (UAssetUserData *)0x0) {
      pUVar7 = *(UObject **)param_1.Class.field0_0x0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 != (UObject *)0x0) goto LAB_148739da2;
LAB_148739dd0:
        pUVar7 = (UObject *)0x0;
      }
      else {
        if (pUVar7 == (UObject *)0x0) goto LAB_148739dd0;
        UE::GC::MarkAsReachable(pUVar7);
LAB_148739da2:
        pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
        if (pUVar6 == (UClass *)0x0) goto LAB_148739dd0;
        iVar3 = (int)pUVar6->_padding_;
        if ((*(int *)&pUVar7[1].field_0x10 < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar3 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_148739dd0;
      }
      if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) +
           (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
        return pUVar4;
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}

// GetFallbackValue @ 14873bb40

TVector4<float> * __thiscall
UStreamableSparseVolumeTexture::GetFallbackValue
          (UStreamableSparseVolumeTexture *this,TVector4<float> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  TVector4<float> *pTVar4;
  longlong lVar5;
  
  if (1 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributesIndex >= 0 && AttributesIndex < 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                       ,0x234,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector4<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  lVar5 = 0x50;
  if (param_1 != 0) {
    lVar5 = 0x60;
  }
  uVar2 = *(undefined8 *)((longlong)(&this->field_0x0 + lVar5) + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)(&this->field_0x0 + lVar5);
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
  return __return_storage_ptr__;
}

// GetFormat @ 14873bd40

EPixelFormat __thiscall
UStreamableSparseVolumeTexture::GetFormat(UStreamableSparseVolumeTexture *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EPixelFormat EVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributesIndex >= 0 && AttributesIndex < 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                       ,0x233,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (&this->FormatA)[param_1 != 0].Value;
}

// GetFrame @ 14873be10

USparseVolumeTextureFrame * __thiscall
UStreamableSparseVolumeTexture::GetFrame(UStreamableSparseVolumeTexture *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  USparseVolumeTextureFrame *pUVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Frames).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Frames).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (USparseVolumeTextureFrame *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = *(USparseVolumeTextureFrame **)
              ((this->Frames).AllocatorInstance.Data + (longlong)param_1 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (USparseVolumeTextureFrame *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    return pUVar3;
  }
  return (USparseVolumeTextureFrame *)0x0;
}

// GetFrameTransform @ 14873c0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UStreamableSparseVolumeTexture::GetFrameTransform
          (UStreamableSparseVolumeTexture *this,TTransform<double> *__return_storage_ptr__)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  double *pdVar7;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_e0;
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar1 = (this->Frames).ArrayNum;
  if (iVar1 == 0) {
    pdVar7 = local_d8;
    local_d8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_c8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_b8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_a8 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_98 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_88 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    if (iVar1 < 1) {
      local_e8 = 0;
      local_e0 = (longlong)iVar1;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar3)();
        return pTVar6;
      }
    }
    plVar2 = *(longlong **)(this->Frames).AllocatorInstance.Data;
    pdVar7 = (double *)(**(code **)(*plVar2 + 0x2d8))(plVar2,local_78);
  }
  dVar4 = pdVar7[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar7;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar4;
  dVar4 = pdVar7[3];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = pdVar7[2];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar4;
  dVar4 = pdVar7[5];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = pdVar7[4];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar4 = pdVar7[7];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = pdVar7[6];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar4;
  dVar4 = pdVar7[9];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = pdVar7[8];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  dVar4 = pdVar7[0xb];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = pdVar7[10];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar4;
  return __return_storage_ptr__;
}

// GetNumFrames @ 14873cd30

int __thiscall UStreamableSparseVolumeTexture::GetNumFrames(UStreamableSparseVolumeTexture *this)

{
  return (this->Frames).ArrayNum;
}

// GetNumMipLevels @ 14873cd90

int __thiscall UStreamableSparseVolumeTexture::GetNumMipLevels(UStreamableSparseVolumeTexture *this)

{
  return this->NumMipLevels;
}

// GetPrivateStaticClass @ 14873ebc0

UClass * __cdecl UStreamableSparseVolumeTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StreamableSparseVolumeTexture",
               &Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.InnerSingleton,
               StaticRegisterNativesUStreamableSparseVolumeTexture,0xb0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UStreamableSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UStreamableSparseVolumeTexture>,local_res8,
               USparseVolumeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.InnerSingleton;
}

// GetResourceSizeEx @ 14873f3a0

void __thiscall
UStreamableSparseVolumeTexture::GetResourceSizeEx
          (UStreamableSparseVolumeTexture *this,FResourceSizeEx *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  iVar2 = (this->Frames).ArrayMax;
  pFVar5 = (this->Frames).AllocatorInstance.Data;
  iVar3 = (this->Frames).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Frames).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<USparseVolumeTextureFrame>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    plVar4 = *(longlong **)pFVar5;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 400))(plVar4,param_1);
    }
    pFVar5 = pFVar5 + 8;
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)iVar2 * 8 + 0x88);
  FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,0);
  return;
}

// GetTextureAddressX @ 148740580

TextureAddress __thiscall
UStreamableSparseVolumeTexture::GetTextureAddressX(UStreamableSparseVolumeTexture *this)

{
  return (TextureAddress)(this->AddressX).Value;
}

// GetTextureAddressY @ 1487405c0

TextureAddress __thiscall
UStreamableSparseVolumeTexture::GetTextureAddressY(UStreamableSparseVolumeTexture *this)

{
  return (TextureAddress)(this->AddressY).Value;
}

// GetTextureAddressZ @ 148740600

TextureAddress __thiscall
UStreamableSparseVolumeTexture::GetTextureAddressZ(UStreamableSparseVolumeTexture *this)

{
  return (TextureAddress)(this->AddressZ).Value;
}

// GetTextureRenderResources @ 1487406d0

FTextureRenderResources * __thiscall
UStreamableSparseVolumeTexture::GetTextureRenderResources(UStreamableSparseVolumeTexture *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTextureRenderResources *pFVar4;
  
  iVar1 = (this->Frames).ArrayNum;
  if (iVar1 == 0) {
    return (FTextureRenderResources *)0x0;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FTextureRenderResources *)(*pcVar2)();
      return pFVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148740734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FTextureRenderResources *)
           (**(code **)(**(longlong **)(this->Frames).AllocatorInstance.Data + 0x310))();
  return pFVar4;
}

// GetVolumeResolution @ 148741d30

TIntVector3<int> * __thiscall
UStreamableSparseVolumeTexture::GetVolumeResolution
          (UStreamableSparseVolumeTexture *this,TIntVector3<int> *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = (this->VolumeResolution).field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->VolumeResolution).field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar1;
  return __return_storage_ptr__;
}

// Initialize @ 148749790

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UStreamableSparseVolumeTexture::Initialize
          (UStreamableSparseVolumeTexture *this,TArrayView<UE::SVT::FTextureData,int> *param_1,
          TArrayView<UE::Math::TTransform<double>,int> *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  TTransform<double> *pTVar10;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 == 0) {
    if (1 < (byte)LogSparseVolumeTexture._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSparseVolumeTexture);
    }
  }
  else {
    iVar2 = param_2->ArrayNum;
    cVar4 = (**(code **)(*(longlong *)this + 0x318))(this,iVar1);
    if (cVar4 != '\0') {
      uVar9 = 0;
      if (0 < iVar1) {
        do {
          uVar8 = (uint)uVar9;
          pcVar3 = *(code **)(*(longlong *)this + 800);
          if (iVar2 < iVar1) {
            pTVar10 = &UE::Math::TTransform<double>::Identity;
          }
          else {
            uVar7 = 0;
            if ((int)uVar8 < param_2->ArrayNum) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            pTVar10 = param_2->DataPtr + uVar9;
          }
          uVar7 = 0;
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          cVar4 = (*pcVar3)(this,param_1->DataPtr + uVar9,pTVar10);
          if (cVar4 == '\0') {
            return false;
          }
          uVar9 = (ulonglong)(uVar8 + 1);
        } while ((int)(uVar8 + 1) < iVar1);
      }
      cVar4 = (**(code **)(*(longlong *)this + 0x328))(this);
      return cVar4 != '\0';
    }
  }
  return false;
}

// PostInitProperties @ 14874f860

void __thiscall
UStreamableSparseVolumeTexture::PostInitProperties(UStreamableSparseVolumeTexture *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UStreamableSparseVolumeTexture *pUStack_28;
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
      (UStreamableSparseVolumeTexture **)
      ((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
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
  *(UStreamableSparseVolumeTexture **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(**(longlong **)&this->field_0x10 + 0x3a8))
            (*(longlong **)&this->field_0x10,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 14874ff70

void __thiscall UStreamableSparseVolumeTexture::PostLoad(UStreamableSparseVolumeTexture *this)

{
  FScriptContainerElement *pFVar1;
  USparseVolumeTextureFrame *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  UObject::PostLoad((UObject *)this);
  iVar4 = (**(code **)(*(longlong *)this + 0x2c8))(this);
  this->NumFrames = iVar4;
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar5 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar5,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      pFVar6 = (this->Frames).AllocatorInstance.Data;
      iVar4 = (this->Frames).ArrayNum;
      pFVar1 = pFVar6 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this->Frames).ArrayNum != iVar4) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<USparseVolumeTextureFrame>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar1) break;
        this_00 = *(USparseVolumeTextureFrame **)pFVar6;
        if (this_00 == (USparseVolumeTextureFrame *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Frame",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                             ,0x5de,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        USparseVolumeTextureFrame::CreateTextureRenderResources(this_00);
        pFVar6 = pFVar6 + 8;
      }
      (**(code **)UE::SVT::GStreamingManager._32_8_)(0x155248580,this);
    }
  }
  return;
}

// RemoveUserDataOfClass @ 1487542e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UStreamableSparseVolumeTexture::RemoveUserDataOfClass
          (UStreamableSparseVolumeTexture *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (int)(this->FallbackValueB).field0_0x0._s_0.Z) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (int)(this->FallbackValueB).field0_0x0._s_0.Z) {
        uVar5 = ~uVar8 >> 0x1f;
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
      lVar2 = *(longlong *)(lVar9 + *(longlong *)&(this->FallbackValueB).field0_0x0);
      if (lVar2 != 0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_148754386;
LAB_1487543b4:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_1487543b4;
          UE::GC::MarkAsReachable(pUVar7);
LAB_148754386:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_1487543b4;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_1487543b4;
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar2 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
            &pUVar7[1].field_0x8)) {
          TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *)
                     &this->FallbackValueB,uVar8,Default);
          return;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (int)(this->FallbackValueB).field0_0x0._s_0.Z);
  }
  return;
}

// Serialize @ 1487596f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UStreamableSparseVolumeTexture::Serialize(UStreamableSparseVolumeTexture *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 148759700

void __thiscall
UStreamableSparseVolumeTexture::Serialize
          (UStreamableSparseVolumeTexture *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUStreamableSparseVolumeTexture @ 14875d1f0

void __cdecl
UStreamableSparseVolumeTexture::StaticRegisterNativesUStreamableSparseVolumeTexture(void)

{
  return;
}

// _getUObject @ 1487601e0

UObject * __thiscall
UStreamableSparseVolumeTexture::_getUObject(UStreamableSparseVolumeTexture *this)

{
  return (UObject *)&this[-1].AssetUserData;
}

