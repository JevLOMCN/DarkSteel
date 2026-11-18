// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 51

// StaticClass @ 14e2d0320

UClass * __cdecl UVariant::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVariant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"Variant",
               &Z_Registration_Info_UClass_UVariant.InnerSingleton,StaticRegisterNativesUVariant,
               0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UVariant>,
               InternalVTableHelperCtorCaller<UVariant>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVariant.InnerSingleton;
}

// UVariant @ 14e2d4bc0

UVariant * __thiscall UVariant::UVariant(UVariant *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVariant__6B_;
  (this->Dependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dependencies).ArrayNum = 0;
  (this->Dependencies).ArrayMax = 0;
  FText::FText(&this->DisplayText_DEPRECATED);
  FText::FText(&this->DisplayText);
  (this->ObjectBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectBindings).ArrayNum = 0;
  (this->ObjectBindings).ArrayMax = 0;
  (this->Thumbnail).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  return this;
}

// UVariant @ 14e2d4c20

UVariant * __thiscall UVariant::UVariant(UVariant *this,FObjectInitializer *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVariant__6B_;
  (this->Dependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dependencies).ArrayNum = 0;
  (this->Dependencies).ArrayMax = 0;
  FText::FText(&this->DisplayText_DEPRECATED);
  FText::FText(&this->DisplayText);
  (this->ObjectBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectBindings).ArrayNum = 0;
  (this->ObjectBindings).ArrayMax = 0;
  (this->Thumbnail).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  pFVar1 = FText::FromString(&local_18,L"Variant");
  FText::operator=(&this->DisplayText,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// ~UVariant @ 14e2d5590

void __thiscall UVariant::~UVariant(UVariant *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7UVariant__6B_;
  pFVar1 = (this->ObjectBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->DisplayText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->DisplayText_DEPRECATED).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FVariantDependency,int>
            ((FVariantDependency *)(this->Dependencies).AllocatorInstance.Data,
             (this->Dependencies).ArrayNum);
  pFVar1 = (this->Dependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddBindings @ 14e2d6240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UVariant::AddBindings
          (UVariant *this,TArray<UVariantObjectBinding_*,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  TArray<TObjectPtr<UVariantObjectBinding>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int iVar5;
  UObject *pUVar6;
  UVariant *pUVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  byte bVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  ForElementType<unsigned_int> FVar19;
  ulonglong uVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  ForElementType<FSetElementId> FVar23;
  char cVar24;
  uint uVar25;
  int iVar26;
  ForAnyElementType FVar27;
  longlong lVar28;
  ulonglong uVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  undefined1 auStackY_1d8 [32];
  char local_1a8;
  undefined1 local_1a7 [3];
  int local_1a4;
  UVariant *local_1a0;
  TArray<UVariantObjectBinding_*,TSizedDefaultAllocator<32>_> *local_198;
  FString local_190;
  FString local_180;
  FString local_170;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_160;
  undefined4 local_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  TArray<TObjectPtr<UVariantObjectBinding>,TSizedDefaultAllocator<32>_> *local_148;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  undefined4 local_118;
  int local_114;
  FSparseArrayAllocationInfo local_110;
  FString local_100;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e8;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  this_00 = &local_e8.AllocationFlags;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_2 == -1) {
    param_2 = (this->ObjectBindings).ArrayNum;
  }
  iVar26 = param_1->ArrayNum;
  pTVar1 = &this->ObjectBindings;
  local_180.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)&(this->ObjectBindings).ArrayNum;
  local_1a4 = param_2;
  local_1a0 = this;
  local_198 = param_1;
  local_148 = pTVar1;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,iVar26,&pTVar1->AllocatorInstance,
                      (int *)local_180.Data.AllocatorInstance.Data,&(this->ObjectBindings).ArrayMax)
  ;
  pFVar17 = (pTVar1->AllocatorInstance).Data + (longlong)param_2 * 8;
  memmove(pFVar17 + (longlong)iVar26 * 8,pFVar17,(longlong)(iVar10 - param_2) << 3);
  ConstructItems<TObjectPtr<UVariantObjectBinding>,UVariantObjectBinding_*,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)param_2 * 8,
             (UVariantObjectBinding **)(param_1->AllocatorInstance).Data,iVar26);
  iVar26 = param_1->ArrayNum;
  pFVar17 = (param_1->AllocatorInstance).Data;
  cVar24 = '\0';
  local_1a8 = '\0';
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  FVar27.Data = pFVar17 + (longlong)iVar26 * 8;
  local_e8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_e8.AllocationFlags.NumBits = 0;
  local_e8.AllocationFlags.MaxBits = 0x80;
  local_e8.FirstFreeIndex = -1;
  local_e8.NumFreeIndices = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_190.Data.AllocatorInstance.Data = FVar27.Data;
  do {
    if (param_1->ArrayNum != iVar26) {
      local_1a7[0] = 0;
      `TCheckedPointerIterator<UVariantObjectBinding_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a7);
    }
    FVar18.Data = local_180.Data.AllocatorInstance.Data;
    if (pFVar17 == FVar27.Data) {
      if (cVar24 != '\0') {
        pFVar30 = (param_1->AllocatorInstance).Data;
        iVar26 = param_1->ArrayNum;
        local_98.Elements._16_8_ = 0;
        local_98.Elements._24_8_ = 0;
        local_98.Hash.InlineData[0] = '\0';
        local_98.Hash.InlineData[1] = '\0';
        local_98.Hash.InlineData[2] = '\0';
        local_98.Hash.InlineData[3] = '\0';
        local_98.Hash._padding_ = 0;
        local_98._72_8_ = 0;
        pFVar17 = pFVar30 + (longlong)iVar26 * 8;
        local_98.Elements._0_8_ = 0;
        local_98.Elements._8_8_ = 0;
        local_98.Elements._32_8_ = 0;
        local_98.Elements._40_4_ = 0;
        local_98.Elements._44_4_ = 0x80;
        local_98.Elements._48_4_ = 0xffffffff;
        local_98.Elements._52_4_ = 0;
        local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        while( true ) {
          if (param_1->ArrayNum != iVar26) {
            local_1a8 = '\0';
            `TCheckedPointerIterator<UVariantObjectBinding_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_1a8);
          }
          pUVar7 = local_1a0;
          if (pFVar30 == pFVar17) break;
          FSoftObjectPath::ToString((FSoftObjectPath *)(*(longlong *)pFVar30 + 0x38),&local_100);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                    (&local_98,&local_170,(bool *)&local_100);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          pFVar30 = pFVar30 + 8;
        }
        iVar26 = local_1a4 + -1;
        if (-1 < iVar26) {
          lVar21 = (longlong)iVar26 * 8;
          do {
            if ((*(int *)FVar18.Data <= iVar26) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FSoftObjectPath::ToString
                      ((FSoftObjectPath *)
                       (*(longlong *)((pUVar7->ObjectBindings).AllocatorInstance.Data + lVar21) +
                       0x38),&local_180);
            pwVar22 = L"";
            if (local_180.Data.ArrayNum == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = local_180.Data.ArrayNum + -1;
              pwVar22 = (wchar_t *)local_180.Data.AllocatorInstance.Data;
            }
            uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar22);
            if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
              FVar23 = (ForElementType<FSetElementId>)&local_98.Hash;
              if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar23 = local_98.Hash.SecondaryData;
              }
              iVar10 = *(int *)((longlong)FVar23 + (ulonglong)(local_98.HashSize - 1U & uVar11) * 4)
              ;
              iVar12 = local_180.Data.ArrayNum;
              lVar28 = local_98.Elements._0_8_;
              while (iVar10 != -1) {
                lVar4 = (longlong)iVar10 * 0x18;
                iVar5 = *(int *)(lVar4 + 8 + lVar28);
                if (iVar5 == iVar12) {
                  if (iVar5 < 2) goto LAB_14e2d6a86;
                  iVar12 = FGenericPlatformStricmp::Stricmp
                                     (*(wchar_t **)(lVar4 + lVar28),
                                      (wchar_t *)local_180.Data.AllocatorInstance.Data);
                  bVar9 = iVar12 == 0;
                  lVar28 = local_98.Elements._0_8_;
                  iVar12 = local_180.Data.ArrayNum;
                }
                else {
                  bVar9 = iVar5 + iVar12 == 1;
                }
                if (bVar9) goto LAB_14e2d6a86;
                iVar10 = *(int *)(lVar28 + 0x10 + lVar4);
              }
            }
            iVar10 = -1;
LAB_14e2d6a86:
            if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_180.Data.AllocatorInstance.Data);
            }
            if (iVar10 != -1) {
              if ((*(int *)FVar18.Data <= iVar26) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined8 *)((pUVar7->ObjectBindings).AllocatorInstance.Data + lVar21) = 0;
            }
            lVar21 = lVar21 + -8;
            iVar26 = iVar26 + -1;
            param_1 = local_198;
          } while (-1 < iVar26);
        }
        pTVar1 = local_148;
        uVar11 = local_1a4 + param_1->ArrayNum;
        iVar26 = (pUVar7->ObjectBindings).ArrayNum;
        if ((int)uVar11 < iVar26) {
          lVar21 = (longlong)(int)uVar11 * 8;
          do {
            uVar31 = 0;
            if ((int)uVar11 < *(int *)FVar18.Data) {
              uVar31 = ~uVar11 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FSoftObjectPath::ToString
                      ((FSoftObjectPath *)
                       (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar21) + 0x38),&local_190)
            ;
            pwVar22 = L"";
            if (local_190.Data.ArrayNum == 0) {
              iVar26 = 0;
            }
            else {
              iVar26 = local_190.Data.ArrayNum + -1;
              pwVar22 = (wchar_t *)local_190.Data.AllocatorInstance.Data;
            }
            uVar31 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar26,pwVar22);
            iVar26 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                     FindIndexByHash<FString>(&local_98,uVar31,&local_190);
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
            if (iVar26 != -1) {
              uVar31 = 0;
              if ((int)uVar11 < *(int *)FVar18.Data) {
                uVar31 = ~uVar11 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar21) = 0;
            }
            iVar26 = (pUVar7->ObjectBindings).ArrayNum;
            uVar11 = uVar11 + 1;
            lVar21 = lVar21 + 8;
          } while ((int)uVar11 < iVar26);
        }
        iVar26 = iVar26 + -1;
        if (-1 < iVar26) {
          lVar28 = (longlong)iVar26;
          lVar21 = lVar28 * 8;
          do {
            if ((*(int *)FVar18.Data <= iVar26) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar21) == 0) {
              if ((*(int *)FVar18.Data <= iVar26) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar17 = (pTVar1->AllocatorInstance).Data + lVar28 * 8;
              iVar10 = (*(int *)FVar18.Data - iVar26) + -1;
              if (iVar10 != 0) {
                memmove(pFVar17,pFVar17 + 8,(longlong)iVar10 << 3);
              }
              *(int *)FVar18.Data = *(int *)FVar18.Data + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&pTVar1->AllocatorInstance,*(int *)FVar18.Data,&pTVar1->ArrayMax);
            }
            lVar28 = lVar28 + -1;
            lVar21 = lVar21 + -8;
            iVar26 = iVar26 + -1;
          } while (-1 < iVar26);
        }
        local_98._72_8_ = local_98._72_8_ & 0xffffffff00000000;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
      }
      local_a0 = 0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      TSparseArray<TSparseSetElement<UVariant_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UVariant_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UVariant_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_e8);
      return;
    }
    pUVar6 = *(UObject **)pFVar17;
    if (pUVar6 != (UObject *)0x0) {
      pUVar7 = *(UVariant **)&pUVar6->field_0x20;
      if (pUVar7 != (UVariant *)0x0) {
        pUVar13 = StaticClass();
        iVar10 = (int)pUVar13->_padding_;
        if ((iVar10 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
            &pUVar13->_padding_)) {
          if (pUVar7 == this) {
            local_1a8 = '\x01';
          }
          else {
            uVar11 = ((uint)((ulonglong)pUVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar7 >> 4)) *
                     -0x7a143595;
            uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
            if (local_e8.Data.ArrayNum != local_e8.NumFreeIndices) {
              FVar18.Data = local_b0;
              if (local_a8.Data != (FScriptContainerElement *)0x0) {
                FVar18.Data = local_a8.Data;
              }
              for (iVar10 = *(int *)(FVar18.Data +
                                    (ulonglong)(local_a0 - 1 & (uVar11 >> 0x10 ^ uVar11)) * 4);
                  iVar10 != -1;
                  iVar10 = *(int *)(local_e8.Data.AllocatorInstance.Data +
                                   (longlong)iVar10 * 0x10 + 8)) {
                if (*(UVariant **)(local_e8.Data.AllocatorInstance.Data + (longlong)iVar10 * 0x10)
                    == pUVar7) goto LAB_14e2d6829;
              }
            }
            if (local_e8.NumFreeIndices == 0) {
              iVar10 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10,8,1,(ForAnyElementType *)&local_e8,&local_e8.Data.ArrayNum,
                                  &local_e8.Data.ArrayMax);
              iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,1);
              FVar19 = (ForElementType<unsigned_int>)this_00;
              if (local_e8.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar19 = local_e8.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              bVar16 = (byte)iVar12 & 0x1f;
              if (iVar12 < 0) {
                iVar12 = iVar12 + 0x1f;
                bVar16 = bVar16 - 0x20;
              }
              puVar3 = (uint *)((longlong)FVar19 + (longlong)(iVar12 >> 5) * 4);
              *puVar3 = *puVar3 & ~(1 << (bVar16 & 0x1f));
              iVar12 = local_e8.FirstFreeIndex;
            }
            else {
              local_e8.NumFreeIndices = local_e8.NumFreeIndices + -1;
              iVar12 = *(int *)(local_e8.Data.AllocatorInstance.Data +
                               (longlong)local_e8.FirstFreeIndex * 0x10 + 4);
              iVar10 = local_e8.FirstFreeIndex;
              if (local_e8.NumFreeIndices != 0) {
                *(undefined4 *)(local_e8.Data.AllocatorInstance.Data + (longlong)iVar12 * 0x10) =
                     0xffffffff;
              }
            }
            local_e8.FirstFreeIndex = iVar12;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex(&local_e8,&local_110,iVar10);
            if (local_110.Pointer != (ulonglong *)0x0) {
              *(UVariant **)local_110.Pointer = pUVar7;
              *(undefined4 *)((longlong)local_110.Pointer + 8) = 0xffffffff;
            }
            uVar20 = *(ulonglong *)local_110.Pointer;
            uVar31 = local_e8.Data.ArrayNum - local_e8.NumFreeIndices;
            uVar11 = ((uint)(uVar20 >> 0x14) & 0xffff ^ (uint)(uVar20 >> 4)) * -0x7a143595;
            uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
            uVar11 = uVar11 >> 0x10 ^ uVar11;
            if (uVar31 == 1) {
LAB_14e2d6577:
              if (uVar31 < 4) goto LAB_14e2d65c4;
              uVar20 = (ulonglong)((uVar31 >> 1) + 7) * 2 + 1;
              lVar21 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              local_118 = (undefined4)lVar21;
              uVar25 = 1 << ((byte)lVar21 & 0x1f);
            }
            else {
              if (uVar31 != 0) {
                FVar27.Data = local_b0;
                if (local_a8.Data != (FScriptContainerElement *)0x0) {
                  FVar27.Data = local_a8.Data;
                }
                for (iVar10 = *(int *)(FVar27.Data + (ulonglong)(local_a0 - 1 & uVar11) * 4);
                    iVar10 != -1;
                    iVar10 = *(int *)(local_e8.Data.AllocatorInstance.Data +
                                     (longlong)iVar10 * 0x10 + 8)) {
                  if (*(ulonglong *)(local_e8.Data.AllocatorInstance.Data + (longlong)iVar10 * 0x10)
                      == uVar20) {
                    if (iVar10 != -1) {
                      *(ulonglong *)(local_e8.Data.AllocatorInstance.Data + (longlong)iVar10 * 0x10)
                           = uVar20;
                      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::RemoveAtUninitialized(&local_e8,local_110.Index,1);
                      this = local_1a0;
                      FVar27.Data = local_190.Data.AllocatorInstance.Data;
                      goto LAB_14e2d6829;
                    }
                    break;
                  }
                }
                goto LAB_14e2d6577;
              }
LAB_14e2d65c4:
              uVar25 = 1;
            }
            if (((int)uVar31 < 1) || ((int)uVar25 <= (int)local_a0)) {
              uVar11 = local_a0 - 1 & uVar11;
              *(uint *)((longlong)local_110.Pointer + 0xc) = uVar11;
              FVar27.Data = local_b0;
              if (local_a8.Data != (FScriptContainerElement *)0x0) {
                FVar27.Data = local_a8.Data;
              }
              lVar21 = (longlong)(int)(local_a0 - 1 & uVar11);
              *(undefined4 *)((longlong)local_110.Pointer + 8) =
                   *(undefined4 *)(FVar27.Data + lVar21 * 4);
              *(int *)(FVar27.Data + lVar21 * 4) = local_110.Index;
              this = local_1a0;
              FVar27.Data = local_190.Data.AllocatorInstance.Data;
            }
            else {
              local_a0 = uVar25;
              if (local_a8.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_a8,0,0,4);
              }
              if (uVar25 != 0) {
                uVar11 = uVar25;
                if (uVar25 < 2) {
                  if (local_a8.Data != (FScriptContainerElement *)0x0) {
                    uVar11 = 0;
                    goto LAB_14e2d6610;
                  }
                }
                else {
LAB_14e2d6610:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_a8,0,uVar11,4);
                }
                if (0 < (int)uVar25) {
                  uVar29 = (ulonglong)uVar25;
                  uVar20 = 0;
                  do {
                    FVar27.Data = local_b0;
                    if (local_a8.Data != (FScriptContainerElement *)0x0) {
                      FVar27.Data = local_a8.Data;
                    }
                    uVar14 = uVar20 & (longlong)(int)uVar25 - 1U;
                    uVar20 = uVar20 + 1;
                    *(undefined4 *)(FVar27.Data + uVar14 * 4) = 0xffffffff;
                    uVar29 = uVar29 - 1;
                  } while (uVar29 != 0);
                }
              }
              this = local_1a0;
              FVar27.Data = local_190.Data.AllocatorInstance.Data;
              if (local_a0 != 0) {
                local_170.Data.ArrayMax = 1;
                uVar11 = 0;
                local_170.Data.ArrayNum = 0;
                uStack_154 = 0;
                if (local_e8.AllocationFlags.NumBits != 0) {
                  FVar19 = (ForElementType<unsigned_int>)this_00;
                  if (local_e8.AllocationFlags.AllocatorInstance.SecondaryData !=
                      (ForElementType<unsigned_int>)0x0) {
                    FVar19 = local_e8.AllocationFlags.AllocatorInstance.SecondaryData;
                  }
                  uVar31 = *(uint *)FVar19;
                  local_170.Data.ArrayNum = 0;
                  while (uVar31 == 0) {
                    uVar11 = uVar11 + 0x20;
                    lVar21 = (longlong)local_170.Data.ArrayNum;
                    local_170.Data.ArrayNum = local_170.Data.ArrayNum + 1;
                    uStack_154 = (ulonglong)uVar11 << 0x20;
                    if ((int)(local_e8.AllocationFlags.NumBits + -1 +
                             (local_e8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 <
                        local_170.Data.ArrayNum) {
                      uStack_154 = CONCAT44(uVar11,local_e8.AllocationFlags.NumBits);
                      goto LAB_14e2d6714;
                    }
                    uVar31 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar21 * 4);
                  }
                  local_170.Data.ArrayMax = -uVar31 & uVar31;
                  uVar20 = (ulonglong)(uint)local_170.Data.ArrayMax * 2 + 1;
                  lVar21 = 0x3f;
                  if (uVar20 != 0) {
                    for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                    }
                  }
                  local_114 = (int)lVar21;
                  iVar10 = local_114 + -1 + uVar11;
                  if (local_e8.AllocationFlags.NumBits < iVar10) {
                    iVar10 = local_e8.AllocationFlags.NumBits;
                  }
                  uStack_154._4_4_ = (int)((ulonglong)uStack_154 >> 0x20);
                  uStack_154 = CONCAT44(uStack_154._4_4_,iVar10);
                }
LAB_14e2d6714:
                local_158 = 0xffffffff;
                local_140 = &local_e8;
                local_138._padding_ = CONCAT44(local_170.Data.ArrayMax,local_170.Data.ArrayNum);
                local_138.UnvisitedBitMask = 0xffffffff;
                local_138.CurrentBitIndex = (int)uStack_154;
                local_138.BaseBitIndex = uStack_154._4_4_;
                local_138._28_4_ = uStack_14c;
                pTStack_160 = this_00;
                local_138.Array = this_00;
                if ((int)uStack_154 < local_e8.AllocationFlags.NumBits) {
                  do {
                    pFVar30 = (local_140->Data).AllocatorInstance.Data +
                              (longlong)local_138.CurrentBitIndex * 0x10;
                    uVar11 = ((uint)(*(ulonglong *)pFVar30 >> 0x14) & 0xffff ^
                             (uint)(*(ulonglong *)pFVar30 >> 4)) * -0x7a143595;
                    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                    uVar11 = (uVar11 >> 0x10 ^ uVar11) & local_a0 - 1;
                    *(uint *)(pFVar30 + 0xc) = uVar11;
                    FVar27.Data = local_b0;
                    if (local_a8.Data != (FScriptContainerElement *)0x0) {
                      FVar27.Data = local_a8.Data;
                    }
                    lVar21 = (longlong)(int)(local_a0 - 1 & uVar11);
                    *(undefined4 *)(pFVar30 + 8) = *(undefined4 *)(FVar27.Data + lVar21 * 4);
                    *(int *)(FVar27.Data + lVar21 * 4) = local_138.CurrentBitIndex;
                    local_138.UnvisitedBitMask =
                         local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
                    this = local_1a0;
                    FVar27.Data = local_190.Data.AllocatorInstance.Data;
                  } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
                }
              }
            }
LAB_14e2d6829:
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar6);
            }
            pFVar30 = (pUVar7->ObjectBindings).AllocatorInstance.Data;
            iVar10 = (pUVar7->ObjectBindings).ArrayNum;
            for (pFVar15 = pFVar30; param_1 = local_198, pFVar15 != pFVar30 + (longlong)iVar10 * 8;
                pFVar15 = pFVar15 + 8) {
              if (*(UObject **)pFVar15 == pUVar6) {
                iVar12 = (int)((longlong)pFVar15 - (longlong)pFVar30 >> 3);
                if (iVar12 != -1) {
                  memmove(pFVar30 + (longlong)iVar12 * 8,pFVar30 + (longlong)iVar12 * 8 + 8,
                          (longlong)((iVar10 - iVar12) + -1) << 3);
                  piVar2 = &(pUVar7->ObjectBindings).ArrayNum;
                  *piVar2 = *piVar2 + -1;
                  param_1 = local_198;
                }
                break;
              }
            }
          }
        }
      }
      cVar24 = local_1a8;
      (**(code **)(*(longlong *)pUVar6 + 0x170))(pUVar6,0,this,0x10);
    }
    pFVar17 = pFVar17 + 8;
  } while( true );
}

// AddDependency @ 14e2d7030

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UVariant::AddDependency(UVariant *this,FVariantDependency *param_1)

{
  int *piVar1;
  FVariantDependency *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UVariant *pUVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FText local_38;
  FText local_28;
  
  pUVar6 = (UVariant *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1->Variant);
  if (pUVar6 != (UVariant *)0x0) {
    pUVar7 = StaticClass();
    iVar5 = (int)pUVar7->_padding_;
    if (((iVar5 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar5 * 8)
         == &pUVar7->_padding_)) && (bVar4 = IsValidDependency(this,pUVar6), !bVar4)) {
      if (1 < (byte)LogVariantContent._0_1_) {
        local_28.TextData.Reference = (this->DisplayText).TextData.Reference;
        if (local_28.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_28.TextData.Reference + 8))
                    (local_28.TextData.Reference,local_res10);
        }
        local_28.Flags = (this->DisplayText).Flags;
        FText::ToString(&local_28);
        local_38.TextData.Reference = (pUVar6->DisplayText).TextData.Reference;
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 8))
                    (local_38.TextData.Reference,local_res18);
        }
        local_38.Flags = (pUVar6->DisplayText).Flags;
        FText::ToString(&local_38);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        }
        if (local_28.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
        }
      }
      return -1;
    }
  }
  pFVar2 = (FVariantDependency *)(this->Dependencies).AllocatorInstance.Data;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Dependencies).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = (this->Dependencies).ArrayNum;
  piVar1 = &(this->Dependencies).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&(this->Dependencies).AllocatorInstance,piVar1);
  }
  pFVar8 = (this->Dependencies).AllocatorInstance.Data;
  (this->Dependencies).ArrayNum = iVar5 + 1;
  pFVar8 = pFVar8 + (longlong)iVar5 * 0x58;
  *(undefined8 *)pFVar8 = *(undefined8 *)&(param_1->VariantSet).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(pFVar8 + 8),
             (FSoftObjectPath *)&(param_1->VariantSet).SoftObjectPtr.field_0x8);
  *(undefined8 *)(pFVar8 + 0x28) = *(undefined8 *)&(param_1->Variant).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(pFVar8 + 0x30),
             (FSoftObjectPath *)&(param_1->Variant).SoftObjectPtr.field_0x8);
  pFVar8[0x50] = (FScriptContainerElement)param_1->bEnabled;
  TMulticastDelegate<void___cdecl(UVariant_*),FDefaultDelegateUserPolicy>::Broadcast
            (&OnDependenciesUpdated,this);
  return iVar5;
}

// DeleteDependency @ 14e2daf70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UVariant::DeleteDependency(UVariant *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  undefined1 local_res10 [8];
  FText local_18;
  
  if ((param_1 < 0) || ((this->Dependencies).ArrayNum <= param_1)) {
    if (1 < (byte)LogVariantContent._0_1_) {
      local_18.TextData.Reference = (this->DisplayText).TextData.Reference;
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 8))
                  (local_18.TextData.Reference,local_res10);
      }
      local_18.Flags = (this->DisplayText).Flags;
      FText::ToString(&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
    return;
  }
  uVar4 = 0;
  if (param_1 < (this->Dependencies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  _Dst = (this->Dependencies).AllocatorInstance.Data + (longlong)param_1 * 0x58;
  if (*(void **)(_Dst + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x40));
  }
  if (*(void **)(_Dst + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x18));
  }
  iVar5 = (this->Dependencies).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x58,(longlong)iVar5 * 0x58);
  }
  piVar1 = &(this->Dependencies).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,8,&(this->Dependencies).AllocatorInstance,(this->Dependencies).ArrayNum,
             &(this->Dependencies).ArrayMax);
  TMulticastDelegate<void___cdecl(UVariant_*),FDefaultDelegateUserPolicy>::Broadcast
            (&OnDependenciesUpdated,this);
  return;
}

// GetActor @ 14e2dc280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UVariant::GetActor(UVariant *this,int param_1)

{
  int iVar1;
  AActor *pAVar2;
  UClass *pUVar3;
  
  if ((-1 < param_1) && (param_1 < (this->ObjectBindings).ArrayNum)) {
    pAVar2 = (AActor *)
             UVariantObjectBinding::GetObject
                       (*(UVariantObjectBinding **)
                         ((this->ObjectBindings).AllocatorInstance.Data + (longlong)param_1 * 8));
    if (pAVar2 != (AActor *)0x0) {
      pUVar3 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pAVar2;
      }
    }
  }
  return (AActor *)0x0;
}

// GetBindingByName @ 14e2dc2f0

UVariantObjectBinding * __thiscall UVariant::GetBindingByName(UVariant *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  FName local_res8;
  FString local_28;
  
  bVar6 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pFVar5 = (this->ObjectBindings).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)(this->ObjectBindings).ArrayNum * 8;
  do {
    if (pFVar5 == pFVar1) {
      return (UVariantObjectBinding *)0x0;
    }
    pUVar4 = UVariantObjectBinding::GetObject(*(UVariantObjectBinding **)pFVar5);
    if (pUVar4 == (UObject *)0x0) {
LAB_14e2dc37c:
      bVar7 = false;
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_res8.Number = *(uint *)&pUVar4->field_0x1c;
      bVar6 = true;
      ::FName::ToString(&local_res8,&local_28);
      iVar3 = (param_1->Data).ArrayNum;
      iVar2 = local_28.Data.ArrayNum;
      if (iVar2 == iVar3) {
        if (1 < iVar2) {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_28.Data.AllocatorInstance.Data,
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar7 = iVar3 == 0;
          goto LAB_14e2dc370;
        }
      }
      else {
        bVar7 = iVar2 + iVar3 == 1;
LAB_14e2dc370:
        if (!bVar7) goto LAB_14e2dc37c;
      }
      bVar7 = true;
    }
    if ((bVar6) &&
       (bVar6 = false, local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      return *(UVariantObjectBinding **)pFVar5;
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// GetBindingIndex @ 14e2dc3d0

int __thiscall UVariant::GetBindingIndex(UVariant *this,UVariantObjectBinding *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != (UVariantObjectBinding *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar1 = (this->ObjectBindings).AllocatorInstance.Data;
    for (pFVar2 = pFVar1; pFVar2 != pFVar1 + (longlong)(this->ObjectBindings).ArrayNum * 8;
        pFVar2 = pFVar2 + 8) {
      if (*(UVariantObjectBinding **)pFVar2 == param_1) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
      }
    }
  }
  return -1;
}

// GetBindings @ 14e2dc450

TArray<UVariantObjectBinding_*,TSizedDefaultAllocator<32>_> * __thiscall
UVariant::GetBindings(UVariant *this)

{
  return (TArray<UVariantObjectBinding_*,TSizedDefaultAllocator<32>_> *)&this->ObjectBindings;
}

// GetDependency @ 14e2dcf80

FVariantDependency * __thiscall UVariant::GetDependency(UVariant *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVariantDependency *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Dependencies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVariantDependency *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FVariantDependency *)
         ((this->Dependencies).AllocatorInstance.Data + (longlong)param_1 * 0x58);
}

// GetDependents @ 14e2dd000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UVariant_*,TSizedDefaultAllocator<32>_> * __thiscall
UVariant::GetDependents
          (UVariant *this,TArray<UVariant_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ULevelVariantSets *param_1,bool param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  UVariant *pUVar8;
  UClass *pUVar9;
  TArray<UVariant_*,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  char *pcVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  undefined1 local_res10 [8];
  ULevelVariantSets *local_res18;
  char local_res20;
  undefined1 local_88;
  undefined1 local_87 [7];
  longlong local_80;
  uint local_78;
  uint local_74;
  longlong *local_70;
  FScriptContainerElement *local_68;
  longlong *local_60;
  longlong local_58;
  FScriptContainerElement *local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (ULevelVariantSets *)0x0) {
    local_74 = (param_1->VariantSets).ArrayNum;
    uVar11 = (ulonglong)(int)local_74;
    pFVar15 = (param_1->VariantSets).AllocatorInstance.Data;
    pFVar13 = pFVar15 + uVar11 * 8;
    local_res18 = param_1;
    local_res20 = param_2;
    local_50 = pFVar13;
    while( true ) {
      local_68 = pFVar15;
      if ((local_res18->VariantSets).ArrayNum != (int)uVar11) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UVariantSet_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar15 == pFVar13) break;
      local_58 = *(longlong *)pFVar15;
      if (local_58 != 0) {
        local_78 = *(uint *)(local_58 + 0x58);
        uVar11 = (ulonglong)(int)local_78;
        plVar16 = *(longlong **)(local_58 + 0x50);
        plVar12 = plVar16 + uVar11;
        local_60 = plVar12;
        while( true ) {
          local_70 = plVar16;
          if (*(int *)(local_58 + 0x58) != (int)uVar11) {
            local_88 = 0;
            `TCheckedPointerIterator<UVariant_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_88);
          }
          cVar5 = local_res20;
          pFVar13 = local_50;
          pFVar15 = local_68;
          if (plVar16 == plVar12) break;
          lVar2 = *plVar16;
          local_80 = lVar2;
          if (lVar2 != 0) {
            lVar3 = *(longlong *)(lVar2 + 0x28);
            iVar1 = *(int *)(lVar2 + 0x30);
            pcVar14 = (char *)(lVar3 + 0x50);
            while( true ) {
              if (*(int *)(lVar2 + 0x30) != iVar1) {
                local_87[0] = 0;
                `TCheckedPointerIterator<FVariantDependency,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_87);
              }
              plVar12 = local_60;
              plVar16 = local_70;
              if (pcVar14 + -0x50 == (char *)((longlong)iVar1 * 0x58 + lVar3)) break;
              pUVar8 = (UVariant *)
                       TPersistentObjectPtr<FSoftObjectPath>::Get
                                 ((TPersistentObjectPtr<FSoftObjectPath> *)(pcVar14 + -0x28));
              if (pUVar8 == (UVariant *)0x0) {
LAB_14e2dd15d:
                pUVar8 = (UVariant *)0x0;
              }
              else {
                pUVar9 = StaticClass();
                iVar7 = (int)pUVar9->_padding_;
                if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar7) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar7 * 8)
                    != &pUVar9->_padding_)) goto LAB_14e2dd15d;
              }
              if (((*pcVar14 != '\0') || (cVar5 == '\0')) && (pUVar8 == this)) {
                pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
                if (((pFVar13 <= (FScriptContainerElement *)&local_80) &&
                    ((FScriptContainerElement *)&local_80 <
                     pFVar13 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  pTVar10 = (TArray<UVariant_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                  return pTVar10;
                }
                iVar7 = __return_storage_ptr__->ArrayNum;
                if (iVar7 == __return_storage_ptr__->ArrayMax) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&__return_storage_ptr__->AllocatorInstance,
                                     &__return_storage_ptr__->ArrayMax);
                }
                __return_storage_ptr__->ArrayNum = iVar7 + 1;
                *(longlong *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_80
                ;
              }
              pcVar14 = pcVar14 + 0x58;
            }
          }
          plVar16 = plVar16 + 1;
          uVar11 = (ulonglong)local_78;
        }
      }
      pFVar15 = pFVar15 + 8;
      uVar11 = (ulonglong)local_74;
    }
  }
  return __return_storage_ptr__;
}

// GetDisplayText @ 14e2dd800

FText * __thiscall UVariant::GetDisplayText(UVariant *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->DisplayText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->DisplayText).Flags;
  return __return_storage_ptr__;
}

// GetNumActors @ 14e2ddd00

int __thiscall UVariant::GetNumActors(UVariant *this)

{
  return (this->ObjectBindings).ArrayNum;
}

// GetNumDependencies @ 14e2ddd10

int __thiscall UVariant::GetNumDependencies(UVariant *this)

{
  return (this->Dependencies).ArrayNum;
}

// GetParent @ 14e2de050

UVariantSet * __thiscall UVariant::GetParent(UVariant *this)

{
  int iVar1;
  UVariantSet *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UVariantSet *)this->_padding_;
  if (pUVar2 != (UVariantSet *)0x0) {
    pUVar3 = UVariantSet::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UVariantSet *)0x0;
}

// GetPrivateStaticClass @ 14e2de950

UClass * __cdecl UVariant::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVariant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"Variant",
               &Z_Registration_Info_UClass_UVariant.InnerSingleton,StaticRegisterNativesUVariant,
               0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UVariant>,
               InternalVTableHelperCtorCaller<UVariant>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVariant.InnerSingleton;
}

// GetThumbnail @ 14e2df4a0

UTexture2D * __thiscall UVariant::GetThumbnail(UVariant *this)

{
  return (this->Thumbnail).field0_0x0.DebugPtr;
}

// IsActive @ 14e2e0970

bool __thiscall UVariant::IsActive(UVariant *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar3 = (this->ObjectBindings).ArrayNum;
  if (iVar3 == 0) {
LAB_14e2e09f8:
    bVar7 = false;
  }
  else {
    pFVar9 = (this->ObjectBindings).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->ObjectBindings).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UVariantObjectBinding>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar1) break;
      lVar5 = *(longlong *)pFVar9;
      puVar8 = *(undefined8 **)(lVar5 + 0x70);
      iVar4 = *(int *)(lVar5 + 0x78);
      puVar2 = puVar8 + iVar4;
      while( true ) {
        if (*(int *)(lVar5 + 0x78) != iVar4) {
          `TCheckedPointerIterator<UPropertyValue_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (puVar8 == puVar2) break;
        cVar6 = (**(code **)(*(longlong *)*puVar8 + 0x310))();
        if (cVar6 == '\0') goto LAB_14e2e09f8;
        puVar8 = puVar8 + 1;
      }
      pFVar9 = pFVar9 + 8;
    }
    bVar7 = true;
  }
  return bVar7;
}

// IsValidDependency @ 14e2e1100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UVariant::IsValidDependency(UVariant *this,UVariant *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  bVar2 = FVariantImpl::IsValidDependencyRecursive
                    (this,param_1,
                     (TSet<UVariant_const_*,DefaultKeyFuncs<UVariant_const_*,0>,FDefaultSetAllocator>
                      *)local_68);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return bVar2;
}

// RemoveBindings @ 14e2e1fd0

void __thiscall
UVariant::RemoveBindings
          (UVariant *this,TArray<UVariantObjectBinding_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        `TCheckedPointerIterator<UVariantObjectBinding_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar9 == pFVar2) {
        return;
      }
      pUVar5 = *(UObject **)pFVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      pFVar6 = (this->ObjectBindings).AllocatorInstance.Data;
      iVar4 = (this->ObjectBindings).ArrayNum;
      pFVar8 = pFVar6;
      if (pFVar6 != pFVar6 + (longlong)iVar4 * 8) break;
LAB_14e2e2082:
      pFVar9 = pFVar9 + 8;
    }
    do {
      if (*(UObject **)pFVar8 == pUVar5) {
        iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar6 >> 3);
        if (iVar7 != -1) {
          memmove(pFVar6 + (longlong)iVar7 * 8,pFVar6 + (longlong)iVar7 * 8 + 8,
                  (longlong)((iVar4 - iVar7) + -1) << 3);
          piVar1 = &(this->ObjectBindings).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        goto LAB_14e2e2082;
      }
      pFVar8 = pFVar8 + 8;
    } while (pFVar8 != pFVar6 + (longlong)iVar4 * 8);
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// Serialize @ 14e2e5b70

void __thiscall UVariant::Serialize(UVariant *this,FArchive *param_1)

{
  bool bVar1;
  int iVar2;
  FText *pFVar3;
  FText local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FVariantManagerObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FVariantManagerObjectVersion::GUID);
  if (iVar2 < 2) {
    if ((param_1->field_0x28 & 1) != 0) {
      bVar1 = FText::IsEmpty(&this->DisplayText_DEPRECATED);
      if (!bVar1) {
        FText::operator=(&this->DisplayText,&this->DisplayText_DEPRECATED);
        pFVar3 = FText::FText(&local_18);
        FText::operator=(&this->DisplayText_DEPRECATED,pFVar3);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
          return;
        }
      }
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x170))(param_1,&this->DisplayText);
  }
  return;
}

// Serialize @ 14e2e5c20

void __thiscall UVariant::Serialize(UVariant *this,FStructuredArchiveRecord param_1)

{
  bool bVar1;
  int iVar2;
  FArchiveState *this_00;
  FText *pFVar3;
  FSlotBase local_res10 [3];
  FText local_18;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FVariantManagerObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer(this_00,&FVariantManagerObjectVersion::GUID);
  if (iVar2 < 2) {
    if (this_00->ArIsLoading != 0) {
      bVar1 = FText::IsEmpty(&this->DisplayText_DEPRECATED);
      if (!bVar1) {
        FText::operator=(&this->DisplayText,&this->DisplayText_DEPRECATED);
        pFVar3 = FText::FText(&local_18);
        FText::operator=(&this->DisplayText_DEPRECATED,pFVar3);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
          return;
        }
      }
    }
  }
  else {
    (**(code **)(this_00->_padding_ + 0x170))(this_00,&this->DisplayText);
  }
  return;
}

// SetDependency @ 14e2e5f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UVariant::SetDependency(UVariant *this,int param_1,FVariantDependency *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UVariant *pUVar4;
  UClass *pUVar5;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  FText local_58;
  FText local_48;
  FText local_38;
  
  if ((param_1 < 0) || ((this->Dependencies).ArrayNum <= param_1)) {
    if (1 < (byte)LogVariantContent._0_1_) {
      local_38.TextData.Reference = (this->DisplayText).TextData.Reference;
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 8))
                  (local_38.TextData.Reference,local_res20);
      }
      local_38.Flags = (this->DisplayText).Flags;
      FText::ToString(&local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        return;
      }
    }
  }
  else {
    pUVar4 = (UVariant *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&param_2->Variant);
    if (pUVar4 != (UVariant *)0x0) {
      pUVar5 = StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if (((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar5->_padding_)) && (bVar3 = IsValidDependency(this,pUVar4), !bVar3)) {
        if ((byte)LogVariantContent._0_1_ < 2) {
          return;
        }
        local_48.TextData.Reference = (this->DisplayText).TextData.Reference;
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 8))
                    (local_48.TextData.Reference,local_res10);
        }
        local_48.Flags = (this->DisplayText).Flags;
        FText::ToString(&local_48);
        local_58.TextData.Reference = (pUVar4->DisplayText).TextData.Reference;
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 8))
                    (local_58.TextData.Reference,local_res8);
        }
        local_58.Flags = (pUVar4->DisplayText).Flags;
        FText::ToString(&local_58);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        if (local_48.TextData.Reference == (ITextData *)0x0) {
          return;
        }
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        return;
      }
    }
    if (((this->Dependencies).ArrayNum <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)
              ((this->Dependencies).AllocatorInstance.Data + (longlong)param_1 * 0x58);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              (this_00,(TPersistentObjectPtr<FSoftObjectPath> *)param_2);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              (this_00 + 1,(TPersistentObjectPtr<FSoftObjectPath> *)&param_2->Variant);
    *(bool *)&this_00[2].WeakPtr.ObjectIndex = param_2->bEnabled;
    TMulticastDelegate<void___cdecl(UVariant_*),FDefaultDelegateUserPolicy>::Broadcast
              (&OnDependenciesUpdated,this);
  }
  return;
}

// SetDisplayText @ 14e2e6180

void __thiscall UVariant::SetDisplayText(UVariant *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->DisplayText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    (this->DisplayText).Flags = param_1->Flags;
    return;
  }
  (this->DisplayText).Flags = param_1->Flags;
  return;
}

// SetThumbnailFromCamera @ 14e2e6a20

void __thiscall
UVariant::SetThumbnailFromCamera
          (UVariant *this,UObject *param_1,TTransform<double> *param_2,float param_3,float param_4,
          float param_5)

{
  UTexture2D *this_00;
  
  this_00 = ThumbnailGenerator::GenerateThumbnailFromCamera(param_1,param_2,param_3,param_4,param_5)
  ;
  if (this_00 != (UTexture2D *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->Thumbnail).field0_0x0.DebugPtr = this_00;
    (**(code **)(this_00->_padding_ + 0x170))(this_00,0,this,0);
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this_00,RF_Transient|RF_Standalone);
    TMulticastDelegate<void___cdecl(UVariant_*),FDefaultDelegateUserPolicy>::Broadcast
              (&OnThumbnailUpdated,this);
  }
  return;
}

// SetThumbnailFromEditorViewport @ 14e2e6b10

void __thiscall UVariant::SetThumbnailFromEditorViewport(UVariant *this)

{
  return;
}

// SetThumbnailFromFile @ 14e2e6b30

void __thiscall UVariant::SetThumbnailFromFile(UVariant *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  UTexture2D *this_00;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,param_1);
  this_00 = ThumbnailGenerator::GenerateThumbnailFromFile(pFVar2);
  if (this_00 != (UTexture2D *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->Thumbnail).field0_0x0.DebugPtr = this_00;
    (**(code **)(this_00->_padding_ + 0x170))(this_00,0,this,0);
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this_00,RF_Transient|RF_Standalone);
    TMulticastDelegate<void___cdecl(UVariant_*),FDefaultDelegateUserPolicy>::Broadcast
              (&OnThumbnailUpdated,this);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetThumbnailFromTexture @ 14e2e6c20

void __thiscall UVariant::SetThumbnailFromTexture(UVariant *this,UTexture2D *param_1)

{
  UTexture2D *this_00;
  
  if (param_1 == (UTexture2D *)0x0) {
    (this->Thumbnail).field0_0x0.DebugPtr = (UTexture2D *)0x0;
    TMulticastDelegate<void___cdecl(UVariant_*),FDefaultDelegateUserPolicy>::Broadcast
              (&OnThumbnailUpdated,this);
    return;
  }
  this_00 = ThumbnailGenerator::GenerateThumbnailFromTexture(param_1);
  if (this_00 != (UTexture2D *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->Thumbnail).field0_0x0.DebugPtr = this_00;
    (**(code **)(this_00->_padding_ + 0x170))(this_00,0,this,0);
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this_00,RF_Transient|RF_Standalone);
    TMulticastDelegate<void___cdecl(UVariant_*),FDefaultDelegateUserPolicy>::Broadcast
              (&OnThumbnailUpdated,this);
  }
  return;
}

// SetThumbnailInternal @ 14e2e6d10

void __thiscall UVariant::SetThumbnailInternal(UVariant *this,UTexture2D *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Thumbnail).field0_0x0.DebugPtr = param_1;
  }
  else {
    (this->Thumbnail).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UTexture2D *)0x0) goto LAB_14e2e6d66;
  }
  (**(code **)(param_1->_padding_ + 0x170))(param_1,0,this,0);
  UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_Transient|RF_Standalone);
LAB_14e2e6d66:
  TMulticastDelegate<void___cdecl(UVariant_*),FDefaultDelegateUserPolicy>::Broadcast
            (&OnThumbnailUpdated,this);
  return;
}

// StaticRegisterNativesUVariant @ 14e2e70e0

void __cdecl UVariant::StaticRegisterNativesUVariant(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UVariant_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SwitchOn @ 14e2e7170

void __thiscall UVariant::SwitchOn(UVariant *this)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UVariantObjectBinding *this_00;
  UPackage *pUVar6;
  UPackage *pUVar7;
  UVariant *this_01;
  UClass *pUVar8;
  TPersistentObjectPtr<FSoftObjectPath> *this_02;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  
  pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  pUVar7 = GetTransientPackage();
  if (pUVar6 != pUVar7) {
    pFVar5 = (this->Dependencies).AllocatorInstance.Data;
    iVar3 = (this->Dependencies).ArrayNum;
    this_02 = (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar5 + 0x28);
    while( true ) {
      if ((this->Dependencies).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FVariantDependency,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_02 + -1 == (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar5 + (longlong)iVar3 * 0x58)
         ) break;
      if (((char)this_02[1].WeakPtr.ObjectIndex != '\0') &&
         (this_01 = (UVariant *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_02),
         this_01 != (UVariant *)0x0)) {
        pUVar8 = StaticClass();
        iVar4 = (int)pUVar8->_padding_;
        if ((iVar4 <= *(int *)(this_01->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar8->_padding_)) {
          SwitchOn(this_01);
        }
      }
      this_02 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_02[2].ObjectID;
    }
    pFVar11 = (this->ObjectBindings).AllocatorInstance.Data;
    iVar3 = (this->ObjectBindings).ArrayNum;
    pFVar5 = pFVar11 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->ObjectBindings).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UVariantObjectBinding>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar11 == pFVar5) break;
      this_00 = *(UVariantObjectBinding **)pFVar11;
      pFVar9 = (this_00->CapturedProperties).AllocatorInstance.Data;
      iVar4 = (this_00->CapturedProperties).ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this_00->CapturedProperties).ArrayNum != iVar4) {
          `TCheckedPointerIterator<UPropertyValue_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar9 == pFVar1) break;
        (**(code **)(**(longlong **)pFVar9 + 0x2d0))();
        pFVar9 = pFVar9 + 8;
      }
      pFVar10 = (FName *)(this_00->FunctionCallers).AllocatorInstance.Data;
      iVar4 = (this_00->FunctionCallers).ArrayNum;
      pFVar2 = pFVar10 + iVar4;
      while( true ) {
        if ((this_00->FunctionCallers).ArrayNum != iVar4) {
          `TCheckedPointerIterator<FFunctionCaller,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar10 == pFVar2) break;
        UVariantObjectBinding::ExecuteTargetFunction(this_00,*pFVar10);
        pFVar10 = pFVar10 + 1;
      }
      pFVar11 = pFVar11 + 8;
    }
  }
  return;
}

// execAddDependency @ 14e2e7e30

void __cdecl UVariant::execAddDependency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FVariantDependency *pFVar3;
  undefined1 local_68 [24];
  FUtf8String local_50;
  undefined1 local_40 [24];
  FUtf8String local_28;
  bool local_18;
  
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_68._0_8_ = 0;
  local_68._16_8_ = 0;
  local_68._8_8_ = 0;
  FUtf8String::Reset(&local_50,0);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_40._0_8_ = 0;
  local_40._16_8_ = 0;
  local_40._8_8_ = 0;
  FUtf8String::Reset(&local_28,0);
  local_18 = true;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  pFVar3 = (FVariantDependency *)local_68;
  if ((FVariantDependency *)param_2->MostRecentPropertyAddress != (FVariantDependency *)0x0) {
    pFVar3 = (FVariantDependency *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = AddDependency((UVariant *)param_1,pFVar3);
  *(int *)param_3 = iVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// execDeleteDependency @ 14e2e7f40

void __cdecl UVariant::execDeleteDependency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DeleteDependency((UVariant *)param_1,local_res10[0]);
  return;
}

// execGetActor @ 14e2e7fd0

void __cdecl UVariant::execGetActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((-1 < local_res8[0]) && (local_res8[0] < *(int *)&param_1[2].field_0x10)) {
    pUVar3 = UVariantObjectBinding::GetObject
                       (*(UVariantObjectBinding **)
                         (*(longlong *)&param_1[2].field_0x8 + (longlong)local_res8[0] * 8));
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        *(UObject **)param_3 = pUVar3;
        return;
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetDependency @ 14e2e80c0

void __cdecl UVariant::execGetDependency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar5;
  uint uVar6;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res8[0];
  uVar6 = 0;
  if ((int)local_res8[0] < *(int *)&param_1[1].field_0x8) {
    uVar6 = ~local_res8[0] >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = (TPersistentObjectPtr<FSoftObjectPath> *)(lVar4 * 0x58 + *(longlong *)(param_1 + 1));
  TPersistentObjectPtr<FSoftObjectPath>::operator=(param_3,pTVar5);
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_3 + 0x28),pTVar5 + 1);
  *(char *)((longlong)param_3 + 0x50) = (char)pTVar5[2].WeakPtr.ObjectIndex;
  return;
}

// execGetDependents @ 14e2e81c0

void __cdecl UVariant::execGetDependents(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  char *pcVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 local_res10 [8];
  ForAnyElementType *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  int local_a0 [2];
  longlong local_98;
  uint local_90;
  uint local_8c;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  
  local_88 = 0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_a0[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  bVar16 = local_a0[0] == 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_88;
  if (local_88 != 0) {
    local_8c = *(uint *)(local_88 + 0x38);
    uVar10 = (ulonglong)(int)local_8c;
    plVar14 = *(longlong **)(local_88 + 0x30);
    plVar12 = plVar14 + uVar10;
    local_60 = plVar12;
    while( true ) {
      local_78 = plVar14;
      if (*(int *)(local_58 + 0x38) != (int)uVar10) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UVariantSet_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      param_3 = local_res18;
      if (plVar14 == plVar12) break;
      local_68 = *plVar14;
      if (local_68 != 0) {
        local_90 = *(uint *)(local_68 + 0x58);
        uVar10 = (ulonglong)(int)local_90;
        plVar15 = *(longlong **)(local_68 + 0x50);
        plVar11 = plVar15 + uVar10;
        local_70 = plVar11;
        while( true ) {
          local_80 = plVar15;
          if (*(int *)(local_68 + 0x58) != (int)uVar10) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<UVariant_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          plVar12 = local_60;
          plVar14 = local_78;
          if (plVar15 == plVar11) break;
          lVar3 = *plVar15;
          local_98 = lVar3;
          if (lVar3 != 0) {
            lVar4 = *(longlong *)(lVar3 + 0x28);
            iVar1 = *(int *)(lVar3 + 0x30);
            pcVar13 = (char *)(lVar4 + 0x50);
            while( true ) {
              if (*(int *)(lVar3 + 0x30) != iVar1) {
                local_b8[0] = 0;
                `TCheckedPointerIterator<FVariantDependency,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_b8);
              }
              plVar11 = local_70;
              plVar15 = local_80;
              if (pcVar13 + -0x50 == (char *)((longlong)iVar1 * 0x58 + lVar4)) break;
              pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                 ((TPersistentObjectPtr<FSoftObjectPath> *)(pcVar13 + -0x28));
              if (pUVar8 == (UObject *)0x0) {
LAB_14e2e83a4:
                pUVar8 = (UObject *)0x0;
              }
              else {
                pUVar9 = StaticClass();
                iVar7 = (int)pUVar9->_padding_;
                if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar7) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar7 * 8)
                    != &pUVar9->_padding_)) goto LAB_14e2e83a4;
              }
              if (((*pcVar13 != '\0') || (bVar16)) && (pUVar8 == param_1)) {
                if (((local_b0.Data <= (FScriptContainerElement *)&local_98) &&
                    ((FScriptContainerElement *)&local_98 <
                     local_b0.Data + (longlong)local_a8._4_4_ * 8)) &&
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
                iVar7 = (int)local_a8;
                if ((int)local_a8 == local_a8._4_4_) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_b0,(int *)((longlong)&local_a8 + 4));
                }
                local_a8 = CONCAT44(local_a8._4_4_,iVar7 + 1);
                *(longlong *)(local_b0.Data + (longlong)iVar7 * 8) = local_98;
              }
              pcVar13 = pcVar13 + 0x58;
            }
          }
          plVar15 = plVar15 + 1;
          uVar10 = (ulonglong)local_90;
        }
      }
      plVar14 = plVar14 + 1;
      uVar10 = (ulonglong)local_8c;
    }
  }
  if (param_3 != &local_b0) {
    if (((ForAnyElementType *)param_3)->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(((ForAnyElementType *)param_3)->Data);
    }
    ((ForAnyElementType *)param_3)->Data = local_b0.Data;
    *(int *)&((ForAnyElementType *)((longlong)param_3 + 8))->Data = (int)local_a8;
    *(int *)((longlong)&((ForAnyElementType *)((longlong)param_3 + 8))->Data + 4) = local_a8._4_4_;
    local_a8 = 0;
    local_b0.Data = (FScriptContainerElement *)0x0;
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  return;
}

// execGetDisplayText @ 14e2e8530

void __cdecl UVariant::execGetDisplayText(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18.TextData.Reference = *(ITextData **)&param_1[1].field_0x20;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)(param_1 + 2);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetNumActors @ 14e2e8700

void __cdecl UVariant::execGetNumActors(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[2].field_0x10;
  return;
}

// execGetNumDependencies @ 14e2e8730

void __cdecl UVariant::execGetNumDependencies(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x8;
  return;
}

// execGetParent @ 14e2e8880

void __cdecl UVariant::execGetParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1->field_0x20;
  if (lVar2 != 0) {
    pUVar3 = UVariantSet::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(longlong *)param_3 = lVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetThumbnail @ 14e2e8a00

void __cdecl UVariant::execGetThumbnail(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x18;
  return;
}

// execIsActive @ 14e2e8f70

void __cdecl UVariant::execIsActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = *(int *)&param_1[2].field_0x10;
  if (iVar3 == 0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  plVar8 = *(longlong **)&param_1[2].field_0x8;
  plVar1 = plVar8 + iVar3;
  while( true ) {
    if (*(int *)&param_1[2].field_0x10 != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UVariantObjectBinding>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar8 == plVar1) break;
    lVar5 = *plVar8;
    puVar7 = *(undefined8 **)(lVar5 + 0x70);
    iVar4 = *(int *)(lVar5 + 0x78);
    puVar2 = puVar7 + iVar4;
    while( true ) {
      if (*(int *)(lVar5 + 0x78) != iVar4) {
        `TCheckedPointerIterator<UPropertyValue_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar7 == puVar2) break;
      cVar6 = (**(code **)(*(longlong *)*puVar7 + 0x310))();
      if (cVar6 == '\0') {
        *(undefined1 *)param_3 = 0;
        return;
      }
      puVar7 = puVar7 + 1;
    }
    plVar8 = plVar8 + 1;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetDependency @ 14e2e90f0

void __cdecl UVariant::execSetDependency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVariantDependency *pFVar2;
  int local_res10 [2];
  undefined1 local_68 [24];
  FUtf8String local_50;
  undefined1 local_40 [24];
  FUtf8String local_28;
  bool local_18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_68._0_8_ = 0;
  local_68._16_8_ = 0;
  local_68._8_8_ = 0;
  FUtf8String::Reset(&local_50,0);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_40._0_8_ = 0;
  local_40._16_8_ = 0;
  local_40._8_8_ = 0;
  FUtf8String::Reset(&local_28,0);
  local_18 = true;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  pFVar2 = (FVariantDependency *)local_68;
  if ((FVariantDependency *)param_2->MostRecentPropertyAddress != (FVariantDependency *)0x0) {
    pFVar2 = (FVariantDependency *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDependency((UVariant *)param_1,local_res10[0],pFVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetDisplayText @ 14e2e9240

void __cdecl UVariant::execSetDisplayText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDisplayText((UVariant *)param_1,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetThumbnailFromCamera @ 14e2e9430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UVariant::execSetThumbnailFromCamera(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UTexture2D *this;
  TTransform<double> *pTVar14;
  undefined1 auStackY_d8 [32];
  float local_a8;
  float local_a4;
  float local_a0 [2];
  UObject *local_98 [2];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_98[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_88.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_88.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_88.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_88.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_88.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_88.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_88.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_88.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_88.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_88.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_a0[0] = 0.0;
  pTVar14 = &local_88;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar14 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  local_a4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_a8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = ThumbnailGenerator::GenerateThumbnailFromCamera
                   (local_98[0],pTVar14,local_a0[0],local_a4,local_a8);
  if (this != (UTexture2D *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UTexture2D **)&param_1[2].field_0x18 = this;
    (**(code **)(this->_padding_ + 0x170))(this,0,param_1,0);
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this,RF_Transient|RF_Standalone);
    TMulticastDelegate<void___cdecl(UVariant_*),FDefaultDelegateUserPolicy>::Broadcast
              (&OnThumbnailUpdated,(UVariant *)param_1);
  }
  return;
}

// execSetThumbnailFromEditorViewport @ 14e2e98b0

void __cdecl
UVariant::execSetThumbnailFromEditorViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetThumbnailFromFile @ 14e2e98f0

void __cdecl UVariant::execSetThumbnailFromFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  FString *pFVar2;
  UTexture2D *this;
  longlong lVar3;
  FString local_38;
  void *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_20;
  local_38.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_38,(int)local_20,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  pFVar2 = ::FString::FString(&local_18,&local_38);
  this = ThumbnailGenerator::GenerateThumbnailFromFile(pFVar2);
  if (this != (UTexture2D *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UTexture2D **)&param_1[2].field_0x18 = this;
    (**(code **)(this->_padding_ + 0x170))(this,0,param_1,0);
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this,RF_Transient|RF_Standalone);
    TMulticastDelegate<void___cdecl(UVariant_*),FDefaultDelegateUserPolicy>::Broadcast
              (&OnThumbnailUpdated,(UVariant *)param_1);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetThumbnailFromTexture @ 14e2e9b90

void __cdecl UVariant::execSetThumbnailFromTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture2D *this;
  UTexture2D *local_res10 [3];
  
  local_res10[0] = (UTexture2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (UTexture2D *)0x0) {
    *(undefined8 *)&param_1[2].field_0x18 = 0;
  }
  else {
    this = ThumbnailGenerator::GenerateThumbnailFromTexture(local_res10[0]);
    if (this == (UTexture2D *)0x0) {
      return;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UTexture2D **)&param_1[2].field_0x18 = this;
    (**(code **)(this->_padding_ + 0x170))(this,0,param_1,0);
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this,RF_Transient|RF_Standalone);
  }
  TMulticastDelegate<void___cdecl(UVariant_*),FDefaultDelegateUserPolicy>::Broadcast
            (&OnThumbnailUpdated,(UVariant *)param_1);
  return;
}

// execSwitchOn @ 14e2e9d20

void __cdecl UVariant::execSwitchOn(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SwitchOn((UVariant *)param_1);
  return;
}

