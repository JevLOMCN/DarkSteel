// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 14

// StaticClass @ 14f0a7050

UClass * __cdecl UMonoWaveTableSynthPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"MonoWaveTableSynthPreset",
               &Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.InnerSingleton,
               StaticRegisterNativesUMonoWaveTableSynthPreset,0x170,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMonoWaveTableSynthPreset>,
               InternalVTableHelperCtorCaller<UMonoWaveTableSynthPreset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.InnerSingleton;
}

// UMonoWaveTableSynthPreset @ 14f0b9ab0

UMonoWaveTableSynthPreset * __thiscall
UMonoWaveTableSynthPreset::UMonoWaveTableSynthPreset
          (UMonoWaveTableSynthPreset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMonoWaveTableSynthPreset__6B_;
  (this->PresetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PresetName).Data.ArrayNum = 0;
  (this->PresetName).Data.ArrayMax = 0;
  (this->WaveTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaveTable).ArrayNum = 0;
  (this->WaveTable).ArrayMax = 0;
  *(undefined8 *)&this->PropertyChangedCallbacks = 0;
  *(undefined8 *)&(this->PropertyChangedCallbacks).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyChangedCallbacks).field_0x20 = 0;
  *(undefined4 *)&(this->PropertyChangedCallbacks).field_0x28 = 0;
  *(undefined4 *)&(this->PropertyChangedCallbacks).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertyChangedCallbacks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PropertyChangedCallbacks).field_0x34 = 0;
  *(undefined8 *)&(this->PropertyChangedCallbacks).field_0x40 = 0;
  *(undefined4 *)&(this->PropertyChangedCallbacks).field_0x48 = 0;
  (this->CurveBiDirTangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveBiDirTangents).ArrayNum = 0;
  (this->CurveBiDirTangents).ArrayMax = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->DefaultCurve);
  (this->CachedWaveTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedWaveTable).ArrayNum = 0;
  (this->CachedWaveTable).ArrayMax = 0;
  return this;
}

// UMonoWaveTableSynthPreset @ 14f0b9b60

UMonoWaveTableSynthPreset * __thiscall
UMonoWaveTableSynthPreset::UMonoWaveTableSynthPreset(UMonoWaveTableSynthPreset *this)

{
  TArray<FRuntimeFloatCurve,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FRuntimeFloatCurve,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FRuntimeFloatCurve *pFVar5;
  code *pcVar6;
  bool bVar7;
  FRichCurve *this_00;
  UMonoWaveTableSynthPreset *pUVar8;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle local_res8 [4];
  FKeyHandle local_res18 [4];
  uint in_stack_ffffffffffffff88;
  FKeyHandle FVar9;
  FKeyHandle local_58 [2];
  FKeyHandle local_50 [2];
  FKeyHandle local_48 [4];
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMonoWaveTableSynthPreset__6B_;
  ::FString::FString(&this->PresetName,L"Default");
  this->LockKeyframesToGrid = 0x10;
  pTVar1 = &this->WaveTable;
  this->WaveTableResolution = 0x200;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->WaveTable).ArrayNum = 0;
  (this->WaveTable).ArrayMax = 0;
  this->bNormalizeWaveTables = '\x01';
  *(undefined8 *)&(this->PropertyChangedCallbacks).field_0x10 = 0;
  *(undefined8 *)&(this->PropertyChangedCallbacks).field_0x18 = 0;
  *(undefined8 *)&(this->PropertyChangedCallbacks).field_0x38 = 0;
  *(undefined8 *)&(this->PropertyChangedCallbacks).field_0x48 = 0;
  *(undefined8 *)&this->PropertyChangedCallbacks = 0;
  *(undefined8 *)&(this->PropertyChangedCallbacks).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyChangedCallbacks).field_0x20 = 0;
  *(undefined4 *)&(this->PropertyChangedCallbacks).field_0x28 = 0;
  *(undefined4 *)&(this->PropertyChangedCallbacks).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertyChangedCallbacks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PropertyChangedCallbacks).field_0x34 = 0;
  *(undefined8 *)&(this->PropertyChangedCallbacks).field_0x40 = 0;
  (this->CurveBiDirTangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveBiDirTangents).ArrayNum = 0;
  (this->CurveBiDirTangents).ArrayMax = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->DefaultCurve);
  pTVar3 = &this->CachedWaveTable;
  piVar2 = &(this->CachedWaveTable).ArrayMax;
  this->CachedGridSize = this->LockKeyframesToGrid;
  *piVar2 = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CachedWaveTable).ArrayNum = 0;
  this_00 = FRuntimeFloatCurve::GetRichCurve(&this->DefaultCurve);
  if (this_00 == (FRichCurve *)0x0) {
    in_R9B = 0x6c;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultCurvePointer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SynthComponentMonoWaveTable.cpp"
                       ,0x13,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar8 = (UMonoWaveTableSynthPreset *)(*pcVar6)();
      return pUVar8;
    }
  }
  FKeyHandle::FKeyHandle(local_res8);
  FVar9.Index = in_stack_ffffffffffffff88 & 0xffffff00;
  FRichCurve::AddKey(this_00,in_XMM1_Da,0.0,(bool)in_R9B,FVar9);
  FKeyHandle::FKeyHandle(local_res18);
  FVar9.Index = FVar9.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,in_XMM1_Da,__real_3e800000,(bool)in_R9B,FVar9);
  FKeyHandle::FKeyHandle(local_58);
  FVar9.Index = FVar9.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,in_XMM1_Da,__real_3f000000,(bool)in_R9B,FVar9);
  FKeyHandle::FKeyHandle(local_50);
  FVar9.Index = FVar9.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,in_XMM1_Da,__real_3f400000,(bool)in_R9B,FVar9);
  FKeyHandle::FKeyHandle(local_48);
  FRichCurve::AddKey(this_00,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar9.Index & 0xffffff00));
  this->field_0x14c = (this->field_0x38 ^ this->field_0x14c) & 0xfe ^ this->field_0x38;
  this->field_0x168 =
       (this->bCachedNormalizationSetting ^ this->bNormalizeWaveTables) & 1 ^ this->field_0x168;
  if (pTVar3 != pTVar1) {
    DestructItems<FRuntimeFloatCurve,int>
              ((FRuntimeFloatCurve *)(pTVar3->AllocatorInstance).Data,
               (this->CachedWaveTable).ArrayNum);
    iVar4 = (this->WaveTable).ArrayNum;
    pFVar5 = (FRuntimeFloatCurve *)(pTVar1->AllocatorInstance).Data;
    (this->CachedWaveTable).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FRuntimeFloatCurve,FRuntimeFloatCurve,int>
                ((pTVar3->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  this->CachedTableResolution = this->WaveTableResolution;
  return this;
}

// ~UMonoWaveTableSynthPreset @ 14f0c00d0

void __thiscall
UMonoWaveTableSynthPreset::~UMonoWaveTableSynthPreset(UMonoWaveTableSynthPreset *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMonoWaveTableSynthPreset__6B_;
  DestructItems<FRuntimeFloatCurve,int>
            ((FRuntimeFloatCurve *)(this->CachedWaveTable).AllocatorInstance.Data,
             (this->CachedWaveTable).ArrayNum);
  pFVar1 = (this->CachedWaveTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DefaultCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->DefaultCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->DefaultCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->DefaultCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DefaultCurve).EditorCurveData._padding_);
  pFVar1 = (this->CurveBiDirTangents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PropertyChangedCallbacks).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PropertyChangedCallbacks).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PropertyChangedCallbacks);
  DestructItems<FRuntimeFloatCurve,int>
            ((FRuntimeFloatCurve *)(this->WaveTable).AllocatorInstance.Data,
             (this->WaveTable).ArrayNum);
  pFVar1 = (this->WaveTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PresetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CacheAssetData @ 14f0ca110

void __thiscall UMonoWaveTableSynthPreset::CacheAssetData(UMonoWaveTableSynthPreset *this)

{
  int *piVar1;
  TArray<FRuntimeFloatCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FRuntimeFloatCurve *pFVar4;
  
  pTVar2 = &this->CachedWaveTable;
  this->field_0x168 =
       (this->bCachedNormalizationSetting ^ this->bNormalizeWaveTables) & 1 ^ this->field_0x168;
  if (pTVar2 != &this->WaveTable) {
    DestructItems<FRuntimeFloatCurve,int>
              ((FRuntimeFloatCurve *)(pTVar2->AllocatorInstance).Data,
               (this->CachedWaveTable).ArrayNum);
    iVar3 = (this->WaveTable).ArrayNum;
    piVar1 = &(this->CachedWaveTable).ArrayMax;
    pFVar4 = (FRuntimeFloatCurve *)(this->WaveTable).AllocatorInstance.Data;
    (this->CachedWaveTable).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FRuntimeFloatCurve,FRuntimeFloatCurve,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
    this->CachedTableResolution = this->WaveTableResolution;
    return;
  }
  this->CachedTableResolution = this->WaveTableResolution;
  return;
}

// DuplicateCurveToEnd @ 14f0d5970

void __thiscall UMonoWaveTableSynthPreset::DuplicateCurveToEnd(UMonoWaveTableSynthPreset *this)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  
  piVar10 = &(this->WaveTable).ArrayNum;
  if (*piVar10 == 0) {
    piVar1 = &(this->WaveTable).ArrayMax;
    iVar7 = 0;
    if (*piVar1 == 0) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x888,&(this->WaveTable).AllocatorInstance,piVar1);
      (this->WaveTable).ArrayNum = iVar7;
    }
    (this->WaveTable).ArrayNum = iVar7 + 1;
    DefaultConstructItems<FRuntimeFloatCurve,int>
              ((this->WaveTable).AllocatorInstance.Data + (longlong)iVar7 * 0x88,1);
  }
  iVar7 = *piVar10;
  piVar10 = &(this->CurveBiDirTangents).ArrayNum;
  iVar8 = *piVar10;
  pTVar2 = &this->CurveBiDirTangents;
  if (iVar8 < iVar7) {
    iVar7 = iVar7 - iVar8;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar7,&pTVar2->AllocatorInstance,piVar10,
                       &(this->CurveBiDirTangents).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4,0,(longlong)iVar7 << 2);
  }
  piVar10 = &(this->WaveTable).ArrayNum;
  iVar7 = *piVar10;
  if (iVar7 < 2) {
    uVar12 = iVar7 - 1;
    uVar9 = 0;
    if ((int)uVar12 < iVar7) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FRuntimeFloatCurve::operator=
              ((FRuntimeFloatCurve *)
               ((this->WaveTable).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x88),
               &this->DefaultCurve);
    uVar12 = *piVar10 - 1;
    uVar9 = 0;
    if ((int)uVar12 < (this->CurveBiDirTangents).ArrayNum) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar12 * 4) = 0;
  }
  else {
    uVar12 = iVar7 - 2;
    uVar9 = 0;
    if ((int)uVar12 < iVar7) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar11 = *piVar10 - 1;
    pFVar4 = (this->WaveTable).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar11 < *piVar10) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FRuntimeFloatCurve::operator=
              ((FRuntimeFloatCurve *)
               ((this->WaveTable).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x88),
               (FRuntimeFloatCurve *)(pFVar4 + (longlong)(int)uVar12 * 0x88));
    uVar12 = *piVar10 - 2;
    uVar9 = 0;
    if ((int)uVar12 < (this->CurveBiDirTangents).ArrayNum) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar11 = *piVar10 - 1;
    uVar3 = *(undefined4 *)
             ((this->CurveBiDirTangents).AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
    uVar9 = 0;
    if ((int)uVar11 < (this->CurveBiDirTangents).ArrayNum) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)((this->CurveBiDirTangents).AllocatorInstance.Data + (longlong)(int)uVar11 * 4) =
         uVar3;
  }
  return;
}

// EditChangeInternal @ 14f0d5cb0

void __thiscall UMonoWaveTableSynthPreset::EditChangeInternal(UMonoWaveTableSynthPreset *this)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TMap<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>_>
  *pTVar3;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  UCurveFloat *pUVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  FRichCurve *pFVar15;
  TMap<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>_>
  *pTVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  FKeyHandle FVar20;
  int iVar21;
  uint uVar22;
  ERichCurveInterpMode EVar23;
  ERichCurveTangentMode EVar24;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FRichCurveKey *pFVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  uint uVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  int *piVar33;
  uint uVar34;
  FScriptContainerElement *pFVar35;
  longlong lVar36;
  undefined1 *puVar37;
  FRichCurve *this_00;
  longlong lVar38;
  undefined1 *puVar39;
  float fVar40;
  float fVar41;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  byte local_1c8 [4];
  uint local_1c4;
  int local_1c0;
  uint local_1bc;
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  int local_1a8;
  FRichCurve *local_1a0;
  TMap<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TMap<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  FRichCurveKey local_138;
  FRichCurveKey local_11c [2];
  undefined4 local_e4;
  uint *puVar25;
  
  iVar19 = (this->WaveTable).ArrayNum;
  local_1c8[0] = local_1c8[0] & 0xfe;
  local_1c4 = 0xffffffff;
  if (iVar19 == 0) {
    local_1c8[0] = local_1c8[0] | 1;
  }
  iVar21 = (this->CurveBiDirTangents).ArrayNum;
  if (iVar21 < iVar19) {
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->CurveBiDirTangents,iVar19 - iVar21);
  }
  if ((this->bLockKeyframesToGridBool != 0) &&
     ((this->bWasLockedToGrid == '\0' || (this->LockKeyframesToGrid != this->CachedGridSize)))) {
    SampleAllToGrid(this,this->LockKeyframesToGrid);
    local_1c8[0] = local_1c8[0] | 1;
  }
  fVar14 = __real_3f8ccccd;
  fVar13 = __real_bdcccccd;
  fVar12 = __real_bf800000;
  uVar31 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar11 = __real_3f800000;
  fVar10 = __real_322bcc77;
  local_1bc = (this->WaveTable).ArrayNum;
  uVar28 = (ulonglong)(int)local_1bc;
  this_00 = (FRichCurve *)(this->WaveTable).AllocatorInstance.Data;
  uVar30 = 0;
  piVar33 = &(this_00->Keys).ArrayNum;
  local_1c0 = 0;
  local_1a0 = (FRichCurve *)((longlong)this_00 + uVar28 * 0x88);
  while( true ) {
    pFVar15 = local_1a0;
    iVar19 = 0;
    local_res20 = uVar30;
    if ((this->WaveTable).ArrayNum != (int)uVar28) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRuntimeFloatCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar15) break;
    bVar18 = false;
    if (*piVar33 == 0) {
      pTVar4 = &(this->DefaultCurve).EditorCurveData.Keys;
      piVar33[-4] = (int)(this->DefaultCurve).EditorCurveData._padding_;
      pTVar1 = (TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *)(piVar33 + -2);
      *(undefined1 *)(piVar33 + -3) =
           *(undefined1 *)((longlong)&(this->DefaultCurve).EditorCurveData._padding_ + 4);
      *(undefined1 *)((longlong)piVar33 + -0xb) =
           *(undefined1 *)((longlong)&(this->DefaultCurve).EditorCurveData._padding_ + 5);
      if (pTVar1 != pTVar4) {
        iVar19 = (this->DefaultCurve).EditorCurveData.Keys.ArrayNum;
        piVar2 = piVar33 + 1;
        pFVar32 = (pTVar4->AllocatorInstance).Data;
        *piVar33 = iVar19;
        if ((iVar19 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
          uVar30 = local_res20;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar19,*piVar2,(ForAnyElementType *)pTVar1,iVar19,piVar2);
          uVar30 = local_res20;
          if (iVar19 != 0) {
            memcpy((pTVar1->AllocatorInstance).Data,pFVar32,(longlong)iVar19 * 0x1c);
            uVar30 = local_res20;
          }
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 = (this->DefaultCurve).ExternalCurve.field0_0x0.DebugPtr,
         pUVar6 != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      bVar18 = true;
      *(TObjectPtr<UCurveFloat>_u_0 *)(piVar33 + 2) = (this->DefaultCurve).ExternalCurve.field0_0x0;
    }
    if ((this->bLockKeyframesToGridBool != 0) && (*piVar33 != this->CachedGridSize)) {
      SampleToGrid(this,this->LockKeyframesToGrid,uVar30);
      bVar18 = true;
    }
    FRichCurve::RemoveRedundantAutoTangentKeys(this_00,fVar10,fVar13,fVar14);
    iVar19 = *piVar33;
    pFVar32 = (((TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *)(piVar33 + -2))->
              AllocatorInstance).Data;
    pFVar35 = pFVar32 + (longlong)iVar19 * 0x1c;
    while( true ) {
      if (*piVar33 != iVar19) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FRichCurveKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar32 == pFVar35) break;
      fVar40 = *(float *)(pFVar32 + 8);
      fVar41 = fVar40;
      if (fVar11 <= fVar40) {
        fVar41 = fVar11;
      }
      if (fVar41 <= fVar12) {
        fVar41 = fVar12;
      }
      if (fVar10 < (float)((uint)(fVar41 - fVar40) & uVar31)) {
        *(float *)(pFVar32 + 8) = fVar41;
        bVar18 = true;
      }
      pFVar32 = pFVar32 + 0x1c;
    }
    iVar19 = (**(code **)(this_00->_padding_ + 8))(this_00);
    if (iVar19 < 1) {
      FVar20 = FKeyHandle::Invalid();
      puVar25 = (uint *)CONCAT44(extraout_var_00,FVar20.Index);
    }
    else {
      FVar20 = FIndexedCurve::GetKeyHandle((FIndexedCurve *)this_00,(int)local_1b8);
      puVar25 = (uint *)CONCAT44(extraout_var,FVar20.Index);
    }
    uVar30 = *puVar25;
    iVar19 = (**(code **)(this_00->_padding_ + 8))(this_00);
    if (iVar19 < 1) {
      FVar20 = FKeyHandle::Invalid();
      puVar25 = (uint *)CONCAT44(extraout_var_02,FVar20.Index);
    }
    else {
      FVar20 = FIndexedCurve::GetKeyHandle((FIndexedCurve *)this_00,(int)local_1b0);
      puVar25 = (uint *)CONCAT44(extraout_var_01,FVar20.Index);
    }
    FVar20.Index = *puVar25;
    pFVar26 = FRichCurve::GetFirstKey(this_00,&local_138);
    if (0.0 < pFVar26->Time || pFVar26->Time == 0.0) {
      pFVar26 = FRichCurve::GetLastKey(this_00,local_11c);
      fVar40 = fVar11;
      if (fVar11 < pFVar26->Time) goto LAB_14f0d5fde;
    }
    else {
      fVar40 = 0.0;
      FVar20.Index = uVar30;
LAB_14f0d5fde:
      FRichCurve::SetKeyTime(this_00,FVar20,fVar40);
      bVar18 = true;
    }
    if (this->bLockKeyframesToGridBool != 0) {
      iVar19 = this->CachedGridSize;
      iVar21 = (**(code **)(this_00->_padding_ + 8))(this_00);
      FIndexedCurve::EnsureAllIndicesHaveHandles_Internal((FIndexedCurve *)this_00,iVar21);
      uVar30 = 0;
      if (0 < this->CachedGridSize) {
        do {
          uVar34 = ~uVar30 >> 0x1f;
          uVar22 = 0;
          if ((int)uVar30 < piVar33[-6]) {
            uVar22 = uVar34;
          }
          if ((uVar22 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar38 = (longlong)(int)uVar30;
          fVar41 = (float)(int)uVar30 * (fVar11 / (float)(iVar19 + -1));
          fVar40 = FRichCurve::GetKeyTime
                             (this_00,(FKeyHandle)
                                      *(uint *)(*(longlong *)(piVar33 + -8) + lVar38 * 4));
          if (fVar10 < (float)((uint)(fVar40 - fVar41) & uVar31)) {
            uVar22 = 0;
            if ((int)uVar30 < piVar33[-6]) {
              uVar22 = uVar34;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            EVar23 = FRichCurve::GetKeyInterpMode
                               (this_00,(FKeyHandle)
                                        *(uint *)(*(longlong *)(piVar33 + -8) + lVar38 * 4));
            uVar22 = 0;
            if ((int)uVar30 < piVar33[-6]) {
              uVar22 = uVar34;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            EVar24 = FRichCurve::GetKeyTangentMode
                               (this_00,(FKeyHandle)
                                        *(uint *)(*(longlong *)(piVar33 + -8) + lVar38 * 4));
            uVar22 = 0;
            if ((int)uVar30 < piVar33[-6]) {
              uVar22 = ~uVar30 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FRichCurve::SetKeyTime
                      (this_00,(FKeyHandle)
                               *(uint *)(*(longlong *)(piVar33 + -8) + (longlong)(int)uVar30 * 4),
                       fVar41);
            uVar22 = 0;
            if ((int)uVar30 < piVar33[-6]) {
              uVar22 = ~uVar30 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FRichCurve::SetKeyInterpMode
                      (this_00,(FKeyHandle)
                               *(uint *)(*(longlong *)(piVar33 + -8) + (longlong)(int)uVar30 * 4),
                       EVar23);
            uVar22 = 0;
            if ((int)uVar30 < piVar33[-6]) {
              uVar22 = ~uVar30 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FRichCurve::SetKeyTangentMode
                      (this_00,(FKeyHandle)
                               *(uint *)(*(longlong *)(piVar33 + -8) + (longlong)(int)uVar30 * 4),
                       EVar24,true);
            bVar18 = true;
          }
          uVar30 = uVar30 + 1;
        } while ((int)uVar30 < this->CachedGridSize);
      }
    }
    uVar30 = local_res20;
    lVar38 = (longlong)(int)local_res20;
    uVar22 = 0;
    if ((int)local_res20 < (this->CurveBiDirTangents).ArrayNum) {
      uVar22 = ~local_res20 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FRichCurve::AutoSetTangents
              (this_00,*(float *)((this->CurveBiDirTangents).AllocatorInstance.Data + lVar38 * 4));
    if (bVar18) {
      if (local_1c4 == 0xffffffff) {
        local_1c4 = uVar30;
      }
      else {
        local_1c8[0] = local_1c8[0] | 1;
      }
    }
    uVar30 = uVar30 + 1;
    uVar28 = (ulonglong)local_1bc;
    this_00 = (FRichCurve *)&this_00[1]._padding_;
    piVar33 = piVar33 + 0x22;
  }
  if ((((this->bCachedNormalizationSetting ^ this->bNormalizeWaveTables) & 1) == 0) &&
     (this->CachedTableResolution == this->WaveTableResolution)) {
    iVar21 = (this->WaveTable).ArrayNum;
    uVar31 = 0;
    iVar5 = (this->CachedWaveTable).ArrayNum;
    if (iVar5 == iVar21) {
      uVar30 = local_1c4;
      if (0 < iVar21) {
        do {
          bVar18 = IsCachedTableEntryStillValid(this,uVar31);
          if (!bVar18) {
            uVar30 = uVar31;
            if (local_1c4 != 0xffffffff) goto LAB_14f0d63df;
            break;
          }
          uVar31 = uVar31 + 1;
          uVar30 = local_1c4;
        } while ((int)uVar31 < iVar21);
      }
      goto LAB_14f0d63e4;
    }
    if (iVar5 < iVar21) {
      iVar21 = iVar5;
    }
    bVar18 = true;
    if (0 < iVar21) {
      do {
        bVar17 = IsCachedTableEntryStillValid(this,uVar31);
        if (!bVar17) {
          local_1c8[0] = local_1c8[0] | 1;
          bVar18 = false;
          break;
        }
        uVar31 = uVar31 + 1;
      } while ((int)uVar31 < iVar21);
    }
    iVar21 = (this->WaveTable).ArrayNum;
    uVar30 = local_1c4;
    if (((this->CachedWaveTable).ArrayNum != iVar21 + -1) || (iVar21 == 0)) goto LAB_14f0d63e4;
    if (bVar18) {
      DuplicateCurveToEnd(this);
      iVar21 = (this->WaveTable).ArrayNum;
      local_1c4 = iVar21 - 1;
    }
    uVar30 = local_1c4;
    if ((iVar21 != 1) || ((this->CachedWaveTable).ArrayNum != 0)) goto LAB_14f0d63e4;
    if (this->bLockKeyframesToGridBool != 0) {
      SampleToGrid(this,this->LockKeyframesToGrid,0);
    }
  }
LAB_14f0d63df:
  local_1c8[0] = local_1c8[0] | 1;
  uVar30 = local_1c4;
LAB_14f0d63e4:
  local_1c4 = uVar30;
  CacheAssetData(this);
  local_188 = &(this->PropertyChangedCallbacks).field_0x10;
  iVar21 = *(int *)&(this->PropertyChangedCallbacks).field_0x28;
  pTVar3 = &this->PropertyChangedCallbacks;
  uStack_18c = 1;
  iStack_17c = iVar19;
  if (iVar21 != 0) {
    puVar25 = *(uint **)&(this->PropertyChangedCallbacks).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)local_188;
    }
    uVar31 = *puVar25;
    iVar19 = 0;
    while (uVar31 == 0) {
      lVar38 = (longlong)local_1c0;
      iVar19 = iVar19 + 0x20;
      local_1c0 = local_1c0 + 1;
      if ((int)((iVar21 + -1 >> 0x1f & 0x1fU) + iVar21 + -1) >> 5 < local_1c0) goto LAB_14f0d647a;
      uVar31 = puVar25[lVar38 + 1];
    }
    uStack_18c = -uVar31 & uVar31;
    uVar28 = (ulonglong)uStack_18c * 2 + 1;
    lVar38 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar38 == 0; lVar38 = lVar38 + -1) {
      }
    }
    local_1a8 = (int)lVar38;
    iStack_17c = local_1a8 + -1 + iVar19;
    if (iVar21 < iStack_17c) {
LAB_14f0d647a:
      iStack_17c = iVar21;
    }
  }
  puVar39 = &(this->PropertyChangedCallbacks).field_0x10;
  uVar31 = *(uint *)&(this->PropertyChangedCallbacks).field_0x28;
  uVar30 = uVar31 & 0xffffffe0;
  uStack_174 = local_e4;
  iStack_170 = *(int *)&(this->PropertyChangedCallbacks).field_0x8 -
               *(int *)&(this->PropertyChangedCallbacks).field_0x34;
  uStack_180 = 0xffffffff;
  iStack_190 = local_1c0;
  TStack_160._padding_ = CONCAT44(uStack_18c,local_1c0);
  TStack_160.CurrentBitIndex = iStack_17c;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar31 >> 5;
  TStack_160._28_4_ = local_e4;
  TStack_160.BaseBitIndex = iVar19;
  uStack_140 = CONCAT44(uStack_16c,iStack_170);
  local_198 = pTVar3;
  local_178 = iVar19;
  local_168 = pTVar3;
  TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_188;
  if (((int)uVar31 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar22 = *(uint *)&(this->PropertyChangedCallbacks).field_0x28;
  if (uVar31 != uVar22) {
    puVar7 = *(undefined1 **)&(this->PropertyChangedCallbacks).field_0x20;
    puVar37 = puVar39;
    if (puVar7 != (undefined1 *)0x0) {
      puVar37 = puVar7;
    }
    uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar21 * 4);
    while (uVar31 == 0) {
      lVar38 = (longlong)iVar21;
      uVar30 = uVar30 + 0x20;
      iVar21 = iVar21 + 1;
      uVar31 = uVar22;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_14f0d6580;
      uVar31 = *(uint *)(puVar37 + lVar38 * 4 + 4);
    }
    uVar28 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
    lVar38 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar38 == 0; lVar38 = lVar38 + -1) {
      }
    }
    uVar31 = (int)lVar38 + -1 + uVar30;
    if ((int)uVar22 < (int)uVar31) {
      uVar31 = uVar22;
    }
  }
LAB_14f0d6580:
  while( true ) {
    pTVar16 = local_168;
    if (*(int *)&local_168->field_0x8 - *(int *)&local_168->field_0x34 != (int)uStack_140) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_160.CurrentBitIndex == uVar31) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar39)) &&
       (pTVar16 == pTVar3)) break;
    lVar38 = *(longlong *)pTVar16;
    lVar36 = (longlong)TStack_160.CurrentBitIndex * 0x50;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar36 + 0x10 + lVar38));
    plVar8 = *(longlong **)(lVar36 + 0x38 + lVar38);
    pcVar9 = *(code **)(lVar36 + 0x10 + lVar38);
    plVar29 = (longlong *)(lVar38 + 0x20 + lVar36);
    if (plVar8 != (longlong *)0x0) {
      plVar29 = plVar8;
    }
    uVar27 = (**(code **)(*plVar29 + 8))();
    (*pcVar9)(uVar27,local_1c8);
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  }
  this->field_0x14c = (this->field_0x38 ^ this->field_0x14c) & 0xfe ^ this->field_0x38;
  this->CachedGridSize = this->LockKeyframesToGrid;
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  return;
}

// GetPrivateStaticClass @ 14f0dc190

UClass * __cdecl UMonoWaveTableSynthPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"MonoWaveTableSynthPreset",
               &Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.InnerSingleton,
               StaticRegisterNativesUMonoWaveTableSynthPreset,0x170,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMonoWaveTableSynthPreset>,
               InternalVTableHelperCtorCaller<UMonoWaveTableSynthPreset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.InnerSingleton;
}

// IsCachedTableEntryStillValid @ 14f0e77a0

bool __thiscall
UMonoWaveTableSynthPreset::IsCachedTableEntryStillValid(UMonoWaveTableSynthPreset *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FRichCurve *this_00;
  FRichCurve *pFVar5;
  
  uVar4 = 0;
  if (param_1 < (this->CachedWaveTable).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = FRuntimeFloatCurve::GetRichCurve
                      ((FRuntimeFloatCurve *)
                       ((this->CachedWaveTable).AllocatorInstance.Data + (longlong)param_1 * 0x88));
  uVar4 = 0;
  if (param_1 < (this->WaveTable).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar5 = FRuntimeFloatCurve::GetRichCurve
                     ((FRuntimeFloatCurve *)
                      ((this->WaveTable).AllocatorInstance.Data + (longlong)param_1 * 0x88));
  if ((this_00 == (FRichCurve *)0x0) || (pFVar5 == (FRichCurve *)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = FRichCurve::operator==(this_00,pFVar5);
  }
  return bVar2;
}

// RegisterWTComponentCallback @ 14f0f6880

void __thiscall
UMonoWaveTableSynthPreset::RegisterWTComponentCallback
          (UMonoWaveTableSynthPreset *this,uint param_1,
          TFunction<void___cdecl(AssetChangeInfo_const_&)> *param_2)

{
  longlong *plVar1;
  uint local_res10;
  TPairInitializer<unsigned_int_const_&,TFunction<void___cdecl(AssetChangeInfo_const_&)>_&&>
  local_28;
  TFunction<void___cdecl(AssetChangeInfo_const_&)> *local_18;
  
  local_28.Value = (TFunction<void___cdecl(AssetChangeInfo_const_&)> *)&local_res10;
  local_res10 = param_1;
  local_18 = param_2;
  TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TFunction<void___cdecl(AssetChangeInfo_const_&)>_&&>_>
            ((TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
              *)&this->PropertyChangedCallbacks,&local_28,(bool *)&local_28.Value);
  if (*(longlong *)param_2 != 0) {
    plVar1 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// SampleAllToGrid @ 14f0f8580

void __thiscall
UMonoWaveTableSynthPreset::SampleAllToGrid(UMonoWaveTableSynthPreset *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  FRichCurve *this_00;
  FRichCurve *pFVar9;
  float fVar10;
  float in_XMM1_Da;
  float fVar11;
  FKeyHandle local_res8 [2];
  undefined1 local_res10 [24];
  ForAnyElementType local_78;
  int local_70 [14];
  
  pwVar8 = (wchar_t *)&local_78;
  piVar5 = local_70;
  this->CachedGridSize = param_1;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,param_1,(ForAnyElementType *)pwVar8,piVar5,local_70 + 1);
  memset(local_78.Data + (longlong)iVar3 * 4,0,(longlong)(int)param_1 << 2);
  iVar3 = (this->WaveTable).ArrayNum;
  this_00 = (FRichCurve *)(this->WaveTable).AllocatorInstance.Data;
  pFVar9 = (FRichCurve *)((longlong)this_00 + (longlong)iVar3 * 0x88);
  fVar11 = __real_3f800000 / (float)(this->CachedGridSize + -1);
  while( true ) {
    if ((this->WaveTable).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRuntimeFloatCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_00 == pFVar9) break;
    uVar6 = 0;
    if (0 < this->CachedGridSize) {
      lVar7 = 0;
      do {
        in_XMM1_Da = (float)(int)uVar6 * fVar11;
        fVar10 = FRichCurve::Eval(this_00,in_XMM1_Da,0.0);
        uVar4 = 0;
        if ((int)uVar6 < local_70[0]) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if (uVar4 == 0) {
          pwVar8 = L"Array index out of bounds: %lld into an array of size %lld";
          piVar5 = (int *)(longlong)(int)uVar6;
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
        uVar6 = uVar6 + 1;
        *(float *)(local_78.Data + lVar7) = fVar10;
        lVar7 = lVar7 + 4;
      } while ((int)uVar6 < this->CachedGridSize);
    }
    FRichCurve::Reset(this_00);
    uVar6 = 0;
    if (0 < this->CachedGridSize) {
      do {
        FKeyHandle::FKeyHandle(local_res8);
        uVar4 = 0;
        if ((int)uVar6 < local_70[0]) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if (uVar4 == 0) {
          pwVar8 = L"Array index out of bounds: %lld into an array of size %lld";
          piVar5 = (int *)(longlong)(int)uVar6;
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
        piVar5 = (int *)((ulonglong)piVar5 & 0xffffffffffffff00);
        FRichCurve::AddKey(this_00,in_XMM1_Da,(float)(int)uVar6 * fVar11,SUB81(pwVar8,0),
                           (FKeyHandle)(uint)piVar5);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < this->CachedGridSize);
    }
    this_00 = (FRichCurve *)&this_00[1]._padding_;
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// SampleToGrid @ 14f0f87f0

void __thiscall
UMonoWaveTableSynthPreset::SampleToGrid(UMonoWaveTableSynthPreset *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  FRichCurve *this_00;
  float fVar9;
  float in_XMM1_Da;
  float fVar10;
  FKeyHandle local_res10 [4];
  ForAnyElementType local_58;
  int local_50 [14];
  
  pwVar8 = (wchar_t *)&local_58;
  piVar5 = local_50;
  this->CachedGridSize = param_1;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50[0] = 0;
  local_50[1] = 0;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,param_1,(ForAnyElementType *)pwVar8,piVar5,local_50 + 1);
  memset(local_58.Data + (longlong)iVar3 * 4,0,(longlong)(int)param_1 << 2);
  uVar6 = 0;
  if ((int)param_2 < (this->WaveTable).ArrayNum) {
    uVar6 = ~param_2 >> 0x1f;
  }
  fVar10 = __real_3f800000 / (float)(this->CachedGridSize + -1);
  if (uVar6 == 0) {
    pwVar8 = L"Array index out of bounds: %lld into an array of size %lld";
    piVar5 = (int *)(longlong)(int)param_2;
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
  uVar6 = 0;
  this_00 = (FRichCurve *)((this->WaveTable).AllocatorInstance.Data + (longlong)(int)param_2 * 0x88)
  ;
  if (0 < this->CachedGridSize) {
    lVar7 = 0;
    do {
      in_XMM1_Da = (float)(int)uVar6 * fVar10;
      fVar9 = FRichCurve::Eval(this_00,in_XMM1_Da,0.0);
      uVar4 = 0;
      if ((int)uVar6 < local_50[0]) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        pwVar8 = L"Array index out of bounds: %lld into an array of size %lld";
        piVar5 = (int *)(longlong)(int)uVar6;
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
      uVar6 = uVar6 + 1;
      *(float *)(local_58.Data + lVar7) = fVar9;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < this->CachedGridSize);
  }
  FRichCurve::Reset(this_00);
  uVar6 = 0;
  if (0 < this->CachedGridSize) {
    do {
      FKeyHandle::FKeyHandle(local_res10);
      uVar4 = 0;
      if ((int)uVar6 < local_50[0]) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        pwVar8 = L"Array index out of bounds: %lld into an array of size %lld";
        piVar5 = (int *)(longlong)(int)uVar6;
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
      piVar5 = (int *)((ulonglong)piVar5 & 0xffffffffffffff00);
      FRichCurve::AddKey(this_00,in_XMM1_Da,(float)(int)uVar6 * fVar10,SUB81(pwVar8,0),
                         (FKeyHandle)(uint)piVar5);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < this->CachedGridSize);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// StaticRegisterNativesUMonoWaveTableSynthPreset @ 14f1035f0

void __cdecl UMonoWaveTableSynthPreset::StaticRegisterNativesUMonoWaveTableSynthPreset(void)

{
  return;
}

// UnRegisterWTSynthComponentCallback @ 14f105bb0

void __thiscall
UMonoWaveTableSynthPreset::UnRegisterWTSynthComponentCallback
          (UMonoWaveTableSynthPreset *this,uint param_1)

{
  uint local_res10 [6];
  
  if (*(int *)&(this->PropertyChangedCallbacks).field_0x8 !=
      *(int *)&(this->PropertyChangedCallbacks).field_0x34) {
    local_res10[0] = param_1;
    TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
                *)&this->PropertyChangedCallbacks,param_1,local_res10);
  }
  return;
}

