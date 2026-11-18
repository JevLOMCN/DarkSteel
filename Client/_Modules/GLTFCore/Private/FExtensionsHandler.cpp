// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 19

// FExtensionsHandler @ 14e629e70

FExtensionsHandler * __thiscall
GLTF::FExtensionsHandler::FExtensionsHandler
          (FExtensionsHandler *this,
          TArray<TTuple<GLTF::EMessageSeverity,FText>,TSizedDefaultAllocator<32>_> *param_1)

{
  this->Messages = param_1;
  this->Asset = (FAsset *)0x0;
  return this;
}

// CheckExtensions @ 14e630bf0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
GLTF::FExtensionsHandler::CheckExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  FJsonObject *pFVar6;
  FScriptContainerElement *pFVar7;
  TArray<TTuple<GLTF::EMessageSeverity,FText>,TSizedDefaultAllocator<32>_> *pTVar8;
  ITextData *pIVar9;
  code *pcVar10;
  FJsonObject *pFVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  TSharedPtr<FJsonValue,1> *pTVar15;
  TSharedPtr<FJsonObject,1> *pTVar16;
  FText *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  longlong lVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint *puVar25;
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_198;
  int local_188;
  FJsonObject *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  FJsonObject *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  wchar_t *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  FTextFormat local_f8;
  FText local_e8;
  FFormatArgumentValue local_d8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  FText local_98;
  FText local_88;
  FTextFormat local_78 [2];
  undefined4 local_4c;
  
  uStack_110 = 10;
  local_118 = L"extensions";
  local_b8._12_4_ = uStack_10c;
  local_b8.Size = 10;
  local_b8.DataPtr = L"extensions";
  local_res18 = param_2;
  uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"extensions");
  pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar13,&local_b8);
  if (((pTVar15 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar15->Object != (FJsonValue *)0x0)) &&
     (pTVar15->Object->Type == Object)) {
    local_108 = L"extensions";
    uStack_100 = 10;
    local_a8._12_4_ = uStack_fc;
    local_a8.Size = 10;
    local_a8.DataPtr = L"extensions";
    pTVar16 = FJsonObject::GetObjectField(param_1,&local_a8);
    if ((pTVar16->Object == (FJsonObject *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar6 = pTVar16->Object;
    iStack_178 = 0;
    iVar14 = *(int *)&(pFVar6->Values).field_0x28;
    puVar3 = &(pFVar6->Values).field_0x10;
    local_160 = 0;
    uStack_174 = 1;
    iStack_164 = 0;
    if (iVar14 != 0) {
      puVar25 = *(uint **)&(pFVar6->Values).field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)puVar3;
      }
      uVar13 = *puVar25;
      while (uVar13 == 0) {
        lVar20 = (longlong)iStack_178;
        local_160 = local_160 + 0x20;
        iStack_178 = iStack_178 + 1;
        iStack_164 = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178)
        goto LAB_14e630d60;
        uVar13 = puVar25[lVar20 + 1];
      }
      uStack_174 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_174 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_res20 = (int)lVar20;
      iStack_164 = local_160 + -1 + local_res20;
      if (iVar14 < iStack_164) {
        iStack_164 = iVar14;
      }
    }
LAB_14e630d60:
    uVar13 = *(uint *)&(pFVar6->Values).field_0x28;
    uStack_15c = local_4c;
    uVar23 = uVar13 & 0xffffffe0;
    iStack_158 = *(int *)&(pFVar6->Values).field_0x8 - *(int *)&(pFVar6->Values).field_0x34;
    uStack_168 = 0xffffffff;
    TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
    TStack_148.CurrentBitIndex = iStack_164;
    TStack_148.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)uVar13 >> 5;
    TStack_148._28_4_ = local_4c;
    TStack_148.BaseBitIndex = local_160;
    uStack_128 = CONCAT44(uStack_154,iStack_158);
    local_180 = pFVar6;
    local_170 = puVar3;
    local_150 = pFVar6;
    TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((((int)uVar13 < 0) || (iVar14 < (int)uVar13)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar4 = *(uint *)&(pFVar6->Values).field_0x28;
    if (uVar13 != uVar4) {
      puVar24 = *(undefined1 **)&(pFVar6->Values).field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = puVar3;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar21 * 4);
      while (uVar13 == 0) {
        lVar20 = (longlong)iVar21;
        uVar23 = uVar23 + 0x20;
        iVar21 = iVar21 + 1;
        uVar13 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_14e630e70;
        uVar13 = *(uint *)(puVar24 + lVar20 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_188 = (int)lVar20;
      uVar13 = local_188 + -1 + uVar23;
      if ((int)uVar4 < (int)uVar13) {
        uVar13 = uVar4;
      }
    }
LAB_14e630e70:
    while( true ) {
      pFVar11 = local_150;
      if (*(int *)&(local_150->Values).field_0x8 - *(int *)&(local_150->Values).field_0x34 !=
          (int)uStack_128) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_148.CurrentBitIndex == uVar13) &&
          (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
         (pFVar11 == pFVar6)) break;
      pFVar7 = (param_2->AllocatorInstance).Data;
      pFVar1 = (FString *)
               (*(longlong *)&pFVar11->Values + (longlong)TStack_148.CurrentBitIndex * 0x28);
      iVar14 = local_res18->ArrayNum;
      for (pFVar22 = pFVar7; pFVar22 != pFVar7 + (longlong)iVar14 * 0x10; pFVar22 = pFVar22 + 0x10)
      {
        iVar21 = *(int *)(pFVar22 + 8);
        iVar5 = (pFVar1->Data).ArrayNum;
        if (iVar21 == iVar5) {
          if (1 < iVar21) {
            iVar21 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)pFVar22,
                                (wchar_t *)(pFVar1->Data).AllocatorInstance.Data);
            bVar12 = iVar21 == 0;
            goto LAB_14e630ef5;
          }
LAB_14e630f07:
          if ((int)((longlong)pFVar22 - (longlong)pFVar7 >> 4) != -1) goto LAB_14e6310ce;
          break;
        }
        bVar12 = iVar21 + iVar5 == 1;
LAB_14e630ef5:
        if (bVar12) goto LAB_14e630f07;
      }
      pTVar8 = this->Messages;
      pFVar17 = FText::FromString(&local_88,pFVar1);
      pFVar18 = FText::AsLocalizable_Advanced_LocText
                          (&local_98,L"InterchangeGLTFExtensionHandler",L"UnsupportedExtension",
                           L"Extension is not supported: {0}");
      pFVar19 = FTextFormat::FTextFormat(local_78,pFVar18,Default);
      local_d8.Type = Text;
      FText::FText((FText *)&local_d8.TextValue,pFVar17);
      if ((local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_198.AllocatorInstance,1,&local_198.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_198.AllocatorInstance.Data,&local_d8,1);
      local_f8.TextFormatData.Object = (pFVar19->TextFormatData).Object;
      local_f8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar19->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_f8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_e8,&local_f8,&local_198);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
      if ((FFormatArgumentValue *)local_198.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar19->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar9 = (pFVar17->TextData).Reference;
      if (pIVar9 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar9 + 0x10))();
      }
      iVar14 = pTVar8->ArrayNum;
      bVar12 = GIsAutomationTesting == false;
      if (iVar14 == pTVar8->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
      }
      pTVar8->ArrayNum = iVar14 + 1;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      lVar20 = (longlong)iVar14 * 3 + 1;
      *(uint *)(pFVar7 + lVar20 * 8 + -8) = (uint)bVar12;
      FText::FText((FText *)(pFVar7 + lVar20 * 8),&local_e8);
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
LAB_14e6310ce:
      TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
      param_2 = local_res18;
    }
  }
  return;
}

// SetupAccessorExtensions @ 14e64d330

void __thiscall
GLTF::FExtensionsHandler::SetupAccessorExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FAccessor *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupAccessorExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  CheckExtensions(this,param_1,&Extensions);
  return;
}

// SetupAnimationExtensions @ 14e64e1c0

void __thiscall
GLTF::FExtensionsHandler::SetupAnimationExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FAnimation *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupAnimationExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  CheckExtensions(this,param_1,&Extensions);
  return;
}

// SetupAssetExtensions @ 14e64e250

/* WARNING: Removing unreachable block (ram,0x00014e64e8f2) */
/* WARNING: Removing unreachable block (ram,0x00014e64e801) */
/* WARNING: Removing unreachable block (ram,0x00014e64e9d9) */

void __thiscall
GLTF::FExtensionsHandler::SetupAssetExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FString *param_2)

{
  int *piVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  FJsonObject *this_01;
  FAsset *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TSharedPtr<FJsonValue,1> *pTVar8;
  TSharedPtr<FJsonObject,1> *pTVar9;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  bool local_138 [4];
  uint local_134;
  FString local_130;
  EExtension local_120 [2];
  TReferenceControllerBase<1> *local_118;
  TReferenceControllerBase<1> *local_110;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  FString local_c8;
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  uStack_100 = 10;
  local_108 = L"extensions";
  local_98._12_4_ = uStack_fc;
  local_98.Size = 10;
  local_98.DataPtr = L"extensions";
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"extensions");
  pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar5,&local_98);
  if (((pTVar8 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar8->Object == (FJsonValue *)0x0)) ||
     (pTVar8->Object->Type != Object)) {
    pTVar16 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_f8 = L"extensions";
    uStack_f0 = 10;
    local_88._12_4_ = uStack_ec;
    local_88.Size = 10;
    local_88.DataPtr = L"extensions";
    pTVar9 = FJsonObject::GetObjectField(param_1,&local_88);
    pTVar16 = (pTVar9->SharedReferenceCount).ReferenceController;
    this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)pTVar9->Object;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_110 = pTVar16;
    if (this_00 !=
        (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
         *)0x0) {
      SetupLightExtensions(this,param_1,param_2);
      uStack_e0 = 0x16;
      local_e8 = L"KHR_materials_variants";
      local_78._12_4_ = uStack_dc;
      local_78.Size = 0x16;
      local_78.DataPtr = L"KHR_materials_variants";
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(0x16,L"KHR_materials_variants");
      pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               ::FindByHash<TStringView<wchar_t>_>(this_00,uVar5,&local_78);
      if (((pTVar8 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar8->Object != (FJsonValue *)0x0)) &&
         (pTVar8->Object->Type == Object)) {
        local_138[0] = true;
        local_138[1] = false;
        local_138[2] = false;
        local_138[3] = false;
        TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>::
        Emplace<enum_GLTF::EExtension>(&this->Asset->ProcessedExtensions,local_120,local_138);
        local_d8 = L"KHR_materials_variants";
        uStack_d0 = 0x16;
        local_68._12_4_ = uStack_cc;
        local_68.Size = 0x16;
        local_68.DataPtr = L"KHR_materials_variants";
        pTVar9 = FJsonObject::GetObjectField((FJsonObject *)this_00,&local_68);
        pTVar16 = (pTVar9->SharedReferenceCount).ReferenceController;
        this_01 = pTVar9->Object;
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_118 = pTVar16;
        ::FString::FString(&local_c8,L"variants");
        if ((this_01 == (FJsonObject *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = ArraySize(this_01,&local_c8);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (uVar5 != 0) {
          pFVar2 = this->Asset;
          if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
          }
          piVar1 = &(pFVar2->Variants).ArrayMax;
          if (*piVar1 < (int)uVar5) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar5,&(pFVar2->Variants).AllocatorInstance,
                       (pFVar2->Variants).ArrayNum,piVar1);
          }
          if ((this_01 == (FJsonObject *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_b8 = L"variants";
          uStack_b0 = 8;
          local_58._12_4_ = uStack_ac;
          local_58.Size = 8;
          local_58.DataPtr = L"variants";
          pTVar10 = FJsonObject::GetArrayField(this_01,&local_58);
          pFVar13 = (pTVar10->AllocatorInstance).Data;
          local_134 = pTVar10->ArrayNum;
          uVar11 = (ulonglong)(int)local_134;
          pFVar17 = pFVar13 + uVar11 * 0x10;
          while( true ) {
            if (pTVar10->ArrayNum != (int)uVar11) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            pTVar16 = local_118;
            if (pFVar13 == pFVar17) break;
            if ((*(longlong *)pFVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar12 = (longlong *)(**(code **)**(undefined8 **)pFVar13)();
            if ((*plVar12 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_a8 = L"name";
            uStack_a0 = 4;
            local_48._12_4_ = uStack_9c;
            local_48.Size = 4;
            local_48.DataPtr = L"name";
            FJsonObject::GetStringField((FJsonObject *)*plVar12,&local_130,&local_48);
            pFVar2 = this->Asset;
            pTVar14 = &pFVar2->Variants;
            pFVar15 = (pTVar14->AllocatorInstance).Data;
            if (((pFVar15 <= (FScriptContainerElement *)&local_130) &&
                ((FScriptContainerElement *)&local_130 <
                 pFVar15 + (longlong)(pFVar2->Variants).ArrayMax * 0x10)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar6 = (pFVar2->Variants).ArrayNum;
            piVar1 = &(pFVar2->Variants).ArrayMax;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&pTVar14->AllocatorInstance,piVar1);
            }
            _Src.Data = local_130.Data.AllocatorInstance.Data;
            (pFVar2->Variants).ArrayNum = iVar6 + 1;
            pFVar15 = (pTVar14->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
            *(undefined8 *)&pFVar15->field_0x0 = 0;
            iVar6 = local_130.Data.ArrayNum;
            *(int *)&pFVar15[8].field_0x0 = iVar6;
            if (iVar6 == 0) {
              *(int *)(pFVar15 + 0xc) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar6,0,(ForAnyElementType *)pFVar15,iVar6,(int *)(pFVar15 + 0xc));
              memcpy(*(void **)&pFVar15->field_0x0,_Src.Data,(longlong)iVar6 * 2);
            }
            if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_130.Data.AllocatorInstance.Data);
            }
            uVar11 = (ulonglong)local_134;
            pFVar13 = pFVar13 + 0x10;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        pTVar16 = local_110;
      }
      iVar6 = MaterialsExtensions.ArrayNum;
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 0;
      local_178.ArrayMax = 0;
      if (MaterialsExtensions.ArrayNum != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,MaterialsExtensions.ArrayNum,&local_178.AllocatorInstance,
                           &local_178.ArrayNum,&local_178.ArrayMax);
        ConstructItems<FString,FString,int>
                  (local_178.AllocatorInstance.Data + (longlong)iVar7 * 0x10,
                   (FString *)MaterialsExtensions.AllocatorInstance.Data,iVar6);
      }
      ::FString::FString(&local_168,L"KHR_lights");
      if (((local_178.AllocatorInstance.Data <= (FScriptContainerElement *)&local_168) &&
          ((FScriptContainerElement *)&local_168 <
           local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_178.ArrayNum;
      if (local_178.ArrayNum == local_178.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_178.AllocatorInstance,&local_178.ArrayMax);
      }
      pFVar13 = local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar13 = 0;
      *(FScriptContainerElement **)pFVar13 = local_168.Data.AllocatorInstance.Data;
      *(int *)(pFVar13 + 8) = local_168.Data.ArrayNum;
      *(int *)(pFVar13 + 0xc) = local_168.Data.ArrayMax;
      local_168.Data.ArrayNum = 0;
      local_168.Data.ArrayMax = 0;
      local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = iVar6 + 1;
      ::FString::FString(&local_158,L"KHR_lights_punctual");
      if (((local_178.AllocatorInstance.Data <= (FScriptContainerElement *)&local_158) &&
          ((FScriptContainerElement *)&local_158 <
           local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_178.ArrayNum == local_178.ArrayMax) {
        local_178.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_178.AllocatorInstance,&local_178.ArrayMax);
      }
      pFVar13 = local_178.AllocatorInstance.Data + (longlong)local_178.ArrayNum * 0x10;
      *(undefined8 *)pFVar13 = 0;
      *(FScriptContainerElement **)pFVar13 = local_158.Data.AllocatorInstance.Data;
      *(int *)(pFVar13 + 8) = local_158.Data.ArrayNum;
      *(int *)(pFVar13 + 0xc) = local_158.Data.ArrayMax;
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = local_178.ArrayNum + 1;
      ::FString::FString(&local_148,L"EXT_lights_ies");
      if (((local_178.AllocatorInstance.Data <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 <
           local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_178.ArrayNum;
      if (local_178.ArrayNum == local_178.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_178.AllocatorInstance,&local_178.ArrayMax);
      }
      local_178.ArrayNum = iVar6 + 1;
      pFVar13 = local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar13 = 0;
      *(FScriptContainerElement **)pFVar13 = local_148.Data.AllocatorInstance.Data;
      *(int *)(pFVar13 + 8) = local_148.Data.ArrayNum;
      *(int *)(pFVar13 + 0xc) = local_148.Data.ArrayMax;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      CheckExtensions(this,param_1,&local_178);
      DestructItems<FString,int>((FString *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
      if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return;
}

// SetupBufferExtensions @ 14e64f170

void __thiscall
GLTF::FExtensionsHandler::SetupBufferExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FBuffer *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupBufferExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  CheckExtensions(this,param_1,&Extensions);
  return;
}

// SetupBufferViewExtensions @ 14e64f5e0

void __thiscall
GLTF::FExtensionsHandler::SetupBufferViewExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FBufferView *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupBufferViewExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  CheckExtensions(this,param_1,&Extensions);
  return;
}

// SetupCameraExtensions @ 14e6501f0

void __thiscall
GLTF::FExtensionsHandler::SetupCameraExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FCamera *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupCameraExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  CheckExtensions(this,param_1,&Extensions);
  return;
}

// SetupImageExtensions @ 14e650b00

void __thiscall
GLTF::FExtensionsHandler::SetupImageExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FImage *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupImageExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  CheckExtensions(this,param_1,&Extensions);
  return;
}

// SetupLightExtensions @ 14e650b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e650d48) */

void __thiscall
GLTF::FExtensionsHandler::SetupLightExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FString *param_2)

{
  int *piVar1;
  void *_Src;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  FAsset *pFVar2;
  code *pcVar3;
  double dVar4;
  ForAnyElementType FVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  TSharedPtr<FJsonObject,1> *pTVar13;
  TSharedPtr<FJsonValue,1> *pTVar14;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong *plVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulong64 uVar23;
  uint uVar24;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_408 [32];
  undefined1 local_3b8;
  undefined1 local_3b7 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_3b0;
  FString local_3a0;
  uint local_390;
  FString local_388;
  FString local_378;
  FString local_368;
  ForAnyElementType local_358;
  int local_350;
  int local_34c;
  FString local_348;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *local_338;
  bool local_330 [4];
  uint local_32c;
  bool local_328 [8];
  FExtensionsHandler *local_320;
  longlong local_318;
  FScriptContainerElement *local_310;
  FString local_308;
  FString local_2f8;
  TStringView<wchar_t> local_2e8;
  EExtension local_2d8;
  EExtension local_2d4;
  FString *local_2d0;
  FScriptContainerElement *local_2c8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_2c0;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *local_2b8;
  FJsonObject *local_2b0;
  wchar_t *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  wchar_t *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  FScriptContainerElement *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  FScriptContainerElement *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  FScriptContainerElement *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  FScriptContainerElement *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  wchar_t *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  wchar_t *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  FString local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_320 = this;
  local_2d0 = param_2;
  local_2b0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_58 = 0xd;
    uStack_54 = 0xe;
    local_50 = 0xf;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,3,0,&Extensions.AllocatorInstance,3,&Extensions.ArrayMax);
    FVar5 = Extensions.AllocatorInstance;
    *(ulonglong *)Extensions.AllocatorInstance.Data = CONCAT44(uStack_54,local_58);
    *(undefined4 *)(FVar5.Data + 8) = local_50;
    atexit(`GLTF::FExtensionsHandler::SetupLightExtensions'::__l2::
           _dynamic_atexit_destructor_for__Extensions__);
    _Init_thread_footer(&::_TSS0);
  }
  uVar20 = (ulonglong)(uint)Extensions.ArrayNum;
  uVar21 = 0;
  local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b0.ArrayNum = 0;
  local_3b0.ArrayMax = 0;
  FVar5.Data = local_348.Data.AllocatorInstance.Data;
  uVar6 = local_348.Data._8_8_;
  if (Extensions.ArrayNum != 0) {
    do {
      local_348.Data._8_8_ = uVar6;
      local_348.Data.AllocatorInstance.Data = FVar5.Data;
      uVar9 = (uint)uVar21;
      uVar10 = 0;
      if ((int)uVar9 < (int)uVar20) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pwVar12 = GLTF::ToString(*(EExtension *)
                                (Extensions.AllocatorInstance.Data + (longlong)(int)uVar9 * 4));
      ::FString::FString(&local_348,pwVar12);
      if (((local_3b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_348) &&
          ((FScriptContainerElement *)&local_348 <
           local_3b0.AllocatorInstance.Data + (longlong)local_3b0.ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = local_3b0.ArrayNum;
      if (local_3b0.ArrayNum == local_3b0.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_3b0.AllocatorInstance,&local_3b0.ArrayMax);
      }
      local_3b0.ArrayNum = iVar8 + 1;
      lVar19 = (longlong)iVar8;
      *(undefined8 *)(local_3b0.AllocatorInstance.Data + lVar19 * 0x10) = 0;
      *(FScriptContainerElement **)(local_3b0.AllocatorInstance.Data + lVar19 * 0x10) =
           local_348.Data.AllocatorInstance.Data;
      local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.Data = local_348.Data.AllocatorInstance.Data;
      *(int *)(local_3b0.AllocatorInstance.Data + lVar19 * 0x10 + 8) = local_348.Data.ArrayNum;
      *(int *)(local_3b0.AllocatorInstance.Data + lVar19 * 0x10 + 0xc) = local_348.Data.ArrayMax;
      local_348.Data.ArrayNum = 0;
      local_348.Data.ArrayMax = 0;
      uVar6 = local_348.Data._8_8_;
      local_348.Data.ArrayNum = 0;
      local_348.Data.ArrayMax = 0;
      local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar20 = (ulonglong)Extensions.ArrayNum;
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar20);
  }
  uStack_290 = 10;
  local_298 = L"extensions";
  local_188._12_4_ = uStack_28c;
  local_188.Size = 10;
  local_188.DataPtr = L"extensions";
  pTVar13 = FJsonObject::GetObjectField(param_1,&local_188);
  if ((pTVar13->Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar25 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)pTVar13->Object;
  local_390 = 0;
  local_2b8 = pTVar25;
  if (0 < Extensions.ArrayNum) {
    local_318 = 0;
    do {
      lVar19 = local_318;
      uVar10 = local_390;
      uVar24 = ~local_390;
      uVar9 = 0;
      if ((int)local_390 < local_3b0.ArrayNum) {
        uVar9 = uVar24 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_358.Data = (FScriptContainerElement *)0x0;
      local_350 = *(int *)(local_3b0.AllocatorInstance.Data + lVar19 * 0x10 + 8);
      lVar22 = (longlong)local_350;
      _Src = *(void **)(local_3b0.AllocatorInstance.Data + lVar19 * 0x10);
      if (local_350 == 0) {
        local_34c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_350,0,&local_358,local_350,&local_34c);
        memcpy(local_358.Data,_Src,lVar22 * 2);
      }
      iStack_280 = local_350 + -1;
      uVar23 = 0;
      if (local_350 == 0) {
        iStack_280 = 0;
      }
      local_178._12_4_ = uStack_27c;
      local_178.Size = iStack_280;
      local_288 = local_358.Data;
      local_178.DataPtr = (wchar_t *)local_358.Data;
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iStack_280,(wchar_t *)local_358.Data);
      pTVar14 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(pTVar25,uVar9,&local_178);
      if (((pTVar14 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar14->Object != (FJsonValue *)0x0))
         && (pTVar14->Object->Type == Object)) {
        local_278 = local_358.Data;
        iStack_270 = local_350 + -1;
        if (local_350 == 0) {
          iStack_270 = 0;
        }
        local_168._12_4_ = uStack_26c;
        local_168.Size = iStack_270;
        local_168.DataPtr = (wchar_t *)local_358.Data;
        pTVar13 = FJsonObject::GetObjectField((FJsonObject *)pTVar25,&local_168);
        if ((pTVar13->Object == (FJsonObject *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                   *)pTVar13->Object;
        uVar9 = 0;
        if ((int)uVar10 < Extensions.ArrayNum) {
          uVar9 = uVar24 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)(Extensions.AllocatorInstance.Data + lVar19 * 4);
        if ((iVar8 == 0xd) || (iVar8 == 0xe)) {
          local_328[0] = true;
          local_328[1] = false;
          local_328[2] = false;
          local_328[3] = false;
          TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
          ::Emplace<enum_GLTF::EExtension>(&this->Asset->ProcessedExtensions,&local_2d4,local_328);
          ::FString::FString(&local_308,L"lights");
          local_1a8 = local_308.Data.AllocatorInstance.Data;
          iStack_1a0 = local_308.Data.ArrayNum + -1;
          if (local_308.Data.ArrayNum == 0) {
            iStack_1a0 = 0;
          }
          local_88._12_4_ = uStack_19c;
          local_88.Size = iStack_1a0;
          local_88.DataPtr = (wchar_t *)local_308.Data.AllocatorInstance.Data;
          uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>
                            (iStack_1a0,(wchar_t *)local_308.Data.AllocatorInstance.Data);
          pTVar14 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    ::FindByHash<TStringView<wchar_t>_>(this_00,uVar9,&local_88);
          if (((pTVar14 != (TSharedPtr<FJsonValue,1> *)0x0) &&
              (pTVar14->Object != (FJsonValue *)0x0)) && (pTVar14->Object->Type == Array)) {
            local_198 = local_308.Data.AllocatorInstance.Data;
            iStack_190 = local_308.Data.ArrayNum + -1;
            if (local_308.Data.ArrayNum == 0) {
              iStack_190 = 0;
            }
            local_78._12_4_ = uStack_18c;
            local_78.Size = iStack_190;
            local_78.DataPtr = (wchar_t *)local_308.Data.AllocatorInstance.Data;
            pTVar15 = FJsonObject::GetArrayField((FJsonObject *)this_00,&local_78);
            uVar23 = (ulong64)(uint)pTVar15->ArrayNum;
          }
          if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.Data.AllocatorInstance.Data);
          }
          iVar8 = (int)uVar23;
          if (iVar8 != 0) {
            pFVar2 = this->Asset;
            if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum(uVar23);
            }
            if ((pFVar2->Lights).ArrayMax < iVar8) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x58,8,iVar8,&(pFVar2->Lights).AllocatorInstance,(pFVar2->Lights).ArrayNum,
                         &(pFVar2->Lights).ArrayMax);
            }
            local_2a8 = L"lights";
            uStack_2a0 = 6;
            local_68._12_4_ = uStack_29c;
            local_68.Size = 6;
            local_68.DataPtr = L"lights";
            pTVar15 = FJsonObject::GetArrayField((FJsonObject *)this_00,&local_68);
            iVar8 = pTVar15->ArrayNum;
            pFVar18 = (pTVar15->AllocatorInstance).Data;
            pFVar26 = pFVar18 + (longlong)iVar8 * 0x10;
            while( true ) {
              if (pTVar15->ArrayNum != iVar8) {
                local_3b7[0] = 0;
                `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_3b7);
              }
              lVar19 = local_318;
              uVar10 = local_390;
              if (pFVar18 == pFVar26) break;
              if ((*(longlong *)pFVar18 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              plVar16 = (longlong *)(**(code **)**(undefined8 **)pFVar18)();
              if ((*plVar16 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              SetupLightPunctual(this,(FJsonObject *)*plVar16);
              pFVar18 = pFVar18 + 0x10;
            }
          }
        }
        else if (iVar8 == 0xf) {
          local_330[0] = true;
          local_330[1] = false;
          local_330[2] = false;
          local_330[3] = false;
          TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
          ::Emplace<enum_GLTF::EExtension>(&this->Asset->ProcessedExtensions,&local_2d8,local_330);
          ::FString::FString(&local_2f8,L"lights");
          local_268 = local_2f8.Data.AllocatorInstance.Data;
          iStack_260 = local_2f8.Data.ArrayNum + -1;
          if (local_2f8.Data.ArrayNum == 0) {
            iStack_260 = 0;
          }
          local_158._12_4_ = uStack_25c;
          local_158.Size = iStack_260;
          local_158.DataPtr = (wchar_t *)local_2f8.Data.AllocatorInstance.Data;
          uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>
                            (iStack_260,(wchar_t *)local_2f8.Data.AllocatorInstance.Data);
          pTVar14 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    ::FindByHash<TStringView<wchar_t>_>(this_00,uVar9,&local_158);
          if (((pTVar14 != (TSharedPtr<FJsonValue,1> *)0x0) &&
              (pTVar14->Object != (FJsonValue *)0x0)) && (pTVar14->Object->Type == Array)) {
            local_258 = local_2f8.Data.AllocatorInstance.Data;
            iStack_250 = local_2f8.Data.ArrayNum + -1;
            if (local_2f8.Data.ArrayNum == 0) {
              iStack_250 = 0;
            }
            local_148._12_4_ = uStack_24c;
            local_148.Size = iStack_250;
            local_148.DataPtr = (wchar_t *)local_2f8.Data.AllocatorInstance.Data;
            pTVar15 = FJsonObject::GetArrayField((FJsonObject *)this_00,&local_148);
            uVar23 = (ulong64)(uint)pTVar15->ArrayNum;
          }
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
          iVar8 = (int)uVar23;
          if (iVar8 != 0) {
            pFVar2 = this->Asset;
            if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum(uVar23);
            }
            if ((pFVar2->LightsIES).ArrayMax < iVar8) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x68,8,iVar8,&(pFVar2->LightsIES).AllocatorInstance,
                         (pFVar2->LightsIES).ArrayNum,&(pFVar2->LightsIES).ArrayMax);
            }
            local_248 = L"lights";
            uStack_240 = 6;
            local_138._12_4_ = uStack_23c;
            local_138.Size = 6;
            local_138.DataPtr = L"lights";
            local_2c0 = FJsonObject::GetArrayField((FJsonObject *)this_00,&local_138);
            local_32c = local_2c0->ArrayNum;
            uVar20 = (ulonglong)(int)local_32c;
            pFVar18 = (local_2c0->AllocatorInstance).Data;
            local_2c8 = pFVar18 + uVar20 * 0x10;
            while( true ) {
              pFVar26 = local_2c8;
              local_310 = pFVar18;
              if (local_2c0->ArrayNum != (int)uVar20) {
                local_3b8 = 0;
                `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_3b8);
              }
              pTVar25 = local_2b8;
              lVar19 = local_318;
              uVar10 = local_390;
              if (pFVar18 == pFVar26) break;
              if ((*(longlong *)pFVar18 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              plVar16 = (longlong *)(**(code **)**(undefined8 **)pFVar18)();
              if ((*plVar16 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pTVar25 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                         *)*plVar16;
              pFVar2 = this->Asset;
              iVar8 = (pFVar2->LightsIES).ArrayNum;
              piVar1 = &(pFVar2->LightsIES).ArrayMax;
              local_338 = pTVar25;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x868,&(pFVar2->LightsIES).AllocatorInstance,piVar1);
              }
              pFVar18 = (pFVar2->LightsIES).AllocatorInstance.Data;
              (pFVar2->LightsIES).ArrayNum = iVar8 + 1;
              lVar19 = (longlong)iVar8;
              uStack_230 = 3;
              *(undefined8 *)(pFVar18 + lVar19 * 0x68) = 0;
              *(undefined8 *)(pFVar18 + (lVar19 * 0x34 + 0x16) * 2) = 0;
              *(undefined4 *)(pFVar18 + (lVar19 * 0x34 + 0x1a) * 2) = 0;
              pFVar27 = pFVar18 + (lVar19 * 0x34 + 4) * 2;
              *(undefined8 *)(pFVar18 + (lVar19 * 0x34 + 8) * 2) = 0;
              pFVar28 = pFVar18 + (lVar19 * 0x34 + 0xc) * 2;
              *(undefined8 *)(pFVar18 + (lVar19 * 0x34 + 0x10) * 2) = 0;
              pFVar26 = pFVar18 + (lVar19 * 0x34 + 0x24) * 2;
              *(undefined4 *)(pFVar18 + (lVar19 * 0x34 + 0x14) * 2) = 0xffffffff;
              *(undefined8 *)&pFVar27->field_0x0 = 0;
              *(undefined8 *)pFVar28 = 0;
              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar26->field_0x0)->
              AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              *(undefined8 *)(pFVar18 + (lVar19 * 0x34 + 0x1c) * 2) = 0;
              *(undefined8 *)(pFVar18 + (lVar19 * 0x34 + 0x20) * 2) = 0;
              *(undefined8 *)(pFVar18 + (lVar19 * 0x34 + 0x28) * 2) = 0;
              *(undefined8 *)(pFVar18 + (lVar19 * 0x34 + 0x2c) * 2) = 0;
              *(undefined8 *)(pFVar18 + (lVar19 * 0x34 + 0x30) * 2) = 0;
              local_238 = L"uri";
              local_128._12_4_ = uStack_22c;
              local_128.Size = 3;
              *(int *)(pFVar18 + lVar19 * 0x68) = (local_320->Asset->LightsIES).ArrayNum + -1;
              local_128.DataPtr = L"uri";
              local_2e8.DataPtr = (wchar_t *)pFVar18;
              uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(3,L"uri");
              pTVar14 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        ::FindByHash<TStringView<wchar_t>_>(pTVar25,uVar10,&local_128);
              if (((pTVar14 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                  (pTVar14->Object == (FJsonValue *)0x0)) || (pTVar14->Object->Type != String)) {
                local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_388.Data.ArrayNum = 0;
                local_388.Data.ArrayMax = 0;
              }
              else {
                uStack_220 = 3;
                local_228 = L"uri";
                local_118._12_4_ = uStack_21c;
                local_118.Size = 3;
                local_118.DataPtr = L"uri";
                FJsonObject::GetStringField((FJsonObject *)pTVar25,&local_388,&local_118);
              }
              if (pFVar27 != (FScriptContainerElement *)&local_388) {
                if (*(void **)&pFVar27->field_0x0 != (void *)0x0) {
                  FMemory::Free(*(void **)&pFVar27->field_0x0);
                }
                *(FScriptContainerElement **)&pFVar27->field_0x0 =
                     local_388.Data.AllocatorInstance.Data;
                *(int *)(pFVar27 + 8) = local_388.Data.ArrayNum;
                *(int *)(pFVar27 + 0xc) = local_388.Data.ArrayMax;
                local_388.Data.ArrayNum = 0;
                local_388.Data.ArrayMax = 0;
                local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
              if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_388.Data.AllocatorInstance.Data);
              }
              iVar8 = *(int *)(pFVar18 + (lVar19 * 0x34 + 8) * 2);
              iVar11 = iVar8 + -1;
              if (iVar8 == 0) {
                iVar11 = 0;
              }
              if (0 < iVar11) {
                local_218 = *(wchar_t **)&pFVar27->field_0x0;
                iStack_210 = iVar8 + -1;
                if (iVar8 == 0) {
                  iStack_210 = 0;
                }
                local_108._12_4_ = uStack_20c;
                local_108.Size = iStack_210;
                local_108.DataPtr = local_218;
                pFVar17 = (FScriptContainerElement *)
                          FGenericPlatformHttp::UrlDecode(&local_f8,&local_108);
                if (pFVar27 != pFVar17) {
                  if (*(void **)&pFVar27->field_0x0 != (void *)0x0) {
                    FMemory::Free(*(void **)&pFVar27->field_0x0);
                  }
                  *(FScriptContainerElement **)&pFVar27->field_0x0 =
                       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                       AllocatorInstance).Data;
                  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar17->field_0x0)->
                  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  *(int *)(pFVar27 + 8) = *(int *)&pFVar17[8].field_0x0;
                  *(int *)(pFVar27 + 0xc) = *(int *)&pFVar17[0xc].field_0x0;
                  *(undefined8 *)&pFVar17[8].field_0x0 = 0;
                }
                if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                }
                iVar8 = *(int *)(pFVar18 + (lVar19 * 0x34 + 8) * 2) + -1;
                uVar10 = (local_2d0->Data).ArrayNum;
                if (*(int *)(pFVar18 + (lVar19 * 0x34 + 8) * 2) == 0) {
                  iVar8 = 0;
                }
                iVar11 = iVar8 + 1;
                if ((uVar10 == 0) && (iVar11 != 0)) {
                  iVar11 = iVar8 + 2;
                  pFVar18 = (local_2d0->Data).AllocatorInstance.Data;
LAB_14e651438:
                  local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  if (iVar11 != 0) goto LAB_14e651444;
                  local_3a0.Data.ArrayMax = 0;
                  local_3a0.Data.ArrayNum = uVar10;
                }
                else {
                  pFVar18 = (local_2d0->Data).AllocatorInstance.Data;
                  if (uVar10 == 0) goto LAB_14e651438;
LAB_14e651444:
                  local_3a0.Data.ArrayNum = uVar10;
                  local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  uVar9 = uVar10 + iVar11;
                  if ((int)uVar9 < (int)uVar10) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
                  }
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,uVar9,0,(ForAnyElementType *)&local_3a0,uVar10,
                             &local_3a0.Data.ArrayMax);
                  if (uVar10 != 0) {
                    memcpy(local_3a0.Data.AllocatorInstance.Data,pFVar18,(longlong)(int)uVar10 * 2);
                  }
                }
                ::FString::PathAppend(&local_3a0,*(wchar_t **)&pFVar27->field_0x0,iVar8);
                if (pFVar28 != (FScriptContainerElement *)&local_3a0) {
                  if (*(void **)pFVar28 != (void *)0x0) {
                    FMemory::Free(*(void **)pFVar28);
                  }
                  *(FScriptContainerElement **)pFVar28 = local_3a0.Data.AllocatorInstance.Data;
                  *(int *)(pFVar28 + 8) = local_3a0.Data.ArrayNum;
                  *(int *)(pFVar28 + 0xc) = local_3a0.Data.ArrayMax;
                  local_3a0.Data.ArrayNum = 0;
                  local_3a0.Data.ArrayMax = 0;
                  local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                }
                pFVar18 = (FScriptContainerElement *)local_2e8.DataPtr;
                pTVar25 = local_338;
                if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
                  pFVar18 = (FScriptContainerElement *)local_2e8.DataPtr;
                  pTVar25 = local_338;
                }
              }
              uStack_200 = 10;
              local_208 = L"bufferView";
              local_2e8._12_4_ = uStack_1fc;
              local_2e8.Size = 10;
              local_2e8.DataPtr = L"bufferView";
              uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"bufferView");
              pTVar14 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        ::FindByHash<TStringView<wchar_t>_>(pTVar25,uVar10,&local_2e8);
              if (((pTVar14 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                  (pTVar14->Object == (FJsonValue *)0x0)) || (pTVar14->Object->Type != Number)) {
LAB_14e6516ab:
                *(undefined4 *)(pFVar18 + (lVar19 * 0x34 + 0x14) * 2) = 0xffffffff;
              }
              else {
                local_1f8 = L"bufferView";
                uStack_1f0 = 10;
                local_e8._12_4_ = uStack_1ec;
                local_e8.Size = 10;
                local_e8.DataPtr = L"bufferView";
                dVar4 = FJsonObject::GetNumberField((FJsonObject *)pTVar25,&local_e8);
                uVar10 = (uint)dVar4;
                if ((int)uVar10 < 0) goto LAB_14e6516ab;
                *(uint *)(pFVar18 + (lVar19 * 0x34 + 0x14) * 2) = uVar10;
                pFVar2 = local_320->Asset;
                pTVar25 = local_338;
                if ((int)uVar10 < (pFVar2->BufferViews).ArrayNum) {
                  uVar9 = 0;
                  if ((int)uVar10 < (pFVar2->BufferViews).ArrayNum) {
                    uVar9 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar28 = (pFVar2->BufferViews).AllocatorInstance.Data;
                  lVar22 = (longlong)(int)uVar10;
                  *(undefined4 *)(pFVar18 + (lVar19 * 0x34 + 0x16) * 2) =
                       *(undefined4 *)(pFVar28 + lVar22 * 0x28 + 0x18);
                  *(longlong *)(pFVar18 + (lVar19 * 0x34 + 0x18) * 2) =
                       *(longlong *)(pFVar28 + lVar22 * 0x28 + 0x10) +
                       *(longlong *)(pFVar28 + lVar22 * 0x28 + 8);
                  pTVar25 = local_338;
                }
              }
              uStack_1e0 = 8;
              local_1e8 = L"mimeType";
              local_d8._12_4_ = uStack_1dc;
              local_d8.Size = 8;
              local_d8.DataPtr = L"mimeType";
              uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(8,L"mimeType");
              pTVar14 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        ::FindByHash<TStringView<wchar_t>_>(pTVar25,uVar10,&local_d8);
              if (((pTVar14 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                  (pTVar14->Object == (FJsonValue *)0x0)) || (pTVar14->Object->Type != String)) {
                local_378.Data.ArrayNum = 0;
                local_378.Data.ArrayMax = 0;
                local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
              else {
                local_1d8 = L"mimeType";
                uStack_1d0 = 8;
                local_c8._12_4_ = uStack_1cc;
                local_c8.Size = 8;
                local_c8.DataPtr = L"mimeType";
                FJsonObject::GetStringField((FJsonObject *)pTVar25,&local_378,&local_c8);
              }
              pFVar28 = pFVar18 + (lVar19 * 0x34 + 0x1c) * 2;
              if (pFVar28 != (FScriptContainerElement *)&local_378) {
                if (*(void **)pFVar28 != (void *)0x0) {
                  FMemory::Free(*(void **)pFVar28);
                }
                *(FScriptContainerElement **)pFVar28 = local_378.Data.AllocatorInstance.Data;
                *(int *)(pFVar28 + 8) = local_378.Data.ArrayNum;
                local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar28 + 0xc) = local_378.Data.ArrayMax;
                local_378.Data.ArrayNum = 0;
                local_378.Data.ArrayMax = 0;
              }
              if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_378.Data.AllocatorInstance.Data);
              }
              uStack_1c0 = 4;
              local_1c8 = L"name";
              local_b8._12_4_ = uStack_1bc;
              local_b8.Size = 4;
              local_b8.DataPtr = L"name";
              uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"name");
              pTVar14 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        ::FindByHash<TStringView<wchar_t>_>(pTVar25,uVar10,&local_b8);
              if (((pTVar14 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                  (pTVar14->Object == (FJsonValue *)0x0)) || (pTVar14->Object->Type != String)) {
                local_368.Data.ArrayNum = 0;
                local_368.Data.ArrayMax = 0;
                local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
              else {
                local_1b8 = L"name";
                uStack_1b0 = 4;
                local_a8._12_4_ = uStack_1ac;
                local_a8.Size = 4;
                local_a8.DataPtr = L"name";
                FJsonObject::GetStringField((FJsonObject *)pTVar25,&local_368,&local_a8);
              }
              if (pFVar26 != (FScriptContainerElement *)&local_368) {
                pFVar28 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar26->field_0x0)->
                          AllocatorInstance).Data;
                if (pFVar28 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar28);
                }
                (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar26->field_0x0)->
                AllocatorInstance).Data = local_368.Data.AllocatorInstance.Data;
                *(int *)&pFVar26[8].field_0x0 = local_368.Data.ArrayNum;
                local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)&pFVar26[0xc].field_0x0 = local_368.Data.ArrayMax;
                local_368.Data.ArrayNum = 0;
                local_368.Data.ArrayMax = 0;
              }
              if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_368.Data.AllocatorInstance.Data);
              }
              iVar8 = *(int *)(pFVar18 + (lVar19 * 0x34 + 0x28) * 2) + -1;
              if (*(int *)(pFVar18 + (lVar19 * 0x34 + 0x28) * 2) == 0) {
                iVar8 = 0;
              }
              if (iVar8 == 0) {
                iVar8 = *(int *)(pFVar18 + (lVar19 * 0x34 + 8) * 2) + -1;
                if (*(int *)(pFVar18 + (lVar19 * 0x34 + 8) * 2) == 0) {
                  iVar8 = 0;
                }
                if (0 < iVar8) {
                  pFVar18 = (FScriptContainerElement *)
                            FPaths::GetBaseFilename(&local_98,(FString *)pFVar27,true);
                  if (pFVar26 != pFVar18) {
                    pFVar27 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar26->field_0x0)
                              ->AllocatorInstance).Data;
                    if (pFVar27 != (FScriptContainerElement *)0x0) {
                      FMemory::Free(pFVar27);
                    }
                    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar26->field_0x0)->
                    AllocatorInstance).Data =
                         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->
                         AllocatorInstance).Data;
                    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->
                    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                    *(int *)&pFVar26[8].field_0x0 = *(int *)&pFVar18[8].field_0x0;
                    *(int *)&pFVar26[0xc].field_0x0 = *(int *)&pFVar18[0xc].field_0x0;
                    *(undefined8 *)&pFVar18[8].field_0x0 = 0;
                  }
                  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_98.Data.AllocatorInstance.Data);
                  }
                }
              }
              pFVar18 = local_310 + 0x10;
              uVar20 = (ulonglong)local_32c;
              this = local_320;
            }
          }
        }
      }
      if (local_358.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data);
      }
      local_390 = uVar10 + 1;
      local_318 = lVar19 + 1;
      param_1 = local_2b0;
    } while ((int)local_390 < Extensions.ArrayNum);
  }
  CheckExtensions(this,param_1,&local_3b0);
  DestructItems<FString,int>((FString *)local_3b0.AllocatorInstance.Data,local_3b0.ArrayNum);
  if (local_3b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.AllocatorInstance.Data);
  }
  return;
}

// SetupLightPunctual @ 14e651be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
GLTF::FExtensionsHandler::SetupLightPunctual(FExtensionsHandler *this,FJsonObject *param_1)

{
  FAsset *pFVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar2;
  TArray<TTuple<GLTF::EMessageSeverity,FText>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TSharedPtr<FJsonValue,1> *pTVar8;
  TVector<double> *pTVar9;
  TSharedPtr<FJsonObject,1> *pTVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  FString local_288;
  FString local_278;
  wchar_t *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  wchar_t *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  wchar_t *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  wchar_t *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  FText local_a8;
  FText local_98;
  TVector<double>_u_0 local_88;
  FTextFormat local_70;
  FText local_60;
  TVector<double> local_50;
  
  pFVar1 = this->Asset;
  pFVar15 = (pFVar1->Nodes).AllocatorInstance.Data;
  iVar6 = (pFVar1->Lights).ArrayNum;
  pFVar18 = pFVar15 + (longlong)(pFVar1->Nodes).ArrayNum * 0x260;
  for (; (pFVar16 = (FScriptContainerElement *)0x0, pFVar15 != pFVar18 &&
         (pFVar16 = pFVar15, iVar6 != *(int *)(pFVar15 + 0x90))); pFVar15 = pFVar15 + 0x260) {
  }
  if (iVar6 == (pFVar1->Lights).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&(pFVar1->Lights).AllocatorInstance,&(pFVar1->Lights).ArrayMax);
    (pFVar1->Lights).ArrayNum = iVar6;
  }
  iVar6 = (pFVar1->Lights).ArrayNum;
  lVar17 = (longlong)iVar6 * 0x58;
  local_268 = L"name";
  (pFVar1->Lights).ArrayNum = iVar6 + 1;
  pFVar15 = (pFVar1->Lights).AllocatorInstance.Data;
  uStack_260 = 4;
  local_188._12_4_ = uStack_25c;
  local_188.Size = 4;
  local_188.DataPtr = L"name";
  *(FScriptContainerElement **)(pFVar15 + lVar17) = pFVar16;
  pFVar18 = pFVar15 + lVar17 + 8;
  *(undefined8 *)pFVar18 = 0;
  *(undefined8 *)(pFVar18 + 8) = 0;
  *(undefined4 *)(pFVar15 + lVar17 + 0x18) = 1;
  *(undefined8 *)(pFVar15 + lVar17 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)(pFVar15 + lVar17 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(pFVar15 + lVar17 + 0x30) = 0x3ff0000000000000;
  *(undefined4 *)(pFVar15 + lVar17 + 0x38) = 0x3f800000;
  *(undefined8 *)(pFVar15 + lVar17 + 0x3c) = 0x60ad78ec;
  *(undefined4 *)(pFVar15 + lVar17 + 0x44) = 0x3f490fdb;
  *(undefined8 *)(pFVar15 + lVar17 + 0x48) = 0;
  *(undefined8 *)(pFVar15 + lVar17 + 0x50) = 0;
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"name");
  pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar7,&local_188);
  if (((pTVar8 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar8->Object == (FJsonValue *)0x0)) ||
     (pTVar8->Object->Type != String)) {
    local_288.Data.ArrayNum = 0;
    local_288.Data.ArrayMax = 0;
    local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_258 = L"name";
    uStack_250 = 4;
    local_178._12_4_ = uStack_24c;
    local_178.Size = 4;
    local_178.DataPtr = L"name";
    FJsonObject::GetStringField(param_1,&local_288,&local_178);
  }
  if (pFVar18 != (FScriptContainerElement *)&local_288) {
    if (*(void **)pFVar18 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar18);
    }
    *(FScriptContainerElement **)pFVar18 = local_288.Data.AllocatorInstance.Data;
    *(int *)(pFVar18 + 8) = local_288.Data.ArrayNum;
    local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar18 + 0xc) = local_288.Data.ArrayMax;
    local_288.Data.ArrayNum = 0;
    local_288.Data.ArrayMax = 0;
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  local_88._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_88._s_0.Y = _UNK_150689688;
  local_88._s_0.Z = __real_3ff0000000000000;
  pTVar9 = GetVec3(&local_50,param_1,L"color",(TVector<double> *)&local_88._s_0);
  uStack_240 = 9;
  local_248 = L"intensity";
  dVar19 = (pTVar9->field0_0x0)._s_0.Y;
  *(double *)(pFVar15 + lVar17 + 0x20) = (pTVar9->field0_0x0)._s_0.X;
  *(double *)(pFVar15 + lVar17 + 0x20 + 8) = dVar19;
  local_168._12_4_ = uStack_23c;
  local_168.Size = 9;
  *(double *)(pFVar15 + lVar17 + 0x30) = (pTVar9->field0_0x0)._s_0.Z;
  local_168.DataPtr = L"intensity";
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(9,L"intensity");
  pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar7,&local_168);
  fVar20 = __real_3f800000;
  if (((pTVar8 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar8->Object != (FJsonValue *)0x0)) &&
     (pTVar8->Object->Type == Number)) {
    local_238 = L"intensity";
    uStack_230 = 9;
    local_158._12_4_ = uStack_22c;
    local_158.Size = 9;
    local_158.DataPtr = L"intensity";
    dVar19 = FJsonObject::GetNumberField(param_1,&local_158);
    fVar20 = (float)dVar19;
  }
  fVar21 = *(float *)(pFVar15 + lVar17 + 0x3c);
  local_228 = L"range";
  uStack_220 = 5;
  local_148._12_4_ = uStack_21c;
  local_148.Size = 5;
  local_148.DataPtr = L"range";
  *(float *)(pFVar15 + lVar17 + 0x38) = fVar20;
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"range");
  pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar7,&local_148);
  if (((pTVar8 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar8->Object != (FJsonValue *)0x0)) &&
     (pTVar8->Object->Type == Number)) {
    local_218 = L"range";
    uStack_210 = 5;
    local_138._12_4_ = uStack_20c;
    local_138.Size = 5;
    local_138.DataPtr = L"range";
    dVar19 = FJsonObject::GetNumberField(param_1,&local_138);
    fVar21 = (float)dVar19;
  }
  uStack_200 = 4;
  local_208 = L"type";
  local_128._12_4_ = uStack_1fc;
  local_128.Size = 4;
  local_128.DataPtr = L"type";
  *(float *)(pFVar15 + lVar17 + 0x3c) = fVar21;
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"type");
  pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar7,&local_128);
  if (((pTVar8 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar8->Object == (FJsonValue *)0x0)) ||
     (pTVar8->Object->Type != String)) {
    local_278.Data.ArrayMax = 0;
    local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.Data.ArrayNum = 0;
  }
  else {
    local_1f8 = L"type";
    uStack_1f0 = 4;
    local_118._12_4_ = uStack_1ec;
    local_118.Size = 4;
    local_118.DataPtr = L"type";
    FJsonObject::GetStringField(param_1,&local_278,&local_118);
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_278.Data.ArrayNum != 0) {
    FVar14.Data = local_278.Data.AllocatorInstance.Data;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,L"spot");
  if (iVar6 == 0) {
    local_1e8 = L"spot";
    uStack_1e0 = 4;
    local_108._12_4_ = uStack_1dc;
    local_108.Size = 4;
    local_108.DataPtr = L"spot";
    *(undefined4 *)(pFVar15 + lVar17 + 0x18) = 2;
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"spot");
    pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>
                       ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                         *)param_1,uVar7,&local_108);
    if (((pTVar8 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar8->Object != (FJsonValue *)0x0)) &&
       (pTVar8->Object->Type == Object)) {
      local_1d8 = L"spot";
      uStack_1d0 = 4;
      local_f8._12_4_ = uStack_1cc;
      local_f8.Size = 4;
      local_f8.DataPtr = L"spot";
      pTVar10 = FJsonObject::GetObjectField(param_1,&local_f8);
      if ((pTVar10->Object == (FJsonObject *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar2 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)pTVar10->Object;
      local_1c8 = L"innerConeAngle";
      uStack_1c0 = 0xe;
      local_e8._12_4_ = uStack_1bc;
      local_e8.Size = 0xe;
      local_e8.DataPtr = L"innerConeAngle";
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(0xe,L"innerConeAngle");
      pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               ::FindByHash<TStringView<wchar_t>_>(pTVar2,uVar7,&local_e8);
      if (((pTVar8 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar8->Object == (FJsonValue *)0x0)) ||
         (pTVar8->Object->Type != Number)) {
        fVar20 = 0.0;
      }
      else {
        local_1b8 = L"innerConeAngle";
        uStack_1b0 = 0xe;
        local_d8._12_4_ = uStack_1ac;
        local_d8.Size = 0xe;
        local_d8.DataPtr = L"innerConeAngle";
        dVar19 = FJsonObject::GetNumberField((FJsonObject *)pTVar2,&local_d8);
        fVar20 = (float)dVar19;
      }
      fVar21 = *(float *)(pFVar15 + lVar17 + 0x44);
      *(float *)(pFVar15 + lVar17 + 0x40) = fVar20;
      if ((pTVar10->Object == (FJsonObject *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar2 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)pTVar10->Object;
      uStack_1a0 = 0xe;
      local_1a8 = L"outerConeAngle";
      local_c8._12_4_ = uStack_19c;
      local_c8.Size = 0xe;
      local_c8.DataPtr = L"outerConeAngle";
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(0xe,L"outerConeAngle");
      pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               ::FindByHash<TStringView<wchar_t>_>(pTVar2,uVar7,&local_c8);
      if (((pTVar8 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar8->Object != (FJsonValue *)0x0)) &&
         (pTVar8->Object->Type == Number)) {
        local_198 = L"outerConeAngle";
        uStack_190 = 0xe;
        local_b8._12_4_ = uStack_18c;
        local_b8.Size = 0xe;
        local_b8.DataPtr = L"outerConeAngle";
        dVar19 = FJsonObject::GetNumberField((FJsonObject *)pTVar2,&local_b8);
        fVar21 = (float)dVar19;
      }
      *(float *)(pFVar15 + lVar17 + 0x44) = fVar21;
    }
  }
  else {
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_278.Data.ArrayNum != 0) {
      FVar14.Data = local_278.Data.AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,L"point");
    if (iVar6 == 0) {
      *(undefined4 *)(pFVar15 + lVar17 + 0x18) = 1;
    }
    else {
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_278.Data.ArrayNum != 0) {
        FVar14.Data = local_278.Data.AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,L"directional");
      if (iVar6 == 0) {
        *(undefined4 *)(pFVar15 + lVar17 + 0x18) = 0;
      }
      else {
        pTVar3 = this->Messages;
        pFVar11 = FText::FromString(&local_60,(FString *)(pFVar15 + lVar17 + 8));
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_98,L"InterchangeGLTFExtensionHandler",L"UnspecifiedLightType",
                             L"Light has no type specified: {0}");
        pFVar13 = FTextFormat::FTextFormat(&local_70,pFVar12,Default);
        pFVar11 = FText::Format<FText>(&local_a8,pFVar13,pFVar11);
        bVar5 = GIsAutomationTesting == false;
        iVar6 = pTVar3->ArrayNum;
        if (iVar6 == pTVar3->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
        }
        pTVar3->ArrayNum = iVar6 + 1;
        pFVar15 = (pTVar3->AllocatorInstance).Data;
        lVar17 = (longlong)iVar6 * 3 + 1;
        *(uint *)(pFVar15 + lVar17 * 8 + -8) = (uint)bVar5;
        FText::FText((FText *)(pFVar15 + lVar17 * 8),pFVar11);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
      }
    }
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  return;
}

// SetupMaterialExtensions @ 14e652b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e652d56) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
GLTF::FExtensionsHandler::SetupMaterialExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FMaterial *param_2)

{
  FTextureMap *pFVar1;
  EExtension EVar2;
  void *_Src;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar3;
  TArray<TTuple<GLTF::EMessageSeverity,FText>,TSizedDefaultAllocator<32>_> *pTVar4;
  ITextData *pIVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  uchar uVar9;
  undefined2 uVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  ForAnyElementType FVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  TSharedPtr<FJsonValue,1> *pTVar24;
  wchar_t *pwVar25;
  TSharedPtr<FJsonObject,1> *pTVar26;
  TVector4<double> *pTVar27;
  TVector<double> *pTVar28;
  FText *pFVar29;
  FText *pFVar30;
  FTextFormat *pFVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  float fVar37;
  double dVar38;
  undefined1 auStackY_6a8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_658;
  ForAnyElementType local_648;
  int local_640;
  int local_63c;
  FString local_638;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_628;
  bool local_618 [40];
  EExtension local_5f0;
  EExtension local_5ec;
  EExtension local_5e8;
  EExtension local_5e4;
  EExtension local_5e0;
  EExtension local_5dc;
  EExtension local_5d8;
  EExtension local_5d4;
  EExtension local_5d0 [2];
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *local_5c8;
  FJsonObject *local_5c0;
  EExtension local_5b8 [4];
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  wchar_t *local_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  initializer_list<GLTF::EExtension> local_588;
  wchar_t *local_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  FScriptContainerElement *local_568;
  int iStack_560;
  undefined4 uStack_55c;
  FScriptContainerElement *local_558;
  uint uStack_550;
  undefined4 uStack_54c;
  wchar_t *local_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  wchar_t *local_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  wchar_t *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  wchar_t *local_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  wchar_t *local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  wchar_t *local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  wchar_t *local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  wchar_t *local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  wchar_t *local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  wchar_t *local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  wchar_t *local_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  wchar_t *local_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  wchar_t *local_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  wchar_t *local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  wchar_t *local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  wchar_t *local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  wchar_t *local_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  wchar_t *local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  wchar_t *local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  wchar_t *local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  wchar_t *local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  wchar_t *local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  wchar_t *local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  wchar_t *local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  FTextFormat local_3c8;
  FText local_3b8;
  FFormatArgumentValue local_3a8;
  TStringView<wchar_t> local_388;
  TStringView<wchar_t> local_378;
  TStringView<wchar_t> local_368;
  TStringView<wchar_t> local_358;
  TStringView<wchar_t> local_348;
  TStringView<wchar_t> local_338;
  TStringView<wchar_t> local_328;
  TStringView<wchar_t> local_318;
  TStringView<wchar_t> local_308;
  TStringView<wchar_t> local_2f8;
  TStringView<wchar_t> local_2e8;
  TStringView<wchar_t> local_2d8;
  TStringView<wchar_t> local_2c8;
  TStringView<wchar_t> local_2b8;
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  TStringView<wchar_t> local_268;
  TStringView<wchar_t> local_258;
  TStringView<wchar_t> local_248;
  TStringView<wchar_t> local_238;
  TStringView<wchar_t> local_228;
  TStringView<wchar_t> local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  TStringView<wchar_t> local_1e8;
  FText local_1d8;
  TVector<double>_u_0 local_1c8;
  TStringView<wchar_t> local_1a8;
  TVector4<double>_u_0 local_198;
  FText local_178;
  FTextFormat local_168;
  TVector<double> local_158;
  TVector<double> local_140;
  TVector<double> local_128;
  TVector4<double> local_108;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8 [16];
  
  local_b8[0] = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  local_598 = L"extensions";
  uStack_590 = 10;
  local_1a8._12_4_ = uStack_58c;
  local_1a8.Size = 10;
  local_1a8.DataPtr = L"extensions";
  local_5c0 = param_1;
  uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"extensions");
  pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar22,&local_1a8);
  if (((pTVar24 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar24->Object != (FJsonValue *)0x0)) &&
     (pTVar24->Object->Type == Object)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_588._First = (EExtension *)&local_e8;
      local_e8 = __xmm_00000003000000020000000100000000;
      uStack_e0 = _UNK_150631e08;
      local_588._Last = (EExtension *)local_b8;
      local_c8 = ___xmm_00000012000000130000000a00000009;
      uStack_c0 = _UNK_152f11928;
      local_d8 = ___xmm_00000008000000070000000600000004;
      TArray<enum_GLTF::EExtension,TSizedDefaultAllocator<32>_>::
      TArray<enum_GLTF::EExtension,TSizedDefaultAllocator<32>_>(&Extensions,&local_588);
      atexit(`GLTF::FExtensionsHandler::SetupMaterialExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
    uVar33 = (ulonglong)(uint)Extensions.ArrayNum;
    uVar36 = 0;
    local_658.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_658.ArrayNum = 0;
    local_658.ArrayMax = 0;
    uVar35 = uVar36;
    FVar20.Data = local_638.Data.AllocatorInstance.Data;
    uVar8 = local_638.Data._8_8_;
    if (Extensions.ArrayNum != 0) {
      do {
        local_638.Data._8_8_ = uVar8;
        local_638.Data.AllocatorInstance.Data = FVar20.Data;
        uVar34 = (uint)uVar35;
        uVar22 = 0;
        if ((int)uVar34 < (int)uVar33) {
          uVar22 = ~uVar34 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pwVar25 = GLTF::ToString(*(EExtension *)
                                  (Extensions.AllocatorInstance.Data + (longlong)(int)uVar34 * 4));
        ::FString::FString(&local_638,pwVar25);
        if (((local_658.AllocatorInstance.Data <= (FScriptContainerElement *)&local_638) &&
            ((FScriptContainerElement *)&local_638 <
             local_658.AllocatorInstance.Data + (longlong)local_658.ArrayMax * 0x10)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar23 = local_658.ArrayNum;
        if (local_658.ArrayNum == local_658.ArrayMax) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_658.AllocatorInstance,&local_658.ArrayMax);
        }
        local_658.ArrayNum = iVar23 + 1;
        lVar32 = (longlong)iVar23;
        *(undefined8 *)(local_658.AllocatorInstance.Data + lVar32 * 0x10) = 0;
        *(FScriptContainerElement **)(local_658.AllocatorInstance.Data + lVar32 * 0x10) =
             local_638.Data.AllocatorInstance.Data;
        local_638.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar20.Data = local_638.Data.AllocatorInstance.Data;
        *(int *)(local_658.AllocatorInstance.Data + lVar32 * 0x10 + 8) = local_638.Data.ArrayNum;
        *(int *)(local_658.AllocatorInstance.Data + lVar32 * 0x10 + 0xc) = local_638.Data.ArrayMax;
        local_638.Data.ArrayNum = 0;
        local_638.Data.ArrayMax = 0;
        uVar8 = local_638.Data._8_8_;
        local_638.Data.ArrayNum = 0;
        local_638.Data.ArrayMax = 0;
        local_638.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar33 = (ulonglong)Extensions.ArrayNum;
        uVar35 = uVar35 + 1;
      } while (uVar35 < uVar33);
    }
    local_578 = L"extensions";
    uStack_570 = 10;
    local_388._12_4_ = uStack_56c;
    local_388.Size = 10;
    local_388.DataPtr = L"extensions";
    pTVar26 = FJsonObject::GetObjectField(param_1,&local_388);
    if ((pTVar26->Object == (FJsonObject *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar21)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar19 = __real_3fa66666;
    fVar18 = __real_43c80000;
    dVar17 = _UNK_150689688;
    dVar16 = ___xmm_3ff00000000000003ff0000000000000;
    fVar15 = __real_42c80000;
    fVar14 = __real_3f800000;
    dVar13 = __real_3ff0000000000000;
    local_5c8 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                 *)pTVar26->Object;
    uVar35 = uVar36;
    if (0 < Extensions.ArrayNum) {
      do {
        uVar34 = (uint)uVar36;
        uVar22 = 0;
        if ((int)uVar34 < local_658.ArrayNum) {
          uVar22 = ~uVar34 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_648.Data = (FScriptContainerElement *)0x0;
        local_640 = *(int *)(local_658.AllocatorInstance.Data + uVar35 * 0x10 + 8);
        lVar32 = (longlong)local_640;
        _Src = *(void **)(local_658.AllocatorInstance.Data + uVar35 * 0x10);
        if (local_640 == 0) {
          local_63c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_640,0,&local_648,local_640,&local_63c);
          memcpy(local_648.Data,_Src,lVar32 * 2);
        }
        iStack_560 = local_640 + -1;
        if (local_640 == 0) {
          iStack_560 = 0;
        }
        local_378._12_4_ = uStack_55c;
        local_378.Size = iStack_560;
        local_568 = local_648.Data;
        local_378.DataPtr = (wchar_t *)local_648.Data;
        uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(iStack_560,(wchar_t *)local_648.Data);
        pTVar3 = local_5c8;
        pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>(local_5c8,uVar22,&local_378);
        if (((pTVar24 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar24->Object != (FJsonValue *)0x0))
           && (pTVar24->Object->Type == Object)) {
          local_558 = local_648.Data;
          uStack_550 = local_640 - 1;
          if (local_640 == 0) {
            uStack_550 = 0;
          }
          local_368._12_4_ = uStack_54c;
          local_368.Size = uStack_550;
          local_368.DataPtr = (wchar_t *)local_648.Data;
          pTVar26 = FJsonObject::GetObjectField((FJsonObject *)pTVar3,&local_368);
          if ((pTVar26->Object == (FJsonObject *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar3 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)pTVar26->Object;
          uVar22 = 0;
          if ((int)uVar34 < Extensions.ArrayNum) {
            uVar22 = ~uVar34 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          EVar2 = *(EExtension *)(Extensions.AllocatorInstance.Data + uVar35 * 4);
          switch(EVar2) {
          case KHR_MaterialsPbrSpecularGlossiness:
            SetTextureMap((FJsonObject *)pTVar3,L"diffuseTexture",(wchar_t *)0x0,
                          &this->Asset->Textures,&param_2->BaseColor,this->Messages);
            local_198._s_0.X = dVar16;
            local_198._s_0.Y = dVar17;
            local_198._s_0.Z = dVar16;
            local_198._s_0.W = dVar17;
            pTVar27 = GetVec4(&local_108,(FJsonObject *)pTVar3,L"diffuseFactor",
                              (TVector4<double> *)&local_198._s_0);
            local_5a8 = (float)(pTVar27->field0_0x0)._s_0.X;
            fStack_5a4 = (float)(pTVar27->field0_0x0)._s_0.Y;
            fStack_5a0 = (float)(pTVar27->field0_0x0)._s_0.Z;
            fStack_59c = (float)(pTVar27->field0_0x0)._s_0.W;
            (param_2->BaseColorFactor).field0_0x0._s_0.X = local_5a8;
            (param_2->BaseColorFactor).field0_0x0._s_0.Y = fStack_5a4;
            (param_2->BaseColorFactor).field0_0x0._s_0.Z = fStack_5a0;
            (param_2->BaseColorFactor).field0_0x0._s_0.W = fStack_59c;
            SetTextureMap((FJsonObject *)pTVar3,L"specularGlossinessTexture",(wchar_t *)0x0,
                          &this->Asset->Textures,&(param_2->SpecularGlossiness).Map,this->Messages);
            local_1c8._s_0.Z = dVar13;
            local_1c8._s_0.X = dVar16;
            local_1c8._s_0.Y = dVar17;
            pTVar28 = GetVec3(&local_158,(FJsonObject *)pTVar3,L"specularFactor",
                              (TVector<double> *)&local_1c8._s_0);
            uStack_540 = 0x10;
            local_548 = L"glossinessFactor";
            dVar38 = (pTVar28->field0_0x0)._s_0.Y;
            (param_2->SpecularGlossiness).SpecularFactor.field0_0x0._s_0.X =
                 (pTVar28->field0_0x0)._s_0.X;
            (param_2->SpecularGlossiness).SpecularFactor.field0_0x0._s_0.Y = dVar38;
            local_358._12_4_ = uStack_53c;
            local_358.Size = 0x10;
            (param_2->SpecularGlossiness).SpecularFactor.field0_0x0._s_0.Z =
                 (pTVar28->field0_0x0)._s_0.Z;
            local_358.DataPtr = L"glossinessFactor";
            uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(0x10,L"glossinessFactor");
            pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar3,uVar22,&local_358);
            fVar37 = fVar14;
            if (((pTVar24 != (TSharedPtr<FJsonValue,1> *)0x0) &&
                (pTVar24->Object != (FJsonValue *)0x0)) && (pTVar24->Object->Type == Number)) {
              local_538 = L"glossinessFactor";
              uStack_530 = 0x10;
              local_348._12_4_ = uStack_52c;
              local_348.Size = 0x10;
              local_348.DataPtr = L"glossinessFactor";
              dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar3,&local_348);
              fVar37 = (float)dVar38;
            }
            (param_2->SpecularGlossiness).GlossinessFactor = fVar37;
            param_2->ShadingModel = SpecularGlossiness;
            local_618[0x24] = false;
            local_618[0x25] = false;
            local_618[0x26] = false;
            local_618[0x27] = false;
            TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
            ::Emplace<enum_GLTF::EExtension>
                      (&this->Asset->ProcessedExtensions,&local_5f0,local_618 + 0x24);
            break;
          case KHR_MaterialsUnlit:
            param_2->bIsUnlitShadingModel = true;
            local_618[0] = true;
            local_618[1] = false;
            local_618[2] = false;
            local_618[3] = false;
            TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
            ::Emplace<enum_GLTF::EExtension>(&this->Asset->ProcessedExtensions,&local_5ec,local_618)
            ;
            break;
          case KHR_MaterialsClearCoat:
            param_2->bHasClearCoat = true;
            fVar37 = GetScalar((FJsonObject *)pTVar3,L"clearcoatFactor",0.0);
            (param_2->ClearCoat).ClearCoatFactor = fVar37;
            SetTextureMap((FJsonObject *)pTVar3,L"clearcoatTexture",(wchar_t *)0x0,
                          &this->Asset->Textures,&(param_2->ClearCoat).ClearCoatMap,this->Messages);
            fVar37 = GetScalar((FJsonObject *)pTVar3,L"clearcoatRoughnessFactor",0.0);
            (param_2->ClearCoat).Roughness = fVar37;
            SetTextureMap((FJsonObject *)pTVar3,L"clearcoatRoughnessTexture",(wchar_t *)0x0,
                          &this->Asset->Textures,&(param_2->ClearCoat).RoughnessMap,this->Messages);
            fVar37 = SetTextureMap((FJsonObject *)pTVar3,L"clearcoatNormalTexture",L"scale",
                                   &this->Asset->Textures,&(param_2->ClearCoat).NormalMap,
                                   this->Messages);
            (param_2->ClearCoat).NormalMapUVScale = fVar37;
            local_618[4] = true;
            local_618[5] = false;
            local_618[6] = false;
            local_618[7] = false;
            TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
            ::Emplace<enum_GLTF::EExtension>
                      (&this->Asset->ProcessedExtensions,local_5b8,local_618 + 4);
            break;
          case KHR_MaterialsTransmission:
            uStack_520 = 0x12;
            local_528 = L"transmissionFactor";
            local_338._12_4_ = uStack_51c;
            local_338.Size = 0x12;
            local_338.DataPtr = L"transmissionFactor";
            param_2->bHasTransmission = true;
            uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(0x12,L"transmissionFactor");
            pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar3,uVar22,&local_338);
            if (((pTVar24 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                (pTVar24->Object == (FJsonValue *)0x0)) || (pTVar24->Object->Type != Number)) {
              fVar37 = 0.0;
            }
            else {
              local_518 = L"transmissionFactor";
              uStack_510 = 0x12;
              local_328._12_4_ = uStack_50c;
              local_328.Size = 0x12;
              local_328.DataPtr = L"transmissionFactor";
              dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar3,&local_328);
              fVar37 = (float)dVar38;
            }
            (param_2->Transmission).TransmissionFactor = fVar37;
            SetTextureMap((FJsonObject *)pTVar3,L"transmissionTexture",(wchar_t *)0x0,
                          &this->Asset->Textures,&(param_2->Transmission).TransmissionMap,
                          this->Messages);
            local_618[8] = true;
            local_618[9] = false;
            local_618[10] = false;
            local_618[0xb] = false;
            TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
            ::Emplace<enum_GLTF::EExtension>
                      (&this->Asset->ProcessedExtensions,&local_5e8,local_618 + 8);
            break;
          case KHR_MaterialsSheen:
            param_2->bHasSheen = true;
            pTVar28 = GetVec3(&local_140,(FJsonObject *)pTVar3,L"sheenColorFactor",
                              &UE::Math::TVector<double>::ZeroVector);
            dVar38 = (pTVar28->field0_0x0)._s_0.Y;
            (param_2->Sheen).SheenColorFactor.field0_0x0._s_0.X = (pTVar28->field0_0x0)._s_0.X;
            (param_2->Sheen).SheenColorFactor.field0_0x0._s_0.Y = dVar38;
            (param_2->Sheen).SheenColorFactor.field0_0x0._s_0.Z = (pTVar28->field0_0x0)._s_0.Z;
            SetTextureMap((FJsonObject *)pTVar3,L"sheenColorTexture",(wchar_t *)0x0,
                          &this->Asset->Textures,&(param_2->Sheen).SheenColorMap,this->Messages);
            uStack_500 = 0x14;
            local_508 = L"sheenRoughnessFactor";
            local_318._12_4_ = uStack_4fc;
            local_318.Size = 0x14;
            local_318.DataPtr = L"sheenRoughnessFactor";
            uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(0x14,L"sheenRoughnessFactor");
            pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar3,uVar22,&local_318);
            if (((pTVar24 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                (pTVar24->Object == (FJsonValue *)0x0)) || (pTVar24->Object->Type != Number)) {
              fVar37 = 0.0;
            }
            else {
              local_4f8 = L"sheenRoughnessFactor";
              uStack_4f0 = 0x14;
              local_308._12_4_ = uStack_4ec;
              local_308.Size = 0x14;
              local_308.DataPtr = L"sheenRoughnessFactor";
              dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar3,&local_308);
              fVar37 = (float)dVar38;
            }
            (param_2->Sheen).SheenRoughnessFactor = fVar37;
            SetTextureMap((FJsonObject *)pTVar3,L"sheenRoughnessTexture",(wchar_t *)0x0,
                          &this->Asset->Textures,&(param_2->Sheen).SheenRoughnessMap,this->Messages)
            ;
            local_618[0xc] = true;
            local_618[0xd] = false;
            local_618[0xe] = false;
            local_618[0xf] = false;
            TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
            ::Emplace<enum_GLTF::EExtension>
                      (&this->Asset->ProcessedExtensions,&local_5e4,local_618 + 0xc);
            break;
          default:
            bVar21 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<3019139151824945624>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\ExtensionsHandler.cpp"
                                ,0x1d8,"false");
            if (bVar21) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pTVar4 = this->Messages;
            pwVar25 = GLTF::ToString(EVar2);
            pFVar29 = FText::FromString(&local_178,pwVar25);
            pFVar30 = FText::AsLocalizable_Advanced_LocText
                                (&local_1d8,L"InterchangeGLTFExtensionHandler",
                                 L"UnsupportedMaterialExtension",
                                 L"Material.Extension not supported: {0}");
            pFVar31 = FTextFormat::FTextFormat(&local_168,pFVar30,Default);
            local_3a8.Type = Text;
            FText::FText((FText *)&local_3a8.TextValue,pFVar29);
            if ((local_3a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0xbd,
                                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                      ), bVar21)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_628.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_628.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_628.AllocatorInstance,1,&local_628.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_628.AllocatorInstance.Data,&local_3a8,1);
            local_3c8.TextFormatData.Object = (pFVar31->TextFormatData).Object;
            local_3c8.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar31->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_3c8.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_3c8.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_3c8.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_3b8,&local_3c8,&local_628);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_628.AllocatorInstance.Data,local_628.ArrayNum);
            if ((FFormatArgumentValue *)local_628.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_628.AllocatorInstance.Data);
            }
            if (local_3a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_3a8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar31->TextFormatData).SharedReferenceCount.ReferenceController);
            pIVar5 = (pFVar29->TextData).Reference;
            if (pIVar5 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar5 + 0x10))();
            }
            iVar23 = pTVar4->ArrayNum;
            bVar21 = GIsAutomationTesting == false;
            if (iVar23 == pTVar4->ArrayMax) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
            }
            pTVar4->ArrayNum = iVar23 + 1;
            pFVar6 = (pTVar4->AllocatorInstance).Data;
            lVar32 = (longlong)iVar23 * 3 + 1;
            *(uint *)(pFVar6 + lVar32 * 8 + -8) = (uint)bVar21;
            FText::FText((FText *)(pFVar6 + lVar32 * 8),&local_3b8);
            if (local_3b8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
            }
            if (local_1d8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
            }
            break;
          case KHR_MaterialsIOR:
            uStack_4e0 = 3;
            local_4e8 = L"ior";
            local_2f8._12_4_ = uStack_4dc;
            local_2f8.Size = 3;
            local_2f8.DataPtr = L"ior";
            param_2->bHasIOR = true;
            uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(3,L"ior");
            pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar3,uVar22,&local_2f8);
            fVar37 = fVar14;
            if (((pTVar24 != (TSharedPtr<FJsonValue,1> *)0x0) &&
                (pTVar24->Object != (FJsonValue *)0x0)) && (pTVar24->Object->Type == Number)) {
              local_4d8 = L"ior";
              uStack_4d0 = 3;
              local_2e8._12_4_ = uStack_4cc;
              local_2e8.Size = 3;
              local_2e8.DataPtr = L"ior";
              dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar3,&local_2e8);
              fVar37 = (float)dVar38;
            }
            param_2->IOR = fVar37;
            local_618[0x10] = true;
            local_618[0x11] = false;
            local_618[0x12] = false;
            local_618[0x13] = false;
            TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
            ::Emplace<enum_GLTF::EExtension>
                      (&this->Asset->ProcessedExtensions,&local_5e0,local_618 + 0x10);
            break;
          case KHR_MaterialsSpecular:
            uStack_4c0 = 0xe;
            local_4c8 = L"specularFactor";
            local_2d8._12_4_ = uStack_4bc;
            local_2d8.Size = 0xe;
            local_2d8.DataPtr = L"specularFactor";
            param_2->bHasSpecular = true;
            uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(0xe,L"specularFactor");
            pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar3,uVar22,&local_2d8);
            fVar37 = fVar14;
            if (((pTVar24 != (TSharedPtr<FJsonValue,1> *)0x0) &&
                (pTVar24->Object != (FJsonValue *)0x0)) && (pTVar24->Object->Type == Number)) {
              local_4b8 = L"specularFactor";
              uStack_4b0 = 0xe;
              local_2c8._12_4_ = uStack_4ac;
              local_2c8.Size = 0xe;
              local_2c8.DataPtr = L"specularFactor";
              dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar3,&local_2c8);
              fVar37 = (float)dVar38;
            }
            (param_2->Specular).SpecularFactor = fVar37;
            pTVar28 = GetVec3(&local_128,(FJsonObject *)pTVar3,L"specularColorFactor",
                              &UE::Math::TVector<double>::ZeroVector);
            dVar38 = (pTVar28->field0_0x0)._s_0.Y;
            (param_2->Specular).SpecularColorFactor.field0_0x0._s_0.X = (pTVar28->field0_0x0)._s_0.X
            ;
            (param_2->Specular).SpecularColorFactor.field0_0x0._s_0.Y = dVar38;
            (param_2->Specular).SpecularColorFactor.field0_0x0._s_0.Z = (pTVar28->field0_0x0)._s_0.Z
            ;
            SetTextureMap((FJsonObject *)pTVar3,L"specularTexture",(wchar_t *)0x0,
                          &this->Asset->Textures,&(param_2->Specular).SpecularMap,this->Messages);
            SetTextureMap((FJsonObject *)pTVar3,L"specularColorTexture",(wchar_t *)0x0,
                          &this->Asset->Textures,&(param_2->Specular).SpecularColorMap,
                          this->Messages);
            local_618[0x14] = true;
            local_618[0x15] = false;
            local_618[0x16] = false;
            local_618[0x17] = false;
            TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
            ::Emplace<enum_GLTF::EExtension>
                      (&this->Asset->ProcessedExtensions,&local_5dc,local_618 + 0x14);
            break;
          case KHR_MaterialsEmissiveStrength:
            uStack_4a0 = 0x10;
            local_4a8 = L"emissiveStrength";
            local_2b8._12_4_ = uStack_49c;
            local_2b8.Size = 0x10;
            local_2b8.DataPtr = L"emissiveStrength";
            param_2->bHasEmissiveStrength = true;
            uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(0x10,L"emissiveStrength");
            pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar3,uVar22,&local_2b8);
            fVar37 = fVar14;
            if (((pTVar24 != (TSharedPtr<FJsonValue,1> *)0x0) &&
                (pTVar24->Object != (FJsonValue *)0x0)) && (pTVar24->Object->Type == Number)) {
              local_498 = L"emissiveStrength";
              uStack_490 = 0x10;
              local_2a8._12_4_ = uStack_48c;
              local_2a8.Size = 0x10;
              local_2a8.DataPtr = L"emissiveStrength";
              dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar3,&local_2a8);
              fVar37 = (float)dVar38;
            }
            param_2->EmissiveStrength = fVar37;
            local_618[0x18] = true;
            local_618[0x19] = false;
            local_618[0x1a] = false;
            local_618[0x1b] = false;
            TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
            ::Emplace<enum_GLTF::EExtension>
                      (&this->Asset->ProcessedExtensions,&local_5d8,local_618 + 0x18);
            break;
          case KHR_MaterialsIridescence:
            uStack_480 = 0x11;
            local_488 = L"iridescenceFactor";
            local_298._12_4_ = uStack_47c;
            local_298.Size = 0x11;
            local_298.DataPtr = L"iridescenceFactor";
            (param_2->Iridescence).bHasIridescence = true;
            uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(0x11,L"iridescenceFactor");
            pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar3,uVar22,&local_298);
            if (((pTVar24 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                (pTVar24->Object == (FJsonValue *)0x0)) || (pTVar24->Object->Type != Number)) {
              fVar37 = 0.0;
            }
            else {
              local_478 = L"iridescenceFactor";
              uStack_470 = 0x11;
              local_288._12_4_ = uStack_46c;
              local_288.Size = 0x11;
              local_288.DataPtr = L"iridescenceFactor";
              dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar3,&local_288);
              fVar37 = (float)dVar38;
            }
            (param_2->Iridescence).Factor = fVar37;
            SetTextureMap((FJsonObject *)pTVar3,L"iridescenceTexture",(wchar_t *)0x0,
                          &this->Asset->Textures,&(param_2->Iridescence).Texture,this->Messages);
            uStack_460 = 0xe;
            local_468 = L"iridescenceIor";
            local_278._12_4_ = uStack_45c;
            local_278.Size = 0xe;
            local_278.DataPtr = L"iridescenceIor";
            uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(0xe,L"iridescenceIor");
            pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar3,uVar22,&local_278);
            fVar37 = fVar19;
            if (((pTVar24 != (TSharedPtr<FJsonValue,1> *)0x0) &&
                (pTVar24->Object != (FJsonValue *)0x0)) && (pTVar24->Object->Type == Number)) {
              local_458 = L"iridescenceIor";
              uStack_450 = 0xe;
              local_268._12_4_ = uStack_44c;
              local_268.Size = 0xe;
              local_268.DataPtr = L"iridescenceIor";
              dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar3,&local_268);
              fVar37 = (float)dVar38;
            }
            uStack_440 = 0x1b;
            local_448 = L"iridescenceThicknessMinimum";
            local_258._12_4_ = uStack_43c;
            local_258.Size = 0x1b;
            local_258.DataPtr = L"iridescenceThicknessMinimum";
            (param_2->Iridescence).IOR = fVar37;
            uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(0x1b,L"iridescenceThicknessMinimum");
            pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar3,uVar22,&local_258);
            fVar37 = fVar15;
            if (((pTVar24 != (TSharedPtr<FJsonValue,1> *)0x0) &&
                (pTVar24->Object != (FJsonValue *)0x0)) && (pTVar24->Object->Type == Number)) {
              local_438 = L"iridescenceThicknessMinimum";
              uStack_430 = 0x1b;
              local_248._12_4_ = uStack_42c;
              local_248.Size = 0x1b;
              local_248.DataPtr = L"iridescenceThicknessMinimum";
              dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar3,&local_248);
              fVar37 = (float)dVar38;
            }
            uStack_420 = 0x1b;
            local_428 = L"iridescenceThicknessMaximum";
            local_238._12_4_ = uStack_41c;
            local_238.Size = 0x1b;
            local_238.DataPtr = L"iridescenceThicknessMaximum";
            (param_2->Iridescence).Thickness.Minimum = fVar37;
            uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(0x1b,L"iridescenceThicknessMaximum");
            pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar3,uVar22,&local_238);
            fVar37 = fVar18;
            if (((pTVar24 != (TSharedPtr<FJsonValue,1> *)0x0) &&
                (pTVar24->Object != (FJsonValue *)0x0)) && (pTVar24->Object->Type == Number)) {
              local_418 = L"iridescenceThicknessMaximum";
              uStack_410 = 0x1b;
              local_228._12_4_ = uStack_40c;
              local_228.Size = 0x1b;
              local_228.DataPtr = L"iridescenceThicknessMaximum";
              dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar3,&local_228);
              fVar37 = (float)dVar38;
            }
            (param_2->Iridescence).Thickness.Maximum = fVar37;
            SetTextureMap((FJsonObject *)pTVar3,L"iridescenceThicknessTexture",(wchar_t *)0x0,
                          &this->Asset->Textures,&(param_2->Iridescence).Thickness.Texture,
                          this->Messages);
            break;
          case KHR_MaterialsAnisotropy:
            uStack_400 = 0x12;
            local_408 = L"anisotropyStrength";
            local_218._12_4_ = uStack_3fc;
            local_218.Size = 0x12;
            local_218.DataPtr = L"anisotropyStrength";
            (param_2->Anisotropy).bHasAnisotropy = true;
            uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(0x12,L"anisotropyStrength");
            pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar3,uVar22,&local_218);
            if (((pTVar24 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                (pTVar24->Object == (FJsonValue *)0x0)) || (pTVar24->Object->Type != Number)) {
              fVar37 = 0.0;
            }
            else {
              local_3f8 = L"anisotropyStrength";
              uStack_3f0 = 0x12;
              local_208._12_4_ = uStack_3ec;
              local_208.Size = 0x12;
              local_208.DataPtr = L"anisotropyStrength";
              dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar3,&local_208);
              fVar37 = (float)dVar38;
            }
            uStack_3e0 = 0x12;
            local_3e8 = L"anisotropyRotation";
            local_1f8._12_4_ = uStack_3dc;
            local_1f8.Size = 0x12;
            local_1f8.DataPtr = L"anisotropyRotation";
            (param_2->Anisotropy).Strength = fVar37;
            uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(0x12,L"anisotropyRotation");
            pTVar24 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar3,uVar22,&local_1f8);
            if (((pTVar24 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                (pTVar24->Object == (FJsonValue *)0x0)) || (pTVar24->Object->Type != Number)) {
              fVar37 = 0.0;
            }
            else {
              local_3d8 = L"anisotropyRotation";
              uStack_3d0 = 0x12;
              local_1e8._12_4_ = uStack_3cc;
              local_1e8.Size = 0x12;
              local_1e8.DataPtr = L"anisotropyRotation";
              dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar3,&local_1e8);
              fVar37 = (float)dVar38;
            }
            (param_2->Anisotropy).Rotation = fVar37;
            SetTextureMap((FJsonObject *)pTVar3,L"anisotropyTexture",(wchar_t *)0x0,
                          &this->Asset->Textures,&(param_2->Anisotropy).Texture,this->Messages);
            break;
          case MSFT_PackingNormalRoughnessMetallic:
            pFVar1 = &(param_2->Packing).Map;
            fVar37 = SetTextureMap((FJsonObject *)pTVar3,L"normalRoughnessMetallicTexture",
                                   (wchar_t *)0x0,&this->Asset->Textures,pFVar1,this->Messages);
            if (fVar37 != 0.0) {
              uVar9 = pFVar1->TexCoord;
              bVar21 = pFVar1->bHasTextureTransform;
              uVar10 = *(undefined2 *)&pFVar1->field_0x6;
              uVar8 = *(undefined8 *)(param_2->Packing).Map.TextureTransform.Offset;
              fVar37 = (param_2->Packing).Map.TextureTransform.Scale[1];
              fVar11 = (param_2->Packing).Map.TextureTransform.Rotation;
              fVar12 = (param_2->Packing).Map.TextureTransform.Scale[0];
              (param_2->Packing).NormalMap.TextureIndex = pFVar1->TextureIndex;
              (param_2->Packing).NormalMap.TexCoord = uVar9;
              (param_2->Packing).NormalMap.bHasTextureTransform = bVar21;
              *(undefined2 *)&(param_2->Packing).NormalMap.field_0x6 = uVar10;
              *(undefined8 *)(param_2->Packing).NormalMap.TextureTransform.Offset = uVar8;
              (param_2->Packing).Flags = 9;
              (param_2->Packing).NormalMap.TextureTransform.Rotation = fVar11;
              (param_2->Packing).NormalMap.TextureTransform.Scale[0] = fVar12;
              (param_2->Packing).NormalMap.TextureTransform.Scale[1] = fVar37;
              local_618[0x20] = true;
              local_618[0x21] = false;
              local_618[0x22] = false;
              local_618[0x23] = false;
              TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
              ::Emplace<enum_GLTF::EExtension>
                        (&this->Asset->ProcessedExtensions,local_5d0,local_618 + 0x20);
            }
            break;
          case MSFT_PackingOcclusionRoughnessMetallic:
            pFVar1 = &(param_2->Packing).Map;
            fVar37 = SetTextureMap((FJsonObject *)pTVar3,L"occlusionRoughnessMetallicTexture",
                                   (wchar_t *)0x0,&this->Asset->Textures,pFVar1,this->Messages);
            if (fVar37 == 0.0) {
              fVar37 = SetTextureMap((FJsonObject *)pTVar3,L"roughnessMetallicOcclusionTexture",
                                     (wchar_t *)0x0,&this->Asset->Textures,pFVar1,this->Messages);
              if (fVar37 != 0.0) {
                (param_2->Packing).Flags = 4;
              }
            }
            else {
              (param_2->Packing).Flags = 2;
            }
            fVar37 = SetTextureMap((FJsonObject *)pTVar3,L"normalTexture",(wchar_t *)0x0,
                                   &this->Asset->Textures,&(param_2->Packing).NormalMap,
                                   this->Messages);
            if (fVar37 != 0.0) {
              (param_2->Packing).Flags = (param_2->Packing).Flags | 1;
            }
            if ((param_2->Packing).Flags != 0) {
              local_618[0x1c] = true;
              local_618[0x1d] = false;
              local_618[0x1e] = false;
              local_618[0x1f] = false;
              TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
              ::Emplace<enum_GLTF::EExtension>
                        (&this->Asset->ProcessedExtensions,&local_5d4,local_618 + 0x1c);
            }
          }
        }
        if (local_648.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_648.Data);
        }
        uVar36 = (ulonglong)(uVar34 + 1);
        param_1 = local_5c0;
        uVar35 = uVar35 + 1;
      } while ((int)(uVar34 + 1) < Extensions.ArrayNum);
    }
    CheckExtensions(this,param_1,&local_658);
    DestructItems<FString,int>((FString *)local_658.AllocatorInstance.Data,local_658.ArrayNum);
    if (local_658.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.AllocatorInstance.Data);
    }
  }
  return;
}

// SetupMeshExtensions @ 14e654c70

void __thiscall
GLTF::FExtensionsHandler::SetupMeshExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FMesh *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupMeshExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  CheckExtensions(this,param_1,&Extensions);
  return;
}

// SetupNodeExtensions @ 14e655a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e655bc6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
GLTF::FExtensionsHandler::SetupNodeExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FNode *param_2)

{
  void *_Src;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  ForAnyElementType FVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  wchar_t *pwVar14;
  TSharedPtr<FJsonValue,1> *pTVar15;
  TSharedPtr<FJsonObject,1> *pTVar16;
  TVector<double> *pTVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  undefined1 auStackY_2d8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_288;
  ForAnyElementType local_278;
  int local_270;
  int local_26c;
  FString local_268;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *local_258;
  FJsonObject *local_250;
  FExtensionsHandler *local_248;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  uint uStack_200;
  undefined4 uStack_1fc;
  FScriptContainerElement *local_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  wchar_t *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TVector<double>_u_0 local_b8;
  TVector<double> local_a0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_250 = param_1;
  local_248 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_88 = 0xd;
    uStack_84 = 0xe;
    local_80 = 0xf;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,3,0,&Extensions.AllocatorInstance,3,&Extensions.ArrayMax);
    FVar8 = Extensions.AllocatorInstance;
    *(ulonglong *)Extensions.AllocatorInstance.Data = CONCAT44(uStack_84,local_88);
    *(undefined4 *)(FVar8.Data + 8) = local_80;
    atexit(`GLTF::FExtensionsHandler::SetupNodeExtensions'::__l2::
           _dynamic_atexit_destructor_for__Extensions__);
    _Init_thread_footer(&::_TSS0);
  }
  uVar19 = (ulonglong)(uint)Extensions.ArrayNum;
  uVar22 = 0;
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0;
  uVar21 = uVar22;
  FVar8.Data = local_268.Data.AllocatorInstance.Data;
  uVar9 = local_268.Data._8_8_;
  if (Extensions.ArrayNum != 0) {
    do {
      local_268.Data._8_8_ = uVar9;
      local_268.Data.AllocatorInstance.Data = FVar8.Data;
      uVar20 = (uint)uVar21;
      uVar12 = 0;
      if ((int)uVar20 < (int)uVar19) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pwVar14 = GLTF::ToString(*(EExtension *)
                                (Extensions.AllocatorInstance.Data + (longlong)(int)uVar20 * 4));
      ::FString::FString(&local_268,pwVar14);
      if (((local_288.AllocatorInstance.Data <= (FScriptContainerElement *)&local_268) &&
          ((FScriptContainerElement *)&local_268 <
           local_288.AllocatorInstance.Data + (longlong)local_288.ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = local_288.ArrayNum;
      if (local_288.ArrayNum == local_288.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_288.AllocatorInstance,&local_288.ArrayMax);
      }
      local_288.ArrayNum = iVar11 + 1;
      lVar18 = (longlong)iVar11;
      *(undefined8 *)(local_288.AllocatorInstance.Data + lVar18 * 0x10) = 0;
      *(FScriptContainerElement **)(local_288.AllocatorInstance.Data + lVar18 * 0x10) =
           local_268.Data.AllocatorInstance.Data;
      local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar8.Data = local_268.Data.AllocatorInstance.Data;
      *(int *)(local_288.AllocatorInstance.Data + lVar18 * 0x10 + 8) = local_268.Data.ArrayNum;
      *(int *)(local_288.AllocatorInstance.Data + lVar18 * 0x10 + 0xc) = local_268.Data.ArrayMax;
      local_268.Data.ArrayNum = 0;
      local_268.Data.ArrayMax = 0;
      uVar9 = local_268.Data._8_8_;
      local_268.Data.ArrayNum = 0;
      local_268.Data.ArrayMax = 0;
      local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar19 = (ulonglong)Extensions.ArrayNum;
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar19);
  }
  uStack_220 = 10;
  local_228 = L"extensions";
  local_178._12_4_ = uStack_21c;
  local_178.Size = 10;
  local_178.DataPtr = L"extensions";
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"extensions");
  pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar12,&local_178);
  if ((pTVar15 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar15->Object != (FJsonValue *)0x0)) {
    local_218 = L"extensions";
    uStack_210 = 10;
    local_168._12_4_ = uStack_20c;
    local_168.Size = 10;
    local_168.DataPtr = L"extensions";
    pTVar16 = FJsonObject::GetObjectField(param_1,&local_168);
    if ((pTVar16->Object == (FJsonObject *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    dVar7 = _UNK_150689688;
    dVar6 = ___xmm_3ff00000000000003ff0000000000000;
    fVar5 = __real_3f800000;
    dVar4 = __real_3ff0000000000000;
    local_258 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                 *)pTVar16->Object;
    uVar21 = uVar22;
    uVar19 = uVar22;
    if (0 < Extensions.ArrayNum) {
      do {
        uVar20 = (uint)uVar21;
        uVar12 = 0;
        if ((int)uVar20 < local_288.ArrayNum) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_278.Data = (FScriptContainerElement *)0x0;
        local_270 = *(int *)(local_288.AllocatorInstance.Data + uVar22 + 8);
        lVar18 = (longlong)local_270;
        _Src = *(void **)(local_288.AllocatorInstance.Data + uVar22);
        if (local_270 == 0) {
          local_26c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_270,0,&local_278,local_270,&local_26c);
          memcpy(local_278.Data,_Src,lVar18 * 2);
        }
        uVar12 = 0;
        uStack_200 = local_270 - 1;
        if (local_270 == 0) {
          uStack_200 = uVar12;
        }
        local_158._12_4_ = uStack_1fc;
        local_158.Size = uStack_200;
        local_208 = local_278.Data;
        local_158.DataPtr = (wchar_t *)local_278.Data;
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uStack_200,(wchar_t *)local_278.Data);
        pTVar1 = local_258;
        pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>(local_258,uVar13,&local_158);
        if (((pTVar15 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar15->Object != (FJsonValue *)0x0))
           && (pTVar15->Object->Type == Object)) {
          local_1f8 = local_278.Data;
          uStack_1f0 = local_270 - 1;
          if (local_270 == 0) {
            uStack_1f0 = uVar12;
          }
          local_148._12_4_ = uStack_1ec;
          local_148.Size = uStack_1f0;
          local_148.DataPtr = (wchar_t *)local_278.Data;
          pTVar16 = FJsonObject::GetObjectField((FJsonObject *)pTVar1,&local_148);
          if ((pTVar16->Object == (FJsonObject *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar10)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)pTVar16->Object;
          if ((int)uVar20 < Extensions.ArrayNum) {
            uVar12 = ~uVar20 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar11 = *(int *)(Extensions.AllocatorInstance.Data + uVar19 * 4);
          if ((iVar11 == 0xd) || (iVar11 == 0xe)) {
            uStack_180 = 5;
            local_188 = L"light";
            local_d8._12_4_ = uStack_17c;
            local_d8.Size = 5;
            local_d8.DataPtr = L"light";
            uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"light");
            pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar12,&local_d8);
            if ((pTVar15 == (TSharedPtr<FJsonValue,1> *)0x0) ||
               ((pTVar15->Object == (FJsonValue *)0x0 || (pTVar15->Object->Type != Number)))) {
LAB_14e65613d:
              iVar11 = -1;
            }
            else {
              local_238 = L"light";
              uStack_230 = 5;
              local_c8._12_4_ = uStack_22c;
              local_c8.Size = 5;
              local_c8.DataPtr = L"light";
              dVar3 = FJsonObject::GetNumberField((FJsonObject *)pTVar1,&local_c8);
              iVar11 = (int)dVar3;
              if (iVar11 < 0) goto LAB_14e65613d;
            }
            param_2->LightIndex = iVar11;
          }
          else {
            if (iVar11 != 0xf) goto LAB_14e656149;
            uStack_1e0 = 5;
            local_1e8 = L"light";
            local_138._12_4_ = uStack_1dc;
            local_138.Size = 5;
            local_138.DataPtr = L"light";
            uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"light");
            pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar12,&local_138);
            if (((pTVar15 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                (pTVar15->Object == (FJsonValue *)0x0)) || (pTVar15->Object->Type != Number)) {
LAB_14e655f3c:
              iVar11 = -1;
            }
            else {
              local_1d8 = L"light";
              uStack_1d0 = 5;
              local_128._12_4_ = uStack_1cc;
              local_128.Size = 5;
              local_128.DataPtr = L"light";
              dVar3 = FJsonObject::GetNumberField((FJsonObject *)pTVar1,&local_128);
              iVar11 = (int)dVar3;
              if (iVar11 < 0) goto LAB_14e655f3c;
            }
            uStack_1c0 = 10;
            local_1c8 = L"multiplier";
            local_118._12_4_ = uStack_1bc;
            local_118.Size = 10;
            local_118.DataPtr = L"multiplier";
            (param_2->LightIES).Index = iVar11;
            uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"multiplier");
            pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar12,&local_118);
            if ((pTVar15 != (TSharedPtr<FJsonValue,1> *)0x0) &&
               (pTVar15->Object != (FJsonValue *)0x0)) {
              local_1b8 = L"multiplier";
              uStack_1b0 = 10;
              local_108._12_4_ = uStack_1ac;
              local_108.Size = 10;
              local_108.DataPtr = L"multiplier";
              (param_2->LightIES).bHasIntensityMultiplier = true;
              uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"multiplier");
              pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar12,&local_108);
              fVar23 = fVar5;
              if ((pTVar15 != (TSharedPtr<FJsonValue,1> *)0x0) &&
                 ((pTVar15->Object != (FJsonValue *)0x0 && (pTVar15->Object->Type == Number)))) {
                local_1a8 = L"multiplier";
                uStack_1a0 = 10;
                local_f8._12_4_ = uStack_19c;
                local_f8.Size = 10;
                local_f8.DataPtr = L"multiplier";
                dVar3 = FJsonObject::GetNumberField((FJsonObject *)pTVar1,&local_f8);
                fVar23 = (float)dVar3;
              }
              (param_2->LightIES).IntensityMultipler = fVar23;
            }
            uStack_190 = 5;
            local_198 = L"color";
            local_e8._12_4_ = uStack_18c;
            local_e8.Size = 5;
            local_e8.DataPtr = L"color";
            uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"color");
            pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar1,uVar12,&local_e8);
            if ((pTVar15 != (TSharedPtr<FJsonValue,1> *)0x0) &&
               (pTVar15->Object != (FJsonValue *)0x0)) {
              local_b8._s_0.Z = dVar4;
              (param_2->LightIES).bHasColor = true;
              local_b8._s_0.X = dVar6;
              local_b8._s_0.Y = dVar7;
              pTVar17 = GetVec3(&local_a0,(FJsonObject *)pTVar1,L"color",
                                (TVector<double> *)&local_b8._s_0);
              dVar3 = (pTVar17->field0_0x0)._s_0.Y;
              (param_2->LightIES).Color.field0_0x0._s_0.X = (pTVar17->field0_0x0)._s_0.X;
              (param_2->LightIES).Color.field0_0x0._s_0.Y = dVar3;
              (param_2->LightIES).Color.field0_0x0._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
            }
          }
        }
LAB_14e656149:
        if (local_278.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data);
        }
        uVar22 = uVar22 + 0x10;
        param_1 = local_250;
        uVar21 = (ulonglong)(uVar20 + 1);
        uVar19 = uVar19 + 1;
      } while ((int)(uVar20 + 1) < Extensions.ArrayNum);
    }
  }
  CheckExtensions(local_248,param_1,&local_288);
  DestructItems<FString,int>((FString *)local_288.AllocatorInstance.Data,local_288.ArrayNum);
  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  return;
}

// SetupPrimitiveExtensions @ 14e657630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e657879) */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
GLTF::FExtensionsHandler::SetupPrimitiveExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FPrimitive *param_2,uint param_3,
          FString *param_4)

{
  int *piVar1;
  EExtension EVar2;
  EncodedGeometryType EVar3;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar4;
  TArray<TTuple<GLTF::EMessageSeverity,FText>,TSizedDefaultAllocator<32>_> *pTVar5;
  FAsset *pFVar6;
  Mesh *this_00;
  FScriptContainerElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FJsonObject *this_01;
  code *pcVar9;
  double dVar10;
  ForAnyElementType FVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  TSharedPtr<FJsonValue,1> *pTVar17;
  wchar_t *pwVar18;
  TSharedPtr<FJsonObject,1> *pTVar19;
  FText *pFVar20;
  FText *pFVar21;
  FTextFormat *pFVar22;
  Decoder *this_02;
  void *pvVar23;
  StatusOr<draco::EncodedGeometryType> *pSVar24;
  StatusOr<std::unique_ptr<draco::Mesh,std::default_delete<draco::Mesh>_>_> *pSVar25;
  FAccessor *pFVar26;
  FString *pFVar27;
  size_t sVar28;
  PointAttribute *pPVar29;
  FText *pFVar30;
  undefined8 *puVar31;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  ulonglong uVar36;
  longlong lVar37;
  FScriptContainerElement *pFVar38;
  FExtensionsHandler *pFVar39;
  FScriptContainerElement *pFVar40;
  ulonglong uVar41;
  FScriptContainerElement *pFVar42;
  undefined1 auStackY_468 [32];
  EMeshAttributeType local_418 [8];
  undefined1 local_410;
  undefined1 local_40f [3];
  int local_40c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_408;
  uint local_3f8;
  uint local_3f4;
  FExtensionsHandler *local_3f0;
  ForAnyElementType local_3e8;
  int local_3e0;
  int local_3dc;
  FString local_3d8;
  uint local_3c8;
  uint local_3c4;
  bool local_3c0 [8];
  longlong local_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  FString *local_3a8;
  FScriptContainerElement *local_3a0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_398;
  wchar_t *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  EExtension local_378 [2];
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *local_370;
  FScriptContainerElement *local_368;
  FPrimitive *local_360;
  FJsonObject *local_358;
  FScriptContainerElement *local_348;
  int iStack_340;
  undefined4 uStack_33c;
  TStringView<wchar_t> local_338;
  wchar_t *local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  wchar_t *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FScriptContainerElement *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  wchar_t *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  wchar_t *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  wchar_t *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  FScriptContainerElement *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  wchar_t *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  wchar_t *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  TStringView<wchar_t> local_268;
  TStringView<wchar_t> local_258;
  FText local_248;
  FText local_238;
  TStringView<wchar_t> local_228;
  TStringView<wchar_t> local_218;
  TStringView<wchar_t> local_208;
  FText local_1f8;
  FText local_1e8;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  FString local_1b8;
  FText local_1a8;
  FText local_198;
  FString local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  DecoderBuffer local_158;
  FText local_120;
  FText local_110;
  FTextFormat local_100;
  FText local_f0;
  FText local_e0;
  FTextFormat local_d0;
  FTextFormat local_c0;
  StatusOr<std::unique_ptr<draco::Mesh,std::default_delete<draco::Mesh>_>_> local_b0;
  StatusOr<draco::EncodedGeometryType> local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_328 = L"extensions";
  uStack_320 = 10;
  local_288._12_4_ = uStack_31c;
  local_288.Size = 10;
  local_288.DataPtr = L"extensions";
  local_3a8 = param_4;
  local_3f4 = param_3;
  local_3f0 = this;
  local_360 = param_2;
  local_358 = param_1;
  uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"extensions");
  pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar14,&local_288);
  if (((pTVar17 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar17->Object != (FJsonValue *)0x0)) &&
     (pTVar17->Object->Type == Object)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_3b0 = 5;
      uStack_3ac = 0xc;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,2,0,&Extensions.AllocatorInstance,2,&Extensions.ArrayMax);
      *(ulonglong *)Extensions.AllocatorInstance.Data = CONCAT44(uStack_3ac,local_3b0);
      atexit(`GLTF::FExtensionsHandler::SetupPrimitiveExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
    uVar34 = (ulonglong)(uint)Extensions.ArrayNum;
    uVar41 = 0;
    local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_408.ArrayNum = 0;
    local_408.ArrayMax = 0;
    uVar36 = uVar41;
    FVar11.Data = local_3d8.Data.AllocatorInstance.Data;
    uVar12 = local_3d8.Data._8_8_;
    if (Extensions.ArrayNum != 0) {
      do {
        local_3d8.Data._8_8_ = uVar12;
        local_3d8.Data.AllocatorInstance.Data = FVar11.Data;
        uVar35 = (uint)uVar36;
        uVar14 = 0;
        if ((int)uVar35 < (int)uVar34) {
          uVar14 = ~uVar35 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pwVar18 = GLTF::ToString(*(EExtension *)
                                  (Extensions.AllocatorInstance.Data + (longlong)(int)uVar35 * 4));
        ::FString::FString(&local_3d8,pwVar18);
        if (((local_408.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3d8) &&
            ((FScriptContainerElement *)&local_3d8 <
             local_408.AllocatorInstance.Data + (longlong)local_408.ArrayMax * 0x10)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar15 = local_408.ArrayNum;
        if (local_408.ArrayNum == local_408.ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_408.AllocatorInstance,&local_408.ArrayMax);
        }
        local_408.ArrayNum = iVar15 + 1;
        lVar33 = (longlong)iVar15;
        *(undefined8 *)(local_408.AllocatorInstance.Data + lVar33 * 0x10) = 0;
        *(FScriptContainerElement **)(local_408.AllocatorInstance.Data + lVar33 * 0x10) =
             local_3d8.Data.AllocatorInstance.Data;
        local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar11.Data = local_3d8.Data.AllocatorInstance.Data;
        *(int *)(local_408.AllocatorInstance.Data + lVar33 * 0x10 + 8) = local_3d8.Data.ArrayNum;
        *(int *)(local_408.AllocatorInstance.Data + lVar33 * 0x10 + 0xc) = local_3d8.Data.ArrayMax;
        local_3d8.Data.ArrayNum = 0;
        local_3d8.Data.ArrayMax = 0;
        uVar12 = local_3d8.Data._8_8_;
        local_3d8.Data.ArrayNum = 0;
        local_3d8.Data.ArrayMax = 0;
        local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar34 = (ulonglong)Extensions.ArrayNum;
        uVar36 = uVar36 + 1;
      } while (uVar36 < uVar34);
    }
    local_318 = L"extensions";
    uStack_310 = 10;
    local_278._12_4_ = uStack_30c;
    local_278.Size = 10;
    local_278.DataPtr = L"extensions";
    pTVar19 = FJsonObject::GetObjectField(param_1,&local_278);
    if ((pTVar19->Object == (FJsonObject *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_370 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                 *)pTVar19->Object;
    local_3f8 = 0;
    if (0 < Extensions.ArrayNum) {
      local_3b8 = 0;
      do {
        lVar33 = local_3b8;
        uVar35 = (uint)uVar41;
        uVar14 = 0;
        if ((int)uVar35 < local_408.ArrayNum) {
          uVar14 = ~uVar35 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_3e8.Data = (FScriptContainerElement *)0x0;
        local_3e0 = *(int *)(local_408.AllocatorInstance.Data + lVar33 * 0x10 + 8);
        lVar37 = (longlong)local_3e0;
        pvVar23 = *(void **)(local_408.AllocatorInstance.Data + lVar33 * 0x10);
        if (local_3e0 == 0) {
          local_3dc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_3e0,0,&local_3e8,local_3e0,&local_3dc);
          memcpy(local_3e8.Data,pvVar23,lVar37 * 2);
        }
        iStack_300 = local_3e0 + -1;
        if (local_3e0 == 0) {
          iStack_300 = 0;
        }
        local_268._12_4_ = uStack_2fc;
        local_268.Size = iStack_300;
        local_308 = local_3e8.Data;
        local_268.DataPtr = (wchar_t *)local_3e8.Data;
        uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iStack_300,(wchar_t *)local_3e8.Data);
        pTVar4 = local_370;
        pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>(local_370,uVar14,&local_268);
        if (((pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar17->Object == (FJsonValue *)0x0))
           || (pTVar17->Object->Type != Object)) {
          if (local_3e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e8.Data);
          }
        }
        else {
          local_2f8 = local_3e8.Data;
          iStack_2f0 = local_3e0 + -1;
          if (local_3e0 == 0) {
            iStack_2f0 = 0;
          }
          local_258._12_4_ = uStack_2ec;
          local_258.Size = iStack_2f0;
          local_258.DataPtr = (wchar_t *)local_3e8.Data;
          pTVar19 = FJsonObject::GetObjectField((FJsonObject *)pTVar4,&local_258);
          if ((pTVar19->Object == (FJsonObject *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar4 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)pTVar19->Object;
          uVar14 = 0;
          if ((int)uVar35 < Extensions.ArrayNum) {
            uVar14 = ~uVar35 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          EVar2 = *(EExtension *)(Extensions.AllocatorInstance.Data + lVar33 * 4);
          if (EVar2 == KHR_MaterialsVariants) {
            uStack_2a0 = 8;
            local_2a8 = L"mappings";
            local_178._12_4_ = uStack_29c;
            local_178.Size = 8;
            local_178.DataPtr = L"mappings";
            local_398 = FJsonObject::GetArrayField((FJsonObject *)pTVar4,&local_178);
            local_3c4 = local_398->ArrayNum;
            uVar36 = (ulonglong)(int)local_3c4;
            pFVar38 = (local_398->AllocatorInstance).Data;
            local_368 = pFVar38 + uVar36 * 0x10;
            while( true ) {
              pFVar7 = local_368;
              local_3a0 = pFVar38;
              if (local_398->ArrayNum != (int)uVar36) {
                local_410 = 0;
                `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_410);
              }
              this = local_3f0;
              if (pFVar38 == pFVar7) break;
              iVar15 = (param_2->VariantMappings).ArrayNum;
              piVar1 = &(param_2->VariantMappings).ArrayMax;
              if (iVar15 == *piVar1) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&(param_2->VariantMappings).AllocatorInstance,piVar1);
              }
              pFVar7 = (param_2->VariantMappings).AllocatorInstance.Data;
              (param_2->VariantMappings).ArrayNum = iVar15 + 1;
              lVar33 = (longlong)iVar15;
              *(undefined8 *)(pFVar7 + lVar33 * 0x18) = 0;
              *(undefined8 *)(pFVar7 + lVar33 * 0x18 + 8) = 0;
              *(undefined8 *)(pFVar7 + lVar33 * 0x18 + 0x10) = 0;
              if ((*(longlong *)pFVar38 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              puVar31 = (undefined8 *)(**(code **)**(undefined8 **)pFVar38)();
              pTVar8 = (TReferenceControllerBase<1> *)puVar31[1];
              this_01 = (FJsonObject *)*puVar31;
              if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((this_01 == (FJsonObject *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uStack_380 = 8;
              local_388 = L"material";
              local_338._12_4_ = uStack_37c;
              local_338.Size = 8;
              local_338.DataPtr = L"material";
              dVar10 = FJsonObject::GetNumberField(this_01,&local_338);
              *(int *)(pFVar7 + lVar33 * 0x18) = (int)dVar10;
              if ((this_01 == (FJsonObject *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uStack_290 = 8;
              local_298 = L"variants";
              local_168._12_4_ = uStack_28c;
              local_168.Size = 8;
              local_168.DataPtr = L"variants";
              pTVar32 = FJsonObject::GetArrayField(this_01,&local_168);
              uVar14 = pTVar32->ArrayNum;
              if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
              }
              pFVar38 = pFVar7 + lVar33 * 0x18 + 0x14;
              if (*(int *)(pFVar7 + lVar33 * 0x18 + 0x14) < (int)uVar14) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar14,(ForAnyElementType *)(pFVar7 + lVar33 * 0x18 + 8),
                           *(int *)(pFVar7 + lVar33 * 0x18 + 0x10),(int *)pFVar38);
              }
              iVar15 = pTVar32->ArrayNum;
              pFVar40 = (pTVar32->AllocatorInstance).Data;
              pFVar42 = pFVar40 + (longlong)iVar15 * 0x10;
              while( true ) {
                if (pTVar32->ArrayNum != iVar15) {
                  local_40f[0] = 0;
                  `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2
                  ::<lambda_1>::operator()(local_40f);
                }
                if (pFVar40 == pFVar42) break;
                if ((*(longlong *)pFVar40 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                dVar10 = FJsonValue::AsNumber(*(FJsonValue **)pFVar40);
                local_40c = (int)dVar10;
                if (((*(int **)(pFVar7 + lVar33 * 0x18 + 8) <= &local_40c) &&
                    (&local_40c < *(int **)(pFVar7 + lVar33 * 0x18 + 8) + *(int *)pFVar38)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar16 = *(int *)(pFVar7 + lVar33 * 0x18 + 0x10);
                if (iVar16 == *(int *)pFVar38) {
                  iVar16 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)(pFVar7 + lVar33 * 0x18 + 8),
                                      (int *)pFVar38);
                }
                pFVar40 = pFVar40 + 0x10;
                *(int *)(pFVar7 + lVar33 * 0x18 + 0x10) = iVar16 + 1;
                *(int *)(*(longlong *)(pFVar7 + lVar33 * 0x18 + 8) + (longlong)iVar16 * 4) =
                     local_40c;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar8);
              pFVar38 = local_3a0 + 0x10;
              uVar36 = (ulonglong)local_3c4;
              param_2 = local_360;
            }
            local_3c0[0] = true;
            local_3c0[1] = false;
            local_3c0[2] = false;
            local_3c0[3] = false;
            TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>
            ::Emplace<enum_GLTF::EExtension>
                      (&local_3f0->Asset->ProcessedExtensions,local_378,local_3c0);
            lVar33 = local_3b8;
            uVar35 = local_3f8;
          }
          else if (EVar2 == KHR_DracoMeshCompression) {
            uStack_2e0 = 10;
            local_2e8 = L"bufferView";
            local_228._12_4_ = uStack_2dc;
            local_228.Size = 10;
            local_228.DataPtr = L"bufferView";
            uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"bufferView");
            pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      ::FindByHash<TStringView<wchar_t>_>(pTVar4,uVar14,&local_228);
            if (((pTVar17 != (TSharedPtr<FJsonValue,1> *)0x0) &&
                (pTVar17->Object != (FJsonValue *)0x0)) && (pTVar17->Object->Type == Number)) {
              local_2d8 = L"bufferView";
              uStack_2d0 = 10;
              local_218._12_4_ = uStack_2cc;
              local_218.Size = 10;
              local_218.DataPtr = L"bufferView";
              dVar10 = FJsonObject::GetNumberField((FJsonObject *)pTVar4,&local_218);
              uVar14 = (uint)dVar10;
              if ((-1 < (int)uVar14) &&
                 (pFVar6 = this->Asset, (int)uVar14 < (pFVar6->BufferViews).ArrayNum)) {
                uVar35 = 0;
                if ((int)uVar14 < (pFVar6->BufferViews).ArrayNum) {
                  uVar35 = ~uVar14 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar38 = (pFVar6->BufferViews).AllocatorInstance.Data;
                lVar33 = (longlong)(int)uVar14;
                uStack_2c0 = 10;
                local_2c8 = L"attributes";
                local_208._12_4_ = uStack_2bc;
                local_208.Size = 10;
                local_208.DataPtr = L"attributes";
                pTVar19 = FJsonObject::GetObjectField((FJsonObject *)pTVar4,&local_208);
                if ((pTVar19->Object == (FJsonObject *)0x0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pTVar4 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                          *)pTVar19->Object;
                this_02 = ::operator_new(0x20);
                if (this_02 == (Decoder *)0x0) {
                  this_02 = (Decoder *)0x0;
                }
                else {
                  *(undefined8 *)&(this_02->options_).attribute_options_ = 0;
                  *(undefined8 *)&(this_02->options_).attribute_options_.field_0x8 = 0;
                  *(undefined8 *)&(this_02->options_).global_options_.options_ = 0;
                  *(undefined8 *)&(this_02->options_).global_options_.options_.field_0x8 = 0;
                  pvVar23 = ::operator_new(0x60);
                  *(void **)pvVar23 = pvVar23;
                  *(void **)((longlong)pvVar23 + 8) = pvVar23;
                  *(void **)((longlong)pvVar23 + 0x10) = pvVar23;
                  *(undefined2 *)((longlong)pvVar23 + 0x18) = 0x101;
                  *(void **)&(this_02->options_).global_options_.options_ = pvVar23;
                  *(undefined8 *)&(this_02->options_).attribute_options_ = 0;
                  *(undefined8 *)&(this_02->options_).attribute_options_.field_0x8 = 0;
                  pvVar23 = ::operator_new(0x38);
                  *(void **)pvVar23 = pvVar23;
                  *(void **)((longlong)pvVar23 + 8) = pvVar23;
                  *(void **)((longlong)pvVar23 + 0x10) = pvVar23;
                  *(undefined2 *)((longlong)pvVar23 + 0x18) = 0x101;
                  *(void **)&(this_02->options_).attribute_options_ = pvVar23;
                }
                draco::DecoderBuffer::DecoderBuffer(&local_158);
                draco::DecoderBuffer::Init
                          (&local_158,
                           (char *)(*(longlong *)(pFVar38 + lVar33 * 0x28 + 0x10) +
                                   *(longlong *)(pFVar38 + lVar33 * 0x28 + 8)),
                           *(__uint64 *)(pFVar38 + lVar33 * 0x28 + 0x18));
                pSVar24 = draco::Decoder::GetEncodedGeometryType(&local_80,&local_158);
                EVar3 = pSVar24->value_;
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate(&local_80.status_.error_msg_);
                if (EVar3 == TRIANGULAR_MESH) {
                  pSVar25 = draco::Decoder::DecodeMeshFromBuffer(this_02,&local_b0,&local_158);
                  this_00 = (pSVar25->value_)._Mypair._Myval2;
                  (pSVar25->value_)._Mypair._Myval2 = (Mesh *)0x0;
                  if (local_b0.value_._Mypair._Myval2 != (Mesh *)0x0) {
                    (*(code *)**(undefined8 **)local_b0.value_._Mypair._Myval2)
                              (local_b0.value_._Mypair._Myval2,1);
                  }
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Tidy_deallocate(&local_b0.status_.error_msg_);
                  pFVar39 = local_3f0;
                  uVar14 = param_2->Indices->AccessorIndex;
                  if ((-1 < (int)uVar14) && ((int)uVar14 < (local_3f0->Asset->Accessors).ArrayNum))
                  {
                    pFVar26 = FAsset::CreateBuffersForAccessorIndex(local_3f0->Asset,uVar14);
                    bVar13 = DracoHelpers::AcquireIndicesFromDracoMesh
                                       (this_00,pFVar26->ComponentType,
                                        (pFVar26->BufferView).Buffer.Data);
                    if (!bVar13) {
                      (pFVar26->BufferView).Buffer.ByteLength = 0;
                      (pFVar26->BufferView).Buffer.Data = (uchar *)0x0;
                      (pFVar26->BufferView).ByteOffset = 0;
                      (pFVar26->BufferView).ByteLength = 0;
                      (pFVar26->BufferView).ByteStride = 0;
                      pTVar5 = pFVar39->Messages;
                      pFVar20 = FText::FromString(&local_110,local_3a8);
                      pFVar21 = FText::AsLocalizable_Advanced_LocText
                                          (&local_1e8,L"InterchangeGLTFExtensionHandler",
                                           L"DracoMeshIndexAcquisitionFailed",
                                           L"Failed to acquire Indices from Draco Mesh, for PrimitiveIdx: {0}, in Mesh: {1}"
                                          );
                      pFVar22 = FTextFormat::FTextFormat(&local_100,pFVar21,Default);
                      pFVar20 = FText::Format<unsigned_int,FText>
                                          (&local_1f8,pFVar22,local_3f4,pFVar20);
                      iVar15 = pTVar5->ArrayNum;
                      if (iVar15 == pTVar5->ArrayMax) {
                        iVar15 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                      }
                      pTVar5->ArrayNum = iVar15 + 1;
                      pFVar38 = (pTVar5->AllocatorInstance).Data;
                      lVar33 = (longlong)iVar15 * 3 + 1;
                      *(undefined4 *)(pFVar38 + lVar33 * 8 + -8) = 1;
                      FText::FText((FText *)(pFVar38 + lVar33 * 8),pFVar20);
                      if (local_1f8.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
                      }
                      if (local_1e8.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
                      }
                    }
                  }
                  uVar36 = 0;
                  do {
                    local_418[0] = (EMeshAttributeType)uVar36;
                    pFVar27 = GLTF::ToString(&local_1b8,local_418);
                    iVar15 = 0;
                    if ((pFVar27->Data).ArrayNum == 0) {
                      local_348 = (FScriptContainerElement *)0x15060d16c;
LAB_14e657fb7:
                      pFVar38 = local_348;
                      sVar28 = wcslen((wchar_t *)local_348);
                      iVar16 = (int)sVar28;
                    }
                    else {
                      pFVar38 = (pFVar27->Data).AllocatorInstance.Data;
                      iVar16 = iVar15;
                      local_348 = pFVar38;
                      if (pFVar38 != (FScriptContainerElement *)0x0) goto LAB_14e657fb7;
                    }
                    local_1d8._12_4_ = uStack_33c;
                    local_1d8.Size = iVar16;
                    local_1d8.DataPtr = (wchar_t *)local_348;
                    iStack_340 = iVar16;
                    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,(wchar_t *)pFVar38);
                    pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                              ::FindByHash<TStringView<wchar_t>_>(pTVar4,uVar14,&local_1d8);
                    if (((pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                        (pTVar17->Object == (FJsonValue *)0x0)) || (pTVar17->Object->Type != Number)
                       ) {
                      bVar13 = false;
                    }
                    else {
                      local_2b8 = pFVar38;
                      if (pFVar38 != (FScriptContainerElement *)0x0) {
                        sVar28 = wcslen((wchar_t *)pFVar38);
                        iVar15 = (int)sVar28;
                      }
                      local_1c8._12_4_ = uStack_2ac;
                      local_1c8.Size = iVar15;
                      local_1c8.DataPtr = (wchar_t *)local_2b8;
                      iStack_2b0 = iVar15;
                      dVar10 = FJsonObject::GetNumberField((FJsonObject *)pTVar4,&local_1c8);
                      local_3c8 = (uint)dVar10;
                      bVar13 = true;
                    }
                    uVar14 = local_3c8;
                    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                    }
                    if ((bVar13) &&
                       (pPVar29 = draco::PointCloud::GetAttributeByUniqueId
                                            ((PointCloud *)this_00,uVar14),
                       pPVar29 != (PointAttribute *)0x0)) {
                      uVar34 = uVar36 & 0xff;
                      if (((int)uVar34 < (int)param_2->_padding_) &&
                         (*(EMeshAttributeType *)(param_2->_padding_ + uVar34 * 0x10) ==
                          (EMeshAttributeType)uVar36)) {
                        pFVar26 = *(FAccessor **)(param_2->_padding_ + 8 + uVar34 * 0x10);
                      }
                      else {
                        pFVar26 = &EmptyAccessor;
                      }
                      uVar14 = pFVar26->AccessorIndex;
                      if ((-1 < (int)uVar14) && ((int)uVar14 < (pFVar39->Asset->Accessors).ArrayNum)
                         ) {
                        pFVar26 = FAsset::CreateBuffersForAccessorIndex(pFVar39->Asset,uVar14);
                        bVar13 = DracoHelpers::AcquireDataFromDracoAttribute
                                           (pFVar26->ComponentType,pPVar29,pFVar26->Count,
                                            pFVar26->ByteStride,pFVar26->NumberOfComponents,
                                            (pFVar26->BufferView).Buffer.Data);
                        if (!bVar13) {
                          (pFVar26->BufferView).Buffer.ByteLength = 0;
                          (pFVar26->BufferView).Buffer.Data = (uchar *)0x0;
                          (pFVar26->BufferView).ByteOffset = 0;
                          (pFVar26->BufferView).ByteLength = 0;
                          (pFVar26->BufferView).ByteStride = 0;
                          pTVar5 = pFVar39->Messages;
                          pFVar20 = FText::FromString(&local_f0,local_3a8);
                          pFVar27 = GLTF::ToString(&local_188,local_418);
                          pFVar21 = FText::FromString(&local_e0,pFVar27);
                          pFVar30 = FText::AsLocalizable_Advanced_LocText
                                              (&local_198,L"InterchangeGLTFExtensionHandler",
                                               L"DracoMeshAttributeAcquisitionFailed",
                                               L"Failed to acquire {0} Attributes from Draco Mesh, for PrimitiveIdx: {1}, in Mesh: {2}"
                                              );
                          pFVar22 = FTextFormat::FTextFormat(&local_d0,pFVar30,Default);
                          pFVar20 = FText::Format<FText,unsigned_int,FText>
                                              (&local_1a8,pFVar22,pFVar21,local_3f4,pFVar20);
                          iVar15 = pTVar5->ArrayNum;
                          if (iVar15 == pTVar5->ArrayMax) {
                            iVar15 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
                          }
                          pTVar5->ArrayNum = iVar15 + 1;
                          pFVar38 = (pTVar5->AllocatorInstance).Data;
                          lVar33 = (longlong)iVar15 * 3 + 1;
                          *(undefined4 *)(pFVar38 + lVar33 * 8 + -8) = 1;
                          FText::FText((FText *)(pFVar38 + lVar33 * 8),pFVar20);
                          if (local_1a8.TextData.Reference != (ITextData *)0x0) {
                            (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
                          }
                          if (local_198.TextData.Reference != (ITextData *)0x0) {
                            (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
                          }
                          if (local_188.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_188.Data.AllocatorInstance.Data);
                          }
                        }
                      }
                    }
                    uVar36 = uVar36 + 1;
                    pFVar39 = local_3f0;
                  } while (uVar36 < 0xe);
                  if (this_00 != (Mesh *)0x0) {
                    (**(code **)this_00->_padding_)(this_00,1);
                  }
                }
                draco::DecoderBuffer::BitDecoder::~BitDecoder(&local_158.bit_decoder_);
                lVar33 = local_3b8;
                this = local_3f0;
                uVar35 = local_3f8;
              }
            }
          }
          else {
            bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<3019139151824945785>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\ExtensionsHandler.cpp"
                                ,0x279,"false");
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar5 = this->Messages;
            pwVar18 = GLTF::ToString(EVar2);
            pFVar20 = FText::FromString(&local_120,pwVar18);
            pFVar21 = FText::AsLocalizable_Advanced_LocText
                                (&local_238,L"InterchangeGLTFExtensionHandler",
                                 L"UnsupportedPrimitiveExtension",
                                 L"Primitive.Extension not supported: {0}");
            pFVar22 = FTextFormat::FTextFormat(&local_c0,pFVar21,Default);
            pFVar20 = FText::Format<FText>(&local_248,pFVar22,pFVar20);
            bVar13 = GIsAutomationTesting == false;
            iVar15 = pTVar5->ArrayNum;
            if (iVar15 == pTVar5->ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
            }
            pTVar5->ArrayNum = iVar15 + 1;
            pFVar38 = (pTVar5->AllocatorInstance).Data;
            lVar37 = (longlong)iVar15 * 3 + 1;
            *(uint *)(pFVar38 + lVar37 * 8 + -8) = (uint)bVar13;
            FText::FText((FText *)(pFVar38 + lVar37 * 8),pFVar20);
            if (local_248.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
            }
            if (local_238.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
            }
          }
          if (local_3e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e8.Data);
          }
        }
        local_3f8 = uVar35 + 1;
        uVar41 = (ulonglong)local_3f8;
        local_3b8 = lVar33 + 1;
        param_1 = local_358;
      } while ((int)local_3f8 < Extensions.ArrayNum);
    }
    CheckExtensions(this,param_1,&local_408);
    DestructItems<FString,int>((FString *)local_408.AllocatorInstance.Data,local_408.ArrayNum);
    if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.AllocatorInstance.Data);
    }
  }
  return;
}

// SetupSamplerExtensions @ 14e658a40

void __thiscall
GLTF::FExtensionsHandler::SetupSamplerExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FSampler *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupSamplerExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  CheckExtensions(this,param_1,&Extensions);
  return;
}

// SetupSceneExtensions @ 14e658f10

void __thiscall
GLTF::FExtensionsHandler::SetupSceneExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FScene *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupSceneExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  CheckExtensions(this,param_1,&Extensions);
  return;
}

// SetupSkinExtensions @ 14e6594f0

void __thiscall
GLTF::FExtensionsHandler::SetupSkinExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FSkinInfo *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupSkinExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  CheckExtensions(this,param_1,&Extensions);
  return;
}

// SetupTextureExtensions @ 14e659c50

void __thiscall
GLTF::FExtensionsHandler::SetupTextureExtensions
          (FExtensionsHandler *this,FJsonObject *param_1,FTexture *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupTextureExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  CheckExtensions(this,param_1,&Extensions);
  return;
}

