// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FContentComparisonHelper @ 147bb8bf0

/* WARNING: Enum "Type": Some values do not have unique names */

FContentComparisonHelper * __thiscall
FContentComparisonHelper::FContentComparisonHelper(FContentComparisonHelper *this)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *_Src;
  FScriptContainerElement *_Src_00;
  FString *pFVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined4 local_res8 [4];
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FString local_b8;
  FString local_a8;
  longlong *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  FConfigSection *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  ForAnyElementType *local_50;
  undefined4 *local_48;
  
  uVar7 = 0;
  uVar8 = 0;
  local_res8[0] = 0;
  this->_padding_ = (longlong)&___7FContentComparisonHelper__6B_;
  *(undefined8 *)&this->ReferenceClassesOfInterest = 0;
  *(undefined8 *)&(this->ReferenceClassesOfInterest).field_0x8 = 0;
  *(undefined8 *)&(this->ReferenceClassesOfInterest).field_0x20 = 0;
  *(undefined4 *)&(this->ReferenceClassesOfInterest).field_0x28 = 0;
  *(undefined4 *)&(this->ReferenceClassesOfInterest).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferenceClassesOfInterest).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferenceClassesOfInterest).field_0x34 = 0;
  *(undefined8 *)&(this->ReferenceClassesOfInterest).field_0x40 = 0;
  *(undefined4 *)&(this->ReferenceClassesOfInterest).field_0x48 = 0;
  local_a8.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       FConfigCacheIni::GetSection(GConfig,L"ContentComparisonReferenceTypes",false,&GEngineIni);
  if ((FConfigSection *)local_a8.Data.AllocatorInstance.Data == (FConfigSection *)0x0) {
    return this;
  }
  local_98 = &((FConfigSection *)local_a8.Data.AllocatorInstance.Data)->_padding_;
  local_88 = 0;
  uVar2 = (uint)((FConfigSection *)local_a8.Data.AllocatorInstance.Data)->_padding_;
  local_a8.Data.ArrayMax = 1;
  uStack_8c = uVar7;
  if (uVar2 != 0) {
    plVar9 = (longlong *)((FConfigSection *)local_a8.Data.AllocatorInstance.Data)->_padding_;
    if ((longlong *)((FConfigSection *)local_a8.Data.AllocatorInstance.Data)->_padding_ ==
        (longlong *)0x0) {
      plVar9 = local_98;
    }
    uVar3 = (uint)*plVar9;
    uVar8 = uVar7;
    local_88 = uVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)(int)uVar8;
      local_88 = local_88 + 0x20;
      uVar8 = uVar8 + 1;
      uStack_8c = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar8)
      goto LAB_147bb8cfd;
      uVar3 = *(uint *)((longlong)plVar9 + lVar6 * 4 + 4);
    }
    local_a8.Data.ArrayMax = -uVar3 & uVar3;
    uVar1 = (ulonglong)(uint)local_a8.Data.ArrayMax * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uStack_8c = (local_88 - 1) + (int)lVar6;
    if ((int)uVar2 < (int)uStack_8c) {
      uStack_8c = uVar2;
    }
  }
LAB_147bb8cfd:
  local_a8.Data.ArrayNum = uVar8;
  uStack_90 = 0xffffffff;
  uStack_84 = uStack_8c;
  local_78 = (FConfigSection *)local_a8.Data.AllocatorInstance.Data;
  TStack_70._padding_ = CONCAT44(local_a8.Data.ArrayMax,uVar8);
  TStack_70.BaseBitIndex = local_88;
  TStack_70._28_4_ = uStack_8c;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70.CurrentBitIndex = uStack_8c;
  if ((int)uStack_8c < (int)uVar2) {
    local_50 = &local_c8;
    local_48 = local_res8;
    do {
      lVar6 = local_78->_padding_ + (longlong)TStack_70.CurrentBitIndex * 0x28;
      if (*(char *)(local_78->_padding_ + 0x1d + (longlong)TStack_70.CurrentBitIndex * 0x28) == '\0'
         ) {
        iVar4 = *(int *)(lVar6 + 0x10);
        uVar7 = uVar7 | 2;
        _Src = *(void **)(lVar6 + 8);
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = iVar4;
        if (iVar4 == 0) {
          local_b8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar4,0,(ForAnyElementType *)&local_b8,iVar4,&local_b8.Data.ArrayMax);
          memcpy(local_b8.Data.AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
        }
        pFVar5 = &local_b8;
      }
      else {
        uVar7 = uVar7 | 1;
        pFVar5 = FConfigValue::ExpandValue(&local_a8,(FString *)(lVar6 + 8));
      }
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = (pFVar5->Data).ArrayNum;
      lVar6 = (longlong)local_c0;
      _Src_00 = (pFVar5->Data).AllocatorInstance.Data;
      if (local_c0 == 0) {
        local_bc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_c0,0,&local_c8,local_c0,&local_bc);
        memcpy(local_c8.Data,_Src_00,lVar6 * 2);
      }
      if (((uVar7 & 2) != 0) &&
         (uVar7 = uVar7 & 0xfffffffd,
         local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (((uVar7 & 1) != 0) &&
         (uVar7 = uVar7 & 0xfffffffe,
         (FConfigSection *)local_a8.Data.AllocatorInstance.Data != (FConfigSection *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
      TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_const_&,bool_&&>_>
                ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                  *)&this->ReferenceClassesOfInterest,
                 (TPairInitializer<FString_const_&,bool_&&> *)(local_res8 + 2),(bool *)&local_50);
      if (4 < (byte)LogEngineUtils._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngineUtils);
      }
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (int)*(longlong *)&(TStack_70.Array)->NumBits);
  }
  return this;
}

// ~FContentComparisonHelper @ 147bbeac0

void __thiscall FContentComparisonHelper::~FContentComparisonHelper(FContentComparisonHelper *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ReferenceClassesOfInterest).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FContentComparisonHelper__6B_;
  pvVar1 = *(void **)&(this->ReferenceClassesOfInterest).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReferenceClassesOfInterest);
  return;
}

// CompareClasses @ 147bcce30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FContentComparisonHelper::CompareClasses
          (FContentComparisonHelper *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  UObjectBaseUtility *pUVar3;
  void *pvVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  EInternalObjectFlags EVar13;
  int iVar14;
  size_t sVar15;
  UClass *pUVar16;
  FString *pFVar17;
  FScriptContainerElement *pFVar18;
  ulong64 uVar19;
  FDateTime FVar20;
  FEngineVersion *pFVar21;
  FString *pFVar22;
  FDiagnosticTableWriterCSV *this_00;
  IFileManager *pIVar23;
  FArchive *pFVar24;
  longlong lVar25;
  int iVar26;
  ulonglong uVar27;
  ForAnyElementType *pFVar28;
  wchar_t *pwVar29;
  ForAnyElementType FVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  ForAnyElementType *pFVar35;
  ulonglong uVar36;
  ForAnyElementType *pFVar37;
  UObject *pUVar38;
  undefined1 auStackY_608 [32];
  ForAnyElementType local_5b8;
  undefined8 local_5b0;
  ForAnyElementType local_5a8;
  int local_5a0;
  int local_59c;
  int local_598;
  UObject *local_590;
  ForAnyElementType local_588;
  int local_580;
  int local_57c [3];
  UObject *local_570;
  FString local_568;
  FString local_558;
  TObjectIterator<UClass> local_548;
  FContentComparisonAssetInfo *local_530;
  ForAnyElementType *local_528;
  FString local_520;
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  longlong *local_4c8;
  undefined1 auStack_4c0 [16];
  uint uStack_4b0;
  uint uStack_4ac;
  longlong local_4a8;
  TSet<TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_4a0;
  TSet<TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_498;
  undefined2 local_490;
  undefined1 local_488 [12];
  FName local_47c;
  FString *local_470;
  longlong *local_468;
  undefined1 auStack_460 [16];
  uint uStack_450;
  uint uStack_44c;
  longlong local_448;
  TSet<TTuple<UObject_*,bool>,TDefaultMapHashableKeyFuncs<UObject_*,bool,0>,FDefaultSetAllocator>
  *pTStack_440;
  TSet<TTuple<UObject_*,bool>,TDefaultMapHashableKeyFuncs<UObject_*,bool,0>,FDefaultSetAllocator>
  *local_438;
  undefined2 local_430;
  FContentComparisonHelper *local_428;
  FScriptContainerElement *local_418;
  int iStack_410;
  undefined4 uStack_40c;
  wchar_t *local_408;
  uint uStack_400;
  undefined4 uStack_3fc;
  FString local_3f8;
  FString *local_3e8;
  FContentComparisonAssetInfo **local_3e0;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  TStringView<wchar_t> local_378;
  TStringView<wchar_t> local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290 [2];
  undefined1 local_270 [32];
  longlong local_250;
  TSet<TTuple<UObject_*,bool>,TDefaultMapHashableKeyFuncs<UObject_*,bool,0>,FDefaultSetAllocator>
  *pTStack_248;
  undefined1 local_240 [32];
  longlong local_220;
  TSet<TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_218;
  TSet<TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_208;
  TSet<TTuple<UObject_*,bool>,TDefaultMapHashableKeyFuncs<UObject_*,bool,0>,FDefaultSetAllocator>
  local_1b8;
  undefined1 local_168 [72];
  void *local_120;
  undefined4 local_118;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_110;
  void *local_d0;
  undefined4 local_c8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c0;
  void *local_80;
  undefined4 local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_608;
  uVar27 = 0;
  iStack_410 = 0;
  local_57c[1] = 0;
  local_208.Elements._0_8_ = 0;
  local_208.Elements._8_8_ = 0;
  local_208.Elements._32_8_ = 0;
  local_208.Elements._40_4_ = 0;
  local_208.Elements._44_4_ = 0x80;
  local_208.Elements._48_4_ = 0xffffffff;
  local_208.Elements._52_4_ = 0;
  local_208.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_208.HashSize = 0;
  local_598 = param_3;
  local_470 = param_1;
  local_428 = this;
  if ((param_1->Data).ArrayNum == 0) {
    local_418 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_418 = (param_1->Data).AllocatorInstance.Data;
    if (local_418 == (FScriptContainerElement *)0x0) goto LAB_147bccf05;
  }
  sVar15 = wcslen((wchar_t *)local_418);
  iStack_410 = (int)sVar15;
LAB_147bccf05:
  pUVar16 = Z_Construct_UClass_UClass_NoRegister();
  local_378._12_4_ = uStack_40c;
  local_378.Size = iStack_410;
  local_378.DataPtr = (wchar_t *)local_418;
  local_570 = StaticFindFirstObject
                        (pUVar16,&local_378,ExactClass,Warning,
                         L"FContentComparisonHelper::CompareClasses");
  if (local_570 == (UObject *)0x0) {
    if (2 < (byte)LogEngineUtils._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngineUtils);
    }
    bVar8 = false;
  }
  else {
    iVar12 = param_2->ArrayNum;
    local_5b8.Data = (FScriptContainerElement *)0x0;
    local_5b0 = 0;
    uVar36 = uVar27;
    if (0 < iVar12) {
      do {
        uVar31 = (uint)uVar27;
        uVar33 = 0;
        uVar32 = uVar33;
        if ((int)uVar31 < iVar12) {
          uVar32 = ~uVar31 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        if (*(int *)(pFVar2 + uVar36 + 8) == 0) {
          local_408 = L"";
LAB_147bccff2:
          sVar15 = wcslen(local_408);
          uVar33 = (uint)sVar15;
        }
        else {
          local_408 = *(wchar_t **)(pFVar2 + uVar36);
          if (local_408 != (wchar_t *)0x0) goto LAB_147bccff2;
        }
        uStack_400 = uVar33;
        pUVar16 = Z_Construct_UClass_UClass_NoRegister();
        local_368._12_4_ = uStack_3fc;
        local_368.Size = uStack_400;
        local_368.DataPtr = local_408;
        local_590 = StaticFindFirstObject
                              (pUVar16,&local_368,ExactClass,Warning,
                               L"FContentComparisonHelper::CompareClasses");
        if (local_590 != (UObject *)0x0) {
          if (((local_5b8.Data <= (FScriptContainerElement *)&local_590) &&
              ((FScriptContainerElement *)&local_590 <
               local_5b8.Data + (longlong)local_5b0._4_4_ * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          iVar12 = (int)local_5b0;
          if ((int)local_5b0 == local_5b0._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_5b8,(int *)((longlong)&local_5b0 + 4));
          }
          local_5b0 = CONCAT44(local_5b0._4_4_,iVar12 + 1);
          *(UObject **)(local_5b8.Data + (longlong)iVar12 * 8) = local_590;
        }
        iVar12 = param_2->ArrayNum;
        uVar27 = (ulonglong)(uVar31 + 1);
        uVar36 = uVar36 + 0x10;
      } while ((int)(uVar31 + 1) < iVar12);
    }
    pUVar38 = local_570;
    local_548.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_548.Index = 0xffffffff;
    local_548.ObjectArray.ArrayNum = 0;
    local_548.ObjectArray.ArrayMax = 0;
    EVar13 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar16 = Z_Construct_UClass_UClass_NoRegister();
    GetObjectsOfClass(pUVar16,&local_548.ObjectArray,true,RF_ClassDefaultObject,
                      EVar13 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UClass>::Advance(&local_548);
    bVar8 = true;
    while( true ) {
      uVar32 = 0;
      lVar34 = (longlong)local_548.Index;
      if ((local_548.Index < 0) || (local_548.ObjectArray.ArrayNum <= local_548.Index)) break;
      uVar33 = 0;
      if (local_548.Index < local_548.ObjectArray.ArrayNum) {
        uVar33 = (uint)~local_548.Index >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pUVar3 = *(UObjectBaseUtility **)(local_548.ObjectArray.AllocatorInstance.Data + lVar34 * 8);
      if (((*(int *)&pUVar38[1].field_0x10 <= *(int *)&pUVar3[1].field_0x10) &&
          (*(undefined1 **)
            (*(longlong *)&pUVar3[1].field_0x8 + (longlong)*(int *)&pUVar38[1].field_0x10 * 8) ==
           &pUVar38[1].field_0x8)) && ((pUVar3[5].field_0xc & 1) == 0)) {
        bVar10 = false;
        if (0 < (int)local_5b0) {
          lVar34 = 0;
          iVar12 = (int)local_5b0;
          do {
            uVar33 = 0;
            if ((int)uVar32 < iVar12) {
              uVar33 = ~uVar32 >> 0x1f;
            }
            if (uVar33 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              iVar12 = (int)local_5b0;
            }
            lVar25 = *(longlong *)(local_5b8.Data + lVar34);
            if (lVar25 != 0) {
              if ((*(int *)&pUVar3[1].field_0x10 < *(int *)(lVar25 + 0x38)) ||
                 (bVar11 = true,
                 *(longlong *)
                  (*(longlong *)&pUVar3[1].field_0x8 + (longlong)*(int *)(lVar25 + 0x38) * 8) !=
                 lVar25 + 0x30)) {
                bVar11 = false;
              }
              if (bVar11) {
                bVar10 = true;
              }
            }
            uVar32 = uVar32 + 1;
            lVar34 = lVar34 + 8;
          } while ((int)uVar32 < iVar12);
          pUVar38 = local_570;
          this = local_428;
          if (bVar10) goto LAB_147bcd834;
        }
        pFVar17 = UObjectBaseUtility::GetFullName(pUVar3,&local_358,(UObject *)0x0,None);
        iVar12 = (pFVar17->Data).ArrayNum;
        if (iVar12 == 0) {
          pwVar29 = L"";
          iVar12 = 0;
        }
        else {
          pwVar29 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
          iVar12 = iVar12 + -1;
        }
        pFVar37 = (ForAnyElementType *)0x0;
        uVar32 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar29);
        iVar12 = TSet<TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>(&local_208,uVar32,pFVar17);
        pFVar28 = pFVar37;
        if (iVar12 != -1) {
          pFVar28 = (ForAnyElementType *)(local_208.Elements._0_8_ + (longlong)iVar12 * 0x28);
        }
        pFVar35 = pFVar28 + 2;
        if (pFVar28 == (ForAnyElementType *)0x0) {
          pFVar35 = pFVar37;
        }
        if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_358.Data.AllocatorInstance.Data);
        }
        iVar12 = 0;
        if (pFVar35 == (ForAnyElementType *)0x0) {
          local_530 = (FContentComparisonAssetInfo *)0x0;
          local_528 = pFVar35;
          local_3e8 = UObjectBaseUtility::GetFullName(pUVar3,&local_348,(UObject *)0x0,None);
          local_3e0 = &local_530;
          TSet<TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FString_&&,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_const_&>_>
                    (&local_208,
                     (TPairInitializer<FString_&&,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_const_&>
                      *)local_488,(bool *)&local_3e8);
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
          pFVar17 = UObjectBaseUtility::GetFullName(pUVar3,&local_338,(UObject *)0x0,None);
          iVar14 = (pFVar17->Data).ArrayNum;
          if (iVar14 == 0) {
            pwVar29 = L"";
          }
          else {
            pwVar29 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
            iVar12 = iVar14 + -1;
          }
          uVar32 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar29);
          iVar12 = TSet<TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FString>(&local_208,uVar32,pFVar17);
          pFVar28 = pFVar37;
          if (iVar12 != -1) {
            pFVar28 = (ForAnyElementType *)(local_208.Elements._0_8_ + (longlong)iVar12 * 0x28);
          }
          pFVar35 = pFVar28 + 2;
          if (pFVar28 == (ForAnyElementType *)0x0) {
            pFVar35 = pFVar37;
          }
          if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_338.Data.AllocatorInstance.Data);
          }
          DestructItems<FContentComparisonAssetInfo,int>(local_530,(int)local_528);
          if (local_530 != (FContentComparisonAssetInfo *)0x0) {
            FMemory::Free(local_530);
          }
          if ((pFVar35 == (ForAnyElementType *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AssetList",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EngineUtils.cpp"
                                  ,0x9a,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        local_1b8.Elements._0_8_ = 0;
        local_1b8.Elements._8_8_ = 0;
        iVar12 = 6;
        if (local_598 < 6) {
          iVar12 = local_598;
        }
        local_1b8.Elements._32_8_ = 0;
        local_1b8.Elements._40_4_ = 0;
        local_598 = 1;
        if (1 < iVar12) {
          local_598 = iVar12;
        }
        local_1b8.Elements._44_4_ = 0x80;
        local_1b8.Elements._48_4_ = 0xffffffff;
        local_1b8.Elements._52_4_ = 0;
        local_1b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_1b8.HashSize = 0;
        RecursiveObjectCollection
                  (this,(UObject *)pUVar3,0,local_598,
                   (TMap<UObject_*,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,bool,0>_>
                    *)&local_1b8);
        TSet<TTuple<UObject_*,bool>,TDefaultMapHashableKeyFuncs<UObject_*,bool,0>,FDefaultSetAllocator>
        ::TIterator::TIterator((TIterator *)local_270,&local_1b8);
        local_438 = &local_1b8;
        local_430 = 0;
        stack0xfffffffffffffba8 = local_270._16_16_;
        local_468 = (longlong *)local_270._0_8_;
        auStack_460._0_8_ = local_270._8_8_;
        local_448 = local_250;
        pTStack_440 = pTStack_248;
        uVar27 = local_270._24_8_ >> 0x20;
        if (local_270._28_4_ < *(int *)(local_270._16_8_ + 0x18)) {
          do {
            pUVar3 = *(UObjectBaseUtility **)(*local_468 + (longlong)(int)uVar27 * 0x18);
            if (pUVar3 != (UObjectBaseUtility *)0x0) {
              if (0 < *(int *)&(this->ReferenceClassesOfInterest).field_0x8 -
                      *(int *)&(this->ReferenceClassesOfInterest).field_0x34) {
                local_47c = *(FName *)(*(longlong *)&pUVar3->field_0x10 + 0x18);
                ::FName::ToString(&local_47c,&local_4e0);
                if (local_4e0.Data.ArrayNum == 0) {
                  pwVar29 = L"";
                  uVar32 = 0;
                }
                else {
                  pwVar29 = (wchar_t *)local_4e0.Data.AllocatorInstance.Data;
                  uVar32 = local_4e0.Data.ArrayNum - 1;
                }
                uVar32 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar32,pwVar29);
                iVar12 = TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<FString>
                                   ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                                     *)&this->ReferenceClassesOfInterest,uVar32,&local_4e0);
                lVar34 = 0;
                if (iVar12 != -1) {
                  lVar34 = (longlong)iVar12 * 0x20 + *(longlong *)&this->ReferenceClassesOfInterest;
                }
                lVar25 = lVar34 + 0x10;
                if (lVar34 == 0) {
                  lVar25 = 0;
                }
                if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
                }
                if (lVar25 == 0) goto LAB_147bcd776;
              }
              uVar32 = *(uint *)&pFVar35[1].Data;
              puVar1 = (uint *)((longlong)&pFVar35[1].Data + 4);
              if (uVar32 == *puVar1) {
                uVar32 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,pFVar35,(int *)puVar1);
              }
              lVar34 = (longlong)(int)uVar32;
              *(uint *)&pFVar35[1].Data = uVar32 + 1;
              pFVar18 = pFVar35->Data;
              pFVar2 = pFVar18 + lVar34 * 0x18;
              *(undefined8 *)pFVar2 = 0;
              *(undefined8 *)(pFVar2 + 8) = 0;
              *(undefined8 *)(pFVar18 + lVar34 * 0x18 + 0x10) = 0;
              uVar33 = 0;
              if ((int)uVar32 < *(int *)&pFVar35[1].Data) {
                uVar33 = ~uVar32 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              pFVar2 = pFVar35->Data + lVar34 * 0x18;
              pFVar18 = (FScriptContainerElement *)
                        UObjectBaseUtility::GetFullName(pUVar3,&local_328,(UObject *)0x0,None);
              if (pFVar2 != pFVar18) {
                if (*(void **)pFVar2 != (void *)0x0) {
                  FMemory::Free(*(void **)pFVar2);
                }
                *(undefined8 *)pFVar2 = *(undefined8 *)pFVar18;
                *(undefined8 *)pFVar18 = 0;
                *(int *)(pFVar2 + 8) = *(int *)(pFVar18 + 8);
                *(int *)(pFVar2 + 0xc) = *(int *)(pFVar18 + 0xc);
                *(undefined8 *)(pFVar18 + 8) = 0;
              }
              if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_328.Data.AllocatorInstance.Data);
              }
              FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_168,EstimatedTotal);
              (**(code **)(*(longlong *)pUVar3 + 400))(pUVar3,local_168);
              uVar19 = FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_168);
              local_78 = 0;
              if (local_80 != (void *)0x0) {
                FMemory::Free(local_80);
              }
              TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_c0);
              local_c8 = 0;
              if (local_d0 != (void *)0x0) {
                FMemory::Free(local_d0);
              }
              TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_110);
              local_118 = 0;
              if (local_120 != (void *)0x0) {
                FMemory::Free(local_120);
              }
              TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)(local_168 + 8));
              *(int *)(pFVar2 + 0x10) = (int)uVar19;
            }
LAB_147bcd776:
            uStack_450 = uStack_450 & ~auStack_460._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_460);
            uVar27 = (ulonglong)uStack_44c;
          } while ((int)uStack_44c < *(int *)(auStack_460._8_8_ + 0x18));
          if (((char)local_430 != '\0') && (local_430._1_1_ != '\0')) {
            uVar32 = *(int *)&(local_438->Elements).field_0x8 -
                     *(int *)&(local_438->Elements).field_0x34;
            if (uVar32 < 4) {
              iVar12 = 1;
            }
            else {
              uVar27 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
              lVar34 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                }
              }
              local_488._4_4_ = (undefined4)lVar34;
              iVar12 = 1 << ((byte)lVar34 & 0x1f);
            }
            if (((0 < (int)uVar32) && (local_438->HashSize < iVar12)) ||
               (iVar12 < local_438->HashSize)) {
              local_438->HashSize = iVar12;
              TSet<TTuple<UObject_*,bool>,TDefaultMapHashableKeyFuncs<UObject_*,bool,0>,FDefaultSetAllocator>
              ::Rehash(local_438);
            }
          }
        }
        local_1b8.HashSize = 0;
        if (local_1b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1b8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<UObject_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UObject_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1b8.Elements);
        pUVar38 = local_570;
      }
LAB_147bcd834:
      TObjectIterator<UClass>::Advance(&local_548);
    }
    if (local_548.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.ObjectArray.AllocatorInstance.Data);
    }
    if (local_5b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data);
    }
    FVar20 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)FVar20.Ticks,&local_2a0);
    ::FString::FString(&local_2b0,"Windows");
    pFVar17 = local_470;
    ::FString::PrintfImpl(&local_3b8,L"%s");
    pFVar21 = FEngineVersion::Current();
    FEngineVersion::ToString(pFVar21,&local_308,Branch);
    ::FString::PrintfImpl(&local_3c8,L"ContentCompare-%s/");
    pFVar22 = ::FString::FString(&local_318,L"ContentComparison/");
    ::FString::ConcatFF(&local_3d8,pFVar22,&local_3c8);
    ::FString::ConcatFF(&local_558,&local_3d8,&local_3b8);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    local_5a0 = (pFVar17->Data).ArrayNum;
    lVar34 = (longlong)local_5a0;
    pFVar2 = (pFVar17->Data).AllocatorInstance.Data;
    local_5a8.Data = (FScriptContainerElement *)0x0;
    if (local_5a0 == 0) {
      local_59c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_5a0,0,&local_5a8,local_5a0,&local_59c);
      memcpy(local_5a8.Data,pFVar2,lVar34 * 2);
    }
    FVar20 = FDateTime::Now();
    pFVar17 = FDateTime::ToString((FDateTime *)FVar20.Ticks,local_290);
    if ((pFVar17->Data).ArrayNum == 0) {
      pwVar29 = L"";
    }
    else {
      pwVar29 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_4f0,pwVar29);
    if (local_290[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290[0].Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_568,L"%s-%s.csv");
    iVar12 = local_568.Data.ArrayNum + -1;
    if (local_568.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    iVar14 = FWindowsPlatformMisc::GetMaxPathLength();
    if (iVar14 < iVar12) {
      while( true ) {
        iVar12 = local_568.Data.ArrayNum + -1;
        if (local_568.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        iVar14 = FWindowsPlatformMisc::GetMaxPathLength();
        if (iVar12 <= iVar14) break;
        iVar14 = local_5a0 + -1;
        iVar12 = local_5a0 + -2;
        FVar30.Data = local_5a8.Data;
        if (local_5a0 == 0) {
          iVar12 = -1;
          iVar14 = 0;
          FVar30.Data = (FScriptContainerElement *)L"";
        }
        iVar26 = iVar14;
        if (iVar12 < iVar14) {
          iVar26 = iVar12;
        }
        iVar12 = 0;
        if (0 < iVar26) {
          iVar12 = iVar26;
        }
        ::FString::FString(&local_520,
                           (wchar_t *)(FVar30.Data + ((longlong)iVar14 - (longlong)iVar12) * 2));
        if (local_5a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5a8.Data);
        }
        local_5a8.Data = local_520.Data.AllocatorInstance.Data;
        local_5a0 = local_520.Data.ArrayNum;
        local_520.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_59c = local_520.Data.ArrayMax;
        local_520.Data.ArrayNum = 0;
        local_520.Data.ArrayMax = 0;
        ::FString::PrintfImpl(&local_510,L"%s-%s.csv");
        if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_568.Data.AllocatorInstance.Data);
        }
        local_568.Data.AllocatorInstance.Data = local_510.Data.AllocatorInstance.Data;
        local_568.Data.ArrayNum = local_510.Data.ArrayNum;
        local_568.Data.ArrayMax = local_510.Data.ArrayMax;
        local_510.Data.ArrayNum = 0;
        local_510.Data.ArrayMax = 0;
        local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      ::FString::PrintfImpl(&local_388,L"%s");
      pFVar21 = FEngineVersion::Current();
      FEngineVersion::ToString(pFVar21,&local_2e0,Branch);
      ::FString::PrintfImpl(&local_398,L"ContentCompare-%s/");
      pFVar17 = ::FString::FString(&local_2f0,L"ContentComparison/");
      ::FString::ConcatFF(&local_3a8,pFVar17,&local_398);
      ::FString::ConcatFF(&local_500,&local_3a8,&local_388);
      if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_558.Data.AllocatorInstance.Data);
      }
      local_558.Data.AllocatorInstance.Data = local_500.Data.AllocatorInstance.Data;
      local_558.Data.ArrayNum = local_500.Data.ArrayNum;
      local_558.Data.ArrayMax = local_500.Data.ArrayMax;
      local_500.Data.ArrayNum = 0;
      local_500.Data.ArrayMax = 0;
      local_500.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
      if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data.AllocatorInstance.Data);
      }
      if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
      }
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
    }
    this_00 = ::operator_new(0x30);
    if (this_00 == (FDiagnosticTableWriterCSV *)0x0) {
      this_00 = (FDiagnosticTableWriterCSV *)0x0;
      bVar8 = false;
    }
    else {
      FVar20 = FDateTime::Now();
      FDateTime::ToString((FDateTime *)FVar20.Ticks,&local_2c0);
      FPaths::ProjectDir(&local_2d0);
      ::FString::PrintfImpl(&local_3f8,L"%sLogs/%s-%s.csv");
      if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
      }
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
      FVar30.Data = (FScriptContainerElement *)L"";
      if (local_3f8.Data.ArrayNum != 0) {
        FVar30.Data = local_3f8.Data.AllocatorInstance.Data;
      }
      pIVar23 = IFileManager::Get();
      pFVar24 = (FArchive *)(**(code **)((longlong)*pIVar23 + 0x28))(pIVar23,FVar30.Data,0);
      (this_00->CurrentRow).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->CurrentRow).Data.ArrayNum = 0;
      (this_00->CurrentRow).Data.ArrayMax = 0;
      this_00->OutputStream = pFVar24;
      *(undefined2 *)&this_00[1].CurrentRow.Data.AllocatorInstance.Data = 0x100;
      ::FString::FString((FString *)&this_00[1].CurrentRow.Data.ArrayNum,(wchar_t *)FVar30.Data);
    }
    if ((bVar8) && (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    if (this_00 != (FDiagnosticTableWriterCSV *)0x0) {
      if (this_00->OutputStream == (FArchive *)0x0) {
        if (2 < (byte)LogEngineUtils._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngineUtils);
        }
      }
      else {
        FDiagnosticTableWriterCSV::AddColumn(this_00,L"Class");
        FDiagnosticTableWriterCSV::AddColumn(this_00,L"Asset");
        FDiagnosticTableWriterCSV::AddColumn(this_00,L"ResourceSize(kB)");
        if ((this_00->OutputStream == (FArchive *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutputStream",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                               ,0x47,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        FArchive::LogfImpl(this_00->OutputStream,L"%s");
        ::FString::Empty(&this_00->CurrentRow);
        TSet<TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::TIterator::TIterator((TIterator *)local_240,&local_208);
        local_498 = &local_208;
        local_490 = 0;
        stack0xfffffffffffffb48 = local_240._16_16_;
        local_4c8 = (longlong *)local_240._0_8_;
        auStack_4c0._0_8_ = local_240._8_8_;
        local_4a8 = local_220;
        pTStack_4a0 = pTStack_218;
        uVar27 = local_240._24_8_ >> 0x20;
        uVar32 = local_240._28_4_;
        if ((int)uVar32 < *(int *)(local_240._16_8_ + 0x18)) {
          do {
            plVar7 = local_4c8;
            local_588.Data = (FScriptContainerElement *)0x0;
            local_580 = *(int *)(*local_4c8 + 8 + (longlong)(int)uVar27 * 0x28);
            lVar34 = (longlong)local_580;
            pvVar4 = *(void **)(*local_4c8 + (longlong)(int)uVar27 * 0x28);
            if (local_580 == 0) {
              local_57c[0] = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_580,0,&local_588,local_580,local_57c);
              memcpy(local_588.Data,pvVar4,lVar34 * 2);
            }
            uVar27 = 0;
            lVar34 = *plVar7;
            lVar25 = (longlong)(int)uVar32;
            FVar30.Data = (FScriptContainerElement *)L"";
            if (local_580 != 0) {
              FVar30.Data = local_588.Data;
            }
            FDiagnosticTableWriterCSV::AddColumn(this_00,(wchar_t *)FVar30.Data);
            if ((this_00->OutputStream == (FArchive *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("OutputStream",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                                   ,0x47,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            FArchive::LogfImpl(this_00->OutputStream,L"%s");
            ::FString::Empty(&this_00->CurrentRow);
            iVar12 = *(int *)(lVar34 + 0x18 + lVar25 * 0x28);
            uVar36 = uVar27;
            if (0 < iVar12) {
              do {
                uVar33 = (uint)uVar27;
                uVar32 = 0;
                if ((int)uVar33 < iVar12) {
                  uVar32 = ~uVar33 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  uVar9 = (*pcVar6)();
                  return (bool)uVar9;
                }
                lVar5 = *(longlong *)(lVar34 + 0x10 + lVar25 * 0x28);
                FDiagnosticTableWriterCSV::AddColumn(this_00,L"");
                if (*(int *)(uVar36 + 8 + lVar5) == 0) {
                  pwVar29 = L"";
                }
                else {
                  pwVar29 = *(wchar_t **)(uVar36 + lVar5);
                }
                FDiagnosticTableWriterCSV::AddColumn(this_00,pwVar29);
                FDiagnosticTableWriterCSV::AddColumn(this_00,L"%f");
                if ((this_00->OutputStream == (FArchive *)0x0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("OutputStream",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                                       ,0x47,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  uVar9 = (*pcVar6)();
                  return (bool)uVar9;
                }
                FArchive::LogfImpl(this_00->OutputStream,L"%s");
                ::FString::Empty(&this_00->CurrentRow);
                iVar12 = *(int *)(lVar34 + 0x18 + lVar25 * 0x28);
                uVar27 = (ulonglong)(uVar33 + 1);
                uVar36 = uVar36 + 0x18;
              } while ((int)(uVar33 + 1) < iVar12);
            }
            if (local_588.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_588.Data);
            }
            uStack_4b0 = uStack_4b0 & ~auStack_4c0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_4c0);
            uVar27 = (ulonglong)uStack_4ac;
            uVar32 = uStack_4ac;
          } while ((int)uStack_4ac < *(int *)(auStack_4c0._8_8_ + 0x18));
          if (((char)local_490 != '\0') && (local_490._1_1_ != '\0')) {
            uVar32 = *(int *)&(local_498->Elements).field_0x8 -
                     *(int *)&(local_498->Elements).field_0x34;
            if (uVar32 < 4) {
              iVar12 = 1;
            }
            else {
              uVar27 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
              lVar34 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                }
              }
              local_488._8_4_ = (undefined4)lVar34;
              iVar12 = 1 << ((byte)lVar34 & 0x1f);
            }
            if (((0 < (int)uVar32) && (local_498->HashSize < iVar12)) ||
               (iVar12 < local_498->HashSize)) {
              local_498->HashSize = iVar12;
              TSet<TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::Rehash(local_498);
            }
          }
        }
      }
      if (this_00->OutputStream != (FArchive *)0x0) {
        (**(code **)(*(longlong *)this_00->OutputStream + 0x210))();
        this_00->OutputStream = (FArchive *)0x0;
      }
      pvVar4 = *(void **)&this_00[1].CurrentRow.Data.ArrayNum;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      iVar14 = (this_00->CurrentRow).Data.ArrayNum;
      iVar12 = iVar14 + -1;
      if (iVar14 == 0) {
        iVar12 = 0;
      }
      if ((iVar12 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!CurrentRow.Len()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                             ,0x25,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (this_00->OutputStream != (FArchive *)0x0) {
        (**(code **)(*(longlong *)this_00->OutputStream + 0x210))();
        this_00->OutputStream = (FArchive *)0x0;
      }
      pFVar2 = (this_00->CurrentRow).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(this_00,0x30);
    }
    bVar8 = true;
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
    if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
    }
    if (local_5a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data);
    }
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
  }
  local_208.HashSize = 0;
  if (local_208.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_208.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FContentComparisonAssetInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_208.Elements);
  return bVar8;
}

// CompareClasses @ 147bce2b0

bool __thiscall
FContentComparisonHelper::CompareClasses
          (FContentComparisonHelper *this,FString *param_1,int param_2)

{
  undefined1 uVar1;
  FString *local_18;
  undefined8 local_10;
  
  local_18 = (FString *)0x0;
  local_10 = 0;
  uVar1 = (**(code **)(this->_padding_ + 8))(this,param_1,&local_18,param_2);
  DestructItems<FString,int>(local_18,(int)local_10);
  if (local_18 != (FString *)0x0) {
    FMemory::Free(local_18);
  }
  return (bool)uVar1;
}

// RecursiveObjectCollection @ 147bfa870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FContentComparisonHelper::RecursiveObjectCollection
          (FContentComparisonHelper *this,UObject *param_1,int param_2,int param_3,
          TMap<UObject_*,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,bool,0>_>
          *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStackY_148 [32];
  undefined1 local_108 [8];
  UObject *local_100;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_f8;
  TPairInitializer<UObject_*_const_&,bool_&&> local_e8;
  undefined1 *local_d8;
  FReferenceFinder local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  FReferenceFinder::FReferenceFinder(&local_c8,&local_f8,(UObject *)0x0,false,true,true,true);
  FReferenceFinder::FindReferences(&local_c8,param_1,(UObject *)0x0,(FProperty *)0x0);
  if (param_2 < param_3) {
    uVar6 = 0;
    if (0 < local_f8.ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < local_f8.ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_100 = *(UObject **)(local_f8.AllocatorInstance.Data + lVar7);
        if (local_100 != (UObject *)0x0) {
          pUVar5 = Z_Construct_UClass_UFunction_NoRegister();
          iVar1 = (int)pUVar5->_padding_;
          if ((*(int *)(*(longlong *)&local_100->field_0x10 + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&local_100->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            pUVar5 = Z_Construct_UClass_UPackage_NoRegister();
            iVar1 = (int)pUVar5->_padding_;
            if ((*(int *)(*(longlong *)&local_100->field_0x10 + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&local_100->field_0x10 + 0x30) + (longlong)iVar1 * 8)
                != &pUVar5->_padding_)) {
              local_e8.Value = (bool *)&local_100;
              local_108[0] = 1;
              local_d8 = local_108;
              TSet<TTuple<UObject_*,bool>,TDefaultMapHashableKeyFuncs<UObject_*,bool,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<UObject_*_const_&,bool_&&>_>
                        ((TSet<TTuple<UObject_*,bool>,TDefaultMapHashableKeyFuncs<UObject_*,bool,0>,FDefaultSetAllocator>
                          *)param_4,&local_e8,(bool *)&local_e8.Value);
              RecursiveObjectCollection(this,local_100,param_2 + 1,param_3,param_4);
            }
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < local_f8.ArrayNum);
    }
  }
  FReferenceFinder::~FReferenceFinder(&local_c8);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

