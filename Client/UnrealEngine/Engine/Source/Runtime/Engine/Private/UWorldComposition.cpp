// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 41

// StaticClass @ 148a2b790

UClass * __cdecl UWorldComposition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldComposition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldComposition",
               &Z_Registration_Info_UClass_UWorldComposition.InnerSingleton,
               StaticRegisterNativesUWorldComposition,0x68,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldComposition>,
               InternalVTableHelperCtorCaller<UWorldComposition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldComposition.InnerSingleton;
}

// UWorldComposition @ 148a42fb0

UWorldComposition * __thiscall
UWorldComposition::UWorldComposition(UWorldComposition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldComposition__6B_;
  (this->WorldRoot).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldRoot).Data.ArrayNum = 0;
  (this->WorldRoot).Data.ArrayMax = 0;
  (this->Tiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tiles).ArrayNum = 0;
  (this->Tiles).ArrayMax = 0;
  (this->TilesStreaming).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TilesStreaming).ArrayNum = 0;
  (this->TilesStreaming).ArrayMax = 0;
  return this;
}

// UWorldComposition @ 148a43000

UWorldComposition * __thiscall
UWorldComposition::UWorldComposition(UWorldComposition *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bLoadAllTilesDuringCinematic = false;
  this->bRebaseOriginIn3DSpace = false;
  this->_padding_ = (longlong)&___7UWorldComposition__6B_;
  (this->WorldRoot).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldRoot).Data.ArrayNum = 0;
  (this->WorldRoot).Data.ArrayMax = 0;
  (this->Tiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tiles).ArrayNum = 0;
  (this->Tiles).ArrayMax = 0;
  (this->TilesStreaming).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TilesStreaming).ArrayNum = 0;
  (this->TilesStreaming).ArrayMax = 0;
  this->TilesStreamingTimeThreshold = 1.0;
  this->RebaseOriginDistance = 524287.5;
  return this;
}

// ~UWorldComposition @ 148a44a30

void __thiscall UWorldComposition::~UWorldComposition(UWorldComposition *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWorldComposition__6B_;
  pFVar1 = (this->TilesStreaming).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWorldCompositionTile,int>
            ((FWorldCompositionTile *)(this->Tiles).AllocatorInstance.Data,(this->Tiles).ArrayNum);
  pFVar1 = (this->Tiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorldRoot).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CaclulateTilesAbsolutePositions @ 148a4bc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWorldComposition::CaclulateTilesAbsolutePositions(UWorldComposition *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  ForElementType<FSetElementId> FVar8;
  FName *pFVar9;
  FName *pFVar10;
  FName *this_00;
  FName *pFVar11;
  uint *puVar12;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [4];
  uint local_e4;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00 = (FName *)(this->Tiles).AllocatorInstance.Data;
  local_e4 = (this->Tiles).ArrayNum;
  uVar6 = (ulonglong)(int)local_e4;
  puVar12 = &this_00[4].Number;
  local_c8 = this_00 + uVar6 * 0x19;
  do {
    pFVar10 = local_c8;
    if ((this->Tiles).ArrayNum != (int)uVar6) {
      local_e8[0] = 0;
      `TCheckedPointerIterator<FWorldCompositionTile,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_e8);
    }
    if (this_00 == pFVar10) {
      return;
    }
    *(undefined8 *)puVar12 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    puVar12[2] = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    pFVar10 = this_00;
    do {
      while( true ) {
        pFVar11 = pFVar10;
        *puVar12 = *puVar12 + pFVar11[3].ComparisonIndex.Value;
        puVar12[1] = puVar12[1] + pFVar11[3].Number;
        puVar12[2] = puVar12[2] + pFVar11[4].ComparisonIndex.Value;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88,&local_d0,
                   (bool *)pFVar11);
        if (pFVar11[0x14].ComparisonIndex.Value == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = *(wchar_t **)(pFVar11 + 0x13);
        }
        ::FName::FName(&local_e0,pwVar7);
        uVar4 = FindTileIndexByName(this,&local_e0);
        if (uVar4 == 0xffffffff) goto LAB_148a4beff;
        uVar5 = 0;
        if ((int)uVar4 < (this->Tiles).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FVar2 = local_e0;
        pFVar10 = (FName *)((this->Tiles).AllocatorInstance.Data + (longlong)(int)uVar4 * 200);
        if (pFVar10 == (FName *)0x0) break;
        uVar4 = ::GetTypeHash(local_e0.ComparisonIndex.Value);
        if (local_88._8_4_ != local_54) {
          FVar8 = (ForElementType<FSetElementId>)local_50;
          if (local_48 != (ForElementType<FSetElementId>)0x0) {
            FVar8 = local_48;
          }
          uVar4 = *(uint *)((longlong)FVar8 + (ulonglong)(local_40 - 1U & FVar2.Number + uVar4) * 4)
          ;
          while (uVar4 != 0xffffffff) {
            pFVar9 = (FName *)(local_88._0_8_ + (longlong)(int)uVar4 * 0x10);
            if (*pFVar9 == FVar2) {
              if (pFVar9 == (FName *)0x0) goto LAB_148a4bf9b;
              if (2 < (byte)LogWorldComposition._0_1_) {
                ::FName::ToString(&local_e0,&local_b0);
                ::FName::ToString(this_00,&local_c0);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogWorldComposition);
                if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                }
                if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                }
              }
              local_d8.ComparisonIndex.Value = 0;
              local_d8.Number = 0;
              pFVar9 = (FName *)::FName::ToString(&local_d8,&local_a0);
              pFVar10 = pFVar11 + 0x13;
              if (pFVar10 != pFVar9) {
                if (*pFVar10 != (FName)0x0) {
                  FMemory::Free((void *)*pFVar10);
                }
                *pFVar10 = *pFVar9;
                pFVar9->ComparisonIndex = 0;
                pFVar9->Number = 0;
                pFVar11[0x14].ComparisonIndex.Value = pFVar9[1].ComparisonIndex.Value;
                pFVar11[0x14].Number = pFVar9[1].Number;
                pFVar9[1].ComparisonIndex = 0;
                pFVar9[1].Number = 0;
              }
              pFVar10 = (FName *)0x0;
              if (local_a0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
              goto LAB_148a4bf9b;
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              goto LAB_148a4beff;
            }
            uVar4 = pFVar9[1].ComparisonIndex.Value;
          }
        }
      }
LAB_148a4bf9b:
    } while (pFVar10 != (FName *)0x0);
LAB_148a4beff:
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    bVar3 = local_88._12_4_ != 0;
    local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
    if (bVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    this_00 = this_00 + 0x19;
    uVar6 = (ulonglong)local_e4;
    puVar12 = puVar12 + 0x32;
  } while( true );
}

// CommitTileStreamingState @ 148a4cd30

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
UWorldComposition::CommitTileStreamingState
          (UWorldComposition *this,UWorld *param_1,int param_2,bool param_3,bool param_4,
          bool param_5,int param_6)

{
  FScriptContainerElement *pFVar1;
  ULevelStreaming *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  LARGE_INTEGER local_res8;
  
  lVar7 = (longlong)param_2;
  if ((param_2 < 0) || ((this->Tiles).ArrayNum <= param_2)) {
LAB_148a4cefd:
    bVar3 = false;
  }
  else {
    uVar6 = 0;
    if (param_2 < (this->Tiles).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->Tiles).AllocatorInstance.Data;
    uVar6 = 0;
    if (param_2 < (this->TilesStreaming).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    this_00 = *(ULevelStreaming **)((this->TilesStreaming).AllocatorInstance.Data + lVar7 * 8);
    if (((this_00->bShouldBlockOnLoad == param_5) && (this_00->LevelLODIndex == param_6)) &&
       (this_00->bShouldBeVisible == param_4)) {
      cVar5 = (**(code **)(this_00->_padding_ + 0x2e8))(this_00);
      if ((bool)cVar5 == param_3) goto LAB_148a4cefd;
    }
    bVar3 = UWorld::IsGameWorld(param_1);
    if (((bVar3) && (param_1->FlushLevelStreamingType == None)) &&
       (0.0 < this->TilesStreamingTimeThreshold)) {
      QueryPerformanceCounter(&local_res8);
      dVar8 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      if (dVar8 - *(double *)(pFVar1 + lVar7 * 200 + 0xc0) < this->TilesStreamingTimeThreshold)
      goto LAB_148a4cefd;
      *(double *)(pFVar1 + lVar7 * 200 + 0xc0) = dVar8;
    }
    this_00->bShouldBlockOnLoad = '\0';
    this_00->field_0x122 = this_00->field_0x122 | param_5 << 2;
    (**(code **)(this_00->_padding_ + 0x2d0))(this_00,param_3);
    ULevelStreaming::SetShouldBeVisible(this_00,param_4);
    ULevelStreaming::SetLevelLODIndex(this_00,param_6);
    bVar3 = true;
  }
  return bVar3;
}

// CreateStreamingLevel @ 148a4f090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULevelStreaming * __thiscall
UWorldComposition::CreateStreamingLevel(UWorldComposition *this,FWorldCompositionTile *param_1)

{
  int iVar1;
  UClass *pUVar2;
  ULevelStreaming *this_00;
  longlong *plVar3;
  UObject *pUVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar4 = (UObject *)this->_padding_;
  if (pUVar4 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_148a4f0e5;
  }
  pUVar4 = (UObject *)0x0;
LAB_148a4f0e5:
  local_b8 = 0;
  local_b0 = 0;
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar4;
  this_00 = (ULevelStreaming *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar3 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  ULevelStreaming::SetWorldAssetByPackageName(this_00,param_1->PackageName);
  this_00->PackageNameToLoad = param_1->PackageName;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this_00->LODPackageNames,&param_1->LODPackageNames);
  return this_00;
}

// DoesTileExists @ 148a506b0

bool __thiscall UWorldComposition::DoesTileExists(UWorldComposition *this,FName *param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Tiles).ArrayNum;
  pFVar2 = (FName *)(this->Tiles).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x19;
  while( true ) {
    if ((this->Tiles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWorldCompositionTile_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*pFVar2 == *param_1) {
      return true;
    }
    pFVar2 = pFVar2 + 0x19;
  }
  return false;
}

// EvaluateWorldOriginLocation @ 148a51e00

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
UWorldComposition::EvaluateWorldOriginLocation(UWorldComposition *this,TVector<double> *param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  UClass *pUVar4;
  UWorld *this_00;
  double dVar5;
  TIntVector3<int> local_38;
  double local_28;
  
  this_00 = (UWorld *)this->_padding_;
  if (this_00 != (UWorld *)0x0) {
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_148a51e48;
  }
  this_00 = (UWorld *)0x0;
LAB_148a51e48:
  local_28 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = local_28;
  if (this->bRebaseOriginIn3DSpace == false) {
    dVar5 = 0.0;
  }
  if ((double)(this->RebaseOriginDistance * this->RebaseOriginDistance) <
      dVar2 * dVar2 + dVar3 * dVar3 + dVar5 * dVar5) {
    local_38.field0_0x0._s_0.Y = (int)dVar3 + (this_00->OriginLocation).field0_0x0._s_0.Y;
    local_38.field0_0x0._s_0.X = (int)dVar2 + (this_00->OriginLocation).field0_0x0._s_0.X;
    local_38.field0_0x0._s_0.Z = (int)dVar5 + (this_00->OriginLocation).field0_0x0._s_0.Z;
    UWorld::RequestNewWorldOrigin(this_00,&local_38);
  }
  return;
}

// FindTileByName @ 148a52c10

FWorldCompositionTile * __thiscall
UWorldComposition::FindTileByName(UWorldComposition *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWorldCompositionTile *pFVar4;
  uint uVar5;
  
  uVar3 = FindTileIndexByName(this,param_1);
  if (uVar3 == 0xffffffff) {
    return (FWorldCompositionTile *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Tiles).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWorldCompositionTile *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FWorldCompositionTile *)
         ((this->Tiles).AllocatorInstance.Data + (longlong)(int)uVar3 * 200);
}

// FindTileIndexByName @ 148a52ca0

int __thiscall UWorldComposition::FindTileIndexByName(UWorldComposition *this,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FName FVar6;
  uint uVar7;
  FName *pFVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  uVar7 = 0;
  if (0 < (this->Tiles).ArrayNum) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Tiles).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar8 = (FName *)((this->Tiles).AllocatorInstance.Data + lVar9);
      if (*pFVar8 == *param_1) {
        return uVar7;
      }
      FVar6 = pFVar8[1];
      uVar4 = pFVar8[2].ComparisonIndex.Value;
      FVar1 = (FName)((longlong)FVar6 + (longlong)(int)uVar4 * 8);
      while( true ) {
        if (pFVar8[2].ComparisonIndex.Value != uVar4) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar6 == FVar1) break;
        if (*(FName *)FVar6 == *param_1) {
          return uVar7;
        }
        FVar6 = (FName)((longlong)FVar6 + 8);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 200;
    } while ((int)uVar7 < (this->Tiles).ArrayNum);
  }
  return -1;
}

// FixupForPIE @ 148a52da0

void __thiscall UWorldComposition::FixupForPIE(UWorldComposition *this,int param_1)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  FName *pFVar7;
  ForAnyElementType FVar8;
  FName this_00;
  uint uVar9;
  FName *this_01;
  longlong lVar10;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar9 = 0;
  if (0 < (this->Tiles).ArrayNum) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->Tiles).ArrayNum) {
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
      this_01 = (FName *)((this->Tiles).AllocatorInstance.Data + lVar10);
      pFVar6 = ::FName::ToString(this_01,&local_58);
      UWorld::ConvertToPIEPackageName(&local_68,pFVar6,param_1);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar8.Data = local_68.Data.AllocatorInstance.Data;
      }
      pFVar7 = ::FName::FName(&local_res18,(wchar_t *)FVar8.Data);
      FVar1 = *pFVar7;
      *this_01 = FVar1;
      FSoftObjectPath::AddPIEPackageName(FVar1);
      this_00 = this_01[1];
      uVar5 = this_01[2].ComparisonIndex.Value;
      FVar1 = (FName)((longlong)this_00 + (longlong)(int)uVar5 * 8);
      while( true ) {
        if (this_01[2].ComparisonIndex.Value != uVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (this_00 == FVar1) break;
        pFVar6 = ::FName::ToString((FName *)this_00,&local_48);
        UWorld::ConvertToPIEPackageName(&local_78,pFVar6,param_1);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar8.Data = local_78.Data.AllocatorInstance.Data;
        }
        pFVar7 = ::FName::FName(&local_res20,(wchar_t *)FVar8.Data);
        FVar2 = *pFVar7;
        *(FName *)this_00 = FVar2;
        FSoftObjectPath::AddPIEPackageName(FVar2);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        this_00 = (FName)((longlong)this_00 + 8);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 200;
    } while ((int)uVar9 < (this->Tiles).ArrayNum);
  }
  return;
}

// GetDistanceVisibleLevels @ 148a57420

void __thiscall
UWorldComposition::GetDistanceVisibleLevels
          (UWorldComposition *this,TVector<double> *param_1,
          TArray<FDistanceVisibleLevel,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FDistanceVisibleLevel,TSizedDefaultAllocator<32>_> *param_3)

{
  GetDistanceVisibleLevels(this,param_1,1,param_2,param_3);
  return;
}

// GetDistanceVisibleLevels @ 148a57450

void __thiscall
UWorldComposition::GetDistanceVisibleLevels
          (UWorldComposition *this,TVector<double> *param_1,int param_2,
          TArray<FDistanceVisibleLevel,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FDistanceVisibleLevel,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  UClass *pUVar10;
  TVector<double> *pTVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint local_108;
  longlong local_100;
  uint local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  int local_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  longlong local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  
  lVar16 = this->_padding_;
  if (lVar16 != 0) {
    pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
    iVar15 = (int)pUVar10->_padding_;
    if ((iVar15 <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar15 * 8)
        == &pUVar10->_padding_)) goto LAB_148a574a3;
  }
  lVar16 = 0;
LAB_148a574a3:
  dVar6 = __real_c2a0000000000000;
  dVar5 = __real_42a0000000000000;
  local_e0 = *(int *)(lVar16 + 0x928);
  local_dc = *(int *)(lVar16 + 0x92c);
  local_108 = 0;
  if (0 < (this->Tiles).ArrayNum) {
    lVar16 = 0;
    local_100 = 0;
    do {
      uVar9 = 0;
      if ((int)local_108 < (this->Tiles).ArrayNum) {
        uVar9 = ~local_108 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar12 = (this->Tiles).AllocatorInstance.Data;
      bVar7 = IsDistanceDependentLevel(this,local_108);
      if (bVar7) {
        uVar9 = 0;
        if ((int)local_108 < (this->TilesStreaming).ArrayNum) {
          uVar9 = ~local_108 >> 0x1f;
        }
        local_f8 = local_108;
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        bVar7 = false;
        uStack_f0 = *(undefined8 *)((this->TilesStreaming).AllocatorInstance.Data + local_100);
        local_e8 = -1;
        if (PRIVATE_GIsRunningCommandlet == false) {
          lVar18 = -1;
          iVar17 = -1;
          dVar3 = (double)(*(int *)(pFVar12 + lVar16 + 0x24) - local_e0) +
                  *(double *)(pFVar12 + lVar16 + 0x48);
          dVar22 = (double)(*(int *)(pFVar12 + lVar16 + 0x24) - local_e0) +
                   *(double *)(pFVar12 + lVar16 + 0x30);
          iVar15 = *(int *)(pFVar12 + lVar16 + 0x10);
          if (*(int *)(pFVar12 + lVar16 + 0xb0) < *(int *)(pFVar12 + lVar16 + 0x10)) {
            iVar15 = *(int *)(pFVar12 + lVar16 + 0xb0);
          }
          lVar14 = (longlong)iVar15;
          dVar2 = (double)(*(int *)(pFVar12 + lVar16 + 0x28) - local_dc) +
                  *(double *)(pFVar12 + lVar16 + 0x50);
          dVar21 = (double)(*(int *)(pFVar12 + lVar16 + 0x28) - local_dc) +
                   *(double *)(pFVar12 + lVar16 + 0x38);
          local_d8 = lVar14;
          if (-1 < lVar14) {
            lVar19 = -0x14;
            do {
              if ((bVar7) && (local_e8 < iVar17)) goto LAB_148a578c0;
              iVar15 = *(int *)(pFVar12 + lVar16 + 0x84);
              if ((-1 < iVar17) && (iVar17 < *(int *)(pFVar12 + lVar16 + 0xb0))) {
                if ((*(int *)(pFVar12 + lVar16 + 0xb0) <= iVar17) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), lVar14 = local_d8, bVar8)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                iVar15 = iVar15 + *(int *)(*(longlong *)(pFVar12 + lVar16 + 0xa8) + lVar19);
              }
              lVar13 = 0;
              if (0 < (longlong)param_2) {
                pTVar11 = param_1;
                do {
                  local_d0 = (pTVar11->field0_0x0)._s_0.X;
                  dStack_c8 = (pTVar11->field0_0x0)._s_0.Y;
                  local_c0 = (pTVar11->field0_0x0)._s_0.Z;
                  dVar20 = 0.0;
                  dVar4 = dVar22;
                  if ((local_d0 < dVar22) || (dVar4 = dVar3, dVar3 < local_d0)) {
                    dVar20 = (local_d0 - dVar4) * (local_d0 - dVar4);
                  }
                  dVar4 = dVar21;
                  if ((dStack_c8 < dVar21) || (dVar4 = dVar2, dVar2 < dStack_c8)) {
                    dVar20 = dVar20 + (dStack_c8 - dVar4) * (dStack_c8 - dVar4);
                  }
                  dVar4 = dVar6;
                  if ((local_c0 < dVar6) || (dVar4 = dVar5, dVar5 < local_c0)) {
                    dVar20 = dVar20 + (local_c0 - dVar4) * (local_c0 - dVar4);
                  }
                  if (dVar20 <= (double)iVar15 * (double)iVar15) {
                    bVar7 = true;
                    local_e8 = iVar17;
                    break;
                  }
                  lVar13 = lVar13 + 1;
                  pTVar11 = pTVar11 + 1;
                } while (lVar13 < param_2);
              }
              iVar17 = iVar17 + 1;
              lVar18 = lVar18 + 1;
              lVar19 = lVar19 + 0x14;
            } while (lVar18 < lVar14);
            if (bVar7) goto LAB_148a578c0;
          }
          pFVar12 = (param_4->AllocatorInstance).Data;
          if (((pFVar12 <= (FScriptContainerElement *)&local_f8) &&
              ((FScriptContainerElement *)&local_f8 < pFVar12 + (longlong)param_4->ArrayMax * 0x18))
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar15 = param_4->ArrayNum;
          if (iVar15 == param_4->ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar15 + 1;
          pFVar12 = (param_4->AllocatorInstance).Data;
        }
        else {
LAB_148a578c0:
          pFVar12 = (param_3->AllocatorInstance).Data;
          if (((pFVar12 <= (FScriptContainerElement *)&local_f8) &&
              ((FScriptContainerElement *)&local_f8 < pFVar12 + (longlong)param_3->ArrayMax * 0x18))
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar15 = param_3->ArrayNum;
          if (iVar15 == param_3->ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar15 + 1;
          pFVar12 = (param_3->AllocatorInstance).Data;
        }
        *(ulonglong *)(pFVar12 + (longlong)iVar15 * 0x18) = CONCAT44(uStack_f4,local_f8);
        *(undefined8 *)(pFVar12 + (longlong)iVar15 * 0x18 + 8) = uStack_f0;
        *(ulonglong *)(pFVar12 + (longlong)iVar15 * 0x18 + 0x10) = CONCAT44(uStack_e4,local_e8);
      }
      local_108 = local_108 + 1;
      local_100 = local_100 + 8;
      lVar16 = lVar16 + 200;
    } while ((int)local_108 < (this->Tiles).ArrayNum);
  }
  return;
}

// GetLevelBounds @ 148a58ae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
UWorldComposition::GetLevelBounds
          (UWorldComposition *this,TBox<double> *__return_storage_ptr__,ULevel *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FAdditionalInfo *pFVar4;
  FWorldTileInfo *pFVar5;
  FWorldTileInfo *pFVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  UPackage *pUVar9;
  UClass *pUVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 local_58;
  undefined7 uStack_17;
  
  if (this->_padding_ != 0) {
    Z_Construct_UClass_UWorld_NoRegister();
  }
  pUVar9 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  pFVar4 = (pUVar9->AdditionalInfo).Ptr;
  if (pFVar4 == (FAdditionalInfo *)0x0) {
    return __return_storage_ptr__;
  }
  pFVar5 = (pFVar4->WorldTileInfo).Ptr;
  if (pFVar5 == (FWorldTileInfo *)0x0) {
    return __return_storage_ptr__;
  }
  lVar12 = this->_padding_;
  if (lVar12 != 0) {
    pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
    iVar13 = (int)pUVar10->_padding_;
    if ((iVar13 <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar13 * 8)
        == &pUVar10->_padding_)) goto LAB_148a58b90;
  }
  lVar12 = 0;
LAB_148a58b90:
  pUVar9 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  iVar13 = (int)((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
  local_58 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  pFVar4 = (pUVar9->AdditionalInfo).Ptr;
  uVar11 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  if ((pFVar4 != (FAdditionalInfo *)0x0) &&
     (pFVar6 = (pFVar4->WorldTileInfo).Ptr, pFVar6 != (FWorldTileInfo *)0x0)) {
    local_58 = *(undefined8 *)&(pFVar6->AbsolutePosition).field0_0x0;
    iVar13 = (int)((ulonglong)local_58 >> 0x20);
    uVar11 = (pFVar6->AbsolutePosition).field0_0x0._s_0.Z;
  }
  dVar16 = (double)((int)local_58 - *(int *)(lVar12 + 0x928));
  dVar18 = (double)(iVar13 - *(int *)(lVar12 + 0x92c));
  dVar17 = dVar16 + (pFVar5->Bounds).Max.field0_0x0._s_0.X;
  dVar14 = dVar18 + (pFVar5->Bounds).Min.field0_0x0._s_0.Y;
  dVar1 = (pFVar5->Bounds).Max.field0_0x0._s_0.Y;
  dVar15 = (double)(uVar11 - *(int *)(lVar12 + 0x930));
  dVar2 = (pFVar5->Bounds).Min.field0_0x0._s_0.Z;
  dVar3 = (pFVar5->Bounds).Max.field0_0x0._s_0.Z;
  auVar7._8_4_ = SUB84(dVar14,0);
  auVar7._0_8_ = dVar16 + (pFVar5->Bounds).Min.field0_0x0._s_0.X;
  auVar7._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar7;
  auVar8._8_4_ = SUB84(dVar17,0);
  auVar8._0_8_ = dVar15 + dVar2;
  auVar8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = auVar8;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar18 + dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar15 + dVar3;
  __return_storage_ptr__->IsValid = 1;
  __return_storage_ptr__->Pad[0] = (char)uStack_17;
  __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_17 >> 8);
  __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_17 >> 0x10);
  __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_17 >> 0x18);
  __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_17 >> 0x20);
  __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_17 >> 0x28);
  __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_17 >> 0x30);
  return __return_storage_ptr__;
}

// GetLevelOffset @ 148a58f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TIntVector3<int> * __thiscall
UWorldComposition::GetLevelOffset
          (UWorldComposition *this,TIntVector3<int> *__return_storage_ptr__,ULevel *param_1)

{
  int iVar1;
  FAdditionalInfo *pFVar2;
  FWorldTileInfo *pFVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_28;
  int local_18;
  
  lVar7 = this->_padding_;
  if (lVar7 != 0) {
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_148a58fd4;
  }
  lVar7 = 0;
LAB_148a58fd4:
  pUVar5 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  local_18 = (int)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  pFVar2 = (pUVar5->AdditionalInfo).Ptr;
  uVar8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uVar6 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  if ((pFVar2 != (FAdditionalInfo *)0x0) &&
     (pFVar3 = (pFVar2->WorldTileInfo).Ptr, pFVar3 != (FWorldTileInfo *)0x0)) {
    uVar8 = *(undefined8 *)&(pFVar3->AbsolutePosition).field0_0x0;
    uVar6 = (pFVar3->AbsolutePosition).field0_0x0._s_0.Z;
    local_18 = (int)uVar8;
  }
  local_28._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
  local_28 = CONCAT44(local_28._4_4_ - *(int *)(lVar7 + 0x92c),local_18 - *(int *)(lVar7 + 0x928));
  iVar1 = *(int *)(lVar7 + 0x930);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = uVar6 - iVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148a5ab50

UClass * __cdecl UWorldComposition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldComposition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldComposition",
               &Z_Registration_Info_UClass_UWorldComposition.InnerSingleton,
               StaticRegisterNativesUWorldComposition,0x68,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldComposition>,
               InternalVTableHelperCtorCaller<UWorldComposition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldComposition.InnerSingleton;
}

// GetTilesList @ 148a5b3f0

TArray<FWorldCompositionTile,TSizedDefaultAllocator<32>_> * __thiscall
UWorldComposition::GetTilesList(UWorldComposition *this)

{
  return &this->Tiles;
}

// GetWorld @ 148a5b500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UWorldComposition::GetWorld(UWorldComposition *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWorld *)0x0;
}

// GetWorldRoot @ 148a5b650

FString * __thiscall
UWorldComposition::GetWorldRoot(UWorldComposition *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->WorldRoot);
  return __return_storage_ptr__;
}

// IsDistanceDependentLevel @ 148a5e380

bool __thiscall UWorldComposition::IsDistanceDependentLevel(UWorldComposition *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if (param_1 == -1) {
    return false;
  }
  uVar4 = 0;
  if (param_1 < (this->Tiles).ArrayNum) {
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
  if ((this->Tiles).AllocatorInstance.Data[(longlong)param_1 * 200 + 0x88] !=
      (FScriptContainerElement)0x0) {
    uVar4 = 0;
    if (param_1 < (this->TilesStreaming).ArrayNum) {
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
    if ((*(byte *)(*(longlong *)
                    ((this->TilesStreaming).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x122)
        & 0x10) == 0) {
      return true;
    }
  }
  return false;
}

// IsDistanceDependentLevel @ 148a5e4b0

bool __thiscall UWorldComposition::IsDistanceDependentLevel(UWorldComposition *this,FName param_1)

{
  bool bVar1;
  int iVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  iVar2 = FindTileIndexByName(this,local_res10);
  bVar1 = IsDistanceDependentLevel(this,iVar2);
  return bVar1;
}

// OnLevelAddedToWorld @ 148a5fa80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWorldComposition::OnLevelAddedToWorld(UWorldComposition *this,ULevel *param_1)

{
  TIntVector3<int> local_38;
  TVector<double>_u_0 local_28;
  
  GetLevelOffset(this,&local_38,param_1);
  local_28._s_0.Z = (double)local_38.field0_0x0._s_0.Z;
  local_28._s_0.X = (double)(int)local_38.field0_0x0._0_8_;
  local_28._s_0.Y = (double)(int)((ulonglong)local_38.field0_0x0._0_8_ >> 0x20);
  ULevel::ApplyWorldOffset(param_1,(TVector<double> *)&local_28._s_0,false);
  return;
}

// OnLevelPostLoad @ 148a5faf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UWorldComposition::OnLevelPostLoad(ULevel *param_1)

{
  UWorld *this;
  UWorldComposition *this_00;
  bool bVar1;
  UPackage *this_01;
  FWorldCompositionTile *pFVar2;
  FWorldTileInfo *pFVar3;
  FName FVar4;
  undefined1 auStack_1a8 [32];
  FName local_188 [2];
  FWorldTileInfo local_178;
  FWorldTileInfo local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  this_01 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  if ((this_01 != (UPackage *)0x0) && ((param_1->OwningWorld).field0_0x0.DebugPtr != (UWorld *)0x0))
  {
    FWorldTileInfo::FWorldTileInfo(&local_178);
    this = (param_1->OwningWorld).field0_0x0.DebugPtr;
    this_00 = (this->WorldComposition).field0_0x0.DebugPtr;
    if (this_00 == (UWorldComposition *)0x0) {
      UWorld::GetWorldPartition(this);
    }
    else {
      local_188[0] = (FName)this_01->_padding_;
      pFVar2 = FindTileByName(this_00,local_188);
      if (pFVar2 != (FWorldCompositionTile *)0x0) {
        FWorldTileInfo::operator=(&local_178,&pFVar2->Info);
      }
    }
    pFVar3 = FWorldTileInfo::FWorldTileInfo(&local_c8);
    bVar1 = FWorldTileInfo::operator==(&local_178,pFVar3);
    if (local_c8.LODList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.LODList.AllocatorInstance.Data);
    }
    if (local_c8.ParentTilePackageName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_c8.ParentTilePackageName.Data.AllocatorInstance.Data);
    }
    if (local_c8.Layer.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Layer.Name.Data.AllocatorInstance.Data);
    }
    if (!bVar1) {
      pFVar3 = ::operator_new(0xa8);
      FVar4.ComparisonIndex.Value = 0;
      FVar4.Number = 0;
      if (pFVar3 != (FWorldTileInfo *)0x0) {
        FVar4 = (FName)FWorldTileInfo::FWorldTileInfo(pFVar3,&local_178);
      }
      local_188[0] = FVar4;
      UPackage::SetWorldTileInfo(this_01,(FWorldTileInfo *)local_188);
    }
    if (local_178.LODList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.LODList.AllocatorInstance.Data);
    }
    if (local_178.ParentTilePackageName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.ParentTilePackageName.Data.AllocatorInstance.Data);
    }
    if (local_178.Layer.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Layer.Name.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnLevelPostSave @ 148a5fc60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWorldComposition::OnLevelPostSave(UWorldComposition *this,ULevel *param_1)

{
  TIntVector3<int> local_38;
  TVector<double>_u_0 local_28;
  
  if (param_1->bIsVisible != '\0') {
    GetLevelOffset(this,&local_38,param_1);
    local_28._s_0.Z = (double)local_38.field0_0x0._s_0.Z;
    local_28._s_0.X = (double)(int)local_38.field0_0x0._0_8_;
    local_28._s_0.Y = (double)(int)((ulonglong)local_38.field0_0x0._0_8_ >> 0x20);
    ULevel::ApplyWorldOffset(param_1,(TVector<double> *)&local_28._s_0,false);
  }
  return;
}

// OnLevelPreSave @ 148a5fcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWorldComposition::OnLevelPreSave(UWorldComposition *this,ULevel *param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  TIntVector3<int> local_38;
  TVector<double>_u_0 local_28;
  
  if (param_1->bIsVisible != '\0') {
    GetLevelOffset(this,&local_38,param_1);
    uVar2 = (uint)__xmm_80000000000000008000000000000000;
    uVar3 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_28._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)(double)local_38.field0_0x0._s_0.Z >> 0x20) ^ uVar3,
                          SUB84((double)local_38.field0_0x0._s_0.Z,0) ^ uVar2);
    local_28._s_0.X =
         (double)CONCAT44((uint)((ulonglong)(double)(int)local_38.field0_0x0._0_8_ >> 0x20) ^ uVar3,
                          SUB84((double)(int)local_38.field0_0x0._0_8_,0) ^ uVar2);
    dVar1 = (double)(int)((ulonglong)local_38.field0_0x0._0_8_ >> 0x20);
    local_28._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar3,SUB84(dVar1,0) ^ uVar2);
    ULevel::ApplyWorldOffset(param_1,(TVector<double> *)&local_28._s_0,false);
  }
  return;
}

// OnLevelRemovedFromWorld @ 148a5fd60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWorldComposition::OnLevelRemovedFromWorld(UWorldComposition *this,ULevel *param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  TIntVector3<int> local_38;
  TVector<double>_u_0 local_28;
  
  GetLevelOffset(this,&local_38,param_1);
  uVar2 = (uint)__xmm_80000000000000008000000000000000;
  uVar3 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_28._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)(double)local_38.field0_0x0._s_0.Z >> 0x20) ^ uVar3,
                        SUB84((double)local_38.field0_0x0._s_0.Z,0) ^ uVar2);
  local_28._s_0.X =
       (double)CONCAT44((uint)((ulonglong)(double)(int)local_38.field0_0x0._0_8_ >> 0x20) ^ uVar3,
                        SUB84((double)(int)local_38.field0_0x0._0_8_,0) ^ uVar2);
  dVar1 = (double)(int)((ulonglong)local_38.field0_0x0._0_8_ >> 0x20);
  local_28._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar3,SUB84(dVar1,0) ^ uVar2);
  ULevel::ApplyWorldOffset(param_1,(TVector<double> *)&local_28._s_0,false);
  return;
}

// PopulateStreamingLevels @ 148a60fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWorldComposition::PopulateStreamingLevels(UWorldComposition *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  ULevelStreaming *this_00;
  longlong *plVar9;
  UObject *pUVar10;
  FName *pFVar11;
  FName *pFVar12;
  undefined1 auStackY_128 [32];
  undefined1 local_d8 [8];
  ULevelStreaming *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  uVar2 = (this->Tiles).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &(this->TilesStreaming).ArrayMax;
  (this->TilesStreaming).ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&(this->TilesStreaming).AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->Tiles).ArrayNum;
  pFVar12 = (FName *)(this->Tiles).AllocatorInstance.Data;
  pFVar11 = pFVar12 + (longlong)iVar3 * 0x19;
  do {
    if ((this->Tiles).ArrayNum != iVar3) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<FWorldCompositionTile,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_d8);
    }
    if (pFVar12 == pFVar11) {
      return;
    }
    pUVar10 = (UObject *)this->_padding_;
    if (pUVar10 == (UObject *)0x0) {
LAB_148a6107f:
      pUVar10 = (UObject *)0x0;
    }
    else {
      pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar8->_padding_)) goto LAB_148a6107f;
    }
    local_c8 = 0;
    local_c0 = 0;
    FObjectInitializer::AssertIfInConstructor
              (pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar8);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_Transient;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = pUVar10;
    this_00 = (ULevelStreaming *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar9 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    ULevelStreaming::SetWorldAssetByPackageName(this_00,*pFVar12);
    this_00->PackageNameToLoad = *pFVar12;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&this_00->LODPackageNames,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar12 + 1))
    ;
    local_d0 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar4 = (this->TilesStreaming).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_d0) &&
        ((FScriptContainerElement *)&local_d0 < pFVar4 + (longlong)*piVar1 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->TilesStreaming).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->TilesStreaming).AllocatorInstance,piVar1);
    }
    (this->TilesStreaming).ArrayNum = iVar7 + 1;
    *(ULevelStreaming **)((this->TilesStreaming).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         local_d0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (ULevelStreaming *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_d0);
    }
    pFVar12 = pFVar12 + 0x19;
  } while( true );
}

// PostDuplicate @ 148a61280

void __thiscall UWorldComposition::PostDuplicate(UWorldComposition *this,bool param_1)

{
  if (param_1) {
    UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    FixupForPIE(this,-1);
  }
  return;
}

// PostInitProperties @ 148a612b0

void __thiscall UWorldComposition::PostInitProperties(UWorldComposition *this)

{
  bool bVar1;
  
  UObject::PostInitProperties((UObject *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  }
  return;
}

// PostLoad @ 148a61640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldComposition::PostLoad(UWorldComposition *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  TArrayView<ULevelStreaming_*_const,int> *pTVar4;
  UWorld *this_00;
  TArrayView<ULevelStreaming_*_const,int> local_28;
  TArrayView<ULevelStreaming_*_const,int> local_18;
  
  UObject::PostLoad((UObject *)this);
  PopulateStreamingLevels(this);
  CaclulateTilesAbsolutePositions(this);
  this_00 = (UWorld *)this->_padding_;
  if (this_00 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_148a61690;
  }
  this_00 = (UWorld *)0x0;
LAB_148a61690:
  bVar2 = UWorld::IsGameWorld(this_00);
  if (bVar2) {
    pTVar4 = TArrayView<ULevelStreaming_*_const,int>::
             TArrayView<ULevelStreaming_*_const,int><TArray<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&this->TilesStreaming);
    local_28.DataPtr = pTVar4->DataPtr;
    local_28.ArrayNum = pTVar4->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
    UWorld::SetStreamingLevels(this_00,&local_28);
  }
  return;
}

// ReinitializeForPIE @ 148a64350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldComposition::ReinitializeForPIE(UWorldComposition *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UWorld *this_00;
  undefined4 uStack_1c;
  TArrayView<ULevelStreaming_*_const,int> local_18;
  
  Rescan(this);
  UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  FixupForPIE(this,-1);
  this_00 = (UWorld *)this->_padding_;
  if (this_00 != (UWorld *)0x0) {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_148a643a5;
  }
  this_00 = (UWorld *)0x0;
LAB_148a643a5:
  pFVar2 = (this->TilesStreaming).AllocatorInstance.Data;
  iVar1 = (this->TilesStreaming).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (ULevelStreaming **)pFVar2;
  UWorld::SetStreamingLevels(this_00,&local_18);
  return;
}

// Rescan @ 148a666b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UWorldComposition::Rescan(UWorldComposition *this)

{
  TArray<FWorldCompositionTile,TSizedDefaultAllocator<32>_> *pTVar1;
  FPackageNameAndLODIndex *pFVar2;
  FWorldCompositionTile *pFVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  UPackage *pUVar13;
  FString *pFVar14;
  ulonglong uVar15;
  FString *pFVar16;
  FName *pFVar17;
  wchar_t *pwVar18;
  ForAnyElementType FVar19;
  ForAnyElementType FVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  UObjectBaseUtility *this_00;
  FScriptContainerElement *pFVar24;
  int *piVar25;
  undefined1 auStackY_408 [32];
  undefined1 local_3b8;
  undefined1 local_3b7 [7];
  TArray<FPackageNameAndLODIndex,TSizedDefaultAllocator<32>_> local_3b0;
  FString local_3a0;
  FString local_390;
  ForAnyElementType local_380;
  int local_378;
  int local_374;
  uint local_370;
  undefined8 local_36c;
  FScriptContainerElement *local_360;
  FName local_358;
  FName local_350;
  UWorldComposition *local_348;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  wchar_t *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FString local_2c8;
  FString local_2b8;
  FName local_2a8;
  FName local_2a0;
  FString local_298;
  FString local_288;
  TStringView<wchar_t> local_278;
  FString local_268;
  undefined1 local_258 [48];
  undefined1 local_228 [64];
  void *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8 [24];
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  uchar local_190;
  uchar local_18f [7];
  FString local_188 [2];
  bool local_168;
  bool local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  ForAnyElementType local_148;
  undefined8 local_140;
  int local_138;
  FWorldCompositionTile local_128;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_408;
  iVar9 = (this->Tiles).ArrayNum;
  pFVar3 = (FWorldCompositionTile *)(this->Tiles).AllocatorInstance.Data;
  pTVar1 = &this->Tiles;
  local_380.Data = (FScriptContainerElement *)0x0;
  local_378 = iVar9;
  local_348 = this;
  if (iVar9 == 0) {
    local_374 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,iVar9,0,&local_380,iVar9,&local_374);
    ConstructItems<FWorldCompositionTile,FWorldCompositionTile,int>(local_380.Data,pFVar3,iVar9);
  }
  pFVar16 = &this->WorldRoot;
  ::FString::Empty(pFVar16);
  DestructItems<FWorldCompositionTile,int>
            ((FWorldCompositionTile *)(pTVar1->AllocatorInstance).Data,(this->Tiles).ArrayNum);
  piVar25 = &(this->Tiles).ArrayMax;
  (this->Tiles).ArrayNum = 0;
  if (*piVar25 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,0,&pTVar1->AllocatorInstance,0,piVar25);
  }
  piVar25 = &(this->TilesStreaming).ArrayMax;
  (this->TilesStreaming).ArrayNum = 0;
  if (*piVar25 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->TilesStreaming).AllocatorInstance,0,piVar25);
  }
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar12 = Z_Construct_UClass_UWorld_NoRegister();
    iVar9 = (int)pUVar12->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
        &pUVar12->_padding_)) goto LAB_148a667ed;
  }
  this_00 = (UObjectBaseUtility *)0x0;
LAB_148a667ed:
  pUVar13 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  local_358 = (FName)pUVar13->_padding_;
  ::FName::ToString(&local_358,&local_3a0);
  pFVar14 = UWorld::StripPIEPrefixFromPackageName
                      (&local_298,&local_3a0,(FString *)&this_00[5].field_0x8);
  if (&local_3a0 != pFVar14) {
    if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
    }
    local_3a0.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a0.Data.ArrayNum = (pFVar14->Data).ArrayNum;
    local_3a0.Data.ArrayMax = (pFVar14->Data).ArrayMax;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  bVar8 = FPackageName::DoesPackageExist(&local_3a0,(FString *)0x0,true);
  if (bVar8) {
    pFVar14 = FPaths::GetPath(&local_288,&local_3a0);
    ::FString::ConcatFC(&local_390,pFVar14,L"/");
    if (pFVar16 != &local_390) {
      pFVar22 = (pFVar16->Data).AllocatorInstance.Data;
      if (pFVar22 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar22);
      }
      (pFVar16->Data).AllocatorInstance.Data = local_390.Data.AllocatorInstance.Data;
      (this->WorldRoot).Data.ArrayNum = local_390.Data.ArrayNum;
      (this->WorldRoot).Data.ArrayMax = local_390.Data.ArrayMax;
      local_390.Data.ArrayNum = 0;
      local_390.Data.ArrayMax = 0;
      local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data.AllocatorInstance.Data);
    }
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    local_258[8] = 0;
    local_258._0_8_ = &___7FWorldTilesGatherer__6B_;
    local_258._16_8_ = (FScriptContainerElement *)0x0;
    local_258._24_4_ = 0;
    local_258._28_4_ = 0;
    local_258._32_8_ = (FScriptContainerElement *)0x0;
    local_258._40_4_ = 0;
    local_258._44_4_ = 0;
    local_228._0_8_ = 0;
    local_228._8_8_ = 0;
    local_228._32_8_ = 0;
    local_228._40_4_ = 0;
    local_228._44_4_ = 0x80;
    local_228._48_4_ = 0xffffffff;
    local_228._52_4_ = 0;
    local_1e8 = (void *)0x0;
    local_1e0 = 0;
    ::FString::FString(&local_300,L"");
    FPackageName::LongPackageNameToFilename(&local_2b8,pFVar16,&local_300);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
    FWorldTilesGatherer::BuildTileCollection((FWorldTilesGatherer *)local_258,&local_2b8);
    pUVar13 = UObjectBaseUtility::GetOutermost(this_00);
    local_350 = (FName)pUVar13->_padding_;
    ::FName::ToString(&local_350,&local_2f0);
    UWorld::StripPIEPrefixFromPackageName(&local_310,&local_2f0,(FString *)&this_00[5].field_0x8);
    if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
    }
    uVar7 = _UNK_1507f03a8;
    uVar6 = ___xmm_0000c350000000000000000000000000;
    uVar15 = (ulonglong)(int)local_258._40_4_;
    pFVar22 = (FScriptContainerElement *)(local_258._32_8_ + uVar15 * 0x10);
    local_370 = local_258._40_4_;
    pFVar24 = (FScriptContainerElement *)local_258._32_8_;
    local_360 = pFVar22;
    while( true ) {
      if (local_258._40_4_ != (int)uVar15) {
        local_3b8 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3b8);
      }
      if (pFVar24 == pFVar22) break;
      iVar9 = *(int *)(pFVar24 + 8);
      if (iVar9 == local_310.Data.ArrayNum) {
        if (1 < iVar9) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar24,(wchar_t *)local_310.Data.AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
          goto LAB_148a66a7b;
        }
      }
      else {
        bVar8 = iVar9 + local_310.Data.ArrayNum == 1;
LAB_148a66a7b:
        if (!bVar8) {
          local_1c0._s_0.X = 0.0;
          local_18f[0] = '\0';
          local_18f[1] = '\0';
          local_18f[2] = '\0';
          local_18f[3] = '\0';
          local_1d8._0_8_ = 0;
          local_1d8._8_8_ = 0;
          local_1d8._16_8_ = 0;
          local_1c0._s_0.Y = 0.0;
          local_1c0._s_0.Z = 0.0;
          local_1a8._s_0.X = 0.0;
          local_1a8._s_0.Y = 0.0;
          local_190 = '\0';
          local_18f[4] = '\0';
          local_18f[5] = '\0';
          local_18f[6] = '\0';
          local_1a8._s_0.Z = 0.0;
          ::FString::FString(local_188,L"Uncategorized");
          local_188[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)uVar6;
          local_188[1].Data._8_8_ = uVar7;
          local_168 = true;
          local_160 = false;
          local_158.Data = (FScriptContainerElement *)0x0;
          local_150._0_4_ = 0;
          local_150._4_4_ = 0;
          local_148.Data = (FScriptContainerElement *)0x0;
          local_140._0_4_ = 0;
          local_140._4_4_ = 0;
          local_138 = 0;
          pFVar16 = FPackageName::GetMapPackageExtension();
          FPackageName::LongPackageNameToFilename(&local_320,(FString *)pFVar24,pFVar16);
          bVar8 = FWorldTileInfo::Read(&local_320,(FWorldTileInfo *)local_1d8);
          if (bVar8) {
            local_128.PackageName.ComparisonIndex.Value = 0;
            local_128.PackageName.Number = 0;
            local_128.LODPackageNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_128.LODPackageNames.ArrayNum = 0;
            local_128.LODPackageNames.ArrayMax = 0;
            FWorldTileInfo::FWorldTileInfo(&local_128.Info);
            local_128.StreamingLevelStateChangeTime = 0.0;
            if (*(int *)(pFVar24 + 8) == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = *(wchar_t **)pFVar24;
            }
            pFVar17 = ::FName::FName(&local_2a8,pwVar18);
            local_128.PackageName = *pFVar17;
            FWorldTileInfo::operator=(&local_128.Info,(FWorldTileInfo *)local_1d8);
            local_2d8 = *(wchar_t **)pFVar24;
            iStack_2d0 = *(int *)(pFVar24 + 8) + -1;
            if (*(int *)(pFVar24 + 8) == 0) {
              iStack_2d0 = 0;
            }
            local_278._12_4_ = uStack_2cc;
            local_278.Size = iStack_2d0;
            local_278.DataPtr = local_2d8;
            FPackageName::GetShortName(&local_2c8,&local_278);
            local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3b0.ArrayNum = 0;
            local_3b0.ArrayMax = 0;
            TMultiMap<FString,FPackageNameAndLODIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPackageNameAndLODIndex,1>_>
            ::MultiFind<TSizedDefaultAllocator<32>_>
                      ((TMultiMap<FString,FPackageNameAndLODIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPackageNameAndLODIndex,1>_>
                        *)local_228,&local_2c8,&local_3b0,false);
            if (local_3b0.ArrayNum != 0) {
              if (local_128.LODPackageNames.ArrayNum < 4) {
                iVar21 = 4 - local_128.LODPackageNames.ArrayNum;
                iVar9 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (8,4,iVar21,&local_128.LODPackageNames.AllocatorInstance,
                                   &local_128.LODPackageNames.ArrayNum,
                                   &local_128.LODPackageNames.ArrayMax);
                memset(local_128.LODPackageNames.AllocatorInstance.Data + (longlong)iVar9 * 8,0,
                       (longlong)iVar21 << 3);
              }
              else if (4 < local_128.LODPackageNames.ArrayNum) {
                iVar9 = local_128.LODPackageNames.ArrayNum + -4;
                if (iVar9 < 0) {
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    );
                  if (bVar8) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
                if (iVar9 != 0) {
                  iVar10 = (local_128.LODPackageNames.ArrayNum - iVar9) + -4;
                  iVar21 = local_128.LODPackageNames.ArrayNum;
                  if (iVar10 != 0) {
                    memmove(local_128.LODPackageNames.AllocatorInstance.Data + 0x20,
                            local_128.LODPackageNames.AllocatorInstance.Data + 0x20 +
                            (longlong)iVar9 * 8,(longlong)iVar10 << 3);
                    iVar21 = local_128.LODPackageNames.ArrayNum;
                  }
                  local_128.LODPackageNames.ArrayNum = iVar21 - iVar9;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,4,&local_128.LODPackageNames.AllocatorInstance,iVar21 - iVar9,
                             &local_128.LODPackageNames.ArrayMax);
                }
              }
              pFVar16 = FPackageName::GetLongPackagePath(&local_268,(FString *)pFVar24);
              ::FString::ConcatFC(&local_330,pFVar16,L"/");
              if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_268.Data.AllocatorInstance.Data);
              }
              iVar9 = local_3b0.ArrayNum;
              uVar15 = (ulonglong)local_3b0.ArrayNum;
              pFVar2 = (FPackageNameAndLODIndex *)(local_3b0.AllocatorInstance.Data + uVar15 * 0x18)
              ;
              FVar20.Data = local_3b0.AllocatorInstance.Data;
              while( true ) {
                if ((int)uVar15 != iVar9) {
                  local_3b7[0] = 0;
                  `TCheckedPointerIterator<FPackageNameAndLODIndex,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_3b7);
                }
                if ((FPackageNameAndLODIndex *)FVar20.Data == pFVar2) break;
                iVar21 = local_330.Data.ArrayNum + -1;
                if (local_330.Data.ArrayNum == 0) {
                  iVar21 = 0;
                }
                FVar19.Data = (FScriptContainerElement *)L"";
                if (local_330.Data.ArrayNum != 0) {
                  FVar19.Data = local_330.Data.AllocatorInstance.Data;
                }
                bVar8 = ::FString::StartsWith
                                  ((FString *)FVar20.Data,(wchar_t *)FVar19.Data,iVar21,IgnoreCase);
                if (bVar8) {
                  ::FString::PrintfImpl(&local_340,L"%s_LOD%d");
                  FVar19.Data = (FScriptContainerElement *)L"";
                  if (local_340.Data.ArrayNum != 0) {
                    FVar19.Data = local_340.Data.AllocatorInstance.Data;
                  }
                  pFVar17 = ::FName::FName(&local_2a0,(wchar_t *)FVar19.Data);
                  uVar23 = ((FPackageNameAndLODIndex *)FVar20.Data)->LODIndex - 1;
                  FVar4 = *pFVar17;
                  uVar11 = 0;
                  if ((int)uVar23 < local_128.LODPackageNames.ArrayNum) {
                    uVar11 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  *(FName *)(local_128.LODPackageNames.AllocatorInstance.Data +
                            (longlong)(int)uVar23 * 8) = FVar4;
                  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_340.Data.AllocatorInstance.Data);
                  }
                }
                uVar15 = local_3b0._8_8_ & 0xffffffff;
                FVar20.Data = FVar20.Data + 0x18;
              }
              local_36c = 0;
              for (FVar20.Data = local_128.LODPackageNames.AllocatorInstance.Data;
                  FVar20.Data !=
                  local_128.LODPackageNames.AllocatorInstance.Data +
                  (longlong)local_128.LODPackageNames.ArrayNum * 8; FVar20.Data = FVar20.Data + 8) {
                if (*(longlong *)FVar20.Data == 0) {
                  iVar9 = (int)((longlong)FVar20.Data -
                                (longlong)local_128.LODPackageNames.AllocatorInstance.Data >> 3);
                  if (iVar9 != -1) {
                    TArray<FName,TSizedDefaultAllocator<32>_>::SetNum
                              (&local_128.LODPackageNames,iVar9,Default);
                  }
                  break;
                }
              }
              pFVar22 = local_360;
              if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_330.Data.AllocatorInstance.Data);
                pFVar22 = local_360;
              }
            }
            piVar25 = &(this->Tiles).ArrayMax;
            pFVar3 = (FWorldCompositionTile *)(pTVar1->AllocatorInstance).Data;
            if (((pFVar3 <= &local_128) && (&local_128 < pFVar3 + *piVar25)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = (this->Tiles).ArrayNum;
            if (iVar9 == *piVar25) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8c8,&pTVar1->AllocatorInstance,piVar25);
            }
            (this->Tiles).ArrayNum = iVar9 + 1;
            FWorldCompositionTile::FWorldCompositionTile
                      ((FWorldCompositionTile *)
                       ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 200),&local_128);
            DestructItems<FPackageNameAndLODIndex,int>
                      ((FPackageNameAndLODIndex *)local_3b0.AllocatorInstance.Data,
                       local_3b0.ArrayNum);
            if ((FPackageNameAndLODIndex *)local_3b0.AllocatorInstance.Data !=
                (FPackageNameAndLODIndex *)0x0) {
              FMemory::Free(local_3b0.AllocatorInstance.Data);
            }
            if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
            }
            if (local_128.Info.LODList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Info.LODList.AllocatorInstance.Data);
            }
            if (local_128.Info.ParentTilePackageName.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Info.ParentTilePackageName.Data.AllocatorInstance.Data);
            }
            if (local_128.Info.Layer.Name.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Info.Layer.Name.Data.AllocatorInstance.Data);
            }
            if (local_128.LODPackageNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_128.LODPackageNames.AllocatorInstance.Data);
            }
          }
          if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_320.Data.AllocatorInstance.Data);
          }
          if (local_148.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data);
          }
          if (local_158.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data);
          }
          if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
          }
        }
      }
      uVar15 = (ulonglong)local_370;
      pFVar24 = pFVar24 + 0x10;
    }
    PopulateStreamingLevels(local_348);
    CaclulateTilesAbsolutePositions(local_348);
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    local_1e0 = 0;
    if (local_1e8 != (void *)0x0) {
      FMemory::Free(local_1e8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FPackageNameAndLODIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FPackageNameAndLODIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FPackageNameAndLODIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_228);
    DestructItems<FString,int>((FString *)local_258._32_8_,local_258._40_4_);
    if ((FScriptContainerElement *)local_258._32_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_258._32_8_);
    }
    DestructItems<FString,int>((FString *)local_258._16_8_,local_258._24_4_);
    if ((FScriptContainerElement *)local_258._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_258._16_8_);
    }
    local_258._0_8_ = &___7FDirectoryVisitor_IPlatformFile__6B_;
  }
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  DestructItems<FWorldCompositionTile,int>((FWorldCompositionTile *)local_380.Data,local_378);
  if ((FWorldCompositionTile *)local_380.Data != (FWorldCompositionTile *)0x0) {
    FMemory::Free(local_380.Data);
  }
  return;
}

// Reset @ 148a671f0

void __thiscall UWorldComposition::Reset(UWorldComposition *this)

{
  int *piVar1;
  
  ::FString::Empty(&this->WorldRoot);
  DestructItems<FWorldCompositionTile,int>
            ((FWorldCompositionTile *)(this->Tiles).AllocatorInstance.Data,(this->Tiles).ArrayNum);
  piVar1 = &(this->Tiles).ArrayMax;
  (this->Tiles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,0,&(this->Tiles).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TilesStreaming).ArrayMax;
  (this->TilesStreaming).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->TilesStreaming).AllocatorInstance,0,piVar1);
  }
  return;
}

// Serialize @ 148a67df0

void __thiscall UWorldComposition::Serialize(UWorldComposition *this,FArchive *param_1)

{
  bool bVar1;
  
  UObject::Serialize((UObject *)this,param_1);
  if (((*(longlong *)&param_1->field_0x68 == 0) ||
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) &&
     ((param_1->field_0x28 & 1) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((*(uint *)&param_1->field_0x34 & 0x400000) != 0) || (bVar1)) {
    ::operator<<(param_1,&this->WorldRoot);
    TArrayPrivateFriend::Serialize<FWorldCompositionTile,TSizedDefaultAllocator<32>_>
              (param_1,&this->Tiles);
    TArrayPrivateFriend::Serialize<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_>
              (param_1,&this->TilesStreaming);
  }
  return;
}

// Serialize @ 148a67e70

void __thiscall
UWorldComposition::Serialize(UWorldComposition *this,FStructuredArchiveRecord param_1)

{
  bool bVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar2);
  if (((*(longlong *)&pFVar2->field_0x68 == 0) ||
      (*(longlong *)(*(longlong *)&pFVar2->field_0x68 + 0x10) == 0)) &&
     ((pFVar2->field_0x28 & 1) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((*(uint *)&pFVar2->field_0x34 & 0x400000) != 0) || (bVar1)) {
    ::operator<<(pFVar2,&this->WorldRoot);
    TArrayPrivateFriend::Serialize<FWorldCompositionTile,TSizedDefaultAllocator<32>_>
              (pFVar2,&this->Tiles);
    TArrayPrivateFriend::Serialize<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_>
              (pFVar2,&this->TilesStreaming);
  }
  return;
}

// StaticRegisterNativesUWorldComposition @ 148a6a510

void __cdecl UWorldComposition::StaticRegisterNativesUWorldComposition(void)

{
  return;
}

// UpdateStreamingState @ 148a6bd70

void __thiscall
UWorldComposition::UpdateStreamingState(UWorldComposition *this,TVector<double> *param_1)

{
  UpdateStreamingState(this,param_1,1);
  return;
}

// UpdateStreamingState @ 148a6bd90

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
UWorldComposition::UpdateStreamingState
          (UWorldComposition *this,TVector<double> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ENetMode EVar3;
  UClass *pUVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  UWorld *this_00;
  undefined1 local_res8 [8];
  TArray<FDistanceVisibleLevel,TSizedDefaultAllocator<32>_> local_38;
  TArray<FDistanceVisibleLevel,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = (UWorld *)this->_padding_;
  if (this_00 != (UWorld *)0x0) {
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) goto LAB_148a6bde4;
  }
  this_00 = (UWorld *)0x0;
LAB_148a6bde4:
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GetDistanceVisibleLevels(this,param_1,param_2,&local_28,&local_38);
  EVar3 = UWorld::InternalGetNetMode(this_00);
  iVar2 = local_38.ArrayNum;
  uVar5 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar5 * 0x18;
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar2) {
      `TCheckedPointerIterator<FDistanceVisibleLevel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar6.Data == pFVar1) break;
    CommitTileStreamingState
              (this,this_00,*(int *)FVar6.Data,false,false,EVar3 == NM_DedicatedServer,
               *(int *)(FVar6.Data + 0x10));
    uVar5 = local_38._8_8_ & 0xffffffff;
    FVar6.Data = FVar6.Data + 0x18;
  }
  iVar2 = local_28.ArrayNum;
  uVar5 = (ulonglong)local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + uVar5 * 0x18;
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar2) {
      `TCheckedPointerIterator<FDistanceVisibleLevel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar6.Data == pFVar1) break;
    CommitTileStreamingState
              (this,this_00,*(int *)FVar6.Data,true,true,EVar3 == NM_DedicatedServer,
               *(int *)(FVar6.Data + 0x10));
    uVar5 = local_28._8_8_ & 0xffffffff;
    FVar6.Data = FVar6.Data + 0x18;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// UpdateStreamingState @ 148a6bf20

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

void __thiscall UWorldComposition::UpdateStreamingState(UWorldComposition *this)

{
  TVector<double>_u_0 *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  bool bVar8;
  ENetMode EVar9;
  int iVar10;
  UClass *pUVar11;
  ULocalPlayer *pUVar12;
  ForElementType<UE::Math::TVector<double>_> FVar13;
  longlong lVar14;
  AWorldSettings *pAVar15;
  UWorld *pUVar16;
  int iVar17;
  byte bVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_2a8 [32];
  TVector<double>_u_0 *local_288;
  ForElementType<UE::Math::TVector<double>_> local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  TVector<double>_u_0 local_258;
  double local_240;
  double dStack_238;
  double local_230;
  int local_228;
  int iStack_224;
  TIntVector3<int>_u_0 local_218;
  undefined1 local_208 [24];
  ForElementType<UE::Math::TVector<double>_> local_1f0;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  pUVar16 = (UWorld *)this->_padding_;
  if (pUVar16 == (UWorld *)0x0) {
LAB_148a6bf74:
    pUVar16 = (UWorld *)0x0;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlayWorld",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldComposition.cpp"
                       ,0x2ca,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar11 = Z_Construct_UClass_UWorld_NoRegister();
    iVar10 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar10) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
        &pUVar11->_padding_)) goto LAB_148a6bf74;
  }
  if ((PRIVATE_GIsRunningCommandlet != false) ||
     (EVar9 = UWorld::InternalGetNetMode(pUVar16), EVar9 == NM_DedicatedServer)) {
    UpdateStreamingState(this,&UE::Math::TVector<double>::ZeroVector,1);
    return;
  }
  iVar10 = UEngine::GetNumGamePlayers(GEngine,pUVar16);
  if (iVar10 == 0) {
    return;
  }
  iVar17 = 0;
  bVar18 = 0;
  local_1f0.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
  local_68 = 0;
  local_64 = 0x10;
  local_240 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_238 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_230 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (iVar10 < 1) goto LAB_148a6c376;
  do {
    pUVar12 = UEngine::GetGamePlayer(GEngine,pUVar16,iVar17);
    if ((pUVar12 != (ULocalPlayer *)0x0) &&
       (plVar2 = (longlong *)pUVar12->_padding_, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x840))(plVar2,&local_258,local_208);
      FVar13 = (ForElementType<UE::Math::TVector<double>_>)&local_1f0;
      if (local_1f0.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar13 = local_1f0.SecondaryData;
      }
      if ((ulonglong)FVar13 <= &local_258) {
        FVar13 = (ForElementType<UE::Math::TVector<double>_>)&local_1f0;
        if (local_1f0.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar13 = local_1f0.SecondaryData;
        }
        if (&local_258 < (TVector<double>_u_0 *)((longlong)FVar13 + (longlong)local_64 * 0x18)) {
          local_270 = (longlong)local_68;
          local_268 = 0x18;
          local_288 = &local_258;
          local_280 = (ForElementType<UE::Math::TVector<double>_>)&local_1f0;
          if (local_1f0.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
            local_280 = local_1f0.SecondaryData;
          }
          local_278 = (longlong)local_64;
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
      if (local_68 == local_64) {
        local_68 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                             (0x818,&local_1f0,&local_64);
      }
      FVar13 = (ForElementType<UE::Math::TVector<double>_>)&local_1f0;
      if (local_1f0.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar13 = local_1f0.SecondaryData;
      }
      lVar14 = (longlong)local_68;
      pTVar1 = (TVector<double>_u_0 *)((longlong)FVar13 + lVar14 * 0x18);
      local_68 = local_68 + 1;
      (((TVector<double>_u_0 *)&(pTVar1->_s_0).X)->_s_0).X = local_258._s_0.X;
      (pTVar1->_s_0).Y = local_258._s_0.Y;
      ((double *)((longlong)FVar13 + 0x10))[lVar14 * 3] = local_258._s_0.Z;
      uVar6 = (double)uVar6 + local_258._s_0.X;
      uVar5 = (double)uVar5 + local_258._s_0.Y;
      uVar4 = (double)uVar4 + local_258._s_0.Z;
      bVar18 = bVar18 | (byte)(*(uint *)(pUVar12->_padding_ + 0x4f8) >> 1) & 1;
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 < iVar10);
  if (local_68 == 0) goto LAB_148a6c376;
  dVar19 = __real_3ff0000000000000 / (double)local_68;
  local_230 = (double)uVar4 * dVar19;
  dVar7 = (double)uVar6 * dVar19;
  dVar19 = (double)uVar5 * dVar19;
  pAVar15 = UWorld::GetWorldSettings(pUVar16,false,true);
  if ((bool)pAVar15->bEnableWorldOriginRebasing) {
    uVar20 = 0;
    uVar21 = 0;
    if ((((pUVar16->OriginOffsetThisFrame).field0_0x0._s_0.X == 0.0) &&
        ((pUVar16->OriginOffsetThisFrame).field0_0x0._s_0.Y == 0.0)) &&
       ((pUVar16->OriginOffsetThisFrame).field0_0x0._s_0.Z == 0.0)) {
      pUVar16 = (UWorld *)this->_padding_;
      if (pUVar16 == (UWorld *)0x0) {
LAB_148a6c292:
        pUVar16 = (UWorld *)0x0;
      }
      else {
        pUVar11 = Z_Construct_UClass_UWorld_NoRegister();
        iVar10 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar10) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
            &pUVar11->_padding_)) goto LAB_148a6c292;
      }
      if (this->bRebaseOriginIn3DSpace != false) {
        uVar20 = SUB84(local_230,0);
        uVar21 = (undefined4)((ulonglong)local_230 >> 0x20);
      }
      if ((double)(this->RebaseOriginDistance * this->RebaseOriginDistance) <
          dVar7 * dVar7 + dVar19 * dVar19 +
          (double)CONCAT44(uVar21,uVar20) * (double)CONCAT44(uVar21,uVar20)) {
        local_228 = (int)dVar7 + (pUVar16->OriginLocation).field0_0x0._s_0.X;
        iStack_224 = (int)dVar19 + (pUVar16->OriginLocation).field0_0x0._s_0.Y;
        local_218._0_8_ = CONCAT44(iStack_224,local_228);
        local_218._s_0.Z =
             (int)(double)CONCAT44(uVar21,uVar20) + (pUVar16->OriginLocation).field0_0x0._s_0.Z;
        UWorld::RequestNewWorldOrigin(pUVar16,(TIntVector3<int> *)&local_218._s_0);
      }
    }
  }
  if (bVar18 == 0) {
    FVar13 = (ForElementType<UE::Math::TVector<double>_>)&local_1f0;
    if (local_1f0.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar13 = local_1f0.SecondaryData;
    }
    UpdateStreamingState(this,(TVector<double> *)FVar13,local_68);
  }
  else {
    FVar13 = (ForElementType<UE::Math::TVector<double>_>)&local_1f0;
    if (local_1f0.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar13 = local_1f0.SecondaryData;
    }
    UpdateStreamingStateCinematic(this,(TVector<double> *)FVar13,local_68);
  }
LAB_148a6c376:
  if (local_1f0.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    FMemory::Free((void *)local_1f0.SecondaryData);
  }
  return;
}

// UpdateStreamingStateCinematic @ 148a6c3e0

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
UWorldComposition::UpdateStreamingStateCinematic
          (UWorldComposition *this,TVector<double> *param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  UWorld *pUVar8;
  uint uVar9;
  byte bVar10;
  UWorld *pUVar11;
  
  if (this->bLoadAllTilesDuringCinematic == false) {
    UpdateStreamingState(this,param_1,param_2);
    return;
  }
  bVar10 = 0;
  pUVar11 = (UWorld *)0x0;
  pUVar7 = pUVar11;
  pUVar8 = pUVar11;
  if ((this->Tiles).ArrayNum < 1) {
    return;
  }
  do {
    uVar9 = (uint)pUVar8;
    uVar5 = 0;
    if ((int)uVar9 < (this->Tiles).ArrayNum) {
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
    pFVar2 = (this->Tiles).AllocatorInstance.Data;
    bVar4 = IsDistanceDependentLevel(this,uVar9);
    if (bVar4) {
      *(undefined8 *)(pFVar2 + -0x30 + (longlong)&pUVar7->LineBatchers[0].field0_0x0) = 0;
      pUVar8 = (UWorld *)this->_padding_;
      if (pUVar8 == (UWorld *)0x0) {
LAB_148a6c4c0:
        pUVar8 = pUVar11;
      }
      else {
        pUVar6 = Z_Construct_UClass_UWorld_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_148a6c4c0;
      }
      bVar4 = CommitTileStreamingState(this,pUVar8,uVar9,true,true,true,-1);
      bVar10 = bVar10 | bVar4;
    }
    pUVar7 = (UWorld *)&pUVar7->ServerStreamingLevelsVisibility;
    pUVar8 = (UWorld *)(ulonglong)(uVar9 + 1);
  } while ((int)(uVar9 + 1) < (this->Tiles).ArrayNum);
  if (bVar10 == 0) {
    return;
  }
  pUVar7 = (UWorld *)this->_padding_;
  if (pUVar7 != (UWorld *)0x0) {
    pUVar6 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) goto LAB_148a6c539;
  }
  pUVar7 = pUVar11;
LAB_148a6c539:
  UWorld::FlushLevelStreaming(pUVar7,Full);
  return;
}

